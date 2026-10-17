// RVA 0xe0f220 | Placemaker.GridGenerator$$AppendQuadList
// PDB: GridGenerator_AppendQuadList_m0C5893733B52614723B18A072C52204EE7212B0F
// Body: [[10e0f220, 10e0f31e] [10e0f325, 10e0f332] [10e0f336, 10e0fb53] [10e0fb57, 10e10337]]
// Direct callees:
// 10054800 List_1_get_Item_m089675F063BA75D21581420825BF25DA6BBF08FE_inline
// 10068ec0 List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
// 10068f50 List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10192150 memset
// 10224ac0 Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
// 1040d9d0 HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C
// 1040d9e0 HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
// 105d2140 List_1_Reverse_m7B9BCAAAFEFA4A592FB0146172ABA4505DB59FD0_gshared
// 10806c40 Quad_IsValid_mAFF3A31F94E7A320D6392C9E04051004DB4EA8C0
// 10836df0 ExtraMath_Rotate2D90_m0730CA71D0DEE72D68346D720F9B629E4E7B143B
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 10e131d0 GridGenerator_HexToPatchHex_m76C2EC3C4EFBEF2BDE06D1E3238721BE5D57FD02
// 11030140 List_1_Add_mECC1D5B14529BD0CF0EB28BF00B02F522D1EC3C8_gshared

bool __cdecl
GridGenerator_AppendQuadList_m0C5893733B52614723B18A072C52204EE7212B0F
          (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *param_1,
          List_1_t362E1E6F6B0FB340C800DA5E75E4A1F3A5F2393C *param_2,
          Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 param_3,int *param_4,int param_5,
          MethodInfo *param_6)

{
  Quad_t1E4E0FD4F68559FA20870CFBD24EB4162BEDBDAB *pQVar1;
  int *piVar2;
  float *pfVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  uint uVar7;
  QuadU5BU5D_t872FFC7C4380637473FAED13FE43DDF442E04221 *pQVar8;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 *piVar9;
  Quad_t1E4E0FD4F68559FA20870CFBD24EB4162BEDBDAB QVar10;
  Quad_t1E4E0FD4F68559FA20870CFBD24EB4162BEDBDAB QVar11;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar12;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar13;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar14;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D fVar15;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar16;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar17;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar18;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar19;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar20;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar21;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar22;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar23;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar24;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar25;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar26;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar27;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar28;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar29;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar30;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar31;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar32;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar33;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar34;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar35;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar36;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar37;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar38;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar39;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar40;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar41;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar42;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar43;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar44;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar45;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar46;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar47;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar48;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar49;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar50;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar51;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar52;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar53;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar54;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar55;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar56;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar57;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar58;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar59;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar60;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar61;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar62;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar63;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar64;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar65;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar66;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar67;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar68;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar69;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar70;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar71;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar72;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar73;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar74;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar75;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar76;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar77;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar78;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar79;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar80;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar81;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar82;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar83;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar84;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar85;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar86;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar87;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar88;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar89;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar90;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar91;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar92;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar93;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar94;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar95;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar96;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar97;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar98;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar99;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar100;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar101;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar102;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar103;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar104;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar105;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar106;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar107;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar108;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar109;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar110;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar111;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar112;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar113;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar114;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar115;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar116;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar117;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar118;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar119;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar120;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar121;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar122;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar123;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar124;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar125;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar126;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar127;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar128;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar129;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar130;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar131;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar132;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar133;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar134;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar135;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar136;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar137;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar138;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar139;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar140;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar141;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar142;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar143;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar144;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar145;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar146;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar147;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar148;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar149;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar150;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar151;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar152;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar153;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar154;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar155;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar156;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar157;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar158;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar159;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar160;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar161;
  bool bVar162;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *piVar164;
  byte bVar163;
  String_t *pSVar165;
  int iVar166;
  float fVar167;
  String_t *pSVar168;
  int iVar169;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar170;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar171;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar172;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar173;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar174;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BVar175;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar176;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar177;
  MethodInfo *pMVar178;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_1e8;
  String_t *local_1dc;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BStack_1d8;
  String_t *pSStack_1d0;
  String_t *local_1cc;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iStack_1c8;
  String_t *local_1bc;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BStack_1b8;
  String_t *pSStack_1b0;
  String_t *local_1ac;
  String_t *pSStack_1a8;
  String_t *pSStack_1a4;
  String_t *pSStack_1a0;
  String_t *local_19c;
  String_t *pSStack_198;
  String_t *pSStack_194;
  float fStack_190;
  String_t *local_18c;
  String_t *pSStack_188;
  String_t *pSStack_184;
  String_t *pSStack_180;
  float local_17c;
  float local_170;
  String_t *local_16c;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iStack_168;
  String_t *local_15c;
  String_t *pSStack_158;
  String_t *pSStack_154;
  String_t *pSStack_150;
  String_t *local_14c;
  String_t *pSStack_148;
  String_t *pSStack_144;
  String_t *pSStack_140;
  undefined8 local_13c;
  undefined8 local_130;
  String_t *local_124;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BStack_120;
  String_t *pSStack_118;
  String_t *local_114;
  String_t *pSStack_110;
  String_t *pSStack_10c;
  String_t *pSStack_108;
  String_t *local_104;
  String_t *pSStack_100;
  String_t *pSStack_fc;
  float fStack_f8;
  String_t *local_f4;
  String_t *pSStack_f0;
  String_t *pSStack_ec;
  String_t *pSStack_e8;
  float local_e4;
  String_t *local_e0;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BStack_dc;
  String_t *pSStack_d4;
  String_t *local_d0;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 BStack_cc;
  String_t *pSStack_c4;
  String_t *local_c0;
  String_t *pSStack_bc;
  String_t *pSStack_b8;
  float fStack_b4;
  String_t *local_b0;
  String_t *pSStack_ac;
  String_t *pSStack_a8;
  String_t *pSStack_a4;
  float local_a0;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_9c;
  String_t *local_94;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_90;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_88;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_80;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_78;
  String_t *local_70;
  String_t *local_6c;
  String_t *local_68;
  String_t *local_64;
  String_t *local_60;
  String_t *local_5c;
  String_t *pSStack_58;
  String_t *pSStack_54;
  float fStack_50;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_4c;
  int local_44;
  int local_40;
  String_t *local_3c;
  String_t *local_38;
  String_t *local_34;
  String_t *local_30;
  String_t *local_2c;
  BFRSUAhOOJewZbLLulMMmpJRhJp_t2E49E98D91FFBB167B6A6B898E7528A2FEA39411 local_28;
  String_t *local_20;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 local_1c;
  String_t *local_14;
  Il2CppObject *local_10;
  Il2CppObject *local_c;
  byte local_8;
  byte local_7;
  byte local_6;
  byte local_5;

  if (DAT_11522674 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_TryGetValue_m58AABB44A11FAADEB67D43D2492E3EAF4D3710F4_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_TryGetValue_mC63137D5FA2A69BCC84781B1FC7639F5406175F7_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_mECC1D5B14529BD0CF0EB28BF00B02F522D1EC3C8_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Reverse_mD570D43E71F15713F7C070587F722F607B8363B6_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m1C5E87EEF4B8F8CB985E6C4FD69D863ABAD79F14_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mAC12695B2E67B38A74D7993943D4CC0160E83EC4_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m5EE26E05E654C6A56783D6605173D66CA24C08FE_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mFD0D2FD320135957299B89379B9A2829FB8E7D09_RuntimeMethod_var)
    ;
    DAT_11522674 = '\x01';
  }
  memset((uchar *)&local_e0,'\0',0x44);
  if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished ==
         0)) {
    il2cpp_runtime_class_init
              (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
  }
  local_9c = ExtraMath_Rotate2D90_m0730CA71D0DEE72D68346D720F9B629E4E7B143B
                       (param_3,(MethodInfo *)0x0);
  BVar59.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
  BVar59.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)pSStack_c4;
  BVar58.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_38;
  BVar58.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
  iVar177.___y_1 = local_44;
  iVar177.___x_0 = local_40;
  BVar17.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_dc.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
  BVar17.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_dc.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
  if (param_2 == (List_1_t362E1E6F6B0FB340C800DA5E75E4A1F3A5F2393C *)0x0) {
LAB_10e10333:
    local_2c = BVar59.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
    pSStack_c4 = (String_t *)BVar59.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
    local_38 = BVar58.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
    local_20 = (String_t *)BVar58.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
    local_44 = iVar177.___y_1;
    local_40 = iVar177.___x_0;
    BStack_dc = BVar17;
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  uVar7 = param_2->____size_2;
  if (uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
              ((MethodInfo *)0x0);
  }
  if (uVar7 <= uVar7 - 1) {
                    /* WARNING: Subroutine does not return */
    ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
              ((MethodInfo *)0x0);
  }
  param_3.___y_1._3_1_ = false;
  local_40 = -1;
  pQVar8 = param_2->____items_1;
  local_44 = -1;
  local_14 = (String_t *)0x0;
  param_3.___y_1 = 0.0;
  local_38 = (String_t *)0x0;
  pQVar1 = pQVar8->m_Items + (uVar7 - 1);
  local_124 = *(String_t **)pQVar1;
  BStack_120.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (pQVar1->___v0_1).___x_0;
  BStack_120.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = (String_t *)(pQVar1->___v0_1).___y_1;
  pSStack_118 = (String_t *)(pQVar1->___v1_2).___x_0;
  piVar2 = &pQVar8->m_Items[uVar7 - 1].___v1_2.___y_1;
  local_114 = (String_t *)*piVar2;
  pSStack_110 = (String_t *)piVar2[1];
  pSStack_10c = (String_t *)piVar2[2];
  pSStack_108 = (String_t *)piVar2[3];
  piVar2 = &pQVar8->m_Items[uVar7 - 1].___v3_4.___y_1;
  local_104 = (String_t *)*piVar2;
  pSStack_100 = (String_t *)piVar2[1];
  pSStack_fc = (String_t *)piVar2[2];
  fStack_f8 = (float)piVar2[3];
  pfVar3 = &pQVar8->m_Items[uVar7 - 1].___p1_6.___y_1;
  local_f4 = (String_t *)*pfVar3;
  pSStack_f0 = (String_t *)pfVar3[1];
  pSStack_ec = (String_t *)pfVar3[2];
  pSStack_e8 = (String_t *)pfVar3[3];
  local_e4 = pQVar8->m_Items[uVar7 - 1].___p3_8.___y_1;
  local_c = (Il2CppObject *)0x0;
  local_10 = (Il2CppObject *)0x0;
  if (0 < param_5) {
    do {
      bVar162 = Quad_IsValid_mAFF3A31F94E7A320D6392C9E04051004DB4EA8C0
                          ((Quad_t1E4E0FD4F68559FA20870CFBD24EB4162BEDBDAB *)&local_124,
                           (MethodInfo *)0x0);
      if (!bVar162) break;
      local_6c = (String_t *)BStack_120.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
      local_94 = pSStack_108;
      pSStack_54 = (String_t *)
                   (((int)&pSStack_108->_padding_ +
                    (int)(int *)BStack_120.___JcmgDDuATuYwIOWhebgtdHoiXsW_0) * 5 -
                   ((int)&pSStack_110->_padding_ + (int)&pSStack_118->_padding_));
      local_70 = BStack_120.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
      fStack_50 = 0.0;
      local_60 = local_104;
      iVar169 = ((int)&local_104->_padding_ +
                (int)&(BStack_120.___QxabvXylnsiBkyIsJOltxNNjrIG_1)->_padding_) * 5 -
                ((int)&pSStack_10c->_padding_ + (int)&local_114->_padding_);
      iVar166 = ((int)pSStack_54 >> 0x1f & 7U) + (int)pSStack_54;
      if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished
             == 0)) {
        il2cpp_runtime_class_init
                  (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
      }
      iVar170.___y_1 = (int)((iVar169 >> 0x1f & 7U) + iVar169) >> 3;
      iVar170.___x_0 = iVar166 >> 3;
      piVar164 = HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
                           (&iStack_168,iVar170,(MethodInfo *)0x0);
      local_13c._0_4_ = piVar164->___x_0;
      local_13c._4_4_ = piVar164->___y_1;
      uVar4 = piVar164->___x_0;
      uVar5 = piVar164->___y_1;
      local_170 = (float)piVar164->___z_2;
      fVar14.___y_1 = (float)(int)local_13c._4_4_;
      fVar14.___x_0 = (float)(int)(undefined4)local_13c;
      fVar14.___z_2 = local_170;
      local_130 = local_13c;
      pSStack_58 = (String_t *)uVar4;
      pSStack_54 = (String_t *)uVar5;
      piVar164 = GridGenerator_HexToPatchHex_m76C2EC3C4EFBEF2BDE06D1E3238721BE5D57FD02
                           (&local_1e8,param_1,fVar14,(MethodInfo *)0x0);
      iVar170 = HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C
                          (*piVar164,(MethodInfo *)0x0);
      BVar59.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
      BVar59.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)pSStack_c4;
      iVar86.___y_1 = local_44;
      iVar86.___x_0 = local_40;
      BVar58.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_38;
      BVar58.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
      BVar17.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_dc.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
      BVar17.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_dc.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
      if (iVar170 != iVar86) {
        iVar177 = iVar170;
        if ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)param_1->___patchDict_10 ==
            (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0) goto LAB_10e10333;
        local_44 = iVar170.___y_1;
        local_40 = iVar170.___x_0;
        bVar162 = Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
                            ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                             param_1->___patchDict_10,iVar170,&local_c,
                             Dictionary_2_TryGetValue_mC63137D5FA2A69BCC84781B1FC7639F5406175F7_RuntimeMethod_var
                            );
        BVar59.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
        BVar59.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)pSStack_c4;
        BVar58.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_38;
        BVar58.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
        iVar177.___y_1 = local_44;
        iVar177.___x_0 = local_40;
        BVar17.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_dc.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
        BVar17.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_dc.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
        if (!bVar162) break;
        if ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)param_1->___bitDict_8 ==
            (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0) goto LAB_10e10333;
        bVar162 = Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
                            ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                             param_1->___bitDict_8,iVar170,&local_10,
                             Dictionary_2_TryGetValue_m58AABB44A11FAADEB67D43D2492E3EAF4D3710F4_RuntimeMethod_var
                            );
        BVar161.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_120.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
        BVar161.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_120.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
        BVar160.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_120.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
        BVar160.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_120.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
        BVar147.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_1b8.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
        BVar147.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_1b8.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
        BVar146.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_1b8.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
        BVar146.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_1b8.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
        BVar132.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_1d8.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
        BVar132.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_1d8.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
        BVar131.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_1d8.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
        BVar131.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_1d8.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
        BVar116.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
        BVar116.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)pSStack_c4;
        BVar115.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
        BVar115.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)pSStack_c4;
        BVar59.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
        BVar59.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)pSStack_c4;
        BVar85.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_38;
        BVar85.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
        BVar84.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_38;
        BVar84.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
        BVar58.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_38;
        BVar58.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
        iVar57.___y_1 = local_44;
        iVar57.___x_0 = local_40;
        iVar56.___y_1 = local_44;
        iVar56.___x_0 = local_40;
        iVar177.___y_1 = local_44;
        iVar177.___x_0 = local_40;
        BVar173.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_dc.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
        BVar173.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_dc.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
        BVar171.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_dc.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
        BVar171.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_dc.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
        BVar17.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_dc.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
        BVar17.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_dc.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
        if (!bVar162) break;
        if (local_10 == (Il2CppObject *)0x0) goto LAB_10e10333;
        if (*(char *)&local_10[3].field0_0x0 != '\x05') break;
        BVar17 = BVar171;
        iVar177 = iVar56;
        BVar58 = BVar84;
        BVar59 = BVar115;
        BStack_1d8 = BVar131;
        BStack_1b8 = BVar146;
        BStack_120 = BVar160;
        if ((local_c == (Il2CppObject *)0x0) ||
           (BVar17 = BVar173, iVar177 = iVar57, BVar58 = BVar85, BVar59 = BVar116,
           BStack_1d8 = BVar132, BStack_1b8 = BVar147, BStack_120 = BVar161,
           local_c[2].monitor == (MonitorData *)0x0)) goto LAB_10e10333;
        local_14 = (String_t *)((local_c[2].monitor)->semaphore).m_Semaphore;
      }
      local_68 = (String_t *)
                 ((int)(&local_14[-5]._padding_ + ((uint)local_124 & 0xff)) % (int)local_14);
      local_34 = (String_t *)0x0;
      if (0 < (int)local_14) {
        do {
          BVar148.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_120.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
          BVar148.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_120.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
          BVar134.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_1b8.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
          BVar134.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_1b8.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
          BVar119.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_1d8.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
          BVar119.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_1d8.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
          BVar91.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
          BVar91.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)pSStack_c4;
          BVar59.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
          BVar59.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)pSStack_c4;
          BVar60.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_38;
          BVar60.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
          BVar58.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_38;
          BVar58.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
          iVar31.___y_1 = local_44;
          iVar31.___x_0 = local_40;
          iVar177.___y_1 = local_44;
          iVar177.___x_0 = local_40;
          BVar18.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_dc.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
          BVar18.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_dc.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
          BVar17.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_dc.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
          BVar17.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_dc.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
          pSVar165 = (String_t *)
                     (((int)&local_68->_padding_ + (int)&local_34->_padding_) % (int)local_14);
          local_64 = pSVar165;
          if ((local_c == (Il2CppObject *)0x0) ||
             (BVar17 = BVar18, iVar177 = iVar31, BVar58 = BVar60, BVar59 = BVar91,
             BStack_1d8 = BVar119, BStack_1b8 = BVar134, BStack_120 = BVar148,
             local_c[2].monitor == (MonitorData *)0x0)) goto LAB_10e10333;
          bVar163 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                              ((List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)
                               local_c[2].monitor,(int)pSVar165,
                               List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                              );
          BVar149.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_120.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
          BVar149.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_120.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
          BVar135.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_1b8.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
          BVar135.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_1b8.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
          BVar120.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_1d8.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
          BVar120.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_1d8.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
          BVar92.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
          BVar92.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)pSStack_c4;
          BVar59.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
          BVar59.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)pSStack_c4;
          BVar61.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_38;
          BVar61.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
          BVar58.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_38;
          BVar58.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
          iVar32.___y_1 = local_44;
          iVar32.___x_0 = local_40;
          iVar177.___y_1 = local_44;
          iVar177.___x_0 = local_40;
          BVar19.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_dc.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
          BVar19.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_dc.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
          BVar17.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_dc.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
          BVar17.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_dc.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
          local_8 = bVar163;
          if ((local_c == (Il2CppObject *)0x0) ||
             (BVar17 = BVar19, iVar177 = iVar32, BVar58 = BVar61, BVar59 = BVar92,
             BStack_1d8 = BVar120, BStack_1b8 = BVar135, BStack_120 = BVar149,
             local_c[2].monitor == (MonitorData *)0x0)) goto LAB_10e10333;
          local_6 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                              ((List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)
                               local_c[2].monitor,(int)((int)&pSVar165->_padding_ + 1),
                               List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                              );
          BVar150.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_120.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
          BVar150.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_120.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
          BVar136.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_1b8.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
          BVar136.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_1b8.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
          BVar121.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_1d8.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
          BVar121.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_1d8.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
          BVar93.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
          BVar93.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)pSStack_c4;
          BVar59.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
          BVar59.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)pSStack_c4;
          BVar62.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_38;
          BVar62.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
          BVar58.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_38;
          BVar58.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
          iVar33.___y_1 = local_44;
          iVar33.___x_0 = local_40;
          iVar177.___y_1 = local_44;
          iVar177.___x_0 = local_40;
          BVar20.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_dc.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
          BVar20.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_dc.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
          BVar17.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_dc.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
          BVar17.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_dc.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
          if ((local_c == (Il2CppObject *)0x0) ||
             (BVar17 = BVar20, iVar177 = iVar33, BVar58 = BVar62, BVar59 = BVar93,
             BStack_1d8 = BVar121, BStack_1b8 = BVar136, BStack_120 = BVar150,
             local_c[2].monitor == (MonitorData *)0x0)) goto LAB_10e10333;
          local_7 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                              ((List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)
                               local_c[2].monitor,(int)((int)&pSVar165->_padding_ + 2),
                               List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                              );
          BVar151.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_120.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
          BVar151.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_120.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
          BVar137.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_1b8.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
          BVar137.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_1b8.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
          BVar122.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_1d8.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
          BVar122.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_1d8.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
          BVar94.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
          BVar94.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)pSStack_c4;
          BVar59.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
          BVar59.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)pSStack_c4;
          BVar63.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_38;
          BVar63.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
          BVar58.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_38;
          BVar58.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
          iVar34.___y_1 = local_44;
          iVar34.___x_0 = local_40;
          iVar177.___y_1 = local_44;
          iVar177.___x_0 = local_40;
          BVar21.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_dc.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
          BVar21.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_dc.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
          BVar17.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_dc.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
          BVar17.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_dc.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
          if ((local_c == (Il2CppObject *)0x0) ||
             (BVar17 = BVar21, iVar177 = iVar34, BVar58 = BVar63, BVar59 = BVar94,
             BStack_1d8 = BVar122, BStack_1b8 = BVar137, BStack_120 = BVar151,
             local_c[2].monitor == (MonitorData *)0x0)) goto LAB_10e10333;
          local_5 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                              ((List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)
                               local_c[2].monitor,(int)((int)&pSVar165->_padding_ + 3),
                               List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                              );
          BVar152.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_120.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
          BVar152.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_120.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
          BVar138.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_1b8.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
          BVar138.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_1b8.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
          BVar123.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_1d8.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
          BVar123.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_1d8.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
          BVar95.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
          BVar95.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)pSStack_c4;
          BVar59.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
          BVar59.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)pSStack_c4;
          BVar64.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_38;
          BVar64.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
          BVar58.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_38;
          BVar58.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
          iVar35.___y_1 = local_44;
          iVar35.___x_0 = local_40;
          iVar177.___y_1 = local_44;
          iVar177.___x_0 = local_40;
          BVar22.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_dc.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
          BVar22.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_dc.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
          BVar17.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_dc.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
          BVar17.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_dc.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
          if ((local_c == (Il2CppObject *)0x0) ||
             (BVar17 = BVar22, iVar177 = iVar35, BVar58 = BVar64, BVar59 = BVar95,
             BStack_1d8 = BVar123, BStack_1b8 = BVar138, BStack_120 = BVar152,
             local_c[3].field0_0x0.klass == (Il2CppClass *)0x0)) goto LAB_10e10333;
          BVar171 = List_1_get_Item_m089675F063BA75D21581420825BF25DA6BBF08FE_inline
                              ((List_1_tE40C2BAE4E7FE391F7F9CAD5E94AC9F28CA4713A *)
                               local_c[3].field0_0x0.klass,(uint)bVar163,
                               List_1_get_Item_m5EE26E05E654C6A56783D6605173D66CA24C08FE_RuntimeMethod_var
                              );
          BVar153.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_120.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
          BVar153.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_120.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
          BVar139.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_1b8.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
          BVar139.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_1b8.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
          BVar124.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_1d8.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
          BVar124.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_1d8.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
          BVar96.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
          BVar96.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)pSStack_c4;
          BVar59.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
          BVar59.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)pSStack_c4;
          iVar36.___y_1 = local_44;
          iVar36.___x_0 = local_40;
          iVar177.___y_1 = local_44;
          iVar177.___x_0 = local_40;
          BVar23.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_dc.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
          BVar23.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_dc.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
          BVar17.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_dc.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
          BVar17.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_dc.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
          local_20 = BVar171.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
          BVar58.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_38;
          BVar58.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
          BVar65.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_38;
          BVar65.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
          if ((local_c == (Il2CppObject *)0x0) ||
             (BVar17 = BVar23, iVar177 = iVar36, BVar58 = BVar65, BVar59 = BVar96,
             BStack_1d8 = BVar124, BStack_1b8 = BVar139, BStack_120 = BVar153,
             local_c[3].field0_0x0.klass == (Il2CppClass *)0x0)) goto LAB_10e10333;
          BVar172 = List_1_get_Item_m089675F063BA75D21581420825BF25DA6BBF08FE_inline
                              ((List_1_tE40C2BAE4E7FE391F7F9CAD5E94AC9F28CA4713A *)
                               local_c[3].field0_0x0.klass,(uint)local_6,
                               List_1_get_Item_m5EE26E05E654C6A56783D6605173D66CA24C08FE_RuntimeMethod_var
                              );
          BVar154.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_120.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
          BVar154.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_120.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
          BVar140.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_1b8.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
          BVar140.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_1b8.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
          BVar125.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_1d8.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
          BVar125.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_1d8.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
          BVar97.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
          BVar97.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)pSStack_c4;
          BVar59.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
          BVar59.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)pSStack_c4;
          BVar66.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_38;
          BVar66.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
          BVar58.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_38;
          BVar58.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
          iVar37.___y_1 = local_44;
          iVar37.___x_0 = local_40;
          iVar177.___y_1 = local_44;
          iVar177.___x_0 = local_40;
          BVar24.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_dc.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
          BVar24.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_dc.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
          BVar17.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_dc.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
          BVar17.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_dc.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
          if ((local_c == (Il2CppObject *)0x0) ||
             (BVar17 = BVar24, iVar177 = iVar37, BVar58 = BVar66, BVar59 = BVar97,
             BStack_1d8 = BVar125, BStack_1b8 = BVar140, BStack_120 = BVar154,
             local_c[3].field0_0x0.klass == (Il2CppClass *)0x0)) goto LAB_10e10333;
          BVar173 = List_1_get_Item_m089675F063BA75D21581420825BF25DA6BBF08FE_inline
                              ((List_1_tE40C2BAE4E7FE391F7F9CAD5E94AC9F28CA4713A *)
                               local_c[3].field0_0x0.klass,(uint)local_7,
                               List_1_get_Item_m5EE26E05E654C6A56783D6605173D66CA24C08FE_RuntimeMethod_var
                              );
          BVar155.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_120.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
          BVar155.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_120.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
          BVar141.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_1b8.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
          BVar141.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_1b8.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
          BVar126.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_1d8.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
          BVar126.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_1d8.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
          BVar67.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_38;
          BVar67.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
          BVar58.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_38;
          BVar58.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
          iVar38.___y_1 = local_44;
          iVar38.___x_0 = local_40;
          iVar177.___y_1 = local_44;
          iVar177.___x_0 = local_40;
          BVar25.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_dc.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
          BVar25.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_dc.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
          BVar17.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_dc.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
          BVar17.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_dc.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
          local_2c = BVar173.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
          BVar98.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
          BVar98.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)pSStack_c4;
          BVar59.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
          BVar59.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)pSStack_c4;
          local_28.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BVar173.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
          if ((local_c == (Il2CppObject *)0x0) ||
             (BVar17 = BVar25, iVar177 = iVar38, BVar58 = BVar67, BVar59 = BVar98,
             BStack_1d8 = BVar126, BStack_1b8 = BVar141, BStack_120 = BVar155,
             local_c[3].field0_0x0.klass == (Il2CppClass *)0x0)) goto LAB_10e10333;
          BVar174 = List_1_get_Item_m089675F063BA75D21581420825BF25DA6BBF08FE_inline
                              ((List_1_tE40C2BAE4E7FE391F7F9CAD5E94AC9F28CA4713A *)
                               local_c[3].field0_0x0.klass,(uint)local_5,
                               List_1_get_Item_m5EE26E05E654C6A56783D6605173D66CA24C08FE_RuntimeMethod_var
                              );
          BVar156.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_120.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
          BVar156.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_120.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
          BVar142.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_1b8.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
          BVar142.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_1b8.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
          BVar127.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_1d8.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
          BVar127.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_1d8.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
          BVar88.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_60;
          BVar88.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_94;
          BVar87.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_70;
          BVar87.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_6c;
          iVar52.___y_1 = local_44;
          iVar52.___x_0 = local_40;
          iVar177.___y_1 = local_44;
          iVar177.___x_0 = local_40;
          BVar30.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_20;
          BVar30.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BVar171.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
          local_3c = BVar174.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
          local_28.___QxabvXylnsiBkyIsJOltxNNjrIG_1 =
               (String_t *)BVar174.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
          local_30 = (String_t *)0x0;
          do {
            BVar171 = BVar172;
            bVar163 = local_8;
            local_20 = BVar30.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
            BVar80.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_38;
            BVar80.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
            BVar58.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_38;
            BVar58.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
            pSVar168 = (String_t *)BVar30.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
            pSVar165 = BVar174.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
            if ((BVar30 == BVar87) && (BVar171 == BVar88)) {
              local_e0._0_3_ = (uint3)local_e0 & 0xff;
              local_e0 = (String_t *)(uint)(uint3)local_e0;
              BStack_dc.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 =
                   (uint)local_28.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
              BVar26.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = pSVar165;
              BVar26.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 =
                   (uint)local_28.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
              BVar17.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = pSVar165;
              BVar17.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 =
                   (uint)local_28.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
              local_d0 = local_20;
              pSStack_c4 = (String_t *)local_28.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
              BVar111.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
              BVar111.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = local_28.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
              BVar59.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
              BVar59.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = local_28.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
              local_c0 = local_2c;
              pSStack_d4 = pSVar168;
              BStack_cc = BVar171;
              if ((local_10 == (Il2CppObject *)0x0) ||
                 (BVar17 = BVar26, iVar177 = iVar52, BVar58 = BVar80, BVar59 = BVar111,
                 BStack_1d8 = BVar127, BStack_1b8 = BVar142, BStack_120 = BVar156,
                 local_10[3].monitor == (MonitorData *)0x0)) goto LAB_10e10333;
              BStack_dc.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = pSVar165;
              VVar176 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                                  ((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)
                                   local_10[3].monitor,(uint)local_5,
                                   List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var
                                  );
              BVar157.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_120.___QxabvXylnsiBkyIsJOltxNNjrIG_1
              ;
              BVar157.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_120.___JcmgDDuATuYwIOWhebgtdHoiXsW_0
              ;
              BVar143.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_1b8.___QxabvXylnsiBkyIsJOltxNNjrIG_1
              ;
              BVar143.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_1b8.___JcmgDDuATuYwIOWhebgtdHoiXsW_0
              ;
              BVar128.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_1d8.___QxabvXylnsiBkyIsJOltxNNjrIG_1
              ;
              BVar128.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_1d8.___JcmgDDuATuYwIOWhebgtdHoiXsW_0
              ;
              BVar112.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
              BVar112.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)pSStack_c4;
              BVar59.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
              BVar59.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)pSStack_c4;
              BVar81.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_38;
              BVar81.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
              BVar58.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_38;
              BVar58.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
              iVar53.___y_1 = local_44;
              iVar53.___x_0 = local_40;
              iVar177.___y_1 = local_44;
              iVar177.___x_0 = local_40;
              BVar27.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_dc.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
              BVar27.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_dc.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
              BVar17.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_dc.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
              BVar17.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_dc.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
              local_34 = (String_t *)local_4c.___x_0;
              pSStack_bc = (String_t *)local_4c.___x_0;
              local_4c.___y_1 = VVar176.___y_1;
              local_30 = (String_t *)local_4c.___y_1;
              pSStack_b8 = (String_t *)local_4c.___y_1;
              local_4c = VVar176;
              if ((local_10 == (Il2CppObject *)0x0) ||
                 (BVar17 = BVar27, iVar177 = iVar53, BVar58 = BVar81, BVar59 = BVar112,
                 BStack_1d8 = BVar128, BStack_1b8 = BVar143, BStack_120 = BVar157,
                 local_10[3].monitor == (MonitorData *)0x0)) goto LAB_10e10333;
              VVar176 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                                  ((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)
                                   local_10[3].monitor,(uint)local_8,
                                   List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var
                                  );
              BVar158.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_120.___QxabvXylnsiBkyIsJOltxNNjrIG_1
              ;
              BVar158.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_120.___JcmgDDuATuYwIOWhebgtdHoiXsW_0
              ;
              BVar144.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_1b8.___QxabvXylnsiBkyIsJOltxNNjrIG_1
              ;
              BVar144.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_1b8.___JcmgDDuATuYwIOWhebgtdHoiXsW_0
              ;
              BVar129.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_1d8.___QxabvXylnsiBkyIsJOltxNNjrIG_1
              ;
              BVar129.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_1d8.___JcmgDDuATuYwIOWhebgtdHoiXsW_0
              ;
              BVar113.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
              BVar113.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)pSStack_c4;
              BVar59.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
              BVar59.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)pSStack_c4;
              BVar82.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_38;
              BVar82.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
              BVar58.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_38;
              BVar58.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
              iVar54.___y_1 = local_44;
              iVar54.___x_0 = local_40;
              iVar177.___y_1 = local_44;
              iVar177.___x_0 = local_40;
              BVar28.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_dc.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
              BVar28.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_dc.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
              BVar17.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_dc.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
              BVar17.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_dc.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
              fStack_b4 = local_1c.___x_0;
              local_1c.___y_1 = VVar176.___y_1;
              local_b0 = (String_t *)local_1c.___y_1;
              local_1c = VVar176;
              if ((local_10 == (Il2CppObject *)0x0) ||
                 (BVar17 = BVar28, iVar177 = iVar54, BVar58 = BVar82, BVar59 = BVar113,
                 BStack_1d8 = BVar129, BStack_1b8 = BVar144, BStack_120 = BVar158,
                 local_10[3].monitor == (MonitorData *)0x0)) goto LAB_10e10333;
              VVar176 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                                  ((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)
                                   local_10[3].monitor,(uint)local_6,
                                   List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var
                                  );
              BVar159.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_120.___QxabvXylnsiBkyIsJOltxNNjrIG_1
              ;
              BVar159.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_120.___JcmgDDuATuYwIOWhebgtdHoiXsW_0
              ;
              BVar145.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_1b8.___QxabvXylnsiBkyIsJOltxNNjrIG_1
              ;
              BVar145.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_1b8.___JcmgDDuATuYwIOWhebgtdHoiXsW_0
              ;
              BVar130.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_1d8.___QxabvXylnsiBkyIsJOltxNNjrIG_1
              ;
              BVar130.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_1d8.___JcmgDDuATuYwIOWhebgtdHoiXsW_0
              ;
              BVar114.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
              BVar114.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)pSStack_c4;
              BVar59.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
              BVar59.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)pSStack_c4;
              BVar83.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_38;
              BVar83.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
              BVar58.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_38;
              BVar58.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
              iVar55.___y_1 = local_44;
              iVar55.___x_0 = local_40;
              iVar177.___y_1 = local_44;
              iVar177.___x_0 = local_40;
              BVar29.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_dc.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
              BVar29.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_dc.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
              BVar17.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BStack_dc.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
              BVar17.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BStack_dc.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
              pSStack_ac = (String_t *)local_78.___x_0;
              local_78.___y_1 = VVar176.___y_1;
              pSStack_a8 = (String_t *)local_78.___y_1;
              local_78 = VVar176;
              if ((local_10 == (Il2CppObject *)0x0) ||
                 (pMVar178 = (MethodInfo *)local_10[3].monitor, BVar17 = BVar29, iVar177 = iVar55,
                 BVar58 = BVar83, BVar59 = BVar114, BStack_1d8 = BVar130, BStack_1b8 = BVar145,
                 BStack_120 = BVar159, pMVar178 == (MethodInfo *)0x0)) goto LAB_10e10333;
              VVar176 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                                  ((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)pMVar178,
                                   (uint)local_7,
                                   List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var
                                  );
              pSStack_a4 = (String_t *)local_80.___x_0;
              local_80.___y_1 = VVar176.___y_1;
              fVar167 = local_80.___y_1;
              local_a0 = local_80.___y_1;
              local_e0 = (String_t *)
                         CONCAT31(local_e0._1_3_,
                                  (char)((int)((int)&local_64->_padding_ +
                                              ((int)local_64 >> 0x1f & 3U)) >> 2));
              local_15c = local_e0;
              pSStack_158 = (String_t *)BStack_dc.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
              pSStack_154 = BStack_dc.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
              pSStack_150 = pSStack_d4;
              local_17c = local_80.___y_1;
              local_1bc = local_e0;
              BStack_1b8.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 =
                   BStack_dc.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
              BStack_1b8.___QxabvXylnsiBkyIsJOltxNNjrIG_1 =
                   BStack_dc.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
              pSStack_1b0 = pSStack_d4;
              local_1cc = local_d0;
              iStack_1c8.___x_0 = BStack_cc.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
              iStack_1c8.___y_1 = (int)BStack_cc.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
              iStack_1c8.___z_2 = (int)pSStack_c4;
              local_1ac = local_d0;
              pSStack_1a8 = (String_t *)BStack_cc.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
              pSStack_1a4 = BStack_cc.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
              pSStack_1a0 = pSStack_c4;
              local_5c = local_c0;
              pSStack_58 = pSStack_bc;
              pSStack_54 = pSStack_b8;
              fStack_50 = fStack_b4;
              local_19c = local_c0;
              pSStack_198 = pSStack_bc;
              pSStack_194 = pSStack_b8;
              fStack_190 = fStack_b4;
              local_14c = local_b0;
              pSStack_148 = pSStack_ac;
              pSStack_144 = pSStack_a8;
              pSStack_140 = (String_t *)local_80.___x_0;
              local_18c = local_b0;
              pSStack_188 = pSStack_ac;
              pSStack_184 = pSStack_a8;
              pSStack_180 = (String_t *)local_80.___x_0;
              local_88.___y_1 = (float)local_30 - local_1c.___y_1;
              local_88.___x_0 = (float)local_34 - local_1c.___x_0;
              iVar12.___y_1 = (int)((float)local_30 - local_1c.___y_1);
              iVar12.___x_0 = (int)((float)local_34 - local_1c.___x_0);
              iVar12.___z_2 = 0;
              local_80 = VVar176;
              local_90 = (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9)
                         HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(iVar12,pMVar178);
              if (0.0 < local_9c.___y_1 * local_90.___y_1 + local_9c.___x_0 * local_90.___x_0) {
                memset((uchar *)&local_1bc,'\0',0x44);
                local_14c = local_18c;
                pSStack_148 = pSStack_188;
                pSStack_144 = pSStack_184;
                pSStack_140 = pSStack_180;
                local_5c = local_19c;
                pSStack_58 = pSStack_198;
                pSStack_54 = pSStack_194;
                fStack_50 = fStack_190;
                local_1cc = local_1ac;
                iStack_1c8.___x_0 = (int)pSStack_1a8;
                iStack_1c8.___y_1 = (int)pSStack_1a4;
                iStack_1c8.___z_2 = (int)pSStack_1a0;
                local_e4 = local_17c;
                local_124 = local_1bc;
                BStack_120.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 =
                     BStack_1b8.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
                BStack_120.___QxabvXylnsiBkyIsJOltxNNjrIG_1 =
                     BStack_1b8.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
                pSStack_118 = pSStack_1b0;
              }
              else {
                QVar10.___v0_1.___x_0 = (int)pSStack_158;
                QVar10._0_4_ = local_15c;
                QVar10.___v0_1.___y_1 = (int)pSStack_154;
                QVar10.___v1_2.___x_0 = (int)pSStack_150;
                QVar10.___v1_2.___y_1 = (int)local_1cc;
                QVar10.___v2_3.___x_0 = iStack_1c8.___x_0;
                QVar10.___v2_3.___y_1 = iStack_1c8.___y_1;
                QVar10.___v3_4.___x_0 = iStack_1c8.___z_2;
                QVar10.___v3_4.___y_1 = (int)local_5c;
                QVar10.___p0_5.___x_0 = (float)pSStack_58;
                QVar10.___p0_5.___y_1 = (float)pSStack_54;
                QVar10.___p1_6.___x_0 = fStack_50;
                QVar10.___p1_6.___y_1 = (float)local_14c;
                QVar10.___p2_7.___x_0 = (float)pSStack_148;
                QVar10.___p2_7.___y_1 = (float)pSStack_144;
                QVar10.___p3_8.___x_0 = (float)pSStack_140;
                QVar10.___p3_8.___y_1 = fVar167;
                List_1_Add_mECC1D5B14529BD0CF0EB28BF00B02F522D1EC3C8_gshared
                          (param_2,QVar10,
                           List_1_Add_mECC1D5B14529BD0CF0EB28BF00B02F522D1EC3C8_RuntimeMethod_var);
                param_3.___y_1 = 2.3509887e-38;
                local_e4 = fVar167;
                local_124 = local_15c;
                BStack_120.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)pSStack_158;
                BStack_120.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = pSStack_154;
                pSStack_118 = pSStack_150;
              }
              local_114 = local_1cc;
              pSStack_110 = (String_t *)iStack_1c8.___x_0;
              pSStack_10c = (String_t *)iStack_1c8.___y_1;
              pSStack_108 = (String_t *)iStack_1c8.___z_2;
              local_104 = local_5c;
              pSStack_100 = pSStack_58;
              pSStack_fc = pSStack_54;
              fStack_f8 = fStack_50;
              local_f4 = local_14c;
              pSStack_f0 = pSStack_148;
              pSStack_ec = pSStack_144;
              pSStack_e8 = pSStack_140;
              local_34 = local_14;
              break;
            }
            bVar6 = local_6;
            local_8 = local_6;
            local_6 = local_7;
            local_7 = local_5;
            local_5 = bVar163;
            BVar172.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
            BVar172.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = local_28.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
            BVar89.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = pSVar168;
            BVar89.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 =
                 (uint)local_28.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
            local_30 = (String_t *)((int)&local_30->_padding_ + 1);
            BVar174.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_20;
            BVar174.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_30;
            local_2c = local_3c;
            local_3c = local_20;
            local_28 = BVar89;
            local_20 = BVar171.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
            BVar30 = BVar171;
          } while ((int)local_30 < 4);
          local_34 = (String_t *)&local_34->_padding_;
        } while ((int)local_34 < (int)local_14);
      }
      local_38 = (String_t *)((int)&local_38->_padding_ + 1);
    } while ((int)local_38 < param_5);
  }
  List_1_Reverse_m7B9BCAAAFEFA4A592FB0146172ABA4505DB59FD0_gshared
            ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_2,
             List_1_Reverse_mD570D43E71F15713F7C070587F722F607B8363B6_RuntimeMethod_var);
  uVar7 = param_2->____size_2;
  if (uVar7 <= uVar7 - 1) {
                    /* WARNING: Subroutine does not return */
    ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
              ((MethodInfo *)0x0);
  }
  local_3c = (String_t *)0x0;
  pQVar8 = param_2->____items_1;
  pQVar1 = pQVar8->m_Items + (uVar7 - 1);
  local_124 = *(String_t **)pQVar1;
  piVar9 = &pQVar1->___v0_1;
  BVar133.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = piVar9->___x_0;
  BVar133.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = (String_t *)piVar9->___y_1;
  BStack_120.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = piVar9->___x_0;
  BStack_120.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = (String_t *)piVar9->___y_1;
  pSStack_118 = (String_t *)(pQVar1->___v1_2).___x_0;
  piVar2 = &pQVar8->m_Items[uVar7 - 1].___v1_2.___y_1;
  local_114 = (String_t *)*piVar2;
  pSStack_110 = (String_t *)piVar2[1];
  pSStack_10c = (String_t *)piVar2[2];
  pSStack_108 = (String_t *)piVar2[3];
  piVar2 = &pQVar8->m_Items[uVar7 - 1].___v3_4.___y_1;
  local_104 = (String_t *)*piVar2;
  pSStack_100 = (String_t *)piVar2[1];
  pSStack_fc = (String_t *)piVar2[2];
  fStack_f8 = (float)piVar2[3];
  pfVar3 = &pQVar8->m_Items[uVar7 - 1].___p1_6.___y_1;
  local_f4 = (String_t *)*pfVar3;
  pSStack_f0 = (String_t *)pfVar3[1];
  pSStack_ec = (String_t *)pfVar3[2];
  pSStack_e8 = (String_t *)pfVar3[3];
  local_e4 = pQVar8->m_Items[uVar7 - 1].___p3_8.___y_1;
  if (0 < param_5) {
    do {
      BStack_120 = BVar133;
      bVar162 = Quad_IsValid_mAFF3A31F94E7A320D6392C9E04051004DB4EA8C0
                          ((Quad_t1E4E0FD4F68559FA20870CFBD24EB4162BEDBDAB *)&local_124,
                           (MethodInfo *)0x0);
      if (!bVar162) break;
      local_68 = pSStack_110;
      local_60 = pSStack_118;
      local_64 = pSStack_10c;
      local_94 = local_114;
      iVar166 = ((int)&pSStack_118->_padding_ + (int)&pSStack_110->_padding_) * 5 -
                ((int)&pSStack_108->_padding_ + BStack_120.___JcmgDDuATuYwIOWhebgtdHoiXsW_0);
      iVar169 = ((int)&local_114->_padding_ + (int)&pSStack_10c->_padding_) * 5 -
                ((int)&(BStack_120.___QxabvXylnsiBkyIsJOltxNNjrIG_1)->_padding_ +
                (int)&local_104->_padding_);
      local_1c.___x_0 = 0.0;
      local_1c.___y_1 = 0.0;
      if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished
             == 0)) {
        il2cpp_runtime_class_init
                  (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
      }
      iVar16.___y_1 = (int)((iVar169 >> 0x1f & 7U) + iVar169) >> 3;
      iVar16.___x_0 = (int)((iVar166 >> 0x1f & 7U) + iVar166) >> 3;
      piVar164 = HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
                           (&local_1e8,iVar16,(MethodInfo *)0x0);
      local_13c._0_4_ = piVar164->___x_0;
      local_13c._4_4_ = piVar164->___y_1;
      iStack_168.___x_0 = piVar164->___x_0;
      iStack_168.___y_1 = piVar164->___y_1;
      local_170 = (float)piVar164->___z_2;
      fVar15.___y_1 = (float)(int)local_13c._4_4_;
      fVar15.___x_0 = (float)(int)(undefined4)local_13c;
      fVar15.___z_2 = local_170;
      local_130 = local_13c;
      piVar164 = GridGenerator_HexToPatchHex_m76C2EC3C4EFBEF2BDE06D1E3238721BE5D57FD02
                           (&iStack_1c8,param_1,fVar15,(MethodInfo *)0x0);
      iVar170 = HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C
                          (*piVar164,(MethodInfo *)0x0);
      BVar59.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
      BVar59.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)pSStack_c4;
      iVar90.___y_1 = local_44;
      iVar90.___x_0 = local_40;
      BVar58.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_38;
      BVar58.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
      if (iVar170 != iVar90) {
        BVar17 = BStack_dc;
        iVar177 = iVar170;
        if ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)param_1->___patchDict_10 ==
            (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0) goto LAB_10e10333;
        local_44 = iVar170.___y_1;
        local_40 = iVar170.___x_0;
        bVar162 = Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
                            ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                             param_1->___patchDict_10,iVar170,&local_c,
                             Dictionary_2_TryGetValue_mC63137D5FA2A69BCC84781B1FC7639F5406175F7_RuntimeMethod_var
                            );
        BVar59.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
        BVar59.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)pSStack_c4;
        BVar58.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_38;
        BVar58.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
        iVar177.___y_1 = local_44;
        iVar177.___x_0 = local_40;
        if (!bVar162) break;
        BVar17 = BStack_dc;
        if ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)param_1->___bitDict_8 ==
            (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0) goto LAB_10e10333;
        bVar162 = Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
                            ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                             param_1->___bitDict_8,iVar170,&local_10,
                             Dictionary_2_TryGetValue_m58AABB44A11FAADEB67D43D2492E3EAF4D3710F4_RuntimeMethod_var
                            );
        BVar110.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
        BVar110.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)pSStack_c4;
        BVar59.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
        BVar59.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)pSStack_c4;
        BVar79.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_38;
        BVar79.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
        BVar58.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_38;
        BVar58.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
        iVar51.___y_1 = local_44;
        iVar51.___x_0 = local_40;
        iVar177.___y_1 = local_44;
        iVar177.___x_0 = local_40;
        if (!bVar162) break;
        BVar17 = BStack_dc;
        if ((local_c == (Il2CppObject *)0x0) ||
           (iVar177 = iVar51, BVar58 = BVar79, BVar59 = BVar110,
           local_c[2].monitor == (MonitorData *)0x0)) goto LAB_10e10333;
        local_14 = (String_t *)((local_c[2].monitor)->semaphore).m_Semaphore;
      }
      fVar167 = (float)((int)(&local_14[-5]._padding_ + ((uint)local_124 & 0xff)) % (int)local_14);
      local_1c.___y_1 = fVar167;
      local_30 = (String_t *)0x0;
      if (0 < (int)local_14) {
        do {
          BVar99.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
          BVar99.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)pSStack_c4;
          BVar59.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
          BVar59.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)pSStack_c4;
          BVar68.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_38;
          BVar68.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
          BVar58.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_38;
          BVar58.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
          iVar39.___y_1 = local_44;
          iVar39.___x_0 = local_40;
          iVar177.___y_1 = local_44;
          iVar177.___x_0 = local_40;
          pSVar165 = (String_t *)(((int)&local_30->_padding_ + (int)fVar167) % (int)local_14);
          local_70 = pSVar165;
          BVar17 = BStack_dc;
          if ((local_c == (Il2CppObject *)0x0) ||
             (iVar177 = iVar39, BVar58 = BVar68, BVar59 = BVar99,
             local_c[2].monitor == (MonitorData *)0x0)) goto LAB_10e10333;
          bVar163 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                              ((List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)
                               local_c[2].monitor,(int)pSVar165,
                               List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                              );
          BVar100.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
          BVar100.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)pSStack_c4;
          BVar59.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
          BVar59.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)pSStack_c4;
          BVar69.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_38;
          BVar69.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
          BVar58.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_38;
          BVar58.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
          iVar40.___y_1 = local_44;
          iVar40.___x_0 = local_40;
          iVar177.___y_1 = local_44;
          iVar177.___x_0 = local_40;
          local_8 = bVar163;
          BVar17 = BStack_dc;
          if ((local_c == (Il2CppObject *)0x0) ||
             (iVar177 = iVar40, BVar58 = BVar69, BVar59 = BVar100,
             local_c[2].monitor == (MonitorData *)0x0)) goto LAB_10e10333;
          local_7 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                              ((List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)
                               local_c[2].monitor,(int)((int)&pSVar165->_padding_ + 1),
                               List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                              );
          BVar101.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
          BVar101.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)pSStack_c4;
          BVar59.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
          BVar59.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)pSStack_c4;
          BVar70.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_38;
          BVar70.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
          BVar58.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_38;
          BVar58.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
          iVar41.___y_1 = local_44;
          iVar41.___x_0 = local_40;
          iVar177.___y_1 = local_44;
          iVar177.___x_0 = local_40;
          BVar17 = BStack_dc;
          if ((local_c == (Il2CppObject *)0x0) ||
             (iVar177 = iVar41, BVar58 = BVar70, BVar59 = BVar101,
             local_c[2].monitor == (MonitorData *)0x0)) goto LAB_10e10333;
          local_6 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                              ((List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)
                               local_c[2].monitor,(int)((int)&pSVar165->_padding_ + 2),
                               List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                              );
          BVar102.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
          BVar102.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)pSStack_c4;
          BVar59.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
          BVar59.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)pSStack_c4;
          BVar71.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_38;
          BVar71.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
          BVar58.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_38;
          BVar58.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
          iVar42.___y_1 = local_44;
          iVar42.___x_0 = local_40;
          iVar177.___y_1 = local_44;
          iVar177.___x_0 = local_40;
          BVar17 = BStack_dc;
          if ((local_c == (Il2CppObject *)0x0) ||
             (iVar177 = iVar42, BVar58 = BVar71, BVar59 = BVar102,
             local_c[2].monitor == (MonitorData *)0x0)) goto LAB_10e10333;
          local_5 = List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_inline
                              ((List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)
                               local_c[2].monitor,(int)((int)&pSVar165->_padding_ + 3),
                               List_1_get_Item_mD1EBDB542F05A6D18C845517256801FDF3285D93_RuntimeMethod_var
                              );
          BVar103.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
          BVar103.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)pSStack_c4;
          BVar59.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
          BVar59.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)pSStack_c4;
          BVar72.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_38;
          BVar72.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
          BVar58.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_38;
          BVar58.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
          iVar43.___y_1 = local_44;
          iVar43.___x_0 = local_40;
          iVar177.___y_1 = local_44;
          iVar177.___x_0 = local_40;
          BVar17 = BStack_dc;
          if ((local_c == (Il2CppObject *)0x0) ||
             (iVar177 = iVar43, BVar58 = BVar72, BVar59 = BVar103,
             local_c[3].field0_0x0.klass == (Il2CppClass *)0x0)) goto LAB_10e10333;
          BVar171 = List_1_get_Item_m089675F063BA75D21581420825BF25DA6BBF08FE_inline
                              ((List_1_tE40C2BAE4E7FE391F7F9CAD5E94AC9F28CA4713A *)
                               local_c[3].field0_0x0.klass,(uint)bVar163,
                               List_1_get_Item_m5EE26E05E654C6A56783D6605173D66CA24C08FE_RuntimeMethod_var
                              );
          BVar73.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_38;
          BVar73.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
          BVar58.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_38;
          BVar58.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
          iVar44.___y_1 = local_44;
          iVar44.___x_0 = local_40;
          iVar177.___y_1 = local_44;
          iVar177.___x_0 = local_40;
          local_2c = BVar171.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
          BVar104.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
          BVar104.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)pSStack_c4;
          BVar59.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
          BVar59.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)pSStack_c4;
          BVar17 = BStack_dc;
          if ((local_c == (Il2CppObject *)0x0) ||
             (iVar177 = iVar44, BVar58 = BVar73, BVar59 = BVar104,
             local_c[3].field0_0x0.klass == (Il2CppClass *)0x0)) goto LAB_10e10333;
          BVar173 = List_1_get_Item_m089675F063BA75D21581420825BF25DA6BBF08FE_inline
                              ((List_1_tE40C2BAE4E7FE391F7F9CAD5E94AC9F28CA4713A *)
                               local_c[3].field0_0x0.klass,(uint)local_7,
                               List_1_get_Item_m5EE26E05E654C6A56783D6605173D66CA24C08FE_RuntimeMethod_var
                              );
          BVar105.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
          BVar105.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)pSStack_c4;
          BVar59.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
          BVar59.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)pSStack_c4;
          BVar74.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_38;
          BVar74.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
          BVar58.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_38;
          BVar58.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
          iVar45.___y_1 = local_44;
          iVar45.___x_0 = local_40;
          iVar177.___y_1 = local_44;
          iVar177.___x_0 = local_40;
          BVar17 = BStack_dc;
          if ((local_c == (Il2CppObject *)0x0) ||
             (iVar177 = iVar45, BVar58 = BVar74, BVar59 = BVar105,
             local_c[3].field0_0x0.klass == (Il2CppClass *)0x0)) goto LAB_10e10333;
          local_28 = List_1_get_Item_m089675F063BA75D21581420825BF25DA6BBF08FE_inline
                               ((List_1_tE40C2BAE4E7FE391F7F9CAD5E94AC9F28CA4713A *)
                                local_c[3].field0_0x0.klass,(uint)local_6,
                                List_1_get_Item_m5EE26E05E654C6A56783D6605173D66CA24C08FE_RuntimeMethod_var
                               );
          BVar106.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
          BVar106.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)pSStack_c4;
          BVar59.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
          BVar59.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)pSStack_c4;
          BVar75.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_38;
          BVar75.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
          BVar58.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_38;
          BVar58.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
          iVar46.___y_1 = local_44;
          iVar46.___x_0 = local_40;
          iVar177.___y_1 = local_44;
          iVar177.___x_0 = local_40;
          BVar17 = BStack_dc;
          if ((local_c == (Il2CppObject *)0x0) ||
             (iVar177 = iVar46, BVar58 = BVar75, BVar59 = BVar106,
             local_c[3].field0_0x0.klass == (Il2CppClass *)0x0)) goto LAB_10e10333;
          BVar175 = List_1_get_Item_m089675F063BA75D21581420825BF25DA6BBF08FE_inline
                              ((List_1_tE40C2BAE4E7FE391F7F9CAD5E94AC9F28CA4713A *)
                               local_c[3].field0_0x0.klass,(uint)local_5,
                               List_1_get_Item_m5EE26E05E654C6A56783D6605173D66CA24C08FE_RuntimeMethod_var
                              );
          BVar118.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_64;
          BVar118.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_68;
          BVar117.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_94;
          BVar117.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_60;
          BVar59.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
          BVar59.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = BVar171.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
          iVar47.___y_1 = local_44;
          iVar47.___x_0 = local_40;
          iVar177.___y_1 = local_44;
          iVar177.___x_0 = local_40;
          local_34 = (String_t *)0x0;
          BVar58 = BVar175;
          do {
            BVar17 = BVar173;
            bVar163 = local_8;
            local_2c = BVar59.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
            local_38 = BVar58.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
            local_20 = (String_t *)BVar58.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
            if ((BVar59 == BVar118) && (BVar17 == BVar117)) {
              local_e0._0_3_ = (uint3)local_e0 & 0xff;
              local_e0 = (String_t *)(uint)(uint3)local_e0;
              pSStack_d4 = (String_t *)local_28.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
              local_d0 = local_28.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
              BStack_cc.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = BVar175.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
              BStack_cc.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
              local_c0 = local_2c;
              if ((local_10 == (Il2CppObject *)0x0) ||
                 (iVar177 = iVar47, local_10[3].monitor == (MonitorData *)0x0)) goto LAB_10e10333;
              pSStack_c4 = (String_t *)BVar59.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
              BStack_dc = BVar17;
              VVar176 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                                  ((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)
                                   local_10[3].monitor,(uint)local_7,
                                   List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var
                                  );
              BVar107.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
              BVar107.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)pSStack_c4;
              BVar59.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
              BVar59.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)pSStack_c4;
              iVar48.___y_1 = local_44;
              iVar48.___x_0 = local_40;
              iVar177.___y_1 = local_44;
              iVar177.___x_0 = local_40;
              local_6c = (String_t *)local_90.___x_0;
              pSStack_bc = (String_t *)local_90.___x_0;
              local_90.___y_1 = VVar176.___y_1;
              local_38 = (String_t *)local_90.___y_1;
              BVar76.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = (String_t *)local_90.___y_1;
              BVar76.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
              BVar58.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = (String_t *)local_90.___y_1;
              BVar58.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
              pSStack_b8 = (String_t *)local_90.___y_1;
              local_90 = VVar176;
              BVar17 = BStack_dc;
              if ((local_10 == (Il2CppObject *)0x0) ||
                 (iVar177 = iVar48, BVar58 = BVar76, BVar59 = BVar107,
                 local_10[3].monitor == (MonitorData *)0x0)) goto LAB_10e10333;
              VVar176 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                                  ((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)
                                   local_10[3].monitor,(uint)local_6,
                                   List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var
                                  );
              BVar108.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
              BVar108.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)pSStack_c4;
              BVar59.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
              BVar59.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)pSStack_c4;
              BVar77.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_38;
              BVar77.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
              BVar58.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_38;
              BVar58.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
              iVar49.___y_1 = local_44;
              iVar49.___x_0 = local_40;
              iVar177.___y_1 = local_44;
              iVar177.___x_0 = local_40;
              fStack_b4 = local_4c.___x_0;
              local_4c.___y_1 = VVar176.___y_1;
              local_b0 = (String_t *)local_4c.___y_1;
              local_4c = VVar176;
              BVar17 = BStack_dc;
              if ((local_10 == (Il2CppObject *)0x0) ||
                 (iVar177 = iVar49, BVar58 = BVar77, BVar59 = BVar108,
                 local_10[3].monitor == (MonitorData *)0x0)) goto LAB_10e10333;
              VVar176 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                                  ((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)
                                   local_10[3].monitor,(uint)local_5,
                                   List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var
                                  );
              BVar109.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
              BVar109.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)pSStack_c4;
              BVar59.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
              BVar59.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)pSStack_c4;
              BVar78.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_38;
              BVar78.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
              BVar58.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_38;
              BVar58.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_20;
              iVar50.___y_1 = local_44;
              iVar50.___x_0 = local_40;
              iVar177.___y_1 = local_44;
              iVar177.___x_0 = local_40;
              pSStack_ac = (String_t *)local_88.___x_0;
              local_88.___y_1 = VVar176.___y_1;
              pSStack_a8 = (String_t *)local_88.___y_1;
              local_88 = VVar176;
              BVar17 = BStack_dc;
              if ((local_10 == (Il2CppObject *)0x0) ||
                 (pMVar178 = (MethodInfo *)local_10[3].monitor, iVar177 = iVar50, BVar58 = BVar78,
                 BVar59 = BVar109, pMVar178 == (MethodInfo *)0x0)) goto LAB_10e10333;
              VVar176 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                                  ((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)pMVar178,
                                   (uint)local_8,
                                   List_1_get_Item_mB02EADBCBED42FAEB4CAAB7772A2ADB0B78D362C_RuntimeMethod_var
                                  );
              pSStack_a4 = (String_t *)local_80.___x_0;
              local_80.___y_1 = VVar176.___y_1;
              fVar167 = local_80.___y_1;
              local_a0 = local_80.___y_1;
              local_e0 = (String_t *)
                         CONCAT31(local_e0._1_3_,
                                  (char)((int)((int)&local_70->_padding_ +
                                              ((int)local_70 >> 0x1f & 3U)) >> 2));
              local_1dc = local_e0;
              pSStack_1d0 = pSStack_d4;
              local_17c = local_80.___y_1;
              local_1bc = local_e0;
              pSStack_1b0 = pSStack_d4;
              local_14c = local_d0;
              pSStack_148 = (String_t *)BStack_cc.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
              pSStack_144 = BStack_cc.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
              pSStack_140 = pSStack_c4;
              local_1ac = local_d0;
              pSStack_1a8 = (String_t *)BStack_cc.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
              pSStack_1a4 = BStack_cc.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
              pSStack_1a0 = pSStack_c4;
              local_16c = local_c0;
              iStack_168.___y_1 = (int)pSStack_b8;
              iStack_168.___x_0 = (int)pSStack_bc;
              iStack_168.___z_2 = (int)fStack_b4;
              local_19c = local_c0;
              pSStack_198 = pSStack_bc;
              pSStack_194 = pSStack_b8;
              fStack_190 = fStack_b4;
              local_15c = local_b0;
              pSStack_158 = pSStack_ac;
              pSStack_154 = pSStack_a8;
              pSStack_150 = (String_t *)local_80.___x_0;
              local_18c = local_b0;
              pSStack_188 = pSStack_ac;
              pSStack_184 = pSStack_a8;
              pSStack_180 = (String_t *)local_80.___x_0;
              local_78.___y_1 = (float)local_38 - local_4c.___y_1;
              local_78.___x_0 = (float)local_6c - local_4c.___x_0;
              iVar13.___y_1 = (int)((float)local_38 - local_4c.___y_1);
              iVar13.___x_0 = (int)((float)local_6c - local_4c.___x_0);
              iVar13.___z_2 = 0;
              local_80 = VVar176;
              BStack_1d8 = BStack_dc;
              BStack_1b8 = BStack_dc;
              iVar177 = HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(iVar13,pMVar178);
              pSStack_54 = (String_t *)iVar177.___x_0;
              fStack_50 = (float)iVar177.___y_1;
              if (0.0 < local_9c.___y_1 * fStack_50 + local_9c.___x_0 * (float)pSStack_54) {
                memset((uchar *)&local_1bc,'\0',0x44);
                local_15c = local_18c;
                pSStack_158 = pSStack_188;
                pSStack_154 = pSStack_184;
                pSStack_150 = pSStack_180;
                local_16c = local_19c;
                iStack_168.___y_1 = (int)pSStack_194;
                iStack_168.___x_0 = (int)pSStack_198;
                iStack_168.___z_2 = (int)fStack_190;
                local_14c = local_1ac;
                pSStack_148 = pSStack_1a8;
                pSStack_144 = pSStack_1a4;
                pSStack_140 = pSStack_1a0;
                local_e4 = local_17c;
                local_124 = local_1bc;
                pSStack_118 = pSStack_1b0;
                BStack_120 = BStack_1b8;
              }
              else {
                QVar11.___v0_1.___x_0 = BStack_1d8.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
                QVar11._0_4_ = local_1dc;
                QVar11.___v0_1.___y_1 = (int)BStack_1d8.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
                QVar11.___v1_2.___x_0 = (int)pSStack_1d0;
                QVar11.___v1_2.___y_1 = (int)local_14c;
                QVar11.___v2_3.___x_0 = (int)pSStack_148;
                QVar11.___v2_3.___y_1 = (int)pSStack_144;
                QVar11.___v3_4.___x_0 = (int)pSStack_140;
                QVar11.___v3_4.___y_1 = (int)local_16c;
                QVar11.___p0_5.___x_0 = (float)iStack_168.___x_0;
                QVar11.___p0_5.___y_1 = (float)iStack_168.___y_1;
                QVar11.___p1_6.___x_0 = (float)iStack_168.___z_2;
                QVar11.___p1_6.___y_1 = (float)local_15c;
                QVar11.___p2_7.___x_0 = (float)pSStack_158;
                QVar11.___p2_7.___y_1 = (float)pSStack_154;
                QVar11.___p3_8.___x_0 = (float)pSStack_150;
                QVar11.___p3_8.___y_1 = fVar167;
                List_1_Add_mECC1D5B14529BD0CF0EB28BF00B02F522D1EC3C8_gshared
                          (param_2,QVar11,
                           List_1_Add_mECC1D5B14529BD0CF0EB28BF00B02F522D1EC3C8_RuntimeMethod_var);
                param_3.___y_1 = 2.3509887e-38;
                *param_4 = *param_4 + 1;
                local_e4 = fVar167;
                local_124 = local_1dc;
                pSStack_118 = pSStack_1d0;
                BStack_120 = BStack_1d8;
              }
              local_114 = local_14c;
              pSStack_110 = pSStack_148;
              pSStack_10c = pSStack_144;
              pSStack_108 = pSStack_140;
              local_104 = local_16c;
              pSStack_100 = (String_t *)iStack_168.___x_0;
              pSStack_fc = (String_t *)iStack_168.___y_1;
              fStack_f8 = (float)iStack_168.___z_2;
              local_f4 = local_15c;
              pSStack_f0 = pSStack_158;
              pSStack_ec = pSStack_154;
              pSStack_e8 = pSStack_150;
              local_30 = local_14;
              break;
            }
            bVar6 = local_7;
            local_8 = local_7;
            local_7 = local_6;
            local_6 = local_5;
            local_5 = bVar163;
            local_34 = (String_t *)((int)&local_34->_padding_ + 1);
            BVar175.___QxabvXylnsiBkyIsJOltxNNjrIG_1 = local_2c;
            BVar175.___JcmgDDuATuYwIOWhebgtdHoiXsW_0 = (uint)local_34;
            local_38 = local_2c;
            BVar173 = local_28;
            local_2c = BVar17.___QxabvXylnsiBkyIsJOltxNNjrIG_1;
            local_28 = BVar58;
            local_20 = (String_t *)BVar59.___JcmgDDuATuYwIOWhebgtdHoiXsW_0;
            BVar58 = BVar59;
            BVar59 = BVar17;
          } while ((int)local_34 < 4);
          local_30 = (String_t *)&local_30->_padding_;
          if ((int)local_14 <= (int)local_30) break;
          fVar167 = local_1c.___y_1;
        } while( true );
      }
      local_3c = (String_t *)((int)&local_3c->_padding_ + 1);
      BVar133 = BStack_120;
    } while ((int)local_3c < param_5);
  }
  List_1_Reverse_m7B9BCAAAFEFA4A592FB0146172ABA4505DB59FD0_gshared
            ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_2,
             List_1_Reverse_mD570D43E71F15713F7C070587F722F607B8363B6_RuntimeMethod_var);
  return param_3.___y_1._3_1_;
}
