// VA 0x140d8edf0, PDB extent 734 bytes
// tg_mods::overlay::shadowed_paths
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140d8ee4d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tg_mods::overlay::shadowed_paths
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
   Extent: 734 */

undefined8 * pdb_140d8edf0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined *puVar6;
  byte bVar7;
  longlong lVar9;
  undefined8 **ppuStack_b8;
  undefined8 *puStack_b0;
  undefined1 (*pauStack_a8) [16];
  undefined1 (*pauStack_a0) [16];
  undefined1 *puStack_98;
  ushort uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  longlong lStack_68;
  longlong lStack_60;
  undefined8 uStack_50;
  longlong lVar8;
  
  uStack_50 = 0xfffffffffffffffe;
  bVar7 = 0xffffffffffffffef < _DAT_143ca48d0 | (byte)(((uint)_DAT_143ca48d0 & 8) >> 3);
  lVar8 = CONCAT71((int7)((ulonglong)param_2 >> 8),bVar7);
  if (bVar7 == 0) {
    _DAT_143ca48d0 = _DAT_143ca48d0 + 0x10;
    LOCK();
    UNLOCK();
  }
  else {
    lVar8 = 0;
    pdb_142dbb5f0(&DAT_143ca48d0,0,param_3,1000000000);
  }
  pdb_140e9a150(&DAT_143ca48d0);
  pdb_140e9a150(0x143ca48d1);
  lVar9 = _DAT_143ca4908;
  lVar5 = _DAT_143ca48f8;
  pauVar2 = _DAT_143ca48f0;
  if (!SBORROW8(0,_DAT_143ca48d8)) {
    auVar1 = *_DAT_143ca48f0;
    plVar3 = (longlong *)pdb_140f3bda0();
    if ((char)plVar3[2] == '\x01') {
      lStack_68 = *plVar3;
      lVar8 = plVar3[1];
    }
    else {
      lStack_68 = pdb_140f4fd10();
      *plVar3 = lStack_68;
      plVar3[1] = lVar8;
      *(undefined1 *)(plVar3 + 2) = 1;
    }
    *plVar3 = lStack_68 + 1;
    uStack_78 = _DAT_1431e5060;
    uStack_70 = _UNK_1431e5068;
    uStack_88 = (undefined1 (*) [16])CONCAT44(_UNK_1431e5054,_DAT_1431e5050);
    uStack_80 = (undefined1 (*) [16])CONCAT44(_UNK_1431e505c,_UNK_1431e5058);
    lStack_60 = lVar8;
    if (lVar9 != 0) {
      pdb_142db6610(&uStack_88,lVar9,&lStack_68,1);
    }
    puStack_98 = *pauVar2 + lVar5 + 1;
    uStack_90 = ~((ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                  (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                 (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
    puStack_b0 = &uStack_88;
    ppuStack_b8 = &puStack_b0;
    pauStack_a8 = pauVar2;
    pauStack_a0 = pauVar2 + 1;
    pdb_140d9c5f0(&pauStack_a8,lVar9,&ppuStack_b8);
    pauStack_a8 = uStack_80;
    pauStack_a0 = (undefined1 (*) [16])uStack_78;
    puStack_98 = (undefined1 *)uStack_70;
    lVar8 = lVar9;
    if (uStack_88 != (undefined1 (*) [16])0x0) {
      uStack_78 = uStack_70;
      lVar5 = lStack_68;
      puVar6 = *uStack_88;
      lVar8 = lStack_60;
      uStack_88 = pauStack_a8;
      uStack_80 = pauStack_a0;
      goto LAB_140d8ef90;
    }
  }
  plVar3 = (longlong *)pdb_140f3bda0();
  if ((char)plVar3[2] == '\x01') {
    lVar5 = *plVar3;
    lVar8 = plVar3[1];
  }
  else {
    lVar5 = pdb_140f4fd10();
    *plVar3 = lVar5;
    plVar3[1] = lVar8;
    *(undefined1 *)(plVar3 + 2) = 1;
  }
  *plVar3 = lVar5 + 1;
  uStack_88 = (undefined1 (*) [16])0x0;
  uStack_80 = (undefined1 (*) [16])0x0;
  uStack_78 = 0;
  puVar6 = &UNK_1431e5040;
LAB_140d8ef90:
  *param_1 = puVar6;
  *(undefined4 *)(param_1 + 1) = (undefined4)uStack_88;
  *(undefined4 *)((longlong)param_1 + 0xc) = uStack_88._4_4_;
  *(undefined4 *)(param_1 + 2) = (undefined4)uStack_80;
  *(undefined4 *)((longlong)param_1 + 0x14) = uStack_80._4_4_;
  param_1[3] = uStack_78;
  param_1[4] = lVar5;
  param_1[5] = lVar8;
  pdb_140e9a350(&DAT_143ca48d0);
  pdb_140e9a350(0x143ca48d1);
  LOCK();
  lVar8 = _DAT_143ca48d0 - 0x10;
  UNLOCK();
  uVar4 = _DAT_143ca48d0 & 0xfffffffffffffff2;
  _DAT_143ca48d0 = lVar8;
  if (uVar4 == 0x12) {
    pdb_142dbbf50(&DAT_143ca48d0);
  }
  return param_1;
}

