// VA 0x140a77310, PDB extent 105 bytes
// country_core::resources::ui_settings::impl$1::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/ui_settings.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* Matched PDB project procedure: country_core::resources::ui_settings::impl$1::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/ui_settings.rs
   Extent: 105 */

void pdb_140a77310(byte *param_1,undefined8 *param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  pcVar1 = &UNK_143041c3c + *(int *)(&UNK_143041c3c + (ulonglong)*param_1 * 4);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    puVar3 = &UNK_143041b8c;
    uVar4 = 0x28;
    break;
  case 1:
    puVar3 = &UNK_143041bb4;
    uVar4 = 0x26;
    break;
  case 2:
    puVar3 = &UNK_143041bda;
    uVar4 = 0x27;
    break;
  case 3:
    puVar3 = &UNK_143041c01;
    uVar4 = 0x25;
    break;
  case 4:
    uRama356fdfda35719fd = SUB84(pcVar1,0);
    out((short)param_2,uRama356fdfda35719fd);
    *pcVar1 = *pcVar1 + (char)pcVar1;
    *pcVar1 = *pcVar1 + (char)pcVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar2 = pdb_140dc6290(puVar3,uVar4);
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0x18))(*param_2,uVar2,uVar4,*(code **)(param_2[1] + 0x18));
  return;
}

