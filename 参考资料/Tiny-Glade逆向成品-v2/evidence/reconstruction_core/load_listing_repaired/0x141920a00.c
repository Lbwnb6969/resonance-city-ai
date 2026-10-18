// Matched PDB: country_core::systems::save::load_game::parse_saved_game_data
// VA 0x141920a00, PDB extent 14101 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Instruction at (ram,0x00014192d310) overlaps instruction at (ram,0x00014192d30f)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00014192a839) */
/* WARNING: Removing unreachable block (ram,0x00014192a2ba) */
/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB: country_core::systems::save::load_game::parse_saved_game_data
   Extent: 14101 bytes. No whole-program auto-analysis. */

undefined1 (*) [16]
pdb_141920a00(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],
             undefined1 (*param_4) [16])

{
  uint *puVar1;
  int *piVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  ushort uVar5;
  longlong lVar6;
  undefined8 ****ppppuVar7;
  undefined8 ******ppppppuVar8;
  undefined8 ***pppuVar9;
  byte *pbVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  uint uVar14;
  uint uVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  char **ppcVar20;
  char **ppcVar21;
  char **ppcVar22;
  char **ppcVar23;
  char cVar24;
  char cVar25;
  undefined1 uVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  undefined8 uVar30;
  undefined8 ******ppppppuVar31;
  undefined1 (*pauVar32) [16];
  undefined7 uVar40;
  uint7 uVar41;
  char *pcVar33;
  undefined1 *puVar34;
  undefined8 *****pppppuVar35;
  undefined8 ******ppppppuVar36;
  undefined8 ******ppppppuVar37;
  undefined1 (*extraout_RAX) [16];
  undefined1 (*extraout_RAX_00) [16];
  undefined8 *****pppppuVar38;
  undefined1 (*extraout_RAX_01) [16];
  undefined1 (*extraout_RAX_02) [16];
  undefined1 (*extraout_RAX_03) [16];
  undefined1 (*extraout_RAX_04) [16];
  undefined1 (*extraout_RAX_05) [16];
  undefined1 (*extraout_RAX_06) [16];
  undefined1 (*pauVar39) [16];
  byte bVar42;
  byte bVar43;
  byte bVar52;
  ulonglong uVar44;
  undefined1 (*arg0) [16];
  undefined1 (**ppauVar45) [16];
  undefined8 ******ppppppuVar46;
  undefined8 ******ppppppuVar47;
  undefined *puVar48;
  longlong *plVar49;
  undefined1 (*pauVar50) [16];
  undefined8 *******pppppppuVar51;
  uint uVar53;
  undefined1 (*pauVar54) [16];
  ulonglong uVar55;
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar56;
  undefined6 uVar58;
  undefined8 *******pppppppuVar57;
  char **ppcVar59;
  char **ppcVar60;
  char **ppcVar61;
  char **ppcVar62;
  char **ppcVar63;
  char **ppcVar64;
  char **ppcVar65;
  char **ppcVar66;
  char **ppcVar67;
  char **ppcVar68;
  char **ppcVar69;
  char **ppcVar70;
  char **ppcVar71;
  char **ppcVar72;
  char **ppcVar73;
  char **ppcVar74;
  char **ppcVar75;
  char **ppcVar76;
  char **ppcVar77;
  char **ppcVar78;
  undefined8 *******pppppppuVar79;
  char **ppcVar80;
  char **ppcVar81;
  char **ppcVar82;
  char **ppcVar83;
  char **ppcVar84;
  char **ppcVar85;
  char **ppcVar86;
  char **ppcVar87;
  char **ppcVar88;
  char **ppcVar89;
  char **ppcVar90;
  char **ppcVar91;
  char **ppcVar92;
  char **ppcVar93;
  char **ppcVar94;
  char **ppcVar95;
  char **ppcVar96;
  char **ppcVar97;
  undefined8 *puVar98;
  char **ppcVar99;
  char **ppcVar100;
  undefined8 *******pppppppuVar101;
  char **ppcVar102;
  char **ppcVar103;
  char **ppcVar104;
  char **ppcVar105;
  char **ppcVar106;
  char **ppcVar107;
  char **ppcVar108;
  char **ppcVar109;
  undefined8 *******pppppppuVar110;
  uint uVar111;
  longlong lVar112;
  undefined8 *****pppppuVar113;
  undefined8 ******ppppppuVar114;
  undefined1 (*pauVar115) [16];
  byte bVar116;
  undefined1 (*pauVar117) [16];
  undefined1 (*in_R10) [16];
  undefined8 ****ppppuVar118;
  undefined1 (*in_R11) [16];
  undefined8 *******pppppppuVar119;
  undefined1 (*unaff_R12) [16];
  undefined1 (*unaff_R13) [16];
  longlong *plVar120;
  bool bVar121;
  bool bVar122;
  bool bVar123;
  float10 in_ST0;
  undefined4 extraout_XMM0_Da;
  float fVar124;
  undefined8 extraout_XMM0_Qa_00;
  undefined1 auVar125 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar126 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  float fVar128;
  undefined1 in_XMM1 [16];
  undefined1 auVar127 [16];
  float fVar129;
  undefined8 in_XMM2_Qa;
  undefined4 uVar130;
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  float fVar131;
  float fVar132;
  float fVar133;
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  float unaff_XMM6_Da;
  undefined4 uVar137;
  undefined4 unaff_XMM6_Db;
  undefined4 uVar138;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined1 unaff_XMM7 [16];
  undefined4 unaff_XMM8_Da;
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  float unaff_XMM9_Da;
  undefined4 uVar139;
  undefined4 uVar140;
  undefined4 uVar141;
  undefined4 unaff_XMM10_Da;
  undefined4 unaff_XMM10_Db;
  undefined4 unaff_XMM10_Dc;
  undefined4 unaff_XMM10_Dd;
  float unaff_XMM11_Da;
  undefined4 uVar142;
  float unaff_XMM12_Da;
  undefined4 uVar143;
  undefined4 unaff_XMM13_Da;
  float unaff_XMM14_Da;
  undefined4 unaff_XMM15_Da;
  undefined4 unaff_XMM15_Db;
  undefined4 unaff_XMM15_Dc;
  undefined4 unaff_XMM15_Dd;
  undefined1 (*in_stack_00000218) [16];
  undefined1 (*in_stack_00000618) [16];
  undefined8 in_stack_00000650;
  uint uStack_5b0;
  char acStack_560 [16];
  undefined8 *******pppppppuStack_550;
  char *pcStack_548;
  undefined1 auStack_540 [32];
  ulonglong auStack_520 [2];
  undefined1 (*pauStack_510) [16];
  undefined1 auStack_508 [8];
  char cStack_500;
  undefined4 uStack_4e8;
  undefined1 (*pauStack_4d8) [16];
  undefined8 *******pppppppuStack_4c8;
  undefined1 auStack_4c0 [8];
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  ulonglong *puStack_4b0;
  undefined8 uStack_4a8;
  undefined1 uStack_498;
  byte abStack_493 [3];
  undefined8 uStack_490;
  byte *pbStack_488;
  undefined1 (*apauStack_480 [2]) [16];
  undefined1 uStack_46a;
  int iStack_400;
  uint uStack_3fc;
  undefined1 (*pauStack_3f8) [16];
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined1 (*pauStack_370) [16];
  undefined1 (*pauStack_358) [16];
  undefined1 auStack_338 [8];
  undefined1 (*pauStack_330) [16];
  undefined1 auStack_328 [16];
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  uint uStack_290;
  undefined8 uStack_1f8;
  undefined1 (*pauStack_1f0) [16];
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_178;
  char acStack_158 [8];
  undefined1 (*pauStack_150) [16];
  undefined8 uStack_148;
  undefined8 uStack_140;
  uint auStack_124 [11];
  undefined1 uStack_f8;
  undefined1 uStack_f7;
  undefined8 uStack_f0;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  
  uVar130 = (undefined4)((ulonglong)in_XMM2_Qa >> 0x20);
  uVar142 = (undefined4)in_XMM2_Qa;
  ppppppuVar31 = unaff_XMM7._0_8_;
  ppcVar59 = &pcStack_548;
  ppcVar61 = &pcStack_548;
  ppcVar65 = &pcStack_548;
  ppcVar69 = &pcStack_548;
  ppcVar70 = &pcStack_548;
  ppcVar71 = &pcStack_548;
  ppcVar104 = &pcStack_548;
  ppcVar76 = &pcStack_548;
  ppcVar78 = &pcStack_548;
  ppcVar80 = &pcStack_548;
  ppcVar81 = &pcStack_548;
  ppcVar82 = &pcStack_548;
  ppcVar83 = &pcStack_548;
  ppcVar84 = &pcStack_548;
  ppcVar85 = &pcStack_548;
  ppcVar87 = &pcStack_548;
  ppcVar88 = &pcStack_548;
  ppcVar89 = &pcStack_548;
  ppcVar90 = &pcStack_548;
  ppcVar91 = &pcStack_548;
  ppcVar92 = &pcStack_548;
  pppppppuVar51 = (undefined8 *******)&pcStack_548;
  ppcVar97 = &pcStack_548;
  ppcVar100 = &pcStack_548;
  pppppppuVar101 = (undefined8 *******)&pcStack_548;
  ppcVar102 = &pcStack_548;
  ppcVar105 = &pcStack_548;
  ppcVar106 = &pcStack_548;
  ppcVar109 = &pcStack_548;
  ppcVar60 = &pcStack_548;
  ppcVar63 = &pcStack_548;
  ppcVar66 = &pcStack_548;
  ppcVar67 = &pcStack_548;
  ppcVar73 = &pcStack_548;
  ppcVar93 = &pcStack_548;
  ppcVar95 = &pcStack_548;
  ppcVar103 = &pcStack_548;
  ppcVar107 = &pcStack_548;
  ppcVar62 = &pcStack_548;
  ppcVar72 = &pcStack_548;
  pppppppuVar110 = &pppppppuStack_4c8;
  uStack_f0 = 0xfffffffffffffffe;
  pppppppuStack_550 = (undefined8 *******)0x141920a8c;
  pauVar117 = param_4;
  pdb_140f55d10(&iStack_400);
  pauVar39 = pauStack_3f8;
  if (SBORROW8(0,CONCAT44(uStack_3fc,iStack_400))) {
    pauStack_358 = pauStack_3f8;
    uStack_f7 = 1;
    pppppppuStack_550 = (undefined8 *******)0x141920ac0;
    pdb_140f3f5b0(auStack_338);
    uStack_1d8 = uStack_318;
    uStack_1d4 = uStack_314;
    uStack_1d0 = uStack_310;
    uStack_1cc = uStack_30c;
    uStack_1e8 = auStack_328._0_8_;
    uStack_1e0 = auStack_328._8_8_;
    uStack_1f8 = auStack_338;
    pauStack_1f0 = pauStack_330;
    pauStack_330 = (undefined1 (*) [16])0x11;
    auStack_338 = (undefined1  [8])&UNK_1433591a0;
    auStack_328._0_8_ = pauStack_3f8;
    uStack_f7 = 0;
    pppppppuStack_550 = (undefined8 *******)0x141920b25;
    ppppppuVar31 = (undefined8 ******)pdb_142dea990(auStack_338,&uStack_1f8);
    *(undefined8 *******)((longlong)*param_1 + 8) = ppppppuVar31;
    *(undefined8 *******)*param_1 = (undefined8 ******)0x8000000000000000;
    return param_1;
  }
  pauStack_370 = pauStack_3f8;
  pppppppuStack_550 = (undefined8 *******)0x141920b60;
  pdb_14164f410(&iStack_400,pauStack_3f8,uStack_3f0);
  pauVar32 = pauStack_3f8;
  if ((char)iStack_400 == '\x06') {
    pauStack_358 = pauStack_3f8;
    uStack_f8 = 1;
    pppppppuStack_550 = (undefined8 *******)0x141920b91;
    pdb_140f3f5b0(auStack_338);
    uStack_1d8 = uStack_318;
    uStack_1d4 = uStack_314;
    uStack_1d0 = uStack_310;
    uStack_1cc = uStack_30c;
    uStack_1e8 = auStack_328._0_8_;
    uStack_1e0 = auStack_328._8_8_;
    uStack_1f8 = auStack_338;
    pauStack_1f0 = pauStack_330;
    pauStack_330 = (undefined1 (*) [16])0xc;
    auStack_338 = (undefined1  [8])&UNK_1433591b1;
    auStack_328._0_8_ = pauVar32;
    uStack_f8 = 0;
    pppppppuStack_550 = (undefined8 *******)0x141920bf6;
    ppppppuVar31 = (undefined8 ******)pdb_142de9590(auStack_338,&uStack_1f8);
    *(undefined8 *******)((longlong)*param_1 + 8) = ppppppuVar31;
    *(undefined8 *******)*param_1 = (undefined8 ******)0x8000000000000000;
    ppcVar62 = &pcStack_548;
    goto LAB_14192124f;
  }
  acStack_158[4] = (undefined1)uStack_3fc;
  acStack_158._1_3_ = iStack_400._1_3_;
  acStack_158._5_3_ = (undefined3)(uStack_3fc >> 8);
  uStack_148 = uStack_3f0;
  uStack_140 = uStack_3e8;
  acStack_158[0] = (char)iStack_400;
  pauStack_150 = pauStack_3f8;
  pauVar115 = (undefined1 (*) [16])acStack_158;
  pppppppuStack_550 = (undefined8 *******)0x141920c5f;
  pauVar32 = (undefined1 (*) [16])pdb_141c0c220(&UNK_1433591bd,7);
  auVar125._8_8_ = extraout_XMM0_Qb;
  auVar125._0_8_ = extraout_XMM0_Qa;
  if (pauVar32 == (undefined1 (*) [16])0x0) {
    pauVar32 = _DAT_143cad928;
  }
  pauVar54 = (undefined1 (*) [16])&UNK_143359e30;
  uVar44 = (ulonglong)*(int *)(&UNK_143359e30 + (ulonglong)(byte)(*pauVar32)[0] * 4);
  bVar121 = 0xfffffffebcca61cf < uVar44;
  bVar123 = SCARRY8(uVar44,0x143359e30);
  arg0 = (undefined1 (*) [16])(&UNK_143359e30 + uVar44);
  bVar122 = arg0 == (undefined1 (*) [16])0x0;
  bVar42 = (byte)pauVar32;
  uVar40 = (undefined7)((ulonglong)pauVar32 >> 8);
  uVar29 = (uint)pauVar32;
  bVar43 = (byte)arg0;
  bVar52 = (byte)((ulonglong)arg0 >> 8);
  bVar116 = (byte)param_2;
  cVar24 = (char)((ulonglong)param_2 >> 8);
  uVar58 = (undefined6)((ulonglong)param_2 >> 0x10);
  iVar27 = (int)pppppppuVar110;
  pppppppuVar79 = (undefined8 *******)&pcStack_548;
  ppcVar64 = &pcStack_548;
  ppcVar68 = &pcStack_548;
  ppcVar74 = &pcStack_548;
  ppcVar75 = &pcStack_548;
  ppcVar77 = &pcStack_548;
  ppcVar86 = &pcStack_548;
  ppcVar20 = &pcStack_548;
  ppcVar108 = &pcStack_548;
  ppcVar21 = &pcStack_548;
  ppcVar94 = &pcStack_548;
  ppcVar99 = &pcStack_548;
  ppcVar96 = &pcStack_548;
  ppcVar22 = &pcStack_548;
  ppcVar23 = &pcStack_548;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((*pauVar32)[0]) {
  case 0:
    auVar135[0xf] = 0;
    auVar135._0_15_ = stack0xfffffffffffffcc9;
    _auStack_338 = auVar135 << 8;
    break;
  case 1:
  case 2:
    _auStack_338 = *pauVar32;
    in_XMM1 = pauVar32[1];
    auStack_328 = in_XMM1;
    break;
  case 3:
    pppppppuStack_550 = (undefined8 *******)0x141920cd8;
    pdb_140f60be0(&pauStack_330,(undefined8 *)((longlong)*pauVar32 + 8));
    auStack_338[0] = 3;
    break;
  case 4:
    pppppppuStack_550 = (undefined8 *******)0x141920cac;
    pdb_1415e5d30(&pauStack_330,(undefined8 *)((longlong)*pauVar32 + 8));
    auStack_338[0] = 4;
    break;
  case 5:
    if (*(longlong *)((longlong)pauVar32[1] + 8) == 0) {
      uStack_1f8 = 0;
      uStack_1e8 = 0;
    }
    else {
      if (*(longlong *)((longlong)*pauVar32 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        pppppppuStack_550 = (undefined8 *******)0x141922f16;
        pdb_142dc8150(&UNK_143359d48);
      }
      pppppppuStack_550 = (undefined8 *******)0x141920d06;
      pdb_14192d190(&uStack_1f8,*(longlong *)((longlong)*pauVar32 + 8),*(undefined8 *)pauVar32[1]);
    }
    pauStack_330 = (undefined1 (*) [16])uStack_1f8;
    auStack_328._8_8_ = uStack_1e8;
    auStack_328._0_8_ = pauStack_1f0;
    auStack_338[0] = 5;
    break;
  case 6:
    *(uint *)*pauVar32 = *(int *)*pauVar32 + uVar29;
    pcVar33 = (char *)((longlong)pauVar32[-8] + 9);
    *pcVar33 = *pcVar33 + bVar43;
    return pauVar32;
  case 7:
  case 8:
    pauVar32 = (undefined1 (*) [16])(ulonglong)(uVar29 + 0x238ca7a);
    goto code_r0x000141920eae;
  case 9:
    goto code_r0x000141920eef;
  case 10:
    bVar42 = (*param_3)[0];
    (*param_3)[0] = (*param_3)[0] + bVar43;
    pauVar32[1][0] = pauVar32[1][0] + bVar43 + CARRY1(bVar42,bVar43);
    _auStack_338 = auVar125;
    auStack_328 = in_XMM1;
    goto code_r0x000141920f92;
  case 0xb:
    ppauVar45 = (undefined1 (**) [16])(ulonglong)(iVar27 + 0x198);
    goto code_r0x000141920f12;
  case 0xc:
    *(char *)CONCAT71(uVar40,cRam019085290f000001) =
         *(char *)CONCAT71(uVar40,cRam019085290f000001) + cRam019085290f000001;
    ppcVar62 = &pcStack_548;
    goto code_r0x0001419210f5;
  case 0xd:
  case 0xe:
    goto code_r0x000141920ffa;
  case 0xf:
    param_2 = (undefined1 (*) [16])CONCAT62(uVar58,(ushort)bVar116);
    (*pauVar32)[0] = (*pauVar32)[0] + bVar42;
    ppcVar60 = &pcStack_548;
    goto code_r0x00014192103e;
  case 0x10:
    pppppppuVar79 = (undefined8 *******)auStack_4c0;
    pppppppuVar110 = pppppppuStack_4c8;
    goto code_r0x000141921011;
  case 0x11:
    (*arg0)[(longlong)pppppppuVar110 * 8] = (*arg0)[(longlong)pppppppuVar110 * 8] + bVar42;
    pcVar33 = (char *)((ulonglong)param_3 & 0xffffffff);
    param_3 = (undefined1 (*) [16])((ulonglong)pauVar32 & 0xffffffff);
    *pcVar33 = *pcVar33 + (char)pcVar33;
    ppcVar62 = &pcStack_548;
    goto code_r0x0001419210f5;
  case 0x12:
  case 0x18:
  case 0x19:
    goto code_r0x000141922054;
  case 0x13:
    (*param_3)[0] = (*param_3)[0] + bVar43;
    halt_baddata();
  case 0x14:
    goto code_r0x0001419220ab;
  case 0x15:
  case 0x17:
    return (undefined1 (*) [16])(ulonglong)(uVar29 + 0xf000000);
  case 0x16:
    goto code_r0x000141922096;
  case 0x1a:
    goto code_r0x0001419220c0;
  case 0x1b:
  case 0x21:
  case 0x22:
    (*pauVar32)[0] = (*pauVar32)[0] + bVar42;
    ppcVar62 = &pcStack_548;
    unaff_XMM9_Da = _UNK_14300d240;
    goto code_r0x000141921cb7;
  case 0x1c:
    goto code_r0x0001419220bc;
  case 0x1d:
    *(uint *)*pauVar32 = *(int *)*pauVar32 + uVar29;
    (*pauVar32)[0] = (*pauVar32)[0] + bVar42;
    ppcVar66 = &pcStack_548;
    goto code_r0x00014192208d;
  case 0x1e:
  case 0x20:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x1f:
    goto code_r0x00014192207a;
  case 0x23:
    pauVar32 = (undefined1 (*) [16])(ulonglong)*(uint *)((longlong)*pauVar32 + (longlong)*arg0);
    ppcVar67 = &pcStack_548;
    goto code_r0x0001419220a7;
  case 0x24:
  case 0x2a:
  case 0x2b:
    return pauVar32;
  case 0x25:
    goto code_r0x0001419223ad;
  case 0x26:
    pcVar33 = (char *)((longlong)&uStack_490 + (longlong)arg0 * 4 + 5);
    *pcVar33 = *pcVar33 + bVar43;
    goto code_r0x0001419223a4;
  case 0x27:
  case 0x29:
    ppcVar70 = &pcStack_548;
    pppppppuStack_4c8 = pppppppuVar110;
    goto joined_r0x000141922320;
  case 0x28:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x2c:
    goto code_r0x0001419223a5;
  case 0x2d:
  case 0x33:
  case 0x34:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x2e:
    pcVar33 = (char *)((longlong)pauVar32[-8] + 0xb);
    *pcVar33 = *pcVar33 + bVar43;
    pauVar32 = (undefined1 (*) [16])CONCAT71(uVar40,bVar42 + (*pauVar32)[0]);
    pcVar33 = (char *)((longlong)pauVar32[-4] + 1);
    *pcVar33 = *pcVar33 + bVar43;
    goto code_r0x000141927156;
  case 0x2f:
    goto code_r0x000141927154;
  case 0x30:
  case 0x32:
    goto code_r0x0001419270ce;
  case 0x31:
    goto code_r0x000141927144;
  case 0x35:
    goto code_r0x00014192715c;
  case 0x36:
  case 0x3c:
  case 0x3d:
    goto LAB_1419271a1;
  case 0x37:
    (*pauVar32)[0] = (*pauVar32)[0] + bVar42;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x38:
    ppcVar82 = &pcStack_548;
    uRam01a32702058d4c01 = uVar29;
    goto code_r0x0001419271ee;
  case 0x39:
  case 0x3b:
    (*pauVar32)[0] = bVar42;
    pppppppuVar79 = (undefined8 *******)&pcStack_548;
    goto code_r0x00014192718c;
  case 0x3a:
    out(3,uVar29);
    (*pauVar32)[0] = (*pauVar32)[0] + bVar42;
    goto LAB_1419271cd;
  case 0x3e:
    goto code_r0x0001419271ed;
  case 0x3f:
  case 0x45:
  case 0x46:
    pauVar54 = (undefined1 (*) [16])(ulonglong)uStack_290;
    ppcVar74 = &pcStack_548;
    goto code_r0x000141927144;
  case 0x40:
    ppcVar83 = (char **)auStack_540;
    *pcStack_548 = *pcStack_548 + (char)pcStack_548;
    goto code_r0x0001419271f4;
  case 0x41:
    goto code_r0x0001419271d1;
  case 0x42:
  case 0x44:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x43:
    goto code_r0x0001419271b9;
  case 0x47:
    arg0 = (undefined1 (*) [16])((ulonglong)arg0 & 0xffffffff);
    goto code_r0x0001419271db;
  case 0x48:
  case 0x4e:
  case 0x4f:
    goto LAB_14192727c;
  case 0x49:
    UNK_143359e30 = UNK_143359e30 | bVar42;
    goto code_r0x00014192736a;
  case 0x4a:
    (*pauVar32)[0] = (*pauVar32)[0] + -1;
    goto code_r0x000141927374;
  case 0x4b:
  case 0x4d:
    cVar24 = bVar42 + (&UNK_143359de9)[uVar44] + CARRY1(bVar116,bVar52);
    pauVar32 = (undefined1 (*) [16])CONCAT71(uVar40,cVar24);
    *(int *)*pauVar32 = *(int *)*pauVar32 + (int)pauVar32;
    (*pauVar32)[0] = (*pauVar32)[0] + cVar24;
    goto LAB_14192726a;
  case 0x4c:
    return pauVar32;
  case 0x50:
    param_2 = (undefined1 (*) [16])CONCAT62(uVar58,CONCAT11(cVar24 >> (bVar43 & 0x1f),bVar116));
    arg0 = (undefined1 (*) [16])(&UNK_143359e2f + uVar44);
    pppppppuVar79 = (undefined8 *******)&pcStack_548;
    if (arg0 == (undefined1 (*) [16])0x0) goto code_r0x000141927388;
    goto code_r0x000141927342;
  case 0x51:
  case 0x57:
  case 0x58:
    (*pauVar32)[0] = (*pauVar32)[0] + bVar42;
  case 0x5d:
  case 0x5f:
    pauVar117 = (undefined1 (*) [16])0x5;
    ppcVar86 = &pcStack_548;
    goto LAB_14192727c;
  case 0x52:
    pppppppuVar79 = (undefined8 *******)&pcStack_548;
    goto code_r0x000141927333;
  case 0x53:
    goto code_r0x00014192730f;
  case 0x54:
  case 0x56:
    (*pauVar32)[0] = (*pauVar32)[0] + bVar42;
    pppppppuVar79 = (undefined8 *******)&pcStack_548;
    goto LAB_14192729c;
  case 0x55:
    ppcVar73 = &pcStack_548;
    goto LAB_1419272f6;
  case 0x59:
    goto code_r0x000141927320;
  case 0x5a:
  case 0x60:
  case 0x61:
    (*pauVar32)[0] = (*pauVar32)[0] + bVar42;
    goto LAB_14192724e;
  case 0x5b:
    puVar1 = (uint *)(&UNK_143359de9 + uVar44);
    *puVar1 = *puVar1 >> 0x13 | *puVar1 << 0xd;
    pauVar54 = (undefined1 (*) [16])(ulonglong)(uVar29 & 0xffffff49);
    goto code_r0x00014192731b;
  case 0x5c:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x5e:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x62:
    *(uint *)*pauVar32 = *(int *)*pauVar32 + uVar29;
    pcVar33 = (char *)((longlong)pauVar32[-8] + 0xb);
    *pcVar33 = *pcVar33 + bVar43;
    pauVar32 = (undefined1 (*) [16])((ulonglong)pauVar32 & 0xffffffff);
    goto code_r0x00014192730a;
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x6b:
    ppcVar72 = &pcStack_548;
    goto LAB_141925df4;
  case 0x68:
    abStack_493[(longlong)arg0 * 4] = abStack_493[(longlong)arg0 * 4] | 0xc4;
    ppcVar104 = &pcStack_548;
    uRam000006d0bd8d4c01 = uVar29;
    goto LAB_141925ec8;
  default:
    goto code_r0x000141925d94;
  case 0x75:
    goto code_r0x00014192a10b;
  case 0x76:
  case 0x77:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x78:
    goto code_r0x00014192a111;
  case 0x79:
    bVar121 = uVar29 == 0;
    goto code_r0x00014192a0fa;
  case 0x7a:
    goto code_r0x00014192a124;
  case 0x7b:
    goto code_r0x00014192a3c8;
  case 0x7c:
  case 0x7d:
    auStack_520[0] = (ulonglong)(iVar27 + 0x38);
    bVar122 = *(longlong *)*_DAT_143ca8e90 == 0;
  case 0x7f:
    if (!bVar122) goto code_r0x00014192a3b5;
    goto code_r0x00014192a453;
  case 0x7e:
    (*pauVar32)[0] = (*pauVar32)[0] + bVar42;
    ppcVar22 = &pcStack_548;
    goto code_r0x00014192a3c8;
  case 0x80:
    (*pauVar32)[0] = (*pauVar32)[0] + bVar42;
    (*pauVar32)[0] = (*pauVar32)[0] + bVar42;
    goto code_r0x00014192a3eb;
  case 0x81:
    goto code_r0x00014192a651;
  case 0x82:
  case 0x83:
    auStack_520[0] = 2;
    goto code_r0x00014192a63e;
  case 0x84:
    ppcVar95 = &pcStack_548;
    goto code_r0x00014192a65b;
  case 0x85:
    goto code_r0x00014192a63e;
  case 0x86:
    goto code_r0x00014192a66a;
  case 0x87:
    goto code_r0x00014192aae8;
  case 0x88:
  case 0x89:
    (&UNK_143359de8)[uVar44] = (&UNK_143359de8)[uVar44] | bVar42;
    *(uint *)*pauVar32 = *(int *)*pauVar32 + uVar29;
    (*pauVar32)[0] = (*pauVar32)[0] + bVar42;
    pppppppuStack_550 = (undefined8 *******)0x14192aa3a;
    pub_1406abac0((byte *)arg0,0x143359e30,(ulonglong)pauVar115);
    goto code_r0x00014192aa46;
  case 0x8a:
    (*pauVar32)[0] = (*pauVar32)[0] + bVar42;
    pcVar33 = (char *)((longlong)pauVar32[-8] + 0xd);
    *pcVar33 = *pcVar33 + bVar43;
    pbVar10 = (byte *)((longlong)pauVar32[-8] + 9);
    *pbVar10 = *pbVar10 | bVar43;
    pcVar33 = (char *)((longlong)pauVar115[-8] + 0xb);
    *pcVar33 = *pcVar33 - (byte)pauVar117;
    pauVar39 = (undefined1 (*) [16])(ulonglong)(uVar29 + 0x237e37d);
    goto code_r0x00014192ab13;
  case 0x8b:
    pub_1406abac0(_UNK_143359ef0,0x28,8);
    return extraout_RAX_06;
  case 0x8c:
    goto code_r0x00014192ab26;
  case 0x8d:
    goto code_r0x00014192ce44;
  case 0x8e:
  case 0x8f:
    bVar121 = (int)param_2 == 0;
    ppcVar104 = &pcStack_548;
    goto code_r0x00014192ce16;
  case 0x90:
    (*pauVar32)[0] = (*pauVar32)[0] + bVar42;
    pcVar33 = (char *)((longlong)pauVar32[-8] + 9);
    *pcVar33 = *pcVar33 + bVar43;
    ppcVar100 = &pcStack_548;
    goto code_r0x00014192ce53;
  case 0x91:
    uVar26 = in((short)CONCAT71(uVar40,bVar42 + bVar52));
    pauVar32 = (undefined1 (*) [16])CONCAT71(0x43359e,uVar26);
    goto code_r0x00014192ce2c;
  case 0x92:
    (*arg0)[0] = ((*arg0)[0] - bVar42) - bVar121;
    (*pauVar32)[0] = (*pauVar32)[0] + bVar42;
    ppcVar104 = &pcStack_548;
    goto code_r0x00014192ce70;
  case 0x93:
    pauVar32 = (undefined1 (*) [16])(ulonglong)_UNK_143359e38;
    if (pauVar32 == (undefined1 (*) [16])0x0) {
                    /* WARNING: Subroutine does not return */
      pppppppuStack_550 = (undefined8 *******)0x14192d108;
      pdb_142dc8150(&UNK_143359d48);
    }
    goto code_r0x00014192d0b0;
  case 0x94:
  case 0x95:
    pbVar10 = (byte *)((longlong)pauVar32[-8] + 9);
    *pbVar10 = *pbVar10 | bVar43;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x96:
    arg0 = (undefined1 (*) [16])((ulonglong)arg0 & 0xffffffff);
code_r0x00014192d0b0:
    pppppppuStack_550 = (undefined8 *******)0x14192d0c1;
    pdb_14192d190(auStack_520,pauVar32,_UNK_143359e40);
    ppcVar103 = &pcStack_548;
    goto code_r0x00014192d0dd;
  case 0x97:
    return pauVar32;
  case 0x98:
    pauStack_510 = (undefined1 (*) [16])((ulonglong)pauStack_510 & 0xffffffff);
    ppcVar103 = &pcStack_548;
    goto code_r0x00014192d0dd;
  case 0x99:
    goto code_r0x00014192d339;
  case 0x9a:
  case 0x9b:
    uStack_46a = 1;
    pppppppuStack_550 = (undefined8 *******)0x14192d30b;
    pdb_140f60be0(&uStack_4b8,0x43359e38);
    arg0 = (undefined1 (*) [16])&uStack_490;
    apauStack_480[0] = (undefined1 (*) [16])uStack_4a8;
    auVar125._4_4_ = uStack_4b4;
    auVar125._0_4_ = uStack_4b8;
    auVar125._8_8_ = puStack_4b0;
    goto code_r0x00014192d31c;
  case 0x9c:
    pppppppuVar51 = (undefined8 *******)(ulonglong)(iVar27 + 0x10);
    ppcVar107 = &pcStack_548;
    goto code_r0x00014192d345;
  case 0x9d:
    pbVar10 = (byte *)((longlong)pauVar32[-8] + 0xd);
    *pbVar10 = *pbVar10 & bVar43;
    bVar121 = *(byte *)((longlong)pauVar115[-8] + 9) < (byte)pauVar117;
    goto code_r0x00014192d316;
  case 0x9e:
    goto code_r0x00014192d369;
  }
  pppppppuStack_550 = (undefined8 *******)0x141920d63;
  pdb_1414fe290(&iStack_400,auStack_338);
  if (iStack_400 == 1) {
    pppppppuStack_550 = (undefined8 *******)0x141920d79;
    ppppppuVar31 = (undefined8 ******)pdb_142dead00(pauStack_3f8);
    ppcVar62 = &pcStack_548;
    goto code_r0x0001419211bf;
  }
  pauVar39 = (undefined1 (*) [16])(ulonglong)uStack_3fc;
  auStack_124[0] = uStack_3fc;
  if ((int)uStack_3fc < 3) {
    auStack_338 = (undefined1  [8])auStack_124;
    pauStack_330 = (undefined1 (*) [16])pdb_140f71c50;
    auStack_328._0_8_ = &UNK_143359660;
    auStack_328._8_8_ = pdb_140f71c50;
    pppppppuStack_550 = (undefined8 *******)0x141920ddb;
    pdb_140f60760(&uStack_1f8,&UNK_143359664,auStack_338);
    pauStack_330 = pauStack_1f0;
    auStack_338 = (undefined1  [8])uStack_1f8;
    auStack_328._0_8_ = uStack_1e8;
    pppppppuStack_550 = (undefined8 *******)0x141920e04;
    ppppppuVar31 = (undefined8 ******)pdb_142de92b0(auStack_338);
    ppcVar62 = &pcStack_548;
    goto code_r0x0001419211bf;
  }
  if (0x1e < uStack_3fc) {
    auStack_338 = (undefined1  [8])auStack_124;
    pauStack_330 = (undefined1 (*) [16])pdb_140f71c50;
    auStack_328._0_8_ = &UNK_14335934c;
    auStack_328._8_8_ = pdb_140f71c50;
    pppppppuStack_550 = (undefined8 *******)0x141920e5a;
    pdb_140f60760(&uStack_1f8,&UNK_143359618,auStack_338);
    pauStack_330 = pauStack_1f0;
    auStack_338 = (undefined1  [8])uStack_1f8;
    auStack_328._0_8_ = uStack_1e8;
    pppppppuStack_550 = (undefined8 *******)0x141920e83;
    ppppppuVar31 = (undefined8 ******)pdb_142de92b0(auStack_338);
    ppcVar62 = &pcStack_548;
    goto code_r0x0001419211bf;
  }
  pauVar115 = (undefined1 (*) [16])acStack_158;
  pppppppuStack_550 = (undefined8 *******)0x141920ea1;
  pauVar32 = (undefined1 (*) [16])pdb_141c0c220(&UNK_1433591f6,0x15);
  auVar125._8_8_ = extraout_XMM0_Qb_00;
  auVar125._0_8_ = extraout_XMM0_Qa_00;
  if (pauVar32 == (undefined1 (*) [16])0x0) {
    pauVar32 = _DAT_143cad928;
  }
code_r0x000141920eae:
  pauVar54 = (undefined1 (*) [16])&UNK_143359e48;
  uVar44 = (ulonglong)*(int *)(&UNK_143359e48 + (ulonglong)(byte)(*pauVar32)[0] * 4);
  bVar123 = SCARRY8(uVar44,0x143359e48);
  arg0 = (undefined1 (*) [16])(&UNK_143359e48 + uVar44);
  bVar42 = (byte)pauVar32;
  uVar41 = (uint7)((ulonglong)pauVar32 >> 8);
  iVar27 = (int)pauVar32;
  bVar43 = (byte)arg0;
  ppcVar77 = &pcStack_548;
  pppppppuVar79 = (undefined8 *******)&pcStack_548;
  ppcVar73 = &pcStack_548;
  ppcVar80 = &pcStack_548;
  ppcVar20 = &pcStack_548;
  ppcVar81 = &pcStack_548;
  ppcVar68 = &pcStack_548;
  pauVar50 = arg0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((*pauVar32)[0]) {
  case 0:
    auVar18[0xf] = 0;
    auVar18._0_15_ = stack0xfffffffffffffcc9;
    _auStack_338 = auVar18 << 8;
    break;
  case 1:
  case 2:
    _auStack_338 = *pauVar32;
    in_XMM1 = pauVar32[1];
    auStack_328 = in_XMM1;
    break;
  case 3:
    pauVar32 = (undefined1 (*) [16])((longlong)*pauVar32 + 8);
    ppauVar45 = &pauStack_330;
code_r0x000141920f12:
    pppppppuStack_550 = (undefined8 *******)0x141920f1a;
    pdb_140f60be0(ppauVar45,pauVar32);
    auStack_338[0] = 3;
    break;
  case 4:
    pppppppuStack_550 = (undefined8 *******)0x141920eee;
    pdb_1415e5d30(&pauStack_330,(undefined8 *)((longlong)*pauVar32 + 8));
code_r0x000141920eef:
    auStack_338[0] = 4;
    break;
  case 5:
    if (*(longlong *)((longlong)pauVar32[1] + 8) == 0) {
      uStack_1f8 = 0;
      uStack_1e8 = 0;
    }
    else {
      if (*(longlong *)((longlong)*pauVar32 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        pppppppuStack_550 = (undefined8 *******)0x141922f28;
        pdb_142dc8150(&UNK_143359d48);
      }
      pppppppuStack_550 = (undefined8 *******)0x141920f48;
      pdb_14192d190(&uStack_1f8,*(longlong *)((longlong)*pauVar32 + 8),*(undefined8 *)pauVar32[1]);
    }
    pauStack_330 = (undefined1 (*) [16])uStack_1f8;
    auStack_328._8_8_ = uStack_1e8;
    auStack_328._0_8_ = pauStack_1f0;
    auStack_338[0] = 5;
    break;
  case 6:
    *(int *)*pauVar32 = *(int *)*pauVar32 + iVar27;
    pcVar33 = (char *)((longlong)pauVar32[-8] + 9);
    *pcVar33 = *pcVar33 + bVar43;
    return pauVar32;
  case 7:
  case 8:
    pauVar32 = (undefined1 (*) [16])(ulonglong)(iVar27 + 0x238c917);
    pppppppuVar79 = (undefined8 *******)&pcStack_548;
    goto code_r0x000141921011;
  case 9:
    goto code_r0x000141921052;
  case 10:
    bVar42 = (*param_3)[0];
    (*param_3)[0] = (*param_3)[0] + bVar43;
    pauVar32[1][0] = pauVar32[1][0] + bVar43 + CARRY1(bVar42,bVar43);
    goto code_r0x000141921024;
  case 0xb:
    goto code_r0x00014192106a;
  case 0xc:
  case 0x12:
  case 0x13:
    pauVar32 = (undefined1 (*) [16])((ulonglong)pauVar32 | 0x11);
    goto code_r0x00014192206e;
  case 0xd:
    halt_baddata();
  case 0xe:
    pauVar32 = (undefined1 (*) [16])CONCAT71(uVar41,bVar42 + 1 + (0xfffffffebcca61b7 < uVar44));
code_r0x0001419220c0:
    (*pauVar32)[0] = (*pauVar32)[0] + (char)pauVar32;
    *(int *)((longlong)*pauVar32 + (longlong)*arg0) = (int)pauVar54;
    pppppppuVar79 = (undefined8 *******)&pcStack_548;
    goto code_r0x000141921d1b;
  case 0xf:
  case 0x11:
    puVar34 = (undefined1 *)((ulonglong)uVar41 << 8);
    *puVar34 = *puVar34;
    ppcVar64 = &pcStack_548;
    goto code_r0x000141922054;
  case 0x10:
    arg0 = (undefined1 (*) [16])0x43359e9c;
    goto code_r0x0001419220ad;
  case 0x14:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x15:
  case 0x1b:
  case 0x1c:
    goto code_r0x000141921cb7;
  case 0x16:
    goto code_r0x0001419220d4;
  case 0x17:
    goto code_r0x0001419220a7;
  case 0x18:
  case 0x1a:
    pbVar10 = (byte *)((longlong)*param_2 + (longlong)arg0 * 4 + 0xc);
    bVar121 = CARRY1(*pbVar10,bVar42);
    *pbVar10 = *pbVar10 + bVar42;
    goto code_r0x00014192206d;
  case 0x19:
    (&UNK_143359dc9)[uVar44] = (&UNK_143359dc9)[uVar44] + bVar42;
code_r0x000141922096:
    out(3,(int)pauVar32);
    (*pauVar32)[0] = (*pauVar32)[0] + (char)pauVar32;
    goto code_r0x00014192208d;
  case 0x1d:
code_r0x0001419220bc:
    bVar121 = (longlong)arg0 < 0;
    arg0 = (undefined1 (*) [16])((longlong)arg0[-1] + 0xf);
    if (arg0 == (undefined1 (*) [16])0x0) {
      pauVar32 = (undefined1 (*) [16])(ulonglong)(uint)((int)pauVar32 + *(int *)*pauVar32);
      arg0 = (undefined1 (*) [16])0x0;
      goto code_r0x0001419220c0;
    }
    if (bVar123 == bVar121) {
      pcVar33 = (char *)((longlong)pauVar32[-8] + 0xb);
      *pcVar33 = *pcVar33 + (char)arg0;
      piVar2 = (int *)((longlong)pauVar32[-4] + 7);
      *piVar2 = *piVar2 + (int)arg0;
      (*pauVar117)[0] = (*pauVar117)[0] | (byte)pauVar32;
      (*pauVar32)[0] = (*pauVar32)[0] + (byte)pauVar32;
      pcVar33 = (char *)((longlong)pauVar32[-8] + 3);
      *pcVar33 = *pcVar33 + (char)arg0;
      *(int *)*param_3 = *(int *)*param_3 + (int)arg0;
      uVar142 = LocalDescriptorTableRegister();
      *(undefined4 *)*pauVar32 = uVar142;
      goto code_r0x000141922033;
    }
code_r0x00014192207a:
    piVar2 = (int *)((longlong)param_3[6] + 3);
    *piVar2 = *piVar2 + (int)arg0;
    goto code_r0x000141922074;
  case 0x1e:
  case 0x24:
  case 0x25:
    (*param_2)[0] = (*param_2)[0];
    param_3[6][0] = param_3[6][0] + -0x62;
code_r0x000141922392:
    unaff_R13 = (undefined1 (*) [16])(longlong)*(int *)(&UNK_143359ec0 + (longlong)param_1 * 4);
    param_1 = (undefined1 (*) [16])&UNK_143359ec0;
    goto code_r0x0001419223a5;
  case 0x1f:
    goto code_r0x0001419223c5;
  case 0x20:
    *(int *)((longlong)pauVar32[-8] + 5) = (int)in_ST0;
    ppcVar70 = (char **)auStack_4c0;
    goto code_r0x0001419223b6;
  case 0x21:
  case 0x23:
    pcVar33 = (char *)((longlong)pauVar39[-8] + 5);
    *pcVar33 = *pcVar33 + (char)((ulonglong)pauVar32 >> 8);
    cVar24 = uStack_4a8._3_1_ << (bVar43 & 0x1f);
    uStack_4a8._0_4_ = CONCAT13(cVar24,(undefined3)uStack_4a8);
    goto code_r0x000141922340;
  case 0x22:
code_r0x0001419223ad:
    uVar29 = (int)pauVar32 + *(int *)*pauVar32;
    pauVar32 = (undefined1 (*) [16])(ulonglong)uVar29;
    (*pauVar32)[0] = (*pauVar32)[0] + (char)uVar29;
    ppcVar70 = &pcStack_548;
    pppppppuStack_4c8 = pppppppuVar110;
    goto code_r0x00014192240b;
  case 0x26:
    (*pauVar32)[0] = (*pauVar32)[0] + bVar42;
    pppppppuStack_4c8 = pppppppuVar110;
    goto code_r0x0001419223b6;
  case 0x27:
  case 0x2d:
  case 0x2e:
    pcVar33 = (char *)((ulonglong)pppppppuVar110 & 0xffffffff);
    pppppppuVar110 = (undefined8 *******)((ulonglong)pauVar32 & 0xffffffff);
    *pcVar33 = *pcVar33 + (char)pcVar33;
    ppcVar74 = &pcStack_548;
    goto code_r0x000141927144;
  case 0x28:
    pbVar10 = (byte *)((longlong)pauVar32[-8] + 3);
    *pbVar10 = *pbVar10 | bVar43;
    ppcVar78 = &pcStack_548;
    goto code_r0x00014192716e;
  case 0x29:
    goto code_r0x00014192716c;
  case 0x2a:
  case 0x2c:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x2b:
    goto code_r0x00014192715c;
  case 0x2f:
    goto code_r0x000141927174;
  case 0x30:
  case 0x36:
  case 0x37:
code_r0x0001419271b9:
    goto code_r0x0001419271ba;
  case 0x31:
    goto code_r0x000141927223;
  case 0x32:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x33:
  case 0x35:
    (*pauVar32)[0] = (*pauVar32)[0] + bVar42;
    pppppppuVar79 = (undefined8 *******)&pcStack_548;
    goto LAB_1419271a1;
  case 0x34:
code_r0x0001419271ed:
    *(int *)((longlong)pauVar54[5] + 8) = *(int *)((longlong)pauVar54[5] + 8) + (int)param_3;
    ppcVar82 = &pcStack_548;
    goto code_r0x0001419271f3;
  case 0x38:
    goto code_r0x000141927205;
  case 0x39:
  case 0x3f:
  case 0x40:
code_r0x000141927156:
    ppcVar77 = &pcStack_548;
    if (arg0 != (undefined1 (*) [16])0x1) goto code_r0x00014192715c;
    goto code_r0x000141927158;
  case 0x3a:
    goto code_r0x000141927207;
  case 0x3b:
    goto code_r0x0001419271e9;
  case 0x3c:
  case 0x3e:
    log2(in_ST0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x3d:
    goto code_r0x0001419271d1;
  case 0x41:
code_r0x0001419271f4:
    pauVar32 = (undefined1 (*) [16])0x41014a11;
    pppppppuVar79 = (undefined8 *******)ppcVar83;
    goto LAB_141927216;
  case 0x42:
  case 0x48:
  case 0x49:
    pauVar117 = (undefined1 (*) [16])0x3;
    ppcVar84 = &pcStack_548;
    goto LAB_14192723d;
  case 0x43:
code_r0x000141927388:
    uVar139 = SUB84(pauVar54,0);
    uVar29 = (int)pauVar32 + *(int *)*pauVar32;
    pauVar32 = (undefined1 (*) [16])(ulonglong)uVar29;
    (*pauVar32)[0] = (*pauVar32)[0] + (char)uVar29;
    pppppppuVar79 = (undefined8 *******)&pcStack_548;
    goto LAB_14192739f;
  case 0x44:
    (&UNK_143359dc9)[uVar44] = (&UNK_143359dc9)[uVar44] + bVar42;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x45:
  case 0x47:
    pbVar10 = (byte *)((longlong)param_2[5] + (longlong)arg0 * 4 + 1);
    *pbVar10 = *pbVar10 | bVar42;
    (&UNK_143359dcb)[uVar44] = (&UNK_143359dcb)[uVar44] - bVar43;
    pbVar10 = (byte *)((longlong)param_3[1] + 2);
    *pbVar10 = *pbVar10 | 0x9e;
code_r0x00014192728a:
                    /* WARNING: Could not recover jumptable at 0x000141927291. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pauVar39 = (undefined1 (*) [16])
               (*(code *)((longlong)*pauVar54 +
                         (longlong)*(int *)((longlong)*pauVar54 + (longlong)in_R10 * 4)))();
    return pauVar39;
  case 0x46:
code_r0x00014192737e:
    UNRECOVERED_JUMPTABLE =
         (code *)((longlong)*in_R10 + (longlong)*(int *)((longlong)*in_R10 + (longlong)param_4 * 4))
    ;
                    /* WARNING: Could not recover jumptable at 0x000141927385. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pauVar39 = (undefined1 (*) [16])(*UNRECOVERED_JUMPTABLE)(arg0,UNRECOVERED_JUMPTABLE);
    return pauVar39;
  case 0x4a:
    goto code_r0x00014192739c;
  case 0x4b:
  case 0x51:
  case 0x52:
    arg0 = (undefined1 (*) [16])0x4;
    ppcVar84 = &pcStack_548;
    goto LAB_14192723d;
  case 0x4c:
    goto code_r0x000141927349;
  case 0x4d:
    goto code_r0x00014192732d;
  case 0x4e:
  case 0x50:
    (*pauVar32)[0] = (*pauVar32)[0] + bVar42;
    (&UNK_143359e01)[uVar44] = (&UNK_143359e01)[uVar44] + '\x05';
    (*pauVar32)[0] = (*pauVar32)[0] + bVar42;
    arg0 = (undefined1 (*) [16])0x4;
    ppcVar86 = &pcStack_548;
    goto LAB_14192727c;
  case 0x4f:
    arg0 = (undefined1 (*) [16])0x92492493;
  case 0x5c:
code_r0x00014192731b:
    pauVar32 = (undefined1 (*) [16])((ulonglong)pauVar54 & 0xffffff4c);
code_r0x000141927320:
    pppppppuVar79 = (undefined8 *******)&pcStack_548;
    goto code_r0x000141927311;
  case 0x53:
    *(uint *)*pauVar32 = *(uint *)*pauVar32 >> 0xc;
    ppcVar73 = &pcStack_548;
    goto code_r0x00014192733a;
  case 0x54:
  case 0x5a:
  case 0x5b:
    uVar29 = iVar27 + *(int *)*pauVar32;
    pauVar32 = (undefined1 (*) [16])(ulonglong)uVar29;
    (*pauVar32)[0] = (*pauVar32)[0] + (char)uVar29;
    ppcVar86 = &pcStack_548;
    goto LAB_14192727c;
  case 0x55:
    goto code_r0x00014192732c;
  case 0x56:
code_r0x00014192730a:
    pauVar32 = (undefined1 (*) [16])
               CONCAT71((int7)((ulonglong)pauVar32 >> 8),(char)pauVar32 + (*pauVar32)[0]);
    pcVar33 = (char *)((longlong)pauVar32[-8] + 0xd);
    *pcVar33 = *pcVar33 + (char)arg0;
code_r0x00014192730f:
    pauVar32 = (undefined1 (*) [16])
               CONCAT71((int7)((ulonglong)pauVar32 >> 8),(char)pauVar32 + -0x80);
    pppppppuVar79 = (undefined8 *******)&pcStack_548;
    goto code_r0x000141927311;
  case 0x57:
  case 0x59:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x58:
    UNK_143359e48 = UNK_143359e48 | bVar42;
    (*pauVar32)[0] = (*pauVar32)[0] + bVar42;
    ppcVar73 = &pcStack_548;
    goto LAB_1419272f6;
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x65:
    (*pauVar32)[0] = (*pauVar32)[0] + bVar42;
    goto LAB_141925df4;
  case 0x62:
    (*pauVar32)[0] = (*pauVar32)[0] + bVar42;
    (*pauVar32)[0] = (*pauVar32)[0] + bVar42;
    goto LAB_141925eb0;
  default:
code_r0x000141925d94:
    pppppppuStack_550 = (undefined8 *******)0x141925daa;
    pauVar54 = param_4;
    pdb_141bf6820(arg0,param_4,in_stack_00000650);
    ppcVar73 = &pcStack_548;
    ppcVar70 = &pcStack_548;
    pauVar39 = in_stack_00000218;
    pauVar117 = in_stack_00000618;
    if (in_stack_00000218 != (undefined1 (*) [16])0x3) goto code_r0x000141925db8;
    goto LAB_141925de5;
  case 0x6f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x70:
  case 0x71:
    pauStack_4d8 = arg0;
    if (iVar27 == 1) {
      pppppppuStack_550 = (undefined8 *******)&UNK_14192a192;
      pdb_1404b38e0(&UNK_143359e50 + uVar44);
    }
    else {
      bVar121 = pauVar32 == (undefined1 (*) [16])0x0;
code_r0x00014192a0fa:
      if (bVar121) {
        pauVar54 = *(undefined1 (**) [16])pauStack_4d8[1];
        bVar122 = pauVar54 == (undefined1 (*) [16])0x0;
code_r0x00014192a10b:
        if (!bVar122) {
code_r0x00014192a111:
          pppppppuStack_550 = (undefined8 *******)&UNK_14192a124;
          pub_1406abac0(*(byte **)((longlong)*pauStack_4d8 + 8),(ulonglong)pauVar54,1);
code_r0x00014192a124:
        }
      }
    }
    lVar56 = 0x28;
    pauVar39 = pauStack_4d8;
    pppppppuVar79 = (undefined8 *******)&pcStack_548;
    goto code_r0x0001406abac0;
  case 0x72:
    pbVar10 = (byte *)((longlong)pauVar32[-8] + 0xb);
    *pbVar10 = *pbVar10 | bVar43;
    pcVar33 = (char *)((longlong)pauVar32[-8] + 5);
    *pcVar33 = *pcVar33 + (char)pcStack_548;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x73:
    pcVar33 = (char *)((longlong)pauVar32[-8] + 0xb);
    *pcVar33 = *pcVar33 + bVar43;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x74:
    (*pauVar32)[0] = (*pauVar32)[0] + bVar42;
    pppppppuVar79 = (undefined8 *******)&pcStack_548;
    goto code_r0x00014192a13b;
  case 0x75:
    (*pauVar32)[0] = (*pauVar32)[0] + bVar42;
    goto code_r0x00014192a3df;
  case 0x76:
  case 0x77:
    (*pauVar32)[0] = (*pauVar32)[0] + bVar42;
code_r0x00014192a3b5:
    puStack_4b0 = auStack_520;
    uStack_4a8 = pdb_140a93d60;
    ppcVar22 = &pcStack_548;
    goto code_r0x00014192a3c8;
  case 0x78:
    pppppppuVar51 = &pppppppuStack_550;
    pppppppuStack_550 = pppppppuVar110;
    goto code_r0x00014192a3ea;
  case 0x79:
    pbVar10 = (byte *)((longlong)pauVar32[-4] + 7);
    *pbVar10 = *pbVar10 & bVar43;
    goto code_r0x00014192a3cd;
  case 0x7a:
    uStack_4e8 = 1;
    pppppppuVar79 = (undefined8 *******)&pcStack_548;
    goto code_r0x00014192a406;
  case 0x7b:
    bVar43 = bVar43 + *(char *)((longlong)pauVar32[-8] + 0xb);
    arg0 = (undefined1 (*) [16])(ulonglong)bVar43;
    pcVar33 = (char *)((longlong)pauVar32[-8] + 5);
    *pcVar33 = *pcVar33 + bVar43;
  case 0x7e:
    (*param_3)[0] = (byte)(*param_3)[0] >> 4 | (*param_3)[0] << 4;
    (*param_3)[0] = bVar42;
    (*pauVar32)[0] = (*pauVar32)[0] + bVar42;
    pcVar33 = (char *)((longlong)pauVar32[-8] + 0xd);
    *pcVar33 = *pcVar33 + (char)arg0;
    goto code_r0x00014192a67e;
  case 0x7c:
  case 0x7d:
code_r0x00014192a63e:
    pppppppuStack_550 = (undefined8 *******)0x14192a651;
    pdb_141502f40(apauStack_480,auStack_508);
    ppcVar94 = &pcStack_548;
    goto code_r0x00014192a651;
  case 0x7f:
    goto code_r0x00014192a65b;
  case 0x80:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x81:
    arg0 = (undefined1 (*) [16])CONCAT62((int6)((ulonglong)arg0 >> 0x10),(ushort)bVar43);
    (*pauVar32)[0] = (*pauVar32)[0] + bVar42;
    puStack_4b0 = (ulonglong *)&UNK_143359e50;
    pauVar39 = _DAT_143ca8e90;
code_r0x00014192ab13:
    pauVar50 = *(undefined1 (**) [16])*pauVar39;
  case 0x84:
    ppcVar99 = &pcStack_548;
    pauVar39 = arg0;
    uStack_4a8 = (code *)pauVar54;
    if (pauVar50 == (undefined1 (*) [16])0x0) goto LAB_14192abb9;
    goto code_r0x00014192ab26;
  case 0x82:
  case 0x83:
code_r0x00014192aa46:
    pppppppuStack_550 = (undefined8 *******)0x14192aa5a;
    pub_1406abac0(pbStack_488,0x28,8);
    return extraout_RAX_05;
  case 0x85:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x86:
    goto code_r0x00014192ab3e;
  case 0x87:
    (*pauVar32)[0] = (*pauVar32)[0] + bVar42;
    arg0 = (undefined1 (*) [16])
           CONCAT71((int7)((ulonglong)arg0 >> 8),bVar43 + (char)((ulonglong)arg0 >> 8));
    pppppppuVar101 = &pppppppuStack_550;
    param_1 = (undefined1 (*) [16])&UNK_143359e48;
    pppppppuStack_550 = pppppppuVar110;
    goto code_r0x00014192ce67;
  case 0x88:
  case 0x89:
code_r0x00014192ce2c:
    pcVar33 = (char *)(CONCAT71((int7)((ulonglong)pauVar32 >> 8),
                                *(undefined1 *)((longlong)*param_2 + ((ulonglong)pauVar32 & 0xff)))
                      + -0x75);
    *pcVar33 = *pcVar33 + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x8a:
code_r0x00014192ce67:
    unaff_R12 = (undefined1 (*) [16])0x118;
    ppcVar104 = (char **)pppppppuVar101;
    goto code_r0x00014192ce70;
  case 0x8b:
    UNK_143359fc0 = UNK_143359fc0 + cVar24;
    bVar121 = UNK_143359fc0 == '\0';
    arg0 = param_3;
    goto code_r0x00014192ce46;
  case 0x8c:
    param_2 = (undefined1 (*) [16])CONCAT62(uVar58,CONCAT11(0xb9,bVar116));
    (*arg0)[0] = (*arg0)[0] + bVar42 + (0xfffffffebcca61b7 < uVar44);
    (*pauVar32)[0] = (*pauVar32)[0] + bVar42;
    goto code_r0x00014192ce7c;
  case 0x8d:
    return pauVar32;
  case 0x8e:
  case 0x8f:
    return pauVar32;
  case 0x90:
    auStack_520[0] = 0;
    pauStack_510 = (undefined1 (*) [16])0x0;
    goto code_r0x00014192d0dd;
  case 0x91:
    pppppppuStack_550 = (undefined8 *******)0x14192d094;
    pauVar117 = (undefined1 (*) [16])pdb_140f60be0();
    (*pauVar39)[0] = 3;
    return pauVar117;
  case 0x92:
    iRam0000000182575442 = iRam0000000182575442 + iVar27;
    return pauVar32;
  case 0x93:
    uStack_4b8 = 0;
    uStack_4a8 = (code *)0x0;
    goto code_r0x00014192d360;
  case 0x94:
  case 0x95:
    bVar121 = *(byte *)((longlong)pauVar32[-8] + 9) < bVar43;
code_r0x00014192d316:
    bVar42 = (*param_1)[0];
    bVar43 = (*param_1)[0] + (byte)arg0;
    (*param_1)[0] = bVar43 + bVar121;
    uStack_4b8 = CONCAT31(uStack_4b8._1_3_,
                          (char)uStack_4b8 + (char)pauVar32 +
                          (CARRY1(bVar42,(byte)arg0) || CARRY1(bVar43,bVar121)));
code_r0x00014192d31c:
    *arg0 = auVar125;
    uStack_498 = 3;
    ppcVar109 = &pcStack_548;
    goto code_r0x00014192d380;
  case 0x96:
    (*pauVar115)[0] = (*pauVar115)[0] & (byte)pauVar115;
    (*pauVar32)[0] = (*pauVar32)[0] + bVar42;
    pcVar33 = (char *)((longlong)pauVar32[-8] + 0xb);
    *pcVar33 = *pcVar33 + bVar43;
    pbVar10 = (byte *)((longlong)pauVar115[-8] + 0xd);
    bVar116 = (byte)pauVar117;
    *pbVar10 = *pbVar10 & bVar116;
    bVar121 = *(byte *)((longlong)pauVar115[-8] + 9) < bVar116;
    pbVar10 = (byte *)((longlong)pauVar115[-8] + 0xb);
    bVar42 = *pbVar10;
    bVar52 = *pbVar10;
    *pbVar10 = bVar52 + bVar43 + bVar121;
    pcVar33 = (char *)((longlong)pauVar115[-8] + 9);
    *pcVar33 = *pcVar33 + bVar116 + (CARRY1(bVar42,bVar43) || CARRY1(bVar52 + bVar43,bVar121));
    ppcVar109 = &pcStack_548;
    goto code_r0x00014192d372;
  case 0x97:
    if ((POPCOUNT((ulonglong)arg0 & 0xff) & 1U) != 0) {
      cStack_500 = cStack_500 + -0x62;
      goto code_r0x00014192d32d;
    }
    goto code_r0x00014192d341;
  case 0x98:
    goto code_r0x00014192d383;
  }
code_r0x000141920f92:
  pppppppuStack_550 = (undefined8 *******)0x141920fa5;
  pdb_1414fe290(&uStack_1f8,auStack_338);
  if ((char)uStack_1f8 == '\0') {
    uStack_178 = uStack_1f8._4_4_;
  }
  else {
    pauStack_3f8 = pauStack_1f0;
    iStack_400 = 1;
    uStack_178 = 0x19;
    pppppppuStack_550 = (undefined8 *******)0x141920fdd;
    pdb_1404b4b10(&pauStack_3f8);
  }
  arg0 = (undefined1 (*) [16])&UNK_14335920b;
  pauVar115 = (undefined1 (*) [16])acStack_158;
code_r0x000141920ffa:
  pppppppuStack_550 = (undefined8 *******)0x141921004;
  pauVar32 = (undefined1 (*) [16])pdb_141c0c220(arg0,6);
  pppppppuVar79 = (undefined8 *******)&pcStack_548;
  if (pauVar32 == (undefined1 (*) [16])0x0) {
    pauVar32 = _DAT_143cad928;
    pppppppuVar79 = (undefined8 *******)&pcStack_548;
  }
code_r0x000141921011:
  pauVar54 = (undefined1 (*) [16])&UNK_143359e60;
  uVar44 = (ulonglong)*(int *)(&UNK_143359e60 + (ulonglong)(byte)(*pauVar32)[0] * 4);
  bVar121 = 0xfffffffebcca619f < uVar44;
  arg0 = (undefined1 (*) [16])(&UNK_143359e60 + uVar44);
  bVar122 = arg0 != (undefined1 (*) [16])0x0;
  bVar42 = (byte)arg0;
  uVar29 = (uint)arg0;
  cVar25 = (char)pauVar32;
  uVar41 = (uint7)((ulonglong)pauVar32 >> 8);
  iVar27 = (int)pauVar32;
  bVar43 = (byte)pauVar117;
  pauVar50 = arg0;
  ppcVar71 = (char **)pppppppuVar79;
  ppcVar86 = (char **)pppppppuVar79;
  ppcVar82 = (char **)pppppppuVar79;
  ppcVar20 = (char **)pppppppuVar79;
  ppcVar81 = (char **)pppppppuVar79;
  ppcVar68 = (char **)pppppppuVar79;
  ppcVar109 = (char **)pppppppuVar79;
  ppcVar92 = (char **)pppppppuVar79;
  ppcVar78 = (char **)pppppppuVar79;
  ppcVar61 = (char **)pppppppuVar79;
  ppcVar59 = (char **)pppppppuVar79;
  ppcVar108 = (char **)pppppppuVar79;
  ppcVar104 = (char **)pppppppuVar79;
  ppcVar21 = (char **)pppppppuVar79;
  ppcVar94 = (char **)pppppppuVar79;
  ppcVar60 = (char **)pppppppuVar79;
  ppcVar62 = (char **)pppppppuVar79;
  ppcVar84 = (char **)pppppppuVar79;
  ppcVar103 = (char **)pppppppuVar79;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((*pauVar32)[0]) {
  case 0:
    *(undefined1 *)(pppppppuVar110 + 0x32) = 0;
    break;
  case 1:
  case 2:
code_r0x000141921024:
    ppppppuVar31 = *(undefined8 *******)*pauVar32;
    ppppppuVar47 = *(undefined8 *******)((longlong)*pauVar32 + 8);
    ppppppuVar46 = *(undefined8 *******)((longlong)pauVar32[1] + 8);
    pppppppuVar110[0x34] = *(undefined8 *******)pauVar32[1];
    pppppppuVar110[0x35] = ppppppuVar46;
    pppppppuVar110[0x32] = ppppppuVar31;
    pppppppuVar110[0x33] = ppppppuVar47;
    ppcVar62 = ppcVar59;
    break;
  case 3:
code_r0x00014192106a:
    *(undefined8 *)((longlong)ppcVar61 + -8) = 0x14192107d;
    pdb_140f60be0(pppppppuVar110 + 0x33,(undefined8 *)((longlong)*pauVar32 + 8));
    *(undefined1 *)(pppppppuVar110 + 0x32) = 3;
    ppcVar62 = ppcVar61;
    break;
  case 4:
code_r0x00014192103e:
    *(undefined8 *)((longlong)ppcVar60 + -8) = 0x141921051;
    pdb_1415e5d30(pppppppuVar110 + 0x33,(undefined8 *)((longlong)*pauVar32 + 8));
code_r0x000141921052:
    *(undefined1 *)(pppppppuVar110 + 0x32) = 4;
    ppcVar62 = ppcVar60;
    break;
  case 5:
    if (*(longlong *)((longlong)pauVar32[1] + 8) == 0) {
      pppppppuVar110[0x5a] = (undefined8 ******)0x0;
      pppppppuVar110[0x5c] = (undefined8 ******)0x0;
    }
    else {
      lVar56 = *(longlong *)((longlong)*pauVar32 + 8);
      if (lVar56 == 0) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)pppppppuVar79 + -8) = 0x141922f3a;
        pdb_142dc8150(&UNK_143359d48);
      }
      uVar30 = *(undefined8 *)pauVar32[1];
      *(undefined8 *)((longlong)pppppppuVar79 + -8) = 0x1419210ab;
      pdb_14192d190(pppppppuVar110 + 0x5a,lVar56,uVar30);
    }
    pppppppuVar110[0x35] = pppppppuVar110[0x5c];
    pppppppuVar110[0x33] = pppppppuVar110[0x5a];
    pppppppuVar110[0x34] = pppppppuVar110[0x5b];
    *(undefined1 *)(pppppppuVar110 + 0x32) = 5;
    break;
  case 6:
  case 0xc:
  case 0xd:
    goto code_r0x000141922084;
  case 7:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 8:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 9:
  case 0xb:
code_r0x00014192206d:
    piVar2 = (int *)((longlong)arg0[-8] + 3);
    *piVar2 = *piVar2 + (int)arg0 + (uint)bVar121;
    pbVar10 = (byte *)((longlong)param_3[1] + 9);
    *pbVar10 = *pbVar10 | (byte)((ulonglong)pauVar54 >> 8);
code_r0x000141922074:
                    /* WARNING: Could not recover jumptable at 0x000141922082. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pauVar39 = (undefined1 (*) [16])
               (*(code *)(&UNK_143359e78 + *(int *)(&UNK_143359e78 + (longlong)pauVar117 * 4)))
                         (arg0,pauVar54,
                          &UNK_143359e78 + *(int *)(&UNK_143359e78 + (longlong)pauVar117 * 4));
    return pauVar39;
  case 10:
    *(undefined1 (**) [16])((longlong)pppppppuVar79 + -8) = arg0;
    halt_baddata();
  case 0xe:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xf:
  case 0x15:
  case 0x16:
    pcVar33 = (char *)((longlong)pauVar32[-4] + 7);
    *pcVar33 = *pcVar33 + bVar42;
    (*pauVar32)[0] = (*pauVar32)[0] + cVar25;
    (*pauVar32)[0] = (*pauVar32)[0] + cVar25;
    (*pauVar32)[0] = (*pauVar32)[0] + cVar25;
    goto code_r0x000141921ce7;
  case 0x10:
    goto code_r0x000141921d1b;
  case 0x11:
    (*pauVar32)[0] = (*pauVar32)[0] + cVar25;
    *(char *)(uVar44 + 0x1951e9f74) = *(char *)(uVar44 + 0x1951e9f74) + bVar42;
    halt_baddata();
  case 0x12:
  case 0x14:
    pbVar10 = &UNK_143359e5f + uVar44;
    *pbVar10 = *pbVar10 << 1 | (char)*pbVar10 < '\0';
    goto code_r0x000141922084;
  case 0x13:
    pbVar10 = (byte *)((longlong)param_3[1] + 0xd);
    *pbVar10 = *pbVar10 | 0x9e;
code_r0x0001419220ad:
                    /* WARNING: Could not recover jumptable at 0x0001419220bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pauVar39 = (undefined1 (*) [16])
               (*(code *)(&UNK_143359e9c + *(int *)(&UNK_143359e9c + (longlong)pauVar115 * 4)))
                         (arg0,&UNK_143359e9c + *(int *)(&UNK_143359e9c + (longlong)pauVar115 * 4));
    return pauVar39;
  case 0x17:
code_r0x0001419220d4:
    uVar142 = SUB84(pauVar54,0);
    (*pauVar32)[0] = (*pauVar32)[0] + (char)pauVar32;
    bVar121 = (*pauVar32)[0] == '\0';
    goto code_r0x0001419220d6;
  case 0x18:
  case 0x1e:
  case 0x1f:
code_r0x0001419223a4:
    *(int *)((longlong)pppppppuVar110 + 1) = *(int *)((longlong)pppppppuVar110 + 1) + (int)arg0;
code_r0x0001419223a5:
                    /* WARNING: Could not recover jumptable at 0x0001419223a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pauVar39 = (undefined1 (*) [16])(*(code *)((longlong)*param_1 + (longlong)*unaff_R13))();
    return pauVar39;
  case 0x19:
    (*pauVar32)[0] = (*pauVar32)[0] << 6 | (byte)(CONCAT11(bVar121,(*pauVar32)[0]) >> 3);
    goto code_r0x0001419223d0;
  case 0x1a:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x1b:
  case 0x1d:
    *(int *)(&UNK_143359de3 + uVar44) = *(int *)(&UNK_143359de3 + uVar44) + -1;
    return pauVar32;
  case 0x1c:
    goto code_r0x0001419223c5;
  case 0x20:
    param_2 = (undefined1 (*) [16])(ulonglong)((int)param_2 - 0x700);
    goto code_r0x0001419223d0;
  case 0x21:
  case 0x27:
  case 0x28:
    pauVar32 = (undefined1 (*) [16])0x43359e50;
    ppcVar77 = (char **)pppppppuVar79;
code_r0x00014192715c:
    arg0 = pauVar32;
    pppppppuVar79 = (undefined8 *******)ppcVar77;
    if (((ulonglong)pauVar115 & 0x10) == 0) {
      arg0 = (undefined1 (*) [16])(ulonglong)*(uint *)((longlong)*pauVar32 + 8);
      ppcVar78 = ppcVar77;
code_r0x00014192716c:
      ppcVar80 = ppcVar78;
      if ((undefined1 (*) [16])0x8 < arg0) goto LAB_1419271cd;
      goto code_r0x000141927172;
    }
    goto LAB_14192721e;
  case 0x22:
    *(uint *)((longlong)pppppppuVar110 + 1) = uVar29;
    return pauVar32;
  case 0x23:
    goto code_r0x000141927183;
  case 0x24:
  case 0x26:
    *(undefined4 *)(pppppppuVar110 + 0xdd) = 0x26;
code_r0x0001419270de:
    pppppppuVar110[0xda] = (undefined8 ******)&UNK_143359270;
    pppppppuVar110[0xdb] = (undefined8 ******)0x26;
    pppppppuVar110[0xdc] = (undefined8 ******)&UNK_143359270;
    pppppppuVar110[0xdd] = (undefined8 ******)0x26;
    pppppppuVar110[0xde] = (undefined8 ******)&UNK_1433597b0;
    *(undefined1 *)((longlong)pppppppuVar110 + 0xb91) = 1;
    pauVar117 = (undefined1 (*) [16])(pppppppuVar110 + 0xda);
    *(undefined8 *)((longlong)pppppppuVar79 + -8) = 0x14192713c;
    pdb_1400c9be0(&UNK_143359778,0x6d,3);
LAB_14192713d:
    pauVar54 = (undefined1 (*) [16])pppppppuVar110[0x47];
    ppcVar74 = (char **)pppppppuVar79;
code_r0x000141927144:
    ppcVar73 = ppcVar74;
    if (pauVar54 != (undefined1 (*) [16])0x0) {
      pauVar32 = (undefined1 (*) [16])pppppppuVar110[0x46];
      ppcVar75 = ppcVar74;
code_r0x000141927154:
      pauVar54 = (undefined1 (*) [16])((longlong)pauVar54 << 4);
      ppcVar76 = ppcVar75;
code_r0x000141927158:
      pauVar115 = pauVar54 + -1;
      ppcVar77 = ppcVar76;
      goto code_r0x00014192715c;
    }
    goto LAB_1419272f6;
  case 0x25:
code_r0x000141927174:
    ppcVar78 = ppcVar81;
    pauVar32 = (undefined1 (*) [16])(ulonglong)((uint)pauVar32 | 0x1a32d6b);
    goto code_r0x000141927172;
  case 0x29:
code_r0x00014192718c:
    (*pauVar32)[0] = (*pauVar32)[0] + (char)pauVar32;
    goto LAB_14192718e;
  case 0x2a:
  case 0x30:
  case 0x31:
code_r0x0001419271d1:
    ppcVar80 = ppcVar20;
    (*pauVar32)[0] = (*pauVar32)[0] + (char)pauVar32;
LAB_1419271cd:
    pauVar117 = (undefined1 (*) [16])0x1;
    ppcVar81 = ppcVar80;
    pppppppuVar79 = (undefined8 *******)ppcVar80;
    if ((int)arg0 != 999) goto LAB_141927216;
    goto code_r0x0001419271db;
  case 0x2b:
    arg0 = (undefined1 (*) [16])0x43359e60;
    goto LAB_14192723d;
  case 0x2c:
    pbVar10 = (byte *)((longlong)pauVar32[-8] + 0xd);
    bVar43 = *pbVar10;
    *pbVar10 = *pbVar10 + bVar42;
    (&UNK_143359ea8)[(longlong)arg0 * 4 + uVar44] =
         (&UNK_143359ea8)[(longlong)arg0 * 4 + uVar44] + cVar25 + CARRY1(bVar43,bVar42);
  case 0x32:
    *(byte *)((longlong)pppppppuVar110 + -0x7b) =
         *(byte *)((longlong)pppppppuVar110 + -0x7b) | bVar42;
    (*param_3)[0] = (byte)(*param_3)[0] >> 4 | (*param_3)[0] << 4;
code_r0x000141927223:
    return pauVar32;
  case 0x2d:
  case 0x2f:
code_r0x0001419271ba:
    bVar42 = (byte)pauVar32 | (*pauVar32)[0];
    pcVar33 = (char *)CONCAT71((int7)((ulonglong)pauVar32 >> 8),bVar42);
    *pcVar33 = *pcVar33 + bVar42;
    *pcVar33 = *pcVar33 + bVar42;
    pcVar33[-0x75] = pcVar33[-0x75] + (char)arg0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x2e:
code_r0x000141927205:
code_r0x000141927207:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x33:
  case 0x39:
  case 0x3a:
code_r0x00014192716e:
    pbVar10 = (byte *)((longlong)param_3[5] + 0xb);
    *pbVar10 = *pbVar10 | (byte)((ulonglong)pauVar54 >> 8);
code_r0x000141927172:
    pppppppuVar79 = (undefined8 *******)ppcVar78;
    ppcVar81 = ppcVar78;
    switch(&UNK_143359ee4 + *(int *)(&UNK_143359ee4 + (longlong)arg0 * 4)) {
    case (undefined *)0x141927183:
code_r0x000141927183:
      pauVar117 = (undefined1 (*) [16])0x3;
      break;
    case (undefined *)0x1419271db:
code_r0x0001419271db:
      pauVar117 = (undefined1 (*) [16])((ulonglong)arg0 & 0xffffffff);
      pppppppuVar79 = (undefined8 *******)ppcVar81;
      break;
    case (undefined *)0x1419271f8:
      pauVar117 = (undefined1 (*) [16])0x8;
      break;
    case (undefined *)0x141927200:
code_r0x000141927200:
      pauVar117 = (undefined1 (*) [16])0x2;
      break;
    case (undefined *)0x141927208:
      pauVar117 = (undefined1 (*) [16])0x5;
      break;
    case (undefined *)0x141927210:
      pauVar117 = (undefined1 (*) [16])0x4;
    }
LAB_141927216:
    arg0 = pauVar32 + 1;
    *(int *)((longlong)*pauVar32 + 8) = (int)pauVar117;
    goto LAB_14192721e;
  case 0x34:
LAB_14192721e:
    ppcVar73 = (char **)pppppppuVar79;
    if (pauVar115 != (undefined1 (*) [16])0x0) {
      pauVar32 = (undefined1 (*) [16])((longlong)*pauVar54 + (longlong)*pauVar32);
      pauVar54 = (undefined1 (*) [16])&UNK_143359f2c;
      pauVar115 = (undefined1 (*) [16])&UNK_143359f08;
      ppcVar84 = (char **)pppppppuVar79;
LAB_14192724e:
      do {
        in_R10 = (undefined1 (*) [16])(ulonglong)*(uint *)((longlong)*arg0 + 8);
        ppcVar85 = ppcVar84;
        if (in_R10 < (undefined1 (*) [16])0x9) {
                    /* WARNING: Could not recover jumptable at 0x00014192725f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          pauVar39 = (undefined1 (*) [16])
                     (*(code *)((longlong)*pauVar115 +
                               (longlong)*(int *)((longlong)*pauVar115 + (longlong)in_R10 * 4)))();
          return pauVar39;
        }
LAB_14192726a:
        pauVar117 = (undefined1 (*) [16])0x1;
        ppcVar86 = ppcVar85;
        if ((int)in_R10 == 999) {
          pauVar117 = (undefined1 (*) [16])((ulonglong)in_R10 & 0xffffffff);
        }
LAB_14192727c:
        *(int *)((longlong)*arg0 + 8) = (int)pauVar117;
        in_R10 = (undefined1 (*) [16])(ulonglong)*(uint *)((longlong)arg0[1] + 8);
        pppppppuVar79 = (undefined8 *******)ppcVar86;
        if (in_R10 < (undefined1 (*) [16])0x9) goto code_r0x00014192728a;
LAB_14192729c:
        pauVar117 = (undefined1 (*) [16])0x1;
        ppcVar84 = (char **)pppppppuVar79;
        if ((int)in_R10 == 999) {
          pauVar117 = (undefined1 (*) [16])((ulonglong)in_R10 & 0xffffffff);
        }
LAB_14192723d:
        *(int *)((longlong)arg0[1] + 8) = (int)pauVar117;
        arg0 = arg0 + 2;
        ppcVar73 = ppcVar84;
      } while (arg0 != pauVar32);
    }
LAB_1419272f6:
    uVar29 = (uint)unaff_R12;
    if (pppppppuVar110[0x41] != (undefined8 ******)0x0) {
      arg0 = (undefined1 (*) [16])pppppppuVar110[0x40];
      pauVar32 = (undefined1 (*) [16])((longlong)pppppppuVar110[0x41] * 5);
      pppppppuVar79 = (undefined8 *******)ppcVar73;
code_r0x000141927311:
      pauVar115 = (undefined1 (*) [16])((longlong)*arg0 + pauVar32 * 8);
      pauVar117 = (undefined1 (*) [16])0x2492492492492493;
      in_R10 = (undefined1 (*) [16])&UNK_143359f50;
      in_R11 = (undefined1 (*) [16])&UNK_143359f74;
      ppcVar87 = (char **)pppppppuVar79;
code_r0x00014192732d:
      pauVar39 = (undefined1 (*) [16])&UNK_143359f98;
      pppppppuVar79 = (undefined8 *******)ppcVar87;
LAB_141927343:
      do {
        uVar44 = *(ulonglong *)arg0[2];
code_r0x000141927347:
        if (uVar44 != 0) {
          param_2 = (undefined1 (*) [16])(uVar44 * 0x70);
code_r0x000141927350:
          unaff_R13 = param_2 + -7;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulonglong)unaff_R13 >> 4;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = pauVar117;
          pauVar32 = *(undefined1 (**) [16])((longlong)arg0[1] + 8);
          ppcVar88 = (char **)pppppppuVar79;
          param_3 = pauVar32;
          if ((SUB168(auVar12 * auVar13,8) & 1) == 0) {
code_r0x00014192736a:
            param_3 = pauVar32 + 7;
            pppppppuVar79 = (undefined8 *******)ppcVar88;
            ppcVar89 = ppcVar88;
            if (*(uint *)((longlong)*pauVar32 + 8) < 3) {
code_r0x000141927374:
              param_4 = (undefined1 (*) [16])(ulonglong)*(uint *)((longlong)pauVar32[4] + 8);
              pppppppuVar79 = (undefined8 *******)ppcVar89;
              if (param_4 < (undefined1 (*) [16])0x9) goto code_r0x00014192737e;
LAB_14192738e:
              uVar139 = 1;
              ppcVar90 = (char **)pppppppuVar79;
              if ((int)param_4 == 999) {
code_r0x00014192739c:
                uVar139 = SUB84(param_4,0);
                pppppppuVar79 = (undefined8 *******)ppcVar90;
              }
LAB_14192739f:
              *(undefined4 *)((longlong)pauVar32[4] + 8) = uVar139;
              param_4 = (undefined1 (*) [16])pppppppuVar110[0x160];
            }
          }
LAB_1419273a9:
          if ((undefined1 (*) [16])0x6f < unaff_R13) {
            pauVar32 = (undefined1 (*) [16])((longlong)*param_2 + (longlong)*pauVar32);
            do {
              if (*(uint *)((longlong)*param_3 + 8) < 3) {
                uVar29 = *(uint *)((longlong)param_3[4] + 8);
                if ((ulonglong)uVar29 < 9) {
                  UNRECOVERED_JUMPTABLE =
                       (code *)((longlong)*in_R11 +
                               (longlong)*(int *)((longlong)*in_R11 + (ulonglong)uVar29 * 4));
                    /* WARNING: Could not recover jumptable at 0x0001419273e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  pauVar39 = (undefined1 (*) [16])
                             (*UNRECOVERED_JUMPTABLE)(arg0,UNRECOVERED_JUMPTABLE);
                  return pauVar39;
                }
                uVar139 = 1;
                if (uVar29 == 999) {
                  uVar139 = 999;
                }
                *(undefined4 *)((longlong)param_3[4] + 8) = uVar139;
                uVar29 = *(uint *)((longlong)param_3[7] + 8);
              }
              else {
                uVar29 = *(uint *)((longlong)param_3[7] + 8);
              }
              if (uVar29 < 3) {
                uVar29 = *(uint *)((longlong)param_3[0xb] + 8);
                if ((ulonglong)uVar29 < 9) {
                  UNRECOVERED_JUMPTABLE =
                       (code *)((longlong)*pauVar39 +
                               (longlong)*(int *)((longlong)*pauVar39 + (ulonglong)uVar29 * 4));
                    /* WARNING: Could not recover jumptable at 0x000141927423. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  pauVar39 = (undefined1 (*) [16])
                             (*UNRECOVERED_JUMPTABLE)(arg0,UNRECOVERED_JUMPTABLE);
                  return pauVar39;
                }
                uVar139 = 1;
                if (uVar29 == 999) {
                  param_2 = (undefined1 (*) [16])0x3e7;
LAB_1419273b4:
                  uVar139 = SUB84(param_2,0);
                }
                *(undefined4 *)((longlong)param_3[0xb] + 8) = uVar139;
              }
              param_3 = param_3 + 0xe;
            } while (param_3 != pauVar32);
          }
        }
        arg0 = (undefined1 (*) [16])((longlong)arg0[2] + 8);
        ppcVar73 = (char **)pppppppuVar79;
code_r0x00014192733a:
        uVar29 = (uint)unaff_R12;
        pppppppuVar79 = (undefined8 *******)ppcVar73;
      } while (arg0 != pauVar115);
    }
LAB_1419274ae:
    *(undefined8 *)((longlong)ppcVar73 + -8) = 0x1419274ca;
    pub_142e32760(pppppppuVar110 + 0x7a,pppppppuVar110 + 0x34,0x1f8);
    param_3 = (undefined1 (*) [16])(pppppppuVar110 + 0xda);
    ppppppuVar31 = pppppppuVar110[0x19a];
    *(undefined8 *)((longlong)ppcVar73 + -8) = 0x1419274e6;
    pub_142e32760(param_3,ppppppuVar31,0x300);
    *(undefined1 *)((longlong)pppppppuVar110 + 0xb91) = 0;
    pauVar54 = (undefined1 (*) [16])pppppppuVar110[0x13c];
    *(undefined8 *)((longlong)ppcVar73 + -8) = 0x1419274ff;
    pdb_141bf3100(pppppppuVar110 + 0x7a,pauVar54,param_3);
    pauVar39 = (undefined1 (*) [16])pppppppuVar110[0x16c];
    *(uint *)((longlong)param_4[6] + 8) = uVar29;
    ppppppuVar31 = *(undefined8 *******)param_4[1];
    *(int *)(pppppppuVar110 + 0x164) = (int)param_1;
    if ((int)ppppppuVar31 <= (int)uVar29) {
      if (1 < *(ulonglong *)*_DAT_143ca8e90) {
        pppppppuVar110[0x153] = ppppppuVar31;
        pppppppuVar110[0x7a] = pppppppuVar110 + 0x153;
        pppppppuVar110[0x7b] = (undefined8 ******)pdb_140f72a40;
        pppppppuVar110[0x7c] = pppppppuVar110 + 0x159;
        pppppppuVar110[0x7d] = (undefined8 ******)pdb_140bbbec0;
        pppppppuVar110[0xda] = (undefined8 ******)&UNK_143359270;
        pppppppuVar110[0xdb] = (undefined8 ******)0x26;
        pppppppuVar110[0xdc] = (undefined8 ******)&UNK_143359270;
        pppppppuVar110[0xdd] = (undefined8 ******)0x26;
        pppppppuVar110[0xde] = (undefined8 ******)&UNK_143359828;
        *(undefined1 *)((longlong)pppppppuVar110 + 0xb91) = 0;
        pauVar117 = (undefined1 (*) [16])(pppppppuVar110 + 0xda);
        *(undefined8 *)((longlong)ppcVar73 + -8) = 0x1419275d2;
        pdb_1400c9be0(&UNK_1433597c8,pppppppuVar110 + 0x7a,2);
      }
      *(undefined1 *)((longlong)pppppppuVar110 + 0xb91) = 0;
      *(undefined8 *)((longlong)ppcVar73 + -8) = 0x1419275e5;
      pauVar54 = pauVar39;
      pdb_140ae4430(param_4);
      *(undefined4 *)(pppppppuVar110 + 0x164) = *(undefined4 *)((longlong)param_4[6] + 8);
    }
    ppcVar72 = ppcVar73;
    if (((ulonglong)param_1 >> 0x28 & 1) != 0) {
      pppppppuVar110[0x16a] = *(undefined8 *******)param_4[2];
      ppppppuVar31 = *(undefined8 *******)((longlong)param_4[2] + 8);
      *(undefined8 *)((longlong)param_4[2] + 8) = 0;
      pppppppuVar110[0x16f] = ppppppuVar31;
      if (ppppppuVar31 != (undefined8 ******)0x0) {
        ppppppuVar31 = pppppppuVar110[0x16f];
        param_3 = (undefined1 (*) [16])-(longlong)ppppppuVar31;
        ppppppuVar47 = (undefined8 ******)0x1;
        pauVar39 = (undefined1 (*) [16])pppppppuVar110[0x16a];
        do {
          pppppppuVar110[0x16c] = ppppppuVar47;
          plVar49 = *(longlong **)*pauVar39;
          LOCK();
          *plVar49 = *plVar49 + -1;
          UNLOCK();
          if (*plVar49 == 0) {
            *(undefined8 *)((longlong)ppcVar73 + -8) = 0x141927671;
            pdb_140315620(pauVar39);
          }
          ppppppuVar47 = (undefined8 ******)((longlong)pppppppuVar110[0x16c] + 1);
          pauVar39 = pauVar39 + 1;
        } while (pppppppuVar110[0x16c] != ppppppuVar31);
      }
    }
LAB_141925df4:
    pppppppuVar110[0x169] = pppppppuVar110[0x170];
    pppppppuVar110[0x165] = pppppppuVar110[0x16b];
    *(undefined1 *)((longlong)pppppppuVar110 + 0xb97) = 0;
    *(undefined8 *)((longlong)ppcVar72 + -8) = 0x141925e1c;
    pauVar32 = (undefined1 (*) [16])pdb_140f3bda0();
    if (pauVar32[1][0] == '\x01') {
      arg0 = *(undefined1 (**) [16])*pauVar32;
      pauVar54 = *(undefined1 (**) [16])((longlong)*pauVar32 + 8);
    }
    else {
      pppppppuVar110[0x169] = pppppppuVar110[0x170];
      pppppppuVar110[0x165] = pppppppuVar110[0x16b];
      *(undefined1 *)((longlong)pppppppuVar110 + 0xb97) = 0;
      *(undefined8 *)((longlong)ppcVar72 + -8) = 0x1419276e7;
      arg0 = (undefined1 (*) [16])pdb_140f4fd10();
      *(undefined1 (**) [16])*pauVar32 = arg0;
      *(undefined1 (**) [16])((longlong)*pauVar32 + 8) = pauVar54;
      pauVar32[1][0] = 1;
      pauVar39 = pauVar32;
    }
    pauVar115 = (undefined1 (*) [16])((longlong)*arg0 + 1);
    *(undefined1 (**) [16])*pauVar32 = pauVar115;
code_r0x000141925e35:
    pppppppuVar110[0xdc] = _DAT_143359bb0;
    pppppppuVar110[0xdd] = _UNK_143359bb8;
    *(undefined1 (*) [16])(pppppppuVar110 + 0xda) = _DAT_143359ba0;
    pppppppuVar110[0xde] = (undefined8 ******)arg0;
    pppppppuVar110[0xdf] = (undefined8 ******)pauVar54;
    pppppppuVar79 = (undefined8 *******)ppcVar72;
    if (*(longlong *)param_4[1] != 0) {
      pauVar32 = (undefined1 (*) [16])pppppppuVar110[0x160][1];
      pppppppuVar110[0x15c] =
           (undefined8 ******)((longlong)pauVar32 + *(longlong *)param_4[1] * 0x28);
      param_2 = (undefined1 (*) [16])0x8000000000000001;
      param_4 = (undefined1 (*) [16])&UNK_143359d60;
      param_1 = (undefined1 (*) [16])(pppppppuVar110 + 0xda);
      ppcVar104 = ppcVar72;
      auVar125 = _DAT_143359ba0;
LAB_141925ec8:
      do {
        pppppppuVar110[0x16f] = (undefined8 ******)pauVar32;
        if (*(longlong *)pauVar32[1] != 0) {
          ppppppuVar31 = (undefined8 ******)pppppppuVar110[0x16f][1];
          pppppppuVar110[0x16a] = ppppppuVar31 + *(longlong *)pauVar32[1] * 3;
LAB_141925f38:
          pppppuVar35 = *ppppppuVar31;
          pppppppuVar110[0x16c] = ppppppuVar31;
          if (pppppuVar35 == (undefined8 *****)0x7) {
            param_3 = (undefined1 (*) [16])ppppppuVar31[1] + (longlong)ppppppuVar31[2];
            pauVar32 = (undefined1 (*) [16])ppppppuVar31[1];
            while (pauVar32 != param_3) {
              pauVar39 = pauVar32 + 1;
              plVar49 = *(longlong **)*pauVar32;
              plVar120 = plVar49 + *(longlong *)((longlong)*pauVar32 + 8);
              for (; pauVar32 = pauVar39, plVar49 != plVar120; plVar49 = plVar49 + 1) {
                lVar56 = *(longlong *)(*plVar49 + 0x10);
                uVar30 = *(undefined8 *)
                          (*plVar49 + 0x10 +
                          *(longlong *)
                           ((longlong)*param_4 + (lVar56 >> 0x3f & (longlong)*param_2 + lVar56) * 8)
                          );
                *(undefined8 *)((longlong)ppcVar104 + -8) = 0x14192601d;
                auVar125._0_8_ = pdb_1403b05d0(param_1,uVar30);
                auVar125._8_8_ = extraout_XMM0_Qb_03;
              }
            }
            goto LAB_141925f20;
          }
          iVar27 = (int)pppppuVar35;
          if (iVar27 == 8) {
            uVar30 = *(undefined8 *)
                      ((longlong)ppppppuVar31[1] +
                      *(longlong *)(&UNK_143359e08 + (ulonglong)*(byte *)(ppppppuVar31[1] + 2) * 8))
            ;
            *(undefined8 *)((longlong)ppcVar104 + -8) = 0x141925f1f;
            auVar125._0_8_ = pdb_1403b05d0(param_1,uVar30);
            auVar125._8_8_ = extraout_XMM0_Qb_01;
            goto LAB_141925f20;
          }
          if (iVar27 != 9) goto LAB_141925f20;
          pauVar32 = (undefined1 (*) [16])pppppppuVar110[0x16c][1];
          bVar42 = *(byte *)((longlong)pauVar32[1] + 8) - 3;
          if (*(byte *)((longlong)pauVar32[1] + 8) < 3) {
            bVar42 = 5;
          }
          pauVar54 = (undefined1 (*) [16])&UNK_143359fbc;
          uVar44 = (ulonglong)*(int *)(&UNK_143359fbc + (ulonglong)bVar42 * 4);
          bVar121 = 0xfffffffebcca6043 < uVar44;
          arg0 = (undefined1 (*) [16])(&UNK_143359fbc + uVar44);
          bVar43 = (byte)pauVar32;
          iVar27 = (int)pauVar32;
          uVar40 = (undefined7)((ulonglong)pauVar32 >> 8);
          bVar52 = (byte)arg0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(bVar42) {
          case 0:
          case 1:
          case 2:
          case 3:
          case 4:
          case 8:
            pauVar32 = pauVar32 + 2;
            goto code_r0x000141925f86;
          case 5:
            pauVar32 = pauVar32 + 1;
code_r0x000141925f86:
            uVar30 = *(undefined8 *)*pauVar32;
            *(undefined8 *)((longlong)ppcVar104 + -8) = 0x141925f91;
            auVar125._0_8_ = pdb_1403b05d0(param_1,uVar30);
            auVar125._8_8_ = extraout_XMM0_Qb_02;
LAB_141925f20:
            ppppppuVar31 = pppppppuVar110[0x16c] + 3;
            if (ppppppuVar31 == pppppppuVar110[0x16a]) goto LAB_141925eb0;
            goto LAB_141925f38;
          default:
            goto LAB_141925f20;
          case 0x12:
            arg0 = (undefined1 (*) [16])0x4335a004;
            goto code_r0x00014192a29d;
          case 0x13:
          case 0x14:
            pauVar39 = (undefined1 (*) [16])CONCAT71(uVar40,(bVar43 - (char)param_2) - bVar121);
            pcVar33 = pauVar39[0x20c4834] + 8;
            *pcVar33 = *pcVar33 + '\x01';
            return pauVar39;
          case 0x15:
            goto code_r0x00014192a29d;
          case 0x16:
            *(undefined4 *)(pppppppuVar110 + 0xc) = 0xfffffffe;
            pauVar32 = (undefined1 (*) [16])(ulonglong)UNK_143359fbc;
            arg0 = (undefined1 (*) [16])&UNK_14335a004;
            goto code_r0x00014192a29d;
          case 0x17:
            (*param_3)[0] = (byte)(*param_3)[0] >> 1 | (*param_3)[0] << 7;
            (*pauVar32)[0] = (*pauVar32)[0] + bVar43;
            *(char *)((longlong)pauVar32[-5] + 8) = *(char *)((longlong)pauVar32[-5] + 8) + bVar52;
            (*pauVar32)[0] = (*pauVar32)[0] + bVar43;
            (*pauVar32)[0] = (*pauVar32)[0] + bVar43;
            (*pauVar32)[0] = (*pauVar32)[0] + bVar43;
            *(char *)((longlong)pauVar32[-0x16f976c] + 8) =
                 *(char *)((longlong)pauVar32[-0x16f976c] + 8) + bVar43;
            *(int *)*pauVar32 = *(int *)*pauVar32 + iVar27;
            pcVar33 = (char *)((longlong)pauVar32[-8] + 3);
            *pcVar33 = *pcVar33 + bVar52;
            return pauVar32;
          case 0x18:
            in(0x9fbc);
            *(undefined8 *)((longlong)ppcVar104 + -8) = 0x14192a55a;
            func_0x00018992a55a();
          case 0x1b:
            *(undefined8 *)(((ulonglong)((longlong)ppcVar104 + 0x80) & 0xffffffff) + 0x60) =
                 0xfffffffffffffffe;
            param_2 = (undefined1 (*) [16])CONCAT71((int7)((ulonglong)param_2 >> 8),2);
            if (arg0 != (undefined1 (*) [16])0x0) {
              pauVar32 = (undefined1 (*) [16])(ulonglong)(byte)(*arg0)[0];
code_r0x00014192a577:
                    /* WARNING: Could not recover jumptable at 0x00014192a585. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              pauVar39 = (undefined1 (*) [16])
                         (*(code *)(&UNK_14335a01c +
                                   *(int *)(&UNK_14335a01c + (longlong)pauVar32 * 4)))();
              return pauVar39;
            }
            goto LAB_14192a776;
          case 0x19:
          case 0x1a:
            (*pauVar32)[0] = (*pauVar32)[0] + bVar43;
            ppppppuVar31 = pppppppuVar110[10];
            *(undefined8 *)((longlong)ppcVar104 + -8) = 0x14192a538;
            pub_1406abac0((byte *)ppppppuVar31,0x143359fbc,8);
            return extraout_RAX_03;
          case 0x1c:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 0x1d:
            (*param_3)[0] = (*param_3)[0] + bVar52;
            goto code_r0x00014192a577;
          case 0x1e:
            goto code_r0x00014192a7dd;
          case 0x1f:
          case 0x20:
            iRam5b38c4834890feb8 = iVar27;
            return pauVar32;
          case 0x21:
            *(char *)((longlong)pauVar32[0x38c4834] + 8) =
                 *(char *)((longlong)pauVar32[0x38c4834] + 8) + '\x01';
            return pauVar32;
          case 0x22:
            (*param_3)[0] = bVar43;
            (*pauVar32)[0] = (*pauVar32)[0];
            UNK_143359fe4 = UNK_143359fe4 + (char)((ulonglong)param_2 >> 8);
            pauVar115 = (undefined1 (*) [16])0x8;
            goto code_r0x00014192a7dd;
          case 0x23:
            LOCK();
            (*pauVar32)[0] = (*pauVar32)[0] + bVar43;
            UNLOCK();
            pcVar33 = (char *)((longlong)pauVar32[-8] + 0xd);
            *pcVar33 = *pcVar33 + bVar52;
            pcVar33 = (char *)(CONCAT71(uVar40,(*pauVar39)[0]) & 0xffffffffffffff80);
            *pcVar33 = *pcVar33 + (char)pcVar33;
            pcVar33[-0x39] = pcVar33[-0x39] + bVar52;
            *(undefined8 *)((longlong)ppcVar104 + -8) = 0xfffffffffffffffe;
                    /* WARNING: Could not recover jumptable at 0x00014192a823. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            pauVar39 = (undefined1 (*) [16])
                       (*(code *)(&UNK_14335a034 +
                                 *(int *)(&UNK_14335a034 + (ulonglong)UNK_143359fbc * 4)))();
            return pauVar39;
          case 0x24:
            goto code_r0x00014192ac74;
          case 0x25:
          case 0x26:
            goto LAB_14192abb9;
          case 0x27:
            goto code_r0x00014192ac8d;
          case 0x28:
            puVar1 = (uint *)((longlong)*pauVar32 + 1);
            *puVar1 = *puVar1 | 0xfe0ffc8;
            UNK_143359fbc = UNK_143359fbc + bVar43;
            pppppppuVar110[-2] = (undefined8 ******)CONCAT44(_UNK_143359fd0,_UNK_143359fcc);
            pppppppuVar110[-1] = _UNK_143359fd4;
            *(undefined1 (*) [16])(pppppppuVar110 + -4) = auVar125;
            *(undefined8 *)((longlong)ppcVar104 + -8) = 0x14192ac62;
            lVar56 = pdb_1414fff30(pppppppuVar110 + -4);
            if (lVar56 != 1) {
              return (undefined1 (*) [16])0x0;
            }
            pppppppuVar110[-5] = (undefined8 ******)pauVar54;
            *(undefined1 *)((longlong)pppppppuVar110 + 0x1f) = 1;
            goto code_r0x00014192ac74;
          case 0x29:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 0x2a:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 0x2b:
          case 0x2c:
            (*pauVar32)[0] = ((*pauVar32)[0] + -1) - bVar121;
            (*pauVar32)[0] = (*pauVar32)[0] + bVar43;
            do {
              uVar44 = *(ulonglong *)
                        (*(longlong *)
                          (*(longlong *)
                            (*(longlong *)
                              (*(longlong *)(*(longlong *)((longlong)param_3[0x11] + 8) + 0x118) +
                              0x118) + 0x118) + 0x118) + 0x118);
code_r0x00014192cfba:
              param_3 = *(undefined1 (**) [16])(*(longlong *)(uVar44 + 0x118) + 0x118);
              arg0 = (undefined1 (*) [16])((longlong)arg0[-1] + 8);
            } while (arg0 != (undefined1 (*) [16])0x0);
            pauVar117 = *(undefined1 (**) [16])*param_3;
            if (pauVar117 != (undefined1 (*) [16])0x0) {
              param_4 = (undefined1 (*) [16])0x118;
              do {
                bVar121 = param_2 == (undefined1 (*) [16])0x0;
                arg0 = param_3;
                param_3 = pauVar117;
code_r0x00014192ce16:
                param_2 = (undefined1 (*) [16])((longlong)*param_2 + 1);
                pauVar117 = (undefined1 (*) [16])0x178;
                if (bVar121) {
                  pauVar117 = param_4;
                }
                *(undefined **)((longlong)ppcVar104 + -8) = &UNK_14192ce2e;
                pub_1406abac0((byte *)arg0,(ulonglong)pauVar117,8);
                pauVar117 = *(undefined1 (**) [16])*param_3;
              } while (pauVar117 != (undefined1 (*) [16])0x0);
            }
            bVar121 = param_2 == (undefined1 (*) [16])0x0;
            pauVar32 = (undefined1 (*) [16])0x118;
            pauVar54 = (undefined1 (*) [16])0x178;
            ppcVar100 = ppcVar104;
            arg0 = param_3;
            goto code_r0x00014192ce46;
          case 0x2d:
            (*pauVar32)[0] = (*pauVar32)[0] + bVar43;
            goto code_r0x00014192cfd3;
          case 0x2e:
            uVar44 = (ulonglong)*(uint *)((longlong)pauVar32[0x11] + 8);
            goto code_r0x00014192cfba;
          case 0x2f:
            uVar29 = *(uint *)((longlong)pauVar32[-8] + 0xd);
                    /* WARNING: Subroutine does not return */
            *(undefined **)((longlong)ppcVar104 + -8) = &UNK_14192d00b;
            bRam0f900149b154e801 = bVar43;
            pdb_142dc8150((uint)arg0 | uVar29);
          case 0x30:
            cVar24 = bVar43 + 5 + bVar121;
            pauVar32 = (undefined1 (*) [16])CONCAT71(uVar40,cVar24);
            (*pauVar32)[0] = (*pauVar32)[0] + cVar24;
            break;
          case 0x31:
          case 0x32:
            (&UNK_14335a294)[uVar44] = (&UNK_14335a294)[uVar44] + '\x01';
            *(undefined8 *)((longlong)ppcVar104 + -8) = 0x14192d201;
            pauVar32 = (undefined1 (*) [16])pub_1406abab0((ulonglong)arg0,8);
            if (pauVar32 == (undefined1 (*) [16])0x0) {
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)((longlong)ppcVar104 + -8) = 0x14192d746;
              pdb_142dc7e11(8,0x2d8);
            }
            *(undefined8 *)pauVar32[0x16] = 0;
            goto code_r0x00014192d215;
          case 0x33:
            *(int *)param_2[0x16] = iVar27;
            break;
          case 0x34:
            (*param_3)[0] = (byte)(*param_3)[0] >> 4 | (*param_3)[0] << 4;
            pauVar32 = (undefined1 (*) [16])(ulonglong)(iVar27 + 0xb7fffffb);
            *(undefined4 *)pauVar32[0x16] = 0;
code_r0x00014192d215:
            *(undefined2 *)((longlong)pauVar32[0x27] + 2) = 0;
            *(undefined1 (**) [16])((longlong)pauVar32[0x27] + 8) = param_2;
            arg0 = (undefined1 (*) [16])((longlong)*param_1 + 1);
            pppppppuVar110[-8] = (undefined8 ******)pauVar32;
            if (arg0 == (undefined1 (*) [16])0x0) {
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)((longlong)ppcVar104 + -8) = 0x14192d755;
              pdb_142dc8150(&UNK_1433a43e8);
            }
            break;
          case 0x35:
            goto code_r0x00014192d265;
          case 0x36:
            *(int *)((longlong)pppppppuVar110 + -2) =
                 (*(int *)((longlong)pppppppuVar110 + -2) - (int)pauVar39) - (uint)bVar121;
            arg0 = (undefined1 (*) [16])0x278;
            pauVar54 = (undefined1 (*) [16])0x8;
            goto code_r0x00014192d4d2;
          case 0x37:
          case 0x38:
            pbVar10 = (byte *)((longlong)pauVar117[-2] + (longlong)arg0 * 4 + 0xe);
            *pbVar10 = *pbVar10 | (byte)pauVar117;
            goto code_r0x00014192d48c;
          case 0x39:
            (*pauVar32)[0] = (*pauVar32)[0] | bVar43;
            (*pauVar32)[0] = (*pauVar32)[0] + bVar43;
code_r0x00014192d4d2:
            *(undefined8 *)((longlong)ppcVar104 + -8) = 0x14192d4d7;
            pauVar32 = (undefined1 (*) [16])pub_1406abab0((ulonglong)arg0,(ulonglong)pauVar54);
            if (pauVar32 == (undefined1 (*) [16])0x0) {
                    /* WARNING: Subroutine does not return */
              *(undefined8 *)((longlong)ppcVar104 + -8) = 0x14192d767;
              pdb_142dc7e11(8,0x278);
            }
            *(undefined8 *)pauVar32[0x16] = 0;
            *(undefined2 *)(pauVar32[0x27] + 2) = 0;
            param_2 = pauVar32;
code_r0x00014192d4f7:
            pppppppuVar110[-1] = (undefined8 ******)pauVar32;
            pppppppuVar51 = pppppppuVar110 + 3;
            *pppppppuVar110 = (undefined8 ******)0x0;
            pppppppuVar110[1] = (undefined8 ******)0x0;
            uVar44 = 0;
            ppppppuVar31 = (undefined8 ******)0x0;
            if (*(short *)((longlong)param_3[0x27] + 2) != 0) {
              do {
                *(undefined8 *)((longlong)ppcVar104 + -8) = 0x14192d548;
                pdb_140f60be0(pppppppuVar110 + -4,(longlong)param_3 + uVar44 * 0x18 + 0x168);
                pauVar39 = param_3 + uVar44 * 2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
                switch((*pauVar39)[0]) {
                case 0:
                  *(undefined1 *)(pppppppuVar110 + 2) = 0;
                  break;
                default:
                  ppppppuVar47 = *(undefined8 *******)*pauVar39;
                  ppppppuVar46 = *(undefined8 *******)((longlong)*pauVar39 + 8);
                  ppppppuVar36 = *(undefined8 *******)((longlong)pauVar39[1] + 8);
                  pppppppuVar110[4] = *(undefined8 *******)pauVar39[1];
                  pppppppuVar110[5] = ppppppuVar36;
                  pppppppuVar110[2] = ppppppuVar47;
                  pppppppuVar110[3] = ppppppuVar46;
                  break;
                case 3:
                  *(undefined1 *)((longlong)pppppppuVar110 + 0x5f) = 1;
                  *(undefined8 *)((longlong)ppcVar104 + -8) = 0x14192d5b7;
                  pdb_140f60be0(pppppppuVar110 + 6,(undefined8 *)((longlong)*pauVar39 + 8));
                  pppppppuVar110[5] = pppppppuVar110[8];
                  *pppppppuVar51 = pppppppuVar110[6];
                  pppppppuVar110[4] = pppppppuVar110[7];
                  *(undefined1 *)(pppppppuVar110 + 2) = 3;
                  break;
                case 4:
                  *(undefined1 *)((longlong)pppppppuVar110 + 0x5f) = 1;
                  *(undefined8 *)((longlong)ppcVar104 + -8) = 0x14192d584;
                  pdb_1415e5d30(pppppppuVar110 + 6,(undefined8 *)((longlong)*pauVar39 + 8));
                  pppppppuVar110[5] = pppppppuVar110[8];
                  *pppppppuVar51 = pppppppuVar110[6];
                  pppppppuVar110[4] = pppppppuVar110[7];
                  *(undefined1 *)(pppppppuVar110 + 2) = 4;
                  break;
                case 5:
                  if (*(longlong *)((longlong)pauVar39[1] + 8) == 0) {
                    pppppppuVar110[6] = (undefined8 ******)0x0;
                    pppppppuVar110[8] = (undefined8 ******)0x0;
                  }
                  else {
                    lVar56 = *(longlong *)((longlong)*pauVar39 + 8);
                    if (lVar56 == 0) {
                      *(undefined1 *)((longlong)pppppppuVar110 + 0x5f) = 1;
                    /* WARNING: Subroutine does not return */
                      *(undefined8 *)((longlong)ppcVar104 + -8) = 0x14192d725;
                      pdb_142dc8150(&UNK_143359d48);
                    }
                    uVar30 = *(undefined8 *)pauVar39[1];
                    *(undefined1 *)((longlong)pppppppuVar110 + 0x5f) = 1;
                    *(undefined8 *)((longlong)ppcVar104 + -8) = 0x14192d5f5;
                    pdb_14192d190(pppppppuVar110 + 6,lVar56,uVar30);
                  }
                  pppppppuVar110[5] = pppppppuVar110[8];
                  *pppppppuVar51 = pppppppuVar110[6];
                  pppppppuVar110[4] = pppppppuVar110[7];
                  *(undefined1 *)(pppppppuVar110 + 2) = 5;
                }
                uVar5 = *(ushort *)((longlong)param_2[0x27] + 2);
                uVar55 = (ulonglong)uVar5;
                if (10 < uVar55) {
                    /* WARNING: Subroutine does not return */
                  *(undefined8 *)((longlong)ppcVar104 + -8) = 0x14192d6e9;
                  pdb_142dc83b0(&UNK_1433a4350,0x20,&UNK_1433a4370);
                }
                uVar44 = uVar44 + 1;
                *(ushort *)((longlong)param_2[0x27] + 2) = uVar5 + 1;
                *(undefined8 *******)((longlong)pauVar32 + uVar55 * 0x18 + 0x178) =
                     pppppppuVar110[-2];
                ppppppuVar47 = pppppppuVar110[-3];
                puVar98 = (undefined8 *)((longlong)pauVar32 + uVar55 * 0x18 + 0x168);
                *puVar98 = pppppppuVar110[-4];
                puVar98[1] = ppppppuVar47;
                ppppppuVar47 = pppppppuVar110[2];
                ppppppuVar46 = pppppppuVar110[3];
                ppppppuVar36 = pppppppuVar110[5];
                *(undefined8 *******)param_2[(ulonglong)uVar5 * 2 + 1] = pppppppuVar110[4];
                *(undefined8 *******)((longlong)param_2[(ulonglong)uVar5 * 2 + 1] + 8) =
                     ppppppuVar36;
                *(undefined8 *******)param_2[(ulonglong)uVar5 * 2] = ppppppuVar47;
                *(undefined8 *******)((longlong)param_2[(ulonglong)uVar5 * 2] + 8) = ppppppuVar46;
                ppppppuVar31 = (undefined8 ******)((longlong)ppppppuVar31 + 1);
                pppppppuVar110[1] = ppppppuVar31;
              } while (uVar44 < *(ushort *)((longlong)param_3[0x27] + 2));
            }
            goto LAB_14192d49c;
          case 0x3a:
            piVar2 = (int *)((longlong)pauVar32[-8] + 0xb);
            *piVar2 = *piVar2 + -1;
            pbVar10 = (byte *)((longlong)pauVar115[-8] + 0xb);
            *pbVar10 = *pbVar10 | (byte)pauVar117;
            *(undefined8 ********)((longlong)ppcVar104 + -8) = pppppppuVar110;
            *(undefined1 **)((longlong)ppcVar104 + -0x10) = (undefined1 *)((longlong)ppcVar104 + -8)
            ;
            bVar42 = (*param_3)[0];
            (*param_3)[0] = (*param_3)[0] + bVar52;
            *(char *)((longlong)ppcVar104 + -0x10) =
                 *(char *)((longlong)ppcVar104 + -0x10) + bVar43 + CARRY1(bVar42,bVar52);
            pppppppuVar110 = (undefined8 *******)((longlong)ppcVar104 + -8);
            goto LAB_14192d49c;
          case 0x3b:
            (*pauVar32)[0] = (*pauVar32)[0] + bVar43;
            goto code_r0x00014192d4f7;
          }
          pppppppuVar110[-9] = (undefined8 ******)param_1;
          *(undefined1 (**) [16])param_2[0x16] = pauVar32;
          *(undefined2 *)param_2[0x27] = 0;
          pppppppuVar110[-1] = (undefined8 ******)pauVar32;
          *pppppppuVar110 = (undefined8 ******)arg0;
          param_4 = (undefined1 (*) [16])0x0;
          param_1 = (undefined1 (*) [16])&UNK_14335a07c;
code_r0x00014192d265:
          if (param_4 < (undefined1 (*) [16])(ulonglong)*(ushort *)((longlong)param_3[0x27] + 2))
          goto code_r0x00014192d280;
          goto LAB_14192d49c;
        }
LAB_141925eb0:
        pauVar32 = (undefined1 (*) [16])(pppppppuVar110[0x16f] + 5);
        pppppppuVar79 = (undefined8 *******)ppcVar104;
      } while (pauVar32 != (undefined1 (*) [16])pppppppuVar110[0x15c]);
    }
    pppppppuVar110[0x7e] = pppppppuVar110[0xde];
    pppppppuVar110[0x7f] = pppppppuVar110[0xdf];
    pppppppuVar110[0x7c] = pppppppuVar110[0xdc];
    pppppppuVar110[0x7d] = pppppppuVar110[0xdd];
    pppppppuVar110[0x7a] = pppppppuVar110[0xda];
    pppppppuVar110[0x7b] = pppppppuVar110[0xdb];
    ppppppuVar31 = pppppppuVar110[0x13c];
    pauVar39 = (undefined1 (*) [16])*ppppppuVar31;
    pppppuVar35 = ppppppuVar31[1];
    auVar125 = *pauVar39;
    ppppppuVar31 = (undefined8 ******)ppppppuVar31[3];
    ppppppuVar47 = (undefined8 ******)((longlong)ppppppuVar31 + 1U >> 1);
    if (pppppppuVar110[0x7d] == (undefined8 ******)0x0) {
      ppppppuVar47 = ppppppuVar31;
    }
    ppppppuVar46 = pppppppuVar110[0x160];
    ppppppuVar36 = pppppppuVar110[0xd5];
    if (pppppppuVar110[0x7c] < ppppppuVar47) {
      *(undefined8 *)((longlong)pppppppuVar79 + -8) = 0x14192771a;
      pdb_142d974a0(pppppppuVar110 + 0x7a,ppppppuVar47,pppppppuVar110 + 0x7e);
    }
    pppppppuVar110[-10] = pppppppuVar110 + 0x7a;
    pppppppuVar110[0x34] = pppppppuVar110 + -10;
    pppppppuVar110[0xda] = (undefined8 ******)pauVar39;
    pppppppuVar110[0xdb] = (undefined8 ******)(pauVar39 + 1);
    pppppppuVar110[0xdc] = (undefined8 ******)(*pauVar39 + (longlong)pppppuVar35 + 1);
    *(ushort *)(pppppppuVar110 + 0xdd) =
         ~((ushort)(SUB161(auVar125 >> 7,0) & 1) | (ushort)(SUB161(auVar125 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar125 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar125 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar125 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar125 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar125 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar125 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar125 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar125 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar125 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar125 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar125 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar125 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar125 >> 0x77,0) & 1) << 0xe |
          (ushort)(byte)(auVar125[0xf] >> 7) << 0xf);
    *(undefined8 *)((longlong)pppppppuVar79 + -8) = 0x1419260fd;
    pdb_140ca82b0(pppppppuVar110 + 0xda,ppppppuVar31,pppppppuVar110 + 0x34);
    ppppppuVar47 = pppppppuVar110[0x161] + 6;
    *(undefined8 *)((longlong)pppppppuVar79 + -8) = 0x141926118;
    pdb_1415e5900(pppppppuVar110 + 0xda,ppppppuVar47);
    pppppuVar35 = ppppppuVar36[1];
    pppppuVar113 = ppppppuVar36[2];
    if (pppppuVar113 != (undefined8 *****)0x0) {
      pppppuVar38 = pppppuVar35 + 1;
      do {
        ppppuVar118 = pppppuVar38[-1];
        if (ppppuVar118 != (undefined8 ****)0x0) {
          ppppuVar7 = *pppppuVar38;
          *(undefined8 *)((longlong)pppppppuVar79 + -8) = 0x141926154;
          pub_1406abac0((byte *)ppppuVar7,(longlong)ppppuVar118 << 3,8);
        }
        pppppuVar38 = pppppuVar38 + 3;
        pppppuVar113 = (undefined8 *****)((longlong)pppppuVar113 + -1);
      } while (pppppuVar113 != (undefined8 *****)0x0);
    }
    pppppuVar113 = *ppppppuVar36;
    if (pppppuVar113 != (undefined8 *****)0x0) {
      *(undefined8 *)((longlong)pppppppuVar79 + -8) = 0x141926174;
      pub_1406abac0((byte *)pppppuVar35,(longlong)pppppuVar113 * 0x18,8);
    }
    ppppppuVar36[2] = pppppppuVar110[0xdc];
    ppppppuVar31 = pppppppuVar110[0xdb];
    *ppppppuVar36 = pppppppuVar110[0xda];
    ppppppuVar36[1] = ppppppuVar31;
    *(undefined8 *)((longlong)pppppppuVar79 + -8) = 0x14192619b;
    pdb_140b43320(ppppppuVar36,pppppppuVar110 + 0x7a);
    ppppppuVar31 = pppppppuVar110[0x7d];
    if (ppppppuVar31 == (undefined8 ******)0x0) {
      pppppuVar35 = (undefined8 *****)0x0;
    }
    else {
      pauVar39 = (undefined1 (*) [16])pppppppuVar110[0x7a];
      puVar34 = *pauVar39;
      auVar125 = *pauVar39;
      uVar5 = (ushort)(SUB161(auVar125 >> 7,0) & 1) | (ushort)(SUB161(auVar125 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar125 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar125 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar125 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar125 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar125 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar125 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar125 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar125 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar125 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar125 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar125 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar125 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar125 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar125[0xf] >> 7) << 0xf;
      pauVar117 = pauVar39;
      while( true ) {
        uVar29 = uVar5 ^ 0xffff;
        pauVar117 = pauVar117 + 1;
        if (uVar29 != 0) break;
        auVar125 = *pauVar117;
        pauVar39 = pauVar39 + -8;
        uVar5 = (ushort)(SUB161(auVar125 >> 7,0) & 1) | (ushort)(SUB161(auVar125 >> 0xf,0) & 1) << 1
                | (ushort)(SUB161(auVar125 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar125 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar125 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar125 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar125 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar125 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar125 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar125 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar125 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar125 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar125 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar125 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar125 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar125[0xf] >> 7) << 0xf;
      }
      uVar5 = (ushort)uVar29;
      iVar27 = 0;
      for (; (uVar29 & 1) == 0; uVar29 = uVar29 >> 1 | 0x80000000) {
        iVar27 = iVar27 + 1;
      }
      uVar30 = *(undefined8 *)((longlong)pauVar39 + (-8 - (ulonglong)(uint)(iVar27 << 3)));
      pppppppuVar110[0x34] = pppppppuVar110 + 0x172;
      pppppppuVar110[0xda] = (undefined8 ******)pauVar39;
      pppppppuVar110[0xdb] = (undefined8 ******)pauVar117;
      pppppppuVar110[0xdc] = (undefined8 ******)(puVar34 + (longlong)pppppppuVar110[0x7b] + 1);
      *(ushort *)(pppppppuVar110 + 0xdd) = uVar5 - 1 & uVar5;
      *(undefined8 *)((longlong)pppppppuVar79 + -8) = 0x141926256;
      pppppuVar35 = (undefined8 *****)
                    pdb_140ca8500(pppppppuVar110 + 0xda,(longlong)ppppppuVar31 + -1,uVar30);
    }
    ppppppuVar31 = pppppppuVar110[0x13c];
    pppppuVar113 = ppppppuVar31[0x18];
    if (ppppppuVar31[0x18] < pppppuVar35) {
      pppppuVar113 = pppppuVar35;
    }
    ppppppuVar31[0x18] = pppppuVar113;
    iVar27 = 0;
    if (0 < *(int *)((longlong)ppppppuVar46 + 0x6c)) {
      iVar27 = *(int *)((longlong)ppppppuVar46 + 0x6c);
    }
    *(int *)((longlong)ppppppuVar46 + 0x6c) = iVar27;
    *(undefined8 *)((longlong)pppppppuVar79 + -8) = 0x141926289;
    ppppppuVar36 = (undefined8 ******)pdb_140f3c9d0();
    pppppppuVar110[0xcf] = ppppppuVar36;
    *(int *)(pppppppuVar110 + 0xd0) = (int)ppppppuVar31;
    ppppppuVar36 = (undefined8 ******)ppppppuVar46[0xc];
    uVar29 = *(uint *)(pppppppuVar110[0x161] + 0x22);
    param_1 = (undefined1 (*) [16])(ulonglong)uVar29;
    ppppppuVar31 = pppppppuVar110[0x147];
    *(undefined8 *)((longlong)pppppppuVar79 + -8) = 0x1419262bc;
    pdb_140a34930(pppppppuVar110 + 0x34,ppppppuVar31);
    ppppppuVar31 = pppppppuVar110[0x150];
    uVar4 = *(undefined2 *)(ppppppuVar31 + 5);
    *(undefined4 *)(pppppppuVar110 + 0x16a) = *(undefined4 *)ppppppuVar31;
    unaff_XMM15_Da = *(undefined4 *)((longlong)ppppppuVar31 + 4);
    unaff_XMM15_Db = *(undefined4 *)(ppppppuVar31 + 1);
    unaff_XMM15_Dc = *(undefined4 *)((longlong)ppppppuVar31 + 0xc);
    unaff_XMM15_Dd = *(undefined4 *)(ppppppuVar31 + 2);
    ppppppuVar114 = *(undefined8 *******)((longlong)ppppppuVar31 + 0x14);
    ppppppuVar8 = *(undefined8 *******)((longlong)ppppppuVar31 + 0x1c);
    uVar142 = *(undefined4 *)((longlong)ppppppuVar31 + 0x24);
    ppppppuVar37 = pppppppuVar110[0xd8];
    ppppppuVar31 = (undefined8 ******)*ppppppuVar37;
    unaff_XMM8_Da = *(undefined4 *)(ppppppuVar37 + 1);
    uVar26 = *(undefined1 *)((longlong)ppppppuVar37 + 0x14);
    unaff_XMM9_Da = *(float *)(ppppppuVar37 + 2);
    *(undefined1 *)(pppppppuVar110 + 0x16c) = *(undefined1 *)((longlong)ppppppuVar37 + 0x15);
    unaff_XMM10_Da = SUB84(ppppppuVar46[0xd],0);
    unaff_XMM10_Db = (undefined4)((ulonglong)ppppppuVar46[0xd] >> 0x20);
    pppppuVar35 = ppppppuVar46[1];
    pppppuVar113 = ppppppuVar46[2];
    *(undefined8 *)((longlong)pppppppuVar79 + -8) = 0x141926327;
    pdb_1415e9150(pppppppuVar110 + 0x153,pppppuVar35,pppppuVar35 + (longlong)pppppuVar113 * 5);
    *(undefined1 *)(pppppppuVar110 + 0x16f) = uVar26;
    pppppuVar35 = ppppppuVar46[4];
    pppppuVar113 = ppppppuVar46[5];
    *(undefined8 *)((longlong)pppppppuVar79 + -8) = 0x14192634a;
    pdb_1415ed4a0(pppppppuVar110 + 0x158,pppppuVar35,pppppuVar35 + (longlong)pppppuVar113 * 2);
    pauVar32 = (undefined1 (*) [16])-(longlong)pppppppuVar110[0x170];
    arg0 = (undefined1 (*) [16])pppppppuVar110[0x15e];
    param_3 = (undefined1 (*) [16])pppppppuVar110[0x148];
    *(undefined2 *)(pppppppuVar110 + 0x15c) = uVar4;
    if (SBORROW8(0,(longlong)pppppppuVar110[0x170])) {
      *(undefined4 *)(pppppppuVar110 + 0x150) = uVar142;
      pppppppuVar110[0x13c] = ppppppuVar114;
      pppppppuVar110[0x13d] = ppppppuVar8;
      pppppppuVar110[0x14f] = ppppppuVar36;
      pppppppuVar110[0x149] = ppppppuVar47;
    }
    else {
      uVar44 = (longlong)param_3 * 0x28;
      if ((undefined1 (*) [16])0x333333333333333 < param_3) {
        uVar30 = 0;
LAB_1419268df:
        *(undefined8 *)((longlong)pppppppuVar79 + -8) = 0x1419268ea;
        pdb_142dc7e2a(uVar30,uVar44);
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)invalidInstructionException();
        (*UNRECOVERED_JUMPTABLE)();
      }
      pppppppuVar110[0x149] = ppppppuVar47;
      pppppppuVar110[0x14f] = ppppppuVar36;
      pppppppuVar110[0x13c] = ppppppuVar114;
      pppppppuVar110[0x13d] = ppppppuVar8;
      *(undefined4 *)(pppppppuVar110 + 0x150) = uVar142;
      if (uVar44 == 0) {
LAB_1419271a1:
        uVar29 = (uint)param_1;
        pauVar32 = (undefined1 (*) [16])0x4;
        pppppppuVar110[0x15f] = (undefined8 ******)0x0;
      }
      else {
        *(undefined8 *)((longlong)pppppppuVar79 + -8) = 0x141926aea;
        pdb_14007ee60();
        uVar30 = 4;
        *(undefined8 *)((longlong)pppppppuVar79 + -8) = 0x141926afd;
        pauVar32 = (undefined1 (*) [16])pub_1406abab0(uVar44,4);
        if (pauVar32 == (undefined1 (*) [16])0x0) goto LAB_1419268df;
        if (param_3 == (undefined1 (*) [16])0x0) {
          pppppppuVar110[0x15f] = (undefined8 ******)0x0;
          arg0 = (undefined1 (*) [16])pppppppuVar110[0x15e];
code_r0x0001419271c8:
          uVar29 = (uint)param_1;
        }
        else {
          ppppppuVar47 = pppppppuVar110[0x16b];
          uVar55 = 0;
          pauVar39 = param_3;
          ppppppuVar46 = ppppppuVar47;
          do {
            if (uVar44 == uVar55) break;
            iVar27 = *(int *)ppppppuVar46;
            if (iVar27 == 1) {
              *(undefined4 *)(pppppppuVar110 + 0xdb) =
                   *(undefined4 *)((longlong)ppppppuVar47 + uVar55 + 0xc);
              pppppppuVar110[0xda] = *(undefined8 *******)((longlong)ppppppuVar47 + uVar55 + 4);
            }
            pauVar39 = (undefined1 (*) [16])((longlong)pauVar39[-1] + 0xf);
            *(undefined4 *)(pppppppuVar110 + -9) = *(undefined4 *)(pppppppuVar110 + 0xdb);
            pppppppuVar110[-10] = pppppppuVar110[0xda];
            *(uint *)(*pauVar32 + uVar55) = (uint)(iVar27 == 1);
            *(undefined4 *)(*pauVar32 + uVar55 + 0xc) = *(undefined4 *)(pppppppuVar110 + -9);
            *(undefined8 *******)(*pauVar32 + uVar55 + 4) = pppppppuVar110[-10];
            *(undefined8 ******)(pauVar32[1] + uVar55) = ppppppuVar46[2];
            *(int *)(pauVar32[1] + uVar55 + 8) = *(int *)(ppppppuVar46 + 3);
            *(undefined8 *)(pauVar32[1] + uVar55 + 0xc) =
                 *(undefined8 *)((longlong)ppppppuVar46 + 0x1c);
            piVar2 = (int *)((longlong)ppppppuVar46 + 0x24);
            ppppppuVar46 = ppppppuVar46 + 5;
            *(int *)(pauVar32[2] + uVar55 + 4) = *piVar2;
            uVar55 = uVar55 + 0x28;
          } while (pauVar39 != (undefined1 (*) [16])0x0);
LAB_14192718e:
          uVar29 = (uint)param_1;
          pppppppuVar110[0x15f] = (undefined8 ******)param_3;
          arg0 = (undefined1 (*) [16])pppppppuVar110[0x15e];
        }
      }
    }
    pppppppuVar110[0x14e] = (undefined8 ******)pauVar32;
    *(float *)(pppppppuVar110 + 0x140) = unaff_XMM6_Da;
    *(undefined4 *)((longlong)pppppppuVar110 + 0xa04) = unaff_XMM6_Db;
    *(undefined4 *)(pppppppuVar110 + 0x141) = unaff_XMM6_Dc;
    *(undefined4 *)((longlong)pppppppuVar110 + 0xa0c) = unaff_XMM6_Dd;
    uVar142 = *(undefined4 *)*arg0;
    uVar130 = *(undefined4 *)((longlong)*arg0 + 4);
    cVar24 = *(char *)((longlong)arg0[1] + 0xc);
    if (cVar24 != '\x03') {
      *(undefined4 *)((longlong)pppppppuVar110 + 0x9d7) = *(undefined4 *)((longlong)arg0[2] + 4);
      pppppppuVar110[0x13a] = *(undefined8 *******)((longlong)arg0[1] + 0xd);
    }
    ppppppuVar47 = *(undefined8 *******)arg0[3];
    pppppppuVar110[0xd8] = *(undefined8 *******)((longlong)arg0[2] + 8);
    pppppppuVar110[0xd9] = ppppppuVar47;
    uVar141 = *(undefined4 *)((longlong)arg0[3] + 8);
    *(undefined1 *)(pppppppuVar110 + 0x15e) = arg0[6][0];
    uVar139 = *(undefined4 *)((longlong)arg0[3] + 0xc);
    ppppppuVar36 = *(undefined8 *******)arg0[4];
    ppppppuVar37 = *(undefined8 *******)((longlong)arg0[4] + 8);
    ppppppuVar47 = *(undefined8 *******)arg0[5];
    *(undefined1 (*) [16])(pppppppuVar110 + 0x13e) = ZEXT416(*(uint *)((longlong)arg0[5] + 0xc));
    uVar140 = *(undefined4 *)((longlong)arg0[5] + 8);
    uVar26 = *(undefined1 *)((longlong)arg0[1] + 8);
    uVar3 = *(undefined1 *)((longlong)arg0[1] + 9);
    ppppppuVar114 = *(undefined8 *******)((longlong)*arg0 + 8);
    ppppppuVar8 = *(undefined8 *******)arg0[1];
    ppppppuVar46 = pppppppuVar110[0xd5];
    *(undefined8 *)((longlong)pppppppuVar79 + -8) = 0x141926418;
    pdb_1415e5900(pppppppuVar110 + -10,ppppppuVar46);
    pppppppuVar110[0xe9] = pppppppuVar110[0x14f];
    *(uint *)(pppppppuVar110 + 0xfc) = uVar29;
    *(undefined8 *******)((longlong)pppppppuVar110 + 0x7e4) = pppppppuVar110[0x34];
    *(undefined8 *******)((longlong)pppppppuVar110 + 0x7ec) = pppppppuVar110[0x35];
    *(undefined8 *******)((longlong)pppppppuVar110 + 0x7f4) = pppppppuVar110[0x36];
    *(undefined8 *******)((longlong)pppppppuVar110 + 0x7fc) = pppppppuVar110[0x37];
    *(undefined4 *)((longlong)pppppppuVar110 + 0x804) = *(undefined4 *)(pppppppuVar110 + 0x38);
    *(undefined4 *)((longlong)pppppppuVar110 + 0x7b4) = *(undefined4 *)(pppppppuVar110 + 0x16a);
    *(undefined4 *)(pppppppuVar110 + 0xf7) = unaff_XMM15_Da;
    *(undefined4 *)((longlong)pppppppuVar110 + 0x7bc) = unaff_XMM15_Db;
    *(undefined4 *)(pppppppuVar110 + 0xf8) = unaff_XMM15_Dc;
    *(undefined4 *)((longlong)pppppppuVar110 + 0x7c4) = unaff_XMM15_Dd;
    pppppppuVar110[0xf9] = pppppppuVar110[0x13c];
    pppppppuVar110[0xfa] = pppppppuVar110[0x13d];
    *(undefined4 *)(pppppppuVar110 + 0xfb) = *(undefined4 *)(pppppppuVar110 + 0x150);
    *(undefined2 *)((longlong)pppppppuVar110 + 0x7dc) = *(undefined2 *)(pppppppuVar110 + 0x15c);
    pppppppuVar110[0xe7] = ppppppuVar31;
    *(undefined4 *)(pppppppuVar110 + 0xe8) = unaff_XMM8_Da;
    *(undefined1 *)((longlong)pppppppuVar110 + 0x744) = *(undefined1 *)(pppppppuVar110 + 0x16f);
    *(float *)(pppppppuVar110 + 0xe6) = unaff_XMM9_Da;
    *(undefined1 *)((longlong)pppppppuVar110 + 0x734) = *(undefined1 *)(pppppppuVar110 + 0x16c);
    pppppppuVar110[0x101] = (undefined8 ******)CONCAT44(unaff_XMM10_Db,unaff_XMM10_Da);
    pppppppuVar110[0xdc] = pppppppuVar110[0x155];
    pppppppuVar110[0xda] = pppppppuVar110[0x153];
    pppppppuVar110[0xdb] = pppppppuVar110[0x154];
    pppppppuVar110[0xdd] = pppppppuVar110[0x158];
    pppppppuVar110[0xde] = pppppppuVar110[0x159];
    pppppppuVar110[0xdf] = pppppppuVar110[0x15a];
    pppppppuVar110[0xe3] = pppppppuVar110[0x15f];
    pppppppuVar110[0xe4] = pppppppuVar110[0x14e];
    pppppppuVar110[0xe5] = pppppppuVar110[0x15f];
    *(undefined4 *)(pppppppuVar110 + 0xea) = uVar142;
    *(undefined4 *)((longlong)pppppppuVar110 + 0x754) = uVar130;
    pppppppuVar110[0xeb] = ppppppuVar114;
    pppppppuVar110[0xec] = ppppppuVar8;
    *(undefined1 *)(pppppppuVar110 + 0xed) = uVar26;
    *(undefined1 *)((longlong)pppppppuVar110 + 0x769) = uVar3;
    *(char *)((longlong)pppppppuVar110 + 0x76c) = cVar24;
    *(undefined4 *)((longlong)pppppppuVar110 + 0x774) =
         *(undefined4 *)((longlong)pppppppuVar110 + 0x9d7);
    *(undefined8 *******)((longlong)pppppppuVar110 + 0x76d) = pppppppuVar110[0x13a];
    pppppppuVar110[0xef] = pppppppuVar110[0xd8];
    pppppppuVar110[0xf0] = pppppppuVar110[0xd9];
    *(undefined4 *)(pppppppuVar110 + 0xf1) = uVar141;
    *(undefined4 *)((longlong)pppppppuVar110 + 0x78c) = uVar139;
    pppppppuVar110[0xf2] = ppppppuVar36;
    pppppppuVar110[0xf3] = ppppppuVar37;
    pppppppuVar110[0xf4] = ppppppuVar47;
    *(undefined4 *)(pppppppuVar110 + 0xf5) = uVar140;
    *(undefined4 *)((longlong)pppppppuVar110 + 0x7ac) = *(undefined4 *)(pppppppuVar110 + 0x13e);
    *(undefined1 *)(pppppppuVar110 + 0xf6) = *(undefined1 *)(pppppppuVar110 + 0x15e);
    pppppppuVar110[0xe0] = pppppppuVar110[-10];
    pppppppuVar110[0xe1] = pppppppuVar110[-9];
    pppppppuVar110[0xe2] = pppppppuVar110[-8];
    *(undefined8 *)((longlong)pppppppuVar79 + -8) = 0x1419265de;
    pdb_14007ee60();
    *(undefined8 *)((longlong)pppppppuVar79 + -8) = 0x1419265ed;
    ppppppuVar31 = (undefined8 ******)pub_1406abab0(0x140,8);
    if (ppppppuVar31 == (undefined8 ******)0x0) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)pppppppuVar79 + -8) = 0x141927731;
      pdb_142dc7e11(8,0x140);
    }
    pppppppuVar51 = pppppppuVar110 + 0xda;
    pppppppuVar110[0x16c] = ppppppuVar31;
    *(undefined8 *)((longlong)pppppppuVar79 + -8) = 0x141926612;
    pub_142e32760(ppppppuVar31,pppppppuVar51,0x140);
    uVar142 = SUB84(pppppppuVar51,0);
    ppppppuVar31 = pppppppuVar110[0x160];
    ppppppuVar47 = pppppppuVar110[0xcb];
    ppppppuVar46 = pppppppuVar110[0xcc];
    ppppppuVar36 = pppppppuVar110[0x140];
    if (3 < *(ulonglong *)*_DAT_143ca8e90) {
      *(undefined8 *)((longlong)pppppppuVar79 + -8) = 0x14192664e;
      ppppppuVar37 = (undefined8 ******)pdb_140f3cb70(pppppppuVar110 + 0xcf);
      pppppppuVar110[-10] = ppppppuVar37;
      *(undefined4 *)(pppppppuVar110 + -9) = uVar142;
      pppppppuVar110[0x34] = pppppppuVar110 + -10;
      pppppppuVar110[0x35] = (undefined8 ******)pdb_140f72840;
      pppppppuVar110[0xda] = (undefined8 ******)0x0;
      pppppppuVar110[0xdb] = (undefined8 ******)&UNK_143359270;
      pppppppuVar110[0xdc] = (undefined8 ******)0x26;
      pppppppuVar110[0xdd] = (undefined8 ******)0x0;
      pppppppuVar110[0xde] = (undefined8 ******)&UNK_1433591c4;
      pppppppuVar110[0xdf] = (undefined8 ******)0x31;
      pppppppuVar110[0xe0] = (undefined8 ******)0x4;
      pppppppuVar110[0xe1] = (undefined8 ******)&UNK_143359270;
      pppppppuVar110[0xe2] = (undefined8 ******)0x26;
      pppppppuVar110[0xe3] = (undefined8 ******)0x3e600000001;
      pppppppuVar110[0xe4] = (undefined8 ******)&UNK_143359840;
      pppppppuVar110[0xe5] = pppppppuVar110 + 0x34;
      *(undefined8 *)((longlong)pppppppuVar79 + -8) = 0x141926714;
      pdb_140f332f0(pppppppuVar110 + 0x172,pppppppuVar110 + 0xda);
    }
    ppppppuVar37 = pppppppuVar110[0x7b];
    ppppppuVar114 = pppppppuVar110[0x152];
    if (ppppppuVar37 != (undefined8 ******)0x0) {
      uVar44 = (longlong)ppppppuVar37 * 8 + 0x17U & 0xfffffffffffffff0;
      uVar55 = (longlong)ppppppuVar37 + uVar44 + 0x11;
      if (uVar55 != 0) {
        ppppppuVar37 = pppppppuVar110[0x7a];
        *(undefined8 *)((longlong)pppppppuVar79 + -8) = 0x141926752;
        pub_1406abac0((byte *)((longlong)ppppppuVar37 - uVar44),uVar55,0x10);
      }
    }
    pppppuVar35 = pppppppuVar110[0x161][7];
    pppppuVar113 = pppppppuVar110[0x161][8];
    if (pppppuVar113 != (undefined8 *****)0x0) {
      pppppuVar38 = pppppuVar35 + 1;
      do {
        ppppuVar118 = pppppuVar38[-1];
        if (ppppuVar118 != (undefined8 ****)0x0) {
          ppppuVar7 = *pppppuVar38;
          *(undefined8 *)((longlong)pppppppuVar79 + -8) = 0x141926794;
          pub_1406abac0((byte *)ppppuVar7,(longlong)ppppuVar118 << 3,8);
        }
        pppppuVar38 = pppppuVar38 + 3;
        pppppuVar113 = (undefined8 *****)((longlong)pppppuVar113 + -1);
      } while (pppppuVar113 != (undefined8 *****)0x0);
    }
    pppppuVar113 = *pppppppuVar110[0x149];
    if (pppppuVar113 != (undefined8 *****)0x0) {
      *(undefined8 *)((longlong)pppppppuVar79 + -8) = 0x1419267bb;
      pub_1406abac0((byte *)pppppuVar35,(longlong)pppppuVar113 * 0x18,8);
    }
    ppppppuVar37 = pppppppuVar110[0x161];
    *(undefined8 *)((longlong)pppppppuVar79 + -8) = 0x1419267d2;
    pub_1406abac0((byte *)ppppppuVar37,0x140,8);
    ppppppuVar37 = pppppppuVar110[0x162];
    if (ppppppuVar114 != (undefined8 ******)0x0) {
      ppppppuVar8 = pppppppuVar110[0x14a];
      *(undefined8 *)((longlong)pppppppuVar79 + -8) = 0x1419267f3;
      pub_1406abac0((byte *)ppppppuVar8,(ulonglong)ppppppuVar114,1);
    }
    uVar142 = *(undefined4 *)((longlong)*pppppppuVar110[0x19b] + 0x114);
    *(undefined4 *)pppppppuVar110[0xd3] = *(undefined4 *)((longlong)pppppppuVar110 + 0xa5c);
    *(undefined4 *)((longlong)pppppppuVar110[0x147] + 0x194) = uVar142;
    iVar27 = *(int *)(ppppppuVar31 + 0xd);
    iVar28 = *(int *)(pppppppuVar110 + 0x164) - iVar27;
    *(int *)(pppppppuVar110 + 0x142) = iVar28;
    ppppppuVar114 = pppppppuVar110[0xce];
    if (ppppppuVar114 == (undefined8 ******)0x0) {
      ppppppuVar114 = (undefined8 ******)0x0;
    }
    else {
      if (iVar27 != -1) {
        *(undefined1 *)((longlong)pppppppuVar110 + 0xb93) = 1;
        *(undefined1 *)((longlong)pppppppuVar110 + 0xb92) = 1;
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)pppppppuVar79 + -8) = 0x14192782a;
        pdb_142dc83d0(&UNK_1433599bd,0x73,&UNK_1433599f8);
      }
      if (iVar28 < (int)ppppppuVar114) {
        pppppppuVar110[0xda] = pppppppuVar110 + 0xc6;
        pppppppuVar110[0xdb] = (undefined8 ******)pdb_140f72a40;
        pppppppuVar110[0xdc] = pppppppuVar110 + 0x142;
        pppppppuVar110[0xdd] = (undefined8 ******)pdb_140f71c50;
        *(undefined1 *)((longlong)pppppppuVar110 + 0xb93) = 1;
        *(undefined1 *)((longlong)pppppppuVar110 + 0xb92) = 1;
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)pppppppuVar79 + -8) = 0x1419268b7;
        pdb_142dc83d0(&UNK_143359a10,pppppppuVar110 + 0xda,&UNK_143359a50);
      }
    }
    *(undefined4 *)pppppppuVar110[0xd6] = *(undefined4 *)((longlong)pppppppuVar110 + 0xa64);
    *(undefined1 *)(ppppppuVar37 + 0xd) = 1;
    *(int *)((longlong)ppppppuVar37 + 0x6c) = iVar28 - (int)ppppppuVar114;
    pppppuVar113 = ppppppuVar46[0x1f];
    pppppuVar38 = ppppppuVar46[0x20];
    pppppuVar35 = (undefined8 *****)((longlong)pppppuVar113 + (longlong)pppppuVar38 * 4);
    cVar24 = *(char *)(ppppppuVar46 + 0x21);
    if (cVar24 == '\0') {
      pppppppuVar51 = pppppppuVar110 + 0xdb;
      lVar56 = (longlong)pppppuVar38 << 2;
      do {
        if (lVar56 == 0) {
          ppppppuVar46 = (undefined8 ******)0x0;
          ppppppuVar36 = (undefined8 ******)0x0;
          pppppuVar113 = pppppuVar35;
          goto LAB_141926c00;
        }
        uVar44 = (ulonglong)*(uint *)pppppuVar113;
        pppppuVar113 = (undefined8 *****)((longlong)pppppuVar113 + 4);
        pppppuVar38 = ppppppuVar47[0x20];
        ppppuVar118 = pppppuVar38[uVar44 * 0x14 + 0xb];
        lVar56 = lVar56 + -4;
      } while (ppppuVar118 == (undefined8 ****)0x0);
      uVar55 = (ulonglong)*(uint *)((longlong)pppppuVar38 + uVar44 * 0xa0 + 0x94);
      ppppuVar7 = ppppppuVar47[0x34][uVar55 * 9 + 3];
      uVar55 = ~(ulonglong)ppppppuVar47[0x34][uVar55 * 9 + 7][(longlong)ppppppuVar46[0x22]];
      ppppppuVar46 = (undefined8 ******)
                     (ppppuVar7[uVar55 * 6 + 2] +
                     (ulonglong)~*(uint *)(pppppuVar38[uVar44 * 0x14 + 10] + 1) * 10);
      lVar56 = (ulonglong)~*(uint *)(pppppuVar38[uVar44 * 0x14 + 10] + 1) * 4;
      pppuVar9 = ppppuVar7[uVar55 * 6 + 4];
      ppppppuVar37 = (undefined8 ******)(lVar56 + (longlong)ppppuVar7[uVar55 * 6 + 5]);
      ppppppuVar31 = pppppppuVar110[0x160];
      pppppppuVar110[0xda] = ppppppuVar46;
      pppppppuVar110[0xdb] = (undefined8 ******)((longlong)pppuVar9 + lVar56);
      pppppppuVar119 = pppppppuVar110 + 0xdc;
      pppppppuVar57 = pppppppuVar110 + 0xdd;
    }
    else {
      pppppppuVar51 = pppppppuVar110 + 0x7b;
      lVar56 = (longlong)pppppuVar38 << 2;
      do {
        if (lVar56 == 0) {
          ppppppuVar46 = (undefined8 ******)0x0;
          ppppppuVar36 = (undefined8 ******)0x0;
          pppppuVar113 = pppppuVar35;
          goto LAB_141926bc0;
        }
        uVar44 = (ulonglong)*(uint *)pppppuVar113;
        pppppuVar113 = (undefined8 *****)((longlong)pppppuVar113 + 4);
        pppppuVar38 = ppppppuVar47[0x34];
        ppppuVar118 = pppppuVar38[uVar44 * 9 + 2];
        lVar56 = lVar56 + -4;
      } while (ppppuVar118 == (undefined8 ****)0x0);
      ppppuVar7 = pppppuVar38[uVar44 * 9 + 3];
      uVar44 = ~(ulonglong)pppppuVar38[uVar44 * 9 + 7][(longlong)ppppppuVar46[0x22]];
      ppppppuVar37 = (undefined8 ******)ppppuVar7[uVar44 * 6 + 5];
      ppppppuVar46 = (undefined8 ******)ppppuVar7[uVar44 * 6 + 2];
      ppppppuVar114 = (undefined8 ******)ppppuVar7[uVar44 * 6 + 4];
      pppppppuVar110[0x7a] = ppppppuVar46;
      pppppppuVar110[0x7b] = ppppppuVar114;
      pppppppuVar119 = pppppppuVar110 + 0x7c;
      pppppppuVar57 = pppppppuVar110 + 0x7d;
    }
    *pppppppuVar119 = ppppppuVar37;
    *pppppppuVar57 = ppppppuVar36;
    ppppppuVar36 = pppppppuVar51[1];
    pppppppuVar51 = (undefined8 *******)(ulonglong)*(uint *)((longlong)pppppppuVar51 + 0x14);
    if (cVar24 == '\0') {
      if ((int)ppppuVar118 != 1) goto LAB_14192782d;
LAB_141926c00:
      do {
        uVar142 = SUB84(pppppppuVar51,0);
        if (pppppuVar113 == pppppuVar35) goto LAB_141926c69;
        uVar29 = *(uint *)pppppuVar113;
        pppppuVar113 = (undefined8 *****)((longlong)pppppuVar113 + 4);
      } while (ppppppuVar47[0x20][(ulonglong)uVar29 * 0x14 + 0xb] == (undefined8 ****)0x0);
    }
    else {
      if ((int)ppppuVar118 != 1) {
LAB_14192782d:
        bVar121 = true;
        goto LAB_141926c24;
      }
LAB_141926bc0:
      do {
        uVar142 = SUB84(pppppppuVar51,0);
        if (pppppuVar113 == pppppuVar35) goto LAB_141926c69;
        uVar29 = *(uint *)pppppuVar113;
        pppppuVar113 = (undefined8 *****)((longlong)pppppuVar113 + 4);
      } while (ppppppuVar47[0x34][(ulonglong)uVar29 * 9 + 2] == (undefined8 ****)0x0);
    }
    bVar121 = ppppppuVar46 != (undefined8 ******)0x0;
LAB_141926c24:
    *(bool *)(pppppppuVar110 + 0xda) = bVar121;
    *(undefined1 *)((longlong)pppppppuVar110 + 0xb93) = 1;
    *(undefined1 *)((longlong)pppppppuVar110 + 0xb92) = 1;
    *(undefined **)((longlong)pppppppuVar79 + 0x20) = &UNK_143359a68;
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((longlong)pppppppuVar79 + -8) = 0x141926c63;
    pdb_142dc8170(&UNK_143359be0,0x2b,pppppppuVar110 + 0xda,&UNK_143359c10);
  case 0x35:
    goto code_r0x000141927200;
  case 0x36:
  case 0x38:
    goto code_r0x0001419271c8;
  case 0x37:
code_r0x0001419271e9:
code_r0x0001419271ee:
    pauVar54 = (undefined1 (*) [16])0x58;
code_r0x0001419271f3:
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((longlong)ppcVar82 + -8) = 0x1419271f8;
    pdb_142dc83b0(arg0,pauVar54);
  case 0x3b:
    (*pauVar32)[0] = (*pauVar32)[0] + cVar25;
    goto LAB_141927216;
  case 0x3c:
  case 0x42:
  case 0x43:
    uVar29 = *(int *)(&UNK_143359e60 + (ulonglong)(byte)(*pauVar32)[0] * 4) + 0x43359e19;
    pauVar32 = (undefined1 (*) [16])(ulonglong)uVar29;
    bVar42 = (byte)uVar29;
    (*pauVar32)[0] = (*pauVar32)[0] | bVar42;
    (*pauVar32)[0] = (*pauVar32)[0] + bVar42;
    goto LAB_14192727c;
  case 0x3d:
    *(undefined1 (**) [16])((longlong)pppppppuVar79 + -8) = pauVar32;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x3e:
    goto LAB_1419273a9;
  case 0x3f:
  case 0x41:
    (*pauVar32)[0] = (*pauVar32)[0] + cVar25;
    pauVar32 = (undefined1 (*) [16])(ulonglong)uRam814100000001b941;
    out(3,uRam814100000001b941);
    (*pauVar32)[0] = (*pauVar32)[0] + (char)uRam814100000001b941;
    goto LAB_14192729c;
  case 0x40:
    out(3,iVar27);
    (*pauVar32)[0] = (*pauVar32)[0] + cVar25;
    goto LAB_14192738e;
  case 0x44:
    goto LAB_1419273b4;
  case 0x45:
  case 0x4b:
  case 0x4c:
    goto code_r0x0001419272f1;
  case 0x46:
    pcVar33 = (char *)((longlong)pauVar32[-8] + 9);
    *pcVar33 = (*pcVar33 - bVar42) - bVar121;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x47:
    pauVar32 = (undefined1 (*) [16])0x0;
code_r0x000141927342:
    pcVar33 = (char *)((longlong)pauVar32[-8] + 0xb);
    *pcVar33 = *pcVar33 + (byte)arg0;
    pbVar10 = (byte *)((longlong)pauVar115[-8] + 5);
    *pbVar10 = *pbVar10 & (byte)arg0;
    ppcVar80 = (char **)pppppppuVar79;
code_r0x000141927349:
    pppppppuVar79 = (undefined8 *******)ppcVar80;
    *(undefined1 *)((longlong)pauVar54[4] + ((longlong)pppppppuVar110 + 1) * 8) = 0;
    pppppppuVar110 = (undefined8 *******)(ulonglong)((int)param_2 - 0x70);
    goto code_r0x000141927350;
  case 0x48:
  case 0x4a:
    (*pauVar32)[0] = (*pauVar32)[0] + cVar25;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x49:
    pauVar39 = (undefined1 (*) [16])0x43359f98;
    goto LAB_141927343;
  case 0x4d:
    goto code_r0x000141927350;
  case 0x4e:
  case 0x54:
  case 0x55:
    goto LAB_14192727c;
  case 0x4f:
    uVar44 = (ulonglong)*(uint *)(&UNK_143359e80 + uVar44);
    goto code_r0x000141927347;
  case 0x50:
    arg0 = (undefined1 (*) [16])
           CONCAT62((int6)((ulonglong)arg0 >> 0x10),
                    CONCAT11((char)((ulonglong)arg0 >> 8) - (*param_2)[0],bVar42));
    piVar2 = (int *)((longlong)pppppppuVar110 + (longlong)arg0 * 4 + 0x1d);
    *piVar2 = *piVar2 + (int)arg0;
    pauVar32 = (undefined1 (*) [16])CONCAT71(uVar41,cVar25 + ']');
    ppcVar73 = (char **)pppppppuVar79;
code_r0x00014192732c:
    pppppppuVar79 = (undefined8 *******)ppcVar73;
    piVar2 = (int *)((longlong)pauVar32[-8] + 0xd);
    *piVar2 = *piVar2 + (int)arg0;
    goto LAB_141927343;
  case 0x51:
  case 0x53:
    cVar25 = cVar25 + (*pauVar32)[0];
    pauVar32 = (undefined1 (*) [16])CONCAT71(uVar41,cVar25);
    (*pauVar32)[0] = (*pauVar32)[0] + cVar25;
    goto code_r0x0001419272f1;
  case 0x52:
    goto code_r0x000141927311;
  case 0x56:
code_r0x000141927333:
    ppcVar73 = (char **)pppppppuVar79;
    goto code_r0x00014192733a;
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5f:
    pcVar33 = (char *)((longlong)pauVar32[-8] + 0xb);
    *pcVar33 = *pcVar33 + bVar42;
    pbVar10 = (byte *)((longlong)pauVar32[-8] + 0xb);
    *pbVar10 = *pbVar10 | bVar42;
    ppcVar72 = (char **)((longlong)pppppppuVar79 + -8);
    *(undefined1 (**) [16])((longlong)pppppppuVar79 + -8) = pauVar32;
    pbVar10 = (byte *)((longlong)pppppppuVar110 + (longlong)arg0 * 4 + 0x41);
    *pbVar10 = *pbVar10 | bVar42;
    *(int *)((longlong)arg0 * 5) = *(int *)((longlong)arg0 * 5) + uVar29;
    goto code_r0x000141925e35;
  case 0x5c:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    (*pauVar32)[0] = (*pauVar32)[0] + cVar25;
    ppcVar73 = (char **)pppppppuVar79;
code_r0x000141925db8:
    ppppppuVar31 = pppppppuVar110[0xda];
    uVar29 = *(uint *)(pppppppuVar110 + 0xdb);
    unaff_R12 = (undefined1 (*) [16])(ulonglong)uVar29;
    pauVar54 = (undefined1 (*) [16])(pppppppuVar110 + 0xdd);
    *(undefined8 *)((longlong)ppcVar73 + -8) = 0x141925ddc;
    pub_142e32760(pppppppuVar110 + -10,pauVar54,0x1f0);
    ppcVar70 = ppcVar73;
    if ((int)pauVar39 != 2) {
      pppppppuVar110[0x158] = ppppppuVar31;
      *(uint *)(pppppppuVar110 + 0x159) = uVar29;
      pppppppuVar110[0x34] = (undefined8 ******)pauVar39;
      *(undefined8 *)((longlong)ppcVar73 + -8) = 0x141926f24;
      pub_142e32760(pppppppuVar110 + 0x35,pppppppuVar110 + -10,0x1f0);
      if (((ulonglong)param_1 >> 0x30 & 1) != 0) {
        if (2 < *(ulonglong *)*_DAT_143ca8e90) {
          pppppppuVar110[0xda] = (undefined8 ******)&UNK_143359270;
          pppppppuVar110[0xdb] = (undefined8 ******)0x26;
          pppppppuVar110[0xdc] = (undefined8 ******)&UNK_143359270;
          pppppppuVar110[0xdd] = (undefined8 ******)0x26;
          pppppppuVar110[0xde] = (undefined8 ******)&UNK_143359760;
          *(undefined1 *)((longlong)pppppppuVar110 + 0xb91) = 1;
          pauVar117 = (undefined1 (*) [16])(pppppppuVar110 + 0xda);
          *(undefined8 *)((longlong)ppcVar73 + -8) = 0x141926f9d;
          pdb_1400c9be0(&UNK_143359722,0x77,3);
        }
        if (pppppppuVar110[0x41] != (undefined8 ******)0x0) {
          ppppppuVar46 = pppppppuVar110[0x40];
          ppppppuVar47 = ppppppuVar46 + (longlong)pppppppuVar110[0x41] * 5;
          pauVar117 = (undefined1 (*) [16])0x2492492492492493;
          do {
            pppppuVar35 = ppppppuVar46[4];
            if (pppppuVar35 != (undefined8 *****)0x0) {
              pppppuVar113 = ppppppuVar46[3];
              uVar44 = (longlong)pppppuVar35 * 0x70 - 0x70;
              auVar11._8_8_ = 0;
              auVar11._0_8_ = uVar44 >> 4;
              uVar111 = SUB164(auVar11 * ZEXT816(0x2492492492492493),8);
              pppppuVar38 = pppppuVar113;
              if ((~uVar111 & 3) != 0) {
                lVar56 = -(ulonglong)(uVar111 + 1 & 3);
                do {
                  if (*(int *)(pppppuVar38 + 1) == 2) {
                    *(undefined4 *)(pppppuVar38 + 9) = 999;
                  }
                  pppppuVar38 = pppppuVar38 + 0xe;
                  lVar56 = lVar56 + 1;
                } while (lVar56 != 0);
              }
              if (0x14f < uVar44) {
                do {
                  if (*(int *)(pppppuVar38 + 1) == 2) {
                    *(undefined4 *)(pppppuVar38 + 9) = 999;
                    if (*(int *)(pppppuVar38 + 0xf) != 2) goto LAB_14192703e;
LAB_141927066:
                    *(undefined4 *)(pppppuVar38 + 0x17) = 999;
                    if (*(int *)(pppppuVar38 + 0x1d) != 2) goto LAB_141927079;
LAB_141927047:
                    *(undefined4 *)(pppppuVar38 + 0x25) = 999;
                    iVar27 = *(int *)(pppppuVar38 + 0x2b);
                  }
                  else {
                    if (*(int *)(pppppuVar38 + 0xf) == 2) goto LAB_141927066;
LAB_14192703e:
                    if (*(int *)(pppppuVar38 + 0x1d) == 2) goto LAB_141927047;
LAB_141927079:
                    iVar27 = *(int *)(pppppuVar38 + 0x2b);
                  }
                  if (iVar27 == 2) {
                    *(undefined4 *)(pppppuVar38 + 0x33) = 999;
                  }
                  pppppuVar38 = pppppuVar38 + 0x38;
                } while (pppppuVar38 != pppppuVar113 + (longlong)pppppuVar35 * 0xe);
              }
            }
            ppppppuVar46 = ppppppuVar46 + 5;
          } while (ppppppuVar46 != ppppppuVar47);
        }
      }
      pppppppuVar110[0x16c] = ppppppuVar31;
      if (((ulonglong)param_1 >> 0x28 & 1) != 0) {
code_r0x0001419270ce:
        pppppppuVar79 = (undefined8 *******)ppcVar73;
        if (2 < *(ulonglong *)*_DAT_143ca8e90) goto code_r0x0001419270de;
        goto LAB_14192713d;
      }
      goto LAB_1419274ae;
    }
LAB_141925de5:
    *(undefined4 *)((longlong)param_4[6] + 8) = 0xffffffff;
    *(int *)(pppppppuVar110 + 0x164) = (int)param_1;
    ppcVar72 = ppcVar70;
    goto LAB_141925df4;
  case 0x69:
code_r0x00014192a13b:
    (*pauVar32)[0] = (*pauVar32)[0];
    (*pauVar32)[0] = (*pauVar32)[0] + (char)pauVar32;
    goto code_r0x00014192a140;
  case 0x6a:
  case 0x6b:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x6c:
    pauVar39 = (undefined1 (*) [16])(ulonglong)((int)pauVar39 + 0x18);
code_r0x00014192a140:
    while( true ) {
      param_2 = (undefined1 (*) [16])((longlong)param_2[-1] + 0xf);
      pauVar117 = param_4 + 1;
      if (param_2 == (undefined1 (*) [16])0x0) break;
code_r0x00014192a149:
      param_4 = (undefined1 (*) [16])((longlong)*pauVar117 + 8);
      lVar56 = *(longlong *)*pauVar117;
      if (lVar56 != 0) {
        pbVar10 = *(byte **)*param_4;
        *(undefined **)((longlong)pppppppuVar79 + -8) = &UNK_14192a164;
        pub_1406abac0(pbVar10,lVar56 << 3,8);
        pauVar32 = extraout_RAX_01;
      }
    }
code_r0x00014192a166:
    if (param_3 == (undefined1 (*) [16])0x0) {
      return pauVar32;
    }
    lVar56 = (longlong)param_3 * 0x18;
code_r0x0001406abac0:
    *(undefined8 *)((longlong)pppppppuVar79 + 0x50) =
         *(undefined8 *)((longlong)pppppppuVar79 + 0x50);
    *(undefined8 *)((longlong)pppppppuVar79 + 0x48) =
         *(undefined8 *)((longlong)pppppppuVar79 + 0x40);
    *(undefined **)((longlong)pppppppuVar79 + 0x18) = &UNK_140f3c37e;
    uVar30 = GetProcessHeap(pauVar39,lVar56);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pauVar39 = (undefined1 (*) [16])HeapFree(uVar30,0,pauVar39);
    return pauVar39;
  case 0x6d:
    if (!SCARRY8(uVar44,0x143359e60)) {
      (*param_3)[0] =
           (*param_3)[0] +
           (bVar42 ^ (byte)*(undefined4 *)((longlong)pppppppuVar110 + (longlong)arg0 * 4 + 0x76));
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    param_2 = *(undefined1 (**) [16])(&UNK_143359e70 + uVar44);
    pauVar117 = pauVar39;
    if (param_2 != (undefined1 (*) [16])0x0) goto code_r0x00014192a149;
    goto code_r0x00014192a166;
  case 0x6e:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x6f:
    (*pauVar32)[0] = (*pauVar32)[0] + cVar25;
    pcVar33 = (char *)((longlong)pauVar32[-4] + 7);
    *pcVar33 = *pcVar33 + bVar42;
    puVar48 = &UNK_143359e5f + uVar44;
    if (puVar48 == (undefined *)0x0 || *pcVar33 == '\0') {
      (*pauVar32)[0] = (*pauVar32)[0] + cVar25;
      pcVar33 = (char *)((longlong)pauVar32[-8] + 9);
      *pcVar33 = *pcVar33 + (char)puVar48;
      *(undefined8 *)((longlong)pppppppuVar79 + -8) = 0x14192a40e;
      ppppppuVar31 = (undefined8 ******)func_0x000131d86b56();
      cVar24 = (char)ppppppuVar31;
      *(char *)ppppppuVar31 = *(char *)ppppppuVar31 + cVar24;
      *(char *)(ppppppuVar31 + -9) = *(char *)(ppppppuVar31 + -9) + (char)puVar48;
      *(int *)ppppppuVar31 = *(int *)ppppppuVar31 + (int)ppppppuVar31;
      *(char *)ppppppuVar31 = *(char *)ppppppuVar31 + cVar24;
      *(char *)ppppppuVar31 = *(char *)ppppppuVar31 + cVar24;
      goto code_r0x00014192a41c;
    }
    (*pauVar32)[0] = (*pauVar32)[0] + cVar25;
    goto code_r0x00014192a406;
  case 0x70:
  case 0x71:
    pauVar32 = (undefined1 (*) [16])((ulonglong)uVar41 << 8);
    ppcVar91 = (char **)pppppppuVar79;
code_r0x00014192a3cd:
    (*pauVar32)[0] = (*pauVar32)[0] + (char)pauVar32;
    pcVar33 = (char *)((longlong)pauVar32[-8] + 0xd);
    *pcVar33 = *pcVar33 + (char)arg0;
    ppcVar22 = ppcVar91;
code_r0x00014192a3c8:
    pppppppuVar51 = (undefined8 *******)ppcVar22;
    pppppppuVar110[-10] = (undefined8 ******)0x0;
    pauVar32 = (undefined1 (*) [16])&UNK_143359270;
    pppppppuVar110[-9] = (undefined8 ******)&UNK_143359270;
    pppppppuVar110[-8] = (undefined8 ******)0x26;
    pppppppuVar110[-7] = (undefined8 ******)0x0;
    goto code_r0x00014192a3eb;
  case 0x72:
    goto code_r0x00014192a3fe;
  case 0x73:
code_r0x00014192a3df:
    (*pauVar32)[0] = (*pauVar32)[0] + (char)pauVar32;
    pcVar33 = (char *)((longlong)pauVar32[-4] + 7);
    *pcVar33 = *pcVar33 + (char)arg0;
    pppppppuVar51 = (undefined8 *******)((longlong)ppcVar92 + -8);
    *(undefined8 ********)((longlong)ppcVar92 + -8) = pppppppuVar110;
code_r0x00014192a3ea:
    pcVar33 = (char *)((longlong)pauVar32[-8] + 0xd);
    *pcVar33 = *pcVar33 + (char)arg0;
    pauVar32 = (undefined1 (*) [16])(ulonglong)((uint)pauVar32 | 0x1a2edd2);
    pppppppuVar110 = pppppppuVar51;
code_r0x00014192a3eb:
    pppppppuVar110[-6] = (undefined8 ******)&UNK_1433591c4;
    pppppppuVar110[-5] = (undefined8 ******)0x31;
    pppppppuVar79 = pppppppuVar51;
code_r0x00014192a3fe:
    pppppppuVar110[-4] = (undefined8 ******)0x1;
code_r0x00014192a406:
    pppppppuVar110[-3] = (undefined8 ******)pauVar32;
    pppppppuVar110[-2] = (undefined8 ******)0x26;
    ppppppuVar31 = (undefined8 ******)0x23800000001;
code_r0x00014192a41c:
    pppppppuVar110[-1] = ppppppuVar31;
    *pppppppuVar110 = (undefined8 ******)&UNK_1433596c5;
    pppppppuVar110[1] = (undefined8 ******)param_3;
    *(undefined8 *)((longlong)pppppppuVar79 + -8) = 0x14192a43c;
    pdb_140f332f0((longlong)pppppppuVar110 + 0x5f,pppppppuVar110 + -10);
    pauVar117 = (undefined1 (*) [16])pppppppuVar110[6];
    uStack_490 = pppppppuVar110[7];
    ppcVar93 = (char **)pppppppuVar79;
    if (SBORROW8(0,(longlong)pauVar117)) {
code_r0x00014192a453:
      *(undefined1 (**) [16])*pauVar39 = param_2;
      pppppuVar35 = *uStack_490;
      pppppppuVar110[10] = uStack_490;
      if (pppppuVar35 == (undefined8 *****)0x1) {
        *(undefined8 *)((longlong)ppcVar93 + -8) = 0x14192a4a8;
        pdb_1404b38e0(uStack_490 + 1);
      }
      else if ((pppppuVar35 == (undefined8 *****)0x0) &&
              (pppppuVar35 = pppppppuVar110[10][2], pppppuVar35 != (undefined8 *****)0x0)) {
        pppppuVar113 = pppppppuVar110[10][1];
        *(undefined8 *)((longlong)ppcVar93 + -8) = 0x14192a488;
        pub_1406abac0((byte *)pppppuVar113,(ulonglong)pppppuVar35,1);
      }
      ppppppuVar31 = pppppppuVar110[10];
      *(undefined8 *)((longlong)ppcVar93 + -8) = 0x14192a4bd;
      pub_1406abac0((byte *)ppppppuVar31,0x28,8);
      pauVar117 = extraout_RAX_02;
    }
    else {
      ppppppuVar31 = pppppppuVar110[8];
      *(undefined1 (**) [16])*pauVar39 = pauVar117;
      *(undefined8 *******)((longlong)*pauVar39 + 8) = uStack_490;
      *(undefined8 *******)pauVar39[1] = ppppppuVar31;
    }
    return pauVar117;
  case 0x74:
    (*pauVar32)[0] = (*pauVar32)[0] + cVar24;
    ppppppuVar31 = (undefined8 ******)CONCAT71(uVar41,cVar25 + (*pauVar32)[0]);
    *(char *)((longlong)ppppppuVar31 + -0x77) = *(char *)((longlong)ppppppuVar31 + -0x77) + bVar42;
    goto code_r0x00014192a41c;
  case 0x75:
    *(int *)((longlong)pauVar39[-0x76b700f] + 6) = (int)ROUND(in_ST0);
  case 0x78:
    pbVar10 = (byte *)((longlong)pauVar115[-4] + 7);
    *pbVar10 = *pbVar10 ^ bVar43;
    (*pauVar115)[0] = (*pauVar115)[0];
    (*pauVar32)[0] = (*pauVar32)[0] + cVar25;
    ppcVar97 = (char **)pppppppuVar79;
code_r0x00014192a67e:
    pppppppuVar110[6] = (undefined8 ******)pdb_140a93d60;
    pppppppuVar110[-8] = (undefined8 ******)0x0;
    pppppppuVar110[-7] = (undefined8 ******)&UNK_143359270;
    pppppppuVar110[-6] = (undefined8 ******)0x26;
    pppppppuVar110[-5] = (undefined8 ******)0x0;
    pppppppuVar110[-4] = (undefined8 ******)&UNK_1433591c4;
    pppppppuVar110[-3] = (undefined8 ******)0x31;
    pppppppuVar110[-2] = (undefined8 ******)0x1;
    pppppppuVar110[-1] = (undefined8 ******)&UNK_143359270;
    *pppppppuVar110 = (undefined8 ******)0x26;
    pppppppuVar110[1] = (undefined8 ******)0x21d00000001;
    pppppppuVar110[2] = (undefined8 ******)&UNK_1433596fb;
    pppppppuVar110[3] = pppppppuVar110 + 5;
    *(undefined8 *)((longlong)ppcVar97 + -8) = 0x14192a701;
    pdb_140f332f0((undefined1 *)((longlong)pppppppuVar110 + 0x5f),pppppppuVar110 + -8);
    ppppppuVar31 = pppppppuVar110[10];
    ppcVar96 = ppcVar97;
    if (*(int *)(pppppppuVar110 + 9) == 1) {
code_r0x00014192a724:
      pppppuVar35 = *ppppppuVar31;
      pppppppuVar110[8] = ppppppuVar31;
      if (pppppuVar35 == (undefined8 *****)0x1) {
        *(undefined8 *)((longlong)ppcVar96 + -8) = 0x14192a761;
        pdb_1404b38e0(ppppppuVar31 + 1);
      }
      else if ((pppppuVar35 == (undefined8 *****)0x0) &&
              (pppppuVar35 = pppppppuVar110[8][2], pppppuVar35 != (undefined8 *****)0x0)) {
        pppppuVar113 = pppppppuVar110[8][1];
        *(undefined8 *)((longlong)ppcVar96 + -8) = 0x14192a756;
        pub_1406abac0((byte *)pppppuVar113,(ulonglong)pppppuVar35,1);
      }
      ppppppuVar31 = pppppppuVar110[8];
      *(undefined8 *)((longlong)ppcVar96 + -8) = 0x14192a776;
      pub_1406abac0((byte *)ppppppuVar31,0x28,8);
    }
    else {
      param_2 = (undefined1 (*) [16])((ulonglong)ppppppuVar31 & 0xffffffff);
    }
LAB_14192a776:
    return (undefined1 (*) [16])((ulonglong)param_2 & 0xffffffff);
  case 0x76:
  case 0x77:
code_r0x00014192a651:
    ppcVar95 = ppcVar94;
    if (*(char *)(pppppppuVar110 + 9) == '\0') {
      param_2 = (undefined1 (*) [16])(ulonglong)*(byte *)(pppppppuVar110 + 10);
      goto LAB_14192a776;
    }
code_r0x00014192a65b:
    pppppppuVar110[-9] = pppppppuVar110 + 10;
    pauVar32 = _DAT_143ca8e90;
    ppcVar96 = ppcVar95;
    goto code_r0x00014192a66a;
  case 0x79:
    ppcVar96 = (char **)pppppppuVar79;
code_r0x00014192a66a:
    if (*(longlong *)*pauVar32 != 0) {
      pppppppuVar110[5] = pppppppuVar110 + -9;
      ppcVar97 = ppcVar96;
      goto code_r0x00014192a67e;
    }
    ppppppuVar31 = pppppppuVar110[10];
    goto code_r0x00014192a724;
  case 0x7a:
    puVar98 = (undefined8 *)((longlong)pppppppuVar79 + -8);
    *(undefined8 ********)((longlong)pppppppuVar79 + -8) = pppppppuVar110;
    cVar24 = '\x04';
    do {
      pppppppuVar110 = pppppppuVar110 + -1;
      puVar98 = puVar98 + -1;
      *puVar98 = *pppppppuVar110;
      cVar24 = cVar24 + -1;
    } while ('\0' < cVar24);
    *(undefined1 **)((longlong)pppppppuVar79 + -0x30) = (undefined1 *)((longlong)pppppppuVar79 + -8)
    ;
    (*pauVar39)[0] = (*pauVar39)[0] << 1;
    (*pauVar32)[0] = (*pauVar32)[0] + cVar25;
    pcVar33 = (char *)((longlong)pauVar32[-4] + 7);
    *pcVar33 = *pcVar33 + bVar42;
    (*pauVar32)[0] = (*pauVar32)[0] + cVar25;
    pcVar33 = (char *)((longlong)pauVar32[-8] + 0xd);
    *pcVar33 = *pcVar33 + bVar42;
    ppcVar97 = (char **)((longlong)pppppppuVar79 + -0xc778);
    pppppppuVar110 = (undefined8 *******)((longlong)pppppppuVar79 + -8);
    goto code_r0x00014192a67e;
  case 0x7b:
    (*param_3)[0] = (byte)(*param_3)[0] >> 4 | (*param_3)[0] << 4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x7c:
  case 0x7d:
    LOCK();
    (*pauVar32)[0] = (*pauVar32)[0] + cVar25;
    UNLOCK();
    pcVar33 = (char *)((longlong)param_3[5] + 0xe);
    *pcVar33 = *pcVar33 + bVar116;
    return pauVar32;
  case 0x7e:
    pcVar33 = (char *)((longlong)pauVar115[-4] + 7);
    *pcVar33 = *pcVar33 + bVar43 + (0x43359e60 < uRam00000000cc7e9d76);
code_r0x00014192ab3e:
    (*pauVar32)[0] = (*pauVar32)[0] + (char)pauVar32;
    pcVar33 = (char *)((longlong)pauVar32[-8] + 0xd);
    *pcVar33 = *pcVar33 + (char)arg0;
    ppcVar99 = (char **)pppppppuVar79;
    goto code_r0x00014192ab26;
  case 0x7f:
code_r0x00014192aae8:
    pcVar33 = (char *)((longlong)pauVar32[-8] + 0xd);
    *pcVar33 = *pcVar33 + (char)arg0;
    pcVar33 = (char *)(CONCAT71((int7)((ulonglong)pauVar32 >> 8),(*pauVar39)[0]) &
                      0xffffffffffffff80);
    *pcVar33 = *pcVar33 + (char)pcVar33;
    pcVar33[-0x39] = pcVar33[-0x39] + (char)arg0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x80:
    (*pauVar115)[0] = (*pauVar115)[0];
    (*pauVar32)[0] = (*pauVar32)[0] + cVar25;
    ppcVar99 = (char **)pppppppuVar79;
code_r0x00014192ab26:
    arg0 = pauVar39;
    pppppppuVar110[1] = pppppppuVar110 + 3;
    pppppppuVar110[2] = (undefined8 ******)pdb_140a93d60;
    pppppppuVar110[-0xb] = (undefined8 ******)0x0;
    pppppppuVar110[-10] = (undefined8 ******)&UNK_143359270;
    pppppppuVar110[-9] = (undefined8 ******)0x26;
    pppppppuVar110[-8] = (undefined8 ******)0x0;
    pppppppuVar110[-7] = (undefined8 ******)&UNK_1433591c4;
    pppppppuVar110[-6] = (undefined8 ******)0x31;
    pppppppuVar110[-5] = (undefined8 ******)0x1;
    pppppppuVar110[-4] = (undefined8 ******)&UNK_143359270;
    pppppppuVar110[-3] = (undefined8 ******)0x26;
    pppppppuVar110[-2] = (undefined8 ******)0x22300000001;
    pppppppuVar110[-1] = (undefined8 ******)&UNK_1433596a3;
    *pppppppuVar110 = pppppppuVar110 + 1;
    *(undefined8 *)((longlong)ppcVar99 + -8) = 0x14192abb1;
    pdb_140f332f0((longlong)pppppppuVar110 + 0x2f,pppppppuVar110 + -0xb);
    pauVar54 = (undefined1 (*) [16])pppppppuVar110[4];
LAB_14192abb9:
    pauVar39 = *(undefined1 (**) [16])pauVar54[1];
    *(undefined1 (**) [16])arg0[1] = pauVar39;
    uVar30 = *(undefined8 *)((longlong)*pauVar54 + 8);
    *(undefined8 *)*arg0 = *(undefined8 *)*pauVar54;
    *(undefined8 *)((longlong)*arg0 + 8) = uVar30;
    return pauVar39;
  case 0x81:
code_r0x00014192ce70:
    while (param_2 = *(undefined1 (**) [16])*arg0, ppcVar102 = ppcVar104,
          param_2 != (undefined1 (*) [16])0x0) {
code_r0x00014192ce7c:
      param_3 = (undefined1 (*) [16])(ulonglong)*(ushort *)arg0[0x11];
      pauVar54 = (undefined1 (*) [16])0x178;
      if (pauVar32 == (undefined1 (*) [16])0x0) {
        pauVar54 = unaff_R12;
      }
      pauVar115 = (undefined1 (*) [16])0x8;
      pauVar50 = arg0;
      pppppppuVar79 = (undefined8 *******)ppcVar102;
      param_4 = (undefined1 (*) [16])((longlong)*pauVar32 + 1);
code_r0x00014192ce99:
      pauVar32 = param_4;
      arg0 = param_2;
      *(undefined **)((longlong)pppppppuVar79 + -8) = &UNK_14192ce9e;
      pub_1406abac0((byte *)pauVar50,(ulonglong)pauVar54,(ulonglong)pauVar115);
      ppcVar104 = (char **)pppppppuVar79;
      if ((ushort)param_3 < *(ushort *)((longlong)arg0[0x11] + 2)) {
        if (pauVar32 == (undefined1 (*) [16])0x0) {
          ppppppuVar31 = (undefined8 ******)((longlong)*param_3 + 1);
          pauVar117 = arg0;
        }
        else {
          plVar49 = (longlong *)((longlong)arg0[0x12] + param_3 * 8);
          pauVar117 = pauVar32;
          pauVar115 = pauVar32;
          if (((ulonglong)pauVar32 & 7) != 0) {
            uVar44 = 0;
            do {
              pauVar117 = (undefined1 (*) [16])*plVar49;
              plVar49 = (longlong *)((longlong)pauVar117[0x11] + 8);
              uVar44 = uVar44 + 1;
            } while (((ulonglong)pauVar32 & 7) != uVar44);
            pauVar115 = (undefined1 (*) [16])((longlong)pauVar32 - uVar44);
          }
          ppppppuVar31 = (undefined8 ******)0x0;
          if ((undefined1 (*) [16])0x7 < pauVar32) {
            do {
              ppppppuVar31 = (undefined8 ******)0x0;
              pauVar117 = *(undefined1 (**) [16])
                           (*(longlong *)
                             (*(longlong *)
                               (*(longlong *)
                                 (*(longlong *)
                                   (*(longlong *)(*(longlong *)(*plVar49 + 0x118) + 0x118) + 0x118)
                                 + 0x118) + 0x118) + 0x118) + 0x118);
              plVar49 = (longlong *)((longlong)pauVar117[0x11] + 8);
              pauVar115 = (undefined1 (*) [16])((longlong)pauVar115[-1] + 8);
            } while (pauVar115 != (undefined1 (*) [16])0x0);
          }
        }
        *(undefined1 (**) [16])*pauVar39 = arg0;
        *(undefined1 (**) [16])((longlong)*pauVar39 + 8) = pauVar32;
        *(undefined1 (**) [16])pauVar39[1] = param_3;
        *(undefined1 (**) [16])((longlong)*param_1 + 8) = pauVar117;
        *(undefined8 *******)param_1[1] = (undefined8 ******)0x0;
        *(undefined8 *******)((longlong)param_1[1] + 8) = ppppppuVar31;
        return pauVar39;
      }
    }
code_r0x00014192cfd3:
    uVar44 = 0x178;
    if (pauVar32 == (undefined1 (*) [16])0x0) {
      uVar44 = 0x118;
    }
    *(undefined **)((longlong)ppcVar104 + -8) = &UNK_14192cfef;
    pub_1406abac0((byte *)arg0,uVar44,8);
                    /* WARNING: Subroutine does not return */
    *(undefined **)((longlong)ppcVar104 + -8) = &UNK_14192cffc;
    pdb_142dc8150(&UNK_143359c30);
  case 0x82:
  case 0x83:
code_r0x00014192ce44:
    ppcVar100 = ppcVar21;
    (*pauVar32)[0] = (*pauVar32)[0] + (char)pauVar32;
    bVar121 = (*pauVar32)[0] == '\0';
    arg0 = param_3;
code_r0x00014192ce46:
    if (bVar121) {
      pauVar54 = pauVar32;
    }
    pauVar115 = (undefined1 (*) [16])0x8;
code_r0x00014192ce53:
    *(undefined **)((longlong)ppcVar100 + -8) = &UNK_14192ce58;
    pub_1406abac0((byte *)arg0,(ulonglong)pauVar54,(ulonglong)pauVar115);
  case 0x85:
    *(undefined8 *)*pauVar39 = 0;
    return pauVar39;
  case 0x84:
    pauVar39 = (undefined1 (*) [16])(ulonglong)(iVar27 + 1);
    ppcVar102 = (char **)pppppppuVar79;
    goto code_r0x00014192ce7c;
  case 0x86:
    goto code_r0x00014192ce99;
  case 0x87:
    (*pauVar32)[0] = (*pauVar32)[0] + cVar25;
    pcVar33 = (char *)((longlong)pauVar32[-8] + 0xb);
    *pcVar33 = *pcVar33 + bVar42;
    pauStack_510 = (undefined1 (*) [16])((ulonglong)pauVar32 & 0xffffffffffffff38);
    goto code_r0x00014192d0dd;
  case 0x88:
  case 0x89:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x8a:
    *(int *)(&UNK_143359e78 + uVar44) = iVar27;
    pauStack_510 = pauVar32;
code_r0x00014192d0dd:
    *(undefined1 (**) [16])((longlong)arg0[1] + 8) = pauStack_510;
    *(undefined8 *)((longlong)*arg0 + 8) = *(undefined8 *)((longlong)ppcVar103 + 0x28);
    pauVar39 = *(undefined1 (**) [16])((longlong)ppcVar103 + 0x30);
    *(undefined1 (**) [16])arg0[1] = pauVar39;
    (*arg0)[0] = 5;
    return pauVar39;
  case 0x8b:
    pbVar10 = (byte *)((longlong)pauVar32[-8] + 5);
    *pbVar10 = *pbVar10 | bVar42;
    *(undefined1 *)((longlong)param_3[4] + (longlong)arg0 * 2 + 8) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x8c:
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    pauVar39 = (undefined1 (*) [16])(*UNRECOVERED_JUMPTABLE)();
    return pauVar39;
  case 0x8d:
code_r0x00014192d369:
    *(int *)arg0[1] = (int)pauVar32;
    ppcVar107 = ppcVar108;
    goto code_r0x00014192d36c;
  case 0x8e:
  case 0x8f:
    ppcVar105 = (char **)pppppppuVar79;
code_r0x00014192d32d:
    pauVar32 = (undefined1 (*) [16])(ulonglong)*(uint *)((longlong)*pauVar54 + 8);
    ppcVar23 = ppcVar105;
    if (pauVar32 == (undefined1 (*) [16])0x0) {
      *(undefined1 *)((longlong)pppppppuVar110 + 0x5e) = 1;
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)ppcVar105 + -8) = 0x14192d712;
      pdb_142dc8150(&UNK_143359d48);
    }
code_r0x00014192d339:
    ppcVar106 = ppcVar23;
    *(undefined1 *)((longlong)pppppppuVar110 + 0x5e) = 1;
code_r0x00014192d341:
    pppppppuVar51 = pppppppuVar110 + 2;
    ppcVar107 = ppcVar106;
code_r0x00014192d345:
    *(undefined8 *)((longlong)ppcVar107 + -8) = 0x14192d34d;
    pdb_14192d190(pppppppuVar51,pauVar32);
code_r0x00014192d360:
    arg0 = (undefined1 (*) [16])(pppppppuVar110 + 7);
    pppppppuVar110[9] = pppppppuVar110[4];
code_r0x00014192d36c:
    *(undefined8 *******)*arg0 = pppppppuVar110[2];
    *(undefined8 *******)((longlong)*arg0 + 8) = pppppppuVar110[3];
    *(undefined1 *)(pppppppuVar110 + 6) = 5;
    ppcVar109 = ppcVar107;
code_r0x00014192d380:
    param_4 = (undefined1 (*) [16])((longlong)*param_4 + 1);
code_r0x00014192d383:
    pauVar54 = *(undefined1 (**) [16])((longlong)param_3[0x27] + ((longlong)*param_4 + 1) * 8);
    *(undefined1 *)((longlong)pppppppuVar110 + 0x5d) = 1;
    arg0 = (undefined1 (*) [16])(pppppppuVar110 + -0xc);
    ppcVar104 = ppcVar109;
code_r0x00014192d399:
    *(undefined8 *)((longlong)ppcVar104 + -8) = 0x14192d39e;
    pdb_14192d190(arg0,pauVar54);
    ppppppuVar31 = pppppppuVar110[-0xc];
    ppppppuVar47 = pppppppuVar110[-0xb];
    ppppppuVar46 = pppppppuVar110[-10];
    pppppppuVar110[-6] = pppppppuVar110[-4];
    pppppppuVar110[-5] = pppppppuVar110[-3];
    ppppppuVar36 = pppppppuVar110[-2];
    pppppppuVar110[4] = pppppppuVar110[8];
    pppppppuVar110[5] = pppppppuVar110[9];
    pppppppuVar110[2] = pppppppuVar110[6];
    pppppppuVar110[3] = pppppppuVar110[7];
    if (ppppppuVar31 == (undefined8 ******)0x0) {
      *(undefined8 *)((longlong)ppcVar104 + -8) = 0x14192d3d9;
      pdb_14007ee60();
      *(undefined8 *)((longlong)ppcVar104 + -8) = 0x14192d3e8;
      ppppppuVar31 = (undefined8 ******)pub_1406abab0(0x278,8);
      if (ppppppuVar31 == (undefined8 ******)0x0) {
        *(undefined1 *)((longlong)pppppppuVar110 + 0x5c) = 1;
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)ppcVar104 + -8) = 0x14192d6ff;
        pdb_142dc7e11(8,0x278);
      }
      ppppppuVar31[0x2c] = (undefined8 *****)0x0;
      ((byte *)((longlong)ppppppuVar31 + 0x272))[0] = 0;
      ((byte *)((longlong)ppppppuVar31 + 0x272))[1] = 0;
      ppppppuVar47 = (undefined8 ******)0x0;
    }
    if (ppppppuVar47 != pppppppuVar110[-9]) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)ppcVar104 + -8) = 0x14192d6ad;
      pdb_142dc83b0(&UNK_1433a4388,0x30,&UNK_1433a43b8);
    }
    ppppppuVar47 = pppppppuVar110[-8];
    uVar5 = *(ushort *)((longlong)ppppppuVar47 + 0x272);
    uVar44 = (ulonglong)uVar5;
    if (10 < uVar44) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)ppcVar104 + -8) = 0x14192d6cb;
      pdb_142dc83b0(&UNK_1433a4350,0x20,&UNK_1433a43d0);
    }
    *(ushort *)((longlong)ppppppuVar47 + 0x272) = uVar5 + 1;
    *(undefined8 *******)((longlong)unaff_R12 + uVar44 * 0x18) = pppppppuVar110[-6];
    *(undefined8 *******)((longlong)unaff_R12 + uVar44 * 0x18 + 8) = pppppppuVar110[-5];
    *(undefined8 *******)((longlong)unaff_R12 + uVar44 * 0x18 + 0x10) = ppppppuVar36;
    ppppppuVar36 = pppppppuVar110[6];
    ppppppuVar37 = pppppppuVar110[7];
    ppppppuVar114 = pppppppuVar110[9];
    ppppppuVar47[(ulonglong)uVar5 * 4 + 2] = pppppppuVar110[8];
    (ppppppuVar47 + (ulonglong)uVar5 * 4 + 2)[1] = ppppppuVar114;
    ppppppuVar47[(ulonglong)uVar5 * 4] = ppppppuVar36;
    (ppppppuVar47 + (ulonglong)uVar5 * 4)[1] = ppppppuVar37;
    ppppppuVar47[uVar44 + 0x50] = ppppppuVar31;
    ppppppuVar31[0x2c] = ppppppuVar47;
    *(ushort *)(ppppppuVar31 + 0x4e) = uVar5 + 1;
    pppppppuVar110[1] =
         (undefined8 ******)((longlong)ppppppuVar46 + 1 + (longlong)pppppppuVar110[1]);
code_r0x00014192d48c:
    if (param_4 < (undefined1 (*) [16])(ulonglong)*(ushort *)((longlong)param_3[0x27] + 2)) {
code_r0x00014192d280:
      *(undefined8 *)((longlong)ppcVar104 + -8) = 0x14192d298;
      pdb_140f60be0(pppppppuVar110 + -4,(longlong)param_3 + (longlong)param_4 * 0x18 + 0x168);
                    /* WARNING: Could not recover jumptable at 0x00014192d2ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pauVar39 = (undefined1 (*) [16])
                 (*(code *)((longlong)*param_1 +
                           (longlong)
                           *(int *)((longlong)*param_1 +
                                   (ulonglong)(byte)param_3[(longlong)param_4 * 2][0] * 4)))();
      return pauVar39;
    }
LAB_14192d49c:
    pauVar39 = (undefined1 (*) [16])pppppppuVar110[1];
    ppppppuVar31 = pppppppuVar110[-7];
    ppppppuVar31[2] = (undefined8 *****)pauVar39;
    ppppppuVar47 = *pppppppuVar110;
    *ppppppuVar31 = pppppppuVar110[-1];
    ppppppuVar31[1] = ppppppuVar47;
    return pauVar39;
  case 0x90:
code_r0x00014192d372:
    puVar1 = (uint *)((longlong)pauVar32[-8] + 0xb);
    uVar29 = *puVar1;
    *puVar1 = *puVar1 + (uint)arg0;
    pcVar33 = (char *)((longlong)pauVar115[-8] + 9);
    *pcVar33 = (*pcVar33 - (char)pauVar117) - CARRY4(uVar29,(uint)arg0);
    param_4 = (undefined1 (*) [16])
              CONCAT71((int7)((ulonglong)param_4 >> 8),(byte)param_4 | (byte)pauVar32);
    bRam0000000108921d13 = bRam0000000108921d13 ^ (byte)pauVar115;
    goto code_r0x00014192d383;
  case 0x91:
    puVar1 = (uint *)((longlong)pauVar32[-8] + 0xd);
    uVar111 = *puVar1;
    *puVar1 = *puVar1 + uVar29;
    pcVar33 = (char *)((longlong)pauVar115[-8] + 9);
    *pcVar33 = *pcVar33 + bVar43 + CARRY4(uVar111,uVar29);
    return pauVar32;
  case 0x92:
    goto code_r0x00014192d399;
  }
code_r0x0001419210f5:
  *(undefined **)((longlong)ppcVar62 + 0x20) = &UNK_1433978a0;
  *(undefined8 *)((longlong)ppcVar62 + 0x28) = 9;
  *(undefined8 *)((longlong)ppcVar62 + -8) = 0x14192112a;
  pdb_141500ba0(pppppppuVar110 + 0x19,pppppppuVar110 + 0x32,&UNK_143397826,0x18);
  if (*(int *)(pppppppuVar110 + 0x19) == 1) {
    ppppppuVar31 = pppppppuVar110[0x1a];
    pppppppuVar110[0x2e] = ppppppuVar31;
    *(undefined1 *)((longlong)pppppppuVar110 + 0x3cf) = 1;
    *(undefined8 *)((longlong)ppcVar62 + -8) = 0x141921159;
    pdb_140f3f5b0(pppppppuVar110 + 0x32);
    *(undefined4 *)(pppppppuVar110 + 0x5e) = *(undefined4 *)(pppppppuVar110 + 0x36);
    *(undefined4 *)((longlong)pppppppuVar110 + 0x2f4) =
         *(undefined4 *)((longlong)pppppppuVar110 + 0x1b4);
    *(undefined4 *)(pppppppuVar110 + 0x5f) = *(undefined4 *)(pppppppuVar110 + 0x37);
    *(undefined4 *)((longlong)pppppppuVar110 + 0x2fc) =
         *(undefined4 *)((longlong)pppppppuVar110 + 0x1bc);
    pppppppuVar110[0x5c] = pppppppuVar110[0x34];
    pppppppuVar110[0x5d] = pppppppuVar110[0x35];
    pppppppuVar110[0x5a] = pppppppuVar110[0x32];
    pppppppuVar110[0x5b] = pppppppuVar110[0x33];
    pppppppuVar110[0x32] = (undefined8 ******)&UNK_143359211;
    pppppppuVar110[0x33] = (undefined8 ******)0xe;
    pppppppuVar110[0x34] = ppppppuVar31;
    *(undefined1 *)((longlong)pppppppuVar110 + 0x3cf) = 0;
    *(undefined8 *)((longlong)ppcVar62 + -8) = 0x1419211be;
    ppppppuVar31 = (undefined8 ******)pdb_142de9590(pppppppuVar110 + 0x32,pppppppuVar110 + 0x5a);
code_r0x0001419211bf:
    *(undefined8 *******)((longlong)*param_1 + 8) = ppppppuVar31;
    *(undefined8 *******)*param_1 = (undefined8 ******)0x8000000000000000;
  }
  else {
    *(undefined4 *)(pppppppuVar110 + 0x28) = *(undefined4 *)((longlong)pppppppuVar110 + 0xcc);
    pppppppuVar110[5] = pppppppuVar110[0x1a];
    pppppppuVar110[-6] = pppppppuVar110[0x1b];
    pppppppuVar110[-5] = pppppppuVar110[0x1c];
    pppppppuVar110[-4] = pppppppuVar110[0x1d];
    *(undefined8 *)((longlong)ppcVar62 + -8) = 0x141921317;
    pauVar117 = (undefined1 (*) [16])pdb_141c0c220(&UNK_14335921f,0xb,pppppppuVar110 + 0x6e);
    if (pauVar117 == (undefined1 (*) [16])0x0) {
      pauVar117 = _DAT_143cad928;
    }
    *(undefined8 *)((longlong)ppcVar62 + -8) = 0x141921333;
    pdb_14192d030(pppppppuVar110 + 0x5a,pauVar117);
    *(undefined **)((longlong)ppcVar62 + 0x20) = &UNK_14304c9c8;
    *(undefined8 *)((longlong)ppcVar62 + 0x28) = 3;
    *(undefined8 *)((longlong)ppcVar62 + -8) = 0x141921369;
    pdb_1415020f0(pppppppuVar110 + 0x32,pppppppuVar110 + 0x5a,&UNK_14304c98f,9);
    if (*(char *)(pppppppuVar110 + 0x32) == '\0') {
      *(undefined4 *)((longlong)pppppppuVar110 + 0x394) =
           *(undefined4 *)((longlong)pppppppuVar110 + 0x194);
      unaff_XMM7 = *(undefined1 (*) [16])(pppppppuVar110 + 0x33);
      uVar130 = *(undefined4 *)(pppppppuVar110 + 0x35);
      uVar139 = *(undefined4 *)((longlong)pppppppuVar110 + 0x1ac);
      uVar140 = *(undefined4 *)(pppppppuVar110 + 0x36);
      uVar141 = *(undefined4 *)((longlong)pppppppuVar110 + 0x1b4);
      uVar142 = *(undefined4 *)(pppppppuVar110 + 0x37);
      *(undefined2 *)((longlong)pppppppuVar110 + 0x3be) =
           *(undefined2 *)((longlong)pppppppuVar110 + 0x1bc);
    }
    else {
      *(undefined8 *)((longlong)ppcVar62 + -8) = 0x141921383;
      pdb_1404b4b10(pppppppuVar110 + 0x33);
      *(undefined8 *)((longlong)ppcVar62 + -8) = 0x14192139c;
      pauVar117 = (undefined1 (*) [16])pdb_141c0c220(&UNK_14335921f,0xb,pppppppuVar110 + 0x6e);
      if (pauVar117 == (undefined1 (*) [16])0x0) {
        pauVar117 = _DAT_143cad928;
      }
      *(undefined8 *)((longlong)ppcVar62 + -8) = 0x1419213b8;
      pdb_14192d030(pppppppuVar110 + 0x32,pauVar117);
      *(undefined8 *)((longlong)ppcVar62 + -8) = 0x1419213cc;
      pdb_1414fde70(pppppppuVar110 + 0x5a,pppppppuVar110 + 0x32);
      if (*(int *)(pppppppuVar110 + 0x5a) == 1) {
        *(undefined8 *)((longlong)ppcVar62 + -8) = 0x1419213e6;
        pdb_1404b4b10(pppppppuVar110 + 0x5b);
        unaff_XMM7 = _UNK_1433590e0;
        uVar141 = _UNK_1433590dc;
        uVar140 = _UNK_1433590d8;
        uVar139 = _UNK_1433590d4;
        uVar130 = _UNK_1433590d0;
        uVar44 = *(ulonglong *)*_DAT_143ca8e90;
        *(undefined4 *)((longlong)pppppppuVar110 + 0x394) = 0;
        uVar142 = 0;
        *(undefined2 *)((longlong)pppppppuVar110 + 0x3be) = 0xcf;
        if (1 < uVar44) {
          pppppppuVar110[0x32] = (undefined8 ******)&UNK_143359270;
          pppppppuVar110[0x33] = (undefined8 ******)0x26;
          pppppppuVar110[0x34] = (undefined8 ******)&UNK_143359270;
          pppppppuVar110[0x35] = (undefined8 ******)0x26;
          pppppppuVar110[0x36] = (undefined8 ******)&UNK_143359258;
          *(undefined8 *)((longlong)ppcVar62 + -8) = 0x141921478;
          pdb_1400c9be0(&UNK_14335922a,0x51,2,pppppppuVar110 + 0x32);
        }
      }
      else {
        auVar17._4_4_ = _UNK_1433590c8;
        auVar17._0_4_ = *(undefined4 *)((longlong)pppppppuVar110 + 0x2d4);
        auVar17._8_4_ = _UNK_1433590cc;
        auVar17._12_4_ = 0;
        unaff_XMM7 = auVar17 << 0x20;
        *(undefined4 *)((longlong)pppppppuVar110 + 0x394) = 0;
        uVar142 = 0;
        *(undefined2 *)((longlong)pppppppuVar110 + 0x3be) = 0xcf;
        uVar130 = _UNK_1433590d0;
        uVar139 = _UNK_1433590d4;
        uVar140 = _UNK_1433590d8;
        uVar141 = _UNK_1433590dc;
      }
    }
    *(undefined8 *)((longlong)ppcVar62 + -8) = 0x1419214f6;
    uVar30 = pdb_141c0c220(&UNK_143359296,3,pppppppuVar110 + 0x6e);
    *(undefined8 *)((longlong)ppcVar62 + -8) = 0x141921503;
    pdb_14192a7f0(pppppppuVar110 + -10,uVar30);
    *(undefined8 *)((longlong)ppcVar62 + -8) = 0x14192151c;
    uVar30 = pdb_141c0c220(&UNK_143359299,0xd,pppppppuVar110 + 0x6e);
    *(undefined8 *)((longlong)ppcVar62 + -8) = 0x141921525;
    uVar26 = pdb_14192a550(uVar30);
    *(undefined1 *)((longlong)pppppppuVar110 + 0x3bd) = uVar26;
    *(undefined8 *)((longlong)ppcVar62 + -8) = 0x141921547;
    pauVar117 = (undefined1 (*) [16])pdb_141c0c220(&UNK_1433592a6,5,pppppppuVar110 + 0x6e);
    if (pauVar117 == (undefined1 (*) [16])0x0) {
      pauVar117 = _DAT_143cad928;
    }
    *(undefined8 *)((longlong)ppcVar62 + -8) = 0x141921563;
    pdb_14192d030(pppppppuVar110 + 0x32,pauVar117);
    *(undefined **)((longlong)ppcVar62 + 0x20) = &UNK_143397e40;
    *(undefined8 *)((longlong)ppcVar62 + 0x28) = 1;
    *(undefined8 *)((longlong)ppcVar62 + -8) = 0x141921599;
    pdb_141500e70(pppppppuVar110 + 0x5a,pppppppuVar110 + 0x32,&UNK_143397e20,0x14);
    *(undefined8 *)((longlong)ppcVar62 + -8) = 0x1419215ad;
    pdb_14192aae0(pppppppuVar110 + 0x32,pppppppuVar110 + 0x5a);
    if (SBORROW8(0,(longlong)pppppppuVar110[0x32])) {
      pppppppuVar110[0x16] = (undefined8 ******)0x8000000000000000;
      *(undefined8 *)((longlong)ppcVar62 + -8) = 0x1419215d6;
      pdb_1404b4b10(pppppppuVar110 + 0x33);
    }
    else {
      pppppppuVar110[0x18] = pppppppuVar110[0x34];
      pppppppuVar110[0x16] = pppppppuVar110[0x32];
      pppppppuVar110[0x17] = pppppppuVar110[0x33];
    }
    *(undefined8 *)((longlong)ppcVar62 + -8) = 0x14192160d;
    pauVar117 = (undefined1 (*) [16])pdb_141c0c220(&UNK_1433592ab,6,pppppppuVar110 + 0x6e);
    if (pauVar117 == (undefined1 (*) [16])0x0) {
      pauVar117 = _DAT_143cad928;
    }
    *(undefined8 *)((longlong)ppcVar62 + -8) = 0x141921629;
    pdb_14192d030(pppppppuVar110 + 0x5a,pauVar117);
    *(undefined **)((longlong)ppcVar62 + 0x20) = &UNK_1430628e8;
    *(undefined8 *)((longlong)ppcVar62 + 0x28) = 0x15;
    *(undefined8 *)((longlong)ppcVar62 + -8) = 0x14192165f;
    pdb_141501c70(pppppppuVar110 + 0x32,pppppppuVar110 + 0x5a,&UNK_1430627f2,0x17);
    if (*(char *)(pppppppuVar110 + 0x32) == '\0') {
      *(undefined4 *)((longlong)pppppppuVar110 + 0x354) =
           *(undefined4 *)((longlong)pppppppuVar110 + 0x194);
      *(undefined4 *)((longlong)pppppppuVar110 + 0x144) = *(undefined4 *)(pppppppuVar110 + 0x33);
      pppppppuVar110[-2] = *(undefined8 *******)((longlong)pppppppuVar110 + 0x19c);
      pppppppuVar110[-1] = *(undefined8 *******)((longlong)pppppppuVar110 + 0x1a4);
      *(uint *)((longlong)pppppppuVar110 + 0x35c) =
           (uint)*(byte *)((longlong)pppppppuVar110 + 0x1ac);
      *(uint *)(pppppppuVar110 + 0x6b) = (uint)*(byte *)((longlong)pppppppuVar110 + 0x1ad);
      *(undefined1 *)((longlong)pppppppuVar110 + 0x3d2) = *(undefined1 *)(pppppppuVar110 + 0x36);
      pppppppuVar110[0x19] = *(undefined8 *******)((longlong)pppppppuVar110 + 0x1b1);
      *(undefined4 *)((longlong)pppppppuVar110 + 0xcf) = *(undefined4 *)(pppppppuVar110 + 0x37);
      unaff_XMM10_Da = *(undefined4 *)((longlong)pppppppuVar110 + 0x1bc);
      unaff_XMM10_Db = *(undefined4 *)(pppppppuVar110 + 0x38);
      unaff_XMM10_Dc = *(undefined4 *)((longlong)pppppppuVar110 + 0x1c4);
      unaff_XMM10_Dd = *(undefined4 *)(pppppppuVar110 + 0x39);
      uVar143 = *(undefined4 *)((longlong)pppppppuVar110 + 0x1cc);
      unaff_XMM15_Da = *(undefined4 *)(pppppppuVar110 + 0x3a);
      unaff_XMM8_Da = *(undefined4 *)((longlong)pppppppuVar110 + 0x1d4);
      unaff_XMM8_Db = *(undefined4 *)(pppppppuVar110 + 0x3b);
      unaff_XMM8_Dc = *(undefined4 *)((longlong)pppppppuVar110 + 0x1dc);
      unaff_XMM8_Dd = *(undefined4 *)(pppppppuVar110 + 0x3c);
      uVar137 = (undefined4)*(undefined8 *)((longlong)pppppppuVar110 + 0x1e4);
      uVar138 = (undefined4)((ulonglong)*(undefined8 *)((longlong)pppppppuVar110 + 0x1e4) >> 0x20);
      unaff_XMM14_Da = *(float *)((longlong)pppppppuVar110 + 0x1ec);
      unaff_XMM13_Da = SUB84(pppppppuVar110[0x3e],0);
      *(undefined1 *)((longlong)pppppppuVar110 + 0x3d3) =
           *(undefined1 *)((longlong)pppppppuVar110 + 500);
      if (2 < *(ulonglong *)*_DAT_143ca8e90) {
        pppppppuVar110[0x5a] = (undefined8 ******)&UNK_143359270;
        pppppppuVar110[0x5b] = (undefined8 ******)0x26;
        pppppppuVar110[0x5c] = (undefined8 ******)&UNK_143359270;
        pppppppuVar110[0x5d] = (undefined8 ******)0x26;
        pppppppuVar110[0x5e] = (undefined8 ******)&UNK_1433592d8;
        *(undefined8 *)((longlong)ppcVar62 + -8) = 0x141921861;
        pdb_1400c9be0(&UNK_1433592b1,0x49,3,pppppppuVar110 + 0x5a);
      }
      *(undefined4 *)((longlong)pppppppuVar110 + 0x67) =
           *(undefined4 *)((longlong)pppppppuVar110 + 0xcf);
      pppppppuVar110[0xc] = pppppppuVar110[0x19];
    }
    else {
      *(undefined8 *)((longlong)ppcVar62 + -8) = 0x141921679;
      pdb_1404b4b10(pppppppuVar110 + 0x33);
      if (2 < *(ulonglong *)*_DAT_143ca8e90) {
        pppppppuVar110[0x32] = (undefined8 ******)&UNK_143359270;
        pppppppuVar110[0x33] = (undefined8 ******)0x26;
        pppppppuVar110[0x34] = (undefined8 ******)&UNK_143359270;
        pppppppuVar110[0x35] = (undefined8 ******)0x26;
        pppppppuVar110[0x36] = (undefined8 ******)&UNK_143359318;
        *(undefined8 *)((longlong)ppcVar62 + -8) = 0x1419216e1;
        pdb_1400c9be0(&UNK_1433592f0,0x49,3,pppppppuVar110 + 0x32);
      }
      uVar30 = *(undefined8 *)((longlong)param_4[1] + 4);
      unaff_XMM10_Db = (undefined4)uVar30;
      unaff_XMM10_Da = (undefined4)((ulonglong)uVar30 >> 0x20);
      uVar143 = *(undefined4 *)((longlong)param_4[1] + 0xc);
      uVar137 = 0;
      uVar138 = 0;
      *(undefined1 (*) [16])(pppppppuVar110 + -2) = ZEXT416(_UNK_143359100);
      *(undefined4 *)((longlong)pppppppuVar110 + 0x354) = 0;
      *(undefined1 *)((longlong)pppppppuVar110 + 0x3d2) = 3;
      unaff_XMM15_Da = 0;
      *(undefined4 *)(pppppppuVar110 + 0x6b) = 0;
      *(undefined4 *)((longlong)pppppppuVar110 + 0x35c) = 0;
      *(undefined1 *)((longlong)pppppppuVar110 + 0x3d3) = 3;
      unaff_XMM8_Da = 0;
      unaff_XMM8_Db = 0;
      unaff_XMM8_Dc = 0;
      unaff_XMM8_Dd = 0;
      unaff_XMM10_Dc = _UNK_14303f628;
      unaff_XMM10_Dd = _UNK_14303f62c;
      unaff_XMM13_Da = _UNK_1433590f0;
      unaff_XMM14_Da = _DAT_142e36f28;
    }
    *(undefined8 *)((longlong)ppcVar62 + -8) = 0x14192188e;
    uVar30 = pdb_141c0c220(&UNK_143359330,6,pppppppuVar110 + 0x6e);
    *(undefined8 *)((longlong)ppcVar62 + -8) = 0x14192189e;
    pdb_14192a270(pppppppuVar110 + 0x32,uVar30);
    if (SBORROW8(0,(longlong)pppppppuVar110[0x32])) {
      pppppppuVar110[0x12] = (undefined8 ******)0x0;
      pppppppuVar110[0x13] = (undefined8 ******)0x8;
      pppppppuVar110[0x14] = (undefined8 ******)0x0;
    }
    else {
      pppppppuVar110[0x14] = pppppppuVar110[0x34];
      pppppppuVar110[0x12] = pppppppuVar110[0x32];
      pppppppuVar110[0x13] = pppppppuVar110[0x33];
    }
    *(undefined1 *)((longlong)pppppppuVar110 + 0x3d4) = 1;
    *(undefined8 *)((longlong)ppcVar62 + -8) = 0x141921908;
    pcVar33 = (char *)pdb_141c0c220(&UNK_143359336,7,pppppppuVar110 + 0x6e);
    if (pcVar33 == (char *)0x0) {
code_r0x000141921919:
      *(undefined1 *)(pppppppuVar110 + 0x2e) = 0;
    }
    else {
      cVar24 = *pcVar33;
      *pcVar33 = '\0';
      if (cVar24 == '\x06') goto code_r0x000141921919;
      *(char *)(pppppppuVar110 + 0x2e) = cVar24;
      uVar30 = *(undefined8 *)(pcVar33 + 9);
      ppppppuVar31 = *(undefined8 *******)(pcVar33 + 0x10);
      ppppppuVar47 = *(undefined8 *******)(pcVar33 + 0x18);
      *(undefined8 *)((longlong)pppppppuVar110 + 0x171) = *(undefined8 *)(pcVar33 + 1);
      *(undefined8 *)((longlong)pppppppuVar110 + 0x179) = uVar30;
      pppppppuVar110[0x30] = ppppppuVar31;
      pppppppuVar110[0x31] = ppppppuVar47;
    }
    *(undefined1 *)((longlong)pppppppuVar110 + 0x3d4) = 1;
    *(undefined **)((longlong)ppcVar62 + 0x20) = &UNK_14335cad8;
    *(undefined8 *)((longlong)ppcVar62 + 0x28) = 4;
    *(undefined8 *)((longlong)ppcVar62 + -8) = 0x14192197a;
    pdb_1415032f0(pppppppuVar110 + 0x32,pppppppuVar110 + 0x2e,&UNK_14335cab0,7);
    *(undefined1 *)((longlong)pppppppuVar110 + 0x3d4) = 1;
    *(undefined8 *)((longlong)ppcVar62 + -8) = 0x1419219a2;
    pdb_141707d20(pppppppuVar110 + 0x5a,pppppppuVar110 + 0x32,&UNK_14335933d,0xf);
    pauVar54 = (undefined1 (*) [16])pppppppuVar110[0x5b];
    if (!SBORROW8(0,(longlong)pppppppuVar110[0x5a])) {
      pppppppuVar110[0xf] = (undefined8 ******)param_3;
      pppppppuVar110[0x27] = pppppppuVar110[0x68];
      pppppppuVar110[0x25] = pppppppuVar110[0x66];
      pppppppuVar110[0x26] = pppppppuVar110[0x67];
      pppppppuVar110[0x23] = pppppppuVar110[100];
      pppppppuVar110[0x24] = pppppppuVar110[0x65];
      *(undefined4 *)(pppppppuVar110 + 0x21) = *(undefined4 *)(pppppppuVar110 + 0x62);
      *(undefined4 *)((longlong)pppppppuVar110 + 0x10c) =
           *(undefined4 *)((longlong)pppppppuVar110 + 0x314);
      *(undefined4 *)(pppppppuVar110 + 0x22) = *(undefined4 *)(pppppppuVar110 + 99);
      *(undefined4 *)((longlong)pppppppuVar110 + 0x114) =
           *(undefined4 *)((longlong)pppppppuVar110 + 0x31c);
      *(undefined4 *)(pppppppuVar110 + 0x1f) = *(undefined4 *)(pppppppuVar110 + 0x60);
      *(undefined4 *)((longlong)pppppppuVar110 + 0xfc) =
           *(undefined4 *)((longlong)pppppppuVar110 + 0x304);
      *(undefined4 *)(pppppppuVar110 + 0x20) = *(undefined4 *)(pppppppuVar110 + 0x61);
      *(undefined4 *)((longlong)pppppppuVar110 + 0x104) =
           *(undefined4 *)((longlong)pppppppuVar110 + 0x30c);
      *(undefined1 (*) [16])(pppppppuVar110 + 0x1d) = *(undefined1 (*) [16])(pppppppuVar110 + 0x5e);
      *(undefined1 (*) [16])(pppppppuVar110 + 0x1b) = *(undefined1 (*) [16])(pppppppuVar110 + 0x5c);
      pppppppuVar110[0x19] = pppppppuVar110[0x5a];
      pppppppuVar110[0x1a] = (undefined8 ******)pauVar54;
      *(undefined4 *)((longlong)pppppppuVar110 + 0x14c) = *(undefined4 *)(pppppppuVar110 + 0x26);
      *(undefined1 *)((longlong)pppppppuVar110 + 0x3d5) = 0;
      uVar29 = (uint)pauVar39;
      pppppppuVar110[0x10] = (undefined8 ******)param_2;
      *(uint *)(pppppppuVar110 + 0x77) = uVar29;
      *(undefined4 *)(pppppppuVar110 + 0x29) = uVar143;
      pppppppuVar110[-8] = (undefined8 ******)CONCAT44(uVar138,uVar137);
      pppppppuVar110[-7] = (undefined8 ******)0x0;
      if (uVar29 == 0x1e) {
        pppppppuVar110[0x2c] = (undefined8 ******)0x0;
        pppppppuVar110[0x2d] = (undefined8 ******)0x0;
        bVar121 = false;
        uVar44 = *(ulonglong *)*_DAT_143ca8e90;
        uVar143 = extraout_XMM0_Da;
joined_r0x000141922ee6:
        if (2 < uVar44) {
          pppppppuVar110[0x32] = (undefined8 ******)&UNK_143359270;
          pppppppuVar110[0x33] = (undefined8 ******)0x26;
          pppppppuVar110[0x34] = (undefined8 ******)&UNK_143359270;
          pppppppuVar110[0x35] = (undefined8 ******)0x26;
          pppppppuVar110[0x36] = (undefined8 ******)&UNK_143359460;
          *(undefined1 *)((longlong)pppppppuVar110 + 0x3d6) = 1;
          *(undefined8 *)((longlong)ppcVar62 + -8) = 0x141921b3d;
          pdb_1400c9be0(&UNK_143359430,0x53,3,pppppppuVar110 + 0x32);
        }
      }
      else {
        if (2 < *(ulonglong *)*_DAT_143ca8e90) {
          pppppppuVar110[0x5a] = (undefined8 ******)((longlong)pppppppuVar110 + 0x3a4);
          pppppppuVar110[0x5b] = (undefined8 ******)pdb_140f71c50;
          pppppppuVar110[0x5c] = (undefined8 ******)&UNK_14335934c;
          pppppppuVar110[0x5d] = (undefined8 ******)pdb_140f71c50;
          pppppppuVar110[0x32] = (undefined8 ******)&UNK_143359270;
          pppppppuVar110[0x33] = (undefined8 ******)0x26;
          pppppppuVar110[0x34] = (undefined8 ******)&UNK_143359270;
          pppppppuVar110[0x35] = (undefined8 ******)0x26;
          pppppppuVar110[0x36] = (undefined8 ******)&UNK_1433593c0;
          *(undefined1 *)((longlong)pppppppuVar110 + 0x3d6) = 1;
          *(undefined8 *)((longlong)ppcVar62 + -8) = 0x141921c4d;
          pdb_1400c9be0(&UNK_143359350,pppppppuVar110 + 0x5a,3,pppppppuVar110 + 0x32);
          pauVar54 = (undefined1 (*) [16])pppppppuVar110[0x1a];
        }
        *(undefined4 *)((longlong)pppppppuVar110 + 0x364) = extraout_XMM0_Da;
        *(undefined4 *)(pppppppuVar110 + 0x6c) = uVar142;
        *(undefined4 *)pppppppuVar110 = uVar130;
        *(undefined4 *)((longlong)pppppppuVar110 + 4) = uVar139;
        *(undefined4 *)(pppppppuVar110 + 1) = uVar140;
        *(undefined4 *)((longlong)pppppppuVar110 + 0xc) = uVar141;
        pppppppuVar110[0x11] = (undefined8 ******)param_1;
        *(bool *)((longlong)pppppppuVar110 + 0x3d5) = uVar29 < 0x10;
        *(undefined1 *)(pppppppuVar110 + 0x2e) = 1;
        pppppppuVar110[0x24] = (undefined8 ******)0x0;
        pppppppuVar110[6] =
             (undefined8 ******)((longlong)pauVar54 + (longlong)pppppppuVar110[0x1b] * 0x28);
        param_4 = (undefined1 (*) [16])0xffffffffffffffff;
        param_3 = (undefined1 (*) [16])0x2;
        unaff_XMM9_Da = _UNK_14300d240;
code_r0x000141921cb7:
        unaff_XMM6_Db = 0;
        unaff_XMM6_Dc = 0;
        unaff_XMM6_Dd = 0;
        pppppppuVar110[0x2d] = (undefined8 ******)0x0;
        pppppppuVar110[0x2c] = (undefined8 ******)0x0;
        unaff_XMM6_Da = _DAT_142e36f28;
        unaff_XMM11_Da = _UNK_142e37848;
        unaff_XMM12_Da = _UNK_142f7737c;
code_r0x000141921ce7:
        if (pauVar54 != (undefined1 (*) [16])pppppppuVar110[6]) {
          lVar56 = *(longlong *)pauVar54[1];
          pppppppuVar110[0xe] = (undefined8 ******)pauVar54;
          param_2 = pauVar54;
          ppcVar70 = ppcVar62;
          if (lVar56 != 0) {
            in_R11 = *(undefined1 (**) [16])((longlong)*pauVar54 + 8);
            unaff_R12 = (undefined1 (*) [16])((longlong)in_R11 + lVar56 * 0x18);
            pppppppuVar110[4] = (undefined8 ******)unaff_R12;
            ppcVar63 = ppcVar62;
            do {
              lVar56 = *(longlong *)*in_R11;
              if (lVar56 == 7) {
                lVar56 = *(longlong *)in_R11[1];
                if (lVar56 != 0) {
                  pppppppuVar110[3] = (undefined8 ******)in_R11;
                  plVar49 = *(longlong **)((longlong)*in_R11 + 8);
                  plVar120 = plVar49 + lVar56 * 2;
                  do {
                    lVar56 = plVar49[1];
                    if (lVar56 != 0) {
                      lVar6 = *plVar49;
                      lVar112 = 0;
                      do {
                        ppppppuVar31 = *(undefined8 *******)(lVar6 + lVar112);
                        LOCK();
                        bVar121 = ppppppuVar31[1] == (undefined8 *****)0x1;
                        if (bVar121) {
                          ppppppuVar31[1] = (undefined8 *****)param_4;
                        }
                        UNLOCK();
                        if ((!bVar121) ||
                           (ppppppuVar31[1] = (undefined8 *****)0x1,
                           *ppppppuVar31 != (undefined8 *****)0x1)) {
                          *(undefined1 *)((longlong)pppppppuVar110 + 0x3d7) = 1;
                    /* WARNING: Subroutine does not return */
                          *(undefined8 *)((longlong)ppcVar63 + -8) = 0x141922f04;
                          pdb_142dc8150(&UNK_1433595d0);
                        }
                        if (ppppppuVar31[2] == (undefined8 *****)0x8000000000000012) {
                          pppppppuVar110[0x6d] = (undefined8 ******)ppppppuVar31[3];
                          pppppppuVar110[0x76] = (undefined8 ******)((longlong)ppppppuVar31 + 0x24);
                          uVar142 = *(undefined4 *)(ppppppuVar31 + 4);
                          bVar121 = *(char *)((longlong)ppppppuVar31 + 0x3c) != '\0';
                          uVar130 = uVar142;
                          pppppppuVar51 = pppppppuVar110 + 0x32;
                          if (bVar121) {
                            uVar130 = (int)param_3;
                            pppppppuVar51 = pppppppuVar110 + 0x5a;
                          }
                          *(undefined4 *)(pppppppuVar110 + 0x73) = uVar130;
                          if (!bVar121) {
                            uVar142 = (int)param_3;
                          }
                          *(undefined4 *)(pppppppuVar110 + 0x78) = uVar142;
                          pppppppuVar51[2] = *(undefined8 *******)((longlong)ppppppuVar31 + 0x34);
                          ppppppuVar47 = *(undefined8 *******)((longlong)ppppppuVar31 + 0x2c);
                          *pppppppuVar51 = *(undefined8 *******)((longlong)ppppppuVar31 + 0x24);
                          pppppppuVar51[1] = ppppppuVar47;
                          pppppppuVar110[0x75] = ppppppuVar31;
                          *(undefined8 *)((longlong)ppcVar63 + -8) = 0x141921e4c;
                          pdb_140a1ebf0(ppppppuVar31 + 2);
                          ppppppuVar31 = pppppppuVar110[0x75];
                          ppppppuVar31[2] = (undefined8 *****)0x8000000000000003;
                          ppppppuVar31[3] = pppppppuVar110[0x6d];
                          *(undefined4 *)(ppppppuVar31 + 4) = *(undefined4 *)(pppppppuVar110 + 0x73)
                          ;
                          ppppppuVar47 = pppppppuVar110[0x76];
                          ppppppuVar47[2] = pppppppuVar110[0x34];
                          ppppppuVar46 = pppppppuVar110[0x33];
                          *ppppppuVar47 = pppppppuVar110[0x32];
                          ppppppuVar47[1] = ppppppuVar46;
                          *(undefined4 *)((longlong)ppppppuVar31 + 0x3c) =
                               *(undefined4 *)(pppppppuVar110 + 0x78);
                          *(undefined1 (*) [16])(ppppppuVar31 + 8) =
                               *(undefined1 (*) [16])(pppppppuVar110 + 0x5a);
                          ppppppuVar31[10] = pppppppuVar110[0x5c];
code_r0x000141921d91:
                          bVar42 = 1;
                        }
                        else {
                          bVar42 = 0;
                          if ((-1 < (longlong)ppppppuVar31[2]) &&
                             (*(int *)(ppppppuVar31 + 0x1f) != 2)) {
                            fVar124 = *(float *)((longlong)ppppppuVar31 + 0xfc);
                            if ((fVar124 == *(float *)(ppppppuVar31 + 0x20)) &&
                               (!NAN(fVar124) && !NAN(*(float *)(ppppppuVar31 + 0x20)))) {
                              fVar124 = fVar124 + unaff_XMM9_Da;
                              if (NAN(fVar124)) {
                                *(undefined1 *)((longlong)pppppppuVar110 + 0x3d7) = 1;
                    /* WARNING: Subroutine does not return */
                                *(undefined8 *)((longlong)ppcVar63 + -8) = 0x141922b96;
                                pdb_142dc83b0(&UNK_14335ec63,0x1d,&UNK_1430372b0);
                              }
                              if (ABS(fVar124) == INFINITY) {
                                *(undefined1 *)((longlong)pppppppuVar110 + 0x3d7) = 1;
                    /* WARNING: Subroutine does not return */
                                *(undefined8 *)((longlong)ppcVar63 + -8) = 0x141922bbb;
                                pdb_142dc83b0(&UNK_14335ed00,0x22,&UNK_1430372b0);
                              }
                              fVar128 = 0.0;
                              if (0.0 <= fVar124) {
                                fVar128 = fVar124;
                              }
                              auVar126._4_4_ = unaff_XMM6_Db;
                              auVar126._0_4_ = unaff_XMM6_Da;
                              auVar126._8_4_ = unaff_XMM6_Dc;
                              auVar126._12_4_ = unaff_XMM6_Dd;
                              if (fVar128 <= unaff_XMM6_Da) {
                                auVar126._0_4_ = fVar128;
                              }
                              *(float *)((longlong)ppppppuVar31 + 0xfc) = auVar126._0_4_;
                              fVar124 = auVar126._0_4_ + unaff_XMM11_Da;
                              if (unaff_XMM12_Da <= fVar124) {
                                *(undefined1 *)((longlong)pppppppuVar110 + 0x3d7) = 1;
                    /* WARNING: Subroutine does not return */
                                *(undefined8 *)((longlong)ppcVar63 + -8) = 0x141922be0;
                                pdb_142dc83b0(&UNK_14335ed00,0x22,&UNK_1430372c8);
                              }
                              auVar127._4_4_ = unaff_XMM6_Db;
                              auVar127._0_4_ = unaff_XMM6_Da;
                              auVar127._8_4_ = unaff_XMM6_Dc;
                              auVar127._12_4_ = unaff_XMM6_Dd;
                              if (fVar124 <= unaff_XMM6_Da) {
                                auVar127._0_4_ = fVar124;
                              }
                              *(int *)(ppppppuVar31 + 0x20) = auVar127._0_4_;
                              goto code_r0x000141921d91;
                            }
                            bVar42 = 0;
                          }
                        }
                        *(byte *)((longlong)pppppppuVar110 + 0x3d5) =
                             *(byte *)((longlong)pppppppuVar110 + 0x3d5) | bVar42;
                        lVar112 = lVar112 + 8;
                      } while (lVar56 << 3 != lVar112);
                    }
                    plVar49 = plVar49 + 2;
                  } while (plVar49 != plVar120);
                  in_R11 = (undefined1 (*) [16])pppppppuVar110[3];
                  lVar56 = *(longlong *)*in_R11;
                  pauVar39 = (undefined1 (*) [16])(ulonglong)*(uint *)(pppppppuVar110 + 0x77);
                  param_2 = (undefined1 (*) [16])pppppppuVar110[0xe];
                  unaff_R12 = (undefined1 (*) [16])pppppppuVar110[4];
                  goto code_r0x000141921f57;
                }
              }
              else {
code_r0x000141921f57:
                if (lVar56 == 0) {
                  plVar49 = *(longlong **)((longlong)*in_R11 + 8);
                  LOCK();
                  bVar121 = plVar49[1] == 1;
                  if (bVar121) {
                    plVar49[1] = (longlong)param_4;
                  }
                  UNLOCK();
                  if ((!bVar121) || (plVar49[1] = 1, *plVar49 != 1)) {
                    *(undefined1 *)((longlong)pppppppuVar110 + 0x3d7) = 1;
                    /* WARNING: Subroutine does not return */
                    *(undefined8 *)((longlong)ppcVar63 + -8) = 0x141922f68;
                    pdb_142dc8150(&UNK_1433595e8);
                  }
                  if ((SBORROW8(0,plVar49[2])) && (plVar49[5] == 2)) {
                    puVar98 = (undefined8 *)plVar49[4];
                    fVar129 = *(float *)(puVar98 + 1) - *(float *)((longlong)puVar98 + 0x14);
                    fVar124 = (float)*(undefined8 *)((longlong)puVar98 + 0xc);
                    fVar131 = (float)*puVar98 - fVar124;
                    fVar128 = (float)((ulonglong)*(undefined8 *)((longlong)puVar98 + 0xc) >> 0x20);
                    fVar132 = (float)((ulonglong)*puVar98 >> 0x20) - fVar128;
                    fVar129 = fVar129 * fVar129 + fVar132 * fVar132 + fVar131 * fVar131;
                    if ((fVar129 == 0.0) && (!NAN(fVar129))) {
                      *(ulonglong *)((longlong)puVar98 + 0xc) =
                           CONCAT44(fVar128 + 0.0,fVar124 + _UNK_142e37870);
                      *(float *)((longlong)puVar98 + 0x14) =
                           *(float *)((longlong)puVar98 + 0x14) + 0.0;
                      *(undefined1 *)((longlong)pppppppuVar110 + 0x3d5) = 1;
                    }
                  }
                }
              }
              pppppppuVar79 = (undefined8 *******)ppcVar63;
              if (((uint)pauVar39 < 0x14) && (*(int *)*in_R11 == 9)) {
                arg0 = *(undefined1 (**) [16])((longlong)*in_R11 + 8);
                LOCK();
                bVar121 = *(longlong *)((longlong)*arg0 + 8) == 1;
                if (bVar121) {
                  *(longlong *)((longlong)*arg0 + 8) = (longlong)param_4;
                }
                UNLOCK();
                if ((!bVar121) ||
                   (lVar56 = *(longlong *)*arg0, *(undefined8 *)((longlong)*arg0 + 8) = 1,
                   lVar56 != 1)) {
                  *(undefined1 *)((longlong)pppppppuVar110 + 0x3d7) = 1;
                    /* WARNING: Subroutine does not return */
                  *(undefined8 *)((longlong)ppcVar63 + -8) = 0x141922f7e;
                  pdb_142dc8150(&UNK_143359600);
                }
code_r0x000141922033:
                cVar24 = *(byte *)((longlong)arg0[1] + 8) - 3;
                if (*(byte *)((longlong)arg0[1] + 8) < 3) {
                  cVar24 = '\x05';
                }
                if (cVar24 == '\x03') {
                  pauVar32 = (undefined1 (*) [16])0x2c;
                  pauVar54 = (undefined1 (*) [16])0x28;
                }
                else {
                  pppppppuVar79 = (undefined8 *******)ppcVar63;
                  ppcVar64 = ppcVar63;
                  if (cVar24 != '\x06') goto code_r0x000141921d1b;
code_r0x000141922054:
                  pauVar32 = (undefined1 (*) [16])0x24;
                  pauVar54 = (undefined1 (*) [16])0x20;
                  ppcVar63 = ppcVar64;
                }
                pauVar117 = (undefined1 (*) [16])
                            (ulonglong)*(uint *)((longlong)*pauVar54 + (longlong)*arg0);
                ppcVar65 = ppcVar63;
code_r0x00014192206e:
                ppcVar66 = ppcVar65;
                if (pauVar117 < (undefined1 (*) [16])0x9) goto code_r0x000141922074;
code_r0x00014192208d:
                pauVar115 = (undefined1 (*) [16])0x1;
                pppppppuVar79 = (undefined8 *******)ppcVar66;
                if ((int)pauVar117 == 999) {
                  pauVar115 = (undefined1 (*) [16])((ulonglong)pauVar117 & 0xffffffff);
                }
code_r0x00014192209f:
                *(int *)((longlong)*pauVar54 + (longlong)*arg0) = (int)pauVar115;
                pauVar115 = (undefined1 (*) [16])
                            (ulonglong)*(uint *)((longlong)*pauVar32 + (longlong)*arg0);
                ppcVar67 = (char **)pppppppuVar79;
code_r0x0001419220a7:
                bVar121 = pauVar115 < (undefined1 (*) [16])0x8;
                bVar122 = pauVar115 == (undefined1 (*) [16])0x8;
                ppcVar68 = ppcVar67;
code_r0x0001419220ab:
                if (bVar121 || bVar122) goto code_r0x0001419220ad;
                uVar142 = 1;
                bVar121 = (int)pauVar115 == 999;
code_r0x0001419220d6:
                pppppppuVar79 = (undefined8 *******)ppcVar68;
                if (bVar121) {
                  *(int *)((longlong)*pauVar32 + (longlong)*arg0) = (int)pauVar115;
                }
                else {
                  *(undefined4 *)((longlong)*pauVar32 + (longlong)*arg0) = uVar142;
                }
              }
code_r0x000141921d1b:
              in_R11 = (undefined1 (*) [16])((longlong)in_R11[1] + 8);
              ppcVar70 = (char **)pppppppuVar79;
              ppcVar63 = (char **)pppppppuVar79;
            } while (in_R11 != unaff_R12);
          }
          if ((uint)pauVar39 < 0x10) {
            LOCK();
            bVar121 = **(longlong **)((longlong)param_2[1] + 8) == 1;
            if (bVar121) {
              **(longlong **)((longlong)param_2[1] + 8) = 0;
            }
            UNLOCK();
            ppppppuVar31 = *(undefined8 *******)((longlong)param_2[1] + 8);
            if (bVar121) {
              if (ppppppuVar31[1] == (undefined8 *****)0x1) {
                *ppppppuVar31 = (undefined8 *****)0x1;
              }
              else {
                pppppppuVar110[0x78] = ppppppuVar31;
                pppppppuVar110[0x76] = ppppppuVar31 + 1;
                uVar44 = 0x30;
                *(undefined8 *)((longlong)ppcVar70 + -8) = 0x141922466;
                ppppppuVar31 = (undefined8 ******)pdb_140f606e0(8);
                pppppppuVar110[0x75] = ppppppuVar31;
                if (uVar44 != 0) {
                  *(undefined8 *)((longlong)ppcVar70 + -8) = 0x14192247e;
                  pdb_14007ee60();
                  *(undefined8 *)((longlong)ppcVar70 + -8) = 0x141922489;
                  ppppppuVar31 = (undefined8 ******)pub_1406abab0(uVar44,(ulonglong)ppppppuVar31);
                }
                ppppppuVar47 = pppppppuVar110[0x78];
                if (ppppppuVar31 == (undefined8 ******)0x0) {
                  ppppppuVar31 = pppppppuVar110[0x75];
                    /* WARNING: Subroutine does not return */
                  *(undefined8 *)((longlong)ppcVar70 + -8) = 0x141922f4f;
                  pdb_142dc7e11(ppppppuVar31,uVar44);
                }
                *ppppppuVar31 = (undefined8 *****)0x1;
                ppppppuVar31[1] = (undefined8 *****)0x1;
                pppppuVar35 = ppppppuVar47[3];
                auVar125 = *(undefined1 (*) [16])(ppppppuVar47 + 4);
                pppppuVar113 = ppppppuVar47[6];
                pppppuVar38 = ppppppuVar47[7];
                ppppppuVar31[2] = ppppppuVar47[2];
                ppppppuVar31[3] = pppppuVar35;
                *(undefined1 (*) [16])(ppppppuVar31 + 4) = auVar125;
                ppppppuVar31[6] = pppppuVar113;
                ppppppuVar31[7] = pppppuVar38;
                *(undefined8 ******)((longlong)param_2[1] + 8) = ppppppuVar31;
                if (ppppppuVar47 != (undefined8 ******)0xffffffffffffffff) {
                  ppppppuVar46 = pppppppuVar110[0x76];
                  LOCK();
                  *ppppppuVar46 = (undefined8 *****)((longlong)*ppppppuVar46 + -1);
                  UNLOCK();
                  if (*ppppppuVar46 == (undefined8 *****)0x0) {
                    *(undefined8 *)((longlong)ppcVar70 + -8) = 0x1419224f8;
                    pub_1406abac0((byte *)ppppppuVar47,0x40,8);
                  }
                }
              }
            }
            else {
              pppppppuVar110[0x76] = (undefined8 ******)((longlong)param_2[1] + 8);
              *(undefined1 *)((longlong)pppppppuVar110 + 0x3d7) = 1;
              *(undefined8 *)((longlong)ppcVar70 + -8) = 0x141922186;
              ppppppuVar47 = (undefined8 ******)pdb_140c79ae0(ppppppuVar31 + 2);
              pppppppuVar110[0x78] = ppppppuVar47;
              LOCK();
              *ppppppuVar31 = (undefined8 *****)((longlong)*ppppppuVar31 + -1);
              UNLOCK();
              if (*ppppppuVar31 == (undefined8 *****)0x0) {
                *(undefined8 *)((longlong)ppcVar70 + -8) = 0x14192219c;
                pdb_140c7bbc0((undefined8 *)((longlong)param_2[1] + 8));
              }
              ppppppuVar31 = pppppppuVar110[0x78];
              *(undefined8 *******)((longlong)param_2[1] + 8) = ppppppuVar31;
            }
            *(undefined1 *)((longlong)pppppppuVar110 + 0x3d7) = 1;
            *(undefined8 *)((longlong)ppcVar70 + -8) = 0x1419221be;
            pdb_140cac7f0(ppppppuVar31 + 2);
          }
          *(undefined1 *)((longlong)pppppppuVar110 + 0x3d7) = 1;
          *(undefined8 *)((longlong)ppcVar70 + -8) = 0x1419221dc;
          pdb_1415e1210(param_2,(longlong)pppppppuVar110 + 0x3d5);
          pauVar54 = (undefined1 (*) [16])((longlong)param_2[2] + 8);
          if ((uint)pauVar39 < 0x14) goto code_r0x0001419221ea;
          pppppppuVar110[0x73] = (undefined8 ******)pauVar54;
code_r0x000141922504:
          pauVar54 = (undefined1 (*) [16])pppppppuVar110[0x73];
          ppcVar62 = ppcVar70;
          if ((uint)pauVar39 < 0x15) goto code_r0x000141922514;
          goto code_r0x000141921ce7;
        }
        if ((int)pauVar39 < 0x13) {
          iVar27 = *(int *)(pppppppuVar110 + 0x77);
          if (2 < *(ulonglong *)*_DAT_143ca8e90) {
            pppppppuVar110[0x5a] = (undefined8 ******)&UNK_1433593d8;
            pppppppuVar110[0x5b] = (undefined8 ******)pdb_140f71c50;
            pppppppuVar110[0x32] = (undefined8 ******)&UNK_143359270;
            pppppppuVar110[0x33] = (undefined8 ******)0x26;
            pppppppuVar110[0x34] = (undefined8 ******)&UNK_143359270;
            pppppppuVar110[0x35] = (undefined8 ******)0x26;
            pppppppuVar110[0x36] = (undefined8 ******)&UNK_143359418;
            *(undefined1 *)((longlong)pppppppuVar110 + 0x3d7) = 1;
            *(undefined8 *)((longlong)ppcVar62 + -8) = 0x141922c81;
            pdb_1400c9be0(&UNK_1433593dc,pppppppuVar110 + 0x5a,3,pppppppuVar110 + 0x32);
          }
          fVar19 = _UNK_143314dac;
          fVar132 = _UNK_143314da8;
          fVar131 = _UNK_143314da4;
          fVar129 = _UNK_143314da0;
          auVar125 = _UNK_143040f80;
          fVar128 = _UNK_142e382c8;
          fVar124 = _DAT_142e37878;
          if (iVar27 < 0x11) {
            pppppppuVar110[0x24] = (undefined8 ******)0x0;
            if (pppppppuVar110[0x1b] != (undefined8 ******)0x0) {
              ppppppuVar47 = pppppppuVar110[0x1a];
              ppppppuVar31 = ppppppuVar47 + (longlong)pppppppuVar110[0x1b] * 5;
              do {
                pppppuVar35 = ppppppuVar47[2];
                if (pppppuVar35 != (undefined8 *****)0x0) {
                  pppppuVar113 = ppppppuVar47[1];
                  lVar56 = 0;
                  do {
                    if (*(longlong *)((longlong)pppppuVar113 + lVar56) == 0) {
                      plVar49 = *(longlong **)((longlong)pppppuVar113 + lVar56 + 8);
                      LOCK();
                      bVar121 = plVar49[1] == 1;
                      if (bVar121) {
                        plVar49[1] = -1;
                      }
                      UNLOCK();
                      if ((!bVar121) || (plVar49[1] = 1, *plVar49 != 1)) {
                        *(undefined1 *)((longlong)pppppppuVar110 + 0x3d7) = 1;
                    /* WARNING: Subroutine does not return */
                        *(undefined8 *)((longlong)ppcVar62 + -8) = 0x141922f94;
                        pdb_142dc8150(&UNK_143359570);
                      }
                      if (SBORROW8(0,plVar49[2])) {
                        fVar133 = SQRT(*(float *)((longlong)plVar49 + 0x34)) * fVar124;
                        fVar16 = 0.0;
                        if (0.0 <= fVar133) {
                          fVar16 = fVar133;
                        }
                        fVar133 = fVar128;
                        if (fVar16 <= fVar128) {
                          fVar133 = fVar16;
                        }
                        *(float *)((longlong)plVar49 + 0x34) = fVar133;
                        *(undefined1 *)((longlong)pppppppuVar110 + 0x3d5) = 1;
                      }
                      if (*(longlong *)((longlong)pppppuVar113 + lVar56) == 0) {
                        plVar49 = *(longlong **)((longlong)pppppuVar113 + lVar56 + 8);
                        LOCK();
                        bVar121 = plVar49[1] == 1;
                        if (bVar121) {
                          plVar49[1] = -1;
                        }
                        UNLOCK();
                        if ((!bVar121) || (plVar49[1] = 1, *plVar49 != 1)) {
                          *(undefined1 *)((longlong)pppppppuVar110 + 0x3d7) = 1;
                    /* WARNING: Subroutine does not return */
                          *(undefined8 *)((longlong)ppcVar62 + -8) = 0x141922faa;
                          pdb_142dc8150(&UNK_143359588);
                        }
                        if (plVar49[2] == -0x7fffffffffffffff) {
                          auVar134._8_8_ = 0;
                          auVar134._0_8_ = *(ulonglong *)((longlong)plVar49 + 0x1c);
                          auVar135 = sqrtps(auVar134,auVar134);
                          auVar136._0_4_ = auVar135._0_4_ * fVar129;
                          auVar136._4_4_ = auVar135._4_4_ * fVar131;
                          auVar136._8_4_ = auVar135._8_4_ * fVar132;
                          auVar136._12_4_ = auVar135._12_4_ * fVar19;
                          auVar135 = maxps(ZEXT816(0),auVar136);
                          auVar135 = minps(auVar125,auVar135);
                          *(longlong *)((longlong)plVar49 + 0x1c) = auVar135._0_8_;
                          *(undefined1 *)((longlong)pppppppuVar110 + 0x3d5) = 1;
                        }
                      }
                    }
                    lVar56 = lVar56 + 0x18;
                  } while ((longlong)pppppuVar35 * 0x18 != lVar56);
                }
                ppppppuVar47 = ppppppuVar47 + 5;
              } while (ppppppuVar47 != ppppppuVar31);
            }
          }
        }
        cVar24 = *(char *)((longlong)pppppppuVar110 + 0x3d5);
        if (cVar24 == '\0') {
          *(undefined1 *)(pppppppuVar110 + 0x2e) = 0;
        }
        *(undefined1 *)((longlong)pppppppuVar110 + 0x3d7) = 0;
        *(undefined8 *)((longlong)ppcVar62 + -8) = 0x141922e06;
        pdb_140ae4eb0(pppppppuVar110 + 0x19,cVar24);
        param_2 = (undefined1 (*) [16])pppppppuVar110[0x10];
        bVar121 = *(int *)(pppppppuVar110 + 0x77) < 0x13;
        if (cVar24 == '\0') {
          param_1 = (undefined1 (*) [16])pppppppuVar110[0x11];
          uVar130 = *(undefined4 *)pppppppuVar110;
          uVar139 = *(undefined4 *)((longlong)pppppppuVar110 + 4);
          uVar140 = *(undefined4 *)(pppppppuVar110 + 1);
          uVar141 = *(undefined4 *)((longlong)pppppppuVar110 + 0xc);
          uVar142 = *(undefined4 *)(pppppppuVar110 + 0x6c);
          uVar143 = *(undefined4 *)((longlong)pppppppuVar110 + 0x364);
          uVar44 = *(ulonglong *)*_DAT_143ca8e90;
          goto joined_r0x000141922ee6;
        }
        param_1 = (undefined1 (*) [16])pppppppuVar110[0x11];
        uVar130 = *(undefined4 *)pppppppuVar110;
        uVar139 = *(undefined4 *)((longlong)pppppppuVar110 + 4);
        uVar140 = *(undefined4 *)(pppppppuVar110 + 1);
        uVar141 = *(undefined4 *)((longlong)pppppppuVar110 + 0xc);
        uVar142 = *(undefined4 *)(pppppppuVar110 + 0x6c);
        uVar143 = *(undefined4 *)((longlong)pppppppuVar110 + 0x364);
        if (2 < *(ulonglong *)*_DAT_143ca8e90) {
          pppppppuVar110[0x32] = (undefined8 ******)&UNK_143359270;
          pppppppuVar110[0x33] = (undefined8 ******)0x26;
          pppppppuVar110[0x34] = (undefined8 ******)&UNK_143359270;
          pppppppuVar110[0x35] = (undefined8 ******)0x26;
          pppppppuVar110[0x36] = (undefined8 ******)&UNK_1433594b8;
          *(undefined1 *)((longlong)pppppppuVar110 + 0x3d6) = 1;
          *(undefined8 *)((longlong)ppcVar62 + -8) = 0x141922eb4;
          pdb_1400c9be0(&UNK_143359478,0x7d,3,pppppppuVar110 + 0x32);
        }
      }
      *(undefined1 *)((longlong)pppppppuVar110 + 0x3d6) = 1;
      *(undefined8 *)((longlong)ppcVar62 + -8) = 0x141921b5d;
      ppppppuVar47 = (undefined8 ******)pdb_141c0c220(&UNK_1433594d0,8,pppppppuVar110 + 0x6e);
      *(undefined1 *)((longlong)pppppppuVar110 + 0x3d6) = 1;
      *(undefined8 *)((longlong)ppcVar62 + -8) = 0x141921b79;
      ppppppuVar31 = (undefined8 ******)pdb_142de9270(&UNK_1433594d8,0xf);
      pppppppuVar110[0x32] = ppppppuVar31;
      if (ppppppuVar47 != (undefined8 ******)0x0) {
        *(undefined1 *)((longlong)pppppppuVar110 + 0x3d6) = 1;
        *(undefined8 *)((longlong)ppcVar62 + -8) = 0x141921b9d;
        pdb_140f36c40(pppppppuVar110 + 0x32);
        ppppppuVar31 = ppppppuVar47;
      }
      *(undefined1 *)((longlong)pppppppuVar110 + 0x3d6) = 1;
      *(undefined8 *)((longlong)ppcVar62 + -8) = 0x141922713;
      uVar44 = pdb_14192ac10(ppppppuVar47 == (undefined8 ******)0x0);
      pauVar39 = _DAT_143ca8e90;
      if ((uVar44 & 1) != 0) {
        pppppppuVar110[7] = ppppppuVar31;
        if (2 < *(ulonglong *)*_DAT_143ca8e90) {
          pppppppuVar110[0x5a] = pppppppuVar110 + 7;
          pppppppuVar110[0x5b] = (undefined8 ******)pdb_140f36c20;
          pppppppuVar110[0x32] = (undefined8 ******)&UNK_143359270;
          pppppppuVar110[0x33] = (undefined8 ******)0x26;
          pppppppuVar110[0x34] = (undefined8 ******)&UNK_143359270;
          pppppppuVar110[0x35] = (undefined8 ******)0x26;
          pppppppuVar110[0x36] = (undefined8 ******)&UNK_143359510;
          *(undefined8 *)((longlong)ppcVar62 + -8) = 0x1419227a5;
          pdb_1400c9be0(&UNK_1433594e7,pppppppuVar110 + 0x5a,3,pppppppuVar110 + 0x32);
        }
        ppppppuVar31 = pppppppuVar110[0xf];
        *(undefined8 *)((longlong)ppcVar62 + -8) = 0x1419227b2;
        ppppppuVar31 = (undefined8 ******)pdb_1418c0450(param_2,ppppppuVar31);
        pppppppuVar110[0x2e] = ppppppuVar31;
        if (2 < *(ulonglong *)*pauVar39) {
          pppppppuVar110[0x5a] = pppppppuVar110 + 0x2e;
          pppppppuVar110[0x5b] = (undefined8 ******)pdb_140f72a40;
          pppppppuVar110[0x32] = (undefined8 ******)&UNK_143359270;
          pppppppuVar110[0x33] = (undefined8 ******)0x26;
          pppppppuVar110[0x34] = (undefined8 ******)&UNK_143359270;
          pppppppuVar110[0x35] = (undefined8 ******)0x26;
          pppppppuVar110[0x36] = (undefined8 ******)&UNK_143359558;
          *(undefined8 *)((longlong)ppcVar62 + -8) = 0x14192283b;
          pdb_1400c9be0(&UNK_143359528,pppppppuVar110 + 0x5a,3,pppppppuVar110 + 0x32);
        }
        *(undefined1 *)((longlong)pppppppuVar110 + 0x3d6) = 1;
        *(undefined8 *)((longlong)ppcVar62 + -8) = 0x14192284c;
        pdb_140f36c40(pppppppuVar110 + 7);
      }
      ppppppuVar47 = pppppppuVar110[0x26];
      ppppppuVar46 = pppppppuVar110[0x1a];
      ppppppuVar36 = pppppppuVar110[0x1b];
      *(undefined1 *)((longlong)pppppppuVar110 + 0x3d6) = 1;
      *(undefined8 *)((longlong)ppcVar62 + -8) = 0x14192287b;
      pdb_1415e9150(pppppppuVar110 + 7,ppppppuVar46,ppppppuVar46 + (longlong)ppppppuVar36 * 5);
      ppppppuVar46 = pppppppuVar110[0x1d];
      ppppppuVar36 = pppppppuVar110[0x1e];
      *(undefined8 *)((longlong)ppcVar62 + -8) = 0x14192289d;
      pdb_1415ed4a0(pppppppuVar110 + 0x2e,ppppppuVar46,ppppppuVar46 + (longlong)ppppppuVar36 * 2);
      ppppppuVar46 = pppppppuVar110[0x16];
      cVar24 = *(char *)((longlong)pppppppuVar110 + 0x3d2);
      if (SBORROW8(0,(longlong)ppppppuVar46)) {
        pppppppuVar110[0x5a] = (undefined8 ******)0x8000000000000000;
      }
      else {
        *(undefined8 *)((longlong)ppcVar62 + -8) = 0x1419228da;
        pdb_1415e7c60(pppppppuVar110 + 0x5a,pppppppuVar110 + 0x16);
      }
      if (cVar24 != '\x03') {
        *(undefined4 *)((longlong)pppppppuVar110 + 0x57) =
             *(undefined4 *)((longlong)pppppppuVar110 + 0x67);
        pppppppuVar110[10] = pppppppuVar110[0xc];
      }
      pppppppuVar110[0x3a] = pppppppuVar110[0x14];
      pppppppuVar110[0x38] = pppppppuVar110[0x12];
      pppppppuVar110[0x39] = pppppppuVar110[0x13];
      pppppppuVar110[0x41] = ppppppuVar31;
      *(undefined4 *)(pppppppuVar110 + 0x54) = *(undefined4 *)(pppppppuVar110 + 0x6a);
      *(undefined4 *)((longlong)pppppppuVar110 + 0x2a4) = *(undefined4 *)(pppppppuVar110 + 0x28);
      pppppppuVar110[0x55] = pppppppuVar110[5];
      pppppppuVar110[0x58] = pppppppuVar110[-4];
      pppppppuVar110[0x56] = pppppppuVar110[-6];
      pppppppuVar110[0x57] = pppppppuVar110[-5];
      *(undefined4 *)((longlong)pppppppuVar110 + 0x274) =
           *(undefined4 *)((longlong)pppppppuVar110 + 0x394);
      *(undefined1 (*) [16])(pppppppuVar110 + 0x4f) = unaff_XMM7;
      *(undefined4 *)(pppppppuVar110 + 0x51) = uVar130;
      *(undefined4 *)((longlong)pppppppuVar110 + 0x28c) = uVar139;
      *(undefined4 *)(pppppppuVar110 + 0x52) = uVar140;
      *(undefined4 *)((longlong)pppppppuVar110 + 0x294) = uVar141;
      *(undefined4 *)(pppppppuVar110 + 0x53) = uVar142;
      *(undefined2 *)((longlong)pppppppuVar110 + 0x29c) =
           *(undefined2 *)((longlong)pppppppuVar110 + 0x3be);
      pppppppuVar110[0x3f] = pppppppuVar110[-10];
      pppppppuVar110[0x40] = pppppppuVar110[-9];
      *(undefined4 *)(pppppppuVar110 + 0x3e) = uVar143;
      *(undefined1 *)((longlong)pppppppuVar110 + 500) =
           *(undefined1 *)((longlong)pppppppuVar110 + 0x3bd);
      pppppppuVar110[0x59] = ppppppuVar47;
      pppppppuVar110[0x32] = pppppppuVar110[7];
      pppppppuVar110[0x33] = pppppppuVar110[8];
      pppppppuVar110[0x34] = pppppppuVar110[9];
      pppppppuVar110[0x35] = pppppppuVar110[0x2e];
      pppppppuVar110[0x36] = pppppppuVar110[0x2f];
      pppppppuVar110[0x37] = pppppppuVar110[0x30];
      pppppppuVar110[0x3d] = pppppppuVar110[0x5c];
      pppppppuVar110[0x3b] = pppppppuVar110[0x5a];
      pppppppuVar110[0x3c] = pppppppuVar110[0x5b];
      *(undefined4 *)(pppppppuVar110 + 0x42) = *(undefined4 *)((longlong)pppppppuVar110 + 0x354);
      *(undefined4 *)((longlong)pppppppuVar110 + 0x214) =
           *(undefined4 *)((longlong)pppppppuVar110 + 0x144);
      pppppppuVar110[0x43] = pppppppuVar110[-2];
      pppppppuVar110[0x44] = pppppppuVar110[-1];
      *(char *)(pppppppuVar110 + 0x45) = (char)*(undefined4 *)((longlong)pppppppuVar110 + 0x35c);
      *(char *)((longlong)pppppppuVar110 + 0x229) = (char)*(undefined4 *)(pppppppuVar110 + 0x6b);
      *(char *)((longlong)pppppppuVar110 + 0x22c) = cVar24;
      *(undefined4 *)((longlong)pppppppuVar110 + 0x234) =
           *(undefined4 *)((longlong)pppppppuVar110 + 0x57);
      *(undefined8 *******)((longlong)pppppppuVar110 + 0x22d) = pppppppuVar110[10];
      *(undefined4 *)(pppppppuVar110 + 0x47) = unaff_XMM10_Da;
      *(undefined4 *)((longlong)pppppppuVar110 + 0x23c) = unaff_XMM10_Db;
      *(undefined4 *)(pppppppuVar110 + 0x48) = unaff_XMM10_Dc;
      *(undefined4 *)((longlong)pppppppuVar110 + 0x244) = unaff_XMM10_Dd;
      *(undefined4 *)(pppppppuVar110 + 0x49) = *(undefined4 *)(pppppppuVar110 + 0x29);
      *(undefined4 *)((longlong)pppppppuVar110 + 0x24c) = unaff_XMM15_Da;
      *(undefined4 *)(pppppppuVar110 + 0x4a) = unaff_XMM8_Da;
      *(undefined4 *)((longlong)pppppppuVar110 + 0x254) = unaff_XMM8_Db;
      *(undefined4 *)(pppppppuVar110 + 0x4b) = unaff_XMM8_Dc;
      *(undefined4 *)((longlong)pppppppuVar110 + 0x25c) = unaff_XMM8_Dd;
      pppppppuVar110[0x4c] = pppppppuVar110[-8];
      *(float *)(pppppppuVar110 + 0x4d) = unaff_XMM14_Da;
      *(undefined4 *)((longlong)pppppppuVar110 + 0x26c) = unaff_XMM13_Da;
      *(undefined1 *)(pppppppuVar110 + 0x4e) = *(undefined1 *)((longlong)pppppppuVar110 + 0x3d3);
      *(undefined8 *)((longlong)ppcVar62 + -8) = 0x141922a9b;
      ppppppuVar31 = (undefined8 ******)pdb_141920580();
      pppppppuVar110[0x78] = ppppppuVar31;
      *(undefined8 *)((longlong)ppcVar62 + -8) = 0x141922ab8;
      pub_142e32760(ppppppuVar31,pppppppuVar110 + 0x32,0x140);
      bVar42 = *(byte *)((longlong)pppppppuVar110 + 0x3d5);
      ppppppuVar31 = pppppppuVar110[0x10];
      ppppppuVar47 = pppppppuVar110[0xf];
      *(undefined8 *)((longlong)ppcVar62 + -8) = 0x141922ad5;
      pdb_140f3e010(pppppppuVar110 + 0x32,ppppppuVar31,ppppppuVar47);
      iVar27 = *(int *)(pppppppuVar110 + 0x77);
      ppppppuVar31 = pppppppuVar110[0x32];
      ppppppuVar47 = pppppppuVar110[0x33];
      ppppppuVar36 = pppppppuVar110[0x35];
      *(undefined8 *******)param_1[1] = pppppppuVar110[0x34];
      *(undefined8 *******)((longlong)param_1[1] + 8) = ppppppuVar36;
      *(undefined8 *******)*param_1 = ppppppuVar31;
      *(undefined8 *******)((longlong)*param_1 + 8) = ppppppuVar47;
      *(undefined8 *******)param_1[2] = pppppppuVar110[0x78];
      *(undefined4 *)((longlong)param_1[2] + 8) = *(undefined4 *)((longlong)pppppppuVar110 + 0x14c);
      *(byte *)((longlong)param_1[2] + 0xc) = iVar27 < 0x1b | bVar42;
      *(char *)((longlong)param_1[2] + 0xd) = (char)pppppppuVar110[0x2c];
      *(char *)((longlong)param_1[2] + 0xe) = (char)pppppppuVar110[0x2d];
      *(bool *)((longlong)param_1[2] + 0xf) = bVar121;
      *(undefined1 *)((longlong)pppppppuVar110 + 0x3d4) = 0;
      *(undefined8 *)((longlong)ppcVar62 + -8) = 0x141922b3f;
      pdb_14098f1a0(pppppppuVar110 + 0x19);
      if ((!SBORROW8(0,(longlong)ppppppuVar46)) && (ppppppuVar46 != (undefined8 ******)0x0)) {
        ppppppuVar31 = pppppppuVar110[0x17];
        *(undefined8 *)((longlong)ppcVar62 + -8) = 0x141922b64;
        pub_1406abac0((byte *)ppppppuVar31,(longlong)ppppppuVar46 * 0x28,4);
      }
      *(undefined8 *)((longlong)ppcVar62 + -8) = 0x141922b71;
      pdb_140a7a6f0(pppppppuVar110 + 0x6e);
      goto LAB_14192124f;
    }
    *(undefined1 (**) [16])((longlong)*param_1 + 8) = pauVar54;
    *(undefined8 *******)*param_1 = (undefined8 ******)0x8000000000000000;
    *(undefined8 *)((longlong)ppcVar62 + -8) = 0x1419219d6;
    pdb_1400dbc80(pppppppuVar110 + 0x12);
    ppppppuVar31 = pppppppuVar110[0x16];
    if ((!SBORROW8(0,(longlong)ppppppuVar31)) && (ppppppuVar31 != (undefined8 ******)0x0)) {
      ppppppuVar47 = pppppppuVar110[0x17];
      *(undefined8 *)((longlong)ppcVar62 + -8) = 0x141921a0a;
      pub_1406abac0((byte *)ppppppuVar47,(longlong)ppppppuVar31 * 0x28,4);
    }
  }
  bVar42 = *(byte *)(pppppppuVar110 + 0x6e);
  if (2 < bVar42) {
    if (bVar42 == 3) {
      ppppppuVar31 = pppppppuVar110[0x6f];
      if (ppppppuVar31 != (undefined8 ******)0x0) {
        ppppppuVar47 = pppppppuVar110[0x70];
        *(undefined8 *)((longlong)ppcVar62 + -8) = 0x141921240;
        pub_1406abac0((byte *)ppppppuVar47,(ulonglong)ppppppuVar31,1);
      }
    }
    else if (bVar42 == 4) {
      ppppppuVar31 = pppppppuVar110[0x70];
      ppppppuVar47 = pppppppuVar110[0x71];
      pppppppuVar110[0x78] = ppppppuVar31;
      *(undefined8 *)((longlong)ppcVar62 + -8) = 0x1419211fd;
      pdb_14098ae50(ppppppuVar31,ppppppuVar47);
      ppppppuVar31 = pppppppuVar110[0x6f];
      if (ppppppuVar31 != (undefined8 ******)0x0) {
        ppppppuVar47 = pppppppuVar110[0x78];
        *(undefined8 *)((longlong)ppcVar62 + -8) = 0x141921220;
        pub_1406abac0((byte *)ppppppuVar47,(longlong)ppppppuVar31 << 5,8);
      }
    }
    else {
      *(undefined8 *)((longlong)ppcVar62 + -8) = 0x14192124e;
      pdb_1409a45e0(pppppppuVar110 + 0x6f);
    }
  }
LAB_14192124f:
  ppppppuVar31 = pppppppuVar110[0x2a];
  if (ppppppuVar31 != (undefined8 ******)0x0) {
    ppppppuVar47 = pppppppuVar110[0x2b];
    *(undefined8 *)((longlong)ppcVar62 + -8) = 0x14192126d;
    pub_1406abac0((byte *)ppppppuVar47,(ulonglong)ppppppuVar31,1);
  }
  return param_1;
code_r0x0001419272f1:
  goto LAB_14192723d;
LAB_141926c69:
  if (ppppppuVar46 != (undefined8 ******)0x0) {
    *(undefined4 *)ppppppuVar36 = uVar142;
    pppppuVar35 = *ppppppuVar46;
    if ((!SBORROW8(0,(longlong)pppppuVar35)) && (pppppuVar35 != (undefined8 *****)0x0)) {
      pppppuVar113 = ppppppuVar46[1];
      *(undefined8 *)((longlong)pppppppuVar79 + -8) = 0x141926c99;
      pub_1406abac0((byte *)pppppuVar113,(longlong)pppppuVar35 * 0x28,4);
    }
    *ppppppuVar46 = pppppppuVar110[0x170];
    ppppppuVar46[1] = pppppppuVar110[0x16b];
    ppppppuVar46[2] = pppppppuVar110[0x148];
    if (*(int *)(pppppppuVar110 + 0x164) == iVar27) {
      *(undefined4 *)pppppppuVar110[0xcd] = *(undefined4 *)((longlong)pppppppuVar110 + 0xa24);
      ppppppuVar47 = pppppppuVar110[0x145];
      pppppuVar35 = ppppppuVar47[6];
      pppppuVar113 = ppppppuVar47[8];
      if (pppppuVar35 == ppppppuVar47[4]) {
        ppppppuVar47 = pppppppuVar110[0x145];
        *(undefined1 *)((longlong)pppppppuVar110 + 0xb93) = 0;
        *(undefined1 *)((longlong)pppppppuVar110 + 0xb92) = 1;
        *(undefined8 *)((longlong)pppppppuVar79 + -8) = 0x141926d03;
        pdb_142d7e8a0(ppppppuVar47 + 4);
      }
      ppppppuVar47 = pppppppuVar110[0x145];
      ppppppuVar47[5][(longlong)pppppuVar35] = pppppuVar113;
      ppppppuVar47[6] = (undefined8 *****)((longlong)pppppuVar35 + 1);
      ppppppuVar47[8] = (undefined8 *****)((longlong)ppppppuVar47[8] + 1);
    }
    ppppppuVar47 = (undefined8 ******)pppppppuVar110[0x151][1];
    pppppppuVar110[0xda] = (undefined8 ******)*pppppppuVar110[0x151];
    pppppppuVar110[0xdb] = ppppppuVar47;
    *(undefined1 *)((longlong)pppppppuVar110 + 0xb93) = 0;
    *(undefined1 *)((longlong)pppppppuVar110 + 0xb92) = 1;
    *(undefined8 *)((longlong)pppppppuVar79 + -8) = 0x141926d4b;
    pdb_140a3cc40(pppppppuVar110 + 0xda);
    ppppppuVar47 = (undefined8 ******)pppppppuVar110[0x151][1];
    pppppppuVar110[0xda] = (undefined8 ******)*pppppppuVar110[0x151];
    pppppppuVar110[0xdb] = ppppppuVar47;
    *(undefined1 *)((longlong)pppppppuVar110 + 0xb93) = 0;
    *(undefined1 *)((longlong)pppppppuVar110 + 0xb92) = 1;
    *(undefined8 *)((longlong)pppppppuVar79 + -8) = 0x141926d80;
    pdb_140a3bf60(pppppppuVar110 + 0x34,pppppppuVar110 + 0xda);
    pppppuVar35 = ppppppuVar31[2];
    *(undefined4 *)pppppppuVar110[0xd4] = *(undefined4 *)(pppppppuVar110 + 0x14c);
    ppppppuVar31[0xb] = pppppuVar35;
    ppppppuVar31 = pppppppuVar110[0x196];
    uVar142 = *(undefined4 *)((longlong)ppppppuVar31 + 0x1c);
    pppppuVar113 = *ppppppuVar31;
    pppppuVar38 = ppppppuVar31[2];
    pppppuVar113[0x2e] = pppppuVar35;
    uVar130 = *(undefined4 *)(pppppppuVar110 + 0x37);
    *(undefined4 *)pppppuVar38 = uVar142;
    *(undefined4 *)(pppppuVar113 + 0x32) = uVar130;
    *(undefined4 *)((longlong)pppppuVar113 + 0x194) = 0;
    ppppppuVar31 = (undefined8 ******)pppppppuVar110[0x151][1];
    pppppppuVar110[0xe0] = (undefined8 ******)*pppppppuVar110[0x151];
    pppppppuVar110[0xe1] = ppppppuVar31;
    pppppppuVar110[0xdb] = pppppppuVar110[0x34];
    pppppppuVar110[0xdc] = pppppppuVar110[0x35];
    pppppppuVar110[0xdd] = pppppppuVar110[0x36];
    pppppppuVar110[0xde] = pppppppuVar110[0x37];
    pppppppuVar110[0xdf] = pppppppuVar110[0x16c];
    pppppppuVar110[0xda] = (undefined8 ******)0x3;
    *(undefined1 *)((longlong)pppppppuVar110 + 0xb93) = 0;
    *(undefined1 *)((longlong)pppppppuVar110 + 0xb92) = 0;
    *(undefined8 *)((longlong)pppppppuVar79 + -8) = 0x141926e33;
    pauVar39 = (undefined1 (*) [16])
               pdb_141a55160(pppppppuVar110 + 0x7a,pppppuVar113,pppppppuVar110 + 0xda);
    if (*(int *)(pppppppuVar110 + 0x7a) == 0xb) {
      ppppppuVar31 = pppppppuVar110[0x15d];
      ppppppuVar47 = pppppppuVar110[0x157];
      if (ppppppuVar31 != (undefined8 ******)0x0) {
        ppppppuVar46 = pppppppuVar110[0x163];
        *(undefined8 *)((longlong)pppppppuVar79 + -8) = 0x141926e66;
        pub_1406abac0((byte *)ppppppuVar46,(ulonglong)ppppppuVar31,1);
        pauVar39 = extraout_RAX;
      }
      if (ppppppuVar47 != (undefined8 ******)0x0) {
        ppppppuVar31 = pppppppuVar110[0x168];
        *(undefined8 *)((longlong)pppppppuVar79 + -8) = 0x141926e80;
        pub_1406abac0((byte *)ppppppuVar31,(ulonglong)ppppppuVar47,1);
        pauVar39 = extraout_RAX_00;
      }
      return pauVar39;
    }
    *(undefined4 *)(pppppppuVar110 + 0xe0) = *(undefined4 *)(pppppppuVar110 + 0x80);
    *(undefined4 *)((longlong)pppppppuVar110 + 0x704) =
         *(undefined4 *)((longlong)pppppppuVar110 + 0x404);
    *(undefined4 *)(pppppppuVar110 + 0xe1) = *(undefined4 *)(pppppppuVar110 + 0x81);
    *(undefined4 *)((longlong)pppppppuVar110 + 0x70c) =
         *(undefined4 *)((longlong)pppppppuVar110 + 0x40c);
    *(undefined4 *)(pppppppuVar110 + 0xde) = *(undefined4 *)(pppppppuVar110 + 0x7e);
    *(undefined4 *)((longlong)pppppppuVar110 + 0x6f4) =
         *(undefined4 *)((longlong)pppppppuVar110 + 0x3f4);
    *(undefined4 *)(pppppppuVar110 + 0xdf) = *(undefined4 *)(pppppppuVar110 + 0x7f);
    *(undefined4 *)((longlong)pppppppuVar110 + 0x6fc) =
         *(undefined4 *)((longlong)pppppppuVar110 + 0x3fc);
    pppppppuVar110[0xdc] = pppppppuVar110[0x7c];
    pppppppuVar110[0xdd] = pppppppuVar110[0x7d];
    pppppppuVar110[0xda] = pppppppuVar110[0x7a];
    pppppppuVar110[0xdb] = pppppppuVar110[0x7b];
    *(undefined **)((longlong)pppppppuVar79 + 0x20) = &UNK_143359a80;
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((longlong)pppppppuVar79 + -8) = 0x14192779c;
    pdb_142dc8170(&UNK_143359be0,0x2b,pppppppuVar110 + 0xda,&UNK_143359bc0);
  }
  bVar121 = false;
  goto LAB_141926c24;
code_r0x000141922084:
  arg0 = (undefined1 (*) [16])(&UNK_143359e5f + uVar44);
  if (arg0 != (undefined1 (*) [16])0x0 && bVar122) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pauVar32 = (undefined1 (*) [16])0x3;
  goto code_r0x00014192209f;
code_r0x0001419221ea:
  plVar49 = *(longlong **)((longlong)param_2[1] + 8);
  ppcVar62 = ppcVar70;
  if (plVar49[5] != 0) {
    LOCK();
    bVar121 = plVar49[1] == 1;
    if (bVar121) {
      plVar49[1] = (longlong)param_4;
    }
    UNLOCK();
    if ((!bVar121) || (plVar49[1] = 1, *plVar49 != 1)) {
      *(undefined1 *)((longlong)pppppppuVar110 + 0x3d7) = 1;
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)ppcVar70 + -8) = 0x141922fc0;
      pdb_142dc8150(&UNK_1433595a0);
    }
    ppppppuVar31 = (undefined8 ******)plVar49[5];
    if (ppppppuVar31 != (undefined8 ******)0x0) {
      pppppppuVar110[0x73] = (undefined8 ******)pauVar54;
      pauVar115 = (undefined1 (*) [16])plVar49[2];
      auVar125 = *pauVar115;
      uVar29 = ~(uint)(ushort)((ushort)(SUB161(auVar125 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar125 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar125 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar125 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar125 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar125 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar125 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar125 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar125 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar125 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar125 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar125 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar125 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar125 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar125 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar125[0xf] >> 7) << 0xf);
      pppppppuVar110[0x6d] = (undefined8 ******)(pauVar115 + 1);
code_r0x000141922275:
      pppppppuVar110[0x76] = ppppppuVar31;
      if ((short)uVar29 == 0) {
        pauVar39 = (undefined1 (*) [16])pppppppuVar110[0x6d];
        do {
          auVar125 = *pauVar39;
          pauVar115 = pauVar115 + -0x70;
          pauVar39 = pauVar39 + 1;
          uVar29 = (ushort)((ushort)(SUB161(auVar125 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar125 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar125 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar125 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar125 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar125 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar125 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar125 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar125 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar125 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar125 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar125 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar125 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar125 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar125 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar125[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar29 == 0);
        pppppppuVar110[0x6d] = (undefined8 ******)pauVar39;
      }
      pauVar117 = (undefined1 (*) [16])(ulonglong)uVar29;
      uVar111 = 0;
      for (; (uVar29 & 1) == 0; uVar29 = uVar29 >> 1 | 0x80000000) {
        uVar111 = uVar111 + 1;
      }
      uVar44 = (ulonglong)uVar111;
      pauVar39 = *(undefined1 (**) [16])pauVar115[uVar44 * -7 + -6];
      in_R11 = *(undefined1 (**) [16])(pauVar115[uVar44 * -7 + -5] + 8);
      auVar125 = *pauVar39;
      in_R10 = pauVar39 + 1;
      param_2 = *(undefined1 (**) [16])pauVar115[uVar44 * -7 + -3];
      auVar135 = *param_2;
      pauVar32 = param_2 + 1;
      pppppppuVar110[0x75] = (undefined8 ******)pauVar115;
      arg0 = *(undefined1 (**) [16])(pauVar115[uVar44 * -7 + -2] + 8);
      pauVar54 = (undefined1 (*) [16])
                 (ulonglong)
                 ~(uint)(ushort)((ushort)(SUB161(auVar125 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar125 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar125 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar125 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar125 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar125 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar125 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar125 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar125 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar125 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar125 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar125 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar125 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar125 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar125 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar125[0xf] >> 7) << 0xf);
      pauVar115 = (undefined1 (*) [16])
                  (ulonglong)
                  ~(uint)(ushort)((ushort)(SUB161(auVar135 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar135 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar135 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar135 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar135 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar135 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar135 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar135 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar135 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar135 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar135 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar135 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar135 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar135 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar135 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar135[0xf] >> 7) << 0xf);
      pppppppuStack_4c8 = pppppppuVar110;
joined_r0x0001419222f5:
      if (pauVar39 != (undefined1 (*) [16])0x0) goto code_r0x00014192232b;
code_r0x0001419223b6:
      do {
        pauVar39 = (undefined1 (*) [16])(ulonglong)*(uint *)(pppppppuStack_4c8 + 0x77);
        ppcVar71 = ppcVar70;
        pppppppuVar110 = pppppppuStack_4c8;
        if (arg0 == (undefined1 (*) [16])0x0) {
          uVar29 = (uint)pauVar117 - 1 & (uint)pauVar117;
          ppppppuVar31 = (undefined8 ******)((longlong)pppppppuStack_4c8[0x76] + -1);
          param_2 = (undefined1 (*) [16])pppppppuStack_4c8[0xe];
          pauVar115 = (undefined1 (*) [16])pppppppuStack_4c8[0x75];
          if (ppppppuVar31 != (undefined8 ******)0x0) goto code_r0x000141922275;
          goto code_r0x000141922504;
        }
code_r0x0001419223c5:
        uVar29 = (uint)pauVar115;
        pppppppuVar79 = (undefined8 *******)ppcVar71;
        if ((short)pauVar115 == 0) {
code_r0x0001419223d0:
          do {
            auVar125 = *pauVar32;
            param_2 = param_2 + -0x70;
            pauVar32 = pauVar32 + 1;
            uVar29 = (ushort)((ushort)(SUB161(auVar125 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar125 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar125 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar125 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar125 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar125 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar125 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar125 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar125 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar125 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar125 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar125 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar125 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar125 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar125 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar125[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar29 == 0);
        }
        uVar111 = 0;
        for (uVar53 = uVar29; (uVar53 & 1) == 0; uVar53 = uVar53 >> 1 | 0x80000000) {
          uVar111 = uVar111 + 1;
        }
        unaff_R12 = param_2 + (ulonglong)uVar111 * -7;
        arg0 = (undefined1 (*) [16])((longlong)arg0[-1] + 0xf);
        pauVar39 = (undefined1 (*) [16])0x0;
        pauVar115 = (undefined1 (*) [16])(ulonglong)(uVar29 - 1 & uVar29);
        uStack_5b0 = *(uint *)((longlong)unaff_R12[-7] + 8);
        ppcVar70 = (char **)pppppppuVar79;
        pppppppuStack_4c8 = pppppppuVar110;
joined_r0x000141922320:
        while( true ) {
          if (2 < uStack_5b0) goto joined_r0x0001419222f5;
          uVar29 = *(uint *)((longlong)unaff_R12[-3] + 8);
          param_1 = (undefined1 (*) [16])(ulonglong)uVar29;
          pppppppuStack_4c8[0x78] = (undefined8 ******)param_1;
          if (param_1 < (undefined1 (*) [16])0x9) goto code_r0x000141922392;
          param_1 = (undefined1 (*) [16])0x1;
          if (uVar29 == 999) {
            param_1 = (undefined1 (*) [16])pppppppuStack_4c8[0x78];
          }
code_r0x00014192240b:
          *(int *)((longlong)unaff_R12[-3] + 8) = (int)param_1;
          pppppppuStack_4c8[0x2c] = (undefined8 ******)CONCAT71((int7)((ulonglong)unaff_R12 >> 8),1)
          ;
          if (pauVar39 == (undefined1 (*) [16])0x0) goto code_r0x0001419223b6;
code_r0x00014192232b:
          uVar29 = (uint)pauVar54;
          if (in_R11 == (undefined1 (*) [16])0x0) break;
          ppcVar69 = ppcVar70;
          pppppppuVar110 = pppppppuStack_4c8;
          if ((short)pauVar54 == 0) {
code_r0x000141922340:
            do {
              auVar125 = *in_R10;
              pauVar39 = pauVar39 + -0x70;
              in_R10 = in_R10 + 1;
              uVar29 = (ushort)((ushort)(SUB161(auVar125 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar125 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar125 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar125 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar125 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar125 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar125 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar125 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar125 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar125 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar125 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar125 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar125 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar125 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar125 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar125[0xf] >> 7) << 0xf) ^ 0xffff;
            } while (uVar29 == 0);
          }
          uVar111 = 0;
          for (uVar53 = uVar29; (uVar53 & 1) == 0; uVar53 = uVar53 >> 1 | 0x80000000) {
            uVar111 = uVar111 + 1;
          }
          unaff_R12 = pauVar39 + (ulonglong)uVar111 * -7;
          in_R11 = (undefined1 (*) [16])((longlong)in_R11[-1] + 0xf);
          pauVar54 = (undefined1 (*) [16])(ulonglong)(uVar29 - 1 & uVar29);
          uStack_5b0 = *(uint *)((longlong)unaff_R12[-7] + 8);
          ppcVar70 = ppcVar69;
          pppppppuStack_4c8 = pppppppuVar110;
        }
        in_R11 = (undefined1 (*) [16])0x0;
      } while( true );
    }
code_r0x000141922514:
    plVar49 = *(longlong **)((longlong)param_2[1] + 8);
    ppcVar62 = ppcVar70;
    if (plVar49[5] != 0) {
      LOCK();
      bVar121 = plVar49[1] == 1;
      if (bVar121) {
        plVar49[1] = (longlong)param_4;
      }
      UNLOCK();
      if ((!bVar121) || (plVar49[1] = 1, *plVar49 != 1)) {
        *(undefined1 *)((longlong)pppppppuVar110 + 0x3d7) = 1;
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)ppcVar70 + -8) = 0x141922fd6;
        pdb_142dc8150(&UNK_1433595b8);
      }
      ppppppuVar31 = (undefined8 ******)plVar49[5];
      if (ppppppuVar31 != (undefined8 ******)0x0) {
        pppppppuVar110[0x73] = (undefined8 ******)pauVar54;
        pauVar39 = (undefined1 (*) [16])plVar49[2];
        auVar125 = *pauVar39;
        uVar29 = ~(uint)(ushort)((ushort)(SUB161(auVar125 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar125 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar125 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar125 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar125 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar125 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar125 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar125 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar125 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar125 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar125 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar125 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar125 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar125 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar125 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar125[0xf] >> 7) << 0xf);
        pppppppuVar110[0x78] = (undefined8 ******)pauVar39;
        pppppppuVar110[0x75] = (undefined8 ******)(pauVar39 + 1);
code_r0x00014192259b:
        ppppppuVar47 = pppppppuVar110[0x78];
        pppppppuVar110[0x76] = ppppppuVar31;
        if ((short)uVar29 == 0) {
          pauVar39 = (undefined1 (*) [16])pppppppuVar110[0x75];
          do {
            auVar125 = *pauVar39;
            ppppppuVar47 = ppppppuVar47 + -0xe0;
            pauVar39 = pauVar39 + 1;
            uVar29 = (ushort)((ushort)(SUB161(auVar125 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar125 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar125 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar125 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar125 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar125 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar125 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar125 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar125 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar125 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar125 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar125 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar125 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar125 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar125 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar125[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar29 == 0);
          pppppppuVar110[0x75] = (undefined8 ******)pauVar39;
        }
        uVar111 = 0;
        for (uVar53 = uVar29; (uVar53 & 1) == 0; uVar53 = uVar53 >> 1 | 0x80000000) {
          uVar111 = uVar111 + 1;
        }
        uVar44 = (ulonglong)uVar111;
        pauVar32 = (undefined1 (*) [16])ppppppuVar47[uVar44 * -0xe + -0xc];
        pppppuVar35 = ppppppuVar47[uVar44 * -0xe + -9];
        auVar125 = *pauVar32;
        pauVar39 = pauVar32 + 1;
        pauVar115 = (undefined1 (*) [16])ppppppuVar47[uVar44 * -0xe + -6];
        auVar135 = *pauVar115;
        pauVar117 = pauVar115 + 1;
        pppppppuVar110[0x78] = ppppppuVar47;
        pppppuVar113 = ppppppuVar47[uVar44 * -0xe + -3];
        uVar111 = ~(uint)(ushort)((ushort)(SUB161(auVar125 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar125 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar125 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar125 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar125 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar125 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar125 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar125 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar125 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar125 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar125 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar125 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar125 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar125 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar125 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar125[0xf] >> 7) << 0xf);
        uVar53 = ~(uint)(ushort)((ushort)(SUB161(auVar135 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar135 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar135 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar135 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar135 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar135 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar135 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar135 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar135 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar135 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar135 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar135 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar135 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar135 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar135 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar135[0xf] >> 7) << 0xf);
joined_r0x000141922622:
        if (pauVar32 != (undefined1 (*) [16])0x0) goto code_r0x000141922655;
code_r0x0001419226bb:
        do {
          if (pppppuVar113 == (undefined8 *****)0x0) {
            uVar29 = uVar29 - 1 & uVar29;
            ppppppuVar31 = (undefined8 ******)((longlong)pppppppuVar110[0x76] + -1);
            if (ppppppuVar31 != (undefined8 ******)0x0) goto code_r0x00014192259b;
            pauVar39 = (undefined1 (*) [16])(ulonglong)*(uint *)(pppppppuVar110 + 0x77);
            pauVar54 = (undefined1 (*) [16])pppppppuVar110[0x73];
            break;
          }
          if ((short)uVar53 == 0) {
            do {
              auVar125 = *pauVar117;
              pauVar115 = pauVar115 + -0x70;
              pauVar117 = pauVar117 + 1;
              uVar53 = (ushort)((ushort)(SUB161(auVar125 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar125 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar125 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar125 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar125 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar125 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar125 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar125 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar125 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar125 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar125 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar125 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar125 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar125 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar125 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar125[0xf] >> 7) << 0xf) ^ 0xffff;
            } while (uVar53 == 0);
          }
          uVar14 = 0;
          for (uVar15 = uVar53; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
            uVar14 = uVar14 + 1;
          }
          uVar53 = uVar53 - 1 & uVar53;
          pauVar54 = pauVar115 + (ulonglong)uVar14 * -7;
          pppppuVar113 = (undefined8 *****)((longlong)pppppuVar113 + -1);
          pauVar32 = (undefined1 (*) [16])0x0;
          iVar27 = *(int *)(pauVar54[-7] + 8);
          while( true ) {
            if (iVar27 != 2) goto joined_r0x000141922622;
            *(undefined4 *)(pauVar54[-3] + 8) = 999;
            pppppppuVar110[0x2d] = (undefined8 ******)CONCAT71((int7)((ulonglong)pauVar54 >> 8),1);
            if (pauVar32 == (undefined1 (*) [16])0x0) goto code_r0x0001419226bb;
code_r0x000141922655:
            if (pppppuVar35 == (undefined8 *****)0x0) break;
            if ((short)uVar111 == 0) {
              do {
                auVar125 = *pauVar39;
                pauVar32 = pauVar32 + -0x70;
                pauVar39 = pauVar39 + 1;
                uVar111 = (ushort)((ushort)(SUB161(auVar125 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar125 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar125 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar125 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar125 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar125 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar125 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar125 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar125 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar125 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar125 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar125 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar125 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar125 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar125 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar125[0xf] >> 7) << 0xf) ^ 0xffff;
              } while (uVar111 == 0);
            }
            uVar14 = 0;
            for (uVar15 = uVar111; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
              uVar14 = uVar14 + 1;
            }
            uVar111 = uVar111 - 1 & uVar111;
            pauVar54 = pauVar32 + (ulonglong)uVar14 * -7;
            pppppuVar35 = (undefined8 *****)((longlong)pppppuVar35 + -1);
            iVar27 = *(int *)(pauVar54[-7] + 8);
          }
          pppppuVar35 = (undefined8 *****)0x0;
        } while( true );
      }
    }
  }
  goto code_r0x000141921ce7;
code_r0x00014192a7dd:
  ppppppuVar31 = pppppppuVar110[8];
  *(undefined8 *)((longlong)ppcVar104 + -8) = 0x14192a7e6;
  pub_1406abac0((byte *)ppppppuVar31,0x143359fbc,(ulonglong)pauVar115);
  return extraout_RAX_04;
code_r0x00014192a29d:
                    /* WARNING: Could not recover jumptable at 0x00014192a2a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pauVar39 = (undefined1 (*) [16])
             (*(code *)((longlong)*arg0 +
                       (longlong)*(int *)((longlong)*arg0 + (longlong)pauVar32 * 4)))();
  return pauVar39;
code_r0x00014192ac74:
  *(undefined8 *)((longlong)ppcVar104 + -8) = 0x14192ac80;
  pdb_140f3f5b0(pppppppuVar110 + -4);
  auVar125 = *(undefined1 (*) [16])(pppppppuVar110 + -4);
  in_XMM1 = *(undefined1 (*) [16])(pppppppuVar110 + -2);
  uVar142 = *(undefined4 *)pppppppuVar110;
  uVar130 = *(undefined4 *)((longlong)pppppppuVar110 + 4);
  in_XMM2_Dc = *(undefined4 *)(pppppppuVar110 + 1);
  in_XMM2_Dd = *(undefined4 *)((longlong)pppppppuVar110 + 0xc);
  pauVar39 = pauVar54;
code_r0x00014192ac8d:
  *(undefined4 *)(pppppppuVar110 + -8) = uVar142;
  *(undefined4 *)((longlong)pppppppuVar110 + -0x3c) = uVar130;
  *(undefined4 *)(pppppppuVar110 + -7) = in_XMM2_Dc;
  *(undefined4 *)((longlong)pppppppuVar110 + -0x34) = in_XMM2_Dd;
  *(undefined1 (*) [16])(pppppppuVar110 + -10) = in_XMM1;
  *(undefined1 (*) [16])(pppppppuVar110 + -0xc) = auVar125;
  pppppppuVar110[-4] = (undefined8 ******)&UNK_1433591b1;
  pppppppuVar110[-3] = (undefined8 ******)0xc;
  pppppppuVar110[-2] = (undefined8 ******)pauVar39;
  *(undefined1 *)((longlong)pppppppuVar110 + 0x1f) = 0;
  *(undefined8 *)((longlong)ppcVar104 + -8) = 0x14192acc1;
  pdb_142de9590(pppppppuVar110 + -4,pppppppuVar110 + -0xc);
  return (undefined1 (*) [16])0x1;
}

