// RVA 0x4ba9f0 | CornerImage$$OnPopulateMesh
// PDB: CornerImage_OnPopulateMesh_mA2EE950311D4C71CBFC1139179A0D54AC3E549CB
// Body: [[104ba9f0, 104bc7fb]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10192150 memset
// 101d1470 AutoScroll_get_speed_mD25D719F797FAE97AB8CB2B63496C881D1D51F57
// 101d1480 AutoScroll_get_targetPosition_m3E7108A35FE9F905A4D9F1E072AC9B8915491DDA
// 101d1490 AutoScroll_get_time_m821A91DD5EC59EEA7FFD61FB87B16342F3A5CB54
// 101d14e0 AutoScroll_set_speed_m1710BE060404F3C2F998A04D3711C9943956C283
// 101d1500 AutoScroll_set_targetPosition_m2CB8F35117E634C45F3B35F7EDA61B12A3E27C33
// 101d1520 AutoScroll_set_time_mBE1D4E4BF204AAF608F71B3FF891E0A172D0C827
// 102c1f90 TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
// 102c1ff0 TMP_Offset_get_horizontal_m05407E9C4552DC57C8537C492F8411A018D67EDC
// 102c2170 TMP_Offset_set_left_m34F11D3636911C10ECC0287F97031202ADDD8A53
// 10441630 DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
// 105cffe0 ListPool_1_Get_m115ABCD645C890A36F58D2AFB9D56068DDD2CE56_gshared
// 105d0600 ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
// 10661e30 RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2
// 10662d60 Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5
// 10662d70 Rect_get_yMax_m9685BF55B44C51FF9BA080F9995073E458E1CDC3
// 10669470 Sprite_get_border_m6AEB051C1A675509BB786427883FC2EE957F60A7
// 10669660 Sprite_get_textureRect_m5B350C2B122C85549960912CBD6343E4A5B02C35
// 10669710 Sprite_get_texture_mD03E68058C9F727321FE643CBDB3A469F96E49FB
// 1066d760 Texture_get_texelSize_m804B471337C8AF2334FF12FA2CC6198EFD7EB5EB
// 10674300 Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90
// 106751a0 Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504
// 107c0c90 Graphic_OnPopulateMesh_m60171AAA2F2AF25E9304C8334FCE766711828DA5
// 107c2340 Graphic_get_rectTransform_m87D5A808474C6B71649CBB153DEBF5F268189EFF
// 10a38cf0 Color32_op_Implicit_mD17E8145D2D32EF369EFE349C4D32E839F7D7AA4
// 10a43d20 Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
// 10a43e90 Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
// 10f7eef0 VertexHelper_AddUIVertexStream_m979FD37B1176E5B5A217065C04B64EDB568DC85B
// 10f7f310 VertexHelper_Clear_mBF3FB3CEA5153F8F72C74FFD6006A7AFF62C18BA
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
// 11057520 List_1_Add_m021FBEB8D6A133F50D014CA1A2307D2FAADF7588_gshared

void __cdecl
CornerImage_OnPopulateMesh_mA2EE950311D4C71CBFC1139179A0D54AC3E549CB
          (CornerImage_tFE05FFD4093FAB3D12C2523D9DC70CED309CF6F2 *param_1,
          VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 *param_2,MethodInfo *param_3)

{
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar1;
  UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A UVar2;
  UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A UVar3;
  UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A UVar4;
  UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A UVar5;
  UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A UVar6;
  UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A UVar7;
  UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A UVar8;
  UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A UVar9;
  UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A UVar10;
  UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A UVar11;
  UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A UVar12;
  UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A UVar13;
  UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A UVar14;
  UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A UVar15;
  UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A UVar16;
  UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A UVar17;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar18;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar19;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar20;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar21;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar22;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar23;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar24;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar25;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar26;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar27;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar28;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar29;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar30;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar31;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar32;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar33;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 CVar34;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 CVar35;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 CVar36;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 CVar37;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 CVar38;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 CVar39;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 CVar40;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 CVar41;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 CVar42;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 CVar43;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 CVar44;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 CVar45;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 CVar46;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 CVar47;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 CVar48;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 CVar49;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar50;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar51;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar52;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar53;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar54;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar55;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar56;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar57;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar58;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar59;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar60;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar61;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar62;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar63;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar64;
  bool bVar65;
  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *pRVar66;
  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *pRVar67;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar68;
  undefined4 *puVar69;
  Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *pTVar70;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *pDVar71;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *pVVar72;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *pVVar73;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *pDVar74;
  int iVar75;
  undefined8 *puVar76;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar77;
  float fVar78;
  float fVar79;
  undefined1 auVar80 [12];
  undefined1 auVar81 [12];
  undefined1 in_stack_fffffde0 [36];
  undefined4 in_stack_fffffe04;
  undefined4 uVar82;
  undefined4 uVar83;
  AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *pAVar84;
  undefined4 uVar85;
  AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *pAVar86;
  undefined4 uVar87;
  undefined4 uVar88;
  undefined4 uVar89;
  undefined4 uVar90;
  undefined4 uVar91;
  undefined4 uVar92;
  undefined4 uVar93;
  float fVar94;
  MethodInfo *pMVar95;
  float local_1a0;
  float local_190;
  float local_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  float local_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  float fStack_134;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_124;
  float local_11c;
  Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0 local_108;
  float local_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float local_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  undefined1 local_c0 [20];
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float local_94;
  float local_90;
  float local_8c;
  byte local_86;
  byte local_85;
  byte local_84;
  byte local_83;
  byte local_82;
  byte local_81;
  undefined8 local_80;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_78;
  float local_70;
  float local_6c;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_68;
  float local_54;
  byte local_4d;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  byte local_36;
  byte local_35;
  byte local_34;
  byte local_33;
  byte local_32;
  byte local_31;
  float local_30;
  float local_2c;
  byte local_28;
  char local_27;
  byte local_26;
  byte local_25;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_24;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 local_20;

  if (DAT_1151d0f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ListPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4FAE16C446DE4B6D743099F3150D9D87901166AE_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ListPoolExtension_ReturnToPool_TisUIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_mD7D58DECA5A3AB0A4074792B1D3588FD2EDFD256_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_Get_m241128D5276523F0F1C96D3E65AE9BEA91AB9F8A_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_Get_m3F29345D49AFD11134691BADD7B65F5305928B70_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_t2D2B00C678E6EC8FBF294B968D02CF4EF6565150_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_tF24AE4786CE7061AD0A5A3383D49CB6EC35316EB_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_m021FBEB8D6A133F50D014CA1A2307D2FAADF7588_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151d0f8 = '\x01';
  }
  local_c0._0_4_ = 0.0;
  local_c0._4_4_ = 0.0;
  local_c0._8_4_ = 0.0;
  local_c0._12_4_ = 0.0;
  Graphic_OnPopulateMesh_m60171AAA2F2AF25E9304C8334FCE766711828DA5
            ((Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *)param_1,param_2,(MethodInfo *)0x0)
  ;
  local_70 = 0.0;
  if (param_1->____progress_40 == 0.0) {
    if (param_2 != (VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 *)0x0) {
      VertexHelper_Clear_mBF3FB3CEA5153F8F72C74FFD6006A7AFF62C18BA(param_2,(MethodInfo *)0x0);
      return;
    }
    goto LAB_104bc7f7;
  }
  pRVar66 = Graphic_get_rectTransform_m87D5A808474C6B71649CBB153DEBF5F268189EFF
                      ((Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *)param_1,
                       (MethodInfo *)0x0);
  if (pRVar66 == (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)0x0) goto LAB_104bc7f7;
  pRVar67 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2
                      ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(local_c0 + 0x10),pRVar66,
                       (MethodInfo *)0x0);
  local_28 = (param_1->___quadrants_38).___c2_2.___y_1;
  local_32 = (param_1->___quadrants_38).___c2_2.___z_2;
  local_31 = (param_1->___quadrants_38).___c1_1.___z_2;
  local_180 = pRVar67->___m_XMin_0;
  fStack_17c = pRVar67->___m_YMin_1;
  fStack_178 = pRVar67->___m_Width_2;
  fStack_174 = pRVar67->___m_Height_3;
  local_33 = (param_1->___quadrants_38).___c0_0.___y_1;
  local_36 = (param_1->___quadrants_38).___c2_2.___x_0;
  local_27 = (param_1->___quadrants_38).___c1_1.___y_1;
  local_34 = (param_1->___quadrants_38).___c0_0.___x_0;
  local_4d = (param_1->___quadrants_38).___c0_0.___z_2;
  local_35 = (param_1->___quadrants_38).___c1_1.___x_0;
  local_81 = local_4d | local_34 | local_33;
  local_83 = local_81 != 0;
  local_82 = local_36 | local_28 | local_32;
  local_84 = local_82 != 0;
  local_25 = local_4d | local_32 | local_31;
  local_85 = local_25 != 0;
  local_26 = local_36 | local_35 | local_34;
  local_86 = local_26 != 0;
  local_3c = 0.0;
  local_54 = 0.0;
  local_40 = 0.0;
  pVVar68 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90
                      (&local_68,(MethodInfo *)0x0);
  local_80._0_4_ = pVVar68->___x_2;
  local_80._4_4_ = pVVar68->___y_3;
  local_2c = pVVar68->___z_4;
  local_68.___y_3 = 0.0;
  local_68.___z_4 = 0.0;
  puVar69 = (undefined4 *)(**(code **)(param_1->_padding_ + 0x16c))();
  pOVar1 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_1->____sprite_36;
  local_140 = *puVar69;
  uStack_13c = puVar69[1];
  uStack_138 = puVar69[2];
  fStack_134 = (float)puVar69[3];
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar65 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(pOVar1,(MethodInfo *)0x0);
  if (bVar65) {
    if (param_1->____sprite_36 == (Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 *)0x0)
    goto LAB_104bc7f7;
    pRVar67 = Sprite_get_textureRect_m5B350C2B122C85549960912CBD6343E4A5B02C35
                        ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(local_c0 + 0x10),
                         param_1->____sprite_36,(MethodInfo *)0x0);
    local_c0._0_4_ = pRVar67->___m_XMin_0;
    local_c0._4_4_ = pRVar67->___m_YMin_1;
    local_c0._8_4_ = pRVar67->___m_Width_2;
    local_c0._12_4_ = pRVar67->___m_Height_3;
    if (param_1->____sprite_36 == (Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 *)0x0)
    goto LAB_104bc7f7;
    pVVar72 = Sprite_get_border_m6AEB051C1A675509BB786427883FC2EE957F60A7
                        ((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(local_c0 + 0x10),
                         param_1->____sprite_36,(MethodInfo *)0x0);
    local_c0._16_4_ = pVVar72->___x_1;
    fStack_ac = pVVar72->___y_2;
    fStack_a8 = pVVar72->___z_3;
    fStack_a4 = pVVar72->___w_4;
    local_20.___w_4 =
         AutoScroll_get_time_m821A91DD5EC59EEA7FFD61FB87B16342F3A5CB54
                   ((AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)local_c0,
                    (MethodInfo *)0x0);
    local_20.___w_4 = fStack_a8 / local_20.___w_4;
    if (param_1->____sprite_36 == (Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 *)0x0)
    goto LAB_104bc7f7;
    pVVar72 = Sprite_get_border_m6AEB051C1A675509BB786427883FC2EE957F60A7
                        ((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(local_c0 + 0x10),
                         param_1->____sprite_36,(MethodInfo *)0x0);
    local_c0._16_4_ = pVVar72->___x_1;
    fStack_ac = pVVar72->___y_2;
    fStack_a8 = pVVar72->___z_3;
    fStack_a4 = pVVar72->___w_4;
    local_78.___y_1 =
         AutoScroll_get_targetPosition_m3E7108A35FE9F905A4D9F1E072AC9B8915491DDA
                   ((AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)local_c0,
                    (MethodInfo *)0x0);
    local_78.___y_1 = fStack_a4 / local_78.___y_1;
    local_40 = param_1->___innerSize_37;
    local_70 = (__real_3f800000 - local_20.___w_4) * local_40;
    local_54 = local_40 * local_20.___w_4;
    local_3c = (__real_3f800000 - local_78.___y_1) * local_40;
    local_40 = local_40 * local_78.___y_1;
    local_20.___w_4 =
         TMP_Offset_get_horizontal_m05407E9C4552DC57C8537C492F8411A018D67EDC
                   ((TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 *)local_c0,
                    (MethodInfo *)0x0);
    if ((param_1->____sprite_36 == (Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 *)0x0) ||
       (pTVar70 = Sprite_get_texture_mD03E68058C9F727321FE643CBDB3A469F96E49FB
                            (param_1->____sprite_36,(MethodInfo *)0x0),
       pTVar70 == (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)0x0)) goto LAB_104bc7f7;
    VVar77 = Texture_get_texelSize_m804B471337C8AF2334FF12FA2CC6198EFD7EB5EB
                       ((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)pTVar70,
                        (MethodInfo *)0x0);
    fVar78 = local_78.___x_0 * local_20.___w_4;
    local_78 = VVar77;
    TMP_Offset_set_left_m34F11D3636911C10ECC0287F97031202ADDD8A53
              ((TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 *)local_c0,fVar78,
               (MethodInfo *)0x0);
    local_20.___w_4 =
         AutoScroll_get_speed_mD25D719F797FAE97AB8CB2B63496C881D1D51F57
                   ((AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)local_c0,
                    (MethodInfo *)0x0);
    if ((param_1->____sprite_36 == (Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 *)0x0) ||
       (pTVar70 = Sprite_get_texture_mD03E68058C9F727321FE643CBDB3A469F96E49FB
                            (param_1->____sprite_36,(MethodInfo *)0x0),
       pTVar70 == (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)0x0)) goto LAB_104bc7f7;
    VVar77 = Texture_get_texelSize_m804B471337C8AF2334FF12FA2CC6198EFD7EB5EB
                       ((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)pTVar70,
                        (MethodInfo *)0x0);
    fVar78 = local_78.___y_1 * local_20.___w_4;
    local_78 = VVar77;
    AutoScroll_set_speed_m1710BE060404F3C2F998A04D3711C9943956C283
              ((AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)local_c0,fVar78,
               (MethodInfo *)0x0);
    local_20.___w_4 =
         AutoScroll_get_time_m821A91DD5EC59EEA7FFD61FB87B16342F3A5CB54
                   ((AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)local_c0,
                    (MethodInfo *)0x0);
    if ((param_1->____sprite_36 == (Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 *)0x0) ||
       (pTVar70 = Sprite_get_texture_mD03E68058C9F727321FE643CBDB3A469F96E49FB
                            (param_1->____sprite_36,(MethodInfo *)0x0),
       pTVar70 == (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)0x0)) goto LAB_104bc7f7;
    VVar77 = Texture_get_texelSize_m804B471337C8AF2334FF12FA2CC6198EFD7EB5EB
                       ((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)pTVar70,
                        (MethodInfo *)0x0);
    fVar78 = local_78.___x_0 * local_20.___w_4;
    local_78 = VVar77;
    AutoScroll_set_time_mBE1D4E4BF204AAF608F71B3FF891E0A172D0C827
              ((AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)local_c0,fVar78,
               (MethodInfo *)0x0);
    local_20.___w_4 =
         AutoScroll_get_targetPosition_m3E7108A35FE9F905A4D9F1E072AC9B8915491DDA
                   ((AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)local_c0,
                    (MethodInfo *)0x0);
    if ((param_1->____sprite_36 == (Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 *)0x0) ||
       (pTVar70 = Sprite_get_texture_mD03E68058C9F727321FE643CBDB3A469F96E49FB
                            (param_1->____sprite_36,(MethodInfo *)0x0),
       pTVar70 == (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)0x0)) goto LAB_104bc7f7;
    VVar77 = Texture_get_texelSize_m804B471337C8AF2334FF12FA2CC6198EFD7EB5EB
                       ((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)pTVar70,
                        (MethodInfo *)0x0);
    local_78.___y_1 = VVar77.___y_1;
    AutoScroll_set_targetPosition_m2CB8F35117E634C45F3B35F7EDA61B12A3E27C33
              ((AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)local_c0,
               VVar77.___y_1 * local_20.___w_4,(MethodInfo *)0x0);
  }
  else {
    TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
              ((TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 *)local_c0,0.0,0.0,1.0,1.0,
               (MethodInfo *)0x0);
  }
  local_20.___w_4 =
       TMP_Offset_get_horizontal_m05407E9C4552DC57C8537C492F8411A018D67EDC
                 ((TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 *)local_c0,(MethodInfo *)0x0
                 );
  TMP_Offset_set_left_m34F11D3636911C10ECC0287F97031202ADDD8A53
            ((TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 *)local_c0,
             (float)param_1->___uOffset_39 + local_20.___w_4,(MethodInfo *)0x0);
  local_6c = TMP_Offset_get_horizontal_m05407E9C4552DC57C8537C492F8411A018D67EDC
                       ((TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 *)&local_180,
                        (MethodInfo *)0x0);
  local_4c = TMP_Offset_get_horizontal_m05407E9C4552DC57C8537C492F8411A018D67EDC
                       ((TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 *)&local_180,
                        (MethodInfo *)0x0);
  local_164 = Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5
                        ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)&local_180,
                         (MethodInfo *)0x0);
  local_168 = Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5
                        ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)&local_180,
                         (MethodInfo *)0x0);
  local_16c = AutoScroll_get_speed_mD25D719F797FAE97AB8CB2B63496C881D1D51F57
                        ((AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)&local_180,
                         (MethodInfo *)0x0);
  local_170 = AutoScroll_get_speed_mD25D719F797FAE97AB8CB2B63496C881D1D51F57
                        ((AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)&local_180,
                         (MethodInfo *)0x0);
  uVar82 = 0x104baf6c;
  fVar78 = Rect_get_yMax_m9685BF55B44C51FF9BA080F9995073E458E1CDC3
                     ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)&local_180,(MethodInfo *)0x0
                     );
  local_78.___y_1 = fVar78;
  local_20.___w_4 =
       Rect_get_yMax_m9685BF55B44C51FF9BA080F9995073E458E1CDC3
                 ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)&local_180,(MethodInfo *)0x0);
  local_8c = Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5
                       ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)local_c0,(MethodInfo *)0x0
                       );
  local_44 = TMP_Offset_get_horizontal_m05407E9C4552DC57C8537C492F8411A018D67EDC
                       ((TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 *)local_c0,
                        (MethodInfo *)0x0);
  local_30 = TMP_Offset_get_horizontal_m05407E9C4552DC57C8537C492F8411A018D67EDC
                       ((TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 *)local_c0,
                        (MethodInfo *)0x0);
  local_24 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
             Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5
                       ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)local_c0,(MethodInfo *)0x0
                       );
  pRVar67 = (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)local_c0;
  uVar88 = 0;
  local_90 = Rect_get_yMax_m9685BF55B44C51FF9BA080F9995073E458E1CDC3(pRVar67,(MethodInfo *)0x0);
  pAVar86 = (AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)local_c0;
  uVar87 = 0;
  local_48 = AutoScroll_get_speed_mD25D719F797FAE97AB8CB2B63496C881D1D51F57
                       (pAVar86,(MethodInfo *)0x0);
  pAVar84 = (AutoScroll_t1A0CA51C495D2BC1005833EF85B60738D8D39D8A *)local_c0;
  uVar85 = 0;
  uVar83 = 0x104baff7;
  local_144 = AutoScroll_get_speed_mD25D719F797FAE97AB8CB2B63496C881D1D51F57
                        (pAVar84,(MethodInfo *)0x0);
  local_94 = Rect_get_yMax_m9685BF55B44C51FF9BA080F9995073E458E1CDC3
                       ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)local_c0,(MethodInfo *)0x0
                       );
  local_190 = local_4c;
  local_c0._16_4_ = local_6c;
  if (local_81 != 0) {
    local_c0._16_4_ = local_6c - local_54;
    local_190 = local_4c + local_70;
  }
  fStack_ac = 0.0;
  fStack_a8 = 0.0;
  fStack_a4 = 0.0;
  local_1a0 = local_168;
  local_160 = local_164;
  if (local_82 != 0) {
    local_160 = local_164 - local_70;
    local_1a0 = local_168 + local_54;
  }
  uStack_15c = 0;
  uStack_158 = 0;
  uStack_154 = 0;
  if (local_25 == 0) {
    local_6c = local_16c;
    local_4c = local_170;
  }
  else {
    local_6c = local_16c - local_40;
    local_4c = local_170 + local_3c;
  }
  if (local_26 == 0) {
    local_40 = local_78.___y_1;
    local_70 = local_20.___w_4;
  }
  else {
    local_70 = local_20.___w_4 + local_40;
    local_40 = local_78.___y_1 - local_3c;
  }
  local_54 = (float)local_24;
  if (local_190 <= local_160) {
    local_3c = local_44;
  }
  else {
    if ((local_84 & local_83) == 0) {
      if (local_81 != 0) goto LAB_104bb1a1;
      if (local_82 == 0) {
        local_3c = local_44;
      }
      else {
        local_20.___w_4 =
             Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
                       (local_160,local_1a0,local_190,(MethodInfo *)0x0);
        local_30 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                             (local_30,(float)local_24,local_20.___w_4,(MethodInfo *)0x0);
        local_160 = local_190;
        local_3c = local_30;
        local_20.___w_4 = local_30;
      }
    }
    else {
      local_160 = (local_160 + local_190) * __real_3f000000;
LAB_104bb1a1:
      uStack_154 = 0;
      uStack_158 = 0;
      uStack_15c = 0;
      local_20.___w_4 =
           Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
                     ((float)local_c0._16_4_,local_190,local_160,(MethodInfo *)0x0);
      local_30 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                           (local_8c,local_44,local_20.___w_4,(MethodInfo *)0x0);
      local_190 = local_160;
      local_3c = local_30;
      local_20.___w_4 = local_30;
    }
    local_31 = 0;
    local_27 = '\0';
    local_35 = 0;
  }
  if (local_4c <= local_40) {
    local_44 = local_144;
  }
  else {
    if ((local_86 & local_85) == 0) {
      if (local_25 != 0) goto LAB_104bb2ee;
      if (local_26 == 0) {
        local_44 = local_144;
      }
      else {
        local_20.___w_4 =
             Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
                       (local_40,local_70,local_4c,(MethodInfo *)0x0);
        local_48 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                             (local_144,local_94,local_20.___w_4,(MethodInfo *)0x0);
        local_40 = local_4c;
        local_44 = local_48;
        local_20.___w_4 = local_48;
      }
    }
    else {
      local_40 = (local_40 + local_4c) * __real_3f000000;
LAB_104bb2ee:
      local_20.___w_4 =
           Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
                     (local_6c,local_4c,local_40,(MethodInfo *)0x0);
      local_48 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                           (local_90,local_48,local_20.___w_4,(MethodInfo *)0x0);
      local_4c = local_40;
      local_44 = local_48;
      local_20.___w_4 = local_48;
    }
    local_33 = 0;
    local_27 = '\0';
    local_28 = 0;
  }
  if (param_1->____progress_40 <= __real_3f800000 && __real_3f800000 != param_1->____progress_40) {
    fVar78 = TMP_Offset_get_horizontal_m05407E9C4552DC57C8537C492F8411A018D67EDC
                       ((TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 *)&local_180,
                        (MethodInfo *)0x0);
    local_78.___y_1 = fVar78;
    local_20.___w_4 =
         Rect_get_xMax_m174FFAACE6F19A59AA793B3D507BE70116E27DE5
                   ((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)&local_180,(MethodInfo *)0x0);
    fVar79 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                       (local_78.___y_1,local_20.___w_4,param_1->____progress_40,(MethodInfo *)0x0);
    fVar78 = local_160;
    local_20.___w_4 = fVar79;
    if (fVar79 < local_190) {
      local_160 = fVar79;
      local_20.___w_4 =
           Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
                     ((float)local_c0._16_4_,local_190,fVar79,(MethodInfo *)0x0);
      local_54 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                           (local_8c,local_3c,local_20.___w_4,(MethodInfo *)0x0);
      local_36 = 0;
      local_35 = 0;
      local_28 = 0;
      local_27 = '\0';
      local_32 = 0;
      local_31 = 0;
      local_1a0 = fVar79;
      local_190 = fVar79;
      local_3c = local_54;
      local_30 = local_54;
      local_20.___w_4 = local_54;
    }
    else if (fVar79 < local_160) {
      local_36 = 0;
      local_28 = 0;
      local_32 = 0;
      local_160 = fVar79;
      local_20.___w_4 =
           Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
                     (local_190,fVar78,fVar79,(MethodInfo *)0x0);
      local_54 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                           (local_3c,local_30,local_20.___w_4,(MethodInfo *)0x0);
      local_1a0 = fVar79;
      local_30 = local_54;
      local_20.___w_4 = local_54;
    }
    else if (fVar79 < local_1a0) {
      local_20.___w_4 =
           Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
                     (local_160,local_1a0,fVar79,(MethodInfo *)0x0);
      local_54 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                           (local_30,(float)local_24,local_20.___w_4,(MethodInfo *)0x0);
      local_1a0 = fVar79;
      local_24 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)local_54;
    }
  }
  if ((ListPool_1_tF24AE4786CE7061AD0A5A3383D49CB6EC35316EB_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (ListPool_1_tF24AE4786CE7061AD0A5A3383D49CB6EC35316EB_il2cpp_TypeInfo_var->cctor_finished ==
         0)) {
    il2cpp_runtime_class_init
              (ListPool_1_tF24AE4786CE7061AD0A5A3383D49CB6EC35316EB_il2cpp_TypeInfo_var);
  }
  pDVar71 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
            ListPool_1_Get_m115ABCD645C890A36F58D2AFB9D56068DDD2CE56_gshared
                      (0x10,
                       ListPool_1_Get_m3F29345D49AFD11134691BADD7B65F5305928B70_RuntimeMethod_var);
  local_24 = pDVar71;
  memset((uchar *)&local_130,'\0',0x6c);
  local_130 = CONCAT44(local_6c,local_c0._16_4_);
  local_20.___z_3 = local_8c;
  local_20.___w_4 = local_90;
  local_128 = 0;
  VVar77.___y_1 = local_90;
  VVar77.___x_0 = local_8c;
  pVVar72 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504
                      (&local_20,VVar77,(MethodInfo *)0x0);
  local_104 = pVVar72->___x_1;
  fStack_100 = pVVar72->___y_2;
  fStack_fc = pVVar72->___z_3;
  fStack_f8 = pVVar72->___w_4;
  CVar34.___g_1 = (float)uStack_13c;
  CVar34.___r_0 = (float)local_140;
  CVar34.___b_2 = (float)uStack_138;
  CVar34.___a_3 = fStack_134;
  uVar91 = local_140;
  uVar92 = uStack_13c;
  uVar93 = uStack_138;
  fVar94 = fStack_134;
  local_108._s_8 =
       (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0_s_8)
       Color32_op_Implicit_mD17E8145D2D32EF369EFE349C4D32E839F7D7AA4(CVar34,(MethodInfo *)0x0);
  uVar90 = 0;
  local_11c = local_2c;
  pVVar72 = &local_20;
  local_124 = local_80;
  uVar89 = 0x104bb677;
  VVar18.___y_1 = local_68.___z_4;
  VVar18.___x_0 = local_68.___y_3;
  fVar78 = local_68.___y_3;
  fVar79 = local_68.___z_4;
  pVVar73 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504
                      (pVVar72,VVar18,(MethodInfo *)0x0);
  local_e4 = pVVar73->___x_1;
  fStack_e0 = pVVar73->___y_2;
  fStack_dc = pVVar73->___z_3;
  fStack_d8 = pVVar73->___w_4;
  if (pDVar71 != (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0) {
    puVar76 = &local_130;
    puVar69 = (undefined4 *)&stack0xfffffde0;
    pMVar95 = List_1_Add_m021FBEB8D6A133F50D014CA1A2307D2FAADF7588_RuntimeMethod_var;
    for (iVar75 = 0x1b; iVar75 != 0; iVar75 = iVar75 + -1) {
      *puVar69 = *(undefined4 *)puVar76;
      puVar76 = (undefined8 *)((int)puVar76 + 4);
      puVar69 = puVar69 + 1;
    }
    UVar2.___tangent_2.___w_4 = (float)in_stack_fffffe04;
    auVar80 = in_stack_fffffde0._0_12_;
    auVar81 = in_stack_fffffde0._12_12_;
    UVar2.___position_0.___x_2 = (float)auVar80._0_4_;
    UVar2.___position_0.___y_3 = (float)auVar80._4_4_;
    UVar2.___position_0.___z_4 = (float)auVar80._8_4_;
    UVar2.___normal_1.___x_2 = (float)auVar81._0_4_;
    UVar2.___normal_1.___y_3 = (float)auVar81._4_4_;
    UVar2.___normal_1.___z_4 = (float)auVar81._8_4_;
    UVar2.___tangent_2.___x_1 = (float)in_stack_fffffde0._24_4_;
    UVar2.___tangent_2.___y_2 = (float)in_stack_fffffde0._28_4_;
    UVar2.___tangent_2.___z_3 = (float)in_stack_fffffde0._32_4_;
    UVar2.___color_3.field0_0x0 = (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0)uVar82;
    UVar2.___uv0_4.___x_1 = (float)uVar83;
    UVar2.___uv0_4.___y_2 = (float)pAVar84;
    UVar2.___uv0_4.___z_3 = (float)uVar85;
    UVar2.___uv0_4.___w_4 = (float)pAVar86;
    UVar2.___uv1_5.___x_1 = (float)uVar87;
    UVar2.___uv1_5.___y_2 = (float)pRVar67;
    UVar2.___uv1_5.___z_3 = (float)uVar88;
    UVar2.___uv1_5.___w_4 = (float)uVar89;
    UVar2.___uv2_6.___x_1 = (float)pVVar72;
    UVar2.___uv2_6.___y_2 = fVar78;
    UVar2.___uv2_6.___z_3 = fVar79;
    UVar2.___uv2_6.___w_4 = (float)uVar90;
    UVar2.___uv3_7.___x_1 = (float)uVar91;
    UVar2.___uv3_7.___y_2 = (float)uVar92;
    UVar2.___uv3_7.___z_3 = (float)uVar93;
    UVar2.___uv3_7.___w_4 = fVar94;
    List_1_Add_m021FBEB8D6A133F50D014CA1A2307D2FAADF7588_gshared
              ((List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F *)local_24,UVar2,pMVar95);
    memset((uchar *)&local_130,'\0',0x6c);
    local_130 = CONCAT44(local_6c,local_190);
    local_20.___z_3 = local_3c;
    local_20.___w_4 = local_90;
    local_128 = 0;
    VVar50.___y_1 = local_90;
    VVar50.___x_0 = local_3c;
    pVVar72 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504
                        (&local_20,VVar50,(MethodInfo *)0x0);
    local_104 = pVVar72->___x_1;
    fStack_100 = pVVar72->___y_2;
    fStack_fc = pVVar72->___z_3;
    fStack_f8 = pVVar72->___w_4;
    CVar35.___g_1 = (float)uStack_13c;
    CVar35.___r_0 = (float)local_140;
    CVar35.___b_2 = (float)uStack_138;
    CVar35.___a_3 = fStack_134;
    uVar91 = local_140;
    uVar92 = uStack_13c;
    uVar93 = uStack_138;
    fVar94 = fStack_134;
    local_108._s_8 =
         (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0_s_8)
         Color32_op_Implicit_mD17E8145D2D32EF369EFE349C4D32E839F7D7AA4(CVar35,(MethodInfo *)0x0);
    uVar90 = 0;
    local_11c = local_2c;
    pVVar72 = &local_20;
    local_124 = local_80;
    uVar89 = 0x104bb75f;
    VVar19.___y_1 = local_68.___z_4;
    VVar19.___x_0 = local_68.___y_3;
    fVar78 = local_68.___y_3;
    fVar79 = local_68.___z_4;
    pVVar73 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504
                        (pVVar72,VVar19,(MethodInfo *)0x0);
    local_e4 = pVVar73->___x_1;
    fStack_e0 = pVVar73->___y_2;
    fStack_dc = pVVar73->___z_3;
    fStack_d8 = pVVar73->___w_4;
    puVar76 = &local_130;
    puVar69 = (undefined4 *)&stack0xfffffde0;
    pMVar95 = List_1_Add_m021FBEB8D6A133F50D014CA1A2307D2FAADF7588_RuntimeMethod_var;
    for (iVar75 = 0x1b; iVar75 != 0; iVar75 = iVar75 + -1) {
      *puVar69 = *(undefined4 *)puVar76;
      puVar76 = (undefined8 *)((int)puVar76 + 4);
      puVar69 = puVar69 + 1;
    }
    UVar3.___tangent_2.___w_4 = (float)in_stack_fffffe04;
    auVar80 = in_stack_fffffde0._0_12_;
    auVar81 = in_stack_fffffde0._12_12_;
    UVar3.___position_0.___x_2 = (float)auVar80._0_4_;
    UVar3.___position_0.___y_3 = (float)auVar80._4_4_;
    UVar3.___position_0.___z_4 = (float)auVar80._8_4_;
    UVar3.___normal_1.___x_2 = (float)auVar81._0_4_;
    UVar3.___normal_1.___y_3 = (float)auVar81._4_4_;
    UVar3.___normal_1.___z_4 = (float)auVar81._8_4_;
    UVar3.___tangent_2.___x_1 = (float)in_stack_fffffde0._24_4_;
    UVar3.___tangent_2.___y_2 = (float)in_stack_fffffde0._28_4_;
    UVar3.___tangent_2.___z_3 = (float)in_stack_fffffde0._32_4_;
    UVar3.___color_3.field0_0x0 = (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0)uVar82;
    UVar3.___uv0_4.___x_1 = (float)uVar83;
    UVar3.___uv0_4.___y_2 = (float)pAVar84;
    UVar3.___uv0_4.___z_3 = (float)uVar85;
    UVar3.___uv0_4.___w_4 = (float)pAVar86;
    UVar3.___uv1_5.___x_1 = (float)uVar87;
    UVar3.___uv1_5.___y_2 = (float)pRVar67;
    UVar3.___uv1_5.___z_3 = (float)uVar88;
    UVar3.___uv1_5.___w_4 = (float)uVar89;
    UVar3.___uv2_6.___x_1 = (float)pVVar72;
    UVar3.___uv2_6.___y_2 = fVar78;
    UVar3.___uv2_6.___z_3 = fVar79;
    UVar3.___uv2_6.___w_4 = (float)uVar90;
    UVar3.___uv3_7.___x_1 = (float)uVar91;
    UVar3.___uv3_7.___y_2 = (float)uVar92;
    UVar3.___uv3_7.___z_3 = (float)uVar93;
    UVar3.___uv3_7.___w_4 = fVar94;
    List_1_Add_m021FBEB8D6A133F50D014CA1A2307D2FAADF7588_gshared
              ((List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F *)local_24,UVar3,pMVar95);
    memset((uchar *)&local_130,'\0',0x6c);
    local_130 = CONCAT44(local_6c,local_160);
    local_20.___z_3 = local_30;
    local_20.___w_4 = local_90;
    local_128 = 0;
    VVar51.___y_1 = local_90;
    VVar51.___x_0 = local_30;
    pVVar72 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504
                        (&local_20,VVar51,(MethodInfo *)0x0);
    local_104 = pVVar72->___x_1;
    fStack_100 = pVVar72->___y_2;
    fStack_fc = pVVar72->___z_3;
    fStack_f8 = pVVar72->___w_4;
    CVar36.___g_1 = (float)uStack_13c;
    CVar36.___r_0 = (float)local_140;
    CVar36.___b_2 = (float)uStack_138;
    CVar36.___a_3 = fStack_134;
    uVar91 = local_140;
    uVar92 = uStack_13c;
    uVar93 = uStack_138;
    fVar94 = fStack_134;
    local_108._s_8 =
         (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0_s_8)
         Color32_op_Implicit_mD17E8145D2D32EF369EFE349C4D32E839F7D7AA4(CVar36,(MethodInfo *)0x0);
    uVar90 = 0;
    local_11c = local_2c;
    pVVar72 = &local_20;
    local_124 = local_80;
    uVar89 = 0x104bb83f;
    VVar20.___y_1 = local_68.___z_4;
    VVar20.___x_0 = local_68.___y_3;
    fVar78 = local_68.___y_3;
    fVar79 = local_68.___z_4;
    pVVar73 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504
                        (pVVar72,VVar20,(MethodInfo *)0x0);
    local_e4 = pVVar73->___x_1;
    fStack_e0 = pVVar73->___y_2;
    fStack_dc = pVVar73->___z_3;
    fStack_d8 = pVVar73->___w_4;
    puVar76 = &local_130;
    puVar69 = (undefined4 *)&stack0xfffffde0;
    pMVar95 = List_1_Add_m021FBEB8D6A133F50D014CA1A2307D2FAADF7588_RuntimeMethod_var;
    for (iVar75 = 0x1b; iVar75 != 0; iVar75 = iVar75 + -1) {
      *puVar69 = *(undefined4 *)puVar76;
      puVar76 = (undefined8 *)((int)puVar76 + 4);
      puVar69 = puVar69 + 1;
    }
    UVar4.___tangent_2.___w_4 = (float)in_stack_fffffe04;
    auVar80 = in_stack_fffffde0._0_12_;
    auVar81 = in_stack_fffffde0._12_12_;
    UVar4.___position_0.___x_2 = (float)auVar80._0_4_;
    UVar4.___position_0.___y_3 = (float)auVar80._4_4_;
    UVar4.___position_0.___z_4 = (float)auVar80._8_4_;
    UVar4.___normal_1.___x_2 = (float)auVar81._0_4_;
    UVar4.___normal_1.___y_3 = (float)auVar81._4_4_;
    UVar4.___normal_1.___z_4 = (float)auVar81._8_4_;
    UVar4.___tangent_2.___x_1 = (float)in_stack_fffffde0._24_4_;
    UVar4.___tangent_2.___y_2 = (float)in_stack_fffffde0._28_4_;
    UVar4.___tangent_2.___z_3 = (float)in_stack_fffffde0._32_4_;
    UVar4.___color_3.field0_0x0 = (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0)uVar82;
    UVar4.___uv0_4.___x_1 = (float)uVar83;
    UVar4.___uv0_4.___y_2 = (float)pAVar84;
    UVar4.___uv0_4.___z_3 = (float)uVar85;
    UVar4.___uv0_4.___w_4 = (float)pAVar86;
    UVar4.___uv1_5.___x_1 = (float)uVar87;
    UVar4.___uv1_5.___y_2 = (float)pRVar67;
    UVar4.___uv1_5.___z_3 = (float)uVar88;
    UVar4.___uv1_5.___w_4 = (float)uVar89;
    UVar4.___uv2_6.___x_1 = (float)pVVar72;
    UVar4.___uv2_6.___y_2 = fVar78;
    UVar4.___uv2_6.___z_3 = fVar79;
    UVar4.___uv2_6.___w_4 = (float)uVar90;
    UVar4.___uv3_7.___x_1 = (float)uVar91;
    UVar4.___uv3_7.___y_2 = (float)uVar92;
    UVar4.___uv3_7.___z_3 = (float)uVar93;
    UVar4.___uv3_7.___w_4 = fVar94;
    List_1_Add_m021FBEB8D6A133F50D014CA1A2307D2FAADF7588_gshared
              ((List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F *)local_24,UVar4,pMVar95);
    memset((uchar *)&local_130,'\0',0x6c);
    local_130 = CONCAT44(local_6c,local_1a0);
    local_20.___z_3 = local_54;
    local_20.___w_4 = local_90;
    local_128 = 0;
    VVar52.___y_1 = local_90;
    VVar52.___x_0 = local_54;
    pVVar72 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504
                        (&local_20,VVar52,(MethodInfo *)0x0);
    local_104 = pVVar72->___x_1;
    fStack_100 = pVVar72->___y_2;
    fStack_fc = pVVar72->___z_3;
    fStack_f8 = pVVar72->___w_4;
    CVar37.___g_1 = (float)uStack_13c;
    CVar37.___r_0 = (float)local_140;
    CVar37.___b_2 = (float)uStack_138;
    CVar37.___a_3 = fStack_134;
    uVar91 = local_140;
    uVar92 = uStack_13c;
    uVar93 = uStack_138;
    fVar94 = fStack_134;
    local_108._s_8 =
         (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0_s_8)
         Color32_op_Implicit_mD17E8145D2D32EF369EFE349C4D32E839F7D7AA4(CVar37,(MethodInfo *)0x0);
    uVar90 = 0;
    local_11c = local_2c;
    pVVar72 = &local_20;
    local_124 = local_80;
    uVar89 = 0x104bb91f;
    VVar21.___y_1 = local_68.___z_4;
    VVar21.___x_0 = local_68.___y_3;
    fVar78 = local_68.___y_3;
    fVar79 = local_68.___z_4;
    pVVar73 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504
                        (pVVar72,VVar21,(MethodInfo *)0x0);
    local_e4 = pVVar73->___x_1;
    fStack_e0 = pVVar73->___y_2;
    fStack_dc = pVVar73->___z_3;
    fStack_d8 = pVVar73->___w_4;
    puVar76 = &local_130;
    puVar69 = (undefined4 *)&stack0xfffffde0;
    pMVar95 = List_1_Add_m021FBEB8D6A133F50D014CA1A2307D2FAADF7588_RuntimeMethod_var;
    for (iVar75 = 0x1b; iVar75 != 0; iVar75 = iVar75 + -1) {
      *puVar69 = *(undefined4 *)puVar76;
      puVar76 = (undefined8 *)((int)puVar76 + 4);
      puVar69 = puVar69 + 1;
    }
    UVar5.___tangent_2.___w_4 = (float)in_stack_fffffe04;
    auVar80 = in_stack_fffffde0._0_12_;
    auVar81 = in_stack_fffffde0._12_12_;
    UVar5.___position_0.___x_2 = (float)auVar80._0_4_;
    UVar5.___position_0.___y_3 = (float)auVar80._4_4_;
    UVar5.___position_0.___z_4 = (float)auVar80._8_4_;
    UVar5.___normal_1.___x_2 = (float)auVar81._0_4_;
    UVar5.___normal_1.___y_3 = (float)auVar81._4_4_;
    UVar5.___normal_1.___z_4 = (float)auVar81._8_4_;
    UVar5.___tangent_2.___x_1 = (float)in_stack_fffffde0._24_4_;
    UVar5.___tangent_2.___y_2 = (float)in_stack_fffffde0._28_4_;
    UVar5.___tangent_2.___z_3 = (float)in_stack_fffffde0._32_4_;
    UVar5.___color_3.field0_0x0 = (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0)uVar82;
    UVar5.___uv0_4.___x_1 = (float)uVar83;
    UVar5.___uv0_4.___y_2 = (float)pAVar84;
    UVar5.___uv0_4.___z_3 = (float)uVar85;
    UVar5.___uv0_4.___w_4 = (float)pAVar86;
    UVar5.___uv1_5.___x_1 = (float)uVar87;
    UVar5.___uv1_5.___y_2 = (float)pRVar67;
    UVar5.___uv1_5.___z_3 = (float)uVar88;
    UVar5.___uv1_5.___w_4 = (float)uVar89;
    UVar5.___uv2_6.___x_1 = (float)pVVar72;
    UVar5.___uv2_6.___y_2 = fVar78;
    UVar5.___uv2_6.___z_3 = fVar79;
    UVar5.___uv2_6.___w_4 = (float)uVar90;
    UVar5.___uv3_7.___x_1 = (float)uVar91;
    UVar5.___uv3_7.___y_2 = (float)uVar92;
    UVar5.___uv3_7.___z_3 = (float)uVar93;
    UVar5.___uv3_7.___w_4 = fVar94;
    List_1_Add_m021FBEB8D6A133F50D014CA1A2307D2FAADF7588_gshared
              ((List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F *)local_24,UVar5,pMVar95);
    memset((uchar *)&local_130,'\0',0x6c);
    local_130 = CONCAT44(local_4c,local_c0._16_4_);
    local_20.___z_3 = local_8c;
    local_20.___w_4 = local_48;
    local_128 = 0;
    VVar53.___y_1 = local_48;
    VVar53.___x_0 = local_8c;
    pVVar72 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504
                        (&local_20,VVar53,(MethodInfo *)0x0);
    local_104 = pVVar72->___x_1;
    fStack_100 = pVVar72->___y_2;
    fStack_fc = pVVar72->___z_3;
    fStack_f8 = pVVar72->___w_4;
    CVar38.___g_1 = (float)uStack_13c;
    CVar38.___r_0 = (float)local_140;
    CVar38.___b_2 = (float)uStack_138;
    CVar38.___a_3 = fStack_134;
    uVar91 = local_140;
    uVar92 = uStack_13c;
    uVar93 = uStack_138;
    fVar94 = fStack_134;
    local_108._s_8 =
         (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0_s_8)
         Color32_op_Implicit_mD17E8145D2D32EF369EFE349C4D32E839F7D7AA4(CVar38,(MethodInfo *)0x0);
    uVar90 = 0;
    local_11c = local_2c;
    pVVar72 = &local_20;
    local_124 = local_80;
    uVar89 = 0x104bb9ff;
    VVar22.___y_1 = local_68.___z_4;
    VVar22.___x_0 = local_68.___y_3;
    fVar78 = local_68.___y_3;
    fVar79 = local_68.___z_4;
    pVVar73 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504
                        (pVVar72,VVar22,(MethodInfo *)0x0);
    local_e4 = pVVar73->___x_1;
    fStack_e0 = pVVar73->___y_2;
    fStack_dc = pVVar73->___z_3;
    fStack_d8 = pVVar73->___w_4;
    puVar76 = &local_130;
    puVar69 = (undefined4 *)&stack0xfffffde0;
    pMVar95 = List_1_Add_m021FBEB8D6A133F50D014CA1A2307D2FAADF7588_RuntimeMethod_var;
    for (iVar75 = 0x1b; iVar75 != 0; iVar75 = iVar75 + -1) {
      *puVar69 = *(undefined4 *)puVar76;
      puVar76 = (undefined8 *)((int)puVar76 + 4);
      puVar69 = puVar69 + 1;
    }
    UVar6.___tangent_2.___w_4 = (float)in_stack_fffffe04;
    auVar80 = in_stack_fffffde0._0_12_;
    auVar81 = in_stack_fffffde0._12_12_;
    UVar6.___position_0.___x_2 = (float)auVar80._0_4_;
    UVar6.___position_0.___y_3 = (float)auVar80._4_4_;
    UVar6.___position_0.___z_4 = (float)auVar80._8_4_;
    UVar6.___normal_1.___x_2 = (float)auVar81._0_4_;
    UVar6.___normal_1.___y_3 = (float)auVar81._4_4_;
    UVar6.___normal_1.___z_4 = (float)auVar81._8_4_;
    UVar6.___tangent_2.___x_1 = (float)in_stack_fffffde0._24_4_;
    UVar6.___tangent_2.___y_2 = (float)in_stack_fffffde0._28_4_;
    UVar6.___tangent_2.___z_3 = (float)in_stack_fffffde0._32_4_;
    UVar6.___color_3.field0_0x0 = (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0)uVar82;
    UVar6.___uv0_4.___x_1 = (float)uVar83;
    UVar6.___uv0_4.___y_2 = (float)pAVar84;
    UVar6.___uv0_4.___z_3 = (float)uVar85;
    UVar6.___uv0_4.___w_4 = (float)pAVar86;
    UVar6.___uv1_5.___x_1 = (float)uVar87;
    UVar6.___uv1_5.___y_2 = (float)pRVar67;
    UVar6.___uv1_5.___z_3 = (float)uVar88;
    UVar6.___uv1_5.___w_4 = (float)uVar89;
    UVar6.___uv2_6.___x_1 = (float)pVVar72;
    UVar6.___uv2_6.___y_2 = fVar78;
    UVar6.___uv2_6.___z_3 = fVar79;
    UVar6.___uv2_6.___w_4 = (float)uVar90;
    UVar6.___uv3_7.___x_1 = (float)uVar91;
    UVar6.___uv3_7.___y_2 = (float)uVar92;
    UVar6.___uv3_7.___z_3 = (float)uVar93;
    UVar6.___uv3_7.___w_4 = fVar94;
    List_1_Add_m021FBEB8D6A133F50D014CA1A2307D2FAADF7588_gshared
              ((List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F *)local_24,UVar6,pMVar95);
    memset((uchar *)&local_130,'\0',0x6c);
    local_130 = CONCAT44(local_4c,local_190);
    local_20.___z_3 = local_3c;
    local_20.___w_4 = local_48;
    local_128 = 0;
    VVar54.___y_1 = local_48;
    VVar54.___x_0 = local_3c;
    pVVar72 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504
                        (&local_20,VVar54,(MethodInfo *)0x0);
    local_104 = pVVar72->___x_1;
    fStack_100 = pVVar72->___y_2;
    fStack_fc = pVVar72->___z_3;
    fStack_f8 = pVVar72->___w_4;
    CVar39.___g_1 = (float)uStack_13c;
    CVar39.___r_0 = (float)local_140;
    CVar39.___b_2 = (float)uStack_138;
    CVar39.___a_3 = fStack_134;
    uVar91 = local_140;
    uVar92 = uStack_13c;
    uVar93 = uStack_138;
    fVar94 = fStack_134;
    local_108._s_8 =
         (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0_s_8)
         Color32_op_Implicit_mD17E8145D2D32EF369EFE349C4D32E839F7D7AA4(CVar39,(MethodInfo *)0x0);
    uVar90 = 0;
    local_11c = local_2c;
    pVVar72 = &local_20;
    local_124 = local_80;
    uVar89 = 0x104bbadf;
    VVar23.___y_1 = local_68.___z_4;
    VVar23.___x_0 = local_68.___y_3;
    fVar78 = local_68.___y_3;
    fVar79 = local_68.___z_4;
    pVVar73 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504
                        (pVVar72,VVar23,(MethodInfo *)0x0);
    local_e4 = pVVar73->___x_1;
    fStack_e0 = pVVar73->___y_2;
    fStack_dc = pVVar73->___z_3;
    fStack_d8 = pVVar73->___w_4;
    puVar76 = &local_130;
    puVar69 = (undefined4 *)&stack0xfffffde0;
    pMVar95 = List_1_Add_m021FBEB8D6A133F50D014CA1A2307D2FAADF7588_RuntimeMethod_var;
    for (iVar75 = 0x1b; iVar75 != 0; iVar75 = iVar75 + -1) {
      *puVar69 = *(undefined4 *)puVar76;
      puVar76 = (undefined8 *)((int)puVar76 + 4);
      puVar69 = puVar69 + 1;
    }
    UVar7.___tangent_2.___w_4 = (float)in_stack_fffffe04;
    auVar80 = in_stack_fffffde0._0_12_;
    auVar81 = in_stack_fffffde0._12_12_;
    UVar7.___position_0.___x_2 = (float)auVar80._0_4_;
    UVar7.___position_0.___y_3 = (float)auVar80._4_4_;
    UVar7.___position_0.___z_4 = (float)auVar80._8_4_;
    UVar7.___normal_1.___x_2 = (float)auVar81._0_4_;
    UVar7.___normal_1.___y_3 = (float)auVar81._4_4_;
    UVar7.___normal_1.___z_4 = (float)auVar81._8_4_;
    UVar7.___tangent_2.___x_1 = (float)in_stack_fffffde0._24_4_;
    UVar7.___tangent_2.___y_2 = (float)in_stack_fffffde0._28_4_;
    UVar7.___tangent_2.___z_3 = (float)in_stack_fffffde0._32_4_;
    UVar7.___color_3.field0_0x0 = (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0)uVar82;
    UVar7.___uv0_4.___x_1 = (float)uVar83;
    UVar7.___uv0_4.___y_2 = (float)pAVar84;
    UVar7.___uv0_4.___z_3 = (float)uVar85;
    UVar7.___uv0_4.___w_4 = (float)pAVar86;
    UVar7.___uv1_5.___x_1 = (float)uVar87;
    UVar7.___uv1_5.___y_2 = (float)pRVar67;
    UVar7.___uv1_5.___z_3 = (float)uVar88;
    UVar7.___uv1_5.___w_4 = (float)uVar89;
    UVar7.___uv2_6.___x_1 = (float)pVVar72;
    UVar7.___uv2_6.___y_2 = fVar78;
    UVar7.___uv2_6.___z_3 = fVar79;
    UVar7.___uv2_6.___w_4 = (float)uVar90;
    UVar7.___uv3_7.___x_1 = (float)uVar91;
    UVar7.___uv3_7.___y_2 = (float)uVar92;
    UVar7.___uv3_7.___z_3 = (float)uVar93;
    UVar7.___uv3_7.___w_4 = fVar94;
    List_1_Add_m021FBEB8D6A133F50D014CA1A2307D2FAADF7588_gshared
              ((List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F *)local_24,UVar7,pMVar95);
    memset((uchar *)&local_130,'\0',0x6c);
    local_130 = CONCAT44(local_4c,local_160);
    local_20.___z_3 = local_30;
    local_20.___w_4 = local_48;
    local_128 = 0;
    VVar55.___y_1 = local_48;
    VVar55.___x_0 = local_30;
    pVVar72 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504
                        (&local_20,VVar55,(MethodInfo *)0x0);
    local_104 = pVVar72->___x_1;
    fStack_100 = pVVar72->___y_2;
    fStack_fc = pVVar72->___z_3;
    fStack_f8 = pVVar72->___w_4;
    CVar40.___g_1 = (float)uStack_13c;
    CVar40.___r_0 = (float)local_140;
    CVar40.___b_2 = (float)uStack_138;
    CVar40.___a_3 = fStack_134;
    uVar91 = local_140;
    uVar92 = uStack_13c;
    uVar93 = uStack_138;
    fVar94 = fStack_134;
    local_108._s_8 =
         (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0_s_8)
         Color32_op_Implicit_mD17E8145D2D32EF369EFE349C4D32E839F7D7AA4(CVar40,(MethodInfo *)0x0);
    uVar90 = 0;
    local_11c = local_2c;
    pVVar72 = &local_20;
    local_124 = local_80;
    uVar89 = 0x104bbbbf;
    VVar24.___y_1 = local_68.___z_4;
    VVar24.___x_0 = local_68.___y_3;
    fVar78 = local_68.___y_3;
    fVar79 = local_68.___z_4;
    pVVar73 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504
                        (pVVar72,VVar24,(MethodInfo *)0x0);
    local_e4 = pVVar73->___x_1;
    fStack_e0 = pVVar73->___y_2;
    fStack_dc = pVVar73->___z_3;
    fStack_d8 = pVVar73->___w_4;
    puVar76 = &local_130;
    puVar69 = (undefined4 *)&stack0xfffffde0;
    pMVar95 = List_1_Add_m021FBEB8D6A133F50D014CA1A2307D2FAADF7588_RuntimeMethod_var;
    for (iVar75 = 0x1b; iVar75 != 0; iVar75 = iVar75 + -1) {
      *puVar69 = *(undefined4 *)puVar76;
      puVar76 = (undefined8 *)((int)puVar76 + 4);
      puVar69 = puVar69 + 1;
    }
    UVar8.___tangent_2.___w_4 = (float)in_stack_fffffe04;
    auVar80 = in_stack_fffffde0._0_12_;
    auVar81 = in_stack_fffffde0._12_12_;
    UVar8.___position_0.___x_2 = (float)auVar80._0_4_;
    UVar8.___position_0.___y_3 = (float)auVar80._4_4_;
    UVar8.___position_0.___z_4 = (float)auVar80._8_4_;
    UVar8.___normal_1.___x_2 = (float)auVar81._0_4_;
    UVar8.___normal_1.___y_3 = (float)auVar81._4_4_;
    UVar8.___normal_1.___z_4 = (float)auVar81._8_4_;
    UVar8.___tangent_2.___x_1 = (float)in_stack_fffffde0._24_4_;
    UVar8.___tangent_2.___y_2 = (float)in_stack_fffffde0._28_4_;
    UVar8.___tangent_2.___z_3 = (float)in_stack_fffffde0._32_4_;
    UVar8.___color_3.field0_0x0 = (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0)uVar82;
    UVar8.___uv0_4.___x_1 = (float)uVar83;
    UVar8.___uv0_4.___y_2 = (float)pAVar84;
    UVar8.___uv0_4.___z_3 = (float)uVar85;
    UVar8.___uv0_4.___w_4 = (float)pAVar86;
    UVar8.___uv1_5.___x_1 = (float)uVar87;
    UVar8.___uv1_5.___y_2 = (float)pRVar67;
    UVar8.___uv1_5.___z_3 = (float)uVar88;
    UVar8.___uv1_5.___w_4 = (float)uVar89;
    UVar8.___uv2_6.___x_1 = (float)pVVar72;
    UVar8.___uv2_6.___y_2 = fVar78;
    UVar8.___uv2_6.___z_3 = fVar79;
    UVar8.___uv2_6.___w_4 = (float)uVar90;
    UVar8.___uv3_7.___x_1 = (float)uVar91;
    UVar8.___uv3_7.___y_2 = (float)uVar92;
    UVar8.___uv3_7.___z_3 = (float)uVar93;
    UVar8.___uv3_7.___w_4 = fVar94;
    List_1_Add_m021FBEB8D6A133F50D014CA1A2307D2FAADF7588_gshared
              ((List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F *)local_24,UVar8,pMVar95);
    memset((uchar *)&local_130,'\0',0x6c);
    local_130 = CONCAT44(local_4c,local_1a0);
    local_20.___z_3 = local_54;
    local_20.___w_4 = local_48;
    local_128 = 0;
    VVar56.___y_1 = local_48;
    VVar56.___x_0 = local_54;
    pVVar72 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504
                        (&local_20,VVar56,(MethodInfo *)0x0);
    local_104 = pVVar72->___x_1;
    fStack_100 = pVVar72->___y_2;
    fStack_fc = pVVar72->___z_3;
    fStack_f8 = pVVar72->___w_4;
    CVar41.___g_1 = (float)uStack_13c;
    CVar41.___r_0 = (float)local_140;
    CVar41.___b_2 = (float)uStack_138;
    CVar41.___a_3 = fStack_134;
    uVar91 = local_140;
    uVar92 = uStack_13c;
    uVar93 = uStack_138;
    fVar94 = fStack_134;
    local_108._s_8 =
         (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0_s_8)
         Color32_op_Implicit_mD17E8145D2D32EF369EFE349C4D32E839F7D7AA4(CVar41,(MethodInfo *)0x0);
    uVar90 = 0;
    local_11c = local_2c;
    pVVar72 = &local_20;
    local_124 = local_80;
    uVar89 = 0x104bbc9f;
    VVar25.___y_1 = local_68.___z_4;
    VVar25.___x_0 = local_68.___y_3;
    fVar78 = local_68.___y_3;
    fVar79 = local_68.___z_4;
    pVVar73 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504
                        (pVVar72,VVar25,(MethodInfo *)0x0);
    local_e4 = pVVar73->___x_1;
    fStack_e0 = pVVar73->___y_2;
    fStack_dc = pVVar73->___z_3;
    fStack_d8 = pVVar73->___w_4;
    puVar76 = &local_130;
    puVar69 = (undefined4 *)&stack0xfffffde0;
    pMVar95 = List_1_Add_m021FBEB8D6A133F50D014CA1A2307D2FAADF7588_RuntimeMethod_var;
    for (iVar75 = 0x1b; iVar75 != 0; iVar75 = iVar75 + -1) {
      *puVar69 = *(undefined4 *)puVar76;
      puVar76 = (undefined8 *)((int)puVar76 + 4);
      puVar69 = puVar69 + 1;
    }
    UVar9.___tangent_2.___w_4 = (float)in_stack_fffffe04;
    auVar80 = in_stack_fffffde0._0_12_;
    auVar81 = in_stack_fffffde0._12_12_;
    UVar9.___position_0.___x_2 = (float)auVar80._0_4_;
    UVar9.___position_0.___y_3 = (float)auVar80._4_4_;
    UVar9.___position_0.___z_4 = (float)auVar80._8_4_;
    UVar9.___normal_1.___x_2 = (float)auVar81._0_4_;
    UVar9.___normal_1.___y_3 = (float)auVar81._4_4_;
    UVar9.___normal_1.___z_4 = (float)auVar81._8_4_;
    UVar9.___tangent_2.___x_1 = (float)in_stack_fffffde0._24_4_;
    UVar9.___tangent_2.___y_2 = (float)in_stack_fffffde0._28_4_;
    UVar9.___tangent_2.___z_3 = (float)in_stack_fffffde0._32_4_;
    UVar9.___color_3.field0_0x0 = (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0)uVar82;
    UVar9.___uv0_4.___x_1 = (float)uVar83;
    UVar9.___uv0_4.___y_2 = (float)pAVar84;
    UVar9.___uv0_4.___z_3 = (float)uVar85;
    UVar9.___uv0_4.___w_4 = (float)pAVar86;
    UVar9.___uv1_5.___x_1 = (float)uVar87;
    UVar9.___uv1_5.___y_2 = (float)pRVar67;
    UVar9.___uv1_5.___z_3 = (float)uVar88;
    UVar9.___uv1_5.___w_4 = (float)uVar89;
    UVar9.___uv2_6.___x_1 = (float)pVVar72;
    UVar9.___uv2_6.___y_2 = fVar78;
    UVar9.___uv2_6.___z_3 = fVar79;
    UVar9.___uv2_6.___w_4 = (float)uVar90;
    UVar9.___uv3_7.___x_1 = (float)uVar91;
    UVar9.___uv3_7.___y_2 = (float)uVar92;
    UVar9.___uv3_7.___z_3 = (float)uVar93;
    UVar9.___uv3_7.___w_4 = fVar94;
    List_1_Add_m021FBEB8D6A133F50D014CA1A2307D2FAADF7588_gshared
              ((List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F *)local_24,UVar9,pMVar95);
    memset((uchar *)&local_130,'\0',0x6c);
    local_130 = CONCAT44(local_40,local_c0._16_4_);
    local_20.___z_3 = local_8c;
    local_20.___w_4 = local_44;
    local_128 = 0;
    VVar57.___y_1 = local_44;
    VVar57.___x_0 = local_8c;
    pVVar72 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504
                        (&local_20,VVar57,(MethodInfo *)0x0);
    local_104 = pVVar72->___x_1;
    fStack_100 = pVVar72->___y_2;
    fStack_fc = pVVar72->___z_3;
    fStack_f8 = pVVar72->___w_4;
    CVar42.___g_1 = (float)uStack_13c;
    CVar42.___r_0 = (float)local_140;
    CVar42.___b_2 = (float)uStack_138;
    CVar42.___a_3 = fStack_134;
    uVar91 = local_140;
    uVar92 = uStack_13c;
    uVar93 = uStack_138;
    fVar94 = fStack_134;
    local_108._s_8 =
         (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0_s_8)
         Color32_op_Implicit_mD17E8145D2D32EF369EFE349C4D32E839F7D7AA4(CVar42,(MethodInfo *)0x0);
    uVar90 = 0;
    local_11c = local_2c;
    pVVar72 = &local_20;
    local_124 = local_80;
    uVar89 = 0x104bbd7f;
    VVar26.___y_1 = local_68.___z_4;
    VVar26.___x_0 = local_68.___y_3;
    fVar78 = local_68.___y_3;
    fVar79 = local_68.___z_4;
    pVVar73 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504
                        (pVVar72,VVar26,(MethodInfo *)0x0);
    local_e4 = pVVar73->___x_1;
    fStack_e0 = pVVar73->___y_2;
    fStack_dc = pVVar73->___z_3;
    fStack_d8 = pVVar73->___w_4;
    puVar76 = &local_130;
    puVar69 = (undefined4 *)&stack0xfffffde0;
    pMVar95 = List_1_Add_m021FBEB8D6A133F50D014CA1A2307D2FAADF7588_RuntimeMethod_var;
    for (iVar75 = 0x1b; iVar75 != 0; iVar75 = iVar75 + -1) {
      *puVar69 = *(undefined4 *)puVar76;
      puVar76 = (undefined8 *)((int)puVar76 + 4);
      puVar69 = puVar69 + 1;
    }
    UVar10.___tangent_2.___w_4 = (float)in_stack_fffffe04;
    auVar80 = in_stack_fffffde0._0_12_;
    auVar81 = in_stack_fffffde0._12_12_;
    UVar10.___position_0.___x_2 = (float)auVar80._0_4_;
    UVar10.___position_0.___y_3 = (float)auVar80._4_4_;
    UVar10.___position_0.___z_4 = (float)auVar80._8_4_;
    UVar10.___normal_1.___x_2 = (float)auVar81._0_4_;
    UVar10.___normal_1.___y_3 = (float)auVar81._4_4_;
    UVar10.___normal_1.___z_4 = (float)auVar81._8_4_;
    UVar10.___tangent_2.___x_1 = (float)in_stack_fffffde0._24_4_;
    UVar10.___tangent_2.___y_2 = (float)in_stack_fffffde0._28_4_;
    UVar10.___tangent_2.___z_3 = (float)in_stack_fffffde0._32_4_;
    UVar10.___color_3.field0_0x0 = (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0)uVar82;
    UVar10.___uv0_4.___x_1 = (float)uVar83;
    UVar10.___uv0_4.___y_2 = (float)pAVar84;
    UVar10.___uv0_4.___z_3 = (float)uVar85;
    UVar10.___uv0_4.___w_4 = (float)pAVar86;
    UVar10.___uv1_5.___x_1 = (float)uVar87;
    UVar10.___uv1_5.___y_2 = (float)pRVar67;
    UVar10.___uv1_5.___z_3 = (float)uVar88;
    UVar10.___uv1_5.___w_4 = (float)uVar89;
    UVar10.___uv2_6.___x_1 = (float)pVVar72;
    UVar10.___uv2_6.___y_2 = fVar78;
    UVar10.___uv2_6.___z_3 = fVar79;
    UVar10.___uv2_6.___w_4 = (float)uVar90;
    UVar10.___uv3_7.___x_1 = (float)uVar91;
    UVar10.___uv3_7.___y_2 = (float)uVar92;
    UVar10.___uv3_7.___z_3 = (float)uVar93;
    UVar10.___uv3_7.___w_4 = fVar94;
    List_1_Add_m021FBEB8D6A133F50D014CA1A2307D2FAADF7588_gshared
              ((List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F *)local_24,UVar10,pMVar95);
    memset((uchar *)&local_130,'\0',0x6c);
    local_130 = CONCAT44(local_40,local_190);
    local_20.___z_3 = local_3c;
    local_20.___w_4 = local_44;
    local_128 = 0;
    VVar58.___y_1 = local_44;
    VVar58.___x_0 = local_3c;
    pVVar72 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504
                        (&local_20,VVar58,(MethodInfo *)0x0);
    local_104 = pVVar72->___x_1;
    fStack_100 = pVVar72->___y_2;
    fStack_fc = pVVar72->___z_3;
    fStack_f8 = pVVar72->___w_4;
    CVar43.___g_1 = (float)uStack_13c;
    CVar43.___r_0 = (float)local_140;
    CVar43.___b_2 = (float)uStack_138;
    CVar43.___a_3 = fStack_134;
    uVar91 = local_140;
    uVar92 = uStack_13c;
    uVar93 = uStack_138;
    fVar94 = fStack_134;
    local_108._s_8 =
         (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0_s_8)
         Color32_op_Implicit_mD17E8145D2D32EF369EFE349C4D32E839F7D7AA4(CVar43,(MethodInfo *)0x0);
    uVar90 = 0;
    local_11c = local_2c;
    pVVar72 = &local_20;
    local_124 = local_80;
    uVar89 = 0x104bbe5f;
    VVar27.___y_1 = local_68.___z_4;
    VVar27.___x_0 = local_68.___y_3;
    fVar78 = local_68.___y_3;
    fVar79 = local_68.___z_4;
    pVVar73 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504
                        (pVVar72,VVar27,(MethodInfo *)0x0);
    local_e4 = pVVar73->___x_1;
    fStack_e0 = pVVar73->___y_2;
    fStack_dc = pVVar73->___z_3;
    fStack_d8 = pVVar73->___w_4;
    puVar76 = &local_130;
    puVar69 = (undefined4 *)&stack0xfffffde0;
    pMVar95 = List_1_Add_m021FBEB8D6A133F50D014CA1A2307D2FAADF7588_RuntimeMethod_var;
    for (iVar75 = 0x1b; iVar75 != 0; iVar75 = iVar75 + -1) {
      *puVar69 = *(undefined4 *)puVar76;
      puVar76 = (undefined8 *)((int)puVar76 + 4);
      puVar69 = puVar69 + 1;
    }
    UVar11.___tangent_2.___w_4 = (float)in_stack_fffffe04;
    auVar80 = in_stack_fffffde0._0_12_;
    auVar81 = in_stack_fffffde0._12_12_;
    UVar11.___position_0.___x_2 = (float)auVar80._0_4_;
    UVar11.___position_0.___y_3 = (float)auVar80._4_4_;
    UVar11.___position_0.___z_4 = (float)auVar80._8_4_;
    UVar11.___normal_1.___x_2 = (float)auVar81._0_4_;
    UVar11.___normal_1.___y_3 = (float)auVar81._4_4_;
    UVar11.___normal_1.___z_4 = (float)auVar81._8_4_;
    UVar11.___tangent_2.___x_1 = (float)in_stack_fffffde0._24_4_;
    UVar11.___tangent_2.___y_2 = (float)in_stack_fffffde0._28_4_;
    UVar11.___tangent_2.___z_3 = (float)in_stack_fffffde0._32_4_;
    UVar11.___color_3.field0_0x0 = (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0)uVar82;
    UVar11.___uv0_4.___x_1 = (float)uVar83;
    UVar11.___uv0_4.___y_2 = (float)pAVar84;
    UVar11.___uv0_4.___z_3 = (float)uVar85;
    UVar11.___uv0_4.___w_4 = (float)pAVar86;
    UVar11.___uv1_5.___x_1 = (float)uVar87;
    UVar11.___uv1_5.___y_2 = (float)pRVar67;
    UVar11.___uv1_5.___z_3 = (float)uVar88;
    UVar11.___uv1_5.___w_4 = (float)uVar89;
    UVar11.___uv2_6.___x_1 = (float)pVVar72;
    UVar11.___uv2_6.___y_2 = fVar78;
    UVar11.___uv2_6.___z_3 = fVar79;
    UVar11.___uv2_6.___w_4 = (float)uVar90;
    UVar11.___uv3_7.___x_1 = (float)uVar91;
    UVar11.___uv3_7.___y_2 = (float)uVar92;
    UVar11.___uv3_7.___z_3 = (float)uVar93;
    UVar11.___uv3_7.___w_4 = fVar94;
    List_1_Add_m021FBEB8D6A133F50D014CA1A2307D2FAADF7588_gshared
              ((List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F *)local_24,UVar11,pMVar95);
    memset((uchar *)&local_130,'\0',0x6c);
    local_130 = CONCAT44(local_40,local_160);
    local_20.___z_3 = local_30;
    local_20.___w_4 = local_44;
    local_128 = 0;
    VVar59.___y_1 = local_44;
    VVar59.___x_0 = local_30;
    pVVar72 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504
                        (&local_20,VVar59,(MethodInfo *)0x0);
    local_104 = pVVar72->___x_1;
    fStack_100 = pVVar72->___y_2;
    fStack_fc = pVVar72->___z_3;
    fStack_f8 = pVVar72->___w_4;
    CVar44.___g_1 = (float)uStack_13c;
    CVar44.___r_0 = (float)local_140;
    CVar44.___b_2 = (float)uStack_138;
    CVar44.___a_3 = fStack_134;
    uVar91 = local_140;
    uVar92 = uStack_13c;
    uVar93 = uStack_138;
    fVar94 = fStack_134;
    local_108._s_8 =
         (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0_s_8)
         Color32_op_Implicit_mD17E8145D2D32EF369EFE349C4D32E839F7D7AA4(CVar44,(MethodInfo *)0x0);
    uVar90 = 0;
    local_11c = local_2c;
    pVVar72 = &local_20;
    local_124 = local_80;
    uVar89 = 0x104bbf3f;
    VVar28.___y_1 = local_68.___z_4;
    VVar28.___x_0 = local_68.___y_3;
    fVar78 = local_68.___y_3;
    fVar79 = local_68.___z_4;
    pVVar73 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504
                        (pVVar72,VVar28,(MethodInfo *)0x0);
    local_e4 = pVVar73->___x_1;
    fStack_e0 = pVVar73->___y_2;
    fStack_dc = pVVar73->___z_3;
    fStack_d8 = pVVar73->___w_4;
    puVar76 = &local_130;
    puVar69 = (undefined4 *)&stack0xfffffde0;
    pMVar95 = List_1_Add_m021FBEB8D6A133F50D014CA1A2307D2FAADF7588_RuntimeMethod_var;
    for (iVar75 = 0x1b; iVar75 != 0; iVar75 = iVar75 + -1) {
      *puVar69 = *(undefined4 *)puVar76;
      puVar76 = (undefined8 *)((int)puVar76 + 4);
      puVar69 = puVar69 + 1;
    }
    UVar12.___tangent_2.___w_4 = (float)in_stack_fffffe04;
    auVar80 = in_stack_fffffde0._0_12_;
    auVar81 = in_stack_fffffde0._12_12_;
    UVar12.___position_0.___x_2 = (float)auVar80._0_4_;
    UVar12.___position_0.___y_3 = (float)auVar80._4_4_;
    UVar12.___position_0.___z_4 = (float)auVar80._8_4_;
    UVar12.___normal_1.___x_2 = (float)auVar81._0_4_;
    UVar12.___normal_1.___y_3 = (float)auVar81._4_4_;
    UVar12.___normal_1.___z_4 = (float)auVar81._8_4_;
    UVar12.___tangent_2.___x_1 = (float)in_stack_fffffde0._24_4_;
    UVar12.___tangent_2.___y_2 = (float)in_stack_fffffde0._28_4_;
    UVar12.___tangent_2.___z_3 = (float)in_stack_fffffde0._32_4_;
    UVar12.___color_3.field0_0x0 = (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0)uVar82;
    UVar12.___uv0_4.___x_1 = (float)uVar83;
    UVar12.___uv0_4.___y_2 = (float)pAVar84;
    UVar12.___uv0_4.___z_3 = (float)uVar85;
    UVar12.___uv0_4.___w_4 = (float)pAVar86;
    UVar12.___uv1_5.___x_1 = (float)uVar87;
    UVar12.___uv1_5.___y_2 = (float)pRVar67;
    UVar12.___uv1_5.___z_3 = (float)uVar88;
    UVar12.___uv1_5.___w_4 = (float)uVar89;
    UVar12.___uv2_6.___x_1 = (float)pVVar72;
    UVar12.___uv2_6.___y_2 = fVar78;
    UVar12.___uv2_6.___z_3 = fVar79;
    UVar12.___uv2_6.___w_4 = (float)uVar90;
    UVar12.___uv3_7.___x_1 = (float)uVar91;
    UVar12.___uv3_7.___y_2 = (float)uVar92;
    UVar12.___uv3_7.___z_3 = (float)uVar93;
    UVar12.___uv3_7.___w_4 = fVar94;
    List_1_Add_m021FBEB8D6A133F50D014CA1A2307D2FAADF7588_gshared
              ((List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F *)local_24,UVar12,pMVar95);
    memset((uchar *)&local_130,'\0',0x6c);
    local_130 = CONCAT44(local_40,local_1a0);
    local_20.___z_3 = local_54;
    local_20.___w_4 = local_44;
    local_128 = 0;
    VVar60.___y_1 = local_44;
    VVar60.___x_0 = local_54;
    pVVar72 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504
                        (&local_20,VVar60,(MethodInfo *)0x0);
    local_104 = pVVar72->___x_1;
    fStack_100 = pVVar72->___y_2;
    fStack_fc = pVVar72->___z_3;
    fStack_f8 = pVVar72->___w_4;
    CVar45.___g_1 = (float)uStack_13c;
    CVar45.___r_0 = (float)local_140;
    CVar45.___b_2 = (float)uStack_138;
    CVar45.___a_3 = fStack_134;
    uVar91 = local_140;
    uVar92 = uStack_13c;
    uVar93 = uStack_138;
    fVar94 = fStack_134;
    local_108._s_8 =
         (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0_s_8)
         Color32_op_Implicit_mD17E8145D2D32EF369EFE349C4D32E839F7D7AA4(CVar45,(MethodInfo *)0x0);
    uVar90 = 0;
    local_11c = local_2c;
    pVVar72 = &local_20;
    local_124 = local_80;
    uVar89 = 0x104bc01f;
    VVar29.___y_1 = local_68.___z_4;
    VVar29.___x_0 = local_68.___y_3;
    fVar78 = local_68.___y_3;
    fVar79 = local_68.___z_4;
    pVVar73 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504
                        (pVVar72,VVar29,(MethodInfo *)0x0);
    local_e4 = pVVar73->___x_1;
    fStack_e0 = pVVar73->___y_2;
    fStack_dc = pVVar73->___z_3;
    fStack_d8 = pVVar73->___w_4;
    puVar76 = &local_130;
    puVar69 = (undefined4 *)&stack0xfffffde0;
    pMVar95 = List_1_Add_m021FBEB8D6A133F50D014CA1A2307D2FAADF7588_RuntimeMethod_var;
    for (iVar75 = 0x1b; iVar75 != 0; iVar75 = iVar75 + -1) {
      *puVar69 = *(undefined4 *)puVar76;
      puVar76 = (undefined8 *)((int)puVar76 + 4);
      puVar69 = puVar69 + 1;
    }
    UVar13.___tangent_2.___w_4 = (float)in_stack_fffffe04;
    auVar80 = in_stack_fffffde0._0_12_;
    auVar81 = in_stack_fffffde0._12_12_;
    UVar13.___position_0.___x_2 = (float)auVar80._0_4_;
    UVar13.___position_0.___y_3 = (float)auVar80._4_4_;
    UVar13.___position_0.___z_4 = (float)auVar80._8_4_;
    UVar13.___normal_1.___x_2 = (float)auVar81._0_4_;
    UVar13.___normal_1.___y_3 = (float)auVar81._4_4_;
    UVar13.___normal_1.___z_4 = (float)auVar81._8_4_;
    UVar13.___tangent_2.___x_1 = (float)in_stack_fffffde0._24_4_;
    UVar13.___tangent_2.___y_2 = (float)in_stack_fffffde0._28_4_;
    UVar13.___tangent_2.___z_3 = (float)in_stack_fffffde0._32_4_;
    UVar13.___color_3.field0_0x0 = (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0)uVar82;
    UVar13.___uv0_4.___x_1 = (float)uVar83;
    UVar13.___uv0_4.___y_2 = (float)pAVar84;
    UVar13.___uv0_4.___z_3 = (float)uVar85;
    UVar13.___uv0_4.___w_4 = (float)pAVar86;
    UVar13.___uv1_5.___x_1 = (float)uVar87;
    UVar13.___uv1_5.___y_2 = (float)pRVar67;
    UVar13.___uv1_5.___z_3 = (float)uVar88;
    UVar13.___uv1_5.___w_4 = (float)uVar89;
    UVar13.___uv2_6.___x_1 = (float)pVVar72;
    UVar13.___uv2_6.___y_2 = fVar78;
    UVar13.___uv2_6.___z_3 = fVar79;
    UVar13.___uv2_6.___w_4 = (float)uVar90;
    UVar13.___uv3_7.___x_1 = (float)uVar91;
    UVar13.___uv3_7.___y_2 = (float)uVar92;
    UVar13.___uv3_7.___z_3 = (float)uVar93;
    UVar13.___uv3_7.___w_4 = fVar94;
    List_1_Add_m021FBEB8D6A133F50D014CA1A2307D2FAADF7588_gshared
              ((List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F *)local_24,UVar13,pMVar95);
    memset((uchar *)&local_130,'\0',0x6c);
    local_130 = CONCAT44(local_70,local_c0._16_4_);
    local_20.___z_3 = local_8c;
    local_20.___w_4 = local_94;
    local_128 = 0;
    VVar61.___y_1 = local_94;
    VVar61.___x_0 = local_8c;
    pVVar72 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504
                        ((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(local_c0 + 0x10),
                         VVar61,(MethodInfo *)0x0);
    local_104 = pVVar72->___x_1;
    fStack_100 = pVVar72->___y_2;
    fStack_fc = pVVar72->___z_3;
    fStack_f8 = pVVar72->___w_4;
    CVar46.___g_1 = (float)uStack_13c;
    CVar46.___r_0 = (float)local_140;
    CVar46.___b_2 = (float)uStack_138;
    CVar46.___a_3 = fStack_134;
    uVar91 = local_140;
    uVar92 = uStack_13c;
    uVar93 = uStack_138;
    fVar94 = fStack_134;
    local_108._s_8 =
         (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0_s_8)
         Color32_op_Implicit_mD17E8145D2D32EF369EFE349C4D32E839F7D7AA4(CVar46,(MethodInfo *)0x0);
    uVar90 = 0;
    local_11c = local_2c;
    pVVar72 = (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(local_c0 + 0x10);
    local_124 = local_80;
    uVar89 = 0x104bc107;
    VVar30.___y_1 = local_68.___z_4;
    VVar30.___x_0 = local_68.___y_3;
    fVar78 = local_68.___y_3;
    fVar79 = local_68.___z_4;
    pVVar73 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504
                        (pVVar72,VVar30,(MethodInfo *)0x0);
    local_e4 = pVVar73->___x_1;
    fStack_e0 = pVVar73->___y_2;
    fStack_dc = pVVar73->___z_3;
    fStack_d8 = pVVar73->___w_4;
    puVar76 = &local_130;
    puVar69 = (undefined4 *)&stack0xfffffde0;
    pMVar95 = List_1_Add_m021FBEB8D6A133F50D014CA1A2307D2FAADF7588_RuntimeMethod_var;
    for (iVar75 = 0x1b; iVar75 != 0; iVar75 = iVar75 + -1) {
      *puVar69 = *(undefined4 *)puVar76;
      puVar76 = (undefined8 *)((int)puVar76 + 4);
      puVar69 = puVar69 + 1;
    }
    UVar14.___tangent_2.___w_4 = (float)in_stack_fffffe04;
    auVar80 = in_stack_fffffde0._0_12_;
    auVar81 = in_stack_fffffde0._12_12_;
    UVar14.___position_0.___x_2 = (float)auVar80._0_4_;
    UVar14.___position_0.___y_3 = (float)auVar80._4_4_;
    UVar14.___position_0.___z_4 = (float)auVar80._8_4_;
    UVar14.___normal_1.___x_2 = (float)auVar81._0_4_;
    UVar14.___normal_1.___y_3 = (float)auVar81._4_4_;
    UVar14.___normal_1.___z_4 = (float)auVar81._8_4_;
    UVar14.___tangent_2.___x_1 = (float)in_stack_fffffde0._24_4_;
    UVar14.___tangent_2.___y_2 = (float)in_stack_fffffde0._28_4_;
    UVar14.___tangent_2.___z_3 = (float)in_stack_fffffde0._32_4_;
    UVar14.___color_3.field0_0x0 = (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0)uVar82;
    UVar14.___uv0_4.___x_1 = (float)uVar83;
    UVar14.___uv0_4.___y_2 = (float)pAVar84;
    UVar14.___uv0_4.___z_3 = (float)uVar85;
    UVar14.___uv0_4.___w_4 = (float)pAVar86;
    UVar14.___uv1_5.___x_1 = (float)uVar87;
    UVar14.___uv1_5.___y_2 = (float)pRVar67;
    UVar14.___uv1_5.___z_3 = (float)uVar88;
    UVar14.___uv1_5.___w_4 = (float)uVar89;
    UVar14.___uv2_6.___x_1 = (float)pVVar72;
    UVar14.___uv2_6.___y_2 = fVar78;
    UVar14.___uv2_6.___z_3 = fVar79;
    UVar14.___uv2_6.___w_4 = (float)uVar90;
    UVar14.___uv3_7.___x_1 = (float)uVar91;
    UVar14.___uv3_7.___y_2 = (float)uVar92;
    UVar14.___uv3_7.___z_3 = (float)uVar93;
    UVar14.___uv3_7.___w_4 = fVar94;
    List_1_Add_m021FBEB8D6A133F50D014CA1A2307D2FAADF7588_gshared
              ((List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F *)local_24,UVar14,pMVar95);
    memset((uchar *)&local_130,'\0',0x6c);
    local_130 = CONCAT44(local_70,local_190);
    local_20.___z_3 = local_3c;
    local_20.___w_4 = local_94;
    local_128 = 0;
    VVar62.___y_1 = local_94;
    VVar62.___x_0 = local_3c;
    pVVar72 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504
                        ((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(local_c0 + 0x10),
                         VVar62,(MethodInfo *)0x0);
    local_104 = pVVar72->___x_1;
    fStack_100 = pVVar72->___y_2;
    fStack_fc = pVVar72->___z_3;
    fStack_f8 = pVVar72->___w_4;
    CVar47.___g_1 = (float)uStack_13c;
    CVar47.___r_0 = (float)local_140;
    CVar47.___b_2 = (float)uStack_138;
    CVar47.___a_3 = fStack_134;
    uVar91 = local_140;
    uVar92 = uStack_13c;
    uVar93 = uStack_138;
    fVar94 = fStack_134;
    local_108._s_8 =
         (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0_s_8)
         Color32_op_Implicit_mD17E8145D2D32EF369EFE349C4D32E839F7D7AA4(CVar47,(MethodInfo *)0x0);
    uVar90 = 0;
    local_11c = local_2c;
    pVVar72 = (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(local_c0 + 0x10);
    local_124 = local_80;
    uVar89 = 0x104bc1ef;
    VVar31.___y_1 = local_68.___z_4;
    VVar31.___x_0 = local_68.___y_3;
    fVar78 = local_68.___y_3;
    fVar79 = local_68.___z_4;
    pVVar73 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504
                        (pVVar72,VVar31,(MethodInfo *)0x0);
    local_e4 = pVVar73->___x_1;
    fStack_e0 = pVVar73->___y_2;
    fStack_dc = pVVar73->___z_3;
    fStack_d8 = pVVar73->___w_4;
    puVar76 = &local_130;
    puVar69 = (undefined4 *)&stack0xfffffde0;
    pMVar95 = List_1_Add_m021FBEB8D6A133F50D014CA1A2307D2FAADF7588_RuntimeMethod_var;
    for (iVar75 = 0x1b; iVar75 != 0; iVar75 = iVar75 + -1) {
      *puVar69 = *(undefined4 *)puVar76;
      puVar76 = (undefined8 *)((int)puVar76 + 4);
      puVar69 = puVar69 + 1;
    }
    UVar15.___tangent_2.___w_4 = (float)in_stack_fffffe04;
    auVar80 = in_stack_fffffde0._0_12_;
    auVar81 = in_stack_fffffde0._12_12_;
    UVar15.___position_0.___x_2 = (float)auVar80._0_4_;
    UVar15.___position_0.___y_3 = (float)auVar80._4_4_;
    UVar15.___position_0.___z_4 = (float)auVar80._8_4_;
    UVar15.___normal_1.___x_2 = (float)auVar81._0_4_;
    UVar15.___normal_1.___y_3 = (float)auVar81._4_4_;
    UVar15.___normal_1.___z_4 = (float)auVar81._8_4_;
    UVar15.___tangent_2.___x_1 = (float)in_stack_fffffde0._24_4_;
    UVar15.___tangent_2.___y_2 = (float)in_stack_fffffde0._28_4_;
    UVar15.___tangent_2.___z_3 = (float)in_stack_fffffde0._32_4_;
    UVar15.___color_3.field0_0x0 = (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0)uVar82;
    UVar15.___uv0_4.___x_1 = (float)uVar83;
    UVar15.___uv0_4.___y_2 = (float)pAVar84;
    UVar15.___uv0_4.___z_3 = (float)uVar85;
    UVar15.___uv0_4.___w_4 = (float)pAVar86;
    UVar15.___uv1_5.___x_1 = (float)uVar87;
    UVar15.___uv1_5.___y_2 = (float)pRVar67;
    UVar15.___uv1_5.___z_3 = (float)uVar88;
    UVar15.___uv1_5.___w_4 = (float)uVar89;
    UVar15.___uv2_6.___x_1 = (float)pVVar72;
    UVar15.___uv2_6.___y_2 = fVar78;
    UVar15.___uv2_6.___z_3 = fVar79;
    UVar15.___uv2_6.___w_4 = (float)uVar90;
    UVar15.___uv3_7.___x_1 = (float)uVar91;
    UVar15.___uv3_7.___y_2 = (float)uVar92;
    UVar15.___uv3_7.___z_3 = (float)uVar93;
    UVar15.___uv3_7.___w_4 = fVar94;
    List_1_Add_m021FBEB8D6A133F50D014CA1A2307D2FAADF7588_gshared
              ((List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F *)local_24,UVar15,pMVar95);
    memset((uchar *)&local_130,'\0',0x6c);
    local_130 = CONCAT44(local_70,local_160);
    local_20.___z_3 = local_30;
    local_20.___w_4 = local_94;
    local_128 = 0;
    VVar63.___y_1 = local_94;
    VVar63.___x_0 = local_30;
    pVVar72 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504
                        ((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(local_c0 + 0x10),
                         VVar63,(MethodInfo *)0x0);
    local_104 = pVVar72->___x_1;
    fStack_100 = pVVar72->___y_2;
    fStack_fc = pVVar72->___z_3;
    fStack_f8 = pVVar72->___w_4;
    CVar48.___g_1 = (float)uStack_13c;
    CVar48.___r_0 = (float)local_140;
    CVar48.___b_2 = (float)uStack_138;
    CVar48.___a_3 = fStack_134;
    uVar91 = local_140;
    uVar92 = uStack_13c;
    uVar93 = uStack_138;
    fVar94 = fStack_134;
    local_108._s_8 =
         (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0_s_8)
         Color32_op_Implicit_mD17E8145D2D32EF369EFE349C4D32E839F7D7AA4(CVar48,(MethodInfo *)0x0);
    uVar90 = 0;
    local_11c = local_2c;
    pVVar72 = (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(local_c0 + 0x10);
    local_124 = local_80;
    uVar89 = 0x104bc2d7;
    VVar32.___y_1 = local_68.___z_4;
    VVar32.___x_0 = local_68.___y_3;
    fVar78 = local_68.___y_3;
    fVar79 = local_68.___z_4;
    pVVar73 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504
                        (pVVar72,VVar32,(MethodInfo *)0x0);
    local_e4 = pVVar73->___x_1;
    fStack_e0 = pVVar73->___y_2;
    fStack_dc = pVVar73->___z_3;
    fStack_d8 = pVVar73->___w_4;
    puVar76 = &local_130;
    puVar69 = (undefined4 *)&stack0xfffffde0;
    pMVar95 = List_1_Add_m021FBEB8D6A133F50D014CA1A2307D2FAADF7588_RuntimeMethod_var;
    for (iVar75 = 0x1b; iVar75 != 0; iVar75 = iVar75 + -1) {
      *puVar69 = *(undefined4 *)puVar76;
      puVar76 = (undefined8 *)((int)puVar76 + 4);
      puVar69 = puVar69 + 1;
    }
    UVar16.___tangent_2.___w_4 = (float)in_stack_fffffe04;
    auVar80 = in_stack_fffffde0._0_12_;
    auVar81 = in_stack_fffffde0._12_12_;
    UVar16.___position_0.___x_2 = (float)auVar80._0_4_;
    UVar16.___position_0.___y_3 = (float)auVar80._4_4_;
    UVar16.___position_0.___z_4 = (float)auVar80._8_4_;
    UVar16.___normal_1.___x_2 = (float)auVar81._0_4_;
    UVar16.___normal_1.___y_3 = (float)auVar81._4_4_;
    UVar16.___normal_1.___z_4 = (float)auVar81._8_4_;
    UVar16.___tangent_2.___x_1 = (float)in_stack_fffffde0._24_4_;
    UVar16.___tangent_2.___y_2 = (float)in_stack_fffffde0._28_4_;
    UVar16.___tangent_2.___z_3 = (float)in_stack_fffffde0._32_4_;
    UVar16.___color_3.field0_0x0 = (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0)uVar82;
    UVar16.___uv0_4.___x_1 = (float)uVar83;
    UVar16.___uv0_4.___y_2 = (float)pAVar84;
    UVar16.___uv0_4.___z_3 = (float)uVar85;
    UVar16.___uv0_4.___w_4 = (float)pAVar86;
    UVar16.___uv1_5.___x_1 = (float)uVar87;
    UVar16.___uv1_5.___y_2 = (float)pRVar67;
    UVar16.___uv1_5.___z_3 = (float)uVar88;
    UVar16.___uv1_5.___w_4 = (float)uVar89;
    UVar16.___uv2_6.___x_1 = (float)pVVar72;
    UVar16.___uv2_6.___y_2 = fVar78;
    UVar16.___uv2_6.___z_3 = fVar79;
    UVar16.___uv2_6.___w_4 = (float)uVar90;
    UVar16.___uv3_7.___x_1 = (float)uVar91;
    UVar16.___uv3_7.___y_2 = (float)uVar92;
    UVar16.___uv3_7.___z_3 = (float)uVar93;
    UVar16.___uv3_7.___w_4 = fVar94;
    List_1_Add_m021FBEB8D6A133F50D014CA1A2307D2FAADF7588_gshared
              ((List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F *)local_24,UVar16,pMVar95);
    memset((uchar *)&local_130,'\0',0x6c);
    local_130 = CONCAT44(local_70,local_1a0);
    local_20.___z_3 = local_54;
    local_20.___w_4 = local_94;
    local_128 = 0;
    VVar64.___y_1 = local_94;
    VVar64.___x_0 = local_54;
    pVVar72 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504
                        ((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(local_c0 + 0x10),
                         VVar64,(MethodInfo *)0x0);
    local_104 = pVVar72->___x_1;
    fStack_100 = pVVar72->___y_2;
    fStack_fc = pVVar72->___z_3;
    fStack_f8 = pVVar72->___w_4;
    CVar49.___g_1 = (float)uStack_13c;
    CVar49.___r_0 = (float)local_140;
    CVar49.___b_2 = (float)uStack_138;
    CVar49.___a_3 = fStack_134;
    uVar91 = local_140;
    uVar92 = uStack_13c;
    uVar93 = uStack_138;
    fVar94 = fStack_134;
    local_108._s_8 =
         (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0_s_8)
         Color32_op_Implicit_mD17E8145D2D32EF369EFE349C4D32E839F7D7AA4(CVar49,(MethodInfo *)0x0);
    uVar90 = 0;
    local_11c = local_2c;
    pVVar72 = (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(local_c0 + 0x10);
    local_124 = local_80;
    uVar89 = 0x104bc3bf;
    VVar33.___y_1 = local_68.___z_4;
    VVar33.___x_0 = local_68.___y_3;
    fVar78 = local_68.___y_3;
    fVar79 = local_68.___z_4;
    pVVar73 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504
                        (pVVar72,VVar33,(MethodInfo *)0x0);
    local_e4 = pVVar73->___x_1;
    fStack_e0 = pVVar73->___y_2;
    fStack_dc = pVVar73->___z_3;
    fStack_d8 = pVVar73->___w_4;
    puVar76 = &local_130;
    puVar69 = (undefined4 *)&stack0xfffffde0;
    pMVar95 = List_1_Add_m021FBEB8D6A133F50D014CA1A2307D2FAADF7588_RuntimeMethod_var;
    for (iVar75 = 0x1b; pDVar71 = local_24, iVar75 != 0; iVar75 = iVar75 + -1) {
      *puVar69 = *(undefined4 *)puVar76;
      puVar76 = (undefined8 *)((int)puVar76 + 4);
      puVar69 = puVar69 + 1;
    }
    UVar17.___tangent_2.___w_4 = (float)in_stack_fffffe04;
    auVar80 = in_stack_fffffde0._0_12_;
    auVar81 = in_stack_fffffde0._12_12_;
    UVar17.___position_0.___x_2 = (float)auVar80._0_4_;
    UVar17.___position_0.___y_3 = (float)auVar80._4_4_;
    UVar17.___position_0.___z_4 = (float)auVar80._8_4_;
    UVar17.___normal_1.___x_2 = (float)auVar81._0_4_;
    UVar17.___normal_1.___y_3 = (float)auVar81._4_4_;
    UVar17.___normal_1.___z_4 = (float)auVar81._8_4_;
    UVar17.___tangent_2.___x_1 = (float)in_stack_fffffde0._24_4_;
    UVar17.___tangent_2.___y_2 = (float)in_stack_fffffde0._28_4_;
    UVar17.___tangent_2.___z_3 = (float)in_stack_fffffde0._32_4_;
    UVar17.___color_3.field0_0x0 = (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0)uVar82;
    UVar17.___uv0_4.___x_1 = (float)uVar83;
    UVar17.___uv0_4.___y_2 = (float)pAVar84;
    UVar17.___uv0_4.___z_3 = (float)uVar85;
    UVar17.___uv0_4.___w_4 = (float)pAVar86;
    UVar17.___uv1_5.___x_1 = (float)uVar87;
    UVar17.___uv1_5.___y_2 = (float)pRVar67;
    UVar17.___uv1_5.___z_3 = (float)uVar88;
    UVar17.___uv1_5.___w_4 = (float)uVar89;
    UVar17.___uv2_6.___x_1 = (float)pVVar72;
    UVar17.___uv2_6.___y_2 = fVar78;
    UVar17.___uv2_6.___z_3 = fVar79;
    UVar17.___uv2_6.___w_4 = (float)uVar90;
    UVar17.___uv3_7.___x_1 = (float)uVar91;
    UVar17.___uv3_7.___y_2 = (float)uVar92;
    UVar17.___uv3_7.___z_3 = (float)uVar93;
    UVar17.___uv3_7.___w_4 = fVar94;
    List_1_Add_m021FBEB8D6A133F50D014CA1A2307D2FAADF7588_gshared
              ((List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F *)local_24,UVar17,pMVar95);
    if ((ListPool_1_t2D2B00C678E6EC8FBF294B968D02CF4EF6565150_il2cpp_TypeInfo_var->has_cctor != '\0'
        ) && (ListPool_1_t2D2B00C678E6EC8FBF294B968D02CF4EF6565150_il2cpp_TypeInfo_var->
              cctor_finished == 0)) {
      il2cpp_runtime_class_init
                (ListPool_1_t2D2B00C678E6EC8FBF294B968D02CF4EF6565150_il2cpp_TypeInfo_var);
    }
    pDVar74 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
              ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
                        (ListPool_1_Get_m241128D5276523F0F1C96D3E65AE9BEA91AB9F8A_RuntimeMethod_var)
    ;
    if (local_4d != 0) {
      if (pDVar74 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
      goto LAB_104bc7f7;
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar74,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x1,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar74,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar74,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x5,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar74,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x5,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar74,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar74,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x4,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
    }
    if (local_31 != 0) {
      if (pDVar74 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
      goto LAB_104bc7f7;
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar74,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x2,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar74,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x1,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar74,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x6,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar74,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x6,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar74,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x1,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar74,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x5,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
    }
    if (local_32 != 0) {
      if (pDVar74 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
      goto LAB_104bc7f7;
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar74,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x2,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar74,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x6,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar74,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x3,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar74,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x3,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar74,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x6,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar74,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x7,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
    }
    if (local_33 != 0) {
      if (pDVar74 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
      goto LAB_104bc7f7;
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar74,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x5,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar74,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x4,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar74,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x9,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar74,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x9,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar74,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x4,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar74,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x8,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
    }
    if (local_27 != '\0') {
      if (pDVar74 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
      goto LAB_104bc7f7;
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar74,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x5,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar74,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x9,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar74,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0xa,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar74,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0xa,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar74,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x6,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar74,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x5,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
    }
    if (local_28 != 0) {
      if (pDVar74 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
      goto LAB_104bc7f7;
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar74,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x7,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar74,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x6,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar74,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0xb,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar74,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0xb,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar74,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x6,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar74,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0xa,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
    }
    if (local_34 != 0) {
      if (pDVar74 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
      goto LAB_104bc7f7;
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar74,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x8,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar74,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0xc,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar74,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x9,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar74,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x9,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar74,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0xc,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar74,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0xd,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
    }
    if (local_35 != 0) {
      if (pDVar74 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
      goto LAB_104bc7f7;
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar74,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0xa,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar74,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x9,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar74,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0xe,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar74,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0xe,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar74,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x9,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar74,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0xd,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
    }
    if (local_36 != 0) {
      if (pDVar74 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
      goto LAB_104bc7f7;
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar74,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0xb,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar74,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0xa,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar74,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0xf,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar74,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0xf,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar74,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0xa,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar74,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0xe,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
    }
    if (param_2 != (VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 *)0x0) {
      VertexHelper_AddUIVertexStream_m979FD37B1176E5B5A217065C04B64EDB568DC85B
                (param_2,(List_1_t8907FD137E854241E2657BF53E6CEFF7370FAC5F *)pDVar71,
                 (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)pDVar74,(MethodInfo *)0x0);
      DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
                (pDVar71,
                 ListPoolExtension_ReturnToPool_TisUIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_mD7D58DECA5A3AB0A4074792B1D3588FD2EDFD256_RuntimeMethod_var
                );
      DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
                (pDVar74,
                 ListPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4FAE16C446DE4B6D743099F3150D9D87901166AE_RuntimeMethod_var
                );
      return;
    }
  }
LAB_104bc7f7:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
