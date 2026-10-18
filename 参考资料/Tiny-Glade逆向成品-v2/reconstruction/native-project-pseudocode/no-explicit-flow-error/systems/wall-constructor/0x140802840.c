// VA 0x140802840, PDB extent 6569 bytes
// system_wall_constructor::segmentation::split_wall_path_segment_into_platform_stairs::split_wall_path_segment_into_platform_stairs
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/segmentation/split_wall_path_segment_into_platform_stairs.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::segmentation::split_wall_path_segment_into_platform_stairs::split_wall_path_segment_into_platform_stairs
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/segmentation/split_wall_path_segment_into_platform_stairs.rs
   Extent: 6569 */

void pdb_140802840(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulonglong *param_4,
                  longlong *param_5,longlong *param_6,undefined8 *param_7,longlong *param_8)

{
  char *pcVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  byte *arg0;
  byte *pbVar15;
  char cVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined1 (*pauVar20) [16];
  longlong lVar21;
  int *piVar22;
  ulonglong *puVar23;
  uint uVar24;
  uint uVar25;
  ulonglong uVar26;
  undefined1 (*pauVar27) [16];
  ulonglong *puVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong *puVar31;
  ushort uVar32;
  byte bVar33;
  longlong lVar34;
  byte *pbVar35;
  ulonglong uVar36;
  longlong lVar37;
  byte bVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 unaff_XMM7_Ba;
  undefined1 unaff_XMM7_Bb;
  char cVar44;
  undefined1 unaff_XMM7_Bc;
  char cVar45;
  undefined1 unaff_XMM7_Bd;
  char cVar46;
  undefined1 unaff_XMM7_Be;
  undefined1 unaff_XMM7_Bf;
  char cVar47;
  undefined1 unaff_XMM7_Bg;
  char cVar48;
  undefined1 unaff_XMM7_Bh;
  char cVar49;
  undefined1 unaff_XMM7_Bi;
  undefined1 unaff_XMM7_Bj;
  char cVar50;
  undefined1 unaff_XMM7_Bk;
  char cVar51;
  undefined1 unaff_XMM7_Bl;
  char cVar52;
  undefined1 unaff_XMM7_Bm;
  undefined1 unaff_XMM7_Bn;
  char cVar53;
  undefined1 unaff_XMM7_Bo;
  char cVar54;
  undefined1 unaff_XMM7_Bp;
  char cVar55;
  longlong lStack_250;
  byte *pbStack_248;
  undefined8 uStack_240;
  ulonglong *puStack_238;
  undefined4 *puStack_230;
  longlong *plStack_228;
  longlong *plStack_220;
  longlong lStack_218;
  ulonglong *puStack_210;
  ulonglong uStack_208;
  longlong lStack_200;
  byte *pbStack_1f8;
  ulonglong uStack_1f0;
  longlong *plStack_1e8;
  undefined4 *puStack_1e0;
  ulonglong uStack_1d8;
  longlong *plStack_1d0;
  undefined4 *puStack_1c8;
  undefined8 uStack_1c0;
  ulonglong uStack_1b8;
  ulonglong *puStack_1b0;
  ulonglong *puStack_1a8;
  longlong lStack_1a0;
  undefined4 uStack_194;
  ulonglong *puStack_190;
  byte *pbStack_188;
  byte *pbStack_180;
  ulonglong *puStack_178;
  longlong lStack_170;
  longlong lStack_168;
  longlong lStack_160;
  byte *pbStack_158;
  byte *pbStack_150;
  longlong lStack_148;
  byte *pbStack_140;
  byte *pbStack_138;
  longlong lStack_130;
  ulonglong *puStack_128;
  ulonglong *puStack_120;
  byte *pbStack_118;
  byte **ppbStack_110;
  ulonglong *puStack_108;
  ulonglong uStack_100;
  longlong lStack_f8;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  ulonglong *puStack_e0;
  ulonglong *puStack_d8;
  byte *pbStack_d0;
  ulonglong uStack_c8;
  ulonglong *puStack_c0;
  ulonglong uStack_b8;
  byte *pbStack_b0;
  undefined1 uStack_a1;
  byte *pbStack_a0;
  longlong *plStack_98;
  byte *pbStack_90;
  undefined1 uStack_86;
  undefined1 uStack_85;
  undefined1 uStack_84;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  puStack_128 = (ulonglong *)*param_1;
  lVar34 = param_1[1];
  uVar19 = *puStack_128;
  uVar29 = 0;
  uVar30 = uVar19 - *(ulonglong *)(lVar34 + 0x18);
  if (uVar19 < *(ulonglong *)(lVar34 + 0x18)) {
    uVar30 = uVar29;
  }
  uVar26 = uVar19 - *(ulonglong *)(lVar34 + 0x38);
  if (uVar19 < *(ulonglong *)(lVar34 + 0x38)) {
    uVar26 = uVar29;
  }
  puStack_120 = (ulonglong *)(uVar30 * 0x10 + *(longlong *)(lVar34 + 8));
  uVar19 = *(ulonglong *)(lVar34 + 0x10) - uVar30;
  if (*(ulonglong *)(lVar34 + 0x10) < uVar30) {
    puStack_120 = (ulonglong *)0x8;
    uVar19 = uVar29;
  }
  ppbStack_110 = (byte **)(uVar26 * 0x10 + *(longlong *)(lVar34 + 0x28));
  uVar30 = *(ulonglong *)(lVar34 + 0x30) - uVar26;
  if (*(ulonglong *)(lVar34 + 0x30) < uVar26) {
    ppbStack_110 = (byte **)0x8;
    uVar30 = uVar29;
  }
  uStack_100 = uVar30 + uVar19;
  *puStack_128 = *(longlong *)(lVar34 + 0x40) - uStack_100;
  pbStack_118 = (byte *)((longlong)puStack_120 + uVar19 * 0x10);
  puStack_108 = (ulonglong *)(ppbStack_110 + uVar30 * 2);
  puStack_e0 = param_4;
  plStack_98 = param_3;
  pdb_140fc81a0(&uStack_c8,&puStack_128);
  puVar23 = (ulonglong *)*param_2;
  lVar34 = param_2[1];
  uVar19 = *puVar23;
  uVar30 = uVar19 - *(ulonglong *)(lVar34 + 0x18);
  if (uVar19 < *(ulonglong *)(lVar34 + 0x18)) {
    uVar30 = uVar29;
  }
  uVar26 = uVar19 - *(ulonglong *)(lVar34 + 0x38);
  if (uVar19 < *(ulonglong *)(lVar34 + 0x38)) {
    uVar26 = uVar29;
  }
  lVar17 = uVar30 * 0x40 + *(longlong *)(lVar34 + 8);
  uVar19 = *(ulonglong *)(lVar34 + 0x10);
  uVar36 = uVar19 - uVar30;
  if (uVar19 < uVar30) {
    uVar36 = uVar29;
  }
  if (uVar19 < uVar30) {
    lVar17 = 8;
  }
  lVar21 = uVar26 * 0x40 + *(longlong *)(lVar34 + 0x28);
  uVar19 = *(ulonglong *)(lVar34 + 0x30) - uVar26;
  if (*(ulonglong *)(lVar34 + 0x30) < uVar26) {
    lVar21 = 8;
    uVar19 = uVar29;
  }
  *puVar23 = (*(longlong *)(lVar34 + 0x40) - uVar19) - uVar36;
  lVar37 = uVar36 * 0x40 + lVar17;
  lVar34 = uVar19 * 0x40 + lVar21;
  do {
    uVar19 = uStack_b8;
    if ((lVar17 == 0) || (lVar17 == lVar37)) {
      if ((lVar21 == 0) || (lVar21 == lVar34)) break;
      lVar17 = 0;
      lVar18 = lVar21;
      lVar21 = lVar21 + 0x40;
    }
    else {
      lVar18 = lVar17;
      lVar17 = lVar17 + 0x40;
    }
    *puVar23 = *puVar23 + 1;
    uVar30 = *(ulonglong *)(lVar18 + 8);
    if (uStack_b8 == uStack_c8) {
      if (lVar17 == 0) {
        if (lVar21 == 0) {
          uVar29 = 0;
        }
        else {
          uVar29 = (ulonglong)(lVar34 - lVar21) >> 6;
        }
      }
      else {
        uVar29 = (ulonglong)(lVar37 - lVar17) >> 6;
        if (lVar21 != 0) {
          uVar29 = uVar29 + ((ulonglong)(lVar34 - lVar21) >> 6);
        }
      }
      uStack_82 = 1;
      pdb_142d7f1b0(&uStack_c8,uStack_b8,uVar29 + 1,8,8);
    }
    puStack_c0[uVar19] = uVar30;
    uStack_b8 = uVar19 + 1;
  } while( true );
  puVar23 = (ulonglong *)*plStack_98;
  lVar34 = plStack_98[1];
  uVar19 = *puVar23;
  uVar29 = 0;
  uVar30 = uVar19 - *(ulonglong *)(lVar34 + 0x18);
  if (uVar19 < *(ulonglong *)(lVar34 + 0x18)) {
    uVar30 = uVar29;
  }
  uVar26 = uVar19 - *(ulonglong *)(lVar34 + 0x38);
  if (uVar19 < *(ulonglong *)(lVar34 + 0x38)) {
    uVar26 = uVar29;
  }
  lVar17 = uVar30 * 0x20 + *(longlong *)(lVar34 + 8);
  uVar19 = *(ulonglong *)(lVar34 + 0x10) - uVar30;
  if (*(ulonglong *)(lVar34 + 0x10) < uVar30) {
    lVar17 = 8;
    uVar19 = uVar29;
  }
  lVar21 = uVar26 * 0x20 + *(longlong *)(lVar34 + 0x28);
  uVar30 = *(ulonglong *)(lVar34 + 0x30) - uVar26;
  if (*(ulonglong *)(lVar34 + 0x30) < uVar26) {
    lVar21 = 8;
    uVar30 = uVar29;
  }
  *puVar23 = (*(longlong *)(lVar34 + 0x40) - uVar30) - uVar19;
  lVar34 = uVar19 * 0x20 + lVar17;
  lVar37 = uVar30 * 0x20 + lVar21;
  do {
    uVar19 = uStack_b8;
    if ((lVar17 == 0) || (lVar17 == lVar34)) {
      if ((lVar21 == 0) || (lVar21 == lVar37)) break;
      lVar17 = 0;
      lVar18 = lVar21;
      lVar21 = lVar21 + 0x20;
    }
    else {
      lVar18 = lVar17;
      lVar17 = lVar17 + 0x20;
    }
    *puVar23 = *puVar23 + 1;
    uVar30 = *(ulonglong *)(lVar18 + 8);
    if (uStack_b8 == uStack_c8) {
      if (lVar17 == 0) {
        if (lVar21 == 0) {
          uVar29 = 0;
        }
        else {
          uVar29 = (ulonglong)(lVar37 - lVar21) >> 5;
        }
      }
      else {
        uVar29 = (ulonglong)(lVar34 - lVar17) >> 5;
        if (lVar21 != 0) {
          uVar29 = uVar29 + ((ulonglong)(lVar37 - lVar21) >> 5);
        }
      }
      uStack_82 = 1;
      pdb_142d7f1b0(&uStack_c8,uStack_b8,uVar29 + 1,8,8);
    }
    puStack_c0[uVar19] = uVar30;
    uStack_b8 = uVar19 + 1;
  } while( true );
  uVar30 = uVar19;
  if (1 < uStack_b8) {
    if (uStack_b8 < 0x15) {
      puVar23 = puStack_c0 + 1;
      lVar34 = 8;
      do {
        uVar26 = puVar23[-1];
        uVar29 = *puVar23;
        lVar17 = lVar34;
        if (uVar29 < uVar26) {
          do {
            *(ulonglong *)((longlong)puStack_c0 + lVar17) = uVar26;
            puVar31 = puStack_c0;
            if (lVar17 == 8) goto LAB_1408039a0;
            uVar26 = *(ulonglong *)((longlong)puStack_c0 + lVar17 + -0x10);
            lVar17 = lVar17 + -8;
          } while (uVar29 < uVar26);
          puVar31 = (ulonglong *)(lVar17 + (longlong)puStack_c0);
LAB_1408039a0:
          *puVar31 = uVar29;
        }
        puVar23 = puVar23 + 1;
        lVar34 = lVar34 + 8;
      } while (puVar23 != puStack_c0 + uStack_b8);
      if (uStack_b8 < 2) goto LAB_140802be9;
    }
    else {
      uStack_82 = 1;
      pdb_140a91360(puStack_c0,uStack_b8,&uStack_a1);
    }
    lVar34 = 0;
    do {
      if (puStack_c0[lVar34 + 1] == puStack_c0[lVar34]) {
        uVar29 = lVar34 + 2;
        uStack_b8 = lVar34 + 1;
        uVar30 = uStack_b8;
        if (uVar29 < uVar19) {
          if (((int)uVar19 - (int)lVar34 & 1U) != 0) {
            if (puStack_c0[lVar34 + 2] != puStack_c0[lVar34]) {
              puStack_c0[lVar34 + 1] = puStack_c0[lVar34 + 2];
              uStack_b8 = lVar34 + 2;
            }
            uVar29 = lVar34 + 3;
          }
          uVar30 = uStack_b8;
          if (uVar19 - 3 != lVar34) goto LAB_140803a64;
        }
        break;
      }
      lVar34 = lVar34 + 1;
    } while (uVar19 - 1 != lVar34);
  }
  goto LAB_140802be9;
LAB_140802eaf:
  uVar30 = uVar30 & uVar19;
  pcVar1 = *pauVar20 + uVar30;
  auVar43[0] = -(*pcVar1 == auVar39[0]);
  auVar43[1] = -(pcVar1[1] == auVar39[1]);
  auVar43[2] = -(pcVar1[2] == auVar39[2]);
  auVar43[3] = -(pcVar1[3] == auVar39[3]);
  auVar43[4] = -(pcVar1[4] == auVar39[4]);
  auVar43[5] = -(pcVar1[5] == auVar39[5]);
  auVar43[6] = -(pcVar1[6] == auVar39[6]);
  auVar43[7] = -(pcVar1[7] == auVar39[7]);
  auVar43[8] = -(pcVar1[8] == auVar39[0]);
  auVar43[9] = -(pcVar1[9] == auVar39[1]);
  auVar43[10] = -(pcVar1[10] == auVar39[2]);
  auVar43[0xb] = -(pcVar1[0xb] == auVar39[3]);
  auVar43[0xc] = -(pcVar1[0xc] == auVar39[4]);
  auVar43[0xd] = -(pcVar1[0xd] == auVar39[5]);
  auVar43[0xe] = -(pcVar1[0xe] == auVar39[6]);
  auVar43[0xf] = -(pcVar1[0xf] == auVar39[7]);
  uVar32 = (ushort)(SUB161(auVar43 >> 7,0) & 1) | (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe | (ushort)(auVar43[0xf] >> 7) << 0xf;
  uVar24 = (uint)uVar32;
  while (uVar32 != 0) {
    uVar25 = 0;
    for (uVar3 = uVar24; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
      uVar25 = uVar25 + 1;
    }
    pauVar27 = pauVar20 + (uVar25 + uVar30 & uVar19) * -2;
    if (*(ulonglong **)pauVar27[-2] == puVar31) goto LAB_140802fbe;
    uVar32 = (ushort)(uVar24 - 1) & (ushort)uVar24;
    uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar32);
  }
  auVar41[0] = -(*pcVar1 == (char)iVar4);
  auVar41[1] = -(pcVar1[1] == cVar44);
  auVar41[2] = -(pcVar1[2] == cVar45);
  auVar41[3] = -(pcVar1[3] == cVar46);
  auVar41[4] = -(pcVar1[4] == (char)iVar5);
  auVar41[5] = -(pcVar1[5] == cVar47);
  auVar41[6] = -(pcVar1[6] == cVar48);
  auVar41[7] = -(pcVar1[7] == cVar49);
  auVar41[8] = -(pcVar1[8] == (char)iVar6);
  auVar41[9] = -(pcVar1[9] == cVar50);
  auVar41[10] = -(pcVar1[10] == cVar51);
  auVar41[0xb] = -(pcVar1[0xb] == cVar52);
  auVar41[0xc] = -(pcVar1[0xc] == (char)iVar7);
  auVar41[0xd] = -(pcVar1[0xd] == cVar53);
  auVar41[0xe] = -(pcVar1[0xe] == cVar54);
  auVar41[0xf] = -(pcVar1[0xf] == cVar55);
  uVar32 = (ushort)(SUB161(auVar41 >> 7,0) & 1) | (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar41 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar41 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar41 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar41 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar41 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar41 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar41 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar41 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar41 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar41 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar41 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar41 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe | (ushort)(auVar41[0xf] >> 7) << 0xf;
  if (uVar32 != 0) goto LAB_140802f20;
  uVar30 = uVar30 + lVar21 + 0x10;
  lVar21 = lVar21 + 0x10;
  goto LAB_140802eaf;
LAB_140802f20:
  if (plStack_98[5] == 0) {
    pdb_142dda2e0(plStack_220,1,plStack_1d0,CONCAT71((uint7)(byte)(uVar32 >> 8),1));
    pauVar20 = (undefined1 (*) [16])plStack_98[3];
    uVar19 = plStack_98[4];
  }
  uVar29 = uVar29 & uVar19;
  auVar39 = *(undefined1 (*) [16])(*pauVar20 + uVar29);
  uVar32 = (ushort)(SUB161(auVar39 >> 7,0) & 1) | (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar39 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar39 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar39 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar39 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar39 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar39 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar39 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar39 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar39 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar39[0xf] >> 7) << 0xf
  ;
  uVar24 = (uint)uVar32;
  if (uVar32 == 0) {
    lVar21 = 0x10;
    do {
      uVar29 = uVar29 + lVar21 & uVar19;
      auVar39 = *(undefined1 (*) [16])(*pauVar20 + uVar29);
      lVar21 = lVar21 + 0x10;
      uVar24 = (uint)(ushort)((ushort)(SUB161(auVar39 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar39 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar39 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar39 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar39 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar39 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar39 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar39 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar39 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar39 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar39[0xf] >> 7) << 0xf);
    } while (uVar24 == 0);
  }
  uVar25 = 0;
  for (; (uVar24 & 1) == 0; uVar24 = uVar24 >> 1 | 0x80000000) {
    uVar25 = uVar25 + 1;
  }
  uVar30 = uVar25 + uVar29 & uVar19;
  bVar38 = (*pauVar20)[uVar30];
  if (-1 < (char)bVar38) {
    auVar39 = *pauVar20;
    uVar24 = 0;
    for (uVar25 = (uint)(ushort)((ushort)(SUB161(auVar39 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar39 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar39 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar39 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar39 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar39 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar39 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar39 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar39 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar39 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar39[0xf] >> 7) << 0xf); (uVar25 & 1) == 0;
        uVar25 = uVar25 >> 1 | 0x80000000) {
      uVar24 = uVar24 + 1;
    }
    uVar30 = (ulonglong)uVar24;
    bVar38 = (*pauVar20)[uVar30];
  }
  bVar33 = bVar33 >> 1;
  (*pauVar20)[uVar30] = bVar33;
  pauVar20[1][uVar30 - 0x10 & uVar19] = bVar33;
  pauVar27 = pauVar20 + uVar30 * -2;
  *(ulonglong **)pauVar20[uVar30 * -2 + -2] = puVar31;
  *(undefined8 *)(pauVar27[-2] + 8) = 0;
  *(undefined8 *)pauVar27[-1] = 8;
  *(undefined8 *)(pauVar27[-1] + 8) = 0;
  auVar39._8_4_ = uVar13;
  auVar39._0_8_ = (ulonglong)bVar38 & 0xffffffffffffff01;
  auVar39._12_4_ = uVar14;
  plStack_98[5] = plStack_98[5] - ((ulonglong)bVar38 & 0xffffffffffffff01);
  plStack_98[6] = plStack_98[6] - auVar39._8_8_;
LAB_140802fbe:
  *(undefined8 *)(pauVar27[-1] + 8) = 0;
  if (*(uint *)(lVar34 + 600) < 2) {
    uVar19 = pdb_140b54b40(uStack_1d8,puVar31);
    if (((((uVar19 & 0xffffffff) != 0) &&
         (uVar30 = uVar19 & 0xffffffff ^ 0xffffffff, uVar30 < *(ulonglong *)(lStack_170 + 0x10))) &&
        (piVar22 = (int *)(uVar30 * 0x18 + *(longlong *)(lStack_170 + 8)),
        piVar22[4] == (int)(uVar19 >> 0x20))) &&
       (((*piVar22 != 0 &&
         (uVar19 = *(ulonglong *)(piVar22 + 2),
         (uVar19 & 0xffffffff) < *(ulonglong *)(lStack_168 + 0x38))) &&
        (((*(ulonglong *)(*(longlong *)(lStack_168 + 0x28) + (uVar19 >> 6 & 0x3ffffff) * 8) >>
           (uVar19 & 0x3f) & 1) != 0 &&
         (cVar16 = pdb_140b77b50((ulonglong)(uint)~piVar22[1] * 0x58 +
                                 *(longlong *)
                                  (*(longlong *)
                                    (*(longlong *)(lStack_170 + 0x1a0) + 0x18 +
                                    (uVar19 >> 0x20) * 0x48) + 0x10 +
                                  ~*(ulonglong *)
                                    (*(longlong *)
                                      (*(longlong *)(lStack_170 + 0x1a0) + 0x38 +
                                      (uVar19 >> 0x20) * 0x48) +
                                    *(longlong *)(lStack_168 + 0x110) * 8) * 0x30)), cVar16 != '\0')
         ))))) {
      puStack_190 = (ulonglong *)0x0;
      pbStack_188 = (byte *)0x8;
      pbStack_180 = (byte *)0x0;
      pbStack_140 = (byte *)0x0;
      pbStack_138 = (byte *)0x8;
      lStack_130 = 0;
      puStack_d8 = *(ulonglong **)(lVar17 + -0x10);
      puStack_1b0 = puStack_d8 + *(longlong *)(lVar17 + -8) * 0x11;
      pbStack_b0 = (byte *)0x8;
      lVar17 = 0;
      pbStack_90 = (byte *)0x0;
      puStack_1a8 = puVar23;
      lStack_1a0 = lVar34;
      for (; puStack_d8 != puStack_1b0; puStack_d8 = puStack_d8 + 0x11) {
        ppbStack_110 = (byte **)CONCAT44(ppbStack_110._4_4_,(int)puStack_d8[0x10]);
        pbStack_118 = (byte *)puStack_d8[0xf];
        puStack_128 = *(ulonglong **)(lVar34 + 0x90);
        puStack_120 = *(ulonglong **)(lVar34 + 0x98);
        uStack_81 = 1;
        puStack_108 = (ulonglong *)lVar34;
        pdb_1413f0070(&lStack_250,&puStack_128);
        lStack_200 = 0;
        pbStack_1f8 = (byte *)0x8;
        uStack_1f0 = 0;
        lStack_218 = 0;
        puStack_210 = (ulonglong *)0x8;
        uStack_208 = 0;
        pbStack_118 = *(byte **)(lVar34 + 200);
        uVar19 = *(ulonglong *)(lVar34 + 0xd0);
        puStack_128 = *(ulonglong **)(lVar34 + 0x90);
        uStack_100 = *(ulonglong *)(lVar34 + 0x98);
        puStack_120 = (ulonglong *)((longlong)puStack_128 + uStack_100 * 0xc);
        ppbStack_110 = (byte **)((longlong)pbStack_118 + uVar19 * 4);
        if (uVar19 < uStack_100) {
          uStack_100 = uVar19;
        }
        puStack_108 = (ulonglong *)0x0;
        uStack_85 = 1;
        uStack_86 = 1;
        lStack_f8 = lVar34;
        pdb_1413ea160(&pbStack_158,&puStack_128);
        puStack_128 = puStack_d8;
        puStack_120 = (ulonglong *)&lStack_218;
        uStack_83 = 1;
        uStack_84 = 1;
        pbStack_d0 = pbStack_248;
        pbStack_118 = (byte *)lVar34;
        ppbStack_110 = &pbStack_158;
        pdb_14140d890(pbStack_248,uStack_240,uVar12,&puStack_128,&lStack_200,puStack_d8);
        uVar19 = uStack_208;
        puVar28 = puStack_210;
        lVar17 = uStack_208 * 0x88;
        ppbStack_110 = (byte **)(puStack_210 + uStack_208 * 0x11);
        puStack_128 = puStack_210;
        pbStack_118 = (byte *)lStack_218;
        puStack_120 = puStack_210;
        if ((ulonglong)((longlong)puStack_190 - (longlong)pbStack_90) < uStack_208) {
          pdb_142d7f1b0(&puStack_190,pbStack_90,uStack_208,8,0x88);
          pbStack_b0 = pbStack_188;
          pbStack_90 = pbStack_180;
LAB_140803484:
          pbVar15 = pbStack_90;
          pub_142e32760(pbStack_b0 + (longlong)pbStack_90 * 0x88,puVar28,lVar17);
          lVar34 = lStack_1a0;
          pbStack_180 = pbVar15 + uVar19;
          pbVar15 = pbStack_180;
          pbStack_90 = pbStack_180;
          puVar23 = puStack_1a8;
          if (puVar28 != puStack_120) {
            uVar19 = (ulonglong)((longlong)puVar28 - (longlong)puStack_120) / 0x88;
            puVar28 = puStack_120 + 0xd;
            do {
              if (puVar28[-0xd] != 0) {
                pub_1406abac0((byte *)puVar28[-0xc],puVar28[-0xd],1);
              }
              if (puVar28[-10] != 0) {
                pub_1406abac0((byte *)puVar28[-9],puVar28[-10] << 3,4);
              }
              if (puVar28[-7] != 0) {
                pub_1406abac0((byte *)puVar28[-6],puVar28[-7] * 0x1c,4);
              }
              if (puVar28[-4] != 0) {
                pub_1406abac0((byte *)puVar28[-3],puVar28[-4] << 2,4);
              }
              if (puVar28[-1] != 0) {
                pub_1406abac0((byte *)*puVar28,puVar28[-1] << 3,8);
              }
              puVar28 = puVar28 + 0x11;
              uVar19 = uVar19 - 1;
              pbVar15 = pbStack_180;
              puVar23 = puStack_1a8;
            } while (uVar19 != 0);
          }
        }
        else {
          pbVar15 = pbStack_90;
          if (uStack_208 != 0) goto LAB_140803484;
        }
        pbStack_180 = pbVar15;
        if (pbStack_118 != (byte *)0x0) {
          pub_1406abac0((byte *)puStack_128,(longlong)pbStack_118 * 0x88,8);
        }
        uVar19 = uStack_1f0;
        pbStack_a0 = pbStack_1f8;
        if ((ulonglong)((longlong)pbStack_140 - lStack_130) < uStack_1f0) {
          lStack_160 = lStack_200;
          pdb_142d7f1b0(&pbStack_140,lStack_130,uStack_1f0,8,0x20);
          lVar21 = lStack_160;
LAB_140803615:
          lVar17 = lStack_130;
          pub_142e32760(pbStack_138 + lStack_130 * 0x20,pbStack_a0,uVar19 << 5);
        }
        else {
          lVar17 = lStack_130;
          lVar21 = lStack_200;
          if (uStack_1f0 != 0) goto LAB_140803615;
        }
        lVar17 = lVar17 + uVar19;
        lStack_130 = lVar17;
        if (lVar21 != 0) {
          pub_1406abac0(pbStack_a0,lVar21 << 5,8);
        }
        if (pbStack_158 != (byte *)0x0) {
          pub_1406abac0(pbStack_150,(longlong)pbStack_158 * 0xc,4);
        }
        if (lStack_250 != 0) {
          pub_1406abac0(pbStack_d0,lStack_250 << 2,4);
        }
      }
      *puStack_1c8 = uStack_e4;
      pbStack_118 = pbStack_180;
      puStack_128 = puStack_190;
      puStack_120 = (ulonglong *)pbStack_188;
      uStack_81 = 1;
      pdb_141407ca0(&pbStack_158,uStack_1c0,puVar31,&puStack_128);
      if (!SBORROW8(0,(longlong)pbStack_158)) {
        pbStack_d0 = pbStack_158;
        pbStack_a0 = (byte *)lStack_148;
        pbStack_b0 = pbStack_150;
        pbStack_90 = (byte *)0x0;
        while (pbStack_a0 != pbStack_90) {
          pbStack_90 = (byte *)((longlong)pbStack_90 + 1);
          pdb_1413fe530();
        }
        if (pbStack_d0 != (byte *)0x0) {
          pub_1406abac0(pbStack_b0,(longlong)pbStack_d0 * 0x88,8);
        }
      }
      pbStack_a0 = pbStack_140;
      pbStack_90 = pbStack_138;
      if (lVar17 != 0) {
        lVar34 = 0;
        do {
          uVar8 = *(undefined8 *)(pbStack_90 + lVar34);
          uVar9 = *(undefined8 *)(pbStack_90 + lVar34 + 8);
          uVar10 = *(undefined8 *)(pbStack_90 + lVar34 + 0x10);
          uVar11 = *(undefined8 *)(pbStack_90 + lVar34 + 0x10 + 8);
          lVar21 = *(longlong *)(pauVar27[-1] + 8);
          if (lVar21 == *(longlong *)(pauVar27[-2] + 8)) {
            pdb_142d7e6e0(pauVar27[-2] + 8);
          }
          lVar37 = *(longlong *)pauVar27[-1];
          puVar2 = (undefined8 *)(lVar37 + 0x10 + lVar21 * 0x20);
          *puVar2 = uVar10;
          puVar2[1] = uVar11;
          puVar2 = (undefined8 *)(lVar37 + lVar21 * 0x20);
          *puVar2 = uVar8;
          puVar2[1] = uVar9;
          *(longlong *)(pauVar27[-1] + 8) = lVar21 + 1;
          lVar34 = lVar34 + 0x20;
        } while (lVar17 * 0x20 != lVar34);
      }
      if (pbStack_a0 != (byte *)0x0) {
        pub_1406abac0(pbStack_90,(longlong)pbStack_a0 << 5,8);
      }
      puStack_c0 = puStack_e0;
      if (puStack_e0 == puVar23) goto LAB_140802cbf;
      goto LAB_140802d23;
    }
  }
  *puStack_1c8 = uStack_e4;
  pdb_1413e6f70(&puStack_128,puStack_d8);
  pdb_141407ca0(&pbStack_158,uStack_1c0,puVar31,&puStack_128);
  arg0 = pbStack_150;
  pbVar15 = pbStack_158;
  if (!SBORROW8(0,(longlong)pbStack_158)) {
    if (lStack_148 != 0) {
      pbVar35 = pbStack_150 + 0x68;
      lVar34 = lStack_148;
      do {
        if (*(ulonglong *)(pbVar35 + -0x68) != 0) {
          pub_1406abac0(*(byte **)(pbVar35 + -0x60),*(ulonglong *)(pbVar35 + -0x68),1);
        }
        if (*(longlong *)(pbVar35 + -0x50) != 0) {
          pub_1406abac0(*(byte **)(pbVar35 + -0x48),*(longlong *)(pbVar35 + -0x50) << 3,4);
        }
        if (*(longlong *)(pbVar35 + -0x38) != 0) {
          pub_1406abac0(*(byte **)(pbVar35 + -0x30),*(longlong *)(pbVar35 + -0x38) * 0x1c,4);
        }
        if (*(longlong *)(pbVar35 + -0x20) != 0) {
          pub_1406abac0(*(byte **)(pbVar35 + -0x18),*(longlong *)(pbVar35 + -0x20) << 2,4);
        }
        if (*(longlong *)(pbVar35 + -8) != 0) {
          pub_1406abac0(*(byte **)pbVar35,*(longlong *)(pbVar35 + -8) << 3,8);
        }
        pbVar35 = pbVar35 + 0x88;
        lVar34 = lVar34 + -1;
      } while (lVar34 != 0);
    }
    if (pbVar15 != (byte *)0x0) {
      pub_1406abac0(arg0,(longlong)pbVar15 * 0x88,8);
    }
  }
  puStack_c0 = puStack_e0;
  if (puStack_e0 == puVar23) goto LAB_140802cbf;
  goto LAB_140802d23;
LAB_140803a64:
  do {
    if (puStack_c0[uVar29] == puStack_c0[uVar30 - 1]) {
      uVar26 = puStack_c0[uVar29 + 1];
      uStack_b8 = uVar30;
      if (uVar26 != puStack_c0[uVar30 - 1]) {
LAB_140803a90:
        puStack_c0[uVar30] = uVar26;
        uStack_b8 = uVar30 + 1;
      }
    }
    else {
      puStack_c0[uVar30] = puStack_c0[uVar29];
      uStack_b8 = uVar30 + 1;
      uVar26 = puStack_c0[uVar29 + 1];
      puVar23 = puStack_c0 + uVar30;
      uVar30 = uStack_b8;
      if (uVar26 != *puVar23) goto LAB_140803a90;
    }
    uVar29 = uVar29 + 2;
    uVar30 = uStack_b8;
  } while (uVar19 != uVar29);
LAB_140802be9:
  uVar14 = _UNK_142e47bfc;
  uVar13 = _UNK_142e47bf8;
  uVar12 = _DAT_142e3788c;
  puVar23 = puStack_c0 + uVar30;
  uStack_194 = *(undefined4 *)((longlong)param_6 + 0x1c);
  plStack_1e8 = (longlong *)*param_6;
  puStack_230 = (undefined4 *)param_6[2];
  uStack_1d8 = *puStack_e0;
  uStack_e8 = *(undefined4 *)((longlong)param_8 + 0x1c);
  plStack_98 = (longlong *)*param_8;
  puStack_1e0 = (undefined4 *)param_8[2];
  lStack_168 = *param_5;
  lStack_170 = param_5[1];
  uStack_e4 = *(undefined4 *)((longlong)param_7 + 0x1c);
  uStack_1c0 = *param_7;
  puStack_1c8 = (undefined4 *)param_7[2];
  iVar4 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                           CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                 CONCAT13(unaff_XMM7_Bd,
                          CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
  cVar44 = (char)((uint)iVar4 >> 8);
  cVar45 = (char)((uint)iVar4 >> 0x10);
  cVar46 = (char)((uint)iVar4 >> 0x18);
  iVar5 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                           CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                 CONCAT13(unaff_XMM7_Bh,
                          CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
  cVar47 = (char)((uint)iVar5 >> 8);
  cVar48 = (char)((uint)iVar5 >> 0x10);
  cVar49 = (char)((uint)iVar5 >> 0x18);
  iVar6 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                           CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                 CONCAT13(unaff_XMM7_Bl,
                          CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
  cVar50 = (char)((uint)iVar6 >> 8);
  cVar51 = (char)((uint)iVar6 >> 0x10);
  cVar52 = (char)((uint)iVar6 >> 0x18);
  iVar7 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                           CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                 CONCAT13(unaff_XMM7_Bp,
                          CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
  cVar53 = (char)((uint)iVar7 >> 8);
  cVar54 = (char)((uint)iVar7 >> 0x10);
  cVar55 = (char)((uint)iVar7 >> 0x18);
  uStack_1b8 = uStack_c8;
  plStack_220 = plStack_98 + 3;
  plStack_228 = plStack_1e8 + 4;
  plStack_1d0 = plStack_98 + 7;
  puStack_178 = puStack_c0;
  if (puStack_c0 == puVar23) {
LAB_140802cbf:
    if (uStack_1b8 != 0) {
      pub_1406abac0((byte *)puStack_178,uStack_1b8 << 3,8);
    }
    return;
  }
LAB_140802d23:
  puVar31 = (ulonglong *)*puStack_c0;
  *puStack_230 = uStack_194;
  puStack_238 = puVar31;
  puStack_e0 = puStack_c0;
  if (plStack_1e8[3] != 0) {
    uVar19 = pdb_1400af0a0(plStack_228,&puStack_238);
    puStack_e0 = puStack_e0 + 1;
    bVar33 = (byte)(uVar19 >> 0x39);
    auVar39 = ZEXT216(CONCAT11(bVar33,bVar33));
    auVar39 = pshuflw(auVar39,auVar39,0);
    lVar34 = 0;
    while( true ) {
      uVar19 = uVar19 & plStack_1e8[1];
      auVar43 = *(undefined1 (*) [16])(*plStack_1e8 + uVar19);
      auVar42[0] = -(auVar43[0] == auVar39[0]);
      auVar42[1] = -(auVar43[1] == auVar39[1]);
      auVar42[2] = -(auVar43[2] == auVar39[2]);
      auVar42[3] = -(auVar43[3] == auVar39[3]);
      auVar42[4] = -(auVar43[4] == auVar39[4]);
      auVar42[5] = -(auVar43[5] == auVar39[5]);
      auVar42[6] = -(auVar43[6] == auVar39[6]);
      auVar42[7] = -(auVar43[7] == auVar39[7]);
      auVar42[8] = -(auVar43[8] == auVar39[0]);
      auVar42[9] = -(auVar43[9] == auVar39[1]);
      auVar42[10] = -(auVar43[10] == auVar39[2]);
      auVar42[0xb] = -(auVar43[0xb] == auVar39[3]);
      auVar42[0xc] = -(auVar43[0xc] == auVar39[4]);
      auVar42[0xd] = -(auVar43[0xd] == auVar39[5]);
      auVar42[0xe] = -(auVar43[0xe] == auVar39[6]);
      auVar42[0xf] = -(auVar43[0xf] == auVar39[7]);
      uVar32 = (ushort)(SUB161(auVar42 >> 7,0) & 1) | (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar42 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar42 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar42 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar42 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar42 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar42 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar42 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar42 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar42 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar42 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar42 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar42 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe | (ushort)(auVar42[0xf] >> 7) << 0xf;
      uVar24 = (uint)uVar32;
      while (uVar32 != 0) {
        uVar25 = 0;
        for (uVar3 = uVar24; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar25 = uVar25 + 1;
        }
        lVar17 = *plStack_1e8 + (uVar25 + uVar19 & plStack_1e8[1]) * -0x20;
        if (puVar31 == *(ulonglong **)(lVar17 + -0x20)) {
          lVar34 = pdb_140b54f80(uStack_1d8,puVar31,&UNK_143007368);
          if (lVar34 == 0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_143007380);
          }
          *puStack_1e0 = uStack_e8;
          lVar21 = plStack_98[2];
          if (lVar21 == *plStack_98) {
            pdb_142d7e8a0(plStack_98);
          }
          *(ulonglong **)(plStack_98[1] + lVar21 * 8) = puVar31;
          plStack_98[2] = lVar21 + 1;
          *puStack_1e0 = uStack_e8;
          puStack_128 = puVar31;
          uVar29 = pdb_1400af0a0(plStack_1d0);
          puStack_d8 = (ulonglong *)(lVar17 + -0x18);
          pauVar20 = (undefined1 (*) [16])plStack_98[3];
          uVar19 = plStack_98[4];
          bVar33 = (byte)(uVar29 >> 0x38);
          bVar38 = bVar33 >> 1;
          auVar39 = ZEXT216(CONCAT11(bVar38,bVar38));
          auVar39 = pshuflw(auVar39,auVar39,0);
          lVar21 = 0;
          uVar30 = uVar29;
          goto LAB_140802eaf;
        }
        uVar32 = (ushort)(uVar24 - 1) & (ushort)uVar24;
        uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar32);
      }
      auVar40[0] = -(auVar43[0] == (char)iVar4);
      auVar40[1] = -(auVar43[1] == cVar44);
      auVar40[2] = -(auVar43[2] == cVar45);
      auVar40[3] = -(auVar43[3] == cVar46);
      auVar40[4] = -(auVar43[4] == (char)iVar5);
      auVar40[5] = -(auVar43[5] == cVar47);
      auVar40[6] = -(auVar43[6] == cVar48);
      auVar40[7] = -(auVar43[7] == cVar49);
      auVar40[8] = -(auVar43[8] == (char)iVar6);
      auVar40[9] = -(auVar43[9] == cVar50);
      auVar40[10] = -(auVar43[10] == cVar51);
      auVar40[0xb] = -(auVar43[0xb] == cVar52);
      auVar40[0xc] = -(auVar43[0xc] == (char)iVar7);
      auVar40[0xd] = -(auVar43[0xd] == cVar53);
      auVar40[0xe] = -(auVar43[0xe] == cVar54);
      auVar40[0xf] = -(auVar43[0xf] == cVar55);
      if ((((((((((((((((SUB161(auVar40 >> 7,0) & 1) != 0 || (SUB161(auVar40 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar40 >> 0x17,0) & 1) != 0) || (SUB161(auVar40 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar40 >> 0x27,0) & 1) != 0) || (SUB161(auVar40 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar40 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar40 >> 0x3f,0) & 1) != 0) || (SUB161(auVar40 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar40 >> 0x4f,0) & 1) != 0) || (SUB161(auVar40 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar40 >> 0x5f,0) & 1) != 0) || (SUB161(auVar40 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar40 >> 0x6f,0) & 1) != 0) || (SUB161(auVar40 >> 0x77,0) & 1) != 0) ||
          auVar40[0xf] < '\0') break;
      uVar19 = uVar19 + lVar34 + 0x10;
      lVar34 = lVar34 + 0x10;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143007350);
}

