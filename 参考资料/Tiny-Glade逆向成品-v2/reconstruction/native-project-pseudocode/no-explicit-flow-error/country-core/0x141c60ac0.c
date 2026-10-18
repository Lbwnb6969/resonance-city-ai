// VA 0x141c60ac0, PDB extent 469 bytes
// country_core::systems::save::save_thread::UnsavedFileList::add
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_thread.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::save::save_thread::UnsavedFileList::add
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_thread.rs
   Extent: 469 */

char pdb_141c60ac0(char *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  char cVar21;
  longlong lVar22;
  bool bVar23;
  
  LOCK();
  cVar21 = *param_1;
  if (cVar21 == '\0') {
    *param_1 = '\x01';
  }
  UNLOCK();
  if (cVar21 != '\0') {
    pdb_142dbd1a0(param_1,param_2,1000000000);
  }
  pdb_140e9a150(param_1);
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 == *(longlong *)(param_1 + 8)) {
    pdb_142d7e670(param_1 + 8,param_2[4],param_2[8],param_2[0xc],*param_2,param_2[2],param_2[4],
                  param_2[6],param_2[8],param_2[10],param_2[0xc],param_2[0xe],
                  *(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x12),
                  *(undefined8 *)(param_2 + 0x14),*(undefined8 *)(param_2 + 0x16),
                  *(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x1a),
                  *(undefined8 *)(param_2 + 0x1c),*(undefined8 *)(param_2 + 0x1e));
  }
  lVar4 = *(longlong *)(param_1 + 0x10);
  lVar22 = lVar3 * 0x80;
  uVar20 = *(undefined8 *)(param_2 + 0x1e);
  puVar1 = (undefined8 *)(lVar4 + 0x70 + lVar22);
  *puVar1 = *(undefined8 *)(param_2 + 0x1c);
  puVar1[1] = uVar20;
  uVar20 = *(undefined8 *)(param_2 + 0x1a);
  puVar1 = (undefined8 *)(lVar4 + 0x60 + lVar22);
  *puVar1 = *(undefined8 *)(param_2 + 0x18);
  puVar1[1] = uVar20;
  uVar20 = *(undefined8 *)(param_2 + 0x16);
  puVar1 = (undefined8 *)(lVar4 + 0x50 + lVar22);
  *puVar1 = *(undefined8 *)(param_2 + 0x14);
  puVar1[1] = uVar20;
  uVar20 = *(undefined8 *)(param_2 + 0x12);
  puVar1 = (undefined8 *)(lVar4 + 0x40 + lVar22);
  *puVar1 = *(undefined8 *)(param_2 + 0x10);
  puVar1[1] = uVar20;
  uVar5 = *param_2;
  uVar6 = param_2[1];
  uVar7 = param_2[2];
  uVar8 = param_2[3];
  uVar9 = param_2[4];
  uVar10 = param_2[5];
  uVar11 = param_2[6];
  uVar12 = param_2[7];
  uVar13 = param_2[8];
  uVar14 = param_2[9];
  uVar15 = param_2[10];
  uVar16 = param_2[0xb];
  uVar17 = param_2[0xd];
  uVar18 = param_2[0xe];
  uVar19 = param_2[0xf];
  puVar2 = (undefined4 *)(lVar4 + 0x30 + lVar22);
  *puVar2 = param_2[0xc];
  puVar2[1] = uVar17;
  puVar2[2] = uVar18;
  puVar2[3] = uVar19;
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar22);
  *puVar2 = uVar13;
  puVar2[1] = uVar14;
  puVar2[2] = uVar15;
  puVar2[3] = uVar16;
  puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar22);
  *puVar2 = uVar9;
  puVar2[1] = uVar10;
  puVar2[2] = uVar11;
  puVar2[3] = uVar12;
  puVar2 = (undefined4 *)(lVar4 + lVar22);
  *puVar2 = uVar5;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  *(longlong *)(param_1 + 0x18) = lVar3 + 1;
  pdb_140e9a350(param_1);
  LOCK();
  cVar21 = *param_1;
  bVar23 = cVar21 == '\x01';
  if (bVar23) {
    *param_1 = '\0';
    cVar21 = '\x01';
  }
  UNLOCK();
  if (!bVar23) {
    cVar21 = pdb_142dbcef0(param_1,0);
  }
  return cVar21;
}

