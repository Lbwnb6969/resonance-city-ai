// RVA 0x872610 | Placemaker.AoBaker$$OnStart
// PDB: AoBaker_OnStart_m0861E5017A02643D0040AA32F7275BB5AE936AB8
// Body: [[10872610, 10872a12] [10872a16, 10872c0f]]
// Direct callees:
// 10068e20 List_1_get_Item_m0800F58110ACB0F26B29F2AC7A41A0072D862855_inline
// 101275a0 il2cpp_array_new_specific
// 101280f0 il2cpp_runtime_class_init
// 1018e740 il2cpp_codegen_get_index_out_of_range_exception
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10196010 _libm_sse2_sqrt_precise
// 10196f40 _libm_sse2_pow_precise
// 102c1f90 TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
// 10327350 UnityAction_2_Invoke_mC190ED9AED96E2FE7A68F86FF0DE1AF6B3F8C270_gshared
// 10441630 DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
// 105cffe0 ListPool_1_Get_m115ABCD645C890A36F58D2AFB9D56068DDD2CE56_gshared
// 10665440 RenderTexture__ctor_m5D8D36B284951F95A048C6B9ACA24FC7509564FF
// 1066ba70 Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0
// 1066c2c0 Texture2D_SetPixels32_m6C2602EBE75F9C70DBC36D0B67EA4C12638518BB
// 1066c450 Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4
// 10872c20 AoBaker_Restore_mA751F0B8AB2A8B8DEB528EF2254E53036E98BEA0
// 10a38cf0 Color32_op_Implicit_mD17E8145D2D32EF369EFE349C4D32E839F7D7AA4
// 10a3edf0 Graphics_Blit_m5E0E60EA4A4D351DCC314AB2C49C7DC5B8863D05
// 10a43400 Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E
// 10a44200 Mathf_NextPowerOfTwo_m89DB0674631948FE00FD5660B18D9E62CE85CAF5
// 10a44370 Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
AoBaker_OnStart_m0861E5017A02643D0040AA32F7275BB5AE936AB8
          (AoBaker_t9129C481C867A370E0057056B761ECEB59BE1C20 *param_1,MethodInfo *param_2)

{
  UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD *pUVar1;
  Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 *pSVar2;
  Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *pTVar3;
  int iVar4;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 CVar5;
  RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *pRVar6;
  Material_t8927C00353A72755313F046D0CE85178AE8218EE *pMVar7;
  int iVar8;
  int iVar9;
  Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *pTVar10;
  Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2 *pCVar11;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *pDVar12;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OVar13;
  uint uVar14;
  Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0 CVar15;
  Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0 CVar16;
  Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0 CVar17;
  Exception_t *pEVar18;
  double dVar19;
  float fVar20;
  MethodInfo *pMVar21;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_28;
  Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0 local_24;
  int local_20;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_18;

  if (DAT_1151f58f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Action_2_Invoke_m4FF0818C2EDBEB22E597830C31FF157DE48FE4E6_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&AoBaker_t9129C481C867A370E0057056B761ECEB59BE1C20_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ListPoolExtension_ReturnToPool_TisColor32_tDB54A78627878A7D2DE42BB028D64306A18E858D_m636CE62F261F949CAA86605302D83F65169ACA78_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_Get_m115ABCD645C890A36F58D2AFB9D56068DDD2CE56_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_tCD128B4F0A9C68EC8060798DE601EA2634881DBB_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_m97DC82736F0DD1CB475124571831124BBDC57847_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m18C2F32A08B3CCA28DBF32123E093F868BD9CB32_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
    DAT_1151f58f = '\x01';
  }
  pRVar6 = (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)
           il2cpp_codegen_object_new
                     (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var);
  RenderTexture__ctor_m5D8D36B284951F95A048C6B9ACA24FC7509564FF
            (pRVar6,0x800,0x800,0x18,(MethodInfo *)0x0);
  param_1->___renderTexture0_14 = pRVar6;
  pRVar6 = (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)
           il2cpp_codegen_object_new
                     (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var);
  RenderTexture__ctor_m5D8D36B284951F95A048C6B9ACA24FC7509564FF
            (pRVar6,0x800,0x800,0x18,(MethodInfo *)0x0);
  param_1->___renderTexture1_15 = pRVar6;
  if ((AoBaker_t9129C481C867A370E0057056B761ECEB59BE1C20_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (AoBaker_t9129C481C867A370E0057056B761ECEB59BE1C20_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(AoBaker_t9129C481C867A370E0057056B761ECEB59BE1C20_il2cpp_TypeInfo_var)
    ;
  }
  pUVar1 = *(UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD **)
            ((int)AoBaker_t9129C481C867A370E0057056B761ECEB59BE1C20_il2cpp_TypeInfo_var->
                  static_fields + 0x14);
  if (pUVar1 != (UnityAction_2_tEA79D6DFB08A416619D920D80581B3A7C1376CCD *)0x0) {
    UnityAction_2_Invoke_mC190ED9AED96E2FE7A68F86FF0DE1AF6B3F8C270_gshared
              (pUVar1,(Il2CppObject *)param_1->___renderTexture0_14,
               (Il2CppObject *)param_1->___renderTexture1_15,
               Action_2_Invoke_m4FF0818C2EDBEB22E597830C31FF157DE48FE4E6_RuntimeMethod_var);
    pSVar2 = param_1->___stackShader_24;
    pMVar7 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)
             il2cpp_codegen_object_new
                       (Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
    Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(pMVar7,pSVar2,(MethodInfo *)0x0);
    pSVar2 = param_1->___shader_7;
    param_1->___stackMaterial_13 = pMVar7;
    pMVar7 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)
             il2cpp_codegen_object_new
                       (Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
    Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(pMVar7,pSVar2,(MethodInfo *)0x0);
    pSVar2 = param_1->___spreaderShader_8;
    param_1->___material_10 = pMVar7;
    pMVar7 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)
             il2cpp_codegen_object_new
                       (Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
    Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(pMVar7,pSVar2,(MethodInfo *)0x0);
    param_1->___spreaderMaterial_11 = pMVar7;
    pSVar2 = param_1->___marchingSquaresShader_9;
    pMVar7 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)
             il2cpp_codegen_object_new
                       (Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
    Material__ctor_mD2A3BCD3B4F17F5C6E95F3B34DAF4B497B67127E(pMVar7,pSVar2,(MethodInfo *)0x0);
    dVar19 = __real_4031000000000000;
    param_1->___marchingSquaresMaterial_12 = pMVar7;
    pMVar21 = (MethodInfo *)0x0;
    _libm_sse2_pow_precise();
    iVar8 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD((float)dVar19,pMVar21);
    pMVar21 = (MethodInfo *)0x0;
    dVar19 = (double)iVar8;
    _libm_sse2_sqrt_precise();
    iVar9 = Mathf_NextPowerOfTwo_m89DB0674631948FE00FD5660B18D9E62CE85CAF5((int)dVar19,pMVar21);
    iVar4 = iVar9 * 2;
    iVar9 = Mathf_NextPowerOfTwo_m89DB0674631948FE00FD5660B18D9E62CE85CAF5
                      (iVar8 / iVar9,(MethodInfo *)0x0);
    iVar9 = iVar9 * 2;
    pTVar10 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)
              il2cpp_codegen_object_new
                        (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
    Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4(pTVar10,iVar4,iVar9,(MethodInfo *)0x0)
    ;
    param_1->___marchingSquaresTex_17 = pTVar10;
    pRVar6 = (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 *)
             il2cpp_codegen_object_new
                       (RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849_il2cpp_TypeInfo_var)
    ;
    RenderTexture__ctor_m5D8D36B284951F95A048C6B9ACA24FC7509564FF
              (pRVar6,iVar4,iVar9,0x18,(MethodInfo *)0x0);
    param_1->___coloredMarchingSquaresTex_16 = pRVar6;
    pCVar11 = (Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2 *)
              il2cpp_array_new_specific
                        (Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2_il2cpp_TypeInfo_var
                         ,iVar9 * iVar4);
    pMVar21 = (MethodInfo *)0x0;
    dVar19 = __real_4031000000000000;
    _libm_sse2_pow_precise();
    iVar9 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD((float)dVar19,pMVar21);
    dVar19 = __real_4031000000000000;
    pMVar21 = (MethodInfo *)0x0;
    (param_1->___powers_30).___x_0 = iVar9;
    _libm_sse2_pow_precise();
    iVar9 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD((float)dVar19,pMVar21);
    dVar19 = __real_4031000000000000;
    (param_1->___powers_30).___y_1 = iVar9;
    pMVar21 = (MethodInfo *)0x0;
    _libm_sse2_pow_precise();
    iVar9 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD((float)dVar19,pMVar21);
    dVar19 = __real_4031000000000000;
    (param_1->___powers_30).___z_2 = iVar9;
    pMVar21 = (MethodInfo *)0x0;
    _libm_sse2_pow_precise();
    iVar9 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD((float)dVar19,pMVar21);
    (param_1->___powers_30).___w_3 = iVar9;
    if ((ListPool_1_tCD128B4F0A9C68EC8060798DE601EA2634881DBB_il2cpp_TypeInfo_var->has_cctor != '\0'
        ) && (ListPool_1_tCD128B4F0A9C68EC8060798DE601EA2634881DBB_il2cpp_TypeInfo_var->
              cctor_finished == 0)) {
      il2cpp_runtime_class_init
                (ListPool_1_tCD128B4F0A9C68EC8060798DE601EA2634881DBB_il2cpp_TypeInfo_var);
    }
    pDVar12 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
              ListPool_1_Get_m115ABCD645C890A36F58D2AFB9D56068DDD2CE56_gshared
                        (0x11,
                         ListPool_1_Get_m115ABCD645C890A36F58D2AFB9D56068DDD2CE56_RuntimeMethod_var)
    ;
    iVar9 = 0;
    do {
      local_18.___m_Left_0 = 0.0;
      local_18.___m_Right_1 = 0.0;
      local_18.___m_Top_2 = 0.0;
      local_18.___m_Bottom_3 = 0.0;
      fVar20 = ((float)iVar9 + __real_3f000000) * ___real_3d800000;
      TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
                (&local_18,fVar20,fVar20,fVar20,0.0,(MethodInfo *)0x0);
      CVar5.___g_1 = local_18.___m_Right_1;
      CVar5.___r_0 = local_18.___m_Left_0;
      CVar5.___b_2 = local_18.___m_Top_2;
      CVar5.___a_3 = local_18.___m_Bottom_3;
      OVar13 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
               Color32_op_Implicit_mD17E8145D2D32EF369EFE349C4D32E839F7D7AA4
                         (CVar5,(MethodInfo *)0x0);
      if (pDVar12 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
      goto LAB_10872bfe;
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar12,OVar13,
                 List_1_Add_m97DC82736F0DD1CB475124571831124BBDC57847_RuntimeMethod_var);
      iVar9 = iVar9 + 1;
    } while (iVar9 < 0x10);
    if ((AoBaker_t9129C481C867A370E0057056B761ECEB59BE1C20_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (AoBaker_t9129C481C867A370E0057056B761ECEB59BE1C20_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (AoBaker_t9129C481C867A370E0057056B761ECEB59BE1C20_il2cpp_TypeInfo_var);
    }
    List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
              ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar12,
               *(OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 *)
                ((int)AoBaker_t9129C481C867A370E0057056B761ECEB59BE1C20_il2cpp_TypeInfo_var->
                      static_fields + 0x10),
               List_1_Add_m97DC82736F0DD1CB475124571831124BBDC57847_RuntimeMethod_var);
    if (pDVar12->___entries_1 == (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                ((MethodInfo *)0x0);
    }
    local_38 = 0;
    local_3c = 0;
    local_34 = 0;
    CVar17 = (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0)
             pDVar12->___buckets_0->m_Items[0];
    local_28 = 0;
    local_20 = 0;
    if (0 < iVar8) {
      local_30 = 0;
      CVar16 = CVar17;
      CVar15 = CVar17;
      local_24 = CVar17;
      do {
        uVar14 = (local_30 / iVar4) * iVar4 + local_30;
        if (pCVar11 == (Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2 *)0x0)
        goto LAB_10872bfe;
        if ((uint)pCVar11->_padding_ <= uVar14) {
LAB_10872c03:
          pMVar21 = (MethodInfo *)0x0;
          pEVar18 = il2cpp_codegen_get_index_out_of_range_exception();
                    /* WARNING: Subroutine does not return */
          il2cpp_codegen_raise_exception(pEVar18,pMVar21);
        }
        pCVar11->m_Items[uVar14].field0_0x0 = CVar17;
        if ((uint)pCVar11->_padding_ <= uVar14 + 1) goto LAB_10872c03;
        pCVar11->m_Items[uVar14 + 1].field0_0x0 = CVar16;
        uVar14 = uVar14 + iVar4;
        if (((uint)pCVar11->_padding_ <= uVar14 + 1) ||
           (pCVar11->m_Items[uVar14 + 1].field0_0x0 = CVar15, (uint)pCVar11->_padding_ <= uVar14))
        goto LAB_10872c03;
        pCVar11->m_Items[uVar14].field0_0x0 = local_24;
        local_38 = local_38 + 1;
        if (0x10 < local_38) {
          local_38 = 0;
          local_3c = local_3c + 1;
          if (0x10 < local_3c) {
            local_34 = local_34 + 1;
            local_3c = 0;
            if (0x10 < local_34) {
              local_28 = local_28 + 1;
              local_34 = 0;
              if (0x10 < local_28) break;
              local_24._s_8 =
                   (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0_s_8)
                   List_1_get_Item_m0800F58110ACB0F26B29F2AC7A41A0072D862855_inline
                             ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar12,local_28,
                              List_1_get_Item_m18C2F32A08B3CCA28DBF32123E093F868BD9CB32_RuntimeMethod_var
                             );
            }
            CVar15._s_8 = (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0_s_8)
                          List_1_get_Item_m0800F58110ACB0F26B29F2AC7A41A0072D862855_inline
                                    ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar12,
                                     local_34,
                                     List_1_get_Item_m18C2F32A08B3CCA28DBF32123E093F868BD9CB32_RuntimeMethod_var
                                    );
          }
          CVar16._s_8 = (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0_s_8)
                        List_1_get_Item_m0800F58110ACB0F26B29F2AC7A41A0072D862855_inline
                                  ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar12,
                                   local_3c,
                                   List_1_get_Item_m18C2F32A08B3CCA28DBF32123E093F868BD9CB32_RuntimeMethod_var
                                  );
        }
        CVar17._s_8 = (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0_s_8)
                      List_1_get_Item_m0800F58110ACB0F26B29F2AC7A41A0072D862855_inline
                                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar12,
                                 local_38,
                                 List_1_get_Item_m18C2F32A08B3CCA28DBF32123E093F868BD9CB32_RuntimeMethod_var
                                );
        local_20 = local_20 + 1;
        local_30 = local_30 + 2;
      } while (local_20 < iVar8);
    }
    if (param_1->___marchingSquaresTex_17 !=
        (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)0x0) {
      Texture2D_SetPixels32_m6C2602EBE75F9C70DBC36D0B67EA4C12638518BB
                (param_1->___marchingSquaresTex_17,pCVar11,(MethodInfo *)0x0);
      if (param_1->___marchingSquaresTex_17 !=
          (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)0x0) {
        Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0
                  (param_1->___marchingSquaresTex_17,(MethodInfo *)0x0);
        DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
                  (pDVar12,
                   ListPoolExtension_ReturnToPool_TisColor32_tDB54A78627878A7D2DE42BB028D64306A18E858D_m636CE62F261F949CAA86605302D83F65169ACA78_RuntimeMethod_var
                  );
        pMVar7 = param_1->___marchingSquaresMaterial_12;
        pTVar3 = (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)
                 param_1->___marchingSquaresTex_17;
        pRVar6 = param_1->___coloredMarchingSquaresTex_16;
        if ((Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var->has_cctor !=
             '\0') &&
           (Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var->cctor_finished
            == 0)) {
          il2cpp_runtime_class_init
                    (Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
        }
        Graphics_Blit_m5E0E60EA4A4D351DCC314AB2C49C7DC5B8863D05
                  (pTVar3,pRVar6,pMVar7,(MethodInfo *)0x0);
        AoBaker_Restore_mA751F0B8AB2A8B8DEB528EF2254E53036E98BEA0(param_1,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_10872bfe:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
