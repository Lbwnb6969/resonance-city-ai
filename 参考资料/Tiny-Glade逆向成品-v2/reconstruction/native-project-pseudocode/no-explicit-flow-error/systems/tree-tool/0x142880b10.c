// VA 0x142880b10, PDB extent 215 bytes
// system_tree::ui_place_tree::random_tree_prefab
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/tree-tool/src/ui_place_tree.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_tree::ui_place_tree::random_tree_prefab
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/tree-tool/src/ui_place_tree.rs
   Extent: 215 */

byte * pdb_142880b10(ulonglong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  byte *arg1;
  byte *pbVar4;
  undefined *puVar5;
  ulonglong arg0;
  ulonglong uVar6;
  
  lVar1 = param_2 + 0x98;
  cVar2 = pdb_140a937c0(lVar1);
  if ((cVar2 == '\0') && (cVar2 = pdb_140a926a0(param_2), cVar2 == '\0')) {
    bVar3 = pdb_140a3d910(lVar1);
    if (((param_1 & 1) == 0 & bVar3) != 0) {
LAB_142880b76:
      puVar5 = &UNK_1435aa408;
      uVar6 = 0x27;
      goto LAB_142880bdb;
    }
    cVar2 = pdb_140901020(lVar1);
    if (cVar2 == '\0') {
      if ((param_1 & 1) == 0) {
        puVar5 = &UNK_1435aa39e;
      }
      else {
LAB_142880bcf:
        puVar5 = &UNK_1435aa388;
      }
      uVar6 = 0x16;
      goto LAB_142880bdb;
    }
    if ((param_1 & 1) == 0) {
      puVar5 = &UNK_1435aa3d1;
      uVar6 = 0x1d;
      goto LAB_142880bdb;
    }
  }
  else {
    bVar3 = pdb_140a3d910(lVar1);
    if (((param_1 & 1) == 0 & bVar3) != 0) goto LAB_142880b76;
    if ((param_1 & 1) == 0) {
      puVar5 = &UNK_1435aa3ee;
      uVar6 = 0x1a;
      goto LAB_142880bdb;
    }
    cVar2 = pdb_140901020(lVar1);
    if (cVar2 == '\0') goto LAB_142880bcf;
  }
  puVar5 = &UNK_1435aa3b4;
  uVar6 = 0x1d;
LAB_142880bdb:
  arg0 = uVar6;
  arg1 = (byte *)pdb_140f606e0(1);
  pbVar4 = arg1;
  if (arg0 != 0) {
    pdb_14007ee60();
    pbVar4 = pub_1406abab0(arg0,(ulonglong)arg1);
  }
  if (pbVar4 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(arg1,arg0);
  }
  pbVar4[0] = 1;
  pbVar4[1] = 0;
  pbVar4[2] = 0;
  pbVar4[3] = 0;
  pbVar4[4] = 0;
  pbVar4[5] = 0;
  pbVar4[6] = 0;
  pbVar4[7] = 0;
  pbVar4[8] = 1;
  pbVar4[9] = 0;
  pbVar4[10] = 0;
  pbVar4[0xb] = 0;
  pbVar4[0xc] = 0;
  pbVar4[0xd] = 0;
  pbVar4[0xe] = 0;
  pbVar4[0xf] = 0;
  pub_142e32760(pbVar4 + 0x10,puVar5,uVar6);
  return pbVar4;
}

