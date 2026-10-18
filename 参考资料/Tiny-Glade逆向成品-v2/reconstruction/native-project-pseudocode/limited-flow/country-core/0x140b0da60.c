// VA 0x140b0da60, PDB extent 1092 bytes
// country_core::resources::walls::inner_walls::InnerWalls::load_state
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/inner_walls.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::inner_walls::InnerWalls::load_state
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/inner_walls.rs
   Extent: 1092 */

void pdb_140b0da60(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  longlong lVar13;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  longlong lStack_58;
  longlong *plStack_50;
  longlong *plStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  plStack_48 = param_2;
  if (param_1[3] != 0) {
    uStack_40 = (undefined *)CONCAT17(1,(undefined7)uStack_40);
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1430543d6,0x27,&UNK_143054438);
  }
  if (param_1[0xf] != 0) {
    uStack_40 = (undefined *)CONCAT17(1,(undefined7)uStack_40);
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143054450,0x28,&UNK_143054478);
  }
  if (param_1[0x15] != 0) {
    uStack_40 = (undefined *)CONCAT17(1,(undefined7)uStack_40);
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143054490,0x28,&UNK_1430544b8);
  }
  lVar1 = param_2[2];
  if (lVar1 == 0) {
    if (*param_2 == 0) {
      return;
    }
    lVar1 = param_2[1];
    uStack_40 = &UNK_140f3c37e;
    uVar8 = GetProcessHeap(lVar1,*param_2 * 0x78);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    HeapFree(uVar8,0,lVar1);
    return;
  }
  puVar2 = (ulonglong *)param_2[1];
  uStack_40 = (undefined *)CONCAT17(1,(undefined7)uStack_40);
  plVar6 = (longlong *)pdb_140f3bda0();
  if ((char)plVar6[2] == '\x01') {
    lStack_58 = *plVar6;
    param_2 = (longlong *)plVar6[1];
  }
  else {
    uStack_40 = (undefined *)CONCAT17(1,(undefined7)uStack_40);
    lStack_58 = pdb_140f4fd10();
    *plVar6 = lStack_58;
    plVar6[1] = (longlong)param_2;
    *(undefined1 *)(plVar6 + 2) = 1;
  }
  *plVar6 = lStack_58 + 1;
  uStack_68 = _DAT_143053ed0;
  uStack_60 = _UNK_143053ed8;
  uStack_78 = _DAT_143053ec0;
  uStack_74 = _UNK_143053ec4;
  uStack_70 = _UNK_143053ec8;
  uStack_6c = _UNK_143053ecc;
  plStack_50 = param_2;
  pdb_142d974a0(&uStack_78,lVar1,&lStack_58,1);
  lVar13 = 0;
  do {
    pdb_1403b05d0(&uStack_78,puVar2[lVar13 * 0xf]);
    lVar13 = lVar13 + 1;
  } while (lVar13 != lVar1);
  uStack_b8._0_4_ = uStack_78;
  uStack_b8._4_4_ = uStack_74;
  uStack_b0._0_4_ = uStack_70;
  uStack_b0._4_4_ = uStack_6c;
  uStack_98 = lStack_58;
  uStack_90 = plStack_50;
  uStack_a8 = uStack_68;
  uStack_a0 = (ulonglong *)uStack_60;
  lVar13 = param_1[7];
  if (lVar13 != 0) {
    uVar7 = lVar13 * 8 + 0x17U & 0xfffffffffffffff0;
    uVar9 = lVar13 + uVar7 + 0x11;
    if (uVar9 != 0) {
      pub_1406abac0((byte *)(param_1[6] - uVar7),uVar9,0x10);
    }
  }
  *(undefined4 *)(param_1 + 10) = (undefined4)uStack_98;
  *(undefined4 *)((longlong)param_1 + 0x54) = uStack_98._4_4_;
  *(undefined4 *)(param_1 + 0xb) = (undefined4)uStack_90;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uStack_90._4_4_;
  *(undefined4 *)(param_1 + 8) = (undefined4)uStack_a8;
  *(undefined4 *)((longlong)param_1 + 0x44) = uStack_a8._4_4_;
  *(undefined4 *)(param_1 + 9) = (undefined4)uStack_a0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uStack_a0._4_4_;
  *(undefined4 *)(param_1 + 6) = (undefined4)uStack_b8;
  *(undefined4 *)((longlong)param_1 + 0x34) = uStack_b8._4_4_;
  *(undefined4 *)(param_1 + 7) = (undefined4)uStack_b0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_b0._4_4_;
  uVar7 = *puVar2;
  if (lVar1 != 1) {
    uVar10 = (lVar1 * 0x78 - 0x78U >> 3) * -0x1111111111111111;
    uVar9 = (ulonglong)((uint)uVar10 & 3);
    if (uVar10 - 1 < 3) {
      uVar11 = 0;
    }
    else {
      uVar11 = 0;
      puVar4 = puVar2;
      do {
        puVar12 = puVar4 + 0x3c;
        uVar3 = puVar4[0xf];
        if (uVar3 < uVar7) {
          uVar5 = puVar4[0x1e];
          if (uVar7 <= puVar4[0x1e]) goto LAB_140b0dc7f;
LAB_140b0dc58:
          uVar3 = puVar4[0x2d];
          if (uVar7 <= puVar4[0x2d]) goto LAB_140b0dc8b;
LAB_140b0dc61:
          uVar3 = *puVar12;
          if (uVar7 <= *puVar12) {
LAB_140b0dc96:
            uVar7 = uVar3;
          }
        }
        else {
          uVar7 = uVar3;
          uVar5 = puVar4[0x1e];
          if (puVar4[0x1e] < uVar3) goto LAB_140b0dc58;
LAB_140b0dc7f:
          uVar7 = uVar5;
          uVar3 = puVar4[0x2d];
          if (puVar4[0x2d] < uVar7) goto LAB_140b0dc61;
LAB_140b0dc8b:
          uVar7 = uVar3;
          uVar3 = *puVar12;
          if (uVar7 <= *puVar12) goto LAB_140b0dc96;
        }
        uVar11 = uVar11 + 4;
        puVar4 = puVar12;
      } while ((uVar10 & 0x3fffffffffffffc) != uVar11);
      if (uVar9 == 0) goto LAB_140b0dcd7;
    }
    lVar13 = 0;
    uVar10 = uVar7;
    do {
      uVar7 = *(ulonglong *)((longlong)puVar2 + lVar13 + uVar11 * 0x78 + 0x78);
      if (uVar7 < uVar10) {
        uVar7 = uVar10;
      }
      lVar13 = lVar13 + 0x78;
      uVar10 = uVar7;
    } while (uVar9 * 0x78 - lVar13 != 0);
  }
LAB_140b0dcd7:
  param_1[0x18] = uVar7;
  uStack_a8 = *plStack_48;
  uStack_a0 = puVar2 + lVar1 * 0xf;
  uStack_40 = (undefined *)((ulonglong)uStack_40 & 0xffffffffffffff);
  uStack_b8 = puVar2;
  uStack_b0 = puVar2;
  pdb_141a325e0(&uStack_78,&uStack_b8);
  puStack_80 = param_1;
  pdb_140266c00(param_1,param_1 + 4,0x78,0x10);
  puStack_80[4] = lStack_58;
  puStack_80[5] = plStack_50;
  puStack_80[2] = uStack_68;
  puStack_80[3] = uStack_60;
  *puStack_80 = CONCAT44(uStack_74,uStack_78);
  puStack_80[1] = CONCAT44(uStack_6c,uStack_70);
  return;
}

