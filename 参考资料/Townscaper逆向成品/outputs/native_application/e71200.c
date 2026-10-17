// RVA 0xe71200 | Placemaker.Graphs.Graph$$IterateLoad
// PDB: Graph_IterateLoad_m6B9CB4264920C31DFFDAECBAE4E1AB6281DF7C43
// Body: [[10e71200, 10e716fb] [10e71700, 10e71719] [10e7171d, 10e7198c] [10e71990, 10e71d1d] [10e71d21, 10e71d5d]]
// Direct callees:
// 1003e770 SetAt
// 100547c0 List_1_get_Item_m05503F475DFF429174902337394B6C6DE3713CCD_inline
// 10066d50 List_1_get_Item_m4C460F2F32FE7765229CC9FA6D7A3840779916B2_inline
// 10068e90 List_1_get_Item_m3381EC9666791D6F0F66A792B066A3C44194CB0E_inline
// 101275a0 il2cpp_array_new_specific
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8380 OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
// 103d1920 Maker_AddAction_m630C6F9FFCC6D52A0F1D02442BA3BF0A476AD6B5
// 103d1d90 Maker_ClearUndoQueue_m9787B1C9A4798042F4588C9128018EBB2788AFFE
// 103d8b80 ModuleBuilder_MarkModuleContainerForDeconstruction_m44155DFC0DF002CF8640FF8586D4367D34E927B6
// 103f4210 WaveFunctionCollapse_IteratePropagationCount_m97082727FDA2F225E45C4B9C67142D33203BBD71
// 103f82e0 WorldMaster_KeepGoing_m59580CCA8E6403127024D1F0E71CF65DA50FA4E9
// 1040d9e0 HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 105d1f60 List_1_RemoveAt_m8AD561C6797160B9C1E85B8E9352DD355744B10F_gshared
// 105d34c0 List_1_set_Item_m403F0570AA35580309E3C4DF5E58D9172C8E589E_gshared
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 10836080 ExtraMath_Center_mA17CB832B764FF16B283E1D50FFD9BD6762D680E
// 10836300 ExtraMath_Contains_m5605C45E9F053FEF949FD7FFBFE244B35E3D0AE1
// 108363d0 ExtraMath_Encapsulate_m3E293B7DFEBAEBE115B40E36EF21F04F419C5938
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3cbf0 Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8
// 10a43fe0 Mathf_Max_mC299EEF1FD6084E41A182E2033790DB50DEF5B39
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 10e6b480 Graph_ApplyAction_m8EE17102BA6EC057C4C648C33BEA2332C69AF700
// 10e6bae0 Graph_GetMaxExtents_m6721C88B5586B09C182FE4F400226FCCEA14C037
// 10e738f0 Graph_QubeUpdated_m49F6D4FBDB2F71B6E25BF7D85CB0F4A26FB56349
// 10e77fa0 Graph_SetEmptyBoundsCenter_m9D03266BF4FA7332EF802EA72E1E234E64194C58

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
Graph_IterateLoad_m6B9CB4264920C31DFFDAECBAE4E1AB6281DF7C43
          (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *param_1,
          SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *param_2,MethodInfo *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Action_t83AC0DDF06C96E2330A7F1FD4688409FD8704429 AVar3;
  ModuleBuilder_tFCFAE83D48DBD41C4857996F87A7E264CB31D6B0 *pMVar4;
  List_1_t53AF55B454D8F397374C0C834D8CED4D0F98FB6E *pLVar5;
  List_1_t65B5CE5C2CCE2EE12BA01A686F7853869760B043 *pLVar6;
  CU5BU5D_t6BD815B0F2359902DCDF7F57D894A578DF09EE88 *pCVar7;
  List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B *pLVar8;
  uint uVar9;
  int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F iVar10;
  int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F iVar11;
  int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F iVar12;
  int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F iVar13;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar14;
  KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57 KVar15;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar16;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar17;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar18;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar19;
  int *piVar20;
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar21;
  undefined4 uVar22;
  bool bVar23;
  bool bVar24;
  V_t2C4FF2B994717C0763FC7587F2B998766A7145F5 VVar25;
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *pCVar26;
  Il2CppObject *pIVar27;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar28;
  int iVar29;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar30;
  ModuleContainer_t7AAD86D2920DB1DE173C29BEC8556CCCACDECD18 *pMVar31;
  Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *pQVar32;
  eoeYwvfgkcyqvOuhSvCpfjKvcGW_t36596F2FF79D37D2776C7BB369E698B363118273 *peVar33;
  int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F *piVar34;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *piVar35;
  Action_t83AC0DDF06C96E2330A7F1FD4688409FD8704429 *pAVar36;
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar37;
  uchar uVar38;
  undefined1 *puVar39;
  int iVar40;
  undefined8 uVar41;
  ValueTuple_2_t6E5328CF9F490572344E5992FA01B3256F92075E VVar42;
  Maker_t537981F2ED20294ACF4C94693B3268049739203D *pMVar43;
  Action_t83AC0DDF06C96E2330A7F1FD4688409FD8704429 local_b0;
  undefined1 local_a0 [24];
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 local_88;
  int local_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  undefined8 local_6c;
  Action_t83AC0DDF06C96E2330A7F1FD4688409FD8704429 local_64;
  int local_54;
  int iStack_50;
  int local_4c;
  uint local_48;
  List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B *local_44;
  undefined4 local_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *local_30;
  int local_2c;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 local_28;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 local_1c;
  int local_10;
  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *local_c;
  int local_8;

  pGVar21 = param_1;
  if (DAT_11522841 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisCorner_t160419F9B72F1C8FC104D01EC53A0B97BB225279_m84BF1D6BDA1CDE130237506B5BC2F3A4771A8045_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisModuleContainer_t7AAD86D2920DB1DE173C29BEC8556CCCACDECD18_m701E47610D5C5B02017BDC4CEB26F0B399863309_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisQube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7_m48A715EADC009D7D6BDCB27F5A70760CD0934730_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisVoxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3_mBC1BDC84024AB09ECE18905C216A3123CA3E0B50_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_RemoveAt_m96F757568BB1D47E42D65AD3936C2C5CECE7BD45_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m0FE7FF3D46BDCFA7B64F80C148193D307CE858E0_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mAFB4DB81784CA7A3881EA241A6AE03F8F60C552F_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mB1D3E0F73A4AC5C0641BFEBD257139A23EDFAF0B_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m3381EC9666791D6F0F66A792B066A3C44194CB0E_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m4C460F2F32FE7765229CC9FA6D7A3840779916B2_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mC83ED23996631967BFD7046DD8C80E90074F97D6_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_set_Item_m32B505195FFA7B9449A0B0F23FB90FAD4826B8EC_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralB2256ABC6A0F008DE00327E1F7198435F42EF2FB);
    DAT_11522841 = '\x01';
  }
  local_38 = 0;
  iStack_34 = 0;
  switch(param_1->___loadState_44) {
  case 0:
    if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
       (pMVar43 = param_1->___master_4->___maker_6,
       pMVar43 != (Maker_t537981F2ED20294ACF4C94693B3268049739203D *)0x0)) {
LAB_10e71314:
      Maker_ClearUndoQueue_m9787B1C9A4798042F4588C9128018EBB2788AFFE(pMVar43,(MethodInfo *)0x0);
      param_1->___loadState_44 = param_1->___loadState_44 + 1;
      return true;
    }
    break;
  case 1:
    if (param_1->___corners_6 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) break;
    iVar40 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                       (param_1->___corners_6,(MethodInfo *)0x0);
    while (iVar40 = iVar40 + -1, -1 < iVar40) {
      if (param_1->___corners_6 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
      goto LAB_10e71d59;
      iVar29 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                         (param_1->___corners_6,(MethodInfo *)0x0);
      if (iVar40 < iVar29) {
        if ((((param_1->___corners_6 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
             || (pTVar28 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                                     (param_1->___corners_6,iVar40,(MethodInfo *)0x0),
                pTVar28 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) ||
            (pCVar26 = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                       Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                 ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar28,
                                  Component_GetComponent_TisCorner_t160419F9B72F1C8FC104D01EC53A0B97BB225279_m84BF1D6BDA1CDE130237506B5BC2F3A4771A8045_RuntimeMethod_var
                                 ),
            pCVar26 == (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0)) ||
           (pTVar28 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                (pCVar26,(MethodInfo *)0x0),
           pTVar28 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
        goto LAB_10e71d59;
        iVar29 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                           (pTVar28,(MethodInfo *)0x0);
        while (iVar29 = iVar29 + -1, -1 < iVar29) {
          pTVar28 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                              (pCVar26,(MethodInfo *)0x0);
          if ((pTVar28 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) ||
             (pTVar28 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                                  (pTVar28,iVar29,(MethodInfo *)0x0),
             pTVar28 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
          goto LAB_10e71d59;
          pIVar27 = Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                              ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar28,
                               Component_GetComponent_TisVoxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3_mBC1BDC84024AB09ECE18905C216A3123CA3E0B50_RuntimeMethod_var
                              );
          if ((param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
             || (pMVar43 = param_1->___master_4->___maker_6, pIVar27 == (Il2CppObject *)0x0))
          goto LAB_10e71d59;
          uVar38 = *(uchar *)((int)&pIVar27[1].monitor + 1);
          if (uVar38 == '\0') {
            local_8 = CONCAT31(local_8._1_3_,0xf);
          }
          else {
            local_8 = CONCAT31(local_8._1_3_,*(undefined1 *)&pIVar27[1].monitor);
          }
          if (pMVar43 == (Maker_t537981F2ED20294ACF4C94693B3268049739203D *)0x0) goto LAB_10e71d59;
          iVar19.___x_0 = *(int *)&pCVar26[1].field_0x0;
          iVar19.___y_1 = *(int *)&pCVar26[1].field_0x4;
          Maker_AddAction_m630C6F9FFCC6D52A0F1D02442BA3BF0A476AD6B5
                    (&local_64,pMVar43,iVar19,uVar38,(schar)local_8,'\x12',(MethodInfo *)0x0);
        }
      }
    }
    goto LAB_10e7146a;
  case 2:
    if (param_1->___squares_8 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      local_c = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)
                Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                          (param_1->___squares_8,(MethodInfo *)0x0);
      pWVar37 = param_1->___master_4;
      if ((pWVar37 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
         (pMVar43 = pWVar37->___maker_6,
         pMVar43 != (Maker_t537981F2ED20294ACF4C94693B3268049739203D *)0x0)) {
        if ((int)local_c <= pMVar43->___actionIndex_6) {
          pMVar43->___actionIndex_6 = 0;
          param_1->___loadState_44 = param_1->___loadState_44 + 1;
          return true;
        }
        while (pWVar37->___maker_6 != (Maker_t537981F2ED20294ACF4C94693B3268049739203D *)0x0) {
          if ((int)local_c <= pWVar37->___maker_6->___actionIndex_6) {
            return true;
          }
          if (pWVar37 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) break;
          bVar24 = WorldMaster_KeepGoing_m59580CCA8E6403127024D1F0E71CF65DA50FA4E9
                             (pWVar37,(MethodInfo *)0x0);
          if (!bVar24) {
            return true;
          }
          pTVar28 = param_1->___squares_8;
          if ((param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
             || (pMVar43 = param_1->___master_4->___maker_6,
                pMVar43 == (Maker_t537981F2ED20294ACF4C94693B3268049739203D *)0x0)) break;
          iVar40 = pMVar43->___actionIndex_6;
          pMVar43->___actionIndex_6 = iVar40 + 1;
          if ((pTVar28 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) ||
             (pTVar28 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                                  (pTVar28,iVar40,(MethodInfo *)0x0), local_30 = pTVar28,
             pTVar28 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) break;
          iVar40 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                             (pTVar28,(MethodInfo *)0x0);
          while (iVar40 = iVar40 + -1, -1 < iVar40) {
            pTVar28 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                                (pTVar28,iVar40,(MethodInfo *)0x0);
            if (pTVar28 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
            goto LAB_10e71d59;
            iVar29 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                               (pTVar28,(MethodInfo *)0x0);
            while (iVar29 = iVar29 + -1, -1 < iVar29) {
              pTVar30 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                                  (pTVar28,iVar29,(MethodInfo *)0x0);
              if (pTVar30 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
              goto LAB_10e71d59;
              pMVar31 = (ModuleContainer_t7AAD86D2920DB1DE173C29BEC8556CCCACDECD18 *)
                        Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                  ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar30,
                                   Component_GetComponent_TisModuleContainer_t7AAD86D2920DB1DE173C29BEC8556CCCACDECD18_m701E47610D5C5B02017BDC4CEB26F0B399863309_RuntimeMethod_var
                                  );
              if ((param_1->___master_4 ==
                   (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
                 (pMVar4 = param_1->___master_4->___moduleBuilder_16,
                 pMVar4 == (ModuleBuilder_tFCFAE83D48DBD41C4857996F87A7E264CB31D6B0 *)0x0))
              goto LAB_10e71d59;
              ModuleBuilder_MarkModuleContainerForDeconstruction_m44155DFC0DF002CF8640FF8586D4367D34E927B6
                        (pMVar4,pMVar31,(MethodInfo *)0x0);
            }
            pQVar32 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)
                      Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar28,
                                 Component_GetComponent_TisQube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7_m48A715EADC009D7D6BDCB27F5A70760CD0934730_RuntimeMethod_var
                                );
            Graph_QubeUpdated_m49F6D4FBDB2F71B6E25BF7D85CB0F4A26FB56349
                      (param_1,pQVar32,(MethodInfo *)0x0);
            pTVar28 = local_30;
          }
          pWVar37 = param_1->___master_4;
          if (pWVar37 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) break;
        }
      }
    }
    break;
  case 3:
    if ((((param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
         (pMVar43 = param_1->___master_4->___maker_6,
         pMVar43 == (Maker_t537981F2ED20294ACF4C94693B3268049739203D *)0x0)) ||
        (local_44 = pMVar43->___actions_5,
        param_2 == (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)0x0)) ||
       (pLVar5 = (List_1_t53AF55B454D8F397374C0C834D8CED4D0F98FB6E *)param_2->___corners_4,
       pLVar5 == (List_1_t53AF55B454D8F397374C0C834D8CED4D0F98FB6E *)0x0)) break;
    local_30 = (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)pLVar5->____size_2;
    if (param_2->___voxels_5 == (List_1_tF9A565374BF86F9FF1DA3261675EC468D2A0EC4B *)0x0) break;
    if (local_30 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      Graph_SetEmptyBoundsCenter_m9D03266BF4FA7332EF802EA72E1E234E64194C58
                (param_1,(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568)0x0,(MethodInfo *)0x0);
LAB_10e71c4f:
      if ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
          param_1->___onEmptyBoundsLoaded_35 ==
          (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) break;
      OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
                ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                 param_1->___onEmptyBoundsLoaded_35,(MethodInfo *)0x0);
    }
    else if (param_2->___voxels_5->____size_2 < 1) {
      if (local_30 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)&DAT_00000001) {
        peVar33 = List_1_get_Item_m05503F475DFF429174902337394B6C6DE3713CCD_inline
                            ((eoeYwvfgkcyqvOuhSvCpfjKvcGW_t36596F2FF79D37D2776C7BB369E698B363118273
                              *)&local_88,pLVar5,0,
                             List_1_get_Item_mC83ED23996631967BFD7046DD8C80E90074F97D6_RuntimeMethod_var
                            );
        local_28.___x_0 = peVar33->___MqzGhJGEFjxUdcjoHTfdmpUvoKhv_0;
        local_28.___y_1 = peVar33->___JcmgDDuATuYwIOWhebgtdHoiXsW_1;
        local_1c = local_28;
        Graph_SetEmptyBoundsCenter_m9D03266BF4FA7332EF802EA72E1E234E64194C58
                  (param_1,local_28,(MethodInfo *)0x0);
        goto LAB_10e71c4f;
      }
    }
    else {
      iVar40 = 0;
      puVar39 = &local_30[-1].field_0xb;
      local_64.___hexPos_0.___y_1 = _UNK_1120f254;
      local_64.___hexPos_0.___x_0 = ___xmm_800000007fffffff7fffffff7fffffff;
      local_64.___height_1 = UNK_1120f258;
      local_64.___inType_2 = UNK_1120f259;
      local_64.___outType_3 = UNK_1120f25a;
      local_64._11_1_ = UNK_1120f25b;
      local_64.___actionId_4 = _UNK_1120f25c;
      local_6c = 0x8000000080000000;
      local_7c = ___xmm_800000007fffffff7fffffff7fffffff;
      iStack_78 = _UNK_1120f254;
      iStack_74 = _UNK_1120f258;
      iStack_70 = _UNK_1120f25c;
      local_8 = -1;
      local_38 = -0x80000000;
      iStack_34 = -0x80000000;
      if (-1 < (int)puVar39) {
        param_1 = (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)((int)puVar39 * 0xc);
        do {
          pLVar6 = param_2->___corners_4;
          if (pLVar6 == (List_1_t65B5CE5C2CCE2EE12BA01A686F7853869760B043 *)0x0) goto LAB_10e71d59;
          if ((undefined1 *)pLVar6->____size_2 <= puVar39) {
                    /* WARNING: Subroutine does not return */
            ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                      ((MethodInfo *)0x0);
          }
          pCVar7 = pLVar6->____items_1;
          piVar20 = &param_1->_padding_;
          local_88 = *(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 *)
                      ((int)&pCVar7->m_Items[0].___x_0 + (int)piVar20);
          local_c = *(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE **)
                     ((int)&pCVar7->m_Items[0].___x_0 + (int)(piVar20 + 2));
          local_1c = *(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 *)
                      ((int)&pCVar7->m_Items[0].___x_0 + (int)piVar20);
          local_28.___y_1 = local_88.___y_1;
          iStack_50 = local_28.___y_1;
          iVar40 = local_1c.___y_1 + local_88.___x_0;
          local_54 = local_88.___x_0;
          local_28 = local_88;
          if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
              cctor_finished == 0)) {
            il2cpp_runtime_class_init
                      (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
          }
          iVar10.___c1_1.___y_1 = local_38;
          iVar10._0_16_ = local_64;
          iVar10.___c1_1.___z_2 = iStack_34;
          iVar16.___y_1 = iStack_50;
          iVar16.___x_0 = local_54;
          iVar16.___z_2 = -iVar40;
          piVar34 = ExtraMath_Encapsulate_m3E293B7DFEBAEBE115B40E36EF21F04F419C5938
                              ((int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F *)local_a0,iVar10,
                               iVar16,(MethodInfo *)0x0);
          local_8 = (int)local_c->m_Items + local_8 + -0x10;
          local_7c = (piVar34->___c0_0).___x_0;
          iStack_78 = (piVar34->___c0_0).___y_1;
          iStack_74 = (piVar34->___c0_0).___z_2;
          iStack_70 = (piVar34->___c1_1).___x_0;
          local_64 = *(Action_t83AC0DDF06C96E2330A7F1FD4688409FD8704429 *)piVar34;
          local_6c._0_4_ = (piVar34->___c1_1).___y_1;
          local_6c._4_4_ = (piVar34->___c1_1).___z_2;
          local_38 = (undefined4)local_6c;
          iStack_34 = local_6c._4_4_;
          if (param_2->___voxels_5 == (List_1_tF9A565374BF86F9FF1DA3261675EC468D2A0EC4B *)0x0)
          goto LAB_10e71d59;
          VVar25 = List_1_get_Item_m4C460F2F32FE7765229CC9FA6D7A3840779916B2_inline
                             (param_2->___voxels_5,local_8,
                              List_1_get_Item_m4C460F2F32FE7765229CC9FA6D7A3840779916B2_RuntimeMethod_var
                             );
          local_c = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)
                    il2cpp_array_new_specific
                              (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var
                               ,1);
          if (local_c == (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)0x0)
          goto LAB_10e71d59;
          ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt
                    (local_c,0,(Il2CppObject *)(uint)((ushort)VVar25 >> 8));
          iVar40 = Mathf_Max_mC299EEF1FD6084E41A182E2033790DB50DEF5B39
                             ((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32 *)local_c,
                              (MethodInfo *)0x0);
          param_1 = (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)
                    &param_1[-1].___onEmptyBoundsLoaded_35;
          puVar39 = puVar39 + -1;
        } while (-1 < (int)puVar39);
      }
      if ((Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1_il2cpp_TypeInfo_var);
      }
      iVar12.___c1_1.___y_1 = local_38;
      iVar12._0_16_ = local_64;
      iVar12.___c1_1.___z_2 = iStack_34;
      VVar42 = Graph_GetMaxExtents_m6721C88B5586B09C182FE4F400226FCCEA14C037
                         (iVar12,iVar40,(MethodInfo *)0x0);
      iVar40 = VVar42.___Item1_0;
      pGVar21->___maxHeight_32 = VVar42.___Item2_1;
      if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor !=
           '\0') &&
         (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished ==
          0)) {
        il2cpp_runtime_class_init
                  (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
      }
      iVar13.___c1_1.___y_1 = local_38;
      iVar13._0_16_ = local_64;
      iVar13.___c1_1.___z_2 = iStack_34;
      piVar35 = ExtraMath_Center_mA17CB832B764FF16B283E1D50FFD9BD6762D680E
                          ((int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *)&local_88,iVar13,
                           (MethodInfo *)0x0);
      uVar1 = piVar35->___x_0;
      uVar2 = piVar35->___y_1;
      iStack_74 = piVar35->___z_2 - iVar40;
      local_7c = uVar1 - iVar40;
      local_28.___x_0 = piVar35->___x_0;
      local_28.___y_1 = piVar35->___y_1;
      iStack_78 = uVar2 - iVar40;
      local_1c.___x_0 = piVar35->___x_0;
      local_1c.___y_1 = piVar35->___y_1;
      iStack_70 = local_28.___x_0 + iVar40;
      local_6c = CONCAT44(piVar35->___z_2 + iVar40,local_1c.___y_1 + iVar40);
      iStack_3c = local_1c.___x_0;
      local_38 = local_1c.___y_1;
      if (((pGVar21->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
          (pMVar43 = pGVar21->___master_4->___maker_6,
          pMVar43 == (Maker_t537981F2ED20294ACF4C94693B3268049739203D *)0x0)) ||
         (pLVar8 = pMVar43->___actions_5,
         pLVar8 == (List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B *)0x0)) break;
      local_2c = pLVar8->____size_2;
      bVar24 = false;
      local_48 = 0;
      local_10 = 0;
      if (0 < (int)local_30) {
        local_c = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)0x0;
        do {
          pLVar6 = param_2->___corners_4;
          if (pLVar6 == (List_1_t65B5CE5C2CCE2EE12BA01A686F7853869760B043 *)0x0) goto LAB_10e71d59;
          if ((uint)pLVar6->____size_2 <= local_48) {
                    /* WARNING: Subroutine does not return */
            ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                      ((MethodInfo *)0x0);
          }
          local_28 = *(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 *)
                      ((int)local_c->m_Items + (int)(pLVar6->____items_1->m_Items + -2) + 8);
          iVar40 = *(int *)((int)&pLVar6->____items_1->m_Items[0].___count_2 + (int)local_c);
          local_1c = local_28;
          if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished
              == 0)) {
            il2cpp_runtime_class_init
                      (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
          }
          iVar18.___y_1 = local_1c.___y_1;
          iVar18.___x_0 = local_28.___x_0;
          piVar35 = HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
                              ((int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *)&local_88,iVar18,
                               (MethodInfo *)0x0);
          uVar41._0_4_ = piVar35->___x_0;
          uVar41._4_4_ = piVar35->___y_1;
          iVar29 = piVar35->___z_2;
          iStack_50 = (undefined4)uVar41;
          local_4c = uVar41._4_4_;
          if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
              cctor_finished == 0)) {
            il2cpp_runtime_class_init
                      (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
            uVar41 = CONCAT44(local_4c,iStack_50);
          }
          iVar11.___c0_0.___y_1 = iStack_78;
          iVar11.___c0_0.___x_0 = local_7c;
          iVar11.___c0_0.___z_2 = iStack_74;
          iVar11.___c1_1.___x_0 = iStack_70;
          iVar11.___c1_1.___y_1 = (int)local_6c;
          iVar11.___c1_1.___z_2 = (int)((ulonglong)local_6c >> 0x20);
          iVar17.___z_2 = iVar29;
          iVar17.___x_0 = (int)uVar41;
          iVar17.___y_1 = (int)((ulonglong)uVar41 >> 0x20);
          bVar23 = ExtraMath_Contains_m5605C45E9F053FEF949FD7FFBFE244B35E3D0AE1
                             (iVar11,iVar17,(MethodInfo *)0x0);
          iVar29 = local_10;
          if (bVar23) {
joined_r0x10e71a52:
            local_8 = iVar40 + -1;
            local_10 = iVar29;
            if (-1 < local_8) {
              iVar40 = iVar29 + 1;
              local_10 = iVar40;
              if (param_2->___voxels_5 == (List_1_tF9A565374BF86F9FF1DA3261675EC468D2A0EC4B *)0x0)
              goto LAB_10e71d59;
              VVar25 = List_1_get_Item_m4C460F2F32FE7765229CC9FA6D7A3840779916B2_inline
                                 (param_2->___voxels_5,iVar29,
                                  List_1_get_Item_m4C460F2F32FE7765229CC9FA6D7A3840779916B2_RuntimeMethod_var
                                 );
              local_40 = CONCAT22(local_40._2_2_,VVar25);
              uVar22 = local_40;
              if (pGVar21->___maxHeight_32 <= (int)(uint)((ushort)VVar25 >> 8)) {
                bVar24 = true;
                local_10 = iVar40 + local_8;
                goto LAB_10e71b5f;
              }
              local_4c = 0xf;
              uVar38 = VVar25.___h_1;
              if (uVar38 != '\0') {
                local_40._0_1_ = VVar25.___t_0;
                local_4c = (int)(char)(uchar)local_40;
              }
              iVar40 = 0;
              iStack_34 = CONCAT31(iStack_34._1_3_,(char)local_4c);
              local_40 = uVar22;
              if (0 < local_2c) {
                do {
                  if (((pGVar21->___master_4 ==
                        (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
                      (pMVar43 = pGVar21->___master_4->___maker_6,
                      pMVar43 == (Maker_t537981F2ED20294ACF4C94693B3268049739203D *)0x0)) ||
                     (pLVar8 = pMVar43->___actions_5,
                     pLVar8 == (List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B *)0x0))
                  goto LAB_10e71d59;
                  pAVar36 = List_1_get_Item_m3381EC9666791D6F0F66A792B066A3C44194CB0E_inline
                                      (&local_b0,pLVar8,iVar40,
                                       List_1_get_Item_m3381EC9666791D6F0F66A792B066A3C44194CB0E_RuntimeMethod_var
                                      );
                  AVar3 = *pAVar36;
                  local_64 = AVar3;
                  if (AVar3.___hexPos_0.___x_0 == local_28.___x_0) {
                    local_64.___hexPos_0.___y_1 = AVar3.___hexPos_0.___y_1;
                    if ((local_64.___hexPos_0.___y_1 == local_1c.___y_1) &&
                       ((*pAVar36).___height_1 == uVar38)) {
                      if ((*pAVar36).___inType_2 == (char)local_4c) {
                        if (local_44 == (List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B *)0x0)
                        goto LAB_10e71d59;
                        List_1_RemoveAt_m8AD561C6797160B9C1E85B8E9352DD355744B10F_gshared
                                  ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)local_44,
                                   iVar40,
                                   List_1_RemoveAt_m96F757568BB1D47E42D65AD3936C2C5CECE7BD45_RuntimeMethod_var
                                  );
                        local_2c = local_2c + -1;
                        if ((pGVar21->___master_4 ==
                             (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
                           (pMVar43 = pGVar21->___master_4->___maker_6,
                           pMVar43 == (Maker_t537981F2ED20294ACF4C94693B3268049739203D *)0x0))
                        goto LAB_10e71d59;
                        piVar20 = &pMVar43->___actionIndex_6;
                        *piVar20 = *piVar20 + -1;
                        iVar29 = local_10;
                        iVar40 = local_8;
                      }
                      else {
                        local_64._11_5_ = AVar3._11_5_;
                        local_64._0_10_ = AVar3._0_10_;
                        local_64.___outType_3 = (char)local_4c;
                        if (local_44 == (List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B *)0x0)
                        goto LAB_10e71d59;
                        KVar15.___value_1 = (Il2CppObject *)local_64._8_4_;
                        KVar15.___key_0.___dateData_44._0_4_ = AVar3.___hexPos_0.___x_0;
                        KVar15.___key_0.___dateData_44._4_4_ = AVar3.___hexPos_0.___y_1;
                        KVar15._12_4_ = AVar3.___actionId_4;
                        List_1_set_Item_m403F0570AA35580309E3C4DF5E58D9172C8E589E_gshared
                                  ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)local_44,
                                   iVar40,KVar15,
                                   List_1_set_Item_m32B505195FFA7B9449A0B0F23FB90FAD4826B8EC_RuntimeMethod_var
                                  );
                        iVar29 = local_10;
                        iVar40 = local_8;
                      }
                      goto joined_r0x10e71a52;
                    }
                  }
                  iVar40 = iVar40 + 1;
                } while (iVar40 < local_2c);
              }
              if ((pGVar21->___master_4 ==
                   (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
                 (pMVar43 = pGVar21->___master_4->___maker_6,
                 pMVar43 == (Maker_t537981F2ED20294ACF4C94693B3268049739203D *)0x0))
              goto LAB_10e71d59;
              iVar14.___y_1 = local_1c.___y_1;
              iVar14.___x_0 = local_28.___x_0;
              Maker_AddAction_m630C6F9FFCC6D52A0F1D02442BA3BF0A476AD6B5
                        ((Action_t83AC0DDF06C96E2330A7F1FD4688409FD8704429 *)(local_a0 + 8),pMVar43,
                         iVar14,uVar38,'\x12',(schar)iStack_34,(MethodInfo *)0x0);
              iVar29 = local_10;
              iVar40 = local_8;
              goto joined_r0x10e71a52;
            }
          }
          else {
            bVar24 = true;
            local_10 = local_10 + iVar40;
          }
LAB_10e71b5f:
          local_48 = local_48 + 1;
          local_c = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)&local_c->_padding_;
        } while ((int)local_48 < (int)local_30);
        if (bVar24) {
          if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished ==
              0)) {
            il2cpp_runtime_class_init
                      (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
          }
          Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8
                    ((Il2CppObject *)_stringLiteralB2256ABC6A0F008DE00327E1F7198435F42EF2FB,
                     (MethodInfo *)0x0);
        }
      }
    }
LAB_10e7146a:
    if ((pGVar21->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
       (pMVar43 = pGVar21->___master_4->___maker_6,
       pMVar43 != (Maker_t537981F2ED20294ACF4C94693B3268049739203D *)0x0)) {
      pMVar43->___actionIndex_6 = 0;
      pGVar21->___loadState_44 = pGVar21->___loadState_44 + 1;
      return true;
    }
    break;
  case 4:
    pWVar37 = param_1->___master_4;
    if (((pWVar37 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
        (pWVar37->___maker_6 != (Maker_t537981F2ED20294ACF4C94693B3268049739203D *)0x0)) &&
       (pLVar8 = pWVar37->___maker_6->___actions_5,
       pLVar8 != (List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B *)0x0)) {
      iVar40 = pLVar8->____size_2;
      if (pWVar37->___waveFunctionCollapse_10 !=
          (WaveFunctionCollapse_t70F8917FC43B0A37E3BD8CD8D6F6B4C59214F8A9 *)0x0) {
        WaveFunctionCollapse_IteratePropagationCount_m97082727FDA2F225E45C4B9C67142D33203BBD71
                  (pWVar37->___waveFunctionCollapse_10,(MethodInfo *)0x0);
        pWVar37 = param_1->___master_4;
        if ((pWVar37 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
           (pMVar43 = pWVar37->___maker_6,
           pMVar43 != (Maker_t537981F2ED20294ACF4C94693B3268049739203D *)0x0)) {
          if (iVar40 <= pMVar43->___actionIndex_6) goto LAB_10e71314;
          while (pWVar37->___maker_6 != (Maker_t537981F2ED20294ACF4C94693B3268049739203D *)0x0) {
            if (iVar40 <= pWVar37->___maker_6->___actionIndex_6) {
              return true;
            }
            if (pWVar37 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) break;
            bVar24 = WorldMaster_KeepGoing_m59580CCA8E6403127024D1F0E71CF65DA50FA4E9
                               (pWVar37,(MethodInfo *)0x0);
            if (!bVar24) {
              return true;
            }
            if ((param_1->___master_4 ==
                 (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
               (pMVar43 = param_1->___master_4->___maker_6,
               pMVar43 == (Maker_t537981F2ED20294ACF4C94693B3268049739203D *)0x0)) break;
            uVar9 = pMVar43->___actionIndex_6;
            pMVar43->___actionIndex_6 = uVar9 + 1;
            if ((uint)pLVar8->____size_2 <= uVar9) {
                    /* WARNING: Subroutine does not return */
              ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                        ((MethodInfo *)0x0);
            }
            Graph_ApplyAction_m8EE17102BA6EC057C4C648C33BEA2332C69AF700
                      (param_1,pLVar8->____items_1->m_Items[uVar9],false,(MethodInfo *)0x0);
            pWVar37 = param_1->___master_4;
            if (pWVar37 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) break;
          }
        }
      }
    }
    break;
  default:
    return false;
  }
LAB_10e71d59:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
