// VA 0x140a2ead0, PDB extent 403 bytes
// country_core::asset_libraries::texture_library::AssetTextureLibrary::try_create_name_mapping
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/texture_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::asset_libraries::texture_library::AssetTextureLibrary::try_create_name_mapping
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/texture_library.rs
   Extent: 403 */

ulonglong pdb_140a2ead0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
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
  undefined8 *puVar28;
  undefined8 uVar29;
  ulonglong uVar30;
  uint uVar31;
  ulonglong uVar32;
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
  undefined8 *puStack_a8;
  code *pcStack_a0;
  ulonglong uStack_98;
  longlong lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  uStack_88 = param_2;
  uStack_80 = param_3;
  puVar28 = (undefined8 *)pdb_140df4400(param_4);
  if (*(longlong *)(param_1 + 0x60) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x48);
    uVar32 = *(ulonglong *)(param_1 + 0x50);
    bVar33 = (byte)((ulonglong)puVar28 >> 0x39);
    auVar34 = ZEXT216(CONCAT11(bVar33,bVar33));
    auVar34 = pshuflw(auVar34,auVar34,0);
    lStack_90 = 0;
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
    puStack_a8 = puVar28;
    while( true ) {
      uStack_98 = (ulonglong)puVar28 & uVar32;
      pcVar1 = (char *)(lVar2 + uStack_98);
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
      auVar35[0] = -(cVar10 == auVar34[0]);
      auVar35[1] = -(cVar11 == auVar34[1]);
      auVar35[2] = -(cVar12 == auVar34[2]);
      auVar35[3] = -(cVar13 == auVar34[3]);
      auVar35[4] = -(cVar14 == auVar34[4]);
      auVar35[5] = -(cVar15 == auVar34[5]);
      auVar35[6] = -(cVar16 == auVar34[6]);
      auVar35[7] = -(cVar17 == auVar34[7]);
      auVar35[8] = -(cVar18 == auVar34[0]);
      auVar35[9] = -(cVar19 == auVar34[1]);
      auVar35[10] = -(cVar20 == auVar34[2]);
      auVar35[0xb] = -(cVar21 == auVar34[3]);
      auVar35[0xc] = -(cVar22 == auVar34[4]);
      auVar35[0xd] = -(cVar23 == auVar34[5]);
      auVar35[0xe] = -(cVar24 == auVar34[6]);
      auVar35[0xf] = -(cVar25 == auVar34[7]);
      uVar27 = (ushort)(SUB161(auVar35 >> 7,0) & 1) | (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
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
      uVar31 = (uint)uVar27;
      while (uVar27 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar31; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar30 = uVar4 + uStack_98 & uVar32;
        cVar26 = pdb_140df4430(&puStack_a8,lVar2 + uVar30 * -0x18 + -0x18);
        if (cVar26 != '\0') {
          uVar3 = *(undefined8 *)(lVar2 + uVar30 * -0x18 + -0x10);
          uVar29 = pdb_140df4400(param_2,param_3);
          uVar32 = CONCAT71((int7)(uVar32 >> 8),1);
          pdb_1417b22b0(param_1 + 0x48,uVar29,uVar3,1);
          if ((char)uVar29 == '\0') {
            puStack_a8 = &uStack_88;
            pcStack_a0 = pdb_1402ed420;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_143039fd8,&puStack_a8,&UNK_14303a088);
          }
          goto LAB_140a2ec0e;
        }
        uVar27 = (ushort)(uVar31 - 1) & (ushort)uVar31;
        uVar31 = CONCAT22((short)(uVar31 - 1 >> 0x10),uVar27);
      }
      auVar36[0] = -(cVar10 == (char)iVar6);
      auVar36[1] = -(cVar11 == (char)((uint)iVar6 >> 8));
      auVar36[2] = -(cVar12 == (char)((uint)iVar6 >> 0x10));
      auVar36[3] = -(cVar13 == (char)((uint)iVar6 >> 0x18));
      auVar36[4] = -(cVar14 == (char)iVar7);
      auVar36[5] = -(cVar15 == (char)((uint)iVar7 >> 8));
      auVar36[6] = -(cVar16 == (char)((uint)iVar7 >> 0x10));
      auVar36[7] = -(cVar17 == (char)((uint)iVar7 >> 0x18));
      auVar36[8] = -(cVar18 == (char)iVar8);
      auVar36[9] = -(cVar19 == (char)((uint)iVar8 >> 8));
      auVar36[10] = -(cVar20 == (char)((uint)iVar8 >> 0x10));
      auVar36[0xb] = -(cVar21 == (char)((uint)iVar8 >> 0x18));
      auVar36[0xc] = -(cVar22 == (char)iVar9);
      auVar36[0xd] = -(cVar23 == (char)((uint)iVar9 >> 8));
      auVar36[0xe] = -(cVar24 == (char)((uint)iVar9 >> 0x10));
      auVar36[0xf] = -(cVar25 == (char)((uint)iVar9 >> 0x18));
      if ((((((((((((((((SUB161(auVar36 >> 7,0) & 1) != 0 || (SUB161(auVar36 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar36 >> 0x17,0) & 1) != 0) || (SUB161(auVar36 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar36 >> 0x27,0) & 1) != 0) || (SUB161(auVar36 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar36 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar36 >> 0x3f,0) & 1) != 0) || (SUB161(auVar36 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar36 >> 0x4f,0) & 1) != 0) || (SUB161(auVar36 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar36 >> 0x5f,0) & 1) != 0) || (SUB161(auVar36 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar36 >> 0x6f,0) & 1) != 0) || (SUB161(auVar36 >> 0x77,0) & 1) != 0) ||
          auVar36[0xf] < '\0') break;
      puVar28 = (undefined8 *)(uStack_98 + lStack_90 + 0x10);
      lStack_90 = lStack_90 + 0x10;
    }
  }
  uVar32 = 0;
LAB_140a2ec0e:
  return uVar32 & 0xffffffff;
}

