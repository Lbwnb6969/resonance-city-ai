// VA 0x14090e440, PDB extent 532 bytes
// country_core::asset_libraries::ssbo_library::AssetSsboLibrary::export_from_rg
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/ssbo_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::asset_libraries::ssbo_library::AssetSsboLibrary::export_from_rg
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/ssbo_library.rs
   Extent: 532 */

void pdb_14090e440(longlong param_1)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  int iVar4;
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  uint uVar7;
  bool bVar8;
  undefined8 *apuStack_60 [2];
  longlong lStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  apuStack_60[0] = (undefined8 *)(param_1 + 0x10);
  if (*(char *)(param_1 + 8) != '\0') {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143066330,0x2b,apuStack_60,&UNK_143066310,&UNK_143066458);
  }
  lStack_50 = *(longlong *)(param_1 + 0x28);
  if (lStack_50 == 0) {
    return;
  }
  pauVar6 = (undefined1 (*) [16])*apuStack_60[0];
  auVar2 = *pauVar6;
  uVar7 = ~(uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar2[0xf] >> 7) << 0xf);
  pauVar5 = pauVar6;
  if ((short)uVar7 == 0) {
    do {
      auVar2 = pauVar5[1];
      pauVar6 = pauVar6 + -0x10;
      uVar7 = (ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                      (ushort)(byte)(auVar2[0xf] >> 7) << 0xf) ^ 0xffff;
      pauVar5 = pauVar5 + 1;
    } while (uVar7 == 0);
  }
  iVar4 = 0;
  for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
    iVar4 = iVar4 + 1;
  }
  lVar3 = *(longlong *)((longlong)pauVar6 + (-8 - (ulonglong)(uint)(iVar4 << 4)));
  uVar1 = lVar3 + 0x20;
  LOCK();
  bVar8 = *(longlong *)(lVar3 + 0x20) == 0;
  if (bVar8) {
    *(longlong *)(lVar3 + 0x20) = 8;
  }
  UNLOCK();
  if (!bVar8) {
    pdb_142dbc1f0(uVar1,0,1000000000);
  }
  pdb_140e9a150(uVar1);
  pdb_140e9a150(uVar1 | 1);
  uVar7 = *(uint *)(lVar3 + 0x28);
  *(undefined4 *)(lVar3 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00014090e515. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_14301f868 + *(int *)(&UNK_14301f868 + (ulonglong)uVar7 * 4)))();
  return;
}

