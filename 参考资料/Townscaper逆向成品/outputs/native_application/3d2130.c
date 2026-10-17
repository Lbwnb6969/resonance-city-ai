// RVA 0x3d2130 | Placemaker.Maker$$PaintClick
// PDB: Maker_PaintClick_mA0D25C5EF9B2B1C715B388DE1A3E7990E727B05C
// Body: [[103d2130, 103d21f4]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103d1920 Maker_AddAction_m630C6F9FFCC6D52A0F1D02442BA3BF0A476AD6B5
// 103d1b50 Maker_BeginNewAction_m310ABB525D243F6B8F34DD4BA38B6AED68121FA6
// 103f8b10 WorldMaster_SetDirty_m9B0AB2549CDB37363A5C658018F0D6BD5A58FB54
// 103f8b50 WorldMaster_StartCounting_m1C8980E4643971850821AE4A0797965E2C9848D9
// 104131f0 HoverData_get_srcHexPos_m3111DA5A302DE07AA2109EE6D6F6946AD7A8D0AD
// 10e73610 Graph_PaintVoxel_m7ECDD0A161455FCE1CA2EDA1C01ACC965C328924

void __cdecl
Maker_PaintClick_mA0D25C5EF9B2B1C715B388DE1A3E7990E727B05C
          (Maker_t537981F2ED20294ACF4C94693B3268049739203D *param_1,
          HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *param_2,schar param_3,
          MethodInfo *param_4)

{
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar1;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar2;
  Action_t83AC0DDF06C96E2330A7F1FD4688409FD8704429 local_14;

  if ((param_2 != (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *)0x0) &&
     (param_2->___voxel_9 != (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)0x0)) {
    if (param_2->___voxel_9->___type_4 == param_3) {
      return;
    }
    if (param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) {
      WorldMaster_StartCounting_m1C8980E4643971850821AE4A0797965E2C9848D9
                (param_1->___master_4,(MethodInfo *)0x0);
      Maker_BeginNewAction_m310ABB525D243F6B8F34DD4BA38B6AED68121FA6(param_1,(MethodInfo *)0x0);
      iVar2 = HoverData_get_srcHexPos_m3111DA5A302DE07AA2109EE6D6F6946AD7A8D0AD
                        (param_2,(MethodInfo *)0x0);
      if (param_2->___voxel_9 != (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)0x0) {
        Maker_AddAction_m630C6F9FFCC6D52A0F1D02442BA3BF0A476AD6B5
                  (&local_14,param_1,iVar2,(uchar)param_2->___srcHeight_10,
                   param_2->___voxel_9->___type_4,param_3,(MethodInfo *)0x0);
        if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
           && (pGVar1 = param_1->___master_4->___graph_7,
              pGVar1 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) {
          Graph_PaintVoxel_m7ECDD0A161455FCE1CA2EDA1C01ACC965C328924
                    (pGVar1,param_2->___voxel_9,param_3,
                     (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0,(MethodInfo *)0x0);
          if (param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
          {
            WorldMaster_SetDirty_m9B0AB2549CDB37363A5C658018F0D6BD5A58FB54
                      (param_1->___master_4,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
