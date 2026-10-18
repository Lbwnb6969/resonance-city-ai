// VA 0x141c86d40, PDB extent 953 bytes
// asset::prefab::scan::PrefabDependencies::add_file_to_prefab_dependency
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/prefab/scan.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   asset::prefab::scan::PrefabDependencies::add_file_to_prefab_dependency
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset/src/prefab/scan.rs
   Extent: 953 */

void pdb_141c86d40(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char *pcVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
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
  char cVar24;
  char cVar25;
  ushort uVar26;
  ulonglong uVar27;
  longlong lVar28;
  byte *pbVar29;
  longlong lVar30;
  longlong lVar31;
  uint uVar32;
  byte bVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
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
  undefined1 auVar36 [16];
  longlong alStack_100 [3];
  undefined8 uStack_e8;
  byte *pbStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  byte *pbStack_90;
  undefined1 uStack_81;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  uStack_a8 = param_5;
  uStack_b0 = param_4;
  uStack_98 = param_4;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    uStack_81 = 1;
    uStack_a0 = param_2;
    pbStack_90 = (byte *)param_3;
    uVar27 = pdb_142633970(param_1 + 0x38,param_2);
    lVar30 = *(longlong *)(param_1 + 0x18);
    uVar2 = *(ulonglong *)(param_1 + 0x20);
    bVar33 = (byte)(uVar27 >> 0x39);
    auVar34 = ZEXT216(CONCAT11(bVar33,bVar33));
    auVar34 = pshuflw(auVar34,auVar34,0);
    lVar28 = 0;
    iVar5 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                             CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                   CONCAT13(unaff_XMM7_Bd,
                            CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
    iVar6 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                             CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                   CONCAT13(unaff_XMM7_Bh,
                            CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
    iVar7 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                             CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                   CONCAT13(unaff_XMM7_Bl,
                            CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
    iVar8 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                             CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                   CONCAT13(unaff_XMM7_Bp,
                            CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
    pbVar29 = pbStack_90;
    param_2 = uStack_a0;
    while( true ) {
      uVar27 = uVar27 & uVar2;
      pcVar1 = (char *)(lVar30 + uVar27);
      cVar9 = *pcVar1;
      cVar10 = pcVar1[1];
      cVar11 = pcVar1[2];
      cVar12 = pcVar1[3];
      cVar13 = pcVar1[4];
      cVar14 = pcVar1[5];
      cVar15 = pcVar1[6];
      cVar16 = pcVar1[7];
      cVar17 = pcVar1[8];
      cVar18 = pcVar1[9];
      cVar19 = pcVar1[10];
      cVar20 = pcVar1[0xb];
      cVar21 = pcVar1[0xc];
      cVar22 = pcVar1[0xd];
      cVar23 = pcVar1[0xe];
      cVar24 = pcVar1[0xf];
      auVar35[0] = -(cVar9 == auVar34[0]);
      auVar35[1] = -(cVar10 == auVar34[1]);
      auVar35[2] = -(cVar11 == auVar34[2]);
      auVar35[3] = -(cVar12 == auVar34[3]);
      auVar35[4] = -(cVar13 == auVar34[4]);
      auVar35[5] = -(cVar14 == auVar34[5]);
      auVar35[6] = -(cVar15 == auVar34[6]);
      auVar35[7] = -(cVar16 == auVar34[7]);
      auVar35[8] = -(cVar17 == auVar34[0]);
      auVar35[9] = -(cVar18 == auVar34[1]);
      auVar35[10] = -(cVar19 == auVar34[2]);
      auVar35[0xb] = -(cVar20 == auVar34[3]);
      auVar35[0xc] = -(cVar21 == auVar34[4]);
      auVar35[0xd] = -(cVar22 == auVar34[5]);
      auVar35[0xe] = -(cVar23 == auVar34[6]);
      auVar35[0xf] = -(cVar24 == auVar34[7]);
      uVar26 = (ushort)(SUB161(auVar35 >> 7,0) & 1) | (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe | (ushort)(auVar35[0xf] >> 7) << 0xf;
      uVar32 = (uint)uVar26;
      while (uVar26 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar32; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        lVar31 = (uVar3 + uVar27 & uVar2) * -0x38;
        uStack_81 = 1;
        cVar25 = pdb_142633bf0(param_2,pbVar29,lVar30 + lVar31 + -0x38);
        if (cVar25 != '\0') {
          lVar30 = lVar30 + lVar31;
          uStack_d0 = uStack_98;
          uStack_c8 = param_5;
          lVar28 = *(longlong *)(lVar30 + -8);
          if (lVar28 == *(longlong *)(lVar30 + -0x18)) {
            pdb_142d7e980(lVar30 + -0x18);
          }
          lVar31 = *(longlong *)(lVar30 + -0x10);
          *(undefined8 *)(lVar31 + lVar28 * 0x10) = uStack_98;
          *(undefined8 *)(lVar31 + 8 + lVar28 * 0x10) = param_5;
          *(longlong *)(lVar30 + -8) = lVar28 + 1;
          return;
        }
        uVar26 = (ushort)(uVar32 - 1) & (ushort)uVar32;
        uVar32 = CONCAT22((short)(uVar32 - 1 >> 0x10),uVar26);
        pbVar29 = pbStack_90;
        param_2 = uStack_a0;
      }
      auVar36[0] = -(cVar9 == (char)iVar5);
      auVar36[1] = -(cVar10 == (char)((uint)iVar5 >> 8));
      auVar36[2] = -(cVar11 == (char)((uint)iVar5 >> 0x10));
      auVar36[3] = -(cVar12 == (char)((uint)iVar5 >> 0x18));
      auVar36[4] = -(cVar13 == (char)iVar6);
      auVar36[5] = -(cVar14 == (char)((uint)iVar6 >> 8));
      auVar36[6] = -(cVar15 == (char)((uint)iVar6 >> 0x10));
      auVar36[7] = -(cVar16 == (char)((uint)iVar6 >> 0x18));
      auVar36[8] = -(cVar17 == (char)iVar7);
      auVar36[9] = -(cVar18 == (char)((uint)iVar7 >> 8));
      auVar36[10] = -(cVar19 == (char)((uint)iVar7 >> 0x10));
      auVar36[0xb] = -(cVar20 == (char)((uint)iVar7 >> 0x18));
      auVar36[0xc] = -(cVar21 == (char)iVar8);
      auVar36[0xd] = -(cVar22 == (char)((uint)iVar8 >> 8));
      auVar36[0xe] = -(cVar23 == (char)((uint)iVar8 >> 0x10));
      auVar36[0xf] = -(cVar24 == (char)((uint)iVar8 >> 0x18));
      if ((((((((((((((((SUB161(auVar36 >> 7,0) & 1) != 0 || (SUB161(auVar36 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar36 >> 0x17,0) & 1) != 0) || (SUB161(auVar36 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar36 >> 0x27,0) & 1) != 0) || (SUB161(auVar36 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar36 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar36 >> 0x3f,0) & 1) != 0) || (SUB161(auVar36 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar36 >> 0x4f,0) & 1) != 0) || (SUB161(auVar36 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar36 >> 0x5f,0) & 1) != 0) || (SUB161(auVar36 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar36 >> 0x6f,0) & 1) != 0) || (SUB161(auVar36 >> 0x77,0) & 1) != 0) ||
          auVar36[0xf] < '\0') break;
      uVar27 = uVar27 + lVar28 + 0x10;
      lVar28 = lVar28 + 0x10;
    }
  }
  uStack_81 = 1;
  pdb_140f3e010(&uStack_d0,param_2);
  pdb_14007ee60();
  pbStack_e0 = pub_1406abab0(0x10,8);
  pbStack_90 = pbStack_e0;
  if (pbStack_e0 != (byte *)0x0) {
    *(undefined8 *)pbStack_e0 = uStack_98;
    *(undefined8 *)(pbStack_e0 + 8) = param_5;
    uStack_e8 = 1;
    uStack_d8 = 1;
    pdb_142634640(alStack_100,param_1 + 0x18,&uStack_d0,&uStack_e8);
    if (!SBORROW8(0,alStack_100[0])) {
      uStack_81 = 0;
      pdb_140992f50(alStack_100);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,0x10);
}

