// RVA 0x233000 | Placemaker.ClickEffect$$Click
// PDB: ClickEffect_Click_mD0044657A569753AE52D3D70EE09E7FC7162AEA0
// Body: [[10233000, 10233075]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 102328b0 ClickEffect_Click_m89A7A6B481188CD69022737F5206D9A9360A84AE
// 1040d9d0 HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C

void __cdecl
ClickEffect_Click_mD0044657A569753AE52D3D70EE09E7FC7162AEA0
          (ClickEffect_tBCD86683B07033E006B57D3C879935BD4A547F85 *param_1,
          HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *param_2,bool param_3,
          Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *param_4,MethodInfo *param_5)

{
  float fVar1;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar2;
  MethodInfo *unaff_ESI;
  int iVar3;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar4;
  float local_c;

  if (param_2 != (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *)0x0) {
    if (param_3) {
      local_c = (param_2->___dstVert_8).___planePos_1.___x_0;
      fVar1 = (param_2->___dstVert_8).___planePos_1.___y_1;
      iVar3 = param_2->___dstHeight_11;
    }
    else {
      local_c = (param_2->___srcVert_7).___planePos_1.___x_0;
      iVar3 = param_2->___srcHeight_10;
      fVar1 = (param_2->___srcVert_7).___planePos_1.___y_1;
    }
    iVar2.___y_1 = (int)fVar1;
    iVar2.___x_0 = (int)local_c;
    iVar2.___z_2 = 0;
    VVar4 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)
            HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(iVar2,unaff_ESI);
    if (param_4 != (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)0x0) {
      ClickEffect_Click_m89A7A6B481188CD69022737F5206D9A9360A84AE
                (param_1,param_3,VVar4,iVar3,param_4->___type_4,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
