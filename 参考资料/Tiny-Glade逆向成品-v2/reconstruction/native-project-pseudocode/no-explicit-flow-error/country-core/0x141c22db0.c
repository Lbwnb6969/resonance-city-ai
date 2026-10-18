// VA 0x141c22db0, PDB extent 2134 bytes
// zune_jpeg::headers::parse_dqt<ref$<alloc::vec::Vec<u8,alloc::alloc::Global> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   zune_jpeg::headers::parse_dqt<ref$<alloc::vec::Vec<u8,alloc::alloc::Global> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 2134 */

undefined1 * pdb_141c22db0(undefined1 *param_1,longlong param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  byte bVar13;
  ulonglong uVar14;
  longlong lVar15;
  ushort uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  int iVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong lVar26;
  uint uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  ushort uStack_2b2;
  undefined1 *puStack_2b0;
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
  ulonglong uStack_228;
  longlong lStack_220;
  longlong lStack_218;
  undefined **ppuStack_210;
  code *pcStack_208;
  longlong lStack_200;
  ulonglong uStack_1f8;
  longlong lStack_1f0;
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
  undefined1 auStack_70 [48];
  
  uVar14 = *(ulonglong *)(param_2 + 0x7140);
  if (uVar14 < 0xfffffffffffffffe) {
    uVar17 = uVar14 + 2;
    uVar4 = *(ulonglong *)(*(longlong *)(param_2 + 0x7138) + 0x10);
    if (uVar17 <= uVar4) {
      lVar26 = *(longlong *)(*(longlong *)(param_2 + 0x7138) + 8);
      uVar16 = *(ushort *)(lVar26 + uVar14);
      *(ulonglong *)(param_2 + 0x7140) = uVar17;
      uStack_2b2 = uVar16 << 8 | uVar16 >> 8;
      if (uStack_2b2 < 2) {
        *param_1 = 1;
        *(undefined **)(param_1 + 8) = &UNK_14339dc76;
        *(undefined8 *)(param_1 + 0x10) = 0x33;
        return param_1;
      }
      uStack_2b2 = uStack_2b2 - 2;
      if (uStack_2b2 != 0) {
        lStack_1f0 = param_2 + 0x48;
        uStack_1f8 = (ulonglong)(uVar4 + 1 == 0);
        lStack_200 = lVar26 + 5;
        uStack_228 = uVar4 + 1;
        puStack_2b0 = param_1;
        lStack_220 = lVar26;
        lStack_218 = param_2;
        uVar16 = uStack_2b2;
        do {
          lVar15 = lStack_218;
          param_1 = puStack_2b0;
          if (uVar4 <= uVar17) goto LAB_141c22ded;
          uVar14 = uVar17 + 1;
          *(ulonglong *)(lStack_218 + 0x7140) = uVar14;
          bVar13 = *(byte *)(lVar26 + uVar17) >> 4;
          uStack_1e8 = (ulonglong)(uint)bVar13;
          uVar27 = *(byte *)(lVar26 + uVar17) & 0xf;
          uStack_1e0 = (ulonglong)uVar27;
          ppuStack_210 = (undefined **)((ulonglong)bVar13 * 0x40 + 0x41);
          if (uVar16 < (ushort)ppuStack_210) {
            _uStack_2a8 = SUB87(&uStack_2b2,0);
            uStack_2a1 = (undefined1)((ulonglong)&uStack_2b2 >> 0x38);
            uStack_2a0 = 0x140f71140;
            uStack_299 = 0;
            uStack_298 = SUB87(&ppuStack_210,0);
            uStack_291 = (undefined1)((ulonglong)&ppuStack_210 >> 0x38);
            uStack_290 = 0x140f72a40;
            uStack_289 = 0;
            pdb_140f60760(auStack_a0,&UNK_14339dd1f,&uStack_2a8);
            uStack_2a1 = (undefined1)auStack_a0._0_8_;
            uStack_2a0 = SUB87(auStack_a0._0_8_,1);
            uStack_299 = (undefined1)auStack_a0._8_8_;
            uStack_298 = SUB87(auStack_a0._8_8_,1);
            uStack_78 = uStack_90;
LAB_141c2350d:
            uStack_291 = (undefined1)uStack_78;
            uStack_290 = (undefined7)((ulonglong)uStack_78 >> 8);
            goto LAB_141c23512;
          }
          if (bVar13 == 0) {
            auStack_278 = (undefined1  [16])0x0;
            auStack_288 = (undefined1  [16])0x0;
            uStack_298 = 0;
            uStack_291 = 0;
            uStack_290 = 0;
            uStack_289 = 0;
            uVar25 = uVar17 + 0x41;
            if (uVar4 <= uVar17 + 0x41) {
              uVar25 = uVar4;
            }
            _uStack_2a8 = 0;
            uStack_2a1 = 0;
            uStack_2a0 = 0;
            uStack_299 = 0;
            uVar23 = uVar25 - uVar14;
            if (0x40 < uVar23) {
              pdb_142dc8420(0,uVar23,0x40,&UNK_1430203c0);
LAB_141c235f9:
                    /* WARNING: Subroutine does not return */
              pdb_142dc8150(&UNK_1430203a8);
            }
            if (uVar25 <= uVar17) goto LAB_141c235f9;
            pub_142e32760(&uStack_2a8,uVar14 + lStack_220,uVar23);
            *(ulonglong *)(lStack_218 + 0x7140) = uVar25;
            if (uVar23 != 0x40) {
              puStack_1b8 = &UNK_143020319;
              uStack_1b0 = 0x24;
              ppuStack_210 = &puStack_1b8;
              pcStack_208 = pdb_1402ed400;
              pdb_140f60760((longlong)&uStack_1d7 + 7,&UNK_14339da98,&ppuStack_210);
              *(undefined8 *)(puStack_2b0 + 0x10) = uStack_1c8;
              *(undefined8 *)(puStack_2b0 + 0x18) = uStack_1c0;
              *puStack_2b0 = 0;
              *(undefined8 *)(puStack_2b0 + 1) = uStack_1d7;
              *(undefined4 *)(puStack_2b0 + 9) = uStack_1cf;
              *(undefined2 *)(puStack_2b0 + 0xd) = uStack_1cb;
              puStack_2b0[0xf] = uStack_1c9;
              return puStack_2b0;
            }
            uVar16 = uVar16 - 0x41;
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
            lVar15 = 0;
            do {
              lVar26 = *(longlong *)(&UNK_14339d6b0 + lVar15 * 8);
              *(uint *)(auStack_1a8 + *(longlong *)(&UNK_14339d6a8 + lVar15 * 8) * 4) =
                   (uint)(byte)(&uStack_2a8)[lVar15];
              *(uint *)(auStack_1a8 + lVar26 * 4) = (uint)(&bStack_2a7)[lVar15];
              *(uint *)(auStack_1a8 + *(longlong *)(&UNK_14339d6b8 + lVar15 * 8) * 4) =
                   (uint)*(byte *)((longlong)&uStack_2a6 + lVar15);
              lVar19 = lVar15 + 1;
              lVar26 = lVar15 * 8;
              lVar15 = lVar15 + 4;
              *(uint *)(auStack_1a8 + *(longlong *)(&UNK_14339d6c0 + lVar26) * 4) =
                   (uint)*(byte *)((longlong)&uStack_2a6 + lVar19);
              lVar26 = lStack_220;
            } while (lVar15 != 0x40);
          }
          else {
            if (bVar13 != 1) {
              _uStack_2a8 = SUB87(&uStack_1e8,0);
              uStack_2a1 = (undefined1)((ulonglong)&uStack_1e8 >> 0x38);
              uStack_2a0 = 0x140090b90;
              uStack_299 = 0;
              pdb_140f60760(auStack_88,&UNK_14339dce8,&uStack_2a8);
              uStack_2a1 = (undefined1)auStack_88._0_8_;
              uStack_2a0 = SUB87(auStack_88._0_8_,1);
              uStack_299 = (undefined1)auStack_88._8_8_;
              uStack_298 = SUB87(auStack_88._8_8_,1);
              goto LAB_141c2350d;
            }
            auStack_238 = (undefined1  [16])0x0;
            auStack_248 = (undefined1  [16])0x0;
            auStack_258 = (undefined1  [16])0x0;
            auStack_268 = (undefined1  [16])0x0;
            auStack_278 = (undefined1  [16])0x0;
            auStack_288 = (undefined1  [16])0x0;
            uVar25 = (ulonglong)(uStack_228 < uVar17 + 3);
            uVar23 = uStack_1f8 - uVar25;
            if (uStack_1f8 < uVar25) {
              uVar23 = 0;
            }
            uStack_298 = 0;
            uStack_291 = 0;
            uStack_290 = 0;
            uStack_289 = 0;
            uVar20 = uStack_228 - (uVar17 + 3);
            if (uStack_1f8 < uVar25) {
              uVar20 = 0;
            }
            uVar23 = uVar23 + (0xfffffffffffffffe < uVar20);
            uVar25 = uVar23 >> 1;
            uVar23 = uVar23 << 0x3f | uVar20 + 1 >> 1;
            lVar19 = -2;
            if (uVar14 == 0xffffffffffffffff) {
              lVar19 = -1;
            }
            uVar20 = lVar19 - uVar17 >> 1;
            if ((uVar23 < uVar20) <= uVar25) {
              uVar25 = 0;
              uVar23 = uVar20;
            }
            _uStack_2a8 = 0;
            uStack_2a1 = 0;
            uStack_2a0 = 0;
            uStack_299 = 0;
            if (0x3e < uVar23) {
              uVar23 = 0x3f;
            }
            if (uVar25 != 0) {
              uVar23 = 0x3f;
            }
            if (uVar23 < 0x1e) {
LAB_141c23059:
              lVar19 = 0;
              uVar23 = uVar14;
            }
            else {
              uVar20 = uStack_228 - (uVar17 + 3);
              uVar25 = (ulonglong)(uStack_228 < uVar17 + 3);
              lVar19 = uStack_1f8 - uVar25;
              if (uStack_1f8 < uVar25) {
                lVar19 = 0;
                uVar20 = 0;
              }
              uVar21 = lVar19 + (ulonglong)(0xfffffffffffffffe < uVar20);
              uVar25 = uVar21 >> 1;
              uVar20 = uVar21 << 0x3f | uVar20 + 1 >> 1;
              lVar19 = -2;
              if (uVar14 == 0xffffffffffffffff) {
                lVar19 = -1;
              }
              uVar21 = lVar19 - uVar17 >> 1;
              if ((uVar20 < uVar21) <= uVar25) {
                uVar25 = 0;
                uVar20 = uVar21;
              }
              if (0x3e < uVar20) {
                uVar20 = 0x3f;
              }
              iVar22 = (int)uVar20;
              if (uVar25 != 0) {
                iVar22 = 0x3f;
              }
              if (-uVar17 - 4 < (ulonglong)(uint)(iVar22 * 2)) goto LAB_141c23059;
              uVar23 = uVar23 + 1;
              uVar25 = (ulonglong)((uint)uVar23 & 3);
              if ((uVar23 & 3) == 0) {
                uVar25 = 4;
              }
              lVar19 = uVar23 - uVar25;
              uVar23 = uVar14 + lVar19 * 2;
              lVar18 = uVar17 + lStack_200;
              lVar24 = 0;
              do {
                uVar2 = *(undefined4 *)(lVar18 + -4 + lVar24 * 2);
                uVar3 = *(undefined4 *)(lVar18 + lVar24 * 2);
                auVar28 = ZEXT716(CONCAT52(CONCAT41((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(
                                                  byte)((uint)uVar2 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar2 >> 0x10),uVar2)) >>
                                                  0x20),uVar2) >> 0x18),(char)((uint)uVar2 >> 8)),
                                           (ushort)(byte)uVar2) & 0xffffff00ffffff);
                auVar28 = pshuflw(auVar28,auVar28,0xb1);
                sVar5 = auVar28._0_2_;
                sVar7 = auVar28._2_2_;
                sVar9 = auVar28._4_2_;
                sVar11 = auVar28._6_2_;
                auVar29._8_8_ = 0;
                auVar29._0_8_ =
                     (ulonglong)
                     CONCAT52((int5)(CONCAT43((int)(CONCAT34((int3)(CONCAT25((short)(((uint7)(byte)(
                                                  (uint)uVar3 >> 0x18) << 0x30) >> 0x28),
                                                  CONCAT14((char)((uint)uVar3 >> 0x10),uVar3)) >>
                                                  0x20),uVar3) >> 0x18),
                                              CONCAT12((char)((uint)uVar3 >> 8),(short)uVar3)) >>
                                    0x10),(short)uVar3) & 0xffffffff00ff00ff;
                auVar29 = pshuflw(auVar29,auVar29,0xb1);
                sVar6 = auVar29._0_2_;
                sVar8 = auVar29._2_2_;
                sVar10 = auVar29._4_2_;
                sVar12 = auVar29._6_2_;
                *(uint *)(&uStack_2a8 + lVar24 * 2) =
                     CONCAT13((0 < sVar11) * (sVar11 < 0x100) * auVar28[6] - (0xff < sVar11),
                              CONCAT12((0 < sVar9) * (sVar9 < 0x100) * auVar28[4] - (0xff < sVar9),
                                       CONCAT11((0 < sVar7) * (sVar7 < 0x100) * auVar28[2] -
                                                (0xff < sVar7),
                                                (0 < sVar5) * (sVar5 < 0x100) * auVar28[0] -
                                                (0xff < sVar5))));
                *(uint *)(&uStack_2a4 + lVar24) =
                     CONCAT13((0 < sVar12) * (sVar12 < 0x100) * auVar29[6] - (0xff < sVar12),
                              CONCAT12((0 < sVar10) * (sVar10 < 0x100) * auVar29[4] -
                                       (0xff < sVar10),
                                       CONCAT11((0 < sVar8) * (sVar8 < 0x100) * auVar29[2] -
                                                (0xff < sVar8),
                                                (0 < sVar6) * (sVar6 < 0x100) * auVar29[0] -
                                                (0xff < sVar6))));
                lVar24 = lVar24 + 4;
                uVar14 = uVar14 + 8;
              } while (lVar19 != lVar24);
              *(ulonglong *)(lVar15 + 0x7140) = uVar14;
            }
            do {
              if ((0xfffffffffffffffd < uVar23) || (uVar25 = uVar23 + 2, uVar4 < uVar25))
              goto LAB_141c22ded;
              uVar1 = *(ushort *)(lVar26 + uVar23);
              *(ulonglong *)(lVar15 + 0x7140) = uVar25;
              *(ushort *)(&uStack_2a8 + lVar19 * 2) = uVar1 << 8 | uVar1 >> 8;
              lVar19 = lVar19 + 1;
              uVar23 = uVar25;
            } while (lVar19 != 0x40);
            uVar16 = uVar16 - 0x81;
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
            lVar15 = 0;
            do {
              lVar19 = *(longlong *)(&UNK_14339d6b0 + lVar15 * 8);
              *(uint *)(auStack_1a8 + *(longlong *)(&UNK_14339d6a8 + lVar15 * 8) * 4) =
                   (uint)*(ushort *)(&uStack_2a8 + lVar15 * 2);
              *(uint *)(auStack_1a8 + lVar19 * 4) = (uint)(ushort)(&uStack_2a6)[lVar15];
              *(uint *)(auStack_1a8 + *(longlong *)(&UNK_14339d6b8 + lVar15 * 8) * 4) =
                   (uint)(&uStack_2a4)[lVar15];
              lVar19 = lVar15 * 2;
              lVar18 = lVar15 * 8;
              lVar15 = lVar15 + 4;
              *(uint *)(auStack_1a8 + *(longlong *)(&UNK_14339d6c0 + lVar18) * 4) =
                   (uint)*(ushort *)(auStack_288 + lVar19 + -0x1a);
            } while (lVar15 != 0x40);
          }
          uStack_2b2 = uVar16;
          if (3 < (byte)uVar27) {
            _uStack_2a8 = SUB87(&uStack_1e0,0);
            uStack_2a1 = (undefined1)((ulonglong)&uStack_1e0 >> 0x38);
            uStack_2a0 = 0x140f72a40;
            uStack_299 = 0;
            pdb_140f60760(auStack_70,&UNK_14339dca9,&uStack_2a8);
            uStack_2a1 = (undefined1)auStack_70._0_8_;
            uStack_2a0 = SUB87(auStack_70._0_8_,1);
            uStack_299 = (undefined1)auStack_70._8_8_;
            uStack_298 = SUB87(auStack_70._8_8_,1);
            uStack_291 = (undefined1)auStack_70._16_8_;
            uStack_290 = SUB87(auStack_70._16_8_,1);
LAB_141c23512:
            *puStack_2b0 = 5;
            *(ulonglong *)(puStack_2b0 + 1) = CONCAT17(uStack_2a1,_uStack_2a8);
            *(ulonglong *)(puStack_2b0 + 9) = CONCAT17(uStack_299,uStack_2a0);
            *(ulonglong *)(puStack_2b0 + 0x10) = CONCAT71(uStack_298,uStack_299);
            *(ulonglong *)(puStack_2b0 + 0x18) = CONCAT71(uStack_290,uStack_291);
            return puStack_2b0;
          }
          *(undefined4 *)(lStack_1f0 + (ulonglong)(uVar27 * 0x104)) = 1;
          pub_142e32760(lStack_1f0 + (ulonglong)(uVar27 * 0x104) + 4,auStack_1a8,0x100);
          param_1 = puStack_2b0;
          uVar17 = uVar25;
        } while (uVar16 != 0);
      }
      *param_1 = 0xd;
      return param_1;
    }
  }
LAB_141c22ded:
  *param_1 = 1;
  *(undefined **)(param_1 + 8) = &UNK_14339d4db;
  *(undefined8 *)(param_1 + 0x10) = 0xd;
  return param_1;
}

