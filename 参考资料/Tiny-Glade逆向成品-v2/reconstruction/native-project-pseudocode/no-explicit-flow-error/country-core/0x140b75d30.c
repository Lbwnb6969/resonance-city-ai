// VA 0x140b75d30, PDB extent 1201 bytes
// country_core::systems::wall::eraser::animate_wall_bulldoze::animate_wall_bulldoze
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/eraser/animate_wall_bulldoze.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::eraser::animate_wall_bulldoze::animate_wall_bulldoze
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/eraser/animate_wall_bulldoze.rs
   Extent: 1201 */

void pdb_140b75d30(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  float *pfVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  uint uVar28;
  ushort uVar29;
  longlong lVar30;
  byte bVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
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
  float *pfStack_138;
  code *pcStack_130;
  undefined8 uStack_128;
  longlong lStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined8 uStack_e4;
  undefined8 uStack_dc;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined2 uStack_cc;
  undefined1 uStack_ca;
  undefined1 uStack_c9;
  float fStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  longlong lStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  
  uVar2 = *(undefined4 *)((longlong)param_1 + 0x1c);
  puVar5 = (undefined4 *)param_1[2];
  *puVar5 = uVar2;
  fVar23 = _DAT_142e3787c;
  fVar22 = _DAT_142e36f28;
  lVar6 = *param_1;
  if (*(longlong *)(lVar6 + 0x10) != 0) {
    lVar26 = *(longlong *)(lVar6 + 8);
    lVar30 = *(longlong *)(lVar6 + 0x10) * 0x98 + lVar26;
    plVar7 = (longlong *)*param_2;
    puVar8 = (undefined4 *)param_2[2];
    lVar9 = *param_4;
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
    uVar4 = *(undefined4 *)((longlong)param_3 + 0x1c);
    lVar10 = *param_3;
    puVar11 = (undefined4 *)param_3[2];
    iVar18 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                              CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                    CONCAT13(unaff_XMM6_Bd,
                             CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
    iVar19 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                              CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                    CONCAT13(unaff_XMM6_Bh,
                             CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
    iVar20 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                              CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                    CONCAT13(unaff_XMM6_Bl,
                             CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
    iVar21 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                              CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                    CONCAT13(unaff_XMM6_Bp,
                             CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
    do {
      pfVar15 = *(float **)(lVar26 + 0x70);
      pfStack_138 = pfVar15;
      if (plVar7[3] != 0) {
        uVar24 = pdb_1400af0a0(plVar7 + 4,&pfStack_138);
        bVar31 = (byte)(uVar24 >> 0x39);
        auVar34 = ZEXT216(CONCAT11(bVar31,bVar31));
        auVar34 = pshuflw(auVar34,auVar34,0);
        lVar27 = 0;
        while( true ) {
          uVar24 = uVar24 & plVar7[1];
          pcVar1 = (char *)(*plVar7 + uVar24);
          auVar36[0] = -(*pcVar1 == auVar34[0]);
          auVar36[1] = -(pcVar1[1] == auVar34[1]);
          auVar36[2] = -(pcVar1[2] == auVar34[2]);
          auVar36[3] = -(pcVar1[3] == auVar34[3]);
          auVar36[4] = -(pcVar1[4] == auVar34[4]);
          auVar36[5] = -(pcVar1[5] == auVar34[5]);
          auVar36[6] = -(pcVar1[6] == auVar34[6]);
          auVar36[7] = -(pcVar1[7] == auVar34[7]);
          auVar36[8] = -(pcVar1[8] == auVar34[0]);
          auVar36[9] = -(pcVar1[9] == auVar34[1]);
          auVar36[10] = -(pcVar1[10] == auVar34[2]);
          auVar36[0xb] = -(pcVar1[0xb] == auVar34[3]);
          auVar36[0xc] = -(pcVar1[0xc] == auVar34[4]);
          auVar36[0xd] = -(pcVar1[0xd] == auVar34[5]);
          auVar36[0xe] = -(pcVar1[0xe] == auVar34[6]);
          auVar36[0xf] = -(pcVar1[0xf] == auVar34[7]);
          uVar29 = (ushort)(SUB161(auVar36 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar36[0xf] >> 7) << 0xf;
          uVar28 = (uint)uVar29;
          while (uVar29 != 0) {
            uVar16 = 0;
            for (uVar17 = uVar28; (uVar17 & 1) == 0; uVar17 = uVar17 >> 1 | 0x80000000) {
              uVar16 = uVar16 + 1;
            }
            if (pfVar15 == *(float **)(*plVar7 + -0x78 + (uVar16 + uVar24 & plVar7[1]) * -0x78)) {
              fVar32 = *(float *)(lVar9 + 0x58) / fVar23 + *(float *)(lVar26 + 0x8c);
              fVar33 = 0.0;
              if (0.0 <= fVar32) {
                fVar33 = fVar32;
              }
              fVar32 = fVar22;
              if (fVar33 <= fVar22) {
                fVar32 = fVar33;
              }
              *(float *)(lVar26 + 0x8c) = fVar32;
              fVar33 = (float)pdb_140dedc70();
              if ((*(float *)(lVar26 + 0x8c) == fVar22) &&
                 (!NAN(*(float *)(lVar26 + 0x8c)) && !NAN(fVar22))) {
                *puVar8 = uVar3;
                pdb_140b0e830(&pfStack_138,plVar7,*(undefined8 *)(lVar26 + 0x70));
                if (!SBORROW8(0,(longlong)pfStack_138)) {
                  if (pfStack_138 != (float *)0x0) {
                    pub_1406abac0((byte *)pcStack_130,(longlong)pfStack_138 << 3,4);
                  }
                  if (lStack_120 != 0) {
                    pub_1406abac0((byte *)CONCAT44(uStack_114,uStack_118),lStack_120 << 2,4);
                  }
                }
                goto LAB_140b76120;
              }
              fStack_c0 = *(float *)(lVar26 + 0x78) * fVar33 + (fVar22 - fVar33) * 0.0;
              if ((fStack_c0 < 0.0) || (fVar22 < fStack_c0)) {
                pfStack_138 = &fStack_c0;
                pcStack_130 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
                pdb_142dc83d0(&UNK_14335ec38,&pfStack_138,&UNK_14305c270);
              }
              fVar33 = (fVar22 - fVar33) + *(float *)(lVar26 + 0x7c) * fVar33;
              if ((fVar33 < 0.0) || (fVar22 < fVar33)) {
                pfStack_138 = &fStack_c0;
                pcStack_130 = pdb_140f70fc0;
                fStack_c0 = fVar33;
                    /* WARNING: Subroutine does not return */
                pdb_142dc83d0(&UNK_14335ec38,&pfStack_138,&UNK_14305c288);
              }
              fVar32 = fStack_c0;
              fStack_c0 = fVar33;
              pdb_1419a77d0(&fStack_c0,lVar26,fVar32,fVar33,&UNK_14305c2a0);
              uStack_ca = *(char *)(lVar26 + 0x6e) == '\x01';
              uStack_d4 = *(undefined4 *)(lVar26 + 100);
              uStack_c9 = *(undefined1 *)(lVar26 + 0x6f);
              uStack_cc = *(undefined2 *)(lVar26 + 0x6c);
              uStack_108 = uStack_90;
              pfStack_138 = (float *)CONCAT44(uStack_bc,fStack_c0);
              uStack_118 = uStack_a0;
              uStack_114 = uStack_9c;
              uStack_110 = uStack_98;
              uStack_10c = uStack_94;
              uStack_128 = uStack_b0;
              lStack_120 = lStack_a8;
              pcStack_130 = (code *)uStack_b8;
              uStack_100 = 2;
              uStack_e4 = *(undefined8 *)(lVar26 + 0x54);
              uStack_dc = *(undefined8 *)(lVar26 + 0x5c);
              uStack_d0 = *(undefined4 *)(lVar26 + 0x68);
              *puVar8 = uVar3;
              pdb_14092f410(plVar7,*(undefined8 *)(lVar26 + 0x70),&pfStack_138);
              uVar12 = *(undefined8 *)(lVar26 + 0x70);
              pfStack_138 = *(float **)(lVar26 + 0x80);
              pcStack_130 = (code *)CONCAT44(pcStack_130._4_4_,*(undefined4 *)(lVar26 + 0x88));
              *puVar11 = uVar4;
              lVar27 = *(longlong *)(lVar10 + 0x30);
              uVar13 = *(undefined8 *)(lVar10 + 0x40);
              if (lVar27 == *(longlong *)(lVar10 + 0x20)) {
                pdb_142d7e6e0(lVar10 + 0x20);
              }
              lVar14 = *(longlong *)(lVar10 + 0x28);
              lVar25 = lVar27 * 0x20;
              *(undefined8 *)(lVar14 + lVar25) = uVar13;
              *(undefined8 *)(lVar14 + 8 + lVar25) = uVar12;
              *(float **)(lVar14 + 0x10 + lVar25) = pfStack_138;
              *(undefined4 *)(lVar14 + 0x18 + lVar25) = pcStack_130._0_4_;
              *(undefined2 *)(lVar14 + 0x1c + lVar25) = 0;
              *(longlong *)(lVar10 + 0x30) = lVar27 + 1;
              *(longlong *)(lVar10 + 0x40) = *(longlong *)(lVar10 + 0x40) + 1;
              goto joined_r0x000140b760ca;
            }
            uVar29 = (ushort)(uVar28 - 1) & (ushort)uVar28;
            uVar28 = CONCAT22((short)(uVar28 - 1 >> 0x10),uVar29);
          }
          auVar35[0] = -(*pcVar1 == (char)iVar18);
          auVar35[1] = -(pcVar1[1] == (char)((uint)iVar18 >> 8));
          auVar35[2] = -(pcVar1[2] == (char)((uint)iVar18 >> 0x10));
          auVar35[3] = -(pcVar1[3] == (char)((uint)iVar18 >> 0x18));
          auVar35[4] = -(pcVar1[4] == (char)iVar19);
          auVar35[5] = -(pcVar1[5] == (char)((uint)iVar19 >> 8));
          auVar35[6] = -(pcVar1[6] == (char)((uint)iVar19 >> 0x10));
          auVar35[7] = -(pcVar1[7] == (char)((uint)iVar19 >> 0x18));
          auVar35[8] = -(pcVar1[8] == (char)iVar20);
          auVar35[9] = -(pcVar1[9] == (char)((uint)iVar20 >> 8));
          auVar35[10] = -(pcVar1[10] == (char)((uint)iVar20 >> 0x10));
          auVar35[0xb] = -(pcVar1[0xb] == (char)((uint)iVar20 >> 0x18));
          auVar35[0xc] = -(pcVar1[0xc] == (char)iVar21);
          auVar35[0xd] = -(pcVar1[0xd] == (char)((uint)iVar21 >> 8));
          auVar35[0xe] = -(pcVar1[0xe] == (char)((uint)iVar21 >> 0x10));
          auVar35[0xf] = -(pcVar1[0xf] == (char)((uint)iVar21 >> 0x18));
          if ((((((((((((((((SUB161(auVar35 >> 7,0) & 1) != 0 || (SUB161(auVar35 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar35 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar35 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar35 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar35 >> 0x2f,0) & 1) != 0) || (SUB161(auVar35 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar35 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar35 >> 0x47,0) & 1) != 0) || (SUB161(auVar35 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar35 >> 0x57,0) & 1) != 0) || (SUB161(auVar35 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar35 >> 0x67,0) & 1) != 0) || (SUB161(auVar35 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar35 >> 0x77,0) & 1) != 0) || auVar35[0xf] < '\0') break;
          uVar24 = uVar24 + lVar27 + 0x10;
          lVar27 = lVar27 + 0x10;
        }
      }
LAB_140b76120:
      *(undefined1 *)(lVar26 + 0x90) = 1;
joined_r0x000140b760ca:
      lVar26 = lVar26 + 0x98;
    } while (lVar26 != lVar30);
  }
  *puVar5 = uVar2;
  pdb_1415e13c0(lVar6);
  return;
}

