// VA 0x14087cdf0, PDB extent 67 bytes
// system_decorator::load_decorators::reload_decorators_after_mod_swap
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/load_decorators.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::load_decorators::reload_decorators_after_mod_swap
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/load_decorators.rs
   Extent: 67 */

void pdb_14087cdf0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  code *pcVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  byte *pbVar10;
  undefined *puVar11;
  char cVar12;
  uint uVar13;
  ulonglong *puVar14;
  byte *arg0;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong *puVar19;
  byte *pbStack_278;
  ulonglong uStack_270;
  undefined4 *puStack_268;
  undefined8 *puStack_260;
  ulonglong *puStack_258;
  ulonglong *puStack_250;
  undefined4 uStack_244;
  undefined8 uStack_240;
  undefined *puStack_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  byte *pbStack_130;
  byte **ppbStack_128;
  code *pcStack_120;
  undefined8 uStack_110;
  ulonglong uStack_108;
  ulonglong uStack_e8;
  ulonglong *puStack_e0;
  ulonglong *puStack_d8;
  ulonglong *puStack_d0;
  ulonglong *puStack_c8;
  undefined *puStack_c0;
  ulonglong uStack_b8;
  byte *pbStack_b0;
  undefined8 uStack_a8;
  byte *pbStack_a0;
  byte *pbStack_98;
  undefined1 uStack_78;
  undefined1 uStack_71;
  undefined8 uStack_70;
  
  puVar19 = (ulonglong *)*param_1;
  lVar6 = param_1[1];
  uVar18 = *(ulonglong *)(lVar6 + 0x40);
  uVar16 = 0;
  if (*puVar19 <= uVar18) {
    uVar16 = uVar18 - *puVar19;
  }
  uVar17 = *(longlong *)(lVar6 + 0x30) + *(longlong *)(lVar6 + 0x10);
  if (uVar16 <= uVar17) {
    uVar17 = uVar16;
  }
  if (uVar17 == 0) {
    return;
  }
  *puVar19 = uVar18;
  uStack_70 = 0xfffffffffffffffe;
  pdb_1414d2200(&puStack_e0,&UNK_14300eab0,0x18);
  puStack_258 = puStack_e0;
  puVar11 = _DAT_142e37950;
  if (SBORROW8(0,(longlong)puStack_e0)) {
    puStack_1b8 = &UNK_14300eac8;
    uStack_1b0 = (byte *)0x20;
    uStack_1a8 = puStack_d8;
    puStack_238 = (undefined *)0x3;
    puStack_238 = (undefined *)pdb_142de63b0(&puStack_1b8,&puStack_238);
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14300fff0,0x2b,&puStack_238,&UNK_14300ffd0,&UNK_14300eb18);
  }
  uVar18 = (longlong)puStack_d0 * 0x38;
  puVar2 = puStack_d8 + (longlong)puStack_d0 * 7;
  puStack_e0 = puStack_d8;
  puStack_d0 = puStack_258;
  uStack_240 = *param_4;
  uStack_244 = *(undefined4 *)((longlong)param_3 + 0x1c);
  uStack_110 = *param_3;
  puStack_268 = (undefined4 *)param_3[2];
  puVar19 = puStack_d8 + 0xb;
  puStack_250 = puStack_d8;
  puVar14 = puStack_d8;
  puStack_260 = param_2;
  puStack_c8 = puVar2;
  do {
    uVar18 = uVar18 - 0x38;
    if (puVar14 == puVar2) {
LAB_140877eea:
      if (puStack_258 != (ulonglong *)0x0) {
        pub_1406abac0((byte *)puStack_250,(longlong)puStack_258 * 0x38,8);
      }
      cVar12 = pdb_14007fac0();
      pbStack_a0 = (byte *)CONCAT44(pbStack_a0._4_4_,*(undefined4 *)((longlong)puStack_260 + 0x1c));
      puStack_c0 = (undefined *)*puStack_260;
      pbStack_98 = (byte *)puStack_260[2];
      if (cVar12 != '\x1a') {
        puStack_238 = (undefined *)CONCAT71(puStack_238._1_7_,cVar12);
        pdb_140948120(&puStack_238);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(cVar12) {
        case '\x1b':
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        default:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      return;
    }
    puVar1 = puVar14 + 7;
    puStack_d8 = puVar1;
    if (SBORROW8(0,*puVar14)) {
      if (puVar2 != puVar1) {
        uVar18 = uVar18 / 0x38;
        do {
          if (puVar19[-4] != 0) {
            pub_1406abac0((byte *)puVar19[-3],puVar19[-4],1);
          }
          if (puVar19[-1] != 0) {
            pub_1406abac0((byte *)*puVar19,puVar19[-1],1);
          }
          puVar19 = puVar19 + 7;
          uVar18 = uVar18 - 1;
        } while (uVar18 != 0);
      }
      goto LAB_140877eea;
    }
    pbStack_a0 = (byte *)puVar14[1];
    uVar16 = puVar14[2];
    puStack_c0 = (undefined *)puVar14[3];
    pbStack_98 = (byte *)puVar14[4];
    uVar8 = puVar14[5];
    uVar9 = puVar14[6];
    uVar17 = puVar14[5];
    uStack_71 = 1;
    uStack_108 = *puVar14;
    cVar12 = pdb_140d8af50(pbStack_98,uVar17);
    if (cVar12 == '\0') {
      uStack_71 = 1;
      cVar12 = pdb_140caeba0(pbStack_98,uVar17);
      if (cVar12 == '\0') goto LAB_140877bd0;
      uVar17 = uStack_108;
      pbVar10 = pbStack_a0;
      if (puStack_c0 != (undefined *)0x0) {
        pub_1406abac0(pbStack_98,(ulonglong)puStack_c0,1);
        uVar17 = uStack_108;
        pbVar10 = pbStack_a0;
      }
    }
    else {
LAB_140877bd0:
      pbVar10 = pbStack_a0;
      uVar17 = uStack_108;
      uVar15 = uVar16 - 5;
      if (4 < uVar16) {
        uVar13 = *(uint *)(pbStack_a0 + uVar15);
        uVar13 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 | uVar13 << 0x18
        ;
        if (uVar13 == 0x2e6a736f) {
          if (pbStack_a0[uVar16 - 1] == 0x6e) {
LAB_140877c47:
            pbStack_278 = pbStack_a0;
            puStack_1b8 = puStack_c0;
            uStack_1b0 = pbStack_98;
            uStack_71 = 0;
            uStack_270 = uVar15;
            uStack_1a8 = (ulonglong *)uVar8;
            uStack_1a0 = uVar9;
            pdb_1414d2c00(&puStack_238,&puStack_1b8);
            pbVar10 = pbStack_a0;
            if (SBORROW8(0,(longlong)puStack_238)) {
              puStack_1b8 = (undefined *)CONCAT44(uStack_22c,uStack_230);
                    /* WARNING: Subroutine does not return */
              pdb_142dc8170(&UNK_14300fff0,0x2b,&puStack_1b8,&UNK_14300ffd0,&UNK_14300fe88);
            }
            uStack_148 = uStack_1c8;
            uStack_140 = uStack_1c0;
            uStack_158 = uStack_1d8;
            uStack_150 = uStack_1d0;
            uStack_168 = uStack_1e8;
            uStack_160 = uStack_1e0;
            uStack_178 = uStack_1f8;
            uStack_170 = uStack_1f0;
            uStack_188 = uStack_208;
            uStack_184 = uStack_204;
            uStack_180 = uStack_200;
            uStack_17c = uStack_1fc;
            uStack_198 = uStack_218;
            uStack_194 = uStack_214;
            uStack_190 = uStack_210;
            uStack_18c = uStack_20c;
            uStack_1a8 = (ulonglong *)CONCAT44(uStack_224,uStack_228);
            uStack_1a0 = CONCAT44(uStack_21c,uStack_220);
            puStack_1b8 = puStack_238;
            uStack_1b0 = (byte *)CONCAT44(uStack_22c,uStack_230);
            if (6 < uVar15) {
              if ((uVar15 != 7) && ((char)pbStack_a0[7] < -0x40)) {
                uStack_78 = 1;
                pdb_142dc8070(pbStack_a0,uVar15,0,7,&UNK_14300fea0);
LAB_14087a01a:
                    /* WARNING: Does not return */
                pcVar7 = (code *)invalidInstructionException();
                (*pcVar7)();
              }
              pdb_14007ee60();
              arg0 = pub_1406abab0(7,1);
              if (arg0 == (byte *)0x0) {
                uStack_78 = 1;
                pdb_142dc7e2a(1,7);
                goto LAB_14087a01a;
              }
              uVar3 = *(undefined4 *)pbVar10;
              *(undefined4 *)(arg0 + 3) = *(undefined4 *)(pbVar10 + 3);
              *(undefined4 *)arg0 = uVar3;
              iVar4 = *(int *)arg0;
              iVar5 = *(int *)(arg0 + 3);
              pub_1406abac0(arg0,7,1);
              if (iVar5 == 0x656e696c && iVar4 == 0x6c74756f) {
                puStack_238 = puVar11;
                uStack_230 = 0x3f800000;
                uStack_78 = 1;
                pdb_140a97a10(&puStack_1b8,&puStack_238);
              }
            }
            uStack_1c8 = uStack_148;
            uStack_1c0 = uStack_140;
            uStack_1d8 = uStack_158;
            uStack_1d0 = uStack_150;
            uStack_1e8 = uStack_168;
            uStack_1e0 = uStack_160;
            uStack_1f8 = uStack_178;
            uStack_1f0 = uStack_170;
            uStack_208 = uStack_188;
            uStack_204 = uStack_184;
            uStack_200 = uStack_180;
            uStack_1fc = uStack_17c;
            uStack_218 = uStack_198;
            uStack_214 = uStack_194;
            uStack_210 = uStack_190;
            uStack_20c = uStack_18c;
            uStack_228 = (undefined4)uStack_1a8;
            uStack_224 = uStack_1a8._4_4_;
            uStack_220 = (undefined4)uStack_1a0;
            uStack_21c = uStack_1a0._4_4_;
            puStack_238 = puStack_1b8;
            uStack_230 = (undefined4)uStack_1b0;
            uStack_22c = uStack_1b0._4_4_;
            ppbStack_128 = &pbStack_278;
            pcStack_120 = pdb_1402ed400;
            pdb_140f60760(&uStack_b8,&UNK_14300feb8,&ppbStack_128);
            uStack_e8 = uStack_b8;
            *puStack_268 = uStack_244;
            pbStack_130 = pbStack_b0;
            pdb_140b0d740(&puStack_238,pbStack_b0,uStack_a8,uStack_240,uStack_110);
            uVar17 = uStack_108;
            pbVar10 = pbStack_a0;
            if (uStack_e8 != 0) {
              pub_1406abac0(pbStack_130,uStack_e8,1);
              uVar17 = uStack_108;
              pbVar10 = pbStack_a0;
            }
            goto joined_r0x000140877c28;
          }
        }
        else if (((uVar13 < 0x2e6a7370) - 1 | 1) == 0) goto LAB_140877c47;
      }
      if (puStack_c0 != (undefined *)0x0) {
        pub_1406abac0(pbStack_98,(ulonglong)puStack_c0,1);
      }
    }
joined_r0x000140877c28:
    if (uVar17 != 0) {
      pub_1406abac0(pbVar10,uVar17,1);
    }
    puVar19 = puVar19 + 7;
    puVar14 = puVar1;
  } while( true );
}

