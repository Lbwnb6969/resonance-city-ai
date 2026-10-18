// VA 0x140887990, PDB extent 361 bytes
// system_decorator::decorator_visual::gothic_dormer::gothic_dormer_profile_curve
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/gothic_dormer.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::gothic_dormer::gothic_dormer_profile_curve
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/gothic_dormer.rs
   Extent: 361 */

undefined8 * pdb_140887990(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  byte *pbVar2;
  undefined8 uVar3;
  
  cVar1 = *(char *)(param_2 + 0x59);
  if (cVar1 == '\x01') {
    pdb_14007ee60();
    pbVar2 = pub_1406abab0(0x30,4);
    uVar3 = _UNK_1430114d8;
    if (pbVar2 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(4,0x30);
    }
    *(undefined8 *)pbVar2 = _DAT_1430114d0;
    *(undefined8 *)(pbVar2 + 8) = uVar3;
    uVar3 = _UNK_1430114e8;
    *(undefined8 *)(pbVar2 + 0x10) = _DAT_1430114e0;
    *(undefined8 *)(pbVar2 + 0x18) = uVar3;
    uVar3 = _UNK_1430114f8;
    *(undefined8 *)(pbVar2 + 0x20) = _DAT_1430114f0;
    *(undefined8 *)(pbVar2 + 0x28) = uVar3;
    uVar3 = 6;
  }
  else if (cVar1 == '\x02') {
    pdb_14007ee60();
    pbVar2 = pub_1406abab0(0x38,4);
    uVar3 = _UNK_143011498;
    if (pbVar2 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(4,0x38);
    }
    *(undefined8 *)pbVar2 = _DAT_143011490;
    *(undefined8 *)(pbVar2 + 8) = uVar3;
    uVar3 = _UNK_1430114a8;
    *(undefined8 *)(pbVar2 + 0x10) = _DAT_1430114a0;
    *(undefined8 *)(pbVar2 + 0x18) = uVar3;
    uVar3 = _UNK_1430114b8;
    *(undefined8 *)(pbVar2 + 0x20) = _DAT_1430114b0;
    *(undefined8 *)(pbVar2 + 0x28) = uVar3;
    *(ulonglong *)(pbVar2 + 0x30) = (ulonglong)_DAT_1430114c0;
    uVar3 = 7;
  }
  else {
    if (cVar1 != '\x03') {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_143011920,0x28,&UNK_143011960);
    }
    pdb_14007ee60();
    pbVar2 = pub_1406abab0(0x48,4);
    uVar3 = _UNK_143011448;
    if (pbVar2 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(4,0x48);
    }
    *(undefined8 *)pbVar2 = _DAT_143011440;
    *(undefined8 *)(pbVar2 + 8) = uVar3;
    uVar3 = _UNK_143011458;
    *(undefined8 *)(pbVar2 + 0x10) = _DAT_143011450;
    *(undefined8 *)(pbVar2 + 0x18) = uVar3;
    uVar3 = _UNK_143011468;
    *(undefined8 *)(pbVar2 + 0x20) = _DAT_143011460;
    *(undefined8 *)(pbVar2 + 0x28) = uVar3;
    uVar3 = _UNK_143011478;
    *(undefined8 *)(pbVar2 + 0x30) = _DAT_143011470;
    *(undefined8 *)(pbVar2 + 0x38) = uVar3;
    *(ulonglong *)(pbVar2 + 0x40) = (ulonglong)_DAT_143011480;
    uVar3 = 9;
  }
  *param_1 = uVar3;
  param_1[1] = pbVar2;
  param_1[2] = uVar3;
  return param_1;
}

