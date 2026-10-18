// VA 0x140c9c410, PDB extent 546 bytes
// country_core::systems::wall::shapes::shape_placement_signifiers::shape_placement_signifiers::closure$1
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/shape_placement_signifiers.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::shapes::shape_placement_signifiers::shape_placement_signifiers::closure$1
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/shape_placement_signifiers.rs
   Extent: 546 */

undefined8 *
pdb_140c9c410(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  ulonglong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulonglong arg0;
  undefined8 uVar4;
  undefined8 auStack_110 [5];
  undefined8 uStack_e8;
  ulonglong uStack_e0;
  byte *pbStack_d8;
  ulonglong uStack_d0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined2 uStack_80;
  ulonglong uStack_7c;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  undefined2 uStack_64;
  undefined1 uStack_62;
  undefined8 uStack_58;
  byte *pbStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pbStack_50 = pub_1406abab0(8,8);
  if (pbStack_50 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,8);
  }
  uVar1 = *(ulonglong *)(param_2 + 0x10);
  arg0 = uVar1 * 0xc;
  if (0xaaaaaaaaaaaaaaa < uVar1) {
    uVar4 = 0;
LAB_140c9c482:
    pdb_142dc7e2a(uVar4,arg0);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar2 = *(undefined8 *)(param_2 + 8);
  uStack_58 = param_4;
  if (arg0 == 0) {
    pbStack_d8 = (byte *)0x4;
    uStack_e0 = 0;
  }
  else {
    pdb_14007ee60();
    uVar4 = 4;
    pbStack_d8 = pub_1406abab0(arg0,4);
    uStack_e0 = uVar1;
    if (pbStack_d8 == (byte *)0x0) goto LAB_140c9c482;
  }
  if (uVar1 != 0) {
    pub_142e32760(pbStack_d8,uVar2,arg0);
  }
  uStack_6c = 0x3f80000000000000;
  uStack_74 = 0;
  uStack_e8 = 0x8000000000000002;
  uStack_b8 = _DAT_142e4e650;
  uStack_b0 = _UNK_142e4e658;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0x400ccccd00000000;
  uStack_88 = 1;
  uStack_80 = 0x101;
  uStack_7c = (ulonglong)_DAT_142e36f28;
  uStack_64 = 0;
  uStack_62 = 0;
  uStack_d0 = uVar1;
  pdb_1409bba50(auStack_110,&uStack_e8,param_3,uStack_58,param_5);
  *(undefined8 *)pbStack_50 = auStack_110[0];
  *param_1 = 1;
  param_1[1] = pbStack_50;
  param_1[2] = 1;
  return param_1;
}

