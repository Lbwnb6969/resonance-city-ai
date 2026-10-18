// VA 0x140a2f130, PDB extent 303 bytes
// country_core::asset_libraries::texture_library::AssetTextureLibrary::get_handle_and_texture_by_name
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/texture_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::asset_libraries::texture_library::AssetTextureLibrary::get_handle_and_texture_by_name
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/texture_library.rs
   Extent: 303 */

void pdb_140a2f130(longlong param_1,ulonglong param_2)

{
  char *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
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
  char cVar26;
  ushort uVar27;
  ulonglong uVar28;
  uint uVar29;
  longlong lVar30;
  byte bVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
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
  undefined1 auVar34 [16];
  ulonglong auStack_80 [8];
  
  if (*(longlong *)(param_1 + 0x60) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x48);
    uVar3 = *(ulonglong *)(param_1 + 0x50);
    bVar31 = (byte)(param_2 >> 0x39);
    auVar32 = ZEXT216(CONCAT11(bVar31,bVar31));
    auVar32 = pshuflw(auVar32,auVar32,0);
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
    lVar30 = 0;
    auStack_80[0] = param_2;
    while( true ) {
      param_2 = param_2 & uVar3;
      pcVar1 = (char *)(lVar2 + param_2);
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
      auVar33[0] = -(cVar10 == auVar32[0]);
      auVar33[1] = -(cVar11 == auVar32[1]);
      auVar33[2] = -(cVar12 == auVar32[2]);
      auVar33[3] = -(cVar13 == auVar32[3]);
      auVar33[4] = -(cVar14 == auVar32[4]);
      auVar33[5] = -(cVar15 == auVar32[5]);
      auVar33[6] = -(cVar16 == auVar32[6]);
      auVar33[7] = -(cVar17 == auVar32[7]);
      auVar33[8] = -(cVar18 == auVar32[0]);
      auVar33[9] = -(cVar19 == auVar32[1]);
      auVar33[10] = -(cVar20 == auVar32[2]);
      auVar33[0xb] = -(cVar21 == auVar32[3]);
      auVar33[0xc] = -(cVar22 == auVar32[4]);
      auVar33[0xd] = -(cVar23 == auVar32[5]);
      auVar33[0xe] = -(cVar24 == auVar32[6]);
      auVar33[0xf] = -(cVar25 == auVar32[7]);
      uVar27 = (ushort)(SUB161(auVar33 >> 7,0) & 1) | (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe | (ushort)(auVar33[0xf] >> 7) << 0xf;
      uVar29 = (uint)uVar27;
      while (uVar27 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar29; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar28 = uVar4 + param_2 & uVar3;
        cVar26 = pdb_140df4430(auStack_80,lVar2 + uVar28 * -0x18 + -0x18);
        if (cVar26 != '\0') {
          uVar3 = *(ulonglong *)(lVar2 + uVar28 * -0x18 + -0x10);
          if (*(ulonglong *)(param_1 + 0x40) <= uVar3) {
            return;
          }
          *(undefined1 *)(*(longlong *)(param_1 + 0x38) + uVar3) = 1;
          return;
        }
        uVar27 = (ushort)(uVar29 - 1) & (ushort)uVar29;
        uVar29 = CONCAT22((short)(uVar29 - 1 >> 0x10),uVar27);
      }
      auVar34[0] = -(cVar10 == (char)iVar6);
      auVar34[1] = -(cVar11 == (char)((uint)iVar6 >> 8));
      auVar34[2] = -(cVar12 == (char)((uint)iVar6 >> 0x10));
      auVar34[3] = -(cVar13 == (char)((uint)iVar6 >> 0x18));
      auVar34[4] = -(cVar14 == (char)iVar7);
      auVar34[5] = -(cVar15 == (char)((uint)iVar7 >> 8));
      auVar34[6] = -(cVar16 == (char)((uint)iVar7 >> 0x10));
      auVar34[7] = -(cVar17 == (char)((uint)iVar7 >> 0x18));
      auVar34[8] = -(cVar18 == (char)iVar8);
      auVar34[9] = -(cVar19 == (char)((uint)iVar8 >> 8));
      auVar34[10] = -(cVar20 == (char)((uint)iVar8 >> 0x10));
      auVar34[0xb] = -(cVar21 == (char)((uint)iVar8 >> 0x18));
      auVar34[0xc] = -(cVar22 == (char)iVar9);
      auVar34[0xd] = -(cVar23 == (char)((uint)iVar9 >> 8));
      auVar34[0xe] = -(cVar24 == (char)((uint)iVar9 >> 0x10));
      auVar34[0xf] = -(cVar25 == (char)((uint)iVar9 >> 0x18));
      if ((((((((((((((((SUB161(auVar34 >> 7,0) & 1) != 0 || (SUB161(auVar34 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar34 >> 0x17,0) & 1) != 0) || (SUB161(auVar34 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar34 >> 0x27,0) & 1) != 0) || (SUB161(auVar34 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar34 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar34 >> 0x3f,0) & 1) != 0) || (SUB161(auVar34 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar34 >> 0x4f,0) & 1) != 0) || (SUB161(auVar34 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar34 >> 0x5f,0) & 1) != 0) || (SUB161(auVar34 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar34 >> 0x6f,0) & 1) != 0) || (SUB161(auVar34 >> 0x77,0) & 1) != 0) ||
          auVar34[0xf] < '\0') break;
      param_2 = param_2 + lVar30 + 0x10;
      lVar30 = lVar30 + 0x10;
    }
  }
  return;
}

