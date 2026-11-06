import struct, zbic # https://github.com/kinnay/zbic

data = open("main", "rb").read()
assert data[:4] == b"NSO0"

seg_hdr = [0x10, 0x20, 0x30]      # file_off, mem_off, decomp_size
comp_off = [0x60, 0x64, 0x68]     # compressed sizes
names = ["text", "rodata", "data"]

segs = []
for i, n in enumerate(names):
    file_off, mem_off, dsize = struct.unpack_from("<III", data, seg_hdr[i])
    csize = struct.unpack_from("<I", data, comp_off[i])[0]
    blob = data[file_off:file_off + csize]
    out = zbic.decompress(blob)          # blob includes the ZBIC magic
    print(f"{n}: {csize:#x} -> {len(out):#x} (header says {dsize:#x})")
    assert len(out) == dsize
    segs.append(out)
    #open(f"main.{n}.bin", "wb").write(out)

hdr = bytearray(data[:0x100])
flags = struct.unpack_from("<I", hdr, 0xC)[0]
struct.pack_into("<I", hdr, 0xC, flags & ~0x7)   # clear compressed bits, keep hash-check bits

off = 0x100
for i, s in enumerate(segs):
    struct.pack_into("<I", hdr, seg_hdr[i], off)           # new file offset
    struct.pack_into("<I", hdr, comp_off[i], len(s))       # "compressed" size = raw size
    off += len(s)

open("main_uncompressed", "wb").write(bytes(hdr) + b"".join(segs))
