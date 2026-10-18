// VA 0x142121cf0, PDB extent 5867 bytes
// system_color::style_changes::StyleScene::changes
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/style_changes.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_color::style_changes::StyleScene::changes
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/style_changes.rs
   Extent: 5867 */

void pdb_142121cf0(longlong *param_1,undefined8 *param_2,int *param_3,char *param_4)

{
  byte *pbVar1;
  int iVar2;
  undefined8 uVar3;
  undefined2 uVar4;
  byte bVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  uint *puVar16;
  uint *puVar17;
  byte bVar18;
  uint uVar19;
  undefined8 uVar20;
  ulonglong uVar21;
  uint *puVar22;
  longlong lVar23;
  byte bVar24;
  ulonglong uVar25;
  int iVar26;
  uint uVar27;
  bool bVar28;
  float fVar29;
  float fVar30;
  int iStack_1f8;
  undefined4 uStack_1f4;
  uint *puStack_1f0;
  undefined1 uStack_1e8;
  undefined4 uStack_1e4;
  char cStack_1e0;
  char cStack_1df;
  undefined2 uStack_1de;
  int iStack_1dc;
  int iStack_1d8;
  byte bStack_1d4;
  undefined1 uStack_1d3;
  undefined2 uStack_1d2;
  float fStack_1d0;
  uint uStack_1cc;
  uint uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  float fStack_1bc;
  byte bStack_1b8;
  undefined1 uStack_1b7;
  undefined1 uStack_1b6;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  int iStack_198;
  int iStack_194;
  ulonglong uStack_190;
  undefined8 uStack_188;
  undefined1 uStack_17b;
  undefined2 uStack_17a;
  undefined4 uStack_178;
  int iStack_174;
  char *pcStack_170;
  longlong lStack_168;
  longlong lStack_160;
  longlong lStack_158;
  ulonglong uStack_150;
  ulonglong uStack_148;
  undefined8 uStack_140;
  uint *puStack_138;
  undefined8 uStack_130;
  char cStack_128;
  char cStack_127;
  undefined2 uStack_126;
  int iStack_124;
  int iStack_120;
  byte bStack_11c;
  char cStack_11b;
  undefined2 uStack_11a;
  float fStack_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint uStack_108;
  float fStack_104;
  byte bStack_100;
  byte bStack_ff;
  char acStack_fe [6];
  ulonglong uStack_f8;
  ulonglong uStack_f0;
  uint *puStack_e8;
  uint uStack_e0;
  uint uStack_dc;
  uint *puStack_d8;
  uint uStack_cc;
  uint *puStack_c8;
  ulonglong uStack_c0;
  uint *puStack_b8;
  ulonglong uStack_b0;
  undefined1 uStack_a7;
  char cStack_a6;
  byte bStack_a5;
  uint uStack_a4;
  ulonglong uStack_a0;
  char cStack_95;
  uint uStack_94;
  undefined8 uStack_90;
  
  uStack_90 = 0xfffffffffffffffe;
  lStack_168 = 0;
  lStack_160 = 8;
  lStack_158 = 0;
  cVar7 = *param_4;
  if (*param_3 == 0) {
    if (cVar7 != '\0') goto LAB_142122365;
    uVar3 = *(undefined8 *)(param_3 + 2);
    lVar13 = pdb_140b0e4b0(*param_2,uVar3);
    uVar20 = uVar3;
    pdb_1421210e0(&iStack_1f8);
    bStack_11c = (byte)uVar20;
    iStack_174 = (int)param_2;
    if ((lVar13 == 0) || (uStack_f8 = CONCAT44(uStack_f8._4_4_,iStack_1f8), iStack_1f8 == 2))
    goto LAB_142122edb;
    pcStack_170 = (char *)CONCAT44(pcStack_170._4_4_,uStack_1f4);
    uStack_190 = CONCAT44(uStack_190._4_4_,uStack_1e4);
    cStack_95 = cStack_1e0;
    cStack_a6 = cStack_1df;
    uStack_17a = uStack_1de;
    iStack_198 = iStack_1dc;
    iStack_194 = iStack_1d8;
    uStack_a0 = CONCAT71(uStack_a0._1_7_,uStack_1d3);
    uStack_cc = uStack_1cc;
    uStack_a4 = uStack_1c8;
    uStack_f0 = CONCAT44(uStack_f0._4_4_,uStack_1c4);
    puStack_e8 = (uint *)CONCAT71(puStack_e8._1_7_,uStack_1b7);
    puStack_d8 = (uint *)CONCAT71(puStack_d8._1_7_,uStack_1b6);
    puStack_c8 = (uint *)CONCAT44(puStack_c8._4_4_,uStack_1c0);
    cVar7 = pdb_140c33150(lVar13);
    uStack_94._0_1_ = cVar7;
    cVar7 = pdb_1408ff980(lVar13 + 0x6a);
    if ((byte)uStack_a0 != '\x02') {
      puStack_b8 = (uint *)CONCAT44(puStack_b8._4_4_,iStack_1d8);
      uStack_c0 = CONCAT44(iStack_1dc,CONCAT22(uStack_1de,CONCAT11(cStack_1df,cStack_1e0)));
      iStack_174 = (uint)uStack_190;
      bStack_11c = bStack_1d4;
    }
    bStack_100 = bStack_1b8;
    acStack_fe[0] = (char)puStack_d8;
    bStack_ff = (byte)puStack_e8;
    fStack_118 = fStack_1d0;
    uStack_114 = uStack_cc;
    uStack_110 = uStack_a4;
    uStack_10c = (uint)uStack_f0;
    uStack_108 = (uint)puStack_c8;
    fStack_104 = fStack_1bc;
    puStack_138 = puStack_1f0;
    uStack_130 = CONCAT71(uStack_130._1_7_,uStack_1e8);
    uStack_140 = CONCAT44((int)pcStack_170,(int)uStack_f8);
    uStack_130 = CONCAT44(iStack_174,(undefined4)uStack_130);
    cStack_128 = (char)uStack_c0;
    cStack_127 = (char)(uStack_c0 >> 8);
    uStack_126 = (undefined2)(uStack_c0 >> 0x10);
    iStack_124 = (int)(uStack_c0 >> 0x20);
    iStack_120 = (int)puStack_b8;
    cStack_11b = (byte)uStack_a0;
    uStack_11a = uStack_1d2;
    pbVar1 = (byte *)(param_4 + 0x44);
    fVar29 = fStack_1bc;
    fVar30 = fStack_1d0;
    if (cVar7 == '\0') {
      bVar18 = *pbVar1;
      bStack_100 = bVar18;
      bStack_a5 = bStack_11c;
      cVar7 = pdb_1408ff980(pbVar1);
      uVar27 = *(uint *)(param_4 + 0x40);
      uVar19 = uVar27;
      uStack_dc = uVar27;
      uVar11 = uStack_cc;
      if (cVar7 == '\0') {
        uStack_dc = uStack_a4;
        uStack_114 = uVar27;
        uVar19 = uStack_110;
        uVar11 = uVar27;
      }
      uStack_110 = uVar19;
      uStack_150 = (ulonglong)uVar11;
      cVar7 = pdb_1408ff980(&bStack_100);
      uStack_e0 = (uint)puStack_c8;
      if (cVar7 != '\0') {
        if (param_4[0x14] != '\0') {
          uStack_108 = *(uint *)(param_4 + 0x18);
          uStack_e0 = uStack_108;
        }
        if (*(int *)(param_4 + 0x1c) == 1) {
          fStack_104 = ((float)((ulonglong)puStack_1f0 >> 0x20) - SUB84(puStack_1f0,0)) *
                       *(float *)(param_4 + 0x20) + SUB84(puStack_1f0,0);
          fVar29 = fStack_104;
        }
      }
      cVar7 = param_4[0x46];
      if (cVar7 == '\x03') {
        bVar24 = (byte)puStack_e8;
        cVar7 = (char)puStack_d8;
        bVar5 = bStack_ff;
        cVar8 = acStack_fe[0];
        if ((byte)uStack_94 != '\0') {
LAB_14212278a:
          acStack_fe[0] = cVar8;
          cVar8 = pdb_1408ff980(&bStack_100);
          if ((cVar8 == '\0') || (bVar24 = param_4[0x45], bVar5 = bVar24, bVar24 == 2))
          goto LAB_1421227df;
        }
      }
      else {
        uStack_178 = CONCAT31(uStack_178._1_3_,cVar7);
        cVar8 = cVar7;
        if ((byte)uStack_94 != '\0') goto LAB_14212278a;
        cVar8 = pdb_140901380(pbVar1);
        bVar24 = (byte)puStack_e8;
        cVar7 = (char)puStack_d8;
        bVar5 = bStack_ff;
        if (cVar8 == '\0') goto LAB_1421227e7;
        cVar7 = pdb_140a937c0(&uStack_178);
        acStack_fe[0] = cVar7;
LAB_1421227df:
        bVar24 = (byte)puStack_e8;
        bVar5 = bStack_ff;
      }
LAB_1421227e7:
      bStack_ff = bVar5;
      cVar8 = pdb_140901380(&bStack_100);
      if ((cVar8 != '\0') &&
         ((((int)uStack_150 - 4U < 7 || ((int)uStack_150 == 0xc)) && (param_4[4] != '\0')))) {
        fStack_118 = *(float *)(param_4 + 8);
        fVar30 = fStack_118;
      }
      cVar8 = pdb_1408ff980(&bStack_100);
      if (cVar8 == '\0') {
        uVar27 = (uint)uStack_f0;
        if ((byte)uStack_94 != '\0') {
          cVar8 = pdb_1408ff990(acStack_fe);
          uVar27 = (uint)uStack_f0;
          if (cVar8 != '\0') goto LAB_14212284d;
        }
      }
      else {
LAB_14212284d:
        uVar27 = (uint)uStack_f0;
        if (*(int *)(param_4 + 0x2c) != 0 || *(int *)(param_4 + 0xc) != 0) {
          uStack_10c = *(uint *)(param_4 +
                                (ulonglong)(byte)((byte)*(int *)(param_4 + 0xc) ^ 1) * 0x20 + 0x10);
          uVar27 = uStack_10c;
        }
      }
      if ((uint)uStack_f8 == 0) {
        uStack_188 = (uint *)((ulonglong)uStack_188._4_4_ << 0x20);
      }
      else {
        uStack_188 = (uint *)CONCAT44(uStack_188._4_4_,1);
        if (param_4[0x24] == '\0') {
          uStack_148 = CONCAT44(uStack_148._4_4_,(int)pcStack_170);
        }
        else {
          uStack_148 = CONCAT44(uStack_148._4_4_,*(undefined4 *)(param_4 + 0x28));
          uStack_140 = CONCAT44(*(undefined4 *)(param_4 + 0x28),1);
        }
      }
      uStack_94 = CONCAT31(uStack_94._1_3_,2);
      if ((byte)uStack_a0 != '\x02') {
        if (param_4[0x34] == '\0') {
          if ((bStack_a5 & 1) == 0) {
            iStack_174 = *(int *)(param_4 + 0x38);
            uStack_130 = CONCAT44(iStack_174,(undefined4)uStack_130);
          }
        }
        else if ((param_4[0x34] != '\x02') && ((bStack_a5 & 1) != 0)) {
          cStack_127 = param_4[0x35];
          cStack_11b = param_4[0x36];
          cStack_128 = '\x02';
          iStack_124 = (int)*(undefined8 *)(param_4 + 0x38);
          iStack_120 = (int)((ulonglong)*(undefined8 *)(param_4 + 0x38) >> 0x20);
          uStack_94 = CONCAT31(uStack_94._1_3_,cStack_11b);
          goto LAB_142122946;
        }
        uStack_94 = CONCAT31(uStack_94._1_3_,(byte)uStack_a0);
      }
    }
    else {
      cVar7 = pdb_1408ff980(pbVar1);
      uVar27 = *(uint *)(param_4 + 0x40);
      if (cVar7 == '\0') {
        uVar11 = ~((uVar27 / 100000) * 100000) + uVar27;
        uVar27 = 0;
        if (uVar11 < 0xc) {
          uVar27 = *(uint *)(&UNK_14345fc90 + (ulonglong)uVar11 * 4);
        }
      }
      uStack_e0 = (uint)puStack_c8;
      uStack_dc = uStack_a4;
      uStack_150 = (ulonglong)uStack_cc;
      uStack_94 = CONCAT31(uStack_94._1_3_,(byte)uStack_a0);
      uStack_148 = CONCAT44(uStack_148._4_4_,(int)pcStack_170);
      uStack_188 = (uint *)CONCAT44(uStack_188._4_4_,(uint)uStack_f8);
      bVar24 = (byte)puStack_e8;
      cVar7 = (char)puStack_d8;
      uStack_10c = uVar27;
      bVar18 = bStack_1b8;
    }
LAB_142122946:
    uStack_c0 = 0;
    puStack_b8 = (uint *)0x8;
    uStack_b0 = 0;
    bVar28 = ((bVar18 ^ bStack_1b8) & 1) == 0;
    if (bVar28) {
    }
    else {
      pdb_142d7e6e0(&uStack_c0);
      *(undefined1 *)puStack_b8 = 3;
      *(byte *)((longlong)puStack_b8 + 1) = bStack_1b8 & 1;
      *(byte *)((longlong)puStack_b8 + 2) = bVar18 & 1;
      *(undefined8 *)(puStack_b8 + 6) = uVar3;
    }
    uStack_b0 = (ulonglong)!bVar28;
    uVar25 = (ulonglong)!bVar28;
    if (((char)puStack_d8 != '\x03') && ((char)puStack_d8 != cVar7)) {
      if (uVar25 == uStack_c0) {
        pdb_142d7e6e0(&uStack_c0);
      }
      uVar21 = (ulonglong)!bVar28;
      *(undefined1 *)(puStack_b8 + uVar21 * 8) = 4;
      *(char *)((longlong)puStack_b8 + uVar21 * 0x20 + 1) = (char)puStack_d8;
      *(char *)((longlong)puStack_b8 + uVar21 * 0x20 + 2) = cVar7;
      *(undefined8 *)(puStack_b8 + uVar21 * 8 + 6) = uVar3;
      uVar25 = uVar25 + 1;
      uStack_b0 = uVar25;
    }
    if (((bVar24 ^ (byte)puStack_e8) & 1) != 0) {
      if (uVar25 == uStack_c0) {
        pdb_142d7e6e0(&uStack_c0);
      }
      uVar21 = (ulonglong)(uint)((int)uVar25 << 5);
      *(undefined1 *)((longlong)puStack_b8 + uVar21) = 5;
      *(byte *)((longlong)puStack_b8 + uVar21 + 1) = (byte)puStack_e8 & 1;
      *(byte *)((longlong)puStack_b8 + uVar21 + 2) = bVar24 & 1;
      *(undefined8 *)((longlong)puStack_b8 + uVar21 + 0x18) = uVar3;
      uVar25 = uVar25 + 1;
      uStack_b0 = uVar25;
    }
    if ((fStack_1d0 != fVar30) || (NAN(fStack_1d0) || NAN(fVar30))) {
      if (uVar25 == uStack_c0) {
        pdb_142d7e6e0(&uStack_c0);
      }
      uVar21 = (ulonglong)(uint)((int)uVar25 << 5);
      *(undefined1 *)((longlong)puStack_b8 + uVar21) = 6;
      *(float *)((longlong)puStack_b8 + uVar21 + 4) = fStack_1d0;
      *(float *)((longlong)puStack_b8 + uVar21 + 8) = fVar30;
      *(undefined8 *)((longlong)puStack_b8 + uVar21 + 0x18) = uVar3;
      uVar25 = uVar25 + 1;
      uStack_b0 = uVar25;
    }
    if (uStack_cc != (uint)uStack_150) {
      if (uVar25 == uStack_c0) {
        pdb_142d7e6e0(&uStack_c0);
      }
      uVar21 = (ulonglong)(uint)((int)uVar25 << 5);
      *(undefined1 *)((longlong)puStack_b8 + uVar21) = 7;
      *(uint *)((longlong)puStack_b8 + uVar21 + 4) = uStack_cc;
      *(int *)((longlong)puStack_b8 + uVar21 + 8) = (int)uStack_150;
      *(undefined8 *)((longlong)puStack_b8 + uVar21 + 0x18) = uVar3;
      uVar25 = uVar25 + 1;
      uStack_b0 = uVar25;
    }
    if (uStack_a4 != uStack_dc) {
      if (uVar25 == uStack_c0) {
        pdb_142d7e6e0(&uStack_c0);
      }
      uVar21 = (ulonglong)(uint)((int)uVar25 << 5);
      *(undefined1 *)((longlong)puStack_b8 + uVar21) = 8;
      *(uint *)((longlong)puStack_b8 + uVar21 + 4) = uStack_a4;
      *(uint *)((longlong)puStack_b8 + uVar21 + 8) = uStack_dc;
      *(undefined8 *)((longlong)puStack_b8 + uVar21 + 0x18) = uVar3;
      uVar25 = uVar25 + 1;
      uStack_b0 = uVar25;
    }
    if ((uint)uStack_f0 != uVar27) {
      if (uVar25 == uStack_c0) {
        pdb_142d7e6e0(&uStack_c0);
      }
      uVar21 = (ulonglong)(uint)((int)uVar25 << 5);
      *(undefined1 *)((longlong)puStack_b8 + uVar21) = 9;
      *(uint *)((longlong)puStack_b8 + uVar21 + 4) = (uint)uStack_f0;
      *(uint *)((longlong)puStack_b8 + uVar21 + 8) = uVar27;
      *(undefined8 *)((longlong)puStack_b8 + uVar21 + 0x18) = uVar3;
      uVar25 = uVar25 + 1;
      uStack_b0 = uVar25;
    }
    if ((uint)puStack_c8 != uStack_e0) {
      if (uVar25 == uStack_c0) {
        pdb_142d7e6e0(&uStack_c0);
      }
      uVar21 = (ulonglong)(uint)((int)uVar25 << 5);
      *(undefined1 *)((longlong)puStack_b8 + uVar21) = 0xb;
      *(uint *)((longlong)puStack_b8 + uVar21 + 4) = (uint)puStack_c8;
      *(uint *)((longlong)puStack_b8 + uVar21 + 8) = uStack_e0;
      *(undefined8 *)((longlong)puStack_b8 + uVar21 + 0x18) = uVar3;
      uVar25 = uVar25 + 1;
      uStack_b0 = uVar25;
    }
    if ((fStack_1bc != fVar29) || (NAN(fStack_1bc) || NAN(fVar29))) {
      if (uVar25 == uStack_c0) {
        pdb_142d7e6e0(&uStack_c0);
      }
      uVar21 = (ulonglong)(uint)((int)uVar25 << 5);
      *(undefined1 *)((longlong)puStack_b8 + uVar21) = 0xc;
      *(float *)((longlong)puStack_b8 + uVar21 + 4) = fStack_1bc;
      *(float *)((longlong)puStack_b8 + uVar21 + 8) = fVar29;
      *(undefined8 *)((longlong)puStack_b8 + uVar21 + 0x18) = uVar3;
      uVar25 = uVar25 + 1;
      uStack_b0 = uVar25;
    }
    if (((uint)uStack_f8 & (uint)uStack_188) != 0) {
      if ((int)pcStack_170 != (int)uStack_148) {
        if (uVar25 == uStack_c0) {
          pdb_142d7e6e0(&uStack_c0);
        }
        uVar21 = (ulonglong)(uint)((int)uVar25 << 5);
        *(undefined1 *)((longlong)puStack_b8 + uVar21) = 10;
        *(int *)((longlong)puStack_b8 + uVar21 + 4) = (int)pcStack_170;
        *(int *)((longlong)puStack_b8 + uVar21 + 8) = (int)uStack_148;
        *(undefined8 *)((longlong)puStack_b8 + uVar21 + 0x18) = uVar3;
        uVar25 = uVar25 + 1;
        uStack_b0 = uVar25;
      }
    }
    iVar26 = iStack_120;
    iVar2 = iStack_124;
    uVar4 = uStack_126;
    cVar8 = cStack_127;
    cVar7 = cStack_128;
    if (((byte)uStack_a0 == '\x02') || ((byte)uStack_94 == '\x02')) {
LAB_142122ea7:
      if (uVar25 != 0) goto LAB_142122e58;
      lStack_158 = 0;
      uVar25 = uStack_c0;
      puVar16 = puStack_b8;
    }
    else {
      if ((uint)uStack_190 != iStack_174) {
        if (uVar25 == uStack_c0) {
          pdb_142d7e6e0(&uStack_c0);
        }
        uVar21 = (ulonglong)(uint)((int)uVar25 << 5);
        *(undefined1 *)((longlong)puStack_b8 + uVar21) = 0xd;
        *(uint *)((longlong)puStack_b8 + uVar21 + 4) = (uint)uStack_190;
        *(int *)((longlong)puStack_b8 + uVar21 + 8) = iStack_174;
        *(undefined8 *)((longlong)puStack_b8 + uVar21 + 0x18) = uVar3;
        uVar25 = uVar25 + 1;
        uStack_b0 = uVar25;
      }
      if (cStack_95 == cVar7) {
        if ((cStack_95 == '\x02') &&
           ((iStack_198 != iVar2 || iStack_194 != iVar26) || cStack_a6 != cVar8)) {
LAB_142122d63:
          if (uVar25 == uStack_c0) {
            pdb_142d7e6e0(&uStack_c0);
          }
          uVar21 = (ulonglong)(uint)((int)uVar25 << 5);
          *(char *)((longlong)puStack_b8 + uVar21) = cStack_95;
          *(char *)((longlong)puStack_b8 + uVar21 + 1) = cStack_a6;
          *(undefined2 *)((longlong)puStack_b8 + uVar21 + 2) = uStack_17a;
          *(int *)((longlong)puStack_b8 + uVar21 + 4) = iStack_198;
          *(int *)((longlong)puStack_b8 + uVar21 + 8) = iStack_194;
          *(char *)((longlong)puStack_b8 + uVar21 + 0xc) = cVar7;
          *(char *)((longlong)puStack_b8 + uVar21 + 0xd) = cVar8;
          *(undefined2 *)((longlong)puStack_b8 + uVar21 + 0xe) = uVar4;
          *(int *)((longlong)puStack_b8 + uVar21 + 0x10) = iVar2;
          *(int *)((longlong)puStack_b8 + uVar21 + 0x14) = iVar26;
          *(undefined8 *)((longlong)puStack_b8 + uVar21 + 0x18) = uVar3;
          uVar25 = uVar25 + 1;
          uStack_b0 = uVar25;
        }
      }
      else if (cStack_95 != '\x03') goto LAB_142122d63;
      if ((((byte)uStack_94 ^ (byte)uStack_a0) & 1) == 0) goto LAB_142122ea7;
      if (uVar25 == uStack_c0) {
        pdb_142d7e6e0(&uStack_c0);
      }
      uVar21 = (ulonglong)(uint)((int)uVar25 << 5);
      *(undefined1 *)((longlong)puStack_b8 + uVar21) = 0xf;
      *(byte *)((longlong)puStack_b8 + uVar21 + 1) = (byte)uStack_a0 & 1;
      *(byte *)((longlong)puStack_b8 + uVar21 + 2) = (byte)uStack_94 & 1;
      *(undefined8 *)((longlong)puStack_b8 + uVar21 + 0x18) = uVar3;
      uVar25 = uVar25 + 1;
LAB_142122e58:
      puStack_c8 = puStack_b8;
      uStack_a0 = uStack_c0;
      pdb_142d7f1b0(&lStack_168,0,uVar25,8,0x20);
      puVar16 = puStack_c8;
      lVar13 = lStack_158;
      pub_142e32760(lStack_158 * 0x20 + lStack_160,puStack_c8,(int)uVar25 << 5);
      lStack_158 = lVar13 + uVar25;
      uVar25 = uStack_a0;
    }
    if (uVar25 == 0) goto LAB_142122edb;
    uVar25 = uVar25 << 5;
    uVar21 = 8;
  }
  else {
    if (*param_3 == 1) {
      if (cVar7 == '\0') {
        pdb_140a60320(&uStack_c0,param_2[8],param_3[1]);
        uVar25 = uStack_b0;
        puVar16 = puStack_b8;
        if (1 < uStack_b0) {
          if (uStack_b0 < 0x15) {
            puVar17 = puStack_b8 + 1;
            lVar13 = 4;
            do {
              uVar11 = puVar17[-1];
              uVar27 = *puVar17;
              lVar23 = lVar13;
              if (uVar27 < uVar11) {
                do {
                  *(uint *)((longlong)puStack_b8 + lVar23) = uVar11;
                  puVar22 = puStack_b8;
                  if (lVar23 == 4) goto LAB_142122f38;
                  uVar11 = *(uint *)((longlong)puStack_b8 + lVar23 + -8);
                  lVar23 = lVar23 + -4;
                } while (uVar27 < uVar11);
                puVar22 = (uint *)(lVar23 + (longlong)puStack_b8);
LAB_142122f38:
                *puVar22 = uVar27;
              }
              puVar17 = puVar17 + 1;
              lVar13 = lVar13 + 4;
            } while (puVar17 != puStack_b8 + uStack_b0);
          }
          else {
            uStack_a7 = 1;
            pdb_1428b08f0(puStack_b8,uStack_b0,&uStack_17b);
          }
        }
        uStack_148 = uStack_c0;
        puStack_e8 = puVar16 + uVar25;
        uStack_f8 = param_2[0x18];
        pcStack_170 = param_4 + 0x44;
        uVar27 = *(uint *)(param_4 + 0x40);
        uStack_f0 = (ulonglong)uVar27;
        uStack_dc = uVar27 + 100000;
        uStack_150 = CONCAT44(uStack_150._4_4_,*(uint *)(param_4 + 0x2c) | *(uint *)(param_4 + 0xc))
        ;
        uStack_94 = *(uint *)(param_4 + (ulonglong)(*(uint *)(param_4 + 0x2c) << 5) + 0x10);
        uStack_e0 = (uint)(byte)param_4[0x47];
        uStack_190 = (ulonglong)(uVar27 % 100000 - 1);
        uStack_188 = puVar16;
        while (puVar16 != puStack_e8) {
          uVar27 = *puVar16;
          piVar12 = (int *)pdb_140c40010(uStack_f8,uVar27);
          puVar16 = puVar16 + 1;
          if ((piVar12 != (int *)0x0) && (*piVar12 == 7)) {
            lVar13 = pdb_140901490(piVar12 + 0xe,&UNK_14345fa40);
            cVar7 = *(char *)(lVar13 + 0x16);
            uVar11 = piVar12[0x14];
            uStack_a0 = CONCAT44(uStack_a0._4_4_,*(undefined4 *)(lVar13 + 8));
            puStack_d8 = (uint *)CONCAT44(puStack_d8._4_4_,*(undefined4 *)(lVar13 + 0xc));
            puStack_c8 = (uint *)CONCAT71(puStack_c8._1_7_,*(undefined1 *)(lVar13 + 0x14));
            uVar9 = pdb_1408ff980(pcStack_170);
            uVar10 = (uint)uStack_f0;
            cVar8 = (char)uVar9;
            uVar19 = uVar11;
            uStack_a4 = uVar10;
            if (cVar8 == '\0') {
              uStack_a4 = (uint)puStack_d8;
              uVar19 = uStack_dc;
              if ((3 < uVar10) && (uVar10 != 0xb)) {
                if ((uint)uStack_190 < 0xc) {
                    /* WARNING: Could not recover jumptable at 0x000142121f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)(&UNK_14345fd18 + *(int *)(&UNK_14345fd18 + uStack_190 * 4)))
                            (&UNK_14345fd18 + *(int *)(&UNK_14345fd18 + uStack_190 * 4));
                  return;
                }
                uStack_140 = CONCAT44(uStack_140._4_4_,3);
                uStack_178 = 0xb;
                uStack_1b4 = 3;
                uStack_1b0 = 0;
                uStack_1ac = 3;
                uStack_1a8 = 3;
                uStack_1a4 = 2;
                uStack_1a0 = 0;
                uStack_19c = 1;
                uVar19 = 0x186a3;
              }
            }
            uVar10 = (uint)(byte)puStack_c8;
            if ((char)uStack_e0 != '\x04') {
              uVar10 = uStack_e0;
            }
            cVar6 = pdb_140901360(uVar9,uVar10);
            uStack_cc = uStack_94;
            if ((int)uStack_150 == 0) {
              uStack_cc = (uint)uStack_a0;
            }
            if (cVar6 == '\0') {
              uStack_cc = (uint)uStack_a0;
            }
            uStack_140 = 0;
            puStack_138 = (uint *)0x8;
            uStack_130 = 0;
            cVar6 = (char)uVar10;
            if (cVar8 == cVar7) {
              uVar25 = 0;
              if (uVar11 != uVar19) goto LAB_14212208e;
LAB_142122055:
              if ((uint)puStack_d8 == uStack_a4) goto LAB_142122063;
LAB_1421220d4:
              if (uVar25 == uStack_140) {
                pdb_142d7e6e0(&uStack_140);
              }
              uVar21 = (ulonglong)(uint)((int)uVar25 << 5);
              *(undefined1 *)((longlong)puStack_138 + uVar21) = 0x10;
              *(undefined1 *)((longlong)puStack_138 + uVar21 + 4) = 2;
              *(uint *)((longlong)puStack_138 + uVar21 + 8) = (uint)puStack_d8;
              *(uint *)((longlong)puStack_138 + uVar21 + 0xc) = uStack_a4;
              *(uint *)((longlong)puStack_138 + uVar21 + 0x10) = uVar27;
              uVar25 = uVar25 + 1;
              uStack_130 = uVar25;
              if ((byte)puStack_c8 != cVar6) goto LAB_142122123;
LAB_14212206f:
              if ((uint)uStack_a0 != uStack_cc) {
LAB_14212216f:
                if (uVar25 == uStack_140) {
                  pdb_142d7e6e0(&uStack_140);
                }
                uVar21 = (ulonglong)(uint)((int)uVar25 << 5);
                *(undefined1 *)((longlong)puStack_138 + uVar21) = 0x10;
                *(undefined1 *)((longlong)puStack_138 + uVar21 + 4) = 4;
                *(uint *)((longlong)puStack_138 + uVar21 + 8) = (uint)uStack_a0;
                *(uint *)((longlong)puStack_138 + uVar21 + 0xc) = uStack_cc;
                *(uint *)((longlong)puStack_138 + uVar21 + 0x10) = uVar27;
                uVar25 = uVar25 + 1;
              }
            }
            else {
              pdb_142d7e6e0(&uStack_140);
              *(undefined1 *)puStack_138 = 0x10;
              *(undefined1 *)(puStack_138 + 1) = 0;
              *(char *)((longlong)puStack_138 + 5) = cVar7;
              *(char *)((longlong)puStack_138 + 6) = cVar8;
              puStack_138[4] = uVar27;
              uStack_130 = 1;
              uVar25 = 1;
              if (uVar11 == uVar19) goto LAB_142122055;
LAB_14212208e:
              if (uVar25 == uStack_140) {
                pdb_142d7e6e0(&uStack_140);
              }
              uVar21 = (ulonglong)(uint)((int)uVar25 << 5);
              *(undefined1 *)((longlong)puStack_138 + uVar21) = 0x10;
              *(undefined1 *)((longlong)puStack_138 + uVar21 + 4) = 1;
              *(uint *)((longlong)puStack_138 + uVar21 + 8) = uVar11;
              *(uint *)((longlong)puStack_138 + uVar21 + 0xc) = uVar19;
              *(uint *)((longlong)puStack_138 + uVar21 + 0x10) = uVar27;
              uVar25 = uVar25 + 1;
              uStack_130 = uVar25;
              if ((uint)puStack_d8 != uStack_a4) goto LAB_1421220d4;
LAB_142122063:
              if ((byte)puStack_c8 == cVar6) goto LAB_14212206f;
LAB_142122123:
              if (uVar25 == uStack_140) {
                pdb_142d7e6e0(&uStack_140);
              }
              uVar21 = (ulonglong)(uint)((int)uVar25 << 5);
              *(undefined1 *)((longlong)puStack_138 + uVar21) = 0x10;
              *(undefined1 *)((longlong)puStack_138 + uVar21 + 4) = 3;
              *(byte *)((longlong)puStack_138 + uVar21 + 5) = (byte)puStack_c8;
              *(char *)((longlong)puStack_138 + uVar21 + 6) = cVar6;
              *(uint *)((longlong)puStack_138 + uVar21 + 0x10) = uVar27;
              uVar25 = uVar25 + 1;
              uStack_130 = uVar25;
              if ((uint)uStack_a0 != uStack_cc) goto LAB_14212216f;
            }
            if ((ulonglong)(lStack_168 - lStack_158) < uVar25) {
              puStack_c8 = puStack_138;
              uStack_a0 = uStack_140;
              pdb_142d7f1b0(&lStack_168,lStack_158,uVar25,8,0x20);
              uVar21 = uStack_a0;
              puVar17 = puStack_c8;
LAB_1421221cb:
              lVar13 = lStack_158;
              pub_142e32760(lStack_158 * 0x20 + lStack_160,puVar17,(int)uVar25 << 5);
            }
            else {
              lVar13 = lStack_158;
              uVar21 = uStack_140;
              puVar17 = puStack_138;
              if (uVar25 != 0) goto LAB_1421221cb;
            }
            lStack_158 = lVar13 + uVar25;
            if (uVar21 != 0) {
              pub_1406abac0((byte *)puVar17,uVar21 << 5,8);
            }
          }
        }
        if (uStack_148 == 0) goto LAB_142122edb;
        uVar25 = uStack_148 << 2;
        uVar21 = 4;
        puVar16 = uStack_188;
        goto LAB_142122ed6;
      }
    }
    else if (cVar7 == '\0') goto LAB_142122edb;
LAB_142122365:
    pdb_1421248e0(&uStack_140,param_2);
    uStack_f8 = uStack_140;
    puStack_c8 = puStack_138 + uStack_130;
    puStack_e8 = (uint *)param_2[0x18];
    iVar2 = *(int *)(param_4 + 4);
    uStack_a0 = CONCAT44(uStack_a0._4_4_,*(undefined4 *)(param_4 + 8));
    puStack_d8 = puStack_138;
    puVar16 = puStack_138;
    while (puVar16 != puStack_c8) {
      uVar27 = *puVar16;
      plVar14 = (longlong *)pdb_140c40010(puStack_e8,uVar27);
      lVar13 = lStack_158;
      if (plVar14 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_14345fb88);
      }
      iVar26 = iVar2;
      if ((iVar2 == 999) && (iVar26 = 999, *plVar14 == 0)) {
        iVar26 = 0;
      }
      lVar23 = plVar14[10];
      if ((int)lVar23 != iVar26) {
        if (lStack_158 == lStack_168) {
          pdb_142d7e6e0(&lStack_168);
        }
        lVar15 = lVar13 * 0x20;
        *(undefined1 *)(lStack_160 + lVar15) = 0x11;
        *(int *)(lStack_160 + 4 + lVar15) = (int)lVar23;
        *(int *)(lStack_160 + 8 + lVar15) = iVar26;
        *(uint *)(lStack_160 + 0xc + lVar15) = uVar27;
        lStack_158 = lVar13 + 1;
      }
      piVar12 = (int *)pdb_1409014f0(plVar14 + 7,&UNK_14345fba0);
      lVar13 = lStack_158;
      puVar16 = puVar16 + 1;
      iVar26 = *piVar12;
      if (iVar26 != (uint)uStack_a0) {
        if (lStack_158 == lStack_168) {
          pdb_142d7e6e0(&lStack_168);
        }
        lVar23 = lVar13 * 0x20;
        *(undefined1 *)(lStack_160 + lVar23) = 0x12;
        *(int *)(lStack_160 + 4 + lVar23) = iVar26;
        *(uint *)(lStack_160 + 8 + lVar23) = (uint)uStack_a0;
        *(uint *)(lStack_160 + 0xc + lVar23) = uVar27;
        lStack_158 = lVar13 + 1;
      }
    }
    if (uStack_f8 == 0) goto LAB_142122edb;
    uVar25 = uStack_f8 << 2;
    uVar21 = 4;
    puVar16 = puStack_d8;
  }
LAB_142122ed6:
  pub_1406abac0((byte *)puVar16,uVar25,uVar21);
LAB_142122edb:
  param_1[2] = lStack_158;
  *param_1 = lStack_168;
  param_1[1] = lStack_160;
  return;
}

