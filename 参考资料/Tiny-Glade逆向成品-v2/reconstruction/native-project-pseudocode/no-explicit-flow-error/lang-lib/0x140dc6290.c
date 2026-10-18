// VA 0x140dc6290, PDB extent 1209 bytes
// lang_lib::lookup
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/lang-lib/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140dc657a) */
/* WARNING: Removing unreachable block (ram,0x000140dc6580) */
/* WARNING: Removing unreachable block (ram,0x000140dc648f) */
/* WARNING: Removing unreachable block (ram,0x000140dc6495) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: lang_lib::lookup
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/lang-lib/src/lib.rs
   Extent: 1209 */

undefined8 pdb_140dc6290(undefined8 param_1,longlong *param_2)

{
  char *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
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
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  ushort uVar28;
  int iVar29;
  longlong *plVar30;
  undefined *puVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  longlong *plVar34;
  uint uVar35;
  byte bVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
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
  undefined1 auVar39 [16];
  undefined8 uStack_120;
  longlong *plStack_118;
  longlong *plStack_110;
  longlong *plStack_108;
  longlong *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 **ppuStack_b0;
  undefined8 *puStack_a8;
  code *pcStack_a0;
  longlong *plStack_98;
  longlong *plStack_90;
  undefined1 uStack_81;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  plStack_108 = (longlong *)&DAT_143cb2d10;
  plVar34 = param_2;
  uStack_120 = param_1;
  plStack_118 = param_2;
  plVar30 = (longlong *)pdb_141dd6e20(&plStack_108);
  if (plVar34 == (longlong *)0x0) {
    plStack_98 = (longlong *)0x0;
    plStack_90 = (longlong *)0x0;
    if (plVar30 != (longlong *)0x0) {
      LOCK();
      if (*plVar30 == 0) {
        *plVar30 = 3;
      }
      UNLOCK();
    }
    if (*_DAT_143ca8e90 == 0) {
      return param_1;
    }
    puStack_a8 = &uStack_120;
    pcStack_a0 = pdb_1402ed420;
    plStack_108 = (longlong *)0x0;
    plStack_100 = (longlong *)&UNK_1431f283a;
    uStack_f8 = 8;
    uStack_f0 = 0;
    puStack_e8 = &UNK_1431f281f;
    uStack_e0 = 0x1a;
    uStack_d8 = 1;
    puStack_d0 = &UNK_1431f283a;
    uStack_c8 = 8;
    uStack_c0 = 0x6000000001;
    puStack_b8 = &UNK_1431f2956;
    ppuStack_b0 = &puStack_a8;
    pdb_140f332f0(&uStack_81,&plStack_108);
    return param_1;
  }
  plStack_98 = plVar30;
  plStack_90 = plVar34;
  if (plVar34[7] != 0) {
    puVar31 = (undefined *)pdb_1400af950(plVar34 + 8,param_1,param_2);
    lVar4 = plVar34[4];
    uVar5 = plVar34[5];
    bVar36 = (byte)((ulonglong)puVar31 >> 0x39);
    auVar37 = ZEXT216(CONCAT11(bVar36,bVar36));
    auVar37 = pshuflw(auVar37,auVar37,0);
    plVar34 = (longlong *)0x0;
    iVar8 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                             CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                   CONCAT13(unaff_XMM7_Bd,
                            CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
    iVar9 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                             CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                   CONCAT13(unaff_XMM7_Bh,
                            CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
    iVar10 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                              CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                    CONCAT13(unaff_XMM7_Bl,
                             CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
    iVar11 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                              CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                    CONCAT13(unaff_XMM7_Bp,
                             CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
    while( true ) {
      uVar32 = (ulonglong)puVar31 & uVar5;
      pcVar1 = (char *)(lVar4 + uVar32);
      cVar12 = *pcVar1;
      cVar13 = pcVar1[1];
      cVar14 = pcVar1[2];
      cVar15 = pcVar1[3];
      cVar16 = pcVar1[4];
      cVar17 = pcVar1[5];
      cVar18 = pcVar1[6];
      cVar19 = pcVar1[7];
      cVar20 = pcVar1[8];
      cVar21 = pcVar1[9];
      cVar22 = pcVar1[10];
      cVar23 = pcVar1[0xb];
      cVar24 = pcVar1[0xc];
      cVar25 = pcVar1[0xd];
      cVar26 = pcVar1[0xe];
      cVar27 = pcVar1[0xf];
      auVar38[0] = -(cVar12 == auVar37[0]);
      auVar38[1] = -(cVar13 == auVar37[1]);
      auVar38[2] = -(cVar14 == auVar37[2]);
      auVar38[3] = -(cVar15 == auVar37[3]);
      auVar38[4] = -(cVar16 == auVar37[4]);
      auVar38[5] = -(cVar17 == auVar37[5]);
      auVar38[6] = -(cVar18 == auVar37[6]);
      auVar38[7] = -(cVar19 == auVar37[7]);
      auVar38[8] = -(cVar20 == auVar37[0]);
      auVar38[9] = -(cVar21 == auVar37[1]);
      auVar38[10] = -(cVar22 == auVar37[2]);
      auVar38[0xb] = -(cVar23 == auVar37[3]);
      auVar38[0xc] = -(cVar24 == auVar37[4]);
      auVar38[0xd] = -(cVar25 == auVar37[5]);
      auVar38[0xe] = -(cVar26 == auVar37[6]);
      auVar38[0xf] = -(cVar27 == auVar37[7]);
      uVar28 = (ushort)(SUB161(auVar38 >> 7,0) & 1) | (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar38 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar38 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar38 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar38 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe | (ushort)(auVar38[0xf] >> 7) << 0xf;
      uVar35 = (uint)uVar28;
      while (uVar28 != 0) {
        uVar6 = 0;
        for (uVar7 = uVar35; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar6 = uVar6 + 1;
        }
        uVar33 = uVar6 + uVar32 & uVar5;
        plStack_110 = plVar34;
        if (param_2 == *(longlong **)(lVar4 + -0x18 + uVar33 * -0x28)) {
          lVar2 = lVar4 + uVar33 * -0x28;
          iVar29 = pub_142e32750(param_1,*(undefined8 *)(lVar2 + -0x20),param_2);
          if (iVar29 == 0) {
            param_1 = *(undefined8 *)(lVar2 + -0x10);
            goto LAB_140dc6624;
          }
        }
        uVar28 = (ushort)(uVar35 - 1) & (ushort)uVar35;
        uVar35 = CONCAT22((short)(uVar35 - 1 >> 0x10),uVar28);
        plVar34 = plStack_110;
      }
      auVar39[0] = -(cVar12 == (char)iVar8);
      auVar39[1] = -(cVar13 == (char)((uint)iVar8 >> 8));
      auVar39[2] = -(cVar14 == (char)((uint)iVar8 >> 0x10));
      auVar39[3] = -(cVar15 == (char)((uint)iVar8 >> 0x18));
      auVar39[4] = -(cVar16 == (char)iVar9);
      auVar39[5] = -(cVar17 == (char)((uint)iVar9 >> 8));
      auVar39[6] = -(cVar18 == (char)((uint)iVar9 >> 0x10));
      auVar39[7] = -(cVar19 == (char)((uint)iVar9 >> 0x18));
      auVar39[8] = -(cVar20 == (char)iVar10);
      auVar39[9] = -(cVar21 == (char)((uint)iVar10 >> 8));
      auVar39[10] = -(cVar22 == (char)((uint)iVar10 >> 0x10));
      auVar39[0xb] = -(cVar23 == (char)((uint)iVar10 >> 0x18));
      auVar39[0xc] = -(cVar24 == (char)iVar11);
      auVar39[0xd] = -(cVar25 == (char)((uint)iVar11 >> 8));
      auVar39[0xe] = -(cVar26 == (char)((uint)iVar11 >> 0x10));
      auVar39[0xf] = -(cVar27 == (char)((uint)iVar11 >> 0x18));
      if ((((((((((((((((SUB161(auVar39 >> 7,0) & 1) != 0 || (SUB161(auVar39 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar39 >> 0x17,0) & 1) != 0) || (SUB161(auVar39 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar39 >> 0x27,0) & 1) != 0) || (SUB161(auVar39 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar39 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar39 >> 0x3f,0) & 1) != 0) || (SUB161(auVar39 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar39 >> 0x4f,0) & 1) != 0) || (SUB161(auVar39 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar39 >> 0x5f,0) & 1) != 0) || (SUB161(auVar39 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar39 >> 0x6f,0) & 1) != 0) || (SUB161(auVar39 >> 0x77,0) & 1) != 0) ||
          auVar39[0xf] < '\0') break;
      puVar31 = (undefined *)((longlong)plVar34 + uVar32 + 0x10);
      plVar34 = plVar34 + 2;
    }
  }
  puStack_a8 = (undefined8 *)&DAT_143cb2d18;
  plVar30 = (longlong *)pdb_141dd6e20(&puStack_a8);
  plStack_100 = plVar34;
  if (plVar34 == (longlong *)0x0) {
    plStack_108 = (longlong *)0x0;
    if (plVar30 != (longlong *)0x0) {
      LOCK();
      if (*plVar30 == 0) {
        *plVar30 = 3;
      }
      UNLOCK();
    }
    if (*_DAT_143ca8e90 != 0) {
      puStack_a8 = &uStack_120;
      pcStack_a0 = pdb_1402ed420;
      plStack_108 = (longlong *)0x0;
      plStack_100 = (longlong *)&UNK_1431f283a;
      uStack_f8 = 8;
      uStack_f0 = 0;
      puStack_e8 = &UNK_1431f281f;
      uStack_e0 = 0x1a;
      uStack_d8 = 1;
      puStack_d0 = &UNK_1431f283a;
      uStack_c8 = 8;
      uStack_c0 = 0x5c00000001;
      puStack_b8 = &UNK_1431f2918;
      ppuStack_b0 = &puStack_a8;
      pdb_140f332f0(&uStack_81,&plStack_108);
    }
  }
  else {
    plStack_108 = plVar30;
    param_1 = pdb_141dd8000(plVar34 + 2,param_1,param_2);
    plVar34 = plStack_108;
    plStack_108 = (longlong *)0x0;
    if (plVar34 != (longlong *)0x0) {
      plVar30 = plStack_100 + 2;
      if (plStack_100 == (longlong *)0x0) {
        plVar30 = (longlong *)0x0;
      }
      LOCK();
      plVar3 = (longlong *)*plVar34;
      if (plVar30 == plVar3) {
        *plVar34 = 3;
      }
      UNLOCK();
      if (plVar30 == plVar3) goto LAB_140dc6624;
    }
    if (plStack_100 != (longlong *)0x0) {
      LOCK();
      *plStack_100 = *plStack_100 + -1;
      UNLOCK();
      if (*plStack_100 == 0) {
        pdb_141dd6ef0(&plStack_100);
      }
    }
  }
LAB_140dc6624:
  plVar34 = plStack_98;
  plStack_98 = (longlong *)0x0;
  if (plVar34 != (longlong *)0x0) {
    plVar30 = plStack_90 + 2;
    if (plStack_90 == (longlong *)0x0) {
      plVar30 = (longlong *)0x0;
    }
    LOCK();
    plVar3 = (longlong *)*plVar34;
    if (plVar30 == plVar3) {
      *plVar34 = 3;
    }
    UNLOCK();
    if (plVar30 == plVar3) {
      return param_1;
    }
  }
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    *plStack_90 = *plStack_90 + -1;
    UNLOCK();
    if (*plStack_90 == 0) {
      pdb_141dd6ef0(&plStack_90);
    }
  }
  return param_1;
}

