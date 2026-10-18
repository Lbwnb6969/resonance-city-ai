// VA 0x140923030, PDB extent 3673 bytes
// country_core::systems::wall::adjust_wall_height::signifier_animation::ui_adjust_wall_height_signifier_animation
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/adjust_wall_height/signifier_animation.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::adjust_wall_height::signifier_animation::ui_adjust_wall_height_signifier_animation
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/adjust_wall_height/signifier_animation.rs
   Extent: 3673 */

void pdb_140923030(longlong *param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4,
                  longlong *param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  byte ****ppppbVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong lVar22;
  ulonglong uVar23;
  byte *pbVar24;
  ulonglong uVar25;
  longlong lVar26;
  longlong lVar27;
  undefined8 uVar28;
  uint *puVar29;
  longlong lVar30;
  uint uVar31;
  ushort uVar32;
  uint *puVar33;
  byte ***pppbVar34;
  longlong lVar35;
  byte bVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
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
  float fVar43;
  byte ***pppbStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  longlong lStack_1f8;
  ulonglong uStack_1f0;
  longlong lStack_1e8;
  longlong lStack_1e0;
  longlong lStack_1d8;
  longlong lStack_1d0;
  byte ****ppppbStack_1c8;
  byte ***pppbStack_1c0;
  longlong lStack_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  longlong lStack_198;
  undefined4 uStack_184;
  longlong *plStack_180;
  longlong lStack_178;
  uint *puStack_170;
  byte ***pppbStack_168;
  byte ***pppbStack_160;
  byte ***pppbStack_158;
  longlong lStack_150;
  byte *pbStack_148;
  longlong lStack_140;
  longlong lStack_138;
  longlong lStack_128;
  longlong *plStack_120;
  longlong lStack_118;
  undefined4 *puStack_110;
  ulonglong uStack_108;
  longlong lStack_100;
  undefined4 uStack_f8;
  char cStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uVar19 = _DAT_143020e94;
  fVar18 = _DAT_14300d240;
  fVar17 = _DAT_142e3c678;
  fVar16 = _DAT_142e3b1d8;
  fVar15 = _DAT_142e37848;
  fVar14 = _DAT_142e36f50;
  fVar13 = _DAT_142e36f28;
  uStack_f0 = 0xfffffffffffffffe;
  lVar35 = *param_1;
  lVar2 = param_1[1];
  uStack_f8 = *(undefined4 *)((longlong)param_1 + 0x14);
  puVar29 = *(uint **)(lVar35 + 0xf8);
  puVar33 = puVar29 + *(longlong *)(lVar35 + 0x100);
  cStack_f2 = *(char *)(lVar35 + 0x108);
  lVar3 = *param_5;
  plStack_180 = (longlong *)*param_3;
  uStack_184 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar4 = *param_2;
  puVar5 = (undefined4 *)param_2[2];
  iVar9 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                           CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                 CONCAT13(unaff_XMM6_Bd,
                          CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
  iVar10 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                            CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                  CONCAT13(unaff_XMM6_Bh,
                           CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
  iVar11 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                            CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                  CONCAT13(unaff_XMM6_Bl,
                           CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
  iVar12 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                            CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                  CONCAT13(unaff_XMM6_Bp,
                           CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
  plVar21 = plStack_180 + 4;
  lStack_1e0 = 8;
  lStack_100 = 0;
  lStack_128 = 0;
  lStack_1f8 = 0;
  uStack_108 = 0;
  lVar30 = 0;
  uStack_1f0 = 0;
  lStack_1e8 = lVar3;
  puStack_170 = puVar33;
  if (cStack_f2 != '\0') goto LAB_140923300;
LAB_140923190:
  if ((int)uStack_1f0 != (int)lVar30) {
    uVar23 = uStack_1f0 & 0xffffffff;
    goto LAB_1409232e9;
  }
  if (puVar29 == puVar33) {
    return;
  }
  while( true ) {
    lVar30 = *(longlong *)(*(longlong *)(lVar2 + 0x100) + 0x58 + (ulonglong)*puVar29 * 0xa0);
    if (lVar30 != 0) break;
    puVar29 = puVar29 + 1;
    if (puVar29 == puVar33) {
      return;
    }
  }
  lVar22 = *(longlong *)(lVar2 + 0x100) + (ulonglong)*puVar29 * 0xa0;
  uVar25 = (ulonglong)*(uint *)(lVar22 + 0x94);
  lVar26 = *(longlong *)(lVar2 + 0x1a0);
  uVar23 = *(ulonglong *)(lVar26 + 0x40 + uVar25 * 0x48);
  lVar27 = *(longlong *)(lVar26 + 0x18 + uVar25 * 0x48);
  lVar26 = *(longlong *)(lVar26 + 0x38 + uVar25 * 0x48);
  if ((*(ulonglong *)(lVar35 + 0x118) < uVar23) &&
     (uVar25 = *(ulonglong *)(lVar26 + *(ulonglong *)(lVar35 + 0x118) * 8), uVar25 != 0)) {
    lStack_100 = *(longlong *)(lVar27 + 0x10 + ~uVar25 * 0x30);
    uVar25 = *(ulonglong *)(lVar35 + 0x120);
    if (uVar23 <= uVar25) goto LAB_140923270;
LAB_140923255:
    uVar23 = *(ulonglong *)(lVar26 + uVar25 * 8);
    if (uVar23 == 0) goto LAB_140923270;
    lStack_1f8 = *(longlong *)(lVar27 + 0x10 + ~uVar23 * 0x30);
  }
  else {
    lStack_100 = 0;
    uVar25 = *(ulonglong *)(lVar35 + 0x120);
    if (uVar25 < uVar23) goto LAB_140923255;
LAB_140923270:
    lStack_1f8 = 0;
  }
  uVar23 = *(ulonglong *)(lVar35 + 0x128);
  uStack_108 = 0;
  if (uVar23 < *(ulonglong *)(lVar22 + 0x88)) {
    uStack_108 = CONCAT71((int7)(uVar23 >> 8),
                          *(longlong *)(*(longlong *)(lVar22 + 0x80) + uVar23 * 8) != 0);
  }
  lVar26 = ~*(ulonglong *)(lVar26 + *(longlong *)(lVar35 + 0x110) * 8) * 0x30;
  lStack_128 = *(longlong *)(lVar27 + 0x10 + lVar26);
  lStack_178 = *(longlong *)(lVar27 + 0x28 + lVar26);
  puVar29 = puVar29 + 1;
  lStack_1e0 = *(longlong *)(lVar22 + 0x50);
  uVar23 = 0;
  uStack_1f0 = 0;
  puVar33 = puStack_170;
LAB_1409232e9:
  uVar23 = (ulonglong)~*(uint *)(lStack_1e0 + 8 + uVar23 * 0x10);
  do {
    plStack_120 = (longlong *)(uVar23 * 0x60 + lStack_128);
    puStack_110 = (undefined4 *)(lStack_178 + uVar23 * 4);
    lStack_118 = uVar23 * 0x1c + lStack_100;
    lStack_1d8 = uVar23 * 0x10 + lStack_1f8;
    if (*(char *)(lStack_1e8 + 0x18) != '\0') {
      pppbStack_1c0 = *(byte ****)(lVar3 + 0x34);
      lStack_1b8 = *(longlong *)(lVar3 + 0x3c);
      uStack_1a8 = (undefined4)((ulonglong)*(undefined8 *)(lVar3 + 0x48) >> 0x20);
      uStack_1a4 = (undefined4)*(undefined8 *)(lVar3 + 0x50);
      uStack_1a0 = (undefined4)((ulonglong)*(undefined8 *)(lVar3 + 0x50) >> 0x20);
      uStack_1b0 = (undefined4)*(undefined8 *)(lVar3 + 0x44);
      uStack_1ac = (undefined4)((ulonglong)*(undefined8 *)(lVar3 + 0x44) >> 0x20);
      if (*(int *)(lStack_1e8 + 0x28) != 2) {
        *puStack_110 = uStack_f8;
        *(undefined4 *)(plStack_120 + 9) = 1;
        *(ulonglong *)((longlong)plStack_120 + 0x4c) = CONCAT44(uStack_1a4,uStack_1a8);
        *(undefined4 *)((longlong)plStack_120 + 0x54) = uStack_1a0;
      }
    }
    uStack_1f0 = (ulonglong)((int)uStack_1f0 + 1);
    ppppbVar6 = (byte ****)plStack_120[0xb];
    if (plStack_180[3] != 0) {
      ppppbStack_1c8 = ppppbVar6;
      uVar23 = pdb_1400af0a0(plVar21,&ppppbStack_1c8);
      lVar26 = *plStack_180;
      bVar36 = (byte)(uVar23 >> 0x39);
      auVar37 = ZEXT216(CONCAT11(bVar36,bVar36));
      auVar37 = pshuflw(auVar37,auVar37,0);
      lVar27 = 0;
      do {
        uVar23 = uVar23 & plStack_180[1];
        auVar41 = *(undefined1 (*) [16])(lVar26 + uVar23);
        auVar40[0] = -(auVar41[0] == auVar37[0]);
        auVar40[1] = -(auVar41[1] == auVar37[1]);
        auVar40[2] = -(auVar41[2] == auVar37[2]);
        auVar40[3] = -(auVar41[3] == auVar37[3]);
        auVar40[4] = -(auVar41[4] == auVar37[4]);
        auVar40[5] = -(auVar41[5] == auVar37[5]);
        auVar40[6] = -(auVar41[6] == auVar37[6]);
        auVar40[7] = -(auVar41[7] == auVar37[7]);
        auVar40[8] = -(auVar41[8] == auVar37[0]);
        auVar40[9] = -(auVar41[9] == auVar37[1]);
        auVar40[10] = -(auVar41[10] == auVar37[2]);
        auVar40[0xb] = -(auVar41[0xb] == auVar37[3]);
        auVar40[0xc] = -(auVar41[0xc] == auVar37[4]);
        auVar40[0xd] = -(auVar41[0xd] == auVar37[5]);
        auVar40[0xe] = -(auVar41[0xe] == auVar37[6]);
        auVar40[0xf] = -(auVar41[0xf] == auVar37[7]);
        uVar32 = (ushort)(SUB161(auVar40 >> 7,0) & 1) | (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe | (ushort)(auVar40[0xf] >> 7) << 0xf
        ;
        uVar31 = (uint)uVar32;
        if (uVar32 != 0) {
LAB_14092353c:
          uVar7 = 0;
          for (uVar8 = uVar31; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar7 = uVar7 + 1;
          }
          lVar22 = (uVar7 + uVar23 & plStack_180[1]) * -0x2b0;
          if (ppppbVar6 != *(byte *****)(lVar26 + -0x2b0 + lVar22)) goto code_r0x00014092355b;
          lVar26 = lVar26 + lVar22;
          if ((*(ulonglong *)(lVar26 + -0x298) < 2) || (*(float *)(lVar26 + -0x278) <= 0.0))
          goto LAB_140923bc3;
          lVar27 = pdb_140b54cf0(plStack_180,plStack_120[0xb],param_4);
          if (lVar27 == 0) {
            fVar43 = 0.0;
          }
          else {
            uVar31 = uVar19;
            if (*(char *)(lVar27 + 0x3d) == '\0') {
              uVar31 = 0;
            }
            fVar43 = (float)(-(uint)(*(float *)(lVar27 + 0x30) <= fVar16) & uVar31);
          }
          pppbVar34 = *(byte ****)(lVar26 + -0x210);
          if (*(byte ****)(lVar26 + -0x1c0) < *(byte ****)(lVar26 + -0x210)) {
            pppbVar34 = *(byte ****)(lVar26 + -0x1c0);
          }
          if ((byte ***)0xaaaaaaaaaaaaaaa < pppbVar34) {
            uVar28 = 0;
LAB_140923bb8:
            pdb_142dc7e2a(uVar28,(longlong)pppbVar34 * 0xc);
LAB_140923bc3:
                    /* WARNING: Subroutine does not return */
            pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_1430210f8);
          }
          if (pppbVar34 == (byte ***)0x0) {
            pbVar24 = (byte *)0x4;
            goto LAB_1409237a5;
          }
          lVar27 = *(longlong *)(lVar26 + -0x218);
          lVar26 = *(longlong *)(lVar26 + -0x1c8);
          lStack_1d0 = lVar35;
          pdb_14007ee60();
          uVar28 = 4;
          pbVar24 = pub_1406abab0((longlong)pppbVar34 * 0xc,4);
          if (pbVar24 == (byte *)0x0) goto LAB_140923bb8;
          lVar35 = lStack_1d0;
          if (pppbVar34 == (byte ***)0x1) {
            uVar23 = 0;
            goto LAB_14092376f;
          }
          lVar22 = 5;
          uVar23 = 0;
          do {
            uVar1 = *(undefined4 *)(lVar27 + -0xc + lVar22 * 4);
            fVar39 = *(float *)(lVar26 + uVar23 * 4);
            *(undefined4 *)(pbVar24 + lVar22 * 4 + -0x14) =
                 *(undefined4 *)(lVar27 + -0x14 + lVar22 * 4);
            *(float *)(pbVar24 + lVar22 * 4 + -0x10) = fVar39 + fVar43;
            *(undefined4 *)(pbVar24 + lVar22 * 4 + -0xc) = uVar1;
            uVar1 = *(undefined4 *)(lVar27 + lVar22 * 4);
            fVar39 = *(float *)(lVar26 + 4 + uVar23 * 4);
            uVar23 = uVar23 + 2;
            *(undefined4 *)(pbVar24 + lVar22 * 4 + -8) = *(undefined4 *)(lVar27 + -8 + lVar22 * 4);
            *(float *)(pbVar24 + lVar22 * 4 + -4) = fVar39 + fVar43;
            *(undefined4 *)(pbVar24 + lVar22 * 4) = uVar1;
            lVar22 = lVar22 + 6;
          } while (((ulonglong)pppbVar34 & 0xffffffffffffffe) != uVar23);
          if (((ulonglong)pppbVar34 & 1) != 0) {
LAB_14092376f:
            lVar22 = uVar23 * 0xc;
            fVar39 = *(float *)(lVar26 + uVar23 * 4);
            uVar1 = *(undefined4 *)(lVar27 + 8 + lVar22);
            *(undefined4 *)(pbVar24 + lVar22) = *(undefined4 *)(lVar27 + lVar22);
            *(float *)(pbVar24 + lVar22 + 4) = fVar43 + fVar39;
            *(undefined4 *)(pbVar24 + lVar22 + 8) = uVar1;
          }
LAB_1409237a5:
          lVar26 = lStack_118;
          plVar20 = plStack_120;
          pppbStack_168 = pppbVar34;
          pppbStack_160 = (byte ***)pbVar24;
          pppbStack_158 = pppbVar34;
          pdb_1419aa3f0(&ppppbStack_1c8,&pppbStack_168);
          if (SBORROW8(0,(longlong)ppppbStack_1c8)) {
            pppbStack_168 = pppbStack_1c0;
            pppbStack_160 = (byte ***)lStack_1b8;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8170(&UNK_14335e278,0x2b,&pppbStack_168,&UNK_14335e258,&UNK_143021110);
          }
          lStack_138 = lStack_198;
          lStack_150 = CONCAT44(uStack_1ac,uStack_1b0);
          pbStack_148 = (byte *)CONCAT44(uStack_1a4,uStack_1a8);
          lStack_140 = CONCAT44(uStack_19c,uStack_1a0);
          pppbStack_158 = (byte ***)lStack_1b8;
          pppbStack_168 = (byte ***)ppppbStack_1c8;
          pppbStack_160 = pppbStack_1c0;
          *puStack_110 = uStack_f8;
          lVar27 = *plVar20;
          if (!SBORROW8(0,lVar27)) {
            if (lVar27 != 0) {
              pub_1406abac0((byte *)plVar20[1],lVar27 * 0xc,4);
            }
            if (plVar20[3] != 0) {
              pub_1406abac0((byte *)plVar20[4],plVar20[3] << 2,4);
            }
          }
          plVar20[6] = lStack_138;
          plVar20[4] = (longlong)pbStack_148;
          plVar20[5] = lStack_140;
          plVar20[2] = (longlong)pppbStack_158;
          plVar20[3] = lStack_150;
          *plVar20 = (longlong)pppbStack_168;
          plVar20[1] = (longlong)pppbStack_160;
          if ((char)plVar20[7] == '\0') {
            fVar43 = fVar14;
            if ((int)plVar20[9] == 1) {
              if (SBORROW8(0,*plVar20)) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc8150(&UNK_1430211b8);
              }
              fVar43 = (float)pdb_1419aa990(plVar20);
              fVar39 = 0.0;
              if (0.0 <= fVar43) {
                fVar39 = fVar43;
              }
              fVar43 = fVar13;
              if (fVar39 <= fVar13) {
                fVar43 = fVar39;
              }
            }
            *puStack_110 = uStack_f8;
            *(undefined4 *)(plVar20 + 7) = 1;
            *(float *)((longlong)plVar20 + 0x3c) = fVar43;
            auVar37 = ZEXT416((uint)*(float *)(lVar26 + 0x18));
            if (fVar17 < *(float *)(lVar26 + 0x18)) goto LAB_1409238fb;
LAB_14092393f:
            if ((char)plVar20[8] == '\0') {
              fVar43 = fVar14;
              if ((char)plVar20[7] != '\0') {
                fVar43 = *(float *)((longlong)plVar20 + 0x3c);
              }
            }
            else {
              fVar43 = *(float *)((longlong)plVar20 + 0x44);
            }
          }
          else {
            auVar37 = ZEXT416((uint)*(float *)(lVar26 + 0x18));
            if (*(float *)(lVar26 + 0x18) <= fVar17) goto LAB_14092393f;
LAB_1409238fb:
            if ((uStack_108 & 1) == 0) goto LAB_14092393f;
            if ((int)plVar20[9] == 1) {
              if (SBORROW8(0,*plVar20)) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc8150(&UNK_143021188);
              }
              fVar43 = (float)pdb_1419aa990(plVar20);
              fVar39 = 0.0;
              if (0.0 <= fVar43) {
                fVar39 = fVar43;
              }
              fVar43 = fVar13;
              if (fVar39 <= fVar13) {
                fVar43 = fVar39;
              }
            }
            else {
              fVar43 = *(float *)((longlong)plVar20 + 0x3c);
            }
            *puStack_110 = uStack_f8;
            *(undefined4 *)(plVar20 + 8) = 1;
            *(float *)((longlong)plVar20 + 0x44) = fVar43;
            auVar37 = ZEXT416(*(uint *)(lVar26 + 0x18));
          }
          fVar39 = 0.0;
          if (0.0 <= fVar43 + fVar18) {
            fVar39 = fVar43 + fVar18;
          }
          fVar42 = fVar13;
          if (fVar39 <= fVar13) {
            fVar42 = fVar39;
          }
          fVar39 = auVar37._0_4_;
          auVar37._0_4_ = fVar39 * 0.0 + fVar42 * (fVar13 - fVar39);
          pppbStack_168 = (byte ***)CONCAT44(pppbStack_168._4_4_,auVar37._0_4_);
          if ((auVar37._0_4_ < 0.0) || (fVar13 < auVar37._0_4_)) {
            ppppbStack_1c8 = &pppbStack_168;
            pppbStack_1c0 = (byte ***)pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_14335ec38,&ppppbStack_1c8,&UNK_143021128);
          }
          fVar42 = 0.0;
          if (0.0 <= fVar43 + fVar15) {
            fVar42 = fVar43 + fVar15;
          }
          fVar43 = fVar13;
          if (fVar42 <= fVar13) {
            fVar43 = fVar42;
          }
          auVar41._0_4_ = fVar39 + (fVar13 - fVar39) * fVar43;
          auVar41._4_12_ = auVar37._4_12_;
          pppbStack_168 = (byte ***)CONCAT44(pppbStack_168._4_4_,auVar41._0_4_);
          if ((auVar41._0_4_ < 0.0) || (fVar13 < auVar41._0_4_)) {
            ppppbStack_1c8 = &pppbStack_168;
            pppbStack_1c0 = (byte ***)pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_14335ec38,&ppppbStack_1c8,&UNK_143021140);
          }
          if (SBORROW8(0,*plVar20)) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_143021158);
          }
          pppbStack_210 = (byte ***)0x0;
          uStack_208 = 4;
          uStack_200 = 0;
          uStack_f1 = 1;
          pdb_1419a6a90(plVar20,auVar37._0_8_,auVar41._0_8_,&pppbStack_210);
          pppbStack_158 = (byte ***)uStack_200;
          pppbStack_168 = pppbStack_210;
          pppbStack_160 = (byte ***)uStack_208;
          uStack_f1 = 0;
          pdb_1419aa3f0(&ppppbStack_1c8,&pppbStack_168);
          pppbVar34 = pppbStack_1c0;
          if (SBORROW8(0,(longlong)ppppbStack_1c8)) {
            pppbStack_168 = pppbStack_1c0;
            pppbStack_160 = (byte ***)lStack_1b8;
            uStack_f1 = 0;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8170(&UNK_14335e278,0x2b,&pppbStack_168,&UNK_14335e258,&UNK_143021170);
          }
          lStack_138 = lStack_198;
          lStack_150 = CONCAT44(uStack_1ac,uStack_1b0);
          pbStack_148 = (byte *)CONCAT44(uStack_1a4,uStack_1a8);
          lStack_140 = CONCAT44(uStack_19c,uStack_1a0);
          pppbStack_158 = (byte ***)lStack_1b8;
          pppbStack_168 = (byte ***)ppppbStack_1c8;
          pppbStack_160 = pppbStack_1c0;
          *puVar5 = uStack_184;
          pdb_141740e10(pppbStack_1c0,(byte *)((longlong)pppbStack_1c0 + lStack_1b8 * 0xc),
                        lStack_1d8,uVar4);
          if ((byte ****)pppbStack_168 != (byte ****)0x0) {
            pub_1406abac0((byte *)pppbVar34,(longlong)pppbStack_168 * 0xc,4);
          }
          puVar33 = puStack_170;
          if (lStack_150 != 0) {
            pub_1406abac0(pbStack_148,lStack_150 << 2,4);
            puVar33 = puStack_170;
          }
          break;
        }
LAB_140923570:
        auVar38[0] = -(auVar41[0] == (char)iVar9);
        auVar38[1] = -(auVar41[1] == (char)((uint)iVar9 >> 8));
        auVar38[2] = -(auVar41[2] == (char)((uint)iVar9 >> 0x10));
        auVar38[3] = -(auVar41[3] == (char)((uint)iVar9 >> 0x18));
        auVar38[4] = -(auVar41[4] == (char)iVar10);
        auVar38[5] = -(auVar41[5] == (char)((uint)iVar10 >> 8));
        auVar38[6] = -(auVar41[6] == (char)((uint)iVar10 >> 0x10));
        auVar38[7] = -(auVar41[7] == (char)((uint)iVar10 >> 0x18));
        auVar38[8] = -(auVar41[8] == (char)iVar11);
        auVar38[9] = -(auVar41[9] == (char)((uint)iVar11 >> 8));
        auVar38[10] = -(auVar41[10] == (char)((uint)iVar11 >> 0x10));
        auVar38[0xb] = -(auVar41[0xb] == (char)((uint)iVar11 >> 0x18));
        auVar38[0xc] = -(auVar41[0xc] == (char)iVar12);
        auVar38[0xd] = -(auVar41[0xd] == (char)((uint)iVar12 >> 8));
        auVar38[0xe] = -(auVar41[0xe] == (char)((uint)iVar12 >> 0x10));
        auVar38[0xf] = -(auVar41[0xf] == (char)((uint)iVar12 >> 0x18));
        puVar33 = puStack_170;
        if ((((((((((((((((SUB161(auVar38 >> 7,0) & 1) != 0 || (SUB161(auVar38 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar38 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar38 >> 0x1f,0) & 1) != 0) || (SUB161(auVar38 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar38 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar38 >> 0x37,0) & 1) != 0) || (SUB161(auVar38 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar38 >> 0x47,0) & 1) != 0) || (SUB161(auVar38 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar38 >> 0x57,0) & 1) != 0) || (SUB161(auVar38 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar38 >> 0x67,0) & 1) != 0) || (SUB161(auVar38 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar38 >> 0x77,0) & 1) != 0) || auVar38[0xf] < '\0') break;
        uVar23 = uVar23 + lVar27 + 0x10;
        lVar27 = lVar27 + 0x10;
      } while( true );
    }
    if (cStack_f2 == '\0') goto LAB_140923190;
LAB_140923300:
    if ((int)uStack_1f0 == (int)lVar30) {
      if (puVar29 == puVar33) {
        return;
      }
      while( true ) {
        lVar30 = *(longlong *)(*(longlong *)(lVar2 + 0x1a0) + 0x10 + (ulonglong)*puVar29 * 0x48);
        if (lVar30 != 0) break;
        puVar29 = puVar29 + 1;
        if (puVar29 == puVar33) {
          return;
        }
      }
      lVar26 = *(longlong *)(lVar2 + 0x1a0) + (ulonglong)*puVar29 * 0x48;
      uVar23 = *(ulonglong *)(lVar26 + 0x40);
      lVar27 = *(longlong *)(lVar26 + 0x18);
      lVar26 = *(longlong *)(lVar26 + 0x38);
      if ((*(ulonglong *)(lVar35 + 0x118) < uVar23) &&
         (uVar25 = *(ulonglong *)(lVar26 + *(ulonglong *)(lVar35 + 0x118) * 8), uVar25 != 0)) {
        lStack_100 = *(longlong *)(lVar27 + 0x10 + ~uVar25 * 0x30);
        uVar25 = *(ulonglong *)(lVar35 + 0x120);
        if (uVar23 <= uVar25) goto LAB_1409233c2;
LAB_1409233a7:
        uVar25 = *(ulonglong *)(lVar26 + uVar25 * 8);
        if (uVar25 == 0) goto LAB_1409233c2;
        lStack_1f8 = *(longlong *)(lVar27 + 0x10 + ~uVar25 * 0x30);
      }
      else {
        lStack_100 = 0;
        uVar25 = *(ulonglong *)(lVar35 + 0x120);
        if (uVar25 < uVar23) goto LAB_1409233a7;
LAB_1409233c2:
        lStack_1f8 = 0;
      }
      uStack_108 = 0;
      if (*(ulonglong *)(lVar35 + 0x128) < uVar23) {
        uStack_108 = CONCAT71((int7)(uVar23 >> 8),
                              *(longlong *)(lVar26 + *(ulonglong *)(lVar35 + 0x128) * 8) != 0);
      }
      lVar26 = ~*(ulonglong *)(lVar26 + *(longlong *)(lVar35 + 0x110) * 8) * 0x30;
      lStack_128 = *(longlong *)(lVar27 + 0x10 + lVar26);
      lStack_178 = *(longlong *)(lVar27 + 0x28 + lVar26);
      puVar29 = puVar29 + 1;
      uStack_1f0 = 0;
    }
    uVar23 = uStack_1f0 & 0xffffffff;
  } while( true );
code_r0x00014092355b:
  uVar32 = (ushort)(uVar31 - 1) & (ushort)uVar31;
  uVar31 = CONCAT22((short)(uVar31 - 1 >> 0x10),uVar32);
  if (uVar32 == 0) goto LAB_140923570;
  goto LAB_14092353c;
}

