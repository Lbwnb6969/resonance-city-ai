// RVA 0x835f60 | Os.Utils.ExtraMath$$ApplyRotate2DFactors
// PDB: ExtraMath_ApplyRotate2DFactors_mAD2EF46F7CE109410A691C9D1EB69EAA28BC9AB3
// Body: [[10835f60, 10835fa4]]
// Direct callees:

float2_tCB7B81181978EDE17722C533A55E345D9A413274 __cdecl
ExtraMath_ApplyRotate2DFactors_mAD2EF46F7CE109410A691C9D1EB69EAA28BC9AB3
          (float2_tCB7B81181978EDE17722C533A55E345D9A413274 param_1,
          float2_tCB7B81181978EDE17722C533A55E345D9A413274 param_2,MethodInfo *param_3)

{
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar1;

  fVar1.___y_1 = param_1.___y_1 * param_2.___x_0 + param_2.___y_1 * param_1.___x_0;
  fVar1.___x_0 = param_2.___x_0 * param_1.___x_0 - param_1.___y_1 * param_2.___y_1;
  return fVar1;
}
