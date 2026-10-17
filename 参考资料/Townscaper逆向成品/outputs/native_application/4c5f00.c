// RVA 0x4c5f00 | Placemaker.DrawPlane$$OnDrawGizmos
// PDB: DrawPlane_OnDrawGizmos_m1BE35F380723B3AD8CF4732807A0D0D24FE09D29
// Body: [[104c5f00, 104c6015] [104c6019, 104c66bf]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d1320 Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline
// 1040e020 HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
// 10674190 Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
// 10a398b0 Color_HSVToRGB_m8B61783B65A70BC889424B9A64FD40D48E735FEF
// 10a39ea0 Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E
// 10a3e4f0 Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823
// 10a3e840 Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929

void __cdecl
DrawPlane_OnDrawGizmos_m1BE35F380723B3AD8CF4732807A0D0D24FE09D29
          (DrawPlane_t25E93171CC5BAAB4443AC73B5628F14D1F786176 *param_1,MethodInfo *param_2)

{
  uchar *puVar1;
  undefined4 *puVar2;
  float *pfVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  List_1_t362E1E6F6B0FB340C800DA5E75E4A1F3A5F2393C *pLVar12;
  QuadU5BU5D_t872FFC7C4380637473FAED13FE43DDF442E04221 *pQVar13;
  float fVar14;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar15;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar16;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar17;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar18;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar19;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar20;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar21;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar22;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar23;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *pCVar24;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *pfVar25;
  undefined8 *extraout_EAX;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *extraout_EAX_00;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar26;
  undefined8 *extraout_EAX_01;
  undefined8 *extraout_EAX_02;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *extraout_EAX_03;
  undefined8 *extraout_EAX_04;
  undefined8 *extraout_EAX_05;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *extraout_EAX_06;
  undefined8 *extraout_EAX_07;
  undefined8 *extraout_EAX_08;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *extraout_EAX_09;
  undefined8 *extraout_EAX_10;
  undefined8 *extraout_EAX_11;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *extraout_EAX_12;
  int iVar27;
  float fVar28;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 local_2d8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_2c8;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_2b8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_2a8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_298;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_288;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_278;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_268;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_258;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_248;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_238;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_228;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_218;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_208;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_1f8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_1e8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_1d8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_1c8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_1b8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_1a8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_198;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_188;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_178;
  undefined4 local_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float local_118;
  float local_108;
  undefined8 local_fc;
  float local_f4;
  undefined8 local_f0;
  undefined8 local_e4;
  float local_d0;
  undefined8 local_c4;
  float local_bc;
  undefined8 local_b8;
  undefined8 local_ac;
  float local_a0;
  float local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 local_60;
  undefined8 local_48;
  int local_40;
  undefined8 local_3c;
  float local_34;
  undefined8 local_30;
  float local_28;
  undefined8 local_24;
  float local_1c;
  float local_18;
  uint local_14;

  if (DAT_1151d13a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mAC12695B2E67B38A74D7993943D4CC0160E83EC4_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mFD0D2FD320135957299B89379B9A2829FB8E7D09_RuntimeMethod_var)
    ;
    DAT_1151d13a = '\x01';
  }
  pCVar24 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(&local_60,(MethodInfo *)0x0);
  Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(*pCVar24,(MethodInfo *)0x0);
  if (param_1->___nodes_6 != (List_1_t362E1E6F6B0FB340C800DA5E75E4A1F3A5F2393C *)0x0) {
    local_14 = param_1->___nodes_6->____size_2 - 1;
    if (-1 < (int)local_14) {
      iVar27 = local_14 * 0x44;
      do {
        local_40 = iVar27;
        if (param_1->___nodes_6 == (List_1_t362E1E6F6B0FB340C800DA5E75E4A1F3A5F2393C *)0x0)
        goto LAB_104c66bb;
        pCVar24 = Color_HSVToRGB_m8B61783B65A70BC889424B9A64FD40D48E735FEF
                            (&local_2d8,
                             (float)(int)local_14 / (float)param_1->___nodes_6->____size_2,1.0,1.0,
                             (MethodInfo *)0x0);
        Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(*pCVar24,(MethodInfo *)0x0);
        pLVar12 = param_1->___nodes_6;
        if (pLVar12 == (List_1_t362E1E6F6B0FB340C800DA5E75E4A1F3A5F2393C *)0x0) goto LAB_104c66bb;
        if ((uint)pLVar12->____size_2 <= local_14) {
                    /* WARNING: Subroutine does not return */
          ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                    ((MethodInfo *)0x0);
        }
        pQVar13 = pLVar12->____items_1;
        puVar1 = &pQVar13->m_Items[0].___quadIndex_0 + iVar27;
        local_168 = *(undefined4 *)puVar1;
        iStack_164 = ((int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 *)(puVar1 + 4))->___x_0;
        iStack_160 = *(int *)(puVar1 + 8);
        iStack_15c = ((int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 *)(puVar1 + 0xc))->___x_0;
        puVar2 = (undefined4 *)((int)&pQVar13->m_Items[0].___v3_4.___y_1 + iVar27);
        local_148 = *puVar2;
        fStack_144 = (float)puVar2[1];
        fStack_140 = (float)puVar2[2];
        fStack_13c = (float)puVar2[3];
        puVar2 = (undefined4 *)((int)&pQVar13->m_Items[0].___v1_2.___y_1 + iVar27);
        local_158 = *puVar2;
        uStack_154 = puVar2[1];
        uStack_150 = puVar2[2];
        uStack_14c = puVar2[3];
        pfVar3 = (float *)((int)&pQVar13->m_Items[0].___p1_6.___y_1 + iVar27);
        local_138 = *pfVar3;
        fStack_134 = pfVar3[1];
        fStack_130 = pfVar3[2];
        fStack_12c = pfVar3[3];
        local_128 = *(float *)((int)&pQVar13->m_Items[0].___p3_8.___y_1 + iVar27);
        local_70 = fStack_144;
        local_6c = fStack_140;
        if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor !=
             '\0') &&
           (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished
            == 0)) {
          il2cpp_runtime_class_init
                    (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
        }
        fVar20.___y_1 = local_6c;
        fVar20.___x_0 = local_70;
        pfVar25 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                            (&local_218,fVar20,0.0,(MethodInfo *)0x0);
        local_88._0_4_ = pfVar25->___x_0;
        local_88._4_4_ = pfVar25->___y_1;
        fVar28 = pfVar25->___z_2;
        local_a0 = fStack_13c;
        local_9c = local_138;
        fVar21.___y_1 = local_138;
        fVar21.___x_0 = fStack_13c;
        local_24 = local_88;
        local_1c = fVar28;
        pfVar25 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                            (&local_2b8,fVar21,0.0,(MethodInfo *)0x0);
        local_90._0_4_ = pfVar25->___x_0;
        local_90._4_4_ = pfVar25->___y_1;
        fVar14 = pfVar25->___z_2;
        local_78 = fStack_134;
        local_74 = fStack_130;
        fVar22.___y_1 = fStack_130;
        fVar22.___x_0 = fStack_134;
        local_3c = local_90;
        local_34 = fVar14;
        pfVar25 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                            (&local_178,fVar22,0.0,(MethodInfo *)0x0);
        local_98._0_4_ = pfVar25->___x_0;
        local_98._4_4_ = pfVar25->___y_1;
        local_68 = pfVar25->___z_2;
        local_80 = fStack_12c;
        local_7c = local_128;
        fVar23.___y_1 = local_128;
        fVar23.___x_0 = fStack_12c;
        local_30 = local_98;
        local_28 = local_68;
        pfVar25 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                            (&local_188,fVar23,0.0,(MethodInfo *)0x0);
        local_ac._0_4_ = pfVar25->___x_0;
        local_ac._4_4_ = pfVar25->___y_1;
        local_bc = pfVar25->___z_2;
        local_c4._0_4_ = pfVar25->___x_0;
        local_c4._4_4_ = pfVar25->___y_1;
        local_60.___r_0 =
             ((float)local_24 + (float)local_3c + (float)local_30 + (float)(undefined4)local_ac) *
             __real_3e800000;
        local_60.___g_1 = 0.0;
        local_60.___b_2 = 0.0;
        local_60.___a_3 = 0.0;
        local_64 = (local_3c._4_4_ + local_24._4_4_ + local_30._4_4_ + (float)local_c4._4_4_) *
                   __real_3e800000;
        local_d0 = (local_34 + local_1c + local_28 + local_bc) * __real_3e800000;
        local_b8 = local_c4;
        local_48 = local_ac;
        local_18 = local_bc;
        Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                  (&local_198,(float)local_88,(float)((ulonglong)local_88 >> 0x20),fVar28,
                   (MethodInfo *)0x0);
        local_60.___b_2 = local_60.___g_1;
        local_88 = *extraout_EAX;
        fVar28 = *(float *)(extraout_EAX + 1);
        local_60.___g_1 = local_64;
        local_60.___a_3 = 0.0;
        Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                  (&local_1a8,local_60.___r_0,local_64,local_d0,(MethodInfo *)0x0);
        VVar15.___z_4 = fVar28;
        VVar15.___x_2 = (float)(undefined4)local_88;
        VVar15.___y_3 = (float)local_88._4_4_;
        pVVar26 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline
                            (&local_1b8,VVar15,*extraout_EAX_00,0.1,(MethodInfo *)0x0);
        uVar4 = pVVar26->___x_2;
        uVar8 = pVVar26->___y_3;
        Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                  (&local_1c8,(float)uVar4,(float)uVar8,pVVar26->___z_4,(MethodInfo *)0x0);
        local_24 = *extraout_EAX_01;
        local_1c = *(float *)(extraout_EAX_01 + 1);
        Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                  (&local_1d8,(float)local_90,(float)((ulonglong)local_90 >> 0x20),fVar14,
                   (MethodInfo *)0x0);
        fVar14 = local_d0;
        local_90 = *extraout_EAX_02;
        fVar28 = *(float *)(extraout_EAX_02 + 1);
        Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                  (&local_1e8,local_60.___r_0,local_60.___g_1,local_d0,(MethodInfo *)0x0);
        VVar16.___z_4 = fVar28;
        VVar16.___x_2 = (float)(undefined4)local_90;
        VVar16.___y_3 = (float)local_90._4_4_;
        pVVar26 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline
                            (&local_1f8,VVar16,*extraout_EAX_03,0.1,(MethodInfo *)0x0);
        uVar5 = pVVar26->___x_2;
        uVar9 = pVVar26->___y_3;
        Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                  (&local_208,(float)uVar5,(float)uVar9,pVVar26->___z_4,(MethodInfo *)0x0);
        local_3c = *extraout_EAX_04;
        local_34 = *(float *)(extraout_EAX_04 + 1);
        Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                  (&local_278,(float)local_98,(float)((ulonglong)local_98 >> 0x20),local_68,
                   (MethodInfo *)0x0);
        local_98 = *extraout_EAX_05;
        fVar28 = *(float *)(extraout_EAX_05 + 1);
        Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                  (&local_228,local_60.___r_0,local_60.___g_1,fVar14,(MethodInfo *)0x0);
        VVar17.___z_4 = fVar28;
        VVar17.___x_2 = (float)(undefined4)local_98;
        VVar17.___y_3 = (float)local_98._4_4_;
        pVVar26 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline
                            (&local_238,VVar17,*extraout_EAX_06,0.1,(MethodInfo *)0x0);
        uVar6 = pVVar26->___x_2;
        uVar10 = pVVar26->___y_3;
        Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                  (&local_248,(float)uVar6,(float)uVar10,pVVar26->___z_4,(MethodInfo *)0x0);
        local_30 = *extraout_EAX_07;
        local_28 = *(float *)(extraout_EAX_07 + 1);
        Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                  (&local_258,(float)local_48,(float)((ulonglong)local_48 >> 0x20),local_18,
                   (MethodInfo *)0x0);
        local_48 = *extraout_EAX_08;
        fVar28 = *(float *)(extraout_EAX_08 + 1);
        Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                  (&local_268,local_60.___r_0,local_60.___g_1,fVar14,(MethodInfo *)0x0);
        VVar18.___z_4 = fVar28;
        VVar18.___x_2 = (float)(undefined4)local_48;
        VVar18.___y_3 = (float)local_48._4_4_;
        pVVar26 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline
                            (&local_2c8,VVar18,*extraout_EAX_09,0.1,(MethodInfo *)0x0);
        uVar7 = pVVar26->___x_2;
        uVar11 = pVVar26->___y_3;
        Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                  (&local_288,(float)uVar7,(float)uVar11,pVVar26->___z_4,(MethodInfo *)0x0);
        local_e4 = *extraout_EAX_10;
        local_f4 = *(float *)(extraout_EAX_10 + 1);
        local_fc = *extraout_EAX_10;
        local_f0._4_4_ = (float)((ulonglong)local_e4 >> 0x20);
        fVar28 = local_24._4_4_ + local_f0._4_4_;
        local_108 = (local_1c + local_f4) * __real_3f000000;
        local_60.___r_0 = ((float)local_30 + (float)local_3c) * __real_3f000000;
        local_60.___g_1 = 0.0;
        local_60.___b_2 = 0.0;
        local_60.___a_3 = 0.0;
        local_18 = (local_30._4_4_ + local_3c._4_4_) * __real_3f000000;
        local_118 = (local_28 + local_34) * __real_3f000000;
        local_f0 = local_e4;
        Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                  (&local_298,((float)local_24 + (float)local_e4) * __real_3f000000,
                   fVar28 * __real_3f000000,local_108,(MethodInfo *)0x0);
        local_48 = *extraout_EAX_11;
        fVar28 = *(float *)(extraout_EAX_11 + 1);
        Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                  (&local_2a8,local_60.___r_0,local_18,local_118,(MethodInfo *)0x0);
        VVar19.___z_4 = fVar28;
        VVar19.___x_2 = (float)(undefined4)local_48;
        VVar19.___y_3 = (float)local_48._4_4_;
        Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823
                  (VVar19,*extraout_EAX_12,(MethodInfo *)0x0);
        local_14 = local_14 - 1;
        iVar27 = local_40 + -0x44;
      } while (-1 < (int)local_14);
    }
    return;
  }
LAB_104c66bb:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
