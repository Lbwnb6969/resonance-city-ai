// RVA 0x835fb0 | Os.Utils.ExtraMath$$BinarySearchTransformX
// PDB: ExtraMath_BinarySearchTransformX_m65E5BEE174A846C04D6CB2BE3D6B485375292F9A
// Body: [[10835fb0, 1083607b]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 1066f730 Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2
// 10c10d10 Single_CompareTo_m80B5B5A70A2343C3A8673F35635EBED4458109B4

int __cdecl
ExtraMath_BinarySearchTransformX_m65E5BEE174A846C04D6CB2BE3D6B485375292F9A
          (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *param_1,float param_2,int param_3,
          int param_4,MethodInfo *param_5)

{
  int iVar1;
  int iVar2;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar3;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_1c;
  undefined8 local_10;
  float local_8;

  local_10 = 0;
  local_8 = 0.0;
  if (param_1 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
LAB_10836077:
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  iVar2 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                    (param_1,(MethodInfo *)0x0);
  uVar7 = 0;
  iVar2 = (iVar2 - param_4) + -1;
  iVar6 = 0;
  if (param_3 <= iVar2) {
    do {
      uVar7 = (iVar2 + param_3) / 2;
      pTVar3 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                         (param_1,uVar7,(MethodInfo *)0x0);
      if (pTVar3 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_10836077;
      pVVar4 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2
                         (&local_1c,pTVar3,(MethodInfo *)0x0);
      local_10._0_4_ = pVVar4->___x_2;
      local_10._4_4_ = pVVar4->___y_3;
      local_8 = pVVar4->___z_4;
      iVar6 = Single_CompareTo_m80B5B5A70A2343C3A8673F35635EBED4458109B4
                        ((float *)&local_10,param_2,(MethodInfo *)0x0);
      iVar6 = -iVar6;
      if (iVar6 == 0) {
        return uVar7;
      }
      iVar1 = uVar7 + 1;
      if (iVar6 < 0) {
        iVar2 = uVar7 - 1;
        iVar1 = param_3;
      }
      param_3 = iVar1;
    } while (param_3 <= iVar2);
  }
  uVar5 = uVar7 + 1;
  if (iVar6 < 1) {
    uVar5 = uVar7;
  }
  return ~uVar5;
}
