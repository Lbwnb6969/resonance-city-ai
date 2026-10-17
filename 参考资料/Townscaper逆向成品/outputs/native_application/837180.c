// RVA 0x837180 | Os.Utils.ExtraMath$$.cctor
// PDB: ExtraMath__cctor_mCCFE2DCA5788794EC2B774CF313507D5396C468B
// Body: [[10837180, 108371c2]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10196f40 _libm_sse2_pow_precise

void __cdecl ExtraMath__cctor_mCCFE2DCA5788794EC2B774CF313507D5396C468B(MethodInfo *param_1)

{
  double dVar1;

  if (DAT_1151f3c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    DAT_1151f3c7 = '\x01';
  }
  dVar1 = __real_4000000000000000;
  _libm_sse2_pow_precise();
  *(float *)ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->static_fields =
       (float)dVar1;
  return;
}
