// RVA 0x9fd3f0 | Placemaker.SaveCardsHandler$$SetCardImages
// PDB: SaveCardsHandler_SetCardImages_mC7C9B883C342A13139272AFE2D939E83266E8338
// Body: [[109fd3f0, 109fd453] [109fd457, 109fd50b]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10a36ea0 Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
// 10a39ea0 Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 10c6a920 RawImage_set_texture_m1D7BAE6CB629C36894B664D9F5D68CACA88B8D99
// 11149190 ImageConversion_LoadImage_m5BB4FBA0565E698ED5C6F25F7A0A5F83CADD7477

void __cdecl
SaveCardsHandler_SetCardImages_mC7C9B883C342A13139272AFE2D939E83266E8338
          (SaveCardsHandler_t61C309C0A96BD6638967B41CAD43013CB215999B *param_1,MethodInfo *param_2)

{
  int iVar1;
  List_1_tAC14A72F60528BF5F54DEDF03048AEB295D85189 *pLVar2;
  int iVar3;
  uint uVar4;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 local_1c;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *local_c;
  int *local_8;

  if (DAT_1152018b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m3CCF0BBABB9195D0C8702E9581A57472A1738B93_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m3CF61E21718800106308F17641E859E62B891FFF_RuntimeMethod_var)
    ;
    DAT_1152018b = '\x01';
  }
  uVar4 = 0;
  pLVar2 = param_1->___activeCards_8;
  if (pLVar2 != (List_1_tAC14A72F60528BF5F54DEDF03048AEB295D85189 *)0x0) {
    iVar3 = 0x10;
    while( true ) {
      if (pLVar2->____size_2 <= (int)uVar4) {
        return;
      }
      if (pLVar2 == (List_1_tAC14A72F60528BF5F54DEDF03048AEB295D85189 *)0x0) break;
      if ((uint)pLVar2->____size_2 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                  ((MethodInfo *)0x0);
      }
      iVar1 = *(int *)(pLVar2->____items_1 + iVar3);
      if ((iVar1 == 0) || (*(int *)(iVar1 + 0x1c) == 0)) break;
      ImageConversion_LoadImage_m5BB4FBA0565E698ED5C6F25F7A0A5F83CADD7477
                (*(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF **)(iVar1 + 0x10),
                 *(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 **)
                  (*(int *)(iVar1 + 0x1c) + 0x28),(MethodInfo *)0x0);
      local_8 = *(int **)(iVar1 + 0xc);
      local_c = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E
                          (&local_1c,(MethodInfo *)0x0);
      if (local_8 == (int *)0x0) break;
      (**(code **)(*local_8 + 0x174))
                (local_8,local_c->___r_0,local_c->___g_1,local_c->___b_2,local_c->___a_3,
                 *(undefined4 *)(*local_8 + 0x178));
      if (*(RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A **)(iVar1 + 0xc) ==
          (RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A *)0x0) break;
      RawImage_set_texture_m1D7BAE6CB629C36894B664D9F5D68CACA88B8D99
                (*(RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A **)(iVar1 + 0xc),
                 *(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE **)(iVar1 + 0x10),
                 (MethodInfo *)0x0);
      if (*(Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 **)(iVar1 + 0x18) ==
          (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)0x0) break;
      Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
                (*(Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 **)(iVar1 + 0x18),true,
                 (MethodInfo *)0x0);
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 4;
      pLVar2 = param_1->___activeCards_8;
      if (pLVar2 == (List_1_tAC14A72F60528BF5F54DEDF03048AEB295D85189 *)0x0) break;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
