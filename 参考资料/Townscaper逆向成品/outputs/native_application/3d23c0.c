// RVA 0x3d23c0 | Placemaker.Maker$$RemoveClick
// PDB: Maker_RemoveClick_m1830983BD9D284082906340AB4252854C311ECCA
// Body: [[103d23c0, 103d247b]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103d1920 Maker_AddAction_m630C6F9FFCC6D52A0F1D02442BA3BF0A476AD6B5
// 103d1b50 Maker_BeginNewAction_m310ABB525D243F6B8F34DD4BA38B6AED68121FA6
// 103f8b10 WorldMaster_SetDirty_m9B0AB2549CDB37363A5C658018F0D6BD5A58FB54
// 103f8b50 WorldMaster_StartCounting_m1C8980E4643971850821AE4A0797965E2C9848D9
// 10411420 HoverData_GetSrcPos_m4EC1E23C74B50F9FDC82C2434092898EC88085D8
// 104131f0 HoverData_get_srcHexPos_m3111DA5A302DE07AA2109EE6D6F6946AD7A8D0AD
// 10e73950 Graph_RemoveVoxel_m9B246D14F5015274B972E354D37931BBF4DAA64B

Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 * __cdecl
Maker_RemoveClick_m1830983BD9D284082906340AB4252854C311ECCA
          (Maker_t537981F2ED20294ACF4C94693B3268049739203D *param_1,
          HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *param_2,MethodInfo *param_3)

{
  float fVar1;
  Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *pVVar2;
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar3;
  float fVar4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar5;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar6;
  undefined1 local_14 [16];

  if (param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) {
    WorldMaster_StartCounting_m1C8980E4643971850821AE4A0797965E2C9848D9
              (param_1->___master_4,(MethodInfo *)0x0);
    Maker_BeginNewAction_m310ABB525D243F6B8F34DD4BA38B6AED68121FA6(param_1,(MethodInfo *)0x0);
    if (param_2 != (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *)0x0) {
      pVVar5 = HoverData_GetSrcPos_m4EC1E23C74B50F9FDC82C2434092898EC88085D8
                         ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(local_14 + 4),
                          param_2,(MethodInfo *)0x0);
      fVar4 = pVVar5->___y_3;
      fVar1 = pVVar5->___z_4;
      (param_1->___lastActionPos_13).___x_2 = pVVar5->___x_2;
      (param_1->___lastActionPos_13).___y_3 = fVar4;
      (param_1->___lastActionPos_13).___z_4 = fVar1;
      pVVar2 = param_2->___voxel_9;
      iVar6 = HoverData_get_srcHexPos_m3111DA5A302DE07AA2109EE6D6F6946AD7A8D0AD
                        (param_2,(MethodInfo *)0x0);
      if (pVVar2 != (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)0x0) {
        Maker_AddAction_m630C6F9FFCC6D52A0F1D02442BA3BF0A476AD6B5
                  ((Action_t83AC0DDF06C96E2330A7F1FD4688409FD8704429 *)local_14,param_1,iVar6,
                   pVVar2->___height_5,pVVar2->___type_4,'\x12',(MethodInfo *)0x0);
        if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
           && (pGVar3 = param_1->___master_4->___graph_7,
              pGVar3 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) {
          Graph_RemoveVoxel_m9B246D14F5015274B972E354D37931BBF4DAA64B
                    (pGVar3,pVVar2,(MethodInfo *)0x0);
          if (param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
          {
            WorldMaster_SetDirty_m9B0AB2549CDB37363A5C658018F0D6BD5A58FB54
                      (param_1->___master_4,(MethodInfo *)0x0);
            return pVVar2;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
