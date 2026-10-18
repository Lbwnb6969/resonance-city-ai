// VA 0x140c584f0, PDB extent 903 bytes
// country_core::startup::load_prefabs::reload_prefabs
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_prefabs.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::startup::load_prefabs::reload_prefabs
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_prefabs.rs
   Extent: 903 */

void pdb_140c584f0(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  char *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong *puVar7;
  byte bVar8;
  char cVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong arg1;
  undefined8 *puVar13;
  bool bVar14;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lVar2 = *param_1;
  lVar11 = *(longlong *)(lVar2 + 0x30);
  pcVar1 = (char *)(lVar11 + 0x10);
  LOCK();
  bVar14 = *(char *)(lVar11 + 0x10) == '\0';
  if (bVar14) {
    *(char *)(lVar11 + 0x10) = '\x01';
  }
  UNLOCK();
  puVar13 = param_2;
  if (!bVar14) {
    pdb_142dc6be0(pcVar1);
  }
  puVar7 = _DAT_143ca8f38;
  if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
    bVar8 = 0;
    cVar9 = *(char *)(lVar11 + 0x11);
  }
  else {
    bVar8 = pdb_142dc79e0();
    bVar8 = bVar8 ^ 1;
    cVar9 = *(char *)(lVar11 + 0x11);
  }
  if (cVar9 != '\0') {
    uVar6 = (uint)uStack_c0 >> 8;
    uStack_c0 = CONCAT31((int3)uVar6,bVar8);
    uStack_c8 = pcVar1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14306f5b0,0x2b,&uStack_c8,&UNK_14306f600,&UNK_14306ea18);
  }
  if (*(longlong *)(lVar11 + 0x30) != 0) {
    if (((bVar8 == 0) && ((*puVar7 & 0x7fffffffffffffff) != 0)) &&
       (cVar9 = pdb_142dc79e0(), cVar9 == '\0')) {
      *(undefined1 *)(lVar11 + 0x11) = 1;
    }
    LOCK();
    cVar9 = *pcVar1;
    *pcVar1 = '\0';
    UNLOCK();
    if (cVar9 == '\x02') {
      pdb_142dc6ca0(pcVar1);
      plVar10 = (longlong *)pdb_140f3bda0();
      cVar9 = (char)plVar10[2];
    }
    else {
      plVar10 = (longlong *)pdb_140f3bda0();
      cVar9 = (char)plVar10[2];
    }
    if (cVar9 == '\x01') {
      uStack_68 = *plVar10;
      puVar13 = (undefined8 *)plVar10[1];
    }
    else {
      uStack_68 = pdb_140f4fd10();
      *plVar10 = uStack_68;
      plVar10[1] = (longlong)puVar13;
      *(undefined1 *)(plVar10 + 2) = 1;
    }
    *plVar10 = uStack_68 + 1;
    uStack_78 = _DAT_14306f540;
    uStack_70 = _UNK_14306f548;
    uStack_88 = _DAT_14306f530;
    uStack_84 = _UNK_14306f534;
    uStack_80 = _UNK_14306f538;
    uStack_7c = _UNK_14306f53c;
    *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
    uVar3 = *param_2;
    puVar4 = (undefined4 *)param_1[2];
    *puVar4 = *(undefined4 *)((longlong)param_1 + 0x1c);
    uStack_49 = 1;
    uStack_60 = puVar13;
    pdb_140c58880(CONCAT71((int7)((ulonglong)puVar4 >> 8),1),uVar3,lVar2,&uStack_88);
    if (uStack_70 == 0) {
      lVar2 = CONCAT44(uStack_7c,uStack_80);
      if (lVar2 != 0) {
        lVar11 = lVar2 * 0x10 + 0x10;
        arg1 = lVar2 + lVar11 + 0x11;
        if (arg1 != 0) {
          pub_1406abac0((byte *)(CONCAT44(uStack_84,uStack_88) - lVar11),arg1,0x10);
        }
      }
    }
    else {
      uStack_a8 = (undefined4)uStack_68;
      uStack_a4 = uStack_68._4_4_;
      uStack_a0 = (undefined4)uStack_60;
      uStack_9c = uStack_60._4_4_;
      uStack_b8 = (undefined4)uStack_78;
      uStack_b4 = uStack_78._4_4_;
      uStack_b0 = (undefined4)uStack_70;
      uStack_ac = uStack_70._4_4_;
      uStack_c8 = (char *)CONCAT44(uStack_84,uStack_88);
      uStack_c0 = uStack_80;
      uStack_bc = uStack_7c;
      *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
      lVar2 = *param_3;
      uStack_98 = *(undefined8 *)(lVar2 + 0x40);
      lVar11 = *(longlong *)(lVar2 + 0x30);
      if (lVar11 == *(longlong *)(lVar2 + 0x20)) {
        pdb_142d7f080(lVar2 + 0x20);
      }
      lVar5 = *(longlong *)(lVar2 + 0x28);
      lVar12 = lVar11 * 0x38;
      *(undefined8 *)(lVar5 + 0x30 + lVar12) = uStack_98;
      puVar13 = (undefined8 *)(lVar5 + 0x20 + lVar12);
      *puVar13 = CONCAT44(uStack_a4,uStack_a8);
      puVar13[1] = CONCAT44(uStack_9c,uStack_a0);
      puVar13 = (undefined8 *)(lVar5 + 0x10 + lVar12);
      *puVar13 = CONCAT44(uStack_b4,uStack_b8);
      puVar13[1] = CONCAT44(uStack_ac,uStack_b0);
      *(undefined8 *)(lVar5 + lVar12) = uStack_c8;
      ((undefined8 *)(lVar5 + lVar12))[1] = CONCAT44(uStack_bc,uStack_c0);
      *(longlong *)(lVar2 + 0x30) = lVar11 + 1;
      *(longlong *)(lVar2 + 0x40) = *(longlong *)(lVar2 + 0x40) + 1;
    }
    return;
  }
  if (((bVar8 == 0) && ((*puVar7 & 0x7fffffffffffffff) != 0)) &&
     (cVar9 = pdb_142dc79e0(), cVar9 == '\0')) {
    *(undefined1 *)(lVar11 + 0x11) = 1;
  }
  LOCK();
  cVar9 = *pcVar1;
  *pcVar1 = '\0';
  UNLOCK();
  if (cVar9 == '\x02') {
                    /* WARNING: Could not recover jumptable at 0x000142dc6ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    WakeByAddressSingle(pcVar1);
    return;
  }
  return;
}

