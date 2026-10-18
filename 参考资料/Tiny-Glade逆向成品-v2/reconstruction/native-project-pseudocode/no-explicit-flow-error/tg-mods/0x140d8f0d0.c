// VA 0x140d8f0d0, PDB extent 1428 bytes
// tg_mods::overlay::set_active_mods
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140d8f133) */
/* WARNING: Removing unreachable block (ram,0x000140d8f369) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tg_mods::overlay::set_active_mods
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
   Extent: 1428 */

void pdb_140d8f0d0(undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  byte bVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lStack_158;
  longlong lStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  longlong lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  longlong lStack_58;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  if (_DAT_143ca48a0 < 0xfffffffffffffff0 && (char)(((uint)_DAT_143ca48a0 & 8) >> 3) == '\0') {
    _DAT_143ca48a0 = _DAT_143ca48a0 + 0x10;
    LOCK();
    UNLOCK();
  }
  else {
    pdb_142dbb5f0(&DAT_143ca48a0,0,param_3,1000000000);
  }
  pdb_140e9a150(&DAT_143ca48a0);
  pdb_140e9a150(0x143ca48a1);
  lVar11 = param_2 + param_3 * 0x18;
  uStack_148 = _DAT_143ca48c0;
  uStack_144 = uRam0000000143ca48c4;
  uStack_140 = _DAT_143ca48c8;
  uStack_13c = uRam0000000143ca48cc;
  uStack_4a = 1;
  lStack_158 = param_2;
  lStack_150 = lVar11;
  pdb_141da5000(&uStack_90,&lStack_158);
  uStack_68 = 0;
  uStack_60 = 8;
  lStack_58 = 0;
  puStack_78 = param_1;
  lStack_70 = lVar11;
LAB_140d8f1c3:
  lVar10 = param_2;
  uStack_4b = lVar10 != lVar11;
  if ((bool)uStack_4b) {
    param_2 = lVar10 + 0x18;
    lVar9 = CONCAT44(uRam0000000143ca48c4,_DAT_143ca48c0);
    lVar12 = CONCAT44(uRam0000000143ca48cc,_DAT_143ca48c8);
    uStack_4b = 1;
    lVar3 = lVar9;
    do {
      lVar7 = lVar3;
      if (lVar7 == lVar12 * 0xb0 + lVar9) goto LAB_140d8f1c3;
      uStack_49 = 1;
      cVar4 = pdb_140d927d0(lVar7,lVar10);
      lVar2 = uStack_60;
      lVar3 = lVar7 + 0xb0;
    } while (cVar4 == '\0');
    if (lStack_58 != 0) {
      lVar9 = lStack_58 * 0xb0;
      uVar1 = *(undefined8 *)(lVar7 + 0x18);
      lVar10 = *(longlong *)(lVar7 + 0x20);
      lVar12 = 0;
      do {
        if ((*(longlong *)(lVar2 + 0x20 + lVar12) == lVar10) &&
           (iVar5 = pub_142e32750(*(undefined8 *)(lVar2 + 0x18 + lVar12),uVar1,lVar10),
           lVar11 = lStack_70, iVar5 == 0)) goto LAB_140d8f1c3;
        lVar12 = lVar12 + 0xb0;
      } while (lVar9 - lVar12 != 0);
    }
    uStack_49 = 1;
    pdb_140d8a580(&lStack_158,lVar7);
    lVar10 = lStack_58;
    lVar11 = lStack_70;
    if (lStack_58 == uStack_68) {
      pdb_142d91cc0(&uStack_68);
    }
    pub_142e32760(lVar10 * 0xb0 + uStack_60,&lStack_158,0xb0);
    lStack_58 = lVar10 + 1;
    goto LAB_140d8f1c3;
  }
  uStack_49 = 1;
  pdb_140e9a350(&DAT_143ca48a0);
  uStack_49 = 1;
  pdb_140e9a350(0x143ca48a1);
  LOCK();
  lVar11 = _DAT_143ca48a0 - 0x10;
  UNLOCK();
  uVar6 = _DAT_143ca48a0 & 0xfffffffffffffff2;
  _DAT_143ca48a0 = lVar11;
  if (uVar6 == 0x12) {
    uStack_49 = 1;
    pdb_142dbbf50(&DAT_143ca48a0);
  }
  if (_DAT_143ca48d0 < 0xfffffffffffffff0 && (char)(((uint)_DAT_143ca48d0 & 8) >> 3) == '\0') {
    _DAT_143ca48d0 = _DAT_143ca48d0 + 0x10;
    LOCK();
    UNLOCK();
  }
  else {
    uStack_49 = 1;
    pdb_142dbb5f0(&DAT_143ca48d0,0);
  }
  uStack_49 = 1;
  pdb_140e9a150(&DAT_143ca48d0);
  uStack_49 = 1;
  pdb_140e9a150(0x143ca48d1);
  lVar11 = uStack_60;
  if (SBORROW8(0,_DAT_143ca48d8)) {
    lVar10 = 0;
    bVar8 = 1;
    if (lStack_58 != 0) goto LAB_140d8f42b;
  }
  else {
    bVar8 = 1;
    lVar10 = _DAT_143ca48e8;
    if (_DAT_143ca48e8 != lStack_58) goto LAB_140d8f42b;
  }
  bVar8 = 1;
  lVar9 = 8;
  if (!SBORROW8(0,_DAT_143ca48d8)) {
    lVar9 = _DAT_143ca48e0;
  }
  if (lVar10 != 0) {
    lVar12 = 0x20;
    do {
      if ((*(longlong *)(lVar9 + lVar12) != *(longlong *)(lVar11 + lVar12)) ||
         (iVar5 = pub_142e32750(*(undefined8 *)(lVar9 + -8 + lVar12),
                                *(undefined8 *)(lVar11 + -8 + lVar12)), iVar5 != 0))
      goto LAB_140d8f42b;
      lVar12 = lVar12 + 0xb0;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  bVar8 = 0;
LAB_140d8f42b:
  uStack_49 = 1;
  pdb_140e9a350(&DAT_143ca48d0);
  uStack_49 = 1;
  pdb_140e9a350(0x143ca48d1);
  LOCK();
  lVar11 = _DAT_143ca48d0 - 0x10;
  UNLOCK();
  uVar6 = _DAT_143ca48d0 & 0xfffffffffffffff2;
  _DAT_143ca48d0 = lVar11;
  if (uVar6 == 0x12) {
    uStack_49 = 1;
    pdb_142dbbf50(&DAT_143ca48d0);
  }
  lStack_98 = lStack_58;
  uStack_a8 = (undefined4)uStack_68;
  uStack_a4 = uStack_68._4_4_;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  uStack_49 = 0;
  pdb_140d8b880(&lStack_158,&uStack_a8);
  puStack_78[7] = uStack_138;
  puStack_78[8] = uStack_130;
  puStack_78[5] = CONCAT44(uStack_144,uStack_148);
  puStack_78[6] = CONCAT44(uStack_13c,uStack_140);
  puStack_78[3] = lStack_158;
  puStack_78[4] = lStack_150;
  puStack_78[2] = uStack_80;
  *puStack_78 = uStack_90;
  puStack_78[1] = uStack_88;
  *(byte *)(puStack_78 + 9) = bVar8 | CONCAT44(uStack_13c,uStack_140) != 0;
  return;
}

