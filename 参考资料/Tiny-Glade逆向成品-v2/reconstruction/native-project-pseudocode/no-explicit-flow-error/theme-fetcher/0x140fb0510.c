// VA 0x140fb0510, PDB extent 2679 bytes
// zip::read::zip_archive::ZipArchive::new<std::io::cursor::Cursor<ref$<bytes::bytes::Bytes> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/theme-fetcher/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   zip::read::zip_archive::ZipArchive::new<std::io::cursor::Cursor<ref$<bytes::bytes::Bytes> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/theme-fetcher/src/lib.rs
   Extent: 2679 */

undefined8 * pdb_140fb0510(undefined8 *param_1,longlong param_2,undefined *param_3)

{
  undefined1 auVar1 [16];
  ulonglong arg1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  ulonglong *puVar6;
  longlong lVar7;
  undefined *puVar8;
  ulonglong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulonglong unaff_RBX;
  undefined *puVar12;
  byte *pbVar13;
  undefined *puVar14;
  uint uVar15;
  short sVar16;
  undefined *puVar17;
  undefined1 (*pauVar18) [16];
  undefined *puVar19;
  undefined1 (*pauVar20) [16];
  bool bVar21;
  bool bVar22;
  bool bVar23;
  undefined1 (*pauStack_258) [16];
  byte *pbStack_250;
  undefined *puStack_248;
  ulonglong uStack_240;
  undefined1 auStack_238 [144];
  byte *pbStack_1a8;
  undefined *puStack_1a0;
  ulonglong uStack_198;
  undefined1 (*pauStack_188) [16];
  byte *pbStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 (*pauStack_150) [16];
  byte *pbStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  byte *pbStack_120;
  undefined *puStack_118;
  undefined1 (*pauStack_110) [16];
  byte *pbStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  ulonglong uStack_e0;
  undefined *puStack_a0;
  undefined1 (*pauStack_98) [16];
  ulonglong uStack_90;
  undefined *puStack_88;
  byte *pbStack_80;
  undefined *puStack_78;
  byte *pbStack_70;
  undefined *puStack_68;
  longlong lStack_60;
  undefined *puStack_58;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lStack_60 = param_2;
  puStack_58 = param_3;
  pdb_141ee9160(&pauStack_150,&lStack_60);
  puVar11 = *uStack_128;
  puVar12 = puStack_130;
  puVar5 = puStack_140;
  pauStack_98 = pauStack_150;
  puVar17 = (undefined *)((ulonglong)uStack_138 & 0xffffffff);
  puVar19 = (undefined *)(ulonglong)uStack_138._4_4_;
  if (SBORROW8(0,(longlong)pauStack_150)) {
    param_1[1] = pbStack_148;
    param_1[2] = puStack_140;
    *(int *)(param_1 + 3) = (int)uStack_138;
    *(uint *)((longlong)param_1 + 0x1c) = uStack_138._4_4_;
    *param_1 = 1;
    return param_1;
  }
  pbStack_70 = pbStack_148;
  sVar16 = (short)puStack_130;
  bVar22 = ((uint)((ulonglong)puStack_130 >> 0x10) & 0xffff) == 0xffff;
  bVar23 = (short)((ulonglong)puStack_130 >> 0x20) == -1;
  bVar21 = 0xfffe < (ushort)((ulonglong)puStack_130 >> 0x30);
  if ((((bVar21 || bVar22) || bVar23) || sVar16 == -1) ||
     ((uStack_138._4_4_ == 0xffffffff || (int)uStack_138 == -1) ||
      sVar16 == (short)((ulonglong)puStack_130 >> 0x10))) {
    uVar9 = -(longlong)puStack_140 - 0x2a;
    puVar8 = (undefined *)(*(ulonglong *)(lStack_60 + 0x10) + uVar9);
    if ((longlong)uVar9 < 0 == CARRY8(*(ulonglong *)(lStack_60 + 0x10),uVar9)) {
      puStack_58 = *(undefined **)(lStack_60 + 0x10);
      puVar14 = puVar8;
      if (puStack_58 < puVar8) {
        puVar14 = puStack_58;
      }
      if (3 < (ulonglong)((longlong)puStack_58 - (longlong)puVar14)) {
        lVar7 = *(longlong *)(lStack_60 + 8);
        puVar10 = puVar8 + 4;
        if (*(int *)(puVar14 + lVar7) != 0x7064b50) goto LAB_140fb0883;
        if (puStack_58 < puVar10) {
          puVar10 = puStack_58;
        }
        if (3 < (ulonglong)((longlong)puStack_58 - (longlong)puVar10)) {
          puStack_68 = *uStack_128;
          puVar12 = puVar8 + 8;
          if (puStack_58 < puVar8 + 8) {
            puVar12 = puStack_58;
          }
          if (7 < (ulonglong)((longlong)puStack_58 - (longlong)puVar12)) {
            unaff_RBX = 0;
            if (puVar8 + 0x10 <= puStack_58) {
              unaff_RBX = (longlong)puStack_58 - (longlong)(puVar8 + 0x10);
            }
            if (3 < unaff_RBX) {
              puStack_58 = puVar8 + 0x14;
              if ((((((bVar21 || bVar22) || bVar23) || sVar16 == -1) || ((int)uStack_138 == -1)) ||
                  (uStack_138._4_4_ == 0xffffffff)) ||
                 (*(uint *)(puVar10 + lVar7) == ((uint)puStack_130 & 0xffff))) {
                if (uStack_128 < (undefined *)0x3c) {
                  puVar8 = &UNK_14326771f;
                  unaff_RBX = 0x2f;
                  pbVar13 = (byte *)0x1;
                }
                else {
                  uStack_49 = 1;
                  pdb_141ee9550(&pauStack_150,&lStack_60,*(undefined8 *)(puVar12 + lVar7),
                                (undefined *)((longlong)uStack_128 + -0x3c));
                  puVar8 = puStack_140;
                  unaff_RBX = (ulonglong)uStack_138;
                  pbVar13 = pbStack_148;
                  if ((int)pauStack_150 != 1) {
                    if ((int)uStack_128 == uStack_128._4_4_) {
                      uStack_90 = (ulonglong)puStack_118;
                      puVar10 = puStack_130 + (longlong)puStack_118;
                      puVar12 = puStack_140;
                      puVar11 = puStack_68;
                      if (!CARRY8((ulonglong)puStack_130,(ulonglong)puStack_118))
                      goto LAB_140fb08bc;
                      puVar8 = &UNK_14326774e;
                      unaff_RBX = 0x28;
                      pbVar13 = (byte *)0x1;
                    }
                    else {
                      puVar8 = &UNK_1432676f0;
                      unaff_RBX = 0x2f;
                      pbVar13 = (byte *)0x2;
                    }
                  }
                }
              }
              else {
                puVar8 = &UNK_1432676f0;
                unaff_RBX = 0x2f;
                pbVar13 = (byte *)0x2;
              }
              goto LAB_140fb0678;
            }
          }
        }
      }
      puVar8 = &UNK_1434263b8;
      pbVar13 = (byte *)0x0;
    }
    else {
      pauStack_150 = (undefined1 (*) [16])0x1;
      pbStack_148 = &UNK_143426448;
      uStack_49 = 1;
      pdb_1404b38e0(&pbStack_148);
      puVar10 = puStack_58;
LAB_140fb0883:
      puStack_58 = puVar10;
      puVar10 = puVar11 + -(longlong)puVar17;
      puVar8 = &UNK_14326774e;
      unaff_RBX = 0x28;
      pbVar13 = (byte *)0x1;
      if ((puVar17 <= puVar11) &&
         (uStack_90 = (longlong)puVar10 - (longlong)puVar19, puVar19 <= puVar10)) {
        puVar12 = (undefined *)((ulonglong)puVar12 >> 0x20 & 0xffff);
LAB_140fb08bc:
        puVar19 = (undefined *)0x0;
        puVar17 = puVar12;
        if (puVar11 < puVar12) {
          puVar17 = puVar19;
        }
        uVar9 = (longlong)puVar17 * 0xb0;
        if ((undefined *)0xba2e8ba2e8ba2e < puVar17) {
LAB_140fb08df:
          uStack_49 = 1;
          pdb_142dc7e2a(puVar19,uVar9);
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        if (uVar9 == 0) {
          pbStack_80 = (byte *)0x8;
          puStack_88 = (undefined *)0x0;
          puVar11 = puVar10;
        }
        else {
          pdb_14007ee60();
          puVar19 = (undefined *)0x8;
          puVar11 = (undefined *)0x8;
          pbStack_80 = pub_1406abab0(uVar9,8);
          puStack_88 = puVar17;
          if (pbStack_80 == (byte *)0x0) goto LAB_140fb08df;
        }
        puStack_78 = (undefined *)0x0;
        uStack_4a = 1;
        puVar6 = (ulonglong *)pdb_140f3bda0();
        if ((char)puVar6[2] == '\x01') {
          uStack_168 = (undefined *)*puVar6;
          puVar11 = (undefined *)puVar6[1];
        }
        else {
          uStack_4a = 1;
          uStack_168 = (undefined *)pdb_140f4fd10();
          *puVar6 = (ulonglong)uStack_168;
          puVar6[1] = (ulonglong)puVar11;
          *(undefined1 *)(puVar6 + 2) = 1;
        }
        *puVar6 = (ulonglong)(uStack_168 + 1);
        uStack_4a = 1;
        pdb_141ed7870(&pauStack_150,puVar17);
        pauStack_188 = pauStack_150;
        pbStack_180 = pbStack_148;
        uStack_178 = puStack_140;
        uStack_170 = (ulonglong)uStack_138;
        puVar17 = (undefined *)0x0;
        uStack_160 = puVar11;
        puStack_130 = uStack_168;
        uStack_128 = (undefined1 (*) [16])puVar11;
        puStack_a0 = puVar12;
        puStack_58 = puVar10;
        while( true ) {
          puStack_68 = puVar17;
          if (puStack_a0 <= puVar17) {
            puStack_130 = puStack_78;
            puStack_140 = puStack_88;
            uStack_138 = pbStack_80;
            pauStack_110 = pauStack_188;
            pbStack_108 = pbStack_180;
            uStack_100 = (undefined4)uStack_178;
            uStack_fc = uStack_178._4_4_;
            uStack_f8 = (undefined4)uStack_170;
            uStack_f4 = uStack_170._4_4_;
            uStack_f0 = (undefined4)uStack_168;
            uStack_ec = uStack_168._4_4_;
            uStack_e8 = (undefined4)uStack_160;
            uStack_e4 = uStack_160._4_4_;
            pauStack_150 = (undefined1 (*) [16])0x1;
            pbStack_148 = (byte *)0x1;
            uStack_128 = pauStack_98;
            pbStack_120 = pbStack_70;
            puStack_118 = puVar5;
            uStack_e0 = uStack_90;
            pdb_14007ee60();
            pbVar13 = pub_1406abab0(0x78,8);
            if (pbVar13 != (byte *)0x0) {
              *(ulonglong *)(pbVar13 + 0x70) = uStack_e0;
              *(ulonglong *)(pbVar13 + 0x60) = CONCAT44(uStack_ec,uStack_f0);
              *(ulonglong *)(pbVar13 + 0x68) = CONCAT44(uStack_e4,uStack_e8);
              *(ulonglong *)(pbVar13 + 0x50) = CONCAT44(uStack_fc,uStack_100);
              *(ulonglong *)(pbVar13 + 0x58) = CONCAT44(uStack_f4,uStack_f8);
              *(undefined1 (**) [16])(pbVar13 + 0x40) = pauStack_110;
              *(byte **)(pbVar13 + 0x48) = pbStack_108;
              *(byte **)(pbVar13 + 0x30) = pbStack_120;
              *(undefined **)(pbVar13 + 0x38) = puStack_118;
              *(undefined **)(pbVar13 + 0x20) = puStack_130;
              *(undefined1 (**) [16])(pbVar13 + 0x28) = uStack_128;
              *(undefined **)(pbVar13 + 0x10) = puStack_140;
              *(byte **)(pbVar13 + 0x18) = uStack_138;
              *(undefined1 (**) [16])pbVar13 = pauStack_150;
              *(byte **)(pbVar13 + 8) = pbStack_148;
              param_1[1] = lStack_60;
              param_1[2] = puStack_58;
              param_1[3] = pbVar13;
              *param_1 = 0;
              return param_1;
            }
                    /* WARNING: Subroutine does not return */
            pdb_142dc7e11(8,0x78);
          }
          pdb_141ee9d90(&pauStack_150,&lStack_60,uStack_90);
          pauVar20 = pauStack_150;
          pbVar13 = pbStack_180;
          pbStack_1a8 = pbStack_148;
          puStack_1a0 = puStack_140;
          uStack_198 = (ulonglong)uStack_138;
          if (SBORROW8(0,(longlong)pauStack_150)) break;
          pub_142e32760(auStack_238,&puStack_130,0x90);
          uStack_240 = uStack_198;
          pbStack_250 = pbStack_1a8;
          puStack_248 = puStack_1a0;
          pauStack_258 = pauVar20;
          uStack_4b = 1;
          pdb_140f60be0(&pauStack_150,&pauStack_258);
          uStack_4b = 1;
          pdb_141eeaae0(&pauStack_188,&pauStack_150,puStack_78);
          pub_142e32760(&pauStack_150,&pauStack_258,0xb0);
          puVar12 = puStack_78;
          if (puStack_78 == puStack_88) {
            pdb_142d91cc0(&puStack_88);
          }
          puVar17 = puStack_68 + 1;
          pub_142e32760(pbStack_80 + (longlong)puVar12 * 0xb0,&pauStack_150,0xb0);
          puStack_78 = puVar12 + 1;
        }
        param_1[3] = uStack_138;
        param_1[1] = pbStack_148;
        param_1[2] = puStack_140;
        *param_1 = 1;
        if (pbStack_180 != (byte *)0x0) {
          if (uStack_170 != 0) {
            auVar1 = *pauStack_188;
            pauVar20 = pauStack_188 + 1;
            uVar15 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
            uVar9 = uStack_170;
            pauVar18 = pauStack_188;
            do {
              if ((short)uVar15 == 0) {
                do {
                  auVar1 = *pauVar20;
                  pauVar18 = pauVar18 + -0x20;
                  pauVar20 = pauVar20 + 1;
                  uVar15 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
                } while (uVar15 == 0);
              }
              iVar3 = 0;
              for (uVar4 = uVar15; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
                iVar3 = iVar3 + 1;
              }
              arg1 = *(ulonglong *)((longlong)pauVar18 + (-0x20 - (ulonglong)(uint)(iVar3 << 5)));
              if (arg1 != 0) {
                pub_1406abac0(*(byte **)((longlong)pauVar18 +
                                        (-0x18 - (ulonglong)(uint)(iVar3 << 5))),arg1,1);
              }
              uVar15 = uVar15 - 1 & uVar15;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
          lVar7 = (longlong)pbVar13 * 0x20;
          pbVar13 = pbVar13 + lVar7 + 0x31;
          if (pbVar13 != (byte *)0x0) {
            pub_1406abac0((byte *)((longlong)pauStack_188 - (lVar7 + 0x20)),(ulonglong)pbVar13,0x10)
            ;
          }
        }
        uStack_49 = 1;
        pdb_1404cc8e0(&puStack_88);
        goto LAB_140fb0755;
      }
    }
LAB_140fb0678:
    param_1[1] = pbVar13;
    param_1[2] = puVar8;
    param_1[3] = unaff_RBX;
  }
  else {
    param_1[1] = 2;
    param_1[2] = &UNK_1432676f0;
    param_1[3] = 0x2f;
  }
  *param_1 = 1;
LAB_140fb0755:
  if (pauStack_98 != (undefined1 (*) [16])0x0) {
    pub_1406abac0(pbStack_70,(ulonglong)pauStack_98,1);
  }
  return param_1;
}

