// RVA 0x87aea0 | Placemaker.Life.BirdFlock$$OnUpdate
// PDB: BirdFlock_OnUpdate_m2AB5A63F1903F87173EB103C40C42F276829D78E
// Body: [[1087aea0, 1087b09f] [1087b0a3, 1087b5a6] [1087b5ad, 1087b5de] [1087b5e5, 1087b721] [1087b725, 1087d75f]]
// Direct callees:
// 1003e740 List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
// 10068d20 Dictionary_2_TryGetValue_m51EC0B2C281B630CFFE71169FCB6AF1F3E35826F
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10196010 _libm_sse2_sqrt_precise
// 101d1320 Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 1022e110 Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline
// 1022e1b0 Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline
// 1040e020 HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 1043f1d0 Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared
// 1065f5a0 Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3
// 1065f8c0 Quaternion_Lerp_mBFA4C4D2574C8140AA840273D3E6565D66F6F261
// 1065f940 Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF
// 1065f9e0 Quaternion_LookRotation_m8A7DB5BDBC361586191AB67ACF857F46160EE3F1
// 1065ff40 Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0
// 10660370 Random_RandomRangeInt_mC1A726071BB9634DCA04EF5DCC1E59360CE392DE
// 106603a0 Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2
// 10660420 Random_get_insideUnitSphere_m43E5AE1F6A6CFA892BAE6E3ED71BEBFCE308CE90
// 106604d0 Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872
// 1066d890 Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290
// 1066d9a0 Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844
// 1066f810 Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046
// 1066f960 Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
// 1066fbe0 Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200
// 1066fc20 Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31
// 106700e0 Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
// 10670140 Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4
// 10673a30 Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796
// 10674190 Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
// 10674380 Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991
// 10674430 Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5
// 10674510 Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249
// 10674590 Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
// 10836840 ExtraMath_GetClampedMagnitude_mD672B0998923CC7185D9FC4B53521359092BD9DA
// 10837090 ExtraMath_SetY_m65C79C2D27A9408438A588993C47DCAC2216E149
// 10879180 BirdFlock_CalculateOptimalLandings_m68E711C414D6CFA05A1347CB4032308852958BEA
// 108792c0 BirdFlock_GetLandingPos_m29D97BDB3990AC0642EBC4BFD12590E0DEFD3D97
// 10879a70 BirdFlock_GetSearchCoordinates_m311935888F7BF564C853BBD7AAB7E2CF1066C307
// 1087d793 FUN_1087d793
// 1087efe0 BirdFlock_SetLanding_mA7B5BA5BD831833CBA54D626B3CA707E564F8DA3
// 1087f0f0 BirdFlock_SetState_m72806889745C4C557D55CE9E6839387A5AE818AF
// 1087f1e0 BirdFlock_TryGetRandomLanding_mB8EDABF6CBC9EC5AC69F54BE98AAF2FFC3A9F015
// 1087ff10 BirdLanding_get_pos_mFEAFD0CE24293167DABA18669B4F4AC98A0D8FF2
// 1087ff60 BirdLanding_get_sortPos_m53ADEB657C9611AE28CED37CEB847639AAB0E736
// 10880030 BirdLanding_get_targetPos_m199AEDE3A329D1C8A117E7408895E8A7CF9AC10D
// 10a39e70 Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3bfa0 Debug_DrawLine_m83E9014DE042AAFE0B97A66E2A23F701FFDBB8A3
// 10a43d20 Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
// 10a43e90 Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
// 10a43fb0 Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775
// 10a46900 MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E
// 10a46960 MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
// 10a4a920 Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 10e13a30 GridGenerator_HexToPlane_m4E9FDB9046A879244C75B203941031BF2515D0CA
// 1103ecc0 List_1_set_Item_m73674D291C1D6030C21A39003E4743D110ACC6A2_gshared

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
BirdFlock_OnUpdate_m2AB5A63F1903F87173EB103C40C42F276829D78E
          (BirdFlock_tB63DB4CEF81D7D9D17C18531A0BEEEA771442436 *param_1,MethodInfo *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar8;
  undefined4 uVar15;
  undefined4 uVar16;
  ulonglong uVar9;
  List_1_tF12B8ECABFB01DFF6CE11CBC139AC6115179DCC9 *pLVar17;
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar18;
  MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *pMVar19;
  PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 *pPVar20;
  Dictionary_2_t8E87E58777505762FF5F4E631F2FDB80F651D1C7 *pDVar21;
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *pCVar22;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *piVar23;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar24;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 QVar25;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 QVar26;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar27;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar28;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar29;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar30;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar31;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar32;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar33;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar34;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 QVar35;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar36;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar37;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar38;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar39;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar40;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar41;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar42;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar43;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar44;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 CVar45;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 QVar46;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar47;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar48;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar49;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar50;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar51;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar52;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar53;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar54;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar55;
  byte bVar56;
  bool bVar57;
  int iVar58;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar59;
  undefined8 *extraout_EAX;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *pfVar60;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *extraout_EAX_00;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *pCVar61;
  Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *pMVar62;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar63;
  ValueTuple_2_t07BAEE521A8E0647776F76ED61C87E991CA45BFA *pVVar64;
  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *pOVar65;
  Il2CppObject *pIVar66;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar67;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar68;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar69;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar70;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar71;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *pQVar72;
  byte bVar73;
  char cVar74;
  BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *pBVar75;
  uint extraout_EDX;
  uint uVar76;
  int iVar77;
  undefined1 *puVar78;
  undefined1 *puVar79;
  Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *pBVar80;
  Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *pBVar81;
  double dVar82;
  float fVar83;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 local_b20;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 local_b10;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 local_b00;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 local_af0 [2];
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 local_ad0;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 local_ac0;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 local_ab0;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 local_aa0;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 local_a90;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 local_a80;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 local_a70;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 local_a60;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 local_a50;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 local_a40;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_a30;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_a20;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_a10;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_a00;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_9f0;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_9e0;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_9d0;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_9c0;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_9b0 [2];
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_990;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_980;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_970;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_960;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_950;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_940;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_930;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_920;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_910;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_900;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_8f0;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_8e0;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_8d0;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_8c0;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_8b0;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_8a0;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_890;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_880;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_870;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_860;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_850;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_840;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_830;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_820;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_810;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 QStack_800;
  float local_7f0;
  float fStack_7ec;
  Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *pBStack_7e8;
  int iStack_7e4;
  undefined4 uStack_7e0;
  int iStack_7dc;
  float local_7d0;
  float local_7c4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VStack_7c0;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E aVStack_7b0 [2];
  float local_798;
  float local_78c;
  float local_768;
  float local_75c;
  float local_750;
  float local_744;
  float local_738;
  float local_72c;
  float local_720;
  float local_714;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 local_710;
  float fStack_700;
  undefined4 uStack_6fc;
  undefined4 uStack_6f8;
  undefined4 uStack_6f4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_6d0;
  float fStack_6c4;
  undefined8 local_6c0;
  float local_6b8;
  undefined8 local_6b4;
  undefined8 local_6a8;
  undefined8 local_69c;
  float local_694;
  undefined8 local_690;
  float local_688;
  undefined8 local_684;
  undefined8 local_678;
  undefined8 local_66c;
  undefined8 local_660;
  undefined8 local_654;
  float local_64c;
  undefined8 local_648;
  float local_640;
  undefined8 local_63c;
  undefined8 local_630;
  undefined8 local_624;
  float local_61c;
  undefined8 local_618;
  undefined8 local_60c;
  undefined8 local_600;
  undefined8 local_54c;
  float local_544;
  undefined8 local_540;
  undefined8 local_534;
  undefined8 local_528;
  undefined8 local_51c;
  undefined8 local_510;
  float local_508;
  undefined8 local_504;
  float local_4fc;
  undefined8 local_4f8;
  undefined8 local_4ec;
  undefined8 local_4e0;
  undefined8 local_4d4;
  float local_4cc;
  undefined8 local_4c8;
  undefined8 local_4bc;
  undefined8 local_4b0;
  undefined8 local_4a4;
  undefined8 local_498;
  float local_490;
  undefined8 local_48c;
  float local_484;
  undefined8 local_480;
  undefined8 local_474;
  undefined8 local_468;
  undefined8 local_45c;
  undefined8 local_450;
  float local_448;
  undefined8 local_444;
  float local_43c;
  undefined8 local_438;
  undefined8 local_42c;
  undefined8 local_420;
  undefined8 local_414;
  ulonglong local_408;
  undefined8 local_3fc;
  float local_3f4;
  undefined8 local_3f0;
  undefined8 local_3e4;
  float local_3dc;
  undefined8 local_3d8;
  undefined8 local_3cc;
  float local_3c0;
  float fStack_3bc;
  undefined8 local_3b4;
  undefined8 local_3a8;
  undefined8 local_39c;
  float local_394;
  undefined8 local_390;
  undefined8 local_384;
  float local_37c;
  undefined8 local_378;
  undefined8 local_36c;
  undefined8 local_360;
  undefined8 local_354;
  float local_34c;
  undefined8 local_348;
  undefined8 local_33c;
  float local_334;
  undefined8 local_330;
  float local_328;
  undefined8 local_324;
  undefined8 local_318;
  undefined8 local_30c;
  undefined8 local_300;
  float local_2f4;
  float fStack_2f0;
  undefined8 local_2e8;
  undefined8 local_2dc;
  float local_2d4;
  undefined8 local_2d0;
  undefined8 local_2c4;
  undefined8 local_2b8;
  float local_2ac;
  float fStack_2a8;
  undefined8 local_294;
  undefined8 local_288;
  float local_280;
  uint local_27c;
  uint uStack_278;
  float local_274;
  uint local_270;
  uint uStack_26c;
  float local_268;
  float local_264;
  float fStack_260;
  float local_25c;
  undefined8 local_258;
  float local_250;
  float local_24c;
  float fStack_248;
  float local_244;
  undefined8 uStack_240;
  undefined8 uStack_234;
  float fStack_22c;
  undefined8 uStack_228;
  undefined8 uStack_21c;
  undefined8 uStack_210;
  undefined8 uStack_204;
  float fStack_1fc;
  undefined8 uStack_1f8;
  undefined8 uStack_1ec;
  float fStack_1e4;
  undefined8 uStack_1e0;
  undefined8 uStack_1d4;
  undefined8 uStack_1c8;
  undefined8 uStack_1bc;
  undefined8 uStack_1b0;
  float fStack_1a8;
  undefined8 uStack_1a4;
  undefined8 uStack_198;
  undefined8 uStack_18c;
  float fStack_184;
  undefined8 uStack_180;
  float fStack_178;
  undefined8 local_174;
  undefined4 local_16c;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_168;
  undefined8 uStack_15c;
  float local_154;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_150;
  undefined8 local_144;
  int local_13c [7];
  int local_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  undefined8 uStack_110;
  float fStack_108;
  undefined8 local_104;
  float local_fc;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_f8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_e4;
  ValueTuple_2_t07BAEE521A8E0647776F76ED61C87E991CA45BFA local_d8;
  float local_c0;
  float local_bc;
  float local_b8;
  List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *local_b4;
  undefined8 local_b0;
  float local_a8;
  Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *local_a4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_a0;
  float local_94;
  byte local_8d;
  float local_8c;
  float local_88;
  BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *local_84;
  undefined8 local_80;
  BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *local_74;
  Exception_t *local_70;
  BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *local_6c;
  float local_68;
  undefined1 local_63 [2];
  undefined1 local_61 [21];
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOStack_4c;
  Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *local_44;
  char local_3d;
  Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *local_3c;
  byte local_35;
  Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *local_34;
  undefined1 *puStack_24;
  undefined1 *local_20;
  void *pvStack_1c;
  undefined1 *puStack_18;
  uint local_14;

  puStack_24 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &__ehhandler__BirdFlock_OnUpdate_m2AB5A63F1903F87173EB103C40C42F276829D78E;
  pvStack_1c = ExceptionList;
  local_20 = &stack0xfffff4d0;
  ExceptionList = &pvStack_1c;
  puVar78 = &stack0xfffffffc;
  puVar79 = &stack0xfffff4d0;
  if (DAT_1151f5c0 == '\0') {
    ExceptionList = &pvStack_1c;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisPropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952_m4AD885AB12D9CA67AE0322471B8DB182AB024F62_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_TryGetComponent_TisBirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB_m2044F99A99D9FDBEC7096C2298DB523BEF6A3BD9_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_TryGetValue_mD5FD41FBACBFE4389569FFAA86DC7CB5DD4F7EF4_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_RemoveAt_m61FFEE3CDD9CFD4B532C6D8E4C49824937DF54CC_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mBB6B7336DF41C6B52694DC743F8865A02DDAA9FA_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mC5C87EB162C43A4BC22E218C3A2D95DB961F5420_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m9053981E4F86329B862DCD556ECC7AABFA63BD00_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mA819AC4D6EC8BABA8328B8366A4F71E7BB7FB982_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_set_Item_m46FC59C2EB9D14FF01BA168D524F99CAC463D1C9_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral68179BCD2331622F884DB0CF0E54EAC96C0C3C7E);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral78B6D0D676D5FB4808E2E15C447D85E38E201D4B);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral844421C98F98CFA1613DF2CB8F5AE079666D8631);
    DAT_1151f5c0 = '\x01';
    puVar78 = puStack_24;
    puVar79 = local_20;
  }
  local_20 = puVar79;
  puStack_24 = puVar78;
  local_63[0] = 0;
  local_70 = (Exception_t *)0x0;
  local_61._13_4_ = 0;
  local_120 = 0;
  local_74 = (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)0x0;
  local_63[1] = 0;
  local_a0.___x_2 = 0.0;
  local_a0.___y_3 = 0.0;
  local_a0.___z_4 = 0.0;
  local_e4.___x_2 = 0.0;
  local_e4.___y_3 = 0.0;
  local_e4.___z_4 = 0.0;
  local_61[0] = 0;
  local_150.___x_2 = 0.0;
  local_150.___y_3 = 0.0;
  local_150.___z_4 = 0.0;
  local_144 = 0;
  local_13c[0] = 0;
  local_174 = 0;
  local_16c = 0;
  local_168.___x_2 = 0.0;
  local_168.___y_3 = 0.0;
  local_168.___z_4 = 0.0;
  local_b4 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)0x0;
  local_a4 = (Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *)0x0;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)local_63,
             (MethodInfo *)_stringLiteral68179BCD2331622F884DB0CF0E54EAC96C0C3C7E);
  local_14 = 0;
  if (param_1->___birds_17 == (List_1_tF12B8ECABFB01DFF6CE11CBC139AC6115179DCC9 *)0x0)
  goto LAB_1087ea7f;
  local_61._5_4_ = param_1->___birds_17->____size_2;
  BirdFlock_CalculateOptimalLandings_m68E711C414D6CFA05A1347CB4032308852958BEA
            (param_1,(MethodInfo *)0x0);
  if (param_1->___activeBirdsCount_20 < param_1->___minBirdCount_23) {
    for (uVar76 = 0; (int)uVar76 < (int)local_61._5_4_; uVar76 = uVar76 + 1) {
      pLVar17 = param_1->___birds_17;
      if (pLVar17 == (List_1_tF12B8ECABFB01DFF6CE11CBC139AC6115179DCC9 *)0x0) goto LAB_1087ea7f;
      if ((uint)pLVar17->____size_2 <= uVar76) {
                    /* WARNING: Subroutine does not return */
        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                  ((MethodInfo *)0x0);
      }
      iVar58 = *(int *)(pLVar17->____items_1 + uVar76 * 4 + 0x10);
      if (iVar58 == 0) goto LAB_1087ea7f;
      if (*(char *)(iVar58 + 0x76) == '\x04') {
        if (DAT_1151f5c3 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
          il2cpp_codegen_initialize_runtime_metadata
                    ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
          il2cpp_codegen_initialize_runtime_metadata
                    ((uint *)&_stringLiteral3641F172023B823C36CF1686D0308E81BA22A660);
          DAT_1151f5c3 = '\x01';
        }
        *(undefined1 *)(iVar58 + 0x76) = 0;
        local_61._1_4_ = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844((MethodInfo *)0x0);
        local_34 = (Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *)
                   Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872((MethodInfo *)0x0);
        *(float *)(iVar58 + 0x78) = (float)local_34 + (float)local_61._1_4_;
        bVar73 = param_1->___activeBirdsCount_20 + 1;
        param_1->___activeBirdsCount_20 = bVar73;
        if (param_1->___idealBirdCount_24 <= bVar73) break;
      }
    }
  }
  if (0 < param_1->___birdLandingCount_18) {
    local_34 = (Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *)
               Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844((MethodInfo *)0x0);
    if (param_1->___lastOrbitTime_35 <= (float)local_34 &&
        (float)local_34 != param_1->___lastOrbitTime_35) {
      local_34 = (Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *)
                 Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844((MethodInfo *)0x0);
      iVar58 = Random_RandomRangeInt_mC1A726071BB9634DCA04EF5DCC1E59360CE392DE
                         (8,0x14,(MethodInfo *)0x0);
      param_1->___lastOrbitTime_35 = (float)iVar58 + (float)local_34;
      local_34 = (Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *)
                 Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872((MethodInfo *)0x0);
      if ((__real_3f000000 <= (float)local_34) ||
         (bVar57 = BirdFlock_TryGetRandomLanding_mB8EDABF6CBC9EC5AC69F54BE98AAF2FFC3A9F015
                             (param_1,&local_74,(MethodInfo *)0x0), !bVar57)) {
        if ((param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
           || (pGVar18 = param_1->___master_4->___graph_7,
              pGVar18 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) goto LAB_1087ea7f;
        local_34 = (Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *)
                   Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2
                             ((float)(pGVar18->___bounds_28).___c0_0.___x_0 - __real_41000000,
                              (float)(pGVar18->___bounds_28).___c1_1.___x_0 + __real_41000000,
                              (MethodInfo *)0x0);
        (param_1->___orbitTarget_34).___x_2 = (float)local_34;
        if ((param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
           || (pGVar18 = param_1->___master_4->___graph_7,
              pGVar18 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) goto LAB_1087ea7f;
        local_34 = (Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *)
                   Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2
                             ((float)(pGVar18->___bounds_28).___c0_0.___y_1 - __real_41000000,
                              (float)(pGVar18->___bounds_28).___c1_1.___y_1 + __real_41000000,
                              (MethodInfo *)0x0);
        (param_1->___orbitTarget_34).___y_3 = (float)local_34;
        if ((param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
           || (pGVar18 = param_1->___master_4->___graph_7,
              pGVar18 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) goto LAB_1087ea7f;
        local_34 = (Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *)
                   Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2
                             ((float)(pGVar18->___bounds_28).___c0_0.___z_2 - __real_41000000,
                              (float)(pGVar18->___bounds_28).___c1_1.___z_2 + __real_41000000,
                              (MethodInfo *)0x0);
        (param_1->___orbitTarget_34).___z_4 = (float)local_34;
        uVar1 = (param_1->___orbitTarget_34).___x_2;
        uVar10 = (param_1->___orbitTarget_34).___y_3;
        Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                  ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_f8,(float)uVar1,
                   (float)uVar10,(param_1->___orbitTarget_34).___z_4,(MethodInfo *)0x0);
        unique0x0000a400 = *extraout_EAX;
        fVar85 = *(float *)(extraout_EAX + 1);
        if ((GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->has_cctor
             != '\0') &&
           (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var->
            cctor_finished == 0)) {
          il2cpp_runtime_class_init
                    (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0_il2cpp_TypeInfo_var);
        }
        fVar47.___z_2 = fVar85;
        fVar47.___x_0 = (float)local_61._17_4_;
        fVar47.___y_1 = (float)pOStack_4c;
        fVar84 = GridGenerator_HexToPlane_m4E9FDB9046A879244C75B203941031BF2515D0CA
                           (fVar47,(MethodInfo *)0x0);
        if ((param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
           || (pGVar18 = param_1->___master_4->___graph_7,
              pGVar18 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) goto LAB_1087ea7f;
        local_34 = (Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *)
                   Random_RandomRangeInt_mC1A726071BB9634DCA04EF5DCC1E59360CE392DE
                             (0,pGVar18->___boundsHeight_27,(MethodInfo *)0x0);
        if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor !=
             '\0') &&
           (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished
            == 0)) {
          il2cpp_runtime_class_init
                    (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
        }
        pfVar60 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                            (&local_f8,fVar84,(float)(int)local_34,(MethodInfo *)0x0);
        uVar2 = pfVar60->___x_0;
        uVar11 = pfVar60->___y_1;
        Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
                  ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_f8,(float)uVar2,
                   (float)uVar11,pfVar60->___z_2,(MethodInfo *)0x0);
        pVVar59 = extraout_EAX_00;
      }
      else {
        if (local_74 == (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)0x0)
        goto LAB_1087ea7f;
        pVVar59 = BirdLanding_get_targetPos_m199AEDE3A329D1C8A117E7408895E8A7CF9AC10D
                            ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_f8,local_74
                             ,(MethodInfo *)0x0);
      }
      fVar85 = pVVar59->___y_3;
      local_d8.___Item2_1.___z_2 = (int)pVVar59->___z_4;
      (param_1->___orbitTarget_34).___x_2 = pVVar59->___x_2;
      (param_1->___orbitTarget_34).___y_3 = fVar85;
      (param_1->___orbitTarget_34).___z_4 = (float)local_d8.___Item2_1.___z_2;
      uVar3 = (param_1->___orbitTarget_34).___x_2;
      uVar12 = (param_1->___orbitTarget_34).___y_3;
      local_d8.___Item2_1.___x_0 = uVar3;
      local_d8.___Item2_1.___y_1 = uVar12;
      pVVar59 = Random_get_insideUnitSphere_m43E5AE1F6A6CFA892BAE6E3ED71BEBFCE308CE90
                          ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_f8,
                           (MethodInfo *)0x0);
      local_b0._0_4_ = pVVar59->___x_2;
      local_b0._4_4_ = pVVar59->___y_3;
      local_a8 = pVVar59->___z_4;
      local_34 = (Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *)
                 Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(0.0,7.0,(MethodInfo *)0x0);
      local_154 = (float)local_d8.___Item2_1.___z_2 + (float)local_34 * local_a8;
      (param_1->___orbitTarget_34).___x_2 =
           (float)local_b0 * (float)local_34 + (float)local_d8.___Item2_1.___x_0;
      (param_1->___orbitTarget_34).___y_3 =
           (float)local_d8.___Item2_1.___y_1 + (float)local_34 * local_b0._4_4_;
      (param_1->___orbitTarget_34).___z_4 = local_154;
      local_34 = (Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *)
                 Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775
                           ((param_1->___orbitTarget_34).___y_3,0.4,(MethodInfo *)0x0);
      (param_1->___orbitTarget_34).___y_3 = (float)local_34;
    }
    local_80._0_4_ = (param_1->___orbitPos_33).___x_2;
    local_80._4_4_ =
         (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)(param_1->___orbitPos_33).___y_3;
    fVar85 = (param_1->___orbitPos_33).___z_4;
    local_61._17_4_ = (param_1->___orbitTarget_34).___x_2;
    pOStack_4c = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                 (param_1->___orbitTarget_34).___y_3;
    fVar83 = (param_1->___orbitTarget_34).___z_4;
    local_34 = (Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *)
               Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290((MethodInfo *)0x0);
    VVar27.___z_4 = fVar85;
    VVar27.___x_2 = (float)(undefined4)local_80;
    VVar27.___y_3 = (float)local_80._4_4_;
    VVar36.___z_4 = fVar83;
    VVar36.___x_2 = (float)local_61._17_4_;
    VVar36.___y_3 = (float)pOStack_4c;
    pVVar59 = Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_f8,VVar27,
                         VVar36,(float)local_34 * __real_41200000,(MethodInfo *)0x0);
    fVar83 = pVVar59->___y_3;
    fVar85 = pVVar59->___z_4;
    (param_1->___orbitPos_33).___x_2 = pVVar59->___x_2;
    (param_1->___orbitPos_33).___y_3 = fVar83;
    (param_1->___orbitPos_33).___z_4 = fVar85;
  }
  if (1 < (int)local_61._5_4_) {
    pLVar17 = param_1->___birds_17;
    if (pLVar17 == (List_1_tF12B8ECABFB01DFF6CE11CBC139AC6115179DCC9 *)0x0) {
LAB_1087ea7f:
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_null_reference_exception();
    }
    if (pLVar17->____size_2 == 0) {
                    /* WARNING: Subroutine does not return */
      ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                ((MethodInfo *)0x0);
    }
    uVar76 = 1;
    local_44 = *(Bird_t844A261674A59156BC85FE5538301FE90489C0E8 **)(pLVar17->____items_1 + 0x10);
    while ((int)uVar76 < (int)local_61._5_4_) {
      pLVar17 = param_1->___birds_17;
      if (pLVar17 == (List_1_tF12B8ECABFB01DFF6CE11CBC139AC6115179DCC9 *)0x0) goto LAB_1087ea7f;
      if ((uint)pLVar17->____size_2 <= uVar76) {
                    /* WARNING: Subroutine does not return */
        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                  ((MethodInfo *)0x0);
      }
      pBVar81 = *(Bird_t844A261674A59156BC85FE5538301FE90489C0E8 **)
                 (pLVar17->____items_1 + uVar76 * 4 + 0x10);
      if ((local_44 == (Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *)0x0) ||
         (fVar85 = (local_44->___pos_14).___x_2,
         pBVar81 == (Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *)0x0)) goto LAB_1087ea7f;
      if ((pBVar81->___pos_14).___x_2 <= fVar85 && fVar85 != (pBVar81->___pos_14).___x_2) {
        if ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)param_1->___birds_17 ==
            (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) goto LAB_1087ea7f;
        List_1_set_Item_m73674D291C1D6030C21A39003E4743D110ACC6A2_gshared
                  ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)param_1->___birds_17,uVar76,
                   (Il2CppObject *)local_44,
                   List_1_set_Item_m46FC59C2EB9D14FF01BA168D524F99CAC463D1C9_RuntimeMethod_var);
        if ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)param_1->___birds_17 ==
            (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) goto LAB_1087ea7f;
        List_1_set_Item_m73674D291C1D6030C21A39003E4743D110ACC6A2_gshared
                  ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)param_1->___birds_17,
                   uVar76 - 1,(Il2CppObject *)pBVar81,
                   List_1_set_Item_m46FC59C2EB9D14FF01BA168D524F99CAC463D1C9_RuntimeMethod_var);
        local_80._0_4_ = (local_44->___pos_14).___x_2;
        local_80._4_4_ =
             (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)(local_44->___pos_14).___y_3;
        local_34 = (Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *)(local_44->___pos_14).___z_4;
        local_61._17_4_ = (pBVar81->___pos_14).___x_2;
        pOStack_4c = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)(pBVar81->___pos_14).___y_3
        ;
        fVar85 = (pBVar81->___pos_14).___z_4;
        pCVar61 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8
                            (&local_710,(MethodInfo *)0x0);
        local_6d0.___x_2 = pCVar61->___r_0;
        local_6d0.___y_3 = pCVar61->___g_1;
        local_6d0.___z_4 = pCVar61->___b_2;
        fStack_6c4 = pCVar61->___a_3;
        if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0')
           && (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished
               == 0)) {
          il2cpp_runtime_class_init
                    (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
        }
        VVar24.___z_4 = (float)local_34;
        VVar24.___x_2 = (float)(undefined4)local_80;
        VVar24.___y_3 = (float)local_80._4_4_;
        VVar28.___z_4 = fVar85;
        VVar28.___x_2 = (float)local_61._17_4_;
        VVar28.___y_3 = (float)pOStack_4c;
        CVar45.___g_1 = local_6d0.___y_3;
        CVar45.___r_0 = local_6d0.___x_2;
        CVar45.___b_2 = local_6d0.___z_4;
        CVar45.___a_3 = fStack_6c4;
        Debug_DrawLine_m83E9014DE042AAFE0B97A66E2A23F701FFDBB8A3
                  (VVar24,VVar28,CVar45,(MethodInfo *)0x0);
        uVar76 = uVar76 + 1;
      }
      else {
        uVar76 = uVar76 + 1;
        local_44 = pBVar81;
      }
    }
  }
  for (local_84 = (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)0x0; local_74 = local_84,
      (int)local_84 < (int)local_61._5_4_;
      local_84 = (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)
                 ((int)&local_84->_padding_ + 1)) {
    pLVar17 = param_1->___birds_17;
    if (pLVar17 == (List_1_tF12B8ECABFB01DFF6CE11CBC139AC6115179DCC9 *)0x0) goto LAB_1087ea7f;
    if ((BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)pLVar17->____size_2 <= local_84) {
                    /* WARNING: Subroutine does not return */
      ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                ((MethodInfo *)0x0);
    }
    pBVar81 = *(Bird_t844A261674A59156BC85FE5538301FE90489C0E8 **)
               (pLVar17->____items_1 + (int)local_84 * 4 + 0x10);
    local_3c = pBVar81;
    local_34 = (Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *)
               Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844((MethodInfo *)0x0);
    if (pBVar81 == (Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *)0x0) goto LAB_1087ea7f;
    if (pBVar81->___time_15 + __real_3e99999a < (float)local_34) {
      U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
                ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)(local_63 + 1),
                 (MethodInfo *)_stringLiteral78B6D0D676D5FB4808E2E15C447D85E38E201D4B);
      local_14 = CONCAT31(local_14._1_3_,1);
      local_60c._0_4_ = (pBVar81->___velocityNext_13).___x_2;
      local_60c._4_4_ = (pBVar81->___velocityNext_13).___y_3;
      pVVar59 = &pBVar81->___velocityNext_13;
      local_63c._0_4_ = (pBVar81->___posMid_11).___x_2;
      local_63c._4_4_ = (pBVar81->___posMid_11).___y_3;
      local_64c = (pBVar81->___posMid_11).___z_4;
      local_630._0_4_ = pVVar59->___x_2;
      local_630._4_4_ = pVVar59->___y_3;
      local_654._0_4_ = (pBVar81->___posMid_11).___x_2;
      local_654._4_4_ = (pBVar81->___posMid_11).___y_3;
      local_648._0_4_ = pVVar59->___x_2;
      local_648._4_4_ = pVVar59->___y_3;
      local_640 = (pBVar81->___velocityNext_13).___z_4;
      local_78c = local_640 + local_64c;
      (pBVar81->___posMid_11).___x_2 = (float)(undefined4)local_60c + (float)(undefined4)local_63c;
      (pBVar81->___posMid_11).___y_3 = (float)local_630._4_4_ + (float)local_63c._4_4_;
      (pBVar81->___posMid_11).___z_4 = local_78c;
      fVar83 = pVVar59->___y_3;
      fVar85 = (pBVar81->___velocityNext_13).___z_4;
      (pBVar81->___velocityPrev_12).___x_2 = pVVar59->___x_2;
      (pBVar81->___velocityPrev_12).___y_3 = fVar83;
      (pBVar81->___velocityPrev_12).___z_4 = fVar85;
      pBVar81->___time_15 = pBVar81->___time_15 + __real_3e99999a;
      pMVar19 = pBVar81->___mf0_6;
      pBVar81->___statePrev_17 = pBVar81->___stateNext_18;
      local_618 = local_63c;
      if ((pBVar81->___mf1_7 == (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0) ||
         (pMVar62 = MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E
                              (pBVar81->___mf1_7,(MethodInfo *)0x0),
         pMVar19 == (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0)) goto LAB_1087ea7f;
      MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
                (pMVar19,pMVar62,(MethodInfo *)0x0);
      pBVar80 = local_3c;
      fVar85 = (local_3c->___rotation1_10).___y_1;
      fVar83 = (local_3c->___rotation1_10).___z_2;
      fVar86 = (local_3c->___rotation1_10).___w_3;
      (local_3c->___rotation0_9).___x_0 = (local_3c->___rotation1_10).___x_0;
      (local_3c->___rotation0_9).___y_1 = fVar85;
      (local_3c->___rotation0_9).___z_2 = fVar83;
      (local_3c->___rotation0_9).___w_3 = fVar86;
      local_34 = (Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *)
                 Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844((MethodInfo *)0x0);
      local_44 = (Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *)
                 ((float)local_34 - pBVar80->___lastActionTime_19);
      switch(pBVar80->___stateNext_18) {
      case '\0':
      case '\x04':
        if ((pBVar80->___stateNext_18 == '\0') &&
           (param_1->___maxBirdCount_22 < param_1->___activeBirdsCount_20)) {
          bVar57 = DAT_1151f5c3 == '\0';
          param_1->___activeBirdsCount_20 = param_1->___activeBirdsCount_20 - 1;
          if (bVar57) {
            il2cpp_codegen_initialize_runtime_metadata
                      ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)
            ;
            il2cpp_codegen_initialize_runtime_metadata
                      ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      ((uint *)&_stringLiteral3641F172023B823C36CF1686D0308E81BA22A660);
            DAT_1151f5c3 = '\x01';
          }
          pBVar80->___stateNext_18 = '\x04';
          local_8c = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844((MethodInfo *)0x0);
          local_61._9_4_ =
               Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872((MethodInfo *)0x0);
          pBVar80->___lastActionTime_19 = (float)local_61._9_4_ + local_8c;
        }
        pBVar75 = pBVar80->___landing_20;
        if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0'
            ) && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
          il2cpp_runtime_class_init
                    (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
        }
        bVar57 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                           ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pBVar75,
                            (MethodInfo *)0x0);
        pBVar80 = local_3c;
        if (bVar57) {
          if (___real_41100000 < (float)local_44) {
            BirdFlock_SetLanding_mA7B5BA5BD831833CBA54D626B3CA707E564F8DA3
                      (param_1,local_3c,(BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)0x0
                       ,(MethodInfo *)0x0);
          }
          else {
            if (local_3c->___landing_20 ==
                (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)0x0) goto LAB_1087ea7f;
            pVVar67 = BirdLanding_get_targetPos_m199AEDE3A329D1C8A117E7408895E8A7CF9AC10D
                                (&local_a00,local_3c->___landing_20,(MethodInfo *)0x0);
            local_45c._0_4_ = pVVar67->___x_2;
            local_45c._4_4_ = pVVar67->___y_3;
            local_484 = pVVar67->___z_4;
            local_468._0_4_ = (pBVar80->___posMid_11).___x_2;
            local_468._4_4_ = (pBVar80->___posMid_11).___y_3;
            local_474._0_4_ = pVVar67->___x_2;
            local_474._4_4_ = pVVar67->___y_3;
            local_a0.___x_2 = (float)(undefined4)local_45c - (float)(undefined4)local_468;
            local_480._0_4_ = (pBVar80->___posMid_11).___x_2;
            local_480._4_4_ = (pBVar80->___posMid_11).___y_3;
            local_48c._0_4_ = pVVar67->___x_2;
            local_48c._4_4_ = pVVar67->___y_3;
            local_a0.___y_3 = (float)local_474._4_4_ - (float)local_480._4_4_;
            local_498._0_4_ = (pBVar80->___posMid_11).___x_2;
            local_498._4_4_ = (pBVar80->___posMid_11).___y_3;
            local_490 = (pBVar80->___posMid_11).___z_4;
            local_72c = local_484 - local_490;
            local_a0.___z_4 = local_72c;
            local_34 = (Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *)
                       Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991
                                 (&local_a0,(MethodInfo *)0x0);
            if (__real_3f800000 < (float)local_34) {
              local_738 = local_a0.___z_4 / (float)local_34;
              local_a0.___x_2 = local_a0.___x_2 / (float)local_34;
              local_a0.___y_3 = local_a0.___y_3 / (float)local_34;
              local_a0.___z_4 = local_738;
            }
            local_744 = local_a0.___z_4 + local_a0.___z_4;
            local_a0.___x_2 = local_a0.___x_2 * __real_40000000;
            local_a0.___y_3 = local_a0.___y_3 + local_a0.___y_3;
            local_a0.___z_4 = local_744;
            local_61._9_4_ =
                 Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
                           (6.0,9.0,(float)local_44,(MethodInfo *)0x0);
            local_61._9_4_ =
                 Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                           (0.1,0.8,(float)local_61._9_4_,(MethodInfo *)0x0);
            VVar43.___y_3 = local_a0.___y_3;
            VVar43.___x_2 = local_a0.___x_2;
            VVar43.___z_4 = local_a0.___z_4;
            pVVar67 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline
                                (&local_970,*pVVar59,VVar43,(float)local_61._9_4_,(MethodInfo *)0x0)
            ;
            fVar83 = pVVar67->___y_3;
            fVar85 = pVVar67->___z_4;
            pVVar59->___x_2 = pVVar67->___x_2;
            fVar86 = __real_3fc00000;
            pVVar59->___y_3 = fVar83;
            (pBVar81->___velocityNext_13).___z_4 = fVar85;
            if ((float)local_34 < fVar86) {
              BirdFlock_SetState_m72806889745C4C557D55CE9E6839387A5AE818AF
                        (param_1,pBVar80,'\x01',(MethodInfo *)0x0);
              local_14 = local_14 & 0xffffff00;
              local_13c[local_61._13_4_ + 1] = 0x1164;
              iVar58 = local_120;
              iVar77 = local_120 + 1;
              local_120 = iVar77;
              local_61._13_4_ = iVar77;
              U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
                        ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)
                         (local_63 + 1),(MethodInfo *)0x0);
              if (local_70 != (Exception_t *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_codegen_raise_exception(local_70,(MethodInfo *)0x0);
              }
              if ((iVar77 != 0) && (local_13c[iVar77] == 0x1164)) {
                local_61._13_4_ = iVar58;
                local_120 = iVar58;
              }
              goto LAB_1087e2ab;
            }
          }
        }
        else {
          (local_3c->___velocityNext_13).___y_3 =
               (local_3c->___velocityNext_13).___y_3 * __real_3f333333;
          if (local_3c->___stateNext_18 == '\x04') {
            local_61._17_4_ = (local_3c->___velocityPrev_12).___x_2;
            pOStack_4c = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                         (local_3c->___velocityPrev_12).___y_3;
            fVar85 = (local_3c->___velocityPrev_12).___z_4;
            if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor
                 != '\0') &&
               (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
                cctor_finished == 0)) {
              il2cpp_runtime_class_init
                        (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
            }
            fVar42.___z_2 = fVar85;
            fVar42.___x_0 = (float)local_61._17_4_;
            fVar42.___y_1 = (float)pOStack_4c;
            pfVar60 = ExtraMath_SetY_m65C79C2D27A9408438A588993C47DCAC2216E149
                                (&local_920,fVar42,0.0,(MethodInfo *)0x0);
            local_e4.___x_2 = pfVar60->___x_0;
            local_e4.___y_3 = pfVar60->___y_1;
            local_e4.___z_4 = pfVar60->___z_2;
            pVVar67 = &local_930;
          }
          else {
            local_420._0_4_ = (local_3c->___posMid_11).___x_2;
            local_420._4_4_ = (local_3c->___posMid_11).___y_3;
            local_42c._0_4_ = (param_1->___orbitPos_33).___x_2;
            local_42c._4_4_ = (param_1->___orbitPos_33).___y_3;
            local_43c = (param_1->___orbitPos_33).___z_4;
            local_438._0_4_ = (local_3c->___posMid_11).___x_2;
            local_438._4_4_ = (local_3c->___posMid_11).___y_3;
            local_444._0_4_ = (param_1->___orbitPos_33).___x_2;
            local_444._4_4_ = (param_1->___orbitPos_33).___y_3;
            local_450._0_4_ = (local_3c->___posMid_11).___x_2;
            local_450._4_4_ = (local_3c->___posMid_11).___y_3;
            local_448 = (local_3c->___posMid_11).___z_4;
            local_720 = local_43c - local_448;
            local_e4.___y_3 = (float)local_42c._4_4_ - (float)local_438._4_4_;
            local_e4.___x_2 = (float)(undefined4)local_42c - (float)(undefined4)local_420;
            pVVar67 = &local_910;
            local_414 = local_42c;
            local_e4.___z_4 = local_720;
          }
          pVVar67 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5
                              (pVVar67,&local_e4,(MethodInfo *)0x0);
          pVVar67 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline
                              (&local_940,*pVVar59,*pVVar67,0.2,(MethodInfo *)0x0);
          fVar83 = pVVar67->___y_3;
          fVar85 = pVVar67->___z_4;
          pVVar59->___x_2 = pVVar67->___x_2;
          pVVar59->___y_3 = fVar83;
          (pBVar81->___velocityNext_13).___z_4 = fVar85;
          pVVar67 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5
                              (&local_950,pVVar59,(MethodInfo *)0x0);
          fVar83 = pVVar67->___y_3;
          fVar85 = pVVar67->___z_4;
          pVVar59->___x_2 = pVVar67->___x_2;
          pVVar59->___y_3 = fVar83;
          (pBVar81->___velocityNext_13).___z_4 = fVar85;
        }
        U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
                  ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)local_61,
                   (MethodInfo *)_stringLiteral844421C98F98CFA1613DF2CB8F5AE079666D8631);
        local_14 = CONCAT31(local_14._1_3_,2);
        pVVar59 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                            (&local_980,(MethodInfo *)0x0);
        local_34 = (Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *)0x0;
        local_b0._0_4_ = pVVar59->___x_2;
        local_b0._4_4_ = pVVar59->___y_3;
        local_a8 = pVVar59->___z_4;
        puVar78 = (undefined1 *)((int)&local_84->_padding_ + 1);
        local_6c = (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)
                   ((int)&local_84[-1].___normal_6.___z_4 + 3);
        local_3d = (int)puVar78 < (int)local_61._5_4_;
        local_68 = (float)(uint)(byte)((byte)((uint)local_6c >> 0x1f) ^ 1);
        local_88 = 0.0;
        fVar85 = local_68;
        pBVar75 = local_6c;
        cVar74 = local_3d;
        fVar83 = 0.0;
        bVar73 = 1;
        goto LAB_1087d233;
      case '\x01':
        pVVar67 = BirdFlock_GetLandingPos_m29D97BDB3990AC0642EBC4BFD12590E0DEFD3D97
                            (local_9b0,param_1,pBVar80,(MethodInfo *)0x0);
        local_660._0_4_ = pVVar67->___x_2;
        local_660._4_4_ = pVVar67->___y_3;
        local_688 = pVVar67->___z_4;
        local_66c._0_4_ = (local_3c->___posMid_11).___x_2;
        local_66c._4_4_ = (local_3c->___posMid_11).___y_3;
        local_678._0_4_ = pVVar67->___x_2;
        local_678._4_4_ = pVVar67->___y_3;
        local_168.___x_2 = (float)(undefined4)local_660 - (float)(undefined4)local_66c;
        local_684._0_4_ = (local_3c->___posMid_11).___x_2;
        local_684._4_4_ = (local_3c->___posMid_11).___y_3;
        local_690._0_4_ = pVVar67->___x_2;
        local_690._4_4_ = pVVar67->___y_3;
        local_69c._0_4_ = (local_3c->___posMid_11).___x_2;
        local_69c._4_4_ = (local_3c->___posMid_11).___y_3;
        local_694 = (local_3c->___posMid_11).___z_4;
        local_798 = local_688 - local_694;
        local_168.___y_3 = (float)local_678._4_4_ - (float)local_684._4_4_;
        local_168.___z_4 = local_798;
        local_80 = local_660;
        local_68 = local_688;
        local_44 = (Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *)
                   Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991
                             (&local_168,(MethodInfo *)0x0);
        local_34 = local_44;
        if (local_3c->___mf1_7 == (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0)
        goto LAB_1087ea7f;
        MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
                  (local_3c->___mf1_7,param_1->___landMesh_8,(MethodInfo *)0x0);
        pBVar80 = local_3c;
        if ((local_3c->___landing_20 == (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)0x0
            ) || (pTVar71 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                      ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                       local_3c->___landing_20,(MethodInfo *)0x0),
                 pTVar71 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
        goto LAB_1087ea7f;
        pVVar67 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31
                            (&local_9c0,pTVar71,(MethodInfo *)0x0);
        local_6b4._0_4_ = pVVar67->___x_2;
        local_6b4._4_4_ = pVVar67->___y_3;
        local_6b8 = pVVar67->___z_4;
        local_6c0._0_4_ = pVVar67->___x_2;
        local_6c0._4_4_ = pVVar67->___y_3;
        local_34 = (Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *)
                   ((undefined4)local_6b4 ^ __xmm_80000000800000008000000080000000);
        local_61._1_4_ = local_6b4._4_4_ ^ __xmm_80000000800000008000000080000000;
        local_6c = (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)
                   ((uint)local_6b8 ^ __xmm_80000000800000008000000080000000);
        pBVar75 = pBVar80->___landing_20;
        local_6a8 = local_6b4;
        if (pBVar75 == (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)0x0)
        goto LAB_1087ea7f;
        local_61._17_4_ = (pBVar75->___normal_6).___x_2;
        pOStack_4c = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                     (pBVar75->___normal_6).___y_3;
        fVar85 = (pBVar75->___normal_6).___z_4;
        if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor !=
             '\0') &&
           (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished
            == 0)) {
          il2cpp_runtime_class_init
                    (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
        }
        fVar37.___z_2 = fVar85;
        fVar37.___x_0 = (float)local_61._17_4_;
        fVar37.___y_1 = (float)pOStack_4c;
        pfVar60 = ExtraMath_SetY_m65C79C2D27A9408438A588993C47DCAC2216E149
                            (&local_960,fVar37,0.0,(MethodInfo *)0x0);
        local_2e8._0_4_ = pfVar60->___x_0;
        local_2e8._4_4_ = pfVar60->___y_1;
        local_2d4 = pfVar60->___z_2;
        local_2dc._0_4_ = pfVar60->___x_0;
        local_2dc._4_4_ = pfVar60->___y_1;
        local_7c4 = local_2d4 * __real_3f333333 + (float)local_6c;
        fVar85 = (float)(undefined4)local_2e8 * __real_3f333333 + (float)local_34;
        fVar83 = ((float)local_2e8._4_4_ * __real_3f333333 + (float)local_61._1_4_) *
                 ___real_00000000;
        _local_2f4 = CONCAT44(fVar83,fVar85);
        VVar48.___y_3 = fVar83;
        VVar48.___x_2 = fVar85;
        VVar48.___z_4 = local_7c4;
        local_2d0 = local_2e8;
        pQVar72 = Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF
                            (&local_b00,VVar48,(MethodInfo *)0x0);
        pBVar80 = local_3c;
        local_d8.___Item1_0.___z_2 = (int)pQVar72->___x_0;
        local_d8.___Item2_1.___x_0 = (int)pQVar72->___y_1;
        local_d8.___Item2_1.___y_1 = (int)pQVar72->___z_2;
        local_d8.___Item2_1.___z_2 = (int)pQVar72->___w_3;
        QVar25 = *pQVar72;
        if ((float)local_44 < __real_3e99999a) {
          pVVar59->___x_2 = local_168.___x_2;
          pVVar59->___y_3 = local_168.___y_3;
          QVar26 = local_3c->___rotation0_9;
          (pBVar81->___velocityNext_13).___z_4 = local_168.___z_4;
          pQVar72 = Quaternion_Lerp_mBFA4C4D2574C8140AA840273D3E6565D66F6F261
                              (&local_b10,QVar26,QVar25,0.3,(MethodInfo *)0x0);
          fVar85 = pQVar72->___y_1;
          fVar83 = pQVar72->___z_2;
          fVar86 = pQVar72->___w_3;
          (pBVar80->___rotation1_10).___x_0 = pQVar72->___x_0;
          (pBVar80->___rotation1_10).___y_1 = fVar85;
          (pBVar80->___rotation1_10).___z_2 = fVar83;
          (pBVar80->___rotation1_10).___w_3 = fVar86;
          BirdFlock_SetState_m72806889745C4C557D55CE9E6839387A5AE818AF
                    (param_1,pBVar80,'\x02',(MethodInfo *)0x0);
        }
        else {
          if (local_3c->___landing_20 ==
              (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)0x0) goto LAB_1087ea7f;
          pVVar67 = BirdLanding_get_targetPos_m199AEDE3A329D1C8A117E7408895E8A7CF9AC10D
                              (&local_9d0,local_3c->___landing_20,(MethodInfo *)0x0);
          VVar29.___z_4 = local_68;
          VVar29.___x_2 = (float)(undefined4)local_80;
          VVar29.___y_3 = (float)local_80._4_4_;
          pVVar67 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline
                              (&local_9e0,VVar29,*pVVar67,(float)local_44 + __real_3dcccccd,
                               (MethodInfo *)0x0);
          local_300._0_4_ = pVVar67->___x_2;
          local_300._4_4_ = pVVar67->___y_3;
          local_30c._0_4_ = (pBVar80->___posMid_11).___x_2;
          local_30c._4_4_ = (pBVar80->___posMid_11).___y_3;
          local_318._0_4_ = pVVar67->___x_2;
          local_318._4_4_ = pVVar67->___y_3;
          local_328 = pVVar67->___z_4;
          local_324._0_4_ = (pBVar80->___posMid_11).___x_2;
          local_324._4_4_ = (pBVar80->___posMid_11).___y_3;
          local_330._0_4_ = pVVar67->___x_2;
          local_330._4_4_ = pVVar67->___y_3;
          local_33c._0_4_ = (pBVar80->___posMid_11).___x_2;
          local_33c._4_4_ = (pBVar80->___posMid_11).___y_3;
          local_24c = (float)(undefined4)local_300 - (float)(undefined4)local_30c;
          local_334 = (pBVar80->___posMid_11).___z_4;
          fStack_248 = (float)local_318._4_4_ - (float)local_324._4_4_;
          local_244 = local_328 - local_334;
          if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->
              cctor_finished == 0)) {
            il2cpp_runtime_class_init
                      (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
          }
          VVar38.___y_3 = fStack_248;
          VVar38.___x_2 = local_24c;
          VVar38.___z_4 = local_244;
          pVVar67 = ExtraMath_GetClampedMagnitude_mD672B0998923CC7185D9FC4B53521359092BD9DA
                              (&local_9f0,VVar38,0.7,(MethodInfo *)0x0);
          pVVar67 = Vector3_MoveTowards_mFB45EE30324E487925CA26EE6C001F0A3D257796
                              (&local_a10,*pVVar59,*pVVar67,0.8,(MethodInfo *)0x0);
          local_258._0_4_ = pVVar67->___x_2;
          local_258._4_4_ = pVVar67->___y_3;
          local_250 = pVVar67->___z_4;
          pVVar59->___x_2 = (float)(undefined4)local_258;
          pVVar59->___y_3 = (float)local_258._4_4_;
          local_360._0_4_ = (pBVar80->___velocityPrev_12).___x_2;
          local_360._4_4_ = (pBVar80->___velocityPrev_12).___y_3;
          local_354._0_4_ = (pBVar80->___velocityPrev_12).___x_2;
          local_354._4_4_ = (pBVar80->___velocityPrev_12).___y_3;
          (pBVar81->___velocityNext_13).___z_4 = local_250;
          local_34c = (pBVar80->___velocityPrev_12).___z_4;
          fStack_260 = ((float)local_258._4_4_ - (float)local_360._4_4_) + __real_3f000000;
          local_25c = (local_250 - local_34c) + 0.0;
          local_264 = ((float)(undefined4)local_258 - (float)(undefined4)local_360) + 0.0;
          local_348 = local_360;
          Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991(pVVar59,(MethodInfo *)0x0)
          ;
          VVar49.___y_3 = fStack_260;
          VVar49.___x_2 = local_264;
          VVar49.___z_4 = local_25c;
          pQVar72 = Quaternion_LookRotation_m8A7DB5BDBC361586191AB67ACF857F46160EE3F1
                              (local_af0,*pVVar59,VVar49,(MethodInfo *)0x0);
          fVar85 = pQVar72->___y_1;
          fVar83 = pQVar72->___z_2;
          fVar86 = pQVar72->___w_3;
          QVar25 = *pQVar72;
          (pBVar80->___rotation1_10).___x_0 = pQVar72->___x_0;
          (pBVar80->___rotation1_10).___y_1 = fVar85;
          (pBVar80->___rotation1_10).___z_2 = fVar83;
          (pBVar80->___rotation1_10).___w_3 = fVar86;
          QVar35.___y_1 = (float)local_d8.___Item2_1.___x_0;
          QVar35.___x_0 = (float)local_d8.___Item1_0.___z_2;
          QVar35.___z_2 = (float)local_d8.___Item2_1.___y_1;
          QVar35.___w_3 = (float)local_d8.___Item2_1.___z_2;
          pQVar72 = Quaternion_Lerp_mBFA4C4D2574C8140AA840273D3E6565D66F6F261
                              (&local_aa0,QVar25,QVar35,0.1,(MethodInfo *)0x0);
          fVar85 = pQVar72->___y_1;
          fVar83 = pQVar72->___z_2;
          fVar86 = pQVar72->___w_3;
          (pBVar80->___rotation1_10).___x_0 = pQVar72->___x_0;
          (pBVar80->___rotation1_10).___y_1 = fVar85;
          (pBVar80->___rotation1_10).___z_2 = fVar83;
          (pBVar80->___rotation1_10).___w_3 = fVar86;
        }
        goto switchD_1087b8af_default;
      case '\x02':
        pVVar67 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                            (&local_a20,(MethodInfo *)0x0);
        fVar83 = pVVar67->___y_3;
        fVar85 = pVVar67->___z_4;
        pVVar59->___x_2 = pVVar67->___x_2;
        pVVar59->___y_3 = fVar83;
        (pBVar81->___velocityNext_13).___z_4 = fVar85;
        BirdFlock_SetState_m72806889745C4C557D55CE9E6839387A5AE818AF
                  (param_1,pBVar80,'\x03',(MethodInfo *)0x0);
        if (pBVar80->___mf1_7 == (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0)
        goto LAB_1087ea7f;
        MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
                  (pBVar80->___mf1_7,param_1->___halfSitMesh_6,(MethodInfo *)0x0);
        if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pBVar80->___shade_5 ==
            (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) goto LAB_1087ea7f;
        pTVar71 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                             pBVar80->___shade_5,(MethodInfo *)0x0);
        if (((pBVar80->___landing_20 == (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)0x0
             ) || (pTVar63 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                        pBVar80->___landing_20,(MethodInfo *)0x0),
                  pTVar63 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)) ||
           (pVVar59 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                (&local_a30,pTVar63,(MethodInfo *)0x0),
           pTVar71 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
        goto LAB_1087ea7f;
        Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
                  (pTVar71,*pVVar59,(MethodInfo *)0x0);
        if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pBVar80->___shade_5 ==
            (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) goto LAB_1087ea7f;
        pTVar71 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                             pBVar80->___shade_5,(MethodInfo *)0x0);
        if ((pBVar80->___landing_20 == (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)0x0)
           || (pTVar63 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                   ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                    pBVar80->___landing_20,(MethodInfo *)0x0),
              pTVar63 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
        goto LAB_1087ea7f;
        pQVar72 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200
                            (&local_a40,pTVar63,(MethodInfo *)0x0);
        local_d8.___Item1_0.___z_2 = (int)pQVar72->___x_0;
        local_d8.___Item2_1.___x_0 = (int)pQVar72->___y_1;
        local_d8.___Item2_1.___y_1 = (int)pQVar72->___z_2;
        local_d8.___Item2_1.___z_2 = (int)pQVar72->___w_3;
        pQVar72 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3
                            (&local_a50,-90.0,90.0,0.0,(MethodInfo *)0x0);
        QVar25.___y_1 = (float)local_d8.___Item2_1.___x_0;
        QVar25.___x_0 = (float)local_d8.___Item1_0.___z_2;
        QVar25.___z_2 = (float)local_d8.___Item2_1.___y_1;
        QVar25.___w_3 = (float)local_d8.___Item2_1.___z_2;
        pQVar72 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0
                            (&local_a60,QVar25,*pQVar72,(MethodInfo *)0x0);
        if (pTVar71 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
        goto LAB_1087ea7f;
        Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4
                  (pTVar71,*pQVar72,(MethodInfo *)0x0);
        if ((pBVar80->___landing_20 == (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)0x0)
           || (pTVar71 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                   ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                    pBVar80->___landing_20,(MethodInfo *)0x0),
              pTVar71 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
        goto LAB_1087ea7f;
        pVVar59 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31
                            (&local_810,pTVar71,(MethodInfo *)0x0);
        local_378._0_4_ = pVVar59->___x_2;
        local_378._4_4_ = pVVar59->___y_3;
        local_37c = pVVar59->___z_4;
        local_384._0_4_ = pVVar59->___x_2;
        local_384._4_4_ = pVVar59->___y_3;
        local_27c = (undefined4)local_378 ^ __xmm_80000000800000008000000080000000;
        uStack_278 = local_378._4_4_ ^ __xmm_80000000800000008000000080000000;
        local_274 = (float)((uint)local_37c ^ __xmm_80000000800000008000000080000000);
        pBVar75 = pBVar80->___landing_20;
        local_36c = local_378;
        if (pBVar75 == (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)0x0)
        goto LAB_1087ea7f;
        local_61._17_4_ = (pBVar75->___normal_6).___x_2;
        pOStack_4c = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                     (pBVar75->___normal_6).___y_3;
        fVar85 = (pBVar75->___normal_6).___z_4;
        if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor !=
             '\0') &&
           (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished
            == 0)) {
          il2cpp_runtime_class_init
                    (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
        }
        fVar39.___z_2 = fVar85;
        fVar39.___x_0 = (float)local_61._17_4_;
        fVar39.___y_1 = (float)pOStack_4c;
        pfVar60 = ExtraMath_SetY_m65C79C2D27A9408438A588993C47DCAC2216E149
                            (&local_820,fVar39,0.0,(MethodInfo *)0x0);
        VVar31.___y_3 = (float)uStack_278;
        VVar31.___x_2 = (float)local_27c;
        VVar31.___z_4 = local_274;
        pVVar59 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline
                            (&local_830,VVar31,
                             (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E)*pfVar60,
                             (MethodInfo *)0x0);
        uVar4 = pVVar59->___x_2;
        uVar13 = pVVar59->___y_3;
        fVar85 = pVVar59->___z_4;
        local_2b8 = CONCAT44((float)uVar13 * __real_3ecccccd,uVar4);
        iVar58 = Random_RandomRangeInt_mC1A726071BB9634DCA04EF5DCC1E59360CE392DE
                           (-0x14,0x14,(MethodInfo *)0x0);
        pQVar72 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3
                            (&local_a70,0.0,(float)iVar58,0.0,(MethodInfo *)0x0);
        local_d8.___Item1_0.___z_2 = (int)pQVar72->___x_0;
        local_d8.___Item2_1.___x_0 = (int)pQVar72->___y_1;
        local_d8.___Item2_1.___y_1 = (int)pQVar72->___z_2;
        local_d8.___Item2_1.___z_2 = (int)pQVar72->___w_3;
        VVar50.___z_4 = fVar85;
        VVar50.___x_2 = (float)(undefined4)local_2b8;
        VVar50.___y_3 = (float)local_2b8._4_4_;
        pQVar72 = Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF
                            (&local_a80,VVar50,(MethodInfo *)0x0);
        fVar85 = pQVar72->___x_0;
        fVar83 = pQVar72->___y_1;
        fVar86 = pQVar72->___z_2;
        fVar87 = pQVar72->___w_3;
        pQVar72 = &local_a90;
        break;
      case '\x03':
        pVVar67 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                            (&local_840,(MethodInfo *)0x0);
        fVar83 = pVVar67->___y_3;
        fVar85 = pVVar67->___z_4;
        pVVar59->___x_2 = pVVar67->___x_2;
        fVar86 = __real_40400000;
        pVVar59->___y_3 = fVar83;
        (pBVar81->___velocityNext_13).___z_4 = fVar85;
        if ((float)local_44 <= fVar86) goto switchD_1087b8af_default;
        local_34 = (Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *)
                   Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844((MethodInfo *)0x0);
        pBVar80->___lastActionTime_19 = (float)local_34;
        if (pBVar80->___landing_20 == (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)0x0)
        goto LAB_1087ea7f;
        local_35 = __real_3f733333 < (pBVar80->___landing_20->___normal_6).___y_3;
        local_34 = (Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *)
                   Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872((MethodInfo *)0x0);
        if ((float)local_34 < __real_3dcccccd) {
          pBVar75 = pBVar80->___landing_20;
          if (pBVar75 == (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)0x0)
          goto LAB_1087ea7f;
          BirdLanding_get_sortPos_m53ADEB657C9611AE28CED37CEB847639AAB0E736
                    (&local_8b0,pBVar75,(MethodInfo *)0x0);
          local_35 = pBVar75->___neighbourCount_5;
          fVar85 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872((MethodInfo *)0x0);
          local_34 = (Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *)0x0;
          local_68 = (float)local_35 * __real_3e99999a + fVar85 * __real_3e4ccccd;
          pVVar59 = BirdLanding_get_pos_mFEAFD0CE24293167DABA18669B4F4AC98A0D8FF2
                              (&local_8c0,pBVar75,(MethodInfo *)0x0);
          local_8c = pVVar59->___z_4;
          local_61._17_4_ = pVVar59->___x_2;
          pOStack_4c = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pVVar59->___y_3;
          pVVar64 = BirdFlock_GetSearchCoordinates_m311935888F7BF564C853BBD7AAB7E2CF1066C307
                              (&local_d8,param_1,*pVVar59,0.90000004,(MethodInfo *)0x0);
          local_7f0 = (float)(pVVar64->___Item1_0).___x_0;
          fStack_7ec = (float)(pVVar64->___Item1_0).___y_1;
          piVar23 = &pVVar64->___Item2_1;
          iStack_7e4 = piVar23->___x_0;
          uVar6 = (pVVar64->___Item2_1).___y_1;
          uVar15 = (pVVar64->___Item2_1).___z_2;
          local_3b4._0_4_ = piVar23->___x_0;
          local_3b4._4_4_ = piVar23->___y_1;
          pBVar81 = (Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *)(pVVar64->___Item1_0).___z_2;
          pBStack_7e8 = pBVar81;
          uStack_7e0 = uVar6;
          iStack_7dc = uVar15;
          local_2ac = local_7f0;
          fStack_2a8 = fStack_7ec;
          for (; fVar85 = fStack_2a8, local_44 = pBVar81, (int)pBVar81 < iStack_7dc;
              pBVar81 = (Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *)
                        ((int)&((Il2CppObject_u_0 *)&pBVar81->_padding_)->klass + 1)) {
            for (; fVar83 = local_2ac, local_61._1_4_ = fVar85, (int)fVar85 < local_3b4._4_4_;
                fVar85 = (float)((int)fVar85 + 1)) {
              for (; local_88 = fVar83, (int)fVar83 < (int)local_3b4;
                  fVar83 = (float)((int)fVar83 + 1)) {
                if (((param_1->___master_4 ==
                      (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
                    (pPVar20 = param_1->___master_4->___propPlacer_19,
                    pPVar20 == (PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 *)0x0)) ||
                   (pDVar21 = (Dictionary_2_t8E87E58777505762FF5F4E631F2FDB80F651D1C7 *)
                              pPVar20->___colliderDict_10, local_3c0 = fVar83, fStack_3bc = fVar85,
                   pDVar21 == (Dictionary_2_t8E87E58777505762FF5F4E631F2FDB80F651D1C7 *)0x0))
                goto LAB_1087ea7f;
                VVar41.___y_3 = fVar85;
                VVar41.___x_2 = fVar83;
                VVar41.___z_4 = (float)pBVar81;
                bVar57 = Dictionary_2_TryGetValue_m51EC0B2C281B630CFFE71169FCB6AF1F3E35826F
                                   (pDVar21,VVar41,(int *)&local_b4,
                                    Dictionary_2_TryGetValue_mD5FD41FBACBFE4389569FFAA86DC7CB5DD4F7EF4_RuntimeMethod_var
                                   );
                if (bVar57) {
                  local_7d0 = (float)(int)local_44 + (float)(int)local_44;
                  local_288 = CONCAT44((float)(int)fVar85 + (float)(int)fVar85,
                                       (float)(int)fVar83 + (float)(int)fVar83);
                  local_714 = (float)(int)((int)&local_44->_padding_ + 1);
                  local_714 = local_714 + local_714;
                  local_104 = CONCAT44((float)((int)fVar85 + 1) + (float)((int)fVar85 + 1),
                                       (float)((int)fVar83 + 1) + (float)((int)fVar83 + 1));
                  local_280 = local_7d0;
                  local_fc = local_714;
                  if (local_b4 == (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)0x0)
                  goto LAB_1087ea7f;
                  iVar58 = local_b4->____size_2;
                  while (iVar58 = iVar58 + -1, fVar83 = local_88, fVar85 = (float)local_61._1_4_,
                        -1 < iVar58) {
                    if (((local_b4 == (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)0x0) ||
                        (pGVar70 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                                             (local_b4,iVar58,
                                              List_1_get_Item_m9053981E4F86329B862DCD556ECC7AABFA63BD00_RuntimeMethod_var
                                             ),
                        pGVar70 == (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0)) ||
                       (pTVar71 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                             pGVar70,(MethodInfo *)0x0),
                       pTVar71 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
                    goto LAB_1087ea7f;
                    pVVar59 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341
                                        (&local_8d0,pTVar71,(MethodInfo *)0x0);
                    local_3cc._0_4_ = pVVar59->___x_2;
                    local_3cc._4_4_ = pVVar59->___y_3;
                    fVar85 = pVVar59->___z_4;
                    if ((float)local_288 <= (float)(undefined4)local_3cc) {
                      local_3d8._0_4_ = pVVar59->___x_2;
                      local_3d8._4_4_ = pVVar59->___y_3;
                      if (((local_288._4_4_ <= (float)local_3d8._4_4_) &&
                          (local_3e4._0_4_ = pVVar59->___x_2, local_3e4._4_4_ = pVVar59->___y_3,
                          local_3dc = fVar85, local_280 <= fVar85)) &&
                         ((float)(undefined4)local_3cc < (float)local_104)) {
                        local_3f0._0_4_ = pVVar59->___x_2;
                        local_3f0._4_4_ = pVVar59->___y_3;
                        if (((float)local_3f0._4_4_ < local_104._4_4_) &&
                           (local_3fc._0_4_ = pVVar59->___x_2, local_3fc._4_4_ = pVVar59->___y_3,
                           local_3f4 = fVar85, fVar85 < local_fc)) {
                          uVar7 = pVVar59->___x_2;
                          uVar16 = pVVar59->___y_3;
                          VVar52.___y_3 = (float)uVar16;
                          VVar52.___x_2 = (float)uVar7;
                          VVar34.___z_4 = local_8c;
                          VVar34.___x_2 = (float)local_61._17_4_;
                          VVar34.___y_3 = (float)pOStack_4c;
                          VVar52.___z_4 = fVar85;
                          pVVar59 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline
                                              (&local_8e0,VVar34,VVar52,(MethodInfo *)0x0);
                          local_e4.___x_2 = pVVar59->___x_2;
                          local_e4.___y_3 = pVVar59->___y_3;
                          local_e4.___z_4 = pVVar59->___z_4;
                          local_6c = (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)
                                     Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249
                                               (&local_e4,(MethodInfo *)0x0);
                          if (((float)local_6c <= ___real_3f23d70b) &&
                             (pOVar65 = Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared
                                                  ((
                                                  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                  *)pGVar70,SUB41(&local_a4,0),
                                                  Component_TryGetComponent_TisBirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB_m2044F99A99D9FDBEC7096C2298DB523BEF6A3BD9_RuntimeMethod_var
                                                  ), (char)pOVar65 != '\0')) {
                            pIVar66 = Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                                                ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
                                                  *)pGVar70,
                                                 Component_GetComponent_TisPropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952_m4AD885AB12D9CA67AE0322471B8DB182AB024F62_RuntimeMethod_var
                                                );
                            if (pIVar66 == (Il2CppObject *)0x0) goto LAB_1087ea7f;
                            if (*(char *)&pIVar66[2].monitor != '\0') {
                              if (local_a4 == (Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *)0x0)
                              goto LAB_1087ea7f;
                              pBVar81 = (Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *)
                                        local_a4->___body_4;
                              if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var
                                   ->has_cctor != '\0') &&
                                 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var
                                  ->cctor_finished == 0)) {
                                il2cpp_runtime_class_init
                                          (
                                          Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var
                                          );
                              }
                              bVar57 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                                                 ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
                                                   *)pBVar81,(MethodInfo *)0x0);
                              if (!bVar57) {
                                if (local_a4 ==
                                    (Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *)0x0)
                                goto LAB_1087ea7f;
                                local_35 = *(byte *)&local_a4->___shade_5;
                                local_61._9_4_ =
                                     Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872
                                               ((MethodInfo *)0x0);
                                fVar85 = ((float)local_35 * __real_3e99999a - (float)local_6c) +
                                         (float)local_61._9_4_ * __real_3e4ccccd;
                                if (local_68 <= fVar85) {
                                  local_34 = local_a4;
                                  local_68 = fVar85;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                pBVar81 = local_44;
              }
            }
          }
          if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished
              == 0)) {
            il2cpp_runtime_class_init
                      (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
          }
          pBVar81 = local_34;
          bVar57 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                             ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)local_34,
                              (MethodInfo *)0x0);
          pBVar80 = local_3c;
          if (bVar57) {
            BirdFlock_SetLanding_mA7B5BA5BD831833CBA54D626B3CA707E564F8DA3
                      (param_1,local_3c,(BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)0x0
                       ,(MethodInfo *)0x0);
            pBVar80 = local_3c;
            BirdFlock_SetLanding_mA7B5BA5BD831833CBA54D626B3CA707E564F8DA3
                      (param_1,local_3c,
                       (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)pBVar81,
                       (MethodInfo *)0x0);
            pVVar59 = BirdFlock_GetLandingPos_m29D97BDB3990AC0642EBC4BFD12590E0DEFD3D97
                                (&local_8f0,param_1,pBVar80,(MethodInfo *)0x0);
            pVVar59 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline
                                (&local_900,*pVVar59,pBVar80->___posMid_11,(MethodInfo *)0x0);
            fVar83 = pVVar59->___y_3;
            fVar85 = pVVar59->___z_4;
            (pBVar80->___velocityNext_13).___x_2 = pVVar59->___x_2;
            (pBVar80->___velocityNext_13).___y_3 = fVar83;
            (pBVar80->___velocityNext_13).___z_4 = fVar85;
            if (pBVar80->___mf1_7 == (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0)
            goto LAB_1087ea7f;
            MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
                      (pBVar80->___mf1_7,param_1->___landMesh_8,(MethodInfo *)0x0);
            uVar9._0_4_ = (pBVar80->___velocityNext_13).___x_2;
            uVar9._4_4_ = (pBVar80->___velocityNext_13).___y_3;
            local_408 = uVar9 & 0xffffffff;
            VVar53.___z_4 = (pBVar80->___velocityNext_13).___z_4;
            VVar53.___x_2 = (float)(int)(uVar9 & 0xffffffff);
            VVar53.___y_3 = (float)(int)((uVar9 & 0xffffffff) >> 0x20);
            pQVar72 = Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF
                                (&local_ad0,VVar53,(MethodInfo *)0x0);
            fVar85 = pQVar72->___y_1;
            fVar83 = pQVar72->___z_2;
            fVar86 = pQVar72->___w_3;
            (pBVar80->___rotation1_10).___x_0 = pQVar72->___x_0;
            (pBVar80->___rotation1_10).___y_1 = fVar85;
            (pBVar80->___rotation1_10).___z_2 = fVar83;
            (pBVar80->___rotation1_10).___w_3 = fVar86;
            BirdFlock_SetState_m72806889745C4C557D55CE9E6839387A5AE818AF
                      (param_1,pBVar80,'\x02',(MethodInfo *)0x0);
          }
switchD_1087b8af_default:
          if (pBVar80->___mf0_6 != (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0) {
            pOVar68 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                      MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E
                                (pBVar80->___mf0_6,(MethodInfo *)0x0);
            if (local_3c->___mf1_7 != (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0) {
              pOVar69 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                        MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E
                                  (local_3c->___mf1_7,(MethodInfo *)0x0);
              if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor
                   != '\0') &&
                 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
                il2cpp_runtime_class_init
                          (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
              }
              bVar57 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90
                                 (pOVar68,pOVar69,(MethodInfo *)0x0);
              pBVar81 = local_3c;
              pCVar22 = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)local_3c->___mf0_6;
              if (bVar57) {
                if ((pCVar22 != (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) &&
                   (pGVar70 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                                        (pCVar22,(MethodInfo *)0x0),
                   pGVar70 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0)) {
                  GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
                            (pGVar70,true,(MethodInfo *)0x0);
LAB_1087e1f6:
                  local_14 = local_14 & 0xffffff00;
                  local_13c[local_61._13_4_ + 1] = 0x1164;
                  local_120 = local_120 + 1;
                  FUN_1087e271();
                  return;
                }
              }
              else if ((pCVar22 != (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) &&
                      (pGVar70 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                                           (pCVar22,(MethodInfo *)0x0),
                      pGVar70 != (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0)) {
                GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
                          (pGVar70,false,(MethodInfo *)0x0);
                if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pBVar81->___mf1_7 !=
                    (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
                  pTVar71 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                      ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                       pBVar81->___mf1_7,(MethodInfo *)0x0);
                  pVVar59 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
                                      (&local_6d0,(MethodInfo *)0x0);
                  if (pTVar71 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
                    Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
                              (pTVar71,*pVVar59,(MethodInfo *)0x0);
                    goto LAB_1087e1f6;
                  }
                }
              }
            }
          }
          goto LAB_1087ea7f;
        }
        local_34 = (Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *)
                   Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872((MethodInfo *)0x0);
        if ((float)local_34 < __real_3e99999a) {
          if (local_35 == 0) {
            pMVar19 = pBVar80->___mf1_7;
            local_34 = (Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *)
                       Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872((MethodInfo *)0x0)
            ;
            if (__real_3f000000 <= (float)local_34) {
              pMVar62 = param_1->___sitMesh_5;
            }
            else {
              pMVar62 = param_1->___halfSitMesh_6;
            }
            if (pMVar19 == (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0)
            goto LAB_1087ea7f;
            MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
                      (pMVar19,pMVar62,(MethodInfo *)0x0);
            goto switchD_1087b8af_default;
          }
          pVVar67 = BirdFlock_GetLandingPos_m29D97BDB3990AC0642EBC4BFD12590E0DEFD3D97
                              (&local_880,param_1,pBVar80,(MethodInfo *)0x0);
          pMVar19 = pBVar80->___mf1_7;
          local_294._0_4_ = pVVar67->___x_2;
          local_294._4_4_ = pVVar67->___y_3;
          local_61._1_4_ = pVVar67->___z_4;
          unique0x1000573b = local_294;
          local_34 = (Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *)
                     Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872((MethodInfo *)0x0);
          if (__real_3f000000 <= (float)local_34) {
            pMVar62 = param_1->___sitMesh_5;
          }
          else {
            pMVar62 = param_1->___standMesh_7;
          }
          if (pMVar19 == (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0)
          goto LAB_1087ea7f;
          MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
                    (pMVar19,pMVar62,(MethodInfo *)0x0);
          if (local_3c->___mf1_7 == (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0)
          goto LAB_1087ea7f;
          local_34 = (Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *)
                     MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E
                               (local_3c->___mf1_7,(MethodInfo *)0x0);
          pOVar68 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_1->___standMesh_7;
          if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished
              == 0)) {
            il2cpp_runtime_class_init
                      (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
          }
          bVar57 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                             ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)local_34,pOVar68,
                              (MethodInfo *)0x0);
          pBVar80 = local_3c;
          uVar8 = stack0xffffffb0;
          if (bVar57) {
            pTVar71 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)local_3c,
                                 (MethodInfo *)0x0);
            if (pTVar71 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
            goto LAB_1087ea7f;
            pVVar67 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046
                                (&local_890,pTVar71,(MethodInfo *)0x0);
            local_3a8._0_4_ = pVVar67->___x_2;
            local_3a8._4_4_ = pVVar67->___y_3;
            local_294 = CONCAT44((float)local_3a8._4_4_ * __real_3c23d70a + local_294._4_4_,
                                 (undefined4)local_294);
            uVar8 = local_294;
          }
          VVar33.___z_4 = (float)local_61._1_4_;
          VVar33.___x_2 = (float)(int)uVar8;
          VVar33.___y_3 = (float)(int)((ulonglong)uVar8 >> 0x20);
          pVVar67 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline
                              (&local_8a0,VVar33,pBVar80->___posMid_11,(MethodInfo *)0x0);
          fVar83 = pVVar67->___y_3;
          fVar85 = pVVar67->___z_4;
          pVVar59->___x_2 = pVVar67->___x_2;
          pVVar59->___y_3 = fVar83;
          (pBVar81->___velocityNext_13).___z_4 = fVar85;
          goto switchD_1087b8af_default;
        }
        if ((pBVar80->___landing_20 == (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)0x0)
           || (pTVar71 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                                   ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                                    pBVar80->___landing_20,(MethodInfo *)0x0),
              pTVar71 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0))
        goto LAB_1087ea7f;
        pVVar59 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31
                            (&local_850,pTVar71,(MethodInfo *)0x0);
        local_4e0._0_4_ = pVVar59->___x_2;
        local_4e0._4_4_ = pVVar59->___y_3;
        local_394 = pVVar59->___z_4;
        local_39c._0_4_ = pVVar59->___x_2;
        local_39c._4_4_ = pVVar59->___y_3;
        local_270 = (undefined4)local_4e0 ^ __xmm_80000000800000008000000080000000;
        uStack_26c = local_4e0._4_4_ ^ __xmm_80000000800000008000000080000000;
        local_268 = (float)((uint)local_394 ^ __xmm_80000000800000008000000080000000);
        pBVar75 = pBVar80->___landing_20;
        local_390 = local_4e0;
        if (pBVar75 == (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)0x0)
        goto LAB_1087ea7f;
        local_61._17_4_ = (pBVar75->___normal_6).___x_2;
        pOStack_4c = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                     (pBVar75->___normal_6).___y_3;
        fVar85 = (pBVar75->___normal_6).___z_4;
        if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor !=
             '\0') &&
           (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished
            == 0)) {
          il2cpp_runtime_class_init
                    (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
        }
        fVar40.___z_2 = fVar85;
        fVar40.___x_0 = (float)local_61._17_4_;
        fVar40.___y_1 = (float)pOStack_4c;
        pfVar60 = ExtraMath_SetY_m65C79C2D27A9408438A588993C47DCAC2216E149
                            (&local_860,fVar40,0.0,(MethodInfo *)0x0);
        VVar32.___y_3 = (float)uStack_26c;
        VVar32.___x_2 = (float)local_270;
        VVar32.___z_4 = local_268;
        pVVar59 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline
                            (&local_870,VVar32,
                             (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E)*pfVar60,
                             (MethodInfo *)0x0);
        uVar5 = pVVar59->___x_2;
        uVar14 = pVVar59->___y_3;
        fVar85 = pVVar59->___z_4;
        local_2c4 = CONCAT44((float)uVar14 * __real_3ecccccd,uVar5);
        iVar58 = 0x28;
        if (local_35 == 0) {
          iVar58 = 0x14;
        }
        local_34 = (Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *)
                   Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2
                             ((float)((uint)(float)iVar58 ^ __xmm_80000000800000008000000080000000),
                              (float)iVar58,(MethodInfo *)0x0);
        pQVar72 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3
                            (&local_b20,0.0,(float)local_34,0.0,(MethodInfo *)0x0);
        local_d8.___Item1_0.___z_2 = (int)pQVar72->___x_0;
        local_d8.___Item2_1.___x_0 = (int)pQVar72->___y_1;
        local_d8.___Item2_1.___y_1 = (int)pQVar72->___z_2;
        local_d8.___Item2_1.___z_2 = (int)pQVar72->___w_3;
        VVar51.___z_4 = fVar85;
        VVar51.___x_2 = (float)(undefined4)local_2c4;
        VVar51.___y_3 = (float)local_2c4._4_4_;
        pQVar72 = Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF
                            (&local_ab0,VVar51,(MethodInfo *)0x0);
        fVar85 = pQVar72->___x_0;
        fVar83 = pQVar72->___y_1;
        fVar86 = pQVar72->___z_2;
        fVar87 = pQVar72->___w_3;
        pQVar72 = &local_ac0;
        break;
      default:
        goto switchD_1087b8af_default;
      }
      QVar26.___y_1 = (float)local_d8.___Item2_1.___x_0;
      QVar26.___x_0 = (float)local_d8.___Item1_0.___z_2;
      QVar26.___z_2 = (float)local_d8.___Item2_1.___y_1;
      QVar26.___w_3 = (float)local_d8.___Item2_1.___z_2;
      QVar46.___y_1 = fVar83;
      QVar46.___x_0 = fVar85;
      QVar46.___z_2 = fVar86;
      QVar46.___w_3 = fVar87;
      pQVar72 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0
                          (pQVar72,QVar26,QVar46,(MethodInfo *)0x0);
      fVar85 = pQVar72->___y_1;
      fVar83 = pQVar72->___z_2;
      fVar86 = pQVar72->___w_3;
      (pBVar80->___rotation1_10).___x_0 = pQVar72->___x_0;
      (pBVar80->___rotation1_10).___y_1 = fVar85;
      (pBVar80->___rotation1_10).___z_2 = fVar83;
      (pBVar80->___rotation1_10).___w_3 = fVar86;
      goto switchD_1087b8af_default;
    }
LAB_1087e2ab:
  }
  uVar76 = 0;
  do {
    if ((int)local_61._5_4_ <= (int)uVar76) {
      if (0 < param_1->___takeOffCount_27) {
        param_1->___takeOffCount_27 = 0;
      }
      local_13c[local_61._13_4_ + 1] = 0x13d0;
      FUN_1087ea4f();
      return;
    }
    pLVar17 = param_1->___birds_17;
    if (pLVar17 == (List_1_tF12B8ECABFB01DFF6CE11CBC139AC6115179DCC9 *)0x0) goto LAB_1087ea7f;
    if ((uint)pLVar17->____size_2 <= uVar76) {
                    /* WARNING: Subroutine does not return */
      ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                ((MethodInfo *)0x0);
    }
    iVar58 = *(int *)(pLVar17->____items_1 + uVar76 * 4 + 0x10);
    if (iVar58 == 0) goto LAB_1087ea7f;
    uStack_228 = *(undefined8 *)(iVar58 + 0x4c);
    fStack_22c = *(float *)(iVar58 + 0x54);
    uStack_234 = *(undefined8 *)(iVar58 + 0x4c);
    uStack_15c._4_4_ = (float)((ulonglong)uStack_228 >> 0x20);
    uStack_21c = *(undefined8 *)(iVar58 + 0x40);
    fStack_1fc = *(float *)(iVar58 + 0x48);
    uStack_204 = *(undefined8 *)(iVar58 + 0x40);
    fStack_700 = (float)uStack_21c - (float)uStack_228 * __real_3f000000;
    uStack_210._4_4_ = (float)((ulonglong)uStack_21c >> 0x20);
    local_94 = uStack_210._4_4_ - uStack_15c._4_4_ * __real_3f000000;
    uStack_6fc = 0;
    uStack_6f8 = 0;
    uStack_6f4 = 0;
    local_c0 = fStack_1fc - fStack_22c * __real_3f000000;
    uStack_110 = *(undefined8 *)(iVar58 + 0x40);
    uStack_1e0 = *(undefined8 *)(iVar58 + 0x58);
    fStack_1e4 = *(float *)(iVar58 + 0x60);
    uStack_1ec = *(undefined8 *)(iVar58 + 0x58);
    uStack_240._4_4_ = (float)((ulonglong)uStack_1e0 >> 0x20);
    uStack_1d4 = *(undefined8 *)(iVar58 + 0x40);
    fStack_178 = *(float *)(iVar58 + 0x48);
    uStack_180 = *(undefined8 *)(iVar58 + 0x40);
    local_61._9_4_ = (float)uStack_1e0 * __real_3f000000 + (float)uStack_1d4;
    uStack_1c8._4_4_ = (float)((ulonglong)uStack_1d4 >> 0x20);
    local_bc = uStack_1c8._4_4_ + uStack_240._4_4_ * __real_3f000000;
    local_b8 = fStack_178 + fStack_1e4 * __real_3f000000;
    local_80 = CONCAT44(*(undefined4 *)(iVar58 + 0x70),(undefined4)local_80);
    uStack_240 = uStack_1e0;
    uStack_210 = uStack_21c;
    uStack_1c8 = uStack_1d4;
    uStack_15c = uStack_228;
    fStack_108 = fStack_1fc;
    fVar85 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844((MethodInfo *)0x0);
    stack0xffffffb0 = CONCAT44(fVar85,local_61._17_4_);
    local_44 = (Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *)
               Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
                         ((float)local_80._4_4_,(float)local_80._4_4_ + __real_3e99999a,fVar85,
                          (MethodInfo *)0x0);
    local_61._1_4_ = __real_3f800000 - (float)local_44;
    local_8c = (float)local_61._1_4_ * (float)local_61._1_4_;
    fVar83 = local_94 * local_8c;
    fVar85 = ((float)local_61._1_4_ + (float)local_61._1_4_) * (float)local_44;
    local_94 = (float)local_44 * (float)local_44;
    local_f8.___z_2 = local_b8 * local_94 + fStack_108 * fVar85 + local_c0 * local_8c;
    *(ulonglong *)(iVar58 + 100) =
         CONCAT44(local_bc * local_94 + uStack_110._4_4_ * fVar85 + fVar83,
                  fStack_700 * local_8c + (float)uStack_110 * fVar85 +
                  (float)local_61._9_4_ * local_94);
    *(float *)(iVar58 + 0x6c) = local_f8.___z_2;
    if ((*(char *)(iVar58 + 0x75) == '\x03') || (*(char *)(iVar58 + 0x76) == '\x03')) {
      local_74 = (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)
                 (float)(*(char *)(iVar58 + 0x75) == '\x03');
      local_34 = (Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *)
                 (float)(*(char *)(iVar58 + 0x76) == '\x03');
      if (*(MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A **)(iVar58 + 0x14) ==
          (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0) goto LAB_1087ea7f;
      pMVar62 = MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E
                          (*(MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A **)(iVar58 + 0x14)
                           ,(MethodInfo *)0x0);
      local_80 = CONCAT44(pMVar62,(undefined4)local_80);
      pOVar68 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_1->___standMesh_7;
      stack0xffffffb0 = CONCAT44(pOVar68,local_61._17_4_);
      if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
        pOVar68 = pOStack_4c;
      }
      bVar57 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                         (local_80._4_4_,pOVar68,(MethodInfo *)0x0);
      if (bVar57) {
        local_74 = (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)
                   ((float)local_74 * __real_3f333333);
      }
      if (*(MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A **)(iVar58 + 0x18) ==
          (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0) goto LAB_1087ea7f;
      pOVar69 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E
                          (*(MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A **)(iVar58 + 0x18)
                           ,(MethodInfo *)0x0);
      pOVar68 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)param_1->___standMesh_7;
      pOStack_4c = pOVar68;
      local_80._4_4_ = pOVar69;
      if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
      }
      bVar57 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                         (local_80._4_4_,pOStack_4c,(MethodInfo *)0x0);
      pBVar81 = local_34;
      if (bVar57) {
        pBVar81 = (Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *)
                  ((float)local_34 * __real_3f333333);
      }
      fVar85 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616
                         ((float)local_74,(float)pBVar81,(float)local_44,(MethodInfo *)0x0);
      local_80 = CONCAT44(*(undefined4 *)(iVar58 + 0x10),(undefined4)local_80);
      stack0xffffffb0 = CONCAT44(fVar85,local_61._17_4_);
      pVVar59 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
                          (&local_6d0,(MethodInfo *)0x0);
      uStack_1bc._0_4_ = pVVar59->___x_2;
      uStack_1bc._4_4_ = pVVar59->___y_3;
      fStack_1a8 = pVVar59->___z_4;
      uStack_1b0._0_4_ = pVVar59->___x_2;
      uStack_1b0._4_4_ = pVVar59->___y_3;
      fStack_118 = (float)uStack_1bc._4_4_ * (float)pOStack_4c * ___real_3e6147ae;
      fStack_11c = (float)pOStack_4c * (float)(undefined4)uStack_1bc * ___real_3e6147ae;
      fStack_114 = fStack_1a8 * (float)pOStack_4c * ___real_3e6147ae;
      uStack_1a4 = uStack_1bc;
      if (local_80._4_4_ == (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0)
      goto LAB_1087ea7f;
      VVar54.___y_3 = fStack_118;
      VVar54.___x_2 = fStack_11c;
      VVar54.___z_4 = fStack_114;
      Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
                ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)local_80._4_4_,VVar54,
                 (MethodInfo *)0x0);
      if ((*(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)(iVar58 + 0x10) ==
           (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) ||
         (pGVar70 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                              (*(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)
                                (iVar58 + 0x10),(MethodInfo *)0x0),
         pGVar70 == (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0)) goto LAB_1087ea7f;
      bVar57 = true;
    }
    else {
      if ((*(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)(iVar58 + 0x10) ==
           (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) ||
         (pGVar70 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                              (*(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)
                                (iVar58 + 0x10),(MethodInfo *)0x0),
         pGVar70 == (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0)) goto LAB_1087ea7f;
      bVar57 = false;
    }
    GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(pGVar70,bVar57,(MethodInfo *)0x0)
    ;
    if (*(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 **)(iVar58 + 0xc) ==
        (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_1087ea7f;
    Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91
              (*(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 **)(iVar58 + 0xc),
               *(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(iVar58 + 100),
               (MethodInfo *)0x0);
    stack0xffffffb0 = CONCAT44(*(undefined4 *)(iVar58 + 0xc),local_61._17_4_);
    pQVar72 = Quaternion_Lerp_mBFA4C4D2574C8140AA840273D3E6565D66F6F261
                        (&QStack_800,
                         *(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(iVar58 + 0x20),
                         *(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(iVar58 + 0x30),
                         (float)local_44,(MethodInfo *)0x0);
    if (pOStack_4c == (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0) goto LAB_1087ea7f;
    Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4
              ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)pOStack_4c,*pQVar72,
               (MethodInfo *)0x0);
    if ((*(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)(iVar58 + 0x14) ==
         (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) ||
       (pGVar70 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                            (*(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)
                              (iVar58 + 0x14),(MethodInfo *)0x0),
       pGVar70 == (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0)) goto LAB_1087ea7f;
    bVar57 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE
                       (pGVar70,(MethodInfo *)0x0);
    if (bVar57) {
      if (*(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)(iVar58 + 0x14) ==
          (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) goto LAB_1087ea7f;
      pTVar71 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                          (*(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)(iVar58 + 0x14),
                           (MethodInfo *)0x0);
      stack0xffffffb0 = CONCAT44(pTVar71,local_61._17_4_);
      pVVar59 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
                          ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_710,
                           (MethodInfo *)0x0);
      uStack_1f8._0_4_ = pVVar59->___x_2;
      uStack_1f8._4_4_ = pVVar59->___y_3;
      fStack_184 = pVVar59->___z_4;
      fVar85 = __real_3f800000 - local_94 * (float)local_44;
      uStack_198._0_4_ = pVVar59->___x_2;
      uStack_198._4_4_ = pVVar59->___y_3;
      local_104 = CONCAT44((float)uStack_198._4_4_ * fVar85,(float)(undefined4)uStack_1f8 * fVar85);
      local_fc = fStack_184 * fVar85;
      uStack_18c = uStack_198;
      if (pOStack_4c == (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0) goto LAB_1087ea7f;
      VVar55.___y_3 = (float)uStack_198._4_4_ * fVar85;
      VVar55.___x_2 = (float)(undefined4)uStack_1f8 * fVar85;
      VVar55.___z_4 = local_fc;
      Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
                ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)pOStack_4c,VVar55,
                 (MethodInfo *)0x0);
      if (*(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)(iVar58 + 0x18) ==
          (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) goto LAB_1087ea7f;
      pTVar71 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                          (*(Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 **)(iVar58 + 0x18),
                           (MethodInfo *)0x0);
      pVVar59 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB
                          (&VStack_7c0,(MethodInfo *)0x0);
      pVVar59 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline
                          (aVStack_7b0,*pVVar59,__real_3f800000 - local_8c * (float)local_61._1_4_,
                           (MethodInfo *)0x0);
      if (pTVar71 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_1087ea7f;
      Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A
                (pTVar71,*pVVar59,(MethodInfo *)0x0);
    }
    uVar76 = uVar76 + 1;
  } while( true );
LAB_1087d233:
  bVar56 = bVar73;
  if (SUB41(fVar85,0) == '\0' && cVar74 == '\0') goto LAB_1087d685;
  local_35 = bVar56 ^ 1;
  local_8d = bVar56;
  bVar73 = local_35;
  if (bVar56 == 0) {
    if (SUB41(fVar85,0) == '\0') goto LAB_1087d233;
    local_6c = (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)
               ((int)(pBVar75 + 0xffffffff) + 0x1f);
    local_68 = (float)(CONCAT31(local_68._1_3_,(byte)((uint)local_6c >> 0x1f)) ^ 1);
    puVar79 = puVar78;
  }
  else {
    if (cVar74 == '\0') goto LAB_1087d233;
    puVar79 = puVar78 + 1;
    local_3d = (int)puVar79 < (int)local_61._5_4_;
    pBVar75 = (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)puVar78;
  }
  if (((List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)param_1->___birds_17 ==
       (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)0x0) ||
     (pGVar70 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                          ((List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)param_1->___birds_17,
                           (int)pBVar75,
                           List_1_get_Item_mA819AC4D6EC8BABA8328B8366A4F71E7BB7FB982_RuntimeMethod_var
                          ), pGVar70 == (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0)
     ) goto LAB_1087ea7f;
  local_4cc = *(float *)(pGVar70 + 9);
  local_4b0._0_4_ = (local_3c->___pos_14).___x_2;
  local_4b0._4_4_ = (local_3c->___pos_14).___y_3;
  local_61c = (local_3c->___pos_14).___z_4;
  local_4a4 = *(undefined8 *)&pGVar70[8].field_0x4;
  local_150.___x_2 = (float)local_4a4 - (float)(undefined4)local_4b0;
  local_4c8._0_4_ = (local_3c->___pos_14).___x_2;
  local_4c8._4_4_ = (local_3c->___pos_14).___y_3;
  local_4bc._4_4_ = (float)((ulonglong)local_4a4 >> 0x20);
  local_4d4 = *(undefined8 *)&pGVar70[8].field_0x4;
  local_150.___y_3 = local_4bc._4_4_ - (float)local_4c8._4_4_;
  local_624._0_4_ = (local_3c->___pos_14).___x_2;
  local_624._4_4_ = (local_3c->___pos_14).___y_3;
  local_750 = local_4cc - local_61c;
  pBVar75 = local_6c;
  fVar85 = local_68;
  puVar78 = puVar79;
  cVar74 = local_3d;
  fVar83 = local_88;
  local_4bc = local_4a4;
  local_150.___z_4 = local_750;
  bVar73 = local_35;
  if (local_8d == 0) {
    if (local_150.___x_2 < __real_40000000) {
      local_68 = (float)(extraout_EDX & 0xffffff00);
      fVar85 = local_68;
      goto LAB_1087d233;
    }
  }
  else if (__real_40000000 < local_150.___x_2) {
    local_3d = '\0';
    cVar74 = local_3d;
    goto LAB_1087d233;
  }
  if ((pGVar70[9].field_0xa == '\0') || (pGVar70[9].field_0xa == '\x04')) {
    local_8c = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249
                         (&local_150,(MethodInfo *)0x0);
    local_61._9_4_ =
         Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249
                   (&local_150,(MethodInfo *)0x0);
    fVar85 = local_68;
    pBVar75 = local_6c;
    cVar74 = local_3d;
    fVar83 = local_88;
    bVar73 = local_35;
    if ((float)local_61._9_4_ < __real_40800000) {
      dVar82 = (double)local_8c;
      _libm_sse2_sqrt_precise();
      fVar83 = (float)dVar82;
      local_c0 = __real_3f800000 - fVar83 * __real_3e800000;
      local_bc = local_c0 * local_c0;
      fVar85 = local_c0 - __real_3f19999a;
      local_94 = (float)local_b0 - (local_150.___x_2 / fVar83) * fVar85 * local_bc * local_c0;
      local_80 = CONCAT44(local_b0._4_4_ -
                          (local_150.___y_3 / fVar83) * fVar85 * local_bc * local_c0,
                          (undefined4)local_80);
      stack0xffffffb0 =
           CONCAT44(local_a8 - (local_150.___z_4 / fVar83) * fVar85 * local_bc * local_c0,
                    local_61._17_4_);
      local_b8 = *(float *)(pGVar70 + 7);
      local_d8.___Item2_1.___y_1 = (int)*(undefined8 *)&pGVar70[6].field_0x4;
      local_d8.___Item2_1.___z_2 = (int)((ulonglong)*(undefined8 *)&pGVar70[6].field_0x4 >> 0x20);
      local_600 = *(undefined8 *)&pGVar70[7].field_0x4;
      local_8c = *(float *)&pGVar70[9].field_0x4;
      local_61._1_4_ = *(undefined4 *)(pGVar70 + 8);
      local_61._9_4_ = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844((MethodInfo *)0x0);
      local_61._9_4_ =
           Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
                     (local_8c,local_8c + __real_3e99999a,(float)local_61._9_4_,(MethodInfo *)0x0);
      VVar30.___y_3 = (float)local_d8.___Item2_1.___z_2;
      VVar30.___x_2 = (float)local_d8.___Item2_1.___y_1;
      VVar30.___z_4 = local_b8;
      VVar44.___z_4 = (float)local_61._1_4_;
      VVar44.___x_2 = (float)(undefined4)local_600;
      VVar44.___y_3 = (float)local_600._4_4_;
      pVVar59 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline
                          (&local_990,VVar30,VVar44,(float)local_61._9_4_,(MethodInfo *)0x0);
      local_51c._0_4_ = pVVar59->___x_2;
      local_51c._4_4_ = pVVar59->___y_3;
      local_4fc = pVVar59->___z_4;
      local_528._0_4_ = (local_3c->___velocityNext_13).___x_2;
      local_528._4_4_ = (local_3c->___velocityNext_13).___y_3;
      local_4ec._0_4_ = pVVar59->___x_2;
      local_4ec._4_4_ = pVVar59->___y_3;
      local_4f8._0_4_ = (local_3c->___velocityNext_13).___x_2;
      local_4f8._4_4_ = (local_3c->___velocityNext_13).___y_3;
      local_504._0_4_ = pVVar59->___x_2;
      local_504._4_4_ = pVVar59->___y_3;
      local_508 = (local_3c->___velocityNext_13).___z_4;
      local_510._0_4_ = (local_3c->___velocityNext_13).___x_2;
      local_510._4_4_ = (local_3c->___velocityNext_13).___y_3;
      local_75c = (local_4fc - local_508) * local_bc * local_c0 + (float)pOStack_4c;
      fVar83 = local_bc + local_88;
      local_b0 = CONCAT44(((float)local_4ec._4_4_ - (float)local_4f8._4_4_) * local_bc * local_c0 +
                          (float)local_80._4_4_,
                          ((float)(undefined4)local_51c - (float)(undefined4)local_528) * local_bc *
                          local_c0 + local_94);
      local_34 = (Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *)((int)&local_34->_padding_ + 1);
      fVar85 = local_68;
      pBVar75 = local_6c;
      cVar74 = local_3d;
      local_a8 = local_75c;
      local_88 = fVar83;
      bVar73 = local_35;
      if (6 < (int)local_34) {
LAB_1087d685:
        if (___real_00000000 < fVar83) {
          fVar83 = __real_3f800000 / fVar83;
          local_544 = (local_3c->___velocityNext_13).___z_4;
          local_540._0_4_ = (local_3c->___velocityNext_13).___x_2;
          local_540._4_4_ = (local_3c->___velocityNext_13).___y_3;
          local_54c._0_4_ = (local_3c->___velocityNext_13).___x_2;
          local_54c._4_4_ = (local_3c->___velocityNext_13).___y_3;
          local_768 = local_544 + local_a8 * fVar83;
          (local_3c->___velocityNext_13).___x_2 =
               (float)local_b0 * fVar83 + (float)(undefined4)local_540;
          (local_3c->___velocityNext_13).___y_3 = (float)local_540._4_4_ + local_b0._4_4_ * fVar83;
          (local_3c->___velocityNext_13).___z_4 = local_768;
          local_534 = local_540;
        }
        local_14 = CONCAT31(local_14._1_3_,1);
        local_13c[local_61._13_4_ + 1] = 0x755;
        local_120 = local_120 + 1;
        FUN_1087d793();
        return;
      }
    }
  }
  goto LAB_1087d233;
}
