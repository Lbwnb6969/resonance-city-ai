// VA 0x141c2c080, PDB extent 3181 bytes
// turbosloth::store::PackagePass::install_closure
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: turbosloth::store::PackagePass::install_closure
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
   Extent: 3181 */

byte ******* pdb_141c2c080(longlong param_1,byte ******param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  byte *******pppppppbVar7;
  char cVar8;
  byte *******pppppppbVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  byte ******ppppppbVar13;
  uint uVar14;
  ushort uVar15;
  longlong lVar16;
  byte *pbVar17;
  byte bVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  byte *******pppppppbStack_2f8;
  byte *******pppppppbStack_2f0;
  longlong lStack_2e8;
  longlong lStack_2e0;
  longlong lStack_2d8;
  undefined8 uStack_2d0;
  longlong lStack_2c8;
  longlong lStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  byte *******pppppppbStack_298;
  byte *******pppppppbStack_290;
  longlong lStack_288;
  longlong lStack_280;
  longlong lStack_278;
  undefined8 uStack_270;
  byte *******pppppppbStack_268;
  byte *******pppppppbStack_260;
  longlong lStack_258;
  longlong lStack_250;
  ulonglong uStack_248;
  byte *pbStack_240;
  ulonglong uStack_230;
  byte *pbStack_228;
  longlong lStack_218;
  byte *pbStack_210;
  longlong lStack_208;
  longlong lStack_200;
  byte *pbStack_1f8;
  byte *******pppppppbStack_1e8;
  byte *******pppppppbStack_1e0;
  longlong lStack_1d8;
  byte *******pppppppbStack_1b8;
  byte *******pppppppbStack_1b0;
  longlong lStack_1a8;
  longlong lStack_1a0;
  longlong lStack_198;
  undefined8 uStack_190;
  longlong lStack_188;
  longlong lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  ulonglong uStack_158;
  byte *pbStack_150;
  undefined8 uStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  longlong lStack_128;
  longlong lStack_120;
  longlong lStack_118;
  undefined8 uStack_110;
  longlong lStack_108;
  longlong lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  longlong lStack_88;
  longlong lStack_80;
  byte *******pppppppbStack_78;
  byte *******pppppppbStack_70;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  cVar8 = pdb_142566bd0(param_1 + 0x78);
  if (cVar8 != '\0') {
    return (byte *******)0x0;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lStack_1a8 = _DAT_143337b80;
  lStack_1a0 = _UNK_143337b88;
  pppppppbStack_1b8 = _DAT_143337b70;
  pppppppbStack_1b0 = _UNK_143337b78;
  pdb_141c301a0(&pppppppbStack_268,uVar1,param_2,param_3,&pppppppbStack_1b8);
  if (pppppppbStack_1b0 != (byte *******)0x0) {
    uVar12 = (longlong)pppppppbStack_1b0 * 0x11 + 0x21;
    if (uVar12 != 0) {
      pub_1406abac0((byte *)((longlong)pppppppbStack_1b8 -
                            ((longlong)pppppppbStack_1b0 * 0x10 + 0x10)),uVar12,0x10);
    }
  }
  if (pppppppbStack_268 == (byte *******)0x2 && pppppppbStack_260 == (byte *******)0x0) {
LAB_141c2c186:
    pppppppbVar9 = (byte *******)pdb_140f370c0(0,&UNK_14339eeb8,0x2b);
    return pppppppbVar9;
  }
  pdb_141c2f990(&uStack_138,uVar1,param_2,param_3);
  lVar11 = lStack_128;
  pppppppbVar7 = uStack_130;
  pppppppbVar9 = uStack_138;
  auVar19[0] = -((char)uStack_138 == DAT_14300c7d0);
  auVar19[1] = -(uStack_138._1_1_ == UNK_14300c7d1);
  auVar19[2] = -(uStack_138._2_1_ == UNK_14300c7d2);
  auVar19[3] = -(uStack_138._3_1_ == UNK_14300c7d3);
  auVar19[4] = -(uStack_138._4_1_ == UNK_14300c7d4);
  auVar19[5] = -(uStack_138._5_1_ == UNK_14300c7d5);
  auVar19[6] = -(uStack_138._6_1_ == UNK_14300c7d6);
  auVar19[7] = -(uStack_138._7_1_ == UNK_14300c7d7);
  auVar19[8] = -((char)uStack_130 == UNK_14300c7d8);
  auVar19[9] = -(uStack_130._1_1_ == UNK_14300c7d9);
  auVar19[10] = -(uStack_130._2_1_ == UNK_14300c7da);
  auVar19[0xb] = -(uStack_130._3_1_ == UNK_14300c7db);
  auVar19[0xc] = -(uStack_130._4_1_ == UNK_14300c7dc);
  auVar19[0xd] = -(uStack_130._5_1_ == UNK_14300c7dd);
  auVar19[0xe] = -(uStack_130._6_1_ == UNK_14300c7de);
  auVar19[0xf] = -(uStack_130._7_1_ == UNK_14300c7df);
  if ((ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe | (ushort)(auVar19[0xf] >> 7) << 0xf)
      == 0xffff) goto LAB_141c2c186;
  pub_142e32760(&lStack_250,&lStack_120,0x98);
  pppppppbStack_260 = pppppppbVar7;
  pppppppbStack_268 = pppppppbVar9;
  lStack_258 = lVar11;
  if (((ulonglong)pppppppbVar9 & 1) != 0) {
    uStack_61 = 1;
    pppppppbVar9 = (byte *******)pdb_140f370c0(0,&UNK_14339eeb8,0x2b);
    bVar6 = true;
    goto LAB_141c2c722;
  }
  lStack_88 = lVar11;
  lStack_80 = lStack_250;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  pppppppbStack_1b8 = (byte *******)&pppppppbStack_298;
  pppppppbStack_1b0 = (byte *******)pdb_140f71da0;
  uStack_61 = 1;
  pppppppbStack_298 = (byte *******)param_2;
  pppppppbStack_290 = (byte *******)param_3;
  pdb_140f60760(&uStack_138,&UNK_14339ee67,&pppppppbStack_1b8);
  pppppppbStack_290 = (byte *******)pdb_140001020;
  pppppppbStack_298 = (byte *******)&uStack_138;
  pdb_140f60760(&pppppppbStack_1b8,&UNK_14339ee60,&pppppppbStack_298);
  if (uStack_138 != (byte *******)0x0) {
    pub_1406abac0((byte *)uStack_130,(ulonglong)uStack_138,1);
  }
  pppppppbStack_70 = pppppppbStack_1b8;
  pppppppbStack_78 = pppppppbStack_1b0;
  pdb_140f3e9e0(&uStack_158,uVar1,uVar2,pppppppbStack_1b0,lStack_1a8);
  if (pppppppbStack_70 != (byte *******)0x0) {
    pub_1406abac0((byte *)pppppppbStack_78,(ulonglong)pppppppbStack_70,1);
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    lVar11 = *(longlong *)(param_1 + 0x38);
    bVar18 = (byte)((ulonglong)param_2 >> 0x39);
    auVar19 = ZEXT216(CONCAT11(bVar18,bVar18));
    auVar19 = pshuflw(auVar19,auVar19,0);
    lVar10 = 0;
    ppppppbVar13 = param_2;
    while( true ) {
      uVar12 = (ulonglong)ppppppbVar13 & *(ulonglong *)(param_1 + 0x40);
      auVar20 = *(undefined1 (*) [16])(lVar11 + uVar12);
      auVar22[0] = -(auVar20[0] == auVar19[0]);
      auVar22[1] = -(auVar20[1] == auVar19[1]);
      auVar22[2] = -(auVar20[2] == auVar19[2]);
      auVar22[3] = -(auVar20[3] == auVar19[3]);
      auVar22[4] = -(auVar20[4] == auVar19[4]);
      auVar22[5] = -(auVar20[5] == auVar19[5]);
      auVar22[6] = -(auVar20[6] == auVar19[6]);
      auVar22[7] = -(auVar20[7] == auVar19[7]);
      auVar22[8] = -(auVar20[8] == auVar19[0]);
      auVar22[9] = -(auVar20[9] == auVar19[1]);
      auVar22[10] = -(auVar20[10] == auVar19[2]);
      auVar22[0xb] = -(auVar20[0xb] == auVar19[3]);
      auVar22[0xc] = -(auVar20[0xc] == auVar19[4]);
      auVar22[0xd] = -(auVar20[0xd] == auVar19[5]);
      auVar22[0xe] = -(auVar20[0xe] == auVar19[6]);
      auVar22[0xf] = -(auVar20[0xf] == auVar19[7]);
      uVar15 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe | (ushort)(auVar22[0xf] >> 7) << 0xf;
      uVar14 = (uint)uVar15;
      while (uVar15 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar14; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        lVar16 = (uVar3 + uVar12 & *(ulonglong *)(param_1 + 0x40)) * -0x50;
        if (*(byte *******)(lVar11 + -0x50 + lVar16) == param_2 &&
            *(longlong *)(lVar11 + -0x48 + lVar16) == param_3) {
          lVar11 = lVar11 + lVar16;
          auVar20[0] = -(*(char *)(lVar11 + -0x40) == DAT_14300c7d0);
          auVar20[1] = -(*(char *)(lVar11 + -0x3f) == UNK_14300c7d1);
          auVar20[2] = -(*(char *)(lVar11 + -0x3e) == UNK_14300c7d2);
          auVar20[3] = -(*(char *)(lVar11 + -0x3d) == UNK_14300c7d3);
          auVar20[4] = -(*(char *)(lVar11 + -0x3c) == UNK_14300c7d4);
          auVar20[5] = -(*(char *)(lVar11 + -0x3b) == UNK_14300c7d5);
          auVar20[6] = -(*(char *)(lVar11 + -0x3a) == UNK_14300c7d6);
          auVar20[7] = -(*(char *)(lVar11 + -0x39) == UNK_14300c7d7);
          auVar20[8] = -(*(char *)(lVar11 + -0x38) == UNK_14300c7d8);
          auVar20[9] = -(*(char *)(lVar11 + -0x37) == UNK_14300c7d9);
          auVar20[10] = -(*(char *)(lVar11 + -0x36) == UNK_14300c7da);
          auVar20[0xb] = -(*(char *)(lVar11 + -0x35) == UNK_14300c7db);
          auVar20[0xc] = -(*(char *)(lVar11 + -0x34) == UNK_14300c7dc);
          auVar20[0xd] = -(*(char *)(lVar11 + -0x33) == UNK_14300c7dd);
          auVar20[0xe] = -(*(char *)(lVar11 + -0x32) == UNK_14300c7de);
          auVar20[0xf] = -(*(char *)(lVar11 + -0x31) == UNK_14300c7df);
          if (((ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) |
                        (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
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
                        (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar20[0xf] >> 7) << 0xf) == 0xffff) ||
             (*(longlong *)(lVar11 + -8) != lStack_80 || *(longlong *)(lVar11 + -0x10) != lStack_88)
             ) goto LAB_141c2c4be;
          pppppppbVar9 = *(byte ********)(lVar11 + -0x40);
          pppppppbStack_70 = *(byte ********)(lVar11 + -0x38);
          lVar10 = *(longlong *)(lVar11 + -0x28);
          lVar16 = *(longlong *)(lVar11 + -0x30);
          lVar5 = *(longlong *)(lVar11 + -0x20);
          uVar1 = *(undefined8 *)(lVar11 + -0x18);
          lVar11 = *(longlong *)(lVar11 + -0x20);
          pdb_140f4f620(&uStack_138,pbStack_150,uStack_148);
          if ((int)uStack_138 == 2) {
            pppppppbStack_2f8 = (byte *******)0x2;
          }
          else {
            pppppppbStack_2f8 = uStack_138;
            pppppppbStack_2f0 = uStack_130;
            uStack_2a8 = uStack_e8;
            uStack_2b8 = uStack_f8;
            uStack_2b0 = uStack_f0;
            lStack_2c8 = lStack_108;
            lStack_2c0 = lStack_100;
            lStack_2d8 = lStack_118;
            uStack_2d0 = uStack_110;
            lStack_2e8 = lStack_128;
            lStack_2e0 = lStack_120;
            if (uStack_138 != (byte *******)0x2) {
              pdb_142572440(&uStack_138,&pppppppbStack_2f8);
              if (lStack_118 != lVar11) goto LAB_141c2c4be;
              if (((ulonglong)uStack_138 & 1) == 0) {
                if (((ulonglong)pppppppbVar9 & 1) != 0) goto LAB_141c2c4be;
              }
              else if (((lStack_128 == lVar16 && lStack_120 == lVar10) & (byte)pppppppbVar9) != 1)
              goto LAB_141c2c4be;
              uStack_130 = pppppppbStack_70;
              lStack_100 = lStack_80;
              lStack_108 = lStack_88;
              uStack_138 = pppppppbVar9;
              lStack_128 = lVar16;
              lStack_120 = lVar10;
              lStack_118 = lVar5;
              uStack_110 = uVar1;
              pdb_1425669b0(&pppppppbStack_1b8,param_1 + 0x58,param_2,param_3,&uStack_138);
              goto LAB_141c2c67a;
            }
          }
          pppppppbStack_2f0 = uStack_130;
          pdb_1404b38e0(&pppppppbStack_2f0);
          goto LAB_141c2c4be;
        }
        uVar15 = (ushort)(uVar14 - 1) & (ushort)uVar14;
        uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar15);
      }
      auVar21[0] = -(auVar20[0] == -1);
      auVar21[1] = -(auVar20[1] == -1);
      auVar21[2] = -(auVar20[2] == -1);
      auVar21[3] = -(auVar20[3] == -1);
      auVar21[4] = -(auVar20[4] == -1);
      auVar21[5] = -(auVar20[5] == -1);
      auVar21[6] = -(auVar20[6] == -1);
      auVar21[7] = -(auVar20[7] == -1);
      auVar21[8] = -(auVar20[8] == -1);
      auVar21[9] = -(auVar20[9] == -1);
      auVar21[10] = -(auVar20[10] == -1);
      auVar21[0xb] = -(auVar20[0xb] == -1);
      auVar21[0xc] = -(auVar20[0xc] == -1);
      auVar21[0xd] = -(auVar20[0xd] == -1);
      auVar21[0xe] = -(auVar20[0xe] == -1);
      auVar21[0xf] = -(auVar20[0xf] == -1);
      if ((((((((((((((((SUB161(auVar21 >> 7,0) & 1) != 0 || (SUB161(auVar21 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar21 >> 0x17,0) & 1) != 0) || (SUB161(auVar21 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar21 >> 0x27,0) & 1) != 0) || (SUB161(auVar21 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar21 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar21 >> 0x3f,0) & 1) != 0) || (SUB161(auVar21 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar21 >> 0x4f,0) & 1) != 0) || (SUB161(auVar21 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar21 >> 0x5f,0) & 1) != 0) || (SUB161(auVar21 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar21 >> 0x6f,0) & 1) != 0) || (SUB161(auVar21 >> 0x77,0) & 1) != 0) ||
          auVar21[0xf] < '\0') break;
      ppppppbVar13 = (byte ******)(uVar12 + lVar10 + 0x10);
      lVar10 = lVar10 + 0x10;
    }
  }
LAB_141c2c4be:
  pdb_141c2eb50(&uStack_138,*(undefined8 *)(param_1 + 0x20),param_2,param_3);
  pbVar17 = pbStack_150;
  if (SBORROW8(0,(longlong)uStack_138)) {
    pppppppbVar9 = (byte *******)pdb_140f370c0(0,&UNK_14339eeb8,0x2b);
  }
  else {
    pppppppbStack_70 = uStack_138;
    pppppppbStack_78 = uStack_130;
    pppppppbVar9 = (byte *******)pdb_142571e80(pbStack_150,uStack_148,uStack_130,lStack_128);
    if (pppppppbVar9 == (byte *******)0x0) {
      pdb_140f4f620(&uStack_138,pbVar17,uStack_148);
      pppppppbVar9 = uStack_130;
      if (uStack_138 != (byte *******)0x2) {
        uStack_168 = uStack_e8;
        uStack_178 = uStack_f8;
        uStack_170 = uStack_f0;
        lStack_188 = lStack_108;
        lStack_180 = lStack_100;
        lStack_198 = lStack_118;
        uStack_190 = uStack_110;
        lStack_1a8 = lStack_128;
        lStack_1a0 = lStack_120;
        pppppppbStack_1b8 = uStack_138;
        pppppppbStack_1b0 = uStack_130;
        pdb_142572440(&pppppppbStack_298,&pppppppbStack_1b8);
        lStack_100 = lStack_80;
        lStack_108 = lStack_88;
        uStack_138 = pppppppbStack_298;
        uStack_130 = pppppppbStack_290;
        lStack_128 = lStack_288;
        lStack_120 = lStack_280;
        lStack_118 = lStack_278;
        uStack_110 = uStack_270;
        pdb_1425669b0(&pppppppbStack_1b8,param_1 + 0x58,param_2,param_3,&uStack_138);
        if (pppppppbStack_70 != (byte *******)0x0) {
          pub_1406abac0((byte *)pppppppbStack_78,(ulonglong)pppppppbStack_70,1);
        }
LAB_141c2c67a:
        pppppppbVar9 = (byte *******)0x0;
        goto LAB_141c2c67d;
      }
    }
    if (pppppppbStack_70 != (byte *******)0x0) {
      pub_1406abac0((byte *)pppppppbStack_78,(ulonglong)pppppppbStack_70,1);
    }
  }
LAB_141c2c67d:
  if (uStack_158 != 0) {
    pub_1406abac0(pbStack_150,uStack_158,1);
  }
  bVar6 = true;
  if (pppppppbVar9 == (byte *******)0x0) {
    pppppppbStack_78 = pppppppbStack_1e8;
    pppppppbStack_70 = pppppppbStack_1e0;
    lVar11 = 0;
    do {
      if (lStack_1d8 << 4 == lVar11) {
        if (pppppppbStack_78 != (byte *******)0x0) {
          pub_1406abac0((byte *)pppppppbStack_70,(longlong)pppppppbStack_78 << 4,0x10);
        }
        if (uStack_248 != 0) {
          pub_1406abac0(pbStack_240,uStack_248,1);
        }
        if (uStack_230 != 0) {
          pub_1406abac0(pbStack_228,uStack_230,1);
        }
        pdb_140997e80(&lStack_218);
        if (lStack_200 == 0) {
          return (byte *******)0x0;
        }
        pub_1406abac0(pbStack_1f8,lStack_200 * 0x30,0x10);
        return (byte *******)0x0;
      }
      pppppppbVar9 = (byte *******)
                     pdb_141c2c080(param_1,*(undefined8 *)((longlong)pppppppbStack_70 + lVar11),
                                   *(undefined8 *)((longlong)pppppppbStack_70 + lVar11 + 8));
      lVar11 = lVar11 + 0x10;
    } while (pppppppbVar9 == (byte *******)0x0);
    if (pppppppbStack_78 != (byte *******)0x0) {
      pub_1406abac0((byte *)pppppppbStack_70,(longlong)pppppppbStack_78 << 4,0x10);
    }
    bVar6 = false;
  }
LAB_141c2c722:
  if (uStack_248 != 0) {
    pub_1406abac0(pbStack_240,uStack_248,1);
  }
  if (uStack_230 != 0) {
    pub_1406abac0(pbStack_228,uStack_230,1);
  }
  if (lStack_208 != 0) {
    pbVar17 = pbStack_210 + 0x48;
    lVar11 = lStack_208;
    do {
      if (*(ulonglong *)(pbVar17 + -8) != 0) {
        pub_1406abac0(*(byte **)pbVar17,*(ulonglong *)(pbVar17 + -8),1);
      }
      pbVar17 = pbVar17 + 0x60;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  if (lStack_218 != 0) {
    pub_1406abac0(pbStack_210,lStack_218 * 0x60,0x10);
  }
  if (lStack_200 != 0) {
    pub_1406abac0(pbStack_1f8,lStack_200 * 0x30,0x10);
  }
  if (bVar6) {
    if (pppppppbStack_1e8 != (byte *******)0x0) {
      pub_1406abac0((byte *)pppppppbStack_1e0,(longlong)pppppppbStack_1e8 << 4,0x10);
      return pppppppbVar9;
    }
    return pppppppbVar9;
  }
  return pppppppbVar9;
}

