// RVA 0xa0afd0 | Placemaker.ShadowBaker$$SetAngle
// PDB: ShadowBaker_SetAngle_m5C36D66DB1DE079F87F08B9BB716C990FCEEB918
// Body: [[10a0afd0, 10a0b00e]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103f8b10 WorldMaster_SetDirty_m9B0AB2549CDB37363A5C658018F0D6BD5A58FB54
// 10a36ea0 Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32

void __cdecl
ShadowBaker_SetAngle_m5C36D66DB1DE079F87F08B9BB716C990FCEEB918
          (ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427 *param_1,
          Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 param_2,MethodInfo *param_3)

{
  (param_1->___target_21).___x_0 = param_2.___x_0;
  (param_1->___target_21).___y_1 = param_2.___y_1;
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
