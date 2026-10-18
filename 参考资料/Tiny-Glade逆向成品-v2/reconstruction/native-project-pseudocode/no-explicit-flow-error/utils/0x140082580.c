// VA 0x140082580, PDB extent 455 bytes
// utils::curve::Curve::to_curve3<utils::curve::CurveCoordSemantic2D>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::curve::Curve::to_curve3<utils::curve::CurveCoordSemantic2D>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 455 */

undefined8 * pdb_140082580(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *pbVar7;
  ulonglong uVar8;
  longlong lVar9;
  byte *pbVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  pdb_14017d450(&uStack_58,*(longlong *)(param_2 + 8),
                *(longlong *)(param_2 + 8) + *(longlong *)(param_2 + 0x10) * 8);
  uVar2 = *(ulonglong *)(param_2 + 0x28);
  uVar8 = uVar2 * 4;
  if (0x7ffffffffffffffc < uVar8 || uVar2 >> 0x3e != 0) {
    uVar14 = 0;
LAB_1400825e3:
    pdb_142dc7e2a(uVar14,uVar8);
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if (uVar8 == 0) {
    pbVar7 = (byte *)0x4;
  }
  else {
    puVar3 = *(undefined4 **)(param_2 + 0x20);
    pdb_14007ee60();
    uVar14 = 4;
    pbVar7 = pub_1406abab0(uVar8,4);
    if (pbVar7 == (byte *)0x0) goto LAB_1400825e3;
    if (uVar2 != 0) {
      uVar8 = uVar2 - 1;
      if (uVar2 < uVar2 - 1) {
        uVar8 = uVar2;
      }
      if (uVar8 < 8) {
        lVar9 = 0;
        uVar8 = uVar2;
        puVar12 = puVar3;
      }
      else {
        uVar8 = uVar8 + 1;
        uVar11 = 8;
        if ((uVar8 & 7) != 0) {
          uVar11 = (ulonglong)((uint)uVar8 & 7);
        }
        lVar9 = uVar8 - uVar11;
        uVar8 = uVar2 - lVar9;
        puVar12 = puVar3 + lVar9;
        lVar13 = 0;
        do {
          uVar14 = *(undefined8 *)((longlong)(puVar3 + lVar13) + 8);
          uVar5 = *(undefined8 *)(puVar3 + lVar13 + 4);
          uVar6 = *(undefined8 *)((longlong)(puVar3 + lVar13 + 4) + 8);
          *(undefined8 *)(pbVar7 + lVar13 * 4) = *(undefined8 *)(puVar3 + lVar13);
          *(undefined8 *)(pbVar7 + lVar13 * 4 + 8) = uVar14;
          *(undefined8 *)(pbVar7 + lVar13 * 4 + 0x10) = uVar5;
          *(undefined8 *)(pbVar7 + lVar13 * 4 + 0x10 + 8) = uVar6;
          lVar13 = lVar13 + 8;
        } while (lVar9 != lVar13);
      }
      pbVar10 = pbVar7 + lVar9 * 4;
      do {
        if (puVar12 == puVar3 + uVar2) break;
        uVar1 = *puVar12;
        puVar12 = puVar12 + 1;
        *(undefined4 *)pbVar10 = uVar1;
        pbVar10 = pbVar10 + 4;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  param_1[2] = uStack_48;
  *param_1 = uStack_58;
  param_1[1] = uStack_50;
  param_1[3] = uVar2;
  param_1[4] = pbVar7;
  param_1[5] = uVar2;
  *(undefined4 *)(param_1 + 6) = uVar1;
  return param_1;
}

