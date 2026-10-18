// VA 0x140a2b040, PDB extent 295 bytes
// country_core::asset_libraries::texture_library::impl$2::image_name_to_index
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/texture_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::asset_libraries::texture_library::impl$2::image_name_to_index
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/texture_library.rs
   Extent: 295 */

void pdb_140a2b040(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
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
  char cVar26;
  char cVar27;
  ushort uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  uint uVar31;
  longlong lVar32;
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
  ulonglong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  uStack_88 = param_2;
  uStack_80 = param_3;
  uVar29 = pdb_140df4400(param_2,param_3);
  uStack_90 = uVar29;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x48);
    uVar3 = *(ulonglong *)(param_1 + 0x50);
    bVar33 = (byte)(uVar29 >> 0x39);
    auVar34 = ZEXT216(CONCAT11(bVar33,bVar33));
    auVar34 = pshuflw(auVar34,auVar34,0);
    lVar32 = 0;
    iVar7 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                             CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                   CONCAT13(unaff_XMM7_Bd,
                            CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
    iVar8 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                             CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                   CONCAT13(unaff_XMM7_Bh,
                            CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
    iVar9 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                             CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                   CONCAT13(unaff_XMM7_Bl,
                            CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
    iVar10 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                              CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                    CONCAT13(unaff_XMM7_Bp,
                             CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
    while( true ) {
      uVar29 = uVar29 & uVar3;
      pcVar1 = (char *)(lVar2 + uVar29);
      cVar11 = *pcVar1;
      cVar12 = pcVar1[1];
      cVar13 = pcVar1[2];
      cVar14 = pcVar1[3];
      cVar15 = pcVar1[4];
      cVar16 = pcVar1[5];
      cVar17 = pcVar1[6];
      cVar18 = pcVar1[7];
      cVar19 = pcVar1[8];
      cVar20 = pcVar1[9];
      cVar21 = pcVar1[10];
      cVar22 = pcVar1[0xb];
      cVar23 = pcVar1[0xc];
      cVar24 = pcVar1[0xd];
      cVar25 = pcVar1[0xe];
      cVar26 = pcVar1[0xf];
      auVar35[0] = -(cVar11 == auVar34[0]);
      auVar35[1] = -(cVar12 == auVar34[1]);
      auVar35[2] = -(cVar13 == auVar34[2]);
      auVar35[3] = -(cVar14 == auVar34[3]);
      auVar35[4] = -(cVar15 == auVar34[4]);
      auVar35[5] = -(cVar16 == auVar34[5]);
      auVar35[6] = -(cVar17 == auVar34[6]);
      auVar35[7] = -(cVar18 == auVar34[7]);
      auVar35[8] = -(cVar19 == auVar34[0]);
      auVar35[9] = -(cVar20 == auVar34[1]);
      auVar35[10] = -(cVar21 == auVar34[2]);
      auVar35[0xb] = -(cVar22 == auVar34[3]);
      auVar35[0xc] = -(cVar23 == auVar34[4]);
      auVar35[0xd] = -(cVar24 == auVar34[5]);
      auVar35[0xe] = -(cVar25 == auVar34[6]);
      auVar35[0xf] = -(cVar26 == auVar34[7]);
      uVar28 = (ushort)(SUB161(auVar35 >> 7,0) & 1) | (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
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
      uVar31 = (uint)uVar28;
      while (uVar28 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar31; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar30 = uVar5 + uVar29 & uVar3;
        cVar27 = pdb_140df4430(&uStack_90,lVar2 + uVar30 * -0x18 + -0x18);
        if (cVar27 != '\0') {
          pdb_140a2ec70(param_1,*(undefined8 *)(lVar2 + uVar30 * -0x18 + -0x10));
          return;
        }
        uVar28 = (ushort)(uVar31 - 1) & (ushort)uVar31;
        uVar31 = CONCAT22((short)(uVar31 - 1 >> 0x10),uVar28);
      }
      auVar36[0] = -(cVar11 == (char)iVar7);
      auVar36[1] = -(cVar12 == (char)((uint)iVar7 >> 8));
      auVar36[2] = -(cVar13 == (char)((uint)iVar7 >> 0x10));
      auVar36[3] = -(cVar14 == (char)((uint)iVar7 >> 0x18));
      auVar36[4] = -(cVar15 == (char)iVar8);
      auVar36[5] = -(cVar16 == (char)((uint)iVar8 >> 8));
      auVar36[6] = -(cVar17 == (char)((uint)iVar8 >> 0x10));
      auVar36[7] = -(cVar18 == (char)((uint)iVar8 >> 0x18));
      auVar36[8] = -(cVar19 == (char)iVar9);
      auVar36[9] = -(cVar20 == (char)((uint)iVar9 >> 8));
      auVar36[10] = -(cVar21 == (char)((uint)iVar9 >> 0x10));
      auVar36[0xb] = -(cVar22 == (char)((uint)iVar9 >> 0x18));
      auVar36[0xc] = -(cVar23 == (char)iVar10);
      auVar36[0xd] = -(cVar24 == (char)((uint)iVar10 >> 8));
      auVar36[0xe] = -(cVar25 == (char)((uint)iVar10 >> 0x10));
      auVar36[0xf] = -(cVar26 == (char)((uint)iVar10 >> 0x18));
      if ((((((((((((((((SUB161(auVar36 >> 7,0) & 1) != 0 || (SUB161(auVar36 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar36 >> 0x17,0) & 1) != 0) || (SUB161(auVar36 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar36 >> 0x27,0) & 1) != 0) || (SUB161(auVar36 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar36 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar36 >> 0x3f,0) & 1) != 0) || (SUB161(auVar36 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar36 >> 0x4f,0) & 1) != 0) || (SUB161(auVar36 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar36 >> 0x5f,0) & 1) != 0) || (SUB161(auVar36 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar36 >> 0x6f,0) & 1) != 0) || (SUB161(auVar36 >> 0x77,0) & 1) != 0) ||
          auVar36[0xf] < '\0') break;
      uVar29 = uVar29 + lVar32 + 0x10;
      lVar32 = lVar32 + 0x10;
    }
  }
  pdb_142d8e3e0(&uStack_88);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

