#ifndef GUARD_EVOLUTION_SCENE_H
#define GUARD_EVOLUTION_SCENE_H

#include "global.h"

void BeginEvolutionScene(struct Pokemon* mon, u16 speciesToEvolve, u8, u8 partyID);
void EvolutionScene(struct Pokemon* mon, u16 speciesToEvolve, u8, u8 partyID);
void TradeEvolutionScene(struct Pokemon* mon, u16 speciesToEvolve, u8 preEvoSpriteID, u8 partyID);

extern void (*gCB2_AfterEvolution)(void);
void sub_80D0474(void);

#endif // GUARD_EVOLUTION_SCENE_H
