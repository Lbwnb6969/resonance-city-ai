// RVA 0x50dba0 | Placemaker.Props.PropRadiusIterator<object>$$.ctor
// PDB: PropRadiusIterator_1__ctor_mBD0807D309B64C5982B153A3518D795F55CD09FB_gshared
// Body: [[1050dba0, 1050dd58]]
// Direct callees:
// 10674490 Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
// 10a439d0 Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F
// 10a43c00 Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E

void __cdecl
PropRadiusIterator_1__ctor_mBD0807D309B64C5982B153A3518D795F55CD09FB_gshared
          (PropRadiusIterator_1_tF97ABBEB2B236EE38E1FF37B9F625A2553E8FB5B *param_1,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_2,float param_3,
          PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 *param_4,MethodInfo *param_5)

{
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_38;
  undefined8 local_2c;
  float local_24;
  undefined8 local_20;
  undefined8 local_14;
  float local_8;

  param_1->___current_10 = (Il2CppObject *)0x0;
  (param_1->___pos_2).___x_2 = (float)(int)param_2._0_8_;
  (param_1->___pos_2).___y_3 = (float)(int)((ulonglong)param_2._0_8_ >> 0x20);
  param_1->___propPlacer_0 = param_4;
  (param_1->___pos_2).___z_4 = param_2.___z_4;
  param_1->___propColliders_7 = (List_1_t15CF91E92C33A07873F981A10DFE64183E1C1BB6 *)0x0;
  param_1->___sqRadius_1 = param_3 * param_3;
  pVVar1 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(&local_38,(MethodInfo *)0x0);
  local_20._0_4_ = pVVar1->___x_2;
  local_20._4_4_ = pVVar1->___y_3;
  local_24 = pVVar1->___z_4;
  local_2c._0_4_ = pVVar1->___x_2;
  local_2c._4_4_ = pVVar1->___y_3;
  fVar6 = (param_2.___y_3 - (float)local_20._4_4_ * param_3) * __real_3f000000;
  fVar7 = (param_2.___z_4 - local_24 * param_3) * __real_3f000000;
  local_8 = (param_2.___z_4 + local_24 * param_3) * __real_3f000000;
  fVar8 = ((float)(undefined4)local_20 * param_3 + param_2.___x_2) * __real_3f000000;
  fVar5 = ((float)local_20._4_4_ * param_3 + param_2.___y_3) * __real_3f000000;
  local_14 = local_20;
  iVar2 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E
                    ((param_2.___x_2 - (float)(undefined4)local_20 * param_3) * __real_3f000000,
                     (MethodInfo *)0x0);
  local_2c = CONCAT44(local_2c._4_4_,iVar2);
  iVar2 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(fVar6,(MethodInfo *)0x0);
  local_2c = CONCAT44(iVar2,(undefined4)local_2c);
  iVar2 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(fVar7,(MethodInfo *)0x0);
  (param_1->___min_8).___x_0 = (undefined4)local_2c;
  (param_1->___min_8).___y_1 = local_2c._4_4_;
  (param_1->___min_8).___z_2 = iVar2;
  iVar2 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(fVar8,(MethodInfo *)0x0);
  iVar3 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(fVar5,(MethodInfo *)0x0);
  iVar4 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(local_8,(MethodInfo *)0x0);
  (param_1->___max_9).___x_0 = iVar2;
  (param_1->___max_9).___y_1 = iVar3;
  (param_1->___max_9).___z_2 = iVar4;
  param_1->___i_6 = -1;
  param_1->___x_3 = (param_1->___min_8).___x_0 + -1;
  param_1->___y_4 = (param_1->___min_8).___y_1;
  param_1->___z_5 = (param_1->___min_8).___z_2;
  return;
}
