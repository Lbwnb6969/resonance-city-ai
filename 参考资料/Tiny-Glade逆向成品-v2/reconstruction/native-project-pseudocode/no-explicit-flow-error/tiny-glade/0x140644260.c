// VA 0x140644260, PDB extent 1846 bytes
// zune_jpeg::decoder::JpegDecoder::decode_headers_internal<ref$<slice2$<u8> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   zune_jpeg::decoder::JpegDecoder::decode_headers_internal<ref$<slice2$<u8> > >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 1846 */

void pdb_140644260(char *param_1,longlong param_2)

{
  byte bVar1;
  short sVar2;
  code *pcVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte *pbVar7;
  char cVar8;
  undefined8 uVar9;
  undefined *puVar10;
  ushort uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  bool bVar17;
  undefined8 uVar18;
  undefined4 uStack_100;
  undefined3 uStack_fc;
  undefined4 uStack_f8;
  undefined1 uStack_f4;
  undefined2 uStack_f3;
  undefined1 uStack_f1;
  undefined7 uStack_f0;
  undefined1 uStack_e9;
  undefined7 uStack_e8;
  undefined1 uStack_e1;
  undefined7 uStack_e0;
  undefined1 uStack_d9;
  char cStack_d2;
  byte bStack_d1;
  ushort uStack_d0;
  undefined2 uStack_ce;
  undefined1 uStack_cc;
  ushort uStack_ca;
  ushort uStack_c8;
  undefined6 uStack_c6;
  byte *pbStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  byte *pbStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  byte *pbStack_78;
  undefined8 uStack_70;
  
  if (*(char *)(param_2 + 0x71c6) == '\0') {
    bVar1 = *(byte *)(param_2 + 0x7118);
    if ((bVar1 < 9) && ((0x183U >> (bVar1 & 0x1f) & 1) != 0)) {
      lVar5 = pdb_140dbff40(bVar1,param_2 + 0x70f8);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_142f8c018);
      }
      *(longlong *)(param_2 + 0x7130) = lVar5;
    }
    uVar16 = *(ulonglong *)(param_2 + 0x7140);
    uVar6 = *(ulonglong *)(param_2 + 29000);
    uVar15 = uVar6 + 2;
    if (uVar6 < 0xfffffffffffffffe && uVar15 <= uVar16) {
      uVar11 = *(ushort *)(*(longlong *)(param_2 + 0x7138) + uVar6);
      *(ulonglong *)(param_2 + 29000) = uVar15;
      if (uVar11 != 0xd8ff) {
        *param_1 = '\x02';
        *(ushort *)(param_1 + 2) = uVar11 << 8 | uVar11 >> 8;
        return;
      }
      if (uVar15 < uVar16) {
        pbVar7 = (byte *)0xd;
        uVar18 = 0;
        puVar10 = &UNK_142f8be1c;
        uVar14 = 0;
        iVar12 = 0;
        do {
          lVar5 = *(longlong *)(param_2 + 0x7138);
          uVar6 = uVar15 + 1;
          *(ulonglong *)(param_2 + 29000) = uVar6;
          bVar1 = *(byte *)(lVar5 + uVar15);
          bVar17 = 1 < (byte)(bVar1 + 1);
          uVar13 = (uint)bVar17;
          cVar4 = (char)uVar14;
          uVar15 = uVar6;
          uVar14 = (uint)bVar1;
          if (cVar4 == -1 && !bVar17) {
            do {
              if (uVar16 <= uVar6) goto LAB_1406442f0;
              cVar4 = (char)uVar14;
              uVar15 = uVar6 + 1;
              *(ulonglong *)(param_2 + 29000) = uVar15;
              uVar14 = (uint)*(byte *)(lVar5 + uVar6);
              uVar13 = uVar14 + 1;
              uVar6 = uVar15;
            } while ((byte)uVar13 < 2);
          }
          uVar6 = (ulonglong)uVar13;
          if (cVar4 != -1) goto LAB_140644353;
          cVar4 = pdb_140643760(uVar14);
          if (cVar4 == '\f') {
            if ((uVar15 < 0xfffffffffffffffe) && (uVar6 = uVar15 + 2, uVar6 <= uVar16)) {
              uVar11 = *(ushort *)(lVar5 + uVar15);
              *(ulonglong *)(param_2 + 29000) = uVar6;
              uStack_c8 = uVar11 << 8 | uVar11 >> 8;
              if (uStack_c8 < 2) {
                uStack_f8 = SUB84(&uStack_c8,0);
                uStack_f4 = (undefined1)((ulonglong)&uStack_c8 >> 0x20);
                uStack_f3 = (undefined2)((ulonglong)&uStack_c8 >> 0x28);
                uStack_f1 = (undefined1)((ulonglong)&uStack_c8 >> 0x38);
                uStack_f0 = 0x140f71140;
                uStack_e9 = 0;
                pdb_140f60760(auStack_b0,&UNK_142f8c05a,&uStack_f8);
                uStack_f1 = auStack_b0[0];
                uStack_f0 = auStack_b0._1_7_;
                uStack_e9 = (undefined1)uStack_a8;
                *param_1 = '\0';
                *(ulonglong *)(param_1 + 1) =
                     CONCAT17(uStack_f1,CONCAT25(uStack_f3,CONCAT14(uStack_f4,uStack_f8)));
                *(ulonglong *)(param_1 + 9) = CONCAT17(uStack_e9,uStack_f0);
                *(undefined8 *)(param_1 + 0x10) = uStack_a8;
                *(undefined8 *)(param_1 + 0x18) = uStack_a0;
                return;
              }
              uVar15 = uVar6 + (ushort)(uStack_c8 - 2);
              *(ulonglong *)(param_2 + 29000) = uVar15;
              iVar12 = 0;
              goto LAB_140644353;
            }
            break;
          }
          if ((3 < iVar12) &&
             ((*(char *)(param_2 + 0x711a) != '\0' || *(char *)(param_2 + 0x711b) != '\0' ||
              (*(char *)(param_2 + 0x7119) != '\0')))) {
            *param_1 = '\x01';
            *(undefined **)(param_1 + 8) = &UNK_142f8c030;
            param_1[0x10] = '*';
            param_1[0x11] = '\0';
            param_1[0x12] = '\0';
            param_1[0x13] = '\0';
            param_1[0x14] = '\0';
            param_1[0x15] = '\0';
            param_1[0x16] = '\0';
            param_1[0x17] = '\0';
            return;
          }
          bStack_d1 = (byte)uVar6;
          cVar8 = '\x01';
          cStack_d2 = cVar4;
          switch(cVar4) {
          case '\0':
            if (2 < bStack_d1) {
              pdb_14007ee60();
              puVar10 = (undefined *)0x18;
              pbVar7 = pub_1406abab0(0x18,1);
              uVar18 = _UNK_142f8bf48;
              if (pbVar7 == (byte *)0x0) {
                pdb_142dc7e2a(1,0x18);
code_r0x000140644986:
                pdb_142dc7e2a(1,0x1c);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              *(undefined8 *)pbVar7 = _UNK_142f8bf40;
              *(undefined8 *)(pbVar7 + 8) = uVar18;
              pbVar7[0x10] = 0x65;
              pbVar7[0x11] = 0x20;
              pbVar7[0x12] = 0x66;
              pbVar7[0x13] = 0x6f;
              pbVar7[0x14] = 0x72;
              pbVar7[0x15] = 0x6d;
              pbVar7[0x16] = 0x61;
              pbVar7[0x17] = 0x74;
              cVar8 = '\0';
              uVar18 = _UNK_142f8bc38;
              goto LAB_140644922;
            }
            if (bStack_d1 == 2) {
              *(undefined1 *)(param_2 + 0x71c5) = 1;
              uVar9 = 2;
            }
            else {
              uVar9 = 0;
            }
            pdb_1403efe90(&uStack_f8,uVar9,param_2);
            break;
          case '\x01':
            pdb_1403ef840(&uStack_f8,param_2);
            break;
          case '\x02':
          case '\b':
            uStack_f8 = SUB84(&cStack_d2,0);
            uStack_f4 = (undefined1)((ulonglong)&cStack_d2 >> 0x20);
            uStack_f3 = (undefined2)((ulonglong)&cStack_d2 >> 0x28);
            uStack_f1 = (undefined1)((ulonglong)&cStack_d2 >> 0x38);
            uStack_f0 = 0x140642cb0;
            uStack_e9 = 0;
            pdb_140f60760(&puStack_80,&UNK_142f8bf6e,&uStack_f8);
            puVar10 = puStack_80;
            pbVar7 = pbStack_78;
            uVar18 = uStack_70;
            cVar8 = '\0';
            goto LAB_140644922;
          default:
LAB_14064456c:
            cVar8 = '\x01';
            if ((0xfffffffffffffffd < uVar15) || (uVar6 = uVar15 + 2, uVar16 < uVar6))
            goto LAB_140644922;
            uVar11 = *(ushort *)(lVar5 + uVar15);
            *(ulonglong *)(param_2 + 29000) = uVar6;
            uStack_d0 = uVar11 << 8 | uVar11 >> 8;
            if (uStack_d0 < 2) {
              uStack_f8 = SUB84(&uStack_d0,0);
              uStack_f4 = (undefined1)((ulonglong)&uStack_d0 >> 0x20);
              uStack_f3 = (undefined2)((ulonglong)&uStack_d0 >> 0x28);
              uStack_f1 = (undefined1)((ulonglong)&uStack_d0 >> 0x38);
              uStack_f0 = 0x140f71140;
              uStack_e9 = 0;
              pdb_140f60760(&uStack_c8,&UNK_142f8bff0,&uStack_f8);
              puVar10 = (undefined *)CONCAT62(uStack_c6,uStack_c8);
              pbVar7 = pbStack_c0;
              uVar18 = uStack_b8;
              cVar8 = '\0';
              goto LAB_140644922;
            }
            uVar15 = uVar6 + (ushort)(uStack_d0 - 2);
            *(ulonglong *)(param_2 + 29000) = uVar15;
            iVar12 = 0;
            if (cVar4 == '\x06') {
LAB_140644812:
              *(undefined1 *)(param_2 + 0x71c6) = 1;
              *param_1 = '\r';
              return;
            }
            goto LAB_140644353;
          case '\x05':
            puVar10 = &UNK_142f8bf58;
            pbVar7 = (byte *)0x16;
            uVar18 = 0;
            goto LAB_140644922;
          case '\x06':
            pdb_1403f2750(&uStack_f8,param_2);
            if ((char)uStack_f8 == '\r') goto LAB_140644812;
            goto code_r0x000140644821;
          case '\a':
            pdb_1403f0e10(&uStack_f8,param_2);
            break;
          case '\t':
            if ((0xfffffffffffffffd < uVar15) || (uVar6 = uVar15 + 2, uVar16 < uVar6))
            goto LAB_140644922;
            sVar2 = *(short *)(lVar5 + uVar15);
            *(ulonglong *)(param_2 + 29000) = uVar6;
            if (sVar2 != 0x400) {
              pdb_14007ee60();
              pbVar7 = pub_1406abab0(0x1c,1);
              uVar18 = _UNK_142f8bfc9;
              if (pbVar7 == (byte *)0x0) goto code_r0x000140644986;
              *(ulonglong *)(pbVar7 + 0xc) = CONCAT44(_UNK_142f8bfc5,_UNK_142f8bfc1);
              *(undefined8 *)(pbVar7 + 0x14) = uVar18;
              uVar18 = CONCAT44(_UNK_142f8bfc1,_UNK_142f8bfbd);
              *(undefined8 *)pbVar7 = _UNK_142f8bfb5;
              *(undefined8 *)(pbVar7 + 8) = uVar18;
              puVar10 = (undefined *)0x1c;
              uVar18 = _UNK_142f8bc28;
              cVar8 = '\0';
              goto LAB_140644922;
            }
            if ((0xfffffffffffffffd < uVar6) || (uVar16 < uVar15 + 4)) goto LAB_140644922;
            uVar11 = *(ushort *)(lVar5 + uVar6);
            *(ulonglong *)(param_2 + 29000) = uVar15 + 4;
            uVar15 = (ulonglong)(ushort)(uVar11 << 8 | uVar11 >> 8);
            *(ulonglong *)(param_2 + 0x71a0) = uVar15;
            *(ulonglong *)(param_2 + 0x71a8) = uVar15;
            goto code_r0x00014064466c;
          case '\n':
            switch(uVar6 & 0xff) {
            case 0:
              cVar8 = '\x01';
              if ((0xfffffffffffffffd < uVar15) || (uVar6 = uVar15 + 2, uVar16 < uVar6))
              goto LAB_140644922;
              uVar11 = *(ushort *)(lVar5 + uVar15);
              *(ulonglong *)(param_2 + 29000) = uVar6;
              uVar11 = uVar11 << 8 | uVar11 >> 8;
              uStack_ca = uVar11;
              if (uVar11 < 2) {
                uStack_f8 = SUB84(&uStack_ca,0);
                uStack_f4 = (undefined1)((ulonglong)&uStack_ca >> 0x20);
                uStack_f3 = (undefined2)((ulonglong)&uStack_ca >> 0x28);
                uStack_f1 = (undefined1)((ulonglong)&uStack_ca >> 0x38);
                uStack_f0 = 0x140f71140;
                uStack_e9 = 0;
                pdb_140f60760(&puStack_98,&UNK_142f8bff0,&uStack_f8);
                cVar8 = '\0';
                puVar10 = puStack_98;
                pbVar7 = pbStack_90;
                uVar18 = uStack_88;
                goto LAB_140644922;
              }
              uVar15 = uVar15 + 7;
              if (0xfffffffffffffffa < uVar6) {
                uVar15 = 0xffffffffffffffff;
              }
              if ((uVar15 <= uVar16) && (5 < uVar11)) {
                uStack_cc = 0;
                uStack_d0 = 0;
                uStack_ce = 0;
                lVar5 = pdb_1406436d0(param_2 + 0x7138,&uStack_d0,5);
                if (lVar5 != 0) {
                  uStack_f8 = (undefined4)lVar5;
                  uStack_f4 = (undefined1)((ulonglong)lVar5 >> 0x20);
                  uStack_f3 = (undefined2)((ulonglong)lVar5 >> 0x28);
                  uStack_f1 = (undefined1)((ulonglong)lVar5 >> 0x38);
                  uStack_f0 = 0x24;
                  uStack_e9 = 0;
                    /* WARNING: Subroutine does not return */
                  pdb_142dc8170(&UNK_142f8bc60,0x2b,&uStack_f8,&UNK_142f8bc90,&UNK_142f8bfd8);
                }
                if (CONCAT14(uStack_cc,CONCAT22(uStack_ce,uStack_d0)) == 0x31495641) {
                  *(undefined1 *)(param_2 + 0x71c8) = 1;
                }
                uVar11 = uVar11 - 5;
                uVar6 = *(ulonglong *)(param_2 + 29000);
              }
              uVar13 = (uint)(ushort)(uVar11 - 2);
              if (uVar11 < 2) {
                uVar13 = 0;
              }
              *(ulonglong *)(param_2 + 29000) = uVar13 + uVar6;
              goto code_r0x00014064466c;
            case 1:
              pdb_1403ee790(&uStack_f8,param_2);
              break;
            case 2:
              pdb_1403eec00(&uStack_f8,param_2);
              break;
            default:
              goto LAB_14064456c;
            case 0xe:
              pdb_1403ef040(&uStack_f8,param_2);
            }
          }
          if ((char)uStack_f8 != '\r') {
code_r0x000140644821:
            uStack_100 = CONCAT13(uStack_f4,uStack_f8._1_3_);
            uStack_fc = (undefined3)(CONCAT13(uStack_f1,CONCAT21(uStack_f3,uStack_f4)) >> 8);
            puVar10 = (undefined *)CONCAT17(uStack_e9,uStack_f0);
            pbVar7 = (byte *)CONCAT17(uStack_e1,uStack_e8);
            uVar18 = CONCAT17(uStack_d9,uStack_e0);
            cVar8 = (char)uStack_f8;
LAB_140644922:
            *param_1 = cVar8;
            *(undefined4 *)(param_1 + 1) = uStack_100;
            *(uint *)(param_1 + 4) = CONCAT31(uStack_fc,uStack_100._3_1_);
            *(undefined **)(param_1 + 8) = puVar10;
            *(byte **)(param_1 + 0x10) = pbVar7;
            *(undefined8 *)(param_1 + 0x18) = uVar18;
            return;
          }
code_r0x00014064466c:
          uVar16 = *(ulonglong *)(param_2 + 0x7140);
          uVar15 = *(ulonglong *)(param_2 + 29000);
          iVar12 = 0;
LAB_140644353:
          iVar12 = iVar12 + 1;
        } while (uVar15 < uVar16);
      }
    }
LAB_1406442f0:
    *param_1 = '\x01';
    *(undefined **)(param_1 + 8) = &UNK_142f8be1c;
    param_1[0x10] = '\r';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
  }
  else {
    *param_1 = '\r';
  }
  return;
}

