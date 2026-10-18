// VA 0x140925070, PDB extent 607 bytes
// country_core::systems::paths::path_brush_preview_size::path_brush_preview_size
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/paths/path_brush_preview_size.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::paths::path_brush_preview_size::path_brush_preview_size
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/paths/path_brush_preview_size.rs
   Extent: 607 */

void pdb_140925070(undefined8 *param_1,longlong *param_2,undefined8 *param_3)

{
  uint *puVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined4 uVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  float fVar18;
  longlong lStack_70;
  longlong lStack_68;
  longlong lStack_60;
  longlong lStack_58;
  longlong lStack_50;
  longlong lStack_48;
  longlong lStack_40;
  
  if ((*(byte *)*param_1 & 0x1e) == 2) {
    lVar15 = *param_2;
    lVar5 = param_2[1];
    lVar2 = param_2[2];
    puVar7 = *(uint **)(lVar15 + 0xf8);
    lVar8 = *(longlong *)(lVar15 + 0x100);
    puVar1 = puVar7 + lVar8;
    cVar3 = *(char *)(lVar15 + 0x108);
    if (cVar3 == '\0') {
      plVar14 = &lStack_48;
      plVar11 = &lStack_40;
      plVar12 = &lStack_50;
      lVar8 = lVar8 << 2;
      do {
        if (lVar8 == 0) {
          lVar15 = 0;
          puVar7 = puVar1;
          goto LAB_140925270;
        }
        uVar4 = *puVar7;
        puVar7 = puVar7 + 1;
        lVar10 = *(longlong *)(*(longlong *)(lVar5 + 0x100) + 0x58 + (ulonglong)uVar4 * 0xa0);
        lVar8 = lVar8 + -4;
      } while (lVar10 == 0);
      lVar8 = *(longlong *)(lVar5 + 0x100) + (ulonglong)uVar4 * 0xa0;
      uVar9 = (ulonglong)*(uint *)(lVar8 + 0x94);
      lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x1a0) + 0x18 + uVar9 * 0x48);
      lVar17 = ~*(ulonglong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 0x1a0) + 0x38 + uVar9 * 0x48) +
                 *(longlong *)(lVar15 + 0x110) * 8) * 0x30;
      uVar9 = (ulonglong)~*(uint *)(*(longlong *)(lVar8 + 0x50) + 8);
      lVar15 = uVar9 * 0x30 + *(longlong *)(lVar6 + 0x10 + lVar17);
      lVar16 = uVar9 * 4;
      lVar8 = lVar16 + *(longlong *)(lVar6 + 0x28 + lVar17);
      lStack_58 = lVar15;
      lStack_50 = *(longlong *)(lVar6 + 0x20 + lVar17) + lVar16;
    }
    else {
      plVar14 = &lStack_68;
      plVar11 = &lStack_60;
      plVar12 = &lStack_70;
      lVar8 = lVar8 << 2;
      do {
        if (lVar8 == 0) {
          lVar15 = 0;
          puVar7 = puVar1;
          goto LAB_140925230;
        }
        uVar4 = *puVar7;
        puVar7 = puVar7 + 1;
        lVar10 = *(longlong *)(*(longlong *)(lVar5 + 0x1a0) + 0x10 + (ulonglong)uVar4 * 0x48);
        lVar8 = lVar8 + -4;
      } while (lVar10 == 0);
      lVar8 = *(longlong *)(lVar5 + 0x1a0) + (ulonglong)uVar4 * 0x48;
      lVar6 = *(longlong *)(lVar8 + 0x18);
      lVar15 = ~*(ulonglong *)(*(longlong *)(lVar8 + 0x38) + *(longlong *)(lVar15 + 0x110) * 8) *
               0x30;
      lVar8 = *(longlong *)(lVar6 + 0x28 + lVar15);
      lVar15 = *(longlong *)(lVar6 + 0x10 + lVar15);
    }
    *plVar14 = lVar8;
    *plVar11 = lVar2;
    plVar11 = (longlong *)plVar12[1];
    plVar14 = (longlong *)(ulonglong)*(uint *)((longlong)plVar12 + 0x14);
    if (cVar3 == '\0') {
      if ((int)lVar10 == 1) {
LAB_140925270:
        do {
          uVar13 = SUB84(plVar14,0);
          if (puVar7 == puVar1) goto LAB_140925291;
          uVar4 = *puVar7;
          puVar7 = puVar7 + 1;
        } while (*(longlong *)(*(longlong *)(lVar5 + 0x100) + 0x58 + (ulonglong)uVar4 * 0xa0) == 0);
      }
    }
    else if ((int)lVar10 == 1) {
LAB_140925230:
      do {
        uVar13 = SUB84(plVar14,0);
        if (puVar7 == puVar1) {
LAB_140925291:
          if (lVar15 == 0) {
            return;
          }
          fVar18 = *(float *)*param_3 * _DAT_14300c294;
          *(float *)(lVar15 + 0x1c) = fVar18;
          *(float *)(lVar15 + 0x24) = fVar18;
          if (fVar18 <= _DAT_142e36f28) {
            fVar18 = _DAT_142e36f28;
          }
          *(undefined4 *)plVar11 = uVar13;
          *(float *)(lVar15 + 0x20) = fVar18;
          return;
        }
        uVar4 = *puVar7;
        puVar7 = puVar7 + 1;
      } while (*(longlong *)(*(longlong *)(lVar5 + 0x1a0) + 0x10 + (ulonglong)uVar4 * 0x48) == 0);
    }
  }
  return;
}

