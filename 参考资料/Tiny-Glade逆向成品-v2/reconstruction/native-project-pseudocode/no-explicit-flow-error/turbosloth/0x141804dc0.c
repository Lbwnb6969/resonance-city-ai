// VA 0x141804dc0, PDB extent 1212 bytes
// turbosloth::store::DiskStore::try_load<clutter_pack_pipe::ClutterIconImage>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   turbosloth::store::DiskStore::try_load<clutter_pack_pipe::ClutterIconImage>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
   Extent: 1212 */

undefined8 *
pdb_141804dc0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  byte *pbVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  byte bStack_1d8;
  char cStack_1d7;
  char cStack_1d6;
  char cStack_1d5;
  char cStack_1d4;
  char cStack_1d3;
  char cStack_1d2;
  char cStack_1d1;
  char cStack_1d0;
  char cStack_1cf;
  char cStack_1ce;
  char cStack_1cd;
  char cStack_1cc;
  char cStack_1cb;
  char cStack_1ca;
  char cStack_1c9;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  longlong lStack_128;
  longlong lStack_120;
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
  pdb_1417c9b60(&lStack_128);
  pdb_141c301a0(&bStack_1d8,param_2,param_3,param_4,&lStack_128);
  if ((bStack_1d8 & 3) == 0) {
    if (lStack_120 != 0) {
      lVar1 = lStack_120 * 0x10 + 0x10;
      uVar3 = lStack_120 + lVar1 + 0x11;
      if (uVar3 != 0) {
        pub_1406abac0((byte *)(lStack_128 - lVar1),uVar3,0x10);
      }
    }
    pdb_141c2e820(&bStack_1d8,param_2,param_3,param_4);
    auVar4[0] = -(bStack_1d8 == DAT_14300c7d0);
    auVar4[1] = -(cStack_1d7 == UNK_14300c7d1);
    auVar4[2] = -(cStack_1d6 == UNK_14300c7d2);
    auVar4[3] = -(cStack_1d5 == UNK_14300c7d3);
    auVar4[4] = -(cStack_1d4 == UNK_14300c7d4);
    auVar4[5] = -(cStack_1d3 == UNK_14300c7d5);
    auVar4[6] = -(cStack_1d2 == UNK_14300c7d6);
    auVar4[7] = -(cStack_1d1 == UNK_14300c7d7);
    auVar4[8] = -(cStack_1d0 == UNK_14300c7d8);
    auVar4[9] = -(cStack_1cf == UNK_14300c7d9);
    auVar4[10] = -(cStack_1ce == UNK_14300c7da);
    auVar4[0xb] = -(cStack_1cd == UNK_14300c7db);
    auVar4[0xc] = -(cStack_1cc == UNK_14300c7dc);
    auVar4[0xd] = -(cStack_1cb == UNK_14300c7dd);
    auVar4[0xe] = -(cStack_1ca == UNK_14300c7de);
    auVar4[0xf] = -(cStack_1c9 == UNK_14300c7df);
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
      pub_142e32760(auStack_118,&uStack_1c8,0xa0);
      pdb_141c2e960(&bStack_1d8,param_2,param_3,param_4);
      pbStack_58 = (byte *)CONCAT17(cStack_1c9,
                                    CONCAT16(cStack_1ca,
                                             CONCAT15(cStack_1cb,
                                                      CONCAT14(cStack_1cc,
                                                               CONCAT13(cStack_1cd,
                                                                        CONCAT12(cStack_1ce,
                                                                                 CONCAT11(cStack_1cf
                                                                                          ,
                                                  cStack_1d0)))))));
      pdb_140f55fb0(&pbStack_78,pbStack_58,uStack_1c8);
      uVar3 = CONCAT17(cStack_1d1,
                       CONCAT16(cStack_1d2,
                                CONCAT15(cStack_1d3,
                                         CONCAT14(cStack_1d4,
                                                  CONCAT13(cStack_1d5,
                                                           CONCAT12(cStack_1d6,
                                                                    CONCAT11(cStack_1d7,bStack_1d8))
                                                          )))));
      if (uVar3 != 0) {
        pub_1406abac0(pbStack_58,uVar3,1);
      }
      if (SBORROW8(0,(longlong)pbStack_78)) {
        pdb_1404b38e0(&pbStack_70);
        param_1[2] = 0x8000000000000000;
      }
      else {
        pbStack_58 = pbStack_78;
        pbStack_60 = pbStack_70;
        pdb_1414ddc10(&bStack_1d8,pbStack_70,uStack_68);
        if ((bStack_1d8 & 1) == 0) {
          if (pbStack_58 != (byte *)0x0) {
            pub_1406abac0(pbStack_60,(ulonglong)pbStack_58,1);
          }
          pdb_14007ee60();
          pbVar2 = pub_1406abab0(0x20,0x10);
          if (pbVar2 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc7e11(0x10,0x20);
          }
          pbVar2[0] = 1;
          pbVar2[1] = 0;
          pbVar2[2] = 0;
          pbVar2[3] = 0;
          pbVar2[4] = 0;
          pbVar2[5] = 0;
          pbVar2[6] = 0;
          pbVar2[7] = 0;
          pbVar2[8] = 1;
          pbVar2[9] = 0;
          pbVar2[10] = 0;
          pbVar2[0xb] = 0;
          pbVar2[0xc] = 0;
          pbVar2[0xd] = 0;
          pbVar2[0xe] = 0;
          pbVar2[0xf] = 0;
          *(undefined8 *)(pbVar2 + 0x10) = uStack_1c8;
          *(undefined8 *)(pbVar2 + 0x18) = uStack_1c0;
          param_1[4] = uStack_c8;
          param_1[2] = uStack_d8;
          param_1[3] = uStack_d0;
          *param_1 = pbVar2;
          param_1[1] = &UNK_14333e1e0;
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
          uVar3 = lStack_a8 << 4;
          goto LAB_141804e6b;
        }
        param_1[2] = 0x8000000000000000;
        if (pbStack_58 != (byte *)0x0) {
          pub_1406abac0(pbStack_60,(ulonglong)pbStack_58,1);
        }
      }
      pdb_14098b650(&lStack_128);
      return param_1;
    }
  }
  else {
    if (CONCAT13(cStack_1d5,CONCAT12(cStack_1d6,CONCAT11(cStack_1d7,bStack_1d8))) == 2) {
      param_1[2] = 0x8000000000000000;
      if (lStack_120 == 0) {
        return param_1;
      }
      lVar1 = lStack_120 * 0x10 + 0x10;
      uVar3 = lStack_120 + lVar1 + 0x11;
      if (uVar3 == 0) {
        return param_1;
      }
      pbStack_a0 = (byte *)(lStack_128 - lVar1);
LAB_141804e6b:
      pub_1406abac0(pbStack_a0,uVar3,0x10);
      return param_1;
    }
    if (lStack_120 != 0) {
      lVar1 = lStack_120 * 0x10 + 0x10;
      uVar3 = lStack_120 + lVar1 + 0x11;
      if (uVar3 != 0) {
        pub_1406abac0((byte *)(lStack_128 - lVar1),uVar3,0x10);
      }
    }
  }
  param_1[2] = 0x8000000000000000;
  return param_1;
}

