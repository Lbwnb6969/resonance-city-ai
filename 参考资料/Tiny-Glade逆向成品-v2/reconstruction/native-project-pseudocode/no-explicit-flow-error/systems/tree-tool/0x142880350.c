// VA 0x142880350, PDB extent 1409 bytes
// system_tree::ui_place_tree::ui_place_tree
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/tree-tool/src/ui_place_tree.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_tree::ui_place_tree::ui_place_tree
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/tree-tool/src/ui_place_tree.rs
   Extent: 1409 */

void pdb_142880350(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,longlong *param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 *param_9,undefined8 *param_10,longlong *param_11,undefined8 *param_12)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  char cVar11;
  byte *pbVar12;
  undefined *puVar13;
  undefined4 uVar14;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  longlong lStack_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 uStack_278;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  byte *pbStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  longlong lStack_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  int iStack_158;
  int aiStack_d8 [4];
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined4 *puStack_a8;
  undefined4 uStack_a0;
  float fStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  byte *pbStack_90;
  undefined1 uStack_81;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  pbStack_90 = (byte *)*param_12;
  lVar3 = param_12[4];
  puVar4 = (undefined4 *)param_12[6];
  uStack_94 = *(undefined4 *)((longlong)param_12 + 0x3c);
  lVar5 = param_12[8];
  puVar6 = (undefined4 *)param_12[10];
  uVar2 = *(undefined4 *)((longlong)param_12 + 0x5c);
  plVar7 = (longlong *)*param_1;
  lStack_178 = plVar7[2];
  uStack_188 = (undefined8 *)*plVar7;
  uStack_180 = (undefined4)plVar7[1];
  uStack_17c = *(undefined4 *)((longlong)plVar7 + 0xc);
  pdb_140a3b030(&uStack_298,*param_2,&uStack_188);
  if (((char)uStack_298 == '\f') && (*_DAT_143ca4500 == '\0')) {
    uVar8 = *param_3;
    uStack_294 = 0x7f7fffff;
    uStack_298 = CONCAT31(uStack_298._1_3_,5);
    uStack_1e8 = 0;
    puStack_c0 = param_4;
    puStack_a8 = puVar4;
    pdb_140c9dcb0(&uStack_188,&uStack_298,&uStack_1e8);
    pdb_140c9dbe0(&uStack_298,&uStack_188,0);
    uStack_81 = 1;
    pdb_140c9dee0(&uStack_1e8);
    uStack_81 = 0;
    pdb_140c9dd20(&uStack_188,&uStack_298,&uStack_1e8);
    puVar13 = &UNK_1435aa318;
    uStack_b8 = pdb_142b23f50(uVar8,&UNK_1435aa318,0xb,&uStack_188);
    puStack_b0 = puVar13;
    pdb_1409edc30(&uStack_188,*param_7,*param_8);
    if (iStack_158 != 2) {
      lStack_288 = lStack_178;
      uStack_298 = (undefined4)uStack_188;
      uStack_294 = uStack_188._4_4_;
      uStack_290 = uStack_180;
      uStack_28c = uStack_17c;
      pdb_140b4d8a0(aiStack_d8,&uStack_298);
      if (aiStack_d8[0] != 0) {
        return;
      }
    }
    puVar4 = puStack_a8;
    uVar8 = *param_5;
    pdb_140a8e090(&uStack_188,uVar8);
    uVar14 = (undefined4)uStack_188;
    cVar11 = pdb_140a84de0(pbStack_90,(undefined4)uStack_188,uStack_180);
    if (cVar11 == '\0') {
      *puVar4 = uStack_94;
      lVar10 = *(longlong *)(lVar3 + 0x30);
      uVar8 = *(undefined8 *)(lVar3 + 0x40);
      if (lVar10 == *(longlong *)(lVar3 + 0x20)) {
        pdb_142d7e8a0(lVar3 + 0x20);
      }
      *(undefined8 *)(*(longlong *)(lVar3 + 0x28) + lVar10 * 8) = uVar8;
      *(longlong *)(lVar3 + 0x30) = lVar10 + 1;
      *(longlong *)(lVar3 + 0x40) = *(longlong *)(lVar3 + 0x40) + 1;
      cVar11 = pdb_1408ffa90(&uStack_b8);
      if (cVar11 != '\0') {
        *puVar6 = uVar2;
        lVar3 = *(longlong *)(lVar5 + 0x30);
        uVar8 = *(undefined8 *)(lVar5 + 0x40);
        if (lVar3 == *(longlong *)(lVar5 + 0x20)) {
          pdb_142d7e8a0(lVar5 + 0x20);
        }
        *(undefined8 *)(*(longlong *)(lVar5 + 0x28) + lVar3 * 8) = uVar8;
        *(longlong *)(lVar5 + 0x30) = lVar3 + 1;
        *(longlong *)(lVar5 + 0x40) = *(longlong *)(lVar5 + 0x40) + 1;
      }
    }
    else {
      cVar11 = pdb_1408ffaf0(&uStack_b8);
      if (cVar11 != '\0') {
        uVar1 = *(undefined8 *)*param_9;
        uStack_c8 = uVar1;
        pdb_140a6ad50(*param_10);
        uVar2 = *(undefined4 *)(*param_11 + 0xe8);
        uVar9 = *puStack_c0;
        uStack_188 = &uStack_c8;
        uStack_180 = 0x414d1a30;
        uStack_17c = 1;
        pdb_140f60760(&uStack_1e8,&UNK_1435aa323,&uStack_188);
        pdb_14007ee60();
        pbVar12 = pub_1406abab0(0x20,8);
        pbStack_90 = pbStack_1e0;
        if (pbVar12 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(8,0x20);
        }
        pbVar12[0] = 1;
        pbVar12[1] = 0;
        pbVar12[2] = 0;
        pbVar12[3] = 0;
        pbVar12[4] = 0;
        pbVar12[5] = 0;
        pbVar12[6] = 0;
        pbVar12[7] = 0;
        pbVar12[8] = 1;
        pbVar12[9] = 0;
        pbVar12[10] = 0;
        pbVar12[0xb] = 0;
        pbVar12[0xc] = 0;
        pbVar12[0xd] = 0;
        pbVar12[0xe] = 0;
        pbVar12[0xf] = 0;
        *(undefined8 *)(pbVar12 + 0x10) = uVar1;
        *(undefined4 *)(pbVar12 + 0x18) = uVar14;
        *(undefined4 *)(pbVar12 + 0x1c) = uVar2;
        pdb_1409baea0(&uStack_188,pbStack_1e0,uStack_1d8,pbVar12,&UNK_1435aa330);
        uStack_278 = uStack_168;
        lStack_288 = lStack_178;
        uStack_280 = uStack_170;
        uStack_27c = uStack_16c;
        uStack_298 = (undefined4)uStack_188;
        uStack_294 = uStack_188._4_4_;
        uStack_290 = uStack_180;
        uStack_28c = uStack_17c;
        pdb_140b133a0(uVar9,&uStack_298);
        if (CONCAT71(uStack_1e7,uStack_1e8) != 0) {
          pub_1406abac0(pbStack_90,CONCAT71(uStack_1e7,uStack_1e8),1);
        }
      }
      cVar11 = pdb_1408ffa90(&uStack_b8);
      if (cVar11 != '\0') {
        pdb_140a8e090(&uStack_a0,uVar8);
        if (fStack_9c < 0.0) {
          fStack_9c = (fStack_9c / _DAT_142f61034) * _DAT_143019208 +
                      (_DAT_142e36f28 - fStack_9c / _DAT_142f61034) * 0.0;
        }
        *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
        lVar3 = *param_6;
        lVar5 = *(longlong *)(lVar3 + 0x30);
        uVar8 = *(undefined8 *)(lVar3 + 0x40);
        if (lVar5 == *(longlong *)(lVar3 + 0x20)) {
          pdb_142d7e830(lVar3 + 0x20);
        }
        lVar10 = *(longlong *)(lVar3 + 0x28);
        *(undefined8 *)(lVar10 + lVar5 * 0x18) = uVar8;
        *(undefined4 *)(lVar10 + 0x10 + lVar5 * 0x18) = uStack_98;
        *(ulonglong *)(lVar10 + 8 + lVar5 * 0x18) = CONCAT44(fStack_9c,uStack_a0);
        *(longlong *)(lVar3 + 0x30) = lVar5 + 1;
        *(longlong *)(lVar3 + 0x40) = *(longlong *)(lVar3 + 0x40) + 1;
      }
    }
  }
  return;
}

