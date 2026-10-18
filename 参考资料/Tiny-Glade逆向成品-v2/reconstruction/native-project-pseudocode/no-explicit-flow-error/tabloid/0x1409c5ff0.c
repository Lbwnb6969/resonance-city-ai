// VA 0x1409c5ff0, PDB extent 572 bytes
// tabloid::Subscriber::take<country_core::systems::collision::world::ColliderDiff>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tabloid/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   tabloid::Subscriber::take<country_core::systems::collision::world::ColliderDiff>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tabloid/src/lib.rs
   Extent: 572 */

ulonglong * pdb_1409c5ff0(ulonglong *param_1,longlong *param_2)

{
  char *pcVar1;
  ulonglong *puVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  lVar5 = *param_2;
  pcVar1 = (char *)(lVar5 + 0x10);
  LOCK();
  bVar8 = *(char *)(lVar5 + 0x10) == '\0';
  if (bVar8) {
    *(char *)(lVar5 + 0x10) = '\x01';
  }
  UNLOCK();
  if (!bVar8) {
    pdb_142dbd1a0(pcVar1,param_2,1000000000);
  }
  pdb_140e9a150(pcVar1);
  lVar6 = *(longlong *)(lVar5 + 0x20);
  *(undefined8 *)(lVar5 + 0x20) = 0;
  if (lVar6 == 0) {
    *param_1 = 0;
    goto LAB_1409c615c;
  }
  puVar2 = (ulonglong *)(lVar6 + 0x10);
  uVar7 = *(ulonglong *)(lVar6 + 0x10);
  if (uVar7 < 0xfffffffffffffff0 && (char)(((uint)uVar7 & 8) >> 3) == '\0') {
    LOCK();
    uVar4 = *puVar2;
    if (uVar7 == uVar4) {
      *puVar2 = uVar7 + 0x10;
    }
    UNLOCK();
    if (uVar7 != uVar4) goto LAB_1409c605f;
  }
  else {
LAB_1409c605f:
    pdb_142dbb5f0(puVar2,0);
  }
  pdb_140e9a150(puVar2);
  pdb_140e9a150((ulonglong)puVar2 | 1);
  *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(lVar6 + 0x78);
  pdb_140e9a350(puVar2);
  pdb_140e9a350((ulonglong)puVar2 | 1);
  LOCK();
  uVar7 = *puVar2;
  *puVar2 = *puVar2 - 0x10;
  UNLOCK();
  if ((uVar7 & 0xfffffffffffffff2) == 0x12) {
    pdb_142dbbf50(puVar2);
  }
  puVar2 = (ulonglong *)(lVar6 + 0x10);
  uVar7 = *(ulonglong *)(lVar6 + 0x10);
  if (uVar7 < 0xfffffffffffffff0 && (char)(((uint)uVar7 & 8) >> 3) == '\0') {
    LOCK();
    uVar4 = *puVar2;
    if (uVar7 == uVar4) {
      *puVar2 = uVar7 + 0x10;
    }
    UNLOCK();
    if (uVar7 != uVar4) goto LAB_1409c6109;
  }
  else {
LAB_1409c6109:
    pdb_142dbb5f0(puVar2,0);
  }
  pdb_140e9a150(puVar2);
  pdb_140e9a150((ulonglong)puVar2 | 1);
  *param_1 = (ulonglong)puVar2;
  param_1[1] = lVar6 + 0x18;
  param_1[2] = (ulonglong)puVar2;
LAB_1409c615c:
  pdb_140e9a350();
  LOCK();
  cVar3 = *pcVar1;
  if (cVar3 == '\x01') {
    *pcVar1 = '\0';
  }
  UNLOCK();
  if (cVar3 != '\x01') {
    pdb_142dbcef0(pcVar1,0);
  }
  return param_1;
}

