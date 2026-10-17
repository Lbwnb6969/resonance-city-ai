// RVA 0x110c210 | FuryStudios.FurySDK.Internal.BaseStorageRequest$$.ctor
// PDB: BaseStorageRequest__ctor_m4BC7CFFDA62996A8D84A4692941E693CFB5E2DA0
// Body: [[1110c210, 1110c264]]
// Direct callees:
// 101275a0 il2cpp_array_new_specific
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43

void __cdecl
BaseStorageRequest__ctor_m4BC7CFFDA62996A8D84A4692941E693CFB5E2DA0
          (BaseStorageRequest_tBC8212ED3DF780412B306CA05C6629CFC0F20AFB *param_1,String_t *param_2,
          int param_3,MethodInfo *param_4)

{
  ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 *pBVar1;

  if (DAT_11523e8d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
    DAT_11523e8d = '\x01';
  }
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)param_1,
             (MethodInfo *)0x0);
  param_1->___U3CAccessU3Ek__BackingField_7 = param_3;
  param_1->_padding_ = 0;
  param_1->___U3CFilePathU3Ek__BackingField_6 = param_2;
  pBVar1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 *)
           il2cpp_array_new_specific
                     (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var,0);
  param_1->___U3CBytesU3Ek__BackingField_8 = pBVar1;
  return;
}
