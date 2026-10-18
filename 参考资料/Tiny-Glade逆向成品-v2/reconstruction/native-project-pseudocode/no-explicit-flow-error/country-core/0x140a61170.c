// VA 0x140a61170, PDB extent 707 bytes
// country_core::resources::stairs::stairs_state::StairsState::add_edge
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::stairs::stairs_state::StairsState::add_edge
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_state.rs
   Extent: 707 */

void pdb_140a61170(undefined8 *param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  byte *pbVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uStack_78;
  uint uStack_74;
  ulonglong uStack_70;
  ulonglong uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  byte *pbStack_50;
  undefined8 uStack_48;
  
  if (param_2 == param_3) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14303f048,0x18,&UNK_14303f0a0);
  }
  uVar8 = param_3;
  if (param_2 < param_3) {
    uVar8 = param_2;
  }
  uVar9 = param_3;
  if (param_3 < param_2) {
    uVar9 = param_2;
  }
  uStack_78 = uVar8;
  uStack_74 = uVar9;
  lVar3 = pdb_140936ae0(param_1 + 0xe,&uStack_78);
  if (lVar3 == 1) {
    return;
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  uStack_78 = uVar8;
  uStack_74 = uVar9;
  uVar4 = pdb_1400af680(param_1 + 0x15,&uStack_78);
  pdb_1417c7270(param_1 + 0xe,uVar4,uVar8,uVar9);
  if ((uVar4 & 1) != 0) goto LAB_140a613ad;
  uStack_58 = CONCAT44(uStack_58._4_4_,param_2);
  uVar5 = pdb_1400aede0(param_1 + 0xc,&uStack_58);
  pdb_1417c9a50(&uStack_78,param_1 + 5,uVar5,param_2);
  uVar2 = uStack_60;
  uVar10 = uStack_68;
  uVar4 = uStack_70;
  if (uStack_78 != 1) {
    if (*(ulonglong *)(uStack_70 + 0x10) <= uStack_68) goto LAB_140a61414;
    plVar7 = (longlong *)(uStack_68 * 0x28 + *(longlong *)(uStack_70 + 8));
    lVar3 = plVar7[2];
    if (lVar3 == *plVar7) {
LAB_140a612ba:
      pdb_142d8d7f0(plVar7);
    }
LAB_140a612c2:
    lVar1 = plVar7[1];
    *(uint *)(lVar1 + lVar3 * 8) = param_3;
    *(undefined1 *)(lVar1 + 4 + lVar3 * 8) = 0;
    plVar7[2] = lVar3 + 1;
    uStack_58 = CONCAT44(uStack_58._4_4_,param_3);
    uVar5 = pdb_1400aede0(param_1 + 0xc,&uStack_58);
    pdb_1417c9a50(&uStack_78,param_1 + 5,uVar5,param_3);
    if (uStack_78 == 1) {
      pdb_14007ee60();
      pbVar6 = pub_1406abab0(8,4);
      uVar10 = uStack_70;
      if (pbVar6 == (byte *)0x0) goto LAB_140a61405;
      uStack_58 = 1;
      uStack_48 = 0;
      pbStack_50 = pbVar6;
      plVar7 = (longlong *)pdb_1417c7df0(uStack_70,uStack_68,uStack_60,&uStack_58);
      lVar3 = plVar7[2];
      if (lVar3 == *plVar7) goto LAB_140a6138e;
    }
    else {
      if (*(ulonglong *)(uStack_70 + 0x10) <= uStack_68) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uStack_68,*(ulonglong *)(uStack_70 + 0x10),&UNK_143337a68);
      }
      plVar7 = (longlong *)(uStack_68 * 0x28 + *(longlong *)(uStack_70 + 8));
      lVar3 = plVar7[2];
      if (lVar3 == *plVar7) {
LAB_140a6138e:
        pdb_142d8d7f0(plVar7);
      }
    }
    lVar1 = plVar7[1];
    *(uint *)(lVar1 + lVar3 * 8) = param_2;
    *(undefined1 *)(lVar1 + 4 + lVar3 * 8) = 1;
    plVar7[2] = lVar3 + 1;
LAB_140a613ad:
    param_1 = param_1 + 0x29;
    pdb_1403afce0(param_1,uVar8,uVar9);
    pdb_1403afce0(param_1,param_2,param_2);
    pdb_1403afce0(param_1,param_3,param_3);
    return;
  }
  pdb_14007ee60();
  pbVar6 = pub_1406abab0(8,4);
  if (pbVar6 != (byte *)0x0) {
    uStack_58 = 1;
    uStack_48 = 0;
    pbStack_50 = pbVar6;
    plVar7 = (longlong *)pdb_1417c7df0(uVar4,uVar10,uVar2,&uStack_58);
    lVar3 = plVar7[2];
    if (lVar3 == *plVar7) goto LAB_140a612ba;
    goto LAB_140a612c2;
  }
LAB_140a61405:
  pdb_142dc7e2a(4,8);
  uStack_68 = uVar10;
LAB_140a61414:
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(uStack_68);
}

