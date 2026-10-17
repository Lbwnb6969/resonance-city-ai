// RVA 0xa0aef0 | Placemaker.ShadowBaker$$RotateAngle
// PDB: ShadowBaker_RotateAngle_m5FBE993216995B5D55267C98361B193FD06588EE
// Body: [[10a0aef0, 10a0af83]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10195ff0 _CIfmod
// 103f8b10 WorldMaster_SetDirty_m9B0AB2549CDB37363A5C658018F0D6BD5A58FB54
// 10a36ea0 Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
// 10a43ab0 Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C

void __cdecl
ShadowBaker_RotateAngle_m5FBE993216995B5D55267C98361B193FD06588EE
          (ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427 *param_1,
          Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 param_2,MethodInfo *param_3)

{
  float10 extraout_ST0;
  float fVar1;

  fVar1 = param_2.___y_1 + (param_1->___target_21).___y_1;
  (param_1->___target_21).___x_0 = param_2.___x_0 + (param_1->___target_21).___x_0;
  (param_1->___target_21).___y_1 = fVar1;
  fVar1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(fVar1,(MethodInfo *)0x0);
  (param_1->___target_21).___y_1 = fVar1;
  _CIfmod();
  (param_1->___target_21).___x_0 = (float)extraout_ST0;
  param_1->___angleDirty_29 = true;
  if (param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) {
    WorldMaster_SetDirty_m9B0AB2549CDB37363A5C658018F0D6BD5A58FB54
              (param_1->___master_4,(MethodInfo *)0x0);
    Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
              ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,true,(MethodInfo *)0x0
              );
    param_1->___shouldBake_31 = true;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
