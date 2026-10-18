// VA 0x140a082c0, PDB extent 642 bytes
// country_core::systems::ui::debug_visualize_volumes::debug_visualize_volumes::closure$5
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/debug_visualize_volumes.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::ui::debug_visualize_volumes::debug_visualize_volumes::closure$5
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/debug_visualize_volumes.rs
   Extent: 642 */

undefined8 *
pdb_140a082c0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  ulonglong arg0;
  undefined8 uVar6;
  undefined8 auStack_120 [2];
  longlong *plStack_110;
  longlong *plStack_108;
  undefined8 uStack_f8;
  ulonglong uStack_f0;
  byte *pbStack_e8;
  ulonglong uStack_e0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_98;
  undefined2 uStack_90;
  ulonglong uStack_8c;
  undefined8 uStack_84;
  undefined4 uStack_7c;
  undefined4 uStack_78;
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
    uVar6 = 0;
LAB_140a08334:
    pdb_142dc7e2a(uVar6,arg0);
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
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
    uVar6 = 4;
    pbStack_e8 = pub_1406abab0(arg0,4);
    uStack_f0 = uVar1;
    if (pbStack_e8 == (byte *)0x0) goto LAB_140a08334;
  }
  if (uVar1 != 0) {
    pub_142e32760(pbStack_e8,uVar2,arg0);
  }
  uStack_7c = *(undefined4 *)(param_2 + 6);
  uStack_84 = param_2[5];
  uStack_c8 = *param_2;
  uStack_c0 = param_2[1];
  uStack_f8 = 0x8000000000000002;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 2;
  uStack_98 = 1;
  uStack_90 = 0x100;
  uStack_8c = (ulonglong)_DAT_142e36f28;
  uStack_78 = 0x3f800000;
  uStack_74 = 0x100;
  uStack_72 = 0;
  uStack_e0 = uVar1;
  pdb_1409bba50(auStack_120,&uStack_f8,uStack_58,uStack_60,param_5);
  if (plStack_110 == (longlong *)0x0) {
    plStack_110 = plStack_108;
  }
  lVar3 = plStack_110[2];
  if ((ulonglong)(*plStack_110 - lVar3) < 0x18) {
    pdb_142d7f1b0(plStack_110,lVar3,0x18,1,1);
  }
  lVar4 = plStack_110[1];
  *(code **)(lVar4 + lVar3) = pdb_141608f40;
  *(undefined8 *)(lVar4 + 8 + lVar3) = auStack_120[0];
  *(undefined1 *)(lVar4 + 0x10 + lVar3) = 0;
  plStack_110[2] = lVar3 + 0x18;
  *(undefined8 *)pbStack_50 = auStack_120[0];
  *param_1 = 1;
  param_1[1] = pbStack_50;
  param_1[2] = 1;
  return param_1;
}

