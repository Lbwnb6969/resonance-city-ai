// VA 0x1418067b0, PDB extent 1388 bytes
// turbosloth::store::DiskStore::try_load<asset::texture::blob::TextureAssetBlob>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   turbosloth::store::DiskStore::try_load<asset::texture::blob::TextureAssetBlob>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
   Extent: 1388 */

undefined8 *
pdb_1418067b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  byte *pbVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  byte bStack_1f8;
  char cStack_1f7;
  char cStack_1f6;
  char cStack_1f5;
  char cStack_1f4;
  char cStack_1f3;
  char cStack_1f2;
  char cStack_1f1;
  char cStack_1f0;
  char cStack_1ef;
  char cStack_1ee;
  char cStack_1ed;
  char cStack_1ec;
  char cStack_1eb;
  char cStack_1ea;
  char cStack_1e9;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  longlong lStack_148;
  longlong lStack_140;
  undefined1 auStack_138 [16];
  ulonglong uStack_128;
  byte *pbStack_120;
  ulonglong uStack_110;
  byte *pbStack_108;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  longlong lStack_e0;
  byte *pbStack_d8;
  longlong lStack_c8;
  byte *pbStack_c0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  byte *pbStack_78;
  byte *pbStack_70;
  undefined8 uStack_68;
  byte *pbStack_60;
  byte *pbStack_58;
  undefined8 uStack_50;
  
  uStack_50 = 0xfffffffffffffffe;
  pdb_1417c9b60(&lStack_148);
  pdb_141c301a0(&bStack_1f8,param_2,param_3,param_4,&lStack_148);
  if ((bStack_1f8 & 3) == 0) {
    if (lStack_140 != 0) {
      lVar1 = lStack_140 * 0x10 + 0x10;
      uVar3 = lStack_140 + lVar1 + 0x11;
      if (uVar3 != 0) {
        pub_1406abac0((byte *)(lStack_148 - lVar1),uVar3,0x10);
      }
    }
    pdb_141c2e820(&bStack_1f8,param_2,param_3,param_4);
    auVar4[0] = -(bStack_1f8 == DAT_14300c7d0);
    auVar4[1] = -(cStack_1f7 == UNK_14300c7d1);
    auVar4[2] = -(cStack_1f6 == UNK_14300c7d2);
    auVar4[3] = -(cStack_1f5 == UNK_14300c7d3);
    auVar4[4] = -(cStack_1f4 == UNK_14300c7d4);
    auVar4[5] = -(cStack_1f3 == UNK_14300c7d5);
    auVar4[6] = -(cStack_1f2 == UNK_14300c7d6);
    auVar4[7] = -(cStack_1f1 == UNK_14300c7d7);
    auVar4[8] = -(cStack_1f0 == UNK_14300c7d8);
    auVar4[9] = -(cStack_1ef == UNK_14300c7d9);
    auVar4[10] = -(cStack_1ee == UNK_14300c7da);
    auVar4[0xb] = -(cStack_1ed == UNK_14300c7db);
    auVar4[0xc] = -(cStack_1ec == UNK_14300c7dc);
    auVar4[0xd] = -(cStack_1eb == UNK_14300c7dd);
    auVar4[0xe] = -(cStack_1ea == UNK_14300c7de);
    auVar4[0xf] = -(cStack_1e9 == UNK_14300c7df);
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
      pub_142e32760(auStack_138,&uStack_1e8,0xa0);
      pdb_141c2e960(&bStack_1f8,param_2,param_3,param_4);
      pbStack_58 = (byte *)CONCAT17(cStack_1e9,
                                    CONCAT16(cStack_1ea,
                                             CONCAT15(cStack_1eb,
                                                      CONCAT14(cStack_1ec,
                                                               CONCAT13(cStack_1ed,
                                                                        CONCAT12(cStack_1ee,
                                                                                 CONCAT11(cStack_1ef
                                                                                          ,
                                                  cStack_1f0)))))));
      pdb_140f55fb0(&pbStack_78,pbStack_58,uStack_1e8);
      uVar3 = CONCAT17(cStack_1f1,
                       CONCAT16(cStack_1f2,
                                CONCAT15(cStack_1f3,
                                         CONCAT14(cStack_1f4,
                                                  CONCAT13(cStack_1f5,
                                                           CONCAT12(cStack_1f6,
                                                                    CONCAT11(cStack_1f7,bStack_1f8))
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
        pdb_1414de710(&bStack_1f8,pbStack_70,uStack_68);
        lVar1 = CONCAT17(cStack_1f1,
                         CONCAT16(cStack_1f2,
                                  CONCAT15(cStack_1f3,
                                           CONCAT14(cStack_1f4,
                                                    CONCAT13(cStack_1f5,
                                                             CONCAT12(cStack_1f6,
                                                                      CONCAT11(cStack_1f7,bStack_1f8
                                                                              )))))));
        if (!SBORROW8(0,lVar1)) {
          uStack_98 = uStack_1e0;
          uStack_90 = uStack_1d8;
          uStack_88 = uStack_1d0;
          if (pbStack_58 != (byte *)0x0) {
            pub_1406abac0(pbStack_60,(ulonglong)pbStack_58,1);
          }
          pdb_14007ee60();
          pbVar2 = pub_1406abab0(0x40,8);
          if (pbVar2 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc7e11(8,0x40);
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
          *(longlong *)(pbVar2 + 0x10) = lVar1;
          *(ulonglong *)(pbVar2 + 0x18) =
               CONCAT17(cStack_1e9,
                        CONCAT16(cStack_1ea,
                                 CONCAT15(cStack_1eb,
                                          CONCAT14(cStack_1ec,
                                                   CONCAT13(cStack_1ed,
                                                            CONCAT12(cStack_1ee,
                                                                     CONCAT11(cStack_1ef,cStack_1f0)
                                                                    ))))));
          *(undefined8 *)(pbVar2 + 0x20) = uStack_1e8;
          *(undefined8 *)(pbVar2 + 0x38) = uStack_88;
          *(undefined8 *)(pbVar2 + 0x28) = uStack_98;
          *(undefined8 *)(pbVar2 + 0x30) = uStack_90;
          param_1[4] = uStack_e8;
          param_1[2] = uStack_f8;
          param_1[3] = uStack_f0;
          *param_1 = pbVar2;
          param_1[1] = &UNK_14333e280;
          if (uStack_128 != 0) {
            pub_1406abac0(pbStack_120,uStack_128,1);
          }
          if (uStack_110 != 0) {
            pub_1406abac0(pbStack_108,uStack_110,1);
          }
          if (lStack_e0 != 0) {
            pub_1406abac0(pbStack_d8,lStack_e0 * 0x30,0x10);
          }
          if (lStack_c8 == 0) {
            return param_1;
          }
          uVar3 = lStack_c8 << 4;
          goto LAB_14180685b;
        }
        param_1[2] = 0x8000000000000000;
        if (pbStack_58 != (byte *)0x0) {
          pub_1406abac0(pbStack_60,(ulonglong)pbStack_58,1);
        }
      }
      pdb_14098b650(&lStack_148);
      return param_1;
    }
  }
  else {
    if (CONCAT13(cStack_1f5,CONCAT12(cStack_1f6,CONCAT11(cStack_1f7,bStack_1f8))) == 2) {
      param_1[2] = 0x8000000000000000;
      if (lStack_140 == 0) {
        return param_1;
      }
      lVar1 = lStack_140 * 0x10 + 0x10;
      uVar3 = lStack_140 + lVar1 + 0x11;
      if (uVar3 == 0) {
        return param_1;
      }
      pbStack_c0 = (byte *)(lStack_148 - lVar1);
LAB_14180685b:
      pub_1406abac0(pbStack_c0,uVar3,0x10);
      return param_1;
    }
    if (lStack_140 != 0) {
      lVar1 = lStack_140 * 0x10 + 0x10;
      uVar3 = lStack_140 + lVar1 + 0x11;
      if (uVar3 != 0) {
        pub_1406abac0((byte *)(lStack_148 - lVar1),uVar3,0x10);
      }
    }
  }
  param_1[2] = 0x8000000000000000;
  return param_1;
}

