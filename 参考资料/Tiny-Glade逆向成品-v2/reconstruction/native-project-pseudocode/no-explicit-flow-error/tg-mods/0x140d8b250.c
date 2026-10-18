// VA 0x140d8b250, PDB extent 431 bytes
// tg_mods::overlay::ChangedPaths::texture_names
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tg_mods::overlay::ChangedPaths::texture_names
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
   Extent: 431 */

undefined8 * pdb_140d8b250(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  longlong *plVar2;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 (*pauStack_e8) [16];
  undefined1 (*pauStack_e0) [16];
  undefined1 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 (*pauStack_80) [16];
  undefined1 (*pauStack_78) [16];
  undefined1 *puStack_70;
  ushort uStack_68;
  undefined6 uStack_66;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  longlong lStack_38;
  undefined8 *puStack_30;
  undefined1 uStack_21;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  pauStack_80 = (undefined1 (*) [16])*param_2;
  puStack_70 = *pauStack_80 + param_2[1] + 1;
  auVar1 = *pauStack_80;
  uStack_68 = ~((ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
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
  pauStack_78 = pauStack_80 + 1;
  uStack_60 = param_2[3];
  uStack_c0 = 0;
  uStack_a0 = 0;
  uStack_21 = 1;
  plVar2 = (longlong *)pdb_140f3bda0();
  if ((char)plVar2[2] == '\x01') {
    lStack_38 = *plVar2;
    param_2 = (undefined8 *)plVar2[1];
  }
  else {
    uStack_21 = 1;
    lStack_38 = pdb_140f4fd10();
    *plVar2 = lStack_38;
    plVar2[1] = (longlong)param_2;
    *(undefined1 *)(plVar2 + 2) = 1;
  }
  *plVar2 = lStack_38 + 1;
  uStack_48 = _DAT_1431e5060;
  uStack_40 = _UNK_1431e5068;
  uStack_58 = _DAT_1431e5050;
  uStack_50 = _UNK_1431e5058;
  uStack_c8 = uStack_60;
  uStack_d0 = CONCAT62(uStack_66,uStack_68);
  puStack_d8 = puStack_70;
  pauStack_e8 = pauStack_80;
  pauStack_e0 = pauStack_78;
  uStack_f8 = uStack_90;
  uStack_f4 = uStack_8c;
  uStack_f0 = uStack_88;
  uStack_ec = uStack_84;
  uStack_108 = (undefined4)uStack_a0;
  uStack_104 = uStack_a0._4_4_;
  uStack_100 = uStack_98;
  uStack_fc = uStack_94;
  uStack_118 = uStack_b0;
  uStack_114 = uStack_ac;
  uStack_110 = uStack_a8;
  uStack_10c = uStack_a4;
  uStack_128 = uStack_c0;
  uStack_120 = uStack_b8;
  puStack_30 = param_2;
  pdb_141da1ec0(&uStack_58,&uStack_128);
  param_1[4] = lStack_38;
  param_1[5] = puStack_30;
  param_1[2] = uStack_48;
  param_1[3] = uStack_40;
  *param_1 = uStack_58;
  param_1[1] = uStack_50;
  return param_1;
}

