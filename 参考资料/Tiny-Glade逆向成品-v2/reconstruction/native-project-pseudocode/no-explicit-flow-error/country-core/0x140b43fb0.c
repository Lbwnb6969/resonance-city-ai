// VA 0x140b43fb0, PDB extent 354 bytes
// country_core::systems::mode_manager::send_mode_just_changed_event
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::mode_manager::send_mode_just_changed_event
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
   Extent: 354 */

void pdb_140b43fb0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  
  pcVar2 = (char *)*param_1;
  pcVar3 = (char *)*param_2;
  if (*pcVar2 == *pcVar3) {
    switch(*pcVar2) {
    case '\0':
      if (*(int *)(pcVar2 + 8) == *(int *)(pcVar3 + 8)) {
        switch(*(int *)(pcVar2 + 8)) {
        case 1:
        case 2:
          goto code_r0x000140b4404a;
        default:
          goto LAB_140b44104;
        case 4:
        case 5:
        case 6:
          if (*(int *)(pcVar2 + 0xc) == *(int *)(pcVar3 + 0xc)) {
            return;
          }
        }
      }
      break;
    case '\x01':
    case '\x04':
    case '\x0e':
      if (pcVar2[1] == pcVar3[1]) {
        return;
      }
      break;
    default:
      goto LAB_140b44104;
    case '\x03':
      if (*(longlong *)(pcVar2 + 8) == *(longlong *)(pcVar3 + 8)) {
        return;
      }
      break;
    case '\x06':
      if (*(longlong *)(pcVar2 + 8) == *(longlong *)(pcVar3 + 8)) {
        if ((int)*(longlong *)(pcVar2 + 8) != 6) {
          return;
        }
code_r0x000140b4404a:
        if (*(longlong *)(pcVar2 + 0x10) == *(longlong *)(pcVar3 + 0x10)) {
          return;
        }
      }
    }
  }
  uVar4 = *(undefined8 *)(pcVar2 + 0x10);
  uVar10 = *(undefined8 *)pcVar2;
  uVar11 = *(undefined8 *)(pcVar2 + 8);
  uVar12 = *(undefined8 *)pcVar3;
  uVar13 = *(undefined8 *)(pcVar3 + 8);
  uVar5 = *(undefined8 *)(pcVar3 + 0x10);
  *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
  lVar6 = *param_3;
  lVar7 = *(longlong *)(lVar6 + 0x30);
  uVar8 = *(undefined8 *)(lVar6 + 0x40);
  if (lVar7 == *(longlong *)(lVar6 + 0x20)) {
    pdb_142d7f080(lVar6 + 0x20);
  }
  lVar9 = *(longlong *)(lVar6 + 0x28);
  lVar14 = lVar7 * 0x38;
  puVar1 = (undefined8 *)(lVar9 + 0x20 + lVar14);
  *puVar1 = uVar13;
  puVar1[1] = uVar5;
  puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar14);
  *puVar1 = uVar4;
  puVar1[1] = uVar12;
  *(undefined8 *)(lVar9 + lVar14) = uVar10;
  ((undefined8 *)(lVar9 + lVar14))[1] = uVar11;
  *(undefined8 *)(lVar9 + 0x30 + lVar14) = uVar8;
  *(longlong *)(lVar6 + 0x30) = lVar7 + 1;
  *(longlong *)(lVar6 + 0x40) = *(longlong *)(lVar6 + 0x40) + 1;
  uVar4 = *(undefined8 *)(pcVar2 + 0x10);
  uVar5 = *(undefined8 *)pcVar2;
  uVar8 = *(undefined8 *)(pcVar2 + 8);
  *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined8 *)(pcVar3 + 0x10) = uVar4;
  *(undefined8 *)pcVar3 = uVar5;
  *(undefined8 *)(pcVar3 + 8) = uVar8;
LAB_140b44104:
  return;
}

