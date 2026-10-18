// VA 0x1417d9b80, PDB extent 1431 bytes
// asset_pipe::texture_processing::distribute_alpha_visibility
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/texture_processing.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: asset_pipe::texture_processing::distribute_alpha_visibility
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/texture_processing.rs
   Extent: 1431 */

void pdb_1417d9b80(longlong param_1,ulonglong *param_2,ulonglong param_3,ulonglong param_4,
                  int param_5,longlong param_6,ulonglong param_7)

{
  float fVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  float fVar17;
  undefined1 *puStack_f0;
  ulonglong uStack_e8;
  uint uStack_dc;
  ulonglong uStack_d8;
  ulonglong *puStack_d0;
  ulonglong uStack_c8;
  ulonglong uStack_c0;
  ulonglong *puStack_b8;
  ulonglong *puStack_b0;
  undefined1 uStack_a2;
  undefined1 uStack_a1;
  undefined8 uStack_a0;
  
  uStack_a0 = 0xfffffffffffffffe;
  if ((param_3 != 0) && (param_4 != 0)) {
    puStack_b8 = param_2 + param_3;
    lVar12 = *(longlong *)(param_1 + 0x20);
    uVar2 = *(ulonglong *)(param_1 + 0x28);
    uVar13 = 0;
    uVar10 = 0;
    do {
      uVar11 = param_2[uVar13];
      if (uVar2 <= uVar11) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar11,uVar2,&UNK_143516ae8);
      }
      uVar10 = uVar10 + *(longlong *)(lVar12 + uVar11 * 8);
      uVar13 = uVar13 + 1;
    } while (param_3 != uVar13);
    if (uVar10 < param_4) {
      param_4 = uVar10;
    }
    uVar13 = param_3 << 4;
    uStack_d8 = param_3;
    uVar10 = param_4;
    if (param_3 >> 0x3b == 0) goto LAB_1417d9c2d;
    lVar7 = 0;
    do {
      param_1 = lVar7;
      pdb_142dc7e2a(param_1,uVar13);
      uStack_d8 = param_3;
      uVar10 = param_4;
LAB_1417d9c2d:
      param_3 = uStack_d8;
      param_4 = uVar10;
      puStack_b0 = (ulonglong *)lVar12;
      pdb_14007ee60();
      puStack_d0 = (ulonglong *)pub_1406abab0(uVar13,8);
      fVar5 = _DAT_142e36f30;
      fVar4 = _DAT_142e36f2c;
      lVar7 = 8;
    } while (puStack_d0 == (ulonglong *)0x0);
    lVar12 = *(longlong *)(param_1 + 8);
    uStack_e8 = *(ulonglong *)(param_1 + 0x10);
    uVar13 = *(ulonglong *)(param_1 + 0x48);
    uStack_dc = param_5 * 0x27d4eb2d;
    uVar16 = 0;
    uVar11 = 0;
    uStack_c0 = uVar2;
    for (; uStack_c8 = uVar16, param_2 != puStack_b8; param_2 = param_2 + 1) {
      uVar2 = *param_2;
      if (uStack_e8 <= uVar2) {
        uStack_a1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar2,uStack_e8,&UNK_143338f50);
      }
      if (uStack_c0 <= uVar2) {
        uStack_a1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar2,uStack_c0,&UNK_143338f68);
      }
      fVar1 = *(float *)(lVar12 + uVar2 * 4);
      fVar17 = (float)pub_142e32a40(fVar1);
      uVar15 = 0;
      if (0.0 <= fVar17) {
        uVar15 = (longlong)(fVar17 - fVar4) & (longlong)fVar17 >> 0x3f | (longlong)fVar17;
      }
      if (fVar5 < fVar17) {
        uVar15 = 0xffffffffffffffff;
      }
      uVar3 = *(ulonglong *)((longlong)puStack_b0 + uVar2 * 8);
      if (uVar3 < uVar15) {
        uVar15 = uVar3;
      }
      if (param_7 <= uVar2) {
        uStack_a1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar2,param_7,&UNK_143338f80);
      }
      uVar3 = *(ulonglong *)(param_6 + uVar2 * 8);
      lVar7 = uVar3 + uVar15;
      if (CARRY8(uVar3,uVar15)) {
        lVar7 = -1;
      }
      *(longlong *)(param_6 + uVar2 * 8) = lVar7;
      if (uVar13 == 0) {
        uStack_a1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8510(&UNK_143338fc0);
      }
      if ((uVar2 | uVar13) >> 0x20 == 0) {
        iVar9 = (int)((uVar2 & 0xffffffff) % (uVar13 & 0xffffffff));
        iVar6 = (int)((uVar2 & 0xffffffff) / (uVar13 & 0xffffffff));
      }
      else {
        iVar6 = (int)(uVar2 / uVar13);
        iVar9 = (int)(uVar2 % uVar13);
      }
      if (uVar16 == uStack_d8) {
        uStack_a1 = 1;
        pdb_142d7e980(&uStack_d8);
      }
      uVar11 = uVar11 + uVar15;
      uVar8 = iVar6 * -0x3d4d51cb ^ iVar9 * -0x7a143595 ^ uStack_dc;
      uVar8 = (uVar8 >> 0x10 ^ uVar8) * 0x7feb352d;
      uVar8 = (uVar8 >> 0xf ^ uVar8) * -0x7b935975;
      puStack_d0[uVar16 * 2] = uVar2;
      *(float *)(puStack_d0 + uVar16 * 2 + 1) = fVar1 - (float)uVar15;
      *(uint *)((longlong)puStack_d0 + uVar16 * 0x10 + 0xc) = uVar8 >> 0x10 ^ uVar8;
      uVar16 = uVar16 + 1;
    }
    puStack_f0 = &uStack_a2;
    if (1 < uVar16) {
      if (uVar16 < 0x15) {
        uStack_a1 = 1;
        pdb_141db4dc0(puStack_d0,uVar16,1,&puStack_f0);
      }
      else {
        uStack_a1 = 1;
        pdb_141db5370(puStack_d0,uVar16,&puStack_f0);
      }
    }
    lVar12 = uVar10 - uVar11;
    if (uVar11 <= uVar10 && lVar12 != 0) {
      puVar14 = puStack_d0;
      do {
        do {
          if (puVar14 == puStack_d0 + uStack_c8 * 2) goto LAB_1417d9ec6;
          uVar2 = *puVar14;
          if (param_7 <= uVar2) {
            puStack_b0 = puStack_d0;
            puStack_b8 = (ulonglong *)uStack_d8;
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar2,param_7,&UNK_143338f20);
          }
          if (uStack_c0 <= uVar2) {
            puStack_b0 = puStack_d0;
            puStack_b8 = (ulonglong *)uStack_d8;
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar2,uStack_c0,&UNK_143338f38);
          }
          puVar14 = puVar14 + 2;
          uVar10 = *(ulonglong *)(param_6 + uVar2 * 8);
        } while (*(ulonglong *)((longlong)puStack_b0 + uVar2 * 8) <= uVar10);
        *(ulonglong *)(param_6 + uVar2 * 8) = uVar10 + 1;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
LAB_1417d9ec6:
    if (uStack_d8 != 0) {
      pub_1406abac0((byte *)puStack_d0,uStack_d8 << 4,8);
    }
  }
  return;
}

