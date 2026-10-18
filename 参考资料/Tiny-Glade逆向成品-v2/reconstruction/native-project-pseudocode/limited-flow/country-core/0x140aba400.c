// VA 0x140aba400, PDB extent 4530 bytes
// country_core::systems::audio::roof_audio::roof_audio_system
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/roof_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000140ac811a) overlaps instruction at (ram,0x000140ac8119)
    */
/* WARNING: Removing unreachable block (ram,0x000140abfdd2) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::audio::roof_audio::roof_audio_system
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/roof_audio.rs
   Extent: 4530 */

ulonglong *
pdb_140aba400(undefined8 *param_1,ulonglong *param_2,uint *param_3,ulonglong *param_4,
             undefined8 param_5,ulonglong *param_6,undefined8 param_7)

{
  byte *pbVar1;
  float *pfVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  undefined1 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined *puVar14;
  longlong *plVar15;
  ulonglong *puVar16;
  undefined7 uVar24;
  ulonglong *puVar17;
  undefined8 uVar18;
  char *pcVar19;
  undefined8 *puVar20;
  ulonglong *extraout_RAX;
  ulonglong *extraout_RAX_00;
  int *piVar21;
  char *pcVar22;
  longlong lVar23;
  ulonglong *extraout_RAX_01;
  byte bVar25;
  char cVar26;
  byte bVar27;
  uint uVar28;
  uint *puVar29;
  undefined7 uVar31;
  int *piVar30;
  char cVar32;
  ulonglong uVar34;
  ulonglong *arg0;
  uint *puVar35;
  ulonglong uVar36;
  char **ppcVar37;
  char **ppcVar38;
  char **ppcVar39;
  char **ppcVar40;
  undefined4 *unaff_RBP;
  undefined8 *puVar41;
  byte bVar42;
  undefined8 *puVar43;
  uint uVar44;
  ulonglong *puVar45;
  byte *pbVar46;
  longlong lVar47;
  char cVar48;
  undefined1 auVar63 [12];
  longlong lVar49;
  ulonglong *puVar50;
  ushort uVar51;
  ulonglong *puVar52;
  ulonglong *unaff_R12;
  ulonglong *puVar53;
  ulonglong *puVar54;
  undefined8 *unaff_R14;
  longlong *unaff_R15;
  bool bVar55;
  bool bVar56;
  bool bVar57;
  bool bVar58;
  float10 in_ST0;
  float fVar59;
  float fVar60;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  undefined8 extraout_XMM0_Qb_07;
  undefined8 extraout_XMM0_Qb_08;
  undefined8 extraout_XMM0_Qb_09;
  undefined8 extraout_XMM0_Qb_10;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar61 [16];
  undefined8 extraout_XMM0_Qb_11;
  undefined1 auVar62 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined8 in_XMM2_Qa;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar68;
  undefined1 in_XMM3 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  float in_XMM4_Da;
  uint in_XMM5_Da;
  uint in_XMM5_Db;
  float unaff_XMM6_Da;
  float fVar74;
  float unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  float unaff_XMM7_Da;
  float unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  undefined4 unaff_XMM8_Da;
  float fVar75;
  undefined4 unaff_XMM8_Db;
  int iVar76;
  float unaff_XMM10_Da;
  undefined4 unaff_XMM14_Da;
  undefined4 unaff_XMM14_Db;
  undefined4 unaff_XMM14_Dc;
  undefined4 unaff_XMM14_Dd;
  float unaff_XMM15_Da;
  int iVar77;
  undefined8 unaff_retaddr;
  float fStackX_8;
  ulonglong *puStackX_10;
  byte *pbStackX_18;
  char *apcStack_218 [3];
  undefined1 auStack_200 [5];
  char acStack_1fb [19];
  ulonglong *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  ulonglong uStack_1b0;
  undefined4 uStack_1a8;
  ulonglong uStack_1a0;
  undefined4 uStack_198;
  ulonglong uStack_190;
  undefined4 auStack_188 [2];
  undefined8 uStack_180;
  uint uStack_178;
  ulonglong *puStack_170;
  ulonglong uStack_168;
  undefined8 uStack_160;
  ulonglong uStack_158;
  undefined8 uStack_150;
  ulonglong uStack_148;
  undefined8 uStack_140;
  ulonglong uStack_138;
  undefined8 uStack_130;
  ulonglong uStack_128;
  ulonglong uStack_120;
  ulonglong uStack_118;
  ulonglong uStack_110;
  ulonglong uStack_108;
  byte *pbStack_100;
  undefined8 uStack_f8;
  ulonglong uStack_f0;
  undefined8 uStack_e8;
  uint *puStack_e0;
  ulonglong uStack_d8;
  ulonglong uStack_d0;
  ulonglong uStack_c8;
  byte *pbStack_c0;
  undefined8 uStack_b8;
  ulonglong uStack_b0;
  ulonglong *puStack_a8;
  ulonglong uStack_a0;
  uint uStack_98;
  undefined2 uStack_94;
  char cStack_92;
  byte bStack_91;
  ulonglong uStack_90;
  float fStack_88;
  float fStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  float fStack_78;
  float fStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_48;
  uint uVar33;
  
  fVar60 = (float)((ulonglong)in_XMM2_Qa >> 0x20);
  fVar74 = (float)in_XMM2_Qa;
  ppcVar39 = apcStack_218 + 2;
  ppcVar38 = apcStack_218 + 2;
  ppcVar37 = apcStack_218 + 2;
  ppcVar40 = apcStack_218 + 2;
  puVar41 = (undefined8 *)auStack_188;
  uStack_68 = (undefined8 *)CONCAT44(unaff_XMM8_Db,unaff_XMM8_Da);
  uStack_70 = CONCAT44(unaff_XMM7_Dd,unaff_XMM7_Dc);
  uStack_90 = 0xfffffffffffffffe;
  apcStack_218[1] = (char *)0x140aba455;
  fStack_88 = unaff_XMM6_Da;
  fStack_84 = unaff_XMM6_Db;
  uStack_80 = unaff_XMM6_Dc;
  uStack_7c = unaff_XMM6_Dd;
  fStack_78 = unaff_XMM7_Da;
  fStack_74 = unaff_XMM7_Db;
  cStack_92 = pdb_140e94b40();
  if (cStack_92 == '\0') {
    uStack_1d0 = 0;
    goto LAB_140aba604;
  }
  unaff_R12 = (ulonglong *)&UNK_14304c4db;
  puVar53 = (ulonglong *)0x3b;
  uVar34 = 0x3b;
  apcStack_218[1] = (char *)0x140aba47d;
  lVar12 = pdb_140ac7c70(&UNK_14304c4db);
  if (lVar12 == 1) {
    if (0x3b < uVar34) {
LAB_140abb143:
      puStack_1e8 = (ulonglong *)&UNK_14304c5a0;
      apcStack_218[1] = (char *)0x140abb163;
      pdb_142dc8070(&UNK_14304c4db,0x3b,0);
LAB_140abb163:
      puStack_1e8 = (ulonglong *)&UNK_14304c5b8;
      apcStack_218[1] = (char *)0x140abb186;
      pdb_142dc8070(&UNK_14304c4db,0x3b);
      pcVar8 = (code *)swi(3);
      puVar53 = (ulonglong *)(*pcVar8)();
      return puVar53;
    }
    unaff_R12 = (ulonglong *)&UNK_14304c4db;
    apcStack_218[1] = (char *)0x140aba4a2;
    uVar13 = pdb_140ac7c70(&UNK_14304c4db);
    if ((uVar13 & 1) != 0) {
      if (0x3b < uVar34 + 2) goto LAB_140abb163;
      puVar53 = (ulonglong *)(0x39 - uVar34);
      unaff_R12 = (ulonglong *)(&UNK_14304c4dd + uVar34);
    }
  }
  puVar14 = &UNK_14304b027;
  puVar54 = (ulonglong *)&UNK_14304aff4;
  do {
    pbVar46 = puVar14 + -1;
    uVar28 = (uint)(char)*pbVar46;
    puStack_a8 = puVar53;
    if ((int)uVar28 < 0) {
      bVar27 = puVar14[-2];
      if ((char)bVar27 < -0x40) {
        bVar25 = puVar14[-3];
        if ((char)bVar25 < -0x40) {
          pbVar1 = puVar14 + -4;
          puVar14 = puVar14 + -4;
          uVar28 = bVar25 & 0x3f | (*pbVar1 & 7) << 6;
        }
        else {
          puVar14 = puVar14 + -3;
          uVar28 = bVar25 & 0xf;
        }
        uVar28 = bVar27 & 0x3f | uVar28 << 6;
      }
      else {
        puVar14 = puVar14 + -2;
        uVar28 = bVar27 & 0x1f;
      }
      uVar28 = (uint)(*pbVar46 & 0x3f) | uVar28 << 6;
      if (uVar28 != 0x5c) goto LAB_140aba559;
LAB_140aba575:
      if (puVar14 + -0x14304aff3 < (undefined *)0x34) {
        puVar53 = (ulonglong *)(0x32 - (longlong)(puVar14 + -0x14304aff4));
        puVar54 = (ulonglong *)(puVar14 + 1);
        goto LAB_140aba598;
      }
      puStack_1e8 = (ulonglong *)&UNK_14304c580;
      apcStack_218[1] = (char *)0x140abb143;
      pdb_142dc8070(&UNK_14304aff4,0x33,puVar14 + -0x14304aff3,0x33);
      goto LAB_140abb143;
    }
    puVar14 = puVar14 + -1;
    if (uVar28 == 0x5c) goto LAB_140aba575;
LAB_140aba559:
    if (uVar28 == 0x2f) goto LAB_140aba575;
  } while (puVar14 != &UNK_14304aff4);
  puVar53 = (ulonglong *)0x33;
LAB_140aba598:
  apcStack_218[1] = (char *)0x140aba59d;
  plVar15 = (longlong *)pdb_140e97000();
  if ((char)plVar15[0xd] != '\x01') goto LAB_140abb07c;
LAB_140aba5a7:
  puVar17 = puStack_a8;
  if (*plVar15 == 0) {
    *plVar15 = -1;
    uStack_1d8 = 0;
    uStack_1e0 = 1;
    apcStack_218[1] = (char *)0x140aba5ec;
    puStack_1e8 = puVar53;
    puStack_a8 = (ulonglong *)plVar15;
    uStack_160 = pdb_140e94f10(plVar15 + 1,unaff_R12,puVar17,puVar54);
    *puStack_a8 = *puStack_a8 + 1;
    uStack_1c8 = uStack_160;
    uStack_1d0 = 1;
LAB_140aba604:
    uStack_168 = *param_4;
    fVar59 = *(float *)(uStack_168 + 0x58);
    uStack_98 = *(uint *)((longlong)param_2 + 0x1c);
    puStack_e0 = (uint *)param_2[2];
    *puStack_e0 = uStack_98;
    uStack_a0 = *param_2;
    *(float *)(uStack_a0 + 0xa8) = fVar59 + *(float *)(uStack_a0 + 0xa8);
    fVar59 = *(float *)(uStack_168 + 0x58);
    *puStack_e0 = uStack_98;
    fVar59 = fVar59 + *(float *)(uStack_a0 + 0xac);
    auVar61 = ZEXT416((uint)fVar59);
    *(float *)(uStack_a0 + 0xac) = fVar59;
    puVar54 = *(ulonglong **)param_3;
    lVar12 = *(longlong *)(param_3 + 2);
    uVar34 = *puVar54;
    puVar53 = (ulonglong *)0x0;
    puVar17 = (ulonglong *)(uVar34 - *(ulonglong *)(lVar12 + 0x18));
    if (uVar34 < *(ulonglong *)(lVar12 + 0x18)) {
      puVar17 = puVar53;
    }
    puVar45 = (ulonglong *)(uVar34 - *(ulonglong *)(lVar12 + 0x38));
    if (uVar34 < *(ulonglong *)(lVar12 + 0x38)) {
      puVar45 = puVar53;
    }
    puVar16 = (ulonglong *)((longlong)puVar17 * 0x28 + *(longlong *)(lVar12 + 8));
    puVar50 = (ulonglong *)((longlong)*(ulonglong **)(lVar12 + 0x10) - (longlong)puVar17);
    if (*(ulonglong **)(lVar12 + 0x10) < puVar17) {
      puVar16 = (ulonglong *)0x8;
      puVar50 = puVar53;
    }
    arg0 = (ulonglong *)((longlong)puVar45 * 0x28 + *(longlong *)(lVar12 + 0x28));
    puVar17 = *(ulonglong **)(lVar12 + 0x30);
    if (puVar17 < puVar45) {
      arg0 = (ulonglong *)0x8;
    }
    pbVar46 = (byte *)0x0;
    uStack_128 = 0;
    puVar52 = (ulonglong *)((longlong)puVar17 - (longlong)puVar45);
    if (puVar17 < puVar45) {
      puVar52 = puVar53;
    }
    *puVar54 = (*(longlong *)(lVar12 + 0x40) - (longlong)puVar52) - (longlong)puVar50;
    fVar75 = _DAT_142e3787c;
    fVar59 = _DAT_142e36f28;
    puStack_a8 = puVar16 + (longlong)puVar50 * 5;
    puStack_170 = arg0 + (longlong)puVar52 * 5;
    param_3 = (uint *)*param_1;
    bStack_91 = 2;
    param_1 = (undefined8 *)&UNK_14304c7a8;
    iVar76 = 0;
    uStack_120 = 0;
LAB_140aba736:
    fVar68 = in_XMM3._0_4_;
    uVar18 = in_XMM3._0_8_;
    if ((puVar16 == (ulonglong *)0x0) || (puVar16 == puStack_a8)) {
      if ((arg0 == (ulonglong *)0x0) || (arg0 == puStack_170)) goto LAB_140abad44;
      puVar16 = (ulonglong *)0x0;
      puVar17 = arg0 + 5;
      puVar53 = arg0;
    }
    else {
      puVar17 = arg0;
      puVar53 = puVar16;
      puVar16 = puVar16 + 5;
    }
    arg0 = puVar17;
    *puVar54 = *puVar54 + 1;
    uVar34 = (ulonglong)*(int *)(&UNK_14304c7a8 + (ulonglong)(byte)puVar53[1] * 4);
    bVar55 = 0xfffffffebcfb3857 < uVar34;
    bVar58 = SCARRY8(uVar34,0x14304c7a8);
    puVar29 = (uint *)(&UNK_14304c7a8 + uVar34);
    bVar57 = puVar29 == (uint *)0x0;
    bVar56 = (POPCOUNT((ulonglong)puVar29 & 0xff) & 1U) == 0;
    bVar25 = (byte)puVar29;
    uVar31 = (undefined7)((ulonglong)puVar29 >> 8);
    cVar48 = (char)puVar50;
    bVar27 = (byte)puVar16;
    cVar26 = (char)((ulonglong)puVar16 >> 8);
    uVar28 = (uint)puVar16;
    uVar24 = (undefined7)((ulonglong)puVar16 >> 8);
    cVar32 = (char)arg0;
    uVar33 = (uint)arg0;
    bVar42 = (byte)puVar53;
    iVar77 = (int)unaff_retaddr;
    param_2 = puVar16;
    puVar17 = arg0;
    param_4 = arg0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((byte)puVar53[1]) {
    case 0:
      auVar61 = ZEXT416((uint)*(float *)(uStack_a0 + 0xa8));
      if (fVar75 < *(float *)(uStack_a0 + 0xa8)) {
        uStack_d0 = CONCAT44(uStack_d0._4_4_,(uint)puVar53[4]);
        uStack_d8 = puVar53[3];
        pbVar46 = (byte *)0x15;
        puVar50 = &uStack_d8;
        apcStack_218[1] = (char *)0x140aba7ce;
        auVar61._0_8_ = pdb_140abb950(param_3,&UNK_14304b03c);
        auVar61._8_8_ = extraout_XMM0_Qb;
        *puStack_e0 = uStack_98;
        *(undefined4 *)(uStack_a0 + 0xa8) = 0;
      }
      goto LAB_140aba736;
    case 1:
      auVar61 = ZEXT416((uint)*(float *)(uStack_a0 + 0xac));
      if (fVar75 < *(float *)(uStack_a0 + 0xac)) {
        uStack_d0 = CONCAT44(uStack_d0._4_4_,(uint)puVar53[4]);
        uStack_d8 = puVar53[3];
        pbVar46 = (byte *)0x15;
        puVar50 = &uStack_d8;
        apcStack_218[1] = (char *)0x140aba9db;
        auVar61._0_8_ = pdb_140abb950(param_3,&UNK_14304b051);
        auVar61._8_8_ = extraout_XMM0_Qb_06;
        *puStack_e0 = uStack_98;
        *(undefined4 *)(uStack_a0 + 0xac) = 0;
      }
      goto LAB_140aba736;
    case 2:
      unaff_XMM6_Da = *(float *)((longlong)puVar53 + 0x14);
      unaff_XMM6_Db = 0.0;
      unaff_XMM6_Dc = 0;
      unaff_XMM6_Dd = 0;
      bStack_91 = *(byte *)((longlong)puVar53 + 9);
      if (*(longlong *)param_3 != 0) {
        unaff_XMM7_Da = *(float *)(puVar53 + 2);
        unaff_XMM7_Db = 0.0;
        in_XMM3 = ZEXT416(*(uint *)((longlong)puVar53 + 0xc));
        pbVar46 = (byte *)0xa;
        apcStack_218[1] = (char *)0x140aba8a2;
        auVar61._0_8_ = pdb_140a8aa00(*(longlong *)param_3 + 0x10,&UNK_14304b066);
        auVar61._8_8_ = extraout_XMM0_Qb_01;
        if (*(longlong *)param_3 != 0) {
          pbVar46 = (byte *)0xb;
          in_XMM3 = ZEXT416((uint)unaff_XMM7_Da);
          apcStack_218[1] = (char *)0x140aba8c4;
          auVar61._0_8_ = pdb_140a8aa00(*(longlong *)param_3 + 0x10,&UNK_14304b070);
          auVar61._8_8_ = extraout_XMM0_Qb_02;
        }
      }
      uStack_130 = CONCAT44(uStack_130._4_4_,(uint)puVar53[4]);
      uStack_138 = puVar53[3];
      goto LAB_140aba736;
    case 3:
      unaff_XMM7_Da = *(float *)((longlong)puVar53 + 0xc);
      unaff_XMM7_Db = 0.0;
      in_XMM3 = ZEXT416((uint)puVar53[2]);
      uStack_140 = CONCAT44(uStack_140._4_4_,(uint)puVar53[4]);
      uStack_148 = puVar53[3];
      uStack_128 = CONCAT71((int7)(puVar53[3] >> 8),1);
      if (*(longlong *)param_3 != 0) {
        pbVar46 = (byte *)0x10;
        apcStack_218[1] = (char *)0x140aba91e;
        auVar61._0_8_ = pdb_140a8aa00(*(longlong *)param_3 + 0x10,&UNK_14304b07b);
        auVar61._8_8_ = extraout_XMM0_Qb_03;
        if (*(longlong *)param_3 != 0) {
          pbVar46 = (byte *)0xd;
          in_XMM3 = ZEXT416((uint)unaff_XMM7_Da);
          apcStack_218[1] = (char *)0x140aba94a;
          auVar61._0_8_ = pdb_140a8aa00(*(longlong *)param_3 + 0x10,&UNK_14304b08b);
          auVar61._8_8_ = extraout_XMM0_Qb_04;
        }
      }
      goto LAB_140aba736;
    case 4:
      unaff_XMM7_Da = *(float *)((longlong)puVar53 + 0xc);
      unaff_XMM7_Db = 0.0;
      if (*(longlong *)param_3 == 0) {
        apcStack_218[1] = (char *)0x140abaac5;
        pdb_14007ee60();
        apcStack_218[1] = (char *)0x140abaad4;
        pbVar46 = pub_1406abab0(0x18,1);
        uVar18 = _UNK_14304b0a0;
        if (pbVar46 == (byte *)0x0) goto code_r0x000140abb0b1;
        *(undefined8 *)pbVar46 = _UNK_14304b098;
        *(undefined8 *)(pbVar46 + 8) = uVar18;
        pbVar46[0x10] = 0x69;
        pbVar46[0x11] = 0x6c;
        pbVar46[0x12] = 0x65;
        pbVar46[0x13] = 0x73;
        pbVar46[0x14] = 0x4c;
        pbVar46[0x15] = 0x61;
        pbVar46[0x16] = 0x6e;
        pbVar46[0x17] = 100;
        uStack_d8 = 0;
        uStack_c8 = 0x18;
        uStack_b8 = 0x18;
        uStack_b0 = CONCAT71(uStack_b0._1_7_,2);
        pbStack_c0 = pbVar46;
      }
      else {
        apcStack_218[1] = (char *)0x140aba822;
        pdb_140a8b180(&uStack_d8,*(longlong *)param_3 + 0x10,&UNK_14304b098,0x18);
        if ((int)uStack_d8 == 2) {
          uStack_118 = uStack_d0;
          puStack_1e8 = (ulonglong *)&UNK_14304b0b0;
                    /* WARNING: Subroutine does not return */
          apcStack_218[1] = (char *)0x140abb06a;
          pdb_142dc8170(&UNK_14304c468,0x2b,&uStack_118,&UNK_14304c448);
        }
      }
      uStack_f8 = uStack_b8;
      puVar50 = (ulonglong *)(uStack_b0 >> 0x38);
      uStack_f0 = uStack_b0;
      uStack_108 = uStack_c8;
      pbStack_100 = pbStack_c0;
      uStack_118 = uStack_d8;
      uStack_110 = uStack_d0;
      uStack_d0 = CONCAT44(uStack_d0._4_4_,(uint)puVar53[4]);
      uStack_d8 = puVar53[3];
      apcStack_218[1] = (char *)0x140ababc7;
      pdb_140a8e190(&uStack_118,&uStack_d8);
      pbVar46 = (byte *)0xe;
      in_XMM3 = ZEXT416((uint)unaff_XMM7_Da);
      apcStack_218[1] = (char *)0x140ababe0;
      pdb_140a8e730(&uStack_118,&UNK_14304b0c8);
      apcStack_218[1] = (char *)0x140ababe9;
      pdb_140a8a6f0(&uStack_118);
      apcStack_218[1] = (char *)0x140ababf2;
      auVar61._0_8_ = pdb_1409a5ed0(&uStack_118);
      auVar61._8_8_ = extraout_XMM0_Qb_09;
      goto code_r0x000140abad1d;
    case 5:
      uStack_d0 = CONCAT44(uStack_d0._4_4_,(uint)puVar53[4]);
      uStack_d8 = puVar53[3];
      pbVar46 = (byte *)0x1a;
      puVar50 = &uStack_d8;
      apcStack_218[1] = (char *)0x140abaa31;
      auVar61._0_8_ = pdb_140abb950(param_3,&UNK_14304b0d6);
      auVar61._8_8_ = extraout_XMM0_Qb_07;
      goto LAB_140aba736;
    case 6:
      bVar27 = *(byte *)((longlong)puVar53 + 9);
      unaff_R12 = (ulonglong *)(ulonglong)bVar27;
      uStack_178 = (uint)puVar53[4];
      uStack_180 = puVar53[3];
      if (*(longlong *)param_3 == 0) {
        apcStack_218[1] = (char *)0x140ababfd;
        pdb_14007ee60();
        apcStack_218[1] = (char *)0x140abac0c;
        pbVar46 = pub_1406abab0(0x18,1);
        uVar18 = _UNK_14304b0f8;
        if (pbVar46 == (byte *)0x0) {
          apcStack_218[1] = (char *)0x140abb0d2;
          pdb_142dc7e2a(1,0x18);
          goto LAB_140abb11e;
        }
        *(undefined8 *)pbVar46 = _UNK_14304b0f0;
        *(undefined8 *)(pbVar46 + 8) = uVar18;
        pbVar46[0x10] = 0x6e;
        pbVar46[0x11] = 0x73;
        pbVar46[0x12] = 0x41;
        pbVar46[0x13] = 0x70;
        pbVar46[0x14] = 0x70;
        pbVar46[0x15] = 0x65;
        pbVar46[0x16] = 0x61;
        pbVar46[0x17] = 0x72;
        uStack_d8 = 0;
        uStack_c8 = 0x18;
        uStack_b8 = 0x18;
        uStack_b0 = CONCAT71(uStack_b0._1_7_,2);
        pbStack_c0 = pbVar46;
      }
      else {
        apcStack_218[1] = (char *)0x140abaa73;
        pdb_140a8b180(&uStack_d8,*(longlong *)param_3 + 0x10,&UNK_14304b0f0,0x18);
        if ((int)uStack_d8 == 2) {
          uStack_118 = uStack_d0;
          puStack_1e8 = (ulonglong *)&UNK_14304b108;
                    /* WARNING: Subroutine does not return */
          apcStack_218[1] = (char *)0x140abb031;
          pdb_142dc8170(&UNK_14304c468,0x2b,&uStack_118,&UNK_14304c448);
        }
      }
      uStack_f8 = uStack_b8;
      puVar50 = (ulonglong *)(uStack_b0 >> 0x38);
      uStack_f0 = uStack_b0;
      uStack_108 = uStack_c8;
      pbStack_100 = pbStack_c0;
      uStack_118 = uStack_d8;
      uStack_110 = uStack_d0;
      in_XMM3 = ZEXT416((uint)fVar59);
      if (bVar27 == 0) {
        in_XMM3 = ZEXT816(0);
      }
      pbVar46 = (byte *)0xe;
      apcStack_218[1] = (char *)0x140abacfd;
      pdb_140a8e730(&uStack_118,&UNK_14304b120);
      apcStack_218[1] = (char *)0x140abad0a;
      pdb_140a8e190(&uStack_118,&uStack_180);
      apcStack_218[1] = (char *)0x140abad13;
      pdb_140a8a6f0(&uStack_118);
      apcStack_218[1] = (char *)0x140abad1c;
      auVar61._0_8_ = pdb_1409a5ed0(&uStack_118);
      auVar61._8_8_ = extraout_XMM0_Qb_10;
code_r0x000140abad1d:
      puVar53 = &uStack_118;
      if (uStack_108 != 0) {
        pbVar46 = (byte *)0x1;
        apcStack_218[1] = (char *)0x140abad3f;
        pub_1406abac0(pbStack_100,uStack_108,1);
        auVar61 = extraout_XMM0;
      }
      goto LAB_140aba736;
    case 7:
      uStack_d0 = CONCAT44(uStack_d0._4_4_,(uint)puVar53[4]);
      uStack_d8 = puVar53[3];
      pbVar46 = (byte *)0x1e;
      puVar50 = &uStack_d8;
      apcStack_218[1] = (char *)0x140aba986;
      auVar61._0_8_ = pdb_140abb950(param_3,&UNK_14304b12e);
      auVar61._8_8_ = extraout_XMM0_Qb_05;
    case 8:
      goto LAB_140aba736;
    case 9:
      uStack_150 = CONCAT44(uStack_150._4_4_,(uint)puVar53[4]);
      uStack_158 = puVar53[3];
      uStack_120 = CONCAT71((int7)(puVar53[3] >> 8),1);
      goto LAB_140aba736;
    case 10:
      uStack_d0 = CONCAT44(uStack_d0._4_4_,(uint)puVar53[4]);
      uStack_d8 = puVar53[3];
      pbVar46 = (byte *)0x16;
      puVar50 = &uStack_d8;
      apcStack_218[1] = (char *)0x140aba865;
      auVar61._0_8_ = pdb_140abb950(param_3,&UNK_14304b14c);
      auVar61._8_8_ = extraout_XMM0_Qb_00;
      goto LAB_140aba736;
    case 0xb:
      uStack_d0 = CONCAT44(uStack_d0._4_4_,(uint)puVar53[4]);
      uStack_d8 = puVar53[3];
      pbVar46 = (byte *)0x19;
      puVar50 = &uStack_d8;
      apcStack_218[1] = (char *)0x140abaaba;
      auVar61._0_8_ = pdb_140abb950(param_3,&UNK_14304b162);
      auVar61._8_8_ = extraout_XMM0_Qb_08;
      goto LAB_140aba736;
    case 0xc:
      goto code_r0x000140abc4d2;
    case 0xd:
      ppcVar38 = (char **)0x4c000000;
      puVar41 = (undefined8 *)
                (ulonglong)(*(int *)(&UNK_14304c7a8 + (ulonglong)(byte)puVar53[1] * 4) + 0x4304ca48)
      ;
      bVar57 = ((ulonglong)puVar50 & 1) != 0;
      if (bVar57) {
        puVar54 = (ulonglong *)(&UNK_14304ca80 + uVar34);
      }
      uVar18 = 0;
      if (bVar57) {
        uVar18 = puVar41[8];
      }
      puVar41[0x27] = uVar18;
      break;
    case 0xe:
      pcVar22 = (char *)((longlong)&uStack_1e0 + (longlong)puVar29 * 4 + 1);
      *pcVar22 = *pcVar22 + bVar25;
      *(byte *)puVar16 = (byte)*puVar16 + bVar27;
      ppcVar38 = apcStack_218 + 2;
      if (((ulonglong)puVar50 & 1) != 0) {
        ppcVar38 = apcStack_218 + 2;
        puVar54 = (ulonglong *)(&UNK_14304c888 + uVar34);
      }
      break;
    case 0xf:
      ppcVar38 = apcStack_218 + 2;
      puVar54 = *(ulonglong **)(longlong)((int)puVar41 + 0x38);
      break;
    case 0x10:
      *(byte *)((longlong)arg0 + 99) = *(byte *)((longlong)arg0 + 99) + bVar25;
      puVar53 = arg0;
      goto code_r0x000140abc4fe;
    case 0x11:
      *(byte *)puVar16 = (byte)*puVar16 + bVar27;
      ppcVar38 = apcStack_218 + 2;
      break;
    case 0x12:
    case 0x13:
    case 0x14:
LAB_140abd477:
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    case 0x15:
      *(uint *)puVar16 = (uint)*puVar16 + uVar28;
      *(uint *)puVar16 = (uint)*puVar16 + uVar28;
      *(byte *)((longlong)puVar16 + -0x73) = *(byte *)((longlong)puVar16 + -0x73) + bVar25;
      *(uint *)puVar16 = (uint)*puVar16 ^ 0x41000002;
      ppcVar38 = apcStack_218 + 2;
      if (((ulonglong)puVar29 & 1) != 0) {
        ppcVar38 = apcStack_218 + 2;
        puVar54 = puVar16;
      }
      break;
    default:
      *(byte *)puVar16 = (byte)*puVar16 + bVar27;
      goto code_r0x000140abc600;
    case 0x1b:
      if (!bVar58) {
        *(byte *)puVar16 = (byte)*puVar16 + bVar27;
        puVar29 = param_3;
        goto code_r0x000140abc60a;
      }
      uVar13 = *puVar16;
      bVar42 = (byte)*puVar16 - bVar25;
      *(byte *)puVar16 = bVar42 - bVar55;
      puVar35 = (uint *)((longlong)param_3 + (longlong)puVar29 * 4 + 0x41);
      uVar10 = (uint)((byte)uVar13 < bVar25 || bVar42 < bVar55);
      uVar44 = *puVar35;
      uVar9 = *puVar35;
      *puVar35 = (uVar9 - uVar28) - uVar10;
      (&UNK_14304c72d)[(longlong)puVar29 * 4 + uVar34] =
           (&UNK_14304c72d)[(longlong)puVar29 * 4 + uVar34] + bVar27 +
           (uVar44 < uVar28 || uVar9 - uVar28 < uVar10);
      pcVar19 = (char *)(ulonglong)(uint)(int)(short)puVar16;
      *pcVar19 = *pcVar19 + bVar27;
      pcVar22 = (char *)((longlong)param_3 + (longlong)puVar29 * 4 + 0x41);
      *pcVar22 = *pcVar22 + bVar25;
      (&UNK_14304c72d)[(longlong)puVar29 * 4 + uVar34] =
           (&UNK_14304c72d)[(longlong)puVar29 * 4 + uVar34] | bVar25;
      *pcVar19 = *pcVar19 + bVar27;
      pcVar22 = pcVar19 + -0xe + (longlong)puVar16;
      *pcVar22 = *pcVar22 + bVar27;
      bVar57 = *pcVar22 == '\0';
      ppcVar38 = apcStack_218 + 2;
      goto code_r0x000140abc632;
    case 0x1f:
      uStack_150 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      puStack_a8 = (ulonglong *)0x0;
      uStack_b0 = 0;
      uStack_118 = 0;
      goto code_r0x000140abfc96;
    case 0x20:
      goto code_r0x000140ac0884;
    case 0x21:
      *(short *)((longlong)puVar16 + -0x73) = (short)in_ST0;
      goto code_r0x000140ac0cb7;
    case 0x22:
      if (uVar28 != 0) {
        param_3 = puVar29;
      }
      if (*unaff_R15 == 0) {
        uStack_68 = (undefined8 *)&UNK_14304c7a8;
        apcStack_218[1] = (char *)0x140ac1847;
        pdb_14007ee60();
        apcStack_218[1] = (char *)0x140ac1854;
        pbStackX_18 = pub_1406abab0((ulonglong)arg0,1);
        if (pbStackX_18 == (byte *)0x0) {
          apcStack_218[1] = (char *)0x140ac2c4f;
          pdb_142dc7e2a(1,arg0);
          goto LAB_140ac2ca5;
        }
        apcStack_218[1] = (char *)0x140ac186e;
        pub_142e32760(pbStackX_18,param_3,arg0);
        unaff_retaddr = 0;
        param_1 = uStack_68;
        puStackX_10 = arg0;
      }
      else {
        apcStack_218[1] = (char *)0x140ac0d84;
        pdb_140a8b180(&stack0x00000000,*unaff_R15 + 0x10,param_3,arg0);
        if (iVar77 == 2) {
          puStack_1e8 = (ulonglong *)&UNK_14304baa0;
                    /* WARNING: Subroutine does not return */
          apcStack_218[1] = (char *)0x140ac289c;
          pdb_142dc8170(&UNK_14304c468,0x2b,&uStack_48,&UNK_14304c448);
        }
      }
      apcStack_218[1] = (char *)0x140ac1945;
      uStack_48 = unaff_retaddr;
      pdb_140a8e190(&uStack_48,&stack0x00000000);
      apcStack_218[1] = (char *)0x140ac1967;
      pdb_140a8e730(&uStack_48,&UNK_14304ba48,6);
      apcStack_218[1] = (char *)0x140ac19a8;
      pdb_140a8e730(&uStack_48,&UNK_14304ba4e,10,(float)puVar53);
      uVar34 = (longlong)param_1 - 1;
      if ((longlong)uVar34 < 0) {
        fVar74 = (float)uVar34;
      }
      else {
        fVar74 = (float)(int)uVar34;
      }
      apcStack_218[1] = (char *)0x140ac19ea;
      pdb_140a8e730(&uStack_48,&UNK_14304ba58,10,fVar74);
      apcStack_218[1] = (char *)0x140ac19f7;
      pdb_140a8a6f0(&uStack_48);
      apcStack_218[1] = (char *)0x140ac1a04;
      pdb_1409a5ed0(&uStack_48);
      goto code_r0x000140ac21db;
    case 0x23:
      *(byte *)puVar16 = (byte)*puVar16 + bVar27;
      lVar12 = *(longlong *)((longlong)(puVar16 + 1) + (longlong)param_3);
      apcStack_218[1] = (char *)0x140ac0c9b;
      pdb_140de8220();
      param_3 = (uint *)(lVar12 + (longlong)arg0 * 0x30);
code_r0x000140ac0cb7:
      apcStack_218[1] = (char *)0x140ac0ccc;
      pdb_140a8e730(param_3,&UNK_14304b027,0xd);
      uStack_e8 = CONCAT71((int7)((ulonglong)uStack_e8 >> 8),(byte)uStack_e8 | bVar42);
      uStack_f0 = CONCAT71((int7)(uStack_f0 >> 8),(byte)uStack_f0 | bVar42 ^ 1);
      ppcVar40 = apcStack_218 + 2;
      goto code_r0x000140abfc96;
    case 0x24:
      if (*(longlong *)((ulonglong)unaff_R15 & 0xffffffff) == 0) {
        apcStack_218[1] = (char *)0x140ac1a0f;
        pdb_14007ee60();
        apcStack_218[1] = (char *)0x140ac1a1e;
        pbStackX_18 = pub_1406abab0(0x18,1);
        uVar18 = _UNK_14304bac0;
        if (pbStackX_18 == (byte *)0x0) {
          apcStack_218[1] = (char *)0x140ac2c2d;
          pdb_142dc7e2a(1,0x18);
          goto LAB_140ac2ca5;
        }
        *(undefined8 *)pbStackX_18 = _UNK_14304bab8;
        *(undefined8 *)(pbStackX_18 + 8) = uVar18;
        pbStackX_18[0x10] = 0x77;
        pbStackX_18[0x11] = 0x43;
        pbStackX_18[0x12] = 0x6f;
        pbStackX_18[0x13] = 0x6d;
        pbStackX_18[0x14] = 0x62;
        pbStackX_18[0x15] = 0x69;
        pbStackX_18[0x16] = 0x6e;
        pbStackX_18[0x17] = 0x65;
        unaff_retaddr = 0;
        puStackX_10 = (ulonglong *)0x18;
      }
      else {
        apcStack_218[1] = (char *)0x140ac0e05;
        pdb_140a8b180(&stack0x00000000,*(longlong *)((ulonglong)unaff_R15 & 0xffffffff) + 0x10,
                      &UNK_14304bab8,0x18);
        if (iVar77 == 2) {
          puStack_1e8 = (ulonglong *)&UNK_14304bad0;
                    /* WARNING: Subroutine does not return */
          apcStack_218[1] = (char *)0x140ac281e;
          pdb_142dc8170(&UNK_14304c468,0x2b,&uStack_48,&UNK_14304c448);
        }
      }
      apcStack_218[1] = (char *)0x140ac1b17;
      uStack_48 = unaff_retaddr;
      pdb_140a8e190(&uStack_48,&stack0x00000000);
      uVar34 = (longlong)param_3 - 1;
      auVar73._4_12_ = in_XMM3._4_12_;
      if ((longlong)uVar34 < 0) {
        fVar74 = (float)uVar34;
      }
      else {
        fVar74 = (float)(int)uVar34;
      }
      auVar73._0_4_ = fVar74;
      apcStack_218[1] = (char *)0x140ac1b51;
      pdb_140a8e730(&uStack_48,&UNK_14304ba58,10,auVar73._0_8_);
      if (2 < (uint)puVar53) {
                    /* WARNING: Subroutine does not return */
        apcStack_218[1] = (char *)0x140ac297e;
        pdb_142dc83d0(&UNK_14304bae8,0x8d,&UNK_14304bb30);
      }
      apcStack_218[1] = (char *)0x140ac1b80;
      pdb_140a8e730(&uStack_48,&UNK_14304ba4e,10);
      apcStack_218[1] = (char *)0x140ac1b8d;
      pdb_140a8a6f0(&uStack_48);
      apcStack_218[1] = (char *)0x140ac1b9a;
      pdb_1409a5ed0(&uStack_48);
      goto code_r0x000140ac21db;
    case 0x25:
      *(ulonglong **)param_3 = puVar50;
      ppcVar40 = apcStack_218 + 2;
      if ((byte)((byte)pbVar46 & (byte)puVar52) == 0) {
        *unaff_R14 = arg0;
        *unaff_RBP = param_7._4_4_;
        if (bVar25 == bVar42) {
          puVar53 = param_6 + 0x1c;
          if (bVar27 != 0) {
            puVar53 = param_6 + 0x23;
          }
          puStack_a8 = (ulonglong *)
                       CONCAT71((int7)((ulonglong)puStack_a8 >> 8),(byte)puStack_a8 | bVar27);
          uStack_b0 = CONCAT71((int7)(uStack_b0 >> 8),(byte)uStack_b0 | bVar27 ^ 1);
        }
        else {
          puVar53 = (ulonglong *)CONCAT44(fStack_84,fStack_88);
          uStack_118 = CONCAT71(uVar24,1);
        }
        goto code_r0x000140ac1e98;
      }
      goto code_r0x000140abfc96;
    case 0x26:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x27:
      apcStack_218[1] = (char *)0x140ac0b1a;
      pdb_140a8e730((ulonglong)param_3 & 0xffffffff);
      uVar34 = *(ulonglong *)((longlong)(param_6 + 5) + (longlong)puVar53);
      if (*(ulonglong *)((longlong)(param_6 + 2) + (longlong)puVar53) <= uVar34) {
                    /* WARNING: Subroutine does not return */
        apcStack_218[1] = (char *)0x140ac2ba9;
        pdb_142dc81f2(uVar34,*(ulonglong *)((longlong)(param_6 + 2) + (longlong)puVar53),
                      &UNK_143043a80);
      }
      apcStack_218[1] = (char *)0x140ac0b63;
      pdb_140a8e730(uVar34 * 0x30 + *(longlong *)((longlong)(param_6 + 1) + (longlong)puVar53),
                    &UNK_14304ba48,6);
      uStack_d8 = uStack_d8 | 0xa8;
      puStack_e0 = (uint *)((ulonglong)puStack_e0 | 0xa9);
      ppcVar40 = apcStack_218 + 2;
      goto code_r0x000140abfc96;
    case 0x28:
      bVar57 = CARRY1(uStack_160._3_1_,bVar25);
      cVar26 = uStack_160._3_1_ + bVar25;
      uStack_160._0_4_ = CONCAT13(cVar26,(undefined3)uStack_160);
      uStack_180 = CONCAT17((uStack_180._7_1_ - cVar48) - bVar57,(undefined7)uStack_180);
      ppcVar37 = apcStack_218 + 1;
      apcStack_218[1] = (char *)puVar41;
      cVar26 = '\x15';
      do {
        puVar41 = puVar41 + -1;
        ppcVar37 = ppcVar37 + -1;
        *ppcVar37 = (char *)*puVar41;
        cVar26 = cVar26 + -1;
      } while ('\0' < cVar26);
      (&UNK_14304c7d1)[uVar34] = (&UNK_14304c7d1)[uVar34] ^ bVar25;
      pbVar46 = &UNK_14304c7b7 + uVar34;
      *pbVar46 = *pbVar46 << 1 | (char)*pbVar46 < '\0';
      return (ulonglong *)((ulonglong)puVar53 & 0xffffffff);
    case 0x29:
      apcStack_218[1] = (char *)0x140ac0d2c;
      pdb_140abb950(unaff_R15);
      ppcVar40 = apcStack_218 + 2;
      goto code_r0x000140abfc96;
    case 0x2a:
      uStack_118 = CONCAT44(uStack_118._4_4_,uVar28);
code_r0x000140ac1e98:
      uVar34 = puVar53[5];
      if (puVar53[2] <= uVar34) {
                    /* WARNING: Subroutine does not return */
        apcStack_218[1] = (char *)0x140ac2b25;
        pdb_142dc81f2(uVar34,puVar53[2],&UNK_143043a80);
      }
      apcStack_218[1] = (char *)0x140ac1ee6;
      pdb_140a8e190(uVar34 * 0x30 + puVar53[1],&stack0x00000000);
      puStack_1e8 = (ulonglong *)CONCAT44(puStack_1e8._4_4_,0x43020000);
      apcStack_218[1] = (char *)0x140ac1f07;
      pdb_140a7d8d0(&uStack_110);
      uVar34 = puVar53[5];
      if (puVar53[2] <= uVar34) {
                    /* WARNING: Subroutine does not return */
        apcStack_218[1] = (char *)0x140ac2b70;
        pdb_142dc81f2(uVar34,puVar53[2],&UNK_143043a80);
      }
      apcStack_218[1] = (char *)0x140ac1f4a;
      pdb_140a8e730(uVar34 * 0x30 + puVar53[1],&UNK_14304bc40,8);
      uVar34 = puVar53[5];
      if (puVar53[2] <= uVar34) {
                    /* WARNING: Subroutine does not return */
        apcStack_218[1] = (char *)0x140ac2ad7;
        pdb_142dc81f2(uVar34,puVar53[2],&UNK_143043a80);
      }
      uVar13 = puVar53[1];
      apcStack_218[1] = (char *)0x140ac1f76;
      pdb_140de8220();
      apcStack_218[1] = (char *)0x140ac1fa7;
      pdb_140a8e730(uVar13 + uVar34 * 0x30,&UNK_14304b027,0xd);
      ppcVar40 = apcStack_218 + 2;
      goto code_r0x000140abfc96;
    case 0x2b:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x2c:
      if (puVar29 != (uint *)0x0) {
        apcStack_218[1] = "\x01";
        piVar21 = (int *)(*(code *)puVar16[-0x8ef4e97])();
        *piVar21 = *piVar21 + (int)piVar21;
        bVar27 = (byte)puVar29;
        *(char *)((longlong)piVar21 + -0x75) = *(char *)((longlong)piVar21 + -0x75) + bVar27;
        *(char *)((longlong)piVar21 * 2) = *(char *)((longlong)piVar21 * 2) + (char)piVar21;
        param_3 = param_3 + (longlong)(puVar29 + -5);
        uVar28 = *param_3;
        *(byte *)param_3 = (byte)*param_3 + bVar27;
        *(char *)((longlong)piVar21 * 2) =
             (*(char *)((longlong)piVar21 * 2) - (char)piVar21) - CARRY1((byte)uVar28,bVar27);
        *(char *)((longlong)puVar29 + 0x39) = *(char *)((longlong)puVar29 + 0x39) + bVar27;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      apcStack_218[1] = (char *)0x140ac042e;
      pdb_140a8e730();
      uVar34 = param_6[0x83];
      if (param_6[0x80] <= uVar34) {
                    /* WARNING: Subroutine does not return */
        apcStack_218[1] = (char *)0x140ac2ab0;
        pdb_142dc81f2(uVar34,param_6[0x80],&UNK_143043a80);
      }
      uVar13 = param_6[0x7f];
      apcStack_218[1] = (char *)0x140ac046a;
      pdb_140de8220();
      uStack_140 = CONCAT71((int7)(uVar34 * 0x30 >> 8),1);
      apcStack_218[1] = (char *)0x140ac04a1;
      pdb_140a8e730(uVar13 + uVar34 * 0x30,&UNK_14304b027,0xd);
      ppcVar40 = apcStack_218 + 2;
      goto code_r0x000140abfc96;
    case 0x2d:
      fVar59 = fVar59 - fStackX_8;
      fVar74 = unaff_XMM10_Da - auVar61._0_4_;
      if (uStack_70 == CONCAT44(uStack_7c,uStack_80)) {
        apcStack_218[1] = (char *)0x140ac1137;
        pdb_142d7ef30(&uStack_80);
      }
      lVar12 = CONCAT44(fStack_74,fStack_78);
      lVar47 = uStack_70 * 0x10;
      *(float *)(lVar12 + lVar47) = SQRT(fVar59 * fVar59 + fVar75 * fVar75 + fVar74 * fVar74);
      pfVar2 = (float *)(lVar12 + 4 + lVar47);
      *pfVar2 = unaff_XMM7_Da;
      pfVar2[1] = unaff_XMM7_Db;
      *(float *)(lVar12 + 0xc + lVar47) = unaff_XMM6_Da;
      uStack_70 = uStack_70 + 1;
      ppcVar40 = apcStack_218 + 2;
      goto code_r0x000140abfc96;
    case 0x2e:
      apcStack_218[1] = "\x01";
      piVar21 = (int *)(*(code *)puVar16[-0x8ef4e97])();
      *piVar21 = *piVar21 + (int)piVar21;
      pcVar22 = (char *)((longlong)piVar21 + -0x75);
      *pcVar22 = *pcVar22 + (char)puVar29;
      if (-1 < *pcVar22) {
        *(char *)piVar21 = (char)*piVar21 + (char)piVar21;
      }
      puVar17 = *(ulonglong **)(piVar21 + 0xa4);
      if (arg0 <= puVar17) {
                    /* WARNING: Subroutine does not return */
        apcStack_218[1] = (char *)0x140ac2b85;
        pdb_142dc81f2(puVar17);
      }
      param_3 = *(uint **)(piVar21 + 0x9c);
code_r0x000140ac0884:
      apcStack_218[1] = (char *)0x140ac0889;
      pdb_140de8220();
      uStack_158 = CONCAT71((int7)((ulonglong)((longlong)puVar17 * 0x30) >> 8),1);
      apcStack_218[1] = (char *)0x140ac08c0;
      pdb_140a8e730(param_3 + (longlong)puVar17 * 0xc,&UNK_14304b027,0xd);
      ppcVar40 = apcStack_218 + 2;
      goto code_r0x000140abfc96;
    case 0x2f:
      *(char *)CONCAT71(uVar31,bVar25 + acStack_1fb[(longlong)puVar29 * 4]) = (char)apcStack_218[2];
      *apcStack_218[2] = *apcStack_218[2] + (char)apcStack_218[2];
      apcStack_218[2] = (char *)0x140ac1074;
      pdb_140abb950(unaff_R15,arg0,0x1f);
      ppcVar40 = (char **)auStack_200;
      goto code_r0x000140abfc96;
    case 0x30:
      goto code_r0x000140ac0f8a;
    case 0x31:
      uVar28 = uVar28 + (uint)*puVar16 + (uint)bVar55;
      *(char *)(ulonglong)uVar28 = *(char *)(ulonglong)uVar28 + (char)uVar28;
      apcStack_218[1] = (char *)0x140ac01e1;
      pdb_140abb950(unaff_R15,&UNK_14304bdd9,0x23,&stack0x00000000);
      ppcVar40 = apcStack_218 + 2;
      goto code_r0x000140abfc96;
    case 0x32:
      apcStack_218[1] = (char *)0x140ac072f;
      pdb_140a8e730(param_3,&UNK_14304b027,0xd);
      uVar34 = param_6[0x59];
      if (param_6[0x56] <= uVar34) {
                    /* WARNING: Subroutine does not return */
        apcStack_218[1] = (char *)0x140ac2a86;
        pdb_142dc81f2(uVar34,param_6[0x56],&UNK_143043a80);
      }
      uStack_150 = CONCAT71((int7)((ulonglong)param_6 >> 8),1);
      apcStack_218[1] = (char *)0x140ac0780;
      pdb_140a8e730(uVar34 * 0x30 + param_6[0x55],&UNK_14304ba48,6);
      ppcVar40 = apcStack_218 + 2;
      goto code_r0x000140abfc96;
    case 0x33:
      *(byte *)((longlong)puVar16 + -0x75) = *(byte *)((longlong)puVar16 + -0x75) + bVar25;
      uVar13 = (ulonglong)(uVar28 + 0x89000001);
      *(int *)(uVar13 - 0x75) = *(int *)(uVar13 - 0x75) + (int)puVar29;
      uVar36 = (ulonglong)*(uint *)(uVar13 + 0x10 + (longlong)puVar53);
      uVar34 = *(ulonglong *)(uVar13 + 0x28 + (longlong)arg0);
      if (uVar36 <= uVar34) {
                    /* WARNING: Subroutine does not return */
        apcStack_218[1] = (char *)0x140ac2afe;
        pdb_142dc81f2(uVar34,uVar36,&UNK_143043a80);
      }
      puVar29 = (uint *)(uVar34 * 0x30 + *(longlong *)(uVar13 + 8 + (longlong)arg0));
code_r0x000140ac0f8a:
      apcStack_218[1] = (char *)0x140ac0fa1;
      pdb_140a8e190(puVar29,&stack0x00000000);
      puVar29 = *(uint **)((longlong)(param_6 + 5) + (longlong)arg0);
      if (*(uint **)((longlong)(param_6 + 2) + (longlong)arg0) <= puVar29) {
                    /* WARNING: Subroutine does not return */
        apcStack_218[1] = (char *)0x140ac2bbb;
        pdb_142dc81f2(puVar29,*(uint **)((longlong)(param_6 + 2) + (longlong)arg0),&UNK_143043a80);
      }
      puVar16 = param_6;
      if ((char)param_3 == '\0') {
code_r0x000140ac0fc4:
      }
      apcStack_218[1] = (char *)0x140ac1fd4;
      pdb_140a8e730((longlong)puVar29 * 0x30 +
                    *(longlong *)((longlong)(puVar16 + 1) + (longlong)arg0),&UNK_14304ba48,6);
      uVar34 = *(ulonglong *)((longlong)(param_6 + 5) + (longlong)arg0);
      if (*(ulonglong *)((longlong)(param_6 + 2) + (longlong)arg0) <= uVar34) {
                    /* WARNING: Subroutine does not return */
        apcStack_218[1] = (char *)0x140ac2a26;
        pdb_142dc81f2(uVar34,*(ulonglong *)((longlong)(param_6 + 2) + (longlong)arg0),&UNK_143043a80
                     );
      }
      lVar12 = *(longlong *)((longlong)(param_6 + 1) + (longlong)arg0);
      apcStack_218[1] = (char *)0x140ac200a;
      pdb_140de8220();
      uStack_c8 = CONCAT71((int7)(uStack_c8 >> 8),(byte)uStack_c8 | bVar42);
      uStack_d0 = CONCAT71((int7)(uStack_d0 >> 8),(byte)uStack_d0 | bVar42 ^ 1);
      apcStack_218[1] = (char *)0x140ac2061;
      pdb_140a8e730(lVar12 + uVar34 * 0x30,&UNK_14304b027,0xd);
      ppcVar40 = apcStack_218 + 2;
      goto code_r0x000140abfc96;
    case 0x34:
      goto code_r0x000140ac0fc4;
    case 0x35:
      *(byte *)((longlong)puVar16 + -0x73) = *(byte *)((longlong)puVar16 + -0x73) + bVar25;
      puVar35 = (uint *)&UNK_14304bc7a;
      if ((uVar28 | 0x258ba5d) != 0) {
        puVar35 = puVar29;
      }
      apcStack_218[1] = (char *)0x140ac0268;
      pdb_140abb950(unaff_R15,puVar35);
      ppcVar40 = apcStack_218 + 2;
      goto code_r0x000140abfc96;
    case 0x36:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x37:
      if (*(longlong *)((ulonglong)unaff_R15 & 0xffffffff) == 0) {
        apcStack_218[1] = (char *)0x140ac1511;
        pdb_14007ee60();
        apcStack_218[1] = (char *)0x140ac1520;
        pbStackX_18 = pub_1406abab0(0x16,1);
        uVar18 = _UNK_14304bd3e;
        if (pbStackX_18 == (byte *)0x0) {
          apcStack_218[1] = (char *)0x140ac2c3f;
          pdb_142dc7e2a(1,0x16);
          goto LAB_140ac2ca5;
        }
        *(undefined8 *)pbStackX_18 = _UNK_14304bd36;
        *(undefined8 *)(pbStackX_18 + 8) = uVar18;
        pbStackX_18[0xe] = 0x67;
        pbStackX_18[0xf] = 0x73;
        pbStackX_18[0x10] = 0x2f;
        pbStackX_18[0x11] = 0x50;
        pbStackX_18[0x12] = 0x6c;
        pbStackX_18[0x13] = 0x61;
        pbStackX_18[0x14] = 99;
        pbStackX_18[0x15] = 0x65;
        unaff_retaddr = 0;
        puStackX_10 = (ulonglong *)0x16;
      }
      else {
        apcStack_218[1] = (char *)0x140ac019a;
        pdb_140a8b180(&stack0x00000000,*(longlong *)((ulonglong)unaff_R15 & 0xffffffff) + 0x10,
                      &UNK_14304bd36,0x16);
        if (iVar77 == 2) {
          puStack_1e8 = (ulonglong *)&UNK_14304bd50;
                    /* WARNING: Subroutine does not return */
          apcStack_218[1] = (char *)0x140ac28db;
          pdb_142dc8170(&UNK_14304c468,0x2b,&uStack_48,&UNK_14304c448);
        }
      }
      apcStack_218[1] = (char *)0x140ac1619;
      uStack_48 = unaff_retaddr;
      pdb_140a8e190(&uStack_48,&stack0x00000000);
      apcStack_218[1] = (char *)0x140ac1644;
      pdb_140a8e730(&uStack_48,&UNK_14304ba48,6);
      apcStack_218[1] = (char *)0x140ac1651;
      pdb_140a8a6f0(&uStack_48);
      apcStack_218[1] = (char *)0x140ac165e;
      pdb_1409a5ed0(&uStack_48);
code_r0x000140ac21db:
      ppcVar40 = apcStack_218 + 2;
      if (puStackX_10 != (ulonglong *)0x0) {
        apcStack_218[1] = (char *)0x140ac21fd;
        pub_1406abac0(pbStackX_18,(ulonglong)puStackX_10,1);
        ppcVar40 = apcStack_218 + 2;
      }
      goto code_r0x000140abfc96;
    case 0x38:
      uStack_160 = CONCAT71(uVar24,1);
      apcStack_218[1] = (char *)0x140ac12c0;
      pdb_140a8e730(param_3,&UNK_14304b027,0xd);
      ppcVar40 = apcStack_218 + 2;
      goto code_r0x000140abfc96;
    case 0x39:
      *(uint *)puVar16 = (uint)*puVar16 + uVar28;
      pbVar1 = (byte *)((longlong)puVar16 + -0x75);
      bVar27 = *pbVar1;
      *pbVar1 = *pbVar1 + bVar25;
      pbVar46[-0x77] = (pbVar46[-0x77] - cVar48) - CARRY1(bVar27,bVar25);
      apcStack_218[1] = (char *)0x140ac0dcb;
      pdb_140abb950(unaff_R15,0x4304bbb8,0x16,&stack0x00000000);
      ppcVar40 = apcStack_218 + 2;
      goto code_r0x000140abfc96;
    case 0x3a:
      goto code_r0x000140ac00ea;
    case 0x3b:
      return puVar16;
    case 0x3c:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x3d:
      if (bVar58) goto code_r0x000140ac1464;
      pbVar46 = (byte *)((longlong)puVar53 + 0xf);
      bVar27 = *pbVar46;
      *pbVar46 = *pbVar46 + cVar26;
      if (!SCARRY1(bVar27,cVar26)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(byte *)((longlong)puVar16 + -0x73) = *(byte *)((longlong)puVar16 + -0x73) + bVar25;
      pcVar22 = (char *)((ulonglong)puVar41 & 0xffffffff);
      puVar41 = (undefined8 *)((ulonglong)puVar16 & 0xffffffff);
      *(char *)puVar29 = (char)pcVar22;
      *pcVar22 = *pcVar22 + (char)pcVar22;
      apcStack_218[1] = (char *)0x140abfde2;
      uVar13 = pdb_1417c5550(puVar41[-3],(ulonglong)arg0 & 0xffffffffffffff00);
      lVar12 = *(longlong *)(puVar41[0x12] + 0x80);
      uVar34 = *(ulonglong *)(puVar41[0x12] + 0x88);
      bVar27 = (byte)(uVar13 >> 0x39);
      auVar61 = ZEXT216(CONCAT11(bVar27,bVar27));
      auVar61 = pshuflw(auVar61,auVar61,0);
      lVar47 = 0;
      goto code_r0x000140abfe15;
    case 0x3e:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x3f:
      pbVar46[-0x77] = (pbVar46[-0x77] - cVar48) - bVar55;
      apcStack_218[1] = (char *)0x140ac021b;
      pdb_140abb950(unaff_R15,0x4304bd03,0x18,&stack0x00000000);
      ppcVar40 = apcStack_218 + 2;
      goto code_r0x000140abfc96;
    case 0x40:
      pcVar8 = (code *)swi(0x19);
      pcVar22 = (char *)(*pcVar8)(CONCAT71(uVar31,bVar25 + (char)((ulonglong)puVar29 >> 8)));
      *pcVar22 = *pcVar22 + (char)pcVar22;
      apcStack_218[2] = (char *)0x140ac0e4c;
      pdb_140abb950(unaff_R15,&UNK_14304bd1b,0x1b,&stack0x00000000);
      ppcVar40 = (char **)auStack_200;
      goto code_r0x000140abfc96;
    case 0x41:
    case 0x44:
      bVar27 = (byte)puVar16[2];
      apcStack_218[1] = (char *)0x140abfd1b;
      fVar60 = (float)pdb_140de8220();
      fVar74 = 0.0;
      if (0.0 <= fVar60) {
        fVar74 = fVar60;
      }
      fVar60 = _DAT_142e36f28;
      if (fVar74 <= _DAT_142e36f28) {
        fVar60 = fVar74;
      }
      if ((fVar60 != 0.0) || (ppcVar40 = apcStack_218 + 2, NAN(fVar60))) {
        *unaff_RBP = param_7._4_4_;
        if (bVar27 == 2) {
          uStack_130 = 1;
          uVar34 = uStack_a0;
        }
        else if (bVar27 == 1) {
          uStack_120 = 1;
          uVar34 = uStack_90;
        }
        else {
          uStack_128 = 1;
          uVar34 = CONCAT17(bStack_91,CONCAT16(cStack_92,CONCAT24(uStack_94,uStack_98)));
        }
        uVar13 = *(ulonglong *)(uVar34 + 0x28);
        if (*(ulonglong *)(uVar34 + 0x10) <= uVar13) {
                    /* WARNING: Subroutine does not return */
          apcStack_218[1] = (char *)0x140ac29a2;
          pdb_142dc81f2(uVar13,*(ulonglong *)(uVar34 + 0x10),&UNK_143043a80);
        }
        apcStack_218[1] = (char *)0x140ac1d85;
        pdb_140a8e190(uVar13 * 0x30 + *(longlong *)(uVar34 + 8),&stack0x00000000);
        uVar13 = *(ulonglong *)(uVar34 + 0x28);
        if (*(ulonglong *)(uVar34 + 0x10) <= uVar13) {
                    /* WARNING: Subroutine does not return */
          apcStack_218[1] = (char *)0x140ac2990;
          pdb_142dc81f2(uVar13,*(ulonglong *)(uVar34 + 0x10),&UNK_143043a80);
        }
        apcStack_218[1] = (char *)0x140ac1db8;
        pdb_140a8e730(uVar13 * 0x30 + *(longlong *)(uVar34 + 8),&UNK_14304be1f,0xd);
        if (bVar27 == 2) {
          puStack_1e8 = (ulonglong *)CONCAT44(puStack_1e8._4_4_,0x43020000);
          apcStack_218[1] = (char *)0x140ac1ddf;
          pdb_140a7d8d0(&uStack_110);
          uVar13 = *(ulonglong *)(uVar34 + 0x28);
          if (*(ulonglong *)(uVar34 + 0x10) <= uVar13) {
                    /* WARNING: Subroutine does not return */
            apcStack_218[1] = (char *)0x140ac2bdf;
            pdb_142dc81f2(uVar13,*(ulonglong *)(uVar34 + 0x10),&UNK_143043a80);
          }
          apcStack_218[1] = (char *)0x140ac1e22;
          pdb_140a8e730(uVar13 * 0x30 + *(longlong *)(uVar34 + 8),&UNK_14304bc40,8);
        }
        uVar13 = *(ulonglong *)(uVar34 + 0x28);
        if (*(ulonglong *)(uVar34 + 0x10) <= uVar13) {
                    /* WARNING: Subroutine does not return */
          apcStack_218[1] = (char *)0x140ac29b4;
          pdb_142dc81f2(uVar13,*(ulonglong *)(uVar34 + 0x10),&UNK_143043a80);
        }
        apcStack_218[1] = (char *)0x140ac1e55;
        pdb_140a8e730(uVar13 * 0x30 + *(longlong *)(uVar34 + 8),&UNK_14304b027,0xd);
        ppcVar40 = apcStack_218 + 2;
      }
      goto code_r0x000140abfc96;
    case 0x42:
      *(uint *)puVar16 = (uint)*puVar16 + uVar28;
      pbVar1 = (byte *)((longlong)puVar16 + -0x75);
      bVar27 = *pbVar1;
      *pbVar1 = *pbVar1 + bVar25;
      pbVar46[-0x77] = (pbVar46[-0x77] - cVar48) - CARRY1(bVar27,bVar25);
      apcStack_218[1] = (char *)0x140ac0160;
      pdb_140abb950(unaff_R15,0x4304be2c,0x23,&stack0x00000000);
      ppcVar40 = apcStack_218 + 2;
      goto code_r0x000140abfc96;
    case 0x43:
      *(byte *)puVar16 = (byte)*puVar16 + bVar27;
      lVar12 = *(longlong *)
                ((longlong)puVar16 +
                CONCAT62((int6)((ulonglong)param_3 >> 0x10),CONCAT11(0x2b,(char)param_3)) + 8);
      apcStack_218[1] = (char *)0x140abff8f;
      pdb_140de8220();
      apcStack_218[1] = (char *)0x140abffc0;
      pdb_140a8e730(lVar12 + (longlong)arg0 * 0x30,&UNK_14304b027,0xd);
      uStack_b8 = CONCAT71((int7)((ulonglong)uStack_b8 >> 8),(byte)uStack_b8 | bVar42);
      pbStack_c0 = (byte *)CONCAT71((int7)((ulonglong)pbStack_c0 >> 8),(byte)pbStack_c0 | bVar42 ^ 1
                                   );
      ppcVar40 = apcStack_218 + 2;
      goto code_r0x000140abfc96;
    case 0x45:
      uVar34 = (ulonglong)(uVar28 + 1);
      goto code_r0x000140abfc80;
    case 0x46:
      puVar14 = &UNK_14304c7a7 + uVar34;
      if (puVar14 == (undefined *)0x0 || bVar57) {
        apcStack_218[1] = "\x01";
        piVar21 = (int *)(*(code *)puVar16[-0x8ef4e97])();
        *piVar21 = *piVar21 + (int)piVar21;
        cVar26 = (char)puVar14;
        *(char *)((longlong)piVar21 + -0x75) = *(char *)((longlong)piVar21 + -0x75) + cVar26;
        *(char *)(param_3 + (longlong)(puVar14 + -0x14)) =
             (char)param_3[(longlong)(puVar14 + -0x14)] + cVar26;
        puVar14[0x39] = puVar14[0x39] + cVar26;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      apcStack_218[1] = (char *)0x140ac00b3;
      pdb_140a8e190();
      arg0 = (ulonglong *)param_6[0x8a];
      if ((ulonglong *)param_6[0x87] <= arg0) {
                    /* WARNING: Subroutine does not return */
        apcStack_218[1] = (char *)0x140ac2a3b;
        pdb_142dc81f2(arg0,(ulonglong *)param_6[0x87],&UNK_143043a80);
      }
      param_3 = (uint *)param_6[0x86];
code_r0x000140ac00ea:
      apcStack_218[1] = (char *)0x140ac00ef;
      pdb_140de8220();
      uStack_138 = CONCAT71((int7)((ulonglong)((longlong)arg0 * 0x30) >> 8),1);
      apcStack_218[1] = (char *)0x140ac0126;
      pdb_140a8e730(param_3 + (longlong)arg0 * 0xc,&UNK_14304b027,0xd);
      ppcVar40 = apcStack_218 + 2;
      goto code_r0x000140abfc96;
    case 0x47:
      auVar61 = divps(auVar61,in_XMM1);
      apcStack_218[1] = &UNK_140ac80db;
      auVar61._0_8_ = pub_142e32a20(auVar61._0_8_);
      auVar61._8_8_ = extraout_XMM0_Qb_11;
      in_XMM1 = ZEXT416((uint)_DAT_142e36f28);
code_r0x000140ac80e3:
      fVar68 = in_XMM1._0_4_ - auVar61._0_4_;
      uVar28 = *param_3;
      in_XMM4_Da = unaff_XMM6_Da;
      if ((uVar28 & 1) != 0) {
        in_XMM4_Da = (float)param_3[3];
      }
      auVar62._4_4_ = unaff_XMM6_Db;
      auVar62._0_4_ = unaff_XMM6_Da;
      auVar62._8_4_ = unaff_XMM6_Dc;
      auVar62._12_4_ = unaff_XMM6_Dd;
      auVar61._4_12_ = auVar62._4_12_;
      auVar61._0_4_ = (unaff_XMM6_Da - in_XMM4_Da) * fVar68;
      fVar74 = (float)param_3[5];
      fVar60 = (float)param_3[6];
      in_XMM5_Da = param_3[1];
      in_XMM5_Db = param_3[2];
      fVar75 = (float)(uVar28 << 0x1f);
      iVar76 = uVar28 << 0x1f;
      goto code_r0x000140ac8120;
    case 0x48:
      return puVar16;
    case 0x49:
      return puVar16;
    case 0x4a:
      goto code_r0x000140ac81a3;
    case 0x4b:
      if (bVar58) {
        in_XMM1._4_12_ = _DAT_142e36f2c;
        in_XMM1._0_4_ = _DAT_142e36f28;
        goto code_r0x000140ac80e3;
      }
      *(byte *)((longlong)puVar53 + 0x41) = *(byte *)((longlong)puVar53 + 0x41) + cVar26;
code_r0x000140ac8120:
      fVar59 = (float)(~((int)fVar75 >> 0x1f) & (uint)fVar74 | in_XMM5_Da & (int)fVar75 >> 0x1f);
      fVar75 = (float)(~(iVar76 >> 0x1f) & (uint)fVar60 | in_XMM5_Db & iVar76 >> 0x1f);
      uVar18 = CONCAT44(fVar68 * (fVar60 - fVar75) + fVar75,fVar68 * (fVar74 - fVar59) + fVar59);
      auVar61._0_4_ = auVar61._0_4_ + in_XMM4_Da;
      *param_3 = 1;
      *(undefined8 *)(param_3 + 1) = uVar18;
      param_3[3] = (uint)auVar61._0_4_;
      bVar56 = NAN(unaff_XMM7_Da) || NAN(in_XMM1._0_4_);
      bVar57 = unaff_XMM7_Da == in_XMM1._0_4_;
code_r0x000140ac815e:
      if ((!bVar57) || (bVar56)) {
        uVar18 = CONCAT44(unaff_XMM7_Da * ((float)((ulonglong)uVar18 >> 0x20) - fVar60) + fVar60,
                          unaff_XMM7_Da * ((float)uVar18 - fVar74) + fVar74);
        auVar61._0_4_ = (auVar61._0_4_ - unaff_XMM6_Da) * unaff_XMM7_Da + unaff_XMM6_Da;
      }
      puStack_1e8 = (ulonglong *)
                    CONCAT44((float)((ulonglong)uVar18 >> 0x20) - (float)(puVar53[2] >> 0x20),
                             (float)uVar18 - (float)puVar53[2]);
      uStack_1e0 = CONCAT44(uStack_1e0._4_4_,auVar61._0_4_ - *(float *)(puVar53 + 3));
      apcStack_218[1] = &UNK_140ac81a3;
      pdb_140a76ef0(puVar16,&puStack_1e8);
code_r0x000140ac81a3:
      *(uint *)(puVar16 + 3) = (uint)puVar53[3];
      puVar16[2] = puVar53[2];
      return puVar16;
    case 0x4c:
      return puVar16;
    case 0x4d:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x4e:
                    /* WARNING: Could not recover jumptable at 0x000140ac81eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar53 = (ulonglong *)
                (*(code *)(ulonglong)(uVar33 + uVar28))
                          (puVar29,(code *)(ulonglong)(uVar33 + uVar28));
      return puVar53;
    case 0x4f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x50:
      goto code_r0x000140ac815e;
    case 0x51:
      uVar11 = in(0xe1);
      return (ulonglong *)CONCAT71(uVar24,uVar11);
    }
    unaff_R12 = (ulonglong *)0x0;
    param_3 = (uint *)puVar41[0xf];
    *(char *)((longlong)puVar41 + 0x147) = cVar48;
    goto code_r0x000140abc600;
  }
  goto LAB_140abb070;
code_r0x000140abfe15:
  uVar13 = uVar13 & uVar34;
  pcVar22 = (char *)(lVar12 + uVar13);
  auVar67[0] = -(*pcVar22 == auVar61[0]);
  auVar67[1] = -(pcVar22[1] == auVar61[1]);
  auVar67[2] = -(pcVar22[2] == auVar61[2]);
  auVar67[3] = -(pcVar22[3] == auVar61[3]);
  auVar67[4] = -(pcVar22[4] == auVar61[4]);
  auVar67[5] = -(pcVar22[5] == auVar61[5]);
  auVar67[6] = -(pcVar22[6] == auVar61[6]);
  auVar67[7] = -(pcVar22[7] == auVar61[7]);
  auVar67[8] = -(pcVar22[8] == auVar61[0]);
  auVar67[9] = -(pcVar22[9] == auVar61[1]);
  auVar67[10] = -(pcVar22[10] == auVar61[2]);
  auVar67[0xb] = -(pcVar22[0xb] == auVar61[3]);
  auVar67[0xc] = -(pcVar22[0xc] == auVar61[4]);
  auVar67[0xd] = -(pcVar22[0xd] == auVar61[5]);
  auVar67[0xe] = -(pcVar22[0xe] == auVar61[6]);
  auVar67[0xf] = -(pcVar22[0xf] == auVar61[7]);
  uVar51 = (ushort)(SUB161(auVar67 >> 7,0) & 1) | (ushort)(SUB161(auVar67 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar67 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar67 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar67 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar67 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar67 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar67 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar67 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar67 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar67 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar67 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar67 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar67 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar67 >> 0x77,0) & 1) << 0xe | (ushort)(auVar67[0xf] >> 7) << 0xf;
  uVar28 = (uint)uVar51;
  while (uVar51 != 0) {
    uVar33 = 0;
    for (uVar44 = uVar28; (uVar44 & 1) == 0; uVar44 = uVar44 >> 1 | 0x80000000) {
      uVar33 = uVar33 + 1;
    }
    lVar23 = (uVar33 + uVar13 & uVar34) * -0x70;
    if (puVar53 == *(ulonglong **)(lVar12 + -0x70 + lVar23)) {
      lVar12 = lVar12 + lVar23;
      if (*(longlong *)(lVar12 + -0x68) == 3) goto code_r0x000140ac1464;
      lVar12 = lVar12 + -0x60;
      goto code_r0x000140ac1479;
    }
    uVar51 = (ushort)(uVar28 - 1) & (ushort)uVar28;
    uVar28 = CONCAT22((short)(uVar28 - 1 >> 0x10),uVar51);
  }
  auVar65[0] = -(*pcVar22 == -1);
  auVar65[1] = -(pcVar22[1] == -1);
  auVar65[2] = -(pcVar22[2] == -1);
  auVar65[3] = -(pcVar22[3] == -1);
  auVar65[4] = -(pcVar22[4] == -1);
  auVar65[5] = -(pcVar22[5] == -1);
  auVar65[6] = -(pcVar22[6] == -1);
  auVar65[7] = -(pcVar22[7] == -1);
  auVar65[8] = -(pcVar22[8] == -1);
  auVar65[9] = -(pcVar22[9] == -1);
  auVar65[10] = -(pcVar22[10] == -1);
  auVar65[0xb] = -(pcVar22[0xb] == -1);
  auVar65[0xc] = -(pcVar22[0xc] == -1);
  auVar65[0xd] = -(pcVar22[0xd] == -1);
  auVar65[0xe] = -(pcVar22[0xe] == -1);
  auVar65[0xf] = -(pcVar22[0xf] == -1);
  if ((((((((((((((((SUB161(auVar65 >> 7,0) & 1) != 0 || (SUB161(auVar65 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar65 >> 0x17,0) & 1) != 0) || (SUB161(auVar65 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar65 >> 0x27,0) & 1) != 0) || (SUB161(auVar65 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar65 >> 0x37,0) & 1) != 0) || (SUB161(auVar65 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar65 >> 0x47,0) & 1) != 0) || (SUB161(auVar65 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar65 >> 0x57,0) & 1) != 0) || (SUB161(auVar65 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar65 >> 0x67,0) & 1) != 0) || (SUB161(auVar65 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar65 >> 0x77,0) & 1) != 0) || auVar65[0xf] < '\0') {
code_r0x000140ac1464:
    lVar12 = puVar41[-4];
    if (*(longlong *)puVar41[0x12] == 3) {
      apcStack_218[1] = (char *)0x140ac2772;
      pdb_142dc8110(&UNK_14306aed6,0x32,&UNK_14306af08);
LAB_140ac2ca5:
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
code_r0x000140ac1479:
    uVar11 = *(undefined1 *)(lVar12 + 0x5d);
    *(uint *)(puVar41 + 0x32) = (uint)puVar16[4];
    puVar41[0x31] = puVar16[3];
    *(undefined4 *)puVar41[-5] = *(undefined4 *)((longlong)puVar41 + 0x8c);
    lVar12 = puVar41[4];
    lVar47 = *(longlong *)(lVar12 + 0x30);
    uVar18 = *(undefined8 *)(lVar12 + 0x40);
    if (lVar47 == *(longlong *)(lVar12 + 0x20)) {
      apcStack_218[1] = (char *)0x140ac14c3;
      pdb_142d7e830(puVar41[-1]);
    }
    pbVar46 = (byte *)puVar41[4];
    lVar12 = *(longlong *)(pbVar46 + 0x28);
    *(undefined8 *)(lVar12 + lVar47 * 0x18) = uVar18;
    *(undefined8 *)(lVar12 + 8 + lVar47 * 0x18) = puVar41[0x31];
    *(undefined4 *)(lVar12 + 0x10 + lVar47 * 0x18) = *(undefined4 *)(puVar41 + 0x32);
    *(undefined1 *)(lVar12 + 0x14 + lVar47 * 0x18) = uVar11;
    *(char *)(lVar12 + 0x15 + lVar47 * 0x18) = (param_3 == (uint *)0x22) + '\x01';
    uVar34 = lVar47 + 1;
code_r0x000140abfc80:
    *(ulonglong *)(pbVar46 + 0x30) = uVar34;
    *(longlong *)(pbVar46 + 0x40) = *(longlong *)(pbVar46 + 0x40) + 1;
    ppcVar40 = apcStack_218 + 2;
code_r0x000140abfc96:
    if (((unaff_R12 != (ulonglong *)0x0) && (unaff_R12 != (ulonglong *)puVar41[-7])) ||
       ((puVar54 != (ulonglong *)0x0 && (unaff_R12 = puVar54, puVar54 != (ulonglong *)puVar41[-6])))
       ) {
      *(longlong *)puVar41[0x26] = *(longlong *)puVar41[0x26] + 1;
      lVar12 = *unaff_R12 - 8;
      if (*unaff_R12 < 8) {
        lVar12 = 3;
      }
                    /* WARNING: Could not recover jumptable at 0x000140abfcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar53 = (ulonglong *)(*(code *)(&UNK_14304c824 + *(int *)(&UNK_14304c824 + lVar12 * 4)))();
      return puVar53;
    }
    *(undefined4 *)puVar41[0x30] = *(undefined4 *)((longlong)puVar41 + 0x1c4);
    if ((*(byte *)(puVar41 + 0x15) & 1) == 0) {
      uVar18 = puVar41[0x37];
      *(undefined8 *)((longlong)ppcVar40 + -8) = 0x140ac2235;
      pdb_140a87f70(uVar18);
    }
    else {
      uVar18 = puVar41[0x37];
      *(undefined8 *)((longlong)ppcVar40 + -8) = 0x140ac2226;
      pdb_140a87e10(uVar18);
    }
    *(undefined4 *)puVar41[0x30] = *(undefined4 *)((longlong)puVar41 + 0x1c4);
    lVar12 = puVar41[0x37];
    if ((*(byte *)(puVar41 + 0x16) & 1) == 0) {
      *(undefined8 *)((longlong)ppcVar40 + -8) = 0x140ac2266;
      pdb_140a87f70(lVar12 + 0x38);
    }
    else {
      *(undefined8 *)((longlong)ppcVar40 + -8) = 0x140ac225e;
      pdb_140a87e10();
    }
    *(undefined4 *)puVar41[0x30] = *(undefined4 *)((longlong)puVar41 + 0x1c4);
    lVar12 = puVar41[0x37];
    if ((*(byte *)(puVar41 + 0x13) & 1) == 0) {
      *(undefined8 *)((longlong)ppcVar40 + -8) = 0x140ac2297;
      pdb_140a87f70(lVar12 + 0x70);
    }
    else {
      *(undefined8 *)((longlong)ppcVar40 + -8) = 0x140ac228f;
      pdb_140a87e10();
    }
    *(undefined4 *)puVar41[0x30] = *(undefined4 *)((longlong)puVar41 + 0x1c4);
    lVar12 = puVar41[0x37];
    if ((*(byte *)(puVar41 + 0x14) & 1) == 0) {
      *(undefined8 *)((longlong)ppcVar40 + -8) = 0x140ac22cb;
      pdb_140a87f70(lVar12 + 0xa8);
    }
    else {
      *(undefined8 *)((longlong)ppcVar40 + -8) = 0x140ac22c3;
      pdb_140a87e10();
    }
    *(undefined4 *)puVar41[0x30] = *(undefined4 *)((longlong)puVar41 + 0x1c4);
    if ((*(byte *)(puVar41 + 0xe) & 1) == 0) {
      uVar18 = puVar41[0x20];
      *(undefined8 *)((longlong)ppcVar40 + -8) = 0x140ac22fc;
      pdb_140a87f70(uVar18);
    }
    else {
      uVar18 = puVar41[0x20];
      *(undefined8 *)((longlong)ppcVar40 + -8) = 0x140ac22ed;
      pdb_140a87e10(uVar18);
    }
    *(undefined4 *)puVar41[0x30] = *(undefined4 *)((longlong)puVar41 + 0x1c4);
    lVar12 = puVar41[0x37];
    if ((*(byte *)(puVar41 + 0x1b) & 1) == 0) {
      *(undefined8 *)((longlong)ppcVar40 + -8) = 0x140ac2330;
      pdb_140a87f70(lVar12 + 0xe0);
    }
    else {
      *(undefined8 *)((longlong)ppcVar40 + -8) = 0x140ac2328;
      pdb_140a87e10();
    }
    *(undefined4 *)puVar41[0x30] = *(undefined4 *)((longlong)puVar41 + 0x1c4);
    lVar12 = puVar41[0x37];
    if ((*(byte *)(puVar41 + 0x1c) & 1) == 0) {
      *(undefined8 *)((longlong)ppcVar40 + -8) = 0x140ac2364;
      pdb_140a87f70(lVar12 + 0x118);
    }
    else {
      *(undefined8 *)((longlong)ppcVar40 + -8) = 0x140ac235c;
      pdb_140a87e10();
    }
    *(undefined4 *)puVar41[0x30] = *(undefined4 *)((longlong)puVar41 + 0x1c4);
    lVar12 = puVar41[0x37];
    if ((*(byte *)(puVar41 + 5) & 1) == 0) {
      *(undefined8 *)((longlong)ppcVar40 + -8) = 0x140ac2395;
      pdb_140a87f70(lVar12 + 0x188);
    }
    else {
      *(undefined8 *)((longlong)ppcVar40 + -8) = 0x140ac238d;
      pdb_140a87e10();
    }
    *(undefined4 *)puVar41[0x30] = *(undefined4 *)((longlong)puVar41 + 0x1c4);
    lVar12 = puVar41[0x37];
    if ((*(byte *)(puVar41 + 6) & 1) == 0) {
      *(undefined8 *)((longlong)ppcVar40 + -8) = 0x140ac23c6;
      pdb_140a87f70(lVar12 + 0x268);
    }
    else {
      *(undefined8 *)((longlong)ppcVar40 + -8) = 0x140ac23be;
      pdb_140a87e10();
    }
    *(undefined4 *)puVar41[0x30] = *(undefined4 *)((longlong)puVar41 + 0x1c4);
    lVar12 = puVar41[0x37];
    if ((*(byte *)(puVar41 + 7) & 1) == 0) {
      *(undefined8 *)((longlong)ppcVar40 + -8) = 0x140ac23f7;
      pdb_140a87f70(lVar12 + 0x2a0);
    }
    else {
      *(undefined8 *)((longlong)ppcVar40 + -8) = 0x140ac23ef;
      pdb_140a87e10();
    }
    *(undefined4 *)puVar41[0x30] = *(undefined4 *)((longlong)puVar41 + 0x1c4);
    lVar12 = puVar41[0x37];
    if ((*(byte *)(puVar41 + 8) & 1) == 0) {
      *(undefined8 *)((longlong)ppcVar40 + -8) = 0x140ac2428;
      pdb_140a87f70(lVar12 + 0x2d8);
    }
    else {
      *(undefined8 *)((longlong)ppcVar40 + -8) = 0x140ac2420;
      pdb_140a87e10();
    }
    *(undefined4 *)puVar41[0x30] = *(undefined4 *)((longlong)puVar41 + 0x1c4);
    lVar12 = puVar41[0x37];
    if ((*(byte *)(puVar41 + 9) & 1) == 0) {
      *(undefined8 *)((longlong)ppcVar40 + -8) = 0x140ac2459;
      pdb_140a87f70(lVar12 + 0x3f0);
    }
    else {
      *(undefined8 *)((longlong)ppcVar40 + -8) = 0x140ac2451;
      pdb_140a87e10();
    }
    *(undefined4 *)puVar41[0x30] = *(undefined4 *)((longlong)puVar41 + 0x1c4);
    lVar12 = puVar41[0x37];
    if ((*(byte *)(puVar41 + 0x17) & 1) == 0) {
      *(undefined8 *)((longlong)ppcVar40 + -8) = 0x140ac248d;
      pdb_140a87f70(lVar12 + 0x310);
    }
    else {
      *(undefined8 *)((longlong)ppcVar40 + -8) = 0x140ac2485;
      pdb_140a87e10();
    }
    *(undefined4 *)puVar41[0x30] = *(undefined4 *)((longlong)puVar41 + 0x1c4);
    lVar12 = puVar41[0x37];
    if ((*(byte *)(puVar41 + 0x18) & 1) == 0) {
      *(undefined8 *)((longlong)ppcVar40 + -8) = 0x140ac24c1;
      pdb_140a87f70(lVar12 + 0x348);
    }
    else {
      *(undefined8 *)((longlong)ppcVar40 + -8) = 0x140ac24b9;
      pdb_140a87e10();
    }
    *(undefined4 *)puVar41[0x30] = *(undefined4 *)((longlong)puVar41 + 0x1c4);
    lVar12 = puVar41[0x37];
    if ((*(byte *)(puVar41 + 0x19) & 1) == 0) {
      *(undefined8 *)((longlong)ppcVar40 + -8) = 0x140ac24f5;
      pdb_140a87f70(lVar12 + 0x380);
    }
    else {
      *(undefined8 *)((longlong)ppcVar40 + -8) = 0x140ac24ed;
      pdb_140a87e10();
    }
    *(undefined4 *)puVar41[0x30] = *(undefined4 *)((longlong)puVar41 + 0x1c4);
    lVar12 = puVar41[0x37];
    if ((*(byte *)(puVar41 + 0x1a) & 1) == 0) {
      *(undefined8 *)((longlong)ppcVar40 + -8) = 0x140ac2529;
      pdb_140a87f70(lVar12 + 0x3b8);
    }
    else {
      *(undefined8 *)((longlong)ppcVar40 + -8) = 0x140ac2521;
      pdb_140a87e10();
    }
    *(undefined4 *)puVar41[0x30] = *(undefined4 *)((longlong)puVar41 + 0x1c4);
    lVar12 = puVar41[0x37];
    if ((*(byte *)(puVar41 + 10) & 1) == 0) {
      *(undefined8 *)((longlong)ppcVar40 + -8) = 0x140ac255a;
      pdb_140a87f70(lVar12 + 0x428);
    }
    else {
      *(undefined8 *)((longlong)ppcVar40 + -8) = 0x140ac2552;
      pdb_140a87e10();
    }
    *(undefined4 *)puVar41[0x30] = *(undefined4 *)((longlong)puVar41 + 0x1c4);
    if ((*(byte *)(puVar41 + 0xb) & 1) == 0) {
      uVar18 = puVar41[0x1d];
      *(undefined8 *)((longlong)ppcVar40 + -8) = 0x140ac258b;
      pdb_140a87f70(uVar18);
    }
    else {
      uVar18 = puVar41[0x1d];
      *(undefined8 *)((longlong)ppcVar40 + -8) = 0x140ac257c;
      pdb_140a87e10(uVar18);
    }
    *(undefined4 *)puVar41[0x30] = *(undefined4 *)((longlong)puVar41 + 0x1c4);
    if ((*(byte *)(puVar41 + 0xc) & 1) == 0) {
      uVar18 = puVar41[0x1e];
      *(undefined8 *)((longlong)ppcVar40 + -8) = 0x140ac25bc;
      pdb_140a87f70(uVar18);
    }
    else {
      uVar18 = puVar41[0x1e];
      *(undefined8 *)((longlong)ppcVar40 + -8) = 0x140ac25ad;
      pdb_140a87e10(uVar18);
    }
    *(undefined4 *)puVar41[0x30] = *(undefined4 *)((longlong)puVar41 + 0x1c4);
    if ((*(byte *)(puVar41 + 0xd) & 1) == 0) {
      uVar18 = puVar41[0x1f];
      *(undefined8 *)((longlong)ppcVar40 + -8) = 0x140ac25ed;
      pdb_140a87f70(uVar18);
    }
    else {
      uVar18 = puVar41[0x1f];
      *(undefined8 *)((longlong)ppcVar40 + -8) = 0x140ac25de;
      pdb_140a87e10(uVar18);
    }
    uVar34 = puVar41[0x23];
    puVar41[0x31] = (longlong)puVar41 + 0x12f;
    if (1 < uVar34) goto LAB_140ac2784;
    while( true ) {
      puVar41[0x37] = puVar41[0x37] + 0x1c0;
      puVar53 = (ulonglong *)0x0;
      while (puVar53 < (ulonglong *)0x3) {
        *(undefined4 *)puVar41[0x30] = *(undefined4 *)((longlong)puVar41 + 0x1c4);
        lVar12 = (longlong)puVar53 * 0x38 + puVar41[0x37];
        if (puVar53 < (ulonglong *)puVar41[0x23]) {
          uVar34 = *(ulonglong *)(lVar12 + 0x10);
          uVar13 = *(ulonglong *)(lVar12 + 0x28);
          if (uVar34 <= uVar13) {
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)((longlong)ppcVar40 + -8) = 0x140ac2960;
            pdb_142dc81f2(uVar13,uVar34,&UNK_143043a80);
          }
          lVar23 = (longlong)puVar53 * 0x10 + puVar41[0x22];
          lVar47 = *(longlong *)(lVar12 + 8);
          *(undefined4 *)(puVar41 + 0x32) = *(undefined4 *)(lVar23 + 0xc);
          puVar41[0x31] = *(undefined8 *)(lVar23 + 4);
          *(undefined8 *)((longlong)ppcVar40 + -8) = 0x140ac26ad;
          pdb_140a8e190(uVar13 * 0x30 + lVar47,puVar41 + 0x31);
          *(undefined8 *)((longlong)ppcVar40 + -8) = 0x140ac26b6;
          pdb_140a87e10(lVar12);
          puVar53 = (ulonglong *)((longlong)puVar53 + 1U);
        }
        else {
          *(undefined8 *)((longlong)ppcVar40 + -8) = 0x140ac2638;
          pdb_140a87f70(lVar12);
          puVar53 = (ulonglong *)((longlong)puVar53 + 1U);
        }
      }
      uVar34 = 0;
      if (puVar41[0x21] != 0) {
        pbVar46 = (byte *)puVar41[0x22];
        uVar34 = puVar41[0x21] << 4;
        *(undefined8 *)((longlong)ppcVar40 + -8) = 0x140ac26de;
        pub_1406abac0(pbVar46,uVar34,4);
        puVar53 = extraout_RAX_01;
      }
      if (puVar41[2] == 0) {
        return puVar53;
      }
      *(undefined8 *)((longlong)ppcVar40 + -8) = 0x140ac26ea;
      plVar15 = (longlong *)pdb_140e97000();
      if ((char)plVar15[0xd] != '\x01') {
        uVar34 = 0;
        *(undefined8 *)((longlong)ppcVar40 + -8) = 0x140ac28eb;
        plVar15 = (longlong *)pdb_142d8ec20(plVar15);
        if (plVar15 == (longlong *)0x0) {
          *(undefined8 *)((longlong)ppcVar40 + -8) = 0x140ac2915;
          pdb_142dc7890(&UNK_143326860);
          puVar41[0x28] = puVar41[0x32];
          *(undefined **)((longlong)ppcVar40 + 0x20) = &UNK_14304bc28;
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((longlong)ppcVar40 + -8) = 0x140ac294e;
          pdb_142dc8170(&UNK_14304c468,0x2b,puVar41 + 0x28,&UNK_14304c448);
        }
      }
      if (*plVar15 == 0) break;
      *(undefined8 *)((longlong)ppcVar40 + -8) = 0x140ac2784;
      pdb_142dc8090(&UNK_143326a50);
LAB_140ac2784:
      if (uVar34 < 0x15) {
        *(undefined8 *)((longlong)ppcVar40 + -8) = 0x140ac27a0;
        pdb_14151bd50();
      }
      else {
        *(undefined8 *)((longlong)ppcVar40 + -8) = 0x140ac2c6e;
        pdb_140c76cb0();
      }
    }
    *plVar15 = -1;
    uVar18 = puVar41[3];
    puVar41[0x26] = plVar15;
    *(undefined8 *)((longlong)ppcVar40 + -8) = 0x140ac2715;
    pdb_140e95370(plVar15 + 1,uVar18);
    puVar53 = (ulonglong *)puVar41[0x26];
    *puVar53 = *puVar53 + 1;
    return puVar53;
  }
  uVar13 = uVar13 + lVar47 + 0x10;
  lVar47 = lVar47 + 0x10;
  goto code_r0x000140abfe15;
code_r0x000140abc600:
  puVar29 = param_3;
  ppcVar39 = ppcVar38;
  if (param_3 == (uint *)puVar41[0xe]) goto code_r0x000140abcb87;
code_r0x000140abc60a:
  param_3 = puVar29 + 8;
  uVar28 = puVar29[6];
  pcVar19 = (char *)(ulonglong)*(byte *)((longlong)puVar29 + 0x19);
  *(uint *)(puVar41 + 0x13) = puVar29[4];
  puVar41[0x12] = *(undefined8 *)(puVar29 + 2);
  bVar57 = (char)uVar28 == cVar32;
  ppcVar38 = ppcVar39;
code_r0x000140abc632:
  if (bVar57) {
    lVar12 = *(longlong *)puVar29;
    uVar28 = puVar29[5];
    switch((ulonglong)arg0 & 0xffffffff) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 6:
    case 7:
    case 8:
      if ((char)pcVar19 != (char)puVar50) goto code_r0x000140abc600;
    }
    plVar15 = *(longlong **)puVar41[0x4c];
    puVar41[0x1e] = lVar12;
    if (plVar15[3] == 0) {
code_r0x000140abd10d:
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abd119;
      pdb_142dc8150(&UNK_14304b2b8);
    }
    *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abc687;
    uVar34 = pdb_1400af0a0(plVar15 + 4,puVar41 + 0x1e);
    lVar47 = *plVar15;
    bVar27 = (byte)(uVar34 >> 0x39);
    auVar61 = ZEXT216(CONCAT11(bVar27,bVar27));
    auVar61 = pshuflw(auVar61,auVar61,0);
    lVar23 = 0;
    while( true ) {
      uVar34 = uVar34 & plVar15[1];
      auVar62 = *(undefined1 (*) [16])(lVar47 + uVar34);
      auVar66[0] = -(auVar62[0] == auVar61[0]);
      auVar66[1] = -(auVar62[1] == auVar61[1]);
      auVar66[2] = -(auVar62[2] == auVar61[2]);
      auVar66[3] = -(auVar62[3] == auVar61[3]);
      auVar66[4] = -(auVar62[4] == auVar61[4]);
      auVar66[5] = -(auVar62[5] == auVar61[5]);
      auVar66[6] = -(auVar62[6] == auVar61[6]);
      auVar66[7] = -(auVar62[7] == auVar61[7]);
      auVar66[8] = -(auVar62[8] == auVar61[0]);
      auVar66[9] = -(auVar62[9] == auVar61[1]);
      auVar66[10] = -(auVar62[10] == auVar61[2]);
      auVar66[0xb] = -(auVar62[0xb] == auVar61[3]);
      auVar66[0xc] = -(auVar62[0xc] == auVar61[4]);
      auVar66[0xd] = -(auVar62[0xd] == auVar61[5]);
      auVar66[0xe] = -(auVar62[0xe] == auVar61[6]);
      auVar66[0xf] = -(auVar62[0xf] == auVar61[7]);
      uVar51 = (ushort)(SUB161(auVar66 >> 7,0) & 1) | (ushort)(SUB161(auVar66 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar66 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar66 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar66 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar66 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar66 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar66 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar66 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar66 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar66 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar66 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar66 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar66 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar66 >> 0x77,0) & 1) << 0xe | (ushort)(auVar66[0xf] >> 7) << 0xf;
      uVar44 = (uint)uVar51;
      if (uVar51 != 0) break;
code_r0x000140abc6f0:
      auVar64[0] = -(auVar62[0] == (char)unaff_XMM14_Da);
      auVar64[1] = -(auVar62[1] == (char)((uint)unaff_XMM14_Da >> 8));
      auVar64[2] = -(auVar62[2] == (char)((uint)unaff_XMM14_Da >> 0x10));
      auVar64[3] = -(auVar62[3] == (char)((uint)unaff_XMM14_Da >> 0x18));
      auVar64[4] = -(auVar62[4] == (char)unaff_XMM14_Db);
      auVar64[5] = -(auVar62[5] == (char)((uint)unaff_XMM14_Db >> 8));
      auVar64[6] = -(auVar62[6] == (char)((uint)unaff_XMM14_Db >> 0x10));
      auVar64[7] = -(auVar62[7] == (char)((uint)unaff_XMM14_Db >> 0x18));
      auVar64[8] = -(auVar62[8] == (char)unaff_XMM14_Dc);
      auVar64[9] = -(auVar62[9] == (char)((uint)unaff_XMM14_Dc >> 8));
      auVar64[10] = -(auVar62[10] == (char)((uint)unaff_XMM14_Dc >> 0x10));
      auVar64[0xb] = -(auVar62[0xb] == (char)((uint)unaff_XMM14_Dc >> 0x18));
      auVar64[0xc] = -(auVar62[0xc] == (char)unaff_XMM14_Dd);
      auVar64[0xd] = -(auVar62[0xd] == (char)((uint)unaff_XMM14_Dd >> 8));
      auVar64[0xe] = -(auVar62[0xe] == (char)((uint)unaff_XMM14_Dd >> 0x10));
      auVar64[0xf] = -(auVar62[0xf] == (char)((uint)unaff_XMM14_Dd >> 0x18));
      if ((((((((((((((((SUB161(auVar64 >> 7,0) & 1) != 0 || (SUB161(auVar64 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar64 >> 0x17,0) & 1) != 0) || (SUB161(auVar64 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar64 >> 0x27,0) & 1) != 0) || (SUB161(auVar64 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar64 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar64 >> 0x3f,0) & 1) != 0) || (SUB161(auVar64 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar64 >> 0x4f,0) & 1) != 0) || (SUB161(auVar64 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar64 >> 0x5f,0) & 1) != 0) || (SUB161(auVar64 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar64 >> 0x6f,0) & 1) != 0) || (SUB161(auVar64 >> 0x77,0) & 1) != 0) ||
          auVar64[0xf] < '\0') goto code_r0x000140abd10d;
      uVar34 = uVar34 + lVar23 + 0x10;
      lVar23 = lVar23 + 0x10;
    }
    while( true ) {
      uVar9 = 0;
      for (uVar10 = uVar44; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
        uVar9 = uVar9 + 1;
      }
      lVar49 = (uVar9 + uVar34 & plVar15[1]) * -0x2b0;
      if (lVar12 == *(longlong *)(lVar47 + -0x2b0 + lVar49)) break;
      uVar51 = (ushort)(uVar44 - 1) & (ushort)uVar44;
      uVar44 = CONCAT22((short)(uVar44 - 1 >> 0x10),uVar51);
      if (uVar51 == 0) goto code_r0x000140abc6f0;
    }
    lVar47 = lVar47 + lVar49;
    if ((*(ulonglong *)(lVar47 + -0x298) < 2) || (*(float *)(lVar47 + -0x278) <= unaff_XMM15_Da)) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abd1a6;
      pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_14304b2a0);
    }
    cVar26 = *(char *)(lVar47 + -5);
    uVar18 = *(undefined8 *)puVar41[0x4c];
    *(undefined4 *)(puVar41 + 0x1f) = *(undefined4 *)(puVar41 + 0x13);
    puVar41[0x1e] = puVar41[0x12];
    *(bool *)((longlong)ppcVar38 + 0x30) = cVar26 == '\x02';
    *(uint *)((longlong)ppcVar38 + 0x28) = uVar28;
    *(undefined8 **)((longlong)ppcVar38 + 0x20) = puVar41 + 0x1e;
    uVar6 = puVar41[0x10];
    *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abc789;
    pdb_140abdad0(uVar18,lVar12,uVar6,puVar54);
    if (((cVar32 == '\x03') || (((ulonglong)arg0 & 0xff) == 0)) &&
       ((*(byte *)((longlong)puVar41 + 0x147) & 1) != 0)) {
      uVar34 = puVar54[2];
      uVar13 = puVar54[5];
      if (uVar34 <= uVar13) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abd2d9;
        pdb_142dc81f2(uVar13,uVar34,&UNK_143043a80);
      }
      uVar34 = puVar54[1];
      *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abc7dc;
      pdb_140a8e730(uVar13 * 0x30 + uVar34,&UNK_14304b2d0,0xe);
    }
    if (puVar41[0x27] == 0) goto code_r0x000140abc9fc;
    fVar74 = 0.0;
    if (((*(char *)(lVar47 + -9) != '\x01') || (1 < *(uint *)(lVar47 + -0x50))) ||
       (*(float *)(lVar47 + -0x14) <= 0.0)) goto code_r0x000140abc89e;
    lVar23 = *(longlong *)(lVar47 + -0x210);
    if (lVar23 == 0) {
      if (*(int *)(lVar47 + -0x198) != 1) goto code_r0x000140abd471;
      iVar76 = *(int *)(lVar47 + -0x24);
    }
    else {
      iVar77 = *(int *)(*(longlong *)(lVar47 + -0x218) + 4);
      iVar76 = iVar77;
      if (lVar23 == 1) {
        if (*(char *)(lVar47 + -0x198) != '\0') goto code_r0x000140abc86d;
        goto code_r0x000140abd471;
      }
      uVar13 = (lVar23 * 0xc - 0xcU) / 0xc;
      piVar30 = (int *)(*(longlong *)(lVar47 + -0x218) + 0x10);
      piVar21 = piVar30;
      uVar34 = uVar13;
      do {
        iVar3 = *piVar21;
        uVar36 = CONCAT44((uint)(iVar3 >> 0x1f) >> 1,(uint)(iVar76 >> 0x1f) >> 1) ^
                 CONCAT44(iVar3,iVar76);
        if ((int)uVar36 <= (int)(uVar36 >> 0x20)) {
          iVar3 = iVar76;
        }
        iVar76 = iVar3;
        piVar21 = piVar21 + 3;
        uVar34 = uVar34 - 1;
      } while (uVar34 != 0);
      if (*(char *)(lVar47 + -0x198) == '\0') {
code_r0x000140abd471:
        *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abd476;
        pdb_142d8e000();
        goto LAB_140abd477;
      }
      do {
        iVar3 = *piVar30;
        uVar34 = CONCAT44((uint)(iVar3 >> 0x1f) >> 1,(uint)(iVar77 >> 0x1f) >> 1) ^
                 CONCAT44(iVar3,iVar77);
        if ((int)uVar34 <= (int)(uVar34 >> 0x20)) {
          iVar3 = iVar77;
        }
        iVar77 = iVar3;
        piVar30 = piVar30 + 3;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
code_r0x000140abc86d:
    *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abc88f;
    fVar74 = (float)pdb_140de8220(iVar76);
    fVar60 = 0.0;
    if (0.0 <= fVar74) {
      fVar60 = fVar74;
    }
    fVar74 = unaff_XMM6_Da;
    if (fVar60 <= unaff_XMM6_Da) {
      fVar74 = fVar60;
    }
code_r0x000140abc89e:
    uVar34 = puVar54[2];
    uVar13 = puVar54[5];
    if (uVar34 <= uVar13) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abd29d;
      pdb_142dc81f2(uVar13,uVar34,&UNK_143043a80);
    }
    uVar34 = puVar54[1];
    auVar69._4_4_ = unaff_XMM6_Db;
    auVar69._0_4_ = unaff_XMM6_Da;
    auVar69._8_4_ = unaff_XMM6_Dc;
    auVar69._12_4_ = unaff_XMM6_Dd;
    auVar70._4_12_ = auVar69._4_12_;
    auVar70._0_4_ = unaff_XMM6_Da - fVar74;
    *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abc8d4;
    pdb_140a8e730(uVar13 * 0x30 + uVar34,&UNK_14304b298,8,auVar70._0_8_);
    lVar47 = puVar41[0x27];
    uVar34 = *(ulonglong *)(lVar47 + 0x10);
    uVar13 = *(ulonglong *)(lVar47 + 0x28);
    if (uVar34 <= uVar13) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abd2af;
      pdb_142dc81f2(uVar13,uVar34,&UNK_143043a80);
    }
    lVar47 = *(longlong *)(lVar47 + 8);
    *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abc90e;
    pdb_140a8e730(uVar13 * 0x30 + lVar47,&UNK_14304b298,8);
    uVar18 = *(undefined8 *)puVar41[0x4c];
    *(bool *)((longlong)ppcVar38 + 0x30) = cVar26 == '\x02';
    *(uint *)((longlong)ppcVar38 + 0x28) = uVar28;
    *(undefined8 **)((longlong)ppcVar38 + 0x20) = puVar41 + 0x12;
    uVar6 = puVar41[0x10];
    uVar7 = puVar41[0x27];
    *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abc94b;
    pdb_140abdad0(uVar18,lVar12,uVar6,uVar7);
    lVar12 = puVar41[0x27];
    *(undefined4 *)(lVar12 + 0x20) = 1000000000;
    if (*(char *)(lVar12 + 0x34) == '\0') {
      uVar34 = *(ulonglong *)(lVar12 + 0x10);
      uVar13 = *(ulonglong *)(lVar12 + 0x28);
      if (*(char *)(lVar12 + 0x35) != '\0') {
        if (uVar34 <= uVar13) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abd39f;
          pdb_142dc81f2(uVar13,uVar34,&UNK_143043a20);
        }
        lVar12 = *(longlong *)(puVar41[0x27] + 8);
        *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abc9a3;
        pdb_140a8e730(uVar13 * 0x30 + lVar12,&UNK_143043a00,4);
      }
      if (uVar34 <= uVar13) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abd2f1;
        pdb_142dc81f2(uVar13,uVar34,&UNK_143043a38);
      }
      lVar12 = puVar41[0x27];
      lVar47 = *(longlong *)(lVar12 + 8);
      if (*(int *)(lVar47 + uVar13 * 0x30) == 1) {
        *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abc9d9;
        pdb_141808ec0(puVar41 + 0x14,lVar47 + uVar13 * 0x30 + 8);
        if (puVar41[0x14] != -0x7ffffffffffffffc) {
          puVar41[0x24] = puVar41[0x1a];
          puVar41[0x22] = puVar41[0x18];
          puVar41[0x23] = puVar41[0x19];
          puVar41[0x20] = puVar41[0x16];
          puVar41[0x21] = puVar41[0x17];
          puVar41[0x1e] = puVar41[0x14];
          puVar41[0x1f] = puVar41[0x15];
          *(undefined **)((longlong)ppcVar38 + 0x20) = &UNK_143043dc0;
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abd278;
          pdb_142dc8170(&UNK_143044570,0x2b,puVar41 + 0x1e,&UNK_143044530);
        }
        lVar12 = puVar41[0x27];
      }
      *(undefined1 *)(lVar12 + 0x34) = 1;
    }
code_r0x000140abc9fc:
    *(uint *)(puVar54 + 4) = 1000000000;
    unaff_R12 = (ulonglong *)0x1;
    puVar50 = (ulonglong *)(ulonglong)*(byte *)((longlong)puVar41 + 0x147);
    if (*(byte *)((longlong)puVar54 + 0x34) == 0) {
      uVar34 = puVar54[2];
      uVar13 = puVar54[5];
      if (*(byte *)((longlong)puVar54 + 0x35) != 0) {
        if (uVar34 <= uVar13) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abd309;
          pdb_142dc81f2(uVar13,uVar34,&UNK_143043a20);
        }
        uVar36 = puVar54[1];
        *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abca53;
        pdb_140a8e730(uVar13 * 0x30 + uVar36,&UNK_143043a00,4);
      }
      if (uVar34 <= uVar13) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abd2c7;
        pdb_142dc81f2(uVar13,uVar34,&UNK_143043a38);
      }
      uVar34 = puVar54[1];
      if (*(int *)(uVar34 + uVar13 * 0x30) == 1) {
        *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abca82;
        pdb_141808ec0(puVar41 + 0x14,uVar34 + uVar13 * 0x30 + 8);
        if (puVar41[0x14] != -0x7ffffffffffffffc) {
          puVar41[0x24] = puVar41[0x1a];
          puVar41[0x22] = puVar41[0x18];
          puVar41[0x23] = puVar41[0x19];
          puVar41[0x20] = puVar41[0x16];
          puVar41[0x21] = puVar41[0x17];
          puVar41[0x1e] = puVar41[0x14];
          puVar41[0x1f] = puVar41[0x15];
          *(undefined **)((longlong)ppcVar38 + 0x20) = &UNK_143043dc0;
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abd20f;
          pdb_142dc8170(&UNK_143044570,0x2b,puVar41 + 0x1e,&UNK_143044530);
        }
      }
      *(byte *)((longlong)puVar54 + 0x34) = 1;
      puVar50 = (ulonglong *)(ulonglong)*(byte *)((longlong)puVar41 + 0x147);
    }
  }
  goto code_r0x000140abc600;
code_r0x000140abcb87:
  puVar20 = (undefined8 *)puVar41[0x11];
  do {
    if (puVar20 == (undefined8 *)puVar41[0x1d]) {
code_r0x000140abd031:
      if (((ulonglong)unaff_R12 & 1) == 0) {
        *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abd03f;
        pdb_140a87f70(puVar54);
        if (puVar41[0x27] != 0) {
          uVar18 = puVar41[0x27];
          *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abd056;
          pdb_140a87f70(uVar18);
        }
      }
      puVar16 = (ulonglong *)puVar41[4];
      puVar29 = (uint *)puVar41[5];
      arg0 = (ulonglong *)&UNK_14304c7d8;
      ppcVar37 = ppcVar38;
      if (puVar16 == (ulonglong *)0xc) {
        lVar12 = puVar41[-2];
        puVar53 = (ulonglong *)0x0;
        if (lVar12 != 0) {
          pbVar46 = (byte *)puVar41[0x11];
          *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abd08f;
          pub_1406abac0(pbVar46,lVar12 * 0x2c,4);
          puVar53 = extraout_RAX;
        }
        lVar12 = puVar41[1];
        if (lVar12 != 0) {
          pbVar46 = (byte *)puVar41[0xf];
          *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abd0ab;
          pub_1406abac0(pbVar46,lVar12 << 5,8);
          puVar53 = extraout_RAX_00;
        }
        return puVar53;
      }
code_r0x000140abc4d2:
      pbVar46 = (byte *)((longlong)puVar16 + 1);
      puVar41[-9] = pbVar46;
      bVar27 = *(byte *)((longlong)puVar41 + (longlong)puVar16 * 2 + -0x38);
      uVar11 = *(undefined1 *)((longlong)puVar41 + (longlong)puVar16 * 2 + -0x37);
      *(byte *)((longlong)puVar41 + 0x136) = bVar27;
      *(undefined1 *)((longlong)puVar41 + 0x137) = uVar11;
      puVar53 = (ulonglong *)(ulonglong)bVar27;
      if ((ulonglong *)0x9 < (ulonglong *)(ulonglong)bVar27) {
        puVar41[0x1e] = (longlong)puVar41 + 0x136;
        puVar41[0x1f] = pdb_140ac81d0;
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)ppcVar37 + -8) = 0x140abd46e;
        pdb_142dc83d0(&UNK_14304b2de,puVar41 + 0x1e,&UNK_14304b338);
      }
code_r0x000140abc4fe:
      uVar28 = *(uint *)((longlong)arg0 + (longlong)puVar53 * 4);
      puVar41[4] = pbVar46;
                    /* WARNING: Could not recover jumptable at 0x000140abc509. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar53 = (ulonglong *)(*(code *)((longlong)(int)uVar28 + (longlong)arg0))(puVar29);
      return puVar53;
    }
    if ((uVar33 < 9) && (uVar33 != 5)) {
      while( true ) {
        puVar43 = (undefined8 *)((longlong)puVar20 + 0x2c);
        *(undefined4 *)(puVar41 + 0x1c) = *(undefined4 *)(puVar20 + 1);
        puVar41[0x1b] = *puVar20;
        if ((*(char *)(puVar20 + 5) == cVar32) &&
           (*(char *)((longlong)puVar20 + 0x29) == *(char *)((longlong)puVar41 + 0x147))) break;
        puVar20 = puVar43;
        if (puVar43 == (undefined8 *)puVar41[0x1d]) goto code_r0x000140abd031;
      }
      uVar34 = puVar54[2];
      uVar13 = puVar54[5];
      if (uVar34 <= uVar13) {
code_r0x000140abd333:
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abd33f;
        pdb_142dc81f2(uVar13,uVar34,&UNK_143043a80);
      }
    }
    else {
      while( true ) {
        *(undefined4 *)(puVar41 + 0x1c) = *(undefined4 *)(puVar20 + 1);
        puVar41[0x1b] = *puVar20;
        if (*(char *)(puVar20 + 5) == cVar32) break;
        puVar20 = (undefined8 *)((longlong)puVar20 + 0x2c);
        if (puVar20 == (undefined8 *)puVar41[0x1d]) goto code_r0x000140abd031;
      }
      puVar43 = (undefined8 *)((longlong)puVar20 + 0x2c);
      uVar34 = puVar54[2];
      uVar13 = puVar54[5];
      if (uVar34 <= uVar13) goto code_r0x000140abd333;
    }
    uVar4 = *(undefined4 *)((longlong)puVar20 + 0xc);
    uVar5 = *(undefined4 *)(puVar20 + 2);
    fVar74 = *(float *)((longlong)puVar20 + 0x24);
    uVar34 = puVar54[1];
    *(undefined4 *)(puVar41 + 0x1f) = *(undefined4 *)(puVar41 + 0x1c);
    puVar41[0x1e] = puVar41[0x1b];
    *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abcc60;
    pdb_140a8e190(uVar13 * 0x30 + uVar34,puVar41 + 0x1e);
    uVar34 = puVar54[2];
    uVar13 = puVar54[5];
    if (uVar34 <= uVar13) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abd351;
      pdb_142dc81f2(uVar13,uVar34,&UNK_143043a80);
    }
    uVar34 = puVar54[1];
    *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abcc94;
    pdb_140a8e730(uVar13 * 0x30 + uVar34,&UNK_14304b4a8,8);
    uVar34 = puVar54[2];
    uVar13 = puVar54[5];
    if (uVar34 <= uVar13) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abd363;
      pdb_142dc81f2(uVar13,uVar34,&UNK_143043a80);
    }
    uVar34 = puVar54[1];
    *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abccc9;
    pdb_140a8e730(uVar13 * 0x30 + uVar34,&UNK_14304b468,0xc,uVar5);
    uVar34 = puVar54[2];
    uVar13 = puVar54[5];
    if (uVar34 <= uVar13) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abd375;
      pdb_142dc81f2(uVar13,uVar34,&UNK_143043a80);
    }
    uVar34 = puVar54[1];
    *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abccfd;
    pdb_140a8e730(uVar13 * 0x30 + uVar34,&UNK_14304b4b0,0xe);
    uVar34 = puVar54[2];
    uVar13 = puVar54[5];
    if (uVar34 <= uVar13) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abd387;
      pdb_142dc81f2(uVar13,uVar34,&UNK_143043a80);
    }
    uVar34 = puVar54[1];
    *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abcd32;
    pdb_140a8e730(uVar13 * 0x30 + uVar34,&UNK_14304b027,0xd,uVar4);
    uVar34 = puVar54[2];
    uVar13 = puVar54[5];
    if (uVar34 <= uVar13) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abd31b;
      pdb_142dc81f2(uVar13,uVar34,&UNK_143043a80);
    }
    uVar34 = puVar54[1];
    *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abcd66;
    pdb_140a8e730(uVar13 * 0x30 + uVar34,&UNK_14304b120,0xe);
    uVar34 = puVar54[2];
    uVar13 = puVar54[5];
    if (uVar34 <= uVar13) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abd32d;
      pdb_142dc81f2(uVar13,uVar34,&UNK_143043a80);
    }
    uVar34 = puVar54[1];
    *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abcd99;
    pdb_140a8e730(uVar13 * 0x30 + uVar34,&UNK_14304b4be,10);
    if (puVar41[0x27] != 0) {
      uVar34 = puVar54[2];
      uVar13 = puVar54[5];
      if (uVar34 <= uVar13) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abd3b1;
        pdb_142dc81f2(uVar13,uVar34,&UNK_143043a80);
      }
      uVar34 = puVar54[1];
      auVar71._4_4_ = unaff_XMM6_Db;
      auVar71._0_4_ = unaff_XMM6_Da;
      auVar71._8_4_ = unaff_XMM6_Dc;
      auVar71._12_4_ = unaff_XMM6_Dd;
      auVar72._4_12_ = auVar71._4_12_;
      auVar72._0_4_ = unaff_XMM6_Da - fVar74;
      *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abcddf;
      pdb_140a8e730(uVar13 * 0x30 + uVar34,&UNK_14304b298,8,auVar72._0_8_);
      lVar12 = puVar41[0x27];
      uVar34 = *(ulonglong *)(lVar12 + 0x10);
      uVar13 = *(ulonglong *)(lVar12 + 0x28);
      if (uVar34 <= uVar13) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abd3c3;
        pdb_142dc81f2(uVar13,uVar34,&UNK_143043a80);
      }
      lVar12 = *(longlong *)(lVar12 + 8);
      *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abce1a;
      pdb_140a8e730(uVar13 * 0x30 + lVar12,&UNK_14304b298,8);
      lVar12 = puVar41[0x27];
      uVar34 = *(ulonglong *)(lVar12 + 0x10);
      uVar13 = *(ulonglong *)(lVar12 + 0x28);
      if (uVar34 <= uVar13) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abd3d5;
        pdb_142dc81f2(uVar13,uVar34,&UNK_143043a80);
      }
      lVar12 = *(longlong *)(lVar12 + 8);
      *(undefined4 *)(puVar41 + 0x1f) = *(undefined4 *)(puVar41 + 0x1c);
      puVar41[0x1e] = puVar41[0x1b];
      *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abce65;
      pdb_140a8e190(uVar13 * 0x30 + lVar12,puVar41 + 0x1e);
      lVar12 = puVar41[0x27];
      uVar34 = *(ulonglong *)(lVar12 + 0x10);
      uVar13 = *(ulonglong *)(lVar12 + 0x28);
      if (uVar34 <= uVar13) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abd3e7;
        pdb_142dc81f2(uVar13,uVar34,&UNK_143043a80);
      }
      lVar12 = *(longlong *)(lVar12 + 8);
      *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abcea0;
      pdb_140a8e730(uVar13 * 0x30 + lVar12,&UNK_14304b4a8,8);
      lVar12 = puVar41[0x27];
      uVar34 = *(ulonglong *)(lVar12 + 0x10);
      uVar13 = *(ulonglong *)(lVar12 + 0x28);
      if (uVar34 <= uVar13) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abd3f9;
        pdb_142dc81f2(uVar13,uVar34,&UNK_143043a80);
      }
      lVar12 = *(longlong *)(lVar12 + 8);
      *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abcedc;
      pdb_140a8e730(uVar13 * 0x30 + lVar12,&UNK_14304b468,0xc,uVar5);
      lVar12 = puVar41[0x27];
      uVar34 = *(ulonglong *)(lVar12 + 0x10);
      uVar13 = *(ulonglong *)(lVar12 + 0x28);
      if (uVar34 <= uVar13) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abd408;
        pdb_142dc81f2(uVar13,uVar34,&UNK_143043a80);
      }
      lVar12 = *(longlong *)(lVar12 + 8);
      *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abcf17;
      pdb_140a8e730(uVar13 * 0x30 + lVar12,&UNK_14304b4b0,0xe);
      lVar12 = puVar41[0x27];
      uVar34 = *(ulonglong *)(lVar12 + 0x10);
      uVar13 = *(ulonglong *)(lVar12 + 0x28);
      if (uVar34 <= uVar13) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abd417;
        pdb_142dc81f2(uVar13,uVar34,&UNK_143043a80);
      }
      lVar12 = *(longlong *)(lVar12 + 8);
      *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abcf53;
      pdb_140a8e730(uVar13 * 0x30 + lVar12,&UNK_14304b027,0xd,uVar4);
      lVar12 = puVar41[0x27];
      uVar34 = *(ulonglong *)(lVar12 + 0x10);
      uVar13 = *(ulonglong *)(lVar12 + 0x28);
      if (uVar34 <= uVar13) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abd426;
        pdb_142dc81f2(uVar13,uVar34,&UNK_143043a80);
      }
      lVar12 = *(longlong *)(lVar12 + 8);
      *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abcf8e;
      pdb_140a8e730(uVar13 * 0x30 + lVar12,&UNK_14304b120,0xe);
      lVar12 = puVar41[0x27];
      uVar34 = *(ulonglong *)(lVar12 + 0x10);
      uVar13 = *(ulonglong *)(lVar12 + 0x28);
      if (uVar34 <= uVar13) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abd435;
        pdb_142dc81f2(uVar13,uVar34,&UNK_143043a80);
      }
      lVar12 = *(longlong *)(lVar12 + 8);
      *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abcfc8;
      pdb_140a8e730(uVar13 * 0x30 + lVar12,&UNK_14304b4be,10);
      uVar18 = puVar41[0x27];
      *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abcfd5;
      pdb_140a87e10(uVar18);
    }
    unaff_R12 = (ulonglong *)0x1;
    *(undefined8 *)((longlong)ppcVar38 + -8) = 0x140abcfe1;
    pdb_140a87e10(puVar54);
    puVar20 = puVar43;
  } while( true );
LAB_140abad44:
  if (bStack_91 == 2) {
    *puStack_e0 = uStack_98;
    apcStack_218[1] = (char *)0x140abad68;
    pdb_140a87f70(uStack_a0);
  }
  else {
    auStack_188[0] = (undefined4)uStack_130;
    uStack_190 = uStack_138;
    *puStack_e0 = uStack_98;
    apcStack_218[1] = (char *)0x140abad97;
    pdb_140a87e10(uStack_a0);
    uVar34 = *(ulonglong *)(uStack_a0 + 0x28);
    if (*(ulonglong *)(uStack_a0 + 0x10) <= uVar34) {
                    /* WARNING: Subroutine does not return */
      apcStack_218[1] = (char *)0x140abb0e1;
      pdb_142dc81f2(uVar34,*(ulonglong *)(uStack_a0 + 0x10),&UNK_143043a80);
    }
    apcStack_218[1] = (char *)0x140abadc5;
    pdb_140a8e190(uVar34 * 0x30 + *(longlong *)(uStack_a0 + 8),&uStack_190);
    fVar74 = unaff_XMM6_Da / *(float *)(uStack_168 + 0x58);
    apcStack_218[1] = (char *)0x140abade2;
    fVar60 = (float)pdb_140de8220();
    unaff_XMM6_Da = _DAT_142e36f28;
    uVar34 = *(ulonglong *)(uStack_a0 + 0x28);
    if (*(ulonglong *)(uStack_a0 + 0x10) <= uVar34) {
                    /* WARNING: Subroutine does not return */
      apcStack_218[1] = (char *)0x140abb0f0;
      pdb_142dc81f2(uVar34,*(ulonglong *)(uStack_a0 + 0x10),&UNK_143043a80);
    }
    auVar63 = ZEXT812(0);
    if (0.0 <= fVar60) {
      auVar63._4_8_ = 0;
      auVar63._0_4_ = fVar60;
    }
    in_XMM1._12_4_ = 0;
    in_XMM1._0_12_ = auVar63;
    apcStack_218[1] = (char *)0x140abae2f;
    fVar60 = unaff_XMM6_Db;
    pdb_140a8e730(uVar34 * 0x30 + *(longlong *)(uStack_a0 + 8),&UNK_14304b027,0xd);
    uVar34 = *(ulonglong *)(uStack_a0 + 0x28);
    if (*(ulonglong *)(uStack_a0 + 0x10) <= uVar34) {
                    /* WARNING: Subroutine does not return */
      apcStack_218[1] = (char *)0x140abb10e;
      pdb_142dc81f2(uVar34,*(ulonglong *)(uStack_a0 + 0x10),&UNK_143043a80);
    }
    if ((bStack_91 & 1) == 0) {
      unaff_XMM6_Da = 0.0;
    }
    unaff_XMM6_Dd = 0;
    unaff_XMM6_Dc = 0;
    unaff_XMM6_Db = 0.0;
    in_XMM3 = ZEXT416((uint)unaff_XMM6_Da);
    apcStack_218[1] = (char *)0x140abae75;
    pdb_140a8e730(uVar34 * 0x30 + *(longlong *)(uStack_a0 + 8),&UNK_14304b034,8);
  }
  if ((uStack_128 & 1) == 0) {
    *puStack_e0 = uStack_98;
    apcStack_218[1] = (char *)0x140abaef9;
    pdb_140a87f70(uStack_a0 + 0x38);
  }
  else {
    uStack_198 = (undefined4)uStack_140;
    uStack_1a0 = uStack_148;
    *puStack_e0 = uStack_98;
    apcStack_218[1] = (char *)0x140abaea9;
    pdb_140a87e10(uStack_a0 + 0x38);
    uVar34 = *(ulonglong *)(uStack_a0 + 0x60);
    if (*(ulonglong *)(uStack_a0 + 0x48) <= uVar34) {
                    /* WARNING: Subroutine does not return */
      apcStack_218[1] = (char *)0x140abb0ff;
      pdb_142dc81f2(uVar34,*(ulonglong *)(uStack_a0 + 0x48),&UNK_143043a80);
    }
    apcStack_218[1] = (char *)0x140abaed7;
    pdb_140a8e190(uVar34 * 0x30 + *(longlong *)(uStack_a0 + 0x40),&uStack_1a0);
  }
  if ((uStack_120 & 1) == 0) {
    *puStack_e0 = uStack_98;
    apcStack_218[1] = (char *)0x140abaf83;
    puVar17 = (ulonglong *)pdb_140a87f70(uStack_a0 + 0x70);
  }
  else {
    uStack_1a8 = (undefined4)uStack_150;
    uStack_1b0 = uStack_158;
    *puStack_e0 = uStack_98;
    apcStack_218[1] = (char *)0x140abaf2d;
    pdb_140a87e10(uStack_a0 + 0x70);
    uVar34 = *(ulonglong *)(uStack_a0 + 0x98);
    if (*(ulonglong *)(uStack_a0 + 0x80) <= uVar34) {
                    /* WARNING: Subroutine does not return */
      apcStack_218[1] = (char *)0x140abb11d;
      pdb_142dc81f2(uVar34,*(ulonglong *)(uStack_a0 + 0x80),&UNK_143043a80);
    }
    apcStack_218[1] = (char *)0x140abaf61;
    puVar17 = (ulonglong *)
              pdb_140a8e190(uVar34 * 0x30 + *(longlong *)(uStack_a0 + 0x78),&uStack_1b0);
  }
  if (cStack_92 != '\0') {
    apcStack_218[1] = (char *)0x140abaf92;
    puVar17 = (ulonglong *)pdb_140e97000();
    if ((char)puVar17[0xd] != '\x01') {
      apcStack_218[1] = (char *)0x140abb09b;
      puVar17 = (ulonglong *)pdb_142d8ec20(puVar17,0);
      if (puVar17 == (ulonglong *)0x0) goto LAB_140abb0a4;
    }
    if (*puVar17 != 0) {
LAB_140abb070:
      apcStack_218[1] = (char *)0x140abb07c;
      plVar15 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_140abb07c:
      apcStack_218[1] = (char *)0x140abb086;
      plVar15 = (longlong *)pdb_142d8ec20(plVar15,0);
      if (plVar15 == (longlong *)0x0) {
LAB_140abb0a4:
        apcStack_218[1] = (char *)0x140abb0b0;
        pdb_142dc7890(&UNK_143326860);
code_r0x000140abb0b1:
        apcStack_218[1] = (char *)0x140abb0c0;
        pdb_142dc7e2a(1,0x18);
LAB_140abb11e:
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      goto LAB_140aba5a7;
    }
    *puVar17 = 0xffffffffffffffff;
    apcStack_218[1] = (char *)0x140abafc1;
    puStack_a8 = puVar17;
    pdb_140e95370(puVar17 + 1,uStack_160);
    *puStack_a8 = *puStack_a8 + 1;
    puVar17 = puStack_a8;
  }
  return puVar17;
}

