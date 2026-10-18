// VA 0x140bd4a00, PDB extent 280 bytes
// country_core::systems::collision::intersect_meshes::should_intersect_collider_meshes
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/intersect_meshes.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::collision::intersect_meshes::should_intersect_collider_meshes
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/intersect_meshes.rs
   Extent: 280 */

ulonglong pdb_140bd4a00(ulonglong *param_1,ulonglong *param_2,longlong param_3)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  byte bVar4;
  longlong lVar5;
  code *pcVar6;
  undefined7 uVar8;
  ulonglong uVar7;
  byte bVar9;
  ulonglong uVar10;
  
  uVar7 = *param_1 & 0xffffffff;
  if (((uVar7 < *(ulonglong *)(param_3 + 0x10)) && (lVar5 = *(longlong *)(param_3 + 8), lVar5 != 0))
     && (*(uint *)(lVar5 + 0x20 + uVar7 * 0x28) == ((uint)(*param_1 >> 0x20) | 1))) {
    uVar10 = *param_2 & 0xffffffff;
    if ((uVar10 < *(ulonglong *)(param_3 + 0x10)) &&
       (*(uint *)(lVar5 + 0x20 + uVar10 * 0x28) == ((uint)(*param_2 >> 0x20) | 1))) {
      pcVar1 = (char *)(lVar5 + uVar7 * 0x28);
      pcVar2 = (char *)(lVar5 + uVar10 * 0x28);
      cVar3 = *pcVar2;
      bVar9 = pcVar2[1];
      lVar5 = *(longlong *)(pcVar2 + 8);
      uVar8 = (undefined7)((ulonglong)lVar5 >> 8);
      if (*pcVar1 == '\0') {
        if (cVar3 == '\x02') {
LAB_140bd4abc:
          return CONCAT71(uVar8,~(*(longlong *)(pcVar1 + 8) == lVar5 | bVar9)) & 0xffffffffffffff01;
        }
      }
      else if (*pcVar1 == '\x02') {
        bVar4 = pcVar1[1];
        if (cVar3 == '\x02') {
          return CONCAT71(uVar8,~(bVar4 != bVar9 | bVar4 | *(longlong *)(pcVar1 + 8) == lVar5)) &
                 0xffffffffffffff01;
        }
        bVar9 = bVar4;
        if (cVar3 == '\0') goto LAB_140bd4abc;
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_143064560,0x28,&UNK_143064588);
    }
  }
  else {
    pdb_142dc664f(&UNK_143076e28,0x18,&UNK_143064530);
  }
  pdb_142dc664f(&UNK_143076e28,0x18,&UNK_143064548);
  pcVar6 = (code *)swi(3);
  uVar7 = (*pcVar6)();
  return uVar7;
}

