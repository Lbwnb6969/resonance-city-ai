// RVA 0x110c630 | FuryStudios.FurySDK.Internal.DotNetLoadStorageRequest$$OnStarted
// PDB: DotNetLoadStorageRequest_OnStarted_m7E1506043EAFEE7B4D38EB83F8FC0C4ACD285B2F
// Body: [[1110c630, 1110c70d]]
// Direct callees:
// 101275a0 il2cpp_array_new_specific
// 1018e790 il2cpp_codegen_get_overflow_exception
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10ccdcb0 FileStream__ctor_mDC286819520925AB5873921EFFEADA1EC1648CFB
// 10f00890 Stream_ReadAsync_m32EAE04169E8AD9905FE5D984D770C905CEE967A

/* WARNING: Removing unreachable block (ram,0x1110c6ac) */

void __cdecl
DotNetLoadStorageRequest_OnStarted_m7E1506043EAFEE7B4D38EB83F8FC0C4ACD285B2F
          (DotNetLoadStorageRequest_tB242851C4F15B5DC4FB16BDE5068F452B3927568 *param_1,
          MethodInfo *param_2)

{
  String_t *pSVar1;
  Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *pSVar2;
  FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 *pFVar3;
  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 *pBVar4;
  int iVar5;
  Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *pTVar6;
  Exception_t *pEVar7;
  longlong lVar8;
  MethodInfo *pMVar9;

  if (DAT_11523e95 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       DotNetLoadStorageRequest_OnStarted_m7E1506043EAFEE7B4D38EB83F8FC0C4ACD285B2F_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_il2cpp_TypeInfo_var);
    DAT_11523e95 = '\x01';
  }
  pSVar1 = (String_t *)param_1->_padding_;
  pFVar3 = (FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 *)
           il2cpp_codegen_object_new
                     (FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_il2cpp_TypeInfo_var);
  FileStream__ctor_mDC286819520925AB5873921EFFEADA1EC1648CFB(pFVar3,pSVar1,3,(MethodInfo *)0x0);
  param_1->_padding_ = (int)pFVar3;
  if (pFVar3 != (FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 *)0x0) {
    lVar8 = (**(code **)(pFVar3->_padding_ + 0x10c))
                      (pFVar3,*(undefined4 *)(pFVar3->_padding_ + 0x110));
    if (0x7fffffff < lVar8) {
      pMVar9 =
      DotNetLoadStorageRequest_OnStarted_m7E1506043EAFEE7B4D38EB83F8FC0C4ACD285B2F_RuntimeMethod_var
      ;
      pEVar7 = il2cpp_codegen_get_overflow_exception();
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_exception(pEVar7,pMVar9);
    }
    pBVar4 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 *)
             il2cpp_array_new_specific
                       (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var,
                        (uint)lVar8);
    pSVar2 = (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *)param_1->_padding_;
    param_1->___data_11 = pBVar4;
    if (pSVar2 != (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *)0x0) {
      iVar5 = (**(code **)(pSVar2->_padding_ + 0x10c))
                        (pSVar2,*(undefined4 *)(pSVar2->_padding_ + 0x110));
      pTVar6 = Stream_ReadAsync_m32EAE04169E8AD9905FE5D984D770C905CEE967A
                         (pSVar2,pBVar4,0,iVar5,(MethodInfo *)0x0);
      param_1->_padding_ = (int)pTVar6;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
