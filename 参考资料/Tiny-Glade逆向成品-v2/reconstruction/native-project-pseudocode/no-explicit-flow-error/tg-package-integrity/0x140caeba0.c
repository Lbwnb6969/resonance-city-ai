// VA 0x140caeba0, PDB extent 952 bytes
// tg_package_integrity::is_stray_file
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-package-integrity/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tg_package_integrity::is_stray_file
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-package-integrity/src/lib.rs
   Extent: 952 */

ulonglong pdb_140caeba0(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  longlong lVar24;
  ushort uVar25;
  int iVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  longlong lVar29;
  longlong lVar30;
  code *arg0;
  ulonglong uVar31;
  uint uVar32;
  code *pcVar33;
  byte bVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 unaff_XMM7_Ba;
  undefined1 unaff_XMM7_Bb;
  undefined1 unaff_XMM7_Bc;
  undefined1 unaff_XMM7_Bd;
  undefined1 unaff_XMM7_Be;
  undefined1 unaff_XMM7_Bf;
  undefined1 unaff_XMM7_Bg;
  undefined1 unaff_XMM7_Bh;
  undefined1 unaff_XMM7_Bi;
  undefined1 unaff_XMM7_Bj;
  undefined1 unaff_XMM7_Bk;
  undefined1 unaff_XMM7_Bl;
  undefined1 unaff_XMM7_Bm;
  undefined1 unaff_XMM7_Bn;
  undefined1 unaff_XMM7_Bo;
  undefined1 unaff_XMM7_Bp;
  undefined1 auVar37 [16];
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 **ppuStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  longlong lStack_c0;
  undefined8 *puStack_b8;
  code *pcStack_b0;
  longlong lStack_a8;
  ulonglong uStack_a0;
  code *pcStack_98;
  longlong lStack_90;
  undefined1 uStack_81;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  uStack_d0 = param_1;
  uStack_c8 = param_2;
  if (_DAT_143ca4538 != 0) {
    pdb_142df48cf(&DAT_143ca4508);
  }
  if (_DAT_143ca4508 == 0) {
    uVar31 = 0;
  }
  else {
    pdb_140f3ddd0(&uStack_130,param_1,param_2);
    pdb_141cb2a80(&puStack_b8,&uStack_130);
    arg0 = pcStack_b0;
    pdb_141cb2e00(&uStack_a0,pcStack_b0,lStack_a8,&UNK_143078576,1);
    if (lStack_a8 != 0) {
      pcVar33 = arg0 + 8;
      lVar30 = lStack_a8;
      do {
        uVar31 = *(ulonglong *)(pcVar33 + -8);
        if ((!SBORROW8(0,uVar31)) && (uVar31 != 0)) {
          pub_1406abac0(*(byte **)pcVar33,uVar31,1);
        }
        pcVar33 = pcVar33 + 0x18;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
    }
    if (puStack_b8 != (undefined8 *)0x0) {
      pub_1406abac0((byte *)arg0,(longlong)puStack_b8 * 0x18,8);
    }
    lVar30 = lStack_c0;
    if (_DAT_143ca4520 != 0) {
      uVar27 = pdb_1400afac0(0x143ca4528);
      arg0 = pcStack_98;
      uVar31 = _DAT_143ca4510;
      lVar24 = _DAT_143ca4508;
      bVar34 = (byte)(uVar27 >> 0x39);
      auVar35 = ZEXT216(CONCAT11(bVar34,bVar34));
      auVar35 = pshuflw(auVar35,auVar35,0);
      lVar29 = 0;
      iVar4 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                               CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                     CONCAT13(unaff_XMM7_Bd,
                              CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
      iVar5 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                               CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                     CONCAT13(unaff_XMM7_Bh,
                              CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
      iVar6 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                               CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                     CONCAT13(unaff_XMM7_Bl,
                              CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
      iVar7 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                               CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                     CONCAT13(unaff_XMM7_Bp,
                              CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
      while( true ) {
        uVar27 = uVar27 & uVar31;
        pcVar1 = (char *)(lVar24 + uVar27);
        cVar8 = *pcVar1;
        cVar9 = pcVar1[1];
        cVar10 = pcVar1[2];
        cVar11 = pcVar1[3];
        cVar12 = pcVar1[4];
        cVar13 = pcVar1[5];
        cVar14 = pcVar1[6];
        cVar15 = pcVar1[7];
        cVar16 = pcVar1[8];
        cVar17 = pcVar1[9];
        cVar18 = pcVar1[10];
        cVar19 = pcVar1[0xb];
        cVar20 = pcVar1[0xc];
        cVar21 = pcVar1[0xd];
        cVar22 = pcVar1[0xe];
        cVar23 = pcVar1[0xf];
        auVar36[0] = -(cVar8 == auVar35[0]);
        auVar36[1] = -(cVar9 == auVar35[1]);
        auVar36[2] = -(cVar10 == auVar35[2]);
        auVar36[3] = -(cVar11 == auVar35[3]);
        auVar36[4] = -(cVar12 == auVar35[4]);
        auVar36[5] = -(cVar13 == auVar35[5]);
        auVar36[6] = -(cVar14 == auVar35[6]);
        auVar36[7] = -(cVar15 == auVar35[7]);
        auVar36[8] = -(cVar16 == auVar35[0]);
        auVar36[9] = -(cVar17 == auVar35[1]);
        auVar36[10] = -(cVar18 == auVar35[2]);
        auVar36[0xb] = -(cVar19 == auVar35[3]);
        auVar36[0xc] = -(cVar20 == auVar35[4]);
        auVar36[0xd] = -(cVar21 == auVar35[5]);
        auVar36[0xe] = -(cVar22 == auVar35[6]);
        auVar36[0xf] = -(cVar23 == auVar35[7]);
        uVar25 = (ushort)(SUB161(auVar36 >> 7,0) & 1) | (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe | (ushort)(auVar36[0xf] >> 7) << 0xf
        ;
        uVar32 = (uint)uVar25;
        lVar30 = lStack_c0;
        while (lStack_c0 = lVar29, uVar25 != 0) {
          uVar2 = 0;
          for (uVar3 = uVar32; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
            uVar2 = uVar2 + 1;
          }
          uVar28 = uVar2 + uVar27 & uVar31;
          if ((lStack_90 == *(longlong *)(lVar24 + -8 + uVar28 * -0x18)) &&
             (iVar26 = pub_142e32750(arg0,*(undefined8 *)(lVar24 + uVar28 * -0x18 + -0x10),lStack_90
                                    ), iVar26 == 0)) {
            uVar31 = 0;
            if (uStack_a0 == 0) goto LAB_140caee65;
            goto LAB_140caee38;
          }
          uVar25 = (ushort)(uVar32 - 1) & (ushort)uVar32;
          uVar32 = CONCAT22((short)(uVar32 - 1 >> 0x10),uVar25);
          lVar29 = lStack_c0;
          lVar30 = lStack_c0;
        }
        auVar37[0] = -(cVar8 == (char)iVar4);
        auVar37[1] = -(cVar9 == (char)((uint)iVar4 >> 8));
        auVar37[2] = -(cVar10 == (char)((uint)iVar4 >> 0x10));
        auVar37[3] = -(cVar11 == (char)((uint)iVar4 >> 0x18));
        auVar37[4] = -(cVar12 == (char)iVar5);
        auVar37[5] = -(cVar13 == (char)((uint)iVar5 >> 8));
        auVar37[6] = -(cVar14 == (char)((uint)iVar5 >> 0x10));
        auVar37[7] = -(cVar15 == (char)((uint)iVar5 >> 0x18));
        auVar37[8] = -(cVar16 == (char)iVar6);
        auVar37[9] = -(cVar17 == (char)((uint)iVar6 >> 8));
        auVar37[10] = -(cVar18 == (char)((uint)iVar6 >> 0x10));
        auVar37[0xb] = -(cVar19 == (char)((uint)iVar6 >> 0x18));
        auVar37[0xc] = -(cVar20 == (char)iVar7);
        auVar37[0xd] = -(cVar21 == (char)((uint)iVar7 >> 8));
        auVar37[0xe] = -(cVar22 == (char)((uint)iVar7 >> 0x10));
        auVar37[0xf] = -(cVar23 == (char)((uint)iVar7 >> 0x18));
        if ((((((((((((((((SUB161(auVar37 >> 7,0) & 1) != 0 || (SUB161(auVar37 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar37 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar37 >> 0x1f,0) & 1) != 0) || (SUB161(auVar37 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar37 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar37 >> 0x37,0) & 1) != 0) || (SUB161(auVar37 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar37 >> 0x47,0) & 1) != 0) || (SUB161(auVar37 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar37 >> 0x57,0) & 1) != 0) || (SUB161(auVar37 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar37 >> 0x67,0) & 1) != 0) || (SUB161(auVar37 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar37 >> 0x77,0) & 1) != 0) || auVar37[0xf] < '\0') break;
        uVar27 = uVar27 + lStack_c0 + 0x10;
        lVar29 = lStack_c0 + 0x10;
        lStack_c0 = lVar30;
      }
    }
    lStack_c0 = lVar30;
    uVar31 = CONCAT71((int7)((ulonglong)arg0 >> 8),1);
    if (1 < *_DAT_143ca8e90) {
      puStack_b8 = &uStack_d0;
      pcStack_b0 = pdb_140117670;
      uStack_130 = 0;
      puStack_128 = &UNK_1430785c4;
      uStack_120 = 0x14;
      uStack_118 = 0;
      puStack_110 = &UNK_14307859d;
      uStack_108 = 0x26;
      uStack_100 = 2;
      puStack_f8 = &UNK_1430785c4;
      uStack_f0 = 0x14;
      uStack_e8 = 0x8f00000001;
      puStack_e0 = &UNK_143078577;
      ppuStack_d8 = &puStack_b8;
      pdb_140f332f0(&uStack_81,&uStack_130);
    }
    if (uStack_a0 != 0) {
LAB_140caee38:
      pub_1406abac0((byte *)pcStack_98,uStack_a0,1);
    }
  }
LAB_140caee65:
  return uVar31 & 0xffffffff;
}

