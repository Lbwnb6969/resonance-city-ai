// VA 0x14295a5a0, PDB extent 1559 bytes
// system_critters::sheep::sheep_terrain::sheep_walk_on_terrain
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/sheep/sheep_terrain.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x00014295a910) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_critters::sheep::sheep_terrain::sheep_walk_on_terrain
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/sheep/sheep_terrain.rs
   Extent: 1559 */

void pdb_14295a5a0(longlong *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint *puVar10;
  undefined4 uVar11;
  longlong lStack_140;
  longlong lStack_138;
  longlong lStack_128;
  
  pdb_1406d0830(*param_4);
  pub_142e32a20(*(float *)(*param_3 + 0x28) * _DAT_142e382d4);
  lVar9 = *param_1;
  lVar4 = param_1[1];
  uVar2 = *(undefined4 *)((longlong)param_1 + 0x14);
  puVar10 = *(uint **)(lVar9 + 0xf8);
  puVar1 = puVar10 + *(longlong *)(lVar9 + 0x100);
  uVar6 = 0;
  if (*(char *)(lVar9 + 0x108) == '\0') {
    do {
      if (puVar10 == puVar1) {
        return;
      }
      uVar6 = *puVar10;
      puVar10 = puVar10 + 1;
    } while (*(longlong *)(*(longlong *)(lVar4 + 0x100) + 0x58 + (ulonglong)uVar6 * 0xa0) == 0);
    lVar7 = *(longlong *)(lVar4 + 0x100) + (ulonglong)uVar6 * 0xa0;
    uVar8 = (ulonglong)*(uint *)(lVar7 + 0x94);
    lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x1a0) + 0x18 + uVar8 * 0x48);
    lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x1a0) + 0x38 + uVar8 * 0x48);
    lStack_140 = *(longlong *)
                  (lVar5 + 0x10 + ~*(ulonglong *)(lVar4 + *(longlong *)(lVar9 + 0x110) * 8) * 0x30);
    lVar9 = ~*(ulonglong *)(lVar4 + *(longlong *)(lVar9 + 0x118) * 8) * 0x30;
    lStack_138 = *(longlong *)(lVar5 + 0x10 + lVar9);
    lStack_128 = *(longlong *)(lVar5 + 0x28 + lVar9);
    uVar6 = ~*(uint *)(*(longlong *)(lVar7 + 0x50) + 8);
  }
  else {
    do {
      if (puVar10 == puVar1) {
        return;
      }
      uVar3 = *puVar10;
      puVar10 = puVar10 + 1;
    } while (*(longlong *)(*(longlong *)(lVar4 + 0x1a0) + 0x10 + (ulonglong)uVar3 * 0x48) == 0);
    lVar4 = *(longlong *)(lVar4 + 0x1a0) + (ulonglong)uVar3 * 0x48;
    lVar5 = *(longlong *)(lVar4 + 0x18);
    lVar4 = *(longlong *)(lVar4 + 0x38);
    lStack_140 = *(longlong *)
                  (lVar5 + 0x10 + ~*(ulonglong *)(lVar4 + *(longlong *)(lVar9 + 0x110) * 8) * 0x30);
    lVar9 = ~*(ulonglong *)(lVar4 + *(longlong *)(lVar9 + 0x118) * 8) * 0x30;
    lStack_138 = *(longlong *)(lVar5 + 0x10 + lVar9);
    lStack_128 = *(longlong *)(lVar5 + 0x28 + lVar9);
  }
  uVar8 = (ulonglong)uVar6;
  lStack_140 = uVar8 * 0x30 + lStack_140;
  uVar11 = pdb_14140ce00(*param_2,*(undefined4 *)(lStack_140 + 0x10),
                         *(undefined4 *)(lStack_140 + 0x18));
  *(undefined4 *)(lStack_128 + uVar8 * 4) = uVar2;
  uVar6 = *(uint *)(lStack_138 + uVar8 * 8);
  uVar8 = (ulonglong)(uVar6 - 2);
  if (uVar6 < 2) {
    uVar8 = 3;
  }
                    /* WARNING: Could not recover jumptable at 0x00014295a9af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_143604a10 + *(int *)(&UNK_143604a10 + uVar8 * 4)))
            (&UNK_143604a10 + *(int *)(&UNK_143604a10 + uVar8 * 4),uVar11);
  return;
}

