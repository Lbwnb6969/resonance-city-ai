// VA 0x140815be0, PDB extent 622 bytes
// system_wall_constructor::wall_constructor::split_brick_by_holes
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/wall_constructor.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_wall_constructor::wall_constructor::split_brick_by_holes
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/wall_constructor.rs
   Extent: 622 */

ulonglong pdb_140815be0(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                       float *param_5,float param_6,undefined4 param_7,ulonglong *param_8)

{
  float fVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  bool bVar17;
  float fVar18;
  uint uStack_a4;
  undefined1 auStack_88 [72];
  
  lVar16 = *param_2;
  uVar15 = param_2[1];
  uVar8 = param_1[1];
  if (uVar15 < (ulonglong)param_1[1]) {
    uVar8 = uVar15;
  }
  if (uVar8 == 0) {
    uVar8 = 1;
    uVar12 = 0;
LAB_140815df5:
    *param_2 = lVar16 + uVar12 * 4;
    param_2[1] = uVar15 - uVar12;
    return uVar8;
  }
  lVar2 = *param_1;
  fVar18 = _DAT_142e36f50 * param_6;
  uStack_a4 = (uint)CONCAT71((int7)(uVar8 >> 8),1);
  uVar12 = 0;
  uVar15 = 0;
  do {
    fVar1 = *(float *)(lVar16 + uVar15 * 4);
    lVar9 = *(longlong *)(lVar2 + uVar15 * 8);
    uVar12 = (*(float *)(lVar9 + 8) + fVar18 < *param_5) + uVar12;
    if (param_5[2] <= fVar1 && fVar1 != param_5[2]) break;
    pdb_140deec90(auStack_88,lVar9,param_6,param_7);
    cVar4 = pdb_140deea30(auStack_88,param_5);
    if (cVar4 != '\0') {
      uVar11 = param_8[3];
      if (uVar11 == 0) {
        lVar9 = 0;
        uVar5 = 0;
LAB_140815d23:
        lVar14 = 0;
      }
      else {
        uVar5 = *param_8;
        uVar10 = 0;
        if (uVar5 <= param_8[2]) {
          uVar10 = uVar5;
        }
        lVar9 = param_8[2] - uVar10;
        lVar14 = uVar11 - (uVar5 - lVar9);
        if (uVar11 < uVar5 - lVar9 || lVar14 == 0) {
          uVar5 = uVar11 + lVar9;
          goto LAB_140815d23;
        }
      }
      uVar7 = param_8[1];
      uVar11 = uVar7 + lVar9 * 0x28;
      uVar5 = uVar7 + uVar5 * 0x28;
      uVar10 = uVar7 + lVar14 * 0x28;
      while ((uVar6 = uVar7, uVar13 = uVar11, uVar11 != uVar5 ||
             (bVar17 = uVar7 != uVar10, uVar6 = uVar11, uVar5 = uVar10, uVar10 = uVar11,
             uVar13 = uVar7, bVar17))) {
        uVar11 = uVar13 + 0x28;
        *(uint *)(uVar13 + 0x20) = *(uint *)(uVar13 + 0x20) % 10;
        uVar7 = uVar6;
      }
    }
    cVar4 = pdb_140deea30(*(undefined8 *)(lVar2 + uVar15 * 8),param_5);
    if (cVar4 != '\0') {
      pdb_14146c450(*(undefined8 *)(lVar2 + uVar15 * 8),param_8);
      uStack_a4 = 0;
    }
    uVar15 = uVar15 + 1;
  } while (uVar15 != uVar8);
  uVar15 = param_1[1];
  if (uVar15 < uVar12) {
    pdb_142dc8420(uVar12,uVar15,uVar15,&UNK_143008bd8);
  }
  else {
    *param_1 = *param_1 + uVar12 * 8;
    param_1[1] = uVar15 - uVar12;
    uVar15 = param_2[1];
    if (uVar12 <= uVar15) {
      lVar16 = *param_2;
      uVar8 = (ulonglong)uStack_a4;
      goto LAB_140815df5;
    }
  }
  pdb_142dc8420(uVar12);
  pcVar3 = (code *)swi(3);
  uVar15 = (*pcVar3)();
  return uVar15;
}

