// VA 0x140c469d0, PDB extent 1172 bytes
// country_core::resources::stairs::structural_graph::StairsStructuralGraph::disconnect_node_by_collider
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/structural_graph.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::stairs::structural_graph::StairsStructuralGraph::disconnect_node_by_collider
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/structural_graph.rs
   Extent: 1172 */

void pdb_140c469d0(longlong param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  bool bVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined2 *puVar11;
  char *pcVar12;
  byte *arg0;
  uint uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined1 auVar16 [16];
  int iVar17;
  int iVar18;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  undefined8 uStack_b0;
  byte bStack_a8;
  undefined2 uStack_a7;
  byte bStack_a5;
  undefined2 *puStack_a0;
  uint *puStack_98;
  longlong lStack_90;
  byte *pbStack_88;
  longlong lStack_80;
  byte *pbStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_64;
  byte bStack_5c;
  undefined2 uStack_5b;
  undefined1 uStack_59;
  undefined8 *puStack_58;
  undefined2 uStack_50;
  byte bStack_4e;
  undefined2 uStack_4c;
  byte bStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lStack_90 = 0;
  pbStack_88 = (byte *)0x4;
  lStack_80 = 0;
  uStack_68 = param_2[2];
  uStack_70 = *(undefined8 *)param_2;
  uVar4 = *(ulonglong *)(param_1 + 0x10);
  puStack_58 = (undefined8 *)0x4;
  puStack_98 = param_2;
  if (uVar4 == 0) {
LAB_140c46a67:
    puVar14 = (undefined8 *)0x4;
  }
  else {
    if (uVar4 == 1) {
      lVar10 = *(longlong *)(param_1 + 8);
      if ((char)uStack_68 != *(char *)(lVar10 + 0x28)) goto LAB_140c46a67;
      iVar17 = -(uint)((int)*(undefined8 *)(lVar10 + 0x20) == (int)uStack_70);
      iVar18 = -(uint)((int)((ulonglong)*(undefined8 *)(lVar10 + 0x20) >> 0x20) ==
                      (int)((ulonglong)uStack_70 >> 0x20));
      auVar16._4_4_ = iVar17;
      auVar16._0_4_ = iVar17;
      auVar16._8_4_ = iVar18;
      auVar16._12_4_ = iVar18;
      iVar17 = movmskpd(uStack_68 & 0xff,auVar16);
      puVar14 = (undefined8 *)0x4;
      if (iVar17 != 3) goto LAB_140c46adf;
      uVar8 = 0;
    }
    else {
      uStack_49 = 1;
      uVar8 = pdb_14148b1b0(param_1 + 0x38,&uStack_70);
      uStack_49 = 1;
      uVar9 = pdb_1417c7720(param_1,uVar8,&uStack_70);
      if ((uVar9 & 1) == 0) {
        puVar14 = (undefined8 *)0x4;
        goto LAB_140c46adf;
      }
      if (uVar4 <= uVar8) {
        uStack_49 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar8,uVar4,&UNK_143022aa0);
      }
      lVar10 = *(longlong *)(param_1 + 8);
      puVar14 = (undefined8 *)0x4;
      if (lVar10 == 0) goto LAB_140c46adf;
    }
    puVar14 = *(undefined8 **)(lVar10 + 8 + uVar8 * 0x30);
    puStack_58 = puVar14 + *(longlong *)(lVar10 + 0x10 + uVar8 * 0x30) * 2;
  }
LAB_140c46adf:
  lStack_c8 = param_1 + 0x48;
  uVar3 = puStack_98[1];
  bVar1 = (byte)puStack_98[2];
  puStack_a0 = (undefined2 *)((longlong)puStack_98 + 9);
  lStack_c0 = param_1 + 0x150;
  pbStack_78 = (byte *)CONCAT44(pbStack_78._4_4_,*puStack_98);
  lStack_b8 = param_1;
  uVar13 = *puStack_98;
  while ((puVar14 != puStack_58 && (bVar2 = *(byte *)(puVar14 + 1), bVar2 != 0x11))) {
    uVar5 = *puVar14;
    puVar11 = (undefined2 *)((longlong)puVar14 + 9);
    bStack_4e = *(byte *)((longlong)puVar14 + 0xb);
    uStack_50 = *(undefined2 *)((longlong)puVar14 + 9);
    if (bVar1 == bVar2) {
      bVar7 = uVar3 <= (uint)((ulonglong)uVar5 >> 0x20);
      if (uVar13 != (uint)uVar5) {
        bVar7 = uVar13 <= (uint)uVar5;
      }
      if (!bVar7) goto LAB_140c46bbd;
LAB_140c46bf2:
      uStack_70 = CONCAT44(uVar3,uVar13);
      uStack_68._0_3_ = CONCAT21(*puStack_a0,bVar1);
      uStack_68 = CONCAT13(*(undefined1 *)(puStack_a0 + 1),(undefined3)uStack_68);
      bStack_5c = bVar2;
      uStack_64 = uVar5;
    }
    else {
      if (bVar1 <= bVar2) goto LAB_140c46bf2;
LAB_140c46bbd:
      uStack_68._0_3_ = CONCAT21(*puVar11,bVar2);
      uStack_68 = CONCAT13(*(undefined1 *)((longlong)puVar14 + 0xb),(undefined3)uStack_68);
      uStack_64 = CONCAT44(uVar3,uVar13);
      puVar11 = puStack_a0;
      bStack_5c = bVar1;
      uStack_70 = uVar5;
    }
    uStack_59 = *(undefined1 *)(puVar11 + 1);
    uStack_5b = *puVar11;
    uStack_49 = 1;
    pcVar12 = (char *)pdb_140936e50(lStack_c8,&uStack_70);
    if (pcVar12 == (char *)0x0) {
      uStack_49 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_14303e490,0x28,&UNK_14303e518);
    }
    bStack_4a = bStack_4e;
    uStack_4c = uStack_50;
    if (bVar1 == 0x11) break;
    puVar14 = puVar14 + 2;
    uVar13 = (uint)pbStack_78;
    if (*pcVar12 != '\0') {
      uStack_68._0_3_ = CONCAT21(uStack_50,bVar2);
      uStack_68 = CONCAT13(bStack_4e,(undefined3)uStack_68);
      uStack_49 = 1;
      uStack_70 = uVar5;
      pdb_1414b4b30(lStack_c0,&uStack_70);
      lVar10 = lStack_80;
      if (lStack_80 == lStack_90) {
        uStack_49 = 1;
        pdb_142d89250(&lStack_90);
      }
      *(uint *)(pbStack_88 + lVar10 * 0x18 + 8) = puStack_98[2];
      *(undefined8 *)(pbStack_88 + lVar10 * 0x18) = *(undefined8 *)puStack_98;
      *(undefined8 *)(pbStack_88 + lVar10 * 0x18 + 0xc) = uVar5;
      pbStack_88[lVar10 * 0x18 + 0x14] = bVar2;
      *(undefined2 *)(pbStack_88 + lVar10 * 0x18 + 0x15) = uStack_4c;
      pbStack_88[lVar10 * 0x18 + 0x17] = bStack_4a;
      lStack_80 = lVar10 + 1;
      uVar13 = (uint)pbStack_78;
    }
  }
  lVar10 = lStack_b8;
  puStack_58 = (undefined8 *)lStack_90;
  arg0 = pbStack_88;
  if (lStack_80 != 0) {
    lVar6 = lStack_80 * 0x18;
    lVar15 = 0;
    pbStack_78 = pbStack_88;
    do {
      arg0 = pbStack_78;
      if (pbStack_78[lVar15 + 8] == 0x11) break;
      uStack_b0 = *(undefined8 *)(pbStack_78 + lVar15);
      bStack_a5 = pbStack_78[lVar15 + 0xb];
      uStack_a7 = *(undefined2 *)(pbStack_78 + lVar15 + 9);
      uStack_d0 = *(undefined4 *)(pbStack_78 + lVar15 + 0x14);
      uStack_d8 = *(undefined8 *)(pbStack_78 + lVar15 + 0xc);
      bStack_a8 = pbStack_78[lVar15 + 8];
      pdb_140a61860(lVar10,&uStack_b0,&uStack_d8);
      lVar15 = lVar15 + 0x18;
      arg0 = pbStack_78;
    } while (lVar6 != lVar15);
  }
  if (puStack_58 != (undefined8 *)0x0) {
    pub_1406abac0(arg0,(longlong)puStack_58 * 0x18,4);
  }
  return;
}

