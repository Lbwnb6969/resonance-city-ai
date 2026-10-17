// RVA 0xa09e60 | Placemaker.ShadowBaker$$MaybeUpdateFraming
// PDB: ShadowBaker_MaybeUpdateFraming_mDC5F3ABCC227712A8705A25481D158DA89951C46
// Body: [[10a09e60, 10a0ab5b]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10192150 memset
// 1026afc0 Enumerator_get_Current_m219A61A853F50E6015B3FE63741CFDF398F8A52F_gshared
// 102c1f90 TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
// 1040e020 HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
// 105cc160 KeyValuePair_2_get_Key_m2B0C0B873F6584BDB82A68B27A42C13215562BB6_gshared
// 1065f5a0 Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3
// 1065f820 Quaternion_Inverse_mE2A449C7AC8A40350AAC3761AE1AFC170062CAC9
// 1065f940 Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF
// 1065ff40 Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0
// 10660030 Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D
// 10668440 Shader_SetGlobalMatrix_mD35BB59CA44958430C76208064B372484ED349F3
// 106685e0 Shader_SetGlobalVector_m241FC10C437094156CA0C6CC299A3F09404CE1F3
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 1066fbe0 Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200
// 1066fc20 Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31
// 1066fe60 Transform_get_worldToLocalMatrix_mE22FDE24767E1DE402D3E7A1C9803379B2E8399D
// 1066ffc0 Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
// 106700e0 Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
// 10670140 Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4
// 10674190 Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
// 10674300 Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90
// 10674490 Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
// 10674590 Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
// 10675160 Vector4_op_Implicit_mDCFA56E9D34979E1E2BFE6C2D61F1768D934A8EB
// 10836080 ExtraMath_Center_mA17CB832B764FF16B283E1D50FFD9BD6762D680E
// 10837090 ExtraMath_SetY_m65C79C2D27A9408438A588993C47DCAC2216E149
// 10a370d0 Bounds_Encapsulate_mE74070861B19845E70A3C333A5206823ADC7DAD7
// 10a37760 Bounds__ctor_m8356472A177F4B22FFCE8911EBC8547A65A07CA3
// 10a378d0 Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14
// 10a37a50 Bounds_set_extents_m9590B3BB7D59A4C35D9F0E381A20C6A96A4D9D89
// 10a387e0 Camera_set_farClipPlane_m63F1302068433A72A5103281327C68CD8F67AD41
// 10a38860 Camera_set_nearClipPlane_m4EA1D92F6E1D17E423EC036561E115F434DC2263
// 10a388d0 Camera_set_orthographicSize_mFC4BBB0BB0097A5FE13E99D8388DF3008971085F
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a43fb0 Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775
// 10a45150 Matrix4x4_Scale_m62CFAE1F96495BD3F39D6FB21385C04B9ACC50ED
// 10a45990 Matrix4x4_Translate_m48688727FA7BBA42DF2108C1A9395FC23431AC9A
// 10a45f00 Matrix4x4_get_inverse_mFA34ECC790B269522F60FC32370D628DAFCAE225
// 10a46010 Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F
// 10e13ac0 GridGenerator_HexToPlane_m5111038CB66C215D42B4436F75F77882EF48039F

void __cdecl
ShadowBaker_MaybeUpdateFraming_mDC5F3ABCC227712A8705A25481D158DA89951C46
          (ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427 *param_1,MethodInfo *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar3;
  float fVar4;
  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *pCVar5;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 MVar6;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 MVar7;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 MVar8;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 QVar9;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 QVar10;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 QVar11;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 QVar12;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 QVar13;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 QVar14;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar15;
  int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F iVar16;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar17;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 QVar18;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 QVar19;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar20;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar21;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar22;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar23;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar24;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar25;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar26;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar27;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar28;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar29;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *pQVar30;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar31;
  int iVar32;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *piVar33;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *pfVar34;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *extraout_EAX;
  ValueTuple_3_tEF9008762923C50FBA1F5E13EFAE26235274202D *pVVar35;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *pMVar36;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *pVVar37;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar38;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar39;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 local_190;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 local_150;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 local_f0;
  undefined8 local_dc;
  float local_d4;
  Il2CppObject *local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_b8;
  undefined1 local_a8 [32];
  float local_88;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 local_80;
  undefined8 local_70;
  float local_68;
  int local_5c;
  ValueTuple_3_tEF9008762923C50FBA1F5E13EFAE26235274202D local_58;
  int iStack_4c;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_48;
  float local_34;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_30;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_20;

  if (DAT_115201e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427_il2cpp_TypeInfo_var);
    DAT_115201e3 = '\x01';
  }
  local_a8._0_4_ = (LinkedList_1_t555E05F2E497A99E81B02BC6149DEFDB20186689 *)0x0;
  local_a8._4_4_ = (LinkedListNode_1_t31224B82477217EC2257F5D5D3CD9B16431A66EC *)0x0;
  local_a8._8_4_ = 0.0;
  local_a8._12_4_ = (Il2CppObject *)0x0;
  local_a8._16_4_ = (Il2CppObject *)0x0;
  local_a8._20_4_ = (Il2CppObject *)0x0;
  memset((uchar *)&local_150,'\0',0x40);
  if (param_1->___framingDirty_28 == false) {
    return;
  }
  param_1->___framingDirty_28 = false;
  if (((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___cam_7 !=
       (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) &&
     (pTVar29 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                          ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___cam_7,
                           (MethodInfo *)0x0),
     pTVar29 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
    pQVar30 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200
                        (&local_80,pTVar29,(MethodInfo *)0x0);
    local_d0 = (Il2CppObject *)pQVar30->___x_0;
    fStack_cc = pQVar30->___y_1;
    fStack_c8 = pQVar30->___z_2;
    fStack_c4 = pQVar30->___w_3;
    local_b8.___m_Left_0 = pQVar30->___x_0;
    local_b8.___m_Right_1 = pQVar30->___y_1;
    local_b8.___m_Top_2 = pQVar30->___z_2;
    local_b8.___m_Bottom_3 = pQVar30->___w_3;
    pVVar31 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_20,
                         (MethodInfo *)0x0);
    QVar10.___y_1 = local_b8.___m_Right_1;
    QVar10.___x_0 = local_b8.___m_Left_0;
    QVar10.___z_2 = local_b8.___m_Top_2;
    QVar10.___w_3 = local_b8.___m_Bottom_3;
    pVVar31 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_20,QVar10,
                         *pVVar31,(MethodInfo *)0x0);
    local_dc._0_4_ = pVVar31->___x_2;
    local_dc._4_4_ = pVVar31->___y_3;
    local_d4 = pVVar31->___z_4;
    QVar18.___y_1 = fStack_cc;
    QVar18.___x_0 = (float)local_d0;
    QVar18.___z_2 = fStack_c8;
    QVar18.___w_3 = fStack_c4;
    local_70 = local_dc;
    local_34 = local_d4;
    pQVar30 = Quaternion_Inverse_mE2A449C7AC8A40350AAC3761AE1AFC170062CAC9
                        (&local_80,QVar18,(MethodInfo *)0x0);
    local_b8.___m_Left_0 = pQVar30->___x_0;
    local_b8.___m_Right_1 = pQVar30->___y_1;
    local_b8.___m_Top_2 = pQVar30->___z_2;
    local_b8.___m_Bottom_3 = pQVar30->___w_3;
    if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
       ((pGVar3 = param_1->___master_4->___graph_7,
        pGVar3 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0 &&
        (pTVar29 = pGVar3->___corners_6,
        pTVar29 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)))) {
      iVar32 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                         (pTVar29,(MethodInfo *)0x0);
      param_1->___count_18 = 0;
      param_1->___shouldBake_31 = true;
      if (iVar32 < 1) {
        return;
      }
      if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
         (pGVar3 = param_1->___master_4->___graph_7,
         pGVar3 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) {
        local_58.___Item1_0 = (Il2CppObject *)(pGVar3->___bounds_28).___c0_0.___x_0;
        local_58.___Item2_1 = (Il2CppObject *)(pGVar3->___bounds_28).___c0_0.___y_1;
        local_58.___Item3_2 = (Il2CppObject *)(pGVar3->___bounds_28).___c0_0.___z_2;
        iStack_4c = (pGVar3->___bounds_28).___c1_1.___x_0;
        local_30.___x_2 = (float)(pGVar3->___bounds_28).___c1_1.___y_1;
        local_30.___y_3 = (float)(pGVar3->___bounds_28).___c1_1.___z_2;
        if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor !=
             '\0') &&
           (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished
            == 0)) {
          il2cpp_runtime_class_init
                    (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
        }
        iVar16.___c0_0.___y_1 = (int)local_58.___Item2_1;
        iVar16.___c0_0.___x_0 = (int)local_58.___Item1_0;
        iVar16.___c0_0.___z_2 = (int)local_58.___Item3_2;
        iVar16.___c1_1.___x_0 = iStack_4c;
        iVar16.___c1_1.___y_1 = local_30.___x_2;
        iVar16.___c1_1.___z_2 = local_30.___y_3;
        piVar33 = ExtraMath_Center_mA17CB832B764FF16B283E1D50FFD9BD6762D680E
                            ((int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *)&local_20,iVar16,
                             (MethodInfo *)0x0);
        local_30.___x_2 = (float)piVar33->___x_0;
        local_30.___y_3 = (float)piVar33->___y_1;
        iVar32 = piVar33->___z_2;
        if ((GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->has_cctor
             != '\0') &&
           (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->
            cctor_finished == 0)) {
          il2cpp_runtime_class_init
                    (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var);
        }
        iVar21.___z_2 = iVar32;
        iVar21.___x_0 = (int)local_30.___x_2;
        iVar21.___y_1 = (int)local_30.___y_3;
        fVar39 = GridGenerator_HexToPlane_m5111038CB66C215D42B4436F75F77882EF48039F
                           (iVar21,(MethodInfo *)0x0);
        pfVar34 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                            (&local_20,fVar39,0.0,(MethodInfo *)0x0);
        uVar1 = pfVar34->___x_0;
        uVar2 = pfVar34->___y_1;
        Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                  ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_20,(float)uVar1,
                   (float)uVar2,pfVar34->___z_2,(MethodInfo *)0x0);
        QVar11.___y_1 = local_b8.___m_Right_1;
        QVar11.___x_0 = local_b8.___m_Left_0;
        QVar11.___z_2 = local_b8.___m_Top_2;
        QVar11.___w_3 = local_b8.___m_Bottom_3;
        pVVar31 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D
                            ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_20,QVar11,
                             *extraout_EAX,(MethodInfo *)0x0);
        local_30.___x_2 = pVVar31->___x_2;
        local_30.___y_3 = pVVar31->___y_3;
        fVar4 = pVVar31->___z_4;
        pVVar31 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                            ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_20,
                             (MethodInfo *)0x0);
        VVar15.___z_4 = fVar4;
        VVar15.___x_2 = local_30.___x_2;
        VVar15.___y_3 = local_30.___y_3;
        Bounds__ctor_m8356472A177F4B22FFCE8911EBC8547A65A07CA3
                  ((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)local_a8,VVar15,*pVVar31,
                   (MethodInfo *)0x0);
        if (((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
            && (pGVar3 = param_1->___master_4->___graph_7,
               pGVar3 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) &&
           (pTVar29 = pGVar3->___corners_6,
           pTVar29 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
          local_30.___z_4 =
               (float)Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                                (pTVar29,(MethodInfo *)0x0);
          while (local_30.___z_4 =
                      (float)((int)&((Il2CppObject *)((int)local_30.___z_4 + -8))->monitor + 3),
                -1 < (int)local_30.___z_4) {
            if (((param_1->___master_4 ==
                  (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
                (pGVar3 = param_1->___master_4->___graph_7,
                pGVar3 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) ||
               ((pTVar29 = pGVar3->___corners_6,
                pTVar29 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0 ||
                (pTVar29 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                                     (pTVar29,(int)local_30.___z_4,(MethodInfo *)0x0),
                pTVar29 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))))
            goto LAB_10a0ab57;
            local_5c = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                                 (pTVar29,(MethodInfo *)0x0);
            if (0 < local_5c) {
              pVVar31 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                  ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_20,
                                   pTVar29,(MethodInfo *)0x0);
              QVar12.___y_1 = local_b8.___m_Right_1;
              QVar12.___x_0 = local_b8.___m_Left_0;
              QVar12.___z_2 = local_b8.___m_Top_2;
              QVar12.___w_3 = local_b8.___m_Bottom_3;
              pVVar31 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D
                                  ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                   (local_a8 + 0x18),QVar12,*pVVar31,(MethodInfo *)0x0);
              Bounds_Encapsulate_mE74070861B19845E70A3C333A5206823ADC7DAD7
                        ((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)local_a8,*pVVar31,
                         (MethodInfo *)0x0);
              pTVar29 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                                  (pTVar29,local_5c + -1,(MethodInfo *)0x0);
              if (pTVar29 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
              goto LAB_10a0ab57;
              pVVar31 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                  (&local_48,pTVar29,(MethodInfo *)0x0);
              QVar13.___y_1 = local_b8.___m_Right_1;
              QVar13.___x_0 = local_b8.___m_Left_0;
              QVar13.___z_2 = local_b8.___m_Top_2;
              QVar13.___w_3 = local_b8.___m_Bottom_3;
              pVVar31 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D
                                  ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_58,
                                   QVar13,*pVVar31,(MethodInfo *)0x0);
              Bounds_Encapsulate_mE74070861B19845E70A3C333A5206823ADC7DAD7
                        ((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)local_a8,*pVVar31,
                         (MethodInfo *)0x0);
            }
            param_1->___count_18 = param_1->___count_18 + local_5c;
          }
          pVVar35 = Enumerator_get_Current_m219A61A853F50E6015B3FE63741CFDF398F8A52F_gshared
                              (&local_58,
                               (Enumerator_tDC59471D5148D9341C44E818E45BF04091D98514 *)local_a8,
                               (MethodInfo *)0x0);
          local_30.___x_2 = (float)pVVar35->___Item1_0;
          local_30.___y_3 = (float)pVVar35->___Item2_1;
          local_30.___z_4 = (float)pVVar35->___Item3_2;
          pVVar31 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
                              ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_58,
                               (MethodInfo *)0x0);
          local_a8._24_4_ = pVVar31->___x_2;
          local_a8._28_4_ = pVVar31->___y_3;
          local_88 = pVVar31->___z_4;
          local_20.___x_0 = pVVar31->___x_2;
          local_20.___y_1 = pVVar31->___y_3;
          local_20.___z_2 = local_88 * __real_40400000 + local_30.___z_4;
          VVar22.___y_3 = local_a8._28_4_ * __real_40400000 + local_30.___y_3;
          VVar22.___x_2 = local_a8._24_4_ * __real_40400000 + local_30.___x_2;
          VVar22.___z_4 = local_20.___z_2;
          local_48._0_8_ = local_a8._24_8_;
          local_48.___z_4 = local_88;
          Bounds_set_extents_m9590B3BB7D59A4C35D9F0E381A20C6A96A4D9D89
                    ((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)local_a8,VVar22,
                     (MethodInfo *)0x0);
          piVar33 = KeyValuePair_2_get_Key_m2B0C0B873F6584BDB82A68B27A42C13215562BB6_gshared
                              ((int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *)&local_58,
                               (KeyValuePair_2_tD00B4F68FA99B82C68481A84C9E582504AC3913E *)local_a8,
                               (MethodInfo *)0x0);
          QVar14.___y_1 = fStack_cc;
          QVar14.___x_0 = (float)local_d0;
          QVar14.___z_2 = fStack_c8;
          QVar14.___w_3 = fStack_c4;
          pVVar31 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D
                              ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_58,QVar14
                               ,(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E)*piVar33,
                               (MethodInfo *)0x0);
          local_48.___x_2 = pVVar31->___x_2;
          local_48.___y_3 = pVVar31->___y_3;
          fVar4 = pVVar31->___z_4;
          local_48.___z_4 = fVar4;
          local_30._0_8_ = local_48._0_8_;
          if (((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___cam_7 !=
               (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) &&
             (pTVar29 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                  ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                   param_1->___cam_7,(MethodInfo *)0x0),
             pTVar29 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
            VVar23.___z_4 = fVar4;
            VVar23.___x_2 = local_30.___x_2;
            VVar23.___y_3 = local_30.___y_3;
            Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
                      (pTVar29,VVar23,(MethodInfo *)0x0);
            if (((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___cam_7 !=
                 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) &&
               (pTVar29 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                    ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                     param_1->___cam_7,(MethodInfo *)0x0),
               pTVar29 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
              QVar19.___y_1 = fStack_cc;
              QVar19.___x_0 = (float)local_d0;
              QVar19.___z_2 = fStack_c8;
              QVar19.___w_3 = fStack_c4;
              Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4
                        (pTVar29,QVar19,(MethodInfo *)0x0);
              pVVar35 = Enumerator_get_Current_m219A61A853F50E6015B3FE63741CFDF398F8A52F_gshared
                                  (&local_58,
                                   (Enumerator_tDC59471D5148D9341C44E818E45BF04091D98514 *)local_a8,
                                   (MethodInfo *)0x0);
              local_20.___x_0 = (float)pVVar35->___Item1_0;
              local_20.___y_1 = (float)pVVar35->___Item2_1;
              local_20.___z_2 = (float)pVVar35->___Item3_2;
              pVVar35 = Enumerator_get_Current_m219A61A853F50E6015B3FE63741CFDF398F8A52F_gshared
                                  (&local_58,
                                   (Enumerator_tDC59471D5148D9341C44E818E45BF04091D98514 *)local_a8,
                                   (MethodInfo *)0x0);
              local_30.___z_4 =
                   Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775
                             (local_20.___y_1,(float)pVVar35->___Item1_0,(MethodInfo *)0x0);
              if (param_1->___cam_7 != (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)0x0) {
                fStack_cc = 0.0;
                fStack_c8 = 0.0;
                fStack_c4 = 0.0;
                local_d0 = (Il2CppObject *)local_30.___z_4;
                Camera_set_orthographicSize_mFC4BBB0BB0097A5FE13E99D8388DF3008971085F
                          (param_1->___cam_7,local_30.___z_4,(MethodInfo *)0x0);
                pCVar5 = param_1->___cam_7;
                pVVar35 = Enumerator_get_Current_m219A61A853F50E6015B3FE63741CFDF398F8A52F_gshared
                                    (&local_58,
                                     (Enumerator_tDC59471D5148D9341C44E818E45BF04091D98514 *)
                                     local_a8,(MethodInfo *)0x0);
                local_20.___x_0 = (float)pVVar35->___Item1_0;
                local_20.___y_1 = (float)pVVar35->___Item2_1;
                local_20.___z_2 = (float)pVVar35->___Item3_2;
                if (pCVar5 != (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)0x0) {
                  Camera_set_nearClipPlane_m4EA1D92F6E1D17E423EC036561E115F434DC2263
                            (pCVar5,(float)((uint)local_20.___z_2 ^
                                           __xmm_80000000800000008000000080000000),(MethodInfo *)0x0
                            );
                  pCVar5 = param_1->___cam_7;
                  pVVar35 = Enumerator_get_Current_m219A61A853F50E6015B3FE63741CFDF398F8A52F_gshared
                                      (&local_58,
                                       (Enumerator_tDC59471D5148D9341C44E818E45BF04091D98514 *)
                                       local_a8,(MethodInfo *)0x0);
                  local_20.___x_0 = (float)pVVar35->___Item1_0;
                  local_20.___y_1 = (float)pVVar35->___Item2_1;
                  local_20.___z_2 = (float)pVVar35->___Item3_2;
                  if (pCVar5 != (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C *)0x0) {
                    Camera_set_farClipPlane_m63F1302068433A72A5103281327C68CD8F67AD41
                              (pCVar5,local_20.___z_2,(MethodInfo *)0x0);
                    pVVar31 = Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14
                                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                         &local_58,
                                         (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)
                                         local_a8,(MethodInfo *)0x0);
                    local_a8._24_4_ = pVVar31->___x_2;
                    local_a8._28_4_ = pVVar31->___y_3;
                    local_88 = pVVar31->___z_4;
                    local_30.___z_4 = __real_3f800000 / local_88;
                    VVar24.___y_3 = __real_3f000000 / (float)local_d0;
                    VVar24.___x_2 = __real_3f000000 / (float)local_d0;
                    VVar24.___z_4 = local_30.___z_4;
                    local_20.___z_2 = local_30.___z_4;
                    pMVar36 = Matrix4x4_Scale_m62CFAE1F96495BD3F39D6FB21385C04B9ACC50ED
                                        (&local_190,VVar24,(MethodInfo *)0x0);
                    local_100 = pMVar36->___m00_0;
                    fStack_fc = pMVar36->___m10_1;
                    fStack_f8 = pMVar36->___m20_2;
                    fStack_f4 = pMVar36->___m30_3;
                    local_110 = pMVar36->___m01_4;
                    fStack_10c = pMVar36->___m11_5;
                    fStack_108 = pMVar36->___m21_6;
                    fStack_104 = pMVar36->___m31_7;
                    local_f0.___x_0 = pMVar36->___m02_8;
                    local_f0.___y_1 = pMVar36->___m12_9;
                    local_f0.___z_2 = pMVar36->___m22_10;
                    local_f0.___w_3 = pMVar36->___m32_11;
                    local_80.___x_0 = pMVar36->___m03_12;
                    local_80.___y_1 = pMVar36->___m13_13;
                    local_80.___z_2 = pMVar36->___m23_14;
                    local_80.___w_3 = pMVar36->___m33_15;
                    pVVar35 = Enumerator_get_Current_m219A61A853F50E6015B3FE63741CFDF398F8A52F_gshared
                                        (&local_58,
                                         (Enumerator_tDC59471D5148D9341C44E818E45BF04091D98514 *)
                                         local_a8,(MethodInfo *)0x0);
                    local_20.___x_0 = (float)pVVar35->___Item1_0;
                    local_20.___y_1 = (float)pVVar35->___Item2_1;
                    local_20.___z_2 = (float)pVVar35->___Item3_2;
                    VVar25.___y_3 = (float)local_d0;
                    VVar25.___x_2 = (float)local_d0;
                    VVar25.___z_4 = local_20.___z_2;
                    pMVar36 = Matrix4x4_Translate_m48688727FA7BBA42DF2108C1A9395FC23431AC9A
                                        (&local_190,VVar25,(MethodInfo *)0x0);
                    MVar6.___m10_1 = fStack_fc;
                    MVar6.___m00_0 = local_100;
                    MVar6.___m20_2 = fStack_f8;
                    MVar6.___m30_3 = fStack_f4;
                    MVar6.___m01_4 = local_110;
                    MVar6.___m11_5 = fStack_10c;
                    MVar6.___m21_6 = fStack_108;
                    MVar6.___m31_7 = fStack_104;
                    MVar6.___m02_8 = local_f0.___x_0;
                    MVar6.___m12_9 = local_f0.___y_1;
                    MVar6.___m22_10 = local_f0.___z_2;
                    MVar6.___m32_11 = local_f0.___w_3;
                    MVar6.___m03_12 = local_80.___x_0;
                    MVar6.___m13_13 = local_80.___y_1;
                    MVar6.___m23_14 = local_80.___z_2;
                    MVar6.___m33_15 = local_80.___w_3;
                    pMVar36 = Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F
                                        (&local_190,MVar6,*pMVar36,(MethodInfo *)0x0);
                    local_80.___x_0 = pMVar36->___m00_0;
                    local_80.___y_1 = pMVar36->___m10_1;
                    local_80.___z_2 = pMVar36->___m20_2;
                    local_80.___w_3 = pMVar36->___m30_3;
                    local_f0.___x_0 = pMVar36->___m01_4;
                    local_f0.___y_1 = pMVar36->___m11_5;
                    local_f0.___z_2 = pMVar36->___m21_6;
                    local_f0.___w_3 = pMVar36->___m31_7;
                    local_110 = pMVar36->___m02_8;
                    fStack_10c = pMVar36->___m12_9;
                    fStack_108 = pMVar36->___m22_10;
                    fStack_104 = pMVar36->___m32_11;
                    local_100 = pMVar36->___m03_12;
                    fStack_fc = pMVar36->___m13_13;
                    fStack_f8 = pMVar36->___m23_14;
                    fStack_f4 = pMVar36->___m33_15;
                    if (((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___cam_7 !=
                         (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) &&
                       (pTVar29 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                             param_1->___cam_7,(MethodInfo *)0x0),
                       pTVar29 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
                      pMVar36 = Transform_get_worldToLocalMatrix_mE22FDE24767E1DE402D3E7A1C9803379B2E8399D
                                          (&local_190,pTVar29,(MethodInfo *)0x0);
                      MVar7.___m10_1 = local_80.___y_1;
                      MVar7.___m00_0 = local_80.___x_0;
                      MVar7.___m20_2 = local_80.___z_2;
                      MVar7.___m30_3 = local_80.___w_3;
                      MVar7.___m01_4 = local_f0.___x_0;
                      MVar7.___m11_5 = local_f0.___y_1;
                      MVar7.___m21_6 = local_f0.___z_2;
                      MVar7.___m31_7 = local_f0.___w_3;
                      MVar7.___m02_8 = local_110;
                      MVar7.___m12_9 = fStack_10c;
                      MVar7.___m22_10 = fStack_108;
                      MVar7.___m32_11 = fStack_104;
                      MVar7.___m03_12 = local_100;
                      MVar7.___m13_13 = fStack_fc;
                      MVar7.___m23_14 = fStack_f8;
                      MVar7.___m33_15 = fStack_f4;
                      pMVar36 = Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F
                                          (&local_190,MVar7,*pMVar36,(MethodInfo *)0x0);
                      local_150.___m00_0 = pMVar36->___m00_0;
                      local_150.___m10_1 = pMVar36->___m10_1;
                      local_150.___m20_2 = pMVar36->___m20_2;
                      local_150.___m30_3 = pMVar36->___m30_3;
                      local_150.___m01_4 = pMVar36->___m01_4;
                      local_150.___m11_5 = pMVar36->___m11_5;
                      local_150.___m21_6 = pMVar36->___m21_6;
                      local_150.___m31_7 = pMVar36->___m31_7;
                      local_150.___m02_8 = pMVar36->___m02_8;
                      local_150.___m12_9 = pMVar36->___m12_9;
                      local_150.___m22_10 = pMVar36->___m22_10;
                      local_150.___m32_11 = pMVar36->___m32_11;
                      local_150.___m03_12 = pMVar36->___m03_12;
                      local_150.___m13_13 = pMVar36->___m13_13;
                      local_150.___m23_14 = pMVar36->___m23_14;
                      local_150.___m33_15 = pMVar36->___m33_15;
                      if ((ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427_il2cpp_TypeInfo_var
                           ->has_cctor != '\0') &&
                         (ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427_il2cpp_TypeInfo_var
                          ->cctor_finished == 0)) {
                        il2cpp_runtime_class_init
                                  (
                                  ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427_il2cpp_TypeInfo_var
                                  );
                      }
                      MVar8.___m10_1 = local_150.___m10_1;
                      MVar8.___m00_0 = local_150.___m00_0;
                      MVar8.___m20_2 = local_150.___m20_2;
                      MVar8.___m30_3 = local_150.___m30_3;
                      MVar8.___m01_4 = local_150.___m01_4;
                      MVar8.___m11_5 = local_150.___m11_5;
                      MVar8.___m21_6 = local_150.___m21_6;
                      MVar8.___m31_7 = local_150.___m31_7;
                      MVar8.___m02_8 = local_150.___m02_8;
                      MVar8.___m12_9 = local_150.___m12_9;
                      MVar8.___m22_10 = local_150.___m22_10;
                      MVar8.___m32_11 = local_150.___m32_11;
                      MVar8.___m03_12 = local_150.___m03_12;
                      MVar8.___m13_13 = local_150.___m13_13;
                      MVar8.___m23_14 = local_150.___m23_14;
                      MVar8.___m33_15 = local_150.___m33_15;
                      Shader_SetGlobalMatrix_mD35BB59CA44958430C76208064B372484ED349F3
                                (*(int *)ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427_il2cpp_TypeInfo_var
                                         ->static_fields,MVar8,(MethodInfo *)0x0);
                      iVar32 = *(int *)((int)ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427_il2cpp_TypeInfo_var
                                             ->static_fields + 4);
                      pMVar36 = Matrix4x4_get_inverse_mFA34ECC790B269522F60FC32370D628DAFCAE225
                                          (&local_190,&local_150,(MethodInfo *)0x0);
                      Shader_SetGlobalMatrix_mD35BB59CA44958430C76208064B372484ED349F3
                                (iVar32,*pMVar36,(MethodInfo *)0x0);
                      iVar32 = *(int *)((int)ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427_il2cpp_TypeInfo_var
                                             ->static_fields + 8);
                      local_b8.___m_Left_0 = 0.0;
                      local_b8.___m_Right_1 = 0.0;
                      local_b8.___m_Top_2 = 0.0;
                      local_b8.___m_Bottom_3 = 0.0;
                      TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
                                (&local_b8,local_88,local_30.___z_4,0.0,0.0,(MethodInfo *)0x0);
                      VVar20.___y_2 = local_b8.___m_Right_1;
                      VVar20.___x_1 = local_b8.___m_Left_0;
                      VVar20.___z_3 = local_b8.___m_Top_2;
                      VVar20.___w_4 = local_b8.___m_Bottom_3;
                      Shader_SetGlobalVector_m241FC10C437094156CA0C6CC299A3F09404CE1F3
                                (iVar32,VVar20,(MethodInfo *)0x0);
                      iVar32 = *(int *)((int)ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427_il2cpp_TypeInfo_var
                                             ->static_fields + 0xc);
                      VVar26.___z_4 = local_34;
                      VVar26.___x_2 = (float)(undefined4)local_70;
                      VVar26.___y_3 = (float)local_70._4_4_;
                      pVVar37 = Vector4_op_Implicit_mDCFA56E9D34979E1E2BFE6C2D61F1768D934A8EB
                                          ((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)
                                           &local_80,VVar26,(MethodInfo *)0x0);
                      Shader_SetGlobalVector_m241FC10C437094156CA0C6CC299A3F09404CE1F3
                                (iVar32,*pVVar37,(MethodInfo *)0x0);
                      local_30.___z_4 = __real_3f800000 / local_dc._4_4_;
                      local_70 = CONCAT44(local_48.___y_3 -
                                          local_dc._4_4_ * local_30.___z_4 * local_48.___y_3,
                                          local_48.___x_2 -
                                          (float)local_dc * local_30.___z_4 * local_48.___y_3);
                      local_68 = local_48.___z_4 - local_d4 * local_30.___z_4 * local_48.___y_3;
                      if (((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                           param_1->___shadowPlane_8 !=
                           (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) &&
                         (pTVar29 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                              ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                *)param_1->___shadowPlane_8,(MethodInfo *)0x0),
                         pTVar29 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) {
                        VVar27.___z_4 = local_68;
                        VVar27.___x_2 = (float)(undefined4)local_70;
                        VVar27.___y_3 = (float)local_70._4_4_;
                        Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
                                  (pTVar29,VVar27,(MethodInfo *)0x0);
                        if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                            param_1->___shadowPlane_8 !=
                            (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
                          pTVar29 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                              ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                *)param_1->___shadowPlane_8,(MethodInfo *)0x0);
                          if (((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                               param_1->___cam_7 !=
                               (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) &&
                             (pTVar38 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                                  ((
                                                  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                  *)param_1->___cam_7,(MethodInfo *)0x0),
                             pTVar38 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
                          {
                            pVVar31 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31
                                                ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E
                                                  *)&local_58,pTVar38,(MethodInfo *)0x0);
                            local_70._0_4_ = pVVar31->___x_2;
                            local_70._4_4_ = pVVar31->___y_3;
                            local_34 = pVVar31->___z_4;
                            if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                                 ->has_cctor != '\0') &&
                               (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                                ->cctor_finished == 0)) {
                              il2cpp_runtime_class_init
                                        (
                                        ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var
                                        );
                            }
                            fVar17.___z_2 = local_34;
                            fVar17.___x_0 = (float)(undefined4)local_70;
                            fVar17.___y_1 = (float)local_70._4_4_;
                            pfVar34 = ExtraMath_SetY_m65C79C2D27A9408438A588993C47DCAC2216E149
                                                ((float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *
                                                 )&local_58,fVar17,0.0,(MethodInfo *)0x0);
                            pQVar30 = Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF
                                                (&local_80,
                                                 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E)
                                                 *pfVar34,(MethodInfo *)0x0);
                            local_80.___x_0 = pQVar30->___x_0;
                            local_80.___y_1 = pQVar30->___y_1;
                            local_80.___z_2 = pQVar30->___z_2;
                            local_80.___w_3 = pQVar30->___w_3;
                            pQVar30 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3
                                                (&local_f0,0.0,180.0,0.0,(MethodInfo *)0x0);
                            QVar9.___y_1 = local_80.___y_1;
                            QVar9.___x_0 = local_80.___x_0;
                            QVar9.___z_2 = local_80.___z_2;
                            QVar9.___w_3 = local_80.___w_3;
                            pQVar30 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0
                                                (&local_80,QVar9,*pQVar30,(MethodInfo *)0x0);
                            if (pTVar29 !=
                                (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                              Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4
                                        (pTVar29,*pQVar30,(MethodInfo *)0x0);
                              if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                  param_1->___shadowPlane_8 !=
                                  (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
                                pTVar29 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                                    ((
                                                  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                  *)param_1->___shadowPlane_8,(MethodInfo *)0x0);
                                pVVar31 = Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14
                                                    ((
                                                  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E
                                                  *)&local_58,
                                                  (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37
                                                   *)local_a8,(MethodInfo *)0x0);
                                local_34 = pVVar31->___x_2;
                                pVVar31 = Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14
                                                    ((
                                                  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E
                                                  *)&local_58,
                                                  (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37
                                                   *)local_a8,(MethodInfo *)0x0);
                                local_20.___x_0 = pVVar31->___x_2;
                                local_20.___y_1 = pVVar31->___y_3;
                                local_48.___y_3 = 1.0;
                                local_48.___x_2 = local_34 * __real_3dcccccd;
                                local_48.___z_4 =
                                     local_20.___y_1 * local_30.___z_4 * __real_3dcccccd;
                                if (pTVar29 !=
                                    (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                                  VVar28.___y_3 = 1.0;
                                  VVar28.___x_2 = local_34 * __real_3dcccccd;
                                  VVar28.___z_4 = local_48.___z_4;
                                  Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
                                            (pTVar29,VVar28,(MethodInfo *)0x0);
                                  return;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_10a0ab57:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
