// RVA 0xa0b020 | Placemaker.ShadowBaker$$SetX
// PDB: ShadowBaker_SetX_m53159ACC756F5463D7767555210A64434148D1B3
// Body: [[10a0b020, 10a0b05c]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103f8b10 WorldMaster_SetDirty_m9B0AB2549CDB37363A5C658018F0D6BD5A58FB54
// 10a36ea0 Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32

void __cdecl
ShadowBaker_SetX_m53159ACC756F5463D7767555210A64434148D1B3
          (ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427 *param_1,float param_2,
          MethodInfo *param_3)

{
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar1;

  pWVar1 = param_1->___master_4;
  (param_1->___target_21).___x_0 = param_2;
  param_1->___angleDirty_29 = true;
  if (pWVar1 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) {
    WorldMaster_SetDirty_m9B0AB2549CDB37363A5C658018F0D6BD5A58FB54(pWVar1,(MethodInfo *)0x0);
    Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
              ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,true,(MethodInfo *)0x0
              );
    param_1->___shouldBake_31 = true;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
