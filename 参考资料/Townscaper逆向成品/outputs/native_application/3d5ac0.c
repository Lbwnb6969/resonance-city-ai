// RVA 0x3d5ac0 | Placemaker.MetaSave$$ResetPooledObject
// PDB: MetaSave_ResetPooledObject_m9CBD905D8BC8EDAE129C511D9E3292CA19B716A6
// Body: [[103d5ac0, 103d5bc8]]
// Direct callees:
// 10128030 il2cpp_object_unbox
// 101280f0 il2cpp_runtime_class_init
// 10128ae0 il2cpp_value_box
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10a3c770 Debug_LogError_mEFF048E5541EE45362C0AAD829E3FA4C2CAB9199
// 10f02470 String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B

void __cdecl
MetaSave_ResetPooledObject_m9CBD905D8BC8EDAE129C511D9E3292CA19B716A6
          (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *param_1,MethodInfo *param_2)

{
  Il2CppObject *pIVar1;
  String_t *pSVar2;
  int *piVar3;

  if (DAT_1151c86f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&State_t07EB55170A74CD21FF62F08AC5FF1F7D8F9C4C19_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralFAE3F0B209714E024B891200EC543DB42FEC8B81);
    DAT_1151c86f = '\x01';
  }
  if ((param_1->___state_18 & 0xc0U) == 0) {
    pIVar1 = il2cpp_value_box(State_t07EB55170A74CD21FF62F08AC5FF1F7D8F9C4C19_il2cpp_TypeInfo_var,
                              &param_1->___state_18);
    if (pIVar1 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_null_reference_exception();
    }
    pSVar2 = (String_t *)
             (**(code **)&(pIVar1->field0_0x0).klass[1].byval_arg.attrs)
                       (pIVar1,(pIVar1->field0_0x0).klass[1].this_arg.data.dummy);
    piVar3 = il2cpp_object_unbox(pIVar1);
    param_1->___state_18 = *piVar3;
    pSVar2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B
                       (_stringLiteralFAE3F0B209714E024B891200EC543DB42FEC8B81,pSVar2,
                        (MethodInfo *)0x0);
    if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished == 0)) {
      il2cpp_runtime_class_init(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)
      ;
    }
    Debug_LogError_mEFF048E5541EE45362C0AAD829E3FA4C2CAB9199
              ((Il2CppObject *)pSVar2,(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_1,
               (MethodInfo *)0x0);
  }
  param_1->___fileName_5 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
  *(undefined4 *)&param_1->___lastFileWriteTime_8 = 0;
  *(undefined4 *)((int)&param_1->___lastFileWriteTime_8 + 4) = 0;
  param_1->___lastDiskSyncTime_10 = -1.0;
  param_1->___lastTextureLoadTime_11 = -1.0;
  param_1->___lastSaveDataTime_12 = -1.0;
  param_1->___existsOnDisk_13 = false;
  param_1->___path_4 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
  return;
}
