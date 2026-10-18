// VA 0x141c22560, PDB extent 2120 bytes
// zune_jpeg::headers::parse_dqt<ref$<slice2$<u8> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: zune_jpeg::headers::parse_dqt<ref$<slice2$<u8> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 2120 */

undefined1 * pdb_141c22560(undefined1 *param_1,longlong param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  byte bVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  ushort uVar24;
  longlong lVar25;
  ulonglong uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  ushort uStack_2aa;
  undefined1 uStack_2a8;
  byte bStack_2a7;
  undefined2 uStack_2a6;
  ushort uStack_2a4;
  undefined1 uStack_2a1;
  undefined7 uStack_2a0;
  undefined1 uStack_299;
  undefined7 uStack_298;
  undefined1 uStack_291;
  undefined7 uStack_290;
  undefined1 uStack_289;
  undefined1 auStack_288 [16];
  undefined1 auStack_278 [16];
  undefined1 auStack_268 [16];
  undefined1 auStack_258 [16];
  undefined1 auStack_248 [16];
  undefined1 auStack_238 [16];
  undefined1 *puStack_228;
  ulonglong uStack_220;
  ulonglong uStack_218;
  longlong lStack_210;
  undefined **ppuStack_208;
  code *pcStack_200;
  longlong lStack_1f8;
  ulonglong uStack_1f0;
  ulonglong uStack_1e8;
  ulonglong uStack_1e0;
  undefined8 uStack_1d7;
  undefined4 uStack_1cf;
  undefined2 uStack_1cb;
  undefined1 uStack_1c9;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined1 auStack_1a8 [16];
  undefined1 auStack_198 [16];
  undefined1 auStack_188 [16];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [16];
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  
  uVar26 = *(ulonglong *)(param_2 + 0x7140);
  uVar15 = *(ulonglong *)(param_2 + 29000);
  uVar17 = uVar15 + 2;
  if (uVar15 < 0xfffffffffffffffe && uVar17 <= uVar26) {
    lVar25 = *(longlong *)(param_2 + 0x7138);
    uVar24 = *(ushort *)(lVar25 + uVar15);
    *(ulonglong *)(param_2 + 29000) = uVar17;
    uStack_2aa = uVar24 << 8 | uVar24 >> 8;
    if (uStack_2aa < 2) {
      *param_1 = 1;
      *(undefined **)(param_1 + 8) = &UNK_14339dc76;
      *(undefined8 *)(param_1 + 0x10) = 0x33;
    }
    else {
      uStack_2aa = uStack_2aa - 2;
      if (uStack_2aa != 0) {
        uStack_220 = uVar26 + 1;
        uStack_218 = (ulonglong)(uStack_220 == 0);
        lStack_1f8 = lVar25 + 5;
        puStack_228 = param_1;
        lStack_210 = lVar25;
        uStack_1f0 = uVar26;
        uVar24 = uStack_2aa;
        do {
          if (uVar26 <= uVar17) goto LAB_141c225a4;
          uVar15 = uVar17 + 1;
          *(ulonglong *)(param_2 + 29000) = uVar15;
          bVar12 = *(byte *)(lVar25 + uVar17) >> 4;
          uStack_1e8 = (ulonglong)(uint)bVar12;
          uVar16 = *(byte *)(lVar25 + uVar17) & 0xf;
          uStack_1e0 = (ulonglong)uVar16;
          ppuStack_208 = (undefined **)((ulonglong)bVar12 * 0x40 + 0x41);
          if (uVar24 < (ushort)ppuStack_208) {
            _uStack_2a8 = SUB87(&uStack_2aa,0);
            uStack_2a1 = (undefined1)((ulonglong)&uStack_2aa >> 0x38);
            uStack_2a0 = 0x140f71140;
            uStack_299 = 0;
            uStack_298 = SUB87(&ppuStack_208,0);
            uStack_291 = (undefined1)((ulonglong)&ppuStack_208 >> 0x38);
            uStack_290 = 0x140f72a40;
            uStack_289 = 0;
            pdb_140f60760(auStack_a0,&UNK_14339dd1f,&uStack_2a8);
            uStack_2a1 = (undefined1)auStack_a0._0_8_;
            uStack_2a0 = SUB87(auStack_a0._0_8_,1);
            uStack_299 = (undefined1)auStack_a0._8_8_;
            uStack_298 = SUB87(auStack_a0._8_8_,1);
            uStack_60 = uStack_90;
            goto LAB_141c22c8b;
          }
          if (bVar12 == 0) {
            auStack_278 = (undefined1  [16])0x0;
            auStack_288 = (undefined1  [16])0x0;
            uStack_298 = 0;
            uStack_291 = 0;
            uStack_290 = 0;
            uStack_289 = 0;
            uVar23 = uVar17 + 0x41;
            if (uVar26 <= uVar17 + 0x41) {
              uVar23 = uVar26;
            }
            _uStack_2a8 = 0;
            uStack_2a1 = 0;
            uStack_2a0 = 0;
            uStack_299 = 0;
            uVar26 = uVar23 - uVar15;
            if (0x40 < uVar26) {
              pdb_142dc8420(0,uVar26,0x40,&UNK_1430203c0);
LAB_141c22d9b:
                    /* WARNING: Subroutine does not return */
              pdb_142dc8150(&UNK_1430203a8);
            }
            if (uVar23 <= uVar17) goto LAB_141c22d9b;
            pub_142e32760(&uStack_2a8,uVar15 + lStack_210,uVar26);
            *(ulonglong *)(param_2 + 29000) = uVar23;
            if (uVar26 != 0x40) {
              puStack_1b8 = &UNK_143020319;
              uStack_1b0 = 0x24;
              ppuStack_208 = &puStack_1b8;
              pcStack_200 = pdb_1402ed400;
              pdb_140f60760((longlong)&uStack_1d7 + 7,&UNK_14339da98,&ppuStack_208);
              *(undefined8 *)(puStack_228 + 0x10) = uStack_1c8;
              *(undefined8 *)(puStack_228 + 0x18) = uStack_1c0;
              *puStack_228 = 0;
              *(undefined8 *)(puStack_228 + 1) = uStack_1d7;
              *(undefined4 *)(puStack_228 + 9) = uStack_1cf;
              *(undefined2 *)(puStack_228 + 0xd) = uStack_1cb;
              puStack_228[0xf] = uStack_1c9;
              return puStack_228;
            }
            uVar24 = uVar24 - 0x41;
            auStack_1a8 = (undefined1  [16])0x0;
            auStack_198 = (undefined1  [16])0x0;
            auStack_188 = (undefined1  [16])0x0;
            auStack_178 = (undefined1  [16])0x0;
            auStack_168 = (undefined1  [16])0x0;
            auStack_158 = (undefined1  [16])0x0;
            auStack_148 = (undefined1  [16])0x0;
            auStack_138 = (undefined1  [16])0x0;
            auStack_128 = (undefined1  [16])0x0;
            auStack_118 = (undefined1  [16])0x0;
            auStack_108 = (undefined1  [16])0x0;
            auStack_f8 = (undefined1  [16])0x0;
            auStack_e8 = (undefined1  [16])0x0;
            auStack_d8 = (undefined1  [16])0x0;
            auStack_c8 = (undefined1  [16])0x0;
            auStack_b8 = (undefined1  [16])0x0;
            lVar20 = 0;
            do {
              lVar25 = *(longlong *)(&UNK_14339d6b0 + lVar20 * 8);
              *(uint *)(auStack_1a8 + *(longlong *)(&UNK_14339d6a8 + lVar20 * 8) * 4) =
                   (uint)(byte)(&uStack_2a8)[lVar20];
              *(uint *)(auStack_1a8 + lVar25 * 4) = (uint)(&bStack_2a7)[lVar20];
              *(uint *)(auStack_1a8 + *(longlong *)(&UNK_14339d6b8 + lVar20 * 8) * 4) =
                   (uint)*(byte *)((longlong)&uStack_2a6 + lVar20);
              lVar18 = lVar20 + 1;
              lVar25 = lVar20 * 8;
              lVar20 = lVar20 + 4;
              *(uint *)(auStack_1a8 + *(longlong *)(&UNK_14339d6c0 + lVar25) * 4) =
                   (uint)*(byte *)((longlong)&uStack_2a6 + lVar18);
              uVar26 = uStack_1f0;
              lVar25 = lStack_210;
              param_1 = puStack_228;
            } while (lVar20 != 0x40);
          }
          else {
            if (bVar12 != 1) {
              _uStack_2a8 = SUB87(&uStack_1e8,0);
              uStack_2a1 = (undefined1)((ulonglong)&uStack_1e8 >> 0x38);
              uStack_2a0 = 0x140090b90;
              uStack_299 = 0;
              pdb_140f60760(auStack_88,&UNK_14339dce8,&uStack_2a8);
              uStack_2a1 = (undefined1)auStack_88._0_8_;
              uStack_2a0 = SUB87(auStack_88._0_8_,1);
              uStack_299 = (undefined1)auStack_88._8_8_;
              uStack_298 = SUB87(auStack_88._8_8_,1);
              uStack_60 = uStack_78;
              goto LAB_141c22c8b;
            }
            auStack_238 = (undefined1  [16])0x0;
            auStack_248 = (undefined1  [16])0x0;
            auStack_258 = (undefined1  [16])0x0;
            auStack_268 = (undefined1  [16])0x0;
            auStack_278 = (undefined1  [16])0x0;
            auStack_288 = (undefined1  [16])0x0;
            uVar13 = uStack_220 - (uVar17 + 3);
            uVar23 = (ulonglong)(uStack_220 < uVar17 + 3);
            lVar20 = uStack_218 - uVar23;
            if (uStack_218 < uVar23) {
              lVar20 = 0;
            }
            uStack_298 = 0;
            uStack_291 = 0;
            uStack_290 = 0;
            uStack_289 = 0;
            if (uStack_218 < uVar23) {
              uVar13 = 0;
            }
            uVar21 = lVar20 + (ulonglong)(0xfffffffffffffffe < uVar13);
            uVar23 = uVar21 >> 1;
            uVar13 = uVar21 << 0x3f | uVar13 + 1 >> 1;
            lVar20 = -2;
            if (uVar15 == 0xffffffffffffffff) {
              lVar20 = -1;
            }
            uVar21 = lVar20 - uVar17 >> 1;
            if ((uVar13 < uVar21) <= uVar23) {
              uVar23 = 0;
              uVar13 = uVar21;
            }
            _uStack_2a8 = 0;
            uStack_2a1 = 0;
            uStack_2a0 = 0;
            uStack_299 = 0;
            if (0x3e < uVar13) {
              uVar13 = 0x3f;
            }
            if (uVar23 != 0) {
              uVar13 = 0x3f;
            }
            if (uVar13 < 0x1e) {
LAB_141c227fb:
              lVar20 = 0;
              uVar13 = uVar15;
            }
            else {
              uVar21 = uStack_220 - (uVar17 + 3);
              uVar23 = (ulonglong)(uStack_220 < uVar17 + 3);
              lVar20 = uStack_218 - uVar23;
              if (uStack_218 < uVar23) {
                lVar20 = 0;
                uVar21 = 0;
              }
              uVar14 = lVar20 + (ulonglong)(0xfffffffffffffffe < uVar21);
              uVar23 = uVar14 >> 1;
              uVar21 = uVar14 << 0x3f | uVar21 + 1 >> 1;
              lVar20 = -2;
              if (uVar15 == 0xffffffffffffffff) {
                lVar20 = -1;
              }
              uVar14 = lVar20 - uVar17 >> 1;
              if ((uVar21 < uVar14) <= uVar23) {
                uVar23 = 0;
                uVar21 = uVar14;
              }
              if (0x3e < uVar21) {
                uVar21 = 0x3f;
              }
              iVar19 = (int)uVar21;
              if (uVar23 != 0) {
                iVar19 = 0x3f;
              }
              if (-uVar17 - 4 < (ulonglong)(uint)(iVar19 * 2)) goto LAB_141c227fb;
              uVar13 = uVar13 + 1;
              uVar23 = (ulonglong)((uint)uVar13 & 3);
              if ((uVar13 & 3) == 0) {
                uVar23 = 4;
              }
              lVar20 = uVar13 - uVar23;
              uVar13 = uVar15 + lVar20 * 2;
              lVar18 = uVar17 + lStack_1f8;
              lVar22 = 0;
              do {
                uVar2 = *(undefined4 *)(lVar18 + -4 + lVar22 * 2);
                uVar3 = *(undefined4 *)(lVar18 + lVar22 * 2);
                auVar27 = ZEXT716(CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(
                                                  byte)((uint)uVar2 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar2 >> 0x10),uVar2)) >>
                                                  0x20),uVar2) >> 0x18),(char)((uint)uVar2 >> 8)),
                                           (ushort)(byte)uVar2) & 0xffffff00ffffff);
                auVar27 = pshuflw(auVar27,auVar27,0xb1);
                sVar4 = auVar27._0_2_;
                sVar6 = auVar27._2_2_;
                sVar8 = auVar27._4_2_;
                sVar10 = auVar27._6_2_;
                auVar28._8_8_ = 0;
                auVar28._0_8_ =
                     (ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar3 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar3 >> 0x10),uVar3)) >>
                                                  0x20),uVar3) >> 0x18),
                                              CONCAT12((char)((uint)uVar3 >> 8),(short)uVar3)) >>
                                    0x10),(short)uVar3) & 0xffffffff00ff00ff;
                auVar28 = pshuflw(auVar28,auVar28,0xb1);
                sVar5 = auVar28._0_2_;
                sVar7 = auVar28._2_2_;
                sVar9 = auVar28._4_2_;
                sVar11 = auVar28._6_2_;
                *(uint *)(&uStack_2a8 + lVar22 * 2) =
                     CONCAT13((0 < sVar10) * (sVar10 < 0x100) * auVar27[6] - (0xff < sVar10),
                              CONCAT12((0 < sVar8) * (sVar8 < 0x100) * auVar27[4] - (0xff < sVar8),
                                       CONCAT11((0 < sVar6) * (sVar6 < 0x100) * auVar27[2] -
                                                (0xff < sVar6),
                                                (0 < sVar4) * (sVar4 < 0x100) * auVar27[0] -
                                                (0xff < sVar4))));
                *(uint *)(&uStack_2a4 + lVar22) =
                     CONCAT13((0 < sVar11) * (sVar11 < 0x100) * auVar28[6] - (0xff < sVar11),
                              CONCAT12((0 < sVar9) * (sVar9 < 0x100) * auVar28[4] - (0xff < sVar9),
                                       CONCAT11((0 < sVar7) * (sVar7 < 0x100) * auVar28[2] -
                                                (0xff < sVar7),
                                                (0 < sVar5) * (sVar5 < 0x100) * auVar28[0] -
                                                (0xff < sVar5))));
                lVar22 = lVar22 + 4;
                uVar15 = uVar15 + 8;
              } while (lVar20 != lVar22);
              *(ulonglong *)(param_2 + 29000) = uVar15;
            }
            do {
              if ((0xfffffffffffffffd < uVar13) || (uVar23 = uVar13 + 2, uVar26 < uVar23))
              goto LAB_141c225a4;
              uVar1 = *(ushort *)(lVar25 + uVar13);
              *(ulonglong *)(param_2 + 29000) = uVar23;
              *(ushort *)(&uStack_2a8 + lVar20 * 2) = uVar1 << 8 | uVar1 >> 8;
              lVar20 = lVar20 + 1;
              uVar13 = uVar23;
            } while (lVar20 != 0x40);
            uVar24 = uVar24 - 0x81;
            auStack_1a8 = (undefined1  [16])0x0;
            auStack_198 = (undefined1  [16])0x0;
            auStack_188 = (undefined1  [16])0x0;
            auStack_178 = (undefined1  [16])0x0;
            auStack_168 = (undefined1  [16])0x0;
            auStack_158 = (undefined1  [16])0x0;
            auStack_148 = (undefined1  [16])0x0;
            auStack_138 = (undefined1  [16])0x0;
            auStack_128 = (undefined1  [16])0x0;
            auStack_118 = (undefined1  [16])0x0;
            auStack_108 = (undefined1  [16])0x0;
            auStack_f8 = (undefined1  [16])0x0;
            auStack_e8 = (undefined1  [16])0x0;
            auStack_d8 = (undefined1  [16])0x0;
            auStack_c8 = (undefined1  [16])0x0;
            auStack_b8 = (undefined1  [16])0x0;
            lVar20 = 0;
            do {
              lVar18 = *(longlong *)(&UNK_14339d6b0 + lVar20 * 8);
              *(uint *)(auStack_1a8 + *(longlong *)(&UNK_14339d6a8 + lVar20 * 8) * 4) =
                   (uint)*(ushort *)(&uStack_2a8 + lVar20 * 2);
              *(uint *)(auStack_1a8 + lVar18 * 4) = (uint)(ushort)(&uStack_2a6)[lVar20];
              *(uint *)(auStack_1a8 + *(longlong *)(&UNK_14339d6b8 + lVar20 * 8) * 4) =
                   (uint)(&uStack_2a4)[lVar20];
              lVar18 = lVar20 * 2;
              lVar22 = lVar20 * 8;
              lVar20 = lVar20 + 4;
              *(uint *)(auStack_1a8 + *(longlong *)(&UNK_14339d6c0 + lVar22) * 4) =
                   (uint)*(ushort *)(auStack_288 + lVar18 + -0x1a);
            } while (lVar20 != 0x40);
          }
          uStack_2aa = uVar24;
          if (3 < (byte)uVar16) {
            _uStack_2a8 = SUB87(&uStack_1e0,0);
            uStack_2a1 = (undefined1)((ulonglong)&uStack_1e0 >> 0x38);
            uStack_2a0 = 0x140f72a40;
            uStack_299 = 0;
            pdb_140f60760(auStack_70,&UNK_14339dca9,&uStack_2a8);
            uStack_2a1 = (undefined1)auStack_70._0_8_;
            uStack_2a0 = SUB87(auStack_70._0_8_,1);
            uStack_299 = (undefined1)auStack_70._8_8_;
            uStack_298 = SUB87(auStack_70._8_8_,1);
LAB_141c22c8b:
            *param_1 = 5;
            *(ulonglong *)(param_1 + 1) = CONCAT17(uStack_2a1,_uStack_2a8);
            *(ulonglong *)(param_1 + 9) = CONCAT17(uStack_299,uStack_2a0);
            *(ulonglong *)(param_1 + 0x10) = CONCAT71(uStack_298,uStack_299);
            *(undefined8 *)(param_1 + 0x18) = uStack_60;
            return param_1;
          }
          *(undefined4 *)(param_2 + 0x48 + (ulonglong)(uVar16 * 0x104)) = 1;
          pub_142e32760(param_2 + 0x48 + (ulonglong)(uVar16 * 0x104) + 4,auStack_1a8,0x100);
          uVar17 = uVar23;
        } while (uVar24 != 0);
      }
      *param_1 = 0xd;
    }
  }
  else {
LAB_141c225a4:
    *param_1 = 1;
    *(undefined **)(param_1 + 8) = &UNK_14339d4db;
    *(undefined8 *)(param_1 + 0x10) = 0xd;
  }
  return param_1;
}

