// RVA 0x871c00 | Placemaker.AoBaker$$BakeAo
// PDB: AoBaker_BakeAo_m1B1A17024F0AA5D608D3A5916A08213525B4CCA9
// Body: [[10871c00, 10872041] [10872048, 10872146]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 1026afc0 Enumerator_get_Current_m219A61A853F50E6015B3FE63741CFDF398F8A52F_gshared
// 102c1f90 TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
// 106685e0 Shader_SetGlobalVector_m241FC10C437094156CA0C6CC299A3F09404CE1F3
// 10674590 Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
// 10872158 FUN_10872158
// 10a36ea0 Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
// 10a37760 Bounds__ctor_m8356472A177F4B22FFCE8911EBC8547A65A07CA3
// 10a37840 Bounds_get_min_mEDCEC21FB04A8E7196EDE841F7BE9042E1908519
// 10a378d0 Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14
// 10a37a50 Bounds_set_extents_m9590B3BB7D59A4C35D9F0E381A20C6A96A4D9D89
// 10a439d0 Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F
// 10a482b0 Mesh_SetTriangles_mF74536E3A39AECF33809A7D23AFF54A1CFC37129
// 10a48560 Mesh_SetUVs_mDDD16F3EC3434233E34F18221FFD47F8AEA7BCCE
// 10a48620 Mesh_SetVertices_m08C90A1665735C09E15E17DE1A8CD9F196762BCD
// 10a48980 Mesh_set_bounds_m9752E145EA6D719B417AA27555DDC2A388AB4E0A
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 10c10fb0 Single_IsNaN_m458FF076EF1944D4D888A585F7C6C49DA4730599

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
AoBaker_BakeAo_m1B1A17024F0AA5D608D3A5916A08213525B4CCA9
          (AoBaker_t9129C481C867A370E0057056B761ECEB59BE1C20 *param_1,MethodInfo *param_2)

{
  Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *pMVar1;
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar2;
  Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 BVar3;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar5;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar6;
  AoBaker_t9129C481C867A370E0057056B761ECEB59BE1C20 *pAVar7;
  undefined1 *puVar8;
  bool bVar9;
  ValueTuple_3_tEF9008762923C50FBA1F5E13EFAE26235274202D *pVVar10;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar11;
  int iVar12;
  undefined1 local_8c [28];
  undefined4 uStack_70;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 TStack_6c;
  ValueTuple_3_tEF9008762923C50FBA1F5E13EFAE26235274202D local_5c;
  undefined8 local_50;
  float local_48;
  undefined8 local_44;
  Il2CppObject *local_3c;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_38;
  List_1_t3B442DC7BE6A015A52219BC7596D07391CD69EFD *local_24;
  Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *local_20;
  Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *local_1c;
  Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *local_18;
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  pAVar7 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &__ehhandler__AoBaker_BakeAo_m1B1A17024F0AA5D608D3A5916A08213525B4CCA9;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffff68;
  ExceptionList = &pvStack_10;
  puVar8 = &stack0xffffff68;
  if (DAT_1151f593 == '\0') {
    ExceptionList = &pvStack_10;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&AoBaker_t9129C481C867A370E0057056B761ECEB59BE1C20_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m5CA7E334EC7E959BF4669CB2973F6F4BD03A20F9_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m9FC90ABB14A8F105A8ACA9A8F0DE7F93AA1CBC38_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral93ACE5FADE78548488F3317AEE83D808CDD939AD);
    DAT_1151f593 = '\x01';
    puVar8 = local_14;
  }
  local_14 = puVar8;
  param_1 = (AoBaker_t9129C481C867A370E0057056B761ECEB59BE1C20 *)((uint)param_1 & 0xffffff);
  local_8c._16_4_ = (Il2CppObject *)0x0;
  local_8c._20_4_ = (Il2CppObject *)0x0;
  local_8c._0_4_ = (LinkedList_1_t555E05F2E497A99E81B02BC6149DEFDB20186689 *)0x0;
  local_8c._4_4_ = (LinkedListNode_1_t31224B82477217EC2257F5D5D3CD9B16431A66EC *)0x0;
  local_8c._8_4_ = 0.0;
  local_8c._12_4_ = (Il2CppObject *)0x0;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)((int)&param_1 + 3),
             (MethodInfo *)_stringLiteral93ACE5FADE78548488F3317AEE83D808CDD939AD);
  local_8 = 0;
  if ((pAVar7->___master_5 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
     (pGVar2 = pAVar7->___master_5->___graph_7,
     pGVar2 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) {
    local_8c._0_4_ = (pGVar2->___shadowMeshBounds_22).___m_Center_0.___x_2;
    local_8c._4_4_ = (pGVar2->___shadowMeshBounds_22).___m_Center_0.___y_3;
    local_8c._8_4_ = (pGVar2->___shadowMeshBounds_22).___m_Center_0.___z_4;
    local_8c._12_4_ = (pGVar2->___shadowMeshBounds_22).___m_Extents_1.___x_2;
    iVar12 = pGVar2->___boundsHeight_27;
    local_8c._16_4_ = (pGVar2->___shadowMeshBounds_22).___m_Extents_1.___y_3;
    local_8c._20_4_ = (pGVar2->___shadowMeshBounds_22).___m_Extents_1.___z_4;
    pVVar10 = Enumerator_get_Current_m219A61A853F50E6015B3FE63741CFDF398F8A52F_gshared
                        (&local_5c,(Enumerator_tDC59471D5148D9341C44E818E45BF04091D98514 *)local_8c,
                         (MethodInfo *)0x0);
    local_44._0_4_ = (float)pVVar10->___Item1_0;
    local_44._4_4_ = (float)pVVar10->___Item2_1;
    local_3c = pVVar10->___Item3_2;
    local_50._0_4_ = pVVar10->___Item1_0;
    local_50._4_4_ = pVVar10->___Item2_1;
    local_48 = (float)local_3c + __real_40000000;
    VVar5.___y_3 = local_44._4_4_ + ___real_00000000;
    VVar5.___x_2 = (float)local_44 + __real_40000000;
    VVar5.___z_4 = local_48;
    local_38._4_8_ = local_44;
    local_38.___m_Bottom_3 = (float)local_3c;
    Bounds_set_extents_m9590B3BB7D59A4C35D9F0E381A20C6A96A4D9D89
              ((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)local_8c,VVar5,(MethodInfo *)0x0)
    ;
    pVVar11 = Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_5c,
                         (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)local_8c,
                         (MethodInfo *)0x0);
    local_1c = (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)pVVar11->___x_2;
    pVVar11 = Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_5c,
                         (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)local_8c,
                         (MethodInfo *)0x0);
    pMVar1 = __real_7f7fffff;
    local_50._0_4_ = pVVar11->___x_2;
    local_50._4_4_ = pVVar11->___y_3;
    local_48 = pVVar11->___z_4;
    (pAVar7->___size_18).___x_0 = (float)local_1c;
    (pAVar7->___size_18).___y_1 = local_48;
    pAVar7->___totalCount_22 = iVar12 + 1;
    for (iVar12 = 1; local_1c = pMVar1, iVar12 <= pAVar7->___totalCount_22; iVar12 = iVar12 + 1) {
      local_18 = (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)(float)iVar12;
      local_24 = (List_1_t3B442DC7BE6A015A52219BC7596D07391CD69EFD *)
                 Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F
                           ((float)pAVar7->___totalCount_22 / (float)local_18,(MethodInfo *)0x0);
      local_18 = (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)
                 ((float)local_18 * (pAVar7->___size_18).___x_0);
      local_20 = (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)
                 ((float)(int)local_24 * (pAVar7->___size_18).___y_1);
      bVar9 = Single_IsNaN_m458FF076EF1944D4D888A585F7C6C49DA4730599
                        ((float)local_20,(MethodInfo *)0x0);
      if ((bVar9) || (pMVar1 = local_20, (float)local_20 < (float)local_18)) {
        pMVar1 = local_18;
      }
      if ((float)local_1c <= (float)pMVar1) break;
      pAVar7->___countX_20 = iVar12;
      pAVar7->___countY_21 = (int)local_24;
    }
    local_24 = (List_1_t3B442DC7BE6A015A52219BC7596D07391CD69EFD *)
               ((pAVar7->___size_18).___x_0 / (float)local_1c);
    local_20 = (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)
               ((pAVar7->___size_18).___y_1 / (float)local_1c);
    (pAVar7->___size_18).___x_0 = (float)local_24;
    (pAVar7->___size_18).___y_1 = (float)local_20;
    pVVar11 = Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_5c,
                         (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)local_8c,
                         (MethodInfo *)0x0);
    local_38.___m_Left_0 = 0.0;
    local_38.___m_Right_1 = 0.0;
    local_38.___m_Top_2 = 0.0;
    local_38.___m_Bottom_3 = 0.0;
    TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
              (&local_38,(float)local_24,(float)local_20,(float)local_24 / pVVar11->___x_2,
               (float)pAVar7->___countX_20,(MethodInfo *)0x0);
    (pAVar7->___texParams_19).___x_1 = local_38.___m_Left_0;
    (pAVar7->___texParams_19).___y_2 = local_38.___m_Right_1;
    (pAVar7->___texParams_19).___z_3 = local_38.___m_Top_2;
    (pAVar7->___texParams_19).___w_4 = local_38.___m_Bottom_3;
    if ((AoBaker_t9129C481C867A370E0057056B761ECEB59BE1C20_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (AoBaker_t9129C481C867A370E0057056B761ECEB59BE1C20_il2cpp_TypeInfo_var->cctor_finished ==
           0)) {
      il2cpp_runtime_class_init
                (AoBaker_t9129C481C867A370E0057056B761ECEB59BE1C20_il2cpp_TypeInfo_var);
    }
    Shader_SetGlobalVector_m241FC10C437094156CA0C6CC299A3F09404CE1F3
              (*(int *)((int)AoBaker_t9129C481C867A370E0057056B761ECEB59BE1C20_il2cpp_TypeInfo_var->
                             static_fields + 0x18),pAVar7->___texParams_19,(MethodInfo *)0x0);
    iVar12 = *(int *)((int)AoBaker_t9129C481C867A370E0057056B761ECEB59BE1C20_il2cpp_TypeInfo_var->
                           static_fields + 0x1c);
    pVVar11 = Bounds_get_min_mEDCEC21FB04A8E7196EDE841F7BE9042E1908519
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_5c,
                         (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)local_8c,
                         (MethodInfo *)0x0);
    local_20 = (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)pVVar11->___x_2;
    pVVar11 = Bounds_get_min_mEDCEC21FB04A8E7196EDE841F7BE9042E1908519
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_5c,
                         (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)local_8c,
                         (MethodInfo *)0x0);
    local_44._0_4_ = pVVar11->___x_2;
    local_44._4_4_ = pVVar11->___y_3;
    local_3c = (Il2CppObject *)pVVar11->___z_4;
    pVVar11 = Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_5c,
                         (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)local_8c,
                         (MethodInfo *)0x0);
    local_24 = (List_1_t3B442DC7BE6A015A52219BC7596D07391CD69EFD *)pVVar11->___x_2;
    pVVar11 = Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_5c,
                         (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)local_8c,
                         (MethodInfo *)0x0);
    local_50._0_4_ = pVVar11->___x_2;
    local_50._4_4_ = pVVar11->___y_3;
    local_48 = pVVar11->___z_4;
    TStack_6c.___m_Left_0 = 0.0;
    TStack_6c.___m_Right_1 = 0.0;
    TStack_6c.___m_Top_2 = 0.0;
    TStack_6c.___m_Bottom_3 = 0.0;
    TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
              (&TStack_6c,(float)local_20,(float)local_3c,(float)local_24,local_48,(MethodInfo *)0x0
              );
    VVar4.___y_2 = TStack_6c.___m_Right_1;
    VVar4.___x_1 = TStack_6c.___m_Left_0;
    VVar4.___z_3 = TStack_6c.___m_Top_2;
    VVar4.___w_4 = TStack_6c.___m_Bottom_3;
    Shader_SetGlobalVector_m241FC10C437094156CA0C6CC299A3F09404CE1F3(iVar12,VVar4,(MethodInfo *)0x0)
    ;
    if (pAVar7->___shadowMeshes_6 != (List_1_t3B442DC7BE6A015A52219BC7596D07391CD69EFD *)0x0) {
      local_1c = (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)
                 pAVar7->___shadowMeshes_6->____size_2;
      while (local_1c = (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)((int)local_1c - 1),
            -1 < (int)local_1c) {
        local_24 = pAVar7->___shadowMeshes_6;
        if (local_24 == (List_1_t3B442DC7BE6A015A52219BC7596D07391CD69EFD *)0x0) goto LAB_10872182;
        if ((uint)local_24->____size_2 <= local_1c) {
                    /* WARNING: Subroutine does not return */
          ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                    ((MethodInfo *)0x0);
        }
        iVar12 = *(int *)(local_24->____items_1 + (int)local_1c * 4 + 0x10);
        if (iVar12 == 0) goto LAB_10872182;
        if (*(char *)(iVar12 + 0x18) != '\0') {
          local_18 = *(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 **)(iVar12 + 0x1c);
          if (local_18 == (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)0x0) goto LAB_10872182;
          Mesh_SetVertices_m08C90A1665735C09E15E17DE1A8CD9F196762BCD
                    (local_18,*(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 **)(iVar12 + 0xc),
                     (MethodInfo *)0x0);
          Mesh_SetUVs_mDDD16F3EC3434233E34F18221FFD47F8AEA7BCCE
                    (local_18,0,
                     *(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 **)(iVar12 + 0x10),
                     (MethodInfo *)0x0);
          Mesh_SetTriangles_mF74536E3A39AECF33809A7D23AFF54A1CFC37129
                    (local_18,*(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 **)(iVar12 + 0x14),
                     0,(MethodInfo *)0x0);
          pVVar11 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                              ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_5c,
                               (MethodInfo *)0x0);
          local_48 = 3.4028235e+38;
          TStack_6c.___m_Top_2 = 0.0;
          TStack_6c.___m_Bottom_3 = 0.0;
          local_8c._24_4_ = 0;
          uStack_70 = 0;
          TStack_6c.___m_Left_0 = 0.0;
          TStack_6c.___m_Right_1 = 0.0;
          VVar6.___y_3 = (float)__real_7f7fffff;
          VVar6.___x_2 = (float)__real_7f7fffff;
          VVar6.___z_4 = 3.4028235e+38;
          Bounds__ctor_m8356472A177F4B22FFCE8911EBC8547A65A07CA3
                    ((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(local_8c + 0x18),*pVVar11,
                     VVar6,(MethodInfo *)0x0);
          BVar3.___m_Center_0.___y_3 = (float)uStack_70;
          BVar3.___m_Center_0.___x_2 = (float)local_8c._24_4_;
          BVar3.___m_Center_0.___z_4 = TStack_6c.___m_Left_0;
          BVar3.___m_Extents_1.___x_2 = TStack_6c.___m_Right_1;
          BVar3.___m_Extents_1.___y_3 = TStack_6c.___m_Top_2;
          BVar3.___m_Extents_1.___z_4 = TStack_6c.___m_Bottom_3;
          Mesh_set_bounds_m9752E145EA6D719B417AA27555DDC2A388AB4E0A
                    (local_18,BVar3,(MethodInfo *)0x0);
          *(undefined1 *)(iVar12 + 0x18) = 0;
        }
      }
      if ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)pAVar7->___cam_23 !=
          (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)0x0) {
        Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
                  ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)pAVar7->___cam_23,true,
                   (MethodInfo *)0x0);
        FUN_10872158();
        return;
      }
    }
  }
LAB_10872182:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
