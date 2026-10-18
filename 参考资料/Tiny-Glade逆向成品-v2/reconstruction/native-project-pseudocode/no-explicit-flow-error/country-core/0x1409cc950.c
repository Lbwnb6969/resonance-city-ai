// VA 0x1409cc950, PDB extent 498 bytes
// country_core::systems::wall::shapes::rectangle::ui_modes::edit_dims::impl$1::signifier::closure$1
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/rectangle/ui_modes/edit_dims.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::shapes::rectangle::ui_modes::edit_dims::impl$1::signifier::closure$1
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/rectangle/ui_modes/edit_dims.rs
   Extent: 498 */

undefined8 *
pdb_1409cc950(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  ulonglong arg0;
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 auStack_110 [5];
  undefined8 uStack_e8;
  ulonglong uStack_e0;
  byte *pbStack_d8;
  ulonglong uStack_d0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  float fStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_88;
  undefined2 uStack_80;
  ulonglong uStack_7c;
  undefined8 uStack_74;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined2 uStack_64;
  byte bStack_62;
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
  arg0 = param_2[1];
  if ((longlong)arg0 < 0) {
    uVar3 = 0;
LAB_1409cc9ab:
    pdb_142dc7e2a(uVar3,arg0);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (arg0 == 0) {
    pbStack_d8 = (byte *)0x1;
  }
  else {
    uVar1 = *param_2;
    uStack_58 = param_4;
    pdb_14007ee60();
    uVar3 = 1;
    pbStack_d8 = pub_1406abab0(arg0,1);
    if (pbStack_d8 == (byte *)0x0) goto LAB_1409cc9ab;
    pub_142e32760(pbStack_d8,uVar1,arg0);
    param_4 = uStack_58;
  }
  uStack_b8 = param_2[2];
  uStack_b0 = param_2[3];
  fStack_a4 = *(float *)((longlong)param_2 + 0x2c) * _DAT_142e37838;
  bStack_62 = *(byte *)(param_2 + 6) ^ 1;
  uStack_6c = *(undefined4 *)(param_2 + 5);
  uStack_74 = param_2[4];
  uStack_e8 = 0x8000000000000000;
  uStack_a8 = 1;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 2;
  uStack_88 = 1;
  uStack_80 = 0x100;
  uStack_7c = (ulonglong)_DAT_142e36f28;
  uStack_68 = 0x3f800000;
  uStack_64 = 0;
  uStack_e0 = arg0;
  uStack_d0 = arg0;
  pdb_1409bba50(auStack_110,&uStack_e8,param_3,param_4,param_5);
  *(undefined8 *)pbStack_50 = auStack_110[0];
  *param_1 = 1;
  param_1[1] = pbStack_50;
  param_1[2] = 1;
  return param_1;
}

