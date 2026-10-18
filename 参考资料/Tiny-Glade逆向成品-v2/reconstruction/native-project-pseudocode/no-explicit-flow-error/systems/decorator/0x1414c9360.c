// VA 0x1414c9360, PDB extent 229 bytes
// system_decorator::ui_systems::calculate_decorator_dst::convert_raycast_hit_to_decorator_dst
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/calculate_decorator_dst.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_decorator::ui_systems::calculate_decorator_dst::convert_raycast_hit_to_decorator_dst
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/calculate_decorator_dst.rs
   Extent: 229 */

undefined1 *
pdb_1414c9360(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  undefined1 uVar2;
  char cVar3;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_4) {
  case 0:
    uVar1 = *(undefined8 *)(param_4 + 8);
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = uVar1;
    return param_1;
  case 2:
    uVar1 = *(undefined8 *)(param_4 + 8);
    uVar2 = param_4[2];
    if ((param_4[1] == '\0') || (cVar3 = pdb_1409012f0(param_3), cVar3 != '\0')) {
      *param_1 = 1;
      param_1[1] = uVar2;
      *(undefined8 *)(param_1 + 8) = uVar1;
      return param_1;
    }
  default:
    *param_1 = 4;
    return param_1;
  case 3:
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_1433132ac,0x179,&UNK_1433133b0);
  case 5:
  case 9:
  case 0xc:
  case 0xf:
  case 0x10:
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1433133c8,0x28,&UNK_1433133f0);
  case 0xb:
    cVar3 = pdb_140901300(param_3);
    if (cVar3 != '\0') {
      *param_1 = 2;
      return param_1;
    }
    break;
  case 0xd:
    uVar1 = *(undefined8 *)(param_4 + 4);
    cVar3 = pdb_140901310(param_3);
    if (cVar3 != '\0') {
      *param_1 = 3;
      *(undefined8 *)(param_1 + 4) = uVar1;
      return param_1;
    }
  }
  *param_1 = 4;
  return param_1;
}

