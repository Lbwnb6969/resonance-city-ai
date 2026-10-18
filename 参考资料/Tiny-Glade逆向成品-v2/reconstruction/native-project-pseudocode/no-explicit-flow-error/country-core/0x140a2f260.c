// VA 0x140a2f260, PDB extent 1468 bytes
// country_core::asset_libraries::texture_library::AssetTextureLibrary::add
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/texture_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::asset_libraries::texture_library::AssetTextureLibrary::add
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/texture_library.rs
   Extent: 1468 */

ulonglong pdb_140a2f260(ulonglong *param_1,ulonglong *param_2)

{
  char *pcVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
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
  code *pcVar27;
  code *arg0;
  char cVar28;
  ushort uVar29;
  ulonglong **ppuVar30;
  undefined8 uVar31;
  ulonglong uVar32;
  longlong lVar33;
  uint uVar34;
  byte bVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
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
  undefined1 auVar38 [16];
  ulonglong **ppuStack_130;
  code *pcStack_128;
  ulonglong uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  ulonglong **ppuStack_d8;
  ulonglong uStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  ulonglong *puStack_b8;
  code *pcStack_b0;
  ulonglong *puStack_a8;
  code *pcStack_a0;
  ulonglong *puStack_90;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  puStack_90 = param_2;
  if (!SBORROW8(0,*param_2)) {
    uStack_81 = 0;
    uStack_82 = 1;
    ppuVar30 = (ulonglong **)pdb_140df4400(param_2[1],param_2[2]);
    if (param_1[0xc] != 0) {
      uVar3 = param_1[9];
      uVar4 = param_1[10];
      bVar35 = (byte)((ulonglong)ppuVar30 >> 0x39);
      auVar36 = ZEXT216(CONCAT11(bVar35,bVar35));
      auVar36 = pshuflw(auVar36,auVar36,0);
      lVar33 = 0;
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
      ppuStack_130 = ppuVar30;
      while( true ) {
        uVar32 = (ulonglong)ppuVar30 & uVar4;
        pcVar1 = (char *)(uVar3 + uVar32);
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
        auVar37[0] = -(cVar11 == auVar36[0]);
        auVar37[1] = -(cVar12 == auVar36[1]);
        auVar37[2] = -(cVar13 == auVar36[2]);
        auVar37[3] = -(cVar14 == auVar36[3]);
        auVar37[4] = -(cVar15 == auVar36[4]);
        auVar37[5] = -(cVar16 == auVar36[5]);
        auVar37[6] = -(cVar17 == auVar36[6]);
        auVar37[7] = -(cVar18 == auVar36[7]);
        auVar37[8] = -(cVar19 == auVar36[0]);
        auVar37[9] = -(cVar20 == auVar36[1]);
        auVar37[10] = -(cVar21 == auVar36[2]);
        auVar37[0xb] = -(cVar22 == auVar36[3]);
        auVar37[0xc] = -(cVar23 == auVar36[4]);
        auVar37[0xd] = -(cVar24 == auVar36[5]);
        auVar37[0xe] = -(cVar25 == auVar36[6]);
        auVar37[0xf] = -(cVar26 == auVar36[7]);
        uVar29 = (ushort)(SUB161(auVar37 >> 7,0) & 1) | (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe | (ushort)(auVar37[0xf] >> 7) << 0xf
        ;
        uVar34 = (uint)uVar29;
        while (uVar29 != 0) {
          uVar5 = 0;
          for (uVar6 = uVar34; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar5 = uVar5 + 1;
          }
          uStack_81 = 0;
          uStack_82 = 1;
          cVar28 = pdb_140df4430(&ppuStack_130,uVar3 + (uVar5 + uVar32 & uVar4) * -0x18 + -0x18);
          if (cVar28 != '\0') {
            puStack_b8 = puStack_90;
            ppuStack_130 = &puStack_b8;
            pcStack_128 = pdb_140493e10;
            uStack_81 = 0;
            uStack_82 = 1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_14303a1b0,&ppuStack_130,&UNK_14303a1e8);
          }
          uVar29 = (ushort)(uVar34 - 1) & (ushort)uVar34;
          uVar34 = CONCAT22((short)(uVar34 - 1 >> 0x10),uVar29);
        }
        auVar38[0] = -(cVar11 == (char)iVar7);
        auVar38[1] = -(cVar12 == (char)((uint)iVar7 >> 8));
        auVar38[2] = -(cVar13 == (char)((uint)iVar7 >> 0x10));
        auVar38[3] = -(cVar14 == (char)((uint)iVar7 >> 0x18));
        auVar38[4] = -(cVar15 == (char)iVar8);
        auVar38[5] = -(cVar16 == (char)((uint)iVar8 >> 8));
        auVar38[6] = -(cVar17 == (char)((uint)iVar8 >> 0x10));
        auVar38[7] = -(cVar18 == (char)((uint)iVar8 >> 0x18));
        auVar38[8] = -(cVar19 == (char)iVar9);
        auVar38[9] = -(cVar20 == (char)((uint)iVar9 >> 8));
        auVar38[10] = -(cVar21 == (char)((uint)iVar9 >> 0x10));
        auVar38[0xb] = -(cVar22 == (char)((uint)iVar9 >> 0x18));
        auVar38[0xc] = -(cVar23 == (char)iVar10);
        auVar38[0xd] = -(cVar24 == (char)((uint)iVar10 >> 8));
        auVar38[0xe] = -(cVar25 == (char)((uint)iVar10 >> 0x10));
        auVar38[0xf] = -(cVar26 == (char)((uint)iVar10 >> 0x18));
        if ((((((((((((((((SUB161(auVar38 >> 7,0) & 1) != 0 || (SUB161(auVar38 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar38 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar38 >> 0x1f,0) & 1) != 0) || (SUB161(auVar38 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar38 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar38 >> 0x37,0) & 1) != 0) || (SUB161(auVar38 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar38 >> 0x47,0) & 1) != 0) || (SUB161(auVar38 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar38 >> 0x57,0) & 1) != 0) || (SUB161(auVar38 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar38 >> 0x67,0) & 1) != 0) || (SUB161(auVar38 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar38 >> 0x77,0) & 1) != 0) || auVar38[0xf] < '\0') break;
        ppuVar30 = (ulonglong **)(uVar32 + lVar33 + 0x10);
        lVar33 = lVar33 + 0x10;
      }
    }
  }
  ppuVar30 = (ulonglong **)puStack_90[3];
  uVar3 = param_1[2];
  ppuStack_130 = ppuVar30;
  if (uVar3 == *param_1) {
    pdb_142db0920(param_1);
  }
  *(ulonglong ***)(param_1[1] + uVar3 * 8) = ppuVar30;
  param_1[2] = uVar3 + 1;
  uVar4 = param_1[5];
  if (uVar4 == param_1[3]) {
    uStack_81 = 0;
    uStack_82 = 0;
    pdb_142d7e830(param_1 + 3);
  }
  *(undefined8 *)(param_1[4] + uVar4 * 0x18) = 0x8000000000000000;
  param_1[5] = uVar4 + 1;
  uVar4 = param_1[8];
  if (uVar4 == param_1[6]) {
    uStack_81 = 0;
    uStack_82 = 0;
    pdb_142d7e910(param_1 + 6);
  }
  *(undefined1 *)(param_1[7] + uVar4) = 0;
  param_1[8] = uVar4 + 1;
  uStack_d0 = uVar3;
  if (4 < *_DAT_143ca8e90) {
    puStack_b8 = puStack_90;
    pcStack_b0 = pdb_140a316e0;
    puStack_a8 = &uStack_d0;
    pcStack_a0 = pdb_1417c5e50;
    ppuStack_130 = (ulonglong **)0x0;
    pcStack_128 = (code *)&UNK_14303a218;
    uStack_120 = 0x2e;
    uStack_118 = 0;
    puStack_110 = &UNK_143039a50;
    uStack_108 = 0x3a;
    uStack_100 = 5;
    puStack_f8 = &UNK_14303a218;
    uStack_f0 = 0x2e;
    uStack_e8 = 0x7e00000001;
    puStack_e0 = &UNK_14303a200;
    ppuStack_d8 = &puStack_b8;
    uStack_81 = 0;
    uStack_82 = 0;
    pdb_140f332f0(&uStack_83,&ppuStack_130);
  }
  if (!SBORROW8(0,*puStack_90)) {
    puStack_a8 = (ulonglong *)puStack_90[2];
    puStack_b8 = (ulonglong *)*puStack_90;
    pcStack_b0 = (code *)puStack_90[1];
    pdb_140f60be0(&ppuStack_130,&puStack_b8);
    uVar4 = uStack_120;
    pcVar27 = pcStack_128;
    ppuVar30 = ppuStack_130;
    if (param_1[5] <= uVar3) {
      puStack_c8 = pcStack_128;
      puStack_c0 = ppuStack_130;
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar3,param_1[5],&UNK_14303a248);
    }
    puVar2 = (ulonglong *)(param_1[4] + uVar3 * 0x18);
    uVar32 = *(ulonglong *)(param_1[4] + uVar3 * 0x18);
    if ((!SBORROW8(0,uVar32)) && (uVar32 != 0)) {
      pub_1406abac0((byte *)puVar2[1],uVar32,1);
    }
    arg0 = pcStack_b0;
    *puVar2 = (ulonglong)ppuVar30;
    puVar2[1] = (ulonglong)pcVar27;
    puVar2[2] = uVar4;
    uVar31 = pdb_140df4400(pcStack_b0,puStack_a8);
    pdb_1417b22b0(param_1 + 9,uVar31,uVar3,0);
    if ((char)uVar31 != '\x02') {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_14303a260,0x7a,&UNK_14303a2e0);
    }
    if (puStack_b8 != (ulonglong *)0x0) {
      pub_1406abac0((byte *)arg0,(ulonglong)puStack_b8,1);
    }
  }
  return uVar3;
}

