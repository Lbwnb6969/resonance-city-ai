// RVA 0x74e5d0 | Placemaker.PaletteHolder$$.ctor
// PDB: PaletteHolder__ctor_mA1215E5A271B0448606BC991704C21E365B226BB
// Body: [[1074e5d0, 1074e6af]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 10a36df0 Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0

void __cdecl
PaletteHolder__ctor_mA1215E5A271B0448606BC991704C21E365B226BB
          (PaletteHolder_tF17DB451E623E6EBDCF01A847508D7229E367B0B *param_1,MethodInfo *param_2)

{
  Il2CppObject *pIVar1;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar2;

  if (DAT_1151ebe4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       U3CU3Ec_U3C_ctorU3Eb__7_0_mD1195BEE74231D9DB2C7BE95D62BEADF0A5317AE_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&U3CU3Ec_t8BCDF10373019FC6DF064ED15EFA5BAA8CEBDA7B_il2cpp_TypeInfo_var);
    DAT_1151ebe4 = '\x01';
  }
  if ((U3CU3Ec_t8BCDF10373019FC6DF064ED15EFA5BAA8CEBDA7B_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (U3CU3Ec_t8BCDF10373019FC6DF064ED15EFA5BAA8CEBDA7B_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(U3CU3Ec_t8BCDF10373019FC6DF064ED15EFA5BAA8CEBDA7B_il2cpp_TypeInfo_var)
    ;
  }
  pOVar2 = *(OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE **)
            ((int)U3CU3Ec_t8BCDF10373019FC6DF064ED15EFA5BAA8CEBDA7B_il2cpp_TypeInfo_var->
                  static_fields + 4);
  if (pOVar2 == (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) {
    if ((U3CU3Ec_t8BCDF10373019FC6DF064ED15EFA5BAA8CEBDA7B_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (U3CU3Ec_t8BCDF10373019FC6DF064ED15EFA5BAA8CEBDA7B_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (U3CU3Ec_t8BCDF10373019FC6DF064ED15EFA5BAA8CEBDA7B_il2cpp_TypeInfo_var);
    }
    pIVar1 = *(Il2CppObject **)
              U3CU3Ec_t8BCDF10373019FC6DF064ED15EFA5BAA8CEBDA7B_il2cpp_TypeInfo_var->static_fields;
    pOVar2 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
             il2cpp_codegen_object_new
                       (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              (pOVar2,pIVar1,
               (int)
               U3CU3Ec_U3C_ctorU3Eb__7_0_mD1195BEE74231D9DB2C7BE95D62BEADF0A5317AE_RuntimeMethod_var
               ,Action_1__ctor_mC14E24B188C6C29726CFCBC0E98734C95A1F6F7F_RuntimeMethod_var);
    *(OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE **)
     ((int)U3CU3Ec_t8BCDF10373019FC6DF064ED15EFA5BAA8CEBDA7B_il2cpp_TypeInfo_var->static_fields + 4)
         = pOVar2;
  }
  if (param_1 != (PaletteHolder_tF17DB451E623E6EBDCF01A847508D7229E367B0B *)0x0) {
    param_1->___onNewColor_7 = (Action_1_t080BA8EFA9616A494EBB4DD352BFEF943792E05B *)pOVar2;
    Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0
              ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
