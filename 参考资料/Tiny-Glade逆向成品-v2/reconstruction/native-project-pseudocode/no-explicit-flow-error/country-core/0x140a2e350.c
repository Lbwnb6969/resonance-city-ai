// VA 0x140a2e350, PDB extent 549 bytes
// country_core::asset_libraries::texture_library::AssetTextureLibrary::remove_by_name
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/texture_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::asset_libraries::texture_library::AssetTextureLibrary::remove_by_name
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/texture_library.rs
   Extent: 549 */

undefined8 pdb_140a2e350(longlong param_1,undefined8 param_2,undefined8 param_3)

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
  undefined8 *puVar27;
  ulonglong uVar28;
  longlong lVar29;
  ulonglong uVar30;
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
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  uStack_88 = param_2;
  uStack_80 = param_3;
  puVar27 = (undefined8 *)pdb_140df4400(param_2,param_3);
  if (*(longlong *)(param_1 + 0x60) != 0) {
    lVar29 = *(longlong *)(param_1 + 0x48);
    uVar2 = *(ulonglong *)(param_1 + 0x50);
    bVar33 = (byte)((ulonglong)puVar27 >> 0x39);
    auVar34 = ZEXT216(CONCAT11(bVar33,bVar33));
    auVar34 = pshuflw(auVar34,auVar34,0);
    lVar31 = 0;
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
    puStack_a0 = puVar27;
    while( true ) {
      uVar28 = (ulonglong)puVar27 & uVar2;
      pcVar1 = (char *)(lVar29 + uVar28);
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
        uVar30 = uVar3 + uVar28 & uVar2;
        cVar25 = pdb_140df4430(&puStack_a0,uVar30 * -0x18 + -0x18 + lVar29);
        if (cVar25 != '\0') {
          lVar29 = uVar30 * -0x18 + lVar29;
          if (*(char *)(lVar29 + -8) != '\0') {
            puStack_a0 = &uStack_88;
            pcStack_98 = pdb_1402ed420;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_143039e58,&puStack_a0,&UNK_143039e90);
          }
          uVar2 = *(ulonglong *)(lVar29 + -0x10);
          if (uVar2 < *(ulonglong *)(param_1 + 0x28)) {
            puVar27 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + uVar2 * 0x18);
            uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0x20) + uVar2 * 0x18);
            if ((!SBORROW8(0,uVar2)) && (uVar2 != 0)) {
              pub_1406abac0((byte *)puVar27[1],uVar2,1);
            }
            *puVar27 = 0x8000000000000000;
            uStack_a8 = pdb_140df4400(param_2,param_3);
            pdb_140ca8ba0(&puStack_a0,param_1 + 0x48,uStack_a8,&uStack_a8);
            return 1;
          }
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar2,*(ulonglong *)(param_1 + 0x28),&UNK_143039e40);
        }
        uVar26 = (ushort)(uVar32 - 1) & (ushort)uVar32;
        uVar32 = CONCAT22((short)(uVar32 - 1 >> 0x10),uVar26);
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
      puVar27 = (undefined8 *)(uVar28 + lVar31 + 0x10);
      lVar31 = lVar31 + 0x10;
    }
  }
  return 0;
}

