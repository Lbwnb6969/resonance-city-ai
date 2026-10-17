// RVA 0x3f7b30 | Placemaker.WorldMaster$$Iterate
// PDB: WorldMaster_Iterate_mAB1D38EDB8394C82044F067D5E245C0CD7D91844
// Body: [[103f7b30, 103f7e58] [103f7e5c, 103f8233]]
// Direct callees:
// 10068f00 List_1_get_Item_m8152EFAA8551BC863D0AACFEFD4C0E3B50B212A0_inline
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 101e4d10 WorldMeshes_IterateRefillPools_m1994ADA12285ACAB2A823AE3B539E3C4C2A1A852
// 103261e0 UnityAction_1_Invoke_mB133B86EE623F225FC5B3B7C86B609072E8D0013_gshared
// 103d1d90 Maker_ClearUndoQueue_m9787B1C9A4798042F4588C9128018EBB2788AFFE
// 103d7130 ModuleBuilder_ApplyModule_mC34009A53139A9C8144EACD72D80C9E5F18FF0F1
// 103d89c0 ModuleBuilder_IterateDeconstructQubes_m8A4587AB8A18C55FE789A1931C0BA788C159C70A
// 103d8a80 ModuleBuilder_Iterate_m427B2A36E662B0568BF0BD55CB2C1E8E7E52B6F1
// 103f2ab0 WaveFunctionCollapse_Iterate0_m0EE168F3B6682BA0A80DC8DEAC638C37D5A94548
// 103f3000 WaveFunctionCollapse_Iterate1_m0C5AA36B072C60019E049DC3FFE51CC3A209BE6C
// 103f3980 WaveFunctionCollapse_IterateDecor_mDE248883BA48839F73C397E808CF3E734808A631
// 103f82e0 WorldMaster_KeepGoing_m59580CCA8E6403127024D1F0E71CF65DA50FA4E9
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 105d1fe0 List_1_RemoveRange_m3775CEC5D6576A395D657F5D0382875DA79D542B_gshared
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 10756d40 PropMeshAnimator_OnReset_mBF40F8779B80E2AEB170D4E9CEE8F6EBAD663146
// 1075b280 PropPlacer_IterateDeconstructProps_mEDD9FD340D7FACEF220200E85AA260E43EC45ED4
// 1075b320 PropPlacer_OnDoneResetting_mD3BB9F2C178E5AC4FBF9D74170350ECC05A7FE4C
// 1075b950 PropPlacer_OnReset_m17932C9D0ED50473A05E43592C13956EF62D25F1
// 10815be0 Sandbanker_Clear_m034351E7DFF724A163F228D277C5BD7F48D63BDF
// 10815c40 Sandbanker_Iterate_m1384DB16A2ACFD8D997ADDF210FDF5FECDB69C8F
// 10879c30 BirdFlock_IterateBirdCreation_mBA1DFB588752021D7B8E6FE66F2E846F556FFE04
// 1087ad70 BirdFlock_OnReset_m261CC66C8482D2A43C97315404268011DB886E60
// 10881150 ButterflyFlock_OnReset_m8496535586D73602C055977C0AE5665D7849CF9B
// 10a02080 SaveSystem_IterateRefresh_m9CEAC873A577B18052312BDCA37D15DBF7DDC293
// 10a09830 ShadowBaker_BakeShadow_m8775EC33DC0B63801BEA101C4C6605195D807522
// 10a09b90 ShadowBaker_Load_mB4E192673934C8BE22F0DB035A2358E964247089
// 10a0ab60 ShadowBaker_OnBuilt_m7FB7CD582AB40590729069B855C8DB6BF751B2D6
// 10a0b010 ShadowBaker_SetFramingDirty_m47E523A2F2A9759692EFE35DCA7384E80CB1805B
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 10e16200 GridGenerator_IterateBits_m2290B4B0850924B74F7147F88BF533F6AB7826DD
// 10e172e0 GridGenerator_IterateFocus_m59B2EC815F89CDB4FC2748E9C3B3CE9A879214A6
// 10e177e0 GridGenerator_IterateGenerateCenter_m4D54C84008E6731BFD51B7C7D6450D8410CB0108
// 10e6b7b0 Graph_BeginLoad_mBAFD3D25247A1C4A96E10FA70A701D06633CDD05
// 10e6fbe0 Graph_IterateFocus_mE682A4A560119B8AEC7F02839C5C3271ACB712A3
// 10e71200 Graph_IterateLoad_m6B9CB4264920C31DFFDAECBAE4E1AB6281DF7C43
// 10e71d80 Graph_IterateRefillPools_m86828483DCA9FB1B6E025354376F3E41F90A3864
// 10e71f20 Graph_Iterate_m6AF39F16DDE2E3C03D4E2CF021D0DFDAC392B4DB

bool __cdecl
WorldMaster_Iterate_mAB1D38EDB8394C82044F067D5E245C0CD7D91844
          (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *param_1,MethodInfo *param_2)

{
  List_1_t9135BBA17EC44986E18786359559A3877CE31660 *pLVar1;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *pQVar2;
  List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *pLVar3;
  WaveFunctionCollapse_t70F8917FC43B0A37E3BD8CD8D6F6B4C59214F8A9 *pWVar4;
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar5;
  GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *pGVar6;
  SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *pSVar7;
  bool bVar8;
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar9;
  OrientedModuleSides_t8D2DE3D6C0300C6D8AED6EA5474A004453F962AB *pOVar10;
  int iVar11;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar12;
  int iVar13;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar14;
  Il2CppObject *pIVar15;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar16;
  WaveFunctionCollapse_t70F8917FC43B0A37E3BD8CD8D6F6B4C59214F8A9 *pWVar17;
  OrientedModuleSides_t8D2DE3D6C0300C6D8AED6EA5474A004453F962AB local_28;
  WaveFunctionCollapse_t70F8917FC43B0A37E3BD8CD8D6F6B4C59214F8A9 *local_c;
  ModuleBuilder_tFCFAE83D48DBD41C4857996F87A7E264CB31D6B0 *local_8;

  if (DAT_1151c945 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_1_Invoke_m9EE9B35D93184158C0634B10A576D643D967B25A_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       WorldMaster_KeepGoing_m59580CCA8E6403127024D1F0E71CF65DA50FA4E9_RuntimeMethod_var
              );
    DAT_1151c945 = '\x01';
  }
  switch(param_1->___state_57) {
  default:
    goto switchD_103f7b89_caseD_0;
  case '\x01':
  case '\'':
    goto switchD_103f7b89_caseD_1;
  case '\x02':
    if (param_1->___sandbanker_22 != (Sandbanker_t40E4E38CA328AA7AA0BA6530A0D474792DEA22E3 *)0x0) {
      Sandbanker_Clear_m034351E7DFF724A163F228D277C5BD7F48D63BDF
                (param_1->___sandbanker_22,(MethodInfo *)0x0);
      if (param_1->___flock_21 != (BirdFlock_tB63DB4CEF81D7D9D17C18531A0BEEEA771442436 *)0x0) {
        BirdFlock_OnReset_m261CC66C8482D2A43C97315404268011DB886E60
                  (param_1->___flock_21,(MethodInfo *)0x0);
        if (param_1->___butterflyFlock_30 !=
            (ButterflyFlock_t232314275686A150CB7BF02C9493FBAB75C6DDFD *)0x0) {
          ButterflyFlock_OnReset_m8496535586D73602C055977C0AE5665D7849CF9B
                    (param_1->___butterflyFlock_30,(MethodInfo *)0x0);
          if (param_1->___propPlacer_19 !=
              (PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 *)0x0) {
            PropPlacer_OnReset_m17932C9D0ED50473A05E43592C13956EF62D25F1
                      (param_1->___propPlacer_19,(MethodInfo *)0x0);
            if (param_1->___shadowBaker_31 !=
                (ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427 *)0x0) {
              ShadowBaker_Load_mB4E192673934C8BE22F0DB035A2358E964247089
                        (param_1->___shadowBaker_31,param_1->___saveData_42,(MethodInfo *)0x0);
              if (param_1->___maker_6 != (Maker_t537981F2ED20294ACF4C94693B3268049739203D *)0x0) {
                Maker_ClearUndoQueue_m9787B1C9A4798042F4588C9128018EBB2788AFFE
                          (param_1->___maker_6,(MethodInfo *)0x0);
                goto LAB_103f7c1a;
              }
            }
          }
        }
      }
    }
    goto LAB_103f822f;
  case '\x03':
  case '\v':
  case '#':
    if (param_1->___moduleBuilder_16 ==
        (ModuleBuilder_tFCFAE83D48DBD41C4857996F87A7E264CB31D6B0 *)0x0) goto LAB_103f822f;
    bVar8 = ModuleBuilder_IterateDeconstructQubes_m8A4587AB8A18C55FE789A1931C0BA788C159C70A
                      (param_1->___moduleBuilder_16,(MethodInfo *)0x0);
    break;
  case '\x04':
  case '\f':
  case '$':
    if (param_1->___propPlacer_19 == (PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 *)0x0)
    goto LAB_103f822f;
    bVar8 = PropPlacer_IterateDeconstructProps_mEDD9FD340D7FACEF220200E85AA260E43EC45ED4
                      (param_1->___propPlacer_19,(MethodInfo *)0x0);
    break;
  case '\x05':
    if (param_1->___propMeshAnimator_28 !=
        (PropMeshAnimator_tAF8D79D16BC77F3BB624F43819B4332F1B422A82 *)0x0) {
      PropMeshAnimator_OnReset_mBF40F8779B80E2AEB170D4E9CEE8F6EBAD663146
                (param_1->___propMeshAnimator_28,(MethodInfo *)0x0);
      param_1->___state_57 = param_1->___state_57 + '\x01';
      return true;
    }
    goto LAB_103f822f;
  case '\x06':
    if (param_1->___awaitingDim_56 != false) {
      return true;
    }
    goto switchD_103f7b89_caseD_1;
  case '\a':
    if (param_1->___graph_7 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0) {
      Graph_BeginLoad_mBAFD3D25247A1C4A96E10FA70A701D06633CDD05
                (param_1->___graph_7,param_1->___saveData_42,(MethodInfo *)0x0);
      param_1->___state_57 = param_1->___state_57 + '\x01';
      return true;
    }
    goto LAB_103f822f;
  case '\b':
    if (param_1->___graph_7 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)
    goto LAB_103f822f;
    bVar8 = Graph_IterateLoad_m6B9CB4264920C31DFFDAECBAE4E1AB6281DF7C43
                      (param_1->___graph_7,param_1->___saveData_42,(MethodInfo *)0x0);
    break;
  case '\t':
  case '\x14':
    if (param_1->___graph_7 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)
    goto LAB_103f822f;
    bVar8 = Graph_IterateFocus_mE682A4A560119B8AEC7F02839C5C3271ACB712A3
                      (param_1->___graph_7,(MethodInfo *)0x0);
    break;
  case '\n':
    if ((UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A *)param_1->___onCameraLoad_52 !=
        (UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A *)0x0) {
      UnityAction_1_Invoke_mB133B86EE623F225FC5B3B7C86B609072E8D0013_gshared
                ((UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A *)
                 param_1->___onCameraLoad_52,(Il2CppObject *)param_1->___saveData_42,
                 Action_1_Invoke_m9EE9B35D93184158C0634B10A576D643D967B25A_RuntimeMethod_var);
      param_1->___state_57 = param_1->___state_57 + '\x01';
      return true;
    }
    goto LAB_103f822f;
  case '\r':
  case '\x15':
    if (param_1->___grid_5 == (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *)0x0)
    goto LAB_103f822f;
    bVar8 = GridGenerator_IterateFocus_m59B2EC815F89CDB4FC2748E9C3B3CE9A879214A6
                      (param_1->___grid_5,(MethodInfo *)0x0);
    break;
  case '\x0e':
  case '\x16':
    if (param_1->___graph_7 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)
    goto LAB_103f822f;
    bVar8 = Graph_Iterate_m6AF39F16DDE2E3C03D4E2CF021D0DFDAC392B4DB
                      (param_1->___graph_7,(MethodInfo *)0x0);
    break;
  case '\x0f':
    if (param_1->___grid_5 == (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *)0x0)
    goto LAB_103f822f;
    bVar8 = GridGenerator_IterateGenerateCenter_m4D54C84008E6731BFD51B7C7D6450D8410CB0108
                      (param_1->___grid_5,(MethodInfo *)0x0);
    break;
  case '\x10':
  case '\x18':
    if (param_1->___waveFunctionCollapse_10 ==
        (WaveFunctionCollapse_t70F8917FC43B0A37E3BD8CD8D6F6B4C59214F8A9 *)0x0) goto LAB_103f822f;
    bVar8 = WaveFunctionCollapse_Iterate0_m0EE168F3B6682BA0A80DC8DEAC638C37D5A94548
                      (param_1->___waveFunctionCollapse_10,(MethodInfo *)0x0);
    break;
  case '\x11':
    pWVar4 = param_1->___waveFunctionCollapse_10;
    if (pWVar4 != (WaveFunctionCollapse_t70F8917FC43B0A37E3BD8CD8D6F6B4C59214F8A9 *)0x0) {
      if (DAT_1151c919 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  ((uint *)&
                           List_1_RemoveRange_mCA64A7D082398CE2769DFE927A379103AFE21E83_RuntimeMethod_var
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  ((uint *)&
                           List_1_get_Count_mE71C2B070FD46A88A0B5805D7B43E0769A22F125_RuntimeMethod_var
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  ((uint *)&
                           List_1_get_Count_mFC84DAF1F55A1FD27AD39495A98B3A2B6A386F81_RuntimeMethod_var
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  ((uint *)&
                           List_1_get_Item_m77E89752C3DA0F7404540C725413E34437C67664_RuntimeMethod_var
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  ((uint *)&
                           List_1_get_Item_m8152EFAA8551BC863D0AACFEFD4C0E3B50B212A0_RuntimeMethod_var
                  );
        DAT_1151c919 = '\x01';
      }
      if (pWVar4->___qubesToRebuild_18 != (List_1_t9135BBA17EC44986E18786359559A3877CE31660 *)0x0) {
        pWVar17 = (WaveFunctionCollapse_t70F8917FC43B0A37E3BD8CD8D6F6B4C59214F8A9 *)
                  pWVar4->___qubesToRebuild_18->____size_2;
        if ((int)pWVar17 < 1) goto LAB_103f7c1a;
        pWVar9 = pWVar4->___master_4;
        local_c = pWVar17;
        if (pWVar9 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) {
          iVar11 = (int)pWVar17 * 4 + 0x10;
          do {
            bVar8 = WorldMaster_KeepGoing_m59580CCA8E6403127024D1F0E71CF65DA50FA4E9
                              (pWVar9,(MethodInfo *)0x0);
            if ((!bVar8) || ((int)pWVar17 < 1)) {
              if ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pWVar4->___qubesToRebuild_18
                  != (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0) {
                List_1_RemoveRange_m3775CEC5D6576A395D657F5D0382875DA79D542B_gshared
                          ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
                           pWVar4->___qubesToRebuild_18,(int)pWVar17,(int)local_c - (int)pWVar17,
                           List_1_RemoveRange_mCA64A7D082398CE2769DFE927A379103AFE21E83_RuntimeMethod_var
                          );
                return true;
              }
              break;
            }
            iVar11 = iVar11 + -4;
            pWVar17 = (WaveFunctionCollapse_t70F8917FC43B0A37E3BD8CD8D6F6B4C59214F8A9 *)
                      &pWVar17[-1].field_0x4b;
            pLVar1 = pWVar4->___qubesToRebuild_18;
            if (pLVar1 == (List_1_t9135BBA17EC44986E18786359559A3877CE31660 *)0x0) break;
            if ((undefined1 *)pLVar1->____size_2 <= pWVar17) {
                    /* WARNING: Subroutine does not return */
              ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                        ((MethodInfo *)0x0);
            }
            pQVar2 = *(Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 **)
                      (pLVar1->____items_1 + iVar11);
            if (pQVar2 == (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0) break;
            if (pQVar2->___awaitingRebuilding_14 != false) {
              pLVar3 = pQVar2->___possibleModules_18;
              pQVar2->___awaitingRebuilding_14 = false;
              if (pLVar3 == (List_1_t055157F886B0514D33D42DFE1FDEE241DF29A367 *)0x0) break;
              if (pLVar3->____size_2 != 0) {
                if (pWVar4->___master_4 ==
                    (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) break;
                local_8 = pWVar4->___master_4->___moduleBuilder_16;
                pOVar10 = List_1_get_Item_m8152EFAA8551BC863D0AACFEFD4C0E3B50B212A0_inline
                                    (&local_28,pLVar3,0,
                                     List_1_get_Item_m8152EFAA8551BC863D0AACFEFD4C0E3B50B212A0_RuntimeMethod_var
                                    );
                if (local_8 == (ModuleBuilder_tFCFAE83D48DBD41C4857996F87A7E264CB31D6B0 *)0x0)
                break;
                ModuleBuilder_ApplyModule_mC34009A53139A9C8144EACD72D80C9E5F18FF0F1
                          (local_8,pQVar2,*pOVar10,(MethodInfo *)0x0);
              }
            }
            pWVar9 = pWVar4->___master_4;
          } while (pWVar9 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0);
        }
      }
    }
    goto LAB_103f822f;
  case '\x12':
    if (param_1->___shadowBaker_31 != (ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427 *)0x0)
    {
      ShadowBaker_SetFramingDirty_m47E523A2F2A9759692EFE35DCA7384E80CB1805B
                (param_1->___shadowBaker_31,(MethodInfo *)0x0);
      if (param_1->___shadowBaker_31 != (ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427 *)0x0
         ) {
        ShadowBaker_BakeShadow_m8775EC33DC0B63801BEA101C4C6605195D807522
                  (param_1->___shadowBaker_31,(MethodInfo *)0x0);
        param_1->___state_57 = '\x19';
        return true;
      }
    }
    goto LAB_103f822f;
  case '\x13':
    if (param_1->___shadowBaker_31 != (ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427 *)0x0)
    {
      ShadowBaker_OnBuilt_m7FB7CD582AB40590729069B855C8DB6BF751B2D6
                (param_1->___shadowBaker_31,(MethodInfo *)0x0);
      param_1->___state_57 = param_1->___state_57 + '\x01';
      return true;
    }
    goto LAB_103f822f;
  case '\x17':
    if (param_1->___shadowBaker_31 == (ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427 *)0x0)
    goto LAB_103f822f;
    ShadowBaker_SetFramingDirty_m47E523A2F2A9759692EFE35DCA7384E80CB1805B
              (param_1->___shadowBaker_31,(MethodInfo *)0x0);
  case '\x1a':
  case '\x1c':
  case '!':
    if (param_1->___shadowBaker_31 != (ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427 *)0x0)
    {
      ShadowBaker_BakeShadow_m8775EC33DC0B63801BEA101C4C6605195D807522
                (param_1->___shadowBaker_31,(MethodInfo *)0x0);
      param_1->___state_57 = param_1->___state_57 + '\x01';
      return true;
    }
    goto LAB_103f822f;
  case '\x19':
    if (param_1->___waveFunctionCollapse_10 ==
        (WaveFunctionCollapse_t70F8917FC43B0A37E3BD8CD8D6F6B4C59214F8A9 *)0x0) goto LAB_103f822f;
    bVar8 = WaveFunctionCollapse_Iterate1_m0C5AA36B072C60019E049DC3FFE51CC3A209BE6C
                      (param_1->___waveFunctionCollapse_10,(MethodInfo *)0x0);
    break;
  case '\x1b':
    if (param_1->___waveFunctionCollapse_10 ==
        (WaveFunctionCollapse_t70F8917FC43B0A37E3BD8CD8D6F6B4C59214F8A9 *)0x0) goto LAB_103f822f;
    bVar8 = WaveFunctionCollapse_IterateDecor_mDE248883BA48839F73C397E808CF3E734808A631
                      (param_1->___waveFunctionCollapse_10,(MethodInfo *)0x0);
    break;
  case '\x1d':
    pWVar4 = param_1->___waveFunctionCollapse_10;
    local_c = pWVar4;
    if (pWVar4 != (WaveFunctionCollapse_t70F8917FC43B0A37E3BD8CD8D6F6B4C59214F8A9 *)0x0) {
      if (DAT_1151c91d == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  ((uint *)&
                           Component_GetComponent_TisQube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7_m48A715EADC009D7D6BDCB27F5A70760CD0934730_RuntimeMethod_var
                  );
        DAT_1151c91d = '\x01';
      }
      if (pWVar4->___propagationCounter_5 < 0x8000) {
LAB_103f7c1a:
        param_1->___state_57 = param_1->___state_57 + '\x01';
        return true;
      }
      if (((pWVar4->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
          (pGVar5 = pWVar4->___master_4->___graph_7,
          pGVar5 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) &&
         (pTVar12 = pGVar5->___squares_8,
         pTVar12 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
        iVar11 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                           (pTVar12,(MethodInfo *)0x0);
        while( true ) {
          iVar11 = iVar11 + -1;
          if (iVar11 < 0) {
            pWVar4->___propagationCounter_5 = 0;
            pWVar4->___lastStartedPropagation_6 = 0;
            param_1->___state_57 = param_1->___state_57 + '\x01';
            return true;
          }
          if (((pWVar4->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
              || (pGVar5 = pWVar4->___master_4->___graph_7,
                 pGVar5 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) ||
             ((pTVar12 = pGVar5->___squares_8,
              pTVar12 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0 ||
              (pTVar12 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                                   (pTVar12,iVar11,(MethodInfo *)0x0),
              pTVar12 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)))) break;
          iVar13 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                             (pTVar12,(MethodInfo *)0x0);
          while (iVar13 = iVar13 + -1, pWVar4 = local_c, -1 < iVar13) {
            pTVar14 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                                (pTVar12,iVar13,(MethodInfo *)0x0);
            if ((pTVar14 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) ||
               (pIVar15 = Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                    ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar14,
                                     Component_GetComponent_TisQube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7_m48A715EADC009D7D6BDCB27F5A70760CD0934730_RuntimeMethod_var
                                    ), pIVar15 == (Il2CppObject *)0x0)) goto LAB_103f822f;
            *(undefined2 *)((int)&pIVar15[3].monitor + 2) = 0;
          }
        }
      }
    }
    goto LAB_103f822f;
  case '\x1e':
    if (param_1->___sandbanker_22 == (Sandbanker_t40E4E38CA328AA7AA0BA6530A0D474792DEA22E3 *)0x0)
    goto LAB_103f822f;
    bVar8 = Sandbanker_Iterate_m1384DB16A2ACFD8D997ADDF210FDF5FECDB69C8F
                      (param_1->___sandbanker_22,(MethodInfo *)0x0);
    break;
  case '\x1f':
    if (param_1->___graph_7 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)
    goto LAB_103f822f;
    bVar8 = Graph_IterateRefillPools_m86828483DCA9FB1B6E025354376F3E41F90A3864
                      (param_1->___graph_7,(MethodInfo *)0x0);
    break;
  case ' ':
    if (param_1->___moduleBuilder_16 ==
        (ModuleBuilder_tFCFAE83D48DBD41C4857996F87A7E264CB31D6B0 *)0x0) goto LAB_103f822f;
    bVar8 = ModuleBuilder_Iterate_m427B2A36E662B0568BF0BD55CB2C1E8E7E52B6F1
                      (param_1->___moduleBuilder_16,(MethodInfo *)0x0);
    break;
  case '\"':
    if (param_1->___flock_21 == (BirdFlock_tB63DB4CEF81D7D9D17C18531A0BEEEA771442436 *)0x0)
    goto LAB_103f822f;
    bVar8 = BirdFlock_IterateBirdCreation_mBA1DFB588752021D7B8E6FE66F2E846F556FFE04
                      (param_1->___flock_21,(MethodInfo *)0x0);
    break;
  case '%':
    if (param_1->___propPlacer_19 != (PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 *)0x0) {
      PropPlacer_OnDoneResetting_mD3BB9F2C178E5AC4FBF9D74170350ECC05A7FE4C
                (param_1->___propPlacer_19,(MethodInfo *)0x0);
      param_1->___state_57 = param_1->___state_57 + '\x01';
      return true;
    }
LAB_103f822f:
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  case '&':
    if (param_1->___worldMeshes_9 == (WorldMeshes_tBC69BAAEC2CD491EAC0C4E24380060AD1397DBB6 *)0x0)
    goto LAB_103f822f;
    bVar8 = WorldMeshes_IterateRefillPools_m1994ADA12285ACAB2A823AE3B539E3C4C2A1A852
                      (param_1->___worldMeshes_9,param_1,(MethodInfo *)0x0);
    break;
  case '(':
    pGVar6 = param_1->___grid_5;
    pOVar16 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
              il2cpp_codegen_object_new
                        (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              (pOVar16,(Il2CppObject *)param_1,
               (int)
               WorldMaster_KeepGoing_m59580CCA8E6403127024D1F0E71CF65DA50FA4E9_RuntimeMethod_var,
               Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
    if (pGVar6 == (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *)0x0) goto LAB_103f822f;
    bVar8 = GridGenerator_IterateBits_m2290B4B0850924B74F7147F88BF533F6AB7826DD
                      (pGVar6,(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)pOVar16,
                       (MethodInfo *)0x0);
    break;
  case ')':
    pSVar7 = param_1->___saveSystem_35;
    pOVar16 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
              il2cpp_codegen_object_new
                        (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F_il2cpp_TypeInfo_var);
    OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
              (pOVar16,(Il2CppObject *)param_1,
               (int)
               WorldMaster_KeepGoing_m59580CCA8E6403127024D1F0E71CF65DA50FA4E9_RuntimeMethod_var,
               Func_1__ctor_m16429CB52E95263F4C11AB13CF51474AFB25D1B9_RuntimeMethod_var);
    if (pSVar7 == (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0) goto LAB_103f822f;
    bVar8 = SaveSystem_IterateRefresh_m9CEAC873A577B18052312BDCA37D15DBF7DDC293
                      (pSVar7,(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)pOVar16,
                       (MethodInfo *)0x0);
    break;
  case '*':
    return false;
  }
  if (bVar8 == false) {
    param_1->___state_57 = param_1->___state_57 + '\x01';
    return true;
  }
switchD_103f7b89_caseD_0:
  return true;
switchD_103f7b89_caseD_1:
  param_1->___state_57 = param_1->___state_57 + '\x01';
  return true;
}
