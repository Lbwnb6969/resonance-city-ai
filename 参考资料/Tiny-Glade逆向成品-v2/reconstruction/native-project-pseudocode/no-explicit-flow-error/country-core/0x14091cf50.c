// VA 0x14091cf50, PDB extent 325 bytes
// country_core::resources::prefab::PrefabLibrary::get<ref$<asset::prefab::PrefabName> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/prefab.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::prefab::PrefabLibrary::get<ref$<asset::prefab::PrefabName> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/prefab.rs
   Extent: 325 */

longlong pdb_14091cf50(longlong *param_1,longlong param_2)

{
  char *pcVar1;
  ulonglong uVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
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
  char cVar24;
  char cVar25;
  ushort uVar26;
  int iVar27;
  undefined8 uVar28;
  ulonglong uVar29;
  undefined8 uVar30;
  longlong lVar31;
  ulonglong uVar32;
  longlong lVar33;
  longlong lVar34;
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
  undefined8 uStack_88;
  longlong lStack_80;
  
  uVar28 = pdb_1418bded0(param_2);
  uStack_88 = uVar28;
  lStack_80 = param_2;
  if (param_1[3] != 0) {
    uVar29 = pdb_1400af950(param_1 + 4,uVar28,param_2);
    lVar31 = *param_1;
    uVar2 = param_1[1];
    bVar36 = (byte)(uVar29 >> 0x39);
    auVar37 = ZEXT216(CONCAT11(bVar36,bVar36));
    auVar37 = pshuflw(auVar37,auVar37,0);
    lVar34 = 0;
    iVar6 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                             CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                   CONCAT13(unaff_XMM7_Bd,
                            CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
    iVar7 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                             CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                   CONCAT13(unaff_XMM7_Bh,
                            CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
    iVar8 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                             CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                   CONCAT13(unaff_XMM7_Bl,
                            CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
    iVar9 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                             CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                   CONCAT13(unaff_XMM7_Bp,
                            CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
    while( true ) {
      uVar29 = uVar29 & uVar2;
      pcVar1 = (char *)(lVar31 + uVar29);
      cVar10 = *pcVar1;
      cVar11 = pcVar1[1];
      cVar12 = pcVar1[2];
      cVar13 = pcVar1[3];
      cVar14 = pcVar1[4];
      cVar15 = pcVar1[5];
      cVar16 = pcVar1[6];
      cVar17 = pcVar1[7];
      cVar18 = pcVar1[8];
      cVar19 = pcVar1[9];
      cVar20 = pcVar1[10];
      cVar21 = pcVar1[0xb];
      cVar22 = pcVar1[0xc];
      cVar23 = pcVar1[0xd];
      cVar24 = pcVar1[0xe];
      cVar25 = pcVar1[0xf];
      auVar38[0] = -(cVar10 == auVar37[0]);
      auVar38[1] = -(cVar11 == auVar37[1]);
      auVar38[2] = -(cVar12 == auVar37[2]);
      auVar38[3] = -(cVar13 == auVar37[3]);
      auVar38[4] = -(cVar14 == auVar37[4]);
      auVar38[5] = -(cVar15 == auVar37[5]);
      auVar38[6] = -(cVar16 == auVar37[6]);
      auVar38[7] = -(cVar17 == auVar37[7]);
      auVar38[8] = -(cVar18 == auVar37[0]);
      auVar38[9] = -(cVar19 == auVar37[1]);
      auVar38[10] = -(cVar20 == auVar37[2]);
      auVar38[0xb] = -(cVar21 == auVar37[3]);
      auVar38[0xc] = -(cVar22 == auVar37[4]);
      auVar38[0xd] = -(cVar23 == auVar37[5]);
      auVar38[0xe] = -(cVar24 == auVar37[6]);
      auVar38[0xf] = -(cVar25 == auVar37[7]);
      uVar26 = (ushort)(SUB161(auVar38 >> 7,0) & 1) | (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
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
      uVar35 = (uint)uVar26;
      while (uVar26 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar35; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar32 = uVar4 + uVar29 & uVar2;
        lVar33 = lVar34;
        uVar30 = pdb_1418bded0(lVar31 + uVar32 * -0x28 + -0x28);
        if ((param_2 == lVar33) && (iVar27 = pub_142e32750(uVar28,uVar30,param_2), iVar27 == 0)) {
          return lVar31 + uVar32 * -0x28 + -0x18;
        }
        uVar26 = (ushort)(uVar35 - 1) & (ushort)uVar35;
        uVar35 = CONCAT22((short)(uVar35 - 1 >> 0x10),uVar26);
      }
      auVar39[0] = -(cVar10 == (char)iVar6);
      auVar39[1] = -(cVar11 == (char)((uint)iVar6 >> 8));
      auVar39[2] = -(cVar12 == (char)((uint)iVar6 >> 0x10));
      auVar39[3] = -(cVar13 == (char)((uint)iVar6 >> 0x18));
      auVar39[4] = -(cVar14 == (char)iVar7);
      auVar39[5] = -(cVar15 == (char)((uint)iVar7 >> 8));
      auVar39[6] = -(cVar16 == (char)((uint)iVar7 >> 0x10));
      auVar39[7] = -(cVar17 == (char)((uint)iVar7 >> 0x18));
      auVar39[8] = -(cVar18 == (char)iVar8);
      auVar39[9] = -(cVar19 == (char)((uint)iVar8 >> 8));
      auVar39[10] = -(cVar20 == (char)((uint)iVar8 >> 0x10));
      auVar39[0xb] = -(cVar21 == (char)((uint)iVar8 >> 0x18));
      auVar39[0xc] = -(cVar22 == (char)iVar9);
      auVar39[0xd] = -(cVar23 == (char)((uint)iVar9 >> 8));
      auVar39[0xe] = -(cVar24 == (char)((uint)iVar9 >> 0x10));
      auVar39[0xf] = -(cVar25 == (char)((uint)iVar9 >> 0x18));
      if ((((((((((((((((SUB161(auVar39 >> 7,0) & 1) != 0 || (SUB161(auVar39 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar39 >> 0x17,0) & 1) != 0) || (SUB161(auVar39 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar39 >> 0x27,0) & 1) != 0) || (SUB161(auVar39 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar39 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar39 >> 0x3f,0) & 1) != 0) || (SUB161(auVar39 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar39 >> 0x4f,0) & 1) != 0) || (SUB161(auVar39 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar39 >> 0x5f,0) & 1) != 0) || (SUB161(auVar39 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar39 >> 0x6f,0) & 1) != 0) || (SUB161(auVar39 >> 0x77,0) & 1) != 0) ||
          auVar39[0xf] < '\0') break;
      uVar29 = uVar29 + lVar34 + 0x10;
      lVar34 = lVar34 + 0x10;
    }
  }
  pdb_142d8df20(param_1,&uStack_88);
  pcVar3 = (code *)swi(3);
  lVar31 = (*pcVar3)();
  return lVar31;
}

