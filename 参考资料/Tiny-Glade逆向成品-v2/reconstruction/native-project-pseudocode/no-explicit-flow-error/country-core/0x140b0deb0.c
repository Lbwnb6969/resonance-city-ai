// VA 0x140b0deb0, PDB extent 761 bytes
// country_core::resources::walls::inner_walls::InnerWalls::remove_all
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/inner_walls.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::inner_walls::InnerWalls::remove_all
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/inner_walls.rs
   Extent: 761 */

void pdb_140b0deb0(undefined8 *param_1)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  byte *arg0;
  byte *arg0_00;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  undefined8 uStack_128;
  longlong lStack_120;
  
  uVar7 = _UNK_143077fc8;
  pauVar13 = (undefined1 (*) [16])*param_1;
  auVar2 = *pauVar13;
  uVar12 = ~(uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar2[0xf] >> 7) << 0xf);
  pauVar14 = pauVar13 + 1;
  lVar11 = param_1[3];
  uVar5 = *param_1;
  uVar6 = param_1[1];
  *param_1 = _DAT_143077fc0;
  param_1[1] = uVar7;
  uVar7 = _UNK_143077fd8;
  param_1[2] = _DAT_143077fd0;
  param_1[3] = uVar7;
  if (lVar11 != 0) {
    do {
      if ((short)uVar12 == 0) {
        do {
          auVar2 = *pauVar14;
          pauVar13 = pauVar13 + -0x78;
          pauVar14 = pauVar14 + 1;
          uVar12 = (ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar2[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar12 == 0);
      }
      uVar3 = 0;
      for (uVar4 = uVar12; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        uVar3 = uVar3 + 1;
      }
      uVar12 = uVar12 - 1 & uVar12;
      lVar8 = (ulonglong)uVar3 * -0x78;
      lVar11 = lVar11 + -1;
      auVar2 = *(undefined1 (*) [16])((longlong)pauVar13 + lVar8 + -0x78);
      arg0 = *(byte **)((longlong)pauVar13 + lVar8 + -0x68);
      plVar1 = (longlong *)((longlong)pauVar13 + lVar8 + -0x58);
      lVar8 = *plVar1;
      arg0_00 = (byte *)plVar1[1];
      lStack_120 = auVar2._8_8_;
      if (SBORROW8(0,lStack_120)) goto joined_r0x000140b0e054;
      uStack_128 = auVar2._0_8_;
      pdb_1403b05d0(param_1 + 0x12,uStack_128);
      if (lStack_120 != 0) {
        pub_1406abac0(arg0,lStack_120 << 3,4);
      }
      if (lVar8 != 0) {
        pub_1406abac0(arg0_00,lVar8 << 2,4);
      }
    } while (lVar11 != 0);
  }
LAB_140b0e056:
  if (uVar6 == 0) {
    uVar10 = 0;
  }
  else {
    pub_142e32780(uVar5,0xff,uVar6 + 0x11);
    uVar10 = (uVar6 + 1 & 0xfffffffffffffff8) - (uVar6 + 1 >> 3);
    if (uVar6 < 8) {
      uVar10 = uVar6;
    }
  }
  param_1[2] = uVar10;
  param_1[3] = 0;
  *param_1 = uVar5;
  param_1[1] = uVar6;
  return;
joined_r0x000140b0e054:
  for (; lVar11 != 0; lVar11 = lVar11 + -1) {
    if ((short)uVar12 == 0) {
      do {
        auVar2 = *pauVar14;
        pauVar13 = pauVar13 + -0x78;
        pauVar14 = pauVar14 + 1;
        uVar12 = (ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar2[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar12 == 0);
    }
    uVar3 = 0;
    for (uVar4 = uVar12; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
      uVar3 = uVar3 + 1;
    }
    lVar9 = (ulonglong)uVar3 * -0x78;
    lVar8 = *(longlong *)((longlong)pauVar13 + lVar9 + -0x70);
    if (lVar8 != 0) {
      pub_1406abac0(*(byte **)((longlong)pauVar13 + lVar9 + -0x68),lVar8 << 3,4);
    }
    lVar8 = *(longlong *)((longlong)pauVar13 + lVar9 + -0x58);
    if (lVar8 != 0) {
      pub_1406abac0(*(byte **)((longlong)pauVar13 + lVar9 + -0x50),lVar8 << 2,4);
    }
    uVar12 = uVar12 - 1 & uVar12;
  }
  goto LAB_140b0e056;
}

