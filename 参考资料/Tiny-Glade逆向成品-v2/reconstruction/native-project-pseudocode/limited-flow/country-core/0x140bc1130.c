// VA 0x140bc1130, PDB extent 3351 bytes
// country_core::systems::wall::structure_outline::structure_outline
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/structure_outline.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::wall::structure_outline::structure_outline
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/structure_outline.rs
   Extent: 3351 */

void pdb_140bc1130(undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,longlong param_7,byte *param_8,
                  undefined8 param_9,undefined8 *param_10,longlong *param_11,longlong *param_12,
                  longlong *param_13)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  code *pcVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  char cVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  byte *pbVar20;
  longlong *plVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  char *pcVar24;
  longlong lVar25;
  undefined8 *puVar26;
  undefined8 *unaff_RBX;
  ulonglong uVar27;
  undefined8 *puVar28;
  undefined *puVar29;
  longlong lVar30;
  ulonglong uVar31;
  undefined8 *puVar32;
  ushort uVar33;
  ulonglong uVar34;
  longlong lVar35;
  ulonglong uVar36;
  longlong lVar37;
  undefined8 *unaff_R14;
  longlong lVar38;
  bool bVar39;
  bool bVar40;
  bool bVar41;
  bool bVar42;
  byte bVar43;
  undefined4 uVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  char unaff_XMM10_Ba;
  char unaff_XMM10_Bb;
  char unaff_XMM10_Bc;
  char unaff_XMM10_Bd;
  char unaff_XMM10_Be;
  char unaff_XMM10_Bf;
  char unaff_XMM10_Bg;
  char unaff_XMM10_Bh;
  char unaff_XMM10_Bi;
  char unaff_XMM10_Bj;
  char unaff_XMM10_Bk;
  char unaff_XMM10_Bl;
  char unaff_XMM10_Bm;
  char unaff_XMM10_Bn;
  char unaff_XMM10_Bo;
  char unaff_XMM10_Bp;
  byte *pbStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  longlong lStack_168;
  longlong lStack_160;
  longlong lStack_158;
  undefined8 uStack_150;
  longlong *plStack_148;
  undefined8 uStack_140;
  longlong lStack_138;
  undefined8 *puStack_130;
  longlong lStack_128;
  byte *pbStack_120;
  longlong lStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_e8;
  undefined2 uStack_e4;
  int iStack_e0;
  int iStack_dc;
  undefined8 uStack_d8;
  longlong *plStack_d0;
  undefined8 uStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  byte *pbStack_b0;
  byte bStack_a2;
  char cStack_a1;
  undefined8 uStack_a0;
  
  uStack_a0 = 0xfffffffffffffffe;
  puVar23 = param_2;
  uStack_140 = param_4;
  lStack_138 = param_3;
  cVar16 = pdb_140e94b40();
  if (cVar16 == '\0') goto LAB_140bc1329;
  unaff_RBX = (undefined8 *)0x41;
  lVar18 = pdb_140bcda20(0x41);
  unaff_R14 = (undefined8 *)&UNK_143063e10;
  if (lVar18 != 1) goto LAB_140bc11f4;
  if (puVar23 < (undefined8 *)0x42) {
    uVar19 = pdb_140bcda20(puVar23);
    if ((uVar19 & 1) == 0) {
LAB_140bc11f4:
      puVar29 = &UNK_14306353b;
      do {
        bVar43 = puVar29[-1];
        uVar17 = (uint)(char)bVar43;
        if ((char)bVar43 < '\0') {
          bVar2 = puVar29[-2];
          if ((char)bVar2 < -0x40) {
            bVar3 = puVar29[-3];
            if ((char)bVar3 < -0x40) {
              pbVar20 = puVar29 + -4;
              puVar29 = puVar29 + -4;
              uVar17 = bVar3 & 0x3f | (*pbVar20 & 7) << 6;
            }
            else {
              puVar29 = puVar29 + -3;
              uVar17 = bVar3 & 0xf;
            }
            uVar17 = bVar2 & 0x3f | uVar17 << 6;
          }
          else {
            puVar29 = puVar29 + -2;
            uVar17 = bVar2 & 0x1f;
          }
          uVar17 = (uint)(bVar43 & 0x3f) | uVar17 << 6;
          if (uVar17 != 0x5c) goto LAB_140bc1284;
LAB_140bc129c:
          if ((undefined *)0x39 < puVar29 + -0x143063501) goto LAB_140bc1a9a;
          break;
        }
        puVar29 = puVar29 + -1;
        if (uVar17 == 0x5c) goto LAB_140bc129c;
LAB_140bc1284:
        if (uVar17 == 0x2f) goto LAB_140bc129c;
      } while (puVar29 != &UNK_143063502);
      pbVar20 = (byte *)pdb_140e97000();
      if (pbVar20[0x68] != 1) goto LAB_140bc1a51;
LAB_140bc12cd:
      if (*(longlong *)pbVar20 != 0) goto LAB_140bc1a45;
      pbVar20[0] = 0xff;
      pbVar20[1] = 0xff;
      pbVar20[2] = 0xff;
      pbVar20[3] = 0xff;
      pbVar20[4] = 0xff;
      pbVar20[5] = 0xff;
      pbVar20[6] = 0xff;
      pbVar20[7] = 0xff;
      pbStack_b0 = pbVar20;
      uStack_c8 = pdb_140e94f10(pbVar20 + 8,unaff_R14,unaff_RBX);
      *(longlong *)pbStack_b0 = *(longlong *)pbStack_b0 + 1;
LAB_140bc1329:
      uVar19 = *(ulonglong *)*param_13;
      lVar18 = 4;
      if (1 < uVar19) {
        lVar18 = uVar19 - 2;
      }
      if ((lVar18 == 0) || ((lVar18 == 9 && ((char)((ulonglong *)*param_13)[1] != '\x01')))) {
        cStack_a1 = cVar16;
        puVar8 = (ulonglong *)*param_2;
        lVar18 = param_2[1];
        uVar19 = *puVar8;
        uVar31 = 0;
        uVar27 = uVar19 - *(ulonglong *)(lVar18 + 0x18);
        if (uVar19 < *(ulonglong *)(lVar18 + 0x18)) {
          uVar27 = uVar31;
        }
        uVar34 = uVar19 - *(ulonglong *)(lVar18 + 0x38);
        if (uVar19 < *(ulonglong *)(lVar18 + 0x38)) {
          uVar34 = uVar31;
        }
        lVar37 = uVar27 * 0x18 + *(longlong *)(lVar18 + 8);
        uVar19 = *(ulonglong *)(lVar18 + 0x10);
        uVar36 = uVar19 - uVar27;
        if (uVar19 < uVar27) {
          uVar36 = uVar31;
        }
        if (uVar19 < uVar27) {
          lVar37 = 8;
        }
        lStack_c0 = uVar34 * 0x18 + *(longlong *)(lVar18 + 0x28);
        uVar19 = *(ulonglong *)(lVar18 + 0x30) - uVar34;
        if (*(ulonglong *)(lVar18 + 0x30) < uVar34) {
          lStack_c0 = 8;
          uVar19 = uVar31;
        }
        *puVar8 = (*(longlong *)(lVar18 + 0x40) - uVar19) - uVar36;
        uVar15 = _DAT_142e37adc;
        uVar7 = _DAT_142e37830;
        lStack_168 = lVar37 + uVar36 * 0x18;
        lStack_158 = lStack_c0 + uVar19 * 0x18;
        lStack_b8 = *param_11;
        uStack_150 = *param_10;
        iVar14 = -(uint)(CONCAT13(unaff_XMM10_Bd,
                                  CONCAT12(unaff_XMM10_Bc,CONCAT11(unaff_XMM10_Bb,unaff_XMM10_Ba)))
                        == CONCAT13(unaff_XMM10_Bd,
                                    CONCAT12(unaff_XMM10_Bc,CONCAT11(unaff_XMM10_Bb,unaff_XMM10_Ba))
                                   ));
        unaff_XMM10_Ba = (char)iVar14;
        unaff_XMM10_Bb = (char)((uint)iVar14 >> 8);
        unaff_XMM10_Bc = (char)((uint)iVar14 >> 0x10);
        unaff_XMM10_Bd = (char)((uint)iVar14 >> 0x18);
        iVar14 = -(uint)(CONCAT13(unaff_XMM10_Bh,
                                  CONCAT12(unaff_XMM10_Bg,CONCAT11(unaff_XMM10_Bf,unaff_XMM10_Be)))
                        == CONCAT13(unaff_XMM10_Bh,
                                    CONCAT12(unaff_XMM10_Bg,CONCAT11(unaff_XMM10_Bf,unaff_XMM10_Be))
                                   ));
        unaff_XMM10_Be = (char)iVar14;
        unaff_XMM10_Bf = (char)((uint)iVar14 >> 8);
        unaff_XMM10_Bg = (char)((uint)iVar14 >> 0x10);
        unaff_XMM10_Bh = (char)((uint)iVar14 >> 0x18);
        iVar14 = -(uint)(CONCAT13(unaff_XMM10_Bl,
                                  CONCAT12(unaff_XMM10_Bk,CONCAT11(unaff_XMM10_Bj,unaff_XMM10_Bi)))
                        == CONCAT13(unaff_XMM10_Bl,
                                    CONCAT12(unaff_XMM10_Bk,CONCAT11(unaff_XMM10_Bj,unaff_XMM10_Bi))
                                   ));
        unaff_XMM10_Bi = (char)iVar14;
        unaff_XMM10_Bj = (char)((uint)iVar14 >> 8);
        unaff_XMM10_Bk = (char)((uint)iVar14 >> 0x10);
        unaff_XMM10_Bl = (char)((uint)iVar14 >> 0x18);
        iVar14 = -(uint)(CONCAT13(unaff_XMM10_Bp,
                                  CONCAT12(unaff_XMM10_Bo,CONCAT11(unaff_XMM10_Bn,unaff_XMM10_Bm)))
                        == CONCAT13(unaff_XMM10_Bp,
                                    CONCAT12(unaff_XMM10_Bo,CONCAT11(unaff_XMM10_Bn,unaff_XMM10_Bm))
                                   ));
        unaff_XMM10_Bm = (char)iVar14;
        unaff_XMM10_Bn = (char)((uint)iVar14 >> 8);
        unaff_XMM10_Bo = (char)((uint)iVar14 >> 0x10);
        unaff_XMM10_Bp = (char)((uint)iVar14 >> 0x18);
        plStack_d0 = (longlong *)*param_12;
        plStack_148 = (longlong *)*param_12 + 4;
        puStack_130 = param_1;
LAB_140bc1497:
        do {
          lVar18 = lStack_c0;
          if ((lVar37 == 0) || (lVar37 == lStack_168)) {
            if ((lStack_c0 == 0) || (lStack_c0 == lStack_158)) goto LAB_140bc1868;
            lStack_c0 = lStack_c0 + 0x18;
            lVar30 = 0;
          }
          else {
            lVar30 = lVar37 + 0x18;
            lVar18 = lVar37;
          }
          *puVar8 = *puVar8 + 1;
          iVar14 = *(int *)(lVar18 + 8);
          iVar4 = *(int *)(lVar18 + 0xc);
          iStack_e0 = iVar14;
          iStack_dc = iVar4;
          bStack_a2 = *(byte *)(lVar18 + 0x10);
          iVar5 = *(int *)(&UNK_143063f08 + (ulonglong)bStack_a2 * 4);
          uVar44 = uVar7;
          lVar37 = lVar30;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(bStack_a2) {
          case 1:
            uVar44 = uVar15;
          default:
            uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar44);
            pbStack_180 = &bStack_a2;
            puStack_170 = param_5;
            puStack_178 = &uStack_d8;
            if (*(byte *)(lVar18 + 0x11) == 0) {
              lVar30 = *(longlong *)(lStack_b8 + 0x10) * 0x150;
              lVar18 = *(longlong *)(lStack_b8 + 8) + -0x150;
              do {
                lVar35 = lVar18;
                if (lVar30 == 0) goto LAB_140bc1497;
                lVar30 = lVar30 + -0x150;
                lVar18 = lVar35 + 0x150;
              } while ((iVar14 != *(int *)(lVar35 + 0x278)) || (iVar4 != *(int *)(lVar35 + 0x27c)));
              pdb_140bcbd20(&pbStack_180);
            }
            else {
              pdb_140a60320(&lStack_128,uStack_150,iVar14);
              lVar18 = *(longlong *)(lStack_b8 + 0x10);
              lStack_160 = lVar30;
              if (lVar18 != 0) {
                lVar37 = *(longlong *)(lStack_b8 + 8);
                pbStack_b0 = pbStack_120;
                lVar35 = lStack_118 << 2;
                lVar30 = lVar37;
code_r0x000140bc15b2:
                lVar38 = lVar30 + 0x150;
                lVar25 = 0;
                do {
                  if (lVar35 == lVar25) {
                    lVar25 = 0;
                    goto code_r0x000140bc1600;
                  }
                  pbVar20 = pbStack_b0 + lVar25;
                  lVar25 = lVar25 + 4;
                } while (*(int *)pbVar20 != *(int *)(lVar30 + 0x128));
                goto code_r0x000140bc15a0;
              }
code_r0x000140bc1680:
              lVar37 = lStack_160;
              if (lStack_128 != 0) {
                pub_1406abac0(pbStack_120,lStack_128 << 2,4);
                lVar37 = lStack_160;
              }
            }
            break;
          case 3:
            if (plStack_d0[3] != 0) {
              uVar19 = pdb_1400af680(plStack_148,&iStack_e0);
              lVar18 = *plStack_d0;
              bVar43 = (byte)(uVar19 >> 0x39);
              auVar45 = ZEXT216(CONCAT11(bVar43,bVar43));
              auVar45 = pshuflw(auVar45,auVar45,0);
              lVar30 = 0;
code_r0x000140bc16fb:
              uVar19 = uVar19 & plStack_d0[1];
              pcVar24 = (char *)(lVar18 + uVar19);
              auVar47[0] = -(*pcVar24 == auVar45[0]);
              auVar47[1] = -(pcVar24[1] == auVar45[1]);
              auVar47[2] = -(pcVar24[2] == auVar45[2]);
              auVar47[3] = -(pcVar24[3] == auVar45[3]);
              auVar47[4] = -(pcVar24[4] == auVar45[4]);
              auVar47[5] = -(pcVar24[5] == auVar45[5]);
              auVar47[6] = -(pcVar24[6] == auVar45[6]);
              auVar47[7] = -(pcVar24[7] == auVar45[7]);
              auVar47[8] = -(pcVar24[8] == auVar45[0]);
              auVar47[9] = -(pcVar24[9] == auVar45[1]);
              auVar47[10] = -(pcVar24[10] == auVar45[2]);
              auVar47[0xb] = -(pcVar24[0xb] == auVar45[3]);
              auVar47[0xc] = -(pcVar24[0xc] == auVar45[4]);
              auVar47[0xd] = -(pcVar24[0xd] == auVar45[5]);
              auVar47[0xe] = -(pcVar24[0xe] == auVar45[6]);
              auVar47[0xf] = -(pcVar24[0xf] == auVar45[7]);
              uVar33 = (ushort)(SUB161(auVar47 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar47 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar47 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar47 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar47 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar47 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar47 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar47 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar47 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar47 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar47 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar47 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar47[0xf] >> 7) << 0xf;
              uVar17 = (uint)uVar33;
              while( true ) {
                if (uVar33 == 0) goto code_r0x000140bc1750;
                uVar12 = 0;
                for (uVar13 = uVar17; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
                  uVar12 = uVar12 + 1;
                }
                lVar35 = (uVar12 + uVar19 & plStack_d0[1]) * -0x140;
                if ((iVar14 == *(int *)(lVar18 + -0x140 + lVar35)) &&
                   (iVar4 == *(int *)(lVar18 + -0x13c + lVar35))) break;
                uVar33 = (ushort)(uVar17 - 1) & (ushort)uVar17;
                uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar33);
              }
              lVar30 = *(longlong *)(lVar18 + lVar35 + -0x70);
              lVar18 = *(longlong *)(lVar18 + lVar35 + -0x68) * 0x20 + lVar30;
              for (; lVar30 != lVar18; lVar30 = lVar30 + 0x20) {
                uVar44 = *(undefined4 *)(lVar30 + 0x18);
                uVar6 = *(undefined4 *)(lVar30 + 0x1c);
                uStack_d8 = *(undefined8 *)(lVar30 + 8);
                pdb_14007ee60();
                pbStack_b0 = pub_1406abab0(0x18,4);
                if (pbStack_b0 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc7e11(4,0x18);
                }
                pdb_140df4540(&pbStack_180,&uStack_d8,uVar44);
                pdb_140df4540(&lStack_128,&uStack_d8,uVar6);
                *(undefined4 *)(pbStack_b0 + 8) = puStack_178._0_4_;
                *(byte **)pbStack_b0 = pbStack_180;
                *(undefined4 *)(pbStack_b0 + 0x14) = pbStack_120._0_4_;
                *(longlong *)(pbStack_b0 + 0xc) = lStack_128;
                lStack_128 = 2;
                pbStack_120 = pbStack_b0;
                lStack_118 = 2;
                puStack_110 = (undefined8 *)0x8000000000000000;
                uStack_f8 = CONCAT44(uStack_f8._4_4_,1);
                uStack_e8 = 0x40000000;
                uStack_e4 = 0x101;
                pdb_140ab2da0(&lStack_128,*param_5);
              }
            }
            break;
          case 4:
            uVar17 = *(byte *)(lVar18 + 0x11) + 0x1f003e0;
            pbVar20 = (byte *)(ulonglong)uVar17;
            bVar43 = *pbVar20;
            *pbVar20 = *pbVar20 + (byte)uVar17;
            lStack_128 = CONCAT71(lStack_128._1_7_,
                                  (char)lStack_128 + (char)(uVar17 >> 8) +
                                  CARRY1(bVar43,(byte)uVar17));
            LOCK();
            uVar17 = CONCAT31((int3)(uVar17 >> 8),pbStack_180._0_1_);
            UNLOCK();
            piVar1 = (int *)((longlong)&lStack_128 + (longlong)(&UNK_143063f08 + iVar5));
            *piVar1 = *piVar1 + (int)&lStack_158;
            pcVar24 = (char *)((ulonglong)uVar17 + (longlong)&lStack_158 * 2);
            *pcVar24 = *pcVar24 + (char)((ulonglong)(&UNK_143063f08 + iVar5) >> 8);
            UNK_143063f08 = UNK_143063f08 + (char)(uVar17 + 0x4782700 >> 8);
            bVar39 = SCARRY1(cRam0000000153b650ef,'\b');
            cRam0000000153b650ef = cRam0000000153b650ef + '\b';
            if (!bVar39) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            verw();
            UNK_143063f08 = UNK_143063f08 + (char)(uVar17 + 0x8f04e00 >> 8);
            bVar39 = SCARRY1(cRam0000000153b65113,'\b');
            cRam0000000153b65113 = cRam0000000153b65113 + '\b';
            if (!bVar39) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            verw();
            UNK_143063f08 = UNK_143063f08 + (char)(uVar17 + 0xd687500 >> 8);
            bVar39 = SCARRY1(cRam0000000153b65137,'\b');
            cRam0000000153b65137 = cRam0000000153b65137 + '\b';
            if (!bVar39) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            verw();
            uVar17 = uVar17 + 0x11e09c00;
            UNK_143063f08 = UNK_143063f08 + (char)(uVar17 >> 8);
            bVar39 = 0xf7 < bRam0000000153b6515b;
            bVar41 = SCARRY1(bRam0000000153b6515b,'\b');
            bRam0000000153b6515b = bRam0000000153b6515b + 8;
            if (bVar41) {
              pcVar24 = (char *)((ulonglong)&pbStack_180 & 0xffffffff);
              *(int *)((longlong)pcVar24 * 2) =
                   (*(int *)((longlong)pcVar24 * 2) - (int)&pbStack_180) - (uint)bVar39;
              *pcVar24 = *pcVar24 + (char)pcVar24;
              LOCK();
              cVar16 = *(char *)(ulonglong)uVar17;
              *(char *)(ulonglong)uVar17 = (char)pcVar24;
              pcVar24 = (char *)CONCAT71((int7)((ulonglong)pcVar24 >> 8),cVar16);
              UNLOCK();
              *pcVar24 = *pcVar24 + cVar16;
              *pcVar24 = *pcVar24 + cVar16;
              *pcVar24 = *pcVar24 + cVar16;
              *pcVar24 = *pcVar24 + cVar16;
              uVar7 = LocalDescriptorTableRegister();
              *(undefined4 *)pcVar24 = uVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case 5:
          case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        } while( true );
      }
      if (cVar16 == '\0') {
        return;
      }
      plVar21 = (longlong *)pdb_140e97000();
      if (((char)plVar21[0xd] == '\x01') ||
         (plVar21 = (longlong *)pdb_142d8ec20(plVar21,0), plVar21 != (longlong *)0x0)) {
        if (*plVar21 != 0) goto LAB_140bc1a45;
        *plVar21 = -1;
        pbStack_b0 = (byte *)plVar21;
        pdb_140e95370(plVar21 + 1,uStack_c8);
        goto LAB_140bc195d;
      }
      goto LAB_140bc1a8e;
    }
    if ((longlong)puVar23 + 2U < 0x42) {
      unaff_RBX = (undefined8 *)(0x3f - (longlong)puVar23);
      unaff_R14 = (undefined8 *)((longlong)puVar23 + 0x143063e12);
      goto LAB_140bc11f4;
    }
    goto LAB_140bc1add;
  }
  goto LAB_140bc1abd;
code_r0x000140bc1750:
  auVar46[0] = -(*pcVar24 == unaff_XMM10_Ba);
  auVar46[1] = -(pcVar24[1] == unaff_XMM10_Bb);
  auVar46[2] = -(pcVar24[2] == unaff_XMM10_Bc);
  auVar46[3] = -(pcVar24[3] == unaff_XMM10_Bd);
  auVar46[4] = -(pcVar24[4] == unaff_XMM10_Be);
  auVar46[5] = -(pcVar24[5] == unaff_XMM10_Bf);
  auVar46[6] = -(pcVar24[6] == unaff_XMM10_Bg);
  auVar46[7] = -(pcVar24[7] == unaff_XMM10_Bh);
  auVar46[8] = -(pcVar24[8] == unaff_XMM10_Bi);
  auVar46[9] = -(pcVar24[9] == unaff_XMM10_Bj);
  auVar46[10] = -(pcVar24[10] == unaff_XMM10_Bk);
  auVar46[0xb] = -(pcVar24[0xb] == unaff_XMM10_Bl);
  auVar46[0xc] = -(pcVar24[0xc] == unaff_XMM10_Bm);
  auVar46[0xd] = -(pcVar24[0xd] == unaff_XMM10_Bn);
  auVar46[0xe] = -(pcVar24[0xe] == unaff_XMM10_Bo);
  auVar46[0xf] = -(pcVar24[0xf] == unaff_XMM10_Bp);
  if ((((((((((((((((SUB161(auVar46 >> 7,0) & 1) != 0 || (SUB161(auVar46 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar46 >> 0x17,0) & 1) != 0) || (SUB161(auVar46 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar46 >> 0x27,0) & 1) != 0) || (SUB161(auVar46 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar46 >> 0x37,0) & 1) != 0) || (SUB161(auVar46 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar46 >> 0x47,0) & 1) != 0) || (SUB161(auVar46 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar46 >> 0x57,0) & 1) != 0) || (SUB161(auVar46 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar46 >> 0x67,0) & 1) != 0) || (SUB161(auVar46 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar46 >> 0x77,0) & 1) != 0) || auVar46[0xf] < '\0') goto LAB_140bc1497;
  uVar19 = uVar19 + lVar30 + 0x10;
  lVar30 = lVar30 + 0x10;
  goto code_r0x000140bc16fb;
  while (pbVar20 = pbStack_b0 + lVar25, lVar25 = lVar25 + 4,
        *(int *)pbVar20 != *(int *)(lVar30 + 300)) {
code_r0x000140bc1600:
    if (lVar35 == lVar25) goto code_r0x000140bc15a9;
  }
code_r0x000140bc15a0:
  pdb_140bcbd20();
code_r0x000140bc15a9:
  lVar30 = lVar38;
  if (lVar38 == lVar18 * 0x150 + lVar37) goto code_r0x000140bc1680;
  goto code_r0x000140bc15b2;
LAB_140bc1868:
  lStack_128 = lStack_138;
  pbStack_120 = param_8;
  lStack_118 = param_7;
  puStack_110 = param_5;
  uStack_108 = param_6;
  uStack_100 = uStack_140;
  uStack_f8 = param_9;
  lVar18 = puStack_130[1];
  uVar19 = *(ulonglong *)*puStack_130;
  unaff_RBX = (undefined8 *)0x0;
  puVar23 = (undefined8 *)(uVar19 - *(ulonglong *)(lVar18 + 0x18));
  if (uVar19 < *(ulonglong *)(lVar18 + 0x18)) {
    puVar23 = unaff_RBX;
  }
  puVar22 = (undefined8 *)(uVar19 - *(ulonglong *)(lVar18 + 0x38));
  if (uVar19 < *(ulonglong *)(lVar18 + 0x38)) {
    puVar22 = unaff_RBX;
  }
  puVar9 = *(undefined8 **)(lVar18 + 0x10);
  puVar10 = *(undefined8 **)(lVar18 + 0x30);
  bVar39 = puVar10 < puVar22;
  bVar41 = (undefined8 *)((longlong)puVar10 - (longlong)puVar22) == (undefined8 *)0x0;
  puVar26 = (undefined8 *)((longlong)puVar10 - (longlong)puVar22);
  if (bVar39) {
    puVar26 = unaff_RBX;
  }
  unaff_R14 = (undefined8 *)CONCAT71((int7)((ulonglong)puVar8 >> 8),bVar39 || bVar41);
  bVar40 = puVar9 < puVar23;
  bVar42 = (undefined8 *)((longlong)puVar9 - (longlong)puVar23) == (undefined8 *)0x0;
  puVar28 = (undefined8 *)((longlong)puVar9 - (longlong)puVar23);
  if (bVar40) {
    puVar28 = unaff_RBX;
  }
  param_2 = *(undefined8 **)(lVar18 + 8);
  cVar16 = bVar40 || bVar42;
  param_1 = (undefined8 *)((longlong)puVar26 + (longlong)puVar28);
  if (!bVar40 && !bVar42 || !bVar39 && !bVar41) {
    param_1 = unaff_RBX;
  }
  lVar37 = *(longlong *)(lVar18 + 0x28);
  *(ulonglong *)*puStack_130 = *(longlong *)(lVar18 + 0x40) - (longlong)param_1;
  if (!bVar40 && !bVar42 || !bVar39 && !bVar41) {
    param_2 = param_2 + (longlong)puVar23 * 5;
    if (puVar9 < puVar23) {
      param_2 = (undefined8 *)0x8;
    }
    puVar32 = (undefined8 *)0x0;
    if (puVar23 < puVar9) {
      puVar32 = param_2 + (longlong)puVar28 * 5 + -5;
    }
    lVar37 = lVar37 + (longlong)puVar22 * 0x28;
    if (puVar10 < puVar22) {
      lVar37 = 8;
    }
    param_2 = (undefined8 *)(lVar37 + -0x28 + (longlong)puVar26 * 0x28);
    if (puVar10 <= puVar22) {
      param_2 = puVar32;
    }
    puVar23 = (undefined8 *)param_2[1];
    unaff_RBX = puVar23 + param_2[2] * 2;
    while (puVar23 != unaff_RBX) {
      pdb_140bc1e50(&lStack_128,*puVar23,*(undefined1 *)((longlong)param_2 + 0x1c),
                    *(undefined4 *)(param_2 + 3));
      puVar23 = puVar23 + 2;
      unaff_R14 = puVar23;
    }
  }
  if (cStack_a1 != '\0') {
    plVar21 = (longlong *)pdb_140e97000();
    if (((char)plVar21[0xd] != '\x01') &&
       (plVar21 = (longlong *)pdb_142d8ec20(plVar21,0), plVar21 == (longlong *)0x0))
    goto LAB_140bc1a8e;
    if (*plVar21 != 0) {
LAB_140bc1a45:
      pbVar20 = (byte *)pdb_142dc8090(&UNK_143326a50);
LAB_140bc1a51:
      pbVar20 = (byte *)pdb_142d8ec20(pbVar20,0);
      if (pbVar20 == (byte *)0x0) goto LAB_140bc1a8e;
      goto LAB_140bc12cd;
    }
    *plVar21 = -1;
    pbStack_b0 = (byte *)plVar21;
    pdb_140e95370(plVar21 + 1,uStack_c8);
LAB_140bc195d:
    *(longlong *)pbStack_b0 = *(longlong *)pbStack_b0 + 1;
  }
  return;
LAB_140bc1a8e:
  pdb_142dc7890(&UNK_143326860);
LAB_140bc1a9a:
  pdb_142dc8070(&UNK_143063502,0x39);
LAB_140bc1abd:
  pdb_142dc8070(&UNK_143063e10,0x41,0);
LAB_140bc1add:
  pdb_142dc8070(&UNK_143063e10,0x41);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

