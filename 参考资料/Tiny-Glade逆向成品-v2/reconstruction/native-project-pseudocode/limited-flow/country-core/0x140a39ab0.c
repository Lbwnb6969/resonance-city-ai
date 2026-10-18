// VA 0x140a39ab0, PDB extent 172 bytes
// country_core::systems::main_camera::impl$2::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/main_camera.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* Matched PDB project procedure: country_core::systems::main_camera::impl$2::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/main_camera.rs
   Extent: 172 */

void pdb_140a39ab0(undefined1 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 *puStack_18;
  code *pcStack_10;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    puVar1 = &UNK_14303b333;
    uVar2 = 0x2d;
    break;
  case 1:
    puVar1 = &UNK_14303b362;
    uVar2 = 0x2e;
    break;
  case 2:
    puVar1 = &UNK_14303b390;
    uVar2 = 0x2d;
    break;
  case 3:
    puVar1 = &UNK_14303b3bd;
    uVar2 = 0x2e;
    break;
  case 4:
    puVar1 = &UNK_14303b3eb;
    goto code_r0x000140a39b13;
  case 5:
    puVar1 = &UNK_14303b41a;
code_r0x000140a39b13:
    uVar2 = 0x2f;
    break;
  default:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uStack_28 = pdb_140dc6290(puVar1);
  puStack_18 = &uStack_28;
  pcStack_10 = pdb_1402ed400;
  uStack_20 = uVar2;
  pdb_140f681d0(*param_2,param_2[1],&UNK_14303b360,&puStack_18);
  return;
}

