// VA 0x140abbe40, PDB extent 7301 bytes
// country_core::systems::audio::building_audio::building_audio
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/building_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140abd070) */
/* WARNING: Removing unreachable block (ram,0x000140abd079) */
/* WARNING: Removing unreachable block (ram,0x000140abd08f) */
/* WARNING: Removing unreachable block (ram,0x000140abd098) */
/* WARNING: Removing unreachable block (ram,0x000140abd0ab) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::audio::building_audio::building_audio
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/building_audio.rs
   Extent: 7301 */

void pdb_140abbe40(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,
                  longlong *param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  char cVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined *puVar13;
  ulonglong uVar14;
  byte *pbVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined *puVar18;
  ulonglong *arg0;
  longlong lVar19;
  uint uVar20;
  ulonglong uVar21;
  ushort uVar22;
  ulonglong uVar23;
  longlong lVar24;
  bool bVar25;
  byte bVar26;
  undefined4 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 unaff_XMM11_Ba;
  undefined1 unaff_XMM11_Bb;
  undefined1 unaff_XMM11_Bc;
  undefined1 unaff_XMM11_Bd;
  undefined1 unaff_XMM11_Be;
  undefined1 unaff_XMM11_Bf;
  undefined1 unaff_XMM11_Bg;
  undefined1 unaff_XMM11_Bh;
  undefined1 unaff_XMM11_Bi;
  undefined1 unaff_XMM11_Bj;
  undefined1 unaff_XMM11_Bk;
  undefined1 unaff_XMM11_Bl;
  undefined1 unaff_XMM11_Bm;
  undefined1 unaff_XMM11_Bn;
  undefined1 unaff_XMM11_Bo;
  undefined1 unaff_XMM11_Bp;
  undefined1 uStack_270;
  undefined1 uStack_26f;
  undefined8 uStack_258;
  undefined4 uStack_250;
  undefined1 auStack_248 [8];
  longlong lStack_240;
  longlong lStack_238;
  undefined1 auStack_230 [8];
  undefined8 *puStack_228;
  longlong lStack_220;
  undefined8 uStack_218;
  longlong lStack_210;
  longlong lStack_208;
  longlong lStack_200;
  longlong lStack_1f8;
  longlong lStack_1f0;
  longlong lStack_1e8;
  longlong lStack_1e0;
  longlong lStack_1d8;
  longlong lStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 uStack_1b8;
  longlong lStack_1b0;
  ulonglong *puStack_198;
  ulonglong *puStack_190;
  ulonglong *puStack_188;
  byte *pbStack_180;
  ulonglong *puStack_178;
  undefined1 uStack_170;
  undefined4 uStack_16f;
  undefined2 uStack_16b;
  undefined1 uStack_169;
  longlong *plStack_150;
  ulonglong *puStack_148;
  code *pcStack_140;
  ulonglong *puStack_138;
  byte *pbStack_130;
  ulonglong *puStack_128;
  undefined8 uStack_120;
  longlong *plStack_118;
  undefined1 uStack_102;
  undefined1 uStack_101;
  longlong *plStack_100;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  puStack_148 = (ulonglong *)*param_2;
  lVar19 = param_2[1];
  uVar14 = *puStack_148;
  uVar17 = 0;
  uVar23 = uVar14 - *(ulonglong *)(lVar19 + 0x18);
  if (uVar14 < *(ulonglong *)(lVar19 + 0x18)) {
    uVar23 = uVar17;
  }
  uVar21 = uVar14 - *(ulonglong *)(lVar19 + 0x38);
  if (uVar14 < *(ulonglong *)(lVar19 + 0x38)) {
    uVar21 = uVar17;
  }
  pcStack_140 = (code *)(uVar23 * 0x28 + *(longlong *)(lVar19 + 8));
  uVar14 = *(ulonglong *)(lVar19 + 0x10) - uVar23;
  if (*(ulonglong *)(lVar19 + 0x10) < uVar23) {
    pcStack_140 = (code *)0x8;
    uVar14 = uVar17;
  }
  pbStack_130 = (byte *)(uVar21 * 0x28 + *(longlong *)(lVar19 + 0x28));
  uVar23 = *(ulonglong *)(lVar19 + 0x30) - uVar21;
  if (*(ulonglong *)(lVar19 + 0x30) < uVar21) {
    pbStack_130 = (byte *)0x8;
    uVar23 = uVar17;
  }
  uStack_120 = uVar23 + uVar14;
  *puStack_148 = *(longlong *)(lVar19 + 0x40) - uStack_120;
  puStack_138 = (ulonglong *)((longlong)pcStack_140 + uVar14 * 0x28);
  puStack_128 = (ulonglong *)((longlong)pbStack_130 + uVar23 * 0x28);
  plStack_118 = param_5;
  plStack_100 = param_4;
  pdb_1416036e0(auStack_230,&puStack_148);
  puStack_148 = (ulonglong *)*param_3;
  lVar19 = param_3[1];
  uVar14 = *puStack_148;
  uVar23 = uVar14 - *(ulonglong *)(lVar19 + 0x18);
  if (uVar14 < *(ulonglong *)(lVar19 + 0x18)) {
    uVar23 = uVar17;
  }
  uVar21 = uVar14 - *(ulonglong *)(lVar19 + 0x38);
  if (uVar14 < *(ulonglong *)(lVar19 + 0x38)) {
    uVar21 = uVar17;
  }
  pcStack_140 = (code *)(uVar23 * 0x38 + *(longlong *)(lVar19 + 8));
  uVar14 = *(ulonglong *)(lVar19 + 0x10) - uVar23;
  if (*(ulonglong *)(lVar19 + 0x10) < uVar23) {
    pcStack_140 = (code *)0x8;
    uVar14 = uVar17;
  }
  pbStack_130 = (byte *)(uVar21 * 0x38 + *(longlong *)(lVar19 + 0x28));
  uVar23 = *(ulonglong *)(lVar19 + 0x30) - uVar21;
  if (*(ulonglong *)(lVar19 + 0x30) < uVar21) {
    pbStack_130 = (byte *)0x8;
    uVar23 = uVar17;
  }
  uStack_120 = uVar23 + uVar14;
  *puStack_148 = *(longlong *)(lVar19 + 0x40) - uStack_120;
  puStack_138 = (ulonglong *)((longlong)pcStack_140 + uVar14 * 7 * 8);
  puStack_128 = (ulonglong *)(pbStack_130 + uVar23 * 0x38);
  pdb_141601400(auStack_248,&puStack_148);
  puStack_1c8 = puStack_228 + lStack_220 * 4;
  plStack_150 = (longlong *)*param_1;
  iVar9 = -(uint)(CONCAT13(unaff_XMM11_Bd,
                           CONCAT12(unaff_XMM11_Bc,CONCAT11(unaff_XMM11_Bb,unaff_XMM11_Ba))) ==
                 CONCAT13(unaff_XMM11_Bd,
                          CONCAT12(unaff_XMM11_Bc,CONCAT11(unaff_XMM11_Bb,unaff_XMM11_Ba))));
  iVar10 = -(uint)(CONCAT13(unaff_XMM11_Bh,
                            CONCAT12(unaff_XMM11_Bg,CONCAT11(unaff_XMM11_Bf,unaff_XMM11_Be))) ==
                  CONCAT13(unaff_XMM11_Bh,
                           CONCAT12(unaff_XMM11_Bg,CONCAT11(unaff_XMM11_Bf,unaff_XMM11_Be))));
  iVar11 = -(uint)(CONCAT13(unaff_XMM11_Bl,
                            CONCAT12(unaff_XMM11_Bk,CONCAT11(unaff_XMM11_Bj,unaff_XMM11_Bi))) ==
                  CONCAT13(unaff_XMM11_Bl,
                           CONCAT12(unaff_XMM11_Bk,CONCAT11(unaff_XMM11_Bj,unaff_XMM11_Bi))));
  iVar12 = -(uint)(CONCAT13(unaff_XMM11_Bp,
                            CONCAT12(unaff_XMM11_Bo,CONCAT11(unaff_XMM11_Bn,unaff_XMM11_Bm))) ==
                  CONCAT13(unaff_XMM11_Bp,
                           CONCAT12(unaff_XMM11_Bo,CONCAT11(unaff_XMM11_Bn,unaff_XMM11_Bm))));
  puStack_1c0 = puStack_228;
LAB_140abc079:
  do {
    if (puStack_228 == puStack_1c8) {
      *(undefined4 *)plStack_100[2] = *(undefined4 *)((longlong)plStack_100 + 0x1c);
      lStack_210 = *plStack_100;
      lStack_208 = lStack_210 + 0x348;
      lStack_200 = lStack_210 + 0x380;
      lStack_1f8 = lStack_210 + 0x310;
      lStack_1f0 = lStack_210 + 0x268;
      lStack_1e8 = lStack_210 + 0x1c0;
      lStack_1e0 = lStack_210 + 0x118;
      lStack_1d8 = lStack_210 + 0x70;
      uStack_1b8 = *param_6;
      lStack_1b0 = lStack_240;
      plStack_150 = (longlong *)(lStack_238 * 0x2c + lStack_240);
      lStack_1d0 = lStack_210 + 0x38;
      uStack_270 = (undefined1)_DAT_14304ab30;
      uStack_26f = (undefined1)(_DAT_14304ab30 >> 8);
      uStack_102 = uStack_270;
      uStack_101 = uStack_26f;
      if (9 < (_DAT_14304ab30 & 0xff)) {
        puStack_148 = (ulonglong *)&uStack_102;
        pcStack_140 = pdb_140ac81d0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14304b2de,&puStack_148,&UNK_14304b338);
      }
      uStack_218 = 1;
                    /* WARNING: Could not recover jumptable at 0x000140abc509. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_14304c7d8 + *(int *)(&UNK_14304c7d8 + (_DAT_14304ab30 & 0xff) * 4)))();
      return;
    }
    puVar1 = puStack_228 + 4;
    cVar3 = *(char *)(puStack_228 + 3);
    bVar26 = *(byte *)((longlong)puStack_228 + 0x19);
    uStack_250 = *(undefined4 *)(puStack_228 + 2);
    uStack_258 = puStack_228[1];
    puVar4 = (ulonglong *)*puStack_228;
    uVar27 = *(undefined4 *)((longlong)puStack_228 + 0x14);
    puStack_228 = puVar1;
    if (cVar3 == '\x06') {
      bVar25 = (bVar26 & 1) == 0;
      arg0 = (ulonglong *)0x22;
      if (!bVar25) {
        arg0 = (ulonglong *)0x28;
      }
      puVar18 = &UNK_14304b350;
      puVar13 = &UNK_14304b372;
      goto LAB_140abc11e;
    }
    if (cVar3 == '\a') {
      bVar25 = (bVar26 & 1) == 0;
      arg0 = (ulonglong *)0x20;
      if (!bVar25) {
        arg0 = (ulonglong *)0x26;
      }
      puVar18 = &UNK_14304b39a;
      puVar13 = &UNK_14304b3ba;
      goto LAB_140abc11e;
    }
  } while (cVar3 != '\b');
  bVar25 = (bVar26 & 1) == 0;
  arg0 = (ulonglong *)0x1d;
  if (!bVar25) {
    arg0 = (ulonglong *)0x23;
  }
  puVar18 = &UNK_14304b3e0;
  puVar13 = &UNK_14304b3fd;
LAB_140abc11e:
  if (!bVar25) {
    puVar18 = puVar13;
  }
  plVar5 = (longlong *)*param_5;
  puStack_148 = puVar4;
  if (plVar5[3] != 0) {
    uVar14 = pdb_1400af0a0(plVar5 + 4,&puStack_148);
    lVar19 = *plVar5;
    bVar26 = (byte)(uVar14 >> 0x39);
    auVar28 = ZEXT216(CONCAT11(bVar26,bVar26));
    auVar28 = pshuflw(auVar28,auVar28,0);
    lVar16 = 0;
    while( true ) {
      uVar14 = uVar14 & plVar5[1];
      auVar2 = *(undefined1 (*) [16])(lVar19 + uVar14);
      auVar30[0] = -(auVar2[0] == auVar28[0]);
      auVar30[1] = -(auVar2[1] == auVar28[1]);
      auVar30[2] = -(auVar2[2] == auVar28[2]);
      auVar30[3] = -(auVar2[3] == auVar28[3]);
      auVar30[4] = -(auVar2[4] == auVar28[4]);
      auVar30[5] = -(auVar2[5] == auVar28[5]);
      auVar30[6] = -(auVar2[6] == auVar28[6]);
      auVar30[7] = -(auVar2[7] == auVar28[7]);
      auVar30[8] = -(auVar2[8] == auVar28[0]);
      auVar30[9] = -(auVar2[9] == auVar28[1]);
      auVar30[10] = -(auVar2[10] == auVar28[2]);
      auVar30[0xb] = -(auVar2[0xb] == auVar28[3]);
      auVar30[0xc] = -(auVar2[0xc] == auVar28[4]);
      auVar30[0xd] = -(auVar2[0xd] == auVar28[5]);
      auVar30[0xe] = -(auVar2[0xe] == auVar28[6]);
      auVar30[0xf] = -(auVar2[0xf] == auVar28[7]);
      uVar22 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe | (ushort)(auVar30[0xf] >> 7) << 0xf;
      uVar20 = (uint)uVar22;
      while (uVar22 != 0) {
        uVar7 = 0;
        for (uVar8 = uVar20; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        lVar24 = (uVar7 + uVar14 & plVar5[1]) * -0x2b0;
        if (puVar4 == *(ulonglong **)(lVar19 + -0x2b0 + lVar24)) {
          lVar19 = lVar19 + lVar24;
          if ((*(ulonglong *)(lVar19 + -0x298) < 2) || (*(float *)(lVar19 + -0x278) <= 0.0)) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_14304b420);
          }
          if (*plStack_150 == 0) {
            pdb_14007ee60();
            pbVar15 = pub_1406abab0((ulonglong)arg0,1);
            if (pbVar15 == (byte *)0x0) {
              pdb_142dc7e2a(1,arg0);
                    /* WARNING: Does not return */
              pcVar6 = (code *)invalidInstructionException();
              (*pcVar6)();
            }
            pub_142e32760(pbVar15,puVar18,arg0);
            puStack_148 = (ulonglong *)0x0;
            uStack_120 = CONCAT71(uStack_120._1_7_,2);
            puStack_138 = arg0;
            pbStack_130 = pbVar15;
            puStack_128 = arg0;
          }
          else {
            pdb_140a8b180(&puStack_148,*plStack_150 + 0x10,puVar18,arg0);
            if ((int)puStack_148 == 2) {
              puStack_198 = (ulonglong *)pcStack_140;
                    /* WARNING: Subroutine does not return */
              pdb_142dc8170(&UNK_14304c468,0x2b,&puStack_198,&UNK_14304c448,&UNK_14304b450);
            }
          }
          puStack_178 = puStack_128;
          uStack_170 = (undefined1)uStack_120;
          uStack_16f = uStack_120._1_4_;
          uStack_16b = uStack_120._5_2_;
          uStack_169 = uStack_120._7_1_;
          puStack_188 = puStack_138;
          pbStack_180 = pbStack_130;
          puStack_198 = puStack_148;
          puStack_190 = (ulonglong *)pcStack_140;
          pdb_140a8e190(&puStack_198,&uStack_258);
          pdb_140a8e730(&puStack_198,&UNK_14304b027,0xd,uVar27);
          if (1 < *(uint *)(lVar19 + -0x50)) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_143021f00);
          }
          if (*(uint *)(lVar19 + -0x50) == 1) {
            pdb_140df34b0(lVar19 + -0x4c);
            uVar27 = pdb_140de8220();
          }
          else {
            pdb_140defad0(lVar19 + -0x4c);
            uVar27 = pdb_140de8220();
          }
          pdb_140a8e730(&puStack_198,&UNK_14304b468,0xc,uVar27);
          pdb_140a8a6f0(&puStack_198);
          pdb_1409a5ed0(&puStack_198);
          if (puStack_188 != (ulonglong *)0x0) {
            pub_1406abac0(pbStack_180,(ulonglong)puStack_188,1);
          }
          goto LAB_140abc079;
        }
        uVar22 = (ushort)(uVar20 - 1) & (ushort)uVar20;
        uVar20 = CONCAT22((short)(uVar20 - 1 >> 0x10),uVar22);
      }
      auVar29[0] = -(auVar2[0] == (char)iVar9);
      auVar29[1] = -(auVar2[1] == (char)((uint)iVar9 >> 8));
      auVar29[2] = -(auVar2[2] == (char)((uint)iVar9 >> 0x10));
      auVar29[3] = -(auVar2[3] == (char)((uint)iVar9 >> 0x18));
      auVar29[4] = -(auVar2[4] == (char)iVar10);
      auVar29[5] = -(auVar2[5] == (char)((uint)iVar10 >> 8));
      auVar29[6] = -(auVar2[6] == (char)((uint)iVar10 >> 0x10));
      auVar29[7] = -(auVar2[7] == (char)((uint)iVar10 >> 0x18));
      auVar29[8] = -(auVar2[8] == (char)iVar11);
      auVar29[9] = -(auVar2[9] == (char)((uint)iVar11 >> 8));
      auVar29[10] = -(auVar2[10] == (char)((uint)iVar11 >> 0x10));
      auVar29[0xb] = -(auVar2[0xb] == (char)((uint)iVar11 >> 0x18));
      auVar29[0xc] = -(auVar2[0xc] == (char)iVar12);
      auVar29[0xd] = -(auVar2[0xd] == (char)((uint)iVar12 >> 8));
      auVar29[0xe] = -(auVar2[0xe] == (char)((uint)iVar12 >> 0x10));
      auVar29[0xf] = -(auVar2[0xf] == (char)((uint)iVar12 >> 0x18));
      if ((((((((((((((((SUB161(auVar29 >> 7,0) & 1) != 0 || (SUB161(auVar29 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar29 >> 0x17,0) & 1) != 0) || (SUB161(auVar29 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar29 >> 0x27,0) & 1) != 0) || (SUB161(auVar29 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar29 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar29 >> 0x3f,0) & 1) != 0) || (SUB161(auVar29 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar29 >> 0x4f,0) & 1) != 0) || (SUB161(auVar29 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar29 >> 0x5f,0) & 1) != 0) || (SUB161(auVar29 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar29 >> 0x6f,0) & 1) != 0) || (SUB161(auVar29 >> 0x77,0) & 1) != 0) ||
          auVar29[0xf] < '\0') break;
      uVar14 = uVar14 + lVar16 + 0x10;
      lVar16 = lVar16 + 0x10;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_14304b438);
}

