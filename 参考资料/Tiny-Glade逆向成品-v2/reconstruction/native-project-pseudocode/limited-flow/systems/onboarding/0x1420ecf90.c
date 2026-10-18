// VA 0x1420ecf90, PDB extent 5306 bytes
// system_onboarding::hint_display_system::hint_position_update
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_display_system.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x0001420ed2b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_onboarding::hint_display_system::hint_position_update
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_display_system.rs
   Extent: 5306 */

void pdb_1420ecf90(longlong *param_1,float param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint *puVar10;
  uint *puStack_110;
  
  pdb_140a6ad50(*param_3);
  lVar3 = *param_1;
  lVar9 = param_1[1];
  puVar10 = *(uint **)(lVar3 + 0xf8);
  puVar1 = puVar10 + *(longlong *)(lVar3 + 0x100);
  if (*(char *)(lVar3 + 0x108) == '\0') {
    if (puVar10 != puVar1) {
      do {
        if (*(longlong *)(*(longlong *)(lVar9 + 0x100) + 0x58 + (ulonglong)*puVar10 * 0xa0) != 0) {
          lVar6 = *(longlong *)(lVar9 + 0x100) + (ulonglong)*puVar10 * 0xa0;
          uVar8 = (ulonglong)*(uint *)(lVar6 + 0x94);
          lVar7 = *(longlong *)(lVar9 + 0x1a0);
          lVar9 = lVar7 + uVar8 * 0x48;
          lVar4 = *(longlong *)(lVar7 + 0x38 + uVar8 * 0x48);
          uVar8 = *(ulonglong *)(lVar7 + 0x40 + uVar8 * 0x48);
          if (*(ulonglong *)(lVar3 + 0x110) < uVar8) {
            lVar9 = *(longlong *)(lVar9 + 0x18);
            if (*(longlong *)(lVar4 + *(ulonglong *)(lVar3 + 0x110) * 8) != 0) {
              uVar5 = *(ulonglong *)(lVar3 + 0x120);
              goto joined_r0x0001420ed4b7;
            }
          }
          else {
            lVar9 = *(longlong *)(lVar9 + 0x18);
          }
          uVar5 = *(ulonglong *)(lVar3 + 0x120);
joined_r0x0001420ed4b7:
          if ((uVar5 < uVar8) && (uVar8 = *(ulonglong *)(lVar4 + uVar5 * 8), uVar8 != 0)) {
            puStack_110 = *(uint **)(lVar9 + 0x10 + ~uVar8 * 0x30);
          }
          else {
            puStack_110 = (uint *)0x0;
          }
          uVar2 = *(uint *)((ulonglong)~*(uint *)(*(longlong *)(lVar6 + 0x50) + 8) * 0x18 +
                           (longlong)puStack_110);
          uVar8 = (ulonglong)(uVar2 - 7);
          if (uVar2 < 7) {
            uVar8 = 3;
          }
                    /* WARNING: Could not recover jumptable at 0x0001420ed59b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK_14345b060 + *(int *)(&UNK_14345b060 + uVar8 * 4)))
                    (uVar2,(param_2 / _DAT_142e4bfe4) * _DAT_142e37844);
          return;
        }
        puVar10 = puVar10 + 1;
      } while (puVar10 != puVar1);
    }
  }
  else if (puVar10 != puVar1) {
    do {
      if (*(longlong *)(*(longlong *)(lVar9 + 0x1a0) + 0x10 + (ulonglong)*puVar10 * 0x48) != 0) {
        lVar9 = *(longlong *)(lVar9 + 0x1a0) + (ulonglong)*puVar10 * 0x48;
        if (*(ulonglong *)(lVar3 + 0x110) < *(ulonglong *)(lVar9 + 0x40)) {
          lVar7 = *(longlong *)(lVar9 + 0x18);
          if (*(longlong *)(*(longlong *)(lVar9 + 0x38) + *(ulonglong *)(lVar3 + 0x110) * 8) != 0) {
            uVar8 = *(ulonglong *)(lVar3 + 0x120);
            goto joined_r0x0001420ed3c5;
          }
        }
        else {
          lVar7 = *(longlong *)(lVar9 + 0x18);
        }
        uVar8 = *(ulonglong *)(lVar3 + 0x120);
joined_r0x0001420ed3c5:
        if ((uVar8 < *(ulonglong *)(lVar9 + 0x40)) &&
           (uVar8 = *(ulonglong *)(*(longlong *)(lVar9 + 0x38) + uVar8 * 8), uVar8 != 0)) {
          puStack_110 = *(uint **)(lVar7 + 0x10 + ~uVar8 * 0x30);
        }
        else {
          puStack_110 = (uint *)0x0;
        }
        uVar2 = *puStack_110;
        uVar8 = (ulonglong)(uVar2 - 7);
        if (uVar2 < 7) {
          uVar8 = 3;
        }
                    /* WARNING: Could not recover jumptable at 0x0001420ed495. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_14345b060 + *(int *)(&UNK_14345b060 + uVar8 * 4)))
                  (uVar2,&UNK_14345b060 + *(int *)(&UNK_14345b060 + uVar8 * 4));
        return;
      }
      puVar10 = puVar10 + 1;
    } while (puVar10 != puVar1);
  }
  return;
}

