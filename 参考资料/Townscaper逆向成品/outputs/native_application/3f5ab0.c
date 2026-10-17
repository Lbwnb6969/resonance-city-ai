// RVA 0x3f5ab0 | Placemaker.Props.WindVane$$Placemaker.Props.IPropModifier.Apply
// PDB: WindVane_Placemaker_Props_IPropModifier_Apply_m229B1828CE54B0BF3220921BF3417F11F4310F94
// Body: [[103f5ab0, 103f5b35]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1065f5a0 Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3
// 1065fe60 Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702
// 10670140 Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4

void __cdecl
WindVane_Placemaker_Props_IPropModifier_Apply_m229B1828CE54B0BF3220921BF3417F11F4310F94
          (WindVane_t958100BE785D759388B6D8335820E1DA6B4D8FD2 *param_1,
          WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *param_2,
          Random_tAA667D9E4475C884ADEB5B16274B7D4C4E90CC12 *param_3,
          PropModifierStruct_tEA20DD1E5AC1C0D4BBC7D9B440411A7A5CE1CF53 param_4,MethodInfo *param_5)

{
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar1;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *pQVar2;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 local_14;

  pTVar1 = param_1->___compass_4;
  pQVar2 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702
                     (&local_14,(MethodInfo *)0x0);
  if (pTVar1 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
    Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4
              (pTVar1,*pQVar2,(MethodInfo *)0x0);
    pTVar1 = param_1->___rotator_5;
    pQVar2 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3
                       (&local_14,0.0,23.5,0.0,(MethodInfo *)0x0);
    if (pTVar1 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4
                (pTVar1,*pQVar2,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
