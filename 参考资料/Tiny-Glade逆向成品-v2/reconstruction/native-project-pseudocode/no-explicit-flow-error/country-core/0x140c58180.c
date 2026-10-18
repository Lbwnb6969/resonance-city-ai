// VA 0x140c58180, PDB extent 459 bytes
// country_core::startup::load_prefabs::PrefabWatcher::changed_world_subsets
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_prefabs.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::startup::load_prefabs::PrefabWatcher::changed_world_subsets
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_prefabs.rs
   Extent: 459 */

undefined8 pdb_140c58180(undefined8 param_1,longlong param_2)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  char cVar7;
  bool bVar8;
  undefined1 (*pauStack_90) [16];
  undefined1 (*pauStack_88) [16];
  undefined1 *puStack_80;
  ushort uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong lStack_48;
  undefined1 (*pauStack_40) [16];
  uint uStack_34;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  lVar3 = *(longlong *)(param_2 + 0x38);
  pauVar1 = (undefined1 (*) [16])(lVar3 + 0x10);
  LOCK();
  bVar8 = *(char *)(lVar3 + 0x10) == '\0';
  if (bVar8) {
    *(char *)(lVar3 + 0x10) = '\x01';
  }
  UNLOCK();
  if (!bVar8) {
    pdb_142dc6be0(pauVar1);
  }
  puVar6 = _DAT_143ca8f38;
  if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
    uStack_34 = 0;
    cVar7 = *(char *)(lVar3 + 0x11);
    uVar4 = _UNK_143077fc8;
  }
  else {
    uStack_34 = pdb_142dc79e0();
    uStack_34 = uStack_34 ^ 1;
    cVar7 = *(char *)(lVar3 + 0x11);
    uVar4 = _UNK_143077fc8;
  }
  _UNK_143077fc8 = uVar4;
  if (cVar7 != '\0') {
    uVar5 = (ulonglong)pauStack_88 >> 8;
    pauStack_88 = (undefined1 (*) [16])CONCAT71((int7)uVar5,(char)uStack_34);
    pauStack_90 = pauVar1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14306f5b0,0x2b,&pauStack_90,&UNK_14306f5e0,&UNK_14306e9c8);
  }
  lStack_48 = lVar3 + 0x18;
  pauStack_90 = *(undefined1 (**) [16])(lVar3 + 0x18);
  puStack_80 = *pauStack_90 + *(longlong *)(lVar3 + 0x20) + 1;
  auVar2 = *pauStack_90;
  uStack_78 = ~((ushort)(SUB161(auVar2 >> 7,0) & 1) | (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
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
  uStack_70 = *(undefined8 *)(lVar3 + 0x30);
  uStack_68 = *(undefined8 *)(lVar3 + 0x18);
  uStack_60 = *(undefined8 *)(lVar3 + 0x20);
  uStack_58 = *(undefined4 *)(lVar3 + 0x28);
  uStack_54 = *(undefined4 *)(lVar3 + 0x2c);
  uStack_50 = *(undefined4 *)(lVar3 + 0x30);
  uStack_4c = *(undefined4 *)(lVar3 + 0x34);
  *(undefined8 *)(lVar3 + 0x18) = _DAT_143077fc0;
  *(undefined8 *)(lVar3 + 0x20) = uVar4;
  uVar4 = _UNK_143077fd8;
  *(undefined8 *)(lVar3 + 0x28) = _DAT_143077fd0;
  *(undefined8 *)(lVar3 + 0x30) = uVar4;
  pauStack_88 = pauStack_90 + 1;
  pauStack_40 = pauVar1;
  pdb_1415ffc80(param_1,&pauStack_90);
  if ((((char)uStack_34 == '\0') && ((*puVar6 & 0x7fffffffffffffff) != 0)) &&
     (cVar7 = pdb_142dc79e0(), cVar7 == '\0')) {
    *(undefined1 *)(lVar3 + 0x11) = 1;
  }
  LOCK();
  cVar7 = (*pauStack_40)[0];
  (*pauStack_40)[0] = 0;
  UNLOCK();
  if (cVar7 == '\x02') {
    pdb_142dc6ca0();
  }
  return param_1;
}

