// RVA 0x81bc10 | Placemaker.Sandbanker$$OnDrawGizmos
// PDB: Sandbanker_OnDrawGizmos_m8DC97753714F1332A3C9E813E1B55001749B35E9
// Body: [[1081bc10, 1081bcef] [1081bcf6, 1081bd10] [1081bd14, 1081bd49] [1081bd4d, 1081bd6a] [1081bd6e, 1081bda5] [1081bda9, 1081bdc5] [1081bdc9, 1081bf19] [1081bf23, 1081bf3c] [1081bf40, 1081bf7a] [1081bf81, 1081bf9e] [1081bfa5, 1081c045] [1081c04f, 1081c068] [1081c06c, 1081c0a6] [1081c0ad, 1081c0c6] [1081c0cd, 1081c131]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 102c1f90 TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
// 1066da30 Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA
// 10a3e4f0 Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823
// 10a3e840 Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929

void __cdecl
Sandbanker_OnDrawGizmos_m8DC97753714F1332A3C9E813E1B55001749B35E9
          (Sandbanker_t40E4E38CA328AA7AA0BA6530A0D474792DEA22E3 *param_1,MethodInfo *param_2)

{
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *pLVar6;
  List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *pLVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar11;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar12;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar13;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar14;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar15;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 CVar16;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 CVar17;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar18;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar19;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar20;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar21;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar22;
  Sandbanker_t40E4E38CA328AA7AA0BA6530A0D474792DEA22E3 *pSVar23;
  List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *pLVar24;
  uint uVar25;
  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 local_30;
  undefined8 local_20;
  undefined8 local_18;
  float local_10;
  List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *local_c;
  uint local_8;

  pSVar23 = param_1;
  if (DAT_1151f27e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var)
    ;
    DAT_1151f27e = '\x01';
  }
  Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA(1.0,(MethodInfo *)0x0);
  local_30.___m_Left_0 = 0.0;
  local_30.___m_Right_1 = 0.0;
  local_30.___m_Top_2 = 0.0;
  local_30.___m_Bottom_3 = 0.0;
  TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
            (&local_30,1.0,1.0,0.0,0.2,(MethodInfo *)0x0);
  CVar16.___g_1 = local_30.___m_Right_1;
  CVar16.___r_0 = local_30.___m_Left_0;
  CVar16.___b_2 = local_30.___m_Top_2;
  CVar16.___a_3 = local_30.___m_Bottom_3;
  Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(CVar16,(MethodInfo *)0x0);
  local_8 = 0;
  pLVar24 = param_1->___tris_7;
  if (pLVar24 != (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)0x0) {
    param_1 = (Sandbanker_t40E4E38CA328AA7AA0BA6530A0D474792DEA22E3 *)0x18;
    do {
      if (pLVar24->____size_2 <= (int)local_8) {
        local_30.___m_Left_0 = 0.0;
        local_30.___m_Right_1 = 0.0;
        local_30.___m_Top_2 = 0.0;
        local_30.___m_Bottom_3 = 0.0;
        TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
                  (&local_30,1.0,1.0,0.0,1.0,(MethodInfo *)0x0);
        CVar17.___g_1 = local_30.___m_Right_1;
        CVar17.___r_0 = local_30.___m_Left_0;
        CVar17.___b_2 = local_30.___m_Top_2;
        CVar17.___a_3 = local_30.___m_Bottom_3;
        Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(CVar17,(MethodInfo *)0x0);
        pLVar24 = pSVar23->___tris_7;
        uVar25 = 0;
        if (pLVar24 != (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)0x0) {
          param_1 = (Sandbanker_t40E4E38CA328AA7AA0BA6530A0D474792DEA22E3 *)0x10;
          goto LAB_1081bef7;
        }
        break;
      }
      pLVar6 = pSVar23->___verts_6;
      if (pLVar24 == (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)0x0) break;
      if ((uint)pLVar24->____size_2 <= local_8) {
                    /* WARNING: Subroutine does not return */
        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                  ((MethodInfo *)0x0);
      }
      if (pLVar6 == (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)0x0) break;
      uVar25 = *(uint *)((int)pLVar24->____items_1[-1].m_Items + (int)param_1);
      if ((uint)pLVar6->____size_2 <= uVar25) {
                    /* WARNING: Subroutine does not return */
        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                  ((MethodInfo *)0x0);
      }
      pLVar24 = pSVar23->___tris_7;
      pLVar7 = pSVar23->___verts_6;
      pVVar1 = pLVar6->____items_1->m_Items + uVar25;
      local_20._0_4_ = pVVar1->___x_2;
      local_20._4_4_ = pVVar1->___y_3;
      local_c = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)
                pLVar6->____items_1->m_Items[uVar25].___z_4;
      if (pLVar24 == (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)0x0) break;
      if ((uint)pLVar24->____size_2 <= local_8 + 1) {
                    /* WARNING: Subroutine does not return */
        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                  ((MethodInfo *)0x0);
      }
      if (pLVar7 == (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)0x0) break;
      uVar25 = *(uint *)(&pLVar24->____items_1[-1].field_0x14 + (int)param_1);
      if ((uint)pLVar7->____size_2 <= uVar25) {
                    /* WARNING: Subroutine does not return */
        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                  ((MethodInfo *)0x0);
      }
      pLVar24 = pSVar23->___tris_7;
      pLVar6 = pSVar23->___verts_6;
      pVVar1 = pLVar7->____items_1->m_Items + uVar25;
      local_18._0_4_ = pVVar1->___x_2;
      local_18._4_4_ = pVVar1->___y_3;
      fVar8 = pLVar7->____items_1->m_Items[uVar25].___z_4;
      local_10 = fVar8;
      if (pLVar24 == (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)0x0) break;
      if ((uint)pLVar24->____size_2 <= local_8 + 2) {
                    /* WARNING: Subroutine does not return */
        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                  ((MethodInfo *)0x0);
      }
      if (pLVar6 == (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)0x0) break;
      uVar25 = *(uint *)((int)pLVar24->____items_1->m_Items + (int)&param_1[-1].___waterMf_10);
      if ((uint)pLVar6->____size_2 <= uVar25) {
                    /* WARNING: Subroutine does not return */
        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                  ((MethodInfo *)0x0);
      }
      pVVar1 = pLVar6->____items_1->m_Items + uVar25;
      local_30.___m_Top_2 = pVVar1->___x_2;
      local_30.___m_Bottom_3 = pVVar1->___y_3;
      fVar9 = pLVar6->____items_1->m_Items[uVar25].___z_4;
      VVar11.___z_4 = (float)local_c;
      VVar11.___x_2 = (float)(undefined4)local_20;
      VVar11.___y_3 = (float)local_20._4_4_;
      VVar18.___z_4 = fVar8;
      VVar18.___x_2 = (float)(undefined4)local_18;
      VVar18.___y_3 = (float)local_18._4_4_;
      Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(VVar11,VVar18,(MethodInfo *)0x0);
      VVar12.___z_4 = fVar8;
      VVar12.___x_2 = (float)(undefined4)local_18;
      VVar12.___y_3 = (float)local_18._4_4_;
      VVar19.___z_4 = fVar9;
      VVar19.___x_2 = local_30.___m_Top_2;
      VVar19.___y_3 = local_30.___m_Bottom_3;
      Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(VVar12,VVar19,(MethodInfo *)0x0);
      VVar13.___z_4 = fVar9;
      VVar13.___x_2 = local_30.___m_Top_2;
      VVar13.___y_3 = local_30.___m_Bottom_3;
      VVar20.___z_4 = (float)local_c;
      VVar20.___x_2 = (float)(undefined4)local_20;
      VVar20.___y_3 = (float)local_20._4_4_;
      Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(VVar13,VVar20,(MethodInfo *)0x0);
      local_8 = local_8 + 3;
      pLVar24 = pSVar23->___tris_7;
      param_1 = (Sandbanker_t40E4E38CA328AA7AA0BA6530A0D474792DEA22E3 *)&param_1->___master_4;
    } while (pLVar24 != (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)0x0);
  }
  goto LAB_1081c12d;
  while( true ) {
    local_c = pSVar23->___verts_6;
    if (pLVar24 == (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)0x0) break;
    if ((uint)pLVar24->____size_2 <= uVar25) {
                    /* WARNING: Subroutine does not return */
      ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                ((MethodInfo *)0x0);
    }
    if (local_c == (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)0x0) break;
    uVar10 = *(uint *)((int)pLVar24->____items_1->m_Items + (int)&param_1[-1].___waterMf_10);
    if ((uint)local_c->____size_2 <= uVar10) {
                    /* WARNING: Subroutine does not return */
      ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                ((MethodInfo *)0x0);
    }
    pLVar24 = pSVar23->___tris_7;
    pVVar1 = local_c->____items_1->m_Items + uVar10;
    local_30.___m_Top_2 = pVVar1->___x_2;
    local_30.___m_Bottom_3 = pVVar1->___y_3;
    local_10 = local_c->____items_1->m_Items[uVar10].___z_4;
    local_c = pSVar23->___verts_6;
    if (pLVar24 == (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)0x0) break;
    if ((uint)pLVar24->____size_2 <= uVar25 + 1) {
                    /* WARNING: Subroutine does not return */
      ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                ((MethodInfo *)0x0);
    }
    if (local_c == (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)0x0) break;
    uVar10 = *(uint *)((int)&pLVar24->____items_1->_padding_ + (int)param_1);
    if ((uint)local_c->____size_2 <= uVar10) {
                    /* WARNING: Subroutine does not return */
      ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                ((MethodInfo *)0x0);
    }
    pVVar1 = local_c->____items_1->m_Items + uVar10;
    uVar2 = pVVar1->___x_2;
    uVar4 = pVVar1->___y_3;
    VVar21.___y_3 = (float)uVar4;
    VVar21.___x_2 = (float)uVar2;
    VVar14.___z_4 = local_10;
    VVar14.___x_2 = local_30.___m_Top_2;
    VVar14.___y_3 = local_30.___m_Bottom_3;
    VVar21.___z_4 = local_c->____items_1->m_Items[uVar10].___z_4;
    Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(VVar14,VVar21,(MethodInfo *)0x0);
    uVar25 = uVar25 + 6;
    pLVar24 = pSVar23->___tris_7;
    param_1 = (Sandbanker_t40E4E38CA328AA7AA0BA6530A0D474792DEA22E3 *)&param_1->___tris_7;
    if (pLVar24 == (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)0x0) break;
LAB_1081bef7:
    if (pLVar24->____size_2 <= (int)uVar25) {
      local_8 = 3;
      if (pLVar24 != (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)0x0) {
        param_1 = (Sandbanker_t40E4E38CA328AA7AA0BA6530A0D474792DEA22E3 *)0x1c;
        goto LAB_1081c020;
      }
      break;
    }
  }
  goto LAB_1081c12d;
  while( true ) {
    if ((uint)pLVar24->____size_2 <= local_8) {
                    /* WARNING: Subroutine does not return */
      ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                ((MethodInfo *)0x0);
    }
    if (local_c == (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)0x0) break;
    uVar10 = *(uint *)((int)pLVar24->____items_1->m_Items + (int)&param_1[-1].___waterMf_10);
    if ((uint)local_c->____size_2 <= uVar10) {
                    /* WARNING: Subroutine does not return */
      ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                ((MethodInfo *)0x0);
    }
    pLVar24 = pSVar23->___tris_7;
    pVVar1 = local_c->____items_1->m_Items + uVar10;
    local_30.___m_Top_2 = pVVar1->___x_2;
    local_30.___m_Bottom_3 = pVVar1->___y_3;
    local_10 = local_c->____items_1->m_Items[uVar10].___z_4;
    local_c = pSVar23->___verts_6;
    if (pLVar24 == (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)0x0) break;
    if ((uint)pLVar24->____size_2 <= local_8 + 1) {
                    /* WARNING: Subroutine does not return */
      ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                ((MethodInfo *)0x0);
    }
    if (local_c == (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)0x0) break;
    uVar10 = *(uint *)((int)&pLVar24->____items_1->_padding_ + (int)param_1);
    if ((uint)local_c->____size_2 <= uVar10) {
                    /* WARNING: Subroutine does not return */
      ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                ((MethodInfo *)0x0);
    }
    pVVar1 = local_c->____items_1->m_Items + uVar10;
    uVar3 = pVVar1->___x_2;
    uVar5 = pVVar1->___y_3;
    VVar22.___y_3 = (float)uVar5;
    VVar22.___x_2 = (float)uVar3;
    VVar15.___z_4 = local_10;
    VVar15.___x_2 = local_30.___m_Top_2;
    VVar15.___y_3 = local_30.___m_Bottom_3;
    VVar22.___z_4 = local_c->____items_1->m_Items[uVar10].___z_4;
    Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823(VVar15,VVar22,(MethodInfo *)0x0);
    local_8 = uVar25 + 6;
    param_1 = (Sandbanker_t40E4E38CA328AA7AA0BA6530A0D474792DEA22E3 *)&param_1->___tris_7;
    pLVar24 = pSVar23->___tris_7;
    if (pLVar24 == (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)0x0) break;
LAB_1081c020:
    uVar25 = local_8;
    if (pLVar24->____size_2 <= (int)local_8) {
      return;
    }
    local_c = pSVar23->___verts_6;
    if (pLVar24 == (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)0x0) break;
  }
LAB_1081c12d:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
