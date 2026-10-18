// VA 0x140c46780, PDB extent 578 bytes
// country_core::resources::stairs::structural_graph::StairsStructuralGraph::remove_node_by_collider
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/structural_graph.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::stairs::structural_graph::StairsStructuralGraph::remove_node_by_collider
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/structural_graph.rs
   Extent: 578 */

void pdb_140c46780(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  int iVar10;
  int iVar11;
  undefined8 uStack_78;
  uint uStack_70;
  undefined8 uStack_6c;
  undefined4 uStack_64;
  undefined8 uStack_60;
  char cStack_58;
  undefined2 uStack_57;
  undefined1 uStack_55;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  uVar4 = pdb_14148b1b0(param_1 + 0x110);
  pdb_140caa330(&uStack_78,param_1 + 0xf0,uVar4,param_2);
  if ((char)uStack_70 == '\x11') goto LAB_140c468f4;
  uStack_70 = *(uint *)(param_2 + 1);
  uStack_78 = *param_2;
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  if (uVar1 != 0) {
    if (uVar1 == 1) {
      lVar7 = *(longlong *)(param_1 + 8);
      if (((char)uStack_70 == *(char *)(lVar7 + 0x28)) &&
         (iVar10 = -(uint)((int)*(undefined8 *)(lVar7 + 0x20) == (int)uStack_78),
         iVar11 = -(uint)((int)((ulonglong)*(undefined8 *)(lVar7 + 0x20) >> 0x20) ==
                         (int)((ulonglong)uStack_78 >> 0x20)), auVar9._4_4_ = iVar10,
         auVar9._0_4_ = iVar10, auVar9._8_4_ = iVar11, auVar9._12_4_ = iVar11,
         iVar10 = movmskpd(uStack_70 & 0xff,auVar9), iVar10 == 3)) {
        uVar5 = 0;
LAB_140c46859:
        lVar2 = *(longlong *)(lVar7 + 0x10 + uVar5 * 0x30);
        if (lVar2 != 0) {
          lVar7 = *(longlong *)(lVar7 + 8 + uVar5 * 0x30);
          lVar8 = 0;
          do {
            cVar3 = *(char *)(lVar7 + 8 + lVar8);
            if (cVar3 == '\x11') break;
            uStack_60 = *(undefined8 *)(lVar7 + lVar8);
            uStack_55 = *(undefined1 *)(lVar7 + 0xb + lVar8);
            uStack_57 = *(undefined2 *)(lVar7 + 9 + lVar8);
            cStack_58 = cVar3;
            pdb_1414b4b30(param_1 + 0x150,&uStack_60);
            lVar8 = lVar8 + 0x10;
          } while (lVar2 << 4 != lVar8);
        }
      }
    }
    else {
      uVar5 = pdb_14148b1b0(param_1 + 0x38,&uStack_78);
      uVar6 = pdb_1417c7720(param_1,uVar5,&uStack_78);
      if ((uVar6 & 1) != 0) {
        if (uVar1 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar5,uVar1,&UNK_143022aa0);
        }
        lVar7 = *(longlong *)(param_1 + 8);
        if (lVar7 != 0) goto LAB_140c46859;
      }
    }
  }
  uStack_70 = *(uint *)(param_2 + 1);
  uStack_78 = *param_2;
  cVar3 = pdb_140a62160(param_1,&uStack_78);
  if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14306da70,0x32,&UNK_14306daa8);
  }
LAB_140c468f4:
  uVar4 = pdb_14148b1b0(param_1 + 0xb0,param_2);
  pdb_140ca87d0(&uStack_78,param_1 + 0x90,uVar4,param_2);
  if ((char)uStack_70 != '\x11') {
    uStack_48 = uStack_64;
    uStack_50 = uStack_6c;
    uVar4 = pdb_14148b010(param_1 + 0xe0,&uStack_50);
    pdb_140cab490(&uStack_78,param_1 + 0xc0,uVar4,&uStack_50);
    if ((char)uStack_64 == '\x11') {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_14306dac0,0x46,&UNK_14306db08);
    }
  }
  return;
}

