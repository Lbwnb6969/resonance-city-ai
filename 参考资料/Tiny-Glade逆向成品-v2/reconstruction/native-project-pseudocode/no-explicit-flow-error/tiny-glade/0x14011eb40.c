// VA 0x14011eb40, PDB extent 3351 bytes
// tiny_glade::tgsr_capture::run_clip_writer
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/tgsr_capture.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x00014011ef1f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::tgsr_capture::run_clip_writer
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/tgsr_capture.rs
   Extent: 3351 */

undefined8
pdb_14011eb40(undefined8 param_1,ulonglong *param_2,longlong param_3,longlong param_4,
             undefined8 param_5)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  byte *pbVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  undefined *puVar12;
  ulonglong *puVar13;
  longlong lVar14;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  ulonglong uStack_228;
  ulonglong *puStack_220;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 *puStack_1b0;
  code *pcStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 uStack_198;
  char cStack_190;
  undefined4 uStack_18f;
  undefined3 uStack_18b;
  undefined8 uStack_188;
  ulonglong *puStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined1 uStack_140;
  undefined1 uStack_13f;
  undefined1 uStack_13e;
  undefined1 uStack_13d;
  undefined4 uStack_13c;
  undefined1 uStack_138;
  undefined7 uStack_137;
  ulonglong *puStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulonglong *puStack_80;
  ulonglong *puStack_78;
  ulonglong *puStack_70;
  ulonglong *puStack_68;
  ulonglong *puStack_60;
  ulonglong *puStack_58;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_b8 = param_5;
  uStack_158 = (ulonglong *)CONCAT71(uStack_158._1_7_,1);
  uStack_188 = param_1;
  puStack_180 = param_2;
  lStack_c0 = param_4;
  uStack_b0 = param_1;
  puStack_68 = param_2;
  lVar5 = pdb_140f46c40(&uStack_158);
  if (lVar5 == 0) {
    puStack_80 = (ulonglong *)0x0;
    puStack_78 = (ulonglong *)0x8;
    puStack_70 = (ulonglong *)0x0;
    puVar4 = (undefined *)0x0;
    lVar5 = 0;
    while (lVar14 = lVar5, puVar12 = puVar4, lVar14 != 0x40) {
      if ((undefined *)0x3 < puVar12) {
        uStack_49 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(puVar12,4,&UNK_142e46d38);
      }
      puVar4 = puVar12 + 1;
      lVar5 = lVar14 + 0x10;
      if (*(int *)(param_3 + 0x10 + (longlong)puVar12 * 4) != 0) {
        uStack_49 = 1;
        pdb_140f3e9e0(&uStack_228,uStack_b0,puStack_68,*(undefined8 *)(&DAT_142e46b18 + lVar14),
                      *(undefined8 *)(&UNK_142e46b20 + lVar14));
        uStack_158 = (ulonglong *)((ulonglong)uStack_158 & 0xffffffff00000000);
        uStack_150 = (ulonglong *)0x0;
        uStack_148 = 7;
        uStack_138 = 0;
        uStack_144 = 0;
        uStack_140 = 0;
        uStack_13e = 0;
        uStack_13f = 1;
        uStack_13d = 1;
        uStack_13c = 1;
        puStack_60 = puStack_220;
        puVar10 = puStack_220;
        lVar7 = pdb_140f4a2a0(&uStack_158,puStack_220,CONCAT44(uStack_214,uStack_218));
        puStack_58 = puVar10;
        if (uStack_228 != 0) {
          pub_1406abac0((byte *)puStack_60,uStack_228,1);
        }
        if (lVar7 == 1) {
          uStack_49 = 1;
          uVar6 = pdb_142d88fc0(puStack_58);
          goto LAB_14011efa3;
        }
        pdb_14007ee60();
        pbVar8 = pub_1406abab0(0x100000,1);
        puVar10 = puStack_70;
        if (pbVar8 == (byte *)0x0) {
          pdb_142dc7e2a(1,0x100000);
LAB_14011f49a:
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        uStack_150 = (ulonglong *)0x100000;
        uStack_148 = SUB84(pbVar8,0);
        uStack_144 = (undefined4)((ulonglong)pbVar8 >> 0x20);
        uStack_140 = 0;
        uStack_13f = 0;
        uStack_13e = 0;
        uStack_13d = 0;
        uStack_13c = 0;
        uStack_138 = 0;
        puStack_130 = puStack_58;
        uStack_158 = (ulonglong *)puVar12;
        if (puStack_70 == puStack_80) {
          pdb_142d7e7c0(&puStack_80);
        }
        puStack_78[(longlong)puVar10 * 6 + 4] = CONCAT71(uStack_137,uStack_138);
        (puStack_78 + (longlong)puVar10 * 6 + 4)[1] = (ulonglong)puStack_130;
        puStack_78[(longlong)puVar10 * 6 + 2] = CONCAT44(uStack_144,uStack_148);
        (puStack_78 + (longlong)puVar10 * 6 + 2)[1] =
             CONCAT44(uStack_13c,
                      CONCAT13(uStack_13d,CONCAT12(uStack_13e,CONCAT11(uStack_13f,uStack_140))));
        puVar13 = puStack_78 + (longlong)puVar10 * 6;
        *(undefined4 *)puVar13 = (undefined4)uStack_158;
        *(undefined4 *)((longlong)puVar13 + 4) = uStack_158._4_4_;
        *(undefined4 *)(puVar13 + 1) = (undefined4)uStack_150;
        *(undefined4 *)((longlong)puVar13 + 0xc) = uStack_150._4_4_;
        puStack_70 = (ulonglong *)((longlong)puVar10 + 1);
      }
    }
    while( true ) {
      if (lStack_c0 == 0) {
        uStack_49 = 1;
        pdb_1404743b0(&uStack_158,uStack_b8);
      }
      else if ((int)lStack_c0 == 1) {
        uStack_49 = 1;
        pdb_14015ec20();
      }
      else {
        uStack_49 = 1;
        pdb_14052f3e0();
      }
      if (uStack_158 == (ulonglong *)0x8000000000000003) break;
      puStack_58 = (ulonglong *)CONCAT44(uStack_144,uStack_148);
      uVar3 = CONCAT44(uStack_13c,
                       CONCAT13(uStack_13d,CONCAT12(uStack_13e,CONCAT11(uStack_13f,uStack_140))));
      uStack_228 = CONCAT71(uStack_137,uStack_138);
      puStack_220 = puStack_130;
      uStack_218 = uStack_128;
      uStack_214 = uStack_124;
      uStack_210 = uStack_120;
      uStack_20c = uStack_11c;
      uStack_208 = uStack_118;
      uStack_204 = uStack_114;
      uStack_200 = uStack_110;
      uStack_1fc = uStack_10c;
      uStack_1f8 = uStack_108;
      uStack_1f4 = uStack_104;
      uStack_1f0 = uStack_100;
      uStack_1ec = uStack_fc;
      uStack_1e8 = uStack_f8;
      uStack_1e0 = uStack_f0;
      uStack_1d8 = uStack_e8;
      uStack_1d0 = uStack_e0;
      uStack_1c8 = uStack_d8;
      uStack_1c4 = uStack_d4;
      uStack_1c0 = uStack_d0;
      uStack_1bc = uStack_cc;
      uVar9 = (ulonglong)uStack_158 ^ 0x8000000000000000;
      if (-1 < (longlong)uStack_158) {
        uVar9 = 1;
      }
      if (uVar9 != 0) {
        if (uVar9 != 1) {
          uStack_148 = SUB84(puStack_70,0);
          uStack_144 = (undefined4)((ulonglong)puStack_70 >> 0x20);
          uStack_158 = puStack_80;
          uStack_150 = puStack_78;
          uStack_49 = 0;
          pdb_1404a1060(&uStack_158);
          uStack_49 = 0;
          uStack_158 = (ulonglong *)pdb_140f4ef90(uStack_b0,puStack_68);
          if (uStack_158 != (ulonglong *)0x0) {
            uStack_49 = 0;
            pdb_1404b38e0(&uStack_158);
          }
          if (1 < *_DAT_143ca8e90) {
            puStack_a8 = &uStack_188;
            uStack_a0 = pdb_140117670;
            uStack_158 = (ulonglong *)&UNK_142e46cf0;
            uStack_150 = (ulonglong *)0x18;
            uStack_148 = 0x42e46cf0;
            uStack_144 = 1;
            uStack_140 = 0x18;
            uStack_13f = 0;
            uStack_13e = 0;
            uStack_13d = 0;
            uStack_13c = 0;
            uStack_138 = 0x20;
            uStack_137 = 0x142e46d;
            uStack_49 = 0;
            pdb_1400c9be0(&UNK_142e46d08,&puStack_a8,2,&uStack_158);
          }
          goto LAB_14011f211;
        }
        puVar13 = puStack_78 + (longlong)puStack_70 * 6;
        puVar10 = puStack_78;
        goto LAB_14011f0e0;
      }
      puStack_60 = uStack_150;
      puVar13 = puStack_78 + (longlong)puStack_70 * 6;
      puVar10 = puStack_78;
      while (puVar10 != puVar13) {
        uVar9 = *puVar10;
        if (3 < uVar9) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar9,4,&UNK_142e46c88);
        }
        uVar11 = (ulonglong)*(uint *)(param_3 + uVar9 * 4);
        uVar9 = (ulonglong)*(uint *)(param_3 + 0x10 + uVar9 * 4);
        if (uVar3 < uVar9 + uVar11) {
          pdb_142dc8420(uVar11,uVar9 + uVar11,uVar3,&UNK_142e46ca0);
          goto LAB_14011f49a;
        }
        uVar1 = puVar10[3];
        if (uVar9 < puVar10[1] - uVar1) {
          pub_142e32760(puVar10[2] + uVar1,uVar11 + (longlong)puStack_58,uVar9);
          puVar10[3] = uVar1 + uVar9;
          puVar10 = puVar10 + 6;
        }
        else {
          lVar5 = pdb_142db7090(puVar10 + 1,uVar11 + (longlong)puStack_58,uVar9);
          puVar10 = puVar10 + 6;
          if (lVar5 != 0) {
            uVar6 = pdb_142d88fc0();
            if (puStack_60 != (ulonglong *)0x0) {
              pub_1406abac0((byte *)puStack_58,(ulonglong)puStack_60,1);
            }
            goto LAB_14011efa3;
          }
        }
      }
      if (puStack_60 != (ulonglong *)0x0) {
        pub_1406abac0((byte *)puStack_58,(ulonglong)puStack_60,1);
      }
    }
    pdb_1404a1060(&puStack_80);
LAB_14011f211:
    uVar6 = 0;
  }
  else {
    uVar6 = pdb_142d88fc0(lVar5);
  }
  goto LAB_14011f01f;
  while( true ) {
    lVar5 = pdb_1400c23b0(puVar10 + 1);
    puVar10 = puVar10 + 6;
    if (lVar5 != 0) break;
LAB_14011f0e0:
    if (puVar10 == puVar13) {
      pdb_1401172a0(&puStack_a8,uStack_b0,puStack_68);
      if ((char)uStack_90 == '\x02') {
        uVar6 = pdb_142d88fc0();
      }
      else {
        uStack_170 = (undefined4)uStack_a0;
        uStack_16c = uStack_a0._4_4_;
        uStack_168 = (undefined4)uStack_98;
        uStack_164 = uStack_98._4_4_;
        uStack_15c = uStack_90._4_4_;
        uStack_178 = puStack_a8;
        uStack_160 = (undefined4)uStack_90;
        puStack_a8 = &uStack_178;
        uStack_4a = 1;
        lVar5 = pdb_140341110(&uStack_158,&puStack_a8);
        if (lVar5 == 0) {
          uStack_238 = uStack_168;
          uStack_234 = uStack_164;
          uStack_230 = uStack_160;
          uStack_22c = uStack_15c;
          uStack_248 = (undefined4)uStack_178;
          uStack_244 = uStack_178._4_4_;
          uStack_240 = uStack_170;
          uStack_23c = uStack_16c;
          uStack_4b = 1;
          pdb_140f3e9e0(&puStack_a8,uStack_b0,puStack_68,&UNK_142e46cb8,9);
          uStack_4b = 0;
          pdb_140117330(&puStack_1b0,&uStack_248,&puStack_a8);
          if (cStack_190 == '\x02') {
            CloseHandle();
            if (2 < *_DAT_143ca8e90) {
              puStack_1b0 = &uStack_188;
              pcStack_1a8 = pdb_140117670;
              puStack_a8 = (undefined8 *)&UNK_142e46cf0;
              uStack_a0 = (code *)0x18;
              uStack_98 = &UNK_142e46cf0;
              uStack_90 = 0x18;
              uStack_88 = &UNK_142e46cd8;
              uStack_4a = 0;
              pdb_1400c9be0(&UNK_142e46cc1,&puStack_1b0,3,&puStack_a8);
            }
            uVar6 = 0;
          }
          else {
            uStack_90 = uStack_198;
            uStack_a0 = pcStack_1a8;
            uStack_98 = (undefined *)CONCAT44(uStack_19c,uStack_1a0);
            uStack_88 = (undefined *)CONCAT44(CONCAT31(uStack_18b,uStack_18f._3_1_),uStack_18f << 8)
            ;
            puStack_a8 = puStack_1b0;
            uStack_88 = (undefined *)CONCAT71(uStack_88._1_7_,cStack_190);
            uStack_4a = 0;
            uVar6 = pdb_142d89060(&puStack_a8);
          }
        }
        else {
          uStack_4a = 1;
          uVar6 = pdb_142d88d30(lVar5);
          pdb_1404b92b0(&uStack_178);
        }
      }
      goto LAB_14011f24e;
    }
  }
  uVar6 = pdb_142d88fc0(lVar5);
LAB_14011f24e:
  uStack_49 = 1;
  pdb_1404bf6d0(&uStack_158);
LAB_14011efa3:
  puStack_60 = puStack_70;
  puStack_68 = puStack_78;
  puStack_58 = (ulonglong *)0x0;
  puVar10 = puStack_78 + 1;
  while (puStack_60 != puStack_58) {
    puStack_58 = (ulonglong *)((longlong)puStack_58 + 1);
    pdb_1404d5df0(puVar10);
    puVar10 = puVar10 + 6;
  }
  if (puStack_80 != (ulonglong *)0x0) {
    pub_1406abac0((byte *)puStack_68,(longlong)puStack_80 * 0x30,8);
  }
LAB_14011f01f:
  pdb_1404dad90(&lStack_c0);
  return uVar6;
}

