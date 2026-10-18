// VA 0x1407f9e20, PDB extent 3186 bytes
// system_wall_constructor::construct_platform_stairs::maintain_wooden_stair_drawables
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_platform_stairs/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_platform_stairs::maintain_wooden_stair_drawables
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_platform_stairs/mod.rs
   Extent: 3186 */

void pdb_1407f9e20(undefined8 param_1,longlong *param_2,byte *param_3,undefined8 *param_4,
                  longlong param_5,undefined8 *param_6,longlong param_7,longlong param_8,
                  longlong *param_9,undefined1 *param_10)

{
  undefined8 *puVar1;
  longlong *plVar2;
  byte *pbVar3;
  undefined1 (*pauVar4) [16];
  uint uVar5;
  undefined8 uVar6;
  char cVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  int *piVar14;
  longlong lVar15;
  byte *pbVar16;
  longlong lVar17;
  byte *arg0;
  byte bVar18;
  byte *pbVar19;
  char *pcVar20;
  int iVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  ushort uVar25;
  ulonglong uVar26;
  undefined1 uVar27;
  longlong *plVar28;
  ulonglong uVar29;
  byte *pbVar30;
  bool bVar31;
  byte bVar32;
  undefined1 auVar33 [16];
  longlong lVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  byte *pbStack_178;
  longlong *plStack_170;
  byte *pbStack_160;
  longlong *plStack_158;
  byte *pbStack_150;
  longlong lStack_148;
  byte *pbStack_140;
  ulonglong uStack_138;
  undefined8 uStack_130;
  longlong lStack_128;
  byte *pbStack_120;
  longlong *plStack_118;
  longlong *plStack_110;
  longlong lStack_108;
  longlong *plStack_100;
  byte *pbStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  undefined7 uStack_e0;
  undefined1 uStack_d9;
  undefined7 uStack_d8;
  undefined1 uStack_d1;
  undefined7 uStack_d0;
  undefined1 uStack_c9;
  undefined7 uStack_c8;
  undefined1 uStack_c1;
  undefined7 uStack_c0;
  undefined1 uStack_b9;
  undefined7 uStack_b8;
  undefined1 uStack_b1;
  undefined7 uStack_b0;
  undefined1 uStack_a9;
  undefined7 uStack_a8;
  undefined1 uStack_a1;
  undefined7 uStack_a0;
  undefined1 uStack_99;
  undefined7 uStack_98;
  undefined1 uStack_91;
  int iStack_90;
  undefined3 uStack_8c;
  byte *pbStack_88;
  byte *pbStack_80;
  byte *pbStack_78;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  pbStack_160 = param_3;
  pbStack_150 = param_3;
  uStack_130 = param_1;
  pbStack_f8 = param_3;
  uVar9 = pdb_1400af0a0(param_8 + 0x20,&pbStack_160);
  pdb_140269750(&pbStack_e8,param_8,uVar9,&pbStack_160);
  pbStack_e8 = (byte *)CONCAT17(uStack_d9,uStack_e0);
  pbVar16 = (byte *)-(longlong)pbStack_e8;
  if (!SBORROW8(0,(longlong)pbStack_e8)) {
    pbStack_88 = (byte *)CONCAT17(uStack_d1,uStack_d8);
    pbStack_80 = (byte *)CONCAT17(uStack_c9,uStack_d0);
  }
  uStack_e0 = SUB87(pbStack_88,0);
  uStack_d9 = (undefined1)((ulonglong)pbStack_88 >> 0x38);
  uStack_d8 = SUB87(pbStack_80,0);
  uStack_d1 = (undefined1)((ulonglong)pbStack_80 >> 0x38);
  uStack_d0 = 0;
  uStack_c9 = 0;
  uStack_b0 = 0;
  uStack_a9 = 0;
  pbVar3 = (byte *)*param_2;
  plStack_100 = (longlong *)param_2[1];
  plVar28 = (longlong *)param_2[2];
  lStack_148 = param_2[3];
  arg0 = (byte *)0x0;
LAB_1407f9ef5:
  uStack_138 = (longlong)pbVar16 * 8;
  pbVar30 = arg0;
  pbStack_140 = pbVar16;
  while (pbVar19 = pbVar30, arg0 != (byte *)0x0) {
    if (pbVar30 == pbStack_f0) {
      lVar12 = 0;
joined_r0x0001407f9f7a:
      if (pbStack_140 != (byte *)0x0) {
        pub_1406abac0(arg0,uStack_138,8);
      }
      uStack_d0 = 0;
      uStack_c9 = 0;
      if ((int)lVar12 == 0) break;
      arg0 = (byte *)0x0;
    }
    else {
      pbVar19 = pbVar30 + 8;
      uStack_c8 = SUB87(pbVar19,0);
      uStack_c1 = (undefined1)((ulonglong)pbVar19 >> 0x38);
      lVar12 = *(longlong *)pbVar30;
      if ((int)lVar12 == 0) goto joined_r0x0001407f9f7a;
    }
    if ((int)lVar12 == 0) goto LAB_1407fa0a2;
LAB_1407fa02d:
    cVar7 = pdb_140ed63a0(pbVar3,lVar12);
    pbVar30 = pbVar19;
    if (cVar7 != '\0') {
      plStack_118 = plStack_100;
      lStack_108 = lStack_148;
      lStack_128 = lVar12;
      pbStack_120 = pbVar3;
      plStack_110 = plVar28;
      pdb_140f04aa0(&lStack_128,&UNK_143006470);
    }
  }
  pbVar16 = pbStack_e8;
  if (pbStack_e8 == (byte *)0x8000000000000001) goto LAB_1407f9fc2;
  arg0 = (byte *)CONCAT17(uStack_d9,uStack_e0);
  pbStack_e8 = (byte *)0x8000000000000000;
  if (!SBORROW8(0,(longlong)pbVar16)) {
    pbStack_f0 = arg0 + CONCAT17(uStack_d1,uStack_d8) * 8;
    uStack_d0 = uStack_e0;
    uStack_c9 = uStack_d9;
    uStack_c8 = uStack_e0;
    uStack_c1 = uStack_d9;
    uStack_c0 = SUB87(pbVar16,0);
    uStack_b9 = (undefined1)((ulonglong)pbVar16 >> 0x38);
    uStack_b8 = SUB87(pbStack_f0,0);
    uStack_b1 = (undefined1)((ulonglong)pbStack_f0 >> 0x38);
    goto LAB_1407f9ef5;
  }
LAB_1407f9fc2:
  if ((byte *)CONCAT17(uStack_a9,uStack_b0) != (byte *)0x0) {
    plVar2 = (longlong *)CONCAT17(uStack_a1,uStack_a8);
    if (plVar2 == (longlong *)CONCAT17(uStack_91,uStack_98)) {
      lVar12 = 0;
LAB_1407fa001:
      if (CONCAT17(uStack_99,uStack_a0) != 0) {
        pub_1406abac0((byte *)CONCAT17(uStack_a9,uStack_b0),CONCAT17(uStack_99,uStack_a0) << 3,8);
      }
      uStack_b0 = 0;
      uStack_a9 = 0;
      iVar21 = (int)lVar12;
    }
    else {
      uStack_a8 = SUB87(plVar2 + 1,0);
      uStack_a1 = (undefined1)((ulonglong)(plVar2 + 1) >> 0x38);
      lVar12 = *plVar2;
      iVar21 = (int)lVar12;
      if (iVar21 == 0) goto LAB_1407fa001;
    }
    arg0 = (byte *)0x0;
    if (iVar21 != 0) goto LAB_1407fa02d;
LAB_1407fa0a2:
    if ((-0x7fffffffffffffff < (longlong)pbStack_e8) && (pbStack_e8 != (byte *)0x0)) {
      pub_1406abac0((byte *)CONCAT17(uStack_d9,uStack_e0),(longlong)pbStack_e8 << 3,8);
    }
    if ((arg0 != (byte *)0x0) && (CONCAT17(uStack_b9,uStack_c0) != 0)) {
      pub_1406abac0(arg0,CONCAT17(uStack_b9,uStack_c0) << 3,8);
    }
    if (((byte *)CONCAT17(uStack_a9,uStack_b0) != (byte *)0x0) &&
       (CONCAT17(uStack_99,uStack_a0) != 0)) {
      pub_1406abac0((byte *)CONCAT17(uStack_a9,uStack_b0),CONCAT17(uStack_99,uStack_a0) << 3,8);
    }
  }
  uVar6 = _UNK_142e4e658;
  uVar9 = _DAT_142e4e650;
  puVar11 = param_4 + param_5 * 10;
  pbStack_88 = (byte *)0x0;
  pbStack_80 = (byte *)0x8;
  pbStack_78 = (byte *)0x0;
  if (plStack_100 != (longlong *)0x0) {
    plVar28 = plStack_100;
  }
  for (; param_4 != puVar11; param_4 = param_4 + 10) {
    uStack_61 = 1;
    uVar8 = pdb_1409012c0(*(undefined4 *)(param_4 + 6));
    uStack_61 = 1;
    pdb_1408fd550(&pbStack_160,uVar8);
    pbStack_178 = pbStack_160;
    plStack_170 = plStack_158;
    uStack_61 = 1;
    pdb_14007ee60();
    pbStack_120 = pbStack_178;
    plStack_118 = plStack_170;
    uVar10 = param_4[9];
    uStack_99 = (undefined1)param_4[8];
    uStack_98 = (undefined7)((ulonglong)param_4[8] >> 8);
    uStack_91 = (undefined1)uVar10;
    iStack_90 = (int)((ulonglong)uVar10 >> 8);
    uStack_8c = (undefined3)((ulonglong)uVar10 >> 0x28);
    uStack_a9 = (undefined1)param_4[6];
    uStack_a8 = (undefined7)((ulonglong)param_4[6] >> 8);
    uStack_a1 = (undefined1)param_4[7];
    uStack_a0 = (undefined7)((ulonglong)param_4[7] >> 8);
    uStack_b9 = (undefined1)param_4[4];
    uStack_b8 = (undefined7)((ulonglong)param_4[4] >> 8);
    uStack_b1 = (undefined1)param_4[5];
    uStack_b0 = (undefined7)((ulonglong)param_4[5] >> 8);
    uStack_c9 = (undefined1)param_4[2];
    uStack_c8 = (undefined7)((ulonglong)param_4[2] >> 8);
    uStack_c1 = (undefined1)param_4[3];
    uStack_c0 = (undefined7)((ulonglong)param_4[3] >> 8);
    uStack_d9 = (undefined1)*param_4;
    uStack_d8 = (undefined7)((ulonglong)*param_4 >> 8);
    uStack_d1 = (undefined1)param_4[1];
    uStack_d0 = (undefined7)((ulonglong)param_4[1] >> 8);
    uStack_61 = 1;
    uVar10 = pdb_140ed5970(pbVar3);
    lVar12 = plVar28[2];
    if ((ulonglong)(*plVar28 - lVar12) < 200) {
      uStack_61 = 1;
      pdb_142d7f1b0(plVar28,lVar12,200,1,1);
    }
    pbVar16 = pbStack_78;
    lVar34 = plVar28[1];
    *(code **)(lVar34 + lVar12) = pdb_141414080;
    puVar1 = (undefined8 *)(lVar34 + 8 + lVar12);
    *puVar1 = uVar9;
    puVar1[1] = uVar6;
    *(undefined8 *)(lVar34 + 0x18 + lVar12) = 0;
    *(undefined4 *)(lVar34 + 0x20 + lVar12) = 0;
    *(undefined8 *)(lVar34 + 0x24 + lVar12) = 0x3f8000003f800000;
    *(undefined4 *)(lVar34 + 0x2c + lVar12) = 0x3f800000;
    plVar2 = (longlong *)(lVar34 + 0x30 + lVar12);
    *plVar2 = lStack_128;
    plVar2[1] = (longlong)pbStack_120;
    *(longlong **)(lVar34 + 0x40 + lVar12) = plStack_118;
    *(undefined1 *)(lVar34 + 0x48 + lVar12) = 0x16;
    plVar2 = (longlong *)(lVar34 + 0x49 + lVar12);
    *plVar2 = (longlong)pbStack_e8;
    plVar2[1] = CONCAT17(uStack_d9,uStack_e0);
    puVar1 = (undefined8 *)(lVar34 + 0x59 + lVar12);
    *puVar1 = CONCAT17(uStack_d1,uStack_d8);
    puVar1[1] = CONCAT17(uStack_c9,uStack_d0);
    puVar1 = (undefined8 *)(lVar34 + 0x69 + lVar12);
    *puVar1 = CONCAT17(uStack_c1,uStack_c8);
    puVar1[1] = CONCAT17(uStack_b9,uStack_c0);
    puVar1 = (undefined8 *)(lVar34 + 0x79 + lVar12);
    *puVar1 = CONCAT17(uStack_b1,uStack_b8);
    puVar1[1] = CONCAT17(uStack_a9,uStack_b0);
    puVar1 = (undefined8 *)(lVar34 + 0x89 + lVar12);
    *puVar1 = CONCAT17(uStack_a1,uStack_a8);
    puVar1[1] = CONCAT17(uStack_99,uStack_a0);
    puVar1 = (undefined8 *)(lVar34 + 0x98 + lVar12);
    *puVar1 = CONCAT71(uStack_98,uStack_99);
    puVar1[1] = CONCAT35(uStack_8c,CONCAT41(iStack_90,uStack_91));
    *(byte **)(lVar34 + 0xa8 + lVar12) = pbStack_f8;
    *(undefined1 *)(lVar34 + 0xb0 + lVar12) = 3;
    *(undefined8 *)(lVar34 + 0xb8 + lVar12) = uVar10;
    plVar28[2] = lVar12 + 200;
    if (pbStack_78 == pbStack_88) {
      uStack_61 = 1;
      pdb_142db0920(&pbStack_88);
    }
    *(undefined8 *)(pbStack_80 + (longlong)pbVar16 * 8) = uVar10;
    pbStack_78 = pbVar16 + 1;
  }
  if (pbStack_78 == (byte *)0x0) {
    uVar29 = CONCAT71((int7)((ulonglong)plVar28 >> 8),1);
  }
  else {
    uStack_d8 = SUB87(pbStack_78,0);
    uStack_d1 = (undefined1)((ulonglong)pbStack_78 >> 0x38);
    pbStack_e8 = pbStack_88;
    uStack_e0 = SUB87(pbStack_80,0);
    uStack_d9 = (undefined1)((ulonglong)pbStack_80 >> 0x38);
    uStack_61 = 0;
    pdb_1414070f0(&lStack_128,param_8,pbStack_f8,&pbStack_e8);
    if ((!SBORROW8(0,lStack_128)) && (lStack_128 != 0)) {
      pub_1406abac0(pbStack_120,lStack_128 << 3,8);
    }
    uVar29 = 0;
  }
  uVar27 = (undefined1)uVar29;
  uStack_61 = uVar27;
  puVar11 = (undefined8 *)pdb_1413e4400(uStack_130,&UNK_1433056b0);
  if ((puVar11 == (undefined8 *)0x0) ||
     (uStack_61 = uVar27, lVar12 = (**(code **)(puVar11[1] + 0x18))(*puVar11), pbVar16 = pbStack_f8,
     lVar12 == 0)) {
    uStack_61 = uVar27;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_1430065b8);
  }
  if (param_7 == 0) {
    uVar9 = pdb_1400af0a0(param_9 + 4,&pbStack_150);
    uStack_61 = uVar27;
    pdb_140269b90(&pbStack_e8,param_9,uVar9,&pbStack_150);
    pbStack_e8 = (byte *)CONCAT17(uStack_d9,uStack_e0);
    uStack_e0 = uStack_d8;
    uStack_d9 = uStack_d1;
    if (pbStack_e8 != (byte *)0x0) {
      uStack_61 = uVar27;
      pdb_1413ff1c0(&pbStack_e8);
    }
LAB_1407fa6e7:
    if (((char)uVar29 != '\0') && (pbStack_88 != (byte *)0x0)) {
      pub_1406abac0(pbStack_80,(longlong)pbStack_88 << 3,8);
    }
    return;
  }
  pbStack_e8 = pbStack_f8;
  uVar13 = pdb_1400af0a0(param_9 + 4);
  lVar34 = *param_9;
  bVar18 = (byte)(uVar13 >> 0x38);
  bVar32 = bVar18 >> 1;
  auVar33 = ZEXT216(CONCAT11(bVar32,bVar32));
  auVar33 = pshuflw(auVar33,auVar33,0);
  lVar17 = 0;
  uVar22 = uVar13;
  while( true ) {
    uVar22 = uVar22 & param_9[1];
    pcVar20 = (char *)(lVar34 + uVar22);
    auVar36[0] = -(*pcVar20 == auVar33[0]);
    auVar36[1] = -(pcVar20[1] == auVar33[1]);
    auVar36[2] = -(pcVar20[2] == auVar33[2]);
    auVar36[3] = -(pcVar20[3] == auVar33[3]);
    auVar36[4] = -(pcVar20[4] == auVar33[4]);
    auVar36[5] = -(pcVar20[5] == auVar33[5]);
    auVar36[6] = -(pcVar20[6] == auVar33[6]);
    auVar36[7] = -(pcVar20[7] == auVar33[7]);
    auVar36[8] = -(pcVar20[8] == auVar33[0]);
    auVar36[9] = -(pcVar20[9] == auVar33[1]);
    auVar36[10] = -(pcVar20[10] == auVar33[2]);
    auVar36[0xb] = -(pcVar20[0xb] == auVar33[3]);
    auVar36[0xc] = -(pcVar20[0xc] == auVar33[4]);
    auVar36[0xd] = -(pcVar20[0xd] == auVar33[5]);
    auVar36[0xe] = -(pcVar20[0xe] == auVar33[6]);
    auVar36[0xf] = -(pcVar20[0xf] == auVar33[7]);
    uVar25 = (ushort)(SUB161(auVar36 >> 7,0) & 1) | (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe | (ushort)(auVar36[0xf] >> 7) << 0xf;
    uVar23 = (uint)uVar25;
    while (uVar25 != 0) {
      uVar24 = 0;
      for (uVar5 = uVar23; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
        uVar24 = uVar24 + 1;
      }
      uVar26 = uVar24 + uVar22 & param_9[1];
      if (*(byte **)(lVar34 + -0x18 + uVar26 * -0x18) == pbVar16) {
        lVar34 = *(longlong *)(lVar34 + uVar26 * -0x18 + -8);
        goto joined_r0x0001407fa4ea;
      }
      uVar25 = (ushort)(uVar23 - 1) & (ushort)uVar23;
      uVar23 = CONCAT22((short)(uVar23 - 1 >> 0x10),uVar25);
    }
    auVar35[0] = -(*pcVar20 == -1);
    auVar35[1] = -(pcVar20[1] == -1);
    auVar35[2] = -(pcVar20[2] == -1);
    auVar35[3] = -(pcVar20[3] == -1);
    auVar35[4] = -(pcVar20[4] == -1);
    auVar35[5] = -(pcVar20[5] == -1);
    auVar35[6] = -(pcVar20[6] == -1);
    auVar35[7] = -(pcVar20[7] == -1);
    auVar35[8] = -(pcVar20[8] == -1);
    auVar35[9] = -(pcVar20[9] == -1);
    auVar35[10] = -(pcVar20[10] == -1);
    auVar35[0xb] = -(pcVar20[0xb] == -1);
    auVar35[0xc] = -(pcVar20[0xc] == -1);
    auVar35[0xd] = -(pcVar20[0xd] == -1);
    auVar35[0xe] = -(pcVar20[0xe] == -1);
    auVar35[0xf] = -(pcVar20[0xf] == -1);
    uVar25 = (ushort)(SUB161(auVar35 >> 7,0) & 1) | (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe | (ushort)(auVar35[0xf] >> 7) << 0xf;
    if (uVar25 != 0) break;
    uVar22 = uVar22 + lVar17 + 0x10;
    lVar17 = lVar17 + 0x10;
  }
  if (param_9[2] == 0) {
    uStack_61 = uVar27;
    pdb_142dd97b0(param_9,1,param_9 + 4,CONCAT71((uint7)(byte)(uVar25 >> 8),1));
  }
  pdb_14007ee60();
  pbVar16 = pub_1406abab0(0x20,8);
  if (pbVar16 == (byte *)0x0) {
    uStack_61 = uVar27;
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x20);
  }
  pbVar16[0] = 0;
  pbVar16[1] = 0;
  pbVar16[2] = 0;
  pbVar16[3] = 0;
  pbVar16[4] = 0;
  pbVar16[5] = 0;
  pbVar16[6] = 0;
  pbVar16[7] = 0;
  pbVar16[8] = 4;
  pbVar16[9] = 0;
  pbVar16[10] = 0;
  pbVar16[0xb] = 0;
  pbVar16[0xc] = 0;
  pbVar16[0xd] = 0;
  pbVar16[0xe] = 0;
  pbVar16[0xf] = 0;
  pbVar16[0x10] = 0;
  pbVar16[0x11] = 0;
  pbVar16[0x12] = 0;
  pbVar16[0x13] = 0;
  pbVar16[0x14] = 0;
  pbVar16[0x15] = 0;
  pbVar16[0x16] = 0;
  pbVar16[0x17] = 0;
  pbVar16[0x18] = 0;
  lVar17 = *(longlong *)(lVar12 + 0x48);
LAB_1407fa792:
  lVar34 = *(longlong *)(lVar17 + 8);
  do {
    if (lVar34 == -1) goto LAB_1407fa792;
    if (lVar34 < 0) {
      pbStack_e8 = &UNK_143308338;
      uStack_e0 = 0x1402ed400;
      uStack_d9 = 0;
      uStack_61 = uVar27;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_143308348,&pbStack_e8,&UNK_1433083d0);
    }
    LOCK();
    lVar15 = *(longlong *)(lVar17 + 8);
    bVar31 = lVar34 == lVar15;
    if (bVar31) {
      *(longlong *)(lVar17 + 8) = lVar34 + 1;
      lVar15 = lVar34;
    }
    UNLOCK();
    lVar34 = lVar15;
  } while (!bVar31);
  pauVar4 = (undefined1 (*) [16])*param_9;
  uVar22 = param_9[1];
  uVar13 = uVar13 & uVar22;
  auVar33 = *(undefined1 (*) [16])(*pauVar4 + uVar13);
  uVar25 = (ushort)(SUB161(auVar33 >> 7,0) & 1) | (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar33[0xf] >> 7) << 0xf
  ;
  uVar23 = (uint)uVar25;
  if (uVar25 == 0) {
    lVar34 = 0x10;
    do {
      uVar13 = uVar13 + lVar34 & uVar22;
      auVar33 = *(undefined1 (*) [16])(*pauVar4 + uVar13);
      lVar34 = lVar34 + 0x10;
      uVar23 = (uint)(ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar33[0xf] >> 7) << 0xf);
    } while (uVar23 == 0);
  }
  uVar24 = 0;
  for (; (uVar23 & 1) == 0; uVar23 = uVar23 >> 1 | 0x80000000) {
    uVar24 = uVar24 + 1;
  }
  uVar13 = uVar24 + uVar13 & uVar22;
  bVar32 = (*pauVar4)[uVar13];
  if (-1 < (char)bVar32) {
    auVar33 = *pauVar4;
    uVar23 = 0;
    for (uVar24 = (uint)(ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar33[0xf] >> 7) << 0xf); (uVar24 & 1) == 0;
        uVar24 = uVar24 >> 1 | 0x80000000) {
      uVar23 = uVar23 + 1;
    }
    uVar13 = (ulonglong)uVar23;
    bVar32 = (*pauVar4)[uVar13];
  }
  bVar18 = bVar18 >> 1;
  (*pauVar4)[uVar13] = bVar18;
  pauVar4[1][uVar13 - 0x10 & uVar22] = bVar18;
  *(byte **)((longlong)pauVar4 + uVar13 * -0x18 + -0x18) = pbStack_f8;
  *(longlong *)((longlong)pauVar4 + uVar13 * -0x18 + -0x10) = lVar17;
  *(byte **)((longlong)pauVar4 + uVar13 * -0x18 + -8) = pbVar16;
  lVar34 = param_9[3] - _UNK_142e47bf8;
  param_9[2] = param_9[2] - ((ulonglong)bVar32 & 0xffffffffffffff01);
  param_9[3] = lVar34;
  lVar34 = *(longlong *)((longlong)pauVar4 + uVar13 * -0x18 + -8);
joined_r0x0001407fa4ea:
  if (lVar34 == 0) {
    uStack_61 = uVar27;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143305b70);
  }
  LOCK();
  bVar31 = *(char *)(lVar34 + 0x18) == '\0';
  if (bVar31) {
    *(char *)(lVar34 + 0x18) = '\x01';
  }
  UNLOCK();
  if (!bVar31) {
    uStack_61 = uVar27;
    pdb_142dbd1a0(lVar34 + 0x18,CONCAT71((int7)((ulonglong)lVar17 >> 8),1),1000000000);
  }
  uStack_61 = uVar27;
  pdb_140e9a150(lVar34 + 0x18);
  pbStack_f0 = (byte *)CONCAT44(pbStack_f0._4_4_,(int)uVar29);
  if ((*(longlong *)(lVar34 + 0x10) == 0) ||
     (piVar14 = (int *)(*(longlong *)(lVar34 + 8) + *(longlong *)(lVar34 + 0x10) * 4 + -4),
     piVar14 == (int *)0x0)) {
    lVar17 = *(longlong *)(lVar12 + 0x10);
    if (lVar17 == 0) {
      uStack_61 = uVar27;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143305b88);
    }
    iStack_90 = (int)lVar17 + -1;
  }
  else {
    iStack_90 = *piVar14;
    lVar17 = *(longlong *)(lVar12 + 0x10);
  }
  pbStack_e8 = *(byte **)(lVar12 + 8);
  uStack_e0 = (undefined7)lVar17;
  uStack_d9 = (undefined1)((ulonglong)lVar17 >> 0x38);
  uStack_d8 = (undefined7)*(undefined8 *)(lVar12 + 0x18);
  uStack_d1 = (undefined1)((ulonglong)*(undefined8 *)(lVar12 + 0x18) >> 0x38);
  uStack_d0 = (undefined7)*(undefined8 *)(lVar12 + 0x20);
  uStack_c9 = (undefined1)((ulonglong)*(undefined8 *)(lVar12 + 0x20) >> 0x38);
  uStack_c8 = (undefined7)lVar34;
  uStack_c1 = (undefined1)((ulonglong)lVar34 >> 0x38);
  uStack_c0 = (undefined7)*(undefined8 *)(lVar12 + 0x28);
  uStack_b9 = (undefined1)((ulonglong)*(undefined8 *)(lVar12 + 0x28) >> 0x38);
  uStack_b8 = (undefined7)*(undefined8 *)(lVar12 + 0x30);
  uStack_b1 = (undefined1)((ulonglong)*(undefined8 *)(lVar12 + 0x30) >> 0x38);
  uStack_b0 = (undefined7)(lVar12 + 0x78);
  uStack_a9 = (undefined1)((ulonglong)(lVar12 + 0x78) >> 0x38);
  uStack_a8 = (undefined7)(lVar12 + 0x58);
  uStack_a1 = (undefined1)((ulonglong)(lVar12 + 0x58) >> 0x38);
  uStack_a0 = (undefined7)*(undefined8 *)(lVar12 + 0x38);
  uStack_99 = (undefined1)((ulonglong)*(undefined8 *)(lVar12 + 0x38) >> 0x38);
  uStack_98 = (undefined7)*(undefined8 *)(lVar12 + 0x40);
  uStack_91 = (undefined1)((ulonglong)*(undefined8 *)(lVar12 + 0x40) >> 0x38);
  pdb_1413f7bd0(&pbStack_e8);
  puVar11 = param_6 + param_7 * 10;
  do {
    if (param_6 == puVar11) goto LAB_1407fa6b7;
    uStack_188 = param_6[8];
    uStack_180 = param_6[9];
    uStack_1c8 = *param_6;
    uStack_1c0 = param_6[1];
    uStack_1b8 = param_6[2];
    uStack_1b0 = param_6[3];
    uStack_1a8 = param_6[4];
    uStack_1a0 = param_6[5];
    uStack_198 = param_6[6];
    uStack_190 = param_6[7];
    cVar7 = pdb_1413f6d90(&pbStack_e8,&uStack_1c8);
    param_6 = param_6 + 10;
  } while (cVar7 == '\0');
  *param_10 = 1;
LAB_1407fa6b7:
  pcVar20 = (char *)(CONCAT17(uStack_c1,uStack_c8) + 0x18);
  uVar29 = (ulonglong)pbStack_f0 & 0xffffffff;
  uVar27 = SUB81(pbStack_f0,0);
  uStack_61 = uVar27;
  pdb_140e9a350();
  LOCK();
  cVar7 = *pcVar20;
  if (cVar7 == '\x01') {
    *pcVar20 = '\0';
  }
  UNLOCK();
  if (cVar7 != '\x01') {
    uStack_61 = uVar27;
    pdb_142dbcef0(pcVar20,0);
  }
  goto LAB_1407fa6e7;
}

