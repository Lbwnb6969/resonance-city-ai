// RVA 0x87e271 | Recovered.function.called_by_87aea0
// PDB: FUN_1087e271
// Body: [[1087e271, 1087e2e1] [1087e2e5, 1087ea37]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 1022e160 Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline
// 1065f8c0 Quaternion_Lerp_mBFA4C4D2574C8140AA840273D3E6565D66F6F261
// 1066d9a0 Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844
// 1066ffc0 Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
// 106700e0 Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
// 10670140 Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4
// 10674490 Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
// 1087ea4f FUN_1087ea4f
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3dc10 GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
// 10a3de70 GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE
// 10a43d20 Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
// 10a43e90 Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
// 10a46900 MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E
// 10a4a920 Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1087e271(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar11;
  undefined8 uVar10;
  uchar uVar12;
  byte bVar13;
  undefined1 uVar14;
  List_1_tF12B8ECABFB01DFF6CE11CBC139AC6115179DCC9 *pLVar15;
  MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *pMVar16;
  Dictionary_2_t8E87E58777505762FF5F4E631F2FDB80F651D1C7 *pDVar17;
  BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *pBVar18;
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *pCVar19;
  bool bVar20;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 QVar21;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar22;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar23;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar24;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar25;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar26;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar27;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar28;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar29;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar30;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar31;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar32;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 QVar33;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar34;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar35;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar36;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar37;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar38;
  byte bVar39;
  Il2CppClass *pIVar40;
  bool bVar41;
  Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *pMVar42;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar43;
  int iVar44;
  ValueTuple_2_t07BAEE521A8E0647776F76ED61C87E991CA45BFA *pVVar45;
  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *pOVar46;
  Il2CppObject *pIVar47;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *pfVar48;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar49;
  int iVar50;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar51;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar52;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar53;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar54;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar55;
  uint uVar56;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *pQVar57;
  char cVar58;
  List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *pLVar59;
  uint extraout_EDX;
  int unaff_EBX;
  int unaff_EBP;
  int iVar60;
  int unaff_ESI;
  Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *pBVar61;
  BirdFlock_tB63DB4CEF81D7D9D17C18531A0BEEEA771442436 *pBVar62;
  float fVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  double dVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  float fVar74;

  pBVar62 = *(BirdFlock_tB63DB4CEF81D7D9D17C18531A0BEEEA771442436 **)(unaff_EBX + 8);
LAB_1087e274:
  *(int *)(unaff_EBP + -0x44) = unaff_ESI;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)(unaff_EBP + -0x52),
             (MethodInfo *)0x0);
  if (*(Exception_t **)(unaff_EBP + -0x60) != (Exception_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(*(Exception_t **)(unaff_EBP + -0x60),(MethodInfo *)0x0);
  }
  if ((unaff_ESI != 0) && (*(int *)(unaff_EBP + -300 + unaff_ESI * 4) == 0x1164)) {
    *(int *)(unaff_EBP + -0x44) = unaff_ESI + -1;
    *(int *)(unaff_EBP + -0x110) = unaff_ESI + -1;
  }
  do {
    iVar44 = *(int *)(unaff_EBP + -0x4c);
    uVar56 = *(int *)(unaff_EBP + -0x74) + 1;
    *(uint *)(unaff_EBP + -100) = uVar56;
    *(uint *)(unaff_EBP + -0x74) = uVar56;
    if (iVar44 <= (int)uVar56) {
      uVar56 = 0;
      goto LAB_1087e2c0;
    }
    pLVar15 = pBVar62->___birds_17;
    if (pLVar15 == (List_1_tF12B8ECABFB01DFF6CE11CBC139AC6115179DCC9 *)0x0) goto LAB_1087ea7f;
    if ((uint)pLVar15->____size_2 <= uVar56) {
                    /* WARNING: Subroutine does not return */
      ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                ((MethodInfo *)0x0);
    }
    iVar44 = *(int *)(pLVar15->____items_1 + *(int *)(unaff_EBP + -0x74) * 4 + 0x10);
    *(int *)(unaff_EBP + -0x2c) = iVar44;
    fVar69 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844((MethodInfo *)0x0);
    *(float *)(unaff_EBP + -0x24) = fVar69;
    if (iVar44 == 0) goto LAB_1087ea7f;
  } while (*(float *)(unaff_EBP + -0x24) <= *(float *)(iVar44 + 0x70) + __real_3e99999a);
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)(unaff_EBP + -0x52),
             (MethodInfo *)_stringLiteral78B6D0D676D5FB4808E2E15C447D85E38E201D4B);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  pVVar55 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(iVar44 + 0x58);
  *(undefined8 *)(unaff_EBP + -0x5fc) = *(undefined8 *)(iVar44 + 0x58);
  uVar64 = *(undefined8 *)(iVar44 + 0x40);
  uVar71 = *(undefined4 *)(iVar44 + 0x48);
  *(undefined8 *)(unaff_EBP + -0x608) = uVar64;
  *(undefined8 *)(unaff_EBP + -0x62c) = uVar64;
  *(undefined8 *)(unaff_EBP + -0x620) = *(undefined8 *)pVVar55;
  fVar69 = *(float *)(unaff_EBP + -0x61c);
  fVar70 = *(float *)(unaff_EBP + -0x628);
  *(undefined8 *)(unaff_EBP + -0x644) = *(undefined8 *)(iVar44 + 0x40);
  uVar64 = *(undefined8 *)pVVar55;
  *(undefined4 *)(unaff_EBP + -0x63c) = uVar71;
  uVar71 = *(undefined4 *)(iVar44 + 0x60);
  *(undefined8 *)(unaff_EBP + -0x638) = uVar64;
  *(undefined4 *)(unaff_EBP + -0x630) = uVar71;
  *(float *)(unaff_EBP + -0x77c) = *(float *)(unaff_EBP + -0x630) + *(float *)(unaff_EBP + -0x63c);
  uVar71 = *(undefined4 *)(unaff_EBP + -0x77c);
  *(float *)(iVar44 + 0x40) = *(float *)(unaff_EBP + -0x5fc) + *(float *)(unaff_EBP + -0x608);
  *(float *)(iVar44 + 0x44) = fVar69 + fVar70;
  *(undefined4 *)(iVar44 + 0x48) = uVar71;
  *(undefined8 *)(iVar44 + 0x4c) = *(undefined8 *)pVVar55;
  *(undefined4 *)(iVar44 + 0x54) = *(undefined4 *)(iVar44 + 0x60);
  *(float *)(iVar44 + 0x70) = *(float *)(iVar44 + 0x70) + __real_3e99999a;
  pMVar16 = *(MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A **)(iVar44 + 0x14);
  *(undefined1 *)(iVar44 + 0x75) = *(undefined1 *)(iVar44 + 0x76);
  if ((*(MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A **)(iVar44 + 0x18) ==
       (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0) ||
     (pMVar42 = MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E
                          (*(MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A **)(iVar44 + 0x18)
                           ,(MethodInfo *)0x0),
     pMVar16 == (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0)) goto LAB_1087ea7f;
  MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
            (pMVar16,pMVar42,(MethodInfo *)0x0);
  pBVar61 = *(Bird_t844A261674A59156BC85FE5538301FE90489C0E8 **)(unaff_EBP + -0x2c);
  fVar69 = (pBVar61->___rotation1_10).___y_1;
  fVar70 = (pBVar61->___rotation1_10).___z_2;
  fVar68 = (pBVar61->___rotation1_10).___w_3;
  (pBVar61->___rotation0_9).___x_0 = (pBVar61->___rotation1_10).___x_0;
  (pBVar61->___rotation0_9).___y_1 = fVar69;
  (pBVar61->___rotation0_9).___z_2 = fVar70;
  (pBVar61->___rotation0_9).___w_3 = fVar68;
  fVar69 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844((MethodInfo *)0x0);
  uVar12 = pBVar61->___stateNext_18;
  *(float *)(unaff_EBP + -0x24) = fVar69;
  *(float *)(unaff_EBP + -0x34) = *(float *)(unaff_EBP + -0x24) - pBVar61->___lastActionTime_19;
  switch(uVar12) {
  case '\0':
  case '\x04':
    if (uVar12 == '\0') {
      iVar60 = *(int *)(unaff_EBX + 8);
      if (*(byte *)(iVar60 + 0x47) < *(byte *)(iVar60 + 0x45)) {
        bVar41 = DAT_1151f5c3 == '\0';
        *(byte *)(iVar60 + 0x45) = *(byte *)(iVar60 + 0x45) - 1;
        if (bVar41) {
          il2cpp_codegen_initialize_runtime_metadata
                    ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
          il2cpp_codegen_initialize_runtime_metadata
                    ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
          il2cpp_codegen_initialize_runtime_metadata
                    ((uint *)&_stringLiteral3641F172023B823C36CF1686D0308E81BA22A660);
          DAT_1151f5c3 = '\x01';
        }
        pBVar61->___stateNext_18 = '\x04';
        fVar69 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844((MethodInfo *)0x0);
        *(float *)(unaff_EBP + -0x7c) = fVar69;
        fVar69 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872((MethodInfo *)0x0);
        *(float *)(unaff_EBP + -0x48) = fVar69;
        pBVar61->___lastActionTime_19 =
             *(float *)(unaff_EBP + -0x48) + *(float *)(unaff_EBP + -0x7c);
      }
    }
    pBVar18 = pBVar61->___landing_20;
    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0))
    {
      il2cpp_runtime_class_init
                (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    }
    bVar41 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                       ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pBVar18,
                        (MethodInfo *)0x0);
    if (!bVar41) {
      iVar60 = *(int *)(unaff_EBP + -0x2c);
      *(float *)(iVar60 + 0x5c) = *(float *)(iVar60 + 0x5c) * __real_3f333333;
      pIVar40 = ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var;
      if (*(char *)(iVar60 + 0x76) == '\x04') {
        uVar64 = *(undefined8 *)(iVar60 + 0x4c);
        fVar69 = *(float *)(iVar60 + 0x54);
        *(undefined8 *)(unaff_EBP + -0x40) = uVar64;
        if ((pIVar40->has_cctor != '\0') && (pIVar40->cctor_finished == 0)) {
          il2cpp_runtime_class_init(pIVar40);
          uVar64 = *(undefined8 *)(unaff_EBP + -0x40);
        }
        fVar30.___z_2 = fVar69;
        fVar30.___x_0 = (float)(int)uVar64;
        fVar30.___y_1 = (float)(int)((ulonglong)uVar64 >> 0x20);
        pfVar48 = ExtraMath_SetY_m65C79C2D27A9408438A588993C47DCAC2216E149
                            ((float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *)
                             (unaff_EBP + -0x910),fVar30,0.0,(MethodInfo *)0x0);
        *(undefined8 *)(unaff_EBP + -0xd4) = *(undefined8 *)pfVar48;
        *(float *)(unaff_EBP + -0xcc) = pfVar48->___z_2;
        pVVar49 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x920);
      }
      else {
        iVar50 = *(int *)(unaff_EBX + 8);
        *(undefined8 *)(unaff_EBP + -0x410) = *(undefined8 *)(iVar60 + 0x40);
        uVar64 = *(undefined8 *)(iVar50 + 0x6c);
        uVar71 = *(undefined4 *)(iVar50 + 0x74);
        *(undefined8 *)(unaff_EBP + -0x404) = uVar64;
        *(undefined8 *)(unaff_EBP + -0x41c) = uVar64;
        *(undefined8 *)(unaff_EBP + -0x428) = *(undefined8 *)(iVar60 + 0x40);
        *(undefined8 *)(unaff_EBP + -0x434) = *(undefined8 *)(iVar50 + 0x6c);
        uVar64 = *(undefined8 *)(iVar60 + 0x40);
        *(undefined4 *)(unaff_EBP + -0x42c) = uVar71;
        uVar71 = *(undefined4 *)(iVar60 + 0x48);
        *(undefined8 *)(unaff_EBP + -0x440) = uVar64;
        *(undefined4 *)(unaff_EBP + -0x438) = uVar71;
        *(float *)(unaff_EBP + -0x710) =
             *(float *)(unaff_EBP + -0x42c) - *(float *)(unaff_EBP + -0x438);
        *(undefined4 *)(unaff_EBP + -0xcc) = *(undefined4 *)(unaff_EBP + -0x710);
        *(float *)(unaff_EBP + -0xd4) =
             *(float *)(unaff_EBP + -0x404) - *(float *)(unaff_EBP + -0x410);
        *(float *)(unaff_EBP + -0xd0) =
             *(float *)(unaff_EBP + -0x418) - *(float *)(unaff_EBP + -0x424);
        pVVar49 = (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x900);
      }
      pVVar49 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5
                          (pVVar49,(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                   (unaff_EBP + -0xd4),(MethodInfo *)0x0);
      pVVar49 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline
                          ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x930)
                           ,*pVVar55,*pVVar49,0.2,(MethodInfo *)0x0);
      fVar70 = pVVar49->___y_3;
      fVar69 = pVVar49->___z_4;
      pVVar55->___x_2 = pVVar49->___x_2;
      pVVar55->___y_3 = fVar70;
      *(float *)(iVar44 + 0x60) = fVar69;
      pVVar49 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5
                          ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x940)
                           ,pVVar55,(MethodInfo *)0x0);
      fVar70 = pVVar49->___y_3;
      fVar69 = pVVar49->___z_4;
      pVVar55->___x_2 = pVVar49->___x_2;
      pVVar55->___y_3 = fVar70;
      *(float *)(iVar44 + 0x60) = fVar69;
LAB_1087d1bd:
      U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
                ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)(unaff_EBP + -0x51)
                 ,(MethodInfo *)_stringLiteral844421C98F98CFA1613DF2CB8F5AE079666D8631);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      pVVar55 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                          ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x970)
                           ,(MethodInfo *)0x0);
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
      uVar64 = *(undefined8 *)pVVar55;
      iVar44 = *(int *)(unaff_EBP + -0x74) + 1;
      iVar60 = *(int *)(unaff_EBP + -0x74) + -1;
      *(float *)(unaff_EBP + -0x98) = pVVar55->___z_4;
      cVar58 = iVar44 < *(int *)(unaff_EBP + -0x4c);
      *(undefined8 *)(unaff_EBP + -0xa0) = uVar64;
      fVar69 = 0.0;
      *(int *)(unaff_EBP + -0x5c) = iVar60;
      uVar56 = (uint)(byte)((byte)((uint)iVar60 >> 0x1f) ^ 1);
      *(undefined4 *)(unaff_EBP + -0x78) = 0;
      *(char *)(unaff_EBP + -0x2d) = cVar58;
      *(uint *)(unaff_EBP + -0x58) = uVar56;
      bVar13 = 1;
      goto LAB_1087d233;
    }
    if (___real_41100000 < *(float *)(unaff_EBP + -0x34)) {
      BirdFlock_SetLanding_mA7B5BA5BD831833CBA54D626B3CA707E564F8DA3
                (*(BirdFlock_tB63DB4CEF81D7D9D17C18531A0BEEEA771442436 **)(unaff_EBX + 8),
                 *(Bird_t844A261674A59156BC85FE5538301FE90489C0E8 **)(unaff_EBP + -0x2c),
                 (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)0x0,(MethodInfo *)0x0);
      goto LAB_1087d1bd;
    }
    pBVar61 = *(Bird_t844A261674A59156BC85FE5538301FE90489C0E8 **)(unaff_EBP + -0x2c);
    if (pBVar61->___landing_20 == (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)0x0)
    goto LAB_1087ea7f;
    pVVar49 = BirdLanding_get_targetPos_m199AEDE3A329D1C8A117E7408895E8A7CF9AC10D
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x9f0),
                         pBVar61->___landing_20,(MethodInfo *)0x0);
    fVar69 = pVVar49->___z_4;
    *(undefined8 *)(unaff_EBP + -0x44c) = *(undefined8 *)pVVar49;
    *(undefined8 *)(unaff_EBP + -0x458) = *(undefined8 *)&pBVar61->___posMid_11;
    *(undefined8 *)(unaff_EBP + -0x464) = *(undefined8 *)pVVar49;
    *(undefined8 *)(unaff_EBP + -0x470) = *(undefined8 *)&pBVar61->___posMid_11;
    *(undefined8 *)(unaff_EBP + -0x47c) = *(undefined8 *)pVVar49;
    uVar64 = *(undefined8 *)&pBVar61->___posMid_11;
    *(float *)(unaff_EBP + -0x474) = fVar69;
    fVar69 = (pBVar61->___posMid_11).___z_4;
    *(undefined8 *)(unaff_EBP + -0x488) = uVar64;
    *(float *)(unaff_EBP + -0x480) = fVar69;
    *(float *)(unaff_EBP + -0x71c) = *(float *)(unaff_EBP + -0x474) - *(float *)(unaff_EBP + -0x480)
    ;
    *(undefined4 *)(unaff_EBP + -0x88) = *(undefined4 *)(unaff_EBP + -0x71c);
    *(ulonglong *)(unaff_EBP + -0x90) =
         CONCAT44(*(float *)(unaff_EBP + -0x460) - *(float *)(unaff_EBP + -0x46c),
                  *(float *)(unaff_EBP + -0x44c) - *(float *)(unaff_EBP + -0x458));
    fVar69 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991
                       ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x90),
                        (MethodInfo *)0x0);
    *(float *)(unaff_EBP + -0x24) = fVar69;
    fVar69 = *(float *)(unaff_EBP + -0x24);
    if (__real_3f800000 < fVar69) {
      *(float *)(unaff_EBP + -0x728) = *(float *)(unaff_EBP + -0x88) / fVar69;
      *(ulonglong *)(unaff_EBP + -0x90) =
           CONCAT44(*(float *)(unaff_EBP + -0x8c) / fVar69,*(float *)(unaff_EBP + -0x90) / fVar69);
      *(undefined4 *)(unaff_EBP + -0x88) = *(undefined4 *)(unaff_EBP + -0x728);
    }
    fVar69 = *(float *)(unaff_EBP + -0x90) * __real_40000000;
    *(float *)(unaff_EBP + -0x734) = *(float *)(unaff_EBP + -0x88) + *(float *)(unaff_EBP + -0x88);
    *(float *)(unaff_EBP + -0x90) = fVar69;
    *(float *)(unaff_EBP + -0x8c) = *(float *)(unaff_EBP + -0x8c) + *(float *)(unaff_EBP + -0x8c);
    *(undefined4 *)(unaff_EBP + -0x88) = *(undefined4 *)(unaff_EBP + -0x734);
    fVar69 = Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
                       (6.0,9.0,*(float *)(unaff_EBP + -0x34),(MethodInfo *)0x0);
    *(float *)(unaff_EBP + -0x48) = fVar69;
    fVar69 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                       (0.1,0.8,*(float *)(unaff_EBP + -0x48),(MethodInfo *)0x0);
    *(float *)(unaff_EBP + -0x48) = fVar69;
    VVar31.___z_4 = *(float *)(unaff_EBP + -0x88);
    VVar31._0_8_ = *(undefined8 *)(unaff_EBP + -0x90);
    pVVar49 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x960),
                         *pVVar55,VVar31,*(float *)(unaff_EBP + -0x48),(MethodInfo *)0x0);
    fVar70 = pVVar49->___y_3;
    fVar69 = pVVar49->___z_4;
    pVVar55->___x_2 = pVVar49->___x_2;
    pVVar55->___y_3 = fVar70;
    bVar41 = __real_3fc00000 == *(float *)(unaff_EBP + -0x24);
    bVar20 = __real_3fc00000 < *(float *)(unaff_EBP + -0x24);
    *(float *)(iVar44 + 0x60) = fVar69;
    if (bVar20 || bVar41) goto LAB_1087d1bd;
    pBVar62 = *(BirdFlock_tB63DB4CEF81D7D9D17C18531A0BEEEA771442436 **)(unaff_EBX + 8);
    BirdFlock_SetState_m72806889745C4C557D55CE9E6839387A5AE818AF
              (pBVar62,pBVar61,'\x01',(MethodInfo *)0x0);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBP + -0x128 + *(int *)(unaff_EBP + -0x44) * 4) = 0x1164;
    unaff_ESI = *(int *)(unaff_EBP + -0x110) + 1;
    *(int *)(unaff_EBP + -0x110) = unaff_ESI;
    goto LAB_1087e274;
  case '\x01':
    pBVar62 = *(BirdFlock_tB63DB4CEF81D7D9D17C18531A0BEEEA771442436 **)(unaff_EBX + 8);
    pVVar49 = BirdFlock_GetLandingPos_m29D97BDB3990AC0642EBC4BFD12590E0DEFD3D97
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x9a0),
                         pBVar62,pBVar61,(MethodInfo *)0x0);
    iVar60 = *(int *)(unaff_EBP + -0x2c);
    uVar2._0_4_ = pVVar49->___x_2;
    uVar2._4_4_ = pVVar49->___y_3;
    fVar69 = pVVar49->___z_4;
    *(undefined8 *)(unaff_EBP + -0x70) = uVar2;
    *(undefined8 *)(unaff_EBP + -0x650) = uVar2;
    *(undefined8 *)(unaff_EBP + -0x65c) = *(undefined8 *)(iVar60 + 0x40);
    *(undefined8 *)(unaff_EBP + -0x668) = *(undefined8 *)pVVar49;
    *(undefined8 *)(unaff_EBP + -0x674) = *(undefined8 *)(iVar60 + 0x40);
    *(undefined8 *)(unaff_EBP + -0x680) = *(undefined8 *)pVVar49;
    uVar64 = *(undefined8 *)(iVar60 + 0x40);
    *(float *)(unaff_EBP + -0x678) = fVar69;
    *(undefined8 *)(unaff_EBP + -0x68c) = uVar64;
    *(float *)(unaff_EBP + -0x58) = fVar69;
    *(undefined4 *)(unaff_EBP + -0x684) = *(undefined4 *)(iVar60 + 0x48);
    *(float *)(unaff_EBP + -0x788) = *(float *)(unaff_EBP + -0x678) - *(float *)(unaff_EBP + -0x684)
    ;
    *(undefined4 *)(unaff_EBP + -0x150) = *(undefined4 *)(unaff_EBP + -0x788);
    *(ulonglong *)(unaff_EBP + -0x158) =
         CONCAT44(*(float *)(unaff_EBP + -0x664) - *(float *)(unaff_EBP + -0x670),
                  *(float *)(unaff_EBP + -0x650) - *(float *)(unaff_EBP + -0x65c));
    fVar69 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991
                       ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x158),
                        (MethodInfo *)0x0);
    *(float *)(unaff_EBP + -0x24) = fVar69;
    *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x24);
    pMVar16 = *(MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A **)
               (*(int *)(unaff_EBP + -0x2c) + 0x18);
    if (pMVar16 == (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0) goto LAB_1087ea7f;
    MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
              (pMVar16,pBVar62->___landMesh_8,(MethodInfo *)0x0);
    iVar60 = *(int *)(unaff_EBP + -0x2c);
    pCVar19 = *(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)(iVar60 + 0x7c);
    if ((pCVar19 == (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) ||
       (pTVar54 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                            (pCVar19,(MethodInfo *)0x0),
       pTVar54 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) goto LAB_1087ea7f;
    pVVar49 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x9b0),
                         pTVar54,(MethodInfo *)0x0);
    uVar56 = __xmm_80000000800000008000000080000000;
    uVar3._0_4_ = pVVar49->___x_2;
    uVar3._4_4_ = pVVar49->___y_3;
    fVar69 = pVVar49->___z_4;
    *(undefined8 *)(unaff_EBP + -0x698) = uVar3;
    *(undefined8 *)(unaff_EBP + -0x6a4) = uVar3;
    *(undefined8 *)(unaff_EBP + -0x6b0) = *(undefined8 *)pVVar49;
    *(float *)(unaff_EBP + -0x6a8) = fVar69;
    *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x698) ^ uVar56;
    *(uint *)(unaff_EBP + -0x50) = *(uint *)(unaff_EBP + -0x6a0) ^ uVar56;
    *(uint *)(unaff_EBP + -0x5c) = *(uint *)(unaff_EBP + -0x6a8) ^ uVar56;
    pIVar40 = ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var;
    iVar60 = *(int *)(iVar60 + 0x7c);
    if (iVar60 == 0) goto LAB_1087ea7f;
    uVar64 = *(undefined8 *)(iVar60 + 0x14);
    fVar69 = *(float *)(iVar60 + 0x1c);
    *(undefined8 *)(unaff_EBP + -0x40) = uVar64;
    if ((pIVar40->has_cctor != '\0') && (pIVar40->cctor_finished == 0)) {
      il2cpp_runtime_class_init(pIVar40);
      uVar64 = *(undefined8 *)(unaff_EBP + -0x40);
    }
    fVar26.___z_2 = fVar69;
    fVar26.___x_0 = (float)(int)uVar64;
    fVar26.___y_1 = (float)(int)((ulonglong)uVar64 >> 0x20);
    pfVar48 = ExtraMath_SetY_m65C79C2D27A9408438A588993C47DCAC2216E149
                        ((float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *)(unaff_EBP + -0x950),
                         fVar26,0.0,(MethodInfo *)0x0);
    fVar70 = __real_3f333333;
    uVar4._0_4_ = pfVar48->___x_0;
    uVar4._4_4_ = pfVar48->___y_1;
    fVar69 = pfVar48->___z_2;
    *(undefined8 *)(unaff_EBP + -0x2d8) = uVar4;
    *(undefined8 *)(unaff_EBP + -0x2c0) = uVar4;
    *(undefined8 *)(unaff_EBP + -0x2cc) = *(undefined8 *)pfVar48;
    *(float *)(unaff_EBP + -0x2c4) = fVar69;
    fVar69 = *(float *)(unaff_EBP + -700) * fVar70 + *(float *)(unaff_EBP + -0x50);
    *(float *)(unaff_EBP + -0x7b4) =
         *(float *)(unaff_EBP + -0x2c4) * fVar70 + *(float *)(unaff_EBP + -0x5c);
    fVar68 = fVar69 * ___real_00000000;
    *(ulonglong *)(unaff_EBP + -0x2e4) =
         CONCAT44(fVar69,*(float *)(unaff_EBP + -0x2d8) * fVar70 + *(float *)(unaff_EBP + -0x24));
    *(float *)(unaff_EBP + -0x2e0) = fVar68;
    VVar34.___z_4 = *(float *)(unaff_EBP + -0x7b4);
    VVar34._0_8_ = *(undefined8 *)(unaff_EBP + -0x2e4);
    pQVar57 = Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF
                        ((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)
                         (unaff_EBP + -0xaf0),VVar34,(MethodInfo *)0x0);
    fVar63 = __real_3e99999a;
    fVar69 = pQVar57->___y_1;
    fVar70 = pQVar57->___z_2;
    fVar68 = pQVar57->___w_3;
    QVar21 = *pQVar57;
    *(float *)(unaff_EBP + -0xc0) = pQVar57->___x_0;
    *(float *)(unaff_EBP + -0xbc) = fVar69;
    *(float *)(unaff_EBP + -0xb8) = fVar70;
    *(float *)(unaff_EBP + -0xb4) = fVar68;
    pBVar61 = *(Bird_t844A261674A59156BC85FE5538301FE90489C0E8 **)(unaff_EBP + -0x2c);
    if (*(float *)(unaff_EBP + -0x34) <= fVar63 && fVar63 != *(float *)(unaff_EBP + -0x34)) {
      uVar64 = *(undefined8 *)(unaff_EBP + -0x158);
      pVVar55->___x_2 = (float)(int)uVar64;
      pVVar55->___y_3 = (float)(int)((ulonglong)uVar64 >> 0x20);
      QVar33 = pBVar61->___rotation0_9;
      *(undefined4 *)(iVar44 + 0x60) = *(undefined4 *)(unaff_EBP + -0x150);
      pQVar57 = Quaternion_Lerp_mBFA4C4D2574C8140AA840273D3E6565D66F6F261
                          ((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)
                           (unaff_EBP + -0xb00),QVar33,QVar21,0.3,(MethodInfo *)0x0);
      fVar69 = pQVar57->___y_1;
      fVar70 = pQVar57->___z_2;
      fVar68 = pQVar57->___w_3;
      pBVar62 = *(BirdFlock_tB63DB4CEF81D7D9D17C18531A0BEEEA771442436 **)(unaff_EBX + 8);
      (pBVar61->___rotation1_10).___x_0 = pQVar57->___x_0;
      (pBVar61->___rotation1_10).___y_1 = fVar69;
      (pBVar61->___rotation1_10).___z_2 = fVar70;
      (pBVar61->___rotation1_10).___w_3 = fVar68;
      BirdFlock_SetState_m72806889745C4C557D55CE9E6839387A5AE818AF
                (pBVar62,pBVar61,'\x02',(MethodInfo *)0x0);
    }
    else {
      if (pBVar61->___landing_20 == (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)0x0)
      goto LAB_1087ea7f;
      pVVar49 = BirdLanding_get_targetPos_m199AEDE3A329D1C8A117E7408895E8A7CF9AC10D
                          ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x9c0)
                           ,pBVar61->___landing_20,(MethodInfo *)0x0);
      VVar22.___z_4 = *(float *)(unaff_EBP + -0x58);
      VVar22._0_8_ = *(undefined8 *)(unaff_EBP + -0x70);
      pVVar49 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline
                          ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x9d0)
                           ,VVar22,*pVVar49,*(float *)(unaff_EBP + -0x34) + __real_3dcccccd,
                           (MethodInfo *)0x0);
      *(undefined8 *)(unaff_EBP + -0x2f0) = *(undefined8 *)pVVar49;
      *(undefined8 *)(unaff_EBP + -0x2fc) = *(undefined8 *)&pBVar61->___posMid_11;
      fVar69 = pVVar49->___z_4;
      *(undefined8 *)(unaff_EBP + -0x308) = *(undefined8 *)pVVar49;
      *(undefined8 *)(unaff_EBP + -0x314) = *(undefined8 *)&pBVar61->___posMid_11;
      *(undefined8 *)(unaff_EBP + -800) = *(undefined8 *)pVVar49;
      *(undefined8 *)(unaff_EBP + -0x32c) = *(undefined8 *)&pBVar61->___posMid_11;
      *(float *)(unaff_EBP + -0x318) = fVar69;
      *(float *)(unaff_EBP + -0x324) = (pBVar61->___posMid_11).___z_4;
      *(float *)(unaff_EBP + -0x23c) =
           *(float *)(unaff_EBP + -0x2f0) - *(float *)(unaff_EBP + -0x2fc);
      *(float *)(unaff_EBP + -0x238) =
           *(float *)(unaff_EBP + -0x304) - *(float *)(unaff_EBP + -0x310);
      *(float *)(unaff_EBP + -0x234) =
           *(float *)(unaff_EBP + -0x318) - *(float *)(unaff_EBP + -0x324);
      if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor !=
           '\0') &&
         (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished ==
          0)) {
        il2cpp_runtime_class_init
                  (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
      }
      pVVar49 = ExtraMath_GetClampedMagnitude_mD672B0998923CC7185D9FC4B53521359092BD9DA
                          ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x9e0)
                           ,*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                             (unaff_EBP + -0x23c),0.7,(MethodInfo *)0x0);
      pVVar49 = Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796
                          ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0xa00)
                           ,*pVVar55,*pVVar49,0.8,(MethodInfo *)0x0);
      uVar5._0_4_ = pVVar49->___x_2;
      uVar5._4_4_ = pVVar49->___y_3;
      fVar63 = pVVar49->___z_4;
      *(undefined8 *)(unaff_EBP + -0x248) = uVar5;
      fVar69 = *(float *)(unaff_EBP + -0x244);
      pVVar55->___x_2 = (float)(undefined4)uVar5;
      pVVar55->___y_3 = (float)uVar5._4_4_;
      uVar6._0_4_ = (pBVar61->___velocityPrev_12).___x_2;
      uVar6._4_4_ = (pBVar61->___velocityPrev_12).___y_3;
      *(undefined8 *)(unaff_EBP + -0x350) = uVar6;
      *(float *)(unaff_EBP + -0x240) = fVar63;
      fVar70 = *(float *)(unaff_EBP + -0x240);
      *(undefined8 *)(unaff_EBP + -0x338) = uVar6;
      uVar64 = *(undefined8 *)&pBVar61->___velocityPrev_12;
      fVar68 = *(float *)(unaff_EBP + -0x334);
      *(float *)(iVar44 + 0x60) = fVar63;
      *(float *)(unaff_EBP + -0x33c) = (pBVar61->___velocityPrev_12).___z_4;
      *(undefined8 *)(unaff_EBP + -0x344) = uVar64;
      *(float *)(unaff_EBP + -0x250) = (fVar69 - fVar68) + __real_3f000000;
      *(float *)(unaff_EBP + -0x24c) = (fVar70 - *(float *)(unaff_EBP + -0x33c)) + 0.0;
      *(float *)(unaff_EBP + -0x254) =
           (*(float *)(unaff_EBP + -0x248) - *(float *)(unaff_EBP + -0x350)) + 0.0;
      Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991(pVVar55,(MethodInfo *)0x0);
      pQVar57 = Quaternion_LookRotation_m8A7DB5BDBC361586191AB67ACF857F46160EE3F1
                          ((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)
                           (unaff_EBP + -0xae0),*pVVar55,
                           *(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                            (unaff_EBP + -0x254),(MethodInfo *)0x0);
      QVar33 = *(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(unaff_EBP + -0xc0);
      fVar69 = pQVar57->___y_1;
      fVar70 = pQVar57->___z_2;
      fVar68 = pQVar57->___w_3;
      QVar21 = *pQVar57;
      (pBVar61->___rotation1_10).___x_0 = pQVar57->___x_0;
      (pBVar61->___rotation1_10).___y_1 = fVar69;
      (pBVar61->___rotation1_10).___z_2 = fVar70;
      (pBVar61->___rotation1_10).___w_3 = fVar68;
      pQVar57 = Quaternion_Lerp_mBFA4C4D2574C8140AA840273D3E6565D66F6F261
                          ((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)
                           (unaff_EBP + -0xa90),QVar21,QVar33,0.1,(MethodInfo *)0x0);
      fVar69 = pQVar57->___y_1;
      fVar70 = pQVar57->___z_2;
      fVar68 = pQVar57->___w_3;
      (pBVar61->___rotation1_10).___x_0 = pQVar57->___x_0;
      (pBVar61->___rotation1_10).___y_1 = fVar69;
      (pBVar61->___rotation1_10).___z_2 = fVar70;
      (pBVar61->___rotation1_10).___w_3 = fVar68;
    }
    goto switchD_1087b8af_default;
  case '\x02':
    pVVar49 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0xa10),
                         (MethodInfo *)0x0);
    fVar70 = pVVar49->___y_3;
    fVar69 = pVVar49->___z_4;
    pVVar55->___x_2 = pVVar49->___x_2;
    pVVar55->___y_3 = fVar70;
    *(float *)(iVar44 + 0x60) = fVar69;
    pBVar62 = *(BirdFlock_tB63DB4CEF81D7D9D17C18531A0BEEEA771442436 **)(unaff_EBX + 8);
    BirdFlock_SetState_m72806889745C4C557D55CE9E6839387A5AE818AF
              (pBVar62,pBVar61,'\x03',(MethodInfo *)0x0);
    if (pBVar61->___mf1_7 == (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0)
    goto LAB_1087ea7f;
    MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
              (pBVar61->___mf1_7,pBVar62->___halfSitMesh_6,(MethodInfo *)0x0);
    if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pBVar61->___shade_5 ==
        (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) goto LAB_1087ea7f;
    pTVar54 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pBVar61->___shade_5,
                         (MethodInfo *)0x0);
    if (((pBVar61->___landing_20 == (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)0x0) ||
        (pTVar43 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                             ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                              pBVar61->___landing_20,(MethodInfo *)0x0),
        pTVar43 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) ||
       (pVVar55 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                            ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                             (unaff_EBP + -0xa20),pTVar43,(MethodInfo *)0x0),
       pTVar54 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) goto LAB_1087ea7f;
    Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
              (pTVar54,*pVVar55,(MethodInfo *)0x0);
    if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pBVar61->___shade_5 ==
        (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) goto LAB_1087ea7f;
    pTVar54 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pBVar61->___shade_5,
                         (MethodInfo *)0x0);
    if ((pBVar61->___landing_20 == (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)0x0) ||
       (pTVar43 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                             pBVar61->___landing_20,(MethodInfo *)0x0),
       pTVar43 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) goto LAB_1087ea7f;
    pQVar57 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200
                        ((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)
                         (unaff_EBP + -0xa30),pTVar43,(MethodInfo *)0x0);
    fVar69 = pQVar57->___y_1;
    fVar70 = pQVar57->___z_2;
    fVar68 = pQVar57->___w_3;
    *(float *)(unaff_EBP + -0xc0) = pQVar57->___x_0;
    *(float *)(unaff_EBP + -0xbc) = fVar69;
    *(float *)(unaff_EBP + -0xb8) = fVar70;
    *(float *)(unaff_EBP + -0xb4) = fVar68;
    pQVar57 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3
                        ((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)
                         (unaff_EBP + -0xa40),-90.0,90.0,0.0,(MethodInfo *)0x0);
    pQVar57 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0
                        ((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)
                         (unaff_EBP + -0xa50),
                         *(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)
                          (unaff_EBP + -0xc0),*pQVar57,(MethodInfo *)0x0);
    if (pTVar54 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_1087ea7f;
    Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4
              (pTVar54,*pQVar57,(MethodInfo *)0x0);
    if ((pBVar61->___landing_20 == (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)0x0) ||
       (pTVar54 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                             pBVar61->___landing_20,(MethodInfo *)0x0),
       pTVar54 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) goto LAB_1087ea7f;
    pVVar55 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x800),
                         pTVar54,(MethodInfo *)0x0);
    uVar56 = __xmm_80000000800000008000000080000000;
    uVar7._0_4_ = pVVar55->___x_2;
    uVar7._4_4_ = pVVar55->___y_3;
    fVar69 = pVVar55->___z_4;
    *(undefined8 *)(unaff_EBP + -0x35c) = uVar7;
    *(undefined8 *)(unaff_EBP + -0x368) = uVar7;
    *(undefined8 *)(unaff_EBP + -0x374) = *(undefined8 *)pVVar55;
    *(float *)(unaff_EBP + -0x36c) = fVar69;
    *(uint *)(unaff_EBP + -0x26c) = *(uint *)(unaff_EBP + -0x35c) ^ uVar56;
    *(uint *)(unaff_EBP + -0x268) = *(uint *)(unaff_EBP + -0x364) ^ uVar56;
    *(uint *)(unaff_EBP + -0x264) = *(uint *)(unaff_EBP + -0x36c) ^ uVar56;
    pIVar40 = ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var;
    pBVar18 = pBVar61->___landing_20;
    if (pBVar18 == (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)0x0) goto LAB_1087ea7f;
    uVar65._0_4_ = (pBVar18->___normal_6).___x_2;
    uVar65._4_4_ = (pBVar18->___normal_6).___y_3;
    fVar69 = (pBVar18->___normal_6).___z_4;
    *(undefined8 *)(unaff_EBP + -0x40) = uVar65;
    if ((pIVar40->has_cctor != '\0') && (pIVar40->cctor_finished == 0)) {
      il2cpp_runtime_class_init(pIVar40);
      uVar65 = *(undefined8 *)(unaff_EBP + -0x40);
    }
    fVar27.___z_2 = fVar69;
    fVar27.___x_0 = (float)(int)uVar65;
    fVar27.___y_1 = (float)(int)((ulonglong)uVar65 >> 0x20);
    pfVar48 = ExtraMath_SetY_m65C79C2D27A9408438A588993C47DCAC2216E149
                        ((float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *)(unaff_EBP + -0x810),
                         fVar27,0.0,(MethodInfo *)0x0);
    pVVar55 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x820),
                         *(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x26c),
                         (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E)*pfVar48,
                         (MethodInfo *)0x0);
    fVar69 = pVVar55->___z_4;
    *(undefined8 *)(unaff_EBP + -0x2a8) = *(undefined8 *)pVVar55;
    *(float *)(unaff_EBP + -0x2a4) = *(float *)(unaff_EBP + -0x2a4) * __real_3ecccccd;
    iVar44 = Random_RandomRangeInt_mC1A726071BB9634DCA04EF5DCC1E59360CE392DE
                       (-0x14,0x14,(MethodInfo *)0x0);
    pQVar57 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3
                        ((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)
                         (unaff_EBP + -0xa60),0.0,(float)iVar44,0.0,(MethodInfo *)0x0);
    fVar70 = pQVar57->___y_1;
    fVar68 = pQVar57->___z_2;
    fVar63 = pQVar57->___w_3;
    *(float *)(unaff_EBP + -0xc0) = pQVar57->___x_0;
    *(float *)(unaff_EBP + -0xbc) = fVar70;
    *(float *)(unaff_EBP + -0xb8) = fVar68;
    *(float *)(unaff_EBP + -0xb4) = fVar63;
    VVar35.___z_4 = fVar69;
    VVar35._0_8_ = *(undefined8 *)(unaff_EBP + -0x2a8);
    pQVar57 = Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF
                        ((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)
                         (unaff_EBP + -0xa70),VVar35,(MethodInfo *)0x0);
    fVar69 = pQVar57->___x_0;
    fVar70 = pQVar57->___y_1;
    fVar68 = pQVar57->___z_2;
    fVar63 = pQVar57->___w_3;
    uVar71 = *(undefined4 *)(unaff_EBP + -0xc0);
    uVar72 = *(undefined4 *)(unaff_EBP + -0xbc);
    uVar73 = *(undefined4 *)(unaff_EBP + -0xb8);
    fVar74 = *(float *)(unaff_EBP + -0xb4);
    pQVar57 = (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(unaff_EBP + -0xa80);
    break;
  case '\x03':
    pVVar49 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x830),
                         (MethodInfo *)0x0);
    fVar69 = pVVar49->___y_3;
    fVar70 = pVVar49->___z_4;
    pVVar55->___x_2 = pVVar49->___x_2;
    fVar68 = __real_40400000;
    pVVar55->___y_3 = fVar69;
    fVar69 = *(float *)(unaff_EBP + -0x34);
    *(float *)(iVar44 + 0x60) = fVar70;
    if (fVar69 <= fVar68) goto switchD_1087b8af_default;
    fVar69 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844((MethodInfo *)0x0);
    pBVar18 = pBVar61->___landing_20;
    *(float *)(unaff_EBP + -0x24) = fVar69;
    pBVar61->___lastActionTime_19 = *(float *)(unaff_EBP + -0x24);
    if (pBVar18 == (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)0x0) goto LAB_1087ea7f;
    *(bool *)(unaff_EBP + -0x25) = __real_3f733333 < (pBVar18->___normal_6).___y_3;
    fVar70 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872((MethodInfo *)0x0);
    fVar69 = __real_3dcccccd;
    *(float *)(unaff_EBP + -0x24) = fVar70;
    if (*(float *)(unaff_EBP + -0x24) <= fVar69 && fVar69 != *(float *)(unaff_EBP + -0x24)) {
      pBVar18 = pBVar61->___landing_20;
      if (pBVar18 == (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)0x0)
      goto LAB_1087ea7f;
      BirdLanding_get_sortPos_m53ADEB657C9611AE28CED37CEB847639AAB0E736
                ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x8a0),pBVar18,
                 (MethodInfo *)0x0);
      *(uchar *)(unaff_EBP + -0x25) = pBVar18->___neighbourCount_5;
      fVar69 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872((MethodInfo *)0x0);
      *(float *)(unaff_EBP + -0x24) = fVar69;
      fVar69 = *(float *)(unaff_EBP + -0x24) * __real_3e4ccccd;
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
      *(float *)(unaff_EBP + -0x58) = (float)*(byte *)(unaff_EBP + -0x25) * __real_3e99999a + fVar69
      ;
      pVVar55 = BirdLanding_get_pos_mFEAFD0CE24293167DABA18669B4F4AC98A0D8FF2
                          ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x8b0)
                           ,pBVar18,(MethodInfo *)0x0);
      pBVar62 = *(BirdFlock_tB63DB4CEF81D7D9D17C18531A0BEEEA771442436 **)(unaff_EBX + 8);
      uVar64 = *(undefined8 *)pVVar55;
      VVar29 = *pVVar55;
      *(float *)(unaff_EBP + -0x7c) = pVVar55->___z_4;
      *(undefined8 *)(unaff_EBP + -0x40) = uVar64;
      pVVar45 = BirdFlock_GetSearchCoordinates_m311935888F7BF564C853BBD7AAB7E2CF1066C307
                          ((ValueTuple_2_t07BAEE521A8E0647776F76ED61C87E991CA45BFA *)
                           (unaff_EBP + -200),pBVar62,VVar29,0.90000004,(MethodInfo *)0x0);
      iVar44 = (pVVar45->___Item1_0).___x_0;
      iVar60 = (pVVar45->___Item1_0).___y_1;
      fVar69 = (float)(pVVar45->___Item1_0).___z_2;
      iVar50 = (pVVar45->___Item2_1).___x_0;
      uVar64 = *(undefined8 *)&(pVVar45->___Item2_1).___y_1;
      *(int *)(unaff_EBP + -0x7e0) = iVar44;
      *(int *)(unaff_EBP + -0x7dc) = iVar60;
      *(float *)(unaff_EBP + -0x7d8) = fVar69;
      *(int *)(unaff_EBP + -0x7d4) = iVar50;
      *(undefined8 *)(unaff_EBP + -2000) = uVar64;
      *(int *)(unaff_EBP + -0x29c) = iVar44;
      *(int *)(unaff_EBP + -0x298) = iVar60;
      *(undefined8 *)(unaff_EBP + -0x3a4) = *(undefined8 *)(unaff_EBP + -0x7d4);
      for (; *(float *)(unaff_EBP + -0x34) = fVar69, (int)fVar69 < *(int *)(unaff_EBP + -0x7cc);
          fVar69 = (float)((int)fVar69 + 1)) {
        for (iVar44 = *(int *)(unaff_EBP + -0x298); *(int *)(unaff_EBP + -0x50) = iVar44,
            iVar44 < *(int *)(unaff_EBP + -0x3a0); iVar44 = iVar44 + 1) {
          for (iVar60 = *(int *)(unaff_EBP + -0x29c); *(int *)(unaff_EBP + -0x78) = iVar60,
              iVar60 < *(int *)(unaff_EBP + -0x3a4); iVar60 = iVar60 + 1) {
            iVar50 = *(int *)(*(int *)(unaff_EBX + 8) + 0xc);
            if ((iVar50 == 0) || (iVar50 = *(int *)(iVar50 + 0x48), iVar50 == 0)) goto LAB_1087ea7f;
            pDVar17 = *(Dictionary_2_t8E87E58777505762FF5F4E631F2FDB80F651D1C7 **)(iVar50 + 0x24);
            *(int *)(unaff_EBP + -0x3b0) = iVar60;
            *(int *)(unaff_EBP + -0x3ac) = iVar44;
            if (pDVar17 == (Dictionary_2_t8E87E58777505762FF5F4E631F2FDB80F651D1C7 *)0x0)
            goto LAB_1087ea7f;
            VVar29.___z_4 = fVar69;
            VVar29._0_8_ = *(undefined8 *)(unaff_EBP + -0x3b0);
            bVar41 = Dictionary_2_TryGetValue_m51EC0B2C281B630CFFE71169FCB6AF1F3E35826F
                               (pDVar17,VVar29,(int *)(unaff_EBP + -0xa4),
                                Dictionary_2_TryGetValue_mD5FD41FBACBFE4389569FFAA86DC7CB5DD4F7EF4_RuntimeMethod_var
                               );
            if (bVar41) {
              fVar69 = (float)*(int *)(unaff_EBP + -0x34);
              *(float *)(unaff_EBP + -0x7c0) = fVar69 + fVar69;
              *(undefined4 *)(unaff_EBP + -0x270) = *(undefined4 *)(unaff_EBP + -0x7c0);
              *(ulonglong *)(unaff_EBP + -0x278) =
                   CONCAT44((float)iVar44 + (float)iVar44,(float)iVar60 + (float)iVar60);
              fVar69 = (float)(*(int *)(unaff_EBP + -0x34) + 1);
              *(float *)(unaff_EBP + -0x704) = fVar69 + fVar69;
              pLVar59 = *(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 **)(unaff_EBP + -0xa4);
              *(ulonglong *)(unaff_EBP + -0xf4) =
                   CONCAT44((float)(iVar44 + 1) + (float)(iVar44 + 1),
                            (float)(iVar60 + 1) + (float)(iVar60 + 1));
              *(undefined4 *)(unaff_EBP + -0xec) = *(undefined4 *)(unaff_EBP + -0x704);
              if (pLVar59 == (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)0x0)
              goto LAB_1087ea7f;
              iVar44 = pLVar59->____size_2;
              while (iVar44 = iVar44 + -1, -1 < iVar44) {
                if (((pLVar59 == (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)0x0) ||
                    (pGVar53 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                                         (pLVar59,iVar44,
                                          List_1_get_Item_m9053981E4F86329B862DCD556ECC7AABFA63BD00_RuntimeMethod_var
                                         ),
                    pGVar53 == (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0)) ||
                   (pTVar54 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                        ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                         pGVar53,(MethodInfo *)0x0),
                   pTVar54 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
                goto LAB_1087ea7f;
                pVVar55 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                    ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                     (unaff_EBP + -0x8c0),pTVar54,(MethodInfo *)0x0);
                fVar69 = pVVar55->___z_4;
                *(undefined8 *)(unaff_EBP + -0x3bc) = *(undefined8 *)pVVar55;
                if ((*(float *)(unaff_EBP + -0x278) <= *(float *)(unaff_EBP + -0x3bc)) &&
                   (*(undefined8 *)(unaff_EBP + -0x3c8) = *(undefined8 *)pVVar55,
                   *(float *)(unaff_EBP + -0x274) < *(float *)(unaff_EBP + -0x3c4) ||
                   *(float *)(unaff_EBP + -0x274) == *(float *)(unaff_EBP + -0x3c4))) {
                  *(undefined8 *)(unaff_EBP + -0x3d4) = *(undefined8 *)pVVar55;
                  *(float *)(unaff_EBP + -0x3cc) = fVar69;
                  if ((*(float *)(unaff_EBP + -0x270) < *(float *)(unaff_EBP + -0x3cc) ||
                       *(float *)(unaff_EBP + -0x270) == *(float *)(unaff_EBP + -0x3cc)) &&
                     ((*(float *)(unaff_EBP + -0x3bc) < *(float *)(unaff_EBP + -0xf4) &&
                      (*(undefined8 *)(unaff_EBP + -0x3e0) = *(undefined8 *)pVVar55,
                      *(float *)(unaff_EBP + -0x3dc) < *(float *)(unaff_EBP + -0xf0))))) {
                    *(undefined8 *)(unaff_EBP + -0x3ec) = *(undefined8 *)pVVar55;
                    *(float *)(unaff_EBP + -0x3e4) = fVar69;
                    if (*(float *)(unaff_EBP + -0x3e4) < *(float *)(unaff_EBP + -0xec)) {
                      uVar1 = pVVar55->___x_2;
                      uVar11 = pVVar55->___y_3;
                      VVar37.___y_3 = (float)uVar11;
                      VVar37.___x_2 = (float)uVar1;
                      VVar25.___z_4 = *(float *)(unaff_EBP + -0x7c);
                      VVar25._0_8_ = *(undefined8 *)(unaff_EBP + -0x40);
                      VVar37.___z_4 = fVar69;
                      pVVar55 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline
                                          ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                           (unaff_EBP + -0x8d0),VVar25,VVar37,(MethodInfo *)0x0);
                      *(undefined8 *)(unaff_EBP + -0xd4) = *(undefined8 *)pVVar55;
                      *(float *)(unaff_EBP + -0xcc) = pVVar55->___z_4;
                      fVar69 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249
                                         ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                          (unaff_EBP + -0xd4),(MethodInfo *)0x0);
                      *(float *)(unaff_EBP + -0x5c) = fVar69;
                      if ((*(float *)(unaff_EBP + -0x5c) <= ___real_3f23d70b) &&
                         (pOVar46 = Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared
                                              ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                *)pGVar53,(bool)((char)unaff_EBP + 'l'),
                                               Component_TryGetComponent_TisBirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB_m2044F99A99D9FDBEC7096C2298DB523BEF6A3BD9_RuntimeMethod_var
                                              ), (char)pOVar46 != '\0')) {
                        pIVar47 = Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                             pGVar53,
                                             Component_GetComponent_TisPropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952_m4AD885AB12D9CA67AE0322471B8DB182AB024F62_RuntimeMethod_var
                                            );
                        if (pIVar47 == (Il2CppObject *)0x0) goto LAB_1087ea7f;
                        if (*(char *)&pIVar47[2].monitor != '\0') {
                          if (*(int *)(unaff_EBP + -0x94) == 0) goto LAB_1087ea7f;
                          pOVar51 = *(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A **)
                                     (*(int *)(unaff_EBP + -0x94) + 0xc);
                          if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var
                               ->has_cctor != '\0') &&
                             (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                              cctor_finished == 0)) {
                            il2cpp_runtime_class_init
                                      (
                                      Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var
                                      );
                          }
                          bVar41 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                                             (pOVar51,(MethodInfo *)0x0);
                          if (!bVar41) {
                            if (*(int *)(unaff_EBP + -0x94) == 0) goto LAB_1087ea7f;
                            *(undefined1 *)(unaff_EBP + -0x25) =
                                 *(undefined1 *)(*(int *)(unaff_EBP + -0x94) + 0x10);
                            fVar69 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872
                                               ((MethodInfo *)0x0);
                            *(float *)(unaff_EBP + -0x48) = fVar69;
                            fVar69 = ((float)*(byte *)(unaff_EBP + -0x25) * __real_3e99999a -
                                     *(float *)(unaff_EBP + -0x5c)) +
                                     *(float *)(unaff_EBP + -0x48) * __real_3e4ccccd;
                            if (*(float *)(unaff_EBP + -0x58) <= fVar69) {
                              *(float *)(unaff_EBP + -0x58) = fVar69;
                              *(undefined4 *)(unaff_EBP + -0x24) =
                                   *(undefined4 *)(unaff_EBP + -0x94);
                            }
                          }
                        }
                      }
                    }
                  }
                }
                pLVar59 = *(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 **)(unaff_EBP + -0xa4);
              }
              iVar60 = *(int *)(unaff_EBP + -0x78);
              iVar44 = *(int *)(unaff_EBP + -0x50);
            }
            fVar69 = *(float *)(unaff_EBP + -0x34);
          }
        }
      }
      if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
      }
      pBVar18 = *(BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB **)(unaff_EBP + -0x24);
      bVar41 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                         ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pBVar18,
                          (MethodInfo *)0x0);
      if (bVar41) {
        pBVar62 = *(BirdFlock_tB63DB4CEF81D7D9D17C18531A0BEEEA771442436 **)(unaff_EBX + 8);
        BirdFlock_SetLanding_mA7B5BA5BD831833CBA54D626B3CA707E564F8DA3
                  (pBVar62,*(Bird_t844A261674A59156BC85FE5538301FE90489C0E8 **)(unaff_EBP + -0x2c),
                   (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)0x0,(MethodInfo *)0x0);
        pBVar61 = *(Bird_t844A261674A59156BC85FE5538301FE90489C0E8 **)(unaff_EBP + -0x2c);
        BirdFlock_SetLanding_mA7B5BA5BD831833CBA54D626B3CA707E564F8DA3
                  (pBVar62,pBVar61,pBVar18,(MethodInfo *)0x0);
        pVVar55 = BirdFlock_GetLandingPos_m29D97BDB3990AC0642EBC4BFD12590E0DEFD3D97
                            ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                             (unaff_EBP + -0x8e0),pBVar62,pBVar61,(MethodInfo *)0x0);
        pVVar55 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline
                            ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                             (unaff_EBP + -0x8f0),*pVVar55,pBVar61->___posMid_11,(MethodInfo *)0x0);
        fVar70 = pVVar55->___y_3;
        fVar69 = pVVar55->___z_4;
        (pBVar61->___velocityNext_13).___x_2 = pVVar55->___x_2;
        (pBVar61->___velocityNext_13).___y_3 = fVar70;
        (pBVar61->___velocityNext_13).___z_4 = fVar69;
        if (pBVar61->___mf1_7 == (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0)
        goto LAB_1087ea7f;
        MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
                  (pBVar61->___mf1_7,pBVar62->___landMesh_8,(MethodInfo *)0x0);
        fVar69 = (pBVar61->___velocityNext_13).___z_4;
        *(undefined8 *)(unaff_EBP + -0x3f8) = *(undefined8 *)&pBVar61->___velocityNext_13;
        *(undefined4 *)(unaff_EBP + -0x3f4) = 0;
        VVar38.___z_4 = fVar69;
        VVar38._0_8_ = *(undefined8 *)(unaff_EBP + -0x3f8);
        pQVar57 = Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF
                            ((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)
                             (unaff_EBP + -0xac0),VVar38,(MethodInfo *)0x0);
        fVar69 = pQVar57->___y_1;
        fVar70 = pQVar57->___z_2;
        fVar68 = pQVar57->___w_3;
        (pBVar61->___rotation1_10).___x_0 = pQVar57->___x_0;
        (pBVar61->___rotation1_10).___y_1 = fVar69;
        (pBVar61->___rotation1_10).___z_2 = fVar70;
        (pBVar61->___rotation1_10).___w_3 = fVar68;
        BirdFlock_SetState_m72806889745C4C557D55CE9E6839387A5AE818AF
                  (pBVar62,pBVar61,'\x02',(MethodInfo *)0x0);
      }
      else {
        pBVar61 = *(Bird_t844A261674A59156BC85FE5538301FE90489C0E8 **)(unaff_EBP + -0x2c);
      }
switchD_1087b8af_default:
      if (pBVar61->___mf0_6 != (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0) {
        pOVar51 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                  MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E
                            (pBVar61->___mf0_6,(MethodInfo *)0x0);
        pMVar16 = *(MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A **)
                   (*(int *)(unaff_EBP + -0x2c) + 0x18);
        if (pMVar16 != (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0) {
          pOVar52 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                    MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E
                              (pMVar16,(MethodInfo *)0x0);
          if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished
              == 0)) {
            il2cpp_runtime_class_init
                      (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
          }
          bVar41 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90
                             (pOVar51,pOVar52,(MethodInfo *)0x0);
          iVar44 = *(int *)(unaff_EBP + -0x2c);
          pCVar19 = *(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)(iVar44 + 0x14);
          if (bVar41) {
            if ((pCVar19 != (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) &&
               (pGVar53 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                                    (pCVar19,(MethodInfo *)0x0),
               pGVar53 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0)) {
              GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
                        (pGVar53,true,(MethodInfo *)0x0);
LAB_1087e1f6:
              *(undefined1 *)(unaff_EBP + -4) = 0;
              *(undefined4 *)(unaff_EBP + -0x128 + *(int *)(unaff_EBP + -0x44) * 4) = 0x1164;
              *(int *)(unaff_EBP + -0x110) = *(int *)(unaff_EBP + -0x110) + 1;
              FUN_1087e271();
              return;
            }
          }
          else if ((pCVar19 != (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) &&
                  (pGVar53 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                                       (pCVar19,(MethodInfo *)0x0),
                  pGVar53 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0)) {
            GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
                      (pGVar53,false,(MethodInfo *)0x0);
            pCVar19 = *(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)(iVar44 + 0x18);
            if (pCVar19 != (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
              pTVar54 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                  (pCVar19,(MethodInfo *)0x0);
              pVVar55 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
                                  ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                   (unaff_EBP + -0x6c0),(MethodInfo *)0x0);
              if (pTVar54 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
                          (pTVar54,*pVVar55,(MethodInfo *)0x0);
                goto LAB_1087e1f6;
              }
            }
          }
        }
      }
      goto LAB_1087ea7f;
    }
    fVar70 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872((MethodInfo *)0x0);
    fVar69 = __real_3e99999a;
    *(float *)(unaff_EBP + -0x24) = fVar70;
    if (*(float *)(unaff_EBP + -0x24) <= fVar69 && fVar69 != *(float *)(unaff_EBP + -0x24)) {
      if (*(char *)(unaff_EBP + -0x25) == '\0') {
        pMVar16 = pBVar61->___mf1_7;
        fVar70 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872((MethodInfo *)0x0);
        fVar69 = __real_3f000000;
        *(float *)(unaff_EBP + -0x24) = fVar70;
        if (fVar69 < *(float *)(unaff_EBP + -0x24) || fVar69 == *(float *)(unaff_EBP + -0x24)) {
          pMVar42 = *(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 **)
                     (*(int *)(unaff_EBX + 8) + 0x10);
        }
        else {
          pMVar42 = *(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 **)
                     (*(int *)(unaff_EBX + 8) + 0x14);
        }
        if (pMVar16 == (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0)
        goto LAB_1087ea7f;
        MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
                  (pMVar16,pMVar42,(MethodInfo *)0x0);
        goto switchD_1087b8af_default;
      }
      pVVar49 = BirdFlock_GetLandingPos_m29D97BDB3990AC0642EBC4BFD12590E0DEFD3D97
                          ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x870)
                           ,*(BirdFlock_tB63DB4CEF81D7D9D17C18531A0BEEEA771442436 **)(unaff_EBX + 8)
                           ,pBVar61,(MethodInfo *)0x0);
      pMVar16 = pBVar61->___mf1_7;
      uVar9._0_4_ = pVVar49->___x_2;
      uVar9._4_4_ = pVVar49->___y_3;
      fVar69 = pVVar49->___z_4;
      *(undefined8 *)(unaff_EBP + -0x40) = uVar9;
      *(undefined8 *)(unaff_EBP + -0x284) = uVar9;
      *(float *)(unaff_EBP + -0x50) = fVar69;
      fVar70 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872((MethodInfo *)0x0);
      fVar69 = __real_3f000000;
      *(float *)(unaff_EBP + -0x24) = fVar70;
      if (fVar69 < *(float *)(unaff_EBP + -0x24) || fVar69 == *(float *)(unaff_EBP + -0x24)) {
        pMVar42 = *(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 **)
                   (*(int *)(unaff_EBX + 8) + 0x10);
      }
      else {
        pMVar42 = *(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 **)
                   (*(int *)(unaff_EBX + 8) + 0x18);
      }
      if (pMVar16 == (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0) goto LAB_1087ea7f;
      MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
                (pMVar16,pMVar42,(MethodInfo *)0x0);
      pMVar16 = *(MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A **)
                 (*(int *)(unaff_EBP + -0x2c) + 0x18);
      if (pMVar16 == (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0) goto LAB_1087ea7f;
      pOVar52 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E
                          (pMVar16,(MethodInfo *)0x0);
      pIVar40 = Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
      iVar60 = *(int *)(unaff_EBX + 8);
      *(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A **)(unaff_EBP + -0x24) = pOVar52;
      pOVar51 = *(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A **)(iVar60 + 0x18);
      if ((pIVar40->has_cctor != '\0') && (pIVar40->cctor_finished == 0)) {
        il2cpp_runtime_class_init(pIVar40);
        pOVar52 = *(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A **)(unaff_EBP + -0x24);
      }
      bVar41 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                         (pOVar52,pOVar51,(MethodInfo *)0x0);
      pBVar61 = *(Bird_t844A261674A59156BC85FE5538301FE90489C0E8 **)(unaff_EBP + -0x2c);
      if (bVar41) {
        pTVar54 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pBVar61,
                             (MethodInfo *)0x0);
        if (pTVar54 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
        goto LAB_1087ea7f;
        pVVar49 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046
                            ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                             (unaff_EBP + -0x880),pTVar54,(MethodInfo *)0x0);
        *(undefined8 *)(unaff_EBP + -0x398) = *(undefined8 *)pVVar49;
        *(float *)(unaff_EBP + -0x280) =
             *(float *)(unaff_EBP + -0x394) * __real_3c23d70a + *(float *)(unaff_EBP + -0x280);
        uVar64 = *(undefined8 *)(unaff_EBP + -0x284);
      }
      else {
        uVar64 = *(undefined8 *)(unaff_EBP + -0x40);
      }
      VVar24.___z_4 = *(float *)(unaff_EBP + -0x50);
      VVar24.___x_2 = (float)(int)uVar64;
      VVar24.___y_3 = (float)(int)((ulonglong)uVar64 >> 0x20);
      pVVar49 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline
                          ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x890)
                           ,VVar24,pBVar61->___posMid_11,(MethodInfo *)0x0);
      fVar70 = pVVar49->___y_3;
      fVar69 = pVVar49->___z_4;
      pVVar55->___x_2 = pVVar49->___x_2;
      pVVar55->___y_3 = fVar70;
      *(float *)(iVar44 + 0x60) = fVar69;
      goto switchD_1087b8af_default;
    }
    if ((pBVar61->___landing_20 == (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)0x0) ||
       (pTVar54 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                             pBVar61->___landing_20,(MethodInfo *)0x0),
       pTVar54 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) goto LAB_1087ea7f;
    pVVar55 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x840),
                         pTVar54,(MethodInfo *)0x0);
    uVar56 = __xmm_80000000800000008000000080000000;
    uVar8._0_4_ = pVVar55->___x_2;
    uVar8._4_4_ = pVVar55->___y_3;
    fVar69 = pVVar55->___z_4;
    *(undefined8 *)(unaff_EBP + -0x380) = uVar8;
    *(undefined8 *)(unaff_EBP + -0x4d0) = uVar8;
    *(undefined8 *)(unaff_EBP + -0x38c) = *(undefined8 *)pVVar55;
    *(float *)(unaff_EBP + -900) = fVar69;
    *(uint *)(unaff_EBP + -0x260) = *(uint *)(unaff_EBP + -0x380) ^ uVar56;
    *(uint *)(unaff_EBP + -0x25c) = *(uint *)(unaff_EBP + -0x4cc) ^ uVar56;
    *(uint *)(unaff_EBP + -600) = *(uint *)(unaff_EBP + -900) ^ uVar56;
    pIVar40 = ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var;
    pBVar18 = pBVar61->___landing_20;
    if (pBVar18 == (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)0x0) goto LAB_1087ea7f;
    uVar66._0_4_ = (pBVar18->___normal_6).___x_2;
    uVar66._4_4_ = (pBVar18->___normal_6).___y_3;
    fVar69 = (pBVar18->___normal_6).___z_4;
    *(undefined8 *)(unaff_EBP + -0x40) = uVar66;
    if ((pIVar40->has_cctor != '\0') && (pIVar40->cctor_finished == 0)) {
      il2cpp_runtime_class_init(pIVar40);
      uVar66 = *(undefined8 *)(unaff_EBP + -0x40);
    }
    fVar28.___z_2 = fVar69;
    fVar28.___x_0 = (float)(int)uVar66;
    fVar28.___y_1 = (float)(int)((ulonglong)uVar66 >> 0x20);
    pfVar48 = ExtraMath_SetY_m65C79C2D27A9408438A588993C47DCAC2216E149
                        ((float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *)(unaff_EBP + -0x850),
                         fVar28,0.0,(MethodInfo *)0x0);
    pVVar55 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x860),
                         *(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x260),
                         (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E)*pfVar48,
                         (MethodInfo *)0x0);
    fVar69 = pVVar55->___z_4;
    *(undefined8 *)(unaff_EBP + -0x2b4) = *(undefined8 *)pVVar55;
    *(float *)(unaff_EBP + -0x2b0) = *(float *)(unaff_EBP + -0x2b0) * __real_3ecccccd;
    iVar44 = 0x28;
    if (*(char *)(unaff_EBP + -0x25) == '\0') {
      iVar44 = 0x14;
    }
    fVar70 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2
                       ((float)((uint)(float)iVar44 ^ __xmm_80000000800000008000000080000000),
                        (float)iVar44,(MethodInfo *)0x0);
    *(float *)(unaff_EBP + -0x24) = fVar70;
    pQVar57 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3
                        ((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)
                         (unaff_EBP + -0xb10),0.0,*(float *)(unaff_EBP + -0x24),0.0,
                         (MethodInfo *)0x0);
    fVar70 = pQVar57->___y_1;
    fVar68 = pQVar57->___z_2;
    fVar63 = pQVar57->___w_3;
    *(float *)(unaff_EBP + -0xc0) = pQVar57->___x_0;
    *(float *)(unaff_EBP + -0xbc) = fVar70;
    *(float *)(unaff_EBP + -0xb8) = fVar68;
    *(float *)(unaff_EBP + -0xb4) = fVar63;
    VVar36.___z_4 = fVar69;
    VVar36._0_8_ = *(undefined8 *)(unaff_EBP + -0x2b4);
    pQVar57 = Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF
                        ((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)
                         (unaff_EBP + -0xaa0),VVar36,(MethodInfo *)0x0);
    fVar69 = pQVar57->___x_0;
    fVar70 = pQVar57->___y_1;
    fVar68 = pQVar57->___z_2;
    fVar63 = pQVar57->___w_3;
    uVar71 = *(undefined4 *)(unaff_EBP + -0xc0);
    uVar72 = *(undefined4 *)(unaff_EBP + -0xbc);
    uVar73 = *(undefined4 *)(unaff_EBP + -0xb8);
    fVar74 = *(float *)(unaff_EBP + -0xb4);
    pQVar57 = (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(unaff_EBP + -0xab0);
    break;
  default:
    goto switchD_1087b8af_default;
  }
  QVar21.___y_1 = (float)uVar72;
  QVar21.___x_0 = (float)uVar71;
  QVar21.___z_2 = (float)uVar73;
  QVar21.___w_3 = fVar74;
  QVar33.___y_1 = fVar70;
  QVar33.___x_0 = fVar69;
  QVar33.___z_2 = fVar68;
  QVar33.___w_3 = fVar63;
  pQVar57 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0
                      (pQVar57,QVar21,QVar33,(MethodInfo *)0x0);
  fVar69 = pQVar57->___y_1;
  fVar70 = pQVar57->___z_2;
  fVar68 = pQVar57->___w_3;
  (pBVar61->___rotation1_10).___x_0 = pQVar57->___x_0;
  (pBVar61->___rotation1_10).___y_1 = fVar69;
  (pBVar61->___rotation1_10).___z_2 = fVar70;
  (pBVar61->___rotation1_10).___w_3 = fVar68;
  goto switchD_1087b8af_default;
LAB_1087e2c0:
  fVar69 = __real_3f000000;
  iVar60 = *(int *)(unaff_EBX + 8);
  if (iVar44 <= (int)uVar56) {
    if (0 < *(int *)(iVar60 + 0x4c)) {
      *(undefined4 *)(iVar60 + 0x4c) = 0;
    }
    *(undefined4 *)(unaff_EBP + -0x128 + *(int *)(unaff_EBP + -0x44) * 4) = 0x13d0;
    FUN_1087ea4f();
    return;
  }
  iVar44 = *(int *)(iVar60 + 0x3c);
  if (iVar44 == 0) goto LAB_1087ea7f;
  if (*(uint *)(iVar44 + 0xc) <= uVar56) {
                    /* WARNING: Subroutine does not return */
    ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
              ((MethodInfo *)0x0);
  }
  iVar44 = *(int *)(*(int *)(iVar44 + 8) + 0x10 + uVar56 * 4);
  if (iVar44 == 0) goto LAB_1087ea7f;
  uVar64 = *(undefined8 *)(iVar44 + 0x4c);
  uVar71 = *(undefined4 *)(iVar44 + 0x54);
  *(undefined8 *)(unaff_EBP + -0x218) = uVar64;
  *(undefined8 *)(unaff_EBP + -0x14c) = uVar64;
  uVar64 = *(undefined8 *)(iVar44 + 0x4c);
  *(undefined4 *)(unaff_EBP + -0x21c) = uVar71;
  *(undefined8 *)(unaff_EBP + -0x224) = uVar64;
  uVar64 = *(undefined8 *)(iVar44 + 0x40);
  uVar71 = *(undefined4 *)(iVar44 + 0x48);
  *(undefined8 *)(unaff_EBP + -0x20c) = uVar64;
  *(undefined8 *)(unaff_EBP + -0x200) = uVar64;
  *(undefined8 *)(unaff_EBP + -500) = *(undefined8 *)(iVar44 + 0x40);
  *(undefined4 *)(unaff_EBP + -0x1ec) = uVar71;
  *(float *)(unaff_EBP + -0x6f0) =
       *(float *)(unaff_EBP + -0x20c) - *(float *)(unaff_EBP + -0x218) * fVar69;
  *(undefined4 *)(unaff_EBP + -0x6ec) = 0;
  *(undefined4 *)(unaff_EBP + -0x6e8) = 0;
  *(undefined4 *)(unaff_EBP + -0x6e4) = 0;
  *(float *)(unaff_EBP + -0x84) =
       *(float *)(unaff_EBP + -0x1fc) - *(float *)(unaff_EBP + -0x148) * fVar69;
  *(float *)(unaff_EBP + -0xb0) =
       *(float *)(unaff_EBP + -0x1ec) - *(float *)(unaff_EBP + -0x21c) * fVar69;
  *(undefined8 *)(unaff_EBP + -0x100) = *(undefined8 *)(iVar44 + 0x40);
  uVar64 = *(undefined8 *)(iVar44 + 0x58);
  *(undefined8 *)(unaff_EBP + -0x1d0) = uVar64;
  *(undefined4 *)(unaff_EBP + -0xf8) = uVar71;
  uVar71 = *(undefined4 *)(iVar44 + 0x60);
  *(undefined8 *)(unaff_EBP + -0x230) = uVar64;
  uVar64 = *(undefined8 *)(iVar44 + 0x58);
  *(undefined4 *)(unaff_EBP + -0x1d4) = uVar71;
  *(undefined8 *)(unaff_EBP + -0x1dc) = uVar64;
  uVar64 = *(undefined8 *)(iVar44 + 0x40);
  *(undefined8 *)(unaff_EBP + -0x1c4) = uVar64;
  uVar71 = *(undefined4 *)(iVar44 + 0x48);
  *(undefined8 *)(unaff_EBP + -0x1b8) = uVar64;
  *(undefined8 *)(unaff_EBP + -0x170) = *(undefined8 *)(iVar44 + 0x40);
  *(undefined4 *)(unaff_EBP + -0x168) = uVar71;
  *(float *)(unaff_EBP + -0x48) =
       *(float *)(unaff_EBP + -0x1d0) * fVar69 + *(float *)(unaff_EBP + -0x1c4);
  *(float *)(unaff_EBP + -0xac) =
       *(float *)(unaff_EBP + -0x1b4) + *(float *)(unaff_EBP + -0x22c) * fVar69;
  *(float *)(unaff_EBP + -0xa8) =
       *(float *)(unaff_EBP + -0x168) + *(float *)(unaff_EBP + -0x1d4) * fVar69;
  *(undefined4 *)(unaff_EBP + -0x6c) = *(undefined4 *)(iVar44 + 0x70);
  fVar69 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844((MethodInfo *)0x0);
  *(float *)(unaff_EBP + -0x3c) = fVar69;
  fVar70 = Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
                     (*(float *)(unaff_EBP + -0x6c),*(float *)(unaff_EBP + -0x6c) + __real_3e99999a,
                      *(float *)(unaff_EBP + -0x3c),(MethodInfo *)0x0);
  fVar68 = __real_3f800000;
  fVar69 = *(float *)(unaff_EBP + -0x84);
  *(float *)(unaff_EBP + -0x34) = fVar70;
  fVar70 = *(float *)(unaff_EBP + -0x34);
  fVar68 = fVar68 - fVar70;
  *(float *)(unaff_EBP + -0x50) = fVar68;
  fVar63 = fVar68 * fVar68;
  *(float *)(unaff_EBP + -0x7c) = fVar63;
  fVar68 = (fVar68 + fVar68) * fVar70;
  fVar70 = fVar70 * fVar70;
  *(float *)(unaff_EBP + -0x84) = fVar70;
  *(float *)(unaff_EBP + -0xe0) =
       *(float *)(unaff_EBP + -0xa8) * fVar70 +
       *(float *)(unaff_EBP + -0xf8) * fVar68 + *(float *)(unaff_EBP + -0xb0) * fVar63;
  uVar71 = *(undefined4 *)(unaff_EBP + -0xe0);
  *(ulonglong *)(iVar44 + 100) =
       CONCAT44(*(float *)(unaff_EBP + -0xac) * fVar70 +
                *(float *)(unaff_EBP + -0xfc) * fVar68 + fVar69 * fVar63,
                *(float *)(unaff_EBP + -0x6f0) * fVar63 + *(float *)(unaff_EBP + -0x100) * fVar68 +
                *(float *)(unaff_EBP + -0x48) * fVar70);
  *(undefined4 *)(iVar44 + 0x6c) = uVar71;
  if ((*(char *)(iVar44 + 0x75) == '\x03') || (*(char *)(iVar44 + 0x76) == '\x03')) {
    *(float *)(unaff_EBP + -100) = (float)(*(char *)(iVar44 + 0x75) == '\x03');
    pMVar16 = *(MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A **)(iVar44 + 0x14);
    *(float *)(unaff_EBP + -0x24) = (float)(*(char *)(iVar44 + 0x76) == '\x03');
    if (pMVar16 == (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0) goto LAB_1087ea7f;
    pMVar42 = MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E
                        (pMVar16,(MethodInfo *)0x0);
    pIVar40 = Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
    *(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 **)(unaff_EBP + -0x6c) = pMVar42;
    pOVar51 = *(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A **)(*(int *)(unaff_EBX + 8) + 0x18)
    ;
    *(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A **)(unaff_EBP + -0x3c) = pOVar51;
    if ((pIVar40->has_cctor != '\0') && (pIVar40->cctor_finished == 0)) {
      il2cpp_runtime_class_init(pIVar40);
      pOVar51 = *(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A **)(unaff_EBP + -0x3c);
    }
    bVar41 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                       (*(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A **)(unaff_EBP + -0x6c),
                        pOVar51,(MethodInfo *)0x0);
    if (bVar41) {
      *(float *)(unaff_EBP + -100) = *(float *)(unaff_EBP + -100) * __real_3f333333;
    }
    if (*(MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A **)(iVar44 + 0x18) ==
        (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0) goto LAB_1087ea7f;
    pMVar42 = MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E
                        (*(MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A **)(iVar44 + 0x18),
                         (MethodInfo *)0x0);
    pIVar40 = Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
    *(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 **)(unaff_EBP + -0x6c) = pMVar42;
    pOVar51 = *(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A **)(*(int *)(unaff_EBX + 8) + 0x18)
    ;
    *(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A **)(unaff_EBP + -0x3c) = pOVar51;
    if ((pIVar40->has_cctor != '\0') && (pIVar40->cctor_finished == 0)) {
      il2cpp_runtime_class_init(pIVar40);
      pOVar51 = *(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A **)(unaff_EBP + -0x3c);
    }
    bVar41 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                       (*(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A **)(unaff_EBP + -0x6c),
                        pOVar51,(MethodInfo *)0x0);
    fVar69 = *(float *)(unaff_EBP + -0x24);
    if (bVar41) {
      fVar69 = fVar69 * __real_3f333333;
    }
    fVar69 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                       (*(float *)(unaff_EBP + -100),fVar69,*(float *)(unaff_EBP + -0x34),
                        (MethodInfo *)0x0);
    *(undefined4 *)(unaff_EBP + -0x6c) = *(undefined4 *)(iVar44 + 0x10);
    *(float *)(unaff_EBP + -0x3c) = fVar69;
    pVVar55 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x6c0),
                         (MethodInfo *)0x0);
    fVar69 = *(float *)(unaff_EBP + -0x3c);
    uVar64._0_4_ = pVVar55->___x_2;
    uVar64._4_4_ = pVVar55->___y_3;
    fVar70 = pVVar55->___z_4;
    *(undefined8 *)(unaff_EBP + -0x194) = uVar64;
    *(undefined8 *)(unaff_EBP + -0x1ac) = uVar64;
    *(undefined8 *)(unaff_EBP + -0x1a0) = *(undefined8 *)pVVar55;
    *(float *)(unaff_EBP + -0x198) = fVar70;
    fVar70 = *(float *)(unaff_EBP + -0x1a8) * fVar69 * ___real_3e6147ae;
    fVar68 = *(float *)(unaff_EBP + -0x198) * fVar69 * ___real_3e6147ae;
    *(float *)(unaff_EBP + -0x10c) = fVar69 * *(float *)(unaff_EBP + -0x194) * ___real_3e6147ae;
    *(float *)(unaff_EBP + -0x108) = fVar70;
    *(float *)(unaff_EBP + -0x104) = fVar68;
    if (*(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 **)(unaff_EBP + -0x6c) ==
        (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_1087ea7f;
    Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
              (*(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 **)(unaff_EBP + -0x6c),
               *(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x10c),
               (MethodInfo *)0x0);
    if ((*(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)(iVar44 + 0x10) ==
         (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) ||
       (pGVar53 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                            (*(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)
                              (iVar44 + 0x10),(MethodInfo *)0x0),
       pGVar53 == (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0)) goto LAB_1087ea7f;
    bVar41 = true;
  }
  else {
    if ((*(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)(iVar44 + 0x10) ==
         (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) ||
       (pGVar53 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                            (*(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)
                              (iVar44 + 0x10),(MethodInfo *)0x0),
       pGVar53 == (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0)) goto LAB_1087ea7f;
    bVar41 = false;
  }
  GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(pGVar53,bVar41,(MethodInfo *)0x0);
  if (*(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 **)(iVar44 + 0xc) ==
      (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_1087ea7f;
  Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
            (*(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 **)(iVar44 + 0xc),
             *(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(iVar44 + 100),(MethodInfo *)0x0)
  ;
  *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(iVar44 + 0xc);
  pQVar57 = Quaternion_Lerp_mBFA4C4D2574C8140AA840273D3E6565D66F6F261
                      ((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(unaff_EBP + -0x7f0),
                       *(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(iVar44 + 0x20),
                       *(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(iVar44 + 0x30),
                       *(float *)(unaff_EBP + -0x34),(MethodInfo *)0x0);
  if (*(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 **)(unaff_EBP + -0x3c) ==
      (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_1087ea7f;
  Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4
            (*(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 **)(unaff_EBP + -0x3c),*pQVar57,
             (MethodInfo *)0x0);
  if ((*(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)(iVar44 + 0x14) ==
       (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) ||
     (pGVar53 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                          (*(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)(iVar44 + 0x14),
                           (MethodInfo *)0x0),
     pGVar53 == (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0)) goto LAB_1087ea7f;
  bVar41 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE
                     (pGVar53,(MethodInfo *)0x0);
  if (bVar41) {
    if (*(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)(iVar44 + 0x14) ==
        (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) goto LAB_1087ea7f;
    pTVar54 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                        (*(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)(iVar44 + 0x14),
                         (MethodInfo *)0x0);
    *(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 **)(unaff_EBP + -0x3c) = pTVar54;
    pVVar55 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x700),
                         (MethodInfo *)0x0);
    fVar69 = __real_3f800000;
    *(undefined8 *)(unaff_EBP + -0x1e8) = *(undefined8 *)pVVar55;
    *(float *)(unaff_EBP + -0x174) = pVVar55->___z_4;
    fVar69 = fVar69 - *(float *)(unaff_EBP + -0x84) * *(float *)(unaff_EBP + -0x34);
    uVar10._0_4_ = pVVar55->___x_2;
    uVar10._4_4_ = pVVar55->___y_3;
    *(undefined8 *)(unaff_EBP + -0x188) = uVar10;
    *(undefined8 *)(unaff_EBP + -0x17c) = uVar10;
    *(float *)(unaff_EBP + -0xf4) = *(float *)(unaff_EBP + -0x1e8) * fVar69;
    *(float *)(unaff_EBP + -0xf0) = *(float *)(unaff_EBP + -0x184) * fVar69;
    *(float *)(unaff_EBP + -0xec) = *(float *)(unaff_EBP + -0x174) * fVar69;
    if (*(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 **)(unaff_EBP + -0x3c) ==
        (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_1087ea7f;
    Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
              (*(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 **)(unaff_EBP + -0x3c),
               *(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0xf4),
               (MethodInfo *)0x0);
    if (*(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)(iVar44 + 0x18) ==
        (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) goto LAB_1087ea7f;
    pTVar54 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                        (*(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)(iVar44 + 0x18),
                         (MethodInfo *)0x0);
    pVVar55 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x7b0),
                         (MethodInfo *)0x0);
    pVVar55 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x7a0),
                         *pVVar55,__real_3f800000 -
                                  *(float *)(unaff_EBP + -0x7c) * *(float *)(unaff_EBP + -0x50),
                         (MethodInfo *)0x0);
    if (pTVar54 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_1087ea7f;
    Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
              (pTVar54,*pVVar55,(MethodInfo *)0x0);
  }
  iVar44 = *(int *)(unaff_EBP + -0x4c);
  uVar56 = uVar56 + 1;
  goto LAB_1087e2c0;
LAB_1087d233:
  if ((char)uVar56 == '\0' && cVar58 == '\0') goto LAB_1087d685;
  bVar39 = bVar13 ^ 1;
  *(byte *)(unaff_EBP + -0x7d) = bVar13;
  *(byte *)(unaff_EBP + -0x25) = bVar39;
  if (bVar13 == 0) {
    bVar13 = bVar39;
    if ((char)uVar56 == '\0') goto LAB_1087d233;
    *(int *)(unaff_EBP + -0x5c) = iVar60 + -1;
    *(byte *)(unaff_EBP + -0x58) = (byte)((uint)(iVar60 + -1) >> 0x1f) ^ 1;
    iVar50 = iVar44;
  }
  else {
    bVar13 = bVar39;
    if (cVar58 == '\0') goto LAB_1087d233;
    iVar50 = iVar44 + 1;
    *(bool *)(unaff_EBP + -0x2d) = iVar50 < *(int *)(unaff_EBP + -0x4c);
    iVar60 = iVar44;
  }
  pLVar59 = *(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 **)(*(int *)(unaff_EBX + 8) + 0x3c);
  if ((pLVar59 == (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)0x0) ||
     (pGVar53 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                          (pLVar59,iVar60,
                           List_1_get_Item_mA819AC4D6EC8BABA8328B8366A4F71E7BB7FB982_RuntimeMethod_var
                          ), pGVar53 == (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0)
     ) {
LAB_1087ea7f:
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  iVar44 = *(int *)(unaff_EBP + -0x2c);
  *(undefined4 *)(unaff_EBP + -0x4bc) = *(undefined4 *)(pGVar53 + 9);
  uVar71 = *(undefined4 *)(iVar44 + 0x6c);
  *(undefined8 *)(unaff_EBP + -0x4a0) = *(undefined8 *)(iVar44 + 100);
  uVar64 = *(undefined8 *)&pGVar53[8].field_0x4;
  *(undefined8 *)(unaff_EBP + -0x494) = uVar64;
  fVar69 = *(float *)(unaff_EBP + -0x494) - *(float *)(unaff_EBP + -0x4a0);
  *(undefined8 *)(unaff_EBP + -0x4ac) = uVar64;
  *(undefined8 *)(unaff_EBP + -0x4b8) = *(undefined8 *)(iVar44 + 100);
  *(undefined8 *)(unaff_EBP + -0x4c4) = *(undefined8 *)&pGVar53[8].field_0x4;
  *(undefined8 *)(unaff_EBP + -0x614) = *(undefined8 *)(iVar44 + 100);
  *(undefined4 *)(unaff_EBP + -0x60c) = uVar71;
  *(float *)(unaff_EBP + -0x740) = *(float *)(unaff_EBP + -0x4bc) - *(float *)(unaff_EBP + -0x60c);
  *(ulonglong *)(unaff_EBP + -0x140) =
       CONCAT44(*(float *)(unaff_EBP + -0x4a8) - *(float *)(unaff_EBP + -0x4b4),fVar69);
  *(undefined4 *)(unaff_EBP + -0x138) = *(undefined4 *)(unaff_EBP + -0x740);
  iVar44 = iVar50;
  if (*(char *)(unaff_EBP + -0x7d) == '\0') {
    if (__real_40000000 <= fVar69) goto LAB_1087d37e;
    fVar69 = *(float *)(unaff_EBP + -0x78);
    uVar56 = extraout_EDX & 0xffffff00;
    cVar58 = *(char *)(unaff_EBP + -0x2d);
    *(uint *)(unaff_EBP + -0x58) = uVar56;
LAB_1087d22d:
    bVar13 = *(byte *)(unaff_EBP + -0x25);
LAB_1087d230:
    iVar60 = *(int *)(unaff_EBP + -0x5c);
  }
  else {
    if (__real_40000000 < fVar69) {
      fVar69 = *(float *)(unaff_EBP + -0x78);
      cVar58 = '\0';
      uVar56 = *(uint *)(unaff_EBP + -0x58);
      *(undefined1 *)(unaff_EBP + -0x2d) = 0;
      goto LAB_1087d22d;
    }
LAB_1087d37e:
    if (pGVar53[9].field_0xa != '\0') {
      fVar69 = *(float *)(unaff_EBP + -0x78);
      uVar56 = *(uint *)(unaff_EBP + -0x58);
      cVar58 = *(char *)(unaff_EBP + -0x2d);
      bVar13 = *(byte *)(unaff_EBP + -0x25);
      if (pGVar53[9].field_0xa != '\x04') goto LAB_1087d230;
    }
    fVar69 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249
                       ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x140),
                        (MethodInfo *)0x0);
    *(float *)(unaff_EBP + -0x7c) = fVar69;
    fVar69 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249
                       ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x140),
                        (MethodInfo *)0x0);
    uVar56 = *(uint *)(unaff_EBP + -0x58);
    cVar58 = *(char *)(unaff_EBP + -0x2d);
    bVar13 = *(byte *)(unaff_EBP + -0x25);
    *(float *)(unaff_EBP + -0x48) = fVar69;
    fVar69 = *(float *)(unaff_EBP + -0x78);
    if (__real_40800000 <= *(float *)(unaff_EBP + -0x48)) goto LAB_1087d230;
    dVar67 = (double)*(float *)(unaff_EBP + -0x7c);
    _libm_sse2_sqrt_precise();
    fVar70 = (float)dVar67;
    fVar63 = __real_3f800000 - fVar70 * __real_3e800000;
    *(float *)(unaff_EBP + -0xb0) = fVar63;
    fVar68 = fVar63 * fVar63;
    *(float *)(unaff_EBP + -0xac) = fVar68;
    fVar69 = fVar63 - __real_3f19999a;
    *(float *)(unaff_EBP + -0x84) =
         *(float *)(unaff_EBP + -0xa0) -
         (*(float *)(unaff_EBP + -0x140) / fVar70) * fVar69 * fVar68 * fVar63;
    *(float *)(unaff_EBP + -0x6c) =
         *(float *)(unaff_EBP + -0x9c) -
         (*(float *)(unaff_EBP + -0x13c) / fVar70) * fVar69 * fVar68 * fVar63;
    *(float *)(unaff_EBP + -0x3c) =
         *(float *)(unaff_EBP + -0x98) -
         (*(float *)(unaff_EBP + -0x138) / fVar70) * fVar69 * fVar68 * fVar63;
    uVar72 = *(undefined4 *)(pGVar53 + 7);
    *(undefined8 *)(unaff_EBP + -0xb8) = *(undefined8 *)&pGVar53[6].field_0x4;
    *(undefined8 *)(unaff_EBP + -0x5f0) = *(undefined8 *)&pGVar53[7].field_0x4;
    uVar71 = *(undefined4 *)&pGVar53[9].field_0x4;
    *(undefined4 *)(unaff_EBP + -0xa8) = uVar72;
    *(undefined4 *)(unaff_EBP + -0x50) = *(undefined4 *)(pGVar53 + 8);
    *(undefined4 *)(unaff_EBP + -0x7c) = uVar71;
    fVar69 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844((MethodInfo *)0x0);
    *(float *)(unaff_EBP + -0x48) = fVar69;
    fVar69 = Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
                       (*(float *)(unaff_EBP + -0x7c),
                        *(float *)(unaff_EBP + -0x7c) + __real_3e99999a,
                        *(float *)(unaff_EBP + -0x48),(MethodInfo *)0x0);
    *(float *)(unaff_EBP + -0x48) = fVar69;
    VVar23.___z_4 = *(float *)(unaff_EBP + -0xa8);
    VVar23._0_8_ = *(undefined8 *)(unaff_EBP + -0xb8);
    VVar32.___z_4 = *(float *)(unaff_EBP + -0x50);
    VVar32._0_8_ = *(undefined8 *)(unaff_EBP + -0x5f0);
    pVVar55 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x980),
                         VVar23,VVar32,*(float *)(unaff_EBP + -0x48),(MethodInfo *)0x0);
    iVar60 = *(int *)(unaff_EBP + -0x2c);
    fVar69 = pVVar55->___z_4;
    *(undefined8 *)(unaff_EBP + -0x50c) = *(undefined8 *)pVVar55;
    *(undefined8 *)(unaff_EBP + -0x518) = *(undefined8 *)(iVar60 + 0x58);
    *(undefined8 *)(unaff_EBP + -0x4dc) = *(undefined8 *)pVVar55;
    *(undefined8 *)(unaff_EBP + -0x4e8) = *(undefined8 *)(iVar60 + 0x58);
    uVar64 = *(undefined8 *)pVVar55;
    *(float *)(unaff_EBP + -0x4ec) = fVar69;
    uVar71 = *(undefined4 *)(iVar60 + 0x60);
    *(undefined8 *)(unaff_EBP + -0x4f4) = uVar64;
    uVar64 = *(undefined8 *)(iVar60 + 0x58);
    *(undefined4 *)(unaff_EBP + -0x4f8) = uVar71;
    *(undefined8 *)(unaff_EBP + -0x500) = uVar64;
    fVar70 = *(float *)(unaff_EBP + -0xac);
    fVar68 = *(float *)(unaff_EBP + -0xb0);
    *(float *)(unaff_EBP + -0x74c) =
         (*(float *)(unaff_EBP + -0x4ec) - *(float *)(unaff_EBP + -0x4f8)) * fVar70 * fVar68 +
         *(float *)(unaff_EBP + -0x3c);
    fVar69 = fVar70 + *(float *)(unaff_EBP + -0x78);
    uVar56 = *(uint *)(unaff_EBP + -0x58);
    cVar58 = *(char *)(unaff_EBP + -0x2d);
    iVar60 = *(int *)(unaff_EBP + -0x5c);
    *(undefined4 *)(unaff_EBP + -0x98) = *(undefined4 *)(unaff_EBP + -0x74c);
    iVar50 = *(int *)(unaff_EBP + -0x24) + 1;
    *(ulonglong *)(unaff_EBP + -0xa0) =
         CONCAT44((*(float *)(unaff_EBP + -0x4d8) - *(float *)(unaff_EBP + -0x4e4)) * fVar70 *
                  fVar68 + *(float *)(unaff_EBP + -0x6c),
                  (*(float *)(unaff_EBP + -0x50c) - *(float *)(unaff_EBP + -0x518)) * fVar70 *
                  fVar68 + *(float *)(unaff_EBP + -0x84));
    *(int *)(unaff_EBP + -0x24) = iVar50;
    *(float *)(unaff_EBP + -0x78) = fVar69;
    bVar13 = *(byte *)(unaff_EBP + -0x25);
    if (6 < iVar50) {
LAB_1087d685:
      iVar44 = *(int *)(unaff_EBP + -0x2c);
      if (___real_00000000 < fVar69) {
        fVar69 = __real_3f800000 / fVar69;
        *(undefined4 *)(unaff_EBP + -0x534) = *(undefined4 *)(iVar44 + 0x60);
        uVar64 = *(undefined8 *)(iVar44 + 0x58);
        *(undefined8 *)(unaff_EBP + -0x524) = uVar64;
        *(undefined8 *)(unaff_EBP + -0x530) = uVar64;
        *(undefined8 *)(unaff_EBP + -0x53c) = *(undefined8 *)(iVar44 + 0x58);
        *(float *)(unaff_EBP + -0x758) =
             *(float *)(unaff_EBP + -0x534) + *(float *)(unaff_EBP + -0x98) * fVar69;
        uVar71 = *(undefined4 *)(unaff_EBP + -0x758);
        *(ulonglong *)(iVar44 + 0x58) =
             CONCAT44(*(float *)(unaff_EBP + -0x52c) + *(float *)(unaff_EBP + -0x9c) * fVar69,
                      *(float *)(unaff_EBP + -0xa0) * fVar69 + *(float *)(unaff_EBP + -0x524));
        *(undefined4 *)(iVar44 + 0x60) = uVar71;
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      *(undefined4 *)(unaff_EBP + -0x128 + *(int *)(unaff_EBP + -0x44) * 4) = 0x755;
      *(int *)(unaff_EBP + -0x110) = *(int *)(unaff_EBP + -0x110) + 1;
      FUN_1087d793();
      return;
    }
  }
  goto LAB_1087d233;
}
