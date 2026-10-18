// VA 0x1424ecad0, PDB extent 960 bytes
// clutter_pack_pipe::impl$4::hash<turbosloth::id::Hash128>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: clutter_pack_pipe::impl$4::hash<turbosloth::id::Hash128>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
   Extent: 960 */

void pdb_1424ecad0(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint *puVar7;
  uint *puVar8;
  ulonglong uStack_40;
  
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar5 = *(ulonglong *)(param_1 + 0x10);
  uStack_40 = uVar5;
  pdb_1417ca2e0(param_2,&uStack_40,8);
  pdb_1417ca2e0(param_2,uVar4,uVar5 << 2);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  lVar6 = *(longlong *)(param_1 + 0x28);
  uStack_40 = lVar6 * 3;
  pdb_1417ca2e0(param_2,&uStack_40,8);
  pdb_1417ca2e0(param_2,uVar4,lVar6 * 0xc);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  lVar6 = *(longlong *)(param_1 + 0x40);
  uStack_40 = lVar6 * 3;
  pdb_1417ca2e0(param_2,&uStack_40,8);
  pdb_1417ca2e0(param_2,uVar4,lVar6 * 0xc);
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  lVar6 = *(longlong *)(param_1 + 0x58);
  uStack_40 = lVar6 * 3;
  pdb_1417ca2e0(param_2,&uStack_40,8);
  pdb_1417ca2e0(param_2,uVar4,lVar6 * 0xc);
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  lVar6 = *(longlong *)(param_1 + 0x70);
  uStack_40 = lVar6 * 2;
  pdb_1417ca2e0(param_2,&uStack_40,8);
  pdb_1417ca2e0(param_2,uVar4,lVar6 << 3);
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  uVar5 = *(ulonglong *)(param_1 + 0x88);
  uStack_40 = uVar5;
  pdb_1417ca2e0(param_2,&uStack_40,8);
  pdb_1417ca2e0(param_2,uVar4,uVar5 << 2);
  puVar8 = *(uint **)(param_1 + 0x98);
  uVar5 = *(ulonglong *)(param_1 + 0xa0);
  uStack_40 = uVar5;
  pdb_1417ca2e0(param_2,&uStack_40,8);
  if (uVar5 != 0) {
    puVar7 = puVar8 + uVar5 * 0xf;
    do {
      uVar1 = *puVar8;
      uVar2 = puVar8[1];
      uStack_40 = (ulonglong)uVar1;
      pdb_1417ca2e0(param_2,&uStack_40,8);
      if ((ulonglong)uVar1 == 1) {
        uStack_40 = CONCAT44(uStack_40._4_4_,uVar2);
        pdb_1417ca2e0(param_2,&uStack_40,4);
      }
      uVar1 = puVar8[2];
      uVar2 = puVar8[3];
      uStack_40 = (ulonglong)uVar1;
      pdb_1417ca2e0(param_2,&uStack_40,8);
      if ((ulonglong)uVar1 == 1) {
        uStack_40 = CONCAT44(uStack_40._4_4_,uVar2);
        pdb_1417ca2e0(param_2,&uStack_40,4);
      }
      uVar1 = puVar8[4];
      uVar2 = puVar8[5];
      uStack_40 = (ulonglong)uVar1;
      pdb_1417ca2e0(param_2,&uStack_40,8);
      if ((ulonglong)uVar1 == 1) {
        uStack_40 = CONCAT44(uStack_40._4_4_,uVar2);
        pdb_1417ca2e0(param_2,&uStack_40,4);
      }
      uVar1 = puVar8[6];
      uVar2 = puVar8[7];
      uStack_40 = (ulonglong)uVar1;
      pdb_1417ca2e0(param_2,&uStack_40,8);
      if ((ulonglong)uVar1 == 1) {
        uStack_40 = CONCAT44(uStack_40._4_4_,uVar2);
        pdb_1417ca2e0(param_2,&uStack_40,4);
      }
      uStack_40 = 3;
      pdb_1417ca2e0(param_2,&uStack_40,8);
      pdb_1417ca2e0(param_2,puVar8 + 8,0xc);
      uStack_40._0_4_ = puVar8[0xb];
      pdb_1417ca2e0(param_2,&uStack_40,4);
      uStack_40 = CONCAT44(uStack_40._4_4_,puVar8[0xc]);
      pdb_1417ca2e0(param_2,&uStack_40,4);
      uStack_40 = 2;
      pdb_1417ca2e0(param_2,&uStack_40,8);
      pdb_1417ca2e0(param_2,puVar8 + 0xd,8);
      puVar8 = puVar8 + 0xf;
    } while (puVar8 != puVar7);
  }
  iVar3 = *(int *)(param_1 + 0xa8);
  uStack_40 = CONCAT71(uStack_40._1_7_,(char)iVar3);
  pdb_1417ca2e0(param_2,&uStack_40,1);
  if (iVar3 == 1) {
    uStack_40 = 3;
    pdb_1417ca2e0(param_2,&uStack_40,8);
    pdb_1417ca2e0(param_2,param_1 + 0xac,0xc);
    uStack_40 = 3;
    pdb_1417ca2e0(param_2,&uStack_40,8);
    pdb_1417ca2e0(param_2,param_1 + 0xb8,0xc);
  }
  return;
}

