// RVA 0x110d8d0 | FuryStudios.FurySDK.Internal.PlatformPlayerPrefs.PlayerPrefsSaveData$$Deserialize
// PDB: PlayerPrefsSaveData_Deserialize_mC36A11249B68C17892FAA67A6EC42A51B66DB85E
// Body: [[1110d8d0, 1110db47]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1088d970 BinaryReader__ctor_m8D2F966D44EF5BD30D54D94653A831EFDB9C6A60
// 108d3410 MemoryStream__ctor_m3E041ADD3DB7EA42E7DB56FE862097819C02B9C2
// 10d03c10 Dictionary_2_set_Item_m244FCADEE28000F53A085B3A2D58CE1543A5F80E_gshared
// 10fcda00 Dictionary_2_set_Item_mA7219260BC4E5D73DEC5A13D5801F4ACAF9E42CB_gshared
// 1110db72 FUN_1110db72
// 1110e230 PlayerPrefsSaveData__ctor_m5CF9FA988302B444F00626E8EB51C60C773820DF

PlayerPrefsSaveData_t8B8AAC39C8A51CE7EA2AF47E8F5D075A00613ADB * __cdecl
PlayerPrefsSaveData_Deserialize_mC36A11249B68C17892FAA67A6EC42A51B66DB85E
          (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 *param_1,MethodInfo *param_2)

{
  Dictionary_2_t05DA59462DB2B73E336E6741454AE4A402C9178B *pDVar1;
  Dictionary_2_t2231B28838CEC8CCD1492AE7CBE8B687F83856AD *pDVar2;
  PlayerPrefsSaveData_t8B8AAC39C8A51CE7EA2AF47E8F5D075A00613ADB *pPVar3;
  MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *pMVar4;
  BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 *pBVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  AchievementID_t13562D86FC9C116E950E863A44792F46EBFFE67D AVar9;
  Il2CppObject *pIVar10;
  int iVar11;
  float10 fVar12;
  void *pvStack_10;
  undefined1 *puStack_c;
  uint local_8;

  local_8 = 0xffffffff;
  puStack_c = &
              __ehhandler__PlayerPrefsSaveData_Deserialize_mC36A11249B68C17892FAA67A6EC42A51B66DB85E
  ;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  if (DAT_11523ea9 == '\0') {
    ExceptionList = &pvStack_10;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_set_Item_m92EA16A2FC72AA058D15DBC6A1F0638CDB9C1D2A_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_set_Item_mBC85AF861FB031847847F0B30707EC7AC252D572_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       PlayerPrefsSaveData_t8B8AAC39C8A51CE7EA2AF47E8F5D075A00613ADB_il2cpp_TypeInfo_var
              );
    DAT_11523ea9 = '\x01';
  }
  pPVar3 = (PlayerPrefsSaveData_t8B8AAC39C8A51CE7EA2AF47E8F5D075A00613ADB *)
           il2cpp_codegen_object_new
                     (
                     PlayerPrefsSaveData_t8B8AAC39C8A51CE7EA2AF47E8F5D075A00613ADB_il2cpp_TypeInfo_var
                     );
  PlayerPrefsSaveData__ctor_m5CF9FA988302B444F00626E8EB51C60C773820DF(pPVar3,(MethodInfo *)0x0);
  pMVar4 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)
           il2cpp_codegen_object_new
                     (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
  MemoryStream__ctor_m3E041ADD3DB7EA42E7DB56FE862097819C02B9C2(pMVar4,param_1,(MethodInfo *)0x0);
  local_8 = 0;
  pBVar5 = (BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 *)
           il2cpp_codegen_object_new
                     (BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128_il2cpp_TypeInfo_var);
  BinaryReader__ctor_m8D2F966D44EF5BD30D54D94653A831EFDB9C6A60
            (pBVar5,(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB *)pMVar4,(MethodInfo *)0x0);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (pBVar5 != (BinaryReader_t4F45C15FF44F8E1C105704A21FFBE58D60015128 *)0x0) {
    iVar6 = (**(code **)(pBVar5->_padding_ + 0x13c))
                      (pBVar5,*(undefined4 *)(pBVar5->_padding_ + 0x140));
    iVar7 = (**(code **)(pBVar5->_padding_ + 0x13c))
                      (pBVar5,*(undefined4 *)(pBVar5->_padding_ + 0x140));
    iVar8 = (**(code **)(pBVar5->_padding_ + 0x13c))
                      (pBVar5,*(undefined4 *)(pBVar5->_padding_ + 0x140));
    for (iVar11 = 0; iVar11 < iVar6; iVar11 = iVar11 + 1) {
      if (pPVar3 == (PlayerPrefsSaveData_t8B8AAC39C8A51CE7EA2AF47E8F5D075A00613ADB *)0x0)
      goto LAB_1110dbdd;
      pDVar1 = (Dictionary_2_t05DA59462DB2B73E336E6741454AE4A402C9178B *)pPVar3->___savedInt_0;
      AVar9.___id_0 =
           (String_t *)
           (**(code **)(pBVar5->_padding_ + 0x174))
                     (pBVar5,*(undefined4 *)(pBVar5->_padding_ + 0x178));
      pIVar10 = (Il2CppObject *)
                (**(code **)(pBVar5->_padding_ + 0x13c))
                          (pBVar5,*(undefined4 *)(pBVar5->_padding_ + 0x140));
      if (pDVar1 == (Dictionary_2_t05DA59462DB2B73E336E6741454AE4A402C9178B *)0x0)
      goto LAB_1110dbdd;
      Dictionary_2_set_Item_m244FCADEE28000F53A085B3A2D58CE1543A5F80E_gshared
                (pDVar1,AVar9,pIVar10,
                 Dictionary_2_set_Item_mBC85AF861FB031847847F0B30707EC7AC252D572_RuntimeMethod_var);
    }
    for (iVar6 = 0; iVar6 < iVar7; iVar6 = iVar6 + 1) {
      if (pPVar3 == (PlayerPrefsSaveData_t8B8AAC39C8A51CE7EA2AF47E8F5D075A00613ADB *)0x0)
      goto LAB_1110dbdd;
      pDVar2 = (Dictionary_2_t2231B28838CEC8CCD1492AE7CBE8B687F83856AD *)pPVar3->___savedFloat_1;
      pIVar10 = (Il2CppObject *)
                (**(code **)(pBVar5->_padding_ + 0x174))
                          (pBVar5,*(undefined4 *)(pBVar5->_padding_ + 0x178));
      fVar12 = (float10)(**(code **)(pBVar5->_padding_ + 0x15c))
                                  (pBVar5,*(undefined4 *)(pBVar5->_padding_ + 0x160));
      if (pDVar2 == (Dictionary_2_t2231B28838CEC8CCD1492AE7CBE8B687F83856AD *)0x0)
      goto LAB_1110dbdd;
      Dictionary_2_set_Item_mA7219260BC4E5D73DEC5A13D5801F4ACAF9E42CB_gshared
                (pDVar2,pIVar10,(float)fVar12,
                 Dictionary_2_set_Item_m92EA16A2FC72AA058D15DBC6A1F0638CDB9C1D2A_RuntimeMethod_var);
    }
    iVar6 = 0;
    while( true ) {
      if (iVar8 <= iVar6) {
        local_8 = local_8 & 0xffffff00;
        pPVar3 = (PlayerPrefsSaveData_t8B8AAC39C8A51CE7EA2AF47E8F5D075A00613ADB *)FUN_1110db72();
        return pPVar3;
      }
      if (pPVar3 == (PlayerPrefsSaveData_t8B8AAC39C8A51CE7EA2AF47E8F5D075A00613ADB *)0x0) break;
      pDVar1 = (Dictionary_2_t05DA59462DB2B73E336E6741454AE4A402C9178B *)pPVar3->___savedString_2;
      AVar9.___id_0 =
           (String_t *)
           (**(code **)(pBVar5->_padding_ + 0x174))
                     (pBVar5,*(undefined4 *)(pBVar5->_padding_ + 0x178));
      pIVar10 = (Il2CppObject *)
                (**(code **)(pBVar5->_padding_ + 0x174))
                          (pBVar5,*(undefined4 *)(pBVar5->_padding_ + 0x178));
      if (pDVar1 == (Dictionary_2_t05DA59462DB2B73E336E6741454AE4A402C9178B *)0x0) break;
      Dictionary_2_set_Item_m244FCADEE28000F53A085B3A2D58CE1543A5F80E_gshared
                (pDVar1,AVar9,pIVar10,
                 Dictionary_2_set_Item_m31C41E4FE938066440DAFD1E667C2F3986549668_RuntimeMethod_var);
      iVar6 = iVar6 + 1;
    }
  }
LAB_1110dbdd:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
