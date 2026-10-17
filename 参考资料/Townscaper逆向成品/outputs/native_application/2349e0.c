// RVA 0x2349e0 | Placemaker.Ui.ControlBinding$$OnIsElementAllowed
// PDB: ControlBinding_OnIsElementAllowed_m330B4006BC0A2063B1A845DB2D2CBD87CE4AC266
// Body: [[102349e0, 10234add]]
// Direct callees:
// 10128030 il2cpp_object_unbox
// 10128ae0 il2cpp_value_box
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10234150 ControlBinding_CanKeyBeMapped_m6E62C35AE08E2FBE675C5BEE5A827F1A955ACB74
// 10db5f00 InputMapper_Stop_m439AEDEF502A790055D13AACA82F0C086F0DD69A

bool __cdecl
ControlBinding_OnIsElementAllowed_m330B4006BC0A2063B1A845DB2D2CBD87CE4AC266
          (ControlBinding_tC850FCC2A9AEB8764F07FB598BB1125043AAB3EA *param_1,
          ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0 param_2,
          MethodInfo *param_3)

{
  TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 *pTVar1;
  bool bVar2;
  Il2CppObject *pIVar3;
  String_t *pSVar4;
  int *piVar5;
  int local_8;

  if (DAT_1151b59b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralD400C623766778726E5CFC90FB7CA4C11663D41B);
    DAT_1151b59b = '\x01';
  }
  if (param_1->___selectedControllerGroupType_20 != 0) {
    return true;
  }
  local_8 = param_2.___GJeToslGtRgKfxfJpqXxlgoTqIO_10;
  pIVar3 = il2cpp_value_box(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_il2cpp_TypeInfo_var,
                            &local_8);
  if (pIVar3 != (Il2CppObject *)0x0) {
    pSVar4 = (String_t *)
             (**(code **)&(pIVar3->field0_0x0).klass[1].byval_arg.attrs)
                       (pIVar3,(pIVar3->field0_0x0).klass[1].this_arg.data.dummy);
    piVar5 = il2cpp_object_unbox(pIVar3);
    local_8 = *piVar5;
    bVar2 = ControlBinding_CanKeyBeMapped_m6E62C35AE08E2FBE675C5BEE5A827F1A955ACB74
                      (param_1,pSVar4,(MethodInfo *)0x0);
    if (bVar2) {
      return true;
    }
    bVar2 = ControlBinding_CanKeyBeMapped_m6E62C35AE08E2FBE675C5BEE5A827F1A955ACB74
                      (param_1,param_2.___PhtdAzyxfOojsYIYgNOGQVuqHbF_8,(MethodInfo *)0x0);
    if (bVar2) {
      return true;
    }
    pTVar1 = param_1->___statusText_7;
    if (pTVar1 != (TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 *)0x0) {
      (**(code **)(pTVar1->_padding_ + 0x2cc))
                (pTVar1,_stringLiteralD400C623766778726E5CFC90FB7CA4C11663D41B,
                 *(undefined4 *)(pTVar1->_padding_ + 0x2d0));
      if (param_1->___buttonMapState_15 == false) {
        return false;
      }
      param_1->___buttonMapState_15 = false;
      if (param_1->___inputMapperJoystickKeyboard_18 !=
          (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *)0x0) {
        InputMapper_Stop_m439AEDEF502A790055D13AACA82F0C086F0DD69A
                  (param_1->___inputMapperJoystickKeyboard_18,(MethodInfo *)0x0);
        if (param_1->___inputMapperMouse_19 !=
            (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *)0x0) {
          InputMapper_Stop_m439AEDEF502A790055D13AACA82F0C086F0DD69A
                    (param_1->___inputMapperMouse_19,(MethodInfo *)0x0);
          return false;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
