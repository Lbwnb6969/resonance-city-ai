// RVA 0x74d190 | Placemaker.Ui.OrbitalCamera$$<OnDrawGizmos>g__GetPanPos|49_0
// PDB: OrbitalCamera_U3COnDrawGizmosU3Eg__GetPanPosU7C49_0_m0A7D5EE09E7F23A2B9A12BAF50F16160510DA649
// Body: [[1074d190, 1074d355]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103d28d0 Maker_get_graph_mD33281347090C58B9FA30C1BCB040A0BBE866792
// 10a43e90 Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
// 10e13a30 GridGenerator_HexToPlane_m4E9FDB9046A879244C75B203941031BF2515D0CA

Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __cdecl
OrbitalCamera_U3COnDrawGizmosU3Eg__GetPanPosU7C49_0_m0A7D5EE09E7F23A2B9A12BAF50F16160510DA649
          (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *__return_storage_ptr__,
          OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *param_1,float param_2,
          float param_3,float param_4,MethodInfo *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar5;
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar11;
  int iStack_30;
  int iStack_24;
  int local_1c;
  int local_10;
  float fStack_c;
  float local_8;

  if (DAT_1151ebda == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var)
    ;
    DAT_1151ebda = '\x01';
  }
  fVar7 = (param_2 - __real_3f000000) + __real_3f000000;
  fVar8 = (param_3 - __real_3f000000) + __real_3f000000;
  if (param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
    pGVar6 = Maker_get_graph_mD33281347090C58B9FA30C1BCB040A0BBE866792
                       ((Maker_t537981F2ED20294ACF4C94693B3268049739203D *)param_1->___master_4,
                        (MethodInfo *)0x0);
    if (pGVar6 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0) {
      uVar1 = (pGVar6->___bounds_28).___c0_0.___x_0;
      uVar3 = (pGVar6->___bounds_28).___c0_0.___y_1;
      if (param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
        pGVar6 = Maker_get_graph_mD33281347090C58B9FA30C1BCB040A0BBE866792
                           ((Maker_t537981F2ED20294ACF4C94693B3268049739203D *)param_1->___master_4,
                            (MethodInfo *)0x0);
        if (pGVar6 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0) {
          uVar2 = (pGVar6->___bounds_28).___c1_1.___x_0;
          uVar4 = (pGVar6->___bounds_28).___c1_1.___y_1;
          fVar9 = ((float)(int)uVar2 - (float)(int)uVar1) * fVar7 + (float)(int)uVar1;
          fVar10 = (float)((uint)fVar9 ^ __xmm_80000000800000008000000080000000);
          fVar7 = ((float)(int)uVar4 - (float)(int)uVar3) * fVar8 + (float)(int)uVar3;
          if ((GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->
               has_cctor != '\0') &&
             (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->
              cctor_finished == 0)) {
            il2cpp_runtime_class_init
                      (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var);
          }
          fVar5.___y_1 = fVar7;
          fVar5.___x_0 = fVar9;
          fVar5.___z_2 = fVar10 - fVar7;
          fVar11 = GridGenerator_HexToPlane_m4E9FDB9046A879244C75B203941031BF2515D0CA
                             (fVar5,(MethodInfo *)0x0);
          fStack_c = fVar11.___x_0;
          local_8 = fVar11.___y_1;
          if (param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
            pGVar6 = Maker_get_graph_mD33281347090C58B9FA30C1BCB040A0BBE866792
                               ((Maker_t537981F2ED20294ACF4C94693B3268049739203D *)
                                param_1->___master_4,(MethodInfo *)0x0);
            if (pGVar6 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0) {
              fVar7 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                                (0.0,(float)pGVar6->___boundsHeight_27,param_4,(MethodInfo *)0x0);
              __return_storage_ptr__->___x_2 = fStack_c;
              __return_storage_ptr__->___y_3 = fVar7;
              __return_storage_ptr__->___z_4 = local_8;
              return __return_storage_ptr__;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
