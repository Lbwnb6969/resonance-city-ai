// VA 0x140c68190, PDB extent 562 bytes
// country_core::resources::walls::decorator_outline::impl$1::display_with_opacity::closure$1
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_outline.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::decorator_outline::impl$1::display_with_opacity::closure$1
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_outline.rs
   Extent: 562 */

undefined8 *
pdb_140c68190(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  ulonglong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulonglong arg0;
  undefined8 uVar4;
  float fVar5;
  undefined8 auStack_120 [5];
  undefined8 uStack_f8;
  ulonglong uStack_f0;
  byte *pbStack_e8;
  ulonglong uStack_e0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined2 uStack_90;
  ulonglong uStack_8c;
  undefined8 uStack_84;
  undefined4 uStack_7c;
  float fStack_78;
  undefined2 uStack_74;
  undefined1 uStack_72;
  undefined8 uStack_60;
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
  uVar1 = param_2[4];
  arg0 = uVar1 * 0xc;
  if (0xaaaaaaaaaaaaaaa < uVar1) {
    uVar4 = 0;
LAB_140c68204:
    pdb_142dc7e2a(uVar4,arg0);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  uVar2 = param_2[3];
  uStack_60 = param_4;
  uStack_58 = param_3;
  if (arg0 == 0) {
    pbStack_e8 = (byte *)0x4;
    uStack_f0 = 0;
  }
  else {
    pdb_14007ee60();
    uVar4 = 4;
    pbStack_e8 = pub_1406abab0(arg0,4);
    uStack_f0 = uVar1;
    if (pbStack_e8 == (byte *)0x0) goto LAB_140c68204;
  }
  if (uVar1 != 0) {
    pub_142e32760(pbStack_e8,uVar2,arg0);
  }
  uStack_7c = *(undefined4 *)(param_2 + 6);
  uStack_84 = param_2[5];
  uStack_c8 = *param_2;
  uStack_c0 = param_2[1];
  fVar5 = 0.0;
  if (0.0 <= *(float *)((longlong)param_2 + 0x34)) {
    fVar5 = *(float *)((longlong)param_2 + 0x34);
  }
  fStack_78 = _DAT_142e36f28;
  if (fVar5 <= _DAT_142e36f28) {
    fStack_78 = fVar5;
  }
  uStack_f8 = 0x8000000000000002;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0x4040000000000000;
  uStack_98 = 1;
  uStack_90 = 0x100;
  uStack_8c = (ulonglong)(uint)_DAT_142e36f28;
  uStack_74 = 0;
  uStack_72 = 0;
  uStack_e0 = uVar1;
  pdb_1409bba50(auStack_120,&uStack_f8,uStack_58,uStack_60,param_5);
  *(undefined8 *)pbStack_50 = auStack_120[0];
  *param_1 = 1;
  param_1[1] = pbStack_50;
  param_1[2] = 1;
  return param_1;
}

