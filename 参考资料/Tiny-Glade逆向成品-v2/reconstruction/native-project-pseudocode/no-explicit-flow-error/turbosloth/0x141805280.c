// VA 0x141805280, PDB extent 1420 bytes
// turbosloth::store::DiskStore::try_load<clutter_pack_pipe::ClutterMeshAsset>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   turbosloth::store::DiskStore::try_load<clutter_pack_pipe::ClutterMeshAsset>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
   Extent: 1420 */

undefined8 *
pdb_141805280(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  byte *pbVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  longlong lStack_2b8;
  longlong lStack_2b0;
  ulonglong uStack_208;
  byte *pbStack_200;
  undefined1 auStack_1f8 [16];
  ulonglong uStack_1e8;
  byte *pbStack_1e0;
  ulonglong uStack_1d0;
  byte *pbStack_1c8;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  longlong lStack_1a0;
  byte *pbStack_198;
  longlong lStack_188;
  byte *pbStack_180;
  undefined8 uStack_158;
  undefined8 uStack_150;
  ulonglong uStack_148;
  byte *pbStack_140;
  ulonglong uStack_138;
  undefined1 auStack_130 [184];
  byte *pbStack_78;
  byte *pbStack_70;
  undefined8 uStack_68;
  byte *pbStack_60;
  byte *pbStack_58;
  undefined8 uStack_50;
  
  uStack_50 = 0xfffffffffffffffe;
  pdb_1417c9b60(&lStack_2b8);
  pdb_141c301a0(&uStack_158,param_2,param_3,param_4,&lStack_2b8);
  if ((uStack_158 & 3) == 0) {
    if (lStack_2b0 != 0) {
      lVar1 = lStack_2b0 * 0x10 + 0x10;
      uVar3 = lStack_2b0 + lVar1 + 0x11;
      if (uVar3 != 0) {
        pub_1406abac0((byte *)(lStack_2b8 - lVar1),uVar3,0x10);
      }
    }
    pdb_141c2e820(&uStack_158,param_2,param_3,param_4);
    pbStack_200 = uStack_150;
    uStack_208 = uStack_158;
    auVar4[0] = -((char)uStack_158 == DAT_14300c7d0);
    auVar4[1] = -(uStack_158._1_1_ == UNK_14300c7d1);
    auVar4[2] = -(uStack_158._2_1_ == UNK_14300c7d2);
    auVar4[3] = -(uStack_158._3_1_ == UNK_14300c7d3);
    auVar4[4] = -(uStack_158._4_1_ == UNK_14300c7d4);
    auVar4[5] = -(uStack_158._5_1_ == UNK_14300c7d5);
    auVar4[6] = -(uStack_158._6_1_ == UNK_14300c7d6);
    auVar4[7] = -(uStack_158._7_1_ == UNK_14300c7d7);
    auVar4[8] = -((char)uStack_150 == UNK_14300c7d8);
    auVar4[9] = -(uStack_150._1_1_ == UNK_14300c7d9);
    auVar4[10] = -(uStack_150._2_1_ == UNK_14300c7da);
    auVar4[0xb] = -(uStack_150._3_1_ == UNK_14300c7db);
    auVar4[0xc] = -(uStack_150._4_1_ == UNK_14300c7dc);
    auVar4[0xd] = -(uStack_150._5_1_ == UNK_14300c7dd);
    auVar4[0xe] = -(uStack_150._6_1_ == UNK_14300c7de);
    auVar4[0xf] = -(uStack_150._7_1_ == UNK_14300c7df);
    if ((ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) | (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe | (ushort)(auVar4[0xf] >> 7) << 0xf)
        != 0xffff) {
      pub_142e32760(auStack_1f8,&uStack_148,0xa0);
      pdb_141c2e960(&uStack_158,param_2,param_3,param_4);
      pbStack_58 = uStack_150;
      pdb_140f55fb0(&pbStack_78,uStack_150,uStack_148);
      if (uStack_158 != 0) {
        pub_1406abac0(pbStack_58,uStack_158,1);
      }
      if (SBORROW8(0,(longlong)pbStack_78)) {
        pdb_1404b38e0(&pbStack_70);
        param_1[2] = 0x8000000000000000;
      }
      else {
        pbStack_58 = pbStack_78;
        pbStack_60 = pbStack_70;
        pdb_1414dcec0(&uStack_158,pbStack_70,uStack_68);
        uVar3 = uStack_148;
        if (!SBORROW8(0,uStack_158)) {
          pub_142e32760(&lStack_2b8,&pbStack_140,0xb0);
          if (pbStack_58 != (byte *)0x0) {
            pub_1406abac0(pbStack_60,(ulonglong)pbStack_58,1);
          }
          uStack_148 = uStack_158;
          pbStack_140 = uStack_150;
          uStack_138 = uVar3;
          pub_142e32760(auStack_130,&lStack_2b8,0xb0);
          uStack_158 = 1;
          uStack_150 = (byte *)0x1;
          pdb_14007ee60();
          pbVar2 = pub_1406abab0(0xd8,8);
          if (pbVar2 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc7e11(8,0xd8);
          }
          pub_142e32760(pbVar2,&uStack_158,0xd8);
          param_1[4] = uStack_1a8;
          param_1[2] = uStack_1b8;
          param_1[3] = uStack_1b0;
          *param_1 = pbVar2;
          param_1[1] = &UNK_14333e200;
          if (uStack_1e8 != 0) {
            pub_1406abac0(pbStack_1e0,uStack_1e8,1);
          }
          if (uStack_1d0 != 0) {
            pub_1406abac0(pbStack_1c8,uStack_1d0,1);
          }
          if (lStack_1a0 != 0) {
            pub_1406abac0(pbStack_198,lStack_1a0 * 0x30,0x10);
          }
          if (lStack_188 == 0) {
            return param_1;
          }
          uVar3 = lStack_188 << 4;
          goto LAB_141805331;
        }
        param_1[2] = 0x8000000000000000;
        if (pbStack_58 != (byte *)0x0) {
          pub_1406abac0(pbStack_60,(ulonglong)pbStack_58,1);
        }
      }
      pdb_14098b650(&uStack_208);
      return param_1;
    }
  }
  else {
    if ((int)uStack_158 == 2) {
      param_1[2] = 0x8000000000000000;
      if (lStack_2b0 == 0) {
        return param_1;
      }
      lVar1 = lStack_2b0 * 0x10 + 0x10;
      uVar3 = lStack_2b0 + lVar1 + 0x11;
      if (uVar3 == 0) {
        return param_1;
      }
      pbStack_180 = (byte *)(lStack_2b8 - lVar1);
LAB_141805331:
      pub_1406abac0(pbStack_180,uVar3,0x10);
      return param_1;
    }
    if (lStack_2b0 != 0) {
      lVar1 = lStack_2b0 * 0x10 + 0x10;
      uVar3 = lStack_2b0 + lVar1 + 0x11;
      if (uVar3 != 0) {
        pub_1406abac0((byte *)(lStack_2b8 - lVar1),uVar3,0x10);
      }
    }
  }
  param_1[2] = 0x8000000000000000;
  return param_1;
}

