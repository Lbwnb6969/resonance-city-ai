// VA 0x141db0030, PDB extent 2844 bytes
// zip::read::zip_archive::ZipArchive::new<std::io::cursor::Cursor<alloc::vec::Vec<u8,alloc::alloc::Global> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   zip::read::zip_archive::ZipArchive::new<std::io::cursor::Cursor<alloc::vec::Vec<u8,alloc::alloc::Global>
   > >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/lib.rs
   Extent: 2844 */

ulonglong * pdb_141db0030(ulonglong *param_1,ulonglong *param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  uint uVar6;
  undefined *puVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulonglong *puVar14;
  undefined *puVar15;
  byte *pbVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  short sVar20;
  ulonglong uVar21;
  undefined1 (*pauVar22) [16];
  undefined *puVar23;
  undefined1 (*pauVar24) [16];
  bool bVar25;
  bool bVar26;
  bool bVar27;
  undefined1 (*pauStack_248) [16];
  byte *pbStack_240;
  undefined *puStack_238;
  ulonglong *puStack_230;
  undefined1 auStack_228 [144];
  byte *pbStack_198;
  undefined *puStack_190;
  ulonglong *puStack_188;
  undefined1 (*pauStack_178) [16];
  byte *pbStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 (*pauStack_148) [16];
  byte *pbStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  byte *pbStack_118;
  undefined *puStack_110;
  undefined1 (*pauStack_108) [16];
  byte *pbStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  ulonglong uStack_d8;
  undefined *puStack_98;
  undefined1 (*pauStack_90) [16];
  ulonglong uStack_88;
  undefined *puStack_80;
  byte *pbStack_78;
  undefined *puStack_70;
  byte *pbStack_68;
  undefined *puStack_60;
  ulonglong *puStack_58;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puStack_58 = param_2;
  pdb_1426ea0a0(&pauStack_148);
  puVar7 = puStack_138;
  pauStack_90 = pauStack_148;
  puVar15 = (undefined *)((ulonglong)uStack_130 & 0xffffffff);
  puVar13 = (undefined *)(ulonglong)uStack_130._4_4_;
  puVar14 = puStack_58;
  if (SBORROW8(0,(longlong)pauStack_148)) {
    param_1[1] = (ulonglong)pbStack_140;
    param_1[2] = (ulonglong)puStack_138;
    *(int *)(param_1 + 3) = (int)uStack_130;
    *(uint *)((longlong)param_1 + 0x1c) = uStack_130._4_4_;
    *param_1 = 0x8000000000000000;
    goto LAB_141db01d0;
  }
  pbStack_68 = pbStack_140;
  sVar20 = (short)puStack_128;
  bVar26 = ((uint)((ulonglong)puStack_128 >> 0x10) & 0xffff) == 0xffff;
  bVar27 = (short)((ulonglong)puStack_128 >> 0x20) == -1;
  bVar25 = 0xfffe < (ushort)((ulonglong)puStack_128 >> 0x30);
  if ((((bVar25 || bVar26) || bVar27) || sVar20 == -1) ||
     ((uStack_130._4_4_ == 0xffffffff || (int)uStack_130 == -1) ||
      sVar20 == (short)((ulonglong)puStack_128 >> 0x10))) {
    uVar17 = -(longlong)puStack_138 - 0x2a;
    uVar21 = puStack_58[2];
    uVar10 = uVar21 + uVar17;
    if ((longlong)uVar17 < 0 == CARRY8(uVar21,uVar17)) {
      uVar17 = uVar10;
      if (uVar21 < uVar10) {
        uVar17 = uVar21;
      }
      puStack_58[3] = uVar10;
      if (uVar21 - uVar17 < 4) goto LAB_141db0184;
      uVar3 = puStack_58[1];
      iVar2 = *(int *)(uVar3 + uVar17);
      uVar17 = uVar10 + 4;
      puStack_58[3] = uVar17;
      if (iVar2 != 0x7064b50) goto LAB_141db03ea;
      if (uVar21 < uVar17) {
        uVar17 = uVar21;
      }
      if (uVar21 - uVar17 < 4) {
LAB_141db0184:
        puStack_58[3] = uVar21;
      }
      else {
        puStack_60 = *uStack_120;
        uVar18 = uVar10 + 8;
        if (uVar21 < uVar10 + 8) {
          uVar18 = uVar21;
        }
        if (uVar21 - uVar18 < 8) goto LAB_141db0184;
        puVar14 = (ulonglong *)0x0;
        if (uVar10 + 0x10 <= uVar21) {
          puVar14 = (ulonglong *)(uVar21 - (uVar10 + 0x10));
        }
        if ((ulonglong *)0x3 < puVar14) {
          uVar19 = *(uint *)(uVar3 + uVar17);
          uVar4 = *(undefined8 *)(uVar3 + uVar18);
          puStack_58[3] = uVar10 + 0x14;
          if ((((((bVar25 || bVar26) || bVar27) || sVar20 == -1) || ((int)uStack_130 == -1)) ||
              (uStack_130._4_4_ == 0xffffffff)) || (uVar19 == ((uint)puStack_128 & 0xffff))) {
            if (uStack_120 < (undefined *)0x3c) {
              puVar23 = &UNK_1433da694;
              puVar14 = (ulonglong *)0x2f;
              pbVar16 = (byte *)0x1;
            }
            else {
              uStack_49 = 1;
              pdb_1426ea490(&pauStack_148,puStack_58,uVar4,
                            (undefined *)((longlong)uStack_120 + -0x3c));
              puVar23 = puStack_138;
              puVar14 = uStack_130;
              pbVar16 = pbStack_140;
              if ((int)pauStack_148 != 1) {
                if ((int)uStack_120 == uStack_120._4_4_) {
                  uStack_88 = (ulonglong)puStack_110;
                  puVar11 = puStack_128 + (longlong)puStack_110;
                  puVar15 = puStack_138;
                  uStack_120 = (undefined1 (*) [16])puStack_60;
                  if (!CARRY8((ulonglong)puStack_128,(ulonglong)puStack_110)) goto LAB_141db0423;
                  puVar23 = &UNK_1433da6c3;
                  puVar14 = (ulonglong *)0x28;
                  pbVar16 = (byte *)0x1;
                }
                else {
                  puVar23 = &UNK_1433da665;
                  puVar14 = (ulonglong *)0x2f;
                  pbVar16 = (byte *)0x2;
                }
              }
            }
          }
          else {
            puVar23 = &UNK_1433da665;
            puVar14 = (ulonglong *)0x2f;
            pbVar16 = (byte *)0x2;
          }
          goto LAB_141db0192;
        }
        puStack_58[3] = uVar21;
      }
      puVar23 = &UNK_143586e60;
      pbVar16 = (byte *)0x0;
    }
    else {
      pauStack_148 = (undefined1 (*) [16])0x1;
      pbStack_140 = &UNK_143586ef0;
      uStack_49 = 1;
      pdb_1404b38e0(&pbStack_140);
LAB_141db03ea:
      puVar11 = (undefined *)((longlong)uStack_120 + -(longlong)puVar15);
      puVar23 = &UNK_1433da6c3;
      puVar14 = (ulonglong *)0x28;
      pbVar16 = (byte *)0x1;
      if ((puVar15 <= uStack_120) &&
         (uStack_88 = (longlong)puVar11 - (longlong)puVar13, puVar13 <= puVar11)) {
        puVar15 = (undefined *)((ulonglong)puStack_128 >> 0x20 & 0xffff);
LAB_141db0423:
        puVar23 = (undefined *)0x0;
        puVar13 = puVar15;
        if (uStack_120 < puVar15) {
          puVar13 = puVar23;
        }
        uVar21 = (longlong)puVar13 * 0xb0;
        if ((undefined *)0xba2e8ba2e8ba2e < puVar13) {
LAB_141db0446:
          uStack_49 = 1;
          pdb_142dc7e2a(puVar23,uVar21);
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        if (uVar21 == 0) {
          pbStack_78 = (byte *)0x8;
          puStack_80 = (undefined *)0x0;
          puVar12 = puVar11;
        }
        else {
          pdb_14007ee60();
          puVar23 = (undefined *)0x8;
          puVar12 = (undefined *)0x8;
          pbStack_78 = pub_1406abab0(uVar21,8);
          puStack_80 = puVar13;
          if (pbStack_78 == (byte *)0x0) goto LAB_141db0446;
        }
        puStack_70 = (undefined *)0x0;
        uStack_4a = 1;
        plVar8 = (longlong *)pdb_140f3bda0();
        if ((char)plVar8[2] == '\x01') {
          uStack_158 = *plVar8;
          puVar12 = (undefined *)plVar8[1];
        }
        else {
          uStack_4a = 1;
          uStack_158 = pdb_140f4fd10();
          *plVar8 = uStack_158;
          plVar8[1] = (longlong)puVar12;
          *(undefined1 *)(plVar8 + 2) = 1;
        }
        *plVar8 = uStack_158 + 1;
        uStack_4a = 1;
        pdb_140d9c2c0(&pauStack_148,0x20,puVar13,1);
        uStack_168 = puStack_138;
        uStack_160 = uStack_130;
        pauStack_178 = pauStack_148;
        pbStack_170 = pbStack_140;
        puStack_58[3] = (ulonglong)puVar11;
        puVar13 = (undefined *)0x0;
        uStack_150 = puVar12;
        puStack_98 = puVar15;
        while( true ) {
          puStack_60 = puVar13;
          if (puStack_98 <= puVar13) {
            puStack_128 = puStack_70;
            puStack_138 = puStack_80;
            uStack_130 = (ulonglong *)pbStack_78;
            pauStack_108 = pauStack_178;
            pbStack_100 = pbStack_170;
            uStack_f8 = (undefined4)uStack_168;
            uStack_f4 = uStack_168._4_4_;
            uStack_f0 = (undefined4)uStack_160;
            uStack_ec = uStack_160._4_4_;
            uStack_e8 = (undefined4)uStack_158;
            uStack_e4 = uStack_158._4_4_;
            uStack_e0 = (undefined4)uStack_150;
            uStack_dc = uStack_150._4_4_;
            pauStack_148 = (undefined1 (*) [16])0x1;
            pbStack_140 = (byte *)0x1;
            uStack_120 = pauStack_90;
            pbStack_118 = pbStack_68;
            puStack_110 = puVar7;
            uStack_d8 = uStack_88;
            pdb_14007ee60();
            pbVar16 = pub_1406abab0(0x78,8);
            if (pbVar16 != (byte *)0x0) {
              *(ulonglong *)(pbVar16 + 0x70) = uStack_d8;
              *(ulonglong *)(pbVar16 + 0x60) = CONCAT44(uStack_e4,uStack_e8);
              *(ulonglong *)(pbVar16 + 0x68) = CONCAT44(uStack_dc,uStack_e0);
              *(ulonglong *)(pbVar16 + 0x50) = CONCAT44(uStack_f4,uStack_f8);
              *(ulonglong *)(pbVar16 + 0x58) = CONCAT44(uStack_ec,uStack_f0);
              *(undefined1 (**) [16])(pbVar16 + 0x40) = pauStack_108;
              *(byte **)(pbVar16 + 0x48) = pbStack_100;
              *(byte **)(pbVar16 + 0x30) = pbStack_118;
              *(undefined **)(pbVar16 + 0x38) = puStack_110;
              *(undefined **)(pbVar16 + 0x20) = puStack_128;
              *(undefined1 (**) [16])(pbVar16 + 0x28) = uStack_120;
              *(undefined **)(pbVar16 + 0x10) = puStack_138;
              *(ulonglong **)(pbVar16 + 0x18) = uStack_130;
              *(undefined1 (**) [16])pbVar16 = pauStack_148;
              *(byte **)(pbVar16 + 8) = pbStack_140;
              uVar21 = *puStack_58;
              uVar10 = puStack_58[1];
              uVar17 = puStack_58[3];
              param_1[2] = puStack_58[2];
              param_1[3] = uVar17;
              *param_1 = uVar21;
              param_1[1] = uVar10;
              param_1[4] = (ulonglong)pbVar16;
              return param_1;
            }
                    /* WARNING: Subroutine does not return */
            pdb_142dc7e11(8,0x78);
          }
          pdb_1426eaae0(&pauStack_148,puStack_58,uStack_88);
          pauVar24 = pauStack_148;
          pbVar16 = pbStack_170;
          pbStack_198 = pbStack_140;
          puStack_190 = puStack_138;
          puStack_188 = uStack_130;
          if (SBORROW8(0,(longlong)pauStack_148)) break;
          pub_142e32760(auStack_228,&puStack_128,0x90);
          puStack_230 = puStack_188;
          pbStack_240 = pbStack_198;
          puStack_238 = puStack_190;
          pauStack_248 = pauVar24;
          uStack_4b = 1;
          pdb_140f60be0(&pauStack_148,&pauStack_248);
          uStack_4b = 1;
          pdb_141da2040(&pauStack_178,&pauStack_148,puStack_70);
          pub_142e32760(&pauStack_148,&pauStack_248,0xb0);
          puVar15 = puStack_70;
          if (puStack_70 == puStack_80) {
            pdb_142d91cc0(&puStack_80);
          }
          puVar13 = puStack_60 + 1;
          pub_142e32760(pbStack_78 + (longlong)puVar15 * 0xb0,&pauStack_148,0xb0);
          puStack_70 = puVar15 + 1;
        }
        param_1[3] = (ulonglong)uStack_130;
        param_1[1] = (ulonglong)pbStack_140;
        param_1[2] = (ulonglong)puStack_138;
        *param_1 = 0x8000000000000000;
        if (pbStack_170 != (byte *)0x0) {
          if (uStack_160 != (ulonglong *)0x0) {
            auVar1 = *pauStack_178;
            pauVar24 = pauStack_178 + 1;
            uVar19 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
            puVar14 = uStack_160;
            pauVar22 = pauStack_178;
            do {
              if ((short)uVar19 == 0) {
                do {
                  auVar1 = *pauVar24;
                  pauVar22 = pauVar22 + -0x20;
                  pauVar24 = pauVar24 + 1;
                  uVar19 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
                } while (uVar19 == 0);
              }
              iVar2 = 0;
              for (uVar6 = uVar19; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                iVar2 = iVar2 + 1;
              }
              uVar21 = *(ulonglong *)((longlong)pauVar22 + (-0x20 - (ulonglong)(uint)(iVar2 << 5)));
              if (uVar21 != 0) {
                pub_1406abac0(*(byte **)((longlong)pauVar22 +
                                        (-0x18 - (ulonglong)(uint)(iVar2 << 5))),uVar21,1);
              }
              uVar19 = uVar19 - 1 & uVar19;
              puVar14 = (ulonglong *)((longlong)puVar14 - 1);
            } while (puVar14 != (ulonglong *)0x0);
          }
          lVar9 = (longlong)pbVar16 * 0x20;
          pbVar16 = pbVar16 + lVar9 + 0x31;
          if (pbVar16 != (byte *)0x0) {
            pub_1406abac0((byte *)((longlong)pauStack_178 - (lVar9 + 0x20)),(ulonglong)pbVar16,0x10)
            ;
          }
        }
        uStack_49 = 1;
        pdb_1404cc8e0(&puStack_80);
        puVar14 = puStack_58;
        goto joined_r0x000141db01c3;
      }
    }
LAB_141db0192:
    param_1[1] = (ulonglong)pbVar16;
    param_1[2] = (ulonglong)puVar23;
    param_1[3] = (ulonglong)puVar14;
    *param_1 = 0x8000000000000000;
    puVar14 = puStack_58;
  }
  else {
    param_1[1] = 2;
    param_1[2] = (ulonglong)&UNK_1433da665;
    param_1[3] = 0x2f;
    *param_1 = 0x8000000000000000;
  }
joined_r0x000141db01c3:
  puStack_58 = puVar14;
  if (pauStack_90 != (undefined1 (*) [16])0x0) {
    pub_1406abac0(pbStack_68,(ulonglong)pauStack_90,1);
  }
LAB_141db01d0:
  if (*puVar14 != 0) {
    pub_1406abac0((byte *)puVar14[1],*puVar14,1);
  }
  return param_1;
}

