// VA 0x1402acaa0, PDB extent 1111 bytes
// tiny_glade::egui_backend::EguiBackend::end_frame
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/egui_backend.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tiny_glade::egui_backend::EguiBackend::end_frame
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/egui_backend.rs
   Extent: 1111 */

undefined8 * pdb_1402acaa0(undefined8 *param_1,longlong *param_2)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  byte *pbVar5;
  longlong lVar6;
  ulonglong arg1;
  uint uVar7;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  longlong lStack_180;
  longlong lStack_178;
  longlong lStack_170;
  undefined1 (*pauStack_168) [16];
  longlong lStack_160;
  longlong lStack_150;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  longlong lStack_70;
  longlong lStack_68;
  longlong *plStack_60;
  byte *pbStack_58;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pdb_140d6a840(&uStack_228,param_2 + 9);
  uStack_c8 = uStack_1b8;
  uStack_d8 = uStack_1c8;
  uStack_d0 = uStack_1c0;
  uStack_e8 = uStack_1d8;
  uStack_e0 = uStack_1d0;
  uStack_f8 = uStack_1e8;
  uStack_f0 = uStack_1e0;
  uStack_128 = CONCAT44(uStack_214,uStack_218);
  uStack_120 = CONCAT44(uStack_20c,uStack_210);
  uStack_118 = CONCAT44(uStack_204,uStack_208);
  uStack_110 = CONCAT44(uStack_1fc,uStack_200);
  uStack_108 = uStack_1f8;
  uStack_100 = uStack_1f0;
  uStack_138 = uStack_228;
  uStack_130 = uStack_220;
  uStack_98 = uStack_190;
  uStack_90 = uStack_188;
  uStack_a8 = uStack_1a0;
  uStack_a0 = uStack_198;
  uStack_b8 = uStack_1b0;
  uStack_b0 = uStack_1a8;
  lStack_78 = lStack_170;
  lStack_88 = lStack_180;
  lStack_80 = lStack_178;
  if (lStack_160 != 0) {
    if (lStack_150 != 0) {
      auVar1 = *pauStack_168;
      pauVar9 = pauStack_168 + 1;
      uVar7 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
      lVar6 = lStack_150;
      pauVar8 = pauStack_168;
      do {
        if ((short)uVar7 == 0) {
          do {
            auVar1 = *pauVar9;
            pauVar8 = pauVar8 + -0xd0;
            pauVar9 = pauVar9 + 1;
            uVar7 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
          } while (uVar7 == 0);
        }
        uVar2 = 0;
        for (uVar3 = uVar7; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        uStack_49 = 1;
        uStack_4a = 1;
        pdb_1404b99e0(pauVar8[(ulonglong)uVar2 * -0xd + -0xd] + 8);
        uVar7 = uVar7 - 1 & uVar7;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    lVar6 = lStack_160 * 0xd0 + 0xd0;
    arg1 = lStack_160 + lVar6 + 0x11;
    if (arg1 != 0) {
      pub_1406abac0((byte *)((longlong)pauStack_168 - lVar6),arg1,0x10);
    }
  }
  pbStack_58 = (byte *)param_2[1];
  lStack_70 = param_2[2];
  lStack_68 = 0;
  pbVar5 = pbStack_58;
  plStack_60 = param_2;
  while (plVar4 = plStack_60, lStack_70 != lStack_68) {
    lStack_68 = lStack_68 + 1;
    pdb_1404b34e0(pbVar5);
    pbVar5 = pbVar5 + 0x60;
  }
  if (*plStack_60 != 0) {
    pub_1406abac0(pbStack_58,*plStack_60 * 0x60,8);
  }
  plVar4[2] = lStack_78;
  *plVar4 = lStack_88;
  plVar4[1] = lStack_80;
  uStack_208 = (undefined4)uStack_98;
  uStack_204 = uStack_98._4_4_;
  uStack_200 = (undefined4)uStack_90;
  uStack_1fc = uStack_90._4_4_;
  uStack_218 = (undefined4)uStack_a8;
  uStack_214 = uStack_a8._4_4_;
  uStack_210 = (undefined4)uStack_a0;
  uStack_20c = uStack_a0._4_4_;
  uStack_228 = uStack_b8;
  uStack_220 = uStack_b0;
  uStack_49 = 0;
  uStack_4a = 0;
  pdb_140d86120(plVar4 + 3,&uStack_228);
  param_1[0xe] = uStack_c8;
  param_1[0xc] = uStack_d8;
  param_1[0xd] = uStack_d0;
  param_1[10] = uStack_e8;
  param_1[0xb] = uStack_e0;
  param_1[8] = uStack_f8;
  param_1[9] = uStack_f0;
  param_1[6] = uStack_108;
  param_1[7] = uStack_100;
  param_1[4] = uStack_118;
  param_1[5] = uStack_110;
  param_1[2] = uStack_128;
  param_1[3] = uStack_120;
  *param_1 = uStack_138;
  param_1[1] = uStack_130;
  return param_1;
}

