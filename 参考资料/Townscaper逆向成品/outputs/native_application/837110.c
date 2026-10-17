// RVA 0x837110 | Os.Utils.ExtraMath$$ToneOffsetToPitch
// PDB: ExtraMath_ToneOffsetToPitch_m7DDC3C4DF35F61E983B815FB51B2832CAFFE5C85
// Body: [[10837110, 10837176]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10196f40 _libm_sse2_pow_precise

float __cdecl
ExtraMath_ToneOffsetToPitch_m7DDC3C4DF35F61E983B815FB51B2832CAFFE5C85
          (float param_1,MethodInfo *param_2)

{
  double dVar1;

  if (DAT_1151f3c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    DAT_1151f3c6 = '\x01';
  }
  if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished ==
         0)) {
    il2cpp_runtime_class_init
              (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
  }
  dVar1 = (double)*(float *)ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                            ->static_fields;
  _libm_sse2_pow_precise();
  return (float)dVar1;
}
