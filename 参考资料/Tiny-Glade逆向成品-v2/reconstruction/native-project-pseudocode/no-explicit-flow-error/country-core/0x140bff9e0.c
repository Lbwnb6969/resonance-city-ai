// VA 0x140bff9e0, PDB extent 838 bytes
// country_core::systems::debug::sheep_controls::apply_sheep_snapshot
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/debug/sheep_controls.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::debug::sheep_controls::apply_sheep_snapshot
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/debug/sheep_controls.rs
   Extent: 838 */

void pdb_140bff9e0(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong lVar15;
  uint *puVar16;
  longlong lVar17;
  undefined8 *puVar18;
  uint uVar19;
  int *piVar20;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  longlong lStack_70;
  longlong lStack_68;
  longlong lStack_60;
  longlong lStack_58;
  longlong lStack_50;
  
  lVar6 = *param_1;
  lVar7 = param_1[1];
  uVar4 = *(undefined4 *)((longlong)param_1 + 0x14);
  puVar16 = *(uint **)(lVar6 + 0xf8);
  puVar1 = puVar16 + *(longlong *)(lVar6 + 0x100);
  cVar3 = *(char *)(lVar6 + 0x108);
  puVar13 = *(undefined8 **)(param_2 + 8);
  puVar2 = puVar13 + *(longlong *)(param_2 + 0x10) * 5;
  lStack_80 = 0;
  lStack_58 = 8;
  lStack_78 = 0;
  lStack_50 = 8;
  lStack_88 = 0;
  lVar11 = 0;
  uVar19 = 0;
  if (cVar3 == '\0') goto LAB_140bffb50;
  do {
    if (uVar19 == (uint)lVar11) {
      do {
        if (puVar16 == puVar1) {
          return;
        }
        uVar19 = *puVar16;
        puVar16 = puVar16 + 1;
        lVar11 = *(longlong *)(*(longlong *)(lVar7 + 0x1a0) + 0x10 + (ulonglong)uVar19 * 0x48);
      } while (lVar11 == 0);
      lVar12 = *(longlong *)(lVar7 + 0x1a0) + (ulonglong)uVar19 * 0x48;
      lVar17 = *(longlong *)(lVar12 + 0x38);
      lStack_50 = *(longlong *)(lVar12 + 8);
      lVar12 = *(longlong *)(lVar12 + 0x18);
      lVar14 = ~*(ulonglong *)(lVar17 + *(longlong *)(lVar6 + 0x110) * 8) * 0x30;
      lStack_78 = *(longlong *)(lVar12 + 0x10 + lVar14);
      lStack_60 = *(longlong *)(lVar12 + 0x28 + lVar14);
      lVar14 = ~*(ulonglong *)(lVar17 + *(longlong *)(lVar6 + 0x118) * 8) * 0x30;
      lStack_80 = *(longlong *)(lVar12 + 0x10 + lVar14);
      lStack_68 = *(longlong *)(lVar12 + 0x28 + lVar14);
      lVar17 = ~*(ulonglong *)(lVar17 + *(longlong *)(lVar6 + 0x120) * 8) * 0x30;
      lStack_88 = *(longlong *)(lVar12 + 0x10 + lVar17);
      lStack_70 = *(longlong *)(lVar12 + 0x28 + lVar17);
      uVar19 = 0;
    }
    uVar10 = (ulonglong)uVar19;
    piVar20 = (int *)(lStack_50 + uVar10 * 8);
    while( true ) {
      lVar17 = uVar10 * 0x30 + lStack_78;
      lVar12 = uVar10 * 0x68 + lStack_80;
      puVar18 = (undefined8 *)(uVar10 * 0x10 + lStack_88);
      if ((*piVar20 == 0) || (puVar13 == puVar2)) {
        return;
      }
      uVar19 = uVar19 + 1;
      uVar5 = *(undefined4 *)((longlong)puVar13 + 0x24);
      uVar8 = *(undefined8 *)((longlong)puVar13 + 0x1c);
      *(undefined4 *)(lStack_60 + uVar10 * 4) = uVar4;
      *(undefined4 *)(lVar17 + 0x18) = uVar5;
      *(undefined8 *)(lVar17 + 0x10) = uVar8;
      uVar8 = *puVar13;
      uVar9 = puVar13[1];
      *(undefined4 *)(lStack_70 + uVar10 * 4) = uVar4;
      *puVar18 = uVar8;
      puVar18[1] = uVar9;
      uVar5 = *(undefined4 *)(puVar13 + 3);
      uVar8 = puVar13[2];
      puVar13 = puVar13 + 5;
      *(undefined4 *)(lStack_68 + uVar10 * 4) = uVar4;
      *(undefined4 *)(lVar12 + 0x38) = uVar5;
      *(undefined8 *)(lVar12 + 0x30) = uVar8;
      if (cVar3 != '\0') break;
LAB_140bffb50:
      if (uVar19 == (uint)lVar11) {
        do {
          if (puVar16 == puVar1) {
            return;
          }
          uVar19 = *puVar16;
          puVar16 = puVar16 + 1;
          lVar11 = *(longlong *)(*(longlong *)(lVar7 + 0x100) + 0x58 + (ulonglong)uVar19 * 0xa0);
        } while (lVar11 == 0);
        lVar14 = *(longlong *)(lVar7 + 0x100) + (ulonglong)uVar19 * 0xa0;
        uVar10 = (ulonglong)*(uint *)(lVar14 + 0x94);
        lVar12 = *(longlong *)(*(longlong *)(lVar7 + 0x1a0) + 0x18 + uVar10 * 0x48);
        lVar17 = *(longlong *)(*(longlong *)(lVar7 + 0x1a0) + 0x38 + uVar10 * 0x48);
        lVar15 = ~*(ulonglong *)(lVar17 + *(longlong *)(lVar6 + 0x110) * 8) * 0x30;
        lStack_78 = *(longlong *)(lVar12 + 0x10 + lVar15);
        lStack_60 = *(longlong *)(lVar12 + 0x28 + lVar15);
        lVar15 = ~*(ulonglong *)(lVar17 + *(longlong *)(lVar6 + 0x118) * 8) * 0x30;
        lStack_80 = *(longlong *)(lVar12 + 0x10 + lVar15);
        lStack_68 = *(longlong *)(lVar12 + 0x28 + lVar15);
        lVar17 = ~*(ulonglong *)(lVar17 + *(longlong *)(lVar6 + 0x120) * 8) * 0x30;
        lStack_88 = *(longlong *)(lVar12 + 0x10 + lVar17);
        lStack_70 = *(longlong *)(lVar12 + 0x28 + lVar17);
        lStack_58 = *(longlong *)(lVar14 + 0x50);
        uVar19 = 0;
        uVar10 = 0;
      }
      else {
        uVar10 = (ulonglong)uVar19;
      }
      piVar20 = (int *)(lStack_58 + uVar10 * 0x10);
      uVar10 = (ulonglong)~*(uint *)(lStack_58 + 8 + uVar10 * 0x10);
    }
  } while( true );
}

