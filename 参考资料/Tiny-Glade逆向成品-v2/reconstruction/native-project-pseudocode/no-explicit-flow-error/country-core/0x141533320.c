// VA 0x141533320, PDB extent 1560 bytes
// country_core::asset_libraries::ssbo_library::AssetSsboLibrary::replace_with_data<country_core::render::nani::buffers::NaniDrawListSsbo>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/ssbo_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::asset_libraries::ssbo_library::AssetSsboLibrary::replace_with_data<country_core::render::nani::buffers::NaniDrawListSsbo>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/ssbo_library.rs
   Extent: 1560 */

void pdb_141533320(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

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
  undefined8 uVar26;
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
  int iVar45;
  byte *pbVar46;
  byte *pbVar47;
  longlong lVar48;
  longlong lVar49;
  uint uVar50;
  ulonglong uVar51;
  bool bVar52;
  undefined1 auVar53 [16];
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
  undefined1 auVar54 [16];
  undefined *puStack_100;
  undefined8 uStack_f8;
  byte *pbStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  byte *pbStack_a8;
  undefined8 *puStack_a0;
  longlong lStack_98;
  byte *pbStack_90;
  undefined1 uStack_81;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  pbVar46 = (byte *)pdb_141b15170(param_2,param_3,param_4 * 0x14);
  pbStack_f0 = pbVar46;
  pdb_14007ee60();
  pbVar47 = pub_1406abab0(8,8);
  if (pbVar47 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,8);
  }
  *(byte **)pbVar47 = pbVar46;
  cVar42 = UNK_142e3459f;
  cVar41 = UNK_142e3459e;
  cVar40 = UNK_142e3459d;
  cVar39 = UNK_142e3459c;
  cVar38 = UNK_142e3459b;
  cVar37 = UNK_142e3459a;
  cVar36 = UNK_142e34599;
  cVar35 = UNK_142e34598;
  cVar34 = UNK_142e34597;
  cVar33 = UNK_142e34596;
  cVar32 = UNK_142e34595;
  cVar31 = UNK_142e34594;
  cVar30 = UNK_142e34593;
  cVar29 = UNK_142e34592;
  cVar28 = UNK_142e34591;
  cVar27 = DAT_142e34590;
  pbStack_90 = pbVar47;
  if (*(char *)(param_1 + 8) != '\0') {
    pbStack_f0 = (byte *)(param_1 + 0x10);
    uStack_81 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143066330,0x2b,&pbStack_f0,&UNK_143066310,&UNK_143066458);
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar48 = *(longlong *)(param_1 + 0x10);
    uVar3 = *(ulonglong *)(param_1 + 0x18);
    uVar51 = 0xd92427ff18235c77;
    lVar49 = 0;
    iVar45 = -(uint)(CONCAT13(unaff_XMM7_Bd,
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
    while( true ) {
      uVar51 = uVar51 & uVar3;
      pcVar2 = (char *)(lVar48 + uVar51);
      cVar10 = *pcVar2;
      cVar11 = pcVar2[1];
      cVar12 = pcVar2[2];
      cVar13 = pcVar2[3];
      cVar14 = pcVar2[4];
      cVar15 = pcVar2[5];
      cVar16 = pcVar2[6];
      cVar17 = pcVar2[7];
      cVar18 = pcVar2[8];
      cVar19 = pcVar2[9];
      cVar20 = pcVar2[10];
      cVar21 = pcVar2[0xb];
      cVar22 = pcVar2[0xc];
      cVar23 = pcVar2[0xd];
      cVar24 = pcVar2[0xe];
      cVar25 = pcVar2[0xf];
      auVar53[0] = -(cVar10 == cVar27);
      auVar53[1] = -(cVar11 == cVar28);
      auVar53[2] = -(cVar12 == cVar29);
      auVar53[3] = -(cVar13 == cVar30);
      auVar53[4] = -(cVar14 == cVar31);
      auVar53[5] = -(cVar15 == cVar32);
      auVar53[6] = -(cVar16 == cVar33);
      auVar53[7] = -(cVar17 == cVar34);
      auVar53[8] = -(cVar18 == cVar35);
      auVar53[9] = -(cVar19 == cVar36);
      auVar53[10] = -(cVar20 == cVar37);
      auVar53[0xb] = -(cVar21 == cVar38);
      auVar53[0xc] = -(cVar22 == cVar39);
      auVar53[0xd] = -(cVar23 == cVar40);
      auVar53[0xe] = -(cVar24 == cVar41);
      auVar53[0xf] = -(cVar25 == cVar42);
      uVar44 = (ushort)(SUB161(auVar53 >> 7,0) & 1) | (ushort)(SUB161(auVar53 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar53 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar53 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar53 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar53 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar53 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar53 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar53 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar53 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar53 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar53 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar53 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar53 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar53 >> 0x77,0) & 1) << 0xe | (ushort)(auVar53[0xf] >> 7) << 0xf;
      uVar50 = (uint)uVar44;
      uVar26 = uStack_c8;
      while (uStack_c8 = (code *)uVar26, uVar44 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar50; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        lStack_98 = lVar48 + (uVar5 + uVar51 & uVar3) * -0x10;
        uStack_81 = 1;
        cVar43 = pdb_140df4430(&UNK_14331b858,lStack_98 + -0x10);
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
          puVar4[1] = &UNK_14331b820;
          lVar48 = *(longlong *)(lStack_98 + -8);
          plVar1 = (longlong *)(lVar48 + 0x20);
          LOCK();
          bVar52 = *(longlong *)(lVar48 + 0x20) == 0;
          if (bVar52) {
            *(longlong *)(lVar48 + 0x20) = 8;
          }
          UNLOCK();
          if (!bVar52) {
            uStack_81 = 0;
            pdb_142dbc1f0(plVar1,lStack_98,1000000000);
          }
          uStack_81 = 0;
          pdb_140e9a150(plVar1);
          uStack_81 = 0;
          pdb_140e9a150((ulonglong)plVar1 | 1);
          *(undefined4 *)(lVar48 + 0x28) = 0;
          uStack_81 = 0;
          pdb_140e9a350(plVar1);
          uStack_81 = 0;
          pdb_140e9a350();
          LOCK();
          lVar48 = *plVar1;
          if (lVar48 == 8) {
            *plVar1 = 0;
          }
          UNLOCK();
          if (lVar48 != 8) {
            uStack_81 = 0;
            pdb_142dbca40(plVar1,0);
          }
          lVar48 = *(longlong *)(lStack_98 + -8);
          *(undefined **)(lVar48 + 0x10) = &UNK_14331dbcc;
          *(undefined8 *)(lVar48 + 0x18) = 0x35;
          return;
        }
        uVar44 = (ushort)(uVar50 - 1) & (ushort)uVar50;
        uVar50 = CONCAT22((short)(uVar50 - 1 >> 0x10),uVar44);
        pbVar47 = pbStack_90;
        uVar26 = uStack_c8;
      }
      uStack_c8._4_4_ = (undefined4)((ulonglong)uVar26 >> 0x20);
      auVar54[0] = -(cVar10 == (char)iVar45);
      auVar54[1] = -(cVar11 == (char)((uint)iVar45 >> 8));
      auVar54[2] = -(cVar12 == (char)((uint)iVar45 >> 0x10));
      auVar54[3] = -(cVar13 == (char)((uint)iVar45 >> 0x18));
      auVar54[4] = -(cVar14 == (char)iVar7);
      auVar54[5] = -(cVar15 == (char)((uint)iVar7 >> 8));
      auVar54[6] = -(cVar16 == (char)((uint)iVar7 >> 0x10));
      auVar54[7] = -(cVar17 == (char)((uint)iVar7 >> 0x18));
      auVar54[8] = -(cVar18 == (char)iVar8);
      auVar54[9] = -(cVar19 == (char)((uint)iVar8 >> 8));
      auVar54[10] = -(cVar20 == (char)((uint)iVar8 >> 0x10));
      auVar54[0xb] = -(cVar21 == (char)((uint)iVar8 >> 0x18));
      auVar54[0xc] = -(cVar22 == (char)iVar9);
      auVar54[0xd] = -(cVar23 == (char)((uint)iVar9 >> 8));
      auVar54[0xe] = -(cVar24 == (char)((uint)iVar9 >> 0x10));
      auVar54[0xf] = -(cVar25 == (char)((uint)iVar9 >> 0x18));
      if ((((((((((((((((SUB161(auVar54 >> 7,0) & 1) != 0 || (SUB161(auVar54 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar54 >> 0x17,0) & 1) != 0) || (SUB161(auVar54 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar54 >> 0x27,0) & 1) != 0) || (SUB161(auVar54 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar54 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar54 >> 0x3f,0) & 1) != 0) || (SUB161(auVar54 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar54 >> 0x4f,0) & 1) != 0) || (SUB161(auVar54 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar54 >> 0x5f,0) & 1) != 0) || (SUB161(auVar54 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar54 >> 0x6f,0) & 1) != 0) || (SUB161(auVar54 >> 0x77,0) & 1) != 0) ||
          auVar54[0xf] < '\0') break;
      uVar51 = uVar51 + lVar49 + 0x10;
      lVar49 = lVar49 + 0x10;
    }
  }
  puStack_100 = &UNK_14331dbcc;
  uStack_f8 = 0x35;
  pcStack_e8 = (code *)&UNK_14331b820;
  uStack_d0 = (undefined **)0x0;
  uStack_c8._0_4_ = 0;
  uStack_e0 = (undefined **)&UNK_14331dbcc;
  uStack_d8 = (code *)0x35;
  pbStack_f0 = pbVar47;
  pdb_14007ee60();
  pbVar47 = pub_1406abab0(0x48,8);
  if (pbVar47 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x48);
  }
  *(undefined8 *)(pbVar47 + 0x40) = uStack_b0;
  *(undefined4 *)(pbVar47 + 0x30) = uStack_c0;
  *(undefined4 *)(pbVar47 + 0x34) = uStack_bc;
  *(undefined4 *)(pbVar47 + 0x38) = uStack_b8;
  *(undefined4 *)(pbVar47 + 0x3c) = uStack_b4;
  *(undefined4 *)(pbVar47 + 0x20) = (undefined4)uStack_d0;
  *(undefined4 *)(pbVar47 + 0x24) = uStack_d0._4_4_;
  *(undefined4 *)(pbVar47 + 0x28) = (undefined4)uStack_c8;
  *(undefined4 *)(pbVar47 + 0x2c) = uStack_c8._4_4_;
  *(undefined4 *)(pbVar47 + 0x10) = (undefined4)uStack_e0;
  *(undefined4 *)(pbVar47 + 0x14) = uStack_e0._4_4_;
  *(undefined4 *)(pbVar47 + 0x18) = (undefined4)uStack_d8;
  *(undefined4 *)(pbVar47 + 0x1c) = uStack_d8._4_4_;
  *(byte **)pbVar47 = pbStack_f0;
  *(code **)(pbVar47 + 8) = pcStack_e8;
  uStack_81 = 0;
  lVar49 = -0x26dbd800e7dca389;
  lVar48 = pdb_140bf4e90(param_1,0xd92427ff18235c77,pbVar47);
  if (lVar48 != 1) {
    return;
  }
  if ((*(longlong *)(lVar49 + 0x18) == 0x35) &&
     (iVar45 = pub_142e32750(&UNK_14331dbcc,*(undefined8 *)(lVar49 + 0x10),0x35), iVar45 == 0)) {
    pbStack_f0 = &UNK_14331b170;
    pcStack_e8 = pdb_1402ed420;
    uStack_e0 = &puStack_100;
    uStack_d8 = pdb_1402ed400;
    uStack_81 = 0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14331a628,&pbStack_f0,&UNK_14331a668);
  }
  pbStack_f0 = &UNK_14331b170;
  pcStack_e8 = pdb_1402ed420;
  uStack_d8 = pdb_1402ed400;
  uStack_d0 = &puStack_100;
  uStack_c8 = pdb_1402ed400;
  uStack_81 = 0;
  uStack_e0 = (undefined **)(lVar49 + 0x10);
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14331a560,&pbStack_f0,&UNK_14331a610);
}

