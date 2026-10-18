// VA 0x1414dca40, PDB extent 358 bytes
// country_core::resources::gothic_window_profile::gothic_half_dormer_profile_curve
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/gothic_window_profile.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::gothic_window_profile::gothic_half_dormer_profile_curve
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/gothic_window_profile.rs
   Extent: 358 */

undefined8 * pdb_1414dca40(undefined8 *param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  
  if (param_2 == 1) {
    pdb_14007ee60();
    pbVar1 = pub_1406abab0(0x30,4);
    uVar2 = _UNK_143315248;
    if (pbVar1 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(4,0x30);
    }
    *(undefined8 *)pbVar1 = _DAT_143315240;
    *(undefined8 *)(pbVar1 + 8) = uVar2;
    uVar2 = _UNK_143315258;
    *(undefined8 *)(pbVar1 + 0x10) = _DAT_143315250;
    *(undefined8 *)(pbVar1 + 0x18) = uVar2;
    uVar2 = _UNK_143315268;
    *(undefined8 *)(pbVar1 + 0x20) = _DAT_143315260;
    *(undefined8 *)(pbVar1 + 0x28) = uVar2;
    uVar2 = 6;
  }
  else if (param_2 == 2) {
    pdb_14007ee60();
    pbVar1 = pub_1406abab0(0x40,4);
    uVar2 = _UNK_143315208;
    if (pbVar1 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(4,0x40);
    }
    *(undefined8 *)pbVar1 = _DAT_143315200;
    *(undefined8 *)(pbVar1 + 8) = uVar2;
    uVar2 = _UNK_143315218;
    *(undefined8 *)(pbVar1 + 0x10) = _DAT_143315210;
    *(undefined8 *)(pbVar1 + 0x18) = uVar2;
    uVar2 = _UNK_143315228;
    *(undefined8 *)(pbVar1 + 0x20) = _DAT_143315220;
    *(undefined8 *)(pbVar1 + 0x28) = uVar2;
    uVar2 = _UNK_143315238;
    *(undefined8 *)(pbVar1 + 0x30) = _DAT_143315230;
    *(undefined8 *)(pbVar1 + 0x38) = uVar2;
    uVar2 = 8;
  }
  else {
    if (param_2 != 3) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_14331591d,0x28,&UNK_143315998);
    }
    pdb_14007ee60();
    pbVar1 = pub_1406abab0(0x50,4);
    uVar2 = _UNK_1433151b8;
    if (pbVar1 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(4,0x50);
    }
    *(undefined8 *)pbVar1 = _DAT_1433151b0;
    *(undefined8 *)(pbVar1 + 8) = uVar2;
    uVar2 = _UNK_1433151c8;
    *(undefined8 *)(pbVar1 + 0x10) = _DAT_1433151c0;
    *(undefined8 *)(pbVar1 + 0x18) = uVar2;
    uVar2 = _UNK_1433151d8;
    *(undefined8 *)(pbVar1 + 0x20) = _DAT_1433151d0;
    *(undefined8 *)(pbVar1 + 0x28) = uVar2;
    uVar2 = _UNK_1433151e8;
    *(undefined8 *)(pbVar1 + 0x30) = _DAT_1433151e0;
    *(undefined8 *)(pbVar1 + 0x38) = uVar2;
    uVar2 = _UNK_1433151f8;
    *(undefined8 *)(pbVar1 + 0x40) = _DAT_1433151f0;
    *(undefined8 *)(pbVar1 + 0x48) = uVar2;
    uVar2 = 10;
  }
  *param_1 = uVar2;
  param_1[1] = pbVar1;
  param_1[2] = uVar2;
  return param_1;
}

