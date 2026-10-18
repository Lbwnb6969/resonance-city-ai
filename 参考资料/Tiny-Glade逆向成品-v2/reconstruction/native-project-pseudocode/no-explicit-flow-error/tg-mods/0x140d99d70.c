// VA 0x140d99d70, PDB extent 1106 bytes
// tg_mods::discovery::rediscover_mods
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/discovery.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tg_mods::discovery::rediscover_mods
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/discovery.rs
   Extent: 1106 */

undefined8 pdb_140d99d70(undefined8 param_1)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  byte *arg0;
  longlong *plVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined1 (*pauVar8) [16];
  undefined *puVar9;
  longlong lVar10;
  undefined1 *arg1;
  uint uVar11;
  byte *pbVar12;
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  undefined1 (*pauStack_118) [16];
  undefined1 (*pauStack_110) [16];
  undefined1 (*pauStack_108) [16];
  undefined1 (*pauStack_f8) [16];
  undefined1 (*pauStack_f0) [16];
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 (*pauStack_c8) [16];
  byte *pbStack_c0;
  undefined1 (*pauStack_b8) [16];
  undefined1 (*pauStack_a8) [16];
  undefined1 (*pauStack_a0) [16];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 (*pauStack_70) [16];
  undefined1 (*pauStack_68) [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 (*pauStack_50) [16];
  undefined1 uStack_41;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  pdb_140d8ead0(&pauStack_a8);
  pauVar8 = pauStack_a0 + (longlong)uStack_98 * 0xb;
  pauStack_70 = pauStack_a0;
  pauStack_68 = pauStack_a0;
  uStack_60 = pauStack_a8;
  uStack_41 = 1;
  uStack_58 = pauVar8;
  plVar4 = (longlong *)pdb_140f3bda0();
  if ((char)plVar4[2] == '\x01') {
    uStack_88 = (byte *)*plVar4;
    pauVar8 = (undefined1 (*) [16])plVar4[1];
  }
  else {
    uStack_41 = 1;
    uStack_88 = (byte *)pdb_140f4fd10();
    *plVar4 = (longlong)uStack_88;
    plVar4[1] = (longlong)pauVar8;
    *(undefined1 *)(plVar4 + 2) = 1;
  }
  *plVar4 = (longlong)(uStack_88 + 1);
  uStack_98 = _DAT_1431e5530;
  uStack_90 = _UNK_1431e5538;
  pauStack_a8 = _DAT_1431e5520;
  pauStack_a0 = _UNK_1431e5528;
  uStack_e8 = (undefined4)uStack_60;
  uStack_e4 = uStack_60._4_4_;
  uStack_e0 = (undefined4)uStack_58;
  uStack_dc = uStack_58._4_4_;
  pauStack_f8 = pauStack_70;
  pauStack_f0 = pauStack_68;
  uStack_80 = pauVar8;
  pdb_141db10f0(&pauStack_f8,&pauStack_a8);
  pauStack_f8 = pauStack_a8;
  pauStack_f0 = pauStack_a0;
  uStack_e8 = (undefined4)uStack_98;
  uStack_e4 = uStack_98._4_4_;
  uStack_e0 = (undefined4)uStack_90;
  uStack_dc = uStack_90._4_4_;
  uStack_d8 = (undefined4)uStack_88;
  uStack_d4 = uStack_88._4_4_;
  uStack_d0 = (undefined4)uStack_80;
  uStack_cc = uStack_80._4_4_;
  puVar9 = &UNK_1431e5963;
  pdb_140f4c4e0(&pauStack_a8,&UNK_1431e5963,0x13);
  if (SBORROW8(0,(longlong)pauStack_a8)) {
    puVar5 = (undefined *)pdb_140dc7520(-(longlong)pauStack_a8);
    pdb_140f3e9e0(&pauStack_70,puVar5,puVar9,&UNK_1431e5976,4);
    puVar9 = puVar5;
  }
  else {
    uStack_58 = uStack_90;
    pauStack_68 = pauStack_a0;
    uStack_60 = uStack_98;
    pauStack_70 = pauStack_a8;
  }
  pauVar8 = uStack_60;
  pauStack_50 = pauStack_68;
  uVar6 = pdb_140d8b7c0();
  pdb_140d96d90(&pauStack_a8,pauStack_50,pauVar8,uVar6,puVar9,&pauStack_f8);
  pauStack_108 = uStack_98;
  pauStack_118 = pauStack_a8;
  pauStack_110 = pauStack_a0;
  pauStack_b8 = uStack_80;
  pauStack_c8 = uStack_90;
  pbStack_c0 = uStack_88;
  if (pauStack_70 != (undefined1 (*) [16])0x0) {
    pub_1406abac0((byte *)pauStack_50,(ulonglong)pauStack_70,1);
  }
  pdb_140d93170(param_1,&pauStack_118);
  arg0 = pbStack_c0;
  if (pauStack_b8 != (undefined1 (*) [16])0x0) {
    pbVar12 = pbStack_c0 + 8;
    pauVar8 = pauStack_b8;
    do {
      if (*(ulonglong *)(pbVar12 + -8) != 0) {
        pub_1406abac0(*(byte **)pbVar12,*(ulonglong *)(pbVar12 + -8),1);
      }
      pbVar12 = pbVar12 + 0x20;
      pauVar8 = (undefined1 (*) [16])(pauVar8[-1] + 0xf);
    } while (pauVar8 != (undefined1 (*) [16])0x0);
  }
  if (pauStack_c8 != (undefined1 (*) [16])0x0) {
    pub_1406abac0(arg0,(longlong)pauStack_c8 << 5,8);
  }
  pauVar8 = pauStack_f0;
  if (pauStack_f0 != (undefined1 (*) [16])0x0) {
    lVar10 = CONCAT44(uStack_dc,uStack_e0);
    if (lVar10 != 0) {
      auVar1 = *pauStack_f8;
      pauVar14 = pauStack_f8 + 1;
      uVar11 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
      pauVar13 = pauStack_f8;
      do {
        if ((short)uVar11 == 0) {
          do {
            auVar1 = *pauVar14;
            pauVar13 = pauVar13 + -0x18;
            pauVar14 = pauVar14 + 1;
            uVar11 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
          } while (uVar11 == 0);
        }
        uVar2 = 0;
        for (uVar3 = uVar11; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        uVar7 = *(ulonglong *)((longlong)pauVar13 + (ulonglong)uVar2 * -0x18 + -0x18);
        if (uVar7 != 0) {
          pub_1406abac0(*(byte **)((longlong)pauVar13 + (ulonglong)uVar2 * -0x18 + -0x10),uVar7,1);
        }
        uVar11 = uVar11 - 1 & uVar11;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    uVar7 = (longlong)pauVar8 * 0x18 + 0x27U & 0xfffffffffffffff0;
    arg1 = pauVar8[1] + uVar7 + 1;
    if (arg1 != (undefined1 *)0x0) {
      pub_1406abac0((byte *)((longlong)pauStack_f8 - uVar7),(ulonglong)arg1,0x10);
    }
  }
  return param_1;
}

