// VA 0x141703bf0, PDB extent 1460 bytes
// country_core::asset_libraries::placement_data_library::AssetPlacementDataLibrary::load<std::path::PathBuf>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/placement_data_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::asset_libraries::placement_data_library::AssetPlacementDataLibrary::load<std::path::PathBuf>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/placement_data_library.rs
   Extent: 1460 */

ulonglong *
pdb_141703bf0(ulonglong *param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

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
  ulonglong *puVar27;
  byte *pbVar28;
  char cVar29;
  ushort uVar30;
  ulonglong uVar31;
  undefined8 uVar32;
  ulonglong uVar33;
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
  ulonglong uStack_130;
  byte *pbStack_128;
  undefined8 uStack_120;
  byte *apbStack_118 [3];
  ulonglong *puStack_100;
  undefined8 **ppuStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  byte *pbStack_d0;
  undefined8 **ppuStack_c8;
  code *pcStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  byte *pbStack_a0;
  byte *pbStack_98;
  undefined8 **ppuStack_90;
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  ppuStack_f8 = (undefined8 **)*param_4;
  uStack_f0 = param_4[1];
  uStack_e8 = *(undefined4 *)(param_4 + 2);
  uStack_e4 = *(undefined4 *)((longlong)param_4 + 0x14);
  uStack_e0 = *(undefined4 *)(param_4 + 3);
  uStack_dc = *(undefined4 *)((longlong)param_4 + 0x1c);
  puStack_100 = param_1;
  pbStack_a0 = (byte *)param_3;
  if (*(longlong *)(param_2 + 0x48) != 0) {
    uStack_81 = 1;
    uVar31 = pdb_1417c4360(param_2 + 0x50,&ppuStack_f8);
    lVar2 = *(longlong *)(param_2 + 0x30);
    uVar3 = *(ulonglong *)(param_2 + 0x38);
    bVar36 = (byte)(uVar31 >> 0x39);
    auVar37 = ZEXT216(CONCAT11(bVar36,bVar36));
    auVar37 = pshuflw(auVar37,auVar37,0);
    lVar34 = 0;
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
      uVar31 = uVar31 & uVar3;
      pcVar1 = (char *)(lVar2 + uVar31);
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
      auVar38[0] = -(cVar11 == auVar37[0]);
      auVar38[1] = -(cVar12 == auVar37[1]);
      auVar38[2] = -(cVar13 == auVar37[2]);
      auVar38[3] = -(cVar14 == auVar37[3]);
      auVar38[4] = -(cVar15 == auVar37[4]);
      auVar38[5] = -(cVar16 == auVar37[5]);
      auVar38[6] = -(cVar17 == auVar37[6]);
      auVar38[7] = -(cVar18 == auVar37[7]);
      auVar38[8] = -(cVar19 == auVar37[0]);
      auVar38[9] = -(cVar20 == auVar37[1]);
      auVar38[10] = -(cVar21 == auVar37[2]);
      auVar38[0xb] = -(cVar22 == auVar37[3]);
      auVar38[0xc] = -(cVar23 == auVar37[4]);
      auVar38[0xd] = -(cVar24 == auVar37[5]);
      auVar38[0xe] = -(cVar25 == auVar37[6]);
      auVar38[0xf] = -(cVar26 == auVar37[7]);
      uVar30 = (ushort)(SUB161(auVar38 >> 7,0) & 1) | (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
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
      uVar35 = (uint)uVar30;
      while (uVar30 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar35; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uStack_81 = 1;
        cVar29 = pdb_1417cd920(&ppuStack_f8,lVar2 + (uVar5 + uVar31 & uVar3) * -0x28 + -0x28);
        if (cVar29 != '\0') {
          pcStack_c0 = pdb_140f58250;
          uStack_81 = 1;
          ppuStack_c8 = &ppuStack_f8;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_143326ef0,&ppuStack_c8,&UNK_143326f40);
        }
        uVar30 = (ushort)(uVar35 - 1) & (ushort)uVar35;
        uVar35 = CONCAT22((short)(uVar35 - 1 >> 0x10),uVar30);
      }
      auVar39[0] = -(cVar11 == (char)iVar7);
      auVar39[1] = -(cVar12 == (char)((uint)iVar7 >> 8));
      auVar39[2] = -(cVar13 == (char)((uint)iVar7 >> 0x10));
      auVar39[3] = -(cVar14 == (char)((uint)iVar7 >> 0x18));
      auVar39[4] = -(cVar15 == (char)iVar8);
      auVar39[5] = -(cVar16 == (char)((uint)iVar8 >> 8));
      auVar39[6] = -(cVar17 == (char)((uint)iVar8 >> 0x10));
      auVar39[7] = -(cVar18 == (char)((uint)iVar8 >> 0x18));
      auVar39[8] = -(cVar19 == (char)iVar9);
      auVar39[9] = -(cVar20 == (char)((uint)iVar9 >> 8));
      auVar39[10] = -(cVar21 == (char)((uint)iVar9 >> 0x10));
      auVar39[0xb] = -(cVar22 == (char)((uint)iVar9 >> 0x18));
      auVar39[0xc] = -(cVar23 == (char)iVar10);
      auVar39[0xd] = -(cVar24 == (char)((uint)iVar10 >> 8));
      auVar39[0xe] = -(cVar25 == (char)((uint)iVar10 >> 0x10));
      auVar39[0xf] = -(cVar26 == (char)((uint)iVar10 >> 0x18));
      if ((((((((((((((((SUB161(auVar39 >> 7,0) & 1) != 0 || (SUB161(auVar39 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar39 >> 0x17,0) & 1) != 0) || (SUB161(auVar39 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar39 >> 0x27,0) & 1) != 0) || (SUB161(auVar39 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar39 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar39 >> 0x3f,0) & 1) != 0) || (SUB161(auVar39 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar39 >> 0x4f,0) & 1) != 0) || (SUB161(auVar39 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar39 >> 0x5f,0) & 1) != 0) || (SUB161(auVar39 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar39 >> 0x6f,0) & 1) != 0) || (SUB161(auVar39 >> 0x77,0) & 1) != 0) ||
          auVar39[0xf] < '\0') break;
      uVar31 = uVar31 + lVar34 + 0x10;
      lVar34 = lVar34 + 0x10;
    }
  }
  uStack_81 = 1;
  pdb_140d929f0(&ppuStack_c8,uStack_f0,CONCAT44(uStack_e4,uStack_e8));
  pbStack_98 = (byte *)pcStack_c0;
  pdb_140f55d10(apbStack_118,pcStack_c0,CONCAT44(uStack_b4,uStack_b8));
  pdb_141706360(&uStack_130,apbStack_118,&ppuStack_c8);
  if (ppuStack_c8 != (undefined8 **)0x0) {
    pub_1406abac0(pbStack_98,(ulonglong)ppuStack_c8,1);
  }
  pbStack_98 = (byte *)uStack_130;
  if (!SBORROW8(0,uStack_130)) {
    uStack_82 = 1;
    pbStack_d0 = pbStack_128;
    pdb_141650620(&ppuStack_c8,pbStack_128,uStack_120);
    pbVar28 = pbStack_a0;
    if (!SBORROW8(0,(longlong)ppuStack_c8)) {
      ppuStack_90 = ppuStack_c8;
      uVar3 = CONCAT44(uStack_b4,uStack_b8);
      pbStack_a0 = (byte *)pcStack_c0;
      uVar32 = pdb_141b0e810(pbVar28,pcStack_c0,uVar3);
      uVar31 = _DAT_143cb3070;
      LOCK();
      UNLOCK();
      uVar33 = _DAT_143cb3070;
      _DAT_143cb3070 = _DAT_143cb3070 + 1;
      ppuStack_c8 = (undefined8 **)pdb_1417b9ea0(param_2,uVar31,uVar32,uVar3);
      if (ppuStack_c8 != (undefined8 **)0x0) {
        pcStack_c0 = (code *)uVar33;
        pdb_140989660(&ppuStack_c8);
      }
      uStack_b8 = uStack_e8;
      uStack_b4 = uStack_e4;
      uStack_b0 = uStack_e0;
      uStack_ac = uStack_dc;
      ppuStack_c8 = ppuStack_f8;
      pcStack_c0 = (code *)uStack_f0;
      pdb_1417b7000(param_2 + 0x30,&ppuStack_c8,uVar31);
      puVar27 = puStack_100;
      *puStack_100 = (ulonglong)ppuStack_90;
      puStack_100[1] = (ulonglong)pbStack_a0;
      puStack_100[2] = uVar3;
      puStack_100[3] = uVar31;
      if (pbStack_98 != (byte *)0x0) {
        pub_1406abac0(pbStack_d0,(ulonglong)pbStack_98,1);
      }
      return puVar27;
    }
    apbStack_118[0] = (byte *)pcStack_c0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143327518,0x2b,apbStack_118,&UNK_1433274f8,&UNK_143326ed8);
  }
  uStack_81 = 1;
  pdb_142de9210(&ppuStack_f8);
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}

