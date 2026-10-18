// VA 0x1405beaf0, PDB extent 623 bytes
// system_decorator::decorator_visual::playermade_stairs::playermade_stairs_assemble_visuals::playermade_stairs_assemble::closure$22<false>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/playermade_stairs_assemble_visuals.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::playermade_stairs_assemble_visuals::playermade_stairs_assemble::closure$22<false>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/playermade_stairs_assemble_visuals.rs
   Extent: 623 */

bool pdb_1405beaf0(undefined8 param_1,longlong *param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  char *pcVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  uint uVar19;
  ushort uVar20;
  longlong lVar21;
  byte bVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
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
  undefined4 uStack_90;
  int iStack_8c;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  longlong lStack_70;
  int iStack_68;
  longlong alStack_60 [4];
  
  lVar11 = pdb_140a61160();
  lStack_80 = CONCAT44(lStack_80._4_4_,param_3);
  uVar14 = *(ulonglong *)(lVar11 + 0x10);
  lStack_70 = 4;
  if (uVar14 == 0) {
LAB_1405beb90:
    lStack_78 = 4;
  }
  else {
    if (uVar14 == 1) {
      lVar18 = *(longlong *)(lVar11 + 8);
      lStack_78 = 4;
      if (param_3 != *(int *)(lVar18 + 0x20)) goto LAB_1405beb95;
      uVar12 = 0;
    }
    else {
      uVar12 = pdb_1400aede0(lVar11 + 0x38,&lStack_80);
      uVar13 = pdb_140401410(lVar11,uVar12,&lStack_80);
      if ((uVar13 & 1) == 0) goto LAB_1405beb90;
      if (uVar14 <= uVar12) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar12,uVar14,&UNK_142f77528);
      }
      lVar18 = *(longlong *)(lVar11 + 8);
      lStack_78 = 4;
      if (lVar18 == 0) goto LAB_1405beb95;
    }
    lStack_78 = *(longlong *)(lVar18 + 8 + uVar12 * 0x28);
    lStack_70 = lStack_78 + *(longlong *)(lVar18 + 0x10 + uVar12 * 0x28) * 8;
  }
LAB_1405beb95:
  lStack_80 = lVar11 + 0x48;
  iStack_68 = param_3;
  pdb_1405c8820(&uStack_90,&lStack_80);
  if (lStack_88 != 0) {
    iVar3 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                             CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                   CONCAT13(unaff_XMM6_Bd,
                            CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
    iVar4 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                             CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                   CONCAT13(unaff_XMM6_Bh,
                            CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
    iVar5 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                             CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                   CONCAT13(unaff_XMM6_Bl,
                            CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
    iVar6 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                             CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                   CONCAT13(unaff_XMM6_Bp,
                            CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
    do {
      iVar7 = iStack_8c;
      uVar10 = uStack_90;
      iVar16 = iStack_8c;
      iVar8 = pdb_140a61520(uStack_90);
      iVar17 = param_4;
      iVar9 = pdb_140a61520(param_3);
      if (iVar17 != iVar16 || iVar9 != iVar8) {
        uVar10 = pdb_140a61520(uVar10,iVar7);
        lVar11 = pdb_140c017b0(uVar10);
        alStack_60[0] = lVar11;
        if (param_2[3] != 0) {
          uVar14 = pdb_1400af0a0(param_2 + 4,alStack_60);
          bVar22 = (byte)(uVar14 >> 0x39);
          auVar23 = ZEXT216(CONCAT11(bVar22,bVar22));
          auVar23 = pshuflw(auVar23,auVar23,0);
          lVar18 = 0;
          while( true ) {
            uVar14 = uVar14 & param_2[1];
            pcVar15 = (char *)(*param_2 + uVar14);
            auVar25[0] = -(*pcVar15 == auVar23[0]);
            auVar25[1] = -(pcVar15[1] == auVar23[1]);
            auVar25[2] = -(pcVar15[2] == auVar23[2]);
            auVar25[3] = -(pcVar15[3] == auVar23[3]);
            auVar25[4] = -(pcVar15[4] == auVar23[4]);
            auVar25[5] = -(pcVar15[5] == auVar23[5]);
            auVar25[6] = -(pcVar15[6] == auVar23[6]);
            auVar25[7] = -(pcVar15[7] == auVar23[7]);
            auVar25[8] = -(pcVar15[8] == auVar23[0]);
            auVar25[9] = -(pcVar15[9] == auVar23[1]);
            auVar25[10] = -(pcVar15[10] == auVar23[2]);
            auVar25[0xb] = -(pcVar15[0xb] == auVar23[3]);
            auVar25[0xc] = -(pcVar15[0xc] == auVar23[4]);
            auVar25[0xd] = -(pcVar15[0xd] == auVar23[5]);
            auVar25[0xe] = -(pcVar15[0xe] == auVar23[6]);
            auVar25[0xf] = -(pcVar15[0xf] == auVar23[7]);
            uVar20 = (ushort)(SUB161(auVar25 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar25[0xf] >> 7) << 0xf;
            uVar19 = (uint)uVar20;
            while (uVar20 != 0) {
              uVar1 = 0;
              for (uVar2 = uVar19; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x80000000) {
                uVar1 = uVar1 + 1;
              }
              lVar21 = *param_2 + (uVar1 + uVar14 & param_2[1]) * -0x20;
              if (lVar11 == *(longlong *)(lVar21 + -0x20)) {
                uVar14 = *(ulonglong *)(lVar21 + -8);
                if (uVar14 < 2) {
                  lVar21 = lVar21 + -0x18;
                }
                else {
                  uVar14 = *(ulonglong *)(lVar21 + -0x10);
                  lVar21 = *(longlong *)(lVar21 + -0x18);
                }
                if (uVar14 == 0) {
                  return false;
                }
                pcVar15 = (char *)(lVar21 + uVar14 * 4 + -4);
                if (pcVar15 == (char *)0x0) {
                  return false;
                }
                return *pcVar15 == '\x03';
              }
              uVar20 = (ushort)(uVar19 - 1) & (ushort)uVar19;
              uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar20);
            }
            auVar24[0] = -(*pcVar15 == (char)iVar3);
            auVar24[1] = -(pcVar15[1] == (char)((uint)iVar3 >> 8));
            auVar24[2] = -(pcVar15[2] == (char)((uint)iVar3 >> 0x10));
            auVar24[3] = -(pcVar15[3] == (char)((uint)iVar3 >> 0x18));
            auVar24[4] = -(pcVar15[4] == (char)iVar4);
            auVar24[5] = -(pcVar15[5] == (char)((uint)iVar4 >> 8));
            auVar24[6] = -(pcVar15[6] == (char)((uint)iVar4 >> 0x10));
            auVar24[7] = -(pcVar15[7] == (char)((uint)iVar4 >> 0x18));
            auVar24[8] = -(pcVar15[8] == (char)iVar5);
            auVar24[9] = -(pcVar15[9] == (char)((uint)iVar5 >> 8));
            auVar24[10] = -(pcVar15[10] == (char)((uint)iVar5 >> 0x10));
            auVar24[0xb] = -(pcVar15[0xb] == (char)((uint)iVar5 >> 0x18));
            auVar24[0xc] = -(pcVar15[0xc] == (char)iVar6);
            auVar24[0xd] = -(pcVar15[0xd] == (char)((uint)iVar6 >> 8));
            auVar24[0xe] = -(pcVar15[0xe] == (char)((uint)iVar6 >> 0x10));
            auVar24[0xf] = -(pcVar15[0xf] == (char)((uint)iVar6 >> 0x18));
            if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar24 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar24 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar24 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar24 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar24 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar24 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar24 >> 0x3f,0) & 1) != 0) || (SUB161(auVar24 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar24 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar24 >> 0x57,0) & 1) != 0) || (SUB161(auVar24 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar24 >> 0x67,0) & 1) != 0) || (SUB161(auVar24 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar24 >> 0x77,0) & 1) != 0) || auVar24[0xf] < '\0') break;
            uVar14 = uVar14 + lVar18 + 0x10;
            lVar18 = lVar18 + 0x10;
          }
        }
      }
      pdb_1405c8820(&uStack_90,&lStack_80);
    } while (lStack_88 != 0);
  }
  return false;
}

