// VA 0x140b6b1c0, PDB extent 237 bytes
// country_core::resources::photo_mode::impl$0::build
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/photo_mode.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::photo_mode::impl$0::build
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/photo_mode.rs
   Extent: 237 */

void pdb_140b6b1c0(undefined8 param_1,longlong param_2)

{
  ulonglong *puVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  ushort uVar14;
  ulonglong uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  longlong *plStack_268;
  undefined8 uStack_260;
  undefined1 auStack_258 [16];
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined1 auStack_238 [16];
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  ulonglong uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  longlong *plStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined2 uStack_a0;
  undefined1 uStack_9e;
  longlong *plStack_98;
  undefined8 uStack_90;
  longlong lStack_88;
  byte *pbStack_80;
  undefined8 uStack_78;
  longlong lStack_70;
  ulonglong *puStack_68;
  longlong lStack_60;
  undefined1 uStack_51;
  undefined8 uStack_50;
  
  uVar8 = _UNK_143357080;
  plVar7 = _UNK_143357078;
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar9 = *(longlong *)(param_2 + 0x70);
    uVar10 = 0x23fe26e812f8b37d;
    lVar13 = 0;
    while( true ) {
      uVar10 = uVar10 & *(ulonglong *)(param_2 + 0x78);
      pcVar2 = (char *)(lVar9 + uVar10);
      auVar18[0] = -(*pcVar2 == DAT_142e33cd0);
      auVar18[1] = -(pcVar2[1] == UNK_142e33cd1);
      auVar18[2] = -(pcVar2[2] == UNK_142e33cd2);
      auVar18[3] = -(pcVar2[3] == UNK_142e33cd3);
      auVar18[4] = -(pcVar2[4] == UNK_142e33cd4);
      auVar18[5] = -(pcVar2[5] == UNK_142e33cd5);
      auVar18[6] = -(pcVar2[6] == UNK_142e33cd6);
      auVar18[7] = -(pcVar2[7] == UNK_142e33cd7);
      auVar18[8] = -(pcVar2[8] == UNK_142e33cd8);
      auVar18[9] = -(pcVar2[9] == UNK_142e33cd9);
      auVar18[10] = -(pcVar2[10] == UNK_142e33cda);
      auVar18[0xb] = -(pcVar2[0xb] == UNK_142e33cdb);
      auVar18[0xc] = -(pcVar2[0xc] == UNK_142e33cdc);
      auVar18[0xd] = -(pcVar2[0xd] == UNK_142e33cdd);
      auVar18[0xe] = -(pcVar2[0xe] == UNK_142e33cde);
      auVar18[0xf] = -(pcVar2[0xf] == UNK_142e33cdf);
      uVar14 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe | (ushort)(auVar18[0xf] >> 7) << 0xf;
      uVar12 = (uint)uVar14;
      while (uVar14 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar12; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar15 = uVar5 + uVar10 & *(ulonglong *)(param_2 + 0x78);
        pcVar3 = (char *)(lVar9 + -0x18 + uVar15 * -0x18);
        auVar19[0] = -(*pcVar3 == DAT_142e34180);
        auVar19[1] = -(pcVar3[1] == UNK_142e34181);
        auVar19[2] = -(pcVar3[2] == UNK_142e34182);
        auVar19[3] = -(pcVar3[3] == UNK_142e34183);
        auVar19[4] = -(pcVar3[4] == UNK_142e34184);
        auVar19[5] = -(pcVar3[5] == UNK_142e34185);
        auVar19[6] = -(pcVar3[6] == UNK_142e34186);
        auVar19[7] = -(pcVar3[7] == UNK_142e34187);
        auVar19[8] = -(pcVar3[8] == UNK_142e34188);
        auVar19[9] = -(pcVar3[9] == UNK_142e34189);
        auVar19[10] = -(pcVar3[10] == UNK_142e3418a);
        auVar19[0xb] = -(pcVar3[0xb] == UNK_142e3418b);
        auVar19[0xc] = -(pcVar3[0xc] == UNK_142e3418c);
        auVar19[0xd] = -(pcVar3[0xd] == UNK_142e3418d);
        auVar19[0xe] = -(pcVar3[0xe] == UNK_142e3418e);
        auVar19[0xf] = -(pcVar3[0xf] == UNK_142e3418f);
        if ((ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
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
                     (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar19[0xf] >> 7) << 0xf) == 0xffff) {
          uVar10 = *(ulonglong *)(lVar9 + uVar15 * -0x18 + -8);
          if (((uVar10 < *(ulonglong *)(param_2 + 0x210)) &&
              (uVar10 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar10 * 8), uVar10 != 0))
             && (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + ~uVar10 * 0x40) != 0)) {
            return;
          }
          goto pdb_1418e97f0;
        }
        uVar14 = (ushort)(uVar12 - 1) & (ushort)uVar12;
        uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar14);
      }
      auVar16[0] = -(*pcVar2 == -1);
      auVar16[1] = -(pcVar2[1] == -1);
      auVar16[2] = -(pcVar2[2] == -1);
      auVar16[3] = -(pcVar2[3] == -1);
      auVar16[4] = -(pcVar2[4] == -1);
      auVar16[5] = -(pcVar2[5] == -1);
      auVar16[6] = -(pcVar2[6] == -1);
      auVar16[7] = -(pcVar2[7] == -1);
      auVar16[8] = -(pcVar2[8] == -1);
      auVar16[9] = -(pcVar2[9] == -1);
      auVar16[10] = -(pcVar2[10] == -1);
      auVar16[0xb] = -(pcVar2[0xb] == -1);
      auVar16[0xc] = -(pcVar2[0xc] == -1);
      auVar16[0xd] = -(pcVar2[0xd] == -1);
      auVar16[0xe] = -(pcVar2[0xe] == -1);
      auVar16[0xf] = -(pcVar2[0xf] == -1);
      if ((((((((((((((((SUB161(auVar16 >> 7,0) & 1) != 0 || (SUB161(auVar16 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar16 >> 0x17,0) & 1) != 0) || (SUB161(auVar16 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar16 >> 0x27,0) & 1) != 0) || (SUB161(auVar16 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar16 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar16 >> 0x3f,0) & 1) != 0) || (SUB161(auVar16 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar16 >> 0x4f,0) & 1) != 0) || (SUB161(auVar16 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar16 >> 0x5f,0) & 1) != 0) || (SUB161(auVar16 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar16 >> 0x6f,0) & 1) != 0) || (SUB161(auVar16 >> 0x77,0) & 1) != 0) ||
          auVar16[0xf] < '\0') break;
      uVar10 = uVar10 + lVar13 + 0x10;
      lVar13 = lVar13 + 0x10;
    }
  }
pdb_1418e97f0:
  uStack_50 = 0xfffffffffffffffe;
  lVar9 = param_2 + 0x38;
  puVar1 = (ulonglong *)(param_2 + 0x5a0);
  lStack_88 = 0;
  pbStack_80 = (byte *)0x8;
  uStack_78 = 0;
  plStack_98 = _UNK_143357078;
  uStack_90 = _UNK_143357080;
  lStack_70 = lVar9;
  puStack_68 = puVar1;
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar13 = *(longlong *)(param_2 + 0x70);
    uVar10 = 0x23fe26e812f8b37d;
    lVar11 = 0;
    while( true ) {
      uVar10 = uVar10 & *(ulonglong *)(param_2 + 0x78);
      pcVar2 = (char *)(lVar13 + uVar10);
      auVar20[0] = -(*pcVar2 == DAT_142e33cd0);
      auVar20[1] = -(pcVar2[1] == UNK_142e33cd1);
      auVar20[2] = -(pcVar2[2] == UNK_142e33cd2);
      auVar20[3] = -(pcVar2[3] == UNK_142e33cd3);
      auVar20[4] = -(pcVar2[4] == UNK_142e33cd4);
      auVar20[5] = -(pcVar2[5] == UNK_142e33cd5);
      auVar20[6] = -(pcVar2[6] == UNK_142e33cd6);
      auVar20[7] = -(pcVar2[7] == UNK_142e33cd7);
      auVar20[8] = -(pcVar2[8] == UNK_142e33cd8);
      auVar20[9] = -(pcVar2[9] == UNK_142e33cd9);
      auVar20[10] = -(pcVar2[10] == UNK_142e33cda);
      auVar20[0xb] = -(pcVar2[0xb] == UNK_142e33cdb);
      auVar20[0xc] = -(pcVar2[0xc] == UNK_142e33cdc);
      auVar20[0xd] = -(pcVar2[0xd] == UNK_142e33cdd);
      auVar20[0xe] = -(pcVar2[0xe] == UNK_142e33cde);
      auVar20[0xf] = -(pcVar2[0xf] == UNK_142e33cdf);
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
      uVar12 = (uint)uVar14;
      while (uVar14 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar12; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar15 = uVar5 + uVar10 & *(ulonglong *)(param_2 + 0x78);
        pcVar3 = (char *)(lVar13 + -0x18 + uVar15 * -0x18);
        auVar21[0] = -(*pcVar3 == DAT_142e34180);
        auVar21[1] = -(pcVar3[1] == UNK_142e34181);
        auVar21[2] = -(pcVar3[2] == UNK_142e34182);
        auVar21[3] = -(pcVar3[3] == UNK_142e34183);
        auVar21[4] = -(pcVar3[4] == UNK_142e34184);
        auVar21[5] = -(pcVar3[5] == UNK_142e34185);
        auVar21[6] = -(pcVar3[6] == UNK_142e34186);
        auVar21[7] = -(pcVar3[7] == UNK_142e34187);
        auVar21[8] = -(pcVar3[8] == UNK_142e34188);
        auVar21[9] = -(pcVar3[9] == UNK_142e34189);
        auVar21[10] = -(pcVar3[10] == UNK_142e3418a);
        auVar21[0xb] = -(pcVar3[0xb] == UNK_142e3418b);
        auVar21[0xc] = -(pcVar3[0xc] == UNK_142e3418c);
        auVar21[0xd] = -(pcVar3[0xd] == UNK_142e3418d);
        auVar21[0xe] = -(pcVar3[0xe] == UNK_142e3418e);
        auVar21[0xf] = -(pcVar3[0xf] == UNK_142e3418f);
        if ((ushort)((ushort)(SUB161(auVar21 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
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
                     (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar21[0xf] >> 7) << 0xf) == 0xffff) {
          uVar10 = *(ulonglong *)(lVar13 + uVar15 * -0x18 + -8);
          goto code_r0x0001418e9b2b;
        }
        uVar14 = (ushort)(uVar12 - 1) & (ushort)uVar12;
        uVar12 = CONCAT22((short)(uVar12 - 1 >> 0x10),uVar14);
      }
      auVar17[0] = -(*pcVar2 == -1);
      auVar17[1] = -(pcVar2[1] == -1);
      auVar17[2] = -(pcVar2[2] == -1);
      auVar17[3] = -(pcVar2[3] == -1);
      auVar17[4] = -(pcVar2[4] == -1);
      auVar17[5] = -(pcVar2[5] == -1);
      auVar17[6] = -(pcVar2[6] == -1);
      auVar17[7] = -(pcVar2[7] == -1);
      auVar17[8] = -(pcVar2[8] == -1);
      auVar17[9] = -(pcVar2[9] == -1);
      auVar17[10] = -(pcVar2[10] == -1);
      auVar17[0xb] = -(pcVar2[0xb] == -1);
      auVar17[0xc] = -(pcVar2[0xc] == -1);
      auVar17[0xd] = -(pcVar2[0xd] == -1);
      auVar17[0xe] = -(pcVar2[0xe] == -1);
      auVar17[0xf] = -(pcVar2[0xf] == -1);
      if ((((((((((((((((SUB161(auVar17 >> 7,0) & 1) != 0 || (SUB161(auVar17 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar17 >> 0x17,0) & 1) != 0) || (SUB161(auVar17 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar17 >> 0x27,0) & 1) != 0) || (SUB161(auVar17 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar17 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar17 >> 0x3f,0) & 1) != 0) || (SUB161(auVar17 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar17 >> 0x4f,0) & 1) != 0) || (SUB161(auVar17 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar17 >> 0x5f,0) & 1) != 0) || (SUB161(auVar17 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar17 >> 0x6f,0) & 1) != 0) || (SUB161(auVar17 >> 0x77,0) & 1) != 0) ||
          auVar17[0xf] < '\0') break;
      uVar10 = uVar10 + lVar11 + 0x10;
      lVar11 = lVar11 + 0x10;
    }
  }
  pdb_140268ef0(&plStack_268,param_2 + 0xd8,0x23fe26e812f8b37d,&plStack_98);
  if (auStack_258._0_8_ == 2) {
    uVar10 = *puVar1;
    uVar15 = uVar10 + 1;
    *puVar1 = uVar15;
    uStack_a0 = 0x100;
    uStack_e0 = 1;
    plStack_d8 = plVar7;
    uStack_d0 = uVar8;
    uStack_b8 = 8;
    uStack_b0 = 0x48;
    pcStack_a8 = pdb_1400d9350;
    uStack_9e = 1;
    uStack_c8 = 0;
    pdb_140f033d0(&plStack_268,uVar10,&uStack_e0);
    if (*(ulonglong *)(param_2 + 0x48) < uVar15) {
      uStack_51 = 1;
      pdb_1401728f0(lVar9,uVar15);
    }
    lVar13 = *(longlong *)(param_2 + 0x40) + uVar10 * 0x120;
    if (*(int *)(*(longlong *)(param_2 + 0x40) + uVar10 * 0x120) != 2) {
      lStack_60 = lVar13;
      pdb_1404ce7e0(lVar13 + 0x48);
      lVar13 = lStack_60;
      lVar11 = *(longlong *)(lStack_60 + 0xd8);
      if (lVar11 != 0) {
        uVar15 = lVar11 * 8 + 0x17U & 0xfffffffffffffff0;
        pub_1406abac0((byte *)(*(longlong *)(lStack_60 + 0xd0) - uVar15),lVar11 + uVar15 + 0x11,0x10
                     );
      }
      if (*(longlong *)(lVar13 + 0xb8) != 0) {
        pub_1406abac0(*(byte **)(lVar13 + 0xc0),*(longlong *)(lVar13 + 0xb8) << 4,8);
      }
    }
    pub_142e32760(lVar13,&plStack_268,0x120);
    plStack_268 = plStack_98;
    uStack_260 = uStack_90;
    pdb_1403b0980(param_2 + 0x70,&plStack_268,uVar10);
  }
  else {
    uStack_e8 = uStack_200;
    uStack_f8 = uStack_210;
    uStack_f0 = uStack_208;
    uStack_108 = uStack_220;
    uStack_100 = uStack_218;
    uStack_118 = auStack_238._8_8_;
    uStack_110 = uStack_228;
    uStack_128 = uStack_240;
    uStack_120 = auStack_238._0_8_;
    uStack_138 = auStack_258._8_8_;
    uStack_130 = uStack_248;
    uStack_140 = auStack_258._0_8_;
    uVar10 = pdb_140f275b0(&uStack_140,&lStack_88);
    if (lStack_88 != 0) {
      pub_1406abac0(pbStack_80,lStack_88 << 3,8);
    }
  }
code_r0x0001418e9b2b:
  if (((*(ulonglong *)(param_2 + 0x210) <= uVar10) ||
      (uVar15 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar10 * 8), uVar15 == 0)) ||
     (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + ~uVar15 * 0x40) == 0)) {
    auStack_258 = (undefined1  [16])0x0;
    uStack_248 = 0;
    auStack_238 = (undefined1  [16])0x0;
    uStack_228 = 0;
    plStack_268 = (longlong *)0x0;
    uStack_260 = 8;
    uStack_240 = 8;
    uVar4 = *(undefined4 *)(param_2 + 0x5a8);
    pdb_140ef59c0(param_2);
    uStack_140 = uVar10;
    lVar9 = pdb_14199fe30(param_2 + 0x1d0,uVar10,lVar9,&uStack_140);
    if (*(longlong *)(lVar9 + 0x20) == 0) {
      if (*(longlong *)(lVar9 + 0x18) == 0) {
        pdb_142dbe3b0(lVar9,1);
        lVar13 = *(longlong *)(lVar9 + 0x20);
      }
      else {
        lVar13 = 0;
      }
      *(longlong *)(lVar9 + 0x20) = lVar13 + 1;
      pub_142e32760(lVar13 * *(longlong *)(lVar9 + 8) + *(longlong *)(lVar9 + 0x10),&plStack_268);
      *(undefined4 *)(lVar9 + 0x38) = uVar4;
    }
    else {
      pdb_140f03090(lVar9,0,&plStack_268);
    }
    *(undefined4 *)(lVar9 + 0x3c) = uVar4;
  }
  pdb_141981020(&plStack_268,param_2,&UNK_1433573e8);
  plVar7 = plStack_268;
  *(undefined4 *)auStack_258._0_8_ = auStack_258._12_4_;
  lVar9 = plStack_268[2];
  if (lVar9 == *plStack_268) {
    pdb_142d895b0(plStack_268);
  }
  lVar13 = plVar7[1];
  *(code **)(lVar13 + lVar9 * 0x18) = pdb_140239570;
  *(ulonglong *)(lVar13 + 8 + lVar9 * 0x18) = uVar10;
  *(undefined1 *)(lVar13 + 0x10 + lVar9 * 0x18) = 0;
  plVar7[2] = lVar9 + 1;
  return;
}

