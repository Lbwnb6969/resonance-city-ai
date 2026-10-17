// RVA 0x41ada0 | Os.Utils.Intersections$$TriangleRay
// PDB: Intersections_TriangleRay_mBA4497D0B3FBF10A528328C1C5480D947D69BBA2
// Body: [[1041ada0, 1041b080]]
// Direct callees:
// 1026afc0 Enumerator_get_Current_m219A61A853F50E6015B3FE63741CFDF398F8A52F_gshared
// 105cc160 KeyValuePair_2_get_Key_m2B0C0B873F6584BDB82A68B27A42C13215562BB6_gshared
// 10673720 Vector3_Cross_m63414F0C545EBB616F339FF8830D37F9230736A4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
Intersections_TriangleRay_mBA4497D0B3FBF10A528328C1C5480D947D69BBA2
          (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_1,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_2,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_3,
          Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 param_4,MethodInfo *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar3;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar5;
  ValueTuple_3_tEF9008762923C50FBA1F5E13EFAE26235274202D *pVVar6;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar7;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *piVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_58;
  ValueTuple_3_tEF9008762923C50FBA1F5E13EFAE26235274202D local_4c;
  ValueTuple_3_tEF9008762923C50FBA1F5E13EFAE26235274202D local_40;
  ValueTuple_3_tEF9008762923C50FBA1F5E13EFAE26235274202D local_34;
  ValueTuple_3_tEF9008762923C50FBA1F5E13EFAE26235274202D local_28;
  float local_1c;
  float fStack_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;

  local_1c = param_2.___x_2 - param_1.___x_2;
  fStack_18 = param_2.___y_3 - param_1.___y_3;
  local_8 = param_3.___x_2 - param_1.___x_2;
  local_c = param_3.___y_3 - param_1.___y_3;
  local_58.___z_4 = param_3.___z_4 - param_1.___z_4;
  local_14 = param_2.___z_4 - param_1.___z_4;
  local_10 = local_1c;
  pVVar6 = Enumerator_get_Current_m219A61A853F50E6015B3FE63741CFDF398F8A52F_gshared
                     (&local_4c,(Enumerator_tDC59471D5148D9341C44E818E45BF04091D98514 *)&param_4,
                      (MethodInfo *)0x0);
  VVar4.___y_3 = local_c;
  VVar4.___x_2 = local_8;
  VVar4.___z_4 = local_58.___z_4;
  pVVar7 = Vector3_Cross_m63414F0C545EBB616F339FF8830D37F9230736A4
                     (&local_58,(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E)*pVVar6,VVar4,
                      (MethodInfo *)0x0);
  local_40.___Item1_0 = (Il2CppObject *)pVVar7->___x_2;
  local_40.___Item2_1 = (Il2CppObject *)pVVar7->___y_3;
  local_4c.___Item3_2 = (Il2CppObject *)pVVar7->___z_4;
  local_4c.___Item1_0 = (Il2CppObject *)pVVar7->___x_2;
  local_4c.___Item2_1 = (Il2CppObject *)pVVar7->___y_3;
  fVar9 = fStack_18 * (float)local_4c.___Item2_1 + local_10 * (float)local_40.___Item1_0 +
          (param_2.___z_4 - param_1.___z_4) * (float)local_4c.___Item3_2;
  if ((fVar9 <= ___real_80000001) || (__real_00000001 <= fVar9)) {
    fVar9 = __real_3f800000 / fVar9;
    local_40.___Item3_2 = local_4c.___Item3_2;
    local_34._0_8_ = local_4c._0_8_;
    local_34.___Item3_2 = local_4c.___Item3_2;
    local_28._0_8_ = local_40._0_8_;
    local_28.___Item3_2 = local_4c.___Item3_2;
    piVar8 = KeyValuePair_2_get_Key_m2B0C0B873F6584BDB82A68B27A42C13215562BB6_gshared
                       ((int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *)&local_34,
                        (KeyValuePair_2_tD00B4F68FA99B82C68481A84C9E582504AC3913E *)&param_4,
                        (MethodInfo *)0x0);
    local_4c.___Item1_0 = (Il2CppObject *)piVar8->___x_0;
    local_4c.___Item2_1 = (Il2CppObject *)piVar8->___y_1;
    local_58.___z_4 = (float)piVar8->___z_2;
    local_34.___Item1_0 = (Il2CppObject *)((float)local_4c.___Item1_0 - param_1.___x_2);
    local_58.___x_2 = (float)piVar8->___x_0;
    local_58.___y_3 = (float)piVar8->___y_1;
    local_34.___Item2_1 = (Il2CppObject *)((float)local_4c.___Item2_1 - param_1.___y_3);
    local_34.___Item3_2 = (Il2CppObject *)(local_58.___z_4 - param_1.___z_4);
    fVar10 = ((float)local_34.___Item1_0 * (float)local_28.___Item1_0 +
              (float)local_34.___Item2_1 * (float)local_28.___Item2_1 +
             (float)local_34.___Item3_2 * (float)local_28.___Item3_2) * fVar9;
    if ((0.0 <= fVar10) && (fVar10 <= __real_3f800000)) {
      VVar3.___z_4 = (float)local_34.___Item3_2;
      VVar3.___x_2 = (float)local_34.___Item1_0;
      VVar3.___y_3 = (float)local_34.___Item2_1;
      VVar5.___y_3 = fStack_18;
      VVar5.___x_2 = local_1c;
      VVar5.___z_4 = local_14;
      local_40._0_8_ = local_4c._0_8_;
      local_40.___Item3_2 = (Il2CppObject *)local_58.___z_4;
      pVVar7 = Vector3_Cross_m63414F0C545EBB616F339FF8830D37F9230736A4
                         (&local_58,VVar3,VVar5,(MethodInfo *)0x0);
      local_34.___Item1_0 = (Il2CppObject *)pVVar7->___x_2;
      local_34.___Item2_1 = (Il2CppObject *)pVVar7->___y_3;
      local_34.___Item3_2 = (Il2CppObject *)pVVar7->___z_4;
      pVVar6 = Enumerator_get_Current_m219A61A853F50E6015B3FE63741CFDF398F8A52F_gshared
                         (&local_28,(Enumerator_tDC59471D5148D9341C44E818E45BF04091D98514 *)&param_4
                          ,(MethodInfo *)0x0);
      uVar1 = pVVar6->___Item1_0;
      uVar2 = pVVar6->___Item2_1;
      fVar11 = ((float)local_34.___Item2_1 * (float)uVar2 +
                (float)local_34.___Item1_0 * (float)uVar1 +
               (float)local_34.___Item3_2 * (float)pVVar6->___Item3_2) * fVar9;
      if ((0.0 <= fVar11) && (fVar11 + fVar10 <= __real_3f800000)) {
        return __real_00000001 <
               ((float)local_34.___Item1_0 * local_8 + local_c * (float)local_34.___Item2_1 +
               (param_3.___z_4 - param_1.___z_4) * (float)local_34.___Item3_2) * fVar9;
      }
    }
  }
  return false;
}
