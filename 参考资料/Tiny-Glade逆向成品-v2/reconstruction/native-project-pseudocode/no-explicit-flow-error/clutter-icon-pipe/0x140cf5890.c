// VA 0x140cf5890, PDB extent 2086 bytes
// clutter_icon_pipe::IconMapTextures::get
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-icon-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: clutter_icon_pipe::IconMapTextures::get
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-icon-pipe/src/lib.rs
   Extent: 2086 */

undefined8 pdb_140cf5890(longlong *param_1,ulonglong param_2,undefined8 param_3,ulonglong *param_4)

{
  char *pcVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  ushort uVar14;
  longlong lVar15;
  byte bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined8 uStack_198;
  uint uStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  ulonglong uStack_178;
  undefined8 uStack_170;
  ulonglong uStack_168;
  ulonglong uStack_160;
  byte *pbStack_158;
  undefined8 uStack_150;
  ulonglong uStack_148;
  ulonglong uStack_140;
  ulonglong uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulonglong uStack_f0;
  ulonglong uStack_e8;
  ulonglong uStack_e0;
  ulonglong uStack_d8;
  byte *pbStack_d0;
  ulonglong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulonglong uStack_88;
  ulonglong uStack_80;
  ulonglong uStack_78;
  ulonglong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulonglong *puStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_178 = param_2;
  uStack_170 = param_3;
  if (*param_4 == 2) {
    uStack_80 = param_1[0xe];
    if (uStack_80 == 0) {
      lVar13 = param_1[7];
      uVar6 = pdb_140e19580(1,1);
      uStack_78 = (ulonglong)uVar6 << 0x20;
      uStack_70 = 0x12b010800010001;
      uStack_68 = CONCAT71(uStack_68._1_7_,2);
      pbStack_d0 = &UNK_1430885c2;
      uStack_c8 = 4;
      uStack_d8 = 3;
      pdb_141afce80(&uStack_140,lVar13,&UNK_1430885c6,0x1c,&uStack_78,&uStack_d8);
      if (uStack_140 != 0xb) {
        uStack_98 = uStack_100;
        uStack_90 = uStack_f8;
        uStack_a8 = uStack_110;
        uStack_a0 = uStack_108;
        uStack_b8 = uStack_120;
        uStack_b0 = uStack_118;
        uStack_c8 = uStack_130;
        uStack_c0 = uStack_128;
        uStack_d8 = uStack_140;
        pbStack_d0 = (byte *)uStack_138;
        pdb_142df7fb0(&uStack_d8);
        return 1;
      }
      uStack_80 = uStack_138;
      puStack_50 = (ulonglong *)(param_1 + 0xe);
      if (*puStack_50 != 0) {
        pdb_141d52180(puStack_50);
      }
      *puStack_50 = uStack_80;
    }
    goto LAB_140cf5b44;
  }
  uVar8 = param_4[1];
  uVar9 = param_4[2];
  uStack_e8 = uVar8;
  uStack_e0 = uVar9;
  if ((*param_4 & 1) == 0) {
    uStack_f0 = 0;
    uVar12 = param_2;
    if (param_1[0xb] != 0) {
      uVar7 = pdb_141d61e40(param_1 + 0xc,&uStack_f0);
      uVar12 = param_1[9];
      bVar16 = (byte)(uVar7 >> 0x39);
      auVar17 = ZEXT216(CONCAT11(bVar16,bVar16));
      auVar17 = pshuflw(auVar17,auVar17,0);
      lVar13 = 0;
      while( true ) {
        uVar7 = uVar7 & uVar12;
        pcVar1 = (char *)(param_1[8] + uVar7);
        auVar21[0] = -(*pcVar1 == auVar17[0]);
        auVar21[1] = -(pcVar1[1] == auVar17[1]);
        auVar21[2] = -(pcVar1[2] == auVar17[2]);
        auVar21[3] = -(pcVar1[3] == auVar17[3]);
        auVar21[4] = -(pcVar1[4] == auVar17[4]);
        auVar21[5] = -(pcVar1[5] == auVar17[5]);
        auVar21[6] = -(pcVar1[6] == auVar17[6]);
        auVar21[7] = -(pcVar1[7] == auVar17[7]);
        auVar21[8] = -(pcVar1[8] == auVar17[0]);
        auVar21[9] = -(pcVar1[9] == auVar17[1]);
        auVar21[10] = -(pcVar1[10] == auVar17[2]);
        auVar21[0xb] = -(pcVar1[0xb] == auVar17[3]);
        auVar21[0xc] = -(pcVar1[0xc] == auVar17[4]);
        auVar21[0xd] = -(pcVar1[0xd] == auVar17[5]);
        auVar21[0xe] = -(pcVar1[0xe] == auVar17[6]);
        auVar21[0xf] = -(pcVar1[0xf] == auVar17[7]);
        uVar14 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe | (ushort)(auVar21[0xf] >> 7) << 0xf
        ;
        uVar6 = (uint)uVar14;
        while (uVar14 != 0) {
          uVar4 = 0;
          for (uVar5 = uVar6; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
            uVar4 = uVar4 + 1;
          }
          lVar15 = param_1[8] + (uVar4 + uVar7 & uVar12) * -0x20;
          if (((*(char *)(lVar15 + -0x20) == '\0') && (uVar8 == *(ulonglong *)(lVar15 + -0x18))) &&
             (uVar9 == *(ulonglong *)(lVar15 + -0x10))) goto LAB_140cf5b40;
          uVar14 = (ushort)(uVar6 - 1) & (ushort)uVar6;
          uVar6 = CONCAT22((short)(uVar6 - 1 >> 0x10),uVar14);
        }
        auVar19[0] = -(*pcVar1 == -1);
        auVar19[1] = -(pcVar1[1] == -1);
        auVar19[2] = -(pcVar1[2] == -1);
        auVar19[3] = -(pcVar1[3] == -1);
        auVar19[4] = -(pcVar1[4] == -1);
        auVar19[5] = -(pcVar1[5] == -1);
        auVar19[6] = -(pcVar1[6] == -1);
        auVar19[7] = -(pcVar1[7] == -1);
        auVar19[8] = -(pcVar1[8] == -1);
        auVar19[9] = -(pcVar1[9] == -1);
        auVar19[10] = -(pcVar1[10] == -1);
        auVar19[0xb] = -(pcVar1[0xb] == -1);
        auVar19[0xc] = -(pcVar1[0xc] == -1);
        auVar19[0xd] = -(pcVar1[0xd] == -1);
        auVar19[0xe] = -(pcVar1[0xe] == -1);
        auVar19[0xf] = -(pcVar1[0xf] == -1);
        if ((((((((((((((((SUB161(auVar19 >> 7,0) & 1) != 0 || (SUB161(auVar19 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar19 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar19 >> 0x1f,0) & 1) != 0) || (SUB161(auVar19 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar19 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar19 >> 0x37,0) & 1) != 0) || (SUB161(auVar19 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar19 >> 0x47,0) & 1) != 0) || (SUB161(auVar19 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar19 >> 0x57,0) & 1) != 0) || (SUB161(auVar19 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar19 >> 0x67,0) & 1) != 0) || (SUB161(auVar19 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar19 >> 0x77,0) & 1) != 0) || auVar19[0xf] < '\0') break;
        uVar7 = uVar7 + lVar13 + 0x10;
        lVar13 = lVar13 + 0x10;
      }
    }
    uStack_180 = (undefined4)uVar12;
    uStack_188 = pdb_140f3c9d0();
    pdb_140dace30(&uStack_d8,uVar8,uVar9);
    pdb_141d62640(&uStack_140,&uStack_d8,&uStack_178);
    if (uStack_140 == 10) {
      return 1;
    }
    uStack_58 = uStack_120;
    uStack_68 = uStack_130;
    uStack_60 = uStack_128;
    uStack_78 = uStack_140;
    uStack_70 = uStack_138;
    iVar11 = (int)&uStack_78;
    pdb_140daccf0(&uStack_160);
    pdb_140cf9ab0(&uStack_78);
    uVar8 = pdb_140f3cb70(&uStack_188);
    lVar13 = uVar8 + param_1[3];
    if (CARRY8(uVar8,param_1[3])) {
LAB_140cf5ef5:
      pdb_142dc8110(&UNK_143087ae0,0x1e,&UNK_143087b00);
      goto LAB_140cf5f29;
    }
    uVar6 = iVar11 + (int)param_1[4];
    if (999999999 < uVar6) {
      if (lVar13 == -1) goto LAB_140cf5ef5;
      lVar13 = lVar13 + 1;
      uVar6 = uVar6 + 0xc4653600;
    }
    param_1[3] = lVar13;
    *(uint *)(param_1 + 4) = uVar6;
    lVar13 = param_1[2];
    if (lVar13 == *param_1) {
      pdb_142d8d7f0(param_1);
    }
    *(ulonglong *)(param_1[1] + lVar13 * 8) = uStack_148;
    param_1[2] = lVar13 + 1;
    uStack_198 = pdb_140f3c9d0();
    lVar13 = param_1[7];
    uStack_190 = uVar6;
    uVar6 = pdb_140e19580(uStack_148 & 0xffffffff,uStack_148 >> 0x20);
    uStack_78 = (ulonglong)uVar6 << 0x20;
    uStack_70 = 0x12b010800010001;
    uStack_68 = CONCAT71(uStack_68._1_7_,2);
    pbStack_d0 = pbStack_158;
    uStack_c8 = uStack_150;
    uStack_d8 = 3;
    pdb_141afce80(&uStack_140,lVar13,param_2,param_3,&uStack_78,&uStack_d8);
    iVar11 = (int)lVar13;
    if (uStack_140 != 0xb) {
      uStack_98 = uStack_100;
      uStack_90 = uStack_f8;
      uStack_a8 = uStack_110;
      uStack_a0 = uStack_108;
      uStack_b8 = uStack_120;
      uStack_b0 = uStack_118;
      uStack_c8 = uStack_130;
      uStack_c0 = uStack_128;
      uStack_d8 = uStack_140;
      pbStack_d0 = (byte *)uStack_138;
      pdb_142df7fb0(&uStack_d8);
      if (uStack_160 != 0) {
        pub_1406abac0(pbStack_158,uStack_160,1);
      }
      return 1;
    }
    uStack_168 = uStack_138;
    uVar8 = pdb_140f3cb70(&uStack_198);
    lVar13 = uVar8 + param_1[5];
    if (!CARRY8(uVar8,param_1[5])) {
      uVar6 = iVar11 + (int)param_1[6];
      if (999999999 < uVar6) {
        if (lVar13 == -1) goto LAB_140cf5f10;
        lVar13 = lVar13 + 1;
        uVar6 = uVar6 + 0xc4653600;
      }
      param_1[5] = lVar13;
      *(uint *)(param_1 + 6) = uVar6;
      uStack_88 = uStack_138;
      param_2 = uStack_138;
      if (uStack_160 != 0) {
        pub_1406abac0(pbStack_158,uStack_160,1);
      }
      goto LAB_140cf5db8;
    }
LAB_140cf5f10:
    pdb_142dc8110(&UNK_143087ae0,0x1e,&UNK_143087b00);
    goto LAB_140cf5f29;
  }
  uStack_f0 = 1;
  uVar12 = param_2;
  if (param_1[0xb] != 0) {
    uVar7 = pdb_141d61e40(param_1 + 0xc,&uStack_f0);
    uVar12 = param_1[9];
    bVar16 = (byte)(uVar7 >> 0x39);
    auVar17 = ZEXT216(CONCAT11(bVar16,bVar16));
    auVar17 = pshuflw(auVar17,auVar17,0);
    lVar13 = 0;
    while( true ) {
      uVar7 = uVar7 & uVar12;
      pcVar1 = (char *)(param_1[8] + uVar7);
      auVar20[0] = -(*pcVar1 == auVar17[0]);
      auVar20[1] = -(pcVar1[1] == auVar17[1]);
      auVar20[2] = -(pcVar1[2] == auVar17[2]);
      auVar20[3] = -(pcVar1[3] == auVar17[3]);
      auVar20[4] = -(pcVar1[4] == auVar17[4]);
      auVar20[5] = -(pcVar1[5] == auVar17[5]);
      auVar20[6] = -(pcVar1[6] == auVar17[6]);
      auVar20[7] = -(pcVar1[7] == auVar17[7]);
      auVar20[8] = -(pcVar1[8] == auVar17[0]);
      auVar20[9] = -(pcVar1[9] == auVar17[1]);
      auVar20[10] = -(pcVar1[10] == auVar17[2]);
      auVar20[0xb] = -(pcVar1[0xb] == auVar17[3]);
      auVar20[0xc] = -(pcVar1[0xc] == auVar17[4]);
      auVar20[0xd] = -(pcVar1[0xd] == auVar17[5]);
      auVar20[0xe] = -(pcVar1[0xe] == auVar17[6]);
      auVar20[0xf] = -(pcVar1[0xf] == auVar17[7]);
      uVar14 = (ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe | (ushort)(auVar20[0xf] >> 7) << 0xf;
      uVar6 = (uint)uVar14;
      while (uVar14 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar6; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        lVar15 = param_1[8] + (uVar4 + uVar7 & uVar12) * -0x20;
        if (((*(longlong *)(lVar15 + -0x20) != 0) && (uVar8 == *(ulonglong *)(lVar15 + -0x18))) &&
           (uVar9 == *(ulonglong *)(lVar15 + -0x10))) goto LAB_140cf5b40;
        uVar14 = (ushort)(uVar6 - 1) & (ushort)uVar6;
        uVar6 = CONCAT22((short)(uVar6 - 1 >> 0x10),uVar14);
      }
      auVar18[0] = -(*pcVar1 == -1);
      auVar18[1] = -(pcVar1[1] == -1);
      auVar18[2] = -(pcVar1[2] == -1);
      auVar18[3] = -(pcVar1[3] == -1);
      auVar18[4] = -(pcVar1[4] == -1);
      auVar18[5] = -(pcVar1[5] == -1);
      auVar18[6] = -(pcVar1[6] == -1);
      auVar18[7] = -(pcVar1[7] == -1);
      auVar18[8] = -(pcVar1[8] == -1);
      auVar18[9] = -(pcVar1[9] == -1);
      auVar18[10] = -(pcVar1[10] == -1);
      auVar18[0xb] = -(pcVar1[0xb] == -1);
      auVar18[0xc] = -(pcVar1[0xc] == -1);
      auVar18[0xd] = -(pcVar1[0xd] == -1);
      auVar18[0xe] = -(pcVar1[0xe] == -1);
      auVar18[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar18 >> 7,0) & 1) != 0 || (SUB161(auVar18 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar18 >> 0x17,0) & 1) != 0) || (SUB161(auVar18 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar18 >> 0x27,0) & 1) != 0) || (SUB161(auVar18 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar18 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar18 >> 0x3f,0) & 1) != 0) || (SUB161(auVar18 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar18 >> 0x4f,0) & 1) != 0) || (SUB161(auVar18 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar18 >> 0x5f,0) & 1) != 0) || (SUB161(auVar18 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar18 >> 0x6f,0) & 1) != 0) || (SUB161(auVar18 >> 0x77,0) & 1) != 0) ||
          auVar18[0xf] < '\0') break;
      uVar7 = uVar7 + lVar13 + 0x10;
      lVar13 = lVar13 + 0x10;
    }
  }
  uVar10 = (undefined4)uVar12;
  uStack_d8 = pdb_140f3c9d0();
  pbStack_d0 = (byte *)CONCAT44(pbStack_d0._4_4_,uVar10);
  uVar8 = pdb_140cf80e0(param_1[7],param_2,param_3,uVar8,uVar9);
  if ((uVar8 & 1) != 0) {
    return 1;
  }
  uVar8 = param_2;
  uStack_140 = param_2;
  uVar9 = pdb_140f3cb70(&uStack_d8);
  lVar13 = uVar9 + param_1[5];
  if (CARRY8(uVar9,param_1[5])) {
LAB_140cf5eda:
    pdb_142dc8110(&UNK_143087ae0,0x1e,&UNK_143087b00);
LAB_140cf5f29:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar6 = (int)uVar8 + (int)param_1[6];
  if (999999999 < uVar6) {
    if (lVar13 == -1) goto LAB_140cf5eda;
    lVar13 = lVar13 + 1;
    uVar6 = uVar6 + 0xc4653600;
  }
  param_1[5] = lVar13;
  *(uint *)(param_1 + 6) = uVar6;
  uStack_88 = param_2;
LAB_140cf5db8:
  uStack_c8 = uStack_e0;
  uStack_d8 = uStack_f0;
  pbStack_d0 = (byte *)uStack_e8;
  LOCK();
  piVar2 = (int *)((param_2 & 0xffffffffffffffc0) + 0x10 + (ulonglong)((uint)param_2 & 0x3f) * 4);
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  uStack_140 = pdb_141d62c40(param_1 + 8,&uStack_d8,param_2);
  if (uStack_140 != 0) {
    pdb_141d52180(&uStack_140);
  }
  return 0;
LAB_140cf5b40:
  uStack_80 = *(ulonglong *)(lVar15 + -8);
LAB_140cf5b44:
  LOCK();
  piVar2 = (int *)((uStack_80 & 0xffffffffffffffc0) + 0x10 + (ulonglong)((uint)uStack_80 & 0x3f) * 4
                  );
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  return 0;
}

