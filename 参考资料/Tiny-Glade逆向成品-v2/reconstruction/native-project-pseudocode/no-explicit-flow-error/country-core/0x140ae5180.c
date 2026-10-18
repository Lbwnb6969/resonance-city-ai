// VA 0x140ae5180, PDB extent 1128 bytes
// country_core::resources::history::History::add
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::history::History::add
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/mod.rs
   Extent: 1128 */

void pdb_140ae5180(longlong param_1,int *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  undefined8 uStack_78;
  undefined8 uStack_70;
  longlong lStack_68;
  longlong *plStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lVar9 = *(longlong *)(param_1 + 0x30);
  if (!SBORROW8(0,lVar9)) {
    plVar12 = (longlong *)(param_1 + 0x30);
    plStack_58 = plVar12;
    if ((*(longlong *)(param_1 + 0x40) == 0) &&
       (*(int *)(param_1 + 0x68) - *(int *)(param_1 + 0x10) < -1)) {
      uStack_49 = 1;
      pdb_140ae3d70(param_1);
      uStack_78 = (int *)0x0;
      uStack_70 = (code *)0x8;
      lStack_68 = 0;
      uVar7 = pdb_140c7d380();
      pdb_14007ee60();
      pbVar8 = pub_1406abab0(0x60,8);
      lVar9 = lStack_68;
      if (pbVar8 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x60);
      }
      pbVar8[0x40] = 0;
      pbVar8[0x41] = 0;
      pbVar8[0x42] = 0;
      pbVar8[0x43] = 0;
      pbVar8[0x44] = 0;
      pbVar8[0x45] = 0;
      pbVar8[0x46] = 0;
      pbVar8[0x47] = 0;
      pbVar8[0x48] = 0;
      pbVar8[0x49] = 0;
      pbVar8[0x4a] = 0;
      pbVar8[0x4b] = 0;
      pbVar8[0x4c] = 0;
      pbVar8[0x4d] = 0;
      pbVar8[0x4e] = 0;
      pbVar8[0x4f] = 0;
      pbVar8[0] = 1;
      pbVar8[1] = 0;
      pbVar8[2] = 0;
      pbVar8[3] = 0;
      pbVar8[4] = 0;
      pbVar8[5] = 0;
      pbVar8[6] = 0;
      pbVar8[7] = 0;
      pbVar8[8] = 1;
      pbVar8[9] = 0;
      pbVar8[10] = 0;
      pbVar8[0xb] = 0;
      pbVar8[0xc] = 0;
      pbVar8[0xd] = 0;
      pbVar8[0xe] = 0;
      pbVar8[0xf] = 0;
      pbVar8[0x10] = 0;
      pbVar8[0x11] = 0;
      pbVar8[0x12] = 0;
      pbVar8[0x13] = 0;
      pbVar8[0x14] = 0;
      pbVar8[0x15] = 0;
      pbVar8[0x16] = 0;
      pbVar8[0x17] = 0;
      pbVar8[0x20] = 0;
      pbVar8[0x21] = 0;
      pbVar8[0x22] = 0;
      pbVar8[0x23] = 0;
      pbVar8[0x24] = 0;
      pbVar8[0x25] = 0;
      pbVar8[0x26] = 0;
      pbVar8[0x27] = 0;
      pbVar8[0x30] = 0;
      pbVar8[0x31] = 0;
      pbVar8[0x32] = 0;
      pbVar8[0x33] = 0;
      pbVar8[0x34] = 0;
      pbVar8[0x35] = 0;
      pbVar8[0x36] = 0;
      pbVar8[0x37] = 0;
      pbVar8[0x38] = 4;
      pbVar8[0x39] = 0;
      pbVar8[0x3a] = 0;
      pbVar8[0x3b] = 0;
      pbVar8[0x3c] = 0;
      pbVar8[0x3d] = 0;
      pbVar8[0x3e] = 0;
      pbVar8[0x3f] = 0;
      pbVar8[0x50] = 4;
      pbVar8[0x51] = 0;
      pbVar8[0x52] = 0;
      pbVar8[0x53] = 0;
      pbVar8[0x54] = 0;
      pbVar8[0x55] = 0;
      pbVar8[0x56] = 0;
      pbVar8[0x57] = 0;
      pbVar8[0x58] = 0;
      pbVar8[0x59] = 0;
      pbVar8[0x5a] = 0;
      pbVar8[0x5b] = 0;
      pbVar8[0x5c] = 0;
      pbVar8[0x5d] = 0;
      pbVar8[0x5e] = 0;
      pbVar8[0x5f] = 0;
      uVar3 = (undefined4)uStack_78;
      uVar4 = uStack_78._4_4_;
      uVar5 = (undefined4)uStack_70;
      uVar6 = uStack_70._4_4_;
      if (!SBORROW8(0,*plVar12)) {
        pdb_140990a30(plStack_58);
      }
      plStack_58[2] = lVar9;
      *(undefined4 *)plStack_58 = uVar3;
      *(undefined4 *)((longlong)plStack_58 + 4) = uVar4;
      *(undefined4 *)(plStack_58 + 1) = uVar5;
      *(undefined4 *)((longlong)plStack_58 + 0xc) = uVar6;
      *(undefined8 *)(param_1 + 0x48) = uVar7;
      *(byte **)(param_1 + 0x50) = pbVar8;
      lVar9 = *(longlong *)(param_1 + 0x30);
      if (SBORROW8(0,lVar9)) goto LAB_140ae5456;
    }
    if ((*param_2 == 7) && (*(longlong *)(param_2 + 4) != 0)) {
      plVar12 = *(longlong **)(param_2 + 2);
      plVar10 = plVar12 + *(longlong *)(param_2 + 4) * 2;
      do {
        if (plVar12[1] != 0) {
          lVar11 = 0;
          do {
            lVar2 = *(longlong *)(*plVar12 + lVar11);
            uVar13 = *(longlong *)(lVar2 + 0x10) >> 0x3f &
                     *(longlong *)(lVar2 + 0x10) + 0x8000000000000001U;
            if (uVar13 == 0) {
              if ((*(int *)(lVar2 + 0xf8) != 2) &&
                 (*(float *)(lVar2 + 0x100) < *(float *)(lVar2 + 0xfc) ||
                  *(float *)(lVar2 + 0x100) == *(float *)(lVar2 + 0xfc))) {
                uStack_49 = 1;
                    /* WARNING: Subroutine does not return */
                pdb_142dc83d0(&UNK_14304f550,0xab,param_3);
              }
            }
            else if (uVar13 == 1) {
              if (SBORROW8(0,*(longlong *)(lVar2 + 0x18))) {
                uStack_49 = 1;
                    /* WARNING: Subroutine does not return */
                pdb_142dc83d0(&UNK_14304f5a5,0x67,param_3);
              }
            }
            else if ((uVar13 == 2) && (SBORROW8(0,*(longlong *)(lVar2 + 0x18)))) {
              uStack_49 = 1;
                    /* WARNING: Subroutine does not return */
              pdb_142dc83d0(&UNK_14304f5d8,0x67,param_3);
            }
            lVar11 = lVar11 + 8;
          } while (plVar12[1] << 3 != lVar11);
        }
        plVar12 = plVar12 + 2;
      } while (plVar12 != plVar10);
    }
    lStack_68 = *(longlong *)(param_2 + 4);
    uStack_78 = *(int **)param_2;
    uStack_70 = *(code **)(param_2 + 2);
    lVar11 = *(longlong *)(param_1 + 0x40);
    if (lVar11 == lVar9) {
      pdb_142d7e830(plStack_58);
    }
    lVar9 = *(longlong *)(param_1 + 0x38);
    *(longlong *)(lVar9 + 0x10 + lVar11 * 0x18) = lStack_68;
    puVar1 = (undefined8 *)(lVar9 + lVar11 * 0x18);
    *puVar1 = uStack_78;
    puVar1[1] = uStack_70;
    *(longlong *)(param_1 + 0x40) = lVar11 + 1;
    return;
  }
LAB_140ae5456:
  uStack_70 = pdb_140ae68b0;
  uStack_49 = 1;
  uStack_78 = param_2;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14304f60b,&uStack_78,param_3);
}

