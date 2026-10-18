// VA 0x140a596f0, PDB extent 764 bytes
// country_core::asset_libraries::shader_library::AssetShaderLibrary::get_world_raster_pipelines
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/shader_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::asset_libraries::shader_library::AssetShaderLibrary::get_world_raster_pipelines
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/shader_library.rs
   Extent: 764 */

undefined8 *
pdb_140a596f0(undefined8 *param_1,longlong param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5)

{
  char *pcVar1;
  int *piVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
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
  char cVar28;
  longlong lVar29;
  ushort uVar30;
  int iVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  longlong lVar34;
  longlong lVar35;
  ulonglong uVar36;
  uint uVar37;
  byte bVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
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
  undefined1 auVar41 [16];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [8];
  longlong lStack_c8;
  ulonglong uStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  undefined1 (*pauStack_a8) [16];
  undefined1 (*pauStack_a0) [16];
  undefined1 *puStack_98;
  code *pcStack_90;
  longlong lStack_88;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  lVar35 = *(longlong *)(param_2 + 0x78);
  auStack_d0 = (undefined1  [8])param_3;
  lStack_c8 = param_4;
  if (lVar35 == 0) {
    pauStack_a8 = *(undefined1 (**) [16])(param_2 + 0x60);
    uVar36 = *(ulonglong *)(param_2 + 0x68);
    uVar33 = uStack_c0;
    lVar29 = lStack_b0;
  }
  else {
    uVar32 = pdb_1400af950(param_2 + 0x80,param_3,param_4);
    pauStack_a8 = *(undefined1 (**) [16])(param_2 + 0x60);
    uVar36 = *(ulonglong *)(param_2 + 0x68);
    bVar38 = (byte)(uVar32 >> 0x39);
    auVar39 = ZEXT216(CONCAT11(bVar38,bVar38));
    auVar39 = pshuflw(auVar39,auVar39,0);
    lVar34 = 0;
    iVar9 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                             CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                   CONCAT13(unaff_XMM7_Bd,
                            CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
    iVar10 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                              CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                    CONCAT13(unaff_XMM7_Bh,
                             CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
    iVar11 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                              CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                    CONCAT13(unaff_XMM7_Bl,
                             CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
    iVar12 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                              CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                    CONCAT13(unaff_XMM7_Bp,
                             CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
    while( true ) {
      pcVar1 = *pauStack_a8 + (uVar32 & uVar36);
      cVar13 = *pcVar1;
      cVar14 = pcVar1[1];
      cVar15 = pcVar1[2];
      cVar16 = pcVar1[3];
      cVar17 = pcVar1[4];
      cVar18 = pcVar1[5];
      cVar19 = pcVar1[6];
      cVar20 = pcVar1[7];
      cVar21 = pcVar1[8];
      cVar22 = pcVar1[9];
      cVar23 = pcVar1[10];
      cVar24 = pcVar1[0xb];
      cVar25 = pcVar1[0xc];
      cVar26 = pcVar1[0xd];
      cVar27 = pcVar1[0xe];
      cVar28 = pcVar1[0xf];
      auVar40[0] = -(cVar13 == auVar39[0]);
      auVar40[1] = -(cVar14 == auVar39[1]);
      auVar40[2] = -(cVar15 == auVar39[2]);
      auVar40[3] = -(cVar16 == auVar39[3]);
      auVar40[4] = -(cVar17 == auVar39[4]);
      auVar40[5] = -(cVar18 == auVar39[5]);
      auVar40[6] = -(cVar19 == auVar39[6]);
      auVar40[7] = -(cVar20 == auVar39[7]);
      auVar40[8] = -(cVar21 == auVar39[0]);
      auVar40[9] = -(cVar22 == auVar39[1]);
      auVar40[10] = -(cVar23 == auVar39[2]);
      auVar40[0xb] = -(cVar24 == auVar39[3]);
      auVar40[0xc] = -(cVar25 == auVar39[4]);
      auVar40[0xd] = -(cVar26 == auVar39[5]);
      auVar40[0xe] = -(cVar27 == auVar39[6]);
      auVar40[0xf] = -(cVar28 == auVar39[7]);
      uVar30 = (ushort)(SUB161(auVar40 >> 7,0) & 1) | (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe | (ushort)(auVar40[0xf] >> 7) << 0xf;
      uVar37 = (uint)uVar30;
      uVar32 = uVar32 & uVar36;
      uVar33 = uStack_c0;
      lVar29 = lStack_b0;
      while (lStack_b0 = lVar34, uStack_c0 = uVar32, uVar30 != 0) {
        uVar7 = 0;
        for (uVar8 = uVar37; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        uVar33 = uVar7 + uStack_c0 & uVar36;
        lStack_b8 = lVar35;
        if ((param_4 == *(longlong *)pauStack_a8[uVar33 * -5 + -4]) &&
           (iVar31 = pub_142e32750(param_3,*(undefined8 *)(pauStack_a8[uVar33 * -5 + -5] + 8),
                                   param_4), iVar31 == 0)) {
          uVar36 = *(ulonglong *)pauStack_a8[uVar33 * -5 + -3];
          LOCK();
          piVar2 = (int *)((uVar36 & 0xffffffffffffffc0) + 0x10 +
                          (ulonglong)((uint)uVar36 & 0x3f) * 4);
          *piVar2 = *piVar2 + 1;
          UNLOCK();
          uVar32 = *(ulonglong *)(pauStack_a8[uVar33 * -5 + -3] + 8);
          if (uVar32 != 0) {
            LOCK();
            piVar2 = (int *)((uVar32 & 0xffffffffffffffc0) + 0x10 +
                            (ulonglong)((uint)uVar32 & 0x3f) * 4);
            *piVar2 = *piVar2 + 1;
            UNLOCK();
          }
          uVar4 = *(ulonglong *)pauStack_a8[uVar33 * -5 + -2];
          if (uVar4 != 0) {
            LOCK();
            piVar2 = (int *)((uVar4 & 0xffffffffffffffc0) + 0x10 +
                            (ulonglong)((uint)uVar4 & 0x3f) * 4);
            *piVar2 = *piVar2 + 1;
            UNLOCK();
          }
          uVar5 = *(ulonglong *)(pauStack_a8[uVar33 * -5 + -2] + 8);
          if (uVar5 != 0) {
            LOCK();
            piVar2 = (int *)((uVar5 & 0xffffffffffffffc0) + 0x10 +
                            (ulonglong)((uint)uVar5 & 0x3f) * 4);
            *piVar2 = *piVar2 + 1;
            UNLOCK();
          }
          uVar3 = *(undefined8 *)(pauStack_a8[uVar33 * -5 + -1] + 8);
          uVar6 = *(ulonglong *)pauStack_a8[uVar33 * -5 + -1];
          if (uVar6 != 0) {
            LOCK();
            piVar2 = (int *)((uVar6 & 0xfffffffffffffffc) + 0x10 + (ulonglong)((uint)uVar6 & 3) * 4)
            ;
            *piVar2 = *piVar2 + 1;
            UNLOCK();
          }
          *param_1 = *(undefined8 *)(pauStack_a8[uVar33 * -5 + -4] + 8);
          param_1[1] = uVar36;
          param_1[2] = uVar32;
          param_1[3] = uVar4;
          param_1[4] = uVar5;
          param_1[5] = uVar6;
          param_1[6] = uVar3;
          return param_1;
        }
        uVar30 = (ushort)(uVar37 - 1) & (ushort)uVar37;
        uVar37 = CONCAT22((short)(uVar37 - 1 >> 0x10),uVar30);
        uVar32 = uStack_c0;
        lVar34 = lStack_b0;
        lVar35 = lStack_b8;
        uVar33 = uStack_c0;
        lVar29 = lStack_b0;
      }
      auVar41[0] = -(cVar13 == (char)iVar9);
      auVar41[1] = -(cVar14 == (char)((uint)iVar9 >> 8));
      auVar41[2] = -(cVar15 == (char)((uint)iVar9 >> 0x10));
      auVar41[3] = -(cVar16 == (char)((uint)iVar9 >> 0x18));
      auVar41[4] = -(cVar17 == (char)iVar10);
      auVar41[5] = -(cVar18 == (char)((uint)iVar10 >> 8));
      auVar41[6] = -(cVar19 == (char)((uint)iVar10 >> 0x10));
      auVar41[7] = -(cVar20 == (char)((uint)iVar10 >> 0x18));
      auVar41[8] = -(cVar21 == (char)iVar11);
      auVar41[9] = -(cVar22 == (char)((uint)iVar11 >> 8));
      auVar41[10] = -(cVar23 == (char)((uint)iVar11 >> 0x10));
      auVar41[0xb] = -(cVar24 == (char)((uint)iVar11 >> 0x18));
      auVar41[0xc] = -(cVar25 == (char)iVar12);
      auVar41[0xd] = -(cVar26 == (char)((uint)iVar12 >> 8));
      auVar41[0xe] = -(cVar27 == (char)((uint)iVar12 >> 0x10));
      auVar41[0xf] = -(cVar28 == (char)((uint)iVar12 >> 0x18));
      if ((((((((((((((((SUB161(auVar41 >> 7,0) & 1) != 0 || (SUB161(auVar41 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar41 >> 0x17,0) & 1) != 0) || (SUB161(auVar41 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar41 >> 0x27,0) & 1) != 0) || (SUB161(auVar41 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar41 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar41 >> 0x3f,0) & 1) != 0) || (SUB161(auVar41 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar41 >> 0x4f,0) & 1) != 0) || (SUB161(auVar41 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar41 >> 0x5f,0) & 1) != 0) || (SUB161(auVar41 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar41 >> 0x6f,0) & 1) != 0) || (SUB161(auVar41 >> 0x77,0) & 1) != 0) ||
          auVar41[0xf] < '\0') break;
      uVar32 = uStack_c0 + lStack_b0 + 0x10;
      lVar34 = lStack_b0 + 0x10;
      uStack_c0 = uVar33;
      lStack_b0 = lVar29;
    }
  }
  lStack_b0 = lVar29;
  uStack_c0 = uVar33;
  puStack_98 = *pauStack_a8 + uVar36 + 1;
  auVar39 = *pauStack_a8;
  pauStack_a0 = pauStack_a8 + 1;
  pcStack_90 = (code *)CONCAT62(pcStack_90._2_6_,
                                ~((ushort)(SUB161(auVar39 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar39 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar39 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar39 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar39 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar39 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar39 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar39 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar39 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar39 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar39[0xf] >> 7) << 0xf));
  lStack_88 = lVar35;
  pdb_141600bf0(auStack_e8,&pauStack_a8);
  pauStack_a8 = (undefined1 (*) [16])auStack_d0;
  pauStack_a0 = (undefined1 (*) [16])pdb_1402ed420;
  pcStack_90 = pdb_1415e4fb0;
  puStack_98 = auStack_e8;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14303e5b8,&pauStack_a8,param_5);
}

