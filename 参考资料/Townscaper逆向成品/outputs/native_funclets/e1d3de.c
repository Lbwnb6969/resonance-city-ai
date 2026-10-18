// RVA 0xe1d3de | Recovered.function.called_by_e1bbc0
// PDB: FUN_10e1d3de
// Body: [[10e1d3de, 10e1dbde]]
// Direct callees:
// 10068ec0 List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
// 10068f50 List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
// 101280f0 il2cpp_runtime_class_init
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 10224ac0 Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
// 10267d60 Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared
// 102c1f90 TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
// 1040e020 HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
// 1040f9e0 HexPatch_get_done_m318F4B36451CFF8C55C9C29EFC9EC174DE2F1676
// 10674190 Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
// 10a3e4f0 Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823
// 10a3e840 Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F
// 10a3e8a0 Gizmos_set_matrix_m635EE6CFFB53AC66FD134F82BEA90D1EAAAD5D5C
// 10a45eb0 Matrix4x4_get_identity_mC91289718DDD3DDBE0A10551BDA59A446414A596
// 10e13c00 GridGenerator_HexToPlane_mF11F050E9406D3B932009283C35FF59569385C45
// 10e1dbf9 FUN_10e1dbf9
// 11032ae0 List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared

void FUN_10e1d3de(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *pLVar6;
  float fVar7;
  Il2CppObject *pIVar8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar9;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar10;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar11;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar12;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar13;
  MethodInfo *pMVar14;
  bool bVar15;
  uchar uVar16;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *pMVar17;
  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *pEVar18;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *pfVar19;
  float fVar20;
  undefined8 *extraout_EAX;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *extraout_EAX_00;
  undefined8 *extraout_EAX_01;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *extraout_EAX_02;
  undefined8 *extraout_EAX_03;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *extraout_EAX_04;
  undefined8 *extraout_EAX_05;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *extraout_EAX_06;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int iVar21;
  int unaff_EDI;
  List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *pLVar22;
  undefined8 uVar23;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar24;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar25;

  *(int *)(unaff_EBP + -0x40) = unaff_EDI;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)(unaff_EBP + -0x2e4),
             Enumerator_Dispose_m0D4815060AC903CE2A779C5E6E4893549C46D065_RuntimeMethod_var);
  if (*(Exception_t **)(unaff_EBP + -0x8c) != (Exception_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(*(Exception_t **)(unaff_EBP + -0x8c),(MethodInfo *)0x0);
  }
  if ((unaff_EDI != 0) && (*(int *)(unaff_EBP + -500 + unaff_EDI * 4) == 0x47a)) {
    *(int *)(unaff_EBP + -0x40) = unaff_EDI + -1;
  }
  pMVar17 = Matrix4x4_get_identity_mC91289718DDD3DDBE0A10551BDA59A446414A596
                      ((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(unaff_EBP + -0x3a8),
                       (MethodInfo *)0x0);
  Gizmos_set_matrix_m635EE6CFFB53AC66FD134F82BEA90D1EAAAD5D5C(*pMVar17,(MethodInfo *)0x0);
  if (*(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 **)(unaff_ESI + 0x18) !=
      (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) {
    pEVar18 = List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared
                        ((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)
                         (unaff_EBP + -0x178),
                         *(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 **)(unaff_ESI + 0x18),
                         List_1_GetEnumerator_m76EEACE1D91A088E4499D8E07A48DA832068CBEB_RuntimeMethod_var
                        );
    iVar21 = pEVar18->___index_1;
    iVar5 = pEVar18->___version_2;
    pIVar8 = pEVar18->___current_3;
    *(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 **)(unaff_EBP + -0x240) = pEVar18->___list_0;
    *(int *)(unaff_EBP + -0x23c) = iVar21;
    *(int *)(unaff_EBP + -0x238) = iVar5;
    *(Il2CppObject **)(unaff_EBP + -0x234) = pIVar8;
    *(undefined4 *)(unaff_EBP + -4) = 2;
    while( true ) {
      do {
        do {
          bVar15 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared
                             ((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)
                              (unaff_EBP + -0x240),
                              Enumerator_MoveNext_mEFAA469356EA0ECAAF15CFBBB274DB1412855033_RuntimeMethod_var
                             );
          if (!bVar15) {
            *(undefined4 *)(unaff_EBP + -0x1f0 + *(int *)(unaff_EBP + -0x40) * 4) = 0x672;
            FUN_10e1dbf9();
            return;
          }
          iVar21 = *(int *)(unaff_EBP + -0x234);
          *(int *)(unaff_EBP + -0x2c) = iVar21;
          if (iVar21 == 0) goto LAB_10e1de2d;
          fVar20 = __real_3d4ccccd;
          if (*(char *)(iVar21 + 0x14) != '\0') {
            fVar20 = __real_3dcccccd;
          }
          *(undefined4 *)(unaff_EBP + -0x288) = 0;
          *(undefined4 *)(unaff_EBP + -0x284) = 0;
          *(undefined4 *)(unaff_EBP + -0x280) = 0;
          *(undefined4 *)(unaff_EBP + -0x27c) = 0;
          TMP_Offset__ctor_m015A6148C7CD342FAF43B7D165DD2C36E06019F4
                    ((TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 *)(unaff_EBP + -0x288),
                     0.0,0.0,0.0,fVar20,(MethodInfo *)0x0);
          Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F
                    (*(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)(unaff_EBP + -0x288),
                     (MethodInfo *)0x0);
          if (*(Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 **)(unaff_ESI + 0x24) ==
              (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0) goto LAB_10e1de2d;
          bVar15 = Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
                             (*(Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 **)
                               (unaff_ESI + 0x24),
                              *(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 *)(iVar21 + 0xc),
                              (Il2CppObject **)(unaff_EBP + -0xe4),
                              Dictionary_2_TryGetValue_mC63137D5FA2A69BCC84781B1FC7639F5406175F7_RuntimeMethod_var
                             );
        } while (!bVar15);
        if (*(HexPatch_t441C0D4878B2BC34A093EB0359C723F5DFD697C5 **)(unaff_EBP + -0xe4) ==
            (HexPatch_t441C0D4878B2BC34A093EB0359C723F5DFD697C5 *)0x0) goto LAB_10e1de2d;
        bVar15 = HexPatch_get_done_m318F4B36451CFF8C55C9C29EFC9EC174DE2F1676
                           (*(HexPatch_t441C0D4878B2BC34A093EB0359C723F5DFD697C5 **)
                             (unaff_EBP + -0xe4),(MethodInfo *)0x0);
      } while (!bVar15);
      iVar21 = *(int *)(iVar21 + 0x1c);
      *(int *)(unaff_EBP + -0x78) = iVar21;
      if (iVar21 == 0) break;
      iVar5 = *(int *)(unaff_EBP + -0xe4);
      if ((iVar5 == 0) || (*(int *)(iVar5 + 0x18) == 0)) break;
      if (*(int *)(iVar21 + 0xc) == *(int *)(*(int *)(iVar5 + 0x18) + 0xc)) {
        pLVar22 = *(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF **)(iVar5 + 0x14);
        *(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF **)(unaff_EBP + -0x74) = pLVar22;
        if (*(byte *)(*(int *)(unaff_EBP + -0x2c) + 0x18) < 4) {
          iVar13 = *(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 *)
                    (*(int *)(unaff_EBP + -0x2c) + 0xc);
          if ((GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->
               has_cctor != '\0') &&
             (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->
              cctor_finished == 0)) {
            il2cpp_runtime_class_init
                      (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var);
          }
          fVar24 = GridGenerator_HexToPlane_mF11F050E9406D3B932009283C35FF59569385C45
                             (iVar13,(MethodInfo *)0x0);
          if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
              cctor_finished == 0)) {
            il2cpp_runtime_class_init
                      (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
          }
          pfVar19 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                              ((float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *)
                               (unaff_EBP + -0x178),fVar24,0.0,(MethodInfo *)0x0);
          pLVar22 = *(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF **)(unaff_EBP + -0x74);
          uVar23._0_4_ = pfVar19->___x_0;
          uVar23._4_4_ = pfVar19->___y_1;
          fVar20 = pfVar19->___z_2;
        }
        else {
          *(undefined4 *)(unaff_EBP + -0x228) = 0;
          fVar20 = *(float *)(unaff_EBP + -0x228);
          uVar23 = CONCAT44(*(undefined4 *)(unaff_EBP + -0x110),*(undefined4 *)(unaff_EBP + -0x110))
          ;
        }
        *(undefined8 *)(unaff_EBP + -0x88) = uVar23;
        iVar21 = 0;
        *(float *)(unaff_EBP + -0x80) = fVar20;
        while( true ) {
          *(int *)(unaff_EBP + -0x28) = iVar21;
          if (pLVar22 == (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)0x0) goto LAB_10e1de2d;
          if (pLVar22->____size_2 <= iVar21) break;
          uVar16 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                             (pLVar22,iVar21,
                              List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                             );
          *(uchar *)(unaff_EBP + -0x1c) = uVar16;
          uVar16 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                             (pLVar22,iVar21 + 1,
                              List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                             );
          *(uchar *)(unaff_EBP + -0x1b) = uVar16;
          uVar16 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                             (pLVar22,iVar21 + 2,
                              List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                             );
          *(uchar *)(unaff_EBP + -0x1a) = uVar16;
          uVar16 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                             (pLVar22,iVar21 + 3,
                              List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                             );
          *(uchar *)(unaff_EBP + -0x19) = uVar16;
          VVar25 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                             (*(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 **)
                               (unaff_EBP + -0x78),(uint)*(byte *)(unaff_EBP + -0x1c),
                              List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var
                             );
          if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
              cctor_finished == 0)) {
            il2cpp_runtime_class_init
                      (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
          }
          pfVar19 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                              ((float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *)
                               (unaff_EBP + -0x220),
                               (float2_tCB7B81181978EDE17722C533A55E345D9A413274)VVar25,0.0,
                               (MethodInfo *)0x0);
          pLVar6 = *(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 **)(unaff_EBP + -0x78);
          uVar1._0_4_ = pfVar19->___x_0;
          uVar1._4_4_ = pfVar19->___y_1;
          fVar20 = pfVar19->___z_2;
          *(undefined8 *)(unaff_EBP + -0xd0) = uVar1;
          pMVar14 = List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var;
          *(undefined8 *)(unaff_EBP + -0x11c) = uVar1;
          *(undefined8 *)(unaff_EBP + -0x128) = *(undefined8 *)pfVar19;
          *(float *)(unaff_EBP + -0x120) = fVar20;
          *(float *)(unaff_EBP + -0xe0) =
               *(float *)(unaff_EBP + -0x88) + *(float *)(unaff_EBP + -0xd0);
          *(float *)(unaff_EBP + -200) = fVar20;
          *(float *)(unaff_EBP + -0xdc) =
               *(float *)(unaff_EBP + -0x118) + *(float *)(unaff_EBP + -0x84);
          *(float *)(unaff_EBP + -0xd8) =
               *(float *)(unaff_EBP + -0x120) + *(float *)(unaff_EBP + -0x80);
          VVar25 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                             (pLVar6,(uint)*(byte *)(unaff_EBP + -0x1b),pMVar14);
          pfVar19 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                              ((float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *)
                               (unaff_EBP + -0x210),
                               (float2_tCB7B81181978EDE17722C533A55E345D9A413274)VVar25,0.0,
                               (MethodInfo *)0x0);
          uVar2._0_4_ = pfVar19->___x_0;
          uVar2._4_4_ = pfVar19->___y_1;
          fVar20 = pfVar19->___z_2;
          *(undefined8 *)(unaff_EBP + -0x1cc) = uVar2;
          pMVar14 = List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var;
          *(undefined8 *)(unaff_EBP + -0x1c0) = uVar2;
          *(undefined8 *)(unaff_EBP + -0x1b4) = *(undefined8 *)pfVar19;
          *(float *)(unaff_EBP + -0x1ac) = fVar20;
          *(float *)(unaff_EBP + -0xc0) =
               *(float *)(unaff_EBP + -0x88) + *(float *)(unaff_EBP + -0x1cc);
          *(float *)(unaff_EBP + -0xbc) =
               *(float *)(unaff_EBP + -0x1bc) + *(float *)(unaff_EBP + -0x84);
          *(float *)(unaff_EBP + -0xb8) =
               *(float *)(unaff_EBP + -0x1ac) + *(float *)(unaff_EBP + -0x80);
          VVar25 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                             (pLVar6,(uint)*(byte *)(unaff_EBP + -0x1a),pMVar14);
          pfVar19 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                              ((float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *)
                               (unaff_EBP + -0x200),
                               (float2_tCB7B81181978EDE17722C533A55E345D9A413274)VVar25,0.0,
                               (MethodInfo *)0x0);
          uVar3._0_4_ = pfVar19->___x_0;
          uVar3._4_4_ = pfVar19->___y_1;
          fVar20 = pfVar19->___z_2;
          *(undefined8 *)(unaff_EBP + -0x1e4) = uVar3;
          pMVar14 = List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var;
          *(undefined8 *)(unaff_EBP + -400) = uVar3;
          *(undefined8 *)(unaff_EBP + -0x184) = *(undefined8 *)pfVar19;
          *(float *)(unaff_EBP + -0x17c) = fVar20;
          *(float *)(unaff_EBP + -0xa0) =
               *(float *)(unaff_EBP + -0x88) + *(float *)(unaff_EBP + -0x1e4);
          *(float *)(unaff_EBP + -0x9c) =
               *(float *)(unaff_EBP + -0x18c) + *(float *)(unaff_EBP + -0x84);
          *(float *)(unaff_EBP + -0x98) =
               *(float *)(unaff_EBP + -0x17c) + *(float *)(unaff_EBP + -0x80);
          VVar25 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                             (pLVar6,(uint)*(byte *)(unaff_EBP + -0x19),pMVar14);
          pfVar19 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                              ((float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *)
                               (unaff_EBP + -0x298),
                               (float2_tCB7B81181978EDE17722C533A55E345D9A413274)VVar25,0.0,
                               (MethodInfo *)0x0);
          fVar20 = *(float *)(unaff_EBP + -0xd8);
          uVar4._0_4_ = pfVar19->___x_0;
          uVar4._4_4_ = pfVar19->___y_1;
          fVar7 = pfVar19->___z_2;
          *(undefined8 *)(unaff_EBP + -0x1d8) = uVar4;
          *(undefined8 *)(unaff_EBP + -0x19c) = uVar4;
          *(undefined8 *)(unaff_EBP + -0x1a8) = *(undefined8 *)pfVar19;
          *(float *)(unaff_EBP + -0x1a0) = fVar7;
          *(float *)(unaff_EBP + -0xb0) =
               *(float *)(unaff_EBP + -0x88) + *(float *)(unaff_EBP + -0x1d8);
          *(float *)(unaff_EBP + -0xac) =
               *(float *)(unaff_EBP + -0x198) + *(float *)(unaff_EBP + -0x84);
          *(float *)(unaff_EBP + -0xa8) =
               *(float *)(unaff_EBP + -0x1a0) + *(float *)(unaff_EBP + -0x80);
          Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                    ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x368),
                     (float)*(undefined8 *)(unaff_EBP + -0xe0),
                     (float)((ulonglong)*(undefined8 *)(unaff_EBP + -0xe0) >> 0x20),fVar20,
                     (MethodInfo *)0x0);
          fVar7 = *(float *)(unaff_EBP + -0xb8);
          uVar23 = *extraout_EAX;
          *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(extraout_EAX + 1);
          *(undefined8 *)(unaff_EBP + -0x48) = uVar23;
          Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                    ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x358),
                     (float)*(undefined8 *)(unaff_EBP + -0xc0),
                     (float)((ulonglong)*(undefined8 *)(unaff_EBP + -0xc0) >> 0x20),fVar7,
                     (MethodInfo *)0x0);
          VVar9.___z_4 = *(float *)(unaff_EBP + -0x2c);
          VVar9._0_8_ = *(undefined8 *)(unaff_EBP + -0x48);
          Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823
                    (VVar9,*extraout_EAX_00,(MethodInfo *)0x0);
          Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                    ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x348),
                     (float)*(undefined8 *)(unaff_EBP + -0xc0),
                     (float)((ulonglong)*(undefined8 *)(unaff_EBP + -0xc0) >> 0x20),fVar7,
                     (MethodInfo *)0x0);
          fVar7 = *(float *)(unaff_EBP + -0x98);
          uVar23 = *extraout_EAX_01;
          *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(extraout_EAX_01 + 1);
          *(undefined8 *)(unaff_EBP + -0x48) = uVar23;
          Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                    ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x2f8),
                     (float)*(undefined8 *)(unaff_EBP + -0xa0),
                     (float)((ulonglong)*(undefined8 *)(unaff_EBP + -0xa0) >> 0x20),fVar7,
                     (MethodInfo *)0x0);
          VVar10.___z_4 = *(float *)(unaff_EBP + -0x2c);
          VVar10._0_8_ = *(undefined8 *)(unaff_EBP + -0x48);
          Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823
                    (VVar10,*extraout_EAX_02,(MethodInfo *)0x0);
          Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                    ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x338),
                     (float)*(undefined8 *)(unaff_EBP + -0xa0),
                     (float)((ulonglong)*(undefined8 *)(unaff_EBP + -0xa0) >> 0x20),fVar7,
                     (MethodInfo *)0x0);
          fVar7 = *(float *)(unaff_EBP + -0xa8);
          uVar23 = *extraout_EAX_03;
          *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(extraout_EAX_03 + 1);
          *(undefined8 *)(unaff_EBP + -0x48) = uVar23;
          Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                    ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x328),
                     (float)*(undefined8 *)(unaff_EBP + -0xb0),
                     (float)((ulonglong)*(undefined8 *)(unaff_EBP + -0xb0) >> 0x20),fVar7,
                     (MethodInfo *)0x0);
          VVar11.___z_4 = *(float *)(unaff_EBP + -0x2c);
          VVar11._0_8_ = *(undefined8 *)(unaff_EBP + -0x48);
          Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823
                    (VVar11,*extraout_EAX_04,(MethodInfo *)0x0);
          Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                    ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x318),
                     (float)*(undefined8 *)(unaff_EBP + -0xb0),
                     (float)((ulonglong)*(undefined8 *)(unaff_EBP + -0xb0) >> 0x20),fVar7,
                     (MethodInfo *)0x0);
          fVar7 = *(float *)(extraout_EAX_05 + 1);
          *(undefined8 *)(unaff_EBP + -0x48) = *extraout_EAX_05;
          Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                    ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x308),
                     (float)*(undefined8 *)(unaff_EBP + -0xe0),
                     (float)((ulonglong)*(undefined8 *)(unaff_EBP + -0xe0) >> 0x20),fVar20,
                     (MethodInfo *)0x0);
          VVar12.___z_4 = fVar7;
          VVar12._0_8_ = *(undefined8 *)(unaff_EBP + -0x48);
          Gizmos_DrawLine_m91F1AA0205C7D53D2AA8E2F1D7B338E601A30823
                    (VVar12,*extraout_EAX_06,(MethodInfo *)0x0);
          pLVar22 = *(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF **)(unaff_EBP + -0x74);
          iVar21 = *(int *)(unaff_EBP + -0x28) + 4;
        }
        unaff_ESI = *(int *)(unaff_EBX + 8);
      }
    }
  }
LAB_10e1de2d:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
