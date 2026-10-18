// VA 0x140bf2510, PDB extent 216 bytes
// country_core::systems::wall::snapping::snapping_maintain::check_for_disable_snapping
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/snapping/snapping_maintain.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::wall::snapping::snapping_maintain::check_for_disable_snapping
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/snapping/snapping_maintain.rs
   Extent: 216 */

void pdb_140bf2510(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  char cVar1;
  char *pcVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  pcVar2 = (char *)*param_1;
  cVar1 = *pcVar2;
  if (cVar1 == '\x02') {
    if (*(char *)*param_2 == '\0') {
LAB_140bf2599:
      *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
      lVar3 = *param_3;
      lVar4 = *(longlong *)(lVar3 + 0x30);
      uVar5 = *(undefined8 *)(lVar3 + 0x40);
      if (lVar4 == *(longlong *)(lVar3 + 0x20)) {
        pdb_142d7e980(lVar3 + 0x20);
      }
      lVar6 = *(longlong *)(lVar3 + 0x28);
      *(undefined8 *)(lVar6 + lVar4 * 0x10) = uVar5;
      *(undefined1 *)(lVar6 + 8 + lVar4 * 0x10) = 0;
      *(longlong *)(lVar3 + 0x30) = lVar4 + 1;
      *(longlong *)(lVar3 + 0x40) = *(longlong *)(lVar3 + 0x40) + 1;
      return;
    }
  }
  else {
    if (*(char *)*param_2 == '\0') {
      if (cVar1 != '\x03') {
        return;
      }
      goto LAB_140bf2599;
    }
    if (cVar1 != '\x03') goto LAB_140bf2587;
  }
  *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
  lVar3 = *param_3;
  lVar4 = *(longlong *)(lVar3 + 0x30);
  uVar5 = *(undefined8 *)(lVar3 + 0x40);
  if (lVar4 == *(longlong *)(lVar3 + 0x20)) {
    pdb_142d7e980(lVar3 + 0x20);
  }
  lVar6 = *(longlong *)(lVar3 + 0x28);
  *(undefined8 *)(lVar6 + lVar4 * 0x10) = uVar5;
  *(undefined1 *)(lVar6 + 8 + lVar4 * 0x10) = 1;
  *(longlong *)(lVar3 + 0x30) = lVar4 + 1;
  *(longlong *)(lVar3 + 0x40) = *(longlong *)(lVar3 + 0x40) + 1;
LAB_140bf2587:
  *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
  *pcVar2 = '\0';
  return;
}

