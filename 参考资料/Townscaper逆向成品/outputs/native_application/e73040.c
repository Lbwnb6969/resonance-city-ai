// RVA 0xe73040 | Placemaker.Graphs.Graph$$OnEnable
// PDB: Graph_OnEnable_mD4CEBBF7406C674EF7FF6AB9AD2C9885F38A4935
// Body: [[10e73040, 10e733a8]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d95c0 Relation__ctor_mC55495B76B66E4A318A8CC1244EF7BA745FD13C1
// 1021c6c0 Dictionary_2_Add_m01FEB2F3B89795A9E2DF74E83079B76347F934F6_gshared
// 1021c700 Dictionary_2_Add_mC0E73F61FE94D62C2E307CF3576FE002EAC6A138_gshared
// 1021c780 Dictionary_2_Clear_m03F6E27B9533062BA140D8F18D7B7A24CE042834_gshared
// 102fb3b0 Square_GetCorner_mDF1C111277CAF42FA6601F1A4D8001776B800E93
// 102fb430 Square_GetRelation_m9DCB308FAE56229E3AE969E2161D9351C2AF598A
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499

void __cdecl
Graph_OnEnable_mD4CEBBF7406C674EF7FF6AB9AD2C9885F38A4935
          (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *param_1,MethodInfo *param_2)

{
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar1;
  int iVar2;
  int2x2_t0BF7ADC262C8A7AA49278095CC23401CA390F27B iVar3;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar4;
  Square_tD1B7B6748B35059E198069769341DA3192352B8F *pSVar5;
  bool bVar6;
  int iVar7;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar8;
  Il2CppObject *pIVar9;
  Square_tD1B7B6748B35059E198069769341DA3192352B8F *pSVar10;
  Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *pCVar11;
  char cVar12;
  int iVar13;
  Relation_t07BA215683F5DEECD10099A66D2387A00F8BB1FC RVar14;
  schar sVar15;
  Relation_tBDEA21F6612D1B192B48D774F81E570F3F915DD3 local_24;
  Dictionary_2_tC57E0540B72B255D4500AEB38B987C841F437BB8 *local_1c;
  int local_18;
  int local_14;
  uint local_10;
  Square_tD1B7B6748B35059E198069769341DA3192352B8F *local_c;
  uint local_8;

  if (DAT_1152282a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisCorner_t160419F9B72F1C8FC104D01EC53A0B97BB225279_m84BF1D6BDA1CDE130237506B5BC2F3A4771A8045_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisSquare_tD1B7B6748B35059E198069769341DA3192352B8F_m99256C7213CEAE9E5CB675EA09B2A795B19B6E9B_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Dictionary_2_Add_m1D4C4BC6AEE051B16B97754FB393E38D86988453_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Dictionary_2_Add_mC0E73F61FE94D62C2E307CF3576FE002EAC6A138_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Dictionary_2_Add_mFF95CC71A135269B920F32D076B3A3EB1C4B9370_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_Clear_m6F29CA56F6710F81A5CA3EC1C4ED4EF4A42AE2BD_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_Clear_mBC01A8875E60CF52A89F9B8C0BE98316514FA1FE_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_Clear_mC7C9E95B7805D7E2C67EE0188BCED8078BAD2B47_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568_il2cpp_TypeInfo_var);
    DAT_1152282a = '\x01';
  }
  pOVar1 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_1->___squares_8;
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar6 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(pOVar1,(MethodInfo *)0x0);
  if (!bVar6) {
    return;
  }
  if (param_1->___edgeDict_18 != (Dictionary_2_tC57E0540B72B255D4500AEB38B987C841F437BB8 *)0x0) {
    Dictionary_2_Clear_m03F6E27B9533062BA140D8F18D7B7A24CE042834_gshared
              ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)param_1->___edgeDict_18,
               Dictionary_2_Clear_mC7C9E95B7805D7E2C67EE0188BCED8078BAD2B47_RuntimeMethod_var);
    if ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)param_1->___squareDict_17 !=
        (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0) {
      Dictionary_2_Clear_m03F6E27B9533062BA140D8F18D7B7A24CE042834_gshared
                ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)param_1->___squareDict_17
                 ,Dictionary_2_Clear_m6F29CA56F6710F81A5CA3EC1C4ED4EF4A42AE2BD_RuntimeMethod_var);
      if ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)param_1->___cornerDict_16 !=
          (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0) {
        Dictionary_2_Clear_m03F6E27B9533062BA140D8F18D7B7A24CE042834_gshared
                  ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                   param_1->___cornerDict_16,
                   Dictionary_2_Clear_mBC01A8875E60CF52A89F9B8C0BE98316514FA1FE_RuntimeMethod_var);
        pTVar8 = param_1->___corners_6;
        iVar13 = 0;
        if (pTVar8 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
          while (iVar7 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                                   (pTVar8,(MethodInfo *)0x0), iVar13 < iVar7) {
            if ((((param_1->___corners_6 ==
                   (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) ||
                 (pTVar8 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                                     (param_1->___corners_6,iVar13,(MethodInfo *)0x0),
                 pTVar8 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) ||
                (pIVar9 = Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                    ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar8,
                                     Component_GetComponent_TisCorner_t160419F9B72F1C8FC104D01EC53A0B97BB225279_m84BF1D6BDA1CDE130237506B5BC2F3A4771A8045_RuntimeMethod_var
                                    ), pIVar9 == (Il2CppObject *)0x0)) ||
               ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)param_1->___cornerDict_16
                == (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0))
            goto LAB_10e733a4;
            Dictionary_2_Add_m01FEB2F3B89795A9E2DF74E83079B76347F934F6_gshared
                      ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                       param_1->___cornerDict_16,
                       *(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 *)&pIVar9[1].monitor,pIVar9,
                       Dictionary_2_Add_m1D4C4BC6AEE051B16B97754FB393E38D86988453_RuntimeMethod_var)
            ;
            pTVar8 = param_1->___corners_6;
            iVar13 = iVar13 + 1;
            if (pTVar8 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
            goto LAB_10e733a4;
          }
          pTVar8 = param_1->___squares_8;
          local_14 = 0;
          if (pTVar8 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
          goto LAB_10e731e0;
        }
      }
    }
  }
LAB_10e733a4:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
LAB_10e731e0:
  iVar13 = local_14;
  iVar7 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                    (pTVar8,(MethodInfo *)0x0);
  if (iVar7 <= iVar13) {
    return;
  }
  if ((param_1->___squares_8 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) ||
     (pTVar8 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                         (param_1->___squares_8,iVar13,(MethodInfo *)0x0),
     pTVar8 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) goto LAB_10e733a4;
  pSVar10 = (Square_tD1B7B6748B35059E198069769341DA3192352B8F *)
            Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                      ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar8,
                       Component_GetComponent_TisSquare_tD1B7B6748B35059E198069769341DA3192352B8F_m99256C7213CEAE9E5CB675EA09B2A795B19B6E9B_RuntimeMethod_var
                      );
  cVar12 = '\0';
  local_8 = local_8 & 0xffffff00;
  do {
    if (pSVar10 == (Square_tD1B7B6748B35059E198069769341DA3192352B8F *)0x0) goto LAB_10e733a4;
    sVar15 = (schar)local_8;
    RVar14 = Square_GetRelation_m9DCB308FAE56229E3AE969E2161D9351C2AF598A
                       (pSVar10,sVar15,(MethodInfo *)0x0);
    local_c = RVar14.___square_0;
    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0))
    {
      il2cpp_runtime_class_init
                (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    }
    bVar6 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                      ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)local_c,(MethodInfo *)0x0
                      );
    if (!bVar6) {
      local_1c = param_1->___edgeDict_18;
      pCVar11 = Square_GetCorner_mDF1C111277CAF42FA6601F1A4D8001776B800E93
                          (pSVar10,sVar15,(MethodInfo *)0x0);
      if (pCVar11 == (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0) goto LAB_10e733a4;
      local_c = (Square_tD1B7B6748B35059E198069769341DA3192352B8F *)(pCVar11->___hexPos_4).___x_0;
      local_18 = (pCVar11->___hexPos_4).___y_1;
      pCVar11 = Square_GetCorner_mDF1C111277CAF42FA6601F1A4D8001776B800E93
                          (pSVar10,cVar12 + 1U & 3,(MethodInfo *)0x0);
      pSVar5 = local_c;
      iVar13 = local_18;
      if (pCVar11 == (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0) goto LAB_10e733a4;
      iVar7 = (pCVar11->___hexPos_4).___x_0;
      iVar2 = (pCVar11->___hexPos_4).___y_1;
      local_24.___qube_0 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0;
      local_24.___indexInOther_1 = '\0';
      local_24._5_3_ = 0;
      Relation__ctor_mC55495B76B66E4A318A8CC1244EF7BA745FD13C1
                (&local_24,(Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)pSVar10,sVar15,
                 (MethodInfo *)0x0);
      if (local_1c == (Dictionary_2_tC57E0540B72B255D4500AEB38B987C841F437BB8 *)0x0)
      goto LAB_10e733a4;
      iVar3.___c0_0.___y_1 = iVar13;
      iVar3.___c0_0.___x_0 = (int)pSVar5;
      iVar3.___c1_1.___x_0 = iVar7;
      iVar3.___c1_1.___y_1 = iVar2;
      Dictionary_2_Add_mC0E73F61FE94D62C2E307CF3576FE002EAC6A138_gshared
                (local_1c,iVar3,(Relation_t07BA215683F5DEECD10099A66D2387A00F8BB1FC)local_24,
                 Dictionary_2_Add_mC0E73F61FE94D62C2E307CF3576FE002EAC6A138_RuntimeMethod_var);
    }
    cVar12 = cVar12 + '\x01';
    local_8 = CONCAT31(local_8._1_3_,cVar12);
  } while (cVar12 < '\x04');
  cVar12 = '\0';
  local_10 = local_10 & 0xffffff00;
  iVar13 = *(int *)int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568_il2cpp_TypeInfo_var->static_fields
  ;
  local_c = *(Square_tD1B7B6748B35059E198069769341DA3192352B8F **)
             ((int)int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568_il2cpp_TypeInfo_var->static_fields
             + 4);
  do {
    pCVar11 = Square_GetCorner_mDF1C111277CAF42FA6601F1A4D8001776B800E93
                        (pSVar10,(schar)local_10,(MethodInfo *)0x0);
    if (pCVar11 == (Corner_t160419F9B72F1C8FC104D01EC53A0B97BB225279 *)0x0) goto LAB_10e733a4;
    cVar12 = cVar12 + '\x01';
    iVar13 = iVar13 + (pCVar11->___hexPos_4).___x_0;
    local_c = (Square_tD1B7B6748B35059E198069769341DA3192352B8F *)
              ((int)&local_c->_padding_ + (pCVar11->___hexPos_4).___y_1);
    local_10 = CONCAT31(local_10._1_3_,cVar12);
  } while (cVar12 < '\x04');
  if ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)param_1->___squareDict_17 ==
      (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0) goto LAB_10e733a4;
  iVar4.___y_1 = (int)local_c;
  iVar4.___x_0 = iVar13;
  Dictionary_2_Add_m01FEB2F3B89795A9E2DF74E83079B76347F934F6_gshared
            ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)param_1->___squareDict_17,
             iVar4,(Il2CppObject *)pSVar10,
             Dictionary_2_Add_mFF95CC71A135269B920F32D076B3A3EB1C4B9370_RuntimeMethod_var);
  pTVar8 = param_1->___squares_8;
  local_14 = local_14 + 1;
  if (pTVar8 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_10e733a4;
  goto LAB_10e731e0;
}
