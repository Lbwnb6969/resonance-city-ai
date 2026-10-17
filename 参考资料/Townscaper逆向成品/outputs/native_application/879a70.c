// RVA 0x879a70 | Placemaker.Life.BirdFlock$$GetSearchCoordinates
// PDB: BirdFlock_GetSearchCoordinates_m311935888F7BF564C853BBD7AAB7E2CF1066C307
// Body: [[10879a70, 10879c28]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10674490 Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
// 10a439d0 Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F
// 10a43c00 Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E
// 10e43f50 ValueTuple_2__ctor_m76CC600F46BD16712F01FD46FC24C8A7224C7F9E_gshared

ValueTuple_2_t07BAEE521A8E0647776F76ED61C87E991CA45BFA * __cdecl
BirdFlock_GetSearchCoordinates_m311935888F7BF564C853BBD7AAB7E2CF1066C307
          (ValueTuple_2_t07BAEE521A8E0647776F76ED61C87E991CA45BFA *__return_storage_ptr__,
          BirdFlock_tB63DB4CEF81D7D9D17C18531A0BEEEA771442436 *param_1,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_2,float param_3,
          MethodInfo *param_4)

{
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar1;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar2;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_40;
  undefined8 local_34;
  float local_2c;
  undefined8 local_28;
  undefined8 local_1c;
  float local_10;
  float local_c;
  float local_8;

  if (DAT_1151f5c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ValueTuple_2__ctor_m76CC600F46BD16712F01FD46FC24C8A7224C7F9E_RuntimeMethod_var
              );
    DAT_1151f5c5 = '\x01';
  }
  pVVar3 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(&local_40,(MethodInfo *)0x0);
  local_28._0_4_ = pVVar3->___x_2;
  local_28._4_4_ = pVVar3->___y_3;
  local_2c = pVVar3->___z_4;
  local_34._0_4_ = pVVar3->___x_2;
  local_34._4_4_ = pVVar3->___y_3;
  local_8 = (float)local_28._4_4_ * param_3;
  fVar8 = local_2c * param_3;
  local_10 = ((float)(undefined4)local_28 * param_3 + param_2.___x_2) * __real_3f000000;
  local_1c = local_28;
  iVar4 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E
                    ((param_2.___x_2 - (float)(undefined4)local_28 * param_3) * __real_3f000000,
                     (MethodInfo *)0x0);
  local_34 = CONCAT44(local_34._4_4_,iVar4);
  local_c = (param_2.___z_4 - fVar8) * __real_3f000000;
  iVar4 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E
                    ((param_2.___y_3 - local_8) * __real_3f000000,(MethodInfo *)0x0);
  local_34 = CONCAT44(iVar4,(undefined4)local_34);
  iVar4 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(local_c,(MethodInfo *)0x0);
  iVar5 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(local_10,(MethodInfo *)0x0);
  fVar8 = (fVar8 + param_2.___z_4) * __real_3f000000;
  iVar6 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F
                    ((local_8 + param_2.___y_3) * __real_3f000000,(MethodInfo *)0x0);
  iVar7 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F(fVar8,(MethodInfo *)0x0);
  (__return_storage_ptr__->___Item1_0).___x_0 = 0;
  (__return_storage_ptr__->___Item1_0).___y_1 = 0;
  (__return_storage_ptr__->___Item1_0).___z_2 = 0;
  (__return_storage_ptr__->___Item2_1).___x_0 = 0;
  (__return_storage_ptr__->___Item2_1).___y_1 = 0;
  (__return_storage_ptr__->___Item2_1).___z_2 = 0;
  iVar1.___z_2 = iVar4;
  iVar1.___x_0 = (undefined4)local_34;
  iVar1.___y_1 = local_34._4_4_;
  iVar2.___y_1 = iVar6;
  iVar2.___x_0 = iVar5;
  iVar2.___z_2 = iVar7;
  ValueTuple_2__ctor_m76CC600F46BD16712F01FD46FC24C8A7224C7F9E_gshared
            (__return_storage_ptr__,iVar1,iVar2,
             ValueTuple_2__ctor_m76CC600F46BD16712F01FD46FC24C8A7224C7F9E_RuntimeMethod_var);
  return __return_storage_ptr__;
}
