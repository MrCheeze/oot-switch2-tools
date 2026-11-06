-------- EventFlow: Npc_Hylia_024 --------

void Talk() {
    Event0:

    call GatheringTokenGold.FinishTalk_SkullDad()

}

void Near() {
    Event1:

    call GatheringTokenGold.FinishNear_SkullDad()

}

void Completed_Near() {
    goto Event1
}

void Completed_Talk() {
    goto Event0
}
