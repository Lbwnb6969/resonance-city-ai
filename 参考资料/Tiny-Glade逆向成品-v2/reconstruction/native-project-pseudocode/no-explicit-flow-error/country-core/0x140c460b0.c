// VA 0x140c460b0, PDB extent 972 bytes
// country_core::resources::stairs::structural_graph::StairsStructuralGraph::upsert_span
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/structural_graph.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::stairs::structural_graph::StairsStructuralGraph::upsert_span
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/structural_graph.rs
   Extent: 972 */

void pdb_140c460b0(longlong param_1,undefined8 *param_2,longlong *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lStack_c8;
  char cStack_c0;
  undefined2 uStack_bf;
  undefined1 uStack_bd;
  int iStack_bc;
  int iStack_b8;
  char cStack_b4;
  undefined2 uStack_b3;
  undefined1 uStack_b1;
  char cStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  longlong lStack_90;
  undefined4 uStack_88;
  undefined1 auStack_80 [8];
  char cStack_78;
  undefined2 uStack_77;
  undefined1 uStack_75;
  undefined8 uStack_70;
  char cStack_68;
  undefined2 uStack_67;
  undefined1 uStack_65;
  longlong lStack_60;
  
  uVar6 = pdb_14148b010(param_1 + 0xe0);
  pdb_140cab490(&lStack_c8,param_1 + 0xc0,uVar6,param_2);
  iVar4 = iStack_bc;
  if (cStack_b4 == '\x11') goto LAB_140c462f9;
  lVar9 = CONCAT44(iStack_b8,iStack_bc);
  uStack_a8._0_3_ = CONCAT12(uStack_b1,uStack_b3);
  cStack_78 = cStack_b4;
  uStack_77 = uStack_b3;
  uStack_75 = uStack_b1;
  uVar6 = pdb_14148b1b0(param_1 + 0xb0,auStack_80);
  pdb_140ca87d0(&lStack_c8,param_1 + 0x90,uVar6,auStack_80);
  cStack_c0 = cStack_b4;
  uStack_bd = uStack_a8._2_1_;
  uStack_bf = (undefined2)uStack_a8;
  uVar2 = *(ulonglong *)(param_1 + 0x10);
  lStack_60 = lVar9;
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      lVar9 = *(longlong *)(param_1 + 8);
      if (((cStack_b4 == *(char *)(lVar9 + 0x28)) && (*(int *)(lVar9 + 0x20) == iVar4)) &&
         (*(int *)(lVar9 + 0x24) == iStack_b8)) {
        uVar7 = 0;
LAB_140c4620a:
        lVar3 = *(longlong *)(lVar9 + 0x10 + uVar7 * 0x30);
        if (lVar3 != 0) {
          lVar9 = *(longlong *)(lVar9 + 8 + uVar7 * 0x30);
          lVar10 = 0;
          do {
            cVar5 = *(char *)(lVar9 + 8 + lVar10);
            if (cVar5 == '\x11') break;
            uStack_70 = *(undefined8 *)(lVar9 + lVar10);
            uStack_65 = *(undefined1 *)(lVar9 + 0xb + lVar10);
            uStack_67 = *(undefined2 *)(lVar9 + 9 + lVar10);
            cStack_68 = cVar5;
            pdb_1414b4b30(param_1 + 0x150,&uStack_70);
            lVar10 = lVar10 + 0x10;
          } while (lVar3 << 4 != lVar10);
        }
      }
    }
    else {
      uVar7 = pdb_14148b1b0(param_1 + 0x38,&lStack_c8);
      uVar8 = pdb_1417c7720(param_1,uVar7,&lStack_c8);
      if ((uVar8 & 1) != 0) {
        if (uVar2 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar7,uVar2,&UNK_143022aa0);
        }
        lVar9 = *(longlong *)(param_1 + 8);
        if (lVar9 != 0) goto LAB_140c4620a;
      }
    }
  }
  lStack_c8 = lStack_60;
  cStack_c0 = cStack_b4;
  uStack_bf = (undefined2)uStack_a8;
  uStack_bd = uStack_a8._2_1_;
  cVar5 = pdb_140a62160(param_1,&lStack_c8);
  if (cVar5 == '\0') {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14306d9bb,0x2e,&UNK_14306da28);
  }
  uVar6 = pdb_14148b1b0(param_1 + 0x110,auStack_80);
  pdb_140caa330(&lStack_c8,param_1 + 0xf0,uVar6,auStack_80);
LAB_140c462f9:
  uStack_a0 = CONCAT44(uStack_a0._4_4_,(int)param_3[1]);
  uStack_a8 = *param_3;
  uStack_88 = (undefined4)param_3[1];
  lStack_90 = *param_3;
  uVar6 = pdb_14148b1b0(param_1 + 0x38,&lStack_90);
  pdb_1417c9910(&lStack_c8,param_1,uVar6,&uStack_a8);
  uVar2 = CONCAT44(iStack_bc,CONCAT13(uStack_bd,CONCAT21(uStack_bf,cStack_c0)));
  if (cStack_b0 == '\x11') {
    if (*(ulonglong *)(lStack_c8 + 0x10) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar2,*(ulonglong *)(lStack_c8 + 0x10),&UNK_143337a68);
    }
  }
  else {
    uStack_a8 = 0;
    uStack_a0 = 4;
    uStack_98 = 0;
    pdb_1417c7b10(lStack_c8,uVar2,&iStack_b8,&uStack_a8);
  }
  uStack_88 = (undefined4)param_3[1];
  lStack_90 = *param_3;
  uStack_a8 = *param_2;
  uStack_a0._0_4_ = *(undefined4 *)(param_2 + 1);
  pdb_1417bae10(&lStack_c8,param_1 + 0x90,&lStack_90,&uStack_a8);
  uStack_a0 = CONCAT44(uStack_a0._4_4_,*(undefined4 *)(param_2 + 1));
  uStack_a8 = *param_2;
  uVar1 = (undefined4)param_3[1];
  cStack_c0 = (char)uVar1;
  uStack_bf = (undefined2)((uint)uVar1 >> 8);
  uStack_bd = (undefined1)((uint)uVar1 >> 0x18);
  lStack_c8 = *param_3;
  pdb_1417bc220(&lStack_90,param_1 + 0xc0,&uStack_a8,&lStack_c8);
  uVar1 = (undefined4)param_3[1];
  cStack_c0 = (char)uVar1;
  uStack_bf = (undefined2)((uint)uVar1 >> 8);
  uStack_bd = (undefined1)((uint)uVar1 >> 0x18);
  lStack_c8 = *param_3;
  pdb_1414b4250(param_1 + 0xf0,&lStack_c8,param_4);
  pdb_1414b4b30(param_1 + 0x150,param_3);
  return;
}

