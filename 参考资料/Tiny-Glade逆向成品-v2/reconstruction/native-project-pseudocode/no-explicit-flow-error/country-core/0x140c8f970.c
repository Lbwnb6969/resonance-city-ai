// VA 0x140c8f970, PDB extent 256 bytes
// country_core::resources::walls::decorator_storage::Decorators::insert<country_core::resources::walls::decorator_storage::DecoMoveToStorage>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator_storage::Decorators::insert<country_core::resources::walls::decorator_storage::DecoMoveToStorage>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
   Extent: 256 */

int * pdb_140c8f970(int *param_1,longlong param_2,uint param_3,undefined8 param_4,
                   undefined8 *param_5)

{
  undefined8 uVar1;
  ulonglong uVar2;
  uint uStack_78;
  uint uStack_74;
  longlong lStack_70;
  ulonglong uStack_68;
  uint *puStack_60;
  code *pcStack_58;
  longlong *plStack_50;
  code *pcStack_48;
  undefined8 *puStack_40;
  code *pcStack_38;
  
  uStack_78 = param_3;
  uVar1 = pdb_1400aede0(param_2 + 0x20,&uStack_78);
  pdb_140ca8930(param_2,uVar1,&uStack_78);
  pdb_1403b0de0(param_2 + 0x60,param_3);
  pdb_141407a20(param_1,param_2 + 0x30,param_3,param_4);
  if (*param_1 == 8) {
    uVar2 = (ulonglong)param_3;
    uStack_74 = param_3;
    lStack_70 = pdb_1417b43a0(param_5[2],uVar2,*param_5,param_5[1]);
    if (lStack_70 != 3) {
      puStack_60 = &uStack_74;
      pcStack_58 = pdb_140c447f0;
      plStack_50 = &lStack_70;
      pcStack_48 = pdb_140c34b70;
      puStack_40 = param_5;
      pcStack_38 = pdb_140c34b70;
      uStack_68 = uVar2;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14306d398,&puStack_60,&UNK_1430763d8);
    }
  }
  else {
    pdb_140c44480(param_5,param_3,&UNK_1430763f0);
  }
  return param_1;
}

