// RVA 0xa0ab60 | Placemaker.ShadowBaker$$OnBuilt
// PDB: ShadowBaker_OnBuilt_m7FB7CD582AB40590729069B855C8DB6BF751B2D6
// Body: [[10a0ab60, 10a0ab90]]
// Direct callees:

void __cdecl
ShadowBaker_OnBuilt_m7FB7CD582AB40590729069B855C8DB6BF751B2D6
          (ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427 *param_1,MethodInfo *param_2)

{
  float fVar1;

  fVar1 = (param_1->___target_21).___y_1;
  (param_1->___current_20).___x_0 = (param_1->___target_21).___x_0;
  (param_1->___current_20).___y_1 = fVar1;
  param_1->___angleDirty_29 = true;
  param_1->___snap_30 = true;
  param_1->___framingDirty_28 = true;
  param_1->___shouldBake_31 = true;
  return;
}
