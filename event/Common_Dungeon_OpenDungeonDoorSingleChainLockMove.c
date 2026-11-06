-------- EventFlow: Common_Dungeon_OpenDungeonDoorSingleChainLockMove --------

void MoveToPlusZ() {

    call Common_Dungeon_OpenDungeonDoorSingleMove.PreMoveCommon()


    call Common_Dungeon_OpenDungeonDoorSingleMove.UnlockMoveTo({'PreOpenPos': 'PreOpenPos', 'PostOpenPos': 'PostOpenPos', 'LastPos': 'LastPos', 'Wait': 8})

}
