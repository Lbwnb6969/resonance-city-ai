// VA 0x1408f3750, PDB extent 1742 bytes
// system_decorator::blueprint::DecoratorBlueprints::insert
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/blueprint.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_decorator::blueprint::DecoratorBlueprints::insert
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/blueprint.rs
   Extent: 1742 */

longlong *
pdb_1408f3750(longlong *param_1,int param_2,longlong param_3,longlong param_4,undefined1 param_5)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  byte *pbVar3;
  undefined1 (*pauVar4) [16];
  longlong *plVar5;
  uint uVar6;
  ulonglong uVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ushort uVar13;
  byte bVar14;
  undefined1 (*pauVar15) [16];
  bool bVar16;
  byte bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 auStack_1b8 [16];
  undefined8 uStack_178;
  undefined4 uStack_168;
  undefined4 uStack_138;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [16];
  undefined8 uStack_e8;
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined1 auStack_c8 [16];
  undefined8 uStack_b8;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  undefined1 auStack_98 [16];
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined2 uStack_60;
  undefined8 *puStack_58;
  byte *pbStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_1c8 = CONCAT44(uStack_1c8._4_4_,param_2);
  uVar7 = pdb_1400aede0(param_1 + 4,&uStack_1c8);
  bVar14 = (byte)(uVar7 >> 0x38);
  bVar17 = bVar14 >> 1;
  auVar18 = ZEXT216(CONCAT11(bVar17,bVar17));
  auVar18 = pshuflw(auVar18,auVar18,0);
  lVar11 = 0;
  uVar12 = uVar7;
  do {
    uVar12 = uVar12 & param_1[1];
    auVar2 = *(undefined1 (*) [16])(*param_1 + uVar12);
    auVar20[0] = -(auVar2[0] == auVar18[0]);
    auVar20[1] = -(auVar2[1] == auVar18[1]);
    auVar20[2] = -(auVar2[2] == auVar18[2]);
    auVar20[3] = -(auVar2[3] == auVar18[3]);
    auVar20[4] = -(auVar2[4] == auVar18[4]);
    auVar20[5] = -(auVar2[5] == auVar18[5]);
    auVar20[6] = -(auVar2[6] == auVar18[6]);
    auVar20[7] = -(auVar2[7] == auVar18[7]);
    auVar20[8] = -(auVar2[8] == auVar18[0]);
    auVar20[9] = -(auVar2[9] == auVar18[1]);
    auVar20[10] = -(auVar2[10] == auVar18[2]);
    auVar20[0xb] = -(auVar2[0xb] == auVar18[3]);
    auVar20[0xc] = -(auVar2[0xc] == auVar18[4]);
    auVar20[0xd] = -(auVar2[0xd] == auVar18[5]);
    auVar20[0xe] = -(auVar2[0xe] == auVar18[6]);
    auVar20[0xf] = -(auVar2[0xf] == auVar18[7]);
    uVar13 = (ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
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
    uVar9 = (uint)uVar13;
    while (uVar13 != 0) {
      uVar10 = 0;
      for (uVar6 = uVar9; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar10 = uVar10 + 1;
      }
      pauVar15 = (undefined1 (*) [16])(*param_1 + (uVar10 + uVar12 & param_1[1]) * -0x10);
      if (*(int *)pauVar15[-1] == param_2) {
        pbStack_50 = *(byte **)(pauVar15[-1] + 8);
        pbVar8 = pbStack_50 + 8;
        LOCK();
        if (*(longlong *)pbVar8 == 1) {
          pbVar8[0] = 0xff;
          pbVar8[1] = 0xff;
          pbVar8[2] = 0xff;
          pbVar8[3] = 0xff;
          pbVar8[4] = 0xff;
          pbVar8[5] = 0xff;
          pbVar8[6] = 0xff;
          pbVar8[7] = 0xff;
        }
        UNLOCK();
        if ((*(longlong *)pbVar8 == 1) &&
           (pbStack_50[8] = 1, pbStack_50[9] = 0, pbStack_50[10] = 0, pbStack_50[0xb] = 0,
           pbStack_50[0xc] = 0, pbStack_50[0xd] = 0, pbStack_50[0xe] = 0, pbStack_50[0xf] = 0,
           *(longlong *)pbStack_50 == 1)) {
          pbStack_50[0x50] = 1;
          pbStack_50[0x51] = 0;
          pbStack_50[0x52] = 0;
          pbStack_50[0x53] = 0;
          pbStack_50[0x54] = 0;
          pbStack_50[0x55] = 0;
          pbStack_50[0x56] = 0;
          pbStack_50[0x57] = 0;
          if (*(int *)(pbStack_50 + 0x60) == 0) {
            plVar5 = *(longlong **)(pbStack_50 + 0x70);
            LOCK();
            *plVar5 = *plVar5 + -1;
            UNLOCK();
            if (*plVar5 == 0) {
              pdb_140c7b7a0(pbStack_50 + 0x70);
            }
          }
          pbStack_50[0x60] = 2;
          pbStack_50[0x61] = 0;
          pbStack_50[0x62] = 0;
          pbStack_50[99] = 0;
          if (*(int *)(pbStack_50 + 0x90) == 0) {
            plVar5 = *(longlong **)(pbStack_50 + 0xa0);
            LOCK();
            *plVar5 = *plVar5 + -1;
            UNLOCK();
            if (*plVar5 == 0) {
              pdb_140c7b7a0(pbStack_50 + 0xa0);
            }
          }
          pbVar8 = pbStack_50;
          pbVar8[0x90] = 2;
          pbVar8[0x91] = 0;
          pbVar8[0x92] = 0;
          pbVar8[0x93] = 0;
          *(undefined1 (*) [16])(pbStack_50 + 0x10) = (undefined1  [16])0x0;
          if (*(byte **)(pbStack_50 + 0x150) != (byte *)0x0) {
            pub_1406abac0(*(byte **)(pbStack_50 + 0x150),0x50,0x10);
          }
          pbVar8[0x150] = 0;
          pbVar8[0x151] = 0;
          pbVar8[0x152] = 0;
          pbVar8[0x153] = 0;
          pbVar8[0x154] = 0;
          pbVar8[0x155] = 0;
          pbVar8[0x156] = 0;
          pbVar8[0x157] = 0;
          pbVar3 = *(byte **)(pbVar8 + 0x158);
          if (pbVar3 != (byte *)0x0) {
            pub_1406abac0(pbVar3,0x28,4);
          }
          pbVar8[0x158] = 0;
          pbVar8[0x159] = 0;
          pbVar8[0x15a] = 0;
          pbVar8[0x15b] = 0;
          pbVar8[0x15c] = 0;
          pbVar8[0x15d] = 0;
          pbVar8[0x15e] = 0;
          pbVar8[0x15f] = 0;
          pbVar3 = *(byte **)(pbVar8 + 0x160);
          if (pbVar3 != (byte *)0x0) {
            pub_1406abac0(pbVar3,0x20,4);
          }
          pbVar8[0x160] = 0;
          pbVar8[0x161] = 0;
          pbVar8[0x162] = 0;
          pbVar8[0x163] = 0;
          pbVar8[0x164] = 0;
          pbVar8[0x165] = 0;
          pbVar8[0x166] = 0;
          pbVar8[0x167] = 0;
          pbVar8[0xd0] = 0;
          pbVar8[0xd1] = 0;
          pbVar8[0xd2] = 0;
          pbVar8[0xd3] = 0;
          pbVar8[0xd4] = 0;
          pbVar8[0xd5] = 0;
          pbVar8[0xd6] = 0;
          pbVar8[0xd7] = 0;
          pbVar8[0xe8] = 0;
          pbVar8[0xe9] = 0;
          pbVar8[0xea] = 0;
          pbVar8[0xeb] = 0;
          pbVar8[0xec] = 0;
          pbVar8[0xed] = 0;
          pbVar8[0xee] = 0;
          pbVar8[0xef] = 0;
          pbVar8[0x100] = 0;
          pbVar8[0x101] = 0;
          pbVar8[0x102] = 0;
          pbVar8[0x103] = 0;
          pbVar8[0x104] = 0;
          pbVar8[0x105] = 0;
          pbVar8[0x106] = 0;
          pbVar8[0x107] = 0;
          pbVar8[0x118] = 0;
          pbVar8[0x119] = 0;
          pbVar8[0x11a] = 0;
          pbVar8[0x11b] = 0;
          pbVar8[0x11c] = 0;
          pbVar8[0x11d] = 0;
          pbVar8[0x11e] = 0;
          pbVar8[0x11f] = 0;
          pbVar8[0x130] = 0;
          pbVar8[0x131] = 0;
          pbVar8[0x132] = 0;
          pbVar8[0x133] = 0;
          pbVar8[0x134] = 0;
          pbVar8[0x135] = 0;
          pbVar8[0x136] = 0;
          pbVar8[0x137] = 0;
          pbVar8[0x148] = 0;
          pbVar8[0x149] = 0;
          pbVar8[0x14a] = 0;
          pbVar8[0x14b] = 0;
          pbVar8[0x14c] = 0;
          pbVar8[0x14d] = 0;
          pbVar8[0x14e] = 0;
          pbVar8[0x14f] = 0;
          pbVar8[0x168] = 0;
          pbVar8[0x169] = 0;
        }
        else {
          auStack_f8 = (undefined1  [16])0x0;
          auStack_e0 = (undefined1  [16])0x0;
          auStack_c8 = (undefined1  [16])0x0;
          auStack_b0 = (undefined1  [16])0x0;
          auStack_80 = (undefined1  [16])0x0;
          auStack_70 = (undefined1  [16])0x0;
          uStack_60 = 0;
          uStack_1c8 = 1;
          uStack_1c0 = 1;
          auStack_1b8 = (undefined1  [16])0x0;
          uStack_178 = 1;
          uStack_168 = 2;
          uStack_138 = 2;
          uStack_108 = 0;
          uStack_100 = 0x10;
          uStack_e8 = 4;
          uStack_d0 = 4;
          uStack_b8 = 4;
          uStack_a0 = 4;
          auStack_98 = (undefined1  [16])0x0;
          uStack_88 = 0x10;
          pdb_14007ee60();
          pbStack_50 = pub_1406abab0(0x170,0x10);
          if (pbStack_50 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc7e11(0x10,0x170);
          }
          puVar1 = (undefined8 *)(pauVar15[-1] + 8);
          pub_142e32760(pbStack_50,&uStack_1c8,0x170);
          plVar5 = (longlong *)*puVar1;
          LOCK();
          *plVar5 = *plVar5 + -1;
          UNLOCK();
          puStack_58 = puVar1;
          if (*plVar5 == 0) {
            pdb_1408f7f60(pauVar15[-1] + 8);
          }
          *(byte **)(pauVar15[-1] + 8) = pbStack_50;
        }
        goto LAB_1408f3c3a;
      }
      uVar13 = (ushort)(uVar9 - 1) & (ushort)uVar9;
      uVar9 = CONCAT22((short)(uVar9 - 1 >> 0x10),uVar13);
    }
    auVar19[0] = -(auVar2[0] == -1);
    auVar19[1] = -(auVar2[1] == -1);
    auVar19[2] = -(auVar2[2] == -1);
    auVar19[3] = -(auVar2[3] == -1);
    auVar19[4] = -(auVar2[4] == -1);
    auVar19[5] = -(auVar2[5] == -1);
    auVar19[6] = -(auVar2[6] == -1);
    auVar19[7] = -(auVar2[7] == -1);
    auVar19[8] = -(auVar2[8] == -1);
    auVar19[9] = -(auVar2[9] == -1);
    auVar19[10] = -(auVar2[10] == -1);
    auVar19[0xb] = -(auVar2[0xb] == -1);
    auVar19[0xc] = -(auVar2[0xc] == -1);
    auVar19[0xd] = -(auVar2[0xd] == -1);
    auVar19[0xe] = -(auVar2[0xe] == -1);
    auVar19[0xf] = -(auVar2[0xf] == -1);
    if ((((((((((((((((SUB161(auVar19 >> 7,0) & 1) != 0 || (SUB161(auVar19 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar19 >> 0x17,0) & 1) != 0) || (SUB161(auVar19 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar19 >> 0x27,0) & 1) != 0) || (SUB161(auVar19 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar19 >> 0x37,0) & 1) != 0) || (SUB161(auVar19 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar19 >> 0x47,0) & 1) != 0) || (SUB161(auVar19 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar19 >> 0x57,0) & 1) != 0) || (SUB161(auVar19 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar19 >> 0x67,0) & 1) != 0) || (SUB161(auVar19 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar19 >> 0x77,0) & 1) != 0) || auVar19[0xf] < '\0') {
      if (param_1[2] == 0) {
        pdb_142ddbcf0(param_1,1,param_1 + 4,CONCAT71((int7)(uVar12 >> 8),1));
      }
      pdb_14007ee60();
      pbVar8 = pub_1406abab0(0x170,0x10);
      if (pbVar8 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(0x10,0x170);
      }
      *(undefined1 (*) [16])(pbVar8 + 0x10) = (undefined1  [16])0x0;
      pbVar8[0x50] = 1;
      pbVar8[0x51] = 0;
      pbVar8[0x52] = 0;
      pbVar8[0x53] = 0;
      pbVar8[0x54] = 0;
      pbVar8[0x55] = 0;
      pbVar8[0x56] = 0;
      pbVar8[0x57] = 0;
      pbVar8[0x60] = 2;
      pbVar8[0x61] = 0;
      pbVar8[0x62] = 0;
      pbVar8[99] = 0;
      pbVar8[0x90] = 2;
      pbVar8[0x91] = 0;
      pbVar8[0x92] = 0;
      pbVar8[0x93] = 0;
      pbVar8[0xc0] = 0;
      pbVar8[0xc1] = 0;
      pbVar8[0xc2] = 0;
      pbVar8[0xc3] = 0;
      pbVar8[0xc4] = 0;
      pbVar8[0xc5] = 0;
      pbVar8[0xc6] = 0;
      pbVar8[199] = 0;
      pbVar8[200] = 0x10;
      pbVar8[0xc9] = 0;
      pbVar8[0xca] = 0;
      pbVar8[0xcb] = 0;
      pbVar8[0xcc] = 0;
      pbVar8[0xcd] = 0;
      pbVar8[0xce] = 0;
      pbVar8[0xcf] = 0;
      *(undefined1 (*) [16])(pbVar8 + 0xd0) = (undefined1  [16])0x0;
      pbVar8[0xe0] = 4;
      pbVar8[0xe1] = 0;
      pbVar8[0xe2] = 0;
      pbVar8[0xe3] = 0;
      pbVar8[0xe4] = 0;
      pbVar8[0xe5] = 0;
      pbVar8[0xe6] = 0;
      pbVar8[0xe7] = 0;
      *(undefined1 (*) [16])(pbVar8 + 0xe8) = (undefined1  [16])0x0;
      pbVar8[0xf8] = 4;
      pbVar8[0xf9] = 0;
      pbVar8[0xfa] = 0;
      pbVar8[0xfb] = 0;
      pbVar8[0xfc] = 0;
      pbVar8[0xfd] = 0;
      pbVar8[0xfe] = 0;
      pbVar8[0xff] = 0;
      *(undefined1 (*) [16])(pbVar8 + 0x100) = (undefined1  [16])0x0;
      pbVar8[0x110] = 4;
      pbVar8[0x111] = 0;
      pbVar8[0x112] = 0;
      pbVar8[0x113] = 0;
      pbVar8[0x114] = 0;
      pbVar8[0x115] = 0;
      pbVar8[0x116] = 0;
      pbVar8[0x117] = 0;
      *(undefined1 (*) [16])(pbVar8 + 0x118) = (undefined1  [16])0x0;
      pbVar8[0x128] = 4;
      pbVar8[0x129] = 0;
      pbVar8[0x12a] = 0;
      pbVar8[299] = 0;
      pbVar8[300] = 0;
      pbVar8[0x12d] = 0;
      pbVar8[0x12e] = 0;
      pbVar8[0x12f] = 0;
      *(undefined1 (*) [16])(pbVar8 + 0x130) = (undefined1  [16])0x0;
      pbVar8[0x140] = 0x10;
      pbVar8[0x141] = 0;
      pbVar8[0x142] = 0;
      pbVar8[0x143] = 0;
      pbVar8[0x144] = 0;
      pbVar8[0x145] = 0;
      pbVar8[0x146] = 0;
      pbVar8[0x147] = 0;
      *(undefined1 (*) [16])(pbVar8 + 0x148) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(pbVar8 + 0x158) = (undefined1  [16])0x0;
      pbVar8[0x168] = 0;
      pbVar8[0x169] = 0;
      pbVar8[0] = 1;
      pbVar8[1] = 0;
      pbVar8[2] = 0;
      pbVar8[3] = 0;
      pbVar8[4] = 0;
      pbVar8[5] = 0;
      pbVar8[6] = 0;
      pbVar8[7] = 0;
      pbVar8[8] = 1;
      pbVar8[9] = 0;
      pbVar8[10] = 0;
      pbVar8[0xb] = 0;
      pbVar8[0xc] = 0;
      pbVar8[0xd] = 0;
      pbVar8[0xe] = 0;
      pbVar8[0xf] = 0;
      pauVar4 = (undefined1 (*) [16])*param_1;
      uVar12 = param_1[1];
      uVar7 = uVar7 & uVar12;
      auVar18 = *(undefined1 (*) [16])(*pauVar4 + uVar7);
      uVar13 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar18[0xf] >> 7) << 0xf;
      uVar9 = (uint)uVar13;
      if (uVar13 == 0) {
        lVar11 = 0x10;
        do {
          uVar7 = uVar7 + lVar11 & uVar12;
          auVar18 = *(undefined1 (*) [16])(*pauVar4 + uVar7);
          lVar11 = lVar11 + 0x10;
          uVar9 = (uint)(ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar18[0xf] >> 7) << 0xf);
        } while (uVar9 == 0);
      }
      uVar10 = 0;
      for (; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
        uVar10 = uVar10 + 1;
      }
      uVar7 = uVar10 + uVar7 & uVar12;
      bVar17 = (*pauVar4)[uVar7];
      if (-1 < (char)bVar17) {
        auVar18 = *pauVar4;
        uVar9 = 0;
        for (uVar10 = (uint)(ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                                     (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                                     (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                                     (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                                     (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                                     (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                                     (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                                     (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                                     (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                                     (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                                     (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                                     (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                                     (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                                     (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                                     (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                                    (ushort)(byte)(auVar18[0xf] >> 7) << 0xf); (uVar10 & 1) == 0;
            uVar10 = uVar10 >> 1 | 0x80000000) {
          uVar9 = uVar9 + 1;
        }
        uVar7 = (ulonglong)uVar9;
        bVar17 = (*pauVar4)[uVar7];
      }
      bVar14 = bVar14 >> 1;
      (*pauVar4)[uVar7] = bVar14;
      pauVar4[1][uVar7 - 0x10 & uVar12] = bVar14;
      pauVar15 = pauVar4 + -uVar7;
      *(int *)pauVar4[-1 - uVar7] = param_2;
      *(byte **)(pauVar15[-1] + 8) = pbVar8;
      lVar11 = param_1[3] - _UNK_142e47bf8;
      param_1[2] = param_1[2] - (ulonglong)(bVar17 & 1);
      param_1[3] = lVar11;
LAB_1408f3c3a:
      plVar5 = *(longlong **)(pauVar15[-1] + 8);
      LOCK();
      bVar16 = plVar5[1] == 1;
      if (bVar16) {
        plVar5[1] = -1;
      }
      UNLOCK();
      if ((bVar16) && (plVar5[1] = 1, *plVar5 == 1)) {
        plVar5[10] = param_3;
        plVar5[0xb] = param_4;
        *(undefined1 *)(plVar5 + 0x2d) = param_5;
        return plVar5 + 2;
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14301cef8);
    }
    uVar12 = uVar12 + lVar11 + 0x10;
    lVar11 = lVar11 + 0x10;
  } while( true );
}

