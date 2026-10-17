// RVA 0x3015a0 | Placemaker.TextSaveAlphabet$$.cctor
// PDB: TextSaveAlphabet__cctor_m284BE63B7D5250592FA102B5D5D80B627AFF57D4
// Body: [[103015a0, 10301664]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10225cb0 Dictionary_2__ctor_m12FE70A54A1FBD146CB345A06031AB8A5DB02BBA_gshared
// 10cf75f0 Dictionary_2_Add_m0FF70AAADDD2640FDE073BB8D7573E95DD3C5954_gshared
// 10f09d80 String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70

void __cdecl TextSaveAlphabet__cctor_m284BE63B7D5250592FA102B5D5D80B627AFF57D4(MethodInfo *param_1)

{
  Dictionary_2_tEA4B2BF0506761EBF1E0D271C1D279EC2F5AB787 *pDVar1;
  String_t *pSVar2;
  Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 *pDVar3;
  ContainerID_t776BD2D5F21768F1E61C66C18445FBD00AA09259 CVar4;
  Il2CppObject *pIVar5;

  if (DAT_1151c21b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Dictionary_2_Add_m4815E568AB7190528D67DBB7E33A46437EC7D1FF_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2__ctor_m0AD26BFE874167A54C0E778949CF826982A25E1E_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Dictionary_2_t6038072EFAE5A8CB14D22025B7FDAC58A3F65A52_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       TextSaveAlphabet_t945404E53821F386E7B732C38AE12CC2CE674063_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral7444F7B64352DCD10A83EC46EF14DB67398371EE);
    DAT_1151c21b = '\x01';
  }
  *(String_t **)
   TextSaveAlphabet_t945404E53821F386E7B732C38AE12CC2CE674063_il2cpp_TypeInfo_var->static_fields =
       _stringLiteral7444F7B64352DCD10A83EC46EF14DB67398371EE;
  pDVar3 = (Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 *)
           il2cpp_codegen_object_new
                     (Dictionary_2_t6038072EFAE5A8CB14D22025B7FDAC58A3F65A52_il2cpp_TypeInfo_var);
  Dictionary_2__ctor_m12FE70A54A1FBD146CB345A06031AB8A5DB02BBA_gshared
            (pDVar3,0x40,
             Dictionary_2__ctor_m0AD26BFE874167A54C0E778949CF826982A25E1E_RuntimeMethod_var);
  *(Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 **)
   ((int)TextSaveAlphabet_t945404E53821F386E7B732C38AE12CC2CE674063_il2cpp_TypeInfo_var->
         static_fields + 4) = pDVar3;
  pIVar5 = (Il2CppObject *)0x0;
  while( true ) {
    pDVar1 = *(Dictionary_2_tEA4B2BF0506761EBF1E0D271C1D279EC2F5AB787 **)
              ((int)TextSaveAlphabet_t945404E53821F386E7B732C38AE12CC2CE674063_il2cpp_TypeInfo_var->
                    static_fields + 4);
    pSVar2 = *(String_t **)
              TextSaveAlphabet_t945404E53821F386E7B732C38AE12CC2CE674063_il2cpp_TypeInfo_var->
              static_fields;
    if (pSVar2 == (String_t *)0x0) break;
    CVar4.___id_0._0_2_ =
         String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70
                   (pSVar2,(int)pIVar5,(MethodInfo *)0x0);
    CVar4.___id_0._2_2_ = 0;
    if (pDVar1 == (Dictionary_2_tEA4B2BF0506761EBF1E0D271C1D279EC2F5AB787 *)0x0) break;
    Dictionary_2_Add_m0FF70AAADDD2640FDE073BB8D7573E95DD3C5954_gshared
              (pDVar1,CVar4,pIVar5,
               Dictionary_2_Add_m4815E568AB7190528D67DBB7E33A46437EC7D1FF_RuntimeMethod_var);
    pIVar5 = (Il2CppObject *)((int)&(pIVar5->field0_0x0).klass + 1);
    if (0x3f < (int)pIVar5) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
