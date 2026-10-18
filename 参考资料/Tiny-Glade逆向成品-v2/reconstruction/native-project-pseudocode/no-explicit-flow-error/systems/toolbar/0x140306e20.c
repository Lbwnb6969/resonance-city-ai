// VA 0x140306e20, PDB extent 642 bytes
// toolbar::mei::config::impl$20::template_with_id<ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::mei::config::impl$20::template_with_id<ref$<str$> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
   Extent: 642 */

undefined8 *
pdb_140306e20(undefined8 *param_1,longlong *param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,undefined8 param_6)

{
  char *pcVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  code *pcVar5;
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
  undefined8 *puVar28;
  ulonglong uVar29;
  ushort uVar30;
  int iVar31;
  ulonglong uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  longlong lVar35;
  uint uVar36;
  longlong lVar37;
  byte bVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
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
  undefined1 auVar41 [16];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  longlong lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulonglong uStack_a8;
  longlong lStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  longlong *plStack_88;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  lVar2 = *param_2;
  uStack_d0 = param_3;
  lStack_c8 = param_4;
  uVar29 = uStack_a8;
  lVar37 = lStack_a0;
  if (*(longlong *)(lVar2 + 600) != 0) {
    uStack_98 = param_3;
    uVar32 = pdb_1400af950(lVar2 + 0x260,param_3,param_4);
    lVar3 = *(longlong *)(lVar2 + 0x240);
    uVar4 = *(ulonglong *)(lVar2 + 0x248);
    bVar38 = (byte)(uVar32 >> 0x39);
    auVar39 = ZEXT216(CONCAT11(bVar38,bVar38));
    auVar39 = pshuflw(auVar39,auVar39,0);
    lVar35 = 0;
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
      uVar32 = uVar32 & uVar4;
      pcVar1 = (char *)(lVar3 + uVar32);
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
      auVar40[0] = -(cVar12 == auVar39[0]);
      auVar40[1] = -(cVar13 == auVar39[1]);
      auVar40[2] = -(cVar14 == auVar39[2]);
      auVar40[3] = -(cVar15 == auVar39[3]);
      auVar40[4] = -(cVar16 == auVar39[4]);
      auVar40[5] = -(cVar17 == auVar39[5]);
      auVar40[6] = -(cVar18 == auVar39[6]);
      auVar40[7] = -(cVar19 == auVar39[7]);
      auVar40[8] = -(cVar20 == auVar39[0]);
      auVar40[9] = -(cVar21 == auVar39[1]);
      auVar40[10] = -(cVar22 == auVar39[2]);
      auVar40[0xb] = -(cVar23 == auVar39[3]);
      auVar40[0xc] = -(cVar24 == auVar39[4]);
      auVar40[0xd] = -(cVar25 == auVar39[5]);
      auVar40[0xe] = -(cVar26 == auVar39[6]);
      auVar40[0xf] = -(cVar27 == auVar39[7]);
      uVar30 = (ushort)(SUB161(auVar40 >> 7,0) & 1) | (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe | (ushort)(auVar40[0xf] >> 7) << 0xf;
      uVar36 = (uint)uVar30;
      uVar29 = uStack_a8;
      lVar37 = lStack_a0;
      while (lStack_a0 = lVar35, uStack_a8 = uVar32, uVar30 != 0) {
        uVar6 = 0;
        for (uVar7 = uVar36; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar6 = uVar6 + 1;
        }
        lVar37 = lVar3 + (uVar6 + uStack_a8 & uVar4) * -0x20;
        puStack_90 = param_1;
        if ((param_4 == *(longlong *)(lVar37 + -0x10)) &&
           (iVar31 = pub_142e32750(uStack_98,*(undefined8 *)(lVar37 + -0x18),param_4), iVar31 == 0))
        {
          plStack_88 = *(longlong **)(lVar37 + -8);
          LOCK();
          lVar2 = *plStack_88;
          *plStack_88 = *plStack_88 + 1;
          UNLOCK();
          if (*plStack_88 != 0 && SCARRY8(lVar2,1) == *plStack_88 < 0) {
            uVar33 = pdb_14072cd40(param_2);
            puVar28 = puStack_90;
            uStack_e0 = param_5;
            uStack_d8 = param_6;
            uStack_c0 = pdb_14072aeb0(&uStack_e0);
            uStack_b8 = _DAT_142f3b4f0;
            uStack_b0 = _UNK_142f3b4f8;
            uStack_b8 = pdb_1400affa0(&uStack_c0);
            uStack_c0 = uVar33;
            uVar34 = pdb_1400b0130(&uStack_c0);
            pdb_140737a40(param_2,uVar33,uVar34,plStack_88 + 2);
            puVar28[4] = param_2[2];
            lVar2 = param_2[1];
            puVar28[2] = *param_2;
            puVar28[3] = lVar2;
            *puVar28 = uStack_98;
            puVar28[1] = param_4;
            LOCK();
            *plStack_88 = *plStack_88 + -1;
            UNLOCK();
            if (*plStack_88 == 0) {
              pdb_140734c40(&plStack_88);
            }
            return puVar28;
          }
          goto LAB_140307034;
        }
        uVar30 = (ushort)(uVar36 - 1) & (ushort)uVar36;
        uVar36 = CONCAT22((short)(uVar36 - 1 >> 0x10),uVar30);
        uVar32 = uStack_a8;
        lVar35 = lStack_a0;
        param_1 = puStack_90;
        uVar29 = uStack_a8;
        lVar37 = lStack_a0;
      }
      auVar41[0] = -(cVar12 == (char)iVar8);
      auVar41[1] = -(cVar13 == (char)((uint)iVar8 >> 8));
      auVar41[2] = -(cVar14 == (char)((uint)iVar8 >> 0x10));
      auVar41[3] = -(cVar15 == (char)((uint)iVar8 >> 0x18));
      auVar41[4] = -(cVar16 == (char)iVar9);
      auVar41[5] = -(cVar17 == (char)((uint)iVar9 >> 8));
      auVar41[6] = -(cVar18 == (char)((uint)iVar9 >> 0x10));
      auVar41[7] = -(cVar19 == (char)((uint)iVar9 >> 0x18));
      auVar41[8] = -(cVar20 == (char)iVar10);
      auVar41[9] = -(cVar21 == (char)((uint)iVar10 >> 8));
      auVar41[10] = -(cVar22 == (char)((uint)iVar10 >> 0x10));
      auVar41[0xb] = -(cVar23 == (char)((uint)iVar10 >> 0x18));
      auVar41[0xc] = -(cVar24 == (char)iVar11);
      auVar41[0xd] = -(cVar25 == (char)((uint)iVar11 >> 8));
      auVar41[0xe] = -(cVar26 == (char)((uint)iVar11 >> 0x10));
      auVar41[0xf] = -(cVar27 == (char)((uint)iVar11 >> 0x18));
      if ((((((((((((((((SUB161(auVar41 >> 7,0) & 1) != 0 || (SUB161(auVar41 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar41 >> 0x17,0) & 1) != 0) || (SUB161(auVar41 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar41 >> 0x27,0) & 1) != 0) || (SUB161(auVar41 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar41 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar41 >> 0x3f,0) & 1) != 0) || (SUB161(auVar41 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar41 >> 0x4f,0) & 1) != 0) || (SUB161(auVar41 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar41 >> 0x5f,0) & 1) != 0) || (SUB161(auVar41 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar41 >> 0x6f,0) & 1) != 0) || (SUB161(auVar41 >> 0x77,0) & 1) != 0) ||
          auVar41[0xf] < '\0') break;
      uVar32 = uStack_a8 + lStack_a0 + 0x10;
      lVar35 = lStack_a0 + 0x10;
      uStack_a8 = uVar29;
      lStack_a0 = lVar37;
    }
  }
  lStack_a0 = lVar37;
  uStack_a8 = uVar29;
  pdb_142d84860(lVar2,&uStack_d0);
LAB_140307034:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}

