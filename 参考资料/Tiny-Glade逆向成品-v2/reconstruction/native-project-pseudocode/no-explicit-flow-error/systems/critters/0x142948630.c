// VA 0x142948630, PDB extent 773 bytes
// system_critters::sheep::sheep_behavior::update_sheep_audio
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/sheep/sheep_behavior.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_critters::sheep::sheep_behavior::update_sheep_audio
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/sheep/sheep_behavior.rs
   Extent: 773 */

void pdb_142948630(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  float fVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  uint *puVar14;
  longlong lStack_78;
  undefined8 uStack_60;
  undefined4 uStack_58;
  longlong lStack_50;
  longlong lStack_48;
  
  lVar4 = *param_1;
  lVar5 = param_1[1];
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x14);
  puVar14 = *(uint **)(lVar4 + 0xf8);
  puVar1 = puVar14 + *(longlong *)(lVar4 + 0x100);
  lStack_50 = *param_2;
  if (*(char *)(lVar4 + 0x108) != '\0') {
    lVar9 = 0;
    lVar13 = 0;
    lVar10 = 0;
    uVar11 = 0;
    do {
      if (uVar11 == (uint)lVar9) {
        if (puVar14 == puVar1) {
          return;
        }
        while( true ) {
          lVar9 = *(longlong *)(*(longlong *)(lVar5 + 0x1a0) + 0x10 + (ulonglong)*puVar14 * 0x48);
          if (lVar9 != 0) break;
          puVar14 = puVar14 + 1;
          if (puVar14 == puVar1) {
            return;
          }
        }
        lVar13 = *(longlong *)(lVar5 + 0x1a0) + (ulonglong)*puVar14 * 0x48;
        if (*(ulonglong *)(lVar4 + 0x110) < *(ulonglong *)(lVar13 + 0x40)) {
          uVar6 = *(ulonglong *)(*(longlong *)(lVar13 + 0x38) + *(ulonglong *)(lVar4 + 0x110) * 8);
          lVar12 = *(longlong *)(lVar13 + 0x18);
          if (uVar6 == 0) goto LAB_14294881c;
          lVar10 = *(longlong *)(lVar12 + 0x10 + ~uVar6 * 0x30);
        }
        else {
          lVar12 = *(longlong *)(lVar13 + 0x18);
LAB_14294881c:
          lVar10 = 0;
        }
        puVar14 = puVar14 + 1;
        lVar7 = ~*(ulonglong *)(*(longlong *)(lVar13 + 0x38) + *(longlong *)(lVar4 + 0x118) * 8) *
                0x30;
        lVar13 = *(longlong *)(lVar12 + 0x10 + lVar7);
        lStack_78 = *(longlong *)(lVar12 + 0x28 + lVar7);
        uVar11 = 0;
      }
      uVar6 = (ulonglong)uVar11;
      lVar12 = uVar6 * 0x38;
      uVar11 = uVar11 + 1;
      uStack_58 = *(undefined4 *)(lVar10 + 0x18 + uVar6 * 0x30);
      uStack_60 = *(undefined8 *)(lVar10 + 0x10 + uVar6 * 0x30);
      pdb_140a8e190(lVar13 + lVar12,&uStack_60);
      fVar2 = *(float *)(lStack_50 + 0x28);
      *(undefined4 *)(lStack_78 + uVar6 * 4) = uVar3;
      *(float *)(lVar13 + 0x34 + lVar12) = fVar2 + *(float *)(lVar13 + 0x34 + lVar12);
    } while( true );
  }
  do {
    if (puVar14 == puVar1) {
      return;
    }
    while( true ) {
      lVar13 = *(longlong *)(*(longlong *)(lVar5 + 0x100) + 0x58 + (ulonglong)*puVar14 * 0xa0);
      if (lVar13 != 0) break;
      puVar14 = puVar14 + 1;
      if (puVar14 == puVar1) {
        return;
      }
    }
    lVar7 = *(longlong *)(lVar5 + 0x100) + (ulonglong)*puVar14 * 0xa0;
    uVar6 = (ulonglong)*(uint *)(lVar7 + 0x94);
    lVar10 = *(longlong *)(lVar5 + 0x1a0);
    lVar9 = lVar10 + uVar6 * 0x48;
    lVar12 = *(longlong *)(lVar10 + 0x38 + uVar6 * 0x48);
    if (*(ulonglong *)(lVar4 + 0x110) < *(ulonglong *)(lVar10 + 0x40 + uVar6 * 0x48)) {
      uVar6 = *(ulonglong *)(lVar12 + *(ulonglong *)(lVar4 + 0x110) * 8);
      lVar9 = *(longlong *)(lVar9 + 0x18);
      if (uVar6 == 0) goto LAB_142948764;
      lVar10 = *(longlong *)(lVar9 + 0x10 + ~uVar6 * 0x30);
    }
    else {
      lVar9 = *(longlong *)(lVar9 + 0x18);
LAB_142948764:
      lVar10 = 0;
    }
    puVar14 = puVar14 + 1;
    lVar8 = ~*(ulonglong *)(lVar12 + *(longlong *)(lVar4 + 0x118) * 8) * 0x30;
    lVar12 = *(longlong *)(lVar9 + 0x10 + lVar8);
    lStack_48 = *(longlong *)(lVar9 + 0x28 + lVar8);
    lVar9 = *(longlong *)(lVar7 + 0x50);
    uVar11 = 1;
    uVar6 = 0;
    while( true ) {
      uVar6 = (ulonglong)~*(uint *)(lVar9 + 8 + uVar6 * 0x10);
      lVar7 = uVar6 * 0x38;
      uStack_58 = *(undefined4 *)(lVar10 + 0x18 + uVar6 * 0x30);
      uStack_60 = *(undefined8 *)(lVar10 + 0x10 + uVar6 * 0x30);
      pdb_140a8e190(lVar12 + lVar7,&uStack_60);
      fVar2 = *(float *)(lStack_50 + 0x28);
      *(undefined4 *)(lStack_48 + uVar6 * 4) = uVar3;
      *(float *)(lVar12 + 0x34 + lVar7) = fVar2 + *(float *)(lVar12 + 0x34 + lVar7);
      if (uVar11 == (uint)lVar13) break;
      uVar6 = (ulonglong)uVar11;
      uVar11 = uVar11 + 1;
    }
  } while( true );
}

