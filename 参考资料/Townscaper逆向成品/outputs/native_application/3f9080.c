// RVA 0x3f9080 | Placemaker.WorldMaster$$.ctor
// PDB: WorldMaster__ctor_m9BE4439D625782893DBFF73227D92775ED0D9A45
// Body: [[103f9080, 103f9275]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 101d17c0 BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 109fde20 SaveData__ctor_m54D969F11736980DA37FE2AF8CE92BC49FB3E927
// 10a36df0 Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0

void __cdecl
WorldMaster__ctor_m9BE4439D625782893DBFF73227D92775ED0D9A45
          (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *param_1,MethodInfo *param_2)

{
  Il2CppObject *pIVar1;
  Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *pSVar2;
  SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *pSVar3;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar4;

  if (DAT_1151c94b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1__ctor_m67DCB491C20915AD10BAFB0A53AF70D0C9CEE1C8_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_t527A6D6F6BE273E2A70069A6C93E516B9AFB4CAA_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&SaveData_t108FDD1E782E68BC3B924BE75B58816350034188_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec_U3C_ctorU3Eb__83_0_m266EA6C3F0E054D1F2F0832FB894CA5D45205B77_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec_U3C_ctorU3Eb__83_1_mA552F070644583E38569607E3F2D20454A9A3E88_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&U3CU3Ec_tEC258EB98AF65A1BE301053497295EF287279612_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
    DAT_1151c94b = '\x01';
  }
  param_1->___lastSaveString_38 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
  pSVar2 = (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)
           il2cpp_codegen_object_new
                     (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
  BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0
            ((BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)pSVar2,(MethodInfo *)0x0);
  param_1->___stopwatch_40 = pSVar2;
  pSVar3 = (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)
           il2cpp_codegen_object_new
                     (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188_il2cpp_TypeInfo_var);
  SaveData__ctor_m54D969F11736980DA37FE2AF8CE92BC49FB3E927(pSVar3,(MethodInfo *)0x0);
  param_1->___saveData_42 = pSVar3;
  param_1->___doGo_50 = true;
  if ((U3CU3Ec_tEC258EB98AF65A1BE301053497295EF287279612_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (U3CU3Ec_tEC258EB98AF65A1BE301053497295EF287279612_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(U3CU3Ec_tEC258EB98AF65A1BE301053497295EF287279612_il2cpp_TypeInfo_var)
    ;
  }
  pOVar4 = *(OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE **)
            ((int)U3CU3Ec_tEC258EB98AF65A1BE301053497295EF287279612_il2cpp_TypeInfo_var->
                  static_fields + 4);
  if (pOVar4 == (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
    if ((U3CU3Ec_tEC258EB98AF65A1BE301053497295EF287279612_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (U3CU3Ec_tEC258EB98AF65A1BE301053497295EF287279612_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (U3CU3Ec_tEC258EB98AF65A1BE301053497295EF287279612_il2cpp_TypeInfo_var);
    }
    pIVar1 = *(Il2CppObject **)
              U3CU3Ec_tEC258EB98AF65A1BE301053497295EF287279612_il2cpp_TypeInfo_var->static_fields;
    pOVar4 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
             il2cpp_codegen_object_new
                       (Action_1_t527A6D6F6BE273E2A70069A6C93E516B9AFB4CAA_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              (pOVar4,pIVar1,
               (int)
               U3CU3Ec_U3C_ctorU3Eb__83_0_m266EA6C3F0E054D1F2F0832FB894CA5D45205B77_RuntimeMethod_var
               ,Action_1__ctor_m67DCB491C20915AD10BAFB0A53AF70D0C9CEE1C8_RuntimeMethod_var);
    *(OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE **)
     ((int)U3CU3Ec_tEC258EB98AF65A1BE301053497295EF287279612_il2cpp_TypeInfo_var->static_fields + 4)
         = pOVar4;
  }
  param_1->___onCameraLoad_52 = (Action_1_t527A6D6F6BE273E2A70069A6C93E516B9AFB4CAA *)pOVar4;
  if ((U3CU3Ec_tEC258EB98AF65A1BE301053497295EF287279612_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (U3CU3Ec_tEC258EB98AF65A1BE301053497295EF287279612_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(U3CU3Ec_tEC258EB98AF65A1BE301053497295EF287279612_il2cpp_TypeInfo_var)
    ;
  }
  pOVar4 = *(OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE **)
            ((int)U3CU3Ec_tEC258EB98AF65A1BE301053497295EF287279612_il2cpp_TypeInfo_var->
                  static_fields + 8);
  if (pOVar4 == (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
    if ((U3CU3Ec_tEC258EB98AF65A1BE301053497295EF287279612_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (U3CU3Ec_tEC258EB98AF65A1BE301053497295EF287279612_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (U3CU3Ec_tEC258EB98AF65A1BE301053497295EF287279612_il2cpp_TypeInfo_var);
    }
    pIVar1 = *(Il2CppObject **)
              U3CU3Ec_tEC258EB98AF65A1BE301053497295EF287279612_il2cpp_TypeInfo_var->static_fields;
    pOVar4 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
             il2cpp_codegen_object_new
                       (Action_1_t527A6D6F6BE273E2A70069A6C93E516B9AFB4CAA_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              (pOVar4,pIVar1,
               (int)
               U3CU3Ec_U3C_ctorU3Eb__83_1_mA552F070644583E38569607E3F2D20454A9A3E88_RuntimeMethod_var
               ,Action_1__ctor_m67DCB491C20915AD10BAFB0A53AF70D0C9CEE1C8_RuntimeMethod_var);
    *(OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE **)
     ((int)U3CU3Ec_tEC258EB98AF65A1BE301053497295EF287279612_il2cpp_TypeInfo_var->static_fields + 8)
         = pOVar4;
  }
  param_1->___onCameraSave_53 = (Action_1_t527A6D6F6BE273E2A70069A6C93E516B9AFB4CAA *)pOVar4;
  param_1->___milliseconds_54 = 8.0;
  param_1->___awaitingDim_56 = true;
  param_1->___lastChangeTime_60 = -1.0;
  param_1->___lastStartChangeTime_61 = -1.0;
  Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0
            ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,(MethodInfo *)0x0);
  return;
}
