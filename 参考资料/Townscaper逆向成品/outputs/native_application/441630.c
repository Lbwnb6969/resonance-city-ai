// RVA 0x441630 | Os.Utils.DictPoolExtension$$ReturnToPool<int, int>
// PDB: DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
// Body: [[10441630, 104416ac]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1015daa0 InitFromCodegenSlow

void __cdecl
DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
          (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *param_1,MethodInfo *param_2)

{
  Il2CppClass *pIVar1;
  MethodInfo *pMVar2;

  pMVar2 = param_2;
  pIVar1 = (param_2->field6_0x18).rgctx_data[1].klass;
  if (pIVar1->initialized_and_no_error == 0) {
    il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
  }
  if (pIVar1->has_cctor != '\0') {
    pIVar1 = (pMVar2->field6_0x18).rgctx_data[1].klass;
    if (pIVar1->initialized_and_no_error == 0) {
      il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
    }
    if (pIVar1->cctor_finished == 0) {
      pIVar1 = (pMVar2->field6_0x18).rgctx_data[1].klass;
      if (pIVar1->initialized_and_no_error == 0) {
        il2cpp::vm::ClassInlines::InitFromCodegenSlow(pIVar1);
      }
      il2cpp_runtime_class_init(pIVar1);
    }
  }
  (*(code *)**(undefined4 **)(pMVar2->field6_0x18).methodMetadataHandle)
            (&param_1,*(undefined4 **)(pMVar2->field6_0x18).methodMetadataHandle);
  return;
}
