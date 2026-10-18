// VA 0x140bd60f0, PDB extent 285 bytes
// country_core::resources::active_raster_stroke::ActiveRasterStroke::resample_and_smooth
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/active_raster_stroke.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x0001419a61b1) */
/* WARNING: Removing unreachable block (ram,0x0001419a6209) */
/* WARNING: Removing unreachable block (ram,0x0001419a6230) */
/* WARNING: Removing unreachable block (ram,0x0001419a6260) */
/* WARNING: Removing unreachable block (ram,0x0001419a63b9) */
/* WARNING: Removing unreachable block (ram,0x0001419a6223) */
/* WARNING: Removing unreachable block (ram,0x0001419a63d9) */
/* WARNING: Removing unreachable block (ram,0x0001419a63f0) */
/* WARNING: Removing unreachable block (ram,0x0001419a643e) */
/* WARNING: Removing unreachable block (ram,0x0001419a61f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::active_raster_stroke::ActiveRasterStroke::resample_and_smooth
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/active_raster_stroke.rs
   Extent: 285 */

void pdb_140bd60f0(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  float *pfVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar25;
  undefined8 uVar24;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  
  *(undefined8 *)(param_1 + 0x58) = 0;
  lVar17 = *(longlong *)(param_1 + 0x18);
  uVar6 = *(ulonglong *)(param_1 + 0x20);
  if (*(ulonglong *)(param_1 + 0x48) < uVar6) {
    pdb_142d7f1b0(param_1 + 0x48,0,uVar6,4,0xc);
    lVar12 = *(longlong *)(param_1 + 0x58);
    lVar20 = *(longlong *)(param_1 + 0x50);
    if (uVar6 == 1) goto LAB_140bd612c;
LAB_140bd6163:
    lVar1 = lVar20 + lVar12 * 0xc;
    lVar19 = 0xc;
    lVar13 = 0;
    do {
      *(undefined4 *)(lVar1 + -4 + lVar19) = *(undefined4 *)(lVar17 + -4 + lVar19);
      *(undefined8 *)(lVar1 + -0xc + lVar19) = *(undefined8 *)(lVar17 + -0xc + lVar19);
      *(undefined8 *)(lVar1 + lVar19) = *(undefined8 *)(lVar17 + lVar19);
      *(undefined4 *)(lVar1 + 8 + lVar19) = *(undefined4 *)(lVar17 + 8 + lVar19);
      lVar19 = lVar19 + 0x18;
      lVar13 = lVar13 + -2;
    } while (-lVar13 != (uVar6 & 0xfffffffffffffffe));
    lVar12 = lVar12 - lVar13;
    if ((uVar6 & 1) == 0) goto LAB_140bd61dc;
    lVar13 = -lVar13;
  }
  else {
    lVar12 = 0;
    if (uVar6 == 0) goto LAB_140bd61dc;
    lVar20 = *(longlong *)(param_1 + 0x50);
    if (uVar6 != 1) goto LAB_140bd6163;
LAB_140bd612c:
    lVar13 = 0;
  }
  *(undefined4 *)(lVar20 + 8 + lVar12 * 0xc) = *(undefined4 *)(lVar17 + 8 + lVar13 * 0xc);
  *(undefined8 *)(lVar20 + lVar12 * 0xc) = *(undefined8 *)(lVar17 + lVar13 * 0xc);
  lVar12 = lVar12 + 1;
LAB_140bd61dc:
  *(longlong *)(param_1 + 0x58) = lVar12;
  pdb_140bd6350(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),param_1 + 0x48);
  fVar11 = _UNK_142e36f4c;
  fVar10 = _UNK_142e36f48;
  fVar9 = _UNK_142e36f44;
  fVar8 = _DAT_142e36f40;
  puVar7 = *(undefined8 **)(param_1 + 0x50);
  uVar6 = *(ulonglong *)(param_1 + 0x58);
  if (2 < uVar6) {
    fVar21 = (float)*puVar7;
    fVar22 = (float)((ulonglong)*puVar7 >> 0x20);
    fVar2 = *(float *)(puVar7 + 1);
    uVar14 = uVar6 - 2;
    uVar18 = uVar14 & 0xfffffffffffffffc;
    lVar17 = 0;
    fVar26 = _DAT_142e36f60;
    fVar27 = _UNK_142e36f64;
    fVar23 = _DAT_142e36f50;
    do {
      uVar24 = *(undefined8 *)((longlong)puVar7 + 0xc);
      fVar28 = (float)uVar24;
      fVar29 = (float)((ulonglong)uVar24 >> 0x20);
      fVar30 = *(float *)((longlong)puVar7 + 0x14);
      lVar20 = 1;
      uVar15 = uVar18;
      pfVar16 = (float *)((longlong)puVar7 + 0x44);
      fVar31 = fVar30;
      fVar32 = fVar2;
      fVar33 = fVar21;
      fVar34 = fVar22;
      fVar35 = fVar22;
      fVar36 = fVar28;
      fVar37 = fVar21;
      fVar38 = fVar2;
      if (uVar14 < 4) {
LAB_1419a66a6:
        pfVar16 = (float *)((longlong)puVar7 + lVar20 * 0xc + 0x14);
        lVar20 = (uVar6 - 1) - lVar20;
        do {
          fVar36 = fVar30;
          fVar35 = fVar29;
          fVar31 = fVar28;
          fVar30 = *pfVar16;
          fVar28 = (float)*(undefined8 *)(pfVar16 + -2);
          fVar29 = (float)((ulonglong)*(undefined8 *)(pfVar16 + -2) >> 0x20);
          *(ulonglong *)(pfVar16 + -5) =
               CONCAT44(((fVar34 + fVar29) * fVar27 - fVar35) * fVar27 + fVar35,
                        ((fVar33 + fVar28) * fVar26 - fVar31) * fVar26 + fVar31);
          pfVar16[-3] = ((fVar32 + fVar30) * fVar23 - fVar36) * fVar23 + fVar36;
          pfVar16 = pfVar16 + 3;
          lVar20 = lVar20 + -1;
          fVar32 = fVar36;
          fVar33 = fVar31;
          fVar34 = fVar35;
        } while (lVar20 != 0);
      }
      else {
        do {
          fVar32 = pfVar16[-3];
          fVar30 = *pfVar16;
          fVar26 = pfVar16[-6];
          fVar27 = pfVar16[-0xb];
          fVar23 = pfVar16[-10];
          fVar3 = pfVar16[-9];
          fVar4 = pfVar16[-8];
          fVar5 = pfVar16[-7];
          fVar25 = (float)((ulonglong)uVar24 >> 0x20);
          fVar33 = (float)*(undefined8 *)(pfVar16 + -5);
          fVar34 = (float)((ulonglong)*(undefined8 *)(pfVar16 + -5) >> 0x20);
          fVar28 = (float)*(undefined8 *)(pfVar16 + -2);
          fVar29 = (float)((ulonglong)*(undefined8 *)(pfVar16 + -2) >> 0x20);
          pfVar16[-0xe] = ((fVar37 + fVar27) * fVar8 - fVar36) * fVar8 + fVar36;
          pfVar16[-0xd] = ((fVar35 + fVar23) * fVar8 - fVar25) * fVar8 + fVar25;
          pfVar16[-0xc] = ((fVar38 + fVar3) * fVar8 - fVar31) * fVar8 + fVar31;
          pfVar16[-0xb] = ((fVar36 + fVar4) * fVar9 - fVar27) * fVar9 + fVar27;
          pfVar16[-10] = ((fVar25 + fVar5) * fVar9 - fVar23) * fVar9 + fVar23;
          pfVar16[-9] = ((fVar31 + fVar26) * fVar9 - fVar3) * fVar9 + fVar3;
          pfVar16[-8] = ((fVar27 + fVar33) * fVar10 - fVar4) * fVar10 + fVar4;
          pfVar16[-7] = ((fVar23 + fVar34) * fVar10 - fVar5) * fVar10 + fVar5;
          pfVar16[-6] = ((fVar3 + fVar32) * fVar10 - fVar26) * fVar10 + fVar26;
          pfVar16[-5] = ((fVar4 + fVar28) * fVar11 - fVar33) * fVar11 + fVar33;
          pfVar16[-4] = ((fVar5 + fVar29) * fVar11 - fVar34) * fVar11 + fVar34;
          pfVar16[-3] = ((fVar26 + fVar30) * fVar11 - fVar32) * fVar11 + fVar32;
          uVar24 = CONCAT44(fVar29,fVar34);
          uVar15 = uVar15 - 4;
          pfVar16 = pfVar16 + 0xc;
          fVar31 = fVar30;
          fVar35 = fVar34;
          fVar36 = fVar28;
          fVar37 = fVar33;
          fVar38 = fVar32;
        } while (uVar15 != 0);
        lVar20 = uVar18 + 1;
        fVar26 = _DAT_142e36f60;
        fVar27 = _UNK_142e36f64;
        fVar23 = _DAT_142e36f50;
        if (uVar14 != uVar18) goto LAB_1419a66a6;
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 != 10);
  }
  return;
}

