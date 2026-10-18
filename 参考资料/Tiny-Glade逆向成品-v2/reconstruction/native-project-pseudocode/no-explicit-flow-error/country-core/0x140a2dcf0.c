// VA 0x140a2dcf0, PDB extent 1628 bytes
// country_core::asset_libraries::texture_library::AssetTextureLibrary::add_or_replace
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/texture_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::asset_libraries::texture_library::AssetTextureLibrary::add_or_replace
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/texture_library.rs
   Extent: 1628 */

ulonglong pdb_140a2dcf0(ulonglong *param_1,ulonglong *param_2)

{
  char *pcVar1;
  longlong lVar2;
  ulonglong *puVar3;
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
  char cVar27;
  ushort uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  uint uVar32;
  ulonglong uVar33;
  bool bVar34;
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
  ulonglong uStack_d8;
  ulonglong *puStack_d0;
  ulonglong *puStack_c8;
  ulonglong uStack_c0;
  ulonglong *puStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  ulonglong uStack_a0;
  ulonglong uStack_98;
  ulonglong *puStack_90;
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  puStack_90 = param_2;
  if (SBORROW8(0,*param_2)) {
    puVar3 = (ulonglong *)param_2[3];
    uVar30 = param_1[2];
    puStack_b8 = puVar3;
    if (uVar30 == *param_1) {
      pdb_142db0920(param_1);
    }
    *(ulonglong **)(param_1[1] + uVar30 * 8) = puVar3;
    param_1[2] = uVar30 + 1;
    uVar29 = param_1[5];
    if (uVar29 == param_1[3]) {
      uStack_81 = 0;
      uStack_82 = 0;
      pdb_142d7e830(param_1 + 3);
    }
    *(undefined8 *)(param_1[4] + uVar29 * 0x18) = 0x8000000000000000;
    param_1[5] = uVar29 + 1;
    uVar29 = param_1[8];
    if (uVar29 == param_1[6]) {
      uStack_81 = 0;
      uStack_82 = 0;
      pdb_142d7e910(param_1 + 6);
    }
    *(undefined1 *)(param_1[7] + uVar29) = 0;
    param_1[8] = uVar29 + 1;
  }
  else {
    uStack_81 = 0;
    uStack_82 = 1;
    uVar29 = pdb_140df4400(param_2[1]);
    uStack_d8 = uVar29;
    uVar30 = uStack_98;
    if (param_1[0xc] != 0) {
      uVar33 = param_1[9];
      uVar4 = param_1[10];
      bVar35 = (byte)(uVar29 >> 0x39);
      auVar36 = ZEXT216(CONCAT11(bVar35,bVar35));
      auVar36 = pshuflw(auVar36,auVar36,0);
      uVar31 = 0;
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
      do {
        uVar29 = uVar29 & uVar4;
        pcVar1 = (char *)(uVar33 + uVar29);
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
        uVar28 = (ushort)(SUB161(auVar37 >> 7,0) & 1) | (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1
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
        uVar32 = (uint)uVar28;
        uVar30 = uStack_98;
        while (uStack_98 = uVar31, uVar28 != 0) {
          uVar5 = 0;
          for (uVar6 = uVar32; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar5 = uVar5 + 1;
          }
          uVar30 = uVar5 + uVar29 & uVar4;
          uStack_81 = 0;
          uStack_82 = 1;
          cVar27 = pdb_140df4430(&uStack_d8,uVar33 + uVar30 * -0x18 + -0x18);
          if (cVar27 != '\0') {
            lVar2 = uVar33 + uVar30 * -0x18;
            if (*(char *)(lVar2 + -8) != '\0') {
              puStack_b8 = puStack_90;
              pcStack_b0 = pdb_140a316e0;
              uStack_81 = 0;
              uStack_82 = 1;
                    /* WARNING: Subroutine does not return */
              pdb_142dc83d0(&UNK_143039def,&puStack_b8,&UNK_143039e28);
            }
            uStack_98 = *(ulonglong *)(lVar2 + -0x10);
            puStack_d0 = (ulonglong *)puStack_90[3];
            uStack_c0 = param_1[2];
            puStack_b8 = puStack_d0;
            if (uStack_c0 <= uStack_98) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uStack_98,uStack_c0,&UNK_143039d98);
            }
            lVar2 = uStack_98 * 8;
            puStack_c8 = (ulonglong *)(param_1[1] + lVar2);
            pdb_14098a200();
            uVar29 = uStack_98;
            *puStack_c8 = (ulonglong)puStack_d0;
            puVar3 = param_1 + 0x15;
            uVar30 = param_1[0x15];
            if (uVar30 < 0xfffffffffffffff0 && (char)(((uint)uVar30 & 8) >> 3) == '\0') {
              LOCK();
              uVar4 = *puVar3;
              if (uVar30 == uVar4) {
                *puVar3 = uVar30 + 0x10;
              }
              UNLOCK();
              if (uVar30 == uVar4) goto LAB_140a2df80;
            }
            uStack_81 = 0;
            uStack_82 = 0;
            pdb_142dbb5f0(puVar3,0);
LAB_140a2df80:
            uStack_81 = 0;
            uStack_82 = 0;
            pdb_140e9a150(puVar3);
            uStack_81 = 0;
            uStack_82 = 0;
            pdb_140e9a150((ulonglong)puVar3 | 1);
            if (uVar29 < param_1[0x18]) {
              uVar33 = (ulonglong)*(uint *)(param_1[0x17] + 4 + uVar29 * 8);
              bVar34 = *(int *)(param_1[0x17] + uVar29 * 8) == 0;
            }
            else {
              bVar34 = true;
            }
            uStack_81 = 0;
            uStack_82 = 0;
            pdb_140e9a350(puVar3);
            uStack_81 = 0;
            uStack_82 = 0;
            pdb_140e9a350((ulonglong)puVar3 | 1);
            LOCK();
            uVar30 = *puVar3;
            *puVar3 = *puVar3 - 0x10;
            UNLOCK();
            if ((uVar30 & 0xfffffffffffffff2) == 0x12) {
              uStack_81 = 0;
              uStack_82 = 0;
              pdb_142dbbf50(puVar3);
            }
            if (!bVar34) {
              if (param_1[2] <= uVar29) {
                uStack_81 = 0;
                uStack_82 = 0;
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(uVar29,param_1[2],&UNK_143039db0);
              }
              pcStack_b0 = (code *)0x8000000000000000;
              puStack_a8 = &UNK_143039dc8;
              uStack_a0 = 0x27;
              puStack_b8 = (ulonglong *)0x0;
              uStack_81 = 0;
              uStack_82 = 0;
              pdb_14155a7a0(param_1[0x13] + 0x10,param_1 + 0x14,1,&puStack_b8,lVar2 + param_1[1],
                            (int)uVar33);
            }
            uVar30 = *puStack_90;
            if (SBORROW8(0,uVar30)) {
              return uVar29;
            }
            if (uVar30 == 0) {
              return uVar29;
            }
            pub_1406abac0((byte *)puStack_90[1],uVar30,1);
            return uVar29;
          }
          uVar28 = (ushort)(uVar32 - 1) & (ushort)uVar32;
          uVar32 = CONCAT22((short)(uVar32 - 1 >> 0x10),uVar28);
          uVar31 = uStack_98;
          uVar30 = uStack_98;
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
        uVar29 = uVar29 + uStack_98 + 0x10;
        uVar31 = uStack_98 + 0x10;
        uStack_98 = uVar30;
      } while( true );
    }
    uStack_98 = uVar30;
    puStack_b8 = (ulonglong *)*puStack_90;
    pcStack_b0 = (code *)puStack_90[1];
    puStack_a8 = (undefined *)puStack_90[2];
    uStack_a0 = puStack_90[3];
    uStack_81 = 1;
    uStack_82 = 0;
    uVar30 = pdb_140a2f260(param_1,&puStack_b8);
  }
  return uVar30;
}

