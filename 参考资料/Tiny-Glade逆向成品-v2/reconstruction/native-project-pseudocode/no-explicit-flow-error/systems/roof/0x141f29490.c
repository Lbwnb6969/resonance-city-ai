// VA 0x141f29490, PDB extent 639 bytes
// system_roof::ui_edit_roof_ridge_length::do_ui_edit_roof_ridge_length::closure$1
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/ui_edit_roof_ridge_length.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_roof::ui_edit_roof_ridge_length::do_ui_edit_roof_ridge_length::closure$1
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/ui_edit_roof_ridge_length.rs
   Extent: 639 */

undefined8 *
pdb_141f29490(undefined8 *param_1,float *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_178 [8];
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  byte *pbStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_58;
  float fStack_50;
  undefined4 uStack_4c;
  byte *pbStack_48;
  undefined8 uStack_40;
  float fStack_38;
  undefined1 uStack_31;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pbStack_48 = pub_1406abab0(8,8);
  if (pbStack_48 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,8);
  }
  pdb_14007ee60();
  pbStack_d8 = pub_1406abab0(0x1e,1);
  uVar5 = _UNK_14342a906;
  if (pbStack_d8 != (byte *)0x0) {
    *(ulonglong *)(pbStack_d8 + 0xe) = CONCAT62(_UNK_14342a900,_DAT_14342a8fe);
    *(undefined8 *)(pbStack_d8 + 0x16) = uVar5;
    uVar4 = _UNK_14342a8f8;
    uVar3 = _UNK_14342a8f4;
    uVar2 = CONCAT22(_DAT_14342a8fe,_UNK_14342a8fc);
    *(undefined4 *)pbStack_d8 = _DAT_14342a8f0;
    *(undefined4 *)(pbStack_d8 + 4) = uVar3;
    *(undefined4 *)(pbStack_d8 + 8) = uVar4;
    *(undefined4 *)(pbStack_d8 + 0xc) = uVar2;
    uStack_e0 = 0x1e;
    uStack_d0 = 0x1e;
    uStack_e8 = 0x8000000000000000;
    pdb_1409bb100(auStack_178,&uStack_e8);
    pdb_1409bd940(&uStack_e8,auStack_178,*param_2 + *param_2);
    pdb_1409bb0b0(auStack_178,&uStack_e8,0);
    fStack_38 = param_2[6];
    uStack_40 = *(undefined8 *)(param_2 + 4);
    fStack_50 = fStack_38 * _DAT_142e3787c + param_2[3];
    uStack_58 = CONCAT44((float)((ulonglong)uStack_40 >> 0x20) * _UNK_1430151c4 +
                         (float)((ulonglong)*(undefined8 *)(param_2 + 1) >> 0x20),
                         (float)uStack_40 * _DAT_1430151c0 + (float)*(undefined8 *)(param_2 + 1));
    pdb_1409bd9a0(&uStack_e8,auStack_178,&uStack_58);
    uStack_31 = 1;
    pdb_140de8fd0(auStack_178,&uStack_40);
    fStack_50 = (float)uStack_170;
    uStack_4c = uStack_16c;
    uStack_31 = 0;
    pdb_1409bd9d0(auStack_178,&uStack_e8,&uStack_58);
    pdb_1409bba50(&uStack_e8,auStack_178,param_3,param_4,param_5);
    *(undefined8 *)pbStack_48 = uStack_e8;
    *param_1 = 1;
    param_1[1] = pbStack_48;
    param_1[2] = 1;
    return param_1;
  }
  pdb_142dc7e2a(1,0x1e);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

