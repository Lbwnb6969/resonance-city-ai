// VA 0x140c356c0, PDB extent 1495 bytes
// country_core::systems::wall::eraser::archivist::WallEraserArchivist::cache_if_original_wall
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/eraser/archivist.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::eraser::archivist::WallEraserArchivist::cache_if_original_wall
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/eraser/archivist.rs
   Extent: 1495 */

void pdb_140c356c0(longlong *param_1,longlong param_2,longlong param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  byte *pbVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined4 *puVar16;
  uint uVar17;
  longlong lVar18;
  ushort uVar19;
  undefined8 uVar20;
  byte bVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  ulonglong uStack_188;
  byte *pbStack_180;
  ulonglong uStack_178;
  ulonglong uStack_170;
  byte *pbStack_168;
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
  byte *pbStack_110;
  undefined8 uStack_108;
  ulonglong uStack_f8;
  byte *pbStack_f0;
  ulonglong uStack_e8;
  ulonglong uStack_e0;
  byte *pbStack_d8;
  ulonglong uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  uint uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  longlong lStack_88;
  byte *pbStack_80;
  longlong lStack_70;
  longlong lStack_68;
  ulonglong uStack_60;
  byte *pbStack_58;
  ulonglong uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lStack_68 = param_2;
  if (param_1[3] != 0) {
    uVar12 = pdb_1400af0a0(param_1 + 4,&lStack_68);
    bVar21 = (byte)(uVar12 >> 0x39);
    auVar22 = ZEXT216(CONCAT11(bVar21,bVar21));
    auVar22 = pshuflw(auVar22,auVar22,0);
    lVar14 = 0;
    while( true ) {
      uVar12 = uVar12 & param_1[1];
      pcVar1 = (char *)(*param_1 + uVar12);
      auVar25[0] = -(*pcVar1 == auVar22[0]);
      auVar25[1] = -(pcVar1[1] == auVar22[1]);
      auVar25[2] = -(pcVar1[2] == auVar22[2]);
      auVar25[3] = -(pcVar1[3] == auVar22[3]);
      auVar25[4] = -(pcVar1[4] == auVar22[4]);
      auVar25[5] = -(pcVar1[5] == auVar22[5]);
      auVar25[6] = -(pcVar1[6] == auVar22[6]);
      auVar25[7] = -(pcVar1[7] == auVar22[7]);
      auVar25[8] = -(pcVar1[8] == auVar22[0]);
      auVar25[9] = -(pcVar1[9] == auVar22[1]);
      auVar25[10] = -(pcVar1[10] == auVar22[2]);
      auVar25[0xb] = -(pcVar1[0xb] == auVar22[3]);
      auVar25[0xc] = -(pcVar1[0xc] == auVar22[4]);
      auVar25[0xd] = -(pcVar1[0xd] == auVar22[5]);
      auVar25[0xe] = -(pcVar1[0xe] == auVar22[6]);
      auVar25[0xf] = -(pcVar1[0xf] == auVar22[7]);
      uVar19 = (ushort)(SUB161(auVar25 >> 7,0) & 1) | (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe | (ushort)(auVar25[0xf] >> 7) << 0xf;
      uVar17 = (uint)uVar19;
      while (uVar19 != 0) {
        uVar6 = 0;
        for (uVar7 = uVar17; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar6 = uVar6 + 1;
        }
        if (param_2 == *(longlong *)(*param_1 + (uVar6 + uVar12 & param_1[1]) * -0x10 + -0x10)) {
          return;
        }
        uVar19 = (ushort)(uVar17 - 1) & (ushort)uVar17;
        uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar19);
      }
      auVar23[0] = -(*pcVar1 == -1);
      auVar23[1] = -(pcVar1[1] == -1);
      auVar23[2] = -(pcVar1[2] == -1);
      auVar23[3] = -(pcVar1[3] == -1);
      auVar23[4] = -(pcVar1[4] == -1);
      auVar23[5] = -(pcVar1[5] == -1);
      auVar23[6] = -(pcVar1[6] == -1);
      auVar23[7] = -(pcVar1[7] == -1);
      auVar23[8] = -(pcVar1[8] == -1);
      auVar23[9] = -(pcVar1[9] == -1);
      auVar23[10] = -(pcVar1[10] == -1);
      auVar23[0xb] = -(pcVar1[0xb] == -1);
      auVar23[0xc] = -(pcVar1[0xc] == -1);
      auVar23[0xd] = -(pcVar1[0xd] == -1);
      auVar23[0xe] = -(pcVar1[0xe] == -1);
      auVar23[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar23 >> 7,0) & 1) != 0 || (SUB161(auVar23 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar23 >> 0x17,0) & 1) != 0) || (SUB161(auVar23 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar23 >> 0x27,0) & 1) != 0) || (SUB161(auVar23 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar23 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar23 >> 0x3f,0) & 1) != 0) || (SUB161(auVar23 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar23 >> 0x4f,0) & 1) != 0) || (SUB161(auVar23 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar23 >> 0x5f,0) & 1) != 0) || (SUB161(auVar23 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar23 >> 0x6f,0) & 1) != 0) || (SUB161(auVar23 >> 0x77,0) & 1) != 0) ||
          auVar23[0xf] < '\0') break;
      uVar12 = uVar12 + lVar14 + 0x10;
      lVar14 = lVar14 + 0x10;
    }
  }
  lStack_70 = param_2;
  if (param_1[0xf] != 0) {
    uVar12 = pdb_1400af0a0(param_1 + 0x10,&lStack_70);
    bVar21 = (byte)(uVar12 >> 0x39);
    auVar22 = ZEXT216(CONCAT11(bVar21,bVar21));
    auVar22 = pshuflw(auVar22,auVar22,0);
    lVar14 = 0;
    while( true ) {
      uVar12 = uVar12 & param_1[0xd];
      pcVar1 = (char *)(param_1[0xc] + uVar12);
      auVar26[0] = -(*pcVar1 == auVar22[0]);
      auVar26[1] = -(pcVar1[1] == auVar22[1]);
      auVar26[2] = -(pcVar1[2] == auVar22[2]);
      auVar26[3] = -(pcVar1[3] == auVar22[3]);
      auVar26[4] = -(pcVar1[4] == auVar22[4]);
      auVar26[5] = -(pcVar1[5] == auVar22[5]);
      auVar26[6] = -(pcVar1[6] == auVar22[6]);
      auVar26[7] = -(pcVar1[7] == auVar22[7]);
      auVar26[8] = -(pcVar1[8] == auVar22[0]);
      auVar26[9] = -(pcVar1[9] == auVar22[1]);
      auVar26[10] = -(pcVar1[10] == auVar22[2]);
      auVar26[0xb] = -(pcVar1[0xb] == auVar22[3]);
      auVar26[0xc] = -(pcVar1[0xc] == auVar22[4]);
      auVar26[0xd] = -(pcVar1[0xd] == auVar22[5]);
      auVar26[0xe] = -(pcVar1[0xe] == auVar22[6]);
      auVar26[0xf] = -(pcVar1[0xf] == auVar22[7]);
      uVar19 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe | (ushort)(auVar26[0xf] >> 7) << 0xf;
      uVar17 = (uint)uVar19;
      while (uVar19 != 0) {
        uVar6 = 0;
        for (uVar7 = uVar17; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar6 = uVar6 + 1;
        }
        if (param_2 == *(longlong *)(param_1[0xc] + -0x90 + (uVar6 + uVar12 & param_1[0xd]) * -0x90)
           ) goto LAB_140c35883;
        uVar19 = (ushort)(uVar17 - 1) & (ushort)uVar17;
        uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar19);
      }
      auVar24[0] = -(*pcVar1 == -1);
      auVar24[1] = -(pcVar1[1] == -1);
      auVar24[2] = -(pcVar1[2] == -1);
      auVar24[3] = -(pcVar1[3] == -1);
      auVar24[4] = -(pcVar1[4] == -1);
      auVar24[5] = -(pcVar1[5] == -1);
      auVar24[6] = -(pcVar1[6] == -1);
      auVar24[7] = -(pcVar1[7] == -1);
      auVar24[8] = -(pcVar1[8] == -1);
      auVar24[9] = -(pcVar1[9] == -1);
      auVar24[10] = -(pcVar1[10] == -1);
      auVar24[0xb] = -(pcVar1[0xb] == -1);
      auVar24[0xc] = -(pcVar1[0xc] == -1);
      auVar24[0xd] = -(pcVar1[0xd] == -1);
      auVar24[0xe] = -(pcVar1[0xe] == -1);
      auVar24[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 || (SUB161(auVar24 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar24 >> 0x17,0) & 1) != 0) || (SUB161(auVar24 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar24 >> 0x27,0) & 1) != 0) || (SUB161(auVar24 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar24 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar24 >> 0x3f,0) & 1) != 0) || (SUB161(auVar24 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar24 >> 0x4f,0) & 1) != 0) || (SUB161(auVar24 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar24 >> 0x5f,0) & 1) != 0) || (SUB161(auVar24 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar24 >> 0x6f,0) & 1) != 0) || (SUB161(auVar24 >> 0x77,0) & 1) != 0) ||
          auVar24[0xf] < '\0') break;
      uVar12 = uVar12 + lVar14 + 0x10;
      lVar14 = lVar14 + 0x10;
    }
  }
  uVar3 = *(ulonglong *)(param_3 + 0x10);
  uVar12 = uVar3 * 8;
  if (0x7ffffffffffffffc < uVar12 || uVar3 >> 0x3d != 0) {
    uVar20 = 0;
LAB_140c35878:
    pdb_142dc7e2a(uVar20,uVar12);
LAB_140c35883:
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14306c838,0x38,&UNK_14306c870);
  }
  if (uVar12 == 0) {
    pbStack_58 = (byte *)0x4;
    uVar15 = *(ulonglong *)(param_3 + 8);
    uVar11 = 0;
  }
  else {
    uStack_50 = *(ulonglong *)(param_3 + 8);
    pdb_14007ee60();
    uVar20 = 4;
    pbStack_58 = pub_1406abab0(uVar12,4);
    uVar15 = uStack_50;
    uVar11 = uVar3;
    if (pbStack_58 == (byte *)0x0) goto LAB_140c35878;
  }
  if (uVar3 != 0) {
    pub_142e32760(pbStack_58,uVar15,uVar12);
  }
  uStack_e0 = *(ulonglong *)(param_3 + 0x28);
  uVar12 = uStack_e0 * 4;
  if (uVar12 < 0x7ffffffffffffffd && uStack_e0 >> 0x3e == 0) {
    if (uVar12 == 0) {
      pbStack_d8 = (byte *)0x4;
      uStack_f8 = uVar11;
    }
    else {
      puVar4 = *(undefined4 **)(param_3 + 0x20);
      uStack_60 = uStack_e0;
      uStack_50 = uVar11;
      pdb_14007ee60();
      uVar20 = 4;
      pbStack_d8 = pub_1406abab0(uVar12,4);
      if (pbStack_d8 == (byte *)0x0) goto LAB_140c3591b;
      uStack_e0 = uStack_60;
      uStack_f8 = uStack_50;
      if (uStack_60 != 0) {
        uVar12 = uStack_60 - 1;
        if (uStack_60 < uStack_60 - 1) {
          uVar12 = uStack_60;
        }
        if (uVar12 < 8) {
          lVar14 = 0;
          uVar12 = uStack_60;
          puVar16 = puVar4;
        }
        else {
          uVar12 = uVar12 + 1;
          uVar15 = 8;
          if ((uVar12 & 7) != 0) {
            uVar15 = (ulonglong)((uint)uVar12 & 7);
          }
          lVar14 = uVar12 - uVar15;
          uVar12 = uStack_60 - lVar14;
          puVar16 = puVar4 + lVar14;
          lVar18 = 0;
          do {
            uVar20 = *(undefined8 *)((longlong)(puVar4 + lVar18) + 8);
            uVar9 = *(undefined8 *)(puVar4 + lVar18 + 4);
            uVar10 = *(undefined8 *)((longlong)(puVar4 + lVar18 + 4) + 8);
            *(undefined8 *)(pbStack_d8 + lVar18 * 4) = *(undefined8 *)(puVar4 + lVar18);
            *(undefined8 *)(pbStack_d8 + lVar18 * 4 + 8) = uVar20;
            *(undefined8 *)(pbStack_d8 + lVar18 * 4 + 0x10) = uVar9;
            *(undefined8 *)(pbStack_d8 + lVar18 * 4 + 0x10 + 8) = uVar10;
            lVar18 = lVar18 + 8;
          } while (lVar14 != lVar18);
        }
        pbVar13 = pbStack_d8 + lVar14 * 4;
        do {
          if (puVar16 == puVar4 + uStack_60) break;
          uVar2 = *puVar16;
          puVar16 = puVar16 + 1;
          *(undefined4 *)pbVar13 = uVar2;
          pbVar13 = pbVar13 + 4;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
    }
    uStack_c8 = *(undefined4 *)(param_3 + 0x30);
    uStack_a4 = *(undefined4 *)(param_3 + 0x54);
    uVar17 = *(uint *)(param_3 + 0x38);
    iVar8 = uVar17 - 2;
    if (uVar17 < 2) {
      iVar8 = 2;
    }
    uStack_c0 = 2;
    if (iVar8 != 0) {
      if (iVar8 == 1) {
        uStack_c0 = 3;
      }
      else {
        uStack_178 = *(undefined8 *)(param_3 + 0x4c);
        uStack_188 = *(ulonglong *)(param_3 + 0x3c);
        pbStack_180 = *(byte **)(param_3 + 0x44);
        uStack_c0 = uVar17;
      }
    }
    pbStack_f0 = pbStack_58;
    uStack_bc = (undefined4)uStack_188;
    uStack_b8 = (undefined4)(uStack_188 >> 0x20);
    uStack_b4 = SUB84(pbStack_180,0);
    uStack_b0 = (undefined4)((ulonglong)pbStack_180 >> 0x20);
    uStack_ac = (undefined4)uStack_178;
    uStack_a8 = (undefined4)(uStack_178 >> 0x20);
    uStack_90 = *(undefined8 *)(param_3 + 0x68);
    uStack_a0 = *(undefined8 *)(param_3 + 0x58);
    uStack_98 = *(undefined8 *)(param_3 + 0x60);
    uStack_e8 = uVar3;
    uStack_d0 = uStack_e0;
    pdb_14007ee60();
    pbStack_110 = pub_1406abab0(0x10,8);
    if (pbStack_110 != (byte *)0x0) {
      *(longlong *)pbStack_110 = param_2;
      *(undefined8 *)(pbStack_110 + 8) = _DAT_142e378e0;
      uStack_128 = uStack_98;
      uStack_120 = uStack_90;
      uStack_138 = CONCAT44(uStack_a4,uStack_a8);
      uStack_130 = uStack_a0;
      uStack_148 = CONCAT44(uStack_b4,uStack_b8);
      uStack_140 = CONCAT44(uStack_ac,uStack_b0);
      uStack_158 = CONCAT44(uStack_c4,uStack_c8);
      uStack_150 = CONCAT44(uStack_bc,uStack_c0);
      pbStack_168 = pbStack_d8;
      uStack_160 = uStack_d0;
      uStack_178 = uStack_e8;
      uStack_170 = uStack_e0;
      uStack_188 = uStack_f8;
      pbStack_180 = pbStack_f0;
      uStack_118 = 1;
      uStack_108 = 1;
      pdb_1417b3c40(&uStack_f8,param_1 + 0xc,param_2,&uStack_188);
      if (!SBORROW8(0,uStack_f8)) {
        if (uStack_f8 != 0) {
          pub_1406abac0(pbStack_f0,uStack_f8 << 3,4);
        }
        if (uStack_e0 != 0) {
          pub_1406abac0(pbStack_d8,uStack_e0 << 2,4);
        }
        if ((!SBORROW8(0,lStack_88)) && (lStack_88 != 0)) {
          pub_1406abac0(pbStack_80,lStack_88 << 4,8);
        }
      }
      pdb_1417b66a0(param_1,param_2,param_2);
      return;
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x10);
  }
  uVar20 = 0;
  uStack_50 = uVar11;
LAB_140c3591b:
  pdb_142dc7e2a(uVar20,uVar12);
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}

