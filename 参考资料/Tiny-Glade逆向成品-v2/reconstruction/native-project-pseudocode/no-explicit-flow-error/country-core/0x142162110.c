// VA 0x142162110, PDB extent 1080 bytes
// country_core::asset_libraries::ssbo_library::AssetSsboLibrary::replace_with_data<country_core::resources::color_id::HalftimberColorIdSsbo>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/ssbo_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::asset_libraries::ssbo_library::AssetSsboLibrary::replace_with_data<country_core::resources::color_id::HalftimberColorIdSsbo>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/ssbo_library.rs
   Extent: 1080 */

void pdb_142162110(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  char *pcVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
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
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  char cVar42;
  char cVar43;
  ushort uVar44;
  longlong lVar45;
  byte *pbVar46;
  longlong lVar47;
  uint uVar48;
  ulonglong uVar49;
  bool bVar50;
  undefined1 auVar51 [16];
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
  undefined1 auVar52 [16];
  longlong lStack_b0;
  byte *pbStack_a8;
  undefined8 *puStack_a0;
  longlong lStack_98;
  byte *pbStack_90;
  undefined1 uStack_81;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  lVar45 = pdb_1428d77b0(param_2,param_3,param_4 * 4);
  lStack_b0 = lVar45;
  pdb_14007ee60();
  pbVar46 = pub_1406abab0(8,8);
  if (pbVar46 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,8);
  }
  *(longlong *)pbVar46 = lVar45;
  cVar42 = UNK_142e33c9f;
  cVar41 = UNK_142e33c9e;
  cVar40 = UNK_142e33c9d;
  cVar39 = UNK_142e33c9c;
  cVar38 = UNK_142e33c9b;
  cVar37 = UNK_142e33c9a;
  cVar36 = UNK_142e33c99;
  cVar35 = UNK_142e33c98;
  cVar34 = UNK_142e33c97;
  cVar33 = UNK_142e33c96;
  cVar32 = UNK_142e33c95;
  cVar31 = UNK_142e33c94;
  cVar30 = UNK_142e33c93;
  cVar29 = UNK_142e33c92;
  cVar28 = UNK_142e33c91;
  cVar27 = DAT_142e33c90;
  pbStack_90 = pbVar46;
  if (*(char *)(param_1 + 8) == '\0') {
    if (*(longlong *)(param_1 + 0x28) != 0) {
      lVar45 = *(longlong *)(param_1 + 0x10);
      uVar3 = *(ulonglong *)(param_1 + 0x18);
      uVar49 = 0xcf3b7d1045fdc98;
      lVar47 = 0;
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
        uVar49 = uVar49 & uVar3;
        pcVar2 = (char *)(lVar45 + uVar49);
        cVar11 = *pcVar2;
        cVar12 = pcVar2[1];
        cVar13 = pcVar2[2];
        cVar14 = pcVar2[3];
        cVar15 = pcVar2[4];
        cVar16 = pcVar2[5];
        cVar17 = pcVar2[6];
        cVar18 = pcVar2[7];
        cVar19 = pcVar2[8];
        cVar20 = pcVar2[9];
        cVar21 = pcVar2[10];
        cVar22 = pcVar2[0xb];
        cVar23 = pcVar2[0xc];
        cVar24 = pcVar2[0xd];
        cVar25 = pcVar2[0xe];
        cVar26 = pcVar2[0xf];
        auVar51[0] = -(cVar11 == cVar27);
        auVar51[1] = -(cVar12 == cVar28);
        auVar51[2] = -(cVar13 == cVar29);
        auVar51[3] = -(cVar14 == cVar30);
        auVar51[4] = -(cVar15 == cVar31);
        auVar51[5] = -(cVar16 == cVar32);
        auVar51[6] = -(cVar17 == cVar33);
        auVar51[7] = -(cVar18 == cVar34);
        auVar51[8] = -(cVar19 == cVar35);
        auVar51[9] = -(cVar20 == cVar36);
        auVar51[10] = -(cVar21 == cVar37);
        auVar51[0xb] = -(cVar22 == cVar38);
        auVar51[0xc] = -(cVar23 == cVar39);
        auVar51[0xd] = -(cVar24 == cVar40);
        auVar51[0xe] = -(cVar25 == cVar41);
        auVar51[0xf] = -(cVar26 == cVar42);
        uVar44 = (ushort)(SUB161(auVar51 >> 7,0) & 1) | (ushort)(SUB161(auVar51 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar51 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar51 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar51 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar51 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar51 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar51 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar51 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar51 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar51 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar51 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar51 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar51 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar51 >> 0x77,0) & 1) << 0xe | (ushort)(auVar51[0xf] >> 7) << 0xf
        ;
        uVar48 = (uint)uVar44;
        while (uVar44 != 0) {
          uVar5 = 0;
          for (uVar6 = uVar48; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar5 = uVar5 + 1;
          }
          lStack_98 = lVar45 + (uVar5 + uVar49 & uVar3) * -0x10;
          uStack_81 = 1;
          cVar43 = pdb_140df4430(&UNK_1434649b0,lStack_98 + -0x10);
          if (cVar43 != '\0') {
            pbStack_a8 = (byte *)**(undefined8 **)(lStack_98 + -8);
            puStack_a0 = (undefined8 *)(*(undefined8 **)(lStack_98 + -8))[1];
            if ((code *)*puStack_a0 != (code *)0x0) {
              (*(code *)*puStack_a0)(pbStack_a8);
            }
            if (puStack_a0[1] != 0) {
              pub_1406abac0(pbStack_a8,puStack_a0[1],puStack_a0[2]);
            }
            puVar4 = *(undefined8 **)(lStack_98 + -8);
            *puVar4 = pbStack_90;
            puVar4[1] = &UNK_143464880;
            lVar45 = *(longlong *)(lStack_98 + -8);
            plVar1 = (longlong *)(lVar45 + 0x20);
            LOCK();
            bVar50 = *(longlong *)(lVar45 + 0x20) == 0;
            if (bVar50) {
              *(longlong *)(lVar45 + 0x20) = 8;
            }
            UNLOCK();
            if (!bVar50) {
              uStack_81 = 0;
              pdb_142dbc1f0(plVar1,lStack_98,1000000000);
            }
            uStack_81 = 0;
            pdb_140e9a150(plVar1);
            uStack_81 = 0;
            pdb_140e9a150((ulonglong)plVar1 | 1);
            *(undefined4 *)(lVar45 + 0x28) = 0;
            uStack_81 = 0;
            pdb_140e9a350(plVar1);
            uStack_81 = 0;
            pdb_140e9a350();
            LOCK();
            lVar45 = *plVar1;
            if (lVar45 == 8) {
              *plVar1 = 0;
            }
            UNLOCK();
            if (lVar45 != 8) {
              uStack_81 = 0;
              pdb_142dbca40(plVar1,0);
            }
            lVar45 = *(longlong *)(lStack_98 + -8);
            *(undefined **)(lVar45 + 0x10) = &UNK_143464a43;
            *(undefined8 *)(lVar45 + 0x18) = 0x38;
            return;
          }
          uVar44 = (ushort)(uVar48 - 1) & (ushort)uVar48;
          uVar48 = CONCAT22((short)(uVar48 - 1 >> 0x10),uVar44);
          pbVar46 = pbStack_90;
        }
        auVar52[0] = -(cVar11 == (char)iVar7);
        auVar52[1] = -(cVar12 == (char)((uint)iVar7 >> 8));
        auVar52[2] = -(cVar13 == (char)((uint)iVar7 >> 0x10));
        auVar52[3] = -(cVar14 == (char)((uint)iVar7 >> 0x18));
        auVar52[4] = -(cVar15 == (char)iVar8);
        auVar52[5] = -(cVar16 == (char)((uint)iVar8 >> 8));
        auVar52[6] = -(cVar17 == (char)((uint)iVar8 >> 0x10));
        auVar52[7] = -(cVar18 == (char)((uint)iVar8 >> 0x18));
        auVar52[8] = -(cVar19 == (char)iVar9);
        auVar52[9] = -(cVar20 == (char)((uint)iVar9 >> 8));
        auVar52[10] = -(cVar21 == (char)((uint)iVar9 >> 0x10));
        auVar52[0xb] = -(cVar22 == (char)((uint)iVar9 >> 0x18));
        auVar52[0xc] = -(cVar23 == (char)iVar10);
        auVar52[0xd] = -(cVar24 == (char)((uint)iVar10 >> 8));
        auVar52[0xe] = -(cVar25 == (char)((uint)iVar10 >> 0x10));
        auVar52[0xf] = -(cVar26 == (char)((uint)iVar10 >> 0x18));
        if ((((((((((((((((SUB161(auVar52 >> 7,0) & 1) != 0 || (SUB161(auVar52 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar52 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar52 >> 0x1f,0) & 1) != 0) || (SUB161(auVar52 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar52 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar52 >> 0x37,0) & 1) != 0) || (SUB161(auVar52 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar52 >> 0x47,0) & 1) != 0) || (SUB161(auVar52 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar52 >> 0x57,0) & 1) != 0) || (SUB161(auVar52 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar52 >> 0x67,0) & 1) != 0) || (SUB161(auVar52 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar52 >> 0x77,0) & 1) != 0) || auVar52[0xf] < '\0') break;
        uVar49 = uVar49 + lVar47 + 0x10;
        lVar47 = lVar47 + 0x10;
      }
    }
    uStack_81 = 0;
    pdb_142160a90(param_1,pbVar46,&UNK_143464880);
    return;
  }
  lStack_b0 = param_1 + 0x10;
  uStack_81 = 1;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_143464b80,0x2b,&lStack_b0,&UNK_143464b60,&UNK_143464c28);
}

