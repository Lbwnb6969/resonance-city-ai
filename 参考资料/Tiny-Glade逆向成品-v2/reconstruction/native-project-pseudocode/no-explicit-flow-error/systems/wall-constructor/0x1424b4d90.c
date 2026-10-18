// VA 0x1424b4d90, PDB extent 1243 bytes
// system_wall_constructor::construct_platform_stairs::emit_wooden_stair_pieces::wooden_stair_layout
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_platform_stairs/emit_wooden_stair_pieces.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_platform_stairs::emit_wooden_stair_pieces::wooden_stair_layout
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_platform_stairs/emit_wooden_stair_pieces.rs
   Extent: 1243 */

ulonglong * pdb_1424b4d90(ulonglong *param_1,int *param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fStack_128;
  ulonglong uStack_110;
  byte *pbStack_108;
  ulonglong uStack_100;
  float fStack_f4;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  fVar1 = *(float *)((longlong)param_3 + 0x14);
  fVar18 = (float)*(undefined8 *)((longlong)param_3 + 0xc);
  fVar19 = (float)((ulonglong)*(undefined8 *)((longlong)param_3 + 0xc) >> 0x20);
  fVar20 = (float)*param_3;
  fVar21 = (float)((ulonglong)*param_3 >> 0x20);
  fVar2 = *(float *)(param_3 + 1);
  fVar11 = fVar1 - fVar2;
  fVar15 = fVar18 - fVar20;
  fVar16 = fVar19 - fVar21;
  fVar11 = SQRT(fVar11 * fVar11 + fVar16 * fVar16 + fVar15 * fVar15);
  if (fVar11 <= _DAT_142e37848) {
    *param_1 = 0x8000000000000000;
  }
  else {
    fVar15 = *(float *)(param_3 + 3);
    if (*(float *)(param_3 + 3) <= _DAT_142e37848) {
      fVar15 = _DAT_142e37848;
    }
    fVar15 = (float)pub_142e329c0(fVar11 / fVar15);
    if (fVar15 <= _DAT_142e36f28) {
      fVar15 = _DAT_142e36f28;
    }
    uVar5 = 0;
    uVar6 = (longlong)(fVar15 - _DAT_142e36f2c) & (longlong)fVar15 >> 0x3f | (longlong)fVar15;
    if (fVar15 < 0.0) {
      uVar6 = uVar5;
    }
    uVar10 = 0xffffffffffffffff;
    if (fVar15 <= _DAT_142e36f30) {
      uVar10 = uVar6;
    }
    uVar6 = uVar10 + 1;
    uVar8 = uVar6 * 0x10;
    if (uVar8 < 0x7ffffffffffffffd && uVar6 >> 0x3c == 0) goto LAB_1424b4f10;
    do {
      pdb_142dc7e2a(uVar5,uVar8);
LAB_1424b4f10:
      if (uVar8 == 0) {
        pbStack_108 = (byte *)0x4;
        uVar6 = 0;
        break;
      }
      pdb_14007ee60();
      uVar5 = 4;
      pbStack_108 = pub_1406abab0(uVar8,4);
    } while (pbStack_108 == (byte *)0x0);
    fStack_f4 = fVar11 / (float)uVar10;
    uStack_100 = 0;
    iVar4 = *param_2;
    uVar3 = *(undefined8 *)(param_2 + 1);
    fVar11 = (float)((ulonglong)uVar3 >> 0x20);
    fVar24 = (float)*(undefined8 *)(param_2 + 5);
    fVar25 = (float)((ulonglong)*(undefined8 *)(param_2 + 5) >> 0x20);
    fVar15 = (float)*(undefined8 *)(param_2 + 3);
    fVar16 = (float)((ulonglong)*(undefined8 *)(param_2 + 3) >> 0x20);
    lVar7 = 0xc;
    uVar5 = 0;
    uVar8 = 1;
    uStack_110 = uVar6;
    do {
      uVar9 = uVar8;
      uVar6 = uVar5 + (uVar5 < uVar10);
      fVar22 = (float)uVar5 / (float)uVar10;
      fVar12 = _DAT_142e36f28 - fVar22;
      fVar26 = fVar22 * fVar18 + fVar12 * fVar20;
      fVar23 = fVar22 * fVar1 + fVar2 * fVar12;
      fStack_128 = (float)uVar3;
      if (iVar4 == 0) {
        fVar13 = fVar23 - fVar11;
        fVar17 = fVar16 * fVar13 + fVar15 * (fVar26 - fStack_128);
        fVar14 = fVar13 * fVar25 + (fVar26 - fStack_128) * fVar24;
        fVar13 = fVar14;
        if (fVar14 <= fVar17) {
          fVar13 = fVar17;
        }
        fVar13 = (float)(~-(uint)NAN(fVar17) & (uint)fVar13 | -(uint)NAN(fVar17) & (uint)fVar14);
      }
      else if (iVar4 == 1) {
        fVar13 = fVar26 - fVar15;
        fVar14 = fVar23 - fVar16;
        fVar13 = SQRT(fVar14 * fVar14 + fVar13 * fVar13) - fVar24;
      }
      else {
        fVar13 = (fVar23 - fVar11) * fVar25 + (fVar26 - fStack_128) * fVar24;
      }
      if (uVar9 - 1 == uStack_110) {
        pdb_142d7ef30(&uStack_110);
      }
      *(ulonglong *)(pbStack_108 + lVar7 + -0xc) =
           CONCAT44(fVar22 * fVar19 + fVar12 * fVar21,fVar26);
      *(float *)(pbStack_108 + lVar7 + -4) = fVar23;
      *(float *)(pbStack_108 + lVar7) = fVar13;
      if (uVar10 <= uVar5) break;
      lVar7 = lVar7 + 0x10;
      uVar5 = uVar6;
      uVar8 = uVar9 + 1;
      uStack_100 = uVar9;
    } while (uVar6 <= uVar10);
    param_1[2] = uVar9;
    *param_1 = uStack_110;
    param_1[1] = (ulonglong)pbStack_108;
    *(float *)(param_1 + 3) = fStack_f4;
  }
  return param_1;
}

