// VA 0x141804870, PDB extent 1356 bytes
// turbosloth::store::DiskStore::try_load<clutter_pack_pipe::ClutterObjectList>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   turbosloth::store::DiskStore::try_load<clutter_pack_pipe::ClutterObjectList>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
   Extent: 1356 */

undefined8 *
pdb_141804870(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  byte *arg1;
  undefined1 auVar3 [16];
  ulonglong uStack_1f8;
  byte *pbStack_1f0;
  undefined1 auStack_1e8 [16];
  ulonglong uStack_1d8;
  byte *pbStack_1d0;
  ulonglong uStack_1c0;
  byte *pbStack_1b8;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  longlong lStack_190;
  byte *pbStack_188;
  longlong lStack_178;
  byte *pbStack_170;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulonglong uStack_138;
  byte *pbStack_130;
  ulonglong uStack_128;
  byte *pbStack_120;
  ulonglong uStack_118;
  byte *pbStack_110;
  byte *pbStack_98;
  ulonglong uStack_90;
  byte *pbStack_88;
  byte *pbStack_78;
  byte *pbStack_70;
  undefined8 uStack_68;
  byte *pbStack_60;
  byte *pbStack_58;
  undefined8 uStack_50;
  
  uStack_50 = 0xfffffffffffffffe;
  pdb_1417c9b60(&uStack_1f8);
  pdb_141c301a0(&uStack_148,param_2,param_3,param_4,&uStack_1f8);
  if ((uStack_148 & 3) == 0) {
    if (pbStack_1f0 != (byte *)0x0) {
      if (pbStack_1f0 + (longlong)pbStack_1f0 * 0x10 + 0x21 != (byte *)0x0) {
        pub_1406abac0((byte *)(uStack_1f8 - ((longlong)pbStack_1f0 * 0x10 + 0x10)),
                      (ulonglong)(pbStack_1f0 + (longlong)pbStack_1f0 * 0x10 + 0x21),0x10);
      }
    }
    pdb_141c2e820(&uStack_148,param_2,param_3,param_4);
    pbStack_1f0 = uStack_140;
    uStack_1f8 = uStack_148;
    auVar3[0] = -((char)uStack_148 == DAT_14300c7d0);
    auVar3[1] = -(uStack_148._1_1_ == UNK_14300c7d1);
    auVar3[2] = -(uStack_148._2_1_ == UNK_14300c7d2);
    auVar3[3] = -(uStack_148._3_1_ == UNK_14300c7d3);
    auVar3[4] = -(uStack_148._4_1_ == UNK_14300c7d4);
    auVar3[5] = -(uStack_148._5_1_ == UNK_14300c7d5);
    auVar3[6] = -(uStack_148._6_1_ == UNK_14300c7d6);
    auVar3[7] = -(uStack_148._7_1_ == UNK_14300c7d7);
    auVar3[8] = -((char)uStack_140 == UNK_14300c7d8);
    auVar3[9] = -(uStack_140._1_1_ == UNK_14300c7d9);
    auVar3[10] = -(uStack_140._2_1_ == UNK_14300c7da);
    auVar3[0xb] = -(uStack_140._3_1_ == UNK_14300c7db);
    auVar3[0xc] = -(uStack_140._4_1_ == UNK_14300c7dc);
    auVar3[0xd] = -(uStack_140._5_1_ == UNK_14300c7dd);
    auVar3[0xe] = -(uStack_140._6_1_ == UNK_14300c7de);
    auVar3[0xf] = -(uStack_140._7_1_ == UNK_14300c7df);
    if ((ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe | (ushort)(auVar3[0xf] >> 7) << 0xf)
        != 0xffff) {
      pub_142e32760(auStack_1e8,&uStack_138,0xa0);
      pdb_141c2e960(&uStack_148,param_2,param_3,param_4);
      pbStack_58 = uStack_140;
      pdb_140f55fb0(&pbStack_78,uStack_140,uStack_138);
      if (uStack_148 != 0) {
        pub_1406abac0(pbStack_58,uStack_148,1);
      }
      if (SBORROW8(0,(longlong)pbStack_78)) {
        pdb_1404b38e0(&pbStack_70);
        param_1[2] = 0x8000000000000000;
      }
      else {
        pbStack_58 = pbStack_78;
        pbStack_60 = pbStack_70;
        pdb_1414de000(&uStack_148,pbStack_70,uStack_68);
        uVar1 = uStack_138;
        if (!SBORROW8(0,uStack_138)) {
          pbStack_98 = pbStack_130;
          uStack_90 = uStack_128;
          pbStack_88 = pbStack_120;
          if (pbStack_58 != (byte *)0x0) {
            pub_1406abac0(pbStack_60,(ulonglong)pbStack_58,1);
          }
          uStack_138 = uStack_148;
          pbStack_130 = uStack_140;
          uStack_128 = uVar1;
          pbStack_120 = pbStack_98;
          uStack_118 = uStack_90;
          pbStack_110 = pbStack_88;
          uStack_148 = 1;
          uStack_140 = (byte *)0x1;
          pdb_14007ee60();
          puVar2 = (ulonglong *)pub_1406abab0(0x40,0x10);
          if (puVar2 == (ulonglong *)0x0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc7e11(0x10,0x40);
          }
          puVar2[6] = uStack_118;
          puVar2[7] = (ulonglong)pbStack_110;
          puVar2[4] = uStack_128;
          puVar2[5] = (ulonglong)pbStack_120;
          puVar2[2] = uStack_138;
          puVar2[3] = (ulonglong)pbStack_130;
          *puVar2 = uStack_148;
          puVar2[1] = (ulonglong)uStack_140;
          param_1[4] = uStack_198;
          param_1[2] = uStack_1a8;
          param_1[3] = uStack_1a0;
          *param_1 = puVar2;
          param_1[1] = &UNK_14333e1c0;
          if (uStack_1d8 != 0) {
            pub_1406abac0(pbStack_1d0,uStack_1d8,1);
          }
          if (uStack_1c0 != 0) {
            pub_1406abac0(pbStack_1b8,uStack_1c0,1);
          }
          if (lStack_190 != 0) {
            pub_1406abac0(pbStack_188,lStack_190 * 0x30,0x10);
          }
          if (lStack_178 == 0) {
            return param_1;
          }
          arg1 = (byte *)(lStack_178 << 4);
          goto LAB_14180491b;
        }
        param_1[2] = 0x8000000000000000;
        if (pbStack_58 != (byte *)0x0) {
          pub_1406abac0(pbStack_60,(ulonglong)pbStack_58,1);
        }
      }
      pdb_14098b650(&uStack_1f8);
      return param_1;
    }
  }
  else {
    if ((int)uStack_148 == 2) {
      param_1[2] = 0x8000000000000000;
      if (pbStack_1f0 == (byte *)0x0) {
        return param_1;
      }
      arg1 = pbStack_1f0 + (longlong)pbStack_1f0 * 0x10 + 0x21;
      if (arg1 == (byte *)0x0) {
        return param_1;
      }
      pbStack_170 = (byte *)(uStack_1f8 - ((longlong)pbStack_1f0 * 0x10 + 0x10));
LAB_14180491b:
      pub_1406abac0(pbStack_170,(ulonglong)arg1,0x10);
      return param_1;
    }
    if (pbStack_1f0 != (byte *)0x0) {
      if (pbStack_1f0 + (longlong)pbStack_1f0 * 0x10 + 0x21 != (byte *)0x0) {
        pub_1406abac0((byte *)(uStack_1f8 - ((longlong)pbStack_1f0 * 0x10 + 0x10)),
                      (ulonglong)(pbStack_1f0 + (longlong)pbStack_1f0 * 0x10 + 0x21),0x10);
      }
    }
  }
  param_1[2] = 0x8000000000000000;
  return param_1;
}

