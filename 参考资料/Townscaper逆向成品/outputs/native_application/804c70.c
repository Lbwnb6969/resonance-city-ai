// RVA 0x804c70 | Placemaker.Props.PropPropeller$$Update
// PDB: PropPropeller_Update_m8B060ED6725D394048CF9AE9025EF3C95C69CB58
// Body: [[10804c70, 10804d07]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1065f5a0 Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3
// 1066d9a0 Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844
// 1066ff60 Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
PropPropeller_Update_m8B060ED6725D394048CF9AE9025EF3C95C69CB58
          (PropPropeller_t7EE18E92A76ECB9800732906E4117BDA2ACF49D5 *param_1,MethodInfo *param_2)

{
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar1;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *pQVar2;
  float fVar3;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 local_14;

  pTVar1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                      (MethodInfo *)0x0);
  fVar3 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844((MethodInfo *)0x0);
  pQVar2 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3
                     (&local_14,0.0,
                      (float)(int)((uint)(param_1->___forward_4 != false) * 2 + -1) * fVar3 *
                      ___real_437a0000 + ___real_41700000,0.0,(MethodInfo *)0x0);
  if (pTVar1 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
    Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C
              (pTVar1,*pQVar2,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
