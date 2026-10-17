// RVA 0x8069a0 | Placemaker.Modules.Processing.ProtoModule$$get_worldPos
// PDB: ProtoModule_get_worldPos_mCA721999A96E54768EF7F644F7203D38F405990E
// Body: [[108069a0, 10806a93]]
// Direct callees:
// 10674190 Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
// 10674490 Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB

Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __cdecl
ProtoModule_get_worldPos_mCA721999A96E54768EF7F644F7203D38F405990E
          (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *__return_storage_ptr__,
          ProtoModule_tB9F872104A91728E3C611AD5E76A3A3AD663A701 *param_1,MethodInfo *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *extraout_EAX;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar3;
  float fVar4;
  float fVar5;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_40;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_34;
  float fStack_24;
  float local_1c;
  undefined8 local_10;
  float local_8;

  local_10._0_4_ = (float)(param_1->___coordinate_0).___x_0;
  local_10._4_4_ = (float)(param_1->___coordinate_0).___y_1;
  local_8 = (float)(param_1->___coordinate_0).___z_2;
  local_34.___x_2 = (float)(param_1->___coordinate_0).___x_0;
  local_34.___y_3 = (float)(param_1->___coordinate_0).___y_1;
  local_34.___z_4 = (float)(param_1->___coordinate_0).___z_2;
  Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
            (&local_34,(float)(int)(float)local_10,(float)(int)local_10._4_4_,local_34.___z_4,
             (MethodInfo *)0x0);
  local_10 = *extraout_EAX;
  local_8 = *(float *)(extraout_EAX + 1);
  pVVar3 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(&local_40,(MethodInfo *)0x0);
  uVar1 = pVVar3->___x_2;
  uVar2 = pVVar3->___y_3;
  fVar4 = pVVar3->___z_4 * __real_3f000000;
  fVar5 = (float)uVar2 * __real_3f000000;
  __return_storage_ptr__->___x_2 = (float)uVar1 * __real_3f000000 + (float)local_10;
  __return_storage_ptr__->___y_3 = fVar5 + local_10._4_4_;
  __return_storage_ptr__->___z_4 = fVar4 + local_8;
  return __return_storage_ptr__;
}
