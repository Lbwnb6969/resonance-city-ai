// VA 0x140a955c0, PDB extent 1842 bytes
// zune_jpeg::decoder::JpegDecoder::decode_headers_internal<ref$<slice2$<u8> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   zune_jpeg::decoder::JpegDecoder::decode_headers_internal<ref$<slice2$<u8> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 1842 */

void pdb_140a955c0(char *param_1,longlong param_2)

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
  ushort *puVar10;
  undefined *puVar11;
  ushort uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  bool bVar18;
  undefined8 uVar19;
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
        pdb_142dc8150(&UNK_143045628);
      }
      *(longlong *)(param_2 + 0x7130) = lVar5;
    }
    uVar17 = *(ulonglong *)(param_2 + 0x7140);
    uVar6 = *(ulonglong *)(param_2 + 29000);
    uVar16 = uVar6 + 2;
    if (uVar6 < 0xfffffffffffffffe && uVar16 <= uVar17) {
      uVar12 = *(ushort *)(*(longlong *)(param_2 + 0x7138) + uVar6);
      *(ulonglong *)(param_2 + 29000) = uVar16;
      if (uVar12 != 0xd8ff) {
        *param_1 = '\x02';
        *(ushort *)(param_1 + 2) = uVar12 << 8 | uVar12 >> 8;
        return;
      }
      if (uVar16 < uVar17) {
        pbVar7 = (byte *)0xd;
        uVar19 = 0;
        puVar11 = &UNK_1430454cc;
        uVar15 = 0;
        iVar13 = 0;
        do {
          lVar5 = *(longlong *)(param_2 + 0x7138);
          uVar6 = uVar16 + 1;
          *(ulonglong *)(param_2 + 29000) = uVar6;
          bVar1 = *(byte *)(lVar5 + uVar16);
          bVar18 = 1 < (byte)(bVar1 + 1);
          uVar14 = (uint)bVar18;
          cVar4 = (char)uVar15;
          uVar16 = uVar6;
          uVar15 = (uint)bVar1;
          if (cVar4 == -1 && !bVar18) {
            do {
              if (uVar17 <= uVar6) goto LAB_140a95650;
              cVar4 = (char)uVar15;
              uVar16 = uVar6 + 1;
              *(ulonglong *)(param_2 + 29000) = uVar16;
              uVar15 = (uint)*(byte *)(lVar5 + uVar6);
              uVar14 = uVar15 + 1;
              uVar6 = uVar16;
            } while ((byte)uVar14 < 2);
          }
          uVar6 = (ulonglong)uVar14;
          if (cVar4 != -1) goto LAB_140a956b3;
          cVar4 = pdb_140a94d10(uVar15);
          if (cVar4 == '\f') {
            if ((uVar16 < 0xfffffffffffffffe) && (uVar6 = uVar16 + 2, uVar6 <= uVar17)) {
              uVar12 = *(ushort *)(lVar5 + uVar16);
              *(ulonglong *)(param_2 + 29000) = uVar6;
              uStack_c8 = uVar12 << 8 | uVar12 >> 8;
              if (uStack_c8 < 2) {
                uStack_f8 = SUB84(&uStack_c8,0);
                uStack_f4 = (undefined1)((ulonglong)&uStack_c8 >> 0x20);
                uStack_f3 = (undefined2)((ulonglong)&uStack_c8 >> 0x28);
                uStack_f1 = (undefined1)((ulonglong)&uStack_c8 >> 0x38);
                uStack_f0 = 0x140f71140;
                uStack_e9 = 0;
                pdb_140f60760(auStack_b0,&UNK_14304566a,&uStack_f8);
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
              uVar16 = uVar6 + (ushort)(uStack_c8 - 2);
              *(ulonglong *)(param_2 + 29000) = uVar16;
              iVar13 = 0;
              goto LAB_140a956b3;
            }
            break;
          }
          if ((3 < iVar13) &&
             ((*(char *)(param_2 + 0x711a) != '\0' || *(char *)(param_2 + 0x711b) != '\0' ||
              (*(char *)(param_2 + 0x7119) != '\0')))) {
            *param_1 = '\x01';
            *(undefined **)(param_1 + 8) = &UNK_143045640;
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
              puVar11 = (undefined *)0x18;
              pbVar7 = pub_1406abab0(0x18,1);
              uVar19 = _UNK_143045558;
              if (pbVar7 == (byte *)0x0) {
                pdb_142dc7e2a(1,0x18);
code_r0x000140a95ce2:
                pdb_142dc7e2a(1,0x1c);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              *(undefined8 *)pbVar7 = _UNK_143045550;
              *(undefined8 *)(pbVar7 + 8) = uVar19;
              pbVar7[0x10] = 0x65;
              pbVar7[0x11] = 0x20;
              pbVar7[0x12] = 0x66;
              pbVar7[0x13] = 0x6f;
              pbVar7[0x14] = 0x72;
              pbVar7[0x15] = 0x6d;
              pbVar7[0x16] = 0x61;
              pbVar7[0x17] = 0x74;
              cVar8 = '\0';
              uVar19 = _UNK_142f8bc38;
              goto LAB_140a95c82;
            }
            if (bStack_d1 == 2) {
              *(undefined1 *)(param_2 + 0x71c5) = 1;
              uVar9 = 2;
            }
            else {
              uVar9 = 0;
            }
            pdb_141c21da0(&uStack_f8,uVar9,param_2);
            break;
          case '\x01':
            pdb_141c20950(&uStack_f8,param_2);
            break;
          case '\x02':
          case '\b':
            uStack_f8 = SUB84(&cStack_d2,0);
            uStack_f4 = (undefined1)((ulonglong)&cStack_d2 >> 0x20);
            uStack_f3 = (undefined2)((ulonglong)&cStack_d2 >> 0x28);
            uStack_f1 = (undefined1)((ulonglong)&cStack_d2 >> 0x38);
            uStack_f0 = 0x140a93d70;
            uStack_e9 = 0;
            pdb_140f60760(&puStack_80,&UNK_14304557e,&uStack_f8);
            puVar11 = puStack_80;
            pbVar7 = pbStack_78;
            uVar19 = uStack_70;
            cVar8 = '\0';
            goto LAB_140a95c82;
          default:
LAB_140a958cc:
            cVar8 = '\x01';
            if ((0xfffffffffffffffd < uVar16) || (uVar6 = uVar16 + 2, uVar17 < uVar6))
            goto LAB_140a95c82;
            uVar12 = *(ushort *)(lVar5 + uVar16);
            *(ulonglong *)(param_2 + 29000) = uVar6;
            uStack_d0 = uVar12 << 8 | uVar12 >> 8;
            if (uStack_d0 < 2) {
              uStack_f8 = SUB84(&uStack_d0,0);
              uStack_f4 = (undefined1)((ulonglong)&uStack_d0 >> 0x20);
              uStack_f3 = (undefined2)((ulonglong)&uStack_d0 >> 0x28);
              uStack_f1 = (undefined1)((ulonglong)&uStack_d0 >> 0x38);
              uStack_f0 = 0x140f71140;
              uStack_e9 = 0;
              pdb_140f60760(&uStack_c8,&UNK_143045600,&uStack_f8);
              puVar11 = (undefined *)CONCAT62(uStack_c6,uStack_c8);
              pbVar7 = pbStack_c0;
              uVar19 = uStack_b8;
              cVar8 = '\0';
              goto LAB_140a95c82;
            }
            uVar16 = uVar6 + (ushort)(uStack_d0 - 2);
            *(ulonglong *)(param_2 + 29000) = uVar16;
            iVar13 = 0;
            if (cVar4 == '\x06') {
LAB_140a95b72:
              *(undefined1 *)(param_2 + 0x71c6) = 1;
              *param_1 = '\r';
              return;
            }
            goto LAB_140a956b3;
          case '\x05':
            puVar11 = &UNK_143045568;
            pbVar7 = (byte *)0x16;
            uVar19 = 0;
            goto LAB_140a95c82;
          case '\x06':
            pdb_141c23610(&uStack_f8,param_2);
            if ((char)uStack_f8 == '\r') goto LAB_140a95b72;
            goto code_r0x000140a95b81;
          case '\a':
            pdb_141c22560(&uStack_f8,param_2);
            break;
          case '\t':
            if ((0xfffffffffffffffd < uVar16) || (uVar6 = uVar16 + 2, uVar17 < uVar6))
            goto LAB_140a95c82;
            sVar2 = *(short *)(lVar5 + uVar16);
            *(ulonglong *)(param_2 + 29000) = uVar6;
            if (sVar2 != 0x400) {
              pdb_14007ee60();
              pbVar7 = pub_1406abab0(0x1c,1);
              uVar19 = _UNK_1430455d9;
              if (pbVar7 == (byte *)0x0) goto code_r0x000140a95ce2;
              *(ulonglong *)(pbVar7 + 0xc) = CONCAT44(_UNK_1430455d5,_UNK_1430455d1);
              *(undefined8 *)(pbVar7 + 0x14) = uVar19;
              uVar19 = CONCAT44(_UNK_1430455d1,_UNK_1430455cd);
              *(undefined8 *)pbVar7 = _UNK_1430455c5;
              *(undefined8 *)(pbVar7 + 8) = uVar19;
              puVar11 = (undefined *)0x1c;
              uVar19 = _UNK_142f8bc28;
              cVar8 = '\0';
              goto LAB_140a95c82;
            }
            if ((0xfffffffffffffffd < uVar6) || (uVar17 < uVar16 + 4)) goto LAB_140a95c82;
            uVar12 = *(ushort *)(lVar5 + uVar6);
            *(ulonglong *)(param_2 + 29000) = uVar16 + 4;
            uVar16 = (ulonglong)(ushort)(uVar12 << 8 | uVar12 >> 8);
            *(ulonglong *)(param_2 + 0x71a0) = uVar16;
            *(ulonglong *)(param_2 + 0x71a8) = uVar16;
            goto code_r0x000140a959cc;
          case '\n':
            switch(uVar6 & 0xff) {
            case 0:
              cVar8 = '\x01';
              if ((0xfffffffffffffffd < uVar16) || (uVar6 = uVar16 + 2, uVar17 < uVar6))
              goto LAB_140a95c82;
              uVar12 = *(ushort *)(lVar5 + uVar16);
              *(ulonglong *)(param_2 + 29000) = uVar6;
              uVar12 = uVar12 << 8 | uVar12 >> 8;
              uStack_ca = uVar12;
              if (uVar12 < 2) {
                uStack_f8 = SUB84(&uStack_ca,0);
                uStack_f4 = (undefined1)((ulonglong)&uStack_ca >> 0x20);
                uStack_f3 = (undefined2)((ulonglong)&uStack_ca >> 0x28);
                uStack_f1 = (undefined1)((ulonglong)&uStack_ca >> 0x38);
                uStack_f0 = 0x140f71140;
                uStack_e9 = 0;
                pdb_140f60760(&puStack_98,&UNK_143045600,&uStack_f8);
                cVar8 = '\0';
                puVar11 = puStack_98;
                pbVar7 = pbStack_90;
                uVar19 = uStack_88;
                goto LAB_140a95c82;
              }
              uVar16 = uVar16 + 7;
              if (0xfffffffffffffffa < uVar6) {
                uVar16 = 0xffffffffffffffff;
              }
              if ((uVar16 <= uVar17) && (5 < uVar12)) {
                uStack_cc = 0;
                uStack_d0 = 0;
                uStack_ce = 0;
                puVar10 = &uStack_d0;
                lVar5 = pdb_14091b8c0(param_2 + 0x7138,puVar10,5);
                if (lVar5 != 0) {
                  uStack_f8 = (undefined4)lVar5;
                  uStack_f4 = (undefined1)((ulonglong)lVar5 >> 0x20);
                  uStack_f3 = (undefined2)((ulonglong)lVar5 >> 0x28);
                  uStack_f1 = (undefined1)((ulonglong)lVar5 >> 0x38);
                  uStack_f0 = SUB87(puVar10,0);
                  uStack_e9 = (undefined1)((ulonglong)puVar10 >> 0x38);
                    /* WARNING: Subroutine does not return */
                  pdb_142dc8170(&UNK_143045328,0x2b,&uStack_f8,&UNK_143045308,&UNK_1430455e8);
                }
                if (CONCAT14(uStack_cc,CONCAT22(uStack_ce,uStack_d0)) == 0x31495641) {
                  *(undefined1 *)(param_2 + 0x71c8) = 1;
                }
                uVar12 = uVar12 - 5;
                uVar6 = *(ulonglong *)(param_2 + 29000);
              }
              uVar14 = (uint)(ushort)(uVar12 - 2);
              if (uVar12 < 2) {
                uVar14 = 0;
              }
              *(ulonglong *)(param_2 + 29000) = uVar14 + uVar6;
              goto code_r0x000140a959cc;
            case 1:
              pdb_141c1fcf0(&uStack_f8,param_2);
              break;
            case 2:
              pdb_141c20350(&uStack_f8,param_2);
              break;
            default:
              goto LAB_140a958cc;
            case 0xe:
              pdb_141c205d0(&uStack_f8,param_2);
            }
          }
          if ((char)uStack_f8 != '\r') {
code_r0x000140a95b81:
            uStack_100 = CONCAT13(uStack_f4,uStack_f8._1_3_);
            uStack_fc = (undefined3)(CONCAT13(uStack_f1,CONCAT21(uStack_f3,uStack_f4)) >> 8);
            puVar11 = (undefined *)CONCAT17(uStack_e9,uStack_f0);
            pbVar7 = (byte *)CONCAT17(uStack_e1,uStack_e8);
            uVar19 = CONCAT17(uStack_d9,uStack_e0);
            cVar8 = (char)uStack_f8;
LAB_140a95c82:
            *param_1 = cVar8;
            *(undefined4 *)(param_1 + 1) = uStack_100;
            *(uint *)(param_1 + 4) = CONCAT31(uStack_fc,uStack_100._3_1_);
            *(undefined **)(param_1 + 8) = puVar11;
            *(byte **)(param_1 + 0x10) = pbVar7;
            *(undefined8 *)(param_1 + 0x18) = uVar19;
            return;
          }
code_r0x000140a959cc:
          uVar17 = *(ulonglong *)(param_2 + 0x7140);
          uVar16 = *(ulonglong *)(param_2 + 29000);
          iVar13 = 0;
LAB_140a956b3:
          iVar13 = iVar13 + 1;
        } while (uVar16 < uVar17);
      }
    }
LAB_140a95650:
    *param_1 = '\x01';
    *(undefined **)(param_1 + 8) = &UNK_1430454cc;
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

