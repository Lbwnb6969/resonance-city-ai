// RVA 0x110c380 | FuryStudios.FurySDK.Internal.DotNetListFiles$$OnStarted
// PDB: DotNetListFiles_OnStarted_mAD9E1525EF4AF72638D8C6E9486CDFFE8849EACD
// Body: [[1110c380, 1110c3f9]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10b19e30 Directory_GetFiles_mC4A2C9164B682F1152396A36996712E255D98BCC
// 1110c447 FUN_1110c447

void __cdecl
DotNetListFiles_OnStarted_mAD9E1525EF4AF72638D8C6E9486CDFFE8849EACD
          (DotNetListFiles_tB7A653317F3A84F60663EBC4C68B192DF0E00ADE *param_1,MethodInfo *param_2)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &__ehhandler__DotNetListFiles_OnStarted_mAD9E1525EF4AF72638D8C6E9486CDFFE8849EACD;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  if (DAT_11523e93 == '\0') {
    ExceptionList = &pvStack_10;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       AsyncRequest_1_Success_mB44B2E2E3D74BF98197AE575514DC6E2231A5CA6_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       DotNetListFiles_tB7A653317F3A84F60663EBC4C68B192DF0E00ADE_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7);
    DAT_11523e93 = '\x01';
  }
  local_8 = 0;
  Directory_GetFiles_mC4A2C9164B682F1152396A36996712E255D98BCC
            (param_1->___rootPath_8,_stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7,1,
             (MethodInfo *)0x0);
  local_8 = 0xffffffff;
  FUN_1110c447();
  return;
}
