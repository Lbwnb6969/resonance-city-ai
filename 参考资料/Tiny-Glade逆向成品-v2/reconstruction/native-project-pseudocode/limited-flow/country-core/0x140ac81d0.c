// VA 0x140ac81d0, PDB extent 614 bytes
// country_core::systems::audio::building_audio::impl$1::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/building_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* Matched PDB project procedure: country_core::systems::audio::building_audio::impl$1::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/building_audio.rs
   Extent: 614 */

void pdb_140ac81d0(undefined1 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  int unaff_EDI;
  undefined8 uVar2;
  undefined1 *puStack_8;
  
  puStack_8 = param_1 + 1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    pdb_140f66e50(param_2,&UNK_14304c5f0,6,&UNK_14304c5f6,7,&puStack_8,&UNK_14304c5d0);
    return;
  case 1:
    pdb_140f66e50(param_2,&UNK_14304c5fd,0xf,&UNK_14304c5f6,7,&puStack_8,&UNK_14304c5d0);
    return;
  case 2:
    puVar1 = &UNK_14304c60c;
    break;
  case 3:
    puVar1 = &UNK_14304c618;
    break;
  case 4:
    pdb_140f66e50(param_2,&UNK_14304c624,4,&UNK_14304c5f6,7,&puStack_8,&UNK_14304c5d0);
    return;
  case 5:
    puVar1 = &UNK_14304c628;
    uVar2 = 0xb;
    goto pdb_140f679a0;
  case 6:
    pdb_140f66e50(param_2,&UNK_14304c633,0x10,&UNK_14304c5f6,7,&puStack_8,&UNK_14304c5d0);
    return;
  case 7:
    pdb_140f66e50(param_2,&UNK_14304c643,0xe,&UNK_14304c5f6,7,&puStack_8,&UNK_14304c5d0);
    return;
  case 8:
    pdb_140f66e50(param_2,&UNK_14304c651,0xb,&UNK_14304c5f6,7,&puStack_8,&UNK_14304c5d0);
    return;
  case 9:
    puVar1 = &UNK_14304c65c;
    uVar2 = 0xd;
pdb_140f679a0:
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0x18))(*param_2,puVar1,uVar2,*(code **)(param_2[1] + 0x18));
    return;
  case 10:
    *(int *)(param_1 + -0x45780258) = *(int *)(param_1 + -0x45780258) - unaff_EDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pdb_140f66e50(param_2,puVar1,0xc,&UNK_14304c5f6,7,&puStack_8,&UNK_14304c5d0);
  return;
}

