// VA 0x140c40700, PDB extent 737 bytes
// country_core::resources::walls::decorator_storage::DecoratorStorage::apply_decorator_remove
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator_storage::DecoratorStorage::apply_decorator_remove
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
   Extent: 737 */

longlong * pdb_140c40700(longlong *param_1,longlong *param_2,longlong *param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  code *pcVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  longlong lVar13;
  uint uVar14;
  ushort uVar15;
  longlong lVar16;
  longlong *plVar17;
  byte bVar18;
  undefined1 auVar19 [16];
  undefined1 in_XMM1_Ba;
  undefined1 in_XMM1_Bb;
  undefined1 in_XMM1_Bc;
  undefined1 in_XMM1_Bd;
  undefined1 in_XMM1_Be;
  undefined1 in_XMM1_Bf;
  undefined1 in_XMM1_Bg;
  undefined1 in_XMM1_Bh;
  undefined1 in_XMM1_Bi;
  undefined1 in_XMM1_Bj;
  undefined1 in_XMM1_Bk;
  undefined1 in_XMM1_Bl;
  undefined1 in_XMM1_Bm;
  undefined1 in_XMM1_Bn;
  undefined1 in_XMM1_Bo;
  undefined1 in_XMM1_Bp;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined4 uStack_108;
  undefined4 uStack_104;
  longlong *plStack_100;
  code *pcStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  undefined1 uStack_e0;
  undefined1 uStack_df;
  undefined1 uStack_de;
  undefined1 uStack_dd;
  undefined1 uStack_dc;
  undefined1 uStack_db;
  undefined1 uStack_da;
  undefined1 uStack_d9;
  undefined1 uStack_d8;
  undefined1 uStack_d7;
  undefined1 uStack_d6;
  undefined1 uStack_d5;
  undefined1 uStack_d4;
  undefined1 uStack_d3;
  undefined1 uStack_d2;
  undefined1 uStack_d1;
  longlong lStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined1 uStack_86;
  undefined1 uStack_85;
  undefined1 uStack_84;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  undefined1 uStack_7e;
  undefined1 uStack_7d;
  undefined1 uStack_7c;
  undefined1 uStack_7b;
  undefined1 uStack_7a;
  undefined1 uStack_79;
  longlong lStack_78;
  longlong lStack_70;
  longlong lStack_68;
  longlong lStack_60;
  longlong lStack_58;
  longlong lStack_50;
  longlong lStack_48;
  
  if ((char)param_2[0x36] != '\0') {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14306c3c9,0x21,&UNK_14306cfb0);
  }
  if (*param_3 == 0) {
    plVar17 = (longlong *)param_3[1];
    plStack_100 = plVar17;
    if (param_2[3] != 0) {
      uVar11 = pdb_1400af0a0(param_2 + 4,&plStack_100);
      lVar3 = *param_2;
      bVar18 = (byte)(uVar11 >> 0x39);
      auVar19 = ZEXT216(CONCAT11(bVar18,bVar18));
      auVar19 = pshuflw(auVar19,auVar19,0);
      lVar13 = 0;
      iVar6 = -(uint)(CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ==
                     CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))));
      iVar7 = -(uint)(CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ==
                     CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))));
      iVar8 = -(uint)(CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ==
                     CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))));
      iVar9 = -(uint)(CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ==
                     CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))));
      while( true ) {
        uVar11 = uVar11 & param_2[1];
        pcVar1 = (char *)(lVar3 + uVar11);
        auVar21[0] = -(*pcVar1 == auVar19[0]);
        auVar21[1] = -(pcVar1[1] == auVar19[1]);
        auVar21[2] = -(pcVar1[2] == auVar19[2]);
        auVar21[3] = -(pcVar1[3] == auVar19[3]);
        auVar21[4] = -(pcVar1[4] == auVar19[4]);
        auVar21[5] = -(pcVar1[5] == auVar19[5]);
        auVar21[6] = -(pcVar1[6] == auVar19[6]);
        auVar21[7] = -(pcVar1[7] == auVar19[7]);
        auVar21[8] = -(pcVar1[8] == auVar19[0]);
        auVar21[9] = -(pcVar1[9] == auVar19[1]);
        auVar21[10] = -(pcVar1[10] == auVar19[2]);
        auVar21[0xb] = -(pcVar1[0xb] == auVar19[3]);
        auVar21[0xc] = -(pcVar1[0xc] == auVar19[4]);
        auVar21[0xd] = -(pcVar1[0xd] == auVar19[5]);
        auVar21[0xe] = -(pcVar1[0xe] == auVar19[6]);
        auVar21[0xf] = -(pcVar1[0xf] == auVar19[7]);
        uVar15 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe | (ushort)(auVar21[0xf] >> 7) << 0xf
        ;
        uVar14 = (uint)uVar15;
        while (uVar15 != 0) {
          uVar4 = 0;
          for (uVar5 = uVar14; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
            uVar4 = uVar4 + 1;
          }
          lVar16 = (uVar4 + uVar11 & param_2[1]) * -0x98;
          if (plVar17 == *(longlong **)(lVar3 + -0x98 + lVar16)) {
            plVar17 = (longlong *)(lVar3 + lVar16 + -0x90);
            goto LAB_140c40821;
          }
          uVar15 = (ushort)(uVar14 - 1) & (ushort)uVar14;
          uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar15);
        }
        auVar20[0] = -(*pcVar1 == (char)iVar6);
        auVar20[1] = -(pcVar1[1] == (char)((uint)iVar6 >> 8));
        auVar20[2] = -(pcVar1[2] == (char)((uint)iVar6 >> 0x10));
        auVar20[3] = -(pcVar1[3] == (char)((uint)iVar6 >> 0x18));
        auVar20[4] = -(pcVar1[4] == (char)iVar7);
        auVar20[5] = -(pcVar1[5] == (char)((uint)iVar7 >> 8));
        auVar20[6] = -(pcVar1[6] == (char)((uint)iVar7 >> 0x10));
        auVar20[7] = -(pcVar1[7] == (char)((uint)iVar7 >> 0x18));
        auVar20[8] = -(pcVar1[8] == (char)iVar8);
        auVar20[9] = -(pcVar1[9] == (char)((uint)iVar8 >> 8));
        auVar20[10] = -(pcVar1[10] == (char)((uint)iVar8 >> 0x10));
        auVar20[0xb] = -(pcVar1[0xb] == (char)((uint)iVar8 >> 0x18));
        auVar20[0xc] = -(pcVar1[0xc] == (char)iVar9);
        auVar20[0xd] = -(pcVar1[0xd] == (char)((uint)iVar9 >> 8));
        auVar20[0xe] = -(pcVar1[0xe] == (char)((uint)iVar9 >> 0x10));
        auVar20[0xf] = -(pcVar1[0xf] == (char)((uint)iVar9 >> 0x18));
        if ((((((((((((((((SUB161(auVar20 >> 7,0) & 1) != 0 || (SUB161(auVar20 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar20 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar20 >> 0x1f,0) & 1) != 0) || (SUB161(auVar20 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar20 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar20 >> 0x37,0) & 1) != 0) || (SUB161(auVar20 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar20 >> 0x47,0) & 1) != 0) || (SUB161(auVar20 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar20 >> 0x57,0) & 1) != 0) || (SUB161(auVar20 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar20 >> 0x67,0) & 1) != 0) || (SUB161(auVar20 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar20 >> 0x77,0) & 1) != 0) || auVar20[0xf] < '\0') break;
        uVar11 = uVar11 + lVar13 + 0x10;
        lVar13 = lVar13 + 0x10;
      }
    }
  }
  else if ((int)*param_3 == 1) {
    if (param_2[0x12] != 0) {
      plVar17 = param_2 + 0x12;
LAB_140c40821:
      uVar2 = (undefined4)param_3[2];
      uStack_108 = uVar2;
      uVar12 = pdb_1400aede0(plVar17 + 0x10,&uStack_108);
      pdb_140ca8930(plVar17 + 0xc,uVar12,&uStack_108);
      pdb_1403b0de0(plVar17,uVar2);
      uVar12 = pdb_1400aede0(plVar17 + 10,&uStack_108);
      pdb_140ca9f50(&plStack_100,plVar17 + 6,uVar12,&uStack_108);
      pcVar10 = pcStack_f8;
      if (pcStack_f8 == (code *)0x8) {
        pcStack_f8 = pdb_140c447f0;
        plStack_100 = param_3 + 2;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14306cfc8,&plStack_100,&UNK_14306d018);
      }
      lStack_48 = lStack_a0;
      lStack_58 = lStack_b0;
      lStack_50 = lStack_a8;
      lStack_68 = lStack_c0;
      lStack_60 = lStack_b8;
      lStack_78 = lStack_d0;
      lStack_70 = lStack_c8;
      uStack_88 = uStack_e0;
      uStack_87 = uStack_df;
      uStack_86 = uStack_de;
      uStack_85 = uStack_dd;
      uStack_84 = uStack_dc;
      uStack_83 = uStack_db;
      uStack_82 = uStack_da;
      uStack_81 = uStack_d9;
      uStack_80 = uStack_d8;
      uStack_7f = uStack_d7;
      uStack_7e = uStack_d6;
      uStack_7d = uStack_d5;
      uStack_7c = uStack_d4;
      uStack_7b = uStack_d3;
      uStack_7a = uStack_d2;
      uStack_79 = uStack_d1;
      lStack_98 = lStack_f0;
      lStack_90 = lStack_e8;
      uStack_104 = uVar2;
      uVar12 = pdb_1400aede0(param_2 + 0x10,&uStack_104);
      pdb_140cabcd0(&plStack_100,param_2 + 0xc,uVar12,&uStack_104);
      if ((int)pcStack_f8 == 3) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_14306d418,0x30,&UNK_14306caf0);
      }
      *param_1 = (longlong)pcVar10;
      param_1[1] = lStack_98;
      param_1[2] = lStack_90;
      param_1[3] = CONCAT17(uStack_81,
                            CONCAT16(uStack_82,
                                     CONCAT15(uStack_83,
                                              CONCAT14(uStack_84,
                                                       CONCAT13(uStack_85,
                                                                CONCAT12(uStack_86,
                                                                         CONCAT11(uStack_87,
                                                                                  uStack_88)))))));
      param_1[4] = CONCAT17(uStack_79,
                            CONCAT16(uStack_7a,
                                     CONCAT15(uStack_7b,
                                              CONCAT14(uStack_7c,
                                                       CONCAT13(uStack_7d,
                                                                CONCAT12(uStack_7e,
                                                                         CONCAT11(uStack_7f,
                                                                                  uStack_80)))))));
      param_1[5] = lStack_78;
      param_1[6] = lStack_70;
      param_1[7] = lStack_68;
      param_1[8] = lStack_60;
      param_1[9] = lStack_58;
      param_1[10] = lStack_50;
      param_1[0xb] = lStack_48;
      return param_1;
    }
  }
  else if (param_2[0x24] != 0) {
    plVar17 = param_2 + 0x24;
    goto LAB_140c40821;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_14306cf98);
}

