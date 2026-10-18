// VA 0x1428808e0, PDB extent 552 bytes
// system_tree::ui_place_tree::ui_place_tree::closure$1
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/tree-tool/src/ui_place_tree.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_tree::ui_place_tree::ui_place_tree::closure$1
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/tree-tool/src/ui_place_tree.rs
   Extent: 552 */

undefined8 *
pdb_1428808e0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  float fVar1;
  undefined8 uVar2;
  code *pcVar3;
  float fVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 auStack_1b8 [18];
  float fStack_128;
  float fStack_124;
  undefined4 uStack_120;
  float fStack_11c;
  undefined8 uStack_118;
  byte *pbStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined8 auStack_90 [5];
  byte *pbStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pbStack_68 = pub_1406abab0(8,8);
  if (pbStack_68 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,8);
  }
  uVar2 = *param_2;
  fVar1 = *(float *)(param_2 + 1);
  fVar4 = *(float *)((longlong)param_2 + 0xc);
  auStack_1b8[0] = 0x8000000000000001;
  pdb_1409bb100(&fStack_128,auStack_1b8);
  pdb_1409bb0b0(auStack_1b8,&fStack_128,0);
  pdb_1409bba50(auStack_90,auStack_1b8,param_3,param_4,param_5);
  pdb_14007ee60();
  pbStack_110 = pub_1406abab0(0x10,1);
  uVar5 = _UNK_1435aa368;
  if (pbStack_110 != (byte *)0x0) {
    *(undefined8 *)pbStack_110 = _DAT_1435aa360;
    *(undefined8 *)(pbStack_110 + 8) = uVar5;
    uStack_118 = 0x10;
    uStack_108 = 0x10;
    auVar6._0_4_ = fVar4 * (fVar1 / _DAT_142e4bfe4) * _DAT_1435aa2b0;
    auVar6._4_4_ = fVar4 * (fVar1 / _DAT_142e4bfe4) * _UNK_1435aa2b4;
    auVar6._8_4_ = fVar4 * _UNK_1435aa2b8 * 0.0;
    auVar6._12_4_ = fVar4 * _UNK_1435aa2bc * 0.0;
    auVar6 = maxps(auVar6,_DAT_1435aa2c0);
    fStack_11c = auVar6._4_4_;
    uStack_100 = 0;
    fStack_128 = (float)uVar2 + fStack_11c * _DAT_142f61040 * _DAT_142e36f60;
    fStack_124 = (float)((ulonglong)uVar2 >> 0x20) + fStack_11c * _UNK_142f61044 * _UNK_142e36f64;
    uStack_120 = auVar6._0_4_;
    pdb_142b22d30(auStack_90,&fStack_128,&UNK_1435aa370);
    *(undefined8 *)pbStack_68 = auStack_90[0];
    *param_1 = 1;
    param_1[1] = pbStack_68;
    param_1[2] = 1;
    return param_1;
  }
  pdb_142dc7e2a(1,0x10);
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}

