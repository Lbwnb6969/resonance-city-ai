// VA 0x140a04be0, PDB extent 4593 bytes
// country_core::systems::ui_raise_shape::impl_raise_shape
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_raise_shape.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::ui_raise_shape::impl_raise_shape
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_raise_shape.rs
   Extent: 4593 */

void pdb_140a04be0(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6,longlong *param_7,undefined8 *param_8,
                  undefined8 param_9,undefined8 *param_10,undefined8 *param_11,undefined8 *param_12,
                  longlong *param_13,longlong *param_14)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  longlong *plVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  longlong *plVar25;
  longlong *plVar26;
  longlong lVar27;
  uint uVar28;
  ulonglong *puVar29;
  ushort uVar30;
  longlong lVar31;
  longlong *plVar32;
  longlong *plVar33;
  undefined1 uVar34;
  longlong *plVar35;
  byte bVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar49;
  undefined1 unaff_XMM9_Ba;
  char cVar50;
  undefined1 unaff_XMM9_Bb;
  char cVar51;
  undefined1 unaff_XMM9_Bc;
  char cVar52;
  undefined1 unaff_XMM9_Bd;
  char cVar53;
  undefined1 unaff_XMM9_Be;
  char cVar54;
  undefined1 unaff_XMM9_Bf;
  char cVar55;
  undefined1 unaff_XMM9_Bg;
  char cVar56;
  undefined1 unaff_XMM9_Bh;
  char cVar57;
  undefined1 unaff_XMM9_Bi;
  char cVar58;
  undefined1 unaff_XMM9_Bj;
  char cVar59;
  undefined1 unaff_XMM9_Bk;
  char cVar60;
  undefined1 unaff_XMM9_Bl;
  char cVar61;
  undefined1 unaff_XMM9_Bm;
  char cVar62;
  undefined1 unaff_XMM9_Bn;
  char cVar63;
  undefined1 unaff_XMM9_Bo;
  char cVar64;
  undefined1 unaff_XMM9_Bp;
  char cVar65;
  undefined8 *puVar66;
  undefined8 **ppuVar67;
  undefined8 uStack_388;
  uint uStack_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined8 uStack_370;
  undefined *puStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined *puStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined *puStack_338;
  undefined8 **ppuStack_330;
  undefined4 *puStack_280;
  longlong lStack_278;
  undefined4 *puStack_270;
  undefined8 uStack_268;
  longlong lStack_260;
  undefined4 *puStack_258;
  longlong lStack_250;
  undefined4 *puStack_248;
  uint *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  longlong lStack_228;
  longlong lStack_220;
  undefined4 *puStack_218;
  longlong lStack_210;
  undefined4 *puStack_208;
  longlong lStack_200;
  longlong *plStack_1f8;
  undefined4 *puStack_1f0;
  longlong lStack_1e8;
  longlong lStack_1e0;
  longlong *plStack_1d8;
  longlong lStack_1d0;
  longlong lStack_1c8;
  longlong *plStack_1c0;
  longlong lStack_1b8;
  longlong lStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 uStack_170;
  undefined8 uStack_168;
  longlong lStack_160;
  longlong *plStack_158;
  longlong *plStack_150;
  undefined8 *puStack_148;
  uint uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  longlong *plStack_120;
  longlong lStack_118;
  undefined8 *puStack_110;
  longlong *plStack_108;
  ulonglong *puStack_100;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  lStack_1c8 = *param_4;
  puVar29 = (ulonglong *)*param_2;
  lVar5 = param_2[1];
  uVar18 = *puVar29;
  uVar22 = 0;
  uVar17 = uVar18 - *(ulonglong *)(lVar5 + 0x18);
  if (uVar18 < *(ulonglong *)(lVar5 + 0x18)) {
    uVar17 = uVar22;
  }
  uVar23 = uVar18 - *(ulonglong *)(lVar5 + 0x38);
  if (uVar18 < *(ulonglong *)(lVar5 + 0x38)) {
    uVar23 = uVar22;
  }
  plVar33 = (longlong *)(uVar17 * 0x18 + *(longlong *)(lVar5 + 8));
  uVar18 = *(ulonglong *)(lVar5 + 0x10) - uVar17;
  if (*(ulonglong *)(lVar5 + 0x10) < uVar17) {
    plVar33 = (longlong *)0x8;
    uVar18 = uVar22;
  }
  plVar25 = (longlong *)(uVar23 * 0x18 + *(longlong *)(lVar5 + 0x28));
  lStack_250 = param_4[4];
  uVar17 = *(ulonglong *)(lVar5 + 0x30) - uVar23;
  if (*(ulonglong *)(lVar5 + 0x30) < uVar23) {
    plVar25 = (longlong *)0x8;
    uVar17 = uVar22;
  }
  puStack_248 = (undefined4 *)param_4[6];
  uStack_180 = *(undefined4 *)((longlong)param_4 + 0x3c);
  lStack_278 = param_4[8];
  puStack_280 = (undefined4 *)param_4[10];
  uStack_18c = *(undefined4 *)((longlong)param_4 + 0x5c);
  lStack_1b8 = param_3[4];
  puStack_208 = (undefined4 *)param_3[6];
  uStack_178 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *puVar29 = (*(longlong *)(lVar5 + 0x40) - uVar17) - uVar18;
  puVar13 = _DAT_143008720;
  fVar12 = _DAT_142f3e554;
  fVar11 = _DAT_142e36f28;
  plStack_120 = plVar33 + uVar18 * 3;
  plStack_158 = plVar25 + uVar17 * 3;
  lVar5 = *param_1;
  puStack_240 = (uint *)*param_12;
  uStack_238 = *param_10;
  uStack_230 = *param_11;
  plStack_150 = (longlong *)*param_6;
  plStack_108 = (longlong *)*param_7;
  puStack_218 = (undefined4 *)param_7[2];
  uStack_17c = *(undefined4 *)((longlong)param_7 + 0x1c);
  uStack_268 = *param_8;
  uStack_188 = *(undefined4 *)((longlong)param_13 + 0x1c);
  lStack_1d0 = *param_13;
  puStack_270 = (undefined4 *)param_13[2];
  uStack_174 = *(undefined4 *)((longlong)param_14 + 0x1c);
  lStack_1b0 = *param_14;
  puStack_1f0 = (undefined4 *)param_14[2];
  uStack_184 = *(undefined4 *)((longlong)param_3 + 0x1c);
  lStack_260 = *param_3;
  puStack_258 = (undefined4 *)param_3[2];
  iVar9 = -(uint)(CONCAT13(unaff_XMM9_Bd,
                           CONCAT12(unaff_XMM9_Bc,CONCAT11(unaff_XMM9_Bb,unaff_XMM9_Ba))) ==
                 CONCAT13(unaff_XMM9_Bd,
                          CONCAT12(unaff_XMM9_Bc,CONCAT11(unaff_XMM9_Bb,unaff_XMM9_Ba))));
  cVar50 = (char)iVar9;
  cVar51 = (char)((uint)iVar9 >> 8);
  cVar52 = (char)((uint)iVar9 >> 0x10);
  cVar53 = (char)((uint)iVar9 >> 0x18);
  iVar9 = -(uint)(CONCAT13(unaff_XMM9_Bh,
                           CONCAT12(unaff_XMM9_Bg,CONCAT11(unaff_XMM9_Bf,unaff_XMM9_Be))) ==
                 CONCAT13(unaff_XMM9_Bh,
                          CONCAT12(unaff_XMM9_Bg,CONCAT11(unaff_XMM9_Bf,unaff_XMM9_Be))));
  cVar54 = (char)iVar9;
  cVar55 = (char)((uint)iVar9 >> 8);
  cVar56 = (char)((uint)iVar9 >> 0x10);
  cVar57 = (char)((uint)iVar9 >> 0x18);
  iVar9 = -(uint)(CONCAT13(unaff_XMM9_Bl,
                           CONCAT12(unaff_XMM9_Bk,CONCAT11(unaff_XMM9_Bj,unaff_XMM9_Bi))) ==
                 CONCAT13(unaff_XMM9_Bl,
                          CONCAT12(unaff_XMM9_Bk,CONCAT11(unaff_XMM9_Bj,unaff_XMM9_Bi))));
  cVar58 = (char)iVar9;
  cVar59 = (char)((uint)iVar9 >> 8);
  cVar60 = (char)((uint)iVar9 >> 0x10);
  cVar61 = (char)((uint)iVar9 >> 0x18);
  iVar9 = -(uint)(CONCAT13(unaff_XMM9_Bp,
                           CONCAT12(unaff_XMM9_Bo,CONCAT11(unaff_XMM9_Bn,unaff_XMM9_Bm))) ==
                 CONCAT13(unaff_XMM9_Bp,
                          CONCAT12(unaff_XMM9_Bo,CONCAT11(unaff_XMM9_Bn,unaff_XMM9_Bm))));
  cVar62 = (char)iVar9;
  cVar63 = (char)((uint)iVar9 >> 8);
  cVar64 = (char)((uint)iVar9 >> 0x10);
  cVar65 = (char)((uint)iVar9 >> 0x18);
  plStack_1d8 = plStack_108 + 4;
  lStack_210 = lStack_1d0 + 0x20;
  lStack_1e0 = lStack_1b0 + 0x20;
  plStack_1f8 = plStack_108 + 0xc;
  lStack_228 = lStack_250 + 0x30;
  lStack_220 = lStack_1c8 + 0x90;
  plStack_1c0 = plStack_150 + 4;
  lStack_200 = lStack_260 + 0x20;
  lStack_1e8 = lStack_1b8 + 0x20;
  plVar32 = plStack_120;
  plVar35 = plStack_158;
  puStack_100 = puVar29;
LAB_140a04ee0:
  do {
    plVar16 = plVar33;
    uVar1 = uStack_180;
    lVar27 = lStack_1c8;
    puVar15 = puStack_248;
    lVar21 = lStack_250;
    uVar4 = uStack_37c;
    uVar28 = uStack_380;
    puVar66 = &uStack_388;
    if ((plVar16 == (longlong *)0x0) || (plVar16 == plVar32)) goto LAB_140a04f00;
    plVar33 = plVar16 + 3;
    *puVar29 = *puVar29 + 1;
  } while (*(char *)(lVar5 + 0x18) != '\x02');
  goto LAB_140a04f28;
LAB_140a04f00:
  if ((plVar25 == (longlong *)0x0) || (plVar25 == plVar35)) {
    return;
  }
  plVar26 = plVar25 + 3;
  plVar33 = (longlong *)0x0;
  *puVar29 = *puVar29 + 1;
  plVar16 = plVar25;
  plVar25 = plVar26;
  if (*(char *)(lVar5 + 0x18) == '\x02') {
LAB_140a04f28:
    lVar31 = *plVar16;
    puVar24 = (undefined8 *)plVar16[1];
    if (*(longlong *)(lVar5 + 0x38) == lVar31) {
      bVar36 = *(byte *)(lVar5 + 0x19);
      uStack_380 = (uint)puVar24;
      uVar6 = uStack_380;
      uStack_37c = (undefined4)((ulonglong)puVar24 >> 0x20);
      uVar14 = uStack_37c;
      if (bVar36 < 2) {
        uStack_170 = 0;
        uStack_168 = 8;
        lStack_160 = 0;
        uVar1 = *(undefined4 *)((longlong)param_5 + 0xc);
        uStack_388 = puVar24;
        uStack_380 = uVar28;
        uStack_37c = uVar4;
        lStack_118 = lVar31;
        if (plStack_108[3] != 0) {
          uStack_f1 = 1;
          uVar18 = pdb_1400af0a0(plStack_1d8);
          lVar21 = *plStack_108;
          bVar36 = (byte)(uVar18 >> 0x39);
          auVar39 = ZEXT216(CONCAT11(bVar36,bVar36));
          auVar39 = pshuflw(auVar39,auVar39,0);
          lVar27 = 0;
          while( true ) {
            uVar18 = uVar18 & plStack_108[1];
            auVar48 = *(undefined1 (*) [16])(lVar21 + uVar18);
            auVar45[0] = -(auVar48[0] == auVar39[0]);
            auVar45[1] = -(auVar48[1] == auVar39[1]);
            auVar45[2] = -(auVar48[2] == auVar39[2]);
            auVar45[3] = -(auVar48[3] == auVar39[3]);
            auVar45[4] = -(auVar48[4] == auVar39[4]);
            auVar45[5] = -(auVar48[5] == auVar39[5]);
            auVar45[6] = -(auVar48[6] == auVar39[6]);
            auVar45[7] = -(auVar48[7] == auVar39[7]);
            auVar45[8] = -(auVar48[8] == auVar39[0]);
            auVar45[9] = -(auVar48[9] == auVar39[1]);
            auVar45[10] = -(auVar48[10] == auVar39[2]);
            auVar45[0xb] = -(auVar48[0xb] == auVar39[3]);
            auVar45[0xc] = -(auVar48[0xc] == auVar39[4]);
            auVar45[0xd] = -(auVar48[0xd] == auVar39[5]);
            auVar45[0xe] = -(auVar48[0xe] == auVar39[6]);
            auVar45[0xf] = -(auVar48[0xf] == auVar39[7]);
            uVar30 = (ushort)(SUB161(auVar45 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar45 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar45 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar45 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar45 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar45 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar45 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar45 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar45 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar45 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar45 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar45 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar45 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar45 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar45[0xf] >> 7) << 0xf;
            uVar28 = (uint)uVar30;
            while (uVar30 != 0) {
              uVar7 = 0;
              for (uVar8 = uVar28; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
                uVar7 = uVar7 + 1;
              }
              lVar31 = (uVar7 + uVar18 & plStack_108[1]) * -0x78;
              if (puVar24 == *(undefined8 **)(lVar21 + -0x78 + lVar31)) {
                uStack_374 = *(undefined4 *)(lVar21 + lVar31 + -0x18);
                uStack_388 = (undefined8 *)0x8000000000000005;
                uStack_f1 = 1;
                uStack_380 = uVar6;
                uStack_37c = uVar14;
                uStack_378 = uVar1;
                pdb_140a1aa80(&uStack_170,&uStack_388);
                *puStack_280 = uStack_18c;
                uStack_388 = (undefined8 *)uStack_168;
                puStack_148 = (undefined8 *)0x0;
                uStack_140 = 8;
                uStack_13c = 0;
                uStack_138 = 0;
                uStack_134 = 0;
                uStack_370 = uStack_168 + lStack_160 * 0x18;
                uStack_380 = (uint)uStack_168;
                uStack_37c = (undefined4)((ulonglong)uStack_168 >> 0x20);
                uStack_378 = (undefined4)uStack_170;
                uStack_374 = (undefined4)((ulonglong)uStack_170 >> 0x20);
                lVar21 = uStack_168;
                uVar19 = pdb_140c69b60(&uStack_388);
                uStack_380 = (uint)uVar19;
                uStack_37c = (undefined4)((ulonglong)uVar19 >> 0x20);
                uStack_378 = (undefined4)lVar21;
                uStack_374 = (undefined4)((ulonglong)lVar21 >> 0x20);
                uStack_388 = (undefined8 *)0x7;
                uStack_f1 = 0;
                pdb_140ae5180(lStack_278,&uStack_388,&UNK_143035368);
                *puStack_270 = uStack_188;
                lVar21 = *(longlong *)(lStack_1d0 + 0x30);
                uVar19 = *(undefined8 *)(lStack_1d0 + 0x40);
                if (lVar21 == *(longlong *)(lStack_1d0 + 0x20)) {
                  uStack_f1 = 0;
                  pdb_142d7e980(lStack_210);
                }
                lVar27 = *(longlong *)(lStack_1d0 + 0x28);
                *(undefined8 *)(lVar27 + lVar21 * 0x10) = uVar19;
                *(undefined8 **)(lVar27 + 8 + lVar21 * 0x10) = puVar24;
                *(longlong *)(lStack_1d0 + 0x30) = lVar21 + 1;
                *(longlong *)(lStack_1d0 + 0x40) = *(longlong *)(lStack_1d0 + 0x40) + 1;
                puVar29 = puStack_100;
                plVar32 = plStack_120;
                lVar31 = lStack_118;
                uVar28 = uStack_380;
                uVar4 = uStack_37c;
                goto LAB_140a0536a;
              }
              uVar30 = (ushort)(uVar28 - 1) & (ushort)uVar28;
              uVar28 = CONCAT22((short)(uVar28 - 1 >> 0x10),uVar30);
            }
            auVar41[0] = -(auVar48[0] == cVar50);
            auVar41[1] = -(auVar48[1] == cVar51);
            auVar41[2] = -(auVar48[2] == cVar52);
            auVar41[3] = -(auVar48[3] == cVar53);
            auVar41[4] = -(auVar48[4] == cVar54);
            auVar41[5] = -(auVar48[5] == cVar55);
            auVar41[6] = -(auVar48[6] == cVar56);
            auVar41[7] = -(auVar48[7] == cVar57);
            auVar41[8] = -(auVar48[8] == cVar58);
            auVar41[9] = -(auVar48[9] == cVar59);
            auVar41[10] = -(auVar48[10] == cVar60);
            auVar41[0xb] = -(auVar48[0xb] == cVar61);
            auVar41[0xc] = -(auVar48[0xc] == cVar62);
            auVar41[0xd] = -(auVar48[0xd] == cVar63);
            auVar41[0xe] = -(auVar48[0xe] == cVar64);
            auVar41[0xf] = -(auVar48[0xf] == cVar65);
            if ((((((((((((((((SUB161(auVar41 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar41 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar41 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar41 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar41 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar41 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar41 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar41 >> 0x3f,0) & 1) != 0) || (SUB161(auVar41 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar41 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar41 >> 0x57,0) & 1) != 0) || (SUB161(auVar41 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar41 >> 0x67,0) & 1) != 0) || (SUB161(auVar41 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar41 >> 0x77,0) & 1) != 0) || auVar41[0xf] < '\0') break;
            uVar18 = uVar18 + lVar27 + 0x10;
            lVar27 = lVar27 + 0x10;
          }
        }
        uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143035350);
      }
      if (bVar36 == 2) {
LAB_140a0536a:
        uStack_37c = uVar4;
        uStack_380 = uVar28;
        cVar2 = *(char *)(lVar5 + 0x18);
      }
      else {
        if (bVar36 == 3) {
          *puStack_248 = uStack_180;
          uStack_388 = (undefined8 *)0x0;
          uStack_378 = 1;
          uStack_374 = 0;
          lStack_118 = lVar31;
          puStack_110 = puVar24;
          pdb_140aa3450(lStack_250,&uStack_388,2,lStack_1c8,param_9,&UNK_1430352c8,0x10);
          puVar24 = puStack_110;
          *puVar15 = uVar1;
          pdb_140c419b0(lVar21,puStack_110,lVar27);
          *puVar15 = uVar1;
          lVar21 = 0;
          if (*(longlong *)(lVar27 + 0x90) != 0) {
            lVar21 = lStack_220;
          }
          uStack_388 = (undefined8 *)0x1;
          uStack_380 = (uint)lVar21;
          uStack_37c = (undefined4)((ulonglong)lVar21 >> 0x20);
          uStack_378 = 0;
          uStack_374 = 0;
          puStack_350 = (undefined *)0x0;
          pdb_1414e0e70(&uStack_388,lStack_228);
          plVar32 = plStack_108;
          plVar35 = plStack_158;
          if (((*(char *)(lVar5 + 0x18) == '\0') || (*(longlong *)(lVar5 + 0x38) != lStack_118)) ||
             (*(int *)(lVar5 + 0x28) == 2)) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_1430352d8);
          }
          *(undefined4 *)(param_5 + 1) = *(undefined4 *)(lVar5 + 0x54);
          *param_5 = *(longlong *)(lVar5 + 0x4c);
          uStack_388 = puVar24;
          if (plStack_108[3] != 0) {
            uVar17 = pdb_1400af0a0(plStack_1d8,&uStack_388);
            plVar16 = plStack_150;
            lVar21 = *plVar32;
            uVar18 = plVar32[1];
            bVar36 = (byte)(uVar17 >> 0x39);
            auVar39 = ZEXT216(CONCAT11(bVar36,bVar36));
            auVar39 = pshuflw(auVar39,auVar39,0);
            lVar27 = 0;
            while( true ) {
              uVar17 = uVar17 & uVar18;
              auVar48 = *(undefined1 (*) [16])(lVar21 + uVar17);
              auVar44[0] = -(auVar48[0] == auVar39[0]);
              auVar44[1] = -(auVar48[1] == auVar39[1]);
              auVar44[2] = -(auVar48[2] == auVar39[2]);
              auVar44[3] = -(auVar48[3] == auVar39[3]);
              auVar44[4] = -(auVar48[4] == auVar39[4]);
              auVar44[5] = -(auVar48[5] == auVar39[5]);
              auVar44[6] = -(auVar48[6] == auVar39[6]);
              auVar44[7] = -(auVar48[7] == auVar39[7]);
              auVar44[8] = -(auVar48[8] == auVar39[0]);
              auVar44[9] = -(auVar48[9] == auVar39[1]);
              auVar44[10] = -(auVar48[10] == auVar39[2]);
              auVar44[0xb] = -(auVar48[0xb] == auVar39[3]);
              auVar44[0xc] = -(auVar48[0xc] == auVar39[4]);
              auVar44[0xd] = -(auVar48[0xd] == auVar39[5]);
              auVar44[0xe] = -(auVar48[0xe] == auVar39[6]);
              auVar44[0xf] = -(auVar48[0xf] == auVar39[7]);
              uVar30 = (ushort)(SUB161(auVar44 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar44[0xf] >> 7) << 0xf;
              uVar28 = (uint)uVar30;
              while (uVar30 != 0) {
                uVar6 = 0;
                for (uVar7 = uVar28; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                  uVar6 = uVar6 + 1;
                }
                lVar31 = (uVar6 + uVar17 & uVar18) * -0x78;
                if (puVar24 == *(undefined8 **)(lVar21 + -0x78 + lVar31)) {
                  uVar4 = *(undefined4 *)(lVar21 + lVar31 + -0x18);
                  *(undefined4 *)((longlong)param_5 + 0xc) = uVar4;
                  *(undefined4 *)(param_5 + 2) = uVar4;
                  *(undefined4 *)((longlong)param_5 + 0x14) = uVar4;
                  uStack_388 = puVar24;
                  if (plStack_150[3] == 0) goto LAB_140a05bb7;
                  uVar17 = pdb_1400af0a0(plStack_1c0,&uStack_388);
                  lVar21 = *plVar16;
                  uVar18 = plVar16[1];
                  bVar36 = (byte)(uVar17 >> 0x39);
                  auVar39 = ZEXT216(CONCAT11(bVar36,bVar36));
                  auVar39 = pshuflw(auVar39,auVar39,0);
                  lVar27 = 0;
                  goto LAB_140a058df;
                }
                uVar30 = (ushort)(uVar28 - 1) & (ushort)uVar28;
                uVar28 = CONCAT22((short)(uVar28 - 1 >> 0x10),uVar30);
              }
              auVar40[0] = -(auVar48[0] == cVar50);
              auVar40[1] = -(auVar48[1] == cVar51);
              auVar40[2] = -(auVar48[2] == cVar52);
              auVar40[3] = -(auVar48[3] == cVar53);
              auVar40[4] = -(auVar48[4] == cVar54);
              auVar40[5] = -(auVar48[5] == cVar55);
              auVar40[6] = -(auVar48[6] == cVar56);
              auVar40[7] = -(auVar48[7] == cVar57);
              auVar40[8] = -(auVar48[8] == cVar58);
              auVar40[9] = -(auVar48[9] == cVar59);
              auVar40[10] = -(auVar48[10] == cVar60);
              auVar40[0xb] = -(auVar48[0xb] == cVar61);
              auVar40[0xc] = -(auVar48[0xc] == cVar62);
              auVar40[0xd] = -(auVar48[0xd] == cVar63);
              auVar40[0xe] = -(auVar48[0xe] == cVar64);
              auVar40[0xf] = -(auVar48[0xf] == cVar65);
              if ((((((((((((((((SUB161(auVar40 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar40 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar40 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar40 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar40 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar40 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar40 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar40 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar40 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar40 >> 0x4f,0) & 1) != 0) || (SUB161(auVar40 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar40 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar40 >> 0x67,0) & 1) != 0) || (SUB161(auVar40 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar40 >> 0x77,0) & 1) != 0) || auVar40[0xf] < '\0') break;
              uVar17 = uVar17 + lVar27 + 0x10;
              lVar27 = lVar27 + 0x10;
            }
          }
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_1430352f0);
        }
        uStack_170 = CONCAT44((float)puStack_240[1],(float)*puStack_240);
        uStack_168 = CONCAT44(0x3f800000,(float)*puStack_240 / (float)puStack_240[1]);
        uStack_380 = uVar28;
        uStack_37c = uVar4;
        pdb_140de83c0();
        uStack_380 = *(uint *)(param_5 + 1);
        uStack_388 = (undefined8 *)*param_5;
        uStack_37c = 0;
        uStack_378 = 0x3f800000;
        uStack_374 = 0;
        puStack_148 = puVar13;
        uStack_140 = uStack_140 & 0xffffff00;
        ppuVar67 = &puStack_148;
        uVar19 = uStack_230;
        pdb_140bce5a0(&uStack_198);
        fVar38 = *(float *)((longlong)param_5 + 0xc);
        fVar49 = *(float *)(param_5 + 3);
        fVar37 = fVar49;
        if (fVar49 <= fVar38) {
          fVar37 = fVar38;
        }
        fVar38 = (float)(~-(uint)NAN(fVar38) & (uint)fVar37 | -(uint)NAN(fVar38) & (uint)fVar49);
        auVar39 = ZEXT416((uint)fVar38);
        if (fVar38 <= 0.0) {
          auVar39 = ZEXT1216((undefined1  [12])0x0) << 0x20;
        }
        auVar48._4_12_ = auVar39._4_12_;
        auVar48._0_4_ = auVar39._0_4_ + (uStack_198._4_4_ - *(float *)((longlong)param_5 + 4));
        fVar38 = 0.0;
        if (0.0 <= auVar48._0_4_) {
          fVar38 = auVar48._0_4_;
        }
        fVar49 = fVar12;
        if (fVar38 <= fVar12) {
          fVar49 = fVar38;
        }
        if (fVar12 <= fVar49) {
          pdb_140b54e60(&uStack_388,plStack_150,puVar24,auVar48._0_8_,uVar19,puVar66,ppuVar67);
          if ((int)uStack_388 == 2) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_143035338);
          }
          uStack_138 = uStack_378;
          uStack_134 = uStack_374;
          uStack_130 = (undefined4)uStack_370;
          puStack_148 = uStack_388;
          uStack_140 = uStack_380;
          uStack_13c = uStack_37c;
          *puStack_1f0 = uStack_174;
          lVar21 = *(longlong *)(lStack_1b0 + 0x30);
          uVar19 = *(undefined8 *)(lStack_1b0 + 0x40);
          if (lVar21 == *(longlong *)(lStack_1b0 + 0x20)) {
            pdb_142d7ede0(lStack_1e0);
          }
          lVar27 = *(longlong *)(lStack_1b0 + 0x28);
          *(undefined8 *)(lVar27 + lVar21 * 0x28) = uVar19;
          puVar66 = (undefined8 *)(lVar27 + 0x14 + lVar21 * 0x28);
          *puVar66 = CONCAT44(uStack_138,uStack_13c);
          puVar66[1] = CONCAT44(uStack_130,uStack_134);
          plVar32 = (longlong *)(lVar27 + 8 + lVar21 * 0x28);
          *plVar32 = (longlong)puStack_148;
          plVar32[1] = CONCAT44(uStack_13c,uStack_140);
          *(longlong *)(lStack_1b0 + 0x30) = lVar21 + 1;
          *(longlong *)(lStack_1b0 + 0x40) = *(longlong *)(lStack_1b0 + 0x40) + 1;
        }
        *puStack_218 = uStack_17c;
        uStack_198 = puVar24;
        lVar21 = pdb_1417bd890(plStack_108,&uStack_198);
        if (lVar21 == 0) {
          if (1 < *_DAT_143ca8e90) {
            puStack_148 = &uStack_198;
            uStack_140 = 0x40c04ef0;
            uStack_13c = 1;
            uStack_388 = (undefined8 *)0x0;
            uStack_380 = 0x43021dde;
            uStack_37c = 1;
            uStack_378 = 0x2b;
            uStack_374 = 0;
            uStack_370._0_4_ = 0;
            uStack_370._4_4_ = 0;
            puStack_368 = &UNK_143021da7;
            uStack_360 = 0x36;
            uStack_358 = 2;
            puStack_350 = &UNK_143021dde;
            uStack_348 = 0x2b;
            uStack_340 = 0xfd00000001;
            puStack_338 = &UNK_143021d78;
            ppuStack_330 = &puStack_148;
            pdb_140f332f0(&uStack_f2,&uStack_388);
          }
        }
        else {
          pdb_1403b05d0();
          *(float *)(lVar21 + 0x58) = fVar49;
        }
        *(float *)(param_5 + 2) = fVar49;
        cVar2 = *(char *)(lVar5 + 0x18);
        puVar29 = puStack_100;
        plVar32 = plStack_120;
        plVar35 = plStack_158;
      }
      if (cVar2 != '\x02') goto LAB_140a04ee0;
    }
    if ((*(longlong *)(lVar5 + 0x38) == lVar31) && (*(char *)(lVar5 + 0x19) != '\x02')) {
      fVar38 = *(float *)(param_5 + 2);
      fVar49 = *(float *)((longlong)param_5 + 0x14);
      if ((fVar49 != fVar38) || (NAN(fVar49) || NAN(fVar38))) {
        uStack_388 = (undefined8 *)CONCAT44((int)param_5[1],(int)*param_5);
        puStack_110 = puVar24;
        pdb_140df4540(&uStack_1a8,&uStack_388);
        lVar27 = lStack_260;
        *puStack_258 = uStack_184;
        lVar21 = *(longlong *)(lStack_260 + 0x30);
        uVar19 = *(undefined8 *)(lStack_260 + 0x40);
        if (lVar21 == *(longlong *)(lStack_260 + 0x20)) {
          pdb_142d7e6e0(lStack_200);
        }
        puVar66 = puStack_110;
        lVar31 = *(longlong *)(lVar27 + 0x28);
        lVar20 = lVar21 * 0x20;
        *(undefined8 *)(lVar31 + lVar20) = uVar19;
        *(undefined8 **)(lVar31 + 8 + lVar20) = puStack_110;
        *(undefined8 *)(lVar31 + 0x10 + lVar20) = uStack_1a8;
        *(undefined4 *)(lVar31 + 0x18 + lVar20) = uStack_1a0;
        *(undefined2 *)(lVar31 + 0x1c + lVar20) = 0;
        *(longlong *)(lVar27 + 0x30) = lVar21 + 1;
        *(longlong *)(lVar27 + 0x40) = *(longlong *)(lVar27 + 0x40) + 1;
        fVar37 = (float)pdb_140de8220();
        plVar32 = plStack_150;
        uStack_388 = puVar66;
        if (plStack_150[3] != 0) {
          fVar10 = 0.0;
          if (0.0 <= fVar37) {
            fVar10 = fVar37;
          }
          fVar37 = fVar11;
          if (fVar10 <= fVar11) {
            fVar37 = fVar10;
          }
          uVar17 = pdb_1400af0a0(plStack_1c0,&uStack_388);
          lVar21 = *plVar32;
          uVar18 = plVar32[1];
          bVar36 = (byte)(uVar17 >> 0x39);
          auVar39 = ZEXT216(CONCAT11(bVar36,bVar36));
          auVar39 = pshuflw(auVar39,auVar39,0);
          lVar27 = 0;
          do {
            uVar17 = uVar17 & uVar18;
            auVar48 = *(undefined1 (*) [16])(lVar21 + uVar17);
            auVar46[0] = -(auVar48[0] == auVar39[0]);
            auVar46[1] = -(auVar48[1] == auVar39[1]);
            auVar46[2] = -(auVar48[2] == auVar39[2]);
            auVar46[3] = -(auVar48[3] == auVar39[3]);
            auVar46[4] = -(auVar48[4] == auVar39[4]);
            auVar46[5] = -(auVar48[5] == auVar39[5]);
            auVar46[6] = -(auVar48[6] == auVar39[6]);
            auVar46[7] = -(auVar48[7] == auVar39[7]);
            auVar46[8] = -(auVar48[8] == auVar39[0]);
            auVar46[9] = -(auVar48[9] == auVar39[1]);
            auVar46[10] = -(auVar48[10] == auVar39[2]);
            auVar46[0xb] = -(auVar48[0xb] == auVar39[3]);
            auVar46[0xc] = -(auVar48[0xc] == auVar39[4]);
            auVar46[0xd] = -(auVar48[0xd] == auVar39[5]);
            auVar46[0xe] = -(auVar48[0xe] == auVar39[6]);
            auVar46[0xf] = -(auVar48[0xf] == auVar39[7]);
            uVar30 = (ushort)(SUB161(auVar46 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar46 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar46 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar46 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar46 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar46 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar46 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar46 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar46 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar46 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar46 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar46 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar46 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar46 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar46 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar46[0xf] >> 7) << 0xf;
            uVar28 = (uint)uVar30;
            while (uVar30 != 0) {
              uVar6 = 0;
              for (uVar7 = uVar28; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                uVar6 = uVar6 + 1;
              }
              lVar31 = (uVar6 + uVar17 & uVar18) * -0x2b0;
              if (puVar66 == *(undefined8 **)(lVar21 + -0x2b0 + lVar31)) {
                lVar21 = lVar21 + lVar31;
                if ((*(ulonglong *)(lVar21 + -0x298) < 2) || (*(float *)(lVar21 + -0x278) <= 0.0)) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_143035380);
                }
                uVar3 = *(undefined1 *)(lVar21 + -9);
                if (((fVar49 != 0.0) || (NAN(fVar49))) || (uVar34 = 6, fVar38 <= 0.0)) {
                  if (0.0 < fVar49) {
                    uVar34 = 7;
                    if ((fVar38 == 0.0) && (!NAN(fVar38))) goto LAB_140a057cd;
                  }
                  puVar29 = puStack_100;
                  if (fVar12 <= fVar49) goto LAB_140a05855;
                  uVar34 = 8;
                  if ((fVar38 != fVar12) || (NAN(fVar38) || NAN(fVar12))) goto LAB_140a05855;
                }
LAB_140a057cd:
                *puStack_208 = uStack_178;
                lVar21 = *(longlong *)(lStack_1b8 + 0x30);
                uVar19 = *(undefined8 *)(lStack_1b8 + 0x40);
                if (lVar21 == *(longlong *)(lStack_1b8 + 0x20)) {
                  pdb_142d7ede0(lStack_1e8);
                }
                lVar27 = *(longlong *)(lStack_1b8 + 0x28);
                *(undefined8 *)(lVar27 + lVar21 * 0x28) = uVar19;
                *(undefined8 **)(lVar27 + 8 + lVar21 * 0x28) = puStack_110;
                *(undefined8 *)(lVar27 + 0x10 + lVar21 * 0x28) = uStack_1a8;
                *(undefined4 *)(lVar27 + 0x18 + lVar21 * 0x28) = uStack_1a0;
                *(float *)(lVar27 + 0x1c + lVar21 * 0x28) = fVar37;
                *(undefined1 *)(lVar27 + 0x20 + lVar21 * 0x28) = uVar34;
                *(undefined1 *)(lVar27 + 0x21 + lVar21 * 0x28) = uVar3;
                *(longlong *)(lStack_1b8 + 0x30) = lVar21 + 1;
                *(longlong *)(lStack_1b8 + 0x40) = *(longlong *)(lStack_1b8 + 0x40) + 1;
                puVar29 = puStack_100;
                goto LAB_140a05855;
              }
              uVar30 = (ushort)(uVar28 - 1) & (ushort)uVar28;
              uVar28 = CONCAT22((short)(uVar28 - 1 >> 0x10),uVar30);
            }
            auVar42[0] = -(auVar48[0] == cVar50);
            auVar42[1] = -(auVar48[1] == cVar51);
            auVar42[2] = -(auVar48[2] == cVar52);
            auVar42[3] = -(auVar48[3] == cVar53);
            auVar42[4] = -(auVar48[4] == cVar54);
            auVar42[5] = -(auVar48[5] == cVar55);
            auVar42[6] = -(auVar48[6] == cVar56);
            auVar42[7] = -(auVar48[7] == cVar57);
            auVar42[8] = -(auVar48[8] == cVar58);
            auVar42[9] = -(auVar48[9] == cVar59);
            auVar42[10] = -(auVar48[10] == cVar60);
            auVar42[0xb] = -(auVar48[0xb] == cVar61);
            auVar42[0xc] = -(auVar48[0xc] == cVar62);
            auVar42[0xd] = -(auVar48[0xd] == cVar63);
            auVar42[0xe] = -(auVar48[0xe] == cVar64);
            auVar42[0xf] = -(auVar48[0xf] == cVar65);
            if ((((((((((((((((SUB161(auVar42 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar42 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar42 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar42 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar42 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar42 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar42 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar42 >> 0x3f,0) & 1) != 0) || (SUB161(auVar42 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar42 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar42 >> 0x57,0) & 1) != 0) || (SUB161(auVar42 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar42 >> 0x67,0) & 1) != 0) || (SUB161(auVar42 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar42 >> 0x77,0) & 1) != 0) || auVar42[0xf] < '\0') break;
            uVar17 = uVar17 + lVar27 + 0x10;
            lVar27 = lVar27 + 0x10;
          } while( true );
        }
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143035398);
      }
LAB_140a05855:
      *(float *)((longlong)param_5 + 0x14) = fVar38;
      plVar32 = plStack_120;
      plVar35 = plStack_158;
    }
  }
  goto LAB_140a04ee0;
LAB_140a058df:
  uVar17 = uVar17 & uVar18;
  auVar48 = *(undefined1 (*) [16])(lVar21 + uVar17);
  auVar47[0] = -(auVar48[0] == auVar39[0]);
  auVar47[1] = -(auVar48[1] == auVar39[1]);
  auVar47[2] = -(auVar48[2] == auVar39[2]);
  auVar47[3] = -(auVar48[3] == auVar39[3]);
  auVar47[4] = -(auVar48[4] == auVar39[4]);
  auVar47[5] = -(auVar48[5] == auVar39[5]);
  auVar47[6] = -(auVar48[6] == auVar39[6]);
  auVar47[7] = -(auVar48[7] == auVar39[7]);
  auVar47[8] = -(auVar48[8] == auVar39[0]);
  auVar47[9] = -(auVar48[9] == auVar39[1]);
  auVar47[10] = -(auVar48[10] == auVar39[2]);
  auVar47[0xb] = -(auVar48[0xb] == auVar39[3]);
  auVar47[0xc] = -(auVar48[0xc] == auVar39[4]);
  auVar47[0xd] = -(auVar48[0xd] == auVar39[5]);
  auVar47[0xe] = -(auVar48[0xe] == auVar39[6]);
  auVar47[0xf] = -(auVar48[0xf] == auVar39[7]);
  uVar30 = (ushort)(SUB161(auVar47 >> 7,0) & 1) | (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe | (ushort)(auVar47[0xf] >> 7) << 0xf;
  uVar28 = (uint)uVar30;
  while (uVar30 != 0) {
    uVar6 = 0;
    for (uVar7 = uVar28; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      uVar6 = uVar6 + 1;
    }
    lVar31 = (uVar6 + uVar17 & uVar18) * -0x2b0;
    if (puVar24 == *(undefined8 **)(lVar21 + -0x2b0 + lVar31)) {
      lVar21 = lVar21 + lVar31;
      if ((*(ulonglong *)(lVar21 + -0x298) < 2) || (*(float *)(lVar21 + -0x278) <= 0.0)) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_143035308);
      }
      fVar38 = _DAT_142f6e380;
      if (*(longlong *)(lVar21 + -0x260) != 0) {
        lVar27 = *(longlong *)(lVar21 + -0x268);
        lVar31 = *(longlong *)(lVar21 + -0x260) * 0xc;
        uVar18 = lVar31 - 0xc;
        auVar39._8_8_ = 0;
        auVar39._0_8_ = uVar18;
        lVar21 = lVar27;
        if ((SUB164(auVar39 * ZEXT816(0xaaaaaaaaaaaaaaab),8) >> 3 & 1) == 0) {
          lVar21 = lVar27 + 0xc;
          fVar38 = *(float *)(lVar27 + 4);
          if (_DAT_142f6e380 <= *(float *)(lVar27 + 4)) {
            fVar38 = _DAT_142f6e380;
          }
        }
        if (0xb < uVar18) {
          do {
            fVar49 = *(float *)(lVar21 + 4);
            fVar37 = *(float *)(lVar21 + 0x10);
            fVar10 = fVar49;
            if (fVar38 <= fVar49) {
              fVar10 = fVar38;
            }
            fVar49 = (float)(~-(uint)NAN(fVar38) & (uint)fVar10 | -(uint)NAN(fVar38) & (uint)fVar49)
            ;
            lVar21 = lVar21 + 0x18;
            fVar38 = fVar37;
            if (fVar49 <= fVar37) {
              fVar38 = fVar49;
            }
            fVar38 = (float)(-(uint)NAN(fVar49) & (uint)fVar37 | ~-(uint)NAN(fVar49) & (uint)fVar38)
            ;
          } while (lVar21 != lVar27 + lVar31);
        }
      }
      *(float *)(param_5 + 3) = fVar38;
      puVar29 = puStack_100;
      plVar32 = plStack_120;
      lVar31 = lStack_118;
      uVar28 = uStack_380;
      uVar4 = uStack_37c;
      goto LAB_140a0536a;
    }
    uVar30 = (ushort)(uVar28 - 1) & (ushort)uVar28;
    uVar28 = CONCAT22((short)(uVar28 - 1 >> 0x10),uVar30);
  }
  auVar43[0] = -(auVar48[0] == cVar50);
  auVar43[1] = -(auVar48[1] == cVar51);
  auVar43[2] = -(auVar48[2] == cVar52);
  auVar43[3] = -(auVar48[3] == cVar53);
  auVar43[4] = -(auVar48[4] == cVar54);
  auVar43[5] = -(auVar48[5] == cVar55);
  auVar43[6] = -(auVar48[6] == cVar56);
  auVar43[7] = -(auVar48[7] == cVar57);
  auVar43[8] = -(auVar48[8] == cVar58);
  auVar43[9] = -(auVar48[9] == cVar59);
  auVar43[10] = -(auVar48[10] == cVar60);
  auVar43[0xb] = -(auVar48[0xb] == cVar61);
  auVar43[0xc] = -(auVar48[0xc] == cVar62);
  auVar43[0xd] = -(auVar48[0xd] == cVar63);
  auVar43[0xe] = -(auVar48[0xe] == cVar64);
  auVar43[0xf] = -(auVar48[0xf] == cVar65);
  if ((((((((((((((((SUB161(auVar43 >> 7,0) & 1) != 0 || (SUB161(auVar43 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar43 >> 0x17,0) & 1) != 0) || (SUB161(auVar43 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar43 >> 0x27,0) & 1) != 0) || (SUB161(auVar43 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar43 >> 0x37,0) & 1) != 0) || (SUB161(auVar43 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar43 >> 0x47,0) & 1) != 0) || (SUB161(auVar43 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar43 >> 0x57,0) & 1) != 0) || (SUB161(auVar43 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar43 >> 0x67,0) & 1) != 0) || (SUB161(auVar43 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar43 >> 0x77,0) & 1) != 0) || auVar43[0xf] < '\0') {
LAB_140a05bb7:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143035320);
  }
  uVar17 = uVar17 + lVar27 + 0x10;
  lVar27 = lVar27 + 0x10;
  goto LAB_140a058df;
}

