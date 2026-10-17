// RVA 0x3dd450 | Os.Utils.NumberStrings$$.cctor
// PDB: NumberStrings__cctor_m9227C08DB7CABF49DBC5A1E59A5C43DD2F7C2300
// Body: [[103dd450, 103dd4aa]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 10226660 Dictionary_2__ctor_mAA4C8F456AA58EC1FB154441680BCFAA27AD6183_gshared

void __cdecl NumberStrings__cctor_m9227C08DB7CABF49DBC5A1E59A5C43DD2F7C2300(MethodInfo *param_1)

{
  Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *pDVar1;

  if (DAT_1151c895 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2__ctor_mB40672A269C34DB22BA5BFAF2511631483E1690E_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&NumberStrings_t39B47F0B1EB955A843E414F391008CAFC80386D9_il2cpp_TypeInfo_var)
    ;
    DAT_1151c895 = '\x01';
  }
  pDVar1 = (Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C *)
           il2cpp_codegen_object_new
                     (Dictionary_2_t0ACB62D0885C7AB376463C70665400A39808C5FB_il2cpp_TypeInfo_var);
  Dictionary_2__ctor_mAA4C8F456AA58EC1FB154441680BCFAA27AD6183_gshared
            (pDVar1,Dictionary_2__ctor_mB40672A269C34DB22BA5BFAF2511631483E1690E_RuntimeMethod_var);
  *(Dictionary_2_tBF9E2338C61ABCF5ED32053F509AFB44385F774C **)
   NumberStrings_t39B47F0B1EB955A843E414F391008CAFC80386D9_il2cpp_TypeInfo_var->static_fields =
       pDVar1;
  return;
}
