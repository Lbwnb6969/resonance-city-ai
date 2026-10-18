// VA 0x1410d0740, PDB extent 718 bytes
// system_clutter::autoclutter::AutoClutterState::flush_candidates_pending_removal
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/autoclutter/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_clutter::autoclutter::AutoClutterState::flush_candidates_pending_removal
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/autoclutter/mod.rs
   Extent: 718 */

void pdb_1410d0740(longlong param_1)

{
  char *pcVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  ushort *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ushort *puVar11;
  longlong lVar12;
  uint uVar13;
  ushort *puVar14;
  ushort uVar15;
  ulonglong uVar16;
  longlong *plVar17;
  byte bVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  char unaff_XMM6_Ba;
  char unaff_XMM6_Bb;
  char unaff_XMM6_Bc;
  char unaff_XMM6_Bd;
  char unaff_XMM6_Be;
  char unaff_XMM6_Bf;
  char unaff_XMM6_Bg;
  char unaff_XMM6_Bh;
  char unaff_XMM6_Bi;
  char unaff_XMM6_Bj;
  char unaff_XMM6_Bk;
  char unaff_XMM6_Bl;
  char unaff_XMM6_Bm;
  char unaff_XMM6_Bn;
  char unaff_XMM6_Bo;
  char unaff_XMM6_Bp;
  undefined1 uStack_111;
  ushort *puStack_110;
  ulonglong uStack_108;
  ulonglong uStack_100;
  longlong *plStack_f8;
  undefined1 *puStack_f0;
  longlong *aplStack_e8 [21];
  
  uVar9 = *(ulonglong *)(param_1 + 0x40);
  if (uVar9 == 0) {
    return;
  }
  puVar11 = *(ushort **)(param_1 + 0x38);
  puStack_f0 = &uStack_111;
  if (uVar9 != 1) goto LAB_1410d0988;
LAB_1410d0784:
  do {
    puStack_110 = puVar11 + uVar9;
    iVar5 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                             CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                   CONCAT13(unaff_XMM6_Bd,
                            CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
    unaff_XMM6_Ba = (char)iVar5;
    unaff_XMM6_Bb = (char)((uint)iVar5 >> 8);
    unaff_XMM6_Bc = (char)((uint)iVar5 >> 0x10);
    unaff_XMM6_Bd = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                             CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                   CONCAT13(unaff_XMM6_Bh,
                            CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
    unaff_XMM6_Be = (char)iVar5;
    unaff_XMM6_Bf = (char)((uint)iVar5 >> 8);
    unaff_XMM6_Bg = (char)((uint)iVar5 >> 0x10);
    unaff_XMM6_Bh = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                             CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                   CONCAT13(unaff_XMM6_Bl,
                            CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
    unaff_XMM6_Bi = (char)iVar5;
    unaff_XMM6_Bj = (char)((uint)iVar5 >> 8);
    unaff_XMM6_Bk = (char)((uint)iVar5 >> 0x10);
    unaff_XMM6_Bl = (char)((uint)iVar5 >> 0x18);
    iVar5 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                             CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                   CONCAT13(unaff_XMM6_Bp,
                            CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
    unaff_XMM6_Bm = (char)iVar5;
    unaff_XMM6_Bn = (char)((uint)iVar5 >> 8);
    unaff_XMM6_Bo = (char)((uint)iVar5 >> 0x10);
    unaff_XMM6_Bp = (char)((uint)iVar5 >> 0x18);
    while( true ) {
      uVar2 = *puVar11;
      plVar10 = (longlong *)(ulonglong)uVar2;
      plVar17 = *(longlong **)(param_1 + 0x28);
      if (plVar17 <= plVar10) break;
      lVar8 = *(longlong *)(param_1 + 0x20);
      uVar9 = lVar8 + (longlong)plVar10 * 0x98;
      pub_142e32760(&puStack_f0,uVar9,0x98);
      plVar17 = (longlong *)((longlong)plVar17 + -1);
      pub_142e32770(uVar9,(longlong)plVar17 * 0x98 + lVar8,0x98);
      *(longlong **)(param_1 + 0x28) = plVar17;
      if ((int)puStack_f0 == 4) {
        LOCK();
        *aplStack_e8[0] = *aplStack_e8[0] + -1;
        UNLOCK();
        if (*aplStack_e8[0] == 0) {
          pdb_140c79ee0(aplStack_e8);
        }
      }
      if (plVar17 != plVar10) {
        if (plVar17 <= plVar10) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(plVar10,plVar17,&UNK_14328aa10);
        }
        uVar9 = *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x88 + (longlong)plVar10 * 0x98);
        uStack_108 = uVar9;
        if (*(longlong *)(param_1 + 0x78) != 0) {
          uVar6 = pdb_14216e010(param_1 + 0x80,&uStack_108);
          lVar8 = *(longlong *)(param_1 + 0x60);
          bVar18 = (byte)(uVar6 >> 0x39);
          auVar19 = ZEXT216(CONCAT11(bVar18,bVar18));
          auVar19 = pshuflw(auVar19,auVar19,0);
          lVar12 = 0;
          while( true ) {
            uVar6 = uVar6 & *(ulonglong *)(param_1 + 0x68);
            pcVar1 = (char *)(lVar8 + uVar6);
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
            uVar15 = (ushort)(SUB161(auVar21 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
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
                     (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar21[0xf] >> 7) << 0xf;
            uVar13 = (uint)uVar15;
            while (uVar15 != 0) {
              uVar3 = 0;
              for (uVar4 = uVar13; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
                uVar3 = uVar3 + 1;
              }
              uVar16 = uVar3 + uVar6 & *(ulonglong *)(param_1 + 0x68);
              if (uVar9 == *(ulonglong *)(lVar8 + -0x48 + uVar16 * -0x48)) {
                lVar8 = lVar8 + uVar16 * -0x48;
                plStack_f8 = (longlong *)(ulonglong)*(ushort *)(lVar8 + -6);
                puStack_f0 = (undefined1 *)0x1;
                uStack_100 = (ulonglong)(plStack_f8 < (longlong *)0xfffe);
                aplStack_e8[0] = plVar17;
                if ((plStack_f8 >= (longlong *)0xfffe) || (plVar17 != plStack_f8))
                goto LAB_1410d0968;
                *(ushort *)(lVar8 + -6) = uVar2;
                goto LAB_1410d07a0;
              }
              uVar15 = (ushort)(uVar13 - 1) & (ushort)uVar13;
              uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar15);
            }
            auVar20[0] = -(*pcVar1 == unaff_XMM6_Ba);
            auVar20[1] = -(pcVar1[1] == unaff_XMM6_Bb);
            auVar20[2] = -(pcVar1[2] == unaff_XMM6_Bc);
            auVar20[3] = -(pcVar1[3] == unaff_XMM6_Bd);
            auVar20[4] = -(pcVar1[4] == unaff_XMM6_Be);
            auVar20[5] = -(pcVar1[5] == unaff_XMM6_Bf);
            auVar20[6] = -(pcVar1[6] == unaff_XMM6_Bg);
            auVar20[7] = -(pcVar1[7] == unaff_XMM6_Bh);
            auVar20[8] = -(pcVar1[8] == unaff_XMM6_Bi);
            auVar20[9] = -(pcVar1[9] == unaff_XMM6_Bj);
            auVar20[10] = -(pcVar1[10] == unaff_XMM6_Bk);
            auVar20[0xb] = -(pcVar1[0xb] == unaff_XMM6_Bl);
            auVar20[0xc] = -(pcVar1[0xc] == unaff_XMM6_Bm);
            auVar20[0xd] = -(pcVar1[0xd] == unaff_XMM6_Bn);
            auVar20[0xe] = -(pcVar1[0xe] == unaff_XMM6_Bo);
            auVar20[0xf] = -(pcVar1[0xf] == unaff_XMM6_Bp);
            if ((((((((((((((((SUB161(auVar20 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar20 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar20 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar20 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar20 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar20 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar20 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar20 >> 0x3f,0) & 1) != 0) || (SUB161(auVar20 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar20 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar20 >> 0x57,0) & 1) != 0) || (SUB161(auVar20 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar20 >> 0x67,0) & 1) != 0) || (SUB161(auVar20 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar20 >> 0x77,0) & 1) != 0) || auVar20[0xf] < '\0') break;
            uVar6 = uVar6 + lVar12 + 0x10;
            lVar12 = lVar12 + 0x10;
          }
        }
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_14328aa28);
      }
LAB_1410d07a0:
      puVar11 = puVar11 + 1;
      if (puVar11 == puStack_110) {
        *(undefined8 *)(param_1 + 0x40) = 0;
        return;
      }
    }
    pdb_142dc7eb2(plVar10,plVar17);
LAB_1410d0968:
    pdb_142dc7f76(0,&uStack_100,&puStack_f0,0);
LAB_1410d0988:
    if (uVar9 < 0x15) {
      puVar7 = puVar11 + 1;
      lVar8 = 2;
      do {
        uVar15 = puVar7[-1];
        uVar2 = *puVar7;
        lVar12 = lVar8;
        if (uVar15 < uVar2) {
          do {
            *(ushort *)((longlong)puVar11 + lVar12) = uVar15;
            puVar14 = puVar11;
            if (lVar12 == 2) goto LAB_1410d09a0;
            uVar15 = *(ushort *)((longlong)puVar11 + lVar12 + -4);
            lVar12 = lVar12 + -2;
          } while (uVar15 < uVar2);
          puVar14 = (ushort *)(lVar12 + (longlong)puVar11);
LAB_1410d09a0:
          *puVar14 = uVar2;
        }
        puVar7 = puVar7 + 1;
        lVar8 = lVar8 + 2;
      } while (puVar7 != puVar11 + uVar9);
      goto LAB_1410d0784;
    }
    pdb_14219fb60(puVar11,uVar9,&puStack_f0);
  } while( true );
}

