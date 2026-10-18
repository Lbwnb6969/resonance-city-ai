// VA 0x140a4f320, PDB extent 679 bytes
// country_core::resources::walls::inner_wall_state::impl$45::clone
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/inner_wall_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::walls::inner_wall_state::impl$45::clone
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/inner_wall_state.rs
   Extent: 679 */

void pdb_140a4f320(ulonglong *param_1,ulonglong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  byte *pbVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  byte *pbVar14;
  int iVar15;
  ulonglong uVar16;
  undefined4 *puVar17;
  longlong lVar18;
  undefined8 uVar19;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulonglong uStack_58;
  byte *pbStack_50;
  
  uVar4 = *(ulonglong *)(param_2 + 0x10);
  uVar12 = uVar4 * 8;
  if (uVar12 < 0x7ffffffffffffffd && uVar4 >> 0x3d == 0) goto LAB_140a4f378;
  uVar19 = 0;
  do {
    param_2 = uVar12;
    pdb_142dc7e2a(uVar19);
LAB_140a4f378:
    uVar5 = *(undefined8 *)(param_2 + 8);
    if (uVar12 == 0) {
      pbStack_50 = (byte *)0x4;
      uStack_58 = 0;
      if (uVar4 == 0) goto LAB_140a4f3c1;
      goto LAB_140a4f3b2;
    }
    pdb_14007ee60();
    uVar19 = 4;
    pbStack_50 = pub_1406abab0(uVar12,4);
  } while (pbStack_50 == (byte *)0x0);
  uStack_58 = uVar4;
  if (uVar4 != 0) {
LAB_140a4f3b2:
    pub_142e32760(pbStack_50,uVar5,uVar12);
  }
LAB_140a4f3c1:
  uVar6 = *(ulonglong *)(param_2 + 0x28);
  uVar12 = uVar6 * 4;
  if (uVar12 < 0x7ffffffffffffffd && uVar6 >> 0x3e == 0) {
    if (uVar12 == 0) {
      pbVar10 = (byte *)0x4;
    }
    else {
      puVar7 = *(undefined4 **)(param_2 + 0x20);
      pdb_14007ee60();
      uVar19 = 4;
      pbVar10 = pub_1406abab0(uVar12,4);
      if (pbVar10 == (byte *)0x0) goto LAB_140a4f3e4;
      if (uVar6 != 0) {
        uVar12 = uVar6 - 1;
        if (uVar6 < uVar6 - 1) {
          uVar12 = uVar6;
        }
        if (uVar12 < 8) {
          lVar13 = 0;
          uVar12 = uVar6;
          puVar17 = puVar7;
        }
        else {
          uVar12 = uVar12 + 1;
          uVar16 = 8;
          if ((uVar12 & 7) != 0) {
            uVar16 = (ulonglong)((uint)uVar12 & 7);
          }
          lVar13 = uVar12 - uVar16;
          uVar12 = uVar6 - lVar13;
          puVar17 = puVar7 + lVar13;
          lVar18 = 0;
          do {
            uVar19 = *(undefined8 *)((longlong)(puVar7 + lVar18) + 8);
            uVar5 = *(undefined8 *)(puVar7 + lVar18 + 4);
            uVar9 = *(undefined8 *)((longlong)(puVar7 + lVar18 + 4) + 8);
            *(undefined8 *)(pbVar10 + lVar18 * 4) = *(undefined8 *)(puVar7 + lVar18);
            *(undefined8 *)(pbVar10 + lVar18 * 4 + 8) = uVar19;
            *(undefined8 *)(pbVar10 + lVar18 * 4 + 0x10) = uVar5;
            *(undefined8 *)(pbVar10 + lVar18 * 4 + 0x10 + 8) = uVar9;
            lVar18 = lVar18 + 8;
          } while (lVar13 != lVar18);
        }
        pbVar14 = pbVar10 + lVar13 * 4;
        do {
          if (puVar17 == puVar7 + uVar6) break;
          uVar1 = *puVar17;
          puVar17 = puVar17 + 1;
          *(undefined4 *)pbVar14 = uVar1;
          pbVar14 = pbVar14 + 4;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
    }
    uVar1 = *(undefined4 *)(param_2 + 0x30);
    uVar2 = *(undefined4 *)(param_2 + 0x54);
    uVar3 = *(uint *)(param_2 + 0x38);
    iVar15 = uVar3 - 2;
    if (uVar3 < 2) {
      iVar15 = 2;
    }
    uVar11 = 2;
    if (iVar15 != 0) {
      if (iVar15 == 1) {
        uVar11 = 3;
      }
      else {
        uStack_68 = *(undefined8 *)(param_2 + 0x4c);
        uStack_78 = *(undefined8 *)(param_2 + 0x3c);
        uStack_70 = *(undefined8 *)(param_2 + 0x44);
        uVar11 = uVar3;
      }
    }
    *param_1 = uStack_58;
    param_1[1] = (ulonglong)pbStack_50;
    param_1[2] = uVar4;
    param_1[3] = uVar6;
    param_1[4] = (ulonglong)pbVar10;
    param_1[5] = uVar6;
    *(undefined4 *)(param_1 + 6) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x54) = uVar2;
    *(uint *)(param_1 + 7) = uVar11;
    *(undefined8 *)((longlong)param_1 + 0x3c) = uStack_78;
    *(undefined8 *)((longlong)param_1 + 0x44) = uStack_70;
    *(undefined8 *)((longlong)param_1 + 0x4c) = uStack_68;
    param_1[0xd] = *(ulonglong *)(param_2 + 0x68);
    uVar12 = *(ulonglong *)(param_2 + 0x60);
    param_1[0xb] = *(ulonglong *)(param_2 + 0x58);
    param_1[0xc] = uVar12;
    return;
  }
  uVar19 = 0;
LAB_140a4f3e4:
  pdb_142dc7e2a(uVar19,uVar12);
                    /* WARNING: Does not return */
  pcVar8 = (code *)invalidInstructionException();
  (*pcVar8)();
}

