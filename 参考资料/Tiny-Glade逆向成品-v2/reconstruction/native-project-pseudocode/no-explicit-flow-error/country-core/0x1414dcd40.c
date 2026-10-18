// VA 0x1414dcd40, PDB extent 378 bytes
// country_core::resources::gothic_window_profile::gothic_window_outline_profile_curve
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/gothic_window_profile.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::gothic_window_profile::gothic_window_outline_profile_curve
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/gothic_window_profile.rs
   Extent: 378 */

undefined8 * pdb_1414dcd40(undefined8 *param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_2 == 1) {
    pdb_14007ee60();
    pbVar1 = pub_1406abab0(0x40,4);
    uVar2 = _UNK_143315448;
    if (pbVar1 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(4,0x40);
    }
    *(undefined8 *)pbVar1 = _DAT_143315440;
    *(undefined8 *)(pbVar1 + 8) = uVar2;
    uVar2 = _UNK_143315458;
    *(undefined8 *)(pbVar1 + 0x10) = _DAT_143315450;
    *(undefined8 *)(pbVar1 + 0x18) = uVar2;
    uVar2 = _UNK_143315468;
    *(undefined8 *)(pbVar1 + 0x20) = _DAT_143315460;
    *(undefined8 *)(pbVar1 + 0x28) = uVar2;
    uVar2 = _UNK_143315478;
    *(undefined8 *)(pbVar1 + 0x30) = _DAT_143315470;
    *(undefined8 *)(pbVar1 + 0x38) = uVar2;
    uVar2 = 8;
  }
  else {
    if (param_2 == 2) {
      pdb_14007ee60();
      pbVar1 = pub_1406abab0(0x58,4);
      uVar2 = _UNK_1433153e8;
      if (pbVar1 == (byte *)0x0) goto LAB_1414dce83;
      *(undefined8 *)pbVar1 = _DAT_1433153e0;
      *(undefined8 *)(pbVar1 + 8) = uVar2;
      uVar2 = _UNK_1433153f8;
      *(undefined8 *)(pbVar1 + 0x10) = _DAT_1433153f0;
      *(undefined8 *)(pbVar1 + 0x18) = uVar2;
      uVar2 = _UNK_143315408;
      *(undefined8 *)(pbVar1 + 0x20) = _DAT_143315400;
      *(undefined8 *)(pbVar1 + 0x28) = uVar2;
      uVar2 = _UNK_143315418;
      *(undefined8 *)(pbVar1 + 0x30) = _DAT_143315410;
      *(undefined8 *)(pbVar1 + 0x38) = uVar2;
      uVar2 = _UNK_143315428;
      *(undefined8 *)(pbVar1 + 0x40) = _DAT_143315420;
      *(undefined8 *)(pbVar1 + 0x48) = uVar2;
      uVar3 = (undefined4)_DAT_143315430;
      uVar4 = (undefined4)((ulonglong)_DAT_143315430 >> 0x20);
    }
    else {
      if (param_2 != 3) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_14331591d,0x28,&UNK_1433159c8);
      }
      pdb_14007ee60();
      pbVar1 = pub_1406abab0(0x58,4);
      uVar2 = _UNK_143315388;
      if (pbVar1 == (byte *)0x0) {
LAB_1414dce83:
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(4,0x58);
      }
      *(undefined8 *)pbVar1 = _DAT_143315380;
      *(undefined8 *)(pbVar1 + 8) = uVar2;
      uVar2 = _UNK_143315398;
      *(undefined8 *)(pbVar1 + 0x10) = _DAT_143315390;
      *(undefined8 *)(pbVar1 + 0x18) = uVar2;
      uVar2 = _UNK_1433153a8;
      *(undefined8 *)(pbVar1 + 0x20) = _DAT_1433153a0;
      *(undefined8 *)(pbVar1 + 0x28) = uVar2;
      uVar2 = _UNK_1433153b8;
      *(undefined8 *)(pbVar1 + 0x30) = _DAT_1433153b0;
      *(undefined8 *)(pbVar1 + 0x38) = uVar2;
      uVar2 = _UNK_1433153c8;
      *(undefined8 *)(pbVar1 + 0x40) = _DAT_1433153c0;
      *(undefined8 *)(pbVar1 + 0x48) = uVar2;
      uVar3 = (undefined4)_DAT_1433153d0;
      uVar4 = (undefined4)((ulonglong)_DAT_1433153d0 >> 0x20);
    }
    *(ulonglong *)(pbVar1 + 0x50) = CONCAT44(uVar4,uVar3);
    uVar2 = 0xb;
  }
  *param_1 = uVar2;
  param_1[1] = pbVar1;
  param_1[2] = uVar2;
  return param_1;
}

