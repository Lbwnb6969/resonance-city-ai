// VA 0x140d8f7c0, PDB extent 1170 bytes
// tg_mods::overlay::init_mod_catalog
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tg_mods::overlay::init_mod_catalog
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
   Extent: 1170 */

void pdb_140d8f7c0(undefined8 *param_1,undefined1 (*param_2) [16],longlong param_3)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  ulonglong uVar5;
  byte *pbVar6;
  undefined1 (*pauVar7) [16];
  ulonglong arg1;
  longlong lVar8;
  undefined1 (*pauVar9) [16];
  uint uVar10;
  bool bVar11;
  longlong lStack_e0;
  longlong *plStack_d8;
  code *pcStack_d0;
  undefined8 uStack_c8;
  undefined1 (*pauStack_c0) [16];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  longlong **pplStack_68;
  longlong lStack_60;
  undefined8 *puStack_58;
  longlong lStack_50;
  byte *pbStack_48;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  puStack_58 = param_1;
  if ((param_1[2] != 0) && (2 < *_DAT_143ca8e90)) {
    plStack_d8 = &lStack_e0;
    pcStack_d0 = pdb_140f72a40;
    pauStack_c0 = (undefined1 (*) [16])0x0;
    puStack_b8 = &UNK_1431e5105;
    uStack_b0 = 0x10;
    uStack_a8 = 0;
    puStack_a0 = &UNK_1431e50e7;
    uStack_98 = 0x1d;
    uStack_90 = 3;
    puStack_88 = &UNK_1431e5105;
    uStack_80 = 0x10;
    uStack_78 = 0xc100000001;
    puStack_70 = &UNK_1431e531d;
    pplStack_68 = &plStack_d8;
    uStack_39 = 1;
    lStack_e0 = param_1[2];
    pdb_140f332f0(&uStack_3a,&pauStack_c0);
  }
  puStack_a0 = (undefined *)puStack_58[2];
  uStack_b0 = *puStack_58;
  uStack_a8 = puStack_58[1];
  LOCK();
  bVar11 = _DAT_143ca48a0 == 0;
  if (bVar11) {
    _DAT_143ca48a0 = 8;
  }
  UNLOCK();
  pauStack_c0 = param_2;
  puStack_b8 = (undefined *)param_3;
  if (!bVar11) {
    pdb_142dbc1f0(&DAT_143ca48a0,param_2,1000000000);
  }
  pdb_140e9a150(&DAT_143ca48a0);
  pdb_140e9a150(0x143ca48a1);
  pbStack_48 = (byte *)CONCAT44(uRam0000000143ca48c4,_DAT_143ca48c0);
  lStack_60 = _DAT_143ca48c8;
  lStack_50 = 0;
  pbVar6 = pbStack_48;
  while (lStack_60 != lStack_50) {
    lStack_50 = lStack_50 + 1;
    pdb_1404b3c90(pbVar6);
    pbVar6 = pbVar6 + 0xb0;
  }
  if (CONCAT44(uRam0000000143ca48bc,_DAT_143ca48b8) != 0) {
    pub_1406abac0(pbStack_48,CONCAT44(uRam0000000143ca48bc,_DAT_143ca48b8) * 0xb0,8);
  }
  _DAT_143ca48c8 = (longlong)puStack_a0;
  _DAT_143ca48b8 = (undefined4)uStack_b0;
  uRam0000000143ca48bc = uStack_b0._4_4_;
  _DAT_143ca48c0 = (undefined4)uStack_a8;
  uRam0000000143ca48c4 = uStack_a8._4_4_;
  _DAT_143ca48a8 = pauStack_c0;
  _DAT_143ca48b0 = (longlong)puStack_b8;
  uStack_39 = 0;
  pdb_140e9a350(&DAT_143ca48a0);
  uStack_39 = 0;
  pdb_140e9a350();
  LOCK();
  bVar11 = _DAT_143ca48a0 == 8;
  if (bVar11) {
    _DAT_143ca48a0 = 0;
  }
  UNLOCK();
  if (!bVar11) {
    uStack_39 = 0;
    pdb_142dbca40(&DAT_143ca48a0,0);
  }
  plStack_d8 = (longlong *)0x0;
  pcStack_d0 = (code *)0x8;
  uStack_c8 = 0;
  uStack_39 = 0;
  pdb_140d8b880(&pauStack_c0,&plStack_d8);
  puVar4 = puStack_b8;
  if (puStack_b8 != (undefined *)0x0) {
    if (uStack_a8 != 0) {
      auVar1 = *pauStack_c0;
      pauVar9 = pauStack_c0 + 1;
      uVar10 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
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
      pauVar7 = pauStack_c0;
      lVar8 = uStack_a8;
      do {
        if ((short)uVar10 == 0) {
          do {
            auVar1 = *pauVar9;
            pauVar7 = pauVar7 + -0x18;
            pauVar9 = pauVar9 + 1;
            uVar10 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
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
                             (ushort)(byte)(auVar1[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar10 == 0);
        }
        uVar2 = 0;
        for (uVar3 = uVar10; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        uVar5 = *(ulonglong *)((longlong)pauVar7 + (ulonglong)uVar2 * -0x18 + -0x18);
        if (uVar5 != 0) {
          pub_1406abac0(*(byte **)((longlong)pauVar7 + (ulonglong)uVar2 * -0x18 + -0x10),uVar5,1);
        }
        uVar10 = uVar10 - 1 & uVar10;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    uVar5 = (longlong)puVar4 * 0x18 + 0x27U & 0xfffffffffffffff0;
    arg1 = (longlong)puVar4 + uVar5 + 0x11;
    if (arg1 != 0) {
      pub_1406abac0((byte *)((longlong)pauStack_c0 - uVar5),arg1,0x10);
    }
  }
  return;
}

