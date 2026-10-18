// VA 0x140bd80b0, PDB extent 343 bytes
// country_core::systems::steam::workshop_clutter::WorkshopClutterInstalls::set_status
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/workshop_clutter.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::steam::workshop_clutter::WorkshopClutterInstalls::set_status
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/workshop_clutter.rs
   Extent: 343 */

char pdb_140bd80b0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  char *pcVar1;
  longlong lVar2;
  char cVar3;
  bool bVar4;
  ulonglong uStack_70;
  byte *pbStack_68;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  char *pcStack_40;
  undefined4 *puStack_38;
  undefined1 uStack_29;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  lVar2 = *(longlong *)(param_1 + 0x30);
  pcVar1 = (char *)(lVar2 + 0x10);
  LOCK();
  bVar4 = *(char *)(lVar2 + 0x10) == '\0';
  if (bVar4) {
    *(char *)(lVar2 + 0x10) = '\x01';
  }
  UNLOCK();
  puStack_38 = param_3;
  if (!bVar4) {
    uStack_29 = 0;
    pdb_142dbd1a0(pcVar1,param_2,1000000000);
  }
  uStack_29 = 0;
  pdb_140e9a150(pcVar1);
  uStack_48 = *(undefined8 *)(puStack_38 + 4);
  uStack_58 = *puStack_38;
  uStack_54 = puStack_38[1];
  uStack_50 = puStack_38[2];
  uStack_4c = puStack_38[3];
  pcStack_40 = pcVar1;
  pdb_1417b4770(&uStack_70,lVar2 + 0x18,param_2,&uStack_58);
  if ((-1 < (longlong)uStack_70) && (uStack_70 != 0)) {
    pub_1406abac0(pbStack_68,uStack_70,1);
  }
  pcVar1 = pcStack_40;
  uStack_29 = 1;
  pdb_140e9a350();
  LOCK();
  cVar3 = *pcVar1;
  bVar4 = cVar3 == '\x01';
  if (bVar4) {
    *pcVar1 = '\0';
    cVar3 = '\x01';
  }
  UNLOCK();
  if (!bVar4) {
    uStack_29 = 1;
    cVar3 = pdb_142dbcef0(pcVar1,0);
  }
  return cVar3;
}

