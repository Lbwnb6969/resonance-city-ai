// RVA 0x3d8920 | Placemaker.ModuleBuilder$$GetTs
// PDB: ModuleBuilder_GetTs_m1A7BC1970FA6EA3FE1AB7D1CE412DC962A8A5271
// Body: [[103d8920, 103d89b5]]
// Direct callees:
// 102c1f90 TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
// 10674490 Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB

Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __cdecl
ModuleBuilder_GetTs_m1A7BC1970FA6EA3FE1AB7D1CE412DC962A8A5271
          (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *__return_storage_ptr__,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_1,MethodInfo *param_2)

{
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar1;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_28;
  undefined8 local_1c;
  float local_14;
  undefined8 local_10;

  pVVar1 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(&local_28,(MethodInfo *)0x0);
  local_1c._0_4_ = pVVar1->___x_2;
  local_1c._4_4_ = pVVar1->___y_3;
  local_14 = pVVar1->___z_4;
  __return_storage_ptr__->___x_1 = 0.0;
  __return_storage_ptr__->___y_2 = 0.0;
  __return_storage_ptr__->___z_3 = 0.0;
  __return_storage_ptr__->___w_4 = 0.0;
  local_10 = local_1c;
  TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
            ((TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 *)__return_storage_ptr__,
             (local_14 - param_1.___z_4) * ((float)(undefined4)local_1c - param_1.___x_2),
             (local_14 - param_1.___z_4) * param_1.___x_2,param_1.___z_4 * param_1.___x_2,
             ((float)(undefined4)local_1c - param_1.___x_2) * param_1.___z_4,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}
