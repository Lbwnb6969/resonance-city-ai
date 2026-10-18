// VA 0x1414dcbb0, PDB extent 389 bytes
// country_core::resources::gothic_window_profile::gothic_door_outline_profile_curve
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/gothic_window_profile.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::gothic_window_profile::gothic_door_outline_profile_curve
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/gothic_window_profile.rs
   Extent: 389 */

undefined8 * pdb_1414dcbb0(undefined8 *param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_2 == 1) {
    pdb_14007ee60();
    pbVar1 = pub_1406abab0(0x50,4);
    uVar2 = _UNK_143315338;
    if (pbVar1 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(4,0x50);
    }
    *(undefined8 *)pbVar1 = _DAT_143315330;
    *(undefined8 *)(pbVar1 + 8) = uVar2;
    uVar2 = _UNK_143315348;
    *(undefined8 *)(pbVar1 + 0x10) = _DAT_143315340;
    *(undefined8 *)(pbVar1 + 0x18) = uVar2;
    uVar2 = _UNK_143315358;
    *(undefined8 *)(pbVar1 + 0x20) = _DAT_143315350;
    *(undefined8 *)(pbVar1 + 0x28) = uVar2;
    uVar2 = _UNK_143315368;
    *(undefined8 *)(pbVar1 + 0x30) = _DAT_143315360;
    *(undefined8 *)(pbVar1 + 0x38) = uVar2;
    uVar2 = _UNK_143315378;
    *(undefined8 *)(pbVar1 + 0x40) = _DAT_143315370;
    *(undefined8 *)(pbVar1 + 0x48) = uVar2;
    uVar2 = 10;
  }
  else {
    if (param_2 == 2) {
      pdb_14007ee60();
      pbVar1 = pub_1406abab0(0x58,4);
      uVar2 = _UNK_1433152d8;
      if (pbVar1 == (byte *)0x0) goto LAB_1414dccfe;
      *(undefined8 *)pbVar1 = _DAT_1433152d0;
      *(undefined8 *)(pbVar1 + 8) = uVar2;
      uVar2 = _UNK_1433152e8;
      *(undefined8 *)(pbVar1 + 0x10) = _DAT_1433152e0;
      *(undefined8 *)(pbVar1 + 0x18) = uVar2;
      uVar2 = _UNK_1433152f8;
      *(undefined8 *)(pbVar1 + 0x20) = _DAT_1433152f0;
      *(undefined8 *)(pbVar1 + 0x28) = uVar2;
      uVar2 = _UNK_143315308;
      *(undefined8 *)(pbVar1 + 0x30) = _DAT_143315300;
      *(undefined8 *)(pbVar1 + 0x38) = uVar2;
      uVar2 = _UNK_143315318;
      *(undefined8 *)(pbVar1 + 0x40) = _DAT_143315310;
      *(undefined8 *)(pbVar1 + 0x48) = uVar2;
      uVar3 = (undefined4)_DAT_143315320;
      uVar4 = (undefined4)((ulonglong)_DAT_143315320 >> 0x20);
    }
    else {
      if (param_2 != 3) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_14331591d,0x28,&UNK_1433159b0);
      }
      pdb_14007ee60();
      pbVar1 = pub_1406abab0(0x58,4);
      uVar2 = _UNK_143315278;
      if (pbVar1 == (byte *)0x0) {
LAB_1414dccfe:
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(4,0x58);
      }
      *(undefined8 *)pbVar1 = _DAT_143315270;
      *(undefined8 *)(pbVar1 + 8) = uVar2;
      uVar2 = _UNK_143315288;
      *(undefined8 *)(pbVar1 + 0x10) = _DAT_143315280;
      *(undefined8 *)(pbVar1 + 0x18) = uVar2;
      uVar2 = _UNK_143315298;
      *(undefined8 *)(pbVar1 + 0x20) = _DAT_143315290;
      *(undefined8 *)(pbVar1 + 0x28) = uVar2;
      uVar2 = _UNK_1433152a8;
      *(undefined8 *)(pbVar1 + 0x30) = _DAT_1433152a0;
      *(undefined8 *)(pbVar1 + 0x38) = uVar2;
      uVar2 = _UNK_1433152b8;
      *(undefined8 *)(pbVar1 + 0x40) = _DAT_1433152b0;
      *(undefined8 *)(pbVar1 + 0x48) = uVar2;
      uVar3 = (undefined4)_DAT_1433152c0;
      uVar4 = (undefined4)((ulonglong)_DAT_1433152c0 >> 0x20);
    }
    *(ulonglong *)(pbVar1 + 0x50) = CONCAT44(uVar4,uVar3);
    uVar2 = 0xb;
  }
  *param_1 = uVar2;
  param_1[1] = pbVar1;
  param_1[2] = uVar2;
  return param_1;
}

