// VA 0x1414e3af0, PDB extent 507 bytes
// country_core::utils::dirty_tiles::DirtyTiles::iter_tiles<system_decorator::decorator_visual::playermade_stairs::stairs_lazy_update::playermade_stairs_assembly_propagate_dirty_flags::closure_env$2>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/dirty_tiles.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::utils::dirty_tiles::DirtyTiles::iter_tiles<system_decorator::decorator_visual::playermade_stairs::stairs_lazy_update::playermade_stairs_assembly_propagate_dirty_flags::closure_env$2>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/dirty_tiles.rs
   Extent: 507 */

void pdb_1414e3af0(longlong param_1,undefined8 *param_2)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ushort uVar11;
  longlong lVar12;
  undefined1 (*pauVar13) [16];
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined1 (*pauVar17) [16];
  byte bVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
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
  ushort uStack_82;
  longlong lStack_80;
  longlong lStack_78;
  longlong lStack_70;
  undefined8 *puStack_68;
  ulonglong uStack_60;
  
  puStack_68 = (undefined8 *)*param_2;
  lStack_80 = 0;
  iVar4 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                           CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                 CONCAT13(unaff_XMM6_Bd,
                          CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
  iVar5 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                           CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                 CONCAT13(unaff_XMM6_Bh,
                          CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
  iVar6 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                           CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                 CONCAT13(unaff_XMM6_Bl,
                          CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
  iVar7 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                           CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                 CONCAT13(unaff_XMM6_Bp,
                          CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
  lStack_70 = 0;
  lStack_78 = param_1;
  do {
    uVar16 = *(ulonglong *)(lStack_78 + lStack_70);
    if (uVar16 != 0) {
      uStack_60 = lStack_80 << 0x20;
      do {
        uVar9 = 0;
        for (uVar10 = uVar16; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x8000000000000000) {
          uVar9 = uVar9 + 1;
        }
        uVar8 = pdb_140c6c1a0(uVar9 | uStack_60);
        uStack_82 = CONCAT11((char)(uVar8 >> 6),(char)uVar8) & 0xff3f;
        *(undefined4 *)puStack_68[2] = *(undefined4 *)((longlong)puStack_68 + 0x1c);
        lVar12 = ((undefined8 *)*puStack_68)[3];
        if (lVar12 != 0) {
          pauVar13 = *(undefined1 (**) [16])*puStack_68;
          auVar19 = *pauVar13;
          uVar8 = ~(uint)(ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar19[0xf] >> 7) << 0xf);
          pauVar17 = pauVar13 + 1;
          do {
            if ((short)uVar8 == 0) {
              do {
                auVar19 = *pauVar17;
                pauVar13 = pauVar13 + -0x140;
                pauVar17 = pauVar17 + 1;
                uVar8 = (ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar19[0xf] >> 7) << 0xf) ^ 0xffff;
              } while (uVar8 == 0);
            }
            uVar15 = 0;
            for (uVar3 = uVar8; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
              uVar15 = uVar15 + 1;
            }
            uVar9 = (ulonglong)uVar15;
            if (*(longlong *)(pauVar13[uVar9 * -0x14 + -5] + 8) != 0) {
              uVar10 = pdb_1400aec60(pauVar13 + uVar9 * -0x14 + -4,&uStack_82);
              bVar18 = (byte)(uVar10 >> 0x39);
              auVar19 = ZEXT216(CONCAT11(bVar18,bVar18));
              auVar19 = pshuflw(auVar19,auVar19,0);
              lVar14 = 0;
              while( true ) {
                uVar10 = uVar10 & *(ulonglong *)(pauVar13[uVar9 * -0x14 + -6] + 8);
                pcVar1 = (char *)(*(longlong *)pauVar13[uVar9 * -0x14 + -6] + uVar10);
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
                uVar11 = (ushort)(SUB161(auVar21 >> 7,0) & 1) |
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
                uVar15 = (uint)uVar11;
                while (uVar11 != 0) {
                  uVar3 = 0;
                  for (uVar2 = uVar15; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x80000000) {
                    uVar3 = uVar3 + 1;
                  }
                  if (uStack_82 ==
                      *(ushort *)
                       (*(longlong *)pauVar13[uVar9 * -0x14 + -6] +
                        (uVar3 + uVar10 & *(ulonglong *)(pauVar13[uVar9 * -0x14 + -6] + 8)) * -2 +
                       -2)) {
                    pauVar13[uVar9 * -0x14 + -1][9] = 1;
                    goto LAB_1414e3c45;
                  }
                  uVar11 = (ushort)(uVar15 - 1) & (ushort)uVar15;
                  uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar11);
                }
                auVar20[0] = -(*pcVar1 == (char)iVar4);
                auVar20[1] = -(pcVar1[1] == (char)((uint)iVar4 >> 8));
                auVar20[2] = -(pcVar1[2] == (char)((uint)iVar4 >> 0x10));
                auVar20[3] = -(pcVar1[3] == (char)((uint)iVar4 >> 0x18));
                auVar20[4] = -(pcVar1[4] == (char)iVar5);
                auVar20[5] = -(pcVar1[5] == (char)((uint)iVar5 >> 8));
                auVar20[6] = -(pcVar1[6] == (char)((uint)iVar5 >> 0x10));
                auVar20[7] = -(pcVar1[7] == (char)((uint)iVar5 >> 0x18));
                auVar20[8] = -(pcVar1[8] == (char)iVar6);
                auVar20[9] = -(pcVar1[9] == (char)((uint)iVar6 >> 8));
                auVar20[10] = -(pcVar1[10] == (char)((uint)iVar6 >> 0x10));
                auVar20[0xb] = -(pcVar1[0xb] == (char)((uint)iVar6 >> 0x18));
                auVar20[0xc] = -(pcVar1[0xc] == (char)iVar7);
                auVar20[0xd] = -(pcVar1[0xd] == (char)((uint)iVar7 >> 8));
                auVar20[0xe] = -(pcVar1[0xe] == (char)((uint)iVar7 >> 0x10));
                auVar20[0xf] = -(pcVar1[0xf] == (char)((uint)iVar7 >> 0x18));
                if ((((((((((((((((SUB161(auVar20 >> 7,0) & 1) != 0 ||
                                 (SUB161(auVar20 >> 0xf,0) & 1) != 0) ||
                                (SUB161(auVar20 >> 0x17,0) & 1) != 0) ||
                               (SUB161(auVar20 >> 0x1f,0) & 1) != 0) ||
                              (SUB161(auVar20 >> 0x27,0) & 1) != 0) ||
                             (SUB161(auVar20 >> 0x2f,0) & 1) != 0) ||
                            (SUB161(auVar20 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar20 >> 0x3f,0) & 1) != 0) ||
                          (SUB161(auVar20 >> 0x47,0) & 1) != 0) ||
                         (SUB161(auVar20 >> 0x4f,0) & 1) != 0) ||
                        (SUB161(auVar20 >> 0x57,0) & 1) != 0) ||
                       (SUB161(auVar20 >> 0x5f,0) & 1) != 0) || (SUB161(auVar20 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar20 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar20 >> 0x77,0) & 1) != 0) || auVar20[0xf] < '\0') break;
                uVar10 = uVar10 + lVar14 + 0x10;
                lVar14 = lVar14 + 0x10;
              }
            }
LAB_1414e3c45:
            uVar8 = uVar8 - 1 & uVar8;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
        }
        uVar16 = uVar16 & uVar16 - 1;
      } while (uVar16 != 0);
    }
    lStack_70 = lStack_70 + 8;
    lStack_80 = lStack_80 + 1;
    if (lStack_70 == 0x200) {
      return;
    }
  } while( true );
}

