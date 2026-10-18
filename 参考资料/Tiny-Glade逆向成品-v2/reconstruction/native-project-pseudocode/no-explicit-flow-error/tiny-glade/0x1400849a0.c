// VA 0x1400849a0, PDB extent 4902 bytes
// tiny_glade::rollercoaster::create_cart_chain
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/rollercoaster.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::rollercoaster::create_cart_chain
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/rollercoaster.rs
   Extent: 4902 */

void pdb_1400849a0(ulonglong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,longlong param_6,longlong param_7,undefined8 *param_8,
                  undefined8 *param_9)

{
  uint *puVar1;
  float *pfVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  byte bVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  undefined4 uVar17;
  int iVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined8 *puVar21;
  longlong *plVar22;
  float fVar23;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  int *piVar28;
  longlong lVar29;
  longlong lVar30;
  ushort uVar31;
  ulonglong uVar32;
  longlong lVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  byte bVar36;
  uint uVar37;
  undefined4 uVar38;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined1 auVar39 [16];
  longlong extraout_XMM0_Qb;
  undefined1 auVar42 [16];
  float fVar43;
  undefined1 auVar44 [16];
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined8 in_stack_fffffffffffffb98;
  float fStack_458;
  float fStack_454;
  float fStack_450;
  float fStack_44c;
  undefined8 uStack_448;
  float fStack_440;
  undefined8 uStack_43c;
  undefined8 uStack_434;
  undefined4 uStack_42c;
  uint uStack_428;
  uint uStack_424;
  uint uStack_420;
  uint uStack_41c;
  undefined8 uStack_418;
  undefined8 uStack_3e0;
  undefined8 uStack_3a8;
  undefined8 uStack_370;
  undefined8 uStack_338;
  undefined8 uStack_320;
  undefined8 uStack_308;
  undefined8 uStack_2f0;
  undefined4 uStack_2e8;
  longlong lStack_2e0;
  undefined4 uStack_2d8;
  undefined4 uStack_2d0;
  undefined8 uStack_2cc;
  undefined4 uStack_2c4;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  char acStack_298 [4];
  int iStack_294;
  longlong lStack_290;
  int iStack_264;
  longlong lStack_258;
  undefined8 uStack_250;
  undefined2 auStack_248 [4];
  undefined8 uStack_240;
  float fStack_238;
  undefined8 uStack_234;
  float fStack_22c;
  undefined8 uStack_228;
  undefined8 uStack_220;
  ulonglong *puStack_218;
  undefined8 uStack_210;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  int iStack_1fc;
  ulonglong uStack_1f8;
  ulonglong uStack_1f0;
  undefined8 uStack_1e8;
  int iStack_1c0;
  undefined8 uStack_1bc;
  float fStack_1b4;
  undefined4 uStack_1b0;
  uint uStack_1a8;
  undefined8 uStack_1a0;
  float fStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  longlong lStack_180;
  undefined1 auStack_178 [16];
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  int iStack_14c;
  longlong lStack_148;
  byte *pbStack_140;
  longlong lStack_138;
  longlong *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulonglong uStack_118;
  ulonglong uStack_110;
  ulonglong uStack_108;
  ulonglong uStack_100;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  uStack_118 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_110 = 0x10;
  uStack_228 = param_3;
  lStack_180 = param_4;
  pdb_14007ee60();
  pbStack_140 = pub_1406abab0(0x50,0x10);
  if (pbStack_140 == (byte *)0x0) {
    uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(0x10,0x50);
  }
  uVar4 = *param_8;
  uVar7 = param_8[1];
  uVar11 = param_8[2];
  uVar12 = param_8[3];
  uVar13 = param_8[4];
  uVar14 = param_8[5];
  uVar15 = param_8[7];
  *(undefined8 *)(pbStack_140 + 0x30) = param_8[6];
  *(undefined8 *)(pbStack_140 + 0x38) = uVar15;
  *(undefined8 *)(pbStack_140 + 0x20) = uVar13;
  *(undefined8 *)(pbStack_140 + 0x28) = uVar14;
  *(undefined8 *)(pbStack_140 + 0x10) = uVar11;
  *(undefined8 *)(pbStack_140 + 0x18) = uVar12;
  *(undefined8 *)pbStack_140 = uVar4;
  *(undefined8 *)(pbStack_140 + 8) = uVar7;
  pbStack_140[0x40] = 1;
  uVar17 = _DAT_142e37830;
  uVar16 = _DAT_142e37820;
  lStack_148 = 1;
  lStack_138 = 1;
  plStack_130 = (longlong *)param_9[1];
  if (plStack_130 == (longlong *)0x0) {
    plStack_130 = (longlong *)param_9[2];
  }
  lStack_180 = lStack_180 + 0x18;
  uStack_220 = *param_9;
  puStack_218 = param_1;
LAB_140084b35:
  uVar19 = uStack_100;
  uVar32 = uStack_108;
  uVar26 = uStack_110;
  uVar24 = uStack_118;
  if (lStack_138 != 0) {
    lStack_138 = lStack_138 + -1;
    lVar25 = lStack_138 * 0x50;
    bVar6 = pbStack_140[lVar25 + 0x40];
    if (bVar6 != 2) {
      puVar1 = (uint *)(pbStack_140 + lVar25);
      uVar37 = *puVar1;
      uVar8 = puVar1[1];
      uVar9 = puVar1[2];
      uVar10 = puVar1[3];
      uVar24 = *(ulonglong *)(pbStack_140 + lVar25 + 0x10);
      lVar33 = *(longlong *)(pbStack_140 + lVar25 + 0x18);
      uVar38 = *(undefined4 *)(pbStack_140 + lVar25 + 0x28);
      uStack_188 = *(undefined4 *)(pbStack_140 + lVar25 + 0x34);
      uStack_190 = *(undefined8 *)(pbStack_140 + lVar25 + 0x2c);
      uVar26 = (ulonglong)~(uint)uVar24;
      fVar23 = 1.4013e-45;
      iStack_1fc = (int)(uVar24 >> 0x20);
      if (uVar26 < *(ulonglong *)(param_7 + 0x10)) {
        piVar28 = (int *)(uVar26 * 0x18 + *(longlong *)(param_7 + 8));
        uVar26 = uVar24 >> 0x20;
        if ((piVar28[4] == iStack_1fc) && (*piVar28 != 0)) {
          uVar26 = *(ulonglong *)(piVar28 + 2);
          fVar23 = 0.0;
          if (((uVar26 & 0xffffffff) < *(ulonglong *)(param_6 + 0x38)) &&
             ((*(ulonglong *)(*(longlong *)(param_6 + 0x28) + (uVar26 >> 6 & 0x3ffffff) * 8) >>
               (uVar26 & 0x3f) & 1) != 0)) {
            lVar25 = *(longlong *)
                      (*(longlong *)
                        (*(longlong *)(param_7 + 0x1a0) + 0x18 + (uVar26 >> 0x20) * 0x48) + 0x10 +
                      ~*(ulonglong *)
                        (*(longlong *)
                          (*(longlong *)(param_7 + 0x1a0) + 0x38 + (uVar26 >> 0x20) * 0x48) +
                        *(longlong *)(param_6 + 0x110) * 8) * 0x30);
            lVar20 = (ulonglong)(uint)~piVar28[1] * 0x30;
            pfVar2 = (float *)(lVar25 + lVar20);
            fVar52 = *pfVar2;
            fVar53 = pfVar2[1];
            fVar56 = pfVar2[2];
            fVar45 = pfVar2[3];
            uVar4 = *(undefined8 *)(lVar25 + 0x10 + lVar20);
            fVar23 = *(float *)(lVar25 + 0x18 + lVar20);
            uStack_158 = *(undefined4 *)(lVar25 + 0x2c + lVar20);
            puVar21 = (undefined8 *)(lVar25 + 0x1c + lVar20);
            uStack_168 = *puVar21;
            uStack_160 = puVar21[1];
            uVar7 = *(undefined8 *)(lVar33 + 0x38);
            uStack_f1 = 1;
            pdb_14007ee60();
            uStack_f1 = 1;
            lVar20 = pdb_140ed5970(uStack_220);
            lVar25 = plStack_130[2];
            if ((ulonglong)(*plStack_130 - lVar25) < 0x98) {
              uStack_f1 = 1;
              in_stack_fffffffffffffb98 = 0;
              uStack_128 = lVar20;
              pdb_142d7f1b0(plStack_130,lVar25,0x98,1,1);
              lVar20 = uStack_128;
            }
            lVar29 = plStack_130[1];
            *(code **)(lVar29 + lVar25) = pdb_1400930e0;
            pfVar2 = (float *)(lVar29 + 8 + lVar25);
            *pfVar2 = fVar52;
            pfVar2[1] = fVar53;
            pfVar2[2] = fVar56;
            pfVar2[3] = fVar45;
            *(undefined8 *)(lVar29 + 0x18 + lVar25) = uVar4;
            *(float *)(lVar29 + 0x20 + lVar25) = fVar23;
            puVar21 = (undefined8 *)(lVar29 + 0x24 + lVar25);
            *puVar21 = uStack_168;
            puVar21[1] = uStack_160;
            *(undefined4 *)(lVar29 + 0x34 + lVar25) = uStack_158;
            *(undefined4 *)(lVar29 + 0x38 + lVar25) = 0;
            *(undefined8 *)(lVar29 + 0x40 + lVar25) = uVar7;
            *(undefined1 *)(lVar29 + 0x48 + lVar25) = 0x17;
            pfVar2 = (float *)(lVar29 + 0x58 + lVar25);
            *pfVar2 = fVar52;
            pfVar2[1] = fVar53;
            pfVar2[2] = fVar56;
            pfVar2[3] = fVar45;
            *(undefined8 *)(lVar29 + 0x68 + lVar25) = uVar4;
            *(float *)(lVar29 + 0x70 + lVar25) = fVar23;
            puVar21 = (undefined8 *)(lVar29 + 0x74 + lVar25);
            *puVar21 = uStack_168;
            puVar21[1] = uStack_160;
            *(undefined4 *)(lVar29 + 0x84 + lVar25) = uStack_158;
            *(longlong *)(lVar29 + 0x88 + lVar25) = lVar20;
            plStack_130[2] = lVar25 + 0x98;
            uStack_42c = uStack_158;
            uStack_43c = uStack_168;
            uStack_434 = uStack_160;
            uStack_2c4 = uStack_188;
            uStack_2cc = uStack_190;
            uStack_2d8 = 0;
            uStack_2b0 = 0;
            uStack_2a8 = 0;
            uStack_2c0 = 0;
            uStack_2b8 = 0;
            uStack_2a0 = 0;
            uStack_418 = 2;
            uStack_3e0 = 2;
            uStack_3a8 = 2;
            uStack_370 = 2;
            uStack_338 = 0x8000000000000000;
            uStack_320 = 0x8000000000000000;
            uStack_308 = 0x8000000000000000;
            uStack_2f0 = 0;
            uStack_2e8 = 0;
            fStack_458 = fVar52;
            fStack_454 = fVar53;
            fStack_450 = fVar56;
            fStack_44c = fVar45;
            uStack_448 = uVar4;
            fStack_440 = fVar23;
            uStack_428 = uVar37;
            uStack_424 = uVar8;
            uStack_420 = uVar9;
            uStack_41c = uVar10;
            lStack_2e0 = lVar20;
            uStack_2d0 = uVar38;
            if (bVar6 == 1) {
              if (uStack_100 == uStack_118) {
                pdb_140181e10(&uStack_118);
              }
              uVar26 = uStack_108 - 1;
              uVar24 = uStack_118 + uVar26;
              uStack_108 = uStack_118 + uVar26;
              if (!CARRY8(uStack_118,uVar26)) {
                uVar24 = uVar26;
                uStack_108 = uVar26;
              }
            }
            else {
              if (uStack_100 == uStack_118) {
                pdb_140181e10(&uStack_118);
              }
              uVar24 = 0;
              if (uStack_118 <= uStack_100 + uStack_108) {
                uVar24 = uStack_118;
              }
              uVar24 = (uStack_100 + uStack_108) - uVar24;
            }
            uStack_100 = uStack_100 + 1;
            pub_142e32760(uVar24 * 0x1c0 + uStack_110,&fStack_458,0x1c0);
            fVar46 = (float)(uVar37 ^ _DAT_142e377a0);
            fVar47 = (float)(uVar8 ^ _UNK_142e377a4);
            fVar49 = (float)(uVar9 ^ _UNK_142e377a8);
            fVar43 = (float)(uVar10 ^ _UNK_142e377ac);
            fVar48 = fVar43 * fVar52 * _DAT_142e377b0;
            fVar50 = fVar49 * fVar52 * _UNK_142e377b4;
            fVar51 = fVar47 * fVar52 * _UNK_142e377b8;
            fVar52 = fVar46 * fVar52 * _UNK_142e377bc;
            fVar57 = fVar49 * fVar53 * _DAT_142e377c0;
            fVar58 = fVar43 * fVar53 * _UNK_142e377c4;
            fVar59 = fVar46 * fVar53 * _UNK_142e377c8;
            fVar60 = fVar47 * fVar53 * _UNK_142e377cc;
            fVar53 = fVar47 * fVar56 * _DAT_142e377d0;
            fVar54 = fVar46 * fVar56 * _UNK_142e377d4;
            fVar55 = fVar43 * fVar56 * _UNK_142e377d8;
            fVar56 = fVar49 * fVar56 * _UNK_142e377dc;
            lVar33 = lVar33 + 0x40;
            uStack_f1 = 1;
            pdb_140df4150(&fStack_208,lVar33);
            fVar57 = fVar57 + fVar53 + fVar45 * fVar46 + fVar48;
            fVar50 = fVar58 + fVar54 + fVar45 * fVar47 + fVar50;
            fVar51 = fVar59 + fVar55 + fVar45 * fVar49 + fVar51;
            fVar48 = fVar60 + fVar56 + fVar45 * fVar43 + fVar52;
            fVar52 = fStack_200 * fVar49 + fStack_204 * fVar47 + fStack_208 * fVar46;
            uStack_250 = 2;
            auStack_248[0] = 0x100;
            fVar53 = (float)((uint)(fVar49 * (fVar52 + fVar52) +
                                    (fVar43 * fVar43 -
                                    (fVar49 * fVar49 + fVar47 * fVar47 + fVar46 * fVar46)) *
                                    fStack_200 +
                                   (fVar43 + fVar43) * (fVar46 * fStack_204 - fStack_208 * fVar47))
                            & _DAT_142e377e0) * _DAT_142e36f50;
            fVar49 = fVar53 * _DAT_142e377f0 * _DAT_142e37800;
            fVar53 = fVar53 * _UNK_142e37804;
            fVar46 = fVar51 * fVar51;
            fVar47 = fVar48 * fVar48;
            fVar52 = fVar50 * fVar50 + fVar57 * fVar57;
            fVar56 = fVar47 - (fVar52 + fVar46);
            fVar45 = fVar47 - (fVar52 + fVar46);
            fVar47 = fVar47 - (fVar52 + fVar46);
            fVar48 = fVar48 + fVar48;
            lVar25 = 0;
LAB_140085050:
            uVar38 = (undefined4)((ulonglong)in_stack_fffffffffffffb98 >> 0x20);
            if (lVar25 != 2) {
              lVar20 = lVar25 + 1;
              bVar6 = *(byte *)((longlong)auStack_248 + lVar25);
              uStack_f1 = 1;
              lStack_258 = lVar20;
              pdb_140df4150(&fStack_208,lVar33);
              fVar52 = *(float *)(&UNK_142e37810 + (ulonglong)(bVar6 == 0) * 4);
              fVar43 = fVar52 * fVar49;
              fVar58 = fStack_204 * 0.0 * _UNK_142e36f64;
              fVar46 = fVar58 + fVar43;
              fVar43 = fStack_204 * _DAT_142e36f28 * _DAT_142e36f60 + fVar43;
              fVar58 = fVar58 - fVar52 * fVar53;
              fVar54 = fVar51 * fVar58 + fVar50 * fVar43 + fVar57 * fVar46;
              fVar54 = fVar54 + fVar54;
              fStack_238 = (fVar57 * fVar43 - fVar46 * fVar50) * fVar48 +
                           fVar54 * fVar51 + fVar58 * fVar47 + fVar23;
              fVar52 = (float)((uint)fVar52 ^ uVar16);
              fVar55 = (float)((uint)fVar52 & uVar16);
              fVar59 = fVar51 * fVar52 + fVar50 * fVar55 + fVar57 * fVar55;
              fVar59 = fVar59 + fVar59;
              uStack_234 = CONCAT44((fVar51 * fVar55 - fVar52 * fVar57) * fVar48 +
                                    fVar59 * fVar50 + fVar45 * fVar55,
                                    (fVar50 * fVar52 - fVar55 * fVar51) * fVar48 +
                                    fVar59 * fVar57 + fVar56 * fVar55);
              fStack_22c = (fVar57 * fVar55 - fVar55 * fVar50) * fVar48 +
                           fVar59 * fVar51 + fVar47 * fVar52;
              uStack_240 = CONCAT44((fVar51 * fVar46 - fVar58 * fVar57) * fVar48 +
                                    fVar54 * fVar50 + fVar43 * fVar45 +
                                    (float)((ulonglong)uVar4 >> 0x20),
                                    (fVar50 * fVar58 - fVar43 * fVar51) * fVar48 +
                                    fVar54 * fVar57 + fVar46 * fVar56 + (float)uVar4);
              uStack_f1 = 1;
              in_stack_fffffffffffffb98 = CONCAT44(uVar38,0x101);
              pdb_1409ed340(acStack_298,param_2,&uStack_240,uVar17,in_stack_fffffffffffffb98);
              iVar18 = iStack_294;
              lVar25 = lVar20;
              if (((iStack_264 != 2) && (acStack_298[0] == '\x04')) && (lStack_290 == 2)) {
                iStack_14c = iStack_294;
                uStack_f1 = 1;
                piVar28 = (int *)pdb_140c40010(uStack_228,iStack_294);
                if (piVar28 != (int *)0x0) {
                  uStack_f1 = 1;
                  puVar21 = (undefined8 *)pdb_140901170(piVar28,&UNK_142e37cd0);
                  if (*piVar28 == 6) {
                    uVar7 = *puVar21;
                    uStack_f1 = 1;
                    pdb_140c26890(&fStack_208,param_5,*(undefined8 *)(piVar28 + 2));
                    uVar11 = uStack_1e8;
                    if (fStack_208 != 4.2039e-45) {
                      uStack_1a0 = uStack_1bc;
                      fStack_198 = fStack_1b4;
                      if (iStack_1c0 == 1) {
                        uStack_128 = CONCAT44(uStack_128._4_4_,uStack_1b0);
                        auStack_178 = ZEXT416(uStack_1a8);
                        uStack_f1 = 1;
                        plVar22 = (longlong *)pdb_1406d0830(lStack_180);
                        if (plVar22[3] != 0) {
                          uVar26 = pdb_1400aede0(plVar22 + 4,&iStack_14c);
                          lVar20 = *plVar22;
                          uVar24 = plVar22[1];
                          bVar36 = (byte)(uVar26 >> 0x39);
                          auVar39 = ZEXT216(CONCAT11(bVar36,bVar36));
                          auVar39 = pshuflw(auVar39,auVar39,0);
                          lVar29 = 0;
                          do {
                            uVar26 = uVar26 & uVar24;
                            auVar5 = *(undefined1 (*) [16])(lVar20 + uVar26);
                            auVar44[0] = -(auVar5[0] == auVar39[0]);
                            auVar44[1] = -(auVar5[1] == auVar39[1]);
                            auVar44[2] = -(auVar5[2] == auVar39[2]);
                            auVar44[3] = -(auVar5[3] == auVar39[3]);
                            auVar44[4] = -(auVar5[4] == auVar39[4]);
                            auVar44[5] = -(auVar5[5] == auVar39[5]);
                            auVar44[6] = -(auVar5[6] == auVar39[6]);
                            auVar44[7] = -(auVar5[7] == auVar39[7]);
                            auVar44[8] = -(auVar5[8] == auVar39[0]);
                            auVar44[9] = -(auVar5[9] == auVar39[1]);
                            auVar44[10] = -(auVar5[10] == auVar39[2]);
                            auVar44[0xb] = -(auVar5[0xb] == auVar39[3]);
                            auVar44[0xc] = -(auVar5[0xc] == auVar39[4]);
                            auVar44[0xd] = -(auVar5[0xd] == auVar39[5]);
                            auVar44[0xe] = -(auVar5[0xe] == auVar39[6]);
                            auVar44[0xf] = -(auVar5[0xf] == auVar39[7]);
                            uVar31 = (ushort)(SUB161(auVar44 >> 7,0) & 1) |
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
                            uVar37 = (uint)uVar31;
                            while (uVar31 != 0) {
                              uVar8 = 0;
                              for (uVar9 = uVar37; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000
                                  ) {
                                uVar8 = uVar8 + 1;
                              }
                              uVar32 = uVar8 + uVar26 & uVar24;
                              if (iVar18 == *(int *)(lVar20 + -0x28 + uVar32 * -0x28)) {
                                uStack_f1 = 1;
                                puVar21 = (undefined8 *)
                                          pdb_1408ddef0(lVar20 + uVar32 * -0x28 + -0x20);
                                if (((puVar21 == (undefined8 *)0x0) || (uVar24 == 0)) ||
                                   ((int)*puVar21 == 0)) goto LAB_140085050;
                                uStack_210 = *puVar21;
                                fVar52 = (float)pub_142e32980();
                                auStack_178._0_4_ = fVar52 * _DAT_142e36f50;
                                uStack_128 = pub_142e32b30();
                                uStack_120 = extraout_XMM0_Qb;
                                uVar37 = pub_142e329e0();
                                fStack_208 = (float)uStack_1a0;
                                fStack_204 = (float)((ulonglong)uStack_1a0 >> 0x20);
                                fStack_200 = fStack_198;
                                if (uStack_100 == 0) {
                                  lVar20 = 0;
                                  uVar24 = 0;
LAB_14008546b:
                                  lVar29 = 0;
                                }
                                else {
                                  uVar24 = 0;
                                  if (uStack_118 <= uStack_108) {
                                    uVar24 = uStack_118;
                                  }
                                  lVar20 = uStack_108 - uVar24;
                                  lVar29 = uStack_100 - (uStack_118 - lVar20);
                                  uVar24 = uStack_118;
                                  if (uStack_100 < uStack_118 - lVar20 || lVar29 == 0) {
                                    uVar24 = uStack_100 + lVar20;
                                    goto LAB_14008546b;
                                  }
                                }
                                lVar30 = uStack_110 + lVar20 * 0x1c0;
                                lVar20 = uVar24 * 0x1c0 + lVar20 * -0x1c0;
                                goto LAB_1400854b0;
                              }
                              uVar31 = (ushort)(uVar37 - 1) & (ushort)uVar37;
                              uVar37 = CONCAT22((short)(uVar37 - 1 >> 0x10),uVar31);
                            }
                            auVar42[0] = -(auVar5[0] == -1);
                            auVar42[1] = -(auVar5[1] == -1);
                            auVar42[2] = -(auVar5[2] == -1);
                            auVar42[3] = -(auVar5[3] == -1);
                            auVar42[4] = -(auVar5[4] == -1);
                            auVar42[5] = -(auVar5[5] == -1);
                            auVar42[6] = -(auVar5[6] == -1);
                            auVar42[7] = -(auVar5[7] == -1);
                            auVar42[8] = -(auVar5[8] == -1);
                            auVar42[9] = -(auVar5[9] == -1);
                            auVar42[10] = -(auVar5[10] == -1);
                            auVar42[0xb] = -(auVar5[0xb] == -1);
                            auVar42[0xc] = -(auVar5[0xc] == -1);
                            auVar42[0xd] = -(auVar5[0xd] == -1);
                            auVar42[0xe] = -(auVar5[0xe] == -1);
                            auVar42[0xf] = -(auVar5[0xf] == -1);
                            if ((((((((((((((((SUB161(auVar42 >> 7,0) & 1) != 0 ||
                                             (SUB161(auVar42 >> 0xf,0) & 1) != 0) ||
                                            (SUB161(auVar42 >> 0x17,0) & 1) != 0) ||
                                           (SUB161(auVar42 >> 0x1f,0) & 1) != 0) ||
                                          (SUB161(auVar42 >> 0x27,0) & 1) != 0) ||
                                         (SUB161(auVar42 >> 0x2f,0) & 1) != 0) ||
                                        (SUB161(auVar42 >> 0x37,0) & 1) != 0) ||
                                       (SUB161(auVar42 >> 0x3f,0) & 1) != 0) ||
                                      (SUB161(auVar42 >> 0x47,0) & 1) != 0) ||
                                     (SUB161(auVar42 >> 0x4f,0) & 1) != 0) ||
                                    (SUB161(auVar42 >> 0x57,0) & 1) != 0) ||
                                   (SUB161(auVar42 >> 0x5f,0) & 1) != 0) ||
                                  (SUB161(auVar42 >> 0x67,0) & 1) != 0) ||
                                 (SUB161(auVar42 >> 0x6f,0) & 1) != 0) ||
                                (SUB161(auVar42 >> 0x77,0) & 1) != 0) || auVar42[0xf] < '\0') break;
                            uVar26 = uVar26 + lVar29 + 0x10;
                            lVar29 = lVar29 + 0x10;
                          } while( true );
                        }
                      }
                    }
                  }
                }
              }
              goto LAB_140085050;
            }
            goto LAB_140084b35;
          }
        }
      }
      fStack_204 = (float)uVar26;
      uStack_f1 = 1;
      fStack_208 = fVar23;
      fStack_200 = (float)(uint)uVar24;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_142e380d0,0x2b,&fStack_208,&UNK_142e380b0,&UNK_142e37ce8);
    }
  }
  uStack_1f8 = uStack_108;
  uStack_1f0 = uStack_100;
  fStack_208 = (float)uStack_118;
  fStack_204 = (float)(uStack_118 >> 0x20);
  fStack_200 = (float)uStack_110;
  iStack_1fc = (int)(uStack_110 >> 0x20);
  uVar35 = uStack_118 - uStack_100;
  uVar27 = uStack_108;
  if (uStack_108 <= uVar35) goto joined_r0x0001400857a2;
  uVar34 = uStack_118 - uStack_108;
  uVar27 = uStack_100 - uVar34;
  if (uVar35 < uVar34) {
    if (uVar27 <= uVar35) {
      pub_142e32770(uStack_110 + uVar27 * 0x1c0,uStack_108 * 0x1c0 + uStack_110,uVar34 * 0x1c0);
      pub_142e32760(uVar19 * 0x1c0 + uVar26,uVar26,uVar27 * 0x1c0);
      goto joined_r0x0001400857a2;
    }
    if (uVar27 < uVar34) {
      if (uStack_118 != uStack_100) {
        pub_142e32770(uVar35 * 0x1c0 + uStack_110,uStack_110,uVar27 * 0x1c0);
      }
      pdb_14047a770(uVar35 * 0x1c0 + uVar26,uVar19,uVar27);
      uVar27 = uVar35;
      goto joined_r0x0001400857a2;
    }
    if (uStack_118 != uStack_100) {
      pub_142e32770(uVar27 * 0x1c0 + uStack_110,uStack_108 * 0x1c0 + uStack_110,uVar34 * 0x1c0);
    }
    pdb_14047a960(uVar26,uVar19,uVar34);
  }
  else {
    pub_142e32770(uStack_110 + uVar34 * 0x1c0,uStack_110,uVar27 * 0x1c0);
    pub_142e32760(uVar26,uVar32 * 0x1c0 + uVar26,uVar34 * 0x1c0);
  }
  uVar27 = 0;
joined_r0x0001400857a2:
  if (uVar27 != 0) {
    pub_142e32770(uVar26,uVar27 * 0x1c0 + uVar26,uVar19 * 0x1c0);
  }
  *puStack_218 = uVar24;
  puStack_218[1] = uVar26;
  puStack_218[2] = uVar19;
  if (lStack_148 != 0) {
    pub_1406abac0(pbStack_140,lStack_148 * 0x50,0x10);
  }
  return;
  while( true ) {
    lVar20 = lVar20 + -0x1c0;
    piVar28 = (int *)(lVar30 + 0x188);
    lVar30 = lVar30 + 0x1c0;
    if (*piVar28 == iVar18) break;
LAB_1400854b0:
    if (lVar20 == 0) {
      lVar29 = lVar29 * 0x1c0;
      uVar24 = uStack_110;
      goto LAB_1400854e0;
    }
  }
  goto LAB_140085050;
  while( true ) {
    lVar29 = lVar29 + -0x1c0;
    piVar28 = (int *)(uVar24 + 0x188);
    uVar24 = uVar24 + 0x1c0;
    if (*piVar28 == iVar18) break;
LAB_1400854e0:
    if (lVar29 == 0) {
      uVar38 = 0;
      uVar40 = (undefined4)uStack_128;
      uVar41 = 0;
      if (lStack_138 == lStack_148) {
        uStack_f1 = 1;
        uStack_128 = uStack_128 << 0x20;
        uStack_120 = (ulonglong)uVar37 << 0x20;
        auStack_178._0_8_ = lStack_138;
        pdb_142d7eb40(&lStack_148,uVar37);
        lStack_138 = auStack_178._0_8_;
        uVar38 = (undefined4)uStack_128;
        uVar40 = uStack_128._4_4_;
        uVar41 = (undefined4)uStack_120;
        uVar37 = uStack_120._4_4_;
      }
      lVar20 = lStack_138 * 0x50;
      pbVar3 = pbStack_140 + lVar20;
      *(undefined4 *)pbVar3 = uVar38;
      *(undefined4 *)(pbVar3 + 4) = uVar40;
      *(undefined4 *)(pbVar3 + 8) = uVar41;
      *(uint *)(pbVar3 + 0xc) = uVar37;
      *(undefined8 *)(pbStack_140 + lVar20 + 0x10) = uStack_210;
      *(undefined8 *)(pbStack_140 + lVar20 + 0x18) = uVar11;
      *(undefined8 *)(pbStack_140 + lVar20 + 0x20) = uVar7;
      *(int *)(pbStack_140 + lVar20 + 0x28) = iVar18;
      *(ulonglong *)(pbStack_140 + lVar20 + 0x2c) = CONCAT44(fStack_204,fStack_208);
      *(float *)(pbStack_140 + lVar20 + 0x34) = fStack_200;
      pbStack_140[lVar20 + 0x40] = bVar6;
      lStack_138 = lStack_138 + 1;
      break;
    }
  }
  goto LAB_140085050;
}

