// VA 0x140c8e6d0, PDB extent 2038 bytes
// country_core::resources::walls::decorator_storage::Decorators::merge_with<country_core::resources::walls::decorator_storage::DecoMoveToStorage>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator_storage::Decorators::merge_with<country_core::resources::walls::decorator_storage::DecoMoveToStorage>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
   Extent: 2038 */

void pdb_140c8e6d0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  char *pcVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  uint *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  undefined1 (*pauVar18) [16];
  longlong lVar19;
  uint uVar20;
  ushort uVar21;
  undefined1 (*pauVar22) [16];
  undefined1 (*pauVar23) [16];
  bool bVar24;
  byte bVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 unaff_XMM6_Ba;
  undefined1 unaff_XMM6_Bb;
  undefined1 unaff_XMM6_Bc;
  undefined1 unaff_XMM6_Bd;
  undefined1 unaff_XMM6_Be;
  undefined1 unaff_XMM6_Bf;
  undefined1 unaff_XMM6_Bg;
  undefined1 unaff_XMM6_Bh;
  undefined1 unaff_XMM6_Bi;
  undefined1 unaff_XMM6_Bj;
  undefined1 unaff_XMM6_Bk;
  undefined1 unaff_XMM6_Bl;
  undefined1 unaff_XMM6_Bm;
  undefined1 unaff_XMM6_Bn;
  undefined1 unaff_XMM6_Bo;
  undefined1 unaff_XMM6_Bp;
  longlong lStack_278;
  undefined4 *puStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 (*pauStack_218) [16];
  longlong lStack_210;
  undefined8 uStack_208;
  longlong lStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 (*pauStack_1e8) [16];
  longlong lStack_1e0;
  undefined8 uStack_1d8;
  longlong lStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  longlong lStack_1b8;
  ulonglong uStack_1b0;
  uint **ppuStack_1a8;
  code *pcStack_1a0;
  undefined8 *puStack_198;
  code *pcStack_190;
  undefined8 *puStack_188;
  code *pcStack_180;
  undefined8 uStack_148;
  ulonglong uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  undefined1 (*pauStack_e0) [16];
  uint *puStack_d8;
  code *pcStack_d0;
  longlong *plStack_c8;
  code *pcStack_c0;
  undefined8 *puStack_b8;
  code *pcStack_b0;
  longlong lStack_a8;
  ulonglong uStack_a0;
  byte *pbStack_98;
  uint uStack_90;
  int iStack_8c;
  longlong lStack_88;
  ulonglong uStack_80;
  uint uStack_74;
  longlong lStack_70;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  lVar17 = param_2[0xd];
  pauStack_1e8 = (undefined1 (*) [16])param_2[6];
  lStack_1e0 = param_2[7];
  uStack_1d8 = param_2[8];
  lStack_1d0 = param_2[9];
  uStack_1c8 = param_2[10];
  uStack_1c0 = param_2[0xb];
  pauStack_218 = (undefined1 (*) [16])*param_2;
  lStack_210 = param_2[1];
  uStack_208 = param_2[2];
  lStack_200 = param_2[3];
  uStack_1f8 = param_2[4];
  uStack_1f0 = param_2[5];
  lStack_70 = param_1;
  if (lVar17 != 0) {
    uVar11 = lVar17 * 4 + 0x13U & 0xfffffffffffffff0;
    uVar15 = lVar17 + uVar11 + 0x11;
    if (uVar15 != 0) {
      pub_1406abac0((byte *)(param_2[0xc] - uVar11),uVar15,0x10);
    }
  }
  auVar26 = *pauStack_218;
  pauVar22 = pauStack_218 + 1;
  uVar16 = ~(uint)(ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar26[0xf] >> 7) << 0xf);
  lStack_f0 = lStack_70 + 0x30;
  lStack_88 = lStack_70 + 0x50;
  iVar6 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                           CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                 CONCAT13(unaff_XMM6_Bd,
                          CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
  iVar7 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                           CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                 CONCAT13(unaff_XMM6_Bh,
                          CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
  iVar8 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                           CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                 CONCAT13(unaff_XMM6_Bl,
                          CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
  iVar9 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                           CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                 CONCAT13(unaff_XMM6_Bp,
                          CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
  pauStack_e0 = pauStack_218;
  lVar17 = lStack_200;
  pauVar18 = pauStack_218;
LAB_140c8e820:
  if (lVar17 != 0) {
    if ((short)uVar16 == 0) {
      do {
        auVar26 = *pauVar22;
        pauVar18 = pauVar18 + -4;
        pauVar22 = pauVar22 + 1;
        uVar16 = (ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar26[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar16 == 0);
    }
    iVar4 = 0;
    for (uVar20 = uVar16; (uVar20 & 1) == 0; uVar20 = uVar20 >> 1 | 0x80000000) {
      iVar4 = iVar4 + 1;
    }
    uVar16 = uVar16 - 1 & uVar16;
    lVar17 = lVar17 + -1;
    iVar4 = *(int *)((longlong)pauVar18 + (-4 - (ulonglong)(uint)(iVar4 << 2)));
    iStack_8c = iVar4;
    if (*(longlong *)(lStack_70 + 0x48) != 0) {
      uStack_61 = 1;
      uVar11 = pdb_1400aede0(lStack_88,&iStack_8c);
      bVar25 = (byte)(uVar11 >> 0x39);
      auVar26 = ZEXT216(CONCAT11(bVar25,bVar25));
      auVar26 = pshuflw(auVar26,auVar26,0);
      lVar19 = 0;
      while( true ) {
        uVar11 = uVar11 & *(ulonglong *)(lStack_70 + 0x38);
        pcVar1 = (char *)(*(longlong *)(lStack_70 + 0x30) + uVar11);
        auVar28[0] = -(*pcVar1 == auVar26[0]);
        auVar28[1] = -(pcVar1[1] == auVar26[1]);
        auVar28[2] = -(pcVar1[2] == auVar26[2]);
        auVar28[3] = -(pcVar1[3] == auVar26[3]);
        auVar28[4] = -(pcVar1[4] == auVar26[4]);
        auVar28[5] = -(pcVar1[5] == auVar26[5]);
        auVar28[6] = -(pcVar1[6] == auVar26[6]);
        auVar28[7] = -(pcVar1[7] == auVar26[7]);
        auVar28[8] = -(pcVar1[8] == auVar26[0]);
        auVar28[9] = -(pcVar1[9] == auVar26[1]);
        auVar28[10] = -(pcVar1[10] == auVar26[2]);
        auVar28[0xb] = -(pcVar1[0xb] == auVar26[3]);
        auVar28[0xc] = -(pcVar1[0xc] == auVar26[4]);
        auVar28[0xd] = -(pcVar1[0xd] == auVar26[5]);
        auVar28[0xe] = -(pcVar1[0xe] == auVar26[6]);
        auVar28[0xf] = -(pcVar1[0xf] == auVar26[7]);
        uVar21 = (ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe | (ushort)(auVar28[0xf] >> 7) << 0xf
        ;
        uVar20 = (uint)uVar21;
        while (uVar21 != 0) {
          uVar3 = 0;
          for (uVar5 = uVar20; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
            uVar3 = uVar3 + 1;
          }
          if (iVar4 == *(int *)(*(longlong *)(lStack_70 + 0x30) + -0x68 +
                               (uVar3 + uVar11 & *(ulonglong *)(lStack_70 + 0x38)) * -0x68))
          goto LAB_140c8e820;
          uVar21 = (ushort)(uVar20 - 1) & (ushort)uVar20;
          uVar20 = CONCAT22((short)(uVar20 - 1 >> 0x10),uVar21);
        }
        auVar27[0] = -(*pcVar1 == (char)iVar6);
        auVar27[1] = -(pcVar1[1] == (char)((uint)iVar6 >> 8));
        auVar27[2] = -(pcVar1[2] == (char)((uint)iVar6 >> 0x10));
        auVar27[3] = -(pcVar1[3] == (char)((uint)iVar6 >> 0x18));
        auVar27[4] = -(pcVar1[4] == (char)iVar7);
        auVar27[5] = -(pcVar1[5] == (char)((uint)iVar7 >> 8));
        auVar27[6] = -(pcVar1[6] == (char)((uint)iVar7 >> 0x10));
        auVar27[7] = -(pcVar1[7] == (char)((uint)iVar7 >> 0x18));
        auVar27[8] = -(pcVar1[8] == (char)iVar8);
        auVar27[9] = -(pcVar1[9] == (char)((uint)iVar8 >> 8));
        auVar27[10] = -(pcVar1[10] == (char)((uint)iVar8 >> 0x10));
        auVar27[0xb] = -(pcVar1[0xb] == (char)((uint)iVar8 >> 0x18));
        auVar27[0xc] = -(pcVar1[0xc] == (char)iVar9);
        auVar27[0xd] = -(pcVar1[0xd] == (char)((uint)iVar9 >> 8));
        auVar27[0xe] = -(pcVar1[0xe] == (char)((uint)iVar9 >> 0x10));
        auVar27[0xf] = -(pcVar1[0xf] == (char)((uint)iVar9 >> 0x18));
        if ((((((((((((((((SUB161(auVar27 >> 7,0) & 1) != 0 || (SUB161(auVar27 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar27 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar27 >> 0x1f,0) & 1) != 0) || (SUB161(auVar27 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar27 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar27 >> 0x37,0) & 1) != 0) || (SUB161(auVar27 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar27 >> 0x47,0) & 1) != 0) || (SUB161(auVar27 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar27 >> 0x57,0) & 1) != 0) || (SUB161(auVar27 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar27 >> 0x67,0) & 1) != 0) || (SUB161(auVar27 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar27 >> 0x77,0) & 1) != 0) || auVar27[0xf] < '\0') break;
        uVar11 = uVar11 + lVar19 + 0x10;
        lVar19 = lVar19 + 0x10;
      }
    }
    uStack_61 = 1;
    pdb_1403b0de0(lStack_70,iVar4);
    goto LAB_140c8e820;
  }
  pauVar18 = *(undefined1 (**) [16])(lStack_70 + 0x30);
  lVar17 = *(longlong *)(lStack_70 + 0x48);
  auVar26 = *pauVar18;
  pauVar22 = pauVar18 + 1;
  uVar16 = ~(uint)(ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar26[0xf] >> 7) << 0xf);
  pauVar23 = pauStack_1e8;
  lVar19 = lStack_1d0;
  while (pauStack_1e8 = pauVar23, lStack_1d0 = lVar19, lVar17 != 0) {
    lVar17 = lVar17 + -1;
    if ((short)uVar16 == 0) {
      do {
        auVar26 = *pauVar22;
        pauVar18 = pauVar18 + -0x68;
        pauVar22 = pauVar22 + 1;
        uVar16 = (ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar26[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar16 == 0);
    }
    uVar20 = 0;
    for (uVar3 = uVar16; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
      uVar20 = uVar20 + 1;
    }
    uVar20 = *(uint *)((longlong)pauVar18 + (ulonglong)uVar20 * -0x68 + -0x68);
    uVar11 = (ulonglong)uStack_148 >> 0x20;
    uStack_148 = (uint *)CONCAT44((int)uVar11,uVar20);
    lVar19 = param_3[2];
    uStack_61 = 1;
    uVar12 = pdb_1400aede0(lVar19 + 0x20,&uStack_148);
    uStack_61 = 1;
    pdb_140cabcd0(&ppuStack_1a8,lVar19,uVar12,&uStack_148);
    if ((int)pcStack_1a0 == 3) {
      ppuStack_1a8 = (uint **)&uStack_148;
      pcStack_1a0 = pdb_140c447f0;
      uStack_61 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14306d3c7,&ppuStack_1a8,&UNK_143076378);
    }
    puStack_d8 = (uint *)CONCAT44(puStack_d8._4_4_,uVar20);
    uStack_61 = 1;
    uVar11 = (ulonglong)uVar20;
    puVar13 = (uint *)pdb_1417b43a0(param_3[2],uVar11,*param_3,param_3[1]);
    if (puVar13 != (uint *)0x3) {
      ppuStack_1a8 = &puStack_d8;
      pcStack_1a0 = pdb_140c447f0;
      puStack_198 = &uStack_148;
      pcStack_190 = pdb_140c34b70;
      pcStack_180 = pdb_140c34b70;
      uStack_61 = 1;
      puStack_188 = param_3;
      uStack_148 = puVar13;
      uStack_140 = uVar11;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14306d398,&ppuStack_1a8,&UNK_143076390);
    }
    uVar16 = uVar16 - 1 & uVar16;
    pauVar23 = pauStack_1e8;
    lVar19 = lStack_1d0;
  }
  auVar26 = *pauVar23;
  if (lStack_1e0 == 0) {
    uStack_80 = 0;
  }
  else {
    uVar11 = lStack_1e0 * 0x68 + 0x77U & 0xfffffffffffffff0;
    uStack_a0 = lStack_1e0 + uVar11 + 0x11;
    pbStack_98 = (byte *)((longlong)pauVar23 - uVar11);
    uStack_80 = 0x10;
  }
  pauVar22 = pauVar23 + 1;
  uVar16 = ~(uint)(ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar26[0xf] >> 7) << 0xf);
  lStack_e8 = lStack_70 + 0x60;
  lStack_88 = lStack_70 + 0x20;
  lStack_a8 = lStack_1e0;
  while (bVar24 = lVar19 != 0, lVar19 = lVar19 + -1, bVar24) {
    if ((short)uVar16 == 0) {
      do {
        auVar26 = *pauVar22;
        pauVar23 = pauVar23 + -0x68;
        pauVar22 = pauVar22 + 1;
        uVar16 = (ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar26[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar16 == 0);
    }
    uVar20 = 0;
    for (uVar3 = uVar16; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
      uVar20 = uVar20 + 1;
    }
    lVar14 = (ulonglong)uVar20 * -0x68;
    uVar20 = *(uint *)((longlong)pauVar23 + lVar14 + -0x68);
    lVar17 = *(longlong *)((longlong)pauVar23 + lVar14 + -0x60);
    uStack_f8 = *(undefined8 *)((longlong)pauVar23 + lVar14 + -8);
    puVar2 = (undefined8 *)((longlong)pauVar23 + lVar14 + -0x18);
    uStack_108 = *puVar2;
    uStack_100 = puVar2[1];
    puVar2 = (undefined8 *)((longlong)pauVar23 + lVar14 + -0x28);
    uVar12 = *puVar2;
    uVar10 = puVar2[1];
    puVar2 = (undefined8 *)((longlong)pauVar23 + lVar14 + -0x38);
    uStack_128 = *puVar2;
    uStack_120 = puVar2[1];
    puVar2 = (undefined8 *)((longlong)pauVar23 + lVar14 + -0x48);
    uStack_138 = *puVar2;
    uStack_130 = puVar2[1];
    puVar2 = (undefined8 *)((longlong)pauVar23 + lVar14 + -0x58);
    uStack_148 = (uint *)*puVar2;
    uStack_140 = puVar2[1];
    uStack_118 = uVar12;
    uStack_110 = uVar10;
    if (lVar17 == 8) break;
    uStack_118._0_4_ = (undefined4)uVar12;
    uStack_118._4_4_ = (undefined4)((ulonglong)uVar12 >> 0x20);
    uStack_110._0_4_ = (undefined4)uVar10;
    uStack_110._4_4_ = (undefined4)((ulonglong)uVar10 >> 0x20);
    uStack_240 = (undefined4)uStack_118;
    uStack_23c = uStack_118._4_4_;
    uStack_238 = (undefined4)uStack_110;
    uStack_234 = uStack_110._4_4_;
    puStack_d8 = (uint *)CONCAT44(puStack_d8._4_4_,uVar20);
    lVar14 = param_3[2];
    lStack_278 = lVar17;
    puStack_270 = uStack_148;
    uStack_268 = uStack_140;
    uStack_260 = uStack_138;
    uStack_258 = uStack_130;
    uStack_250 = uStack_128;
    uStack_248 = uStack_120;
    uStack_230 = uStack_108;
    uStack_228 = uStack_100;
    uStack_220 = uStack_f8;
    uVar12 = pdb_1400aede0(lVar14 + 0x20,&puStack_d8);
    pdb_140cabcd0(&ppuStack_1a8,lVar14,uVar12,&puStack_d8);
    if ((int)pcStack_1a0 == 3) {
      ppuStack_1a8 = &puStack_d8;
      pcStack_1a0 = pdb_140c447f0;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14306d3c7,&ppuStack_1a8,&UNK_143076360);
    }
    uStack_74 = uVar20;
    uVar12 = pdb_1400aede0(lStack_88,&uStack_74);
    pdb_140ca8930(lStack_70,uVar12,&uStack_74);
    pdb_1403b0de0(lStack_e8,uVar20);
    pdb_141407a20(&ppuStack_1a8,lStack_f0,uVar20,&lStack_278);
    if ((int)ppuStack_1a8 == 8) {
      uVar11 = (ulonglong)uVar20;
      uStack_90 = uVar20;
      lStack_1b8 = pdb_1417b43a0(param_3[2],uVar11,*param_3,param_3[1]);
      if (lStack_1b8 != 3) {
        puStack_d8 = &uStack_90;
        pcStack_d0 = pdb_140c447f0;
        plStack_c8 = &lStack_1b8;
        pcStack_c0 = pdb_140c34b70;
        pcStack_b0 = pdb_140c34b70;
        uStack_1b0 = uVar11;
        puStack_b8 = param_3;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14306d398,&puStack_d8,&UNK_1430763d8);
      }
    }
    else {
      pdb_140c44480(param_3,uVar20,&UNK_1430763f0);
    }
    uVar16 = uVar16 - 1 & uVar16;
  }
  if ((lStack_a8 != 0) && (uStack_a0 != 0)) {
    pub_1406abac0(pbStack_98,uStack_a0,uStack_80);
  }
  if (lStack_210 != 0) {
    uVar11 = lStack_210 * 4 + 0x13U & 0xfffffffffffffff0;
    uVar15 = lStack_210 + uVar11 + 0x11;
    if (uVar15 != 0) {
      pub_1406abac0((byte *)((longlong)pauStack_e0 - uVar11),uVar15,0x10);
    }
  }
  return;
}

