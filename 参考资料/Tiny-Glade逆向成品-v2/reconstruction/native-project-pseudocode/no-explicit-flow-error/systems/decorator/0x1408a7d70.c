// VA 0x1408a7d70, PDB extent 655 bytes
// system_decorator::decorator_visual::playermade_stairs::calculate_adjusted_ladder_positions::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::calculate_adjusted_ladder_positions::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/mod.rs
   Extent: 655 */

undefined8 pdb_1408a7d70(undefined8 param_1,longlong *param_2,int param_3,int param_4,char param_5)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  uint uVar20;
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
  undefined4 uStack_90;
  int iStack_8c;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  longlong lStack_70;
  int iStack_68;
  longlong alStack_60 [4];
  
  lVar12 = pdb_140a61160();
  lStack_80 = CONCAT44(lStack_80._4_4_,param_3);
  uVar15 = *(ulonglong *)(lVar12 + 0x10);
  lStack_70 = 4;
  if (uVar15 == 0) {
LAB_1408a7e10:
    lStack_78 = 4;
  }
  else {
    if (uVar15 == 1) {
      lVar19 = *(longlong *)(lVar12 + 8);
      lStack_78 = 4;
      if (param_3 != *(int *)(lVar19 + 0x20)) goto LAB_1408a7e15;
      uVar13 = 0;
    }
    else {
      uVar13 = pdb_1400aede0(lVar12 + 0x38,&lStack_80);
      uVar14 = pdb_1414af660(lVar12,uVar13,&lStack_80);
      if ((uVar14 & 1) == 0) goto LAB_1408a7e10;
      if (uVar15 <= uVar13) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar13,uVar15,&UNK_143311df8);
      }
      lVar19 = *(longlong *)(lVar12 + 8);
      lStack_78 = 4;
      if (lVar19 == 0) goto LAB_1408a7e15;
    }
    lStack_78 = *(longlong *)(lVar19 + 8 + uVar13 * 0x28);
    lStack_70 = lStack_78 + *(longlong *)(lVar19 + 0x10 + uVar13 * 0x28) * 8;
  }
LAB_1408a7e15:
  lStack_80 = lVar12 + 0x48;
  iStack_68 = param_3;
  pdb_1414aee80(&uStack_90,&lStack_80);
  if (lStack_88 != 0) {
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
    do {
      iVar8 = iStack_8c;
      uVar11 = uStack_90;
      iVar17 = iStack_8c;
      iVar9 = pdb_140a61520(uStack_90);
      iVar18 = param_4;
      iVar10 = pdb_140a61520(param_3);
      if (iVar18 != iVar17 || iVar10 != iVar9) {
        uVar11 = pdb_140a61520(uVar11,iVar8);
        lVar12 = pdb_140c017b0(uVar11);
        alStack_60[0] = lVar12;
        if (param_2[3] != 0) {
          uVar15 = pdb_1400af0a0(param_2 + 4,alStack_60);
          bVar23 = (byte)(uVar15 >> 0x39);
          auVar24 = ZEXT216(CONCAT11(bVar23,bVar23));
          auVar24 = pshuflw(auVar24,auVar24,0);
          lVar19 = 0;
          while( true ) {
            uVar15 = uVar15 & param_2[1];
            pcVar1 = (char *)(*param_2 + uVar15);
            auVar26[0] = -(*pcVar1 == auVar24[0]);
            auVar26[1] = -(pcVar1[1] == auVar24[1]);
            auVar26[2] = -(pcVar1[2] == auVar24[2]);
            auVar26[3] = -(pcVar1[3] == auVar24[3]);
            auVar26[4] = -(pcVar1[4] == auVar24[4]);
            auVar26[5] = -(pcVar1[5] == auVar24[5]);
            auVar26[6] = -(pcVar1[6] == auVar24[6]);
            auVar26[7] = -(pcVar1[7] == auVar24[7]);
            auVar26[8] = -(pcVar1[8] == auVar24[0]);
            auVar26[9] = -(pcVar1[9] == auVar24[1]);
            auVar26[10] = -(pcVar1[10] == auVar24[2]);
            auVar26[0xb] = -(pcVar1[0xb] == auVar24[3]);
            auVar26[0xc] = -(pcVar1[0xc] == auVar24[4]);
            auVar26[0xd] = -(pcVar1[0xd] == auVar24[5]);
            auVar26[0xe] = -(pcVar1[0xe] == auVar24[6]);
            auVar26[0xf] = -(pcVar1[0xf] == auVar24[7]);
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
            uVar20 = (uint)uVar21;
            while (uVar21 != 0) {
              uVar2 = 0;
              for (uVar3 = uVar20; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
                uVar2 = uVar2 + 1;
              }
              lVar22 = *param_2 + (uVar2 + uVar15 & param_2[1]) * -0x20;
              if (lVar12 == *(longlong *)(lVar22 + -0x20)) {
                plVar16 = (longlong *)(lVar22 + -0x18);
                uVar15 = *(ulonglong *)(lVar22 + -8);
                if (param_5 == '\0') {
                  uVar13 = uVar15;
                  if (1 < uVar15) {
                    uVar13 = *(ulonglong *)(lVar22 + -0x10);
                  }
                  if (uVar13 == 0) {
                    return 0;
                  }
                  if (1 < uVar15) {
                    plVar16 = (longlong *)*plVar16;
                  }
                }
                else {
                  if (1 < uVar15) {
                    plVar16 = *(longlong **)(lVar22 + -0x18);
                    uVar15 = *(ulonglong *)(lVar22 + -0x10);
                  }
                  uVar13 = 0;
                  if (uVar15 == 0) {
                    return 0;
                  }
                  plVar16 = (longlong *)((longlong)plVar16 + uVar15 * 4 + -4);
                  if (plVar16 == (longlong *)0x0) {
                    return 0;
                  }
                }
                return CONCAT71((int7)(uVar13 >> 8),*(char *)plVar16 == '\x03');
              }
              uVar21 = (ushort)(uVar20 - 1) & (ushort)uVar20;
              uVar20 = CONCAT22((short)(uVar20 - 1 >> 0x10),uVar21);
            }
            auVar25[0] = -(*pcVar1 == (char)iVar4);
            auVar25[1] = -(pcVar1[1] == (char)((uint)iVar4 >> 8));
            auVar25[2] = -(pcVar1[2] == (char)((uint)iVar4 >> 0x10));
            auVar25[3] = -(pcVar1[3] == (char)((uint)iVar4 >> 0x18));
            auVar25[4] = -(pcVar1[4] == (char)iVar5);
            auVar25[5] = -(pcVar1[5] == (char)((uint)iVar5 >> 8));
            auVar25[6] = -(pcVar1[6] == (char)((uint)iVar5 >> 0x10));
            auVar25[7] = -(pcVar1[7] == (char)((uint)iVar5 >> 0x18));
            auVar25[8] = -(pcVar1[8] == (char)iVar6);
            auVar25[9] = -(pcVar1[9] == (char)((uint)iVar6 >> 8));
            auVar25[10] = -(pcVar1[10] == (char)((uint)iVar6 >> 0x10));
            auVar25[0xb] = -(pcVar1[0xb] == (char)((uint)iVar6 >> 0x18));
            auVar25[0xc] = -(pcVar1[0xc] == (char)iVar7);
            auVar25[0xd] = -(pcVar1[0xd] == (char)((uint)iVar7 >> 8));
            auVar25[0xe] = -(pcVar1[0xe] == (char)((uint)iVar7 >> 0x10));
            auVar25[0xf] = -(pcVar1[0xf] == (char)((uint)iVar7 >> 0x18));
            if ((((((((((((((((SUB161(auVar25 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar25 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar25 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar25 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar25 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar25 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar25 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar25 >> 0x3f,0) & 1) != 0) || (SUB161(auVar25 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar25 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar25 >> 0x57,0) & 1) != 0) || (SUB161(auVar25 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar25 >> 0x67,0) & 1) != 0) || (SUB161(auVar25 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar25 >> 0x77,0) & 1) != 0) || auVar25[0xf] < '\0') break;
            uVar15 = uVar15 + lVar19 + 0x10;
            lVar19 = lVar19 + 0x10;
          }
        }
      }
      pdb_1414aee80(&uStack_90,&lStack_80);
    } while (lStack_88 != 0);
  }
  return 0;
}

