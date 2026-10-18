// VA 0x14093bc20, PDB extent 1957 bytes
// country_core::systems::backend::input::input_record_replay::input_record_replay
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/backend/input/input_record_replay.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::backend::input::input_record_replay::input_record_replay
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/backend/input/input_record_replay.rs
   Extent: 1957 */

void pdb_14093bc20(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *in_stack_00000048;
  undefined8 *in_stack_00000050;
  
  *(undefined4 *)in_stack_00000048[2] = *(undefined4 *)((longlong)in_stack_00000048 + 0x1c);
  lVar9 = in_stack_00000050[1];
  uVar1 = *(ulonglong *)*in_stack_00000050;
  uVar4 = 0;
  uVar7 = uVar1 - *(ulonglong *)(lVar9 + 0x18);
  if (uVar1 < *(ulonglong *)(lVar9 + 0x18)) {
    uVar7 = uVar4;
  }
  uVar6 = uVar1 - *(ulonglong *)(lVar9 + 0x38);
  if (uVar1 < *(ulonglong *)(lVar9 + 0x38)) {
    uVar6 = uVar4;
  }
  uVar1 = *(ulonglong *)(lVar9 + 0x30);
  uVar5 = uVar1 - uVar6;
  if (uVar1 < uVar6) {
    uVar5 = uVar4;
  }
  uVar2 = *(ulonglong *)(lVar9 + 0x10);
  uVar8 = uVar2 - uVar7;
  if (uVar2 < uVar7) {
    uVar8 = uVar4;
  }
  uVar5 = uVar8 + uVar5;
  if (uVar2 >= uVar7 && uVar2 - uVar7 != 0 || uVar1 >= uVar6 && uVar1 - uVar6 != 0) {
    uVar5 = uVar4;
  }
  lVar3 = *in_stack_00000048;
  *(ulonglong *)*in_stack_00000050 = *(longlong *)(lVar9 + 0x40) - uVar5;
  lVar9 = 1;
  if (*(longlong *)(lVar3 + 0x40) < 0) {
    lVar9 = *(longlong *)(lVar3 + 0x40);
  }
                    /* WARNING: Could not recover jumptable at 0x00014093bcfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_143024198 + *(int *)(&UNK_143024198 + lVar9 * 4)))();
  return;
}

