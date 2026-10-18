// VA 0x140a21520, PDB extent 13297 bytes
// country_core::meta_commander::commander_update
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/meta_commander.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::meta_commander::commander_update
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/meta_commander.rs
   Extent: 13297 */

void pdb_140a21520(longlong *param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  puVar1 = (ulonglong *)*param_1;
  *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
  if (puVar1[3] != 0) {
    uVar2 = puVar1[2];
    uVar5 = *puVar1;
    uVar3 = puVar1[1];
    if (uVar2 + 1 < uVar5) {
      uVar5 = 0;
    }
    puVar1[2] = (uVar2 - uVar5) + 1;
    puVar1[3] = puVar1[3] - 1;
    lVar4 = uVar2 * 0x38;
    lVar6 = *(longlong *)(uVar3 + lVar4);
    if (lVar6 != -0x7fffffffffffffeb) {
      if (-1 < lVar6) {
        lVar6 = 0xe;
      }
                    /* WARNING: Could not recover jumptable at 0x000140a217b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_143039608 + *(int *)(&UNK_143039608 + lVar6 * 4)))
                (*(undefined8 *)(uVar3 + 0x10 + lVar4),&UNK_143039608,
                 *(undefined8 *)(uVar3 + 8 + lVar4),
                 &UNK_143039608 + *(int *)(&UNK_143039608 + lVar6 * 4));
      return;
    }
  }
  return;
}

