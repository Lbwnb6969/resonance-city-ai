// RVA 0xa03800 | Placemaker.SaveSystem$$SetSiblingIndex
// PDB: SaveSystem_SetSiblingIndex_mF2A34C8B9A4B0ECADEA303550B01B34CCC6A5F78
// Body: [[10a03800, 10a0386f]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10325c60 UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D_gshared
// 1066f040 Transform_SetSiblingIndex_mC69C3B37E6C731AA2A0B9BD787CF47AA5B8001FC
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F

void __cdecl
SaveSystem_SetSiblingIndex_mF2A34C8B9A4B0ECADEA303550B01B34CCC6A5F78
          (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *param_1,
          MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *param_2,int param_3,
          MethodInfo *param_4)

{
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar1;
  uint uVar2;

  if (DAT_115201ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var)
    ;
    DAT_115201ba = '\x01';
  }
  uVar2 = ~param_3;
  if (-1 < param_3) {
    uVar2 = param_3;
  }
  if (param_2 != (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *)0x0) {
    pTVar1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                        (MethodInfo *)0x0);
    if (pTVar1 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      Transform_SetSiblingIndex_mC69C3B37E6C731AA2A0B9BD787CF47AA5B8001FC
                (pTVar1,uVar2,(MethodInfo *)0x0);
      if ((UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *)param_2->___onIndexChange_17 !=
          (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *)0x0) {
        UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D_gshared
                  ((UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *)
                   param_2->___onIndexChange_17,uVar2,
                   Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
