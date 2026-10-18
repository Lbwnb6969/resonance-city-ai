// VA 0x140813a30, PDB extent 1868 bytes
// system_wall_constructor::construct_floors::construct_floors
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_floors.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_wall_constructor::construct_floors::construct_floors
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_floors.rs
   Extent: 1868 */

void pdb_140813a30(longlong *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
                  undefined8 *param_5)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  char cVar26;
  undefined4 uVar27;
  longlong lVar28;
  undefined8 uVar29;
  ulonglong uVar30;
  ulonglong *puVar31;
  longlong lVar32;
  ulonglong uVar33;
  longlong *plVar34;
  longlong lVar35;
  longlong lVar36;
  ulonglong uVar37;
  longlong lVar38;
  uint uVar39;
  ulonglong uVar40;
  ushort uVar41;
  longlong lVar42;
  byte bVar43;
  float fVar44;
  undefined1 auVar45 [16];
  float fVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 unaff_XMM6_Ba;
  undefined1 unaff_XMM6_Bb;
  undefined1 unaff_XMM6_Bc;
  undefined1 unaff_XMM6_Bd;
  undefined1 unaff_XMM6_Be;
  undefined1 unaff_XMM6_Bf;
  undefined1 unaff_XMM6_Bg;
  undefined1 unaff_XMM6_Bh;
  undefined1 unaff_XMM6_Bi;
  undefined1 unaff_XMM6_Bj;
  undefined1 unaff_XMM6_Bk;
  undefined1 unaff_XMM6_Bl;
  undefined1 unaff_XMM6_Bm;
  undefined1 unaff_XMM6_Bn;
  undefined1 unaff_XMM6_Bo;
  undefined1 unaff_XMM6_Bp;
  longlong lStack_1b0;
  longlong lStack_1a8;
  undefined8 uStack_178;
  int iStack_170;
  float fStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 uStack_148;
  longlong lStack_140;
  longlong lStack_138;
  undefined4 uStack_130;
  float fStack_12c;
  undefined8 uStack_128;
  undefined4 uStack_120;
  ulonglong uStack_118;
  int iStack_110;
  float fStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  ulonglong *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  
  puVar31 = (ulonglong *)*param_3;
  lVar36 = param_3[1];
  uVar30 = *puVar31;
  uVar37 = 0;
  uVar33 = uVar30 - *(ulonglong *)(lVar36 + 0x18);
  if (uVar30 < *(ulonglong *)(lVar36 + 0x18)) {
    uVar33 = uVar37;
  }
  uVar40 = uVar30 - *(ulonglong *)(lVar36 + 0x38);
  if (uVar30 < *(ulonglong *)(lVar36 + 0x38)) {
    uVar40 = uVar37;
  }
  lVar28 = uVar33 * 0x10 + *(longlong *)(lVar36 + 8);
  uVar30 = *(ulonglong *)(lVar36 + 0x10) - uVar33;
  if (*(ulonglong *)(lVar36 + 0x10) < uVar33) {
    lVar28 = 8;
    uVar30 = uVar37;
  }
  lVar32 = uVar40 * 0x10 + *(longlong *)(lVar36 + 0x28);
  uVar33 = *(ulonglong *)(lVar36 + 0x30) - uVar40;
  if (*(ulonglong *)(lVar36 + 0x30) < uVar40) {
    lVar32 = 8;
    uVar33 = uVar37;
  }
  *puVar31 = (*(longlong *)(lVar36 + 0x40) - uVar33) - uVar30;
  lVar38 = uVar30 * 0x10 + lVar28;
  lVar36 = uVar33 * 0x10 + lVar32;
  lStack_140 = param_4 + 0x20;
  uVar4 = *param_5;
  plVar34 = (longlong *)param_5[1];
  uStack_148 = param_5[3];
  plVar5 = (longlong *)param_5[2];
  do {
    uVar24 = uStack_15c;
    uVar22 = uStack_160;
    uVar16 = uStack_164;
    uVar27 = uStack_168;
    fVar12 = fStack_16c;
    iVar8 = iStack_170;
    iStack_170 = (int)uVar4;
    iVar17 = iStack_170;
    fStack_16c = (float)((ulonglong)uVar4 >> 0x20);
    fVar19 = fStack_16c;
    uStack_168 = SUB84(plVar34,0);
    uVar20 = uStack_168;
    uStack_164 = (undefined4)((ulonglong)plVar34 >> 0x20);
    uVar21 = uStack_164;
    uStack_160 = SUB84(plVar5,0);
    uVar23 = uStack_160;
    uStack_15c = (undefined4)((ulonglong)plVar5 >> 0x20);
    uVar25 = uStack_15c;
    iStack_170 = iVar8;
    fStack_16c = fVar12;
    uStack_168 = uVar27;
    uStack_164 = uVar16;
    uStack_160 = uVar22;
    uStack_15c = uVar24;
    if ((lVar28 == 0) || (lVar28 == lVar38)) {
      if ((lVar32 == 0) || (lVar32 == lVar36)) {
        puStack_e8 = (ulonglong *)*param_2;
        lVar36 = param_2[1];
        uVar30 = *puStack_e8;
        uVar37 = 0;
        uVar33 = uVar30 - *(ulonglong *)(lVar36 + 0x18);
        if (uVar30 < *(ulonglong *)(lVar36 + 0x18)) {
          uVar33 = uVar37;
        }
        uVar40 = uVar30 - *(ulonglong *)(lVar36 + 0x38);
        if (uVar30 < *(ulonglong *)(lVar36 + 0x38)) {
          uVar40 = uVar37;
        }
        lStack_1b0 = uVar33 * 0x10 + *(longlong *)(lVar36 + 8);
        uVar30 = *(ulonglong *)(lVar36 + 0x10) - uVar33;
        if (*(ulonglong *)(lVar36 + 0x10) < uVar33) {
          lStack_1b0 = 8;
          uVar30 = uVar37;
        }
        lStack_1a8 = uVar40 * 0x10 + *(longlong *)(lVar36 + 0x28);
        uVar33 = *(ulonglong *)(lVar36 + 0x30) - uVar40;
        if (*(ulonglong *)(lVar36 + 0x30) < uVar40) {
          lStack_1a8 = 8;
          uVar33 = uVar37;
        }
        *puStack_e8 = (*(longlong *)(lVar36 + 0x40) - uVar33) - uVar30;
        fVar15 = _DAT_142e46a48;
        fVar14 = _DAT_142e3788c;
        fVar13 = _DAT_142e37834;
        fVar12 = _DAT_142e36f28;
        lVar28 = uVar30 * 0x10 + lStack_1b0;
        lVar36 = uVar33 * 0x10 + lStack_1a8;
        param_1 = (longlong *)*param_1;
        if (plVar34 == (longlong *)0x0) {
          plVar34 = plVar5;
        }
        iVar8 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                                 CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                       CONCAT13(unaff_XMM6_Bd,
                                CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
        iVar9 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                                 CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                       CONCAT13(unaff_XMM6_Bh,
                                CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
        iVar10 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                                  CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                        CONCAT13(unaff_XMM6_Bl,
                                 CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
        iVar11 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                                  CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                        CONCAT13(unaff_XMM6_Bp,
                                 CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
LAB_140813d03:
        if ((lStack_1b0 == 0) || (lStack_1b0 == lVar28)) {
          if ((lStack_1a8 == 0) || (lStack_1a8 == lVar36)) {
            return;
          }
          lStack_1b0 = 0;
          lVar32 = lStack_1a8;
          lStack_1a8 = lStack_1a8 + 0x10;
        }
        else {
          lVar32 = lStack_1b0;
          lStack_1b0 = lStack_1b0 + 0x10;
        }
        *puStack_e8 = *puStack_e8 + 1;
        lVar32 = *(longlong *)(lVar32 + 8);
        lStack_138 = lVar32;
        uVar29 = pdb_1400af0a0(lStack_140,&lStack_138);
        pdb_140ca9150(&uStack_178,param_4,uVar29,&lStack_138);
        uVar30 = 0;
        if (iStack_170 != 0) {
          uVar30 = CONCAT44(fStack_16c,iStack_170);
        }
        if (((int)uVar30 != 0) && (cVar26 = pdb_140ed63a0(uVar4,uVar30), cVar26 != '\0')) {
          uStack_158 = (undefined4)uStack_148;
          uStack_154 = (undefined4)((ulonglong)uStack_148 >> 0x20);
          uStack_178 = uVar30;
          iStack_170 = iVar17;
          fStack_16c = fVar19;
          uStack_168 = uVar20;
          uStack_164 = uVar21;
          uStack_160 = uVar23;
          uStack_15c = uVar25;
          pdb_140f04aa0(&uStack_178,&UNK_1430086d0);
        }
        if (param_1[3] != 0) {
          uVar30 = pdb_1400af0a0(param_1 + 4,&lStack_138);
          lVar38 = *param_1;
          bVar43 = (byte)(uVar30 >> 0x39);
          auVar45 = ZEXT216(CONCAT11(bVar43,bVar43));
          auVar45 = pshuflw(auVar45,auVar45,0);
          lVar35 = 0;
          while( true ) {
            uVar30 = uVar30 & param_1[1];
            auVar3 = *(undefined1 (*) [16])(lVar38 + uVar30);
            auVar48[0] = -(auVar3[0] == auVar45[0]);
            auVar48[1] = -(auVar3[1] == auVar45[1]);
            auVar48[2] = -(auVar3[2] == auVar45[2]);
            auVar48[3] = -(auVar3[3] == auVar45[3]);
            auVar48[4] = -(auVar3[4] == auVar45[4]);
            auVar48[5] = -(auVar3[5] == auVar45[5]);
            auVar48[6] = -(auVar3[6] == auVar45[6]);
            auVar48[7] = -(auVar3[7] == auVar45[7]);
            auVar48[8] = -(auVar3[8] == auVar45[0]);
            auVar48[9] = -(auVar3[9] == auVar45[1]);
            auVar48[10] = -(auVar3[10] == auVar45[2]);
            auVar48[0xb] = -(auVar3[0xb] == auVar45[3]);
            auVar48[0xc] = -(auVar3[0xc] == auVar45[4]);
            auVar48[0xd] = -(auVar3[0xd] == auVar45[5]);
            auVar48[0xe] = -(auVar3[0xe] == auVar45[6]);
            auVar48[0xf] = -(auVar3[0xf] == auVar45[7]);
            uVar41 = (ushort)(SUB161(auVar48 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar48 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar48 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar48 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar48 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar48 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar48 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar48 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar48 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar48 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar48 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar48 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar48 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar48 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar48 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar48[0xf] >> 7) << 0xf;
            uVar39 = (uint)uVar41;
            while (uVar41 != 0) {
              uVar6 = 0;
              for (uVar7 = uVar39; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                uVar6 = uVar6 + 1;
              }
              lVar42 = (uVar6 + uVar30 & param_1[1]) * -0x2b0;
              if (lVar32 == *(longlong *)(lVar38 + -0x2b0 + lVar42)) {
                lVar38 = lVar38 + lVar42;
                if ((0.0 < *(float *)(lVar38 + -0x24)) && (*(uint *)(lVar38 + -0x50) < 2)) {
                  puVar31 = (ulonglong *)pdb_14092f900(lVar38 + -0x2a8);
                  uStack_118 = *puVar31;
                  fVar46 = *(float *)((longlong)puVar31 + 0xc);
                  uStack_108 = (undefined4)puVar31[2];
                  uStack_104 = *(undefined4 *)((longlong)puVar31 + 0x14);
                  uStack_100 = (undefined4)puVar31[3];
                  iStack_110 = (int)puVar31[1];
                  fStack_10c = fVar46;
                  cVar26 = pdb_1408ff980(lVar38 + -9);
                  uVar30 = 0;
                  if ((uStack_118 & 1) == 0) {
                    fVar46 = fVar14;
                    if (cVar26 == '\0') {
                      fVar46 = 0.0;
                    }
                    fVar44 = fStack_10c;
                    if (fStack_10c <= fVar12) {
                      fVar44 = fVar12;
                    }
                    fVar44 = (float)pub_142e32ab0(fVar44 * fVar14 + fVar46);
                    fVar46 = fVar12;
                    if (fVar12 <= fVar44) {
                      fVar46 = fVar44;
                    }
                    fVar44 = fVar13;
                    if (fVar46 <= fVar13) {
                      fVar44 = fVar46;
                    }
                    uVar30 = (longlong)fVar44 & 0xffffffff;
                    if (fVar44 < 0.0) {
                      uVar30 = 0;
                    }
                    if (fVar15 < fVar44) {
                      uVar30 = 0xffffffff;
                    }
                  }
                  uVar27 = pdb_1409012c0(uVar30);
                  pdb_1408fd550(&uStack_c8,uVar27);
                  uStack_130 = pdb_140a85110(&uStack_118);
                  fStack_12c = fVar46;
                  pdb_140df4540(&uStack_f8,&uStack_130,*(undefined4 *)(lVar38 + -0x24));
                  pdb_140df4940(&uStack_178);
                  fVar46 = fStack_16c;
                  iVar18 = iStack_170;
                  uVar27 = (undefined4)uStack_178;
                  uVar16 = uStack_178._4_4_;
                  uStack_128 = CONCAT44(uStack_158,uStack_15c);
                  uStack_120 = uStack_154;
                  pdb_14007ee60();
                  uStack_168 = uStack_108;
                  uStack_164 = uStack_104;
                  uStack_160 = uStack_100;
                  uStack_178 = uStack_118;
                  iStack_170 = iStack_110;
                  fStack_16c = fStack_10c;
                  uStack_d8 = uStack_c8;
                  uStack_d0 = uStack_c0;
                  uVar29 = pdb_140ed5970(uVar4);
                  lVar38 = plVar34[2];
                  if ((ulonglong)(*plVar34 - lVar38) < 0x98) {
                    pdb_142d7f1b0(plVar34,lVar38,0x98,1,1);
                  }
                  lVar35 = plVar34[1];
                  *(code **)(lVar35 + lVar38) = pdb_1414140f0;
                  puVar1 = (undefined4 *)(lVar35 + 8 + lVar38);
                  *puVar1 = uVar27;
                  puVar1[1] = uVar16;
                  puVar1[2] = iVar18;
                  puVar1[3] = fVar46;
                  *(undefined4 *)(lVar35 + 0x20 + lVar38) = uStack_f0;
                  *(undefined8 *)(lVar35 + 0x18 + lVar38) = uStack_f8;
                  *(undefined8 *)(lVar35 + 0x24 + lVar38) = uStack_128;
                  *(undefined4 *)(lVar35 + 0x2c + lVar38) = uStack_120;
                  *(undefined8 *)(lVar35 + 0x40 + lVar38) = uStack_d0;
                  puVar2 = (undefined8 *)(lVar35 + 0x30 + lVar38);
                  *puVar2 = uStack_e0;
                  puVar2[1] = uStack_d8;
                  *(undefined1 *)(lVar35 + 0x48 + lVar38) = 7;
                  *(longlong *)(lVar35 + 0x58 + lVar38) = lVar32;
                  puVar31 = (ulonglong *)(lVar35 + 0x60 + lVar38);
                  *puVar31 = uStack_178;
                  puVar31[1] = CONCAT44(fStack_16c,iStack_170);
                  puVar2 = (undefined8 *)(lVar35 + 0x6c + lVar38);
                  *puVar2 = CONCAT44(uStack_168,fStack_16c);
                  puVar2[1] = CONCAT44(uStack_160,uStack_164);
                  *(undefined8 *)(lVar35 + 0x88 + lVar38) = uVar29;
                  plVar34[2] = lVar38 + 0x98;
                  pdb_141409100(param_4,lVar32,uVar29);
                }
                goto LAB_140813d03;
              }
              uVar41 = (ushort)(uVar39 - 1) & (ushort)uVar39;
              uVar39 = CONCAT22((short)(uVar39 - 1 >> 0x10),uVar41);
            }
            auVar47[0] = -(auVar3[0] == (char)iVar8);
            auVar47[1] = -(auVar3[1] == (char)((uint)iVar8 >> 8));
            auVar47[2] = -(auVar3[2] == (char)((uint)iVar8 >> 0x10));
            auVar47[3] = -(auVar3[3] == (char)((uint)iVar8 >> 0x18));
            auVar47[4] = -(auVar3[4] == (char)iVar9);
            auVar47[5] = -(auVar3[5] == (char)((uint)iVar9 >> 8));
            auVar47[6] = -(auVar3[6] == (char)((uint)iVar9 >> 0x10));
            auVar47[7] = -(auVar3[7] == (char)((uint)iVar9 >> 0x18));
            auVar47[8] = -(auVar3[8] == (char)iVar10);
            auVar47[9] = -(auVar3[9] == (char)((uint)iVar10 >> 8));
            auVar47[10] = -(auVar3[10] == (char)((uint)iVar10 >> 0x10));
            auVar47[0xb] = -(auVar3[0xb] == (char)((uint)iVar10 >> 0x18));
            auVar47[0xc] = -(auVar3[0xc] == (char)iVar11);
            auVar47[0xd] = -(auVar3[0xd] == (char)((uint)iVar11 >> 8));
            auVar47[0xe] = -(auVar3[0xe] == (char)((uint)iVar11 >> 0x10));
            auVar47[0xf] = -(auVar3[0xf] == (char)((uint)iVar11 >> 0x18));
            if ((((((((((((((((SUB161(auVar47 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar47 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar47 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar47 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar47 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar47 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar47 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar47 >> 0x3f,0) & 1) != 0) || (SUB161(auVar47 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar47 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar47 >> 0x57,0) & 1) != 0) || (SUB161(auVar47 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar47 >> 0x67,0) & 1) != 0) || (SUB161(auVar47 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar47 >> 0x77,0) & 1) != 0) || auVar47[0xf] < '\0') break;
            uVar30 = uVar30 + lVar35 + 0x10;
            lVar35 = lVar35 + 0x10;
          }
        }
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_1430086e8);
      }
      lVar28 = 0;
      lVar35 = lVar32;
      lVar32 = lVar32 + 0x10;
    }
    else {
      lVar35 = lVar28;
      lVar28 = lVar28 + 0x10;
    }
    *puVar31 = *puVar31 + 1;
    uStack_e0 = *(undefined8 *)(lVar35 + 8);
    uVar29 = pdb_1400af0a0(lStack_140,&uStack_e0);
    pdb_140ca9150(&uStack_178,param_4,uVar29,&uStack_e0);
    uVar30 = 0;
    if (iStack_170 != 0) {
      uVar30 = CONCAT44(fStack_16c,iStack_170);
    }
    if (((int)uVar30 != 0) && (cVar26 = pdb_140ed63a0(uVar4,uVar30), cVar26 != '\0')) {
      uStack_158 = (undefined4)uStack_148;
      uStack_154 = (undefined4)((ulonglong)uStack_148 >> 0x20);
      uStack_178 = uVar30;
      iStack_170 = iVar17;
      fStack_16c = fVar19;
      uStack_168 = uVar20;
      uStack_164 = uVar21;
      uStack_160 = uVar23;
      uStack_15c = uVar25;
      pdb_140f04aa0(&uStack_178,&UNK_143008700);
    }
  } while( true );
}

