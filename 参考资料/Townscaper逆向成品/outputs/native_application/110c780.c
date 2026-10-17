// RVA 0x110c780 | FuryStudios.FurySDK.Internal.DotNetSaveStorageRequest$$OnStarted
// PDB: DotNetSaveStorageRequest_OnStarted_m849EE7575A4720F9389DABBA4D169B844317735C
// Body: [[1110c780, 1110c874]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10b19040 Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A
// 10b198a0 Directory_Exists_m17E38B91F6D9A0064D614FF2237BBFC0127468FE
// 10ccdcb0 FileStream__ctor_mDC286819520925AB5873921EFFEADA1EC1648CFB
// 10ed9c20 Path_GetDirectoryName_mFF7B47C1E2D3A3FD4B769257808A619D7117BEDE
// 10f00be0 Stream_WriteAsync_m20DAE4696E2F2573BDE47831FF110EFF3E0BB030
// 10f061e0 String_IsNullOrWhiteSpace_m4C4266AE4097F5B61FF72A8D0D083611231B9CA6

void __cdecl
DotNetSaveStorageRequest_OnStarted_m849EE7575A4720F9389DABBA4D169B844317735C
          (DotNetSaveStorageRequest_tDB3331D8B7FB767144EB798F35DC2E78531E1017 *param_1,
          MethodInfo *param_2)

{
  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 *pBVar1;
  bool bVar2;
  String_t *pSVar3;
  FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 *pFVar4;
  Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *pTVar5;

  if (DAT_11523e96 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
    DAT_11523e96 = '\x01';
  }
  pSVar3 = *(String_t **)&param_1->field_0x20;
  if ((Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
  }
  pSVar3 = Path_GetDirectoryName_mFF7B47C1E2D3A3FD4B769257808A619D7117BEDE(pSVar3,(MethodInfo *)0x0)
  ;
  bVar2 = String_IsNullOrWhiteSpace_m4C4266AE4097F5B61FF72A8D0D083611231B9CA6
                    (pSVar3,(MethodInfo *)0x0);
  if (!bVar2) {
    bVar2 = Directory_Exists_m17E38B91F6D9A0064D614FF2237BBFC0127468FE(pSVar3,(MethodInfo *)0x0);
    if (!bVar2) {
      pSVar3 = *(String_t **)&param_1->field_0x20;
      if ((Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->has_cctor != '\0') &&
         (Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var->cctor_finished == 0))
      {
        il2cpp_runtime_class_init
                  (Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
      }
      pSVar3 = Path_GetDirectoryName_mFF7B47C1E2D3A3FD4B769257808A619D7117BEDE
                         (pSVar3,(MethodInfo *)0x0);
      Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A(pSVar3,(MethodInfo *)0x0);
    }
  }
  pSVar3 = *(String_t **)&param_1->field_0x20;
  pFVar4 = (FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 *)
           il2cpp_codegen_object_new
                     (FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_il2cpp_TypeInfo_var);
  FileStream__ctor_mDC286819520925AB5873921EFFEADA1EC1648CFB(pFVar4,pSVar3,2,(MethodInfo *)0x0);
  pBVar1 = *(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 **)&param_1->field_0x28;
  *(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 **)&param_1->field_0x2c = pFVar4;
  if ((pBVar1 != (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 *)0x0) &&
     (pFVar4 != (FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 *)0x0)) {
    pTVar5 = Stream_WriteAsync_m20DAE4696E2F2573BDE47831FF110EFF3E0BB030
                       ((Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *)pFVar4,pBVar1,0,
                        pBVar1->_padding_,(MethodInfo *)0x0);
    *(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 **)&param_1->field_0x30 = pTVar5;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
