// VA 0x140b563e0, PDB extent 1853 bytes
// country_core::systems::wall::wall_state::wall_spatial_hash::WallSpatialHash::add_segment
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/wall_state/wall_spatial_hash.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::wall_state::wall_spatial_hash::WallSpatialHash::add_segment
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/wall_state/wall_spatial_hash.rs
   Extent: 1853 */

void pdb_140b563e0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  longlong param_9,undefined4 param_10)

{
  ulonglong *puVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  ushort uVar22;
  ulonglong *puVar23;
  byte bVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 unaff_XMM12_Ba;
  undefined1 unaff_XMM12_Bb;
  undefined1 unaff_XMM12_Bc;
  undefined1 unaff_XMM12_Bd;
  undefined1 unaff_XMM12_Be;
  undefined1 unaff_XMM12_Bf;
  undefined1 unaff_XMM12_Bg;
  undefined1 unaff_XMM12_Bh;
  undefined1 unaff_XMM12_Bi;
  undefined1 unaff_XMM12_Bj;
  undefined1 unaff_XMM12_Bk;
  undefined1 unaff_XMM12_Bl;
  undefined1 unaff_XMM12_Bm;
  undefined1 unaff_XMM12_Bn;
  undefined1 unaff_XMM12_Bo;
  undefined1 unaff_XMM12_Bp;
  longlong lStack_1d8;
  longlong lStack_1d0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  longlong lStack_188;
  ulonglong uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  longlong lStack_158;
  ulonglong uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  longlong lStack_120;
  uint uStack_118;
  ulonglong uStack_108;
  longlong lStack_100;
  ulonglong *puStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  ulonglong *puStack_e0;
  undefined1 uStack_d2;
  undefined1 uStack_d1;
  undefined8 uStack_d0;
  
  uStack_d0 = 0xfffffffffffffffe;
  uStack_118 = *(uint *)(param_1 + 0x58);
  uStack_108 = (ulonglong)uStack_118;
  uStack_148 = *param_4;
  uStack_140 = param_4[1];
  uStack_130 = param_5;
  uStack_12c = param_6;
  uStack_128 = param_7;
  uStack_124 = param_8;
  lStack_120 = param_9;
  *(uint *)(param_1 + 0x58) = uStack_118 + 1;
  lStack_100 = 0;
  puStack_f8 = (ulonglong *)0x8;
  lStack_f0 = 0;
  uStack_d1 = 1;
  uStack_138 = param_2;
  uStack_134 = param_3;
  pdb_140b3a280(param_10,*(undefined4 *)param_4,*(undefined4 *)((longlong)param_4 + 4),
                *(undefined4 *)(param_4 + 1),*(undefined4 *)((longlong)param_4 + 0xc),param_10,
                &lStack_100);
  lStack_e8 = lStack_100;
  puVar1 = puStack_f8 + lStack_f0;
  iVar7 = -(uint)(CONCAT13(unaff_XMM12_Bd,
                           CONCAT12(unaff_XMM12_Bc,CONCAT11(unaff_XMM12_Bb,unaff_XMM12_Ba))) ==
                 CONCAT13(unaff_XMM12_Bd,
                          CONCAT12(unaff_XMM12_Bc,CONCAT11(unaff_XMM12_Bb,unaff_XMM12_Ba))));
  iVar8 = -(uint)(CONCAT13(unaff_XMM12_Bh,
                           CONCAT12(unaff_XMM12_Bg,CONCAT11(unaff_XMM12_Bf,unaff_XMM12_Be))) ==
                 CONCAT13(unaff_XMM12_Bh,
                          CONCAT12(unaff_XMM12_Bg,CONCAT11(unaff_XMM12_Bf,unaff_XMM12_Be))));
  iVar9 = -(uint)(CONCAT13(unaff_XMM12_Bl,
                           CONCAT12(unaff_XMM12_Bk,CONCAT11(unaff_XMM12_Bj,unaff_XMM12_Bi))) ==
                 CONCAT13(unaff_XMM12_Bl,
                          CONCAT12(unaff_XMM12_Bk,CONCAT11(unaff_XMM12_Bj,unaff_XMM12_Bi))));
  iVar10 = -(uint)(CONCAT13(unaff_XMM12_Bp,
                            CONCAT12(unaff_XMM12_Bo,CONCAT11(unaff_XMM12_Bn,unaff_XMM12_Bm))) ==
                  CONCAT13(unaff_XMM12_Bp,
                           CONCAT12(unaff_XMM12_Bo,CONCAT11(unaff_XMM12_Bn,unaff_XMM12_Bm))));
  puStack_e0 = puStack_f8;
  puVar23 = puStack_f8;
LAB_140b565c0:
  do {
    uVar12 = uStack_140;
    uVar11 = uStack_148;
    if (puVar23 == puVar1) {
      if (lStack_e8 != 0) {
        pub_1406abac0((byte *)puStack_e0,lStack_e8 << 3,8);
      }
      return;
    }
    uVar15 = *puVar23;
    if (*(ulonglong *)(param_1 + 0x10) <= uVar15) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar15,*(ulonglong *)(param_1 + 0x10),&UNK_14305a6b8);
    }
    puVar23 = puVar23 + 1;
    lVar18 = *(longlong *)(param_1 + 8);
    lVar19 = uVar15 * 0x30;
    plVar14 = (longlong *)(lVar18 + lVar19);
    lVar16 = *(longlong *)(lVar18 + 0x20 + lVar19);
    lVar4 = *(longlong *)(lVar18 + 0x28 + lVar19);
    lVar20 = 0;
    do {
      if (lVar4 * 8 - lVar20 == 0) {
        if (lVar4 == *(longlong *)(lVar18 + lVar19 + 0x18)) {
          pdb_142d7e8a0();
          lVar16 = plVar14[4];
        }
        *(longlong *)(lVar16 + lVar4 * 8) = param_9;
        plVar14[5] = lVar4 + 1;
        lVar20 = plVar14[2];
        if (lVar20 == *plVar14) goto LAB_140b56657;
        goto LAB_140b56660;
      }
      plVar2 = (longlong *)(lVar16 + lVar20);
      lVar20 = lVar20 + 8;
    } while (*plVar2 != param_9);
    lVar20 = plVar14[2];
    if (lVar20 == *plVar14) {
LAB_140b56657:
      pdb_142d7f080(plVar14);
    }
LAB_140b56660:
    lVar18 = plVar14[1];
    lVar16 = lVar20 * 0x38;
    *(undefined8 *)(lVar18 + lVar16) = uVar11;
    ((undefined8 *)(lVar18 + lVar16))[1] = uVar12;
    *(undefined4 *)(lVar18 + 0x10 + lVar16) = param_2;
    *(undefined4 *)(lVar18 + 0x14 + lVar16) = param_3;
    *(undefined4 *)(lVar18 + 0x18 + lVar16) = param_5;
    *(undefined4 *)(lVar18 + 0x1c + lVar16) = param_6;
    *(undefined4 *)(lVar18 + 0x20 + lVar16) = param_7;
    *(undefined4 *)(lVar18 + 0x24 + lVar16) = param_8;
    *(longlong *)(lVar18 + 0x28 + lVar16) = param_9;
    *(int *)(lVar18 + 0x30 + lVar16) = (int)uStack_108;
    plVar14[2] = lVar20 + 1;
    uVar17 = uStack_108;
    if (*(longlong *)(param_1 + 0x30) != 0) {
      uVar13 = pdb_1400af0a0(param_1 + 0x38,&lStack_120);
      lVar20 = *(longlong *)(param_1 + 0x18);
      uVar17 = *(ulonglong *)(param_1 + 0x20);
      bVar24 = (byte)(uVar13 >> 0x39);
      auVar25 = ZEXT216(CONCAT11(bVar24,bVar24));
      auVar25 = pshuflw(auVar25,auVar25,0);
      lVar18 = 0;
      while( true ) {
        uVar13 = uVar13 & uVar17;
        auVar3 = *(undefined1 (*) [16])(lVar20 + uVar13);
        auVar27[0] = -(auVar3[0] == auVar25[0]);
        auVar27[1] = -(auVar3[1] == auVar25[1]);
        auVar27[2] = -(auVar3[2] == auVar25[2]);
        auVar27[3] = -(auVar3[3] == auVar25[3]);
        auVar27[4] = -(auVar3[4] == auVar25[4]);
        auVar27[5] = -(auVar3[5] == auVar25[5]);
        auVar27[6] = -(auVar3[6] == auVar25[6]);
        auVar27[7] = -(auVar3[7] == auVar25[7]);
        auVar27[8] = -(auVar3[8] == auVar25[0]);
        auVar27[9] = -(auVar3[9] == auVar25[1]);
        auVar27[10] = -(auVar3[10] == auVar25[2]);
        auVar27[0xb] = -(auVar3[0xb] == auVar25[3]);
        auVar27[0xc] = -(auVar3[0xc] == auVar25[4]);
        auVar27[0xd] = -(auVar3[0xd] == auVar25[5]);
        auVar27[0xe] = -(auVar3[0xe] == auVar25[6]);
        auVar27[0xf] = -(auVar3[0xf] == auVar25[7]);
        uVar22 = (ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe | (ushort)(auVar27[0xf] >> 7) << 0xf
        ;
        uVar21 = (uint)uVar22;
        while (uVar22 != 0) {
          uVar5 = 0;
          for (uVar6 = uVar21; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar5 = uVar5 + 1;
          }
          lVar16 = (uVar5 + uVar13 & uVar17) * -0x38;
          if (param_9 == *(longlong *)(lVar20 + -0x38 + lVar16)) {
            pdb_1417b7c60(lVar20 + lVar16 + -0x30,uVar15);
            goto LAB_140b565c0;
          }
          uVar22 = (ushort)(uVar21 - 1) & (ushort)uVar21;
          uVar21 = CONCAT22((short)(uVar21 - 1 >> 0x10),uVar22);
        }
        auVar26[0] = -(auVar3[0] == (char)iVar7);
        auVar26[1] = -(auVar3[1] == (char)((uint)iVar7 >> 8));
        auVar26[2] = -(auVar3[2] == (char)((uint)iVar7 >> 0x10));
        auVar26[3] = -(auVar3[3] == (char)((uint)iVar7 >> 0x18));
        auVar26[4] = -(auVar3[4] == (char)iVar8);
        auVar26[5] = -(auVar3[5] == (char)((uint)iVar8 >> 8));
        auVar26[6] = -(auVar3[6] == (char)((uint)iVar8 >> 0x10));
        auVar26[7] = -(auVar3[7] == (char)((uint)iVar8 >> 0x18));
        auVar26[8] = -(auVar3[8] == (char)iVar9);
        auVar26[9] = -(auVar3[9] == (char)((uint)iVar9 >> 8));
        auVar26[10] = -(auVar3[10] == (char)((uint)iVar9 >> 0x10));
        auVar26[0xb] = -(auVar3[0xb] == (char)((uint)iVar9 >> 0x18));
        auVar26[0xc] = -(auVar3[0xc] == (char)iVar10);
        auVar26[0xd] = -(auVar3[0xd] == (char)((uint)iVar10 >> 8));
        auVar26[0xe] = -(auVar3[0xe] == (char)((uint)iVar10 >> 0x10));
        auVar26[0xf] = -(auVar3[0xf] == (char)((uint)iVar10 >> 0x18));
        if ((((((((((((((((SUB161(auVar26 >> 7,0) & 1) != 0 || (SUB161(auVar26 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar26 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar26 >> 0x1f,0) & 1) != 0) || (SUB161(auVar26 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar26 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar26 >> 0x37,0) & 1) != 0) || (SUB161(auVar26 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar26 >> 0x47,0) & 1) != 0) || (SUB161(auVar26 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar26 >> 0x57,0) & 1) != 0) || (SUB161(auVar26 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar26 >> 0x67,0) & 1) != 0) || (SUB161(auVar26 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar26 >> 0x77,0) & 1) != 0) || auVar26[0xf] < '\0') break;
        uVar13 = uVar13 + lVar18 + 0x10;
        lVar18 = lVar18 + 0x10;
      }
    }
    plVar14 = (longlong *)pdb_140f3bda0();
    if ((char)plVar14[2] == '\x01') {
      lStack_158 = *plVar14;
      uVar17 = plVar14[1];
    }
    else {
      lStack_158 = pdb_140f4fd10();
      *plVar14 = lStack_158;
      plVar14[1] = uVar17;
      *(undefined1 *)(plVar14 + 2) = 1;
    }
    *plVar14 = lStack_158 + 1;
    uStack_168 = _DAT_14305a9a0;
    uStack_160 = _UNK_14305a9a8;
    uStack_178 = _DAT_14305a990;
    uStack_170 = _UNK_14305a998;
    uStack_d2 = 1;
    uStack_150 = uVar17;
    pdb_1417b7c60(&uStack_178,uVar15);
    lStack_188 = lStack_158;
    uStack_180 = uStack_150;
    uStack_198 = uStack_168;
    uStack_190 = uStack_160;
    uStack_1a8 = uStack_178;
    uStack_1a0 = uStack_170;
    uStack_d2 = 0;
    pdb_1417b8cb0(&lStack_1d8,param_1 + 0x18,param_9,&uStack_1a8);
    if ((lStack_1d8 != 0) && (lStack_1d0 != 0)) {
      uVar15 = lStack_1d0 * 8 + 0x17U & 0xfffffffffffffff0;
      uVar17 = lStack_1d0 + uVar15 + 0x11;
      if (uVar17 != 0) {
        pub_1406abac0((byte *)(lStack_1d8 - uVar15),uVar17,0x10);
      }
    }
  } while( true );
}

