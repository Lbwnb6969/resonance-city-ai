// RVA 0x4c5190 | Placemaker.Ui.DistanceFieldSettings$$NameAfterSprite
// PDB: DistanceFieldSettings_NameAfterSprite_m9878B963A47D32287F7E00B01DDDCA0CAE184816
// Body: [[104c5190, 104c52f4]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1043f1d0 Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared
// 107af260 BaseMeshEffect_get_graphic_m4FAFDA7300251A13F7DDE689145C54E8B971688D
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a4a8b0 Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
// 10a4ac90 Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781

/* WARNING: Removing unreachable block (ram,0x104c527f) */
/* WARNING: Removing unreachable block (ram,0x104c5293) */
/* WARNING: Removing unreachable block (ram,0x104c5299) */
/* WARNING: Removing unreachable block (ram,0x104c52a2) */
/* WARNING: Removing unreachable block (ram,0x104c52ea) */
/* WARNING: Removing unreachable block (ram,0x104c52b1) */
/* WARNING: Removing unreachable block (ram,0x104c520f) */
/* WARNING: Removing unreachable block (ram,0x104c5223) */
/* WARNING: Removing unreachable block (ram,0x104c5229) */
/* WARNING: Removing unreachable block (ram,0x104c5232) */
/* WARNING: Removing unreachable block (ram,0x104c5241) */
/* WARNING: Removing unreachable block (ram,0x104c52bc) */
/* WARNING: Removing unreachable block (ram,0x104c52c5) */
/* WARNING: Removing unreachable block (ram,0x104c52cf) */
/* WARNING: Removing unreachable block (ram,0x104c52de) */

void __cdecl
DistanceFieldSettings_NameAfterSprite_m9878B963A47D32287F7E00B01DDDCA0CAE184816
          (DistanceFieldSettings_t32A1F46960279189113D2CB327EF91E0A25D1CC0 *param_1,
          MethodInfo *param_2)

{
  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *pGVar1;
  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *pOVar2;

  if (DAT_1151d136 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_TryGetComponent_TisCornerImage_tFE05FFD4093FAB3D12C2523D9DC70CED309CF6F2_m3C0A5282BB5B699042D040C57DF989907E043F4B_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_TryGetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m9F7A97CDCF904A3FF91759CB8CBB0F8279B3A803_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151d136 = '\x01';
  }
  pGVar1 = BaseMeshEffect_get_graphic_m4FAFDA7300251A13F7DDE689145C54E8B971688D
                     ((BaseMeshEffect_tC7D44B0AC6406BAC3E4FC4579A43FC135BDB6FDA *)param_1,
                      (MethodInfo *)0x0);
  if ((((pGVar1 != (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *)0x0) &&
       (pOVar2 = Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared
                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pGVar1,true,
                            Component_TryGetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m9F7A97CDCF904A3FF91759CB8CBB0F8279B3A803_RuntimeMethod_var
                           ), (char)pOVar2 == '\0')) &&
      (pGVar1 = BaseMeshEffect_get_graphic_m4FAFDA7300251A13F7DDE689145C54E8B971688D
                          ((BaseMeshEffect_tC7D44B0AC6406BAC3E4FC4579A43FC135BDB6FDA *)param_1,
                           (MethodInfo *)0x0),
      pGVar1 != (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *)0x0)) &&
     (pOVar2 = Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pGVar1,true,
                          Component_TryGetComponent_TisCornerImage_tFE05FFD4093FAB3D12C2523D9DC70CED309CF6F2_m3C0A5282BB5B699042D040C57DF989907E043F4B_RuntimeMethod_var
                         ), (char)pOVar2 == '\0')) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
