// RVA 0xa02aa0 | Placemaker.SaveSystem$$MaybeSaveAndUnloadCurrent
// PDB: SaveSystem_MaybeSaveAndUnloadCurrent_mDCEEDD741F4912AD35ACD16DFCCFE73F57B5A001
// Body: [[10a02aa0, 10a02b3e]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 109fdb90 SaveData_Clear_m7F698094AF5725EDB07E9F4A06994B837FD9DE52
// 10a00fa0 SaveSystem_ChangeState_m9CEF27747C53226925145C52040950CB19866597
// 10a02b40 SaveSystem_MaybeSaveCurrent_m6D4D92DDAB91A3F5EB58F6180E5B93B746F5B2D3
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499

void __cdecl
SaveSystem_MaybeSaveAndUnloadCurrent_mDCEEDD741F4912AD35ACD16DFCCFE73F57B5A001
          (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *param_1,MethodInfo *param_2)

{
  MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *pMVar1;
  bool bVar2;

  if (DAT_115201b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_115201b0 = '\x01';
  }
  bVar2 = SaveSystem_MaybeSaveCurrent_m6D4D92DDAB91A3F5EB58F6180E5B93B746F5B2D3
                    (param_1,(MethodInfo *)0x0);
  if (!bVar2) {
    pMVar1 = param_1->___currentMetaSave_14;
    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0))
    {
      il2cpp_runtime_class_init
                (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    }
    bVar2 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                      ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pMVar1,(MethodInfo *)0x0)
    ;
    if (bVar2) {
      pMVar1 = param_1->___currentMetaSave_14;
      if (pMVar1 == (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0) {
LAB_10a02b3a:
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_null_reference_exception();
      }
      if (pMVar1->___existsOnDisk_13 == false) {
        if (pMVar1->___saveData_9 == (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)0x0)
        goto LAB_10a02b3a;
        SaveData_Clear_m7F698094AF5725EDB07E9F4A06994B837FD9DE52
                  (pMVar1->___saveData_9,(MethodInfo *)0x0);
        SaveSystem_ChangeState_m9CEF27747C53226925145C52040950CB19866597
                  (param_1,param_1->___currentMetaSave_14,0x40,(MethodInfo *)0x0);
      }
    }
  }
  param_1->___currentMetaSave_14 = (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0;
  return;
}
