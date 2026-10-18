// VA 0x140b426e0, PDB extent 2486 bytes
// country_core::systems::mode_manager::mode_manager
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::mode_manager::mode_manager
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
   Extent: 2486 */

void pdb_140b426e0(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 *param_9,longlong *param_10,longlong *param_11,undefined8 param_12)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  longlong lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lVar10 = *param_3;
  puStack_70 = (undefined8 *)&UNK_143058e00;
  uStack_68 = 0xf;
  uStack_50 = param_2;
  lVar4 = pdb_140bbbcb0(&puStack_70);
  if ((((*(char *)(lVar10 + 0x18) == '\0') || (*(longlong *)(lVar10 + 0x38) != lVar4)) ||
      (*(int *)(lVar10 + 0x28) == 2)) && (*(char *)*param_1 != '\n')) {
    puVar1 = (ulonglong *)*param_9;
    lVar10 = param_9[1];
    uVar2 = *puVar1;
    uVar9 = 0;
    uVar6 = uVar2 - *(ulonglong *)(lVar10 + 0x18);
    if (uVar2 < *(ulonglong *)(lVar10 + 0x18)) {
      uVar6 = uVar9;
    }
    uVar5 = uVar2 - *(ulonglong *)(lVar10 + 0x38);
    if (uVar2 < *(ulonglong *)(lVar10 + 0x38)) {
      uVar5 = uVar9;
    }
    uVar2 = *(ulonglong *)(lVar10 + 0x10);
    uVar3 = *(ulonglong *)(lVar10 + 0x30);
    uVar8 = uVar3 - uVar5;
    if (uVar3 < uVar5) {
      uVar8 = uVar9;
    }
    uVar7 = uVar2 - uVar6;
    if (uVar2 < uVar6) {
      uVar7 = uVar9;
    }
    uVar9 = *(ulonglong *)(lVar10 + 0x40);
    lVar4 = *(longlong *)(lVar10 + 8);
    lVar10 = *(longlong *)(lVar10 + 0x28);
    *puVar1 = (uVar9 - uVar8) - uVar7;
    if (uVar2 >= uVar6 && uVar2 - uVar6 != 0 || uVar3 >= uVar5 && uVar3 - uVar5 != 0) {
      lVar10 = lVar10 + uVar5 * 0x10;
      lVar4 = lVar4 + uVar6 * 0x10;
      if (uVar2 < uVar6) {
        lVar4 = 8;
      }
      lVar4 = lVar4 + -0x10 + uVar7 * 0x10;
      if (uVar2 <= uVar6) {
        lVar4 = 0;
      }
      if (uVar3 < uVar5) {
        lVar10 = 8;
      }
      lStack_60 = lVar10 + -0x10 + uVar8 * 0x10;
      if (uVar3 <= uVar5) {
        lStack_60 = lVar4;
      }
      lStack_60 = lStack_60 + 8;
      *puVar1 = uVar9;
      uStack_68 = param_6;
      uStack_58 = param_5;
      puStack_70 = param_1;
      pdb_141b6a9b0(CONCAT71((int7)(uVar5 >> 8),!SBORROW8(0,*(longlong *)(*param_11 + 0x30))),
                    param_12,&puStack_70);
    }
                    /* WARNING: Could not recover jumptable at 0x000140b4286a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_143059418 +
              *(int *)(&UNK_143059418 + (ulonglong)*(uint *)(*param_10 + 0x88) * 4)))();
    return;
  }
  return;
}

