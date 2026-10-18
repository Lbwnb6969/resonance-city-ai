// VA 0x141805d60, PDB extent 1308 bytes
// turbosloth::store::DiskStore::try_load<asset_pipe::texture::TextureAssetList>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   turbosloth::store::DiskStore::try_load<asset_pipe::texture::TextureAssetList>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
   Extent: 1308 */

undefined8 *
pdb_141805d60(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  byte *arg1;
  undefined1 auVar2 [16];
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  ulonglong uStack_1c8;
  byte *pbStack_1c0;
  ulonglong uStack_1b8;
  ulonglong uStack_128;
  byte *pbStack_120;
  undefined1 auStack_118 [16];
  ulonglong uStack_108;
  byte *pbStack_100;
  ulonglong uStack_f0;
  byte *pbStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  longlong lStack_c0;
  byte *pbStack_b8;
  longlong lStack_a8;
  byte *pbStack_a0;
  byte *pbStack_78;
  byte *pbStack_70;
  undefined8 uStack_68;
  byte *pbStack_60;
  byte *pbStack_58;
  undefined8 uStack_50;
  
  uStack_50 = 0xfffffffffffffffe;
  pdb_1417c9b60(&uStack_128);
  pdb_141c301a0(&uStack_1d8,param_2,param_3,param_4,&uStack_128);
  if ((uStack_1d8 & 3) == 0) {
    if (pbStack_120 != (byte *)0x0) {
      if (pbStack_120 + (longlong)pbStack_120 * 0x10 + 0x21 != (byte *)0x0) {
        pub_1406abac0((byte *)(uStack_128 - ((longlong)pbStack_120 * 0x10 + 0x10)),
                      (ulonglong)(pbStack_120 + (longlong)pbStack_120 * 0x10 + 0x21),0x10);
      }
    }
    pdb_141c2e820(&uStack_1d8,param_2,param_3,param_4);
    pbStack_120 = uStack_1d0;
    uStack_128 = uStack_1d8;
    auVar2[0] = -((char)uStack_1d8 == DAT_14300c7d0);
    auVar2[1] = -(uStack_1d8._1_1_ == UNK_14300c7d1);
    auVar2[2] = -(uStack_1d8._2_1_ == UNK_14300c7d2);
    auVar2[3] = -(uStack_1d8._3_1_ == UNK_14300c7d3);
    auVar2[4] = -(uStack_1d8._4_1_ == UNK_14300c7d4);
    auVar2[5] = -(uStack_1d8._5_1_ == UNK_14300c7d5);
    auVar2[6] = -(uStack_1d8._6_1_ == UNK_14300c7d6);
    auVar2[7] = -(uStack_1d8._7_1_ == UNK_14300c7d7);
    auVar2[8] = -((char)uStack_1d0 == UNK_14300c7d8);
    auVar2[9] = -(uStack_1d0._1_1_ == UNK_14300c7d9);
    auVar2[10] = -(uStack_1d0._2_1_ == UNK_14300c7da);
    auVar2[0xb] = -(uStack_1d0._3_1_ == UNK_14300c7db);
    auVar2[0xc] = -(uStack_1d0._4_1_ == UNK_14300c7dc);
    auVar2[0xd] = -(uStack_1d0._5_1_ == UNK_14300c7dd);
    auVar2[0xe] = -(uStack_1d0._6_1_ == UNK_14300c7de);
    auVar2[0xf] = -(uStack_1d0._7_1_ == UNK_14300c7df);
    if ((ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) | (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
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
                 (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe | (ushort)(auVar2[0xf] >> 7) << 0xf)
        != 0xffff) {
      pub_142e32760(auStack_118,&uStack_1c8,0xa0);
      pdb_141c2e960(&uStack_1d8,param_2,param_3,param_4);
      pbStack_58 = uStack_1d0;
      pdb_140f55fb0(&pbStack_78,uStack_1d0,uStack_1c8);
      if (uStack_1d8 != 0) {
        pub_1406abac0(pbStack_58,uStack_1d8,1);
      }
      if (SBORROW8(0,(longlong)pbStack_78)) {
        pdb_1404b38e0(&pbStack_70);
        param_1[2] = 0x8000000000000000;
      }
      else {
        pbStack_58 = pbStack_78;
        pbStack_60 = pbStack_70;
        pdb_1414dd530(&uStack_1d8,pbStack_70,uStack_68);
        uStack_1b8 = uStack_1c8;
        if (!SBORROW8(0,uStack_1d8)) {
          if (pbStack_58 != (byte *)0x0) {
            pub_1406abac0(pbStack_60,(ulonglong)pbStack_58,1);
          }
          uStack_1c8 = uStack_1d8;
          pbStack_1c0 = uStack_1d0;
          uStack_1d8 = 1;
          uStack_1d0 = (byte *)0x1;
          pdb_14007ee60();
          puVar1 = (ulonglong *)pub_1406abab0(0x28,8);
          if (puVar1 == (ulonglong *)0x0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc7e11(8,0x28);
          }
          puVar1[4] = uStack_1b8;
          puVar1[2] = uStack_1c8;
          puVar1[3] = (ulonglong)pbStack_1c0;
          *puVar1 = uStack_1d8;
          puVar1[1] = (ulonglong)uStack_1d0;
          param_1[4] = uStack_c8;
          param_1[2] = uStack_d8;
          param_1[3] = uStack_d0;
          *param_1 = puVar1;
          param_1[1] = &UNK_14333e240;
          if (uStack_108 != 0) {
            pub_1406abac0(pbStack_100,uStack_108,1);
          }
          if (uStack_f0 != 0) {
            pub_1406abac0(pbStack_e8,uStack_f0,1);
          }
          if (lStack_c0 != 0) {
            pub_1406abac0(pbStack_b8,lStack_c0 * 0x30,0x10);
          }
          if (lStack_a8 == 0) {
            return param_1;
          }
          arg1 = (byte *)(lStack_a8 << 4);
          goto LAB_141805e0b;
        }
        param_1[2] = 0x8000000000000000;
        if (pbStack_58 != (byte *)0x0) {
          pub_1406abac0(pbStack_60,(ulonglong)pbStack_58,1);
        }
      }
      pdb_14098b650(&uStack_128);
      return param_1;
    }
  }
  else {
    if ((int)uStack_1d8 == 2) {
      param_1[2] = 0x8000000000000000;
      if (pbStack_120 == (byte *)0x0) {
        return param_1;
      }
      arg1 = pbStack_120 + (longlong)pbStack_120 * 0x10 + 0x21;
      if (arg1 == (byte *)0x0) {
        return param_1;
      }
      pbStack_a0 = (byte *)(uStack_128 - ((longlong)pbStack_120 * 0x10 + 0x10));
LAB_141805e0b:
      pub_1406abac0(pbStack_a0,(ulonglong)arg1,0x10);
      return param_1;
    }
    if (pbStack_120 != (byte *)0x0) {
      if (pbStack_120 + (longlong)pbStack_120 * 0x10 + 0x21 != (byte *)0x0) {
        pub_1406abac0((byte *)(uStack_128 - ((longlong)pbStack_120 * 0x10 + 0x10)),
                      (ulonglong)(pbStack_120 + (longlong)pbStack_120 * 0x10 + 0x21),0x10);
      }
    }
  }
  param_1[2] = 0x8000000000000000;
  return param_1;
}

