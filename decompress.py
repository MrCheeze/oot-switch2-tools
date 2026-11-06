import zstandard as z, struct, sys, glob, os

input_folder = 'C:\\Users\\Matthew\\Documents\\OoT-Switch2\\romfs'
output_folder = 'C:\\Users\\Matthew\\Documents\\OoT-Switch2\\romfs-decompressed'

def load_dicts(pack_path):
    sarc = z.ZstdDecompressor().decompress(open(pack_path,'rb').read(), max_output_size=1<<28)
    e = '<' if sarc[6:8] == b'\xff\xfe' else '>'
    data_off = struct.unpack(e+'I', sarc[0xC:0x10])[0]
    cnt = struct.unpack(e+'H', sarc[0x1A:0x1C])[0]
    nodes = 0x14 + 12
    dicts = {}
    for i in range(cnt):
        _, _, s, en = struct.unpack(e+'IIII', sarc[nodes+i*16:nodes+i*16+16])
        d = z.ZstdCompressionDict(sarc[data_off+s:data_off+en])
        dicts[d.dict_id()] = d
    return dicts

dicts = load_dicts(input_folder + '/Pack/ZsDic.pack.zs')

def decompress(path_in, path_out):
    data = open(path_in,'rb').read()
    did = z.get_frame_parameters(data).dict_id
    d = z.ZstdDecompressor(dict_data=dicts[did]) if did else z.ZstdDecompressor()
    os.makedirs(os.path.dirname(path_out), exist_ok=True)
    open(path_out,'wb').write(d.decompress(data))

for f in glob.glob(input_folder + "/**/*.zs", recursive=True):
    assert input_folder in f
    print(f.replace(input_folder, "", 1))
    decompress(f, f.replace(input_folder, output_folder, 1)[:-3])
