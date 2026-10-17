// RVA 0xe6b990 | Placemaker.Graphs.Graph$$BinaryTreeSearchVoxel
// PDB: Graph_BinaryTreeSearchVoxel_m2C96187B15BB3902E10EB13D8D0CD126668C54AC
// Body: [[10e6b990, 10e6ba4d]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 1066f730 Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a43c00 Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E

int __cdecl
Graph_BinaryTreeSearchVoxel_m2C96187B15BB3902E10EB13D8D0CD126668C54AC
          (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *param_1,
          Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *param_2,int param_3,
          MethodInfo *param_4)

{
  int iVar1;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar2;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_1c;
  undefined8 local_10;

  iVar6 = 0;
  if (param_2 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
    iVar1 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                      (param_2,(MethodInfo *)0x0);
    uVar7 = 0;
    iVar1 = iVar1 + -1;
    iVar5 = 0;
    if (-1 < iVar1) {
      do {
        uVar7 = (iVar1 + iVar6) / 2;
        pTVar2 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                           (param_2,uVar7,(MethodInfo *)0x0);
        if (pTVar2 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_10e6ba49;
        pTVar2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar2,
                            (MethodInfo *)0x0);
        if (pTVar2 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_10e6ba49;
        pVVar3 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2
                           (&local_1c,pTVar2,(MethodInfo *)0x0);
        local_10._0_4_ = pVVar3->___x_2;
        local_10._4_4_ = pVVar3->___y_3;
        iVar5 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E
                          ((float)local_10._4_4_,(MethodInfo *)0x0);
        if (param_3 == iVar5) {
          return uVar7;
        }
        if (param_3 < iVar5) {
          iVar1 = uVar7 - 1;
        }
        else {
          iVar6 = uVar7 + 1;
        }
      } while (iVar6 <= iVar1);
    }
    uVar4 = uVar7 + 1;
    if (param_3 <= iVar5) {
      uVar4 = uVar7;
    }
    return ~uVar4;
  }
LAB_10e6ba49:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
