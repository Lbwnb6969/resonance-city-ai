// VA 0x140de8290, PDB extent 296 bytes
// utils::random_splits
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::random_splits
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/lib.rs
   Extent: 296 */

ulonglong *
pdb_140de8290(ulonglong *param_1,ulonglong param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  ulonglong arg0;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  ulonglong uStack_68;
  byte *pbStack_60;
  ulonglong uStack_58;
  undefined8 uStack_50;
  
  uStack_50 = 0xfffffffffffffffe;
  if (1 < param_2) {
    arg0 = param_2 * 4;
    uVar1 = param_4;
    uVar3 = param_3;
    if (arg0 < 0x7ffffffffffffffd && param_2 >> 0x3e == 0) goto LAB_140de82f1;
    uVar2 = 0;
    do {
      pdb_142dc7e2a(uVar2,arg0);
      uVar1 = param_4;
      uVar3 = param_3;
LAB_140de82f1:
      param_4 = uVar1;
      param_3 = uVar3;
      pdb_14007ee60();
      uVar2 = 4;
      pbStack_60 = pub_1406abab0(arg0,4);
    } while (pbStack_60 == (byte *)0x0);
    uStack_58 = 0;
    uStack_68 = param_2;
    pdb_140de8bb0(param_2,uVar3,uVar1,&uStack_68);
    param_1[2] = uStack_58;
    *param_1 = uStack_68;
    param_1[1] = (ulonglong)pbStack_60;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_1431feca4,0x1d,param_5);
}

