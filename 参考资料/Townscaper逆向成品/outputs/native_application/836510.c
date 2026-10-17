// RVA 0x836510 | Os.Utils.ExtraMath$$GetBarycentric
// PDB: ExtraMath_GetBarycentric_m855A887AE2E1F99B102A5FFB1487CC53991744D6
// Body: [[10836510, 108367ae]]
// Direct callees:
// 10a43ab0 Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C

Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __cdecl
ExtraMath_GetBarycentric_m855A887AE2E1F99B102A5FFB1487CC53991744D6
          (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *__return_storage_ptr__,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_1,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_2,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_3,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_4,MethodInfo *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;

  __return_storage_ptr__->___x_2 = 0.0;
  fVar9 = __real_3f800000;
  fVar7 = param_3.___x_2 - param_2.___x_2;
  fVar10 = param_3.___y_3 - param_2.___y_3;
  fVar14 = param_3.___z_4 - param_2.___z_4;
  fVar12 = param_4.___z_4 - param_2.___z_4;
  fVar8 = param_4.___x_2 - param_2.___x_2;
  fVar13 = param_4.___y_3 - param_2.___y_3;
  fVar15 = fVar10 * fVar10 + fVar7 * fVar7 + fVar14 * fVar14;
  fVar16 = fVar13 * fVar10 + fVar8 * fVar7 + fVar12 * fVar14;
  fVar11 = fVar13 * fVar13 + fVar8 * fVar8 + fVar12 * fVar12;
  fVar10 = (param_1.___y_3 - param_2.___y_3) * fVar10 + (param_1.___x_2 - param_2.___x_2) * fVar7 +
           (param_1.___z_4 - param_2.___z_4) * fVar14;
  fVar7 = (param_1.___y_3 - param_2.___y_3) * fVar13 + (param_1.___x_2 - param_2.___x_2) * fVar8 +
          (param_1.___z_4 - param_2.___z_4) * fVar12;
  fVar8 = __real_3f800000 / (fVar11 * fVar15 - fVar16 * fVar16);
  __return_storage_ptr__->___z_4 = (fVar7 * fVar15 - fVar10 * fVar16) * fVar8;
  __return_storage_ptr__->___y_3 = (fVar10 * fVar11 - fVar7 * fVar16) * fVar8;
  uVar3 = __return_storage_ptr__->___y_3;
  fVar9 = (fVar9 - (float)uVar3) - __return_storage_ptr__->___z_4;
  __return_storage_ptr__->___x_2 = fVar9;
  fVar9 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(fVar9,(MethodInfo *)0x0);
  __return_storage_ptr__->___x_2 = fVar9;
  uVar4 = __return_storage_ptr__->___y_3;
  fVar9 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C((float)uVar4,(MethodInfo *)0x0);
  __return_storage_ptr__->___y_3 = fVar9;
  fVar9 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C
                    (__return_storage_ptr__->___z_4,(MethodInfo *)0x0);
  __return_storage_ptr__->___z_4 = fVar9;
  uVar1 = __return_storage_ptr__->___x_2;
  uVar5 = __return_storage_ptr__->___y_3;
  fVar9 = __return_storage_ptr__->___z_4;
  uVar2 = __return_storage_ptr__->___x_2;
  uVar6 = __return_storage_ptr__->___y_3;
  fVar7 = (float)uVar2 + (float)uVar5 + fVar9;
  __return_storage_ptr__->___x_2 = (float)uVar1 / fVar7;
  __return_storage_ptr__->___y_3 = (float)uVar6 / fVar7;
  __return_storage_ptr__->___z_4 = fVar9 / fVar7;
  return __return_storage_ptr__;
}
