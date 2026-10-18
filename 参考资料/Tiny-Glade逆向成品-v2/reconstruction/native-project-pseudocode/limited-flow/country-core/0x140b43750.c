// VA 0x140b43750, PDB extent 160 bytes
// country_core::systems::mode_manager::WallSelectionGroups::remove
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* Matched PDB project procedure: country_core::systems::mode_manager::WallSelectionGroups::remove
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
   Extent: 160 */

void pdb_140b43750(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  
  uVar6 = *(ulonglong *)(param_1 + 0x10);
  if (param_2 < uVar6) {
    lVar1 = *(longlong *)(param_1 + 8);
    lVar2 = *(longlong *)(lVar1 + param_2 * 0x18);
    uVar3 = *(undefined8 *)(lVar1 + 8 + param_2 * 0x18);
    pub_142e32770(lVar1 + param_2 * 0x18,lVar1 + param_2 * 0x18 + 0x18,(~param_2 + uVar6) * 0x18);
    uVar6 = uVar6 - 1;
    *(ulonglong *)(param_1 + 0x10) = uVar6;
    if (lVar2 == 0) {
      return;
    }
    if (!SBORROW8(0,lVar2)) {
      uVar5 = GetProcessHeap(uVar3,lVar2 << 3);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      HeapFree(uVar5,0,uVar3);
      return;
    }
  }
  pdb_142dc7ef8(param_2,uVar6,&UNK_143058e40);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

