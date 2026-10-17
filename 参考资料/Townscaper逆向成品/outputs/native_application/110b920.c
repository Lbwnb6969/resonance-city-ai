// RVA 0x110b920 | FuryStudios.FurySDK.Internal.BasePlatformSDK$$IsAchievementUnlocked
// PDB: BasePlatformSDK_IsAchievementUnlocked_m391DDA68D58397D55C3961953E2D972F24C9AC97
// Body: [[1110b920, 1110b98d]]
// Direct callees:
// 101275a0 il2cpp_array_new_specific
// 1018e740 il2cpp_codegen_get_index_out_of_range_exception
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception

Il2CppObject * __cdecl
BasePlatformSDK_IsAchievementUnlocked_m391DDA68D58397D55C3961953E2D972F24C9AC97
          (BasePlatformSDK_t289E609F49DAF94E98CCB795ECEAA157F2437731 *param_1,
          AchievementID_t13562D86FC9C116E950E863A44792F46EBFFE67D param_2,MethodInfo *param_3)

{
  Il2CppArray *pIVar1;
  Il2CppObject *pIVar2;
  Exception_t *pEVar3;
  MethodInfo *pMVar4;

  if (DAT_11523e8b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       AchievementIDU5BU5D_t2FB33B43714B89311275C5AF3F70340A5C75CC51_il2cpp_TypeInfo_var
              );
    DAT_11523e8b = '\x01';
  }
  pIVar1 = il2cpp_array_new_specific
                     (AchievementIDU5BU5D_t2FB33B43714B89311275C5AF3F70340A5C75CC51_il2cpp_TypeInfo_var
                      ,1);
  if (pIVar1 != (Il2CppArray *)0x0) {
    if (pIVar1->max_length != 0) {
      pIVar1[1]._padding_ = (int)param_2.___id_0;
      pIVar2 = (Il2CppObject *)
               (**(code **)(param_1->_padding_ + 0x2c4))
                         (param_1,pIVar1,*(undefined4 *)(param_1->_padding_ + 0x2c8));
      return pIVar2;
    }
    pMVar4 = (MethodInfo *)0x0;
    pEVar3 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar3,pMVar4);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
