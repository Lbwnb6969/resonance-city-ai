// VA 0x140c715b0, PDB extent 364 bytes
// country_core::resources::session::import::source_folder
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session/import.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::session::import::source_folder
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session/import.rs
   Extent: 364 */

undefined8 pdb_140c715b0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  ulonglong uStack_60;
  byte *pbStack_58;
  undefined8 uStack_50;
  byte *pbStack_48;
  ulonglong uStack_40;
  undefined1 uStack_31;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  uVar3 = param_2;
  uVar2 = pdb_140dc6750();
  uStack_60 = 0;
  pbStack_58 = (byte *)0x1;
  uStack_50 = 0;
  uStack_68 = 0x60000020;
  puStack_78 = &uStack_60;
  puStack_70 = &UNK_1430729e0;
  cVar1 = pdb_140eaccb0(param_2,&puStack_78);
  if (cVar1 == '\0') {
    uStack_40 = uStack_60;
    pbStack_48 = pbStack_58;
    pdb_140f3e9e0(param_1,uVar2,uVar3,pbStack_58,uStack_50);
    if (uStack_40 != 0) {
      pub_1406abac0(pbStack_48,uStack_40,1);
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_143072a10,0x37,&uStack_31,&UNK_143072ad0,&UNK_143072ab8);
}

