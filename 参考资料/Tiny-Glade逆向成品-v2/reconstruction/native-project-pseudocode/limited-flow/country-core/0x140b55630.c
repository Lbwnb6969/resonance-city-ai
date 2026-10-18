// VA 0x140b55630, PDB extent 1524 bytes
// country_core::systems::collision::world::impl$90::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::collision::world::impl$90::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 1524 */

void pdb_140b55630(undefined1 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 *puStack_8;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    puStack_8 = param_1 + 8;
    pdb_140f66e50(param_2,&UNK_14305a018,4,&UNK_14305a01c,7,&puStack_8,&UNK_143059ff8);
    return;
  case 1:
    puVar1 = &UNK_14305a023;
    goto code_r0x000140b55c06;
  case 2:
    puStack_8 = param_1 + 2;
    pdb_140f66ff0(param_2,&UNK_14305a088,4,&UNK_14305a01c,7,param_1 + 8,&UNK_14305a028,
                  &UNK_14305a08c,4,param_1 + 1,&UNK_14305a048,&UNK_14305a090,5,&puStack_8,
                  &UNK_14305a068);
    return;
  case 3:
    puStack_8 = param_1 + 8;
    pdb_140f66f00(param_2,&UNK_14305a0d8,0x12,&UNK_14305a0ea,0xc,param_1 + 4,&UNK_14305a098,
                  &UNK_14305a0f6,4,&puStack_8,&UNK_14305a0b8);
    return;
  case 4:
    puStack_8 = param_1 + 8;
    pdb_140f66f00(param_2,&UNK_14305a0fa,0x14,&UNK_14305a0ea,0xc,param_1 + 4,&UNK_14305a098,
                  &UNK_14305a0f6,4,&puStack_8,&UNK_14305a0b8);
    return;
  case 5:
    puStack_8 = param_1 + 8;
    pdb_140f66f00(param_2,&UNK_14305a10e,0x10,&UNK_14305a0ea,0xc,param_1 + 4,&UNK_14305a098,
                  &UNK_14305a0f6,4,&puStack_8,&UNK_14305a0b8);
    return;
  case 6:
    puVar1 = &UNK_14305a11e;
    break;
  case 7:
    puVar1 = &UNK_14305a124;
    break;
  case 8:
    puVar1 = &UNK_14305a12a;
code_r0x000140b55c06:
    puStack_8 = param_1 + 8;
    pdb_140f66e50(param_2,puVar1,5,&UNK_14305a01c,7,&puStack_8,&UNK_143059ff8);
    return;
  case 9:
    puVar1 = &UNK_14305a12f;
    break;
  case 10:
    puVar1 = &UNK_14305a135;
    uVar2 = 4;
    goto pdb_140f679a0;
  case 0xb:
    puVar1 = &UNK_14305a139;
    uVar2 = 7;
pdb_140f679a0:
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0x18))(*param_2,puVar1,uVar2,*(code **)(param_2[1] + 0x18));
    return;
  case 0xc:
    puStack_8 = param_1 + 8;
    pdb_140f66e50(param_2,&UNK_14305a140,0xb,&UNK_14305a14b,6,&puStack_8,&UNK_143059f90);
    return;
  case 0xd:
    puVar1 = &UNK_14305a178;
    goto code_r0x000140b55b44;
  case 0xe:
    puVar1 = &UNK_14305a18e;
code_r0x000140b55b44:
    puStack_8 = param_1 + 4;
    pdb_140f66e50(param_2,puVar1,0xc,&UNK_14305a184,10,&puStack_8,&UNK_14305a158);
    return;
  case 0xf:
    puStack_8 = param_1 + 4;
    pdb_140f66f00(param_2,&UNK_14305a1c0,0x18,&UNK_14305a184,10,param_1 + 8,&UNK_14305a1a0,
                  &UNK_14305a1d8,9,&puStack_8,&UNK_143059fc8);
    return;
  case 0x10:
    puStack_8 = param_1 + 4;
    pdb_140f66f00(param_2,&UNK_14305a1e1,0x1a,&UNK_14305a184,10,param_1 + 8,&UNK_14305a1a0,
                  &UNK_14305a1d8,9,&puStack_8,&UNK_143059fc8);
    return;
  }
  puStack_8 = param_1 + 8;
  pdb_140f66e50(param_2,puVar1,6,&UNK_14305a01c,7,&puStack_8,&UNK_143059ff8);
  return;
}

