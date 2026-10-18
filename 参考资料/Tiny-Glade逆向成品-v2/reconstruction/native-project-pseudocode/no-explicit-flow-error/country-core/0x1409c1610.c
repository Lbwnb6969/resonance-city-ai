// VA 0x1409c1610, PDB extent 139 bytes
// country_core::systems::render_loop::lut_gallery::impl$0::build
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/lut_gallery.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::render_loop::lut_gallery::impl$0::build
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/lut_gallery.rs
   Extent: 139 */

longlong pdb_1409c1610(undefined8 param_1,longlong param_2)

{
  ulonglong *puVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  undefined8 uVar8;
  byte *pbVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  ushort uVar15;
  ulonglong uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  byte *pbStack_288;
  undefined8 uStack_280;
  ulonglong uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  ulonglong uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  byte *pbStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined2 uStack_c0;
  undefined1 uStack_be;
  byte *pbStack_b8;
  undefined8 uStack_b0;
  byte *pbStack_a8;
  undefined8 uStack_a0;
  longlong lStack_98;
  byte *pbStack_90;
  undefined8 uStack_88;
  longlong lStack_80;
  ulonglong *puStack_78;
  longlong lStack_70;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined8 uStack_60;
  uint uStack_38;
  
  uStack_60 = 0x1409c161d;
  pdb_14007ee60();
  uStack_60 = 0x1409c162c;
  pbVar9 = pub_1406abab0(0x48,8);
  if (pbVar9 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    uStack_60 = 0x1409c169a;
    pdb_142dc7e11(8,0x48);
  }
  pbVar9[0] = 1;
  pbVar9[1] = 0;
  pbVar9[2] = 0;
  pbVar9[3] = 0;
  pbVar9[4] = 0;
  pbVar9[5] = 0;
  pbVar9[6] = 0;
  pbVar9[7] = 0;
  pbVar9[8] = 1;
  pbVar9[9] = 0;
  pbVar9[10] = 0;
  pbVar9[0xb] = 0;
  pbVar9[0xc] = 0;
  pbVar9[0xd] = 0;
  pbVar9[0xe] = 0;
  pbVar9[0xf] = 0;
  pbVar9[0x10] = 0;
  pbVar9[0x14] = 0;
  pbVar9[0x15] = 0;
  pbVar9[0x16] = 0;
  pbVar9[0x17] = 0;
  *(ulonglong *)(pbVar9 + 0x18) = (ulonglong)uStack_38;
  pbVar9[0x20] = 0;
  pbVar9[0x21] = 0;
  pbVar9[0x22] = 0;
  pbVar9[0x23] = 0;
  pbVar9[0x24] = 0;
  pbVar9[0x25] = 0;
  pbVar9[0x26] = 0;
  pbVar9[0x27] = 0;
  pbVar9[0x28] = 0;
  pbVar9[0x29] = 0;
  pbVar9[0x2a] = 0;
  pbVar9[0x2b] = 0;
  pbVar9[0x2c] = 0;
  pbVar9[0x2d] = 0;
  pbVar9[0x2e] = 0;
  pbVar9[0x2f] = 0;
  pbVar9[0x30] = 0;
  pbVar9[0x31] = 0;
  pbVar9[0x32] = 0;
  pbVar9[0x33] = 0;
  pbVar9[0x34] = 0;
  pbVar9[0x35] = 0;
  pbVar9[0x36] = 0;
  pbVar9[0x37] = 0;
  pbVar9[0x35] = 0;
  pbVar9[0x36] = 0;
  pbVar9[0x37] = 0;
  pbVar9[0x38] = 0;
  pbVar9[0x39] = 0;
  pbVar9[0x3a] = 0;
  pbVar9[0x3b] = 0;
  pbVar9[0x3c] = 0;
  pbVar9[0x3d] = 0;
  uVar8 = _UNK_1433581f8;
  pbVar7 = _UNK_1433581f0;
  pbVar9[0x3e] = 0;
  pbVar9[0x3f] = 0;
  pbVar9[0x40] = 0;
  pbVar9[0x41] = 0;
  pbVar9[0x42] = 0;
  pbVar9[0x43] = 0;
  pbVar9[0x44] = 0;
  uStack_60 = 0xfffffffffffffffe;
  uStack_b0 = 0;
  lVar10 = param_2 + 0x38;
  puVar1 = (ulonglong *)(param_2 + 0x5a0);
  lStack_98 = 0;
  pbStack_90 = (byte *)0x8;
  uStack_88 = 0;
  pbStack_a8 = _UNK_1433581f0;
  uStack_a0 = _UNK_1433581f8;
  pbStack_b8 = pbVar9;
  lStack_80 = lVar10;
  puStack_78 = puVar1;
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar11 = *(longlong *)(param_2 + 0x70);
    uVar12 = 0xc473d25527169139;
    lVar13 = 0;
    while( true ) {
      uVar12 = uVar12 & *(ulonglong *)(param_2 + 0x78);
      pcVar2 = (char *)(lVar11 + uVar12);
      auVar18[0] = -(*pcVar2 == DAT_142e34310);
      auVar18[1] = -(pcVar2[1] == UNK_142e34311);
      auVar18[2] = -(pcVar2[2] == UNK_142e34312);
      auVar18[3] = -(pcVar2[3] == UNK_142e34313);
      auVar18[4] = -(pcVar2[4] == UNK_142e34314);
      auVar18[5] = -(pcVar2[5] == UNK_142e34315);
      auVar18[6] = -(pcVar2[6] == UNK_142e34316);
      auVar18[7] = -(pcVar2[7] == UNK_142e34317);
      auVar18[8] = -(pcVar2[8] == UNK_142e34318);
      auVar18[9] = -(pcVar2[9] == UNK_142e34319);
      auVar18[10] = -(pcVar2[10] == UNK_142e3431a);
      auVar18[0xb] = -(pcVar2[0xb] == UNK_142e3431b);
      auVar18[0xc] = -(pcVar2[0xc] == UNK_142e3431c);
      auVar18[0xd] = -(pcVar2[0xd] == UNK_142e3431d);
      auVar18[0xe] = -(pcVar2[0xe] == UNK_142e3431e);
      auVar18[0xf] = -(pcVar2[0xf] == UNK_142e3431f);
      uVar15 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
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
      uVar14 = (uint)uVar15;
      while (uVar15 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar14; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar16 = uVar5 + uVar12 & *(ulonglong *)(param_2 + 0x78);
        pcVar3 = (char *)(lVar11 + -0x18 + uVar16 * -0x18);
        auVar19[0] = -(*pcVar3 == DAT_142e34e10);
        auVar19[1] = -(pcVar3[1] == UNK_142e34e11);
        auVar19[2] = -(pcVar3[2] == UNK_142e34e12);
        auVar19[3] = -(pcVar3[3] == UNK_142e34e13);
        auVar19[4] = -(pcVar3[4] == UNK_142e34e14);
        auVar19[5] = -(pcVar3[5] == UNK_142e34e15);
        auVar19[6] = -(pcVar3[6] == UNK_142e34e16);
        auVar19[7] = -(pcVar3[7] == UNK_142e34e17);
        auVar19[8] = -(pcVar3[8] == UNK_142e34e18);
        auVar19[9] = -(pcVar3[9] == UNK_142e34e19);
        auVar19[10] = -(pcVar3[10] == UNK_142e34e1a);
        auVar19[0xb] = -(pcVar3[0xb] == UNK_142e34e1b);
        auVar19[0xc] = -(pcVar3[0xc] == UNK_142e34e1c);
        auVar19[0xd] = -(pcVar3[0xd] == UNK_142e34e1d);
        auVar19[0xe] = -(pcVar3[0xe] == UNK_142e34e1e);
        auVar19[0xf] = -(pcVar3[0xf] == UNK_142e34e1f);
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
          uVar12 = *(ulonglong *)(lVar11 + uVar16 * -0x18 + -8);
          goto code_r0x000141912272;
        }
        uVar15 = (ushort)(uVar14 - 1) & (ushort)uVar14;
        uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar15);
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
      uVar12 = uVar12 + lVar13 + 0x10;
      lVar13 = lVar13 + 0x10;
    }
  }
  pdb_140268ef0(&pbStack_288,param_2 + 0xd8,0xc473d25527169139,&pbStack_a8);
  if (uStack_278 == 2) {
    uVar12 = *puVar1;
    uVar16 = uVar12 + 1;
    *puVar1 = uVar16;
    uStack_c0 = 0x100;
    uStack_100 = 1;
    pbStack_f8 = pbVar7;
    uStack_f0 = uVar8;
    uStack_d8 = 8;
    uStack_d0 = 0x10;
    pcStack_c8 = pdb_1400d94d0;
    uStack_be = 1;
    uStack_e8 = 0;
    pdb_140f033d0(&pbStack_288,uVar12,&uStack_100);
    if (*(ulonglong *)(param_2 + 0x48) < uVar16) {
      uStack_62 = 1;
      pdb_1401728f0(lVar10,uVar16);
    }
    lVar11 = *(longlong *)(param_2 + 0x40) + uVar12 * 0x120;
    if (*(int *)(*(longlong *)(param_2 + 0x40) + uVar12 * 0x120) != 2) {
      lStack_70 = lVar11;
      pdb_1404ce7e0(lVar11 + 0x48);
      lVar11 = lStack_70;
      lVar13 = *(longlong *)(lStack_70 + 0xd8);
      if (lVar13 != 0) {
        uVar16 = lVar13 * 8 + 0x17U & 0xfffffffffffffff0;
        pub_1406abac0((byte *)(*(longlong *)(lStack_70 + 0xd0) - uVar16),lVar13 + uVar16 + 0x11,0x10
                     );
      }
      if (*(longlong *)(lVar11 + 0xb8) != 0) {
        pub_1406abac0(*(byte **)(lVar11 + 0xc0),*(longlong *)(lVar11 + 0xb8) << 4,8);
      }
    }
    pub_142e32760(lVar11,&pbStack_288,0x120);
    pbStack_288 = pbStack_a8;
    uStack_280 = uStack_a0;
    pdb_1403b0980(param_2 + 0x70,&pbStack_288,uVar12);
  }
  else {
    uStack_108 = uStack_220;
    uStack_118 = uStack_230;
    uStack_110 = uStack_228;
    uStack_128 = uStack_240;
    uStack_120 = uStack_238;
    uStack_138 = uStack_250;
    uStack_130 = uStack_248;
    uStack_148 = uStack_260;
    uStack_140 = uStack_258;
    uStack_158 = uStack_270;
    uStack_150 = uStack_268;
    uStack_160 = uStack_278;
    uVar12 = pdb_140f275b0(&uStack_160,&lStack_98);
    if (lStack_98 != 0) {
      pub_1406abac0(pbStack_90,lStack_98 << 3,8);
    }
  }
code_r0x000141912272:
  uStack_280 = 0;
  uVar4 = *(undefined4 *)(param_2 + 0x5a8);
  uStack_61 = 0;
  pbStack_288 = pbVar9;
  pdb_140ef59c0(param_2);
  uStack_61 = 0;
  uStack_160 = uVar12;
  lVar10 = pdb_14199fe30(param_2 + 0x1d0,uVar12,lVar10,&uStack_160);
  if (*(longlong *)(lVar10 + 0x20) == 0) {
    if (*(longlong *)(lVar10 + 0x18) == 0) {
      uStack_61 = 0;
      pdb_142dbe3b0(lVar10,1);
      lVar11 = *(longlong *)(lVar10 + 0x20);
    }
    else {
      lVar11 = 0;
    }
    *(longlong *)(lVar10 + 0x20) = lVar11 + 1;
    pub_142e32760(lVar11 * *(longlong *)(lVar10 + 8) + *(longlong *)(lVar10 + 0x10),&pbStack_288);
    *(undefined4 *)(lVar10 + 0x38) = uVar4;
  }
  else {
    uStack_61 = 0;
    pdb_140f03090(lVar10,0,&pbStack_288);
  }
  *(undefined4 *)(lVar10 + 0x3c) = uVar4;
  return param_2;
}

