// RVA 0x3f4a20 | Placemaker.WaveFunctionCollapse$$OnDrawGizmos
// PDB: WaveFunctionCollapse_OnDrawGizmos_mF060DF2FC58611C21592C5B4E97CDD2013EDA3D0
// Body: [[103f4a20, 103f4b1f]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10267a70 Enumerator_MoveNext_m0B2C9CBAE032A4CDC37FD0014D2DB9FCF1CF2AAA_gshared
// 103f0cd0 WaveFunctionCollapse_DrawPropagationGizmo_m2758253CC9839CB047793E44C382F8F999601FCE
// 103f4b3a FUN_103f4b3a
// 10929360 List_1_GetEnumerator_m33D86DCCDEABB81C19C43D86384329C638768820_gshared
// 10a39cf0 Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9
// 10a3e840 Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F

void __cdecl
WaveFunctionCollapse_OnDrawGizmos_mF060DF2FC58611C21592C5B4E97CDD2013EDA3D0
          (WaveFunctionCollapse_t70F8917FC43B0A37E3BD8CD8D6F6B4C59214F8A9 *param_1,
          MethodInfo *param_2)

{
  Propagation_tFD3C7A39084AE25C9740FC8A98A0BCA4079543BA PVar1;
  undefined1 *puVar2;
  bool bVar3;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *pCVar4;
  Enumerator_t0DC239D1F15EC8F5087E71C9CD5051ACE82ECC94 *pEVar5;
  Enumerator_tDCDA72D8E356FA5D029699408566C8C3ABB834A6 local_80;
  undefined4 local_5c;
  undefined4 local_4c;
  Enumerator_t0DC239D1F15EC8F5087E71C9CD5051ACE82ECC94 local_48;
  undefined4 local_18;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &
              __ehhandler__WaveFunctionCollapse_OnDrawGizmos_mF060DF2FC58611C21592C5B4E97CDD2013EDA3D0
  ;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffff74;
  ExceptionList = &pvStack_10;
  puVar2 = &stack0xffffff74;
  if (DAT_1151c924 == '\0') {
    ExceptionList = &pvStack_10;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_Dispose_m3BEE7BD58B6E94D5B7984D74F3D82DB3044969E3_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_MoveNext_mE21B7F5CB49EECCB84E71872C553E1BBFA8890C0_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_get_Current_mF5A928BD970993C8846983BC992BEFA8B17F6DF8_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       List_1_GetEnumerator_mC744CE68921C25709FE287E352E1F2D0340A39A8_RuntimeMethod_var
              );
    DAT_1151c924 = '\x01';
    puVar2 = local_14;
  }
  local_14 = puVar2;
  local_18 = 0;
  local_4c = 0;
  pCVar4 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9
                     ((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)&local_48.___current_3,
                      (MethodInfo *)0x0);
  Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(*pCVar4,(MethodInfo *)0x0);
  if ((List_1_tDBABB161DDD6447C01B5B703F3E7E389D20F19B3 *)param_1->___propagations_9 !=
      (List_1_tDBABB161DDD6447C01B5B703F3E7E389D20F19B3 *)0x0) {
    pEVar5 = List_1_GetEnumerator_m33D86DCCDEABB81C19C43D86384329C638768820_gshared
                       (&local_48,
                        (List_1_tDBABB161DDD6447C01B5B703F3E7E389D20F19B3 *)
                        param_1->___propagations_9,
                        List_1_GetEnumerator_mC744CE68921C25709FE287E352E1F2D0340A39A8_RuntimeMethod_var
                       );
    local_80.___list_0 = (List_1_t6385EBDDE30490B871C23E14AC0B1FF5B8353639 *)pEVar5->___list_0;
    local_80.___index_1 = pEVar5->___index_1;
    local_80.___version_2 = pEVar5->___version_2;
    local_80.___current_3._0_4_ = (pEVar5->___current_3).___LozxQHDUasgVhVpgQCMsCoaOoRQa_0;
    local_80.___current_3.___hexPos_1.___x_0 =
         (pEVar5->___current_3).___nysCgOHzXLJTixhwqDGEUxXIXWD_1;
    local_80.___current_3.___hexPos_1.___y_1 =
         (pEVar5->___current_3).___EUPBgsPAuMbQGBNPvCGvIBIDZjKt_2;
    local_80.___current_3._12_4_ = (pEVar5->___current_3).___EgdvCLoZaqSUnykugCTymxPkenh_3;
    local_8 = 0;
    while( true ) {
      bVar3 = Enumerator_MoveNext_m0B2C9CBAE032A4CDC37FD0014D2DB9FCF1CF2AAA_gshared
                        (&local_80,
                         Enumerator_MoveNext_mE21B7F5CB49EECCB84E71872C553E1BBFA8890C0_RuntimeMethod_var
                        );
      if (!bVar3) break;
      PVar1._4_4_ = local_80.___current_3.___hexPos_1.___x_0;
      PVar1.___qube_0 =
           (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)local_80.___current_3._0_4_;
      PVar1.___existanceIndex_2 = local_80.___current_3.___hexPos_1.___y_1;
      PVar1.___sideVariationMask_3 = local_80.___current_3.___state_2;
      PVar1._13_3_ = local_80.___current_3._13_3_;
      WaveFunctionCollapse_DrawPropagationGizmo_m2758253CC9839CB047793E44C382F8F999601FCE
                (param_1,PVar1,(MethodInfo *)0x0);
    }
    local_5c = 0x40;
    local_4c = 1;
    FUN_103f4b3a();
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
