// VA 0x140ae6da0, PDB extent 139 bytes
// country_core::systems::mode_manager::impl$58::eq
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::mode_manager::impl$58::eq
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
   Extent: 139 */

bool pdb_140ae6da0(char *param_1,char *param_2)

{
  bool bVar1;
  
  if (*param_1 == *param_2) {
    bVar1 = true;
    switch(*param_1) {
    case '\0':
      if (*(int *)(param_1 + 8) == *(int *)(param_2 + 8)) {
        switch(*(int *)(param_1 + 8)) {
        case 1:
        case 2:
          goto code_r0x000140ae6e1f;
        default:
          return true;
        case 4:
        case 5:
        case 6:
          return *(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc);
        }
      }
      break;
    case '\x01':
    case '\x04':
    case '\x0e':
      return param_1[1] == param_2[1];
    default:
      goto LAB_140ae6e12;
    case '\x03':
      return *(longlong *)(param_1 + 8) == *(longlong *)(param_2 + 8);
    case '\x06':
      if (*(longlong *)(param_1 + 8) == *(longlong *)(param_2 + 8)) {
        if ((int)*(longlong *)(param_1 + 8) != 6) {
          return true;
        }
code_r0x000140ae6e1f:
        return *(longlong *)(param_1 + 0x10) == *(longlong *)(param_2 + 0x10);
      }
    }
  }
  bVar1 = false;
LAB_140ae6e12:
  return bVar1;
}

