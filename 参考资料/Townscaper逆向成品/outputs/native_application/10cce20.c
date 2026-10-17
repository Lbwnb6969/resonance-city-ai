// RVA 0x10cce20 | FuryStudios.FurySDK.Settings.AchievementDatabase$$.ctor
// PDB: AchievementDatabase__ctor_m771E436B1C07B55D6CA84E7D0983F7173688B87A
// Body: [[110cce20, 110cce93]]
// Direct callees:
// 101275a0 il2cpp_array_new_specific
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 10226660 Dictionary_2__ctor_mAA4C8F456AA58EC1FB154441680BCFAA27AD6183_gshared
// 10667a00 ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063

void __cdecl
AchievementDatabase__ctor_m771E436B1C07B55D6CA84E7D0983F7173688B87A
          (AchievementDatabase_t56947D99CE5B97AE236AA16FE0C87B8A8BBF27E4 *param_1,
          MethodInfo *param_2)

{
  AchievementInfoU5BU5D_tB3D170841E32EB9F8D4676FE60F482D2AE1A1845 *pAVar1;
  Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *pDVar2;

  if (DAT_11523a5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       AchievementInfoU5BU5D_tB3D170841E32EB9F8D4676FE60F482D2AE1A1845_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2__ctor_mDB994A1A65938B9F7CA9381DC994A2F3FB4493B0_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Dictionary_2_tDA8A2F7574464B9A44F8EB9FDE4A5395FF5BC983_il2cpp_TypeInfo_var);
    DAT_11523a5f = '\x01';
  }
  pAVar1 = (AchievementInfoU5BU5D_tB3D170841E32EB9F8D4676FE60F482D2AE1A1845 *)
           il2cpp_array_new_specific
                     (AchievementInfoU5BU5D_tB3D170841E32EB9F8D4676FE60F482D2AE1A1845_il2cpp_TypeInfo_var
                      ,0);
  param_1->___achievements_4 = pAVar1;
  pDVar2 = (Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *)
           il2cpp_codegen_object_new
                     (Dictionary_2_tDA8A2F7574464B9A44F8EB9FDE4A5395FF5BC983_il2cpp_TypeInfo_var);
  Dictionary_2__ctor_mAA4C8F456AA58EC1FB154441680BCFAA27AD6183_gshared
            (pDVar2,Dictionary_2__ctor_mDB994A1A65938B9F7CA9381DC994A2F3FB4493B0_RuntimeMethod_var);
  param_1->___database_5 = (Dictionary_2_tDA8A2F7574464B9A44F8EB9FDE4A5395FF5BC983 *)pDVar2;
  ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063
            ((ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A *)param_1,(MethodInfo *)0x0
            );
  return;
}
