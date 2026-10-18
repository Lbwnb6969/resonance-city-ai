// VA 0x1417473a0, PDB extent 208 bytes
// turbosloth::asset::BuildTracker::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: turbosloth::asset::BuildTracker::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 208 */

longlong * pdb_1417473a0(longlong *param_1)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined6 uStack_66;
  undefined2 uStack_60;
  undefined6 uStack_5e;
  undefined2 uStack_58;
  undefined6 uStack_56;
  undefined2 uStack_50;
  undefined6 uStack_4e;
  undefined2 uStack_48;
  uint6 uStack_3e;
  
  lVar9 = _UNK_143337b88;
  lVar8 = _DAT_143337b80;
  uVar7 = _UNK_143337b7c;
  uVar6 = _UNK_143337b78;
  uVar5 = _UNK_143337b74;
  uVar4 = _DAT_143337b70;
  plVar11 = (longlong *)pdb_14008d710(0);
  if (plVar11 != (longlong *)0x0) {
    lVar2 = *plVar11;
    lVar3 = plVar11[1];
    *plVar11 = *plVar11 + 1;
    lVar10 = _UNK_1435164b8;
    uStack_50 = (undefined2)_DAT_1435164b0;
    uStack_4e = (undefined6)((ulonglong)_DAT_1435164b0 >> 0x10);
    uStack_48 = (undefined2)_UNK_1435164b8;
    uStack_60 = (undefined2)_DAT_1435164a0;
    uStack_5e = (undefined6)((ulonglong)_DAT_1435164a0 >> 0x10);
    uStack_58 = (undefined2)_UNK_1435164a8;
    uStack_56 = (undefined6)((ulonglong)_UNK_1435164a8 >> 0x10);
    *param_1 = (ulonglong)uStack_3e << 0x10;
    param_1[1] = CONCAT44(uVar5,uVar4);
    param_1[2] = CONCAT44(uVar7,uVar6);
    param_1[3] = lVar8;
    param_1[4] = lVar9;
    *(undefined2 *)(param_1 + 5) = 0;
    param_1[9] = lVar10;
    *(ulonglong *)((longlong)param_1 + 0x3a) = CONCAT26(uStack_50,uStack_56);
    *(ulonglong *)((longlong)param_1 + 0x42) = CONCAT26(uStack_48,uStack_4e);
    *(ulonglong *)((longlong)param_1 + 0x2a) = CONCAT26(uStack_60,uStack_66);
    *(ulonglong *)((longlong)param_1 + 0x32) = CONCAT26(uStack_58,uStack_5e);
    param_1[10] = lVar2;
    param_1[0xb] = lVar3;
    return param_1;
  }
  pdb_142dc7890(&UNK_143516530);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

