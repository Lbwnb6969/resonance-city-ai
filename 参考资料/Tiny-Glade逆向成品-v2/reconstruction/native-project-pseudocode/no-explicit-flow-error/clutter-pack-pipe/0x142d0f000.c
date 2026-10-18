// VA 0x142d0f000, PDB extent 2221 bytes
// zune_jpeg::headers::parse_sos<ref$<slice2$<u8> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: zune_jpeg::headers::parse_sos<ref$<slice2$<u8> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
   Extent: 2221 */

undefined1 * pdb_142d0f000(undefined1 *param_1,longlong param_2)

{
  ulonglong uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auVar9 [14];
  undefined1 auVar10 [14];
  undefined1 auVar11 [14];
  undefined1 auVar12 [14];
  undefined1 auVar13 [14];
  undefined1 auVar14 [14];
  undefined1 auVar15 [14];
  undefined1 auVar16 [14];
  undefined1 auVar17 [14];
  int iVar18;
  uint uVar19;
  ushort uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  byte *pbVar27;
  ulonglong uVar28;
  uint uVar29;
  undefined1 auVar30 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  byte bStack_131;
  undefined7 uStack_130;
  undefined1 uStack_129;
  undefined7 uStack_128;
  undefined1 uStack_121;
  undefined7 uStack_120;
  undefined1 uStack_119;
  undefined7 uStack_118;
  undefined1 uStack_111;
  byte bStack_10b;
  ushort uStack_10a;
  ulonglong uStack_108;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined1 auStack_e8 [16];
  undefined8 uStack_d8;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  
  uVar5 = *(ulonglong *)(param_2 + 0x7140);
  uVar6 = *(ulonglong *)(param_2 + 29000);
  uVar25 = uVar6 + 2;
  if (0xfffffffffffffffd < uVar6 || uVar5 < uVar25) goto LAB_142d0f804;
  lVar7 = *(longlong *)(param_2 + 0x7138);
  uVar20 = *(ushort *)(lVar7 + uVar6);
  *(ulonglong *)(param_2 + 29000) = uVar25;
  uStack_10a = uVar20 << 8 | uVar20 >> 8;
  if (uVar5 <= uVar25) goto LAB_142d0f804;
  uVar25 = uVar6 + 3;
  *(ulonglong *)(param_2 + 29000) = uVar25;
  bStack_10b = *(byte *)(lVar7 + 2 + uVar6);
  *(byte *)(param_2 + 0x71cf) = bStack_10b;
  if (uStack_10a == (ushort)((ushort)bStack_10b * 2 + 6)) {
    if ((byte)(bStack_10b - 1) < 4) {
      if (*(char *)(param_2 + 0x71c1) == '\0') {
        *param_1 = 1;
        *(undefined **)(param_1 + 8) = &UNK_1436b70c7;
        *(undefined8 *)(param_1 + 0x10) = 0x3f;
        return param_1;
      }
      if (uVar5 <= uVar25) goto LAB_142d0f804;
      *(ulonglong *)(param_2 + 29000) = uVar6 + 4;
      bStack_131 = *(byte *)(lVar7 + 3 + uVar6);
      if (uVar5 <= uVar6 + 4) goto LAB_142d0f804;
      uVar24 = uVar6 + 5;
      *(ulonglong *)(param_2 + 29000) = uVar24;
      bVar2 = *(byte *)(lVar7 + 4 + uVar6);
      bVar3 = *(byte *)(param_2 + 0x71c1);
      if ((ulonglong)bVar3 != 0) {
        uStack_108 = *(ulonglong *)(param_2 + 0x10);
        pbVar27 = (byte *)(*(longlong *)(param_2 + 8) + 0x1d0);
        uVar28 = 0;
        do {
          if (uStack_108 == uVar28) goto LAB_142d0f831;
          if (*pbVar27 == bStack_131) goto LAB_142d0f1fe;
          uVar28 = uVar28 + 1;
          pbVar27 = pbVar27 + 0x1d8;
        } while (bVar3 != uVar28);
        goto LAB_142d0f20e;
      }
      uVar28 = 0;
LAB_142d0f1fe:
      if ((byte)uVar28 != bVar3) {
        uVar28 = uVar28 & 0xff;
        uVar26 = *(ulonglong *)(param_2 + 0x10);
        if (uVar26 <= uVar28) {
LAB_142d0f89a:
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar28,uVar26,&UNK_1436b71e0);
        }
        lVar8 = *(longlong *)(param_2 + 8);
        *(ulonglong *)(lVar8 + 0x90 + uVar28 * 0x1d8) = (ulonglong)(bVar2 >> 4);
        *(ulonglong *)(lVar8 + 0x98 + uVar28 * 0x1d8) = (ulonglong)(bVar2 & 0xf);
        *(ulonglong *)(param_2 + 0x7180) = uVar28;
        uVar19 = _UNK_142f52dcc;
        iVar18 = _UNK_142f52dc8;
        iVar21 = _UNK_142f52dc4;
        if (bStack_10b != 1) {
          if (uVar5 <= uVar24) goto LAB_142d0f804;
          uVar20 = (ushort)bStack_131;
          *(ulonglong *)(param_2 + 29000) = uVar6 + 6;
          bStack_131 = *(byte *)(lVar7 + 5 + uVar6);
          auVar31 = pshuflw(in_XMM2,ZEXT416((uint)bStack_131),0);
          auVar9._10_2_ = 0;
          auVar9._0_10_ = auVar31._0_10_;
          auVar9._12_2_ = auVar31._6_2_;
          auVar12._8_2_ = auVar31._4_2_;
          auVar12._0_8_ = auVar31._0_8_;
          auVar12._10_4_ = auVar9._10_4_;
          auVar15._6_8_ = 0;
          auVar15._0_6_ = auVar12._8_6_;
          auVar32._0_4_ = -(uint)(auVar31._0_2_ == uVar20);
          auVar32._4_4_ = -(uint)((int)CONCAT82(SUB148(auVar15 << 0x40,6),auVar31._2_2_) == iVar21);
          auVar32._8_4_ = -(uint)(auVar12._8_4_ == iVar18);
          auVar32._12_4_ = -(uint)(auVar9._10_4_ >> 0x10 == uVar19);
          iVar21 = movmskps((uint)bStack_131,auVar32);
          if (iVar21 != 0) {
LAB_142d0f3f9:
            uStack_130 = SUB87(&bStack_131,0);
            uStack_129 = (undefined1)((ulonglong)&bStack_131 >> 0x38);
            uStack_128 = 0x140f6e8f0;
            uStack_121 = 0;
            pdb_140f60760(auStack_d0,&UNK_1436b7233,&uStack_130);
            uStack_129 = (undefined1)auStack_d0._0_8_;
            uStack_128 = SUB87(auStack_d0._0_8_,1);
            uStack_121 = (undefined1)auStack_d0._8_8_;
            uStack_120 = SUB87(auStack_d0._8_8_,1);
            uStack_119 = (undefined1)auStack_d0._16_8_;
            uStack_118 = SUB87(auStack_d0._16_8_,1);
            *param_1 = 7;
            goto LAB_142d0f1c0;
          }
          if (uVar5 <= uVar6 + 6) goto LAB_142d0f804;
          uVar1 = uVar6 + 7;
          *(ulonglong *)(param_2 + 29000) = uVar1;
          bVar2 = *(byte *)(lVar7 + 6 + uVar6);
          bVar3 = *(byte *)(param_2 + 0x71c1);
          if ((ulonglong)bVar3 != 0) {
            uStack_108 = *(ulonglong *)(param_2 + 0x10);
            pbVar27 = (byte *)(*(longlong *)(param_2 + 8) + 0x1d0);
            uVar28 = 0;
            do {
              if (uStack_108 == uVar28) goto LAB_142d0f831;
              if (*pbVar27 == bStack_131) goto LAB_142d0f562;
              uVar28 = uVar28 + 1;
              pbVar27 = pbVar27 + 0x1d8;
            } while (bVar3 != uVar28);
            goto LAB_142d0f20e;
          }
          uVar28 = 0;
LAB_142d0f562:
          if ((byte)uVar28 == bVar3) goto LAB_142d0f207;
          uVar28 = uVar28 & 0xff;
          uVar26 = *(ulonglong *)(param_2 + 0x10);
          if (uVar26 <= uVar28) goto LAB_142d0f89a;
          lVar8 = *(longlong *)(param_2 + 8);
          *(ulonglong *)(lVar8 + 0x90 + uVar28 * 0x1d8) = (ulonglong)(bVar2 >> 4);
          *(ulonglong *)(lVar8 + 0x98 + uVar28 * 0x1d8) = (ulonglong)(bVar2 & 0xf);
          *(ulonglong *)(param_2 + 0x7188) = uVar28;
          uVar25 = uVar24;
          uVar24 = uVar1;
          if (bStack_10b != 2) {
            if (uVar5 <= uVar1) goto LAB_142d0f804;
            uVar29 = (uint)bStack_131;
            *(ulonglong *)(param_2 + 29000) = uVar6 + 8;
            bStack_131 = *(byte *)(lVar7 + 7 + uVar6);
            uVar22 = (uint)bStack_131;
            auVar31 = pshuflw(auVar32,ZEXT416(uVar22),0);
            auVar10._10_2_ = 0;
            auVar10._0_10_ = auVar31._0_10_;
            auVar10._12_2_ = auVar31._6_2_;
            auVar13._8_2_ = auVar31._4_2_;
            auVar13._0_8_ = auVar31._0_8_;
            auVar13._10_4_ = auVar10._10_4_;
            auVar16._6_8_ = 0;
            auVar16._0_6_ = auVar13._8_6_;
            auVar33._0_4_ = -(uint)(auVar31._0_2_ == uVar20);
            auVar33._4_4_ =
                 -(uint)((uint)CONCAT82(SUB148(auVar16 << 0x40,6),auVar31._2_2_) == uVar29);
            auVar33._8_4_ = -(uint)(auVar13._8_4_ == iVar18);
            auVar33._12_4_ = -(uint)(auVar10._10_4_ >> 0x10 == uVar19);
            iVar21 = movmskps(uVar22,auVar33);
            if (iVar21 != 0) goto LAB_142d0f3f9;
            if (uVar5 <= uVar6 + 8) goto LAB_142d0f804;
            uVar24 = uVar6 + 9;
            *(ulonglong *)(param_2 + 29000) = uVar24;
            bVar2 = *(byte *)(lVar7 + 8 + uVar6);
            bVar3 = *(byte *)(param_2 + 0x71c1);
            if ((ulonglong)bVar3 != 0) {
              uStack_108 = *(ulonglong *)(param_2 + 0x10);
              pbVar27 = (byte *)(*(longlong *)(param_2 + 8) + 0x1d0);
              uVar28 = 0;
              do {
                if (uStack_108 == uVar28) goto LAB_142d0f831;
                if (*pbVar27 == bStack_131) goto LAB_142d0f701;
                uVar28 = uVar28 + 1;
                pbVar27 = pbVar27 + 0x1d8;
              } while (bVar3 != uVar28);
              goto LAB_142d0f20e;
            }
            uVar28 = 0;
LAB_142d0f701:
            if ((byte)uVar28 == bVar3) goto LAB_142d0f207;
            uVar28 = uVar28 & 0xff;
            uVar26 = *(ulonglong *)(param_2 + 0x10);
            if (uVar26 <= uVar28) goto LAB_142d0f89a;
            lVar8 = *(longlong *)(param_2 + 8);
            *(ulonglong *)(lVar8 + 0x90 + uVar28 * 0x1d8) = (ulonglong)(bVar2 >> 4);
            *(ulonglong *)(lVar8 + 0x98 + uVar28 * 0x1d8) = (ulonglong)(bVar2 & 0xf);
            *(ulonglong *)(param_2 + 0x7190) = uVar28;
            uVar25 = uVar1;
            if (bStack_10b != 3) {
              if (uVar5 <= uVar24) goto LAB_142d0f804;
              *(ulonglong *)(param_2 + 29000) = uVar6 + 10;
              bStack_131 = *(byte *)(lVar7 + 9 + uVar6);
              uVar23 = (uint)bStack_131;
              auVar31 = pshuflw(ZEXT416(uVar23),ZEXT416(uVar23),0);
              auVar11._10_2_ = 0;
              auVar11._0_10_ = auVar31._0_10_;
              auVar11._12_2_ = auVar31._6_2_;
              auVar14._8_2_ = auVar31._4_2_;
              auVar14._0_8_ = auVar31._0_8_;
              auVar14._10_4_ = auVar11._10_4_;
              auVar17._6_8_ = 0;
              auVar17._0_6_ = auVar14._8_6_;
              auVar30._0_4_ = -(uint)(auVar31._0_2_ == uVar20);
              auVar30._4_4_ =
                   -(uint)((uint)CONCAT82(SUB148(auVar17 << 0x40,6),auVar31._2_2_) == uVar29);
              auVar30._8_4_ = -(uint)(auVar14._8_4_ == uVar22);
              auVar30._12_4_ = -(uint)(auVar11._10_4_ >> 0x10 == uVar19);
              iVar21 = movmskps(uVar23,auVar30);
              if (iVar21 != 0) goto LAB_142d0f3f9;
              if (uVar5 <= uVar6 + 10) goto LAB_142d0f804;
              *(ulonglong *)(param_2 + 29000) = uVar6 + 0xb;
              bVar2 = *(byte *)(lVar7 + 10 + uVar6);
              bVar3 = *(byte *)(param_2 + 0x71c1);
              if ((ulonglong)bVar3 != 0) {
                uStack_108 = *(ulonglong *)(param_2 + 0x10);
                pbVar27 = (byte *)(*(longlong *)(param_2 + 8) + 0x1d0);
                uVar28 = 0;
                do {
                  if (uStack_108 == uVar28) {
LAB_142d0f831:
                    /* WARNING: Subroutine does not return */
                    pdb_142dc81f2(uStack_108,uStack_108,&UNK_1436b71c8);
                  }
                  if (*pbVar27 == bStack_131) goto LAB_142d0f846;
                  uVar28 = uVar28 + 1;
                  pbVar27 = pbVar27 + 0x1d8;
                } while (bVar3 != uVar28);
                goto LAB_142d0f20e;
              }
              uVar28 = 0;
LAB_142d0f846:
              if ((byte)uVar28 == bVar3) goto LAB_142d0f207;
              uVar28 = uVar28 & 0xff;
              uVar26 = *(ulonglong *)(param_2 + 0x10);
              if (uVar26 <= uVar28) goto LAB_142d0f89a;
              lVar8 = *(longlong *)(param_2 + 8);
              *(ulonglong *)(lVar8 + 0x90 + uVar28 * 0x1d8) = (ulonglong)(bVar2 >> 4);
              *(ulonglong *)(lVar8 + 0x98 + uVar28 * 0x1d8) = (ulonglong)(bVar2 & 0xf);
              *(ulonglong *)(param_2 + 0x7198) = uVar28;
              uVar25 = uVar24;
              uVar24 = uVar6 + 0xb;
            }
          }
        }
        if (uVar24 < uVar5) {
          *(ulonglong *)(param_2 + 29000) = uVar25 + 3;
          bVar2 = *(byte *)(lVar7 + uVar24);
          *(byte *)(param_2 + 0x71cb) = bVar2;
          if (uVar25 + 3 < uVar5) {
            *(ulonglong *)(param_2 + 29000) = uVar25 + 4;
            bVar3 = *(byte *)(lVar7 + 3 + uVar25);
            *(byte *)(param_2 + 0x71cc) = bVar3;
            if (uVar25 + 4 < uVar5) {
              *(ulonglong *)(param_2 + 29000) = uVar25 + 5;
              bVar4 = *(byte *)(lVar7 + 4 + uVar25);
              *(byte *)(param_2 + 0x71cd) = bVar4 >> 4;
              if (bVar3 < 0x40) {
                if (bVar2 < 0x40) {
                  if (bVar4 < 0xe0) {
                    *(byte *)(param_2 + 0x71ce) = bVar4 & 0xf;
                    if ((bVar4 & 0xf) < 0xe) {
                      *param_1 = 0xd;
                      return param_1;
                    }
                    uStack_130 = (undefined7)(param_2 + 0x71ce);
                    uStack_129 = (undefined1)((ulonglong)(param_2 + 0x71ce) >> 0x38);
                    uStack_128 = 0x140f6e8f0;
                    uStack_121 = 0;
                    pdb_140f60760(auStack_58,&UNK_1436b7106,&uStack_130);
                    uStack_129 = (undefined1)auStack_58._0_8_;
                    uStack_128 = SUB87(auStack_58._0_8_,1);
                    uStack_121 = (undefined1)auStack_58._8_8_;
                    uStack_120 = SUB87(auStack_58._8_8_,1);
                    uStack_90 = uStack_48;
                  }
                  else {
                    uStack_130 = (undefined7)(param_2 + 0x71ce);
                    uStack_129 = (undefined1)((ulonglong)(param_2 + 0x71ce) >> 0x38);
                    uStack_128 = 0x140f6e8f0;
                    uStack_121 = 0;
                    pdb_140f60760(auStack_70,&UNK_1436b7135,&uStack_130);
                    uStack_129 = (undefined1)auStack_70._0_8_;
                    uStack_128 = SUB87(auStack_70._0_8_,1);
                    uStack_121 = (undefined1)auStack_70._8_8_;
                    uStack_120 = SUB87(auStack_70._8_8_,1);
                    uStack_90 = uStack_60;
                  }
                }
                else {
                  uStack_130 = (undefined7)(param_2 + 0x71cb);
                  uStack_129 = (undefined1)((ulonglong)(param_2 + 0x71cb) >> 0x38);
                  uStack_128 = 0x140f6e8f0;
                  uStack_121 = 0;
                  pdb_140f60760(auStack_88,&UNK_1436b7164,&uStack_130);
                  uStack_129 = (undefined1)auStack_88._0_8_;
                  uStack_128 = SUB87(auStack_88._0_8_,1);
                  uStack_121 = (undefined1)auStack_88._8_8_;
                  uStack_120 = SUB87(auStack_88._8_8_,1);
                  uStack_90 = uStack_78;
                }
              }
              else {
                uStack_130 = (undefined7)(param_2 + 0x71cc);
                uStack_129 = (undefined1)((ulonglong)(param_2 + 0x71cc) >> 0x38);
                uStack_128 = 0x140f6e8f0;
                uStack_121 = 0;
                pdb_140f60760(auStack_a0,&UNK_1436b7193,&uStack_130);
                uStack_129 = (undefined1)auStack_a0._0_8_;
                uStack_128 = SUB87(auStack_a0._0_8_,1);
                uStack_121 = (undefined1)auStack_a0._8_8_;
                uStack_120 = SUB87(auStack_a0._8_8_,1);
              }
              *param_1 = 6;
              *(ulonglong *)(param_1 + 1) = CONCAT17(uStack_129,uStack_130);
              *(ulonglong *)(param_1 + 9) = CONCAT17(uStack_121,uStack_128);
              *(ulonglong *)(param_1 + 0x10) = CONCAT71(uStack_120,uStack_121);
              *(undefined8 *)(param_1 + 0x18) = uStack_90;
              return param_1;
            }
          }
        }
LAB_142d0f804:
        *param_1 = 1;
        *(undefined **)(param_1 + 8) = &UNK_1436b67cb;
        *(undefined8 *)(param_1 + 0x10) = 0xd;
        return param_1;
      }
LAB_142d0f207:
      uStack_108 = *(ulonglong *)(param_2 + 0x10);
LAB_142d0f20e:
      uStack_130 = SUB87(&bStack_131,0);
      uStack_129 = (undefined1)((ulonglong)&bStack_131 >> 0x38);
      uStack_128 = 0x140f6e8f0;
      uStack_121 = 0;
      uStack_120 = SUB87(&uStack_108,0);
      uStack_119 = (undefined1)((ulonglong)&uStack_108 >> 0x38);
      uStack_118 = 0x140f72a40;
      uStack_111 = 0;
      pdb_140f60760(auStack_b8,&UNK_1436b71f8,&uStack_130);
      uStack_129 = auStack_b8[0];
      uStack_128 = auStack_b8._1_7_;
      uStack_121 = (undefined1)uStack_b0;
      *param_1 = 7;
      *(ulonglong *)(param_1 + 1) = CONCAT17(uStack_129,uStack_130);
      *(ulonglong *)(param_1 + 9) = CONCAT17(uStack_121,uStack_128);
      *(undefined8 *)(param_1 + 0x10) = uStack_b0;
      *(undefined8 *)(param_1 + 0x18) = uStack_a8;
      return param_1;
    }
    uStack_130 = SUB87(&bStack_10b,0);
    uStack_129 = (undefined1)((ulonglong)&bStack_10b >> 0x38);
    uStack_128 = 0x140f6e8f0;
    uStack_121 = 0;
    pdb_140f60760(auStack_e8,&UNK_1436b7071,&uStack_130);
    uStack_129 = (undefined1)auStack_e8._0_8_;
    uStack_128 = SUB87(auStack_e8._0_8_,1);
    uStack_121 = (undefined1)auStack_e8._8_8_;
    uStack_120 = SUB87(auStack_e8._8_8_,1);
  }
  else {
    uStack_130 = SUB87(&uStack_10a,0);
    uStack_129 = (undefined1)((ulonglong)&uStack_10a >> 0x38);
    uStack_128 = 0x140f71140;
    uStack_121 = 0;
    pdb_140f60760(auStack_100,&UNK_1436b7265,&uStack_130);
    uStack_129 = (undefined1)auStack_100._0_8_;
    uStack_128 = SUB87(auStack_100._0_8_,1);
    uStack_121 = (undefined1)auStack_100._8_8_;
    uStack_120 = SUB87(auStack_100._8_8_,1);
    uStack_d8 = uStack_f0;
  }
  uStack_119 = (undefined1)uStack_d8;
  uStack_118 = (undefined7)((ulonglong)uStack_d8 >> 8);
  *param_1 = 6;
LAB_142d0f1c0:
  *(ulonglong *)(param_1 + 1) = CONCAT17(uStack_129,uStack_130);
  *(ulonglong *)(param_1 + 9) = CONCAT17(uStack_121,uStack_128);
  *(ulonglong *)(param_1 + 0x10) = CONCAT71(uStack_120,uStack_121);
  *(ulonglong *)(param_1 + 0x18) = CONCAT71(uStack_118,uStack_119);
  return param_1;
}

