// VA 0x140bffd30, PDB extent 1074 bytes
// country_core::systems::backend::vao_update::rebuild_vaos
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/backend/vao_update.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::backend::vao_update::rebuild_vaos
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/backend/vao_update.rs
   Extent: 1074 */

void pdb_140bffd30(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  uint uVar14;
  ushort uVar15;
  longlong *plVar16;
  byte bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
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
  longlong *plStack_130;
  undefined4 *puStack_128;
  longlong *plStack_120;
  undefined8 uStack_118;
  longlong *plStack_110;
  longlong lStack_108;
  undefined *puStack_100;
  longlong lStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  longlong ***ppplStack_b0;
  longlong **pplStack_a8;
  code *pcStack_a0;
  longlong *plStack_98;
  undefined4 uStack_8c;
  longlong *plStack_88;
  longlong lStack_80;
  longlong lStack_78;
  longlong lStack_70;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  plStack_98 = (longlong *)*param_1;
  if (plStack_98[2] != 0) {
    lStack_80 = 0;
    lStack_78 = 8;
    lStack_70 = 0;
    plVar16 = (longlong *)plStack_98[1];
    plVar1 = plVar16 + plStack_98[2];
    lVar3 = *param_2;
    puStack_128 = (undefined4 *)param_2[2];
    uStack_8c = *(undefined4 *)((longlong)param_2 + 0x1c);
    plStack_120 = (longlong *)*param_4;
    uStack_118 = *param_3;
    iVar7 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                             CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                   CONCAT13(unaff_XMM6_Bd,
                            CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
    iVar8 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                             CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                   CONCAT13(unaff_XMM6_Bh,
                            CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
    iVar9 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                             CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                   CONCAT13(unaff_XMM6_Bl,
                            CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
    iVar10 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                              CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                    CONCAT13(unaff_XMM6_Bp,
                             CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
    plStack_110 = param_1;
    for (; plVar12 = plStack_98, plVar16 != plVar1; plVar16 = plVar16 + 1) {
      lVar4 = *plVar16;
      plStack_130 = plVar16;
      if (*(longlong *)(lVar3 + 0x48) != 0) {
        lStack_108 = lVar4;
        uVar11 = pdb_1400af0a0(lVar3 + 0x50,&lStack_108);
        bVar17 = (byte)(uVar11 >> 0x39);
        auVar18 = ZEXT216(CONCAT11(bVar17,bVar17));
        auVar18 = pshuflw(auVar18,auVar18,0);
        lVar13 = 0;
        while( true ) {
          uVar11 = uVar11 & *(ulonglong *)(lVar3 + 0x38);
          auVar2 = *(undefined1 (*) [16])(*(longlong *)(lVar3 + 0x30) + uVar11);
          auVar20[0] = -(auVar2[0] == auVar18[0]);
          auVar20[1] = -(auVar2[1] == auVar18[1]);
          auVar20[2] = -(auVar2[2] == auVar18[2]);
          auVar20[3] = -(auVar2[3] == auVar18[3]);
          auVar20[4] = -(auVar2[4] == auVar18[4]);
          auVar20[5] = -(auVar2[5] == auVar18[5]);
          auVar20[6] = -(auVar2[6] == auVar18[6]);
          auVar20[7] = -(auVar2[7] == auVar18[7]);
          auVar20[8] = -(auVar2[8] == auVar18[0]);
          auVar20[9] = -(auVar2[9] == auVar18[1]);
          auVar20[10] = -(auVar2[10] == auVar18[2]);
          auVar20[0xb] = -(auVar2[0xb] == auVar18[3]);
          auVar20[0xc] = -(auVar2[0xc] == auVar18[4]);
          auVar20[0xd] = -(auVar2[0xd] == auVar18[5]);
          auVar20[0xe] = -(auVar2[0xe] == auVar18[6]);
          auVar20[0xf] = -(auVar2[0xf] == auVar18[7]);
          uVar15 = (ushort)(SUB161(auVar20 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar20[0xf] >> 7) << 0xf;
          uVar14 = (uint)uVar15;
          while (uVar15 != 0) {
            uVar5 = 0;
            for (uVar6 = uVar14; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
              uVar5 = uVar5 + 1;
            }
            if (lVar4 == *(longlong *)
                          (*(longlong *)(lVar3 + 0x30) + -0x38 +
                          (uVar5 + uVar11 & *(ulonglong *)(lVar3 + 0x38)) * -0x38)) {
              *puStack_128 = uStack_8c;
              plVar12 = (longlong *)
                        pdb_140a4f6a0(lVar3,*plStack_120 + 0x10,plStack_98,lVar4,uStack_118);
              lVar13 = lStack_70;
              if (plVar12 != (longlong *)0x0) {
                plStack_88 = plVar12;
                if (lStack_70 == lStack_80) {
                  pdb_142d7e8a0(&lStack_80);
                }
                *(longlong *)(lStack_78 + lVar13 * 8) = lVar4;
                lStack_70 = lVar13 + 1;
                if (1 < *_DAT_143ca8e90) {
                  pplStack_a8 = &plStack_88;
                  pcStack_a0 = pdb_140f36c30;
                  lStack_108 = 0;
                  puStack_100 = &UNK_143067dda;
                  lStack_f8 = 0x2a;
                  uStack_f0 = 0;
                  puStack_e8 = &UNK_143067d75;
                  uStack_e0 = 0x35;
                  uStack_d8 = 2;
                  puStack_d0 = &UNK_143067dda;
                  uStack_c8 = 0x2a;
                  uStack_c0 = 0x4800000001;
                  puStack_b8 = &UNK_143067e04;
                  ppplStack_b0 = &pplStack_a8;
                  pdb_140f332f0(&uStack_61,&lStack_108);
                }
                pdb_140f36c40(&plStack_88);
              }
              goto LAB_140bffdda;
            }
            uVar15 = (ushort)(uVar14 - 1) & (ushort)uVar14;
            uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar15);
          }
          auVar19[0] = -(auVar2[0] == (char)iVar7);
          auVar19[1] = -(auVar2[1] == (char)((uint)iVar7 >> 8));
          auVar19[2] = -(auVar2[2] == (char)((uint)iVar7 >> 0x10));
          auVar19[3] = -(auVar2[3] == (char)((uint)iVar7 >> 0x18));
          auVar19[4] = -(auVar2[4] == (char)iVar8);
          auVar19[5] = -(auVar2[5] == (char)((uint)iVar8 >> 8));
          auVar19[6] = -(auVar2[6] == (char)((uint)iVar8 >> 0x10));
          auVar19[7] = -(auVar2[7] == (char)((uint)iVar8 >> 0x18));
          auVar19[8] = -(auVar2[8] == (char)iVar9);
          auVar19[9] = -(auVar2[9] == (char)((uint)iVar9 >> 8));
          auVar19[10] = -(auVar2[10] == (char)((uint)iVar9 >> 0x10));
          auVar19[0xb] = -(auVar2[0xb] == (char)((uint)iVar9 >> 0x18));
          auVar19[0xc] = -(auVar2[0xc] == (char)iVar10);
          auVar19[0xd] = -(auVar2[0xd] == (char)((uint)iVar10 >> 8));
          auVar19[0xe] = -(auVar2[0xe] == (char)((uint)iVar10 >> 0x10));
          auVar19[0xf] = -(auVar2[0xf] == (char)((uint)iVar10 >> 0x18));
          if ((((((((((((((((SUB161(auVar19 >> 7,0) & 1) != 0 || (SUB161(auVar19 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar19 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar19 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar19 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar19 >> 0x2f,0) & 1) != 0) || (SUB161(auVar19 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar19 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar19 >> 0x47,0) & 1) != 0) || (SUB161(auVar19 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar19 >> 0x57,0) & 1) != 0) || (SUB161(auVar19 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar19 >> 0x67,0) & 1) != 0) || (SUB161(auVar19 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar19 >> 0x77,0) & 1) != 0) || auVar19[0xf] < '\0') break;
          uVar11 = uVar11 + lVar13 + 0x10;
          lVar13 = lVar13 + 0x10;
        }
      }
      if (4 < *_DAT_143ca8e90) {
        pplStack_a8 = &plStack_130;
        pcStack_a0 = pdb_1417c3d00;
        lStack_108 = 0;
        puStack_100 = &UNK_143067dda;
        lStack_f8 = 0x2a;
        uStack_f0 = 0;
        puStack_e8 = &UNK_143067d75;
        uStack_e0 = 0x35;
        uStack_d8 = 5;
        puStack_d0 = &UNK_143067dda;
        uStack_c8 = 0x2a;
        uStack_c0 = 0x4d00000001;
        puStack_b8 = &UNK_143067dab;
        ppplStack_b0 = &pplStack_a8;
        pdb_140f332f0(&uStack_61,&lStack_108);
      }
LAB_140bffdda:
    }
    lStack_f8 = lStack_70;
    lStack_108 = lStack_80;
    puStack_100 = (undefined *)lStack_78;
    *(undefined4 *)plStack_110[2] = *(undefined4 *)((longlong)plStack_110 + 0x1c);
    if (*plStack_98 != 0) {
      pub_1406abac0((byte *)plStack_98[1],*plStack_98 << 3,8);
    }
    plVar12[2] = lStack_f8;
    *plVar12 = lStack_108;
    plVar12[1] = (longlong)puStack_100;
  }
  return;
}

