// RVA 0x74cfd0 | Placemaker.Ui.OrbitalCamera$$SetBounds
// PDB: OrbitalCamera_SetBounds_m4B90E234D824CFA7F324BBFD62D0D28434FE8828
// Body: [[1074cfd0, 1074d0a7]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103d28d0 Maker_get_graph_mD33281347090C58B9FA30C1BCB040A0BBE866792
// 1066da00 Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258

void __cdecl
OrbitalCamera_SetBounds_m4B90E234D824CFA7F324BBFD62D0D28434FE8828
          (OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *param_1,MethodInfo *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar6;
  float fVar7;
  int local_24;
  int iStack_20;

  if (param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
    pGVar6 = Maker_get_graph_mD33281347090C58B9FA30C1BCB040A0BBE866792
                       ((Maker_t537981F2ED20294ACF4C94693B3268049739203D *)param_1->___master_4,
                        (MethodInfo *)0x0);
    if (pGVar6 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0) {
      iVar3 = (pGVar6->___bounds_28).___c0_0.___y_1;
      iVar4 = (pGVar6->___bounds_28).___c0_0.___z_2;
      iVar5 = (pGVar6->___bounds_28).___c1_1.___x_0;
      uVar1 = (pGVar6->___bounds_28).___c1_1.___y_1;
      uVar2 = (pGVar6->___bounds_28).___c1_1.___z_2;
      (param_1->___boundsTarget_21).___c0_0.___x_0 = (float)(pGVar6->___bounds_28).___c0_0.___x_0;
      (param_1->___boundsTarget_21).___c0_0.___y_1 = (float)iVar3;
      (param_1->___boundsTarget_21).___c0_0.___z_2 = (float)iVar4;
      (param_1->___boundsTarget_21).___c1_1.___x_0 = (float)iVar5;
      (param_1->___boundsTarget_21).___c1_1.___y_1 = (float)(int)uVar1;
      (param_1->___boundsTarget_21).___c1_1.___z_2 = (float)(int)uVar2;
      fVar7 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0);
      param_1->___lastBoundsChangeTime_30 = fVar7;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
