// VA 0x140bd8210, PDB extent 260 bytes
// country_core::systems::steam::workshop_clutter::WorkshopClutterInstalls::clear_status
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/workshop_clutter.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::steam::workshop_clutter::WorkshopClutterInstalls::clear_status
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/workshop_clutter.rs
   Extent: 260 */

char pdb_140bd8210(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 auStack_58 [8];
  ulonglong uStack_50;
  byte *pbStack_48;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  lVar2 = *(longlong *)(param_1 + 0x30);
  pcVar1 = (char *)(lVar2 + 0x10);
  LOCK();
  bVar5 = *(char *)(lVar2 + 0x10) == '\0';
  if (bVar5) {
    *(char *)(lVar2 + 0x10) = '\x01';
  }
  UNLOCK();
  uStack_38 = param_2;
  if (!bVar5) {
    pdb_142dbd1a0(pcVar1,param_2,1000000000);
  }
  pcStack_30 = pcVar1;
  pdb_140e9a150(pcVar1);
  uVar4 = pdb_1400af0a0(lVar2 + 0x38,&uStack_38);
  pdb_140caad50(auStack_58,lVar2 + 0x18,uVar4,&uStack_38);
  pcVar1 = pcStack_30;
  if ((uStack_50 != 0x8000000000000005) && (0 < (longlong)uStack_50)) {
    pub_1406abac0(pbStack_48,uStack_50,1);
  }
  pdb_140e9a350();
  LOCK();
  cVar3 = *pcVar1;
  bVar5 = cVar3 == '\x01';
  if (bVar5) {
    *pcVar1 = '\0';
    cVar3 = '\x01';
  }
  UNLOCK();
  if (!bVar5) {
    cVar3 = pdb_142dbcef0(pcVar1,0);
  }
  return cVar3;
}

