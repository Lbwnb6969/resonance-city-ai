// RVA 0x836110 | Os.Utils.ExtraMath$$ClosestPointOnTriangle
// PDB: ExtraMath_ClosestPointOnTriangle_m6946757075C6AB3BEBE6E75C574E7A3FE6DBDB90
// Body: [[10836110, 10836261]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10836510 ExtraMath_GetBarycentric_m855A887AE2E1F99B102A5FFB1487CC53991744D6

Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __cdecl
ExtraMath_ClosestPointOnTriangle_m6946757075C6AB3BEBE6E75C574E7A3FE6DBDB90
          (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *__return_storage_ptr__,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_1,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_2,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_3,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_4,MethodInfo *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_28 [2];
  float local_10;

  if (DAT_1151f3c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    DAT_1151f3c4 = '\x01';
  }
  if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished ==
         0)) {
    il2cpp_runtime_class_init
              (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
  }
  pVVar4 = ExtraMath_GetBarycentric_m855A887AE2E1F99B102A5FFB1487CC53991744D6
                     (local_28,param_1,param_2,param_3,param_4,(MethodInfo *)0x0);
  uVar1 = pVVar4->___x_2;
  uVar2 = pVVar4->___y_3;
  fVar3 = pVVar4->___z_4;
  __return_storage_ptr__->___x_2 =
       param_3.___x_2 * (float)uVar2 + param_2.___x_2 * (float)uVar1 + param_4.___x_2 * fVar3;
  __return_storage_ptr__->___y_3 =
       param_3.___y_3 * (float)uVar2 + param_2.___y_3 * (float)uVar1 + param_4.___y_3 * fVar3;
  __return_storage_ptr__->___z_4 =
       param_3.___z_4 * (float)uVar2 + param_2.___z_4 * (float)uVar1 + param_4.___z_4 * fVar3;
  return __return_storage_ptr__;
}
