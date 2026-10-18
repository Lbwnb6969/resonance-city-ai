// VA 0x142565cc0, PDB extent 705 bytes
// turbosloth::registry::registered_version
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/registry.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000142565d1b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: turbosloth::registry::registered_version
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/registry.rs
   Extent: 705 */

undefined8 pdb_142565cc0(undefined8 param_1,longlong param_2)

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
  ulonglong uVar25;
  longlong lVar26;
  ushort uVar27;
  int iVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  undefined8 uVar31;
  uint uVar32;
  longlong lVar33;
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
  undefined *puStack_98;
  undefined *puStack_90;
  longlong lStack_88;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  if (_DAT_143cafcf8 != 0) {
    pdb_142e2f991(&DAT_143cafcb8);
  }
  if (_DAT_143cafcb8 < 0x3ffffffe) {
    _DAT_143cafcb8 = _DAT_143cafcb8 + 1;
    LOCK();
    UNLOCK();
  }
  else {
    pdb_142dc6cb0(&DAT_143cafcb8);
  }
  if (DAT_143cafcc0 != '\0') {
    puStack_98 = &DAT_143cafcc8;
    puStack_90 = &DAT_143cafcb8;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143516408,0x2b,&puStack_98,&UNK_143516438,&UNK_1435163f0);
  }
  if (_DAT_143cafce0 == 0) {
    uVar31 = 0;
    lVar26 = lStack_88;
  }
  else {
    uVar29 = pdb_1400af950(0x143cafce8,param_1);
    uVar25 = _DAT_143cafcd0;
    lVar24 = _DAT_143cafcc8;
    bVar34 = (byte)(uVar29 >> 0x39);
    auVar35 = ZEXT216(CONCAT11(bVar34,bVar34));
    auVar35 = pshuflw(auVar35,auVar35,0);
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
    lVar33 = 0;
    while( true ) {
      uVar29 = uVar29 & uVar25;
      pcVar1 = (char *)(lVar24 + uVar29);
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
      uVar27 = (ushort)(SUB161(auVar36 >> 7,0) & 1) | (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
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
               (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe | (ushort)(auVar36[0xf] >> 7) << 0xf;
      uVar32 = (uint)uVar27;
      lVar26 = lStack_88;
      while (lStack_88 = lVar33, uVar27 != 0) {
        uVar2 = 0;
        for (uVar3 = uVar32; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        uVar30 = uVar2 + uVar29 & uVar25;
        if ((param_2 == *(longlong *)(lVar24 + -0x10 + uVar30 * -0x18)) &&
           (iVar28 = pub_142e32750(param_1,*(undefined8 *)(lVar24 + uVar30 * -0x18 + -0x18),param_2)
           , iVar28 == 0)) {
          uVar31 = 1;
          lVar26 = lStack_88;
          goto LAB_142565e2b;
        }
        uVar27 = (ushort)(uVar32 - 1) & (ushort)uVar32;
        uVar32 = CONCAT22((short)(uVar32 - 1 >> 0x10),uVar27);
        lVar33 = lStack_88;
        lVar26 = lStack_88;
      }
      uVar31 = 0;
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
      if ((((((((((((((((SUB161(auVar37 >> 7,0) & 1) != 0 || (SUB161(auVar37 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar37 >> 0x17,0) & 1) != 0) || (SUB161(auVar37 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar37 >> 0x27,0) & 1) != 0) || (SUB161(auVar37 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar37 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar37 >> 0x3f,0) & 1) != 0) || (SUB161(auVar37 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar37 >> 0x4f,0) & 1) != 0) || (SUB161(auVar37 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar37 >> 0x5f,0) & 1) != 0) || (SUB161(auVar37 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar37 >> 0x6f,0) & 1) != 0) || (SUB161(auVar37 >> 0x77,0) & 1) != 0) ||
          auVar37[0xf] < '\0') break;
      uVar29 = uVar29 + lStack_88 + 0x10;
      lVar33 = lStack_88 + 0x10;
      lStack_88 = lVar26;
    }
  }
LAB_142565e2b:
  lStack_88 = lVar26;
  LOCK();
  iVar4 = _DAT_143cafcb8 - 1;
  UNLOCK();
  uVar32 = _DAT_143cafcb8 - 1;
  _DAT_143cafcb8 = iVar4;
  if (SBORROW4(0,uVar32 & 0xbfffffff)) {
    pdb_142dc6fa0(&DAT_143cafcb8,uVar32);
  }
  return uVar31;
}

