// VA 0x14226d440, PDB extent 626 bytes
// system_critters::butterfly::update_butterfly_audio
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/butterfly.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_critters::butterfly::update_butterfly_audio
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/butterfly.rs
   Extent: 626 */

void pdb_14226d440(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  uint *puVar12;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  lVar3 = *param_1;
  lVar4 = param_1[1];
  puVar12 = *(uint **)(lVar3 + 0xf8);
  puVar1 = puVar12 + *(longlong *)(lVar3 + 0x100);
  if (*(char *)(lVar3 + 0x108) == '\0') {
    lVar11 = 0;
    lVar9 = 8;
    lVar10 = 0;
    lVar8 = 0;
    uVar6 = 0;
    do {
      if ((int)uVar6 == (int)lVar11) {
        do {
          if (puVar12 == puVar1) {
            return;
          }
          uVar2 = *puVar12;
          puVar12 = puVar12 + 1;
          lVar11 = *(longlong *)(*(longlong *)(lVar4 + 0x100) + 0x58 + (ulonglong)uVar2 * 0xa0);
        } while (lVar11 == 0);
        lVar5 = *(longlong *)(lVar4 + 0x100) + (ulonglong)uVar2 * 0xa0;
        uVar6 = (ulonglong)*(uint *)(lVar5 + 0x94);
        lVar9 = *(longlong *)(lVar4 + 0x1a0) + uVar6 * 0x48;
        uVar6 = *(ulonglong *)(*(longlong *)(lVar4 + 0x1a0) + 0x40 + uVar6 * 0x48);
        if ((*(ulonglong *)(lVar3 + 0x110) < uVar6) &&
           (uVar7 = *(ulonglong *)(*(longlong *)(lVar9 + 0x38) + *(ulonglong *)(lVar3 + 0x110) * 8),
           uVar7 != 0)) {
          lVar10 = *(longlong *)(*(longlong *)(lVar9 + 0x18) + 0x10 + ~uVar7 * 0x30);
          uVar7 = *(ulonglong *)(lVar3 + 0x118);
          if (uVar6 <= uVar7) goto LAB_14226d588;
LAB_14226d677:
          uVar6 = *(ulonglong *)(*(longlong *)(lVar9 + 0x38) + uVar7 * 8);
          if (uVar6 == 0) goto LAB_14226d588;
          lVar8 = *(longlong *)(*(longlong *)(lVar9 + 0x18) + 0x10 + ~uVar6 * 0x30);
        }
        else {
          lVar10 = 0;
          uVar7 = *(ulonglong *)(lVar3 + 0x118);
          if (uVar7 < uVar6) goto LAB_14226d677;
LAB_14226d588:
          lVar8 = 0;
        }
        lVar9 = *(longlong *)(lVar5 + 0x50);
        uVar6 = 0;
      }
      lVar5 = (ulonglong)~*(uint *)(lVar9 + 8 + uVar6 * 0x10) * 0x30;
      uVar6 = (ulonglong)((int)uVar6 + 1);
      uStack_48 = *(undefined4 *)(lVar10 + 0x18 + lVar5);
      uStack_50 = *(undefined8 *)(lVar10 + 0x10 + lVar5);
      pdb_141162ef0(lVar5 + lVar8,&uStack_50);
    } while( true );
  }
  lVar9 = 0;
  lVar11 = 0;
  lVar10 = 0;
  uVar6 = 0;
  do {
    if ((int)uVar6 == (int)lVar9) {
      do {
        if (puVar12 == puVar1) {
          return;
        }
        uVar2 = *puVar12;
        puVar12 = puVar12 + 1;
        lVar9 = *(longlong *)(*(longlong *)(lVar4 + 0x1a0) + 0x10 + (ulonglong)uVar2 * 0x48);
      } while (lVar9 == 0);
      lVar10 = *(longlong *)(lVar4 + 0x1a0) + (ulonglong)uVar2 * 0x48;
      uVar6 = *(ulonglong *)(lVar10 + 0x40);
      if ((*(ulonglong *)(lVar3 + 0x110) < uVar6) &&
         (uVar7 = *(ulonglong *)(*(longlong *)(lVar10 + 0x38) + *(ulonglong *)(lVar3 + 0x110) * 8),
         uVar7 != 0)) {
        lVar11 = *(longlong *)(*(longlong *)(lVar10 + 0x18) + 0x10 + ~uVar7 * 0x30);
        uVar7 = *(ulonglong *)(lVar3 + 0x118);
        if (uVar6 <= uVar7) goto LAB_14226d49c;
LAB_14226d55e:
        uVar6 = *(ulonglong *)(*(longlong *)(lVar10 + 0x38) + uVar7 * 8);
        if (uVar6 == 0) goto LAB_14226d49c;
        lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x18) + 0x10 + ~uVar6 * 0x30);
      }
      else {
        lVar11 = 0;
        uVar7 = *(ulonglong *)(lVar3 + 0x118);
        if (uVar7 < uVar6) goto LAB_14226d55e;
LAB_14226d49c:
        lVar10 = 0;
      }
      uVar6 = 0;
    }
    lVar8 = uVar6 * 0x30;
    uVar6 = (ulonglong)((int)uVar6 + 1);
    uStack_48 = *(undefined4 *)(lVar11 + 0x18 + lVar8);
    uStack_50 = *(undefined8 *)(lVar11 + 0x10 + lVar8);
    pdb_141162ef0(lVar10 + lVar8,&uStack_50);
  } while( true );
}

