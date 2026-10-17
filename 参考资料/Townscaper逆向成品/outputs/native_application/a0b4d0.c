// RVA 0xa0b4d0 | Placemaker.Props.ShiftingMesh$$System.IComparable<Placemaker.Props.ShiftingMesh>.CompareTo
// PDB: ShiftingMesh_System_IComparableU3CPlacemaker_Props_ShiftingMeshU3E_CompareTo_m0544B1A9BB9C9CE6B8DEF228839BF76185CEF9EB
// Body: [[10a0b4d0, 10a0b54a]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10c10d10 Single_CompareTo_m80B5B5A70A2343C3A8673F35635EBED4458109B4

int __cdecl
ShiftingMesh_System_IComparableU3CPlacemaker_Props_ShiftingMeshU3E_CompareTo_m0544B1A9BB9C9CE6B8DEF228839BF76185CEF9EB
          (ShiftingMesh_tDEA9198B2C426A4848BBFBFF2FAA687677A20ECF *param_1,
          ShiftingMesh_tDEA9198B2C426A4848BBFBFF2FAA687677A20ECF *param_2,MethodInfo *param_3)

{
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar1;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar2;
  int iVar3;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_1c;
  undefined8 local_10;
  float local_8;

  pTVar1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                     ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1,
                      (MethodInfo *)0x0);
  if (pTVar1 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
    pVVar2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                       (&local_1c,pTVar1,(MethodInfo *)0x0);
    local_10._0_4_ = pVVar2->___x_2;
    local_10._4_4_ = pVVar2->___y_3;
    local_8 = pVVar2->___z_4;
    if (param_2 != (ShiftingMesh_tDEA9198B2C426A4848BBFBFF2FAA687677A20ECF *)0x0) {
      pTVar1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                          (MethodInfo *)0x0);
      if (pTVar1 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
        pVVar2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                           (&local_1c,pTVar1,(MethodInfo *)0x0);
        iVar3 = Single_CompareTo_m80B5B5A70A2343C3A8673F35635EBED4458109B4
                          ((float *)&local_10,pVVar2->___x_2,(MethodInfo *)0x0);
        return iVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
