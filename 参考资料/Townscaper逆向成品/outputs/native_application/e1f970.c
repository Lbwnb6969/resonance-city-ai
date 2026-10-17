// RVA 0xe1f970 | Placemaker.GridGenerator$$UnmotivateBitChildren
// PDB: GridGenerator_UnmotivateBitChildren_mF908929B91A65FB891B215B7E1D58D18B198AC83
// Body: [[10e1f970, 10e1fa7a]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10227350 Dictionary_2_get_Item_mE1B2F7062D22B64BA21A5518CF0DE2A35A7B2E36_gshared
// 103dcef0 MotivationCounter_RemoveMotivation_m3047334055B8ECC6F01CFAF8E94626B272E7D23D
// 1040e0e0 HexMath_RotateCW_m1F06BA512B68F481438AB91DD226B756CC7DA1B7
// 10e1faf0 GridGenerator_UnmotivateClusterChildren_mB300EC8BB32EA947A751C1D01217C12F2DE58F33

void __cdecl
GridGenerator_UnmotivateBitChildren_mF908929B91A65FB891B215B7E1D58D18B198AC83
          (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *param_1,
          GridBit_t23465B0696352D0154A3D888F98761FDAED90C75 *param_2,MethodInfo *param_3)

{
  int iVar1;
  int iVar2;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar3;
  HexCluster_tBF30C42359904C9666E094787C2C4DB5F36A5C9B *pHVar4;
  int iVar5;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar6;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar7;

  if (DAT_11522664 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_get_Item_mA1E169C2153B920430B0826C6F354E4D50F6FFAC_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
    DAT_11522664 = '\x01';
  }
  if (param_2 != (GridBit_t23465B0696352D0154A3D888F98761FDAED90C75 *)0x0) {
    iVar1 = (param_2->___hexPos_4).___x_0;
    iVar2 = (param_2->___hexPos_4).___y_1;
    iVar3 = param_2->___hexPos_4;
    iVar6.___x_0 = 0x48;
    iVar6.___y_1 = -0x48;
    param_2 = (GridBit_t23465B0696352D0154A3D888F98761FDAED90C75 *)0x0;
    while( true ) {
      if ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)param_1->___clusterDict_12 ==
          (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0) break;
      iVar7.___y_1 = iVar2 + iVar6.___y_1;
      iVar7.___x_0 = iVar1 + iVar6.___x_0;
      pHVar4 = (HexCluster_tBF30C42359904C9666E094787C2C4DB5F36A5C9B *)
               Dictionary_2_get_Item_mE1B2F7062D22B64BA21A5518CF0DE2A35A7B2E36_gshared
                         ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                          param_1->___clusterDict_12,iVar7,
                          Dictionary_2_get_Item_mA1E169C2153B920430B0826C6F354E4D50F6FFAC_RuntimeMethod_var
                         );
      if (pHVar4 == (HexCluster_tBF30C42359904C9666E094787C2C4DB5F36A5C9B *)0x0) break;
      iVar5 = MotivationCounter_RemoveMotivation_m3047334055B8ECC6F01CFAF8E94626B272E7D23D
                        (&pHVar4->___motivations_1,iVar3,(MethodInfo *)0x0);
      if ((iVar5 == 0) && (pHVar4->___done_4 == false)) {
        GridGenerator_UnmotivateClusterChildren_mB300EC8BB32EA947A751C1D01217C12F2DE58F33
                  (param_1,pHVar4,(MethodInfo *)0x0);
      }
      if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished
             == 0)) {
        il2cpp_runtime_class_init
                  (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
      }
      iVar6 = HexMath_RotateCW_m1F06BA512B68F481438AB91DD226B756CC7DA1B7(iVar6,(MethodInfo *)0x0);
      param_2 = (GridBit_t23465B0696352D0154A3D888F98761FDAED90C75 *)((int)&param_2->_padding_ + 1);
      if (5 < (int)param_2) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
