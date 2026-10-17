// RVA 0xe6b8b0 | Placemaker.Graphs.Graph$$BinaryTreeSearchSquare
// PDB: Graph_BinaryTreeSearchSquare_m35DE143B3284AED2665B2799BD3ADE703A885532
// Body: [[10e6b8b0, 10e6b986]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F

int __cdecl
Graph_BinaryTreeSearchSquare_m35DE143B3284AED2665B2799BD3ADE703A885532
          (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *param_1,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_2,MethodInfo *param_3)

{
  float fVar1;
  int iVar2;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar3;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_10;

  if (param_1->___squares_8 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
    iVar2 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                      (param_1->___squares_8,(MethodInfo *)0x0);
    iVar2 = iVar2 + -1;
    iVar7 = 0;
    if (iVar2 < 0) {
      return ~(uint)(0.0 < param_2.___x_2);
    }
    while( true ) {
      uVar8 = (iVar2 + iVar7) / 2;
      if (((param_1->___squares_8 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) ||
          (pTVar3 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                              (param_1->___squares_8,uVar8,(MethodInfo *)0x0),
          pTVar3 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) ||
         (pTVar3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                             ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar3,
                              (MethodInfo *)0x0),
         pTVar3 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) break;
      pVVar4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                         (&local_10,pTVar3,(MethodInfo *)0x0);
      fVar1 = pVVar4->___x_2;
      if (param_2.___x_2 == fVar1) {
        return uVar8;
      }
      iVar5 = uVar8 + 1;
      if (param_2.___x_2 < fVar1) {
        iVar5 = iVar7;
        iVar2 = uVar8 - 1;
      }
      iVar7 = iVar5;
      if (iVar2 < iVar5) {
        uVar6 = uVar8 + 1;
        if (param_2.___x_2 <= fVar1) {
          uVar6 = uVar8;
        }
        return ~uVar6;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
