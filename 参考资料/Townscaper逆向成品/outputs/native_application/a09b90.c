// RVA 0xa09b90 | Placemaker.ShadowBaker$$Load
// PDB: ShadowBaker_Load_mB4E192673934C8BE22F0DB035A2358E964247089
// Body: [[10a09b90, 10a09c23]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8380 OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
// 10a36ea0 Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
ShadowBaker_Load_mB4E192673934C8BE22F0DB035A2358E964247089
          (ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427 *param_1,
          SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *param_2,MethodInfo *param_3)

{
  float fVar1;

  if (param_2 != (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)0x0) {
    fVar1 = (float)(param_2->___sun_3).___r_1 * ___real_3b808081;
    (param_1->___current_20).___x_0 = fVar1;
    (param_1->___target_21).___x_0 = fVar1;
    fVar1 = (float)(param_2->___sun_3).___h_0 * ___real_3b808081;
    (param_1->___current_20).___y_1 = fVar1;
    (param_1->___target_21).___y_1 = fVar1;
    param_1->___lamps_33 = 0.0;
    param_1->___framingDirty_28 = true;
    param_1->___angleDirty_29 = true;
    Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
              ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,true,(MethodInfo *)0x0
              );
    if ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1->___cam_7 !=
        (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)0x0) {
      Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
                ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1->___cam_7,true,
                 (MethodInfo *)0x0);
      if ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
          param_1->___onNewSunAngle_32 !=
          (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
        OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
                  ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                   param_1->___onNewSunAngle_32,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
