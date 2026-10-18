// VA 0x142d0e770, PDB extent 2192 bytes
// zune_jpeg::headers::parse_sos<ref$<alloc::vec::Vec<u8,alloc::alloc::Global> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   zune_jpeg::headers::parse_sos<ref$<alloc::vec::Vec<u8,alloc::alloc::Global> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
   Extent: 2192 */

undefined1 * pdb_142d0e770(undefined1 *param_1,longlong param_2)

{
  ulonglong uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  undefined1 auVar10 [14];
  undefined1 auVar11 [14];
  undefined1 auVar12 [14];
  undefined1 auVar13 [14];
  undefined1 auVar14 [14];
  undefined1 auVar15 [14];
  undefined1 auVar16 [14];
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  ushort uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  byte *pbVar27;
  uint uVar28;
  undefined1 auVar29 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  byte bStack_129;
  undefined7 uStack_128;
  undefined1 uStack_121;
  undefined7 uStack_120;
  undefined1 uStack_119;
  undefined7 uStack_118;
  undefined1 uStack_111;
  undefined7 uStack_110;
  undefined1 uStack_109;
  byte bStack_103;
  ushort uStack_102;
  ulonglong uStack_100;
  undefined1 auStack_f8 [16];
  undefined8 uStack_e8;
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [16];
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  
  uVar23 = *(ulonglong *)(param_2 + 0x7140);
  if (0xfffffffffffffffd < uVar23) goto LAB_142d0ef5f;
  lVar5 = *(longlong *)(param_2 + 0x7138);
  uVar25 = uVar23 + 2;
  uVar6 = *(ulonglong *)(lVar5 + 0x10);
  if (uVar6 < uVar25) goto LAB_142d0ef5f;
  lVar7 = *(longlong *)(lVar5 + 8);
  uVar22 = *(ushort *)(lVar7 + uVar23);
  *(ulonglong *)(param_2 + 0x7140) = uVar25;
  uStack_102 = uVar22 << 8 | uVar22 >> 8;
  if (uVar6 <= uVar25) goto LAB_142d0ef5f;
  uVar25 = uVar23 + 3;
  *(ulonglong *)(param_2 + 0x7140) = uVar25;
  bStack_103 = *(byte *)(lVar7 + 2 + uVar23);
  *(byte *)(param_2 + 0x71c7) = bStack_103;
  if (uStack_102 == (ushort)((ushort)bStack_103 * 2 + 6)) {
    if (3 < (byte)(bStack_103 - 1)) {
      uStack_128 = SUB87(&bStack_103,0);
      uStack_121 = (undefined1)((ulonglong)&bStack_103 >> 0x38);
      uStack_120 = 0x140f6e8f0;
      uStack_119 = 0;
      pdb_140f60760(auStack_e0,&UNK_1436b7071,&uStack_128);
      uStack_121 = (undefined1)auStack_e0._0_8_;
      uStack_120 = SUB87(auStack_e0._0_8_,1);
      uStack_119 = (undefined1)auStack_e0._8_8_;
      uStack_118 = SUB87(auStack_e0._8_8_,1);
      goto LAB_142d0e92c;
    }
    if (*(char *)(param_2 + 0x71b9) == '\0') {
      *param_1 = 1;
      *(undefined **)(param_1 + 8) = &UNK_1436b70c7;
      *(undefined8 *)(param_1 + 0x10) = 0x3f;
      return param_1;
    }
    uVar6 = *(ulonglong *)(lVar5 + 0x10);
    if (uVar6 <= uVar25) goto LAB_142d0ef5f;
    lVar7 = *(longlong *)(lVar5 + 8);
    *(ulonglong *)(param_2 + 0x7140) = uVar23 + 4;
    bStack_129 = *(byte *)(lVar7 + 3 + uVar23);
    if (uVar6 <= uVar23 + 4) goto LAB_142d0ef5f;
    uVar6 = uVar23 + 5;
    *(ulonglong *)(param_2 + 0x7140) = uVar6;
    bVar2 = *(byte *)(lVar7 + 4 + uVar23);
    bVar3 = *(byte *)(param_2 + 0x71b9);
    if ((ulonglong)bVar3 != 0) {
      uStack_100 = *(ulonglong *)(param_2 + 0x10);
      pbVar27 = (byte *)(*(longlong *)(param_2 + 8) + 0x1d0);
      uVar26 = 0;
      do {
        if (uStack_100 == uVar26) goto LAB_142d0ef8a;
        if (*pbVar27 == bStack_129) goto LAB_142d0e972;
        uVar26 = uVar26 + 1;
        pbVar27 = pbVar27 + 0x1d8;
      } while (bVar3 != uVar26);
LAB_142d0e97e:
      uStack_128 = SUB87(&bStack_129,0);
      uStack_121 = (undefined1)((ulonglong)&bStack_129 >> 0x38);
      uStack_120 = 0x140f6e8f0;
      uStack_119 = 0;
      uStack_118 = SUB87(&uStack_100,0);
      uStack_111 = (undefined1)((ulonglong)&uStack_100 >> 0x38);
      uStack_110 = 0x140f72a40;
      uStack_109 = 0;
      pdb_140f60760(auStack_b0,&UNK_1436b71f8,&uStack_128);
      uStack_121 = (undefined1)auStack_b0._0_8_;
      uStack_120 = SUB87(auStack_b0._0_8_,1);
      uStack_119 = (undefined1)auStack_b0._8_8_;
      uStack_118 = SUB87(auStack_b0._8_8_,1);
      uStack_111 = (undefined1)auStack_b0._16_8_;
      uStack_110 = SUB87(auStack_b0._16_8_,1);
      *param_1 = 7;
      goto LAB_142d0e934;
    }
    uVar26 = 0;
LAB_142d0e972:
    if ((byte)uVar26 == bVar3) {
LAB_142d0e977:
      uStack_100 = *(ulonglong *)(param_2 + 0x10);
      goto LAB_142d0e97e;
    }
    uVar26 = uVar26 & 0xff;
    uVar24 = *(ulonglong *)(param_2 + 0x10);
    if (uVar24 <= uVar26) {
LAB_142d0efed:
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar26,uVar24,&UNK_1436b71e0);
    }
    lVar7 = *(longlong *)(param_2 + 8);
    *(ulonglong *)(lVar7 + 0x90 + uVar26 * 0x1d8) = (ulonglong)(bVar2 >> 4);
    *(ulonglong *)(lVar7 + 0x98 + uVar26 * 0x1d8) = (ulonglong)(bVar2 & 0xf);
    *(ulonglong *)(param_2 + 0x7178) = uVar26;
    uVar18 = _UNK_142f52dcc;
    iVar17 = _UNK_142f52dc8;
    iVar19 = _UNK_142f52dc4;
    if (bStack_103 == 1) {
      uVar23 = *(ulonglong *)(lVar5 + 0x10);
      uVar26 = uVar6;
      if (uVar23 <= uVar6) goto LAB_142d0ef5f;
    }
    else {
      uVar25 = *(ulonglong *)(lVar5 + 0x10);
      if (uVar25 <= uVar6) goto LAB_142d0ef5f;
      uVar22 = (ushort)bStack_129;
      lVar7 = *(longlong *)(lVar5 + 8);
      *(ulonglong *)(param_2 + 0x7140) = uVar23 + 6;
      bStack_129 = *(byte *)(lVar7 + 5 + uVar23);
      auVar30 = pshuflw(in_XMM2,ZEXT416((uint)bStack_129),0);
      auVar8._10_2_ = 0;
      auVar8._0_10_ = auVar30._0_10_;
      auVar8._12_2_ = auVar30._6_2_;
      auVar11._8_2_ = auVar30._4_2_;
      auVar11._0_8_ = auVar30._0_8_;
      auVar11._10_4_ = auVar8._10_4_;
      auVar14._6_8_ = 0;
      auVar14._0_6_ = auVar11._8_6_;
      auVar31._0_4_ = -(uint)(auVar30._0_2_ == uVar22);
      auVar31._4_4_ = -(uint)((int)CONCAT82(SUB148(auVar14 << 0x40,6),auVar30._2_2_) == iVar19);
      auVar31._8_4_ = -(uint)(auVar11._8_4_ == iVar17);
      auVar31._12_4_ = -(uint)(auVar8._10_4_ >> 0x10 == uVar18);
      iVar19 = movmskps((uint)bStack_129,auVar31);
      if (iVar19 != 0) {
LAB_142d0eb5e:
        uStack_128 = SUB87(&bStack_129,0);
        uStack_121 = (undefined1)((ulonglong)&bStack_129 >> 0x38);
        uStack_120 = 0x140f6e8f0;
        uStack_119 = 0;
        pdb_140f60760(auStack_c8,&UNK_1436b7233,&uStack_128);
        uStack_121 = (undefined1)auStack_c8._0_8_;
        uStack_120 = SUB87(auStack_c8._0_8_,1);
        uStack_119 = (undefined1)auStack_c8._8_8_;
        uStack_118 = SUB87(auStack_c8._8_8_,1);
        uStack_111 = (undefined1)auStack_c8._16_8_;
        uStack_110 = SUB87(auStack_c8._16_8_,1);
        *param_1 = 7;
        goto LAB_142d0e934;
      }
      if (uVar25 <= uVar23 + 6) goto LAB_142d0ef5f;
      uVar1 = uVar23 + 7;
      *(ulonglong *)(param_2 + 0x7140) = uVar1;
      bVar2 = *(byte *)(lVar7 + 6 + uVar23);
      bVar3 = *(byte *)(param_2 + 0x71b9);
      if ((ulonglong)bVar3 != 0) {
        uStack_100 = *(ulonglong *)(param_2 + 0x10);
        pbVar27 = (byte *)(*(longlong *)(param_2 + 8) + 0x1d0);
        uVar26 = 0;
        do {
          if (uStack_100 == uVar26) goto LAB_142d0ef8a;
          if (*pbVar27 == bStack_129) goto LAB_142d0ec6f;
          uVar26 = uVar26 + 1;
          pbVar27 = pbVar27 + 0x1d8;
        } while (bVar3 != uVar26);
        goto LAB_142d0e97e;
      }
      uVar26 = 0;
LAB_142d0ec6f:
      if ((byte)uVar26 == bVar3) goto LAB_142d0e977;
      uVar26 = uVar26 & 0xff;
      uVar24 = *(ulonglong *)(param_2 + 0x10);
      if (uVar24 <= uVar26) goto LAB_142d0efed;
      lVar7 = *(longlong *)(param_2 + 8);
      *(ulonglong *)(lVar7 + 0x90 + uVar26 * 0x1d8) = (ulonglong)(bVar2 >> 4);
      *(ulonglong *)(lVar7 + 0x98 + uVar26 * 0x1d8) = (ulonglong)(bVar2 & 0xf);
      *(ulonglong *)(param_2 + 0x7180) = uVar26;
      uVar26 = uVar1;
      uVar25 = uVar6;
      if (bStack_103 != 2) {
        uVar25 = *(ulonglong *)(lVar5 + 0x10);
        if (uVar25 <= uVar1) goto LAB_142d0ef5f;
        uVar28 = (uint)bStack_129;
        lVar7 = *(longlong *)(lVar5 + 8);
        *(ulonglong *)(param_2 + 0x7140) = uVar23 + 8;
        bStack_129 = *(byte *)(lVar7 + 7 + uVar23);
        uVar20 = (uint)bStack_129;
        auVar30 = pshuflw(auVar31,ZEXT416(uVar20),0);
        auVar9._10_2_ = 0;
        auVar9._0_10_ = auVar30._0_10_;
        auVar9._12_2_ = auVar30._6_2_;
        auVar12._8_2_ = auVar30._4_2_;
        auVar12._0_8_ = auVar30._0_8_;
        auVar12._10_4_ = auVar9._10_4_;
        auVar15._6_8_ = 0;
        auVar15._0_6_ = auVar12._8_6_;
        auVar32._0_4_ = -(uint)(auVar30._0_2_ == uVar22);
        auVar32._4_4_ = -(uint)((uint)CONCAT82(SUB148(auVar15 << 0x40,6),auVar30._2_2_) == uVar28);
        auVar32._8_4_ = -(uint)(auVar12._8_4_ == iVar17);
        auVar32._12_4_ = -(uint)(auVar9._10_4_ >> 0x10 == uVar18);
        iVar19 = movmskps(uVar20,auVar32);
        if (iVar19 != 0) goto LAB_142d0eb5e;
        if (uVar25 <= uVar23 + 8) goto LAB_142d0ef5f;
        uVar6 = uVar23 + 9;
        *(ulonglong *)(param_2 + 0x7140) = uVar6;
        bVar2 = *(byte *)(lVar7 + 8 + uVar23);
        bVar3 = *(byte *)(param_2 + 0x71b9);
        if ((ulonglong)bVar3 != 0) {
          uStack_100 = *(ulonglong *)(param_2 + 0x10);
          pbVar27 = (byte *)(*(longlong *)(param_2 + 8) + 0x1d0);
          uVar26 = 0;
          do {
            if (uStack_100 == uVar26) goto LAB_142d0ef8a;
            if (*pbVar27 == bStack_129) goto LAB_142d0ee5b;
            uVar26 = uVar26 + 1;
            pbVar27 = pbVar27 + 0x1d8;
          } while (bVar3 != uVar26);
          goto LAB_142d0e97e;
        }
        uVar26 = 0;
LAB_142d0ee5b:
        if ((byte)uVar26 == bVar3) goto LAB_142d0e977;
        uVar26 = uVar26 & 0xff;
        uVar24 = *(ulonglong *)(param_2 + 0x10);
        if (uVar24 <= uVar26) goto LAB_142d0efed;
        lVar7 = *(longlong *)(param_2 + 8);
        *(ulonglong *)(lVar7 + 0x90 + uVar26 * 0x1d8) = (ulonglong)(bVar2 >> 4);
        *(ulonglong *)(lVar7 + 0x98 + uVar26 * 0x1d8) = (ulonglong)(bVar2 & 0xf);
        *(ulonglong *)(param_2 + 0x7188) = uVar26;
        uVar26 = uVar6;
        uVar25 = uVar1;
        if (bStack_103 != 3) {
          uVar25 = *(ulonglong *)(lVar5 + 0x10);
          if (uVar25 <= uVar6) goto LAB_142d0ef5f;
          lVar7 = *(longlong *)(lVar5 + 8);
          *(ulonglong *)(param_2 + 0x7140) = uVar23 + 10;
          bStack_129 = *(byte *)(lVar7 + 9 + uVar23);
          uVar21 = (uint)bStack_129;
          auVar30 = pshuflw(ZEXT416(uVar21),ZEXT416(uVar21),0);
          auVar10._10_2_ = 0;
          auVar10._0_10_ = auVar30._0_10_;
          auVar10._12_2_ = auVar30._6_2_;
          auVar13._8_2_ = auVar30._4_2_;
          auVar13._0_8_ = auVar30._0_8_;
          auVar13._10_4_ = auVar10._10_4_;
          auVar16._6_8_ = 0;
          auVar16._0_6_ = auVar13._8_6_;
          auVar29._0_4_ = -(uint)(auVar30._0_2_ == uVar22);
          auVar29._4_4_ = -(uint)((uint)CONCAT82(SUB148(auVar16 << 0x40,6),auVar30._2_2_) == uVar28)
          ;
          auVar29._8_4_ = -(uint)(auVar13._8_4_ == uVar20);
          auVar29._12_4_ = -(uint)(auVar10._10_4_ >> 0x10 == uVar18);
          iVar19 = movmskps(uVar21,auVar29);
          if (iVar19 != 0) goto LAB_142d0eb5e;
          if (uVar25 <= uVar23 + 10) goto LAB_142d0ef5f;
          *(ulonglong *)(param_2 + 0x7140) = uVar23 + 0xb;
          bVar2 = *(byte *)(lVar7 + 10 + uVar23);
          bVar3 = *(byte *)(param_2 + 0x71b9);
          if ((ulonglong)bVar3 != 0) {
            uStack_100 = *(ulonglong *)(param_2 + 0x10);
            pbVar27 = (byte *)(*(longlong *)(param_2 + 8) + 0x1d0);
            uVar26 = 0;
            do {
              if (uStack_100 == uVar26) {
LAB_142d0ef8a:
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(uStack_100,uStack_100,&UNK_1436b71c8);
              }
              if (*pbVar27 == bStack_129) goto LAB_142d0ef9e;
              uVar26 = uVar26 + 1;
              pbVar27 = pbVar27 + 0x1d8;
            } while (bVar3 != uVar26);
            goto LAB_142d0e97e;
          }
          uVar26 = 0;
LAB_142d0ef9e:
          if ((byte)uVar26 == bVar3) goto LAB_142d0e977;
          uVar26 = uVar26 & 0xff;
          uVar24 = *(ulonglong *)(param_2 + 0x10);
          if (uVar24 <= uVar26) goto LAB_142d0efed;
          lVar7 = *(longlong *)(param_2 + 8);
          *(ulonglong *)(lVar7 + 0x90 + uVar26 * 0x1d8) = (ulonglong)(bVar2 >> 4);
          *(ulonglong *)(lVar7 + 0x98 + uVar26 * 0x1d8) = (ulonglong)(bVar2 & 0xf);
          *(ulonglong *)(param_2 + 0x7190) = uVar26;
          uVar26 = uVar23 + 0xb;
          uVar25 = uVar6;
        }
      }
      uVar23 = *(ulonglong *)(lVar5 + 0x10);
      if (uVar23 <= uVar26) goto LAB_142d0ef5f;
    }
    lVar5 = *(longlong *)(lVar5 + 8);
    *(ulonglong *)(param_2 + 0x7140) = uVar25 + 3;
    bVar2 = *(byte *)(lVar5 + uVar26);
    *(byte *)(param_2 + 0x71c3) = bVar2;
    if (uVar23 <= uVar25 + 3) {
LAB_142d0ef5f:
      *param_1 = 1;
      *(undefined **)(param_1 + 8) = &UNK_1436b67cb;
      *(undefined8 *)(param_1 + 0x10) = 0xd;
      return param_1;
    }
    *(ulonglong *)(param_2 + 0x7140) = uVar25 + 4;
    bVar3 = *(byte *)(lVar5 + 3 + uVar25);
    *(byte *)(param_2 + 0x71c4) = bVar3;
    if (uVar23 <= uVar25 + 4) goto LAB_142d0ef5f;
    *(ulonglong *)(param_2 + 0x7140) = uVar25 + 5;
    bVar4 = *(byte *)(lVar5 + 4 + uVar25);
    *(byte *)(param_2 + 0x71c5) = bVar4 >> 4;
    if (bVar3 < 0x40) {
      if (bVar2 < 0x40) {
        if (bVar4 < 0xe0) {
          *(byte *)(param_2 + 0x71c6) = bVar4 & 0xf;
          if ((bVar4 & 0xf) < 0xe) {
            *param_1 = 0xd;
            return param_1;
          }
          uStack_128 = (undefined7)(param_2 + 0x71c6);
          uStack_121 = (undefined1)((ulonglong)(param_2 + 0x71c6) >> 0x38);
          uStack_120 = 0x140f6e8f0;
          uStack_119 = 0;
          pdb_140f60760(auStack_50,&UNK_1436b7106,&uStack_128);
          uStack_121 = (undefined1)auStack_50._0_8_;
          uStack_120 = SUB87(auStack_50._0_8_,1);
          uStack_119 = (undefined1)auStack_50._8_8_;
          uStack_118 = SUB87(auStack_50._8_8_,1);
          uStack_88 = uStack_40;
        }
        else {
          uStack_128 = (undefined7)(param_2 + 0x71c6);
          uStack_121 = (undefined1)((ulonglong)(param_2 + 0x71c6) >> 0x38);
          uStack_120 = 0x140f6e8f0;
          uStack_119 = 0;
          pdb_140f60760(auStack_68,&UNK_1436b7135,&uStack_128);
          uStack_121 = (undefined1)auStack_68._0_8_;
          uStack_120 = SUB87(auStack_68._0_8_,1);
          uStack_119 = (undefined1)auStack_68._8_8_;
          uStack_118 = SUB87(auStack_68._8_8_,1);
          uStack_88 = uStack_58;
        }
      }
      else {
        uStack_128 = (undefined7)(param_2 + 0x71c3);
        uStack_121 = (undefined1)((ulonglong)(param_2 + 0x71c3) >> 0x38);
        uStack_120 = 0x140f6e8f0;
        uStack_119 = 0;
        pdb_140f60760(auStack_80,&UNK_1436b7164,&uStack_128);
        uStack_121 = (undefined1)auStack_80._0_8_;
        uStack_120 = SUB87(auStack_80._0_8_,1);
        uStack_119 = (undefined1)auStack_80._8_8_;
        uStack_118 = SUB87(auStack_80._8_8_,1);
        uStack_88 = uStack_70;
      }
    }
    else {
      uStack_128 = (undefined7)(param_2 + 0x71c4);
      uStack_121 = (undefined1)((ulonglong)(param_2 + 0x71c4) >> 0x38);
      uStack_120 = 0x140f6e8f0;
      uStack_119 = 0;
      pdb_140f60760(auStack_98,&UNK_1436b7193,&uStack_128);
      uStack_121 = (undefined1)auStack_98._0_8_;
      uStack_120 = SUB87(auStack_98._0_8_,1);
      uStack_119 = (undefined1)auStack_98._8_8_;
      uStack_118 = SUB87(auStack_98._8_8_,1);
    }
    uStack_111 = (undefined1)uStack_88;
    uStack_110 = (undefined7)((ulonglong)uStack_88 >> 8);
  }
  else {
    uStack_128 = SUB87(&uStack_102,0);
    uStack_121 = (undefined1)((ulonglong)&uStack_102 >> 0x38);
    uStack_120 = 0x140f71140;
    uStack_119 = 0;
    pdb_140f60760(auStack_f8,&UNK_1436b7265,&uStack_128);
    uStack_121 = (undefined1)auStack_f8._0_8_;
    uStack_120 = SUB87(auStack_f8._0_8_,1);
    uStack_119 = (undefined1)auStack_f8._8_8_;
    uStack_118 = SUB87(auStack_f8._8_8_,1);
    uStack_d0 = uStack_e8;
LAB_142d0e92c:
    uStack_111 = (undefined1)uStack_d0;
    uStack_110 = (undefined7)((ulonglong)uStack_d0 >> 8);
  }
  *param_1 = 6;
LAB_142d0e934:
  *(ulonglong *)(param_1 + 1) = CONCAT17(uStack_121,uStack_128);
  *(ulonglong *)(param_1 + 9) = CONCAT17(uStack_119,uStack_120);
  *(ulonglong *)(param_1 + 0x10) = CONCAT71(uStack_118,uStack_119);
  *(ulonglong *)(param_1 + 0x18) = CONCAT71(uStack_110,uStack_111);
  return param_1;
}

