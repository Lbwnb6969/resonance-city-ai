// VA 0x141b069b0, PDB extent 968 bytes
// country_core::startup::load_clutter_packs::resync_clutter_materials
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_clutter_packs.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::startup::load_clutter_packs::resync_clutter_materials
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_clutter_packs.rs
   Extent: 968 */

void pdb_141b069b0(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  char *pcVar3;
  undefined1 auVar4 [16];
  char cVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  longlong *plVar18;
  longlong lVar19;
  byte *pbVar20;
  ushort uVar21;
  longlong lVar22;
  byte bVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
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
  undefined2 uStack_98;
  undefined2 uStack_96;
  undefined4 uStack_94;
  undefined4 uStack_90;
  longlong lStack_88;
  byte *pbStack_80;
  longlong lStack_78;
  byte *pbStack_70;
  longlong lStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  plVar18 = *(longlong **)(param_4 + 0x70);
  lVar19 = *(longlong *)(param_4 + 0x78);
  if (param_5[3] != 0) {
    uVar6 = param_5[1];
    if (uVar6 == 0) {
      uVar14 = 0;
    }
    else {
      pub_142e32780(*param_5,0xff,uVar6 + 0x11);
      uVar14 = (uVar6 + 1 & 0xfffffffffffffff8) - (uVar6 + 1 >> 3);
      if (uVar6 < 8) {
        uVar14 = uVar6;
      }
    }
    param_5[3] = 0;
    param_5[2] = uVar14;
  }
  plVar2 = plVar18 + lVar19;
  lStack_88 = 0;
  pbStack_80 = (byte *)0x4;
  lVar19 = *(longlong *)(param_4 + 0x98);
  lVar16 = *(longlong *)(param_4 + 0x80);
  uVar6 = *(ulonglong *)(param_4 + 0x88);
  pbStack_70 = (byte *)0x4;
  iVar10 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                            CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                  CONCAT13(unaff_XMM6_Bd,
                           CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
  iVar11 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                            CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                  CONCAT13(unaff_XMM6_Bh,
                           CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
  iVar12 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                            CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                  CONCAT13(unaff_XMM6_Bl,
                           CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
  iVar13 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                            CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                  CONCAT13(unaff_XMM6_Bp,
                           CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
  lStack_68 = 0;
  lStack_78 = 0;
  if (plVar18 != plVar2) {
LAB_141b06a96:
    lStack_78 = lStack_68;
    if (lVar19 != 0) {
      do {
        uVar14 = pdb_1417c5550(param_4 + 0xa0,plVar18);
        plVar1 = plVar18 + 1;
        bVar23 = (byte)(uVar14 >> 0x39);
        auVar24 = ZEXT216(CONCAT11(bVar23,bVar23));
        auVar24 = pshuflw(auVar24,auVar24,0);
        lVar15 = 0;
        while( true ) {
          uVar14 = uVar14 & uVar6;
          auVar4 = *(undefined1 (*) [16])(lVar16 + uVar14);
          auVar26[0] = -(auVar4[0] == auVar24[0]);
          auVar26[1] = -(auVar4[1] == auVar24[1]);
          auVar26[2] = -(auVar4[2] == auVar24[2]);
          auVar26[3] = -(auVar4[3] == auVar24[3]);
          auVar26[4] = -(auVar4[4] == auVar24[4]);
          auVar26[5] = -(auVar4[5] == auVar24[5]);
          auVar26[6] = -(auVar4[6] == auVar24[6]);
          auVar26[7] = -(auVar4[7] == auVar24[7]);
          auVar26[8] = -(auVar4[8] == auVar24[0]);
          auVar26[9] = -(auVar4[9] == auVar24[1]);
          auVar26[10] = -(auVar4[10] == auVar24[2]);
          auVar26[0xb] = -(auVar4[0xb] == auVar24[3]);
          auVar26[0xc] = -(auVar4[0xc] == auVar24[4]);
          auVar26[0xd] = -(auVar4[0xd] == auVar24[5]);
          auVar26[0xe] = -(auVar4[0xe] == auVar24[6]);
          auVar26[0xf] = -(auVar4[0xf] == auVar24[7]);
          uVar21 = (ushort)(SUB161(auVar26 >> 7,0) & 1) |
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
                   (ushort)(auVar26[0xf] >> 7) << 0xf;
          uVar17 = (uint)uVar21;
          if (uVar21 != 0) {
            do {
              uVar8 = 0;
              for (uVar9 = uVar17; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                uVar8 = uVar8 + 1;
              }
              lVar22 = (uVar8 + uVar14 & uVar6) * -0x70;
              if (*plVar18 == *(longlong *)(lVar16 + -0x70 + lVar22)) {
                lVar15 = *(longlong *)(lVar22 + lVar16 + -0x48);
                uVar14 = *(ulonglong *)(lVar15 + 0x28);
                if (uVar14 == 0) goto LAB_141b06b30;
                uVar7 = *(undefined8 *)(lVar15 + 0x20);
                pdb_1417b37f0(param_5,*(undefined8 *)(lVar15 + 0x38),lStack_68);
                if ((ulonglong)(lStack_88 - lStack_68) < uVar14) {
                  pdb_142d7f1b0(&lStack_88,lStack_68,uVar14,4,0x24);
                  pbStack_70 = pbStack_80;
                  lStack_68 = lStack_78;
                }
                pub_142e32760(pbStack_70 + lStack_68 * 0x24,uVar7,uVar14 * 0x24);
                lStack_78 = lStack_68 + uVar14;
                plVar18 = plVar1;
                lStack_68 = lStack_78;
                if (plVar1 == plVar2) goto LAB_141b06c0b;
                goto LAB_141b06a96;
              }
              uVar21 = (ushort)(uVar17 - 1) & (ushort)uVar17;
              uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar21);
            } while (uVar21 != 0);
          }
          auVar25[0] = -(auVar4[0] == (char)iVar10);
          auVar25[1] = -(auVar4[1] == (char)((uint)iVar10 >> 8));
          auVar25[2] = -(auVar4[2] == (char)((uint)iVar10 >> 0x10));
          auVar25[3] = -(auVar4[3] == (char)((uint)iVar10 >> 0x18));
          auVar25[4] = -(auVar4[4] == (char)iVar11);
          auVar25[5] = -(auVar4[5] == (char)((uint)iVar11 >> 8));
          auVar25[6] = -(auVar4[6] == (char)((uint)iVar11 >> 0x10));
          auVar25[7] = -(auVar4[7] == (char)((uint)iVar11 >> 0x18));
          auVar25[8] = -(auVar4[8] == (char)iVar12);
          auVar25[9] = -(auVar4[9] == (char)((uint)iVar12 >> 8));
          auVar25[10] = -(auVar4[10] == (char)((uint)iVar12 >> 0x10));
          auVar25[0xb] = -(auVar4[0xb] == (char)((uint)iVar12 >> 0x18));
          auVar25[0xc] = -(auVar4[0xc] == (char)iVar13);
          auVar25[0xd] = -(auVar4[0xd] == (char)((uint)iVar13 >> 8));
          auVar25[0xe] = -(auVar4[0xe] == (char)((uint)iVar13 >> 0x10));
          auVar25[0xf] = -(auVar4[0xf] == (char)((uint)iVar13 >> 0x18));
          if ((((((((((((((((SUB161(auVar25 >> 7,0) & 1) != 0 || (SUB161(auVar25 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar25 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar25 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar25 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar25 >> 0x2f,0) & 1) != 0) || (SUB161(auVar25 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar25 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar25 >> 0x47,0) & 1) != 0) || (SUB161(auVar25 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar25 >> 0x57,0) & 1) != 0) || (SUB161(auVar25 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar25 >> 0x67,0) & 1) != 0) || (SUB161(auVar25 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar25 >> 0x77,0) & 1) != 0) || auVar25[0xf] < '\0') break;
          uVar14 = uVar14 + lVar15 + 0x10;
          lVar15 = lVar15 + 0x10;
        }
LAB_141b06b30:
        plVar18 = plVar1;
      } while (plVar1 != plVar2);
    }
  }
LAB_141b06c0b:
  pbVar20 = pbStack_70;
  lVar19 = lStack_68;
  if (lStack_68 == 0) {
    uStack_98 = 0;
    uStack_96 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    if (lStack_88 == 0) {
      pdb_142d91b00(&lStack_88);
      pbVar20 = pbStack_80;
    }
    *(ulonglong *)(pbVar20 + 0xc) = CONCAT26(uStack_96,CONCAT24(uStack_98,0xffffffff));
    *(ulonglong *)(pbVar20 + 0x14) = CONCAT44(uStack_90,uStack_94);
    pbVar20[0] = 0xff;
    pbVar20[1] = 0xff;
    pbVar20[2] = 0xff;
    pbVar20[3] = 0xff;
    pbVar20[4] = 0xff;
    pbVar20[5] = 0xff;
    pbVar20[6] = 0xff;
    pbVar20[7] = 0xff;
    pbVar20[8] = 0xff;
    pbVar20[9] = 0xff;
    pbVar20[10] = 0xff;
    pbVar20[0xb] = 0xff;
    pbVar20[0xc] = 0xff;
    pbVar20[0xd] = 0xff;
    pbVar20[0xe] = 0xff;
    pbVar20[0xf] = 0xff;
    *(undefined8 *)(pbVar20 + 0x1c) = _DAT_142e37950;
    lStack_78 = 1;
    lVar19 = 1;
  }
  pdb_1415322a0(param_2,param_1,pbVar20,lVar19);
  uStack_98 = 0x1514;
  lVar19 = 0;
  do {
    if (lVar19 == 2) {
      if (lStack_88 != 0) {
        pub_1406abac0(pbStack_80,lStack_88 * 0x24,4);
      }
      return;
    }
    cVar5 = *(char *)((longlong)&uStack_98 + lVar19);
    lVar19 = lVar19 + 1;
    lVar15 = param_3[1];
    lVar22 = param_3[2];
    lVar16 = 0;
    do {
      if (lVar22 == lVar16) {
        if (lVar22 == *param_3) {
          pdb_142d7e910();
          lVar15 = param_3[1];
        }
        *(char *)(lVar15 + lVar22) = cVar5;
        param_3[2] = lVar22 + 1;
        break;
      }
      pcVar3 = (char *)(lVar15 + lVar16);
      lVar16 = lVar16 + 1;
    } while (*pcVar3 != cVar5);
  } while( true );
}

