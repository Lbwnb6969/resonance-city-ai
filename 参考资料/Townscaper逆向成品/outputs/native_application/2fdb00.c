// RVA 0x2fdb00 | Placemaker.StorageUtils$$TryDeserilizeSaveData
// PDB: StorageUtils_TryDeserilizeSaveData_m4662DB1DADB12F9C32B35C20494D38421DAE1A01
// Body: [[102fdb00, 102fdbf0]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 102fdc15 FUN_102fdc15
// 10396d40 XmlSerializer_Deserialize_m25B138EB9DFEAC76221ED87D8FDFBE31A7136AD5
// 108d3410 MemoryStream__ctor_m3E041ADD3DB7EA42E7DB56FE862097819C02B9C2

SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 * __cdecl
StorageUtils_TryDeserilizeSaveData_m4662DB1DADB12F9C32B35C20494D38421DAE1A01
          (StorageUtils_t6E9DFB789C54B9B5604E6701C1D0E230BB7FAEF3 *param_1,
          ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 *param_2,MethodInfo *param_3)

{
  MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *pMVar1;
  SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *pSVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  int local_8;

  local_8 = 0xffffffff;
  puStack_c = &
              __ehhandler__StorageUtils_TryDeserilizeSaveData_m4662DB1DADB12F9C32B35C20494D38421DAE1A01
  ;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  if (DAT_1151c1ec == '\0') {
    ExceptionList = &pvStack_10;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&SaveData_t108FDD1E782E68BC3B924BE75B58816350034188_il2cpp_TypeInfo_var);
    DAT_1151c1ec = '\x01';
  }
  local_8 = 0;
  pMVar1 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)
           il2cpp_codegen_object_new
                     (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
  MemoryStream__ctor_m3E041ADD3DB7EA42E7DB56FE862097819C02B9C2(pMVar1,param_2,(MethodInfo *)0x0);
  local_8._0_1_ = 1;
  if (param_1->___saveXmlSerializer_14 ==
      (XmlSerializer_t2960FF2C2C062704541774440D09CA3DAFFCB01B *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  XmlSerializer_Deserialize_m25B138EB9DFEAC76221ED87D8FDFBE31A7136AD5
            (param_1->___saveXmlSerializer_14,
             (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *)pMVar1,(MethodInfo *)0x0);
  local_8 = (uint)local_8._1_3_ << 8;
  pSVar2 = (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)FUN_102fdc15();
  return pSVar2;
}
