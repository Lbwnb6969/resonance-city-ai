// VA 0x140ab3810, PDB extent 740 bytes
// country_core::utils::debug_viz::impl$5::emit::closure$1<country_core::utils::debug_viz::impl$5::show_for::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/debug_viz.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::utils::debug_viz::impl$5::emit::closure$1<country_core::utils::debug_viz::impl$5::show_for::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/debug_viz.rs
   Extent: 740 */

undefined8 *
pdb_140ab3810(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulonglong arg0;
  ulonglong uVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  undefined8 uVar8;
  undefined8 auStack_130 [5];
  ulonglong uStack_108;
  byte *pbStack_100;
  ulonglong uStack_f8;
  ulonglong uStack_f0;
  byte *pbStack_e8;
  ulonglong uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c0;
  uint uStack_b8;
  float fStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined2 uStack_a0;
  ulonglong uStack_9c;
  undefined8 uStack_94;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined2 uStack_84;
  byte bStack_82;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  ulonglong uStack_58;
  byte *pbStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar1 = *(ulonglong *)(param_2 + 0x10);
  uVar2 = uVar1 * 0xc;
  if (uVar1 < 0xaaaaaaaaaaaaaab) goto LAB_140ab3863;
  puVar6 = (undefined8 *)0x0;
  do {
    param_1 = puVar6;
    param_2 = uVar2;
    pdb_142dc7e2a();
LAB_140ab3863:
    uVar8 = *(undefined8 *)(param_2 + 8);
    uStack_70 = param_4;
    uStack_68 = param_3;
    if (uVar2 == 0) {
      pbStack_50 = (byte *)0x4;
      uStack_58 = 0;
      break;
    }
    pdb_14007ee60();
    pbStack_50 = pub_1406abab0(uVar2,4);
    puVar6 = (undefined8 *)0x4;
    uStack_58 = uVar1;
  } while (pbStack_50 == (byte *)0x0);
  puStack_60 = param_1;
  if (uVar1 != 0) {
    pub_142e32760(pbStack_50,uVar8,uVar2);
  }
  uVar2 = *(ulonglong *)(param_2 + 0x28);
  arg0 = uVar2 * 0xc;
  if (uVar2 < 0xaaaaaaaaaaaaaab) {
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    if (arg0 == 0) {
      pbVar7 = (byte *)0x4;
      uVar5 = 0;
    }
    else {
      pdb_14007ee60();
      uVar8 = 4;
      pbVar7 = pub_1406abab0(arg0,4);
      uVar5 = uVar2;
      if (pbVar7 == (byte *)0x0) goto LAB_140ab38e2;
    }
    if (uVar2 != 0) {
      pub_142e32760(pbVar7,uVar3,arg0);
    }
    uStack_8c = 0;
    uStack_94 = 0;
    bStack_82 = *(byte *)(param_2 + 0x38) ^ 1;
    uStack_ac = *(undefined4 *)(param_2 + 0x34);
    fStack_b4 = *(float *)(param_2 + 0x30) * _DAT_142e37adc;
    uStack_108 = uStack_58;
    pbStack_100 = pbStack_50;
    uStack_d8 = _DAT_142e4e650;
    uStack_d4 = _UNK_142e4e654;
    uStack_d0 = _UNK_142e4e658;
    uStack_cc = _UNK_142e4e65c;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_b8 = (uint)*(byte *)(param_2 + 0x39);
    uStack_b0 = 0;
    uStack_a8 = 1;
    uStack_a0 = 0x100;
    uStack_9c = (ulonglong)_DAT_142e36f28;
    uStack_88 = 0x3f800000;
    uStack_84 = 0;
    uStack_f8 = uVar1;
    uStack_f0 = uVar5;
    pbStack_e8 = pbVar7;
    uStack_e0 = uVar2;
    pdb_1409bba50(auStack_130,&uStack_108,uStack_68,uStack_70,param_5);
    pdb_14007ee60();
    pbVar7 = pub_1406abab0(8,8);
    if (pbVar7 != (byte *)0x0) {
      *(undefined8 *)pbVar7 = auStack_130[0];
      *puStack_60 = 1;
      puStack_60[1] = pbVar7;
      puStack_60[2] = 1;
      return puStack_60;
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,8);
  }
  uVar8 = 0;
LAB_140ab38e2:
  pdb_142dc7e2a(uVar8,arg0);
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}

