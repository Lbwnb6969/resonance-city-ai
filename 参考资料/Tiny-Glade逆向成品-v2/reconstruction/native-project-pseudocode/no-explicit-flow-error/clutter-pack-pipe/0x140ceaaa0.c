// VA 0x140ceaaa0, PDB extent 2577 bytes
// clutter_pack_pipe::GlbImport::image_slot
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: clutter_pack_pipe::GlbImport::image_slot
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
   Extent: 2577 */

void pdb_140ceaaa0(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  ulonglong arg0;
  int *piVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  code *pcVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  ulonglong uVar8;
  byte *pbVar9;
  undefined *puVar10;
  longlong lVar11;
  longlong lVar12;
  code *pcVar13;
  undefined1 uVar14;
  undefined8 uVar15;
  undefined1 uVar16;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  ulonglong *puStack_228;
  code *pcStack_220;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  ulonglong *puStack_1f8;
  undefined1 auStack_1f0 [8];
  uint uStack_1e8;
  uint uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  longlong lStack_1c8;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  ulonglong *puStack_1a8;
  code *pcStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  ulonglong *puStack_188;
  code *pcStack_180;
  code *pcStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  uint uStack_158;
  undefined4 uStack_154;
  uint uStack_150;
  uint uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  ulonglong uStack_118;
  ulonglong uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  ulonglong uStack_c8;
  byte *pbStack_c0;
  ulonglong uStack_b8;
  byte *pbStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong uStack_58;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  if (*param_3 == 0) {
    *param_1 = 0;
    return;
  }
  lStack_1c8 = param_3[2];
  uStack_1d8 = (undefined4)*param_3;
  uStack_1d4 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_1d0 = (undefined4)param_3[1];
  uStack_1cc = *(undefined4 *)((longlong)param_3 + 0xc);
  pdb_141d40190(&uStack_a8);
  lVar5 = (longlong)uStack_98;
  if (*(longlong *)(param_2 + 0xd0) != 0) {
    lVar7 = *(longlong *)(param_2 + 0xd0) << 3;
    lVar12 = 0;
    do {
      if ((code *)*(longlong *)(*(longlong *)(param_2 + 200) + lVar12 * 8) == uStack_98) {
        *(int *)(param_1 + 1) = (int)lVar12;
        goto LAB_140ceac99;
      }
      lVar12 = lVar12 + 1;
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
  }
  uStack_f0 = *(code **)(param_2 + 0xf0);
  lVar7 = *(longlong *)(param_2 + 0xf8);
  uVar8 = *(ulonglong *)(param_2 + 0x100);
  uStack_108 = *(ulonglong **)(uStack_f0 + 0x118);
  uStack_100 = (code *)(*(longlong *)(uStack_f0 + 0x120) * 0x58 + (longlong)uStack_108);
  uStack_f8 = (ulonglong *)0x0;
  pdb_141d35a90(&uStack_158,&uStack_108,uStack_98);
  if (CONCAT44(uStack_154,uStack_158) == 0) {
    pdb_140f3f5b0(&uStack_a8);
    puVar10 = &UNK_143087150;
    uVar15 = 0x1c;
  }
  else {
    uStack_1e8 = uStack_150;
    uStack_1e4 = uStack_14c;
    uStack_1e0 = uStack_148;
    uStack_1dc = uStack_144;
    pdb_141c47700(&uStack_a8,auStack_1f0);
    if (uStack_a8 == (ulonglong *)0x0) {
      pbVar9 = (byte *)pdb_142df6340(&UNK_143087244,0x19);
      goto LAB_140ceb041;
    }
    uStack_238 = (undefined4)uStack_88;
    uStack_234 = uStack_88._4_4_;
    uStack_230 = (undefined4)uStack_80;
    uStack_22c = uStack_80._4_4_;
    uStack_248 = (undefined4)uStack_98;
    uStack_244 = uStack_98._4_4_;
    uStack_240 = (undefined4)uStack_90;
    uStack_23c = uStack_90._4_4_;
    uStack_258 = (undefined4)uStack_a8;
    uStack_254 = uStack_a8._4_4_;
    uStack_250 = (undefined4)uStack_a0;
    uStack_24c = uStack_a0._4_4_;
    plVar2 = (longlong *)CONCAT44(uStack_74,uStack_78);
    if (CONCAT44(uStack_6c,uStack_70) == 9) {
      if ((char)plVar2[1] != 'g' || *plVar2 != 0x6e702f6567616d69) {
LAB_140ceb2b6:
        uStack_a0 = pdb_1402ed420;
        uStack_a8 = &uStack_108;
        pbVar9 = (byte *)pdb_142db1360(&UNK_14308716c,&uStack_a8);
        goto LAB_140ceb041;
      }
      uVar14 = 0;
    }
    else if ((CONCAT44(uStack_6c,uStack_70) != 10) ||
            (uVar14 = 1, (short)plVar2[1] != 0x6765 || *plVar2 != 0x706a2f6567616d69))
    goto LAB_140ceb2b6;
    pdb_141d40f60(&uStack_108,&uStack_258);
    if (uStack_f8 < uVar8) {
      piVar1 = (int *)CONCAT44(uStack_24c,uStack_250);
      if (*piVar1 == 1) {
        uVar8 = *(ulonglong *)(piVar1 + 2);
      }
      else {
        uVar8 = 0;
      }
      arg0 = *(ulonglong *)(piVar1 + 0xe);
      if ((!CARRY8(arg0,uVar8)) &&
         (arg0 + uVar8 <= *(ulonglong *)(lVar7 + 0x10 + (longlong)uStack_f8 * 0x18))) {
        lVar7 = *(longlong *)(lVar7 + 8 + (longlong)uStack_f8 * 0x18);
        uVar16 = arg0 == 0;
        if (-1 < (longlong)arg0) goto LAB_140ceace5;
        uVar15 = 0;
        do {
          uVar16 = 1;
          pdb_142dc7e2a(uVar15,arg0);
LAB_140ceace5:
          uStack_c8 = arg0;
          if ((bool)uVar16) {
            pbStack_c0 = (byte *)0x1;
            uStack_b8 = 0;
            goto LAB_140cead46;
          }
          pdb_14007ee60();
          uVar15 = 1;
          pbStack_c0 = pub_1406abab0(arg0,1);
        } while (pbStack_c0 == (byte *)0x0);
        pub_142e32760(pbStack_c0,uVar8 + lVar7,arg0);
        uStack_b8 = arg0;
LAB_140cead46:
        pcStack_170 = (code *)&uStack_88;
        uStack_88 = &uStack_c8;
        uStack_80 = (code *)0x0;
        uStack_78 = CONCAT31(uStack_78._1_3_,0xf);
        uStack_a8 = (ulonglong *)0x1;
        uStack_a0 = (code *)0x20000000;
        uStack_98 = (code *)((ulonglong)uStack_98._4_4_ << 0x20);
        uStack_90 = (code *)((ulonglong)uStack_90._4_4_ << 0x20);
        uStack_1b8 = 0;
        uStack_1b0 = 0;
        uStack_168 = 0x10;
        uStack_160 = 0x10;
        uStack_108 = &uStack_1b8;
        uStack_100 = (code *)0x10;
        uStack_f8 = (ulonglong *)0x0;
        pcVar13 = (code *)&uStack_108;
        uVar8 = pdb_141d42780(&pcStack_170);
        if ((uVar8 & 1) == 0) {
          uStack_80 = (code *)0x0;
          if ((code *)0x10 < pcVar13) {
            pdb_142dc8420(0,pcVar13,0x10,&UNK_1433cf920);
                    /* WARNING: Does not return */
            pcVar13 = (code *)invalidInstructionException();
            (*pcVar13)();
          }
          cVar6 = pdb_140d9e110(&uStack_1b8,pcVar13);
          if (cVar6 == '\x0f') {
            cVar6 = (char)uStack_78;
          }
          uStack_78 = CONCAT31(uStack_78._1_3_,cVar6);
          puStack_1a8 = (ulonglong *)uStack_98;
          pcStack_1a0 = uStack_90;
          uStack_198 = uStack_88;
          puVar3 = uStack_198;
          uStack_190 = uStack_80;
          pcVar4 = uStack_190;
          puStack_188 = (ulonglong *)CONCAT44(uStack_74,uStack_78);
          pcVar13 = uStack_a0;
          if (uStack_a8 == (ulonglong *)0x2) goto LAB_140ceae67;
          uStack_198._0_4_ = SUB84(uStack_88,0);
          uStack_198._4_4_ = (undefined4)((ulonglong)uStack_88 >> 0x20);
          uStack_190._0_4_ = SUB84(uStack_80,0);
          uStack_190._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
          uStack_208 = (undefined4)uStack_198;
          uStack_204 = uStack_198._4_4_;
          uStack_200 = (undefined4)uStack_190;
          uStack_1fc = uStack_190._4_4_;
          uStack_214 = uStack_98._4_4_;
          uStack_20c = uStack_90._4_4_;
          puStack_228 = uStack_a8;
          pcStack_220 = uStack_a0;
          uStack_218 = (int)uStack_98;
          uStack_210 = (int)uStack_90;
          puStack_1f8 = puStack_188;
          uStack_198 = puVar3;
          uStack_190 = pcVar4;
          pdb_141d428e0(&uStack_158,&puStack_228);
          uVar8 = uStack_b8;
          if (CONCAT44(uStack_154,uStack_158) == -0x7ffffffffffffff6) {
            uStack_158 = uStack_150;
            uStack_108 = (ulonglong *)CONCAT44(uStack_108._4_4_,uStack_14c);
            if (uStack_150 < 0x1001 && uStack_14c < 0x1001) {
              pbVar9 = pbStack_c0;
              if (!SBORROW8(0,uStack_c8)) {
                uStack_58 = uStack_c8;
                pbStack_b0 = pbStack_c0;
                uStack_118 = (ulonglong)(uStack_14c * uStack_150) + *(longlong *)(param_2 + 0x110);
                uStack_110 = uStack_118;
                if (0x8000000 < uStack_118) {
                  uStack_a8 = &uStack_118;
                  uStack_a0 = pdb_140f72a40;
                  uStack_98 = (code *)&UNK_143087320;
                  uStack_90 = pdb_140f72a40;
                  uVar15 = pdb_142db1360(&UNK_143087328,&uStack_a8);
                  param_1[1] = uVar15;
                  *(undefined4 *)param_1 = 1;
                  if (uStack_58 == 0) {
                    return;
                  }
                  pub_1406abac0(pbStack_b0,uStack_58,1);
                  return;
                }
                *(ulonglong *)(param_2 + 0x110) = uStack_118;
                lVar7 = *(longlong *)(param_2 + 0xe8);
                if (lVar7 == *(longlong *)(param_2 + 0xd8)) {
                  pdb_142d7e6e0(param_2 + 0xd8);
                }
                lVar12 = *(longlong *)(param_2 + 0xe0);
                lVar11 = lVar7 * 0x20;
                *(ulonglong *)(lVar12 + lVar11) = uStack_58;
                *(byte **)(lVar12 + 8 + lVar11) = pbStack_b0;
                *(ulonglong *)(lVar12 + 0x10 + lVar11) = uVar8;
                *(undefined1 *)(lVar12 + 0x18 + lVar11) = uVar14;
                *(longlong *)(param_2 + 0xe8) = lVar7 + 1;
                lVar7 = *(longlong *)(param_2 + 0xd0);
                if (lVar7 == *(longlong *)(param_2 + 0xc0)) {
                  pdb_142db0920(param_2 + 0xc0);
                }
                *(longlong *)(*(longlong *)(param_2 + 200) + lVar7 * 8) = lVar5;
                *(longlong *)(param_2 + 0xd0) = lVar7 + 1;
                *(int *)(param_1 + 1) = (int)(lVar7 + 1) + -1;
LAB_140ceac99:
                *param_1 = 0x100000000;
                return;
              }
              goto LAB_140ceb041;
            }
            uStack_a0 = pdb_140f71a50;
            uStack_90 = pdb_140f71a50;
            uStack_88 = (ulonglong *)&UNK_14308721c;
            uStack_80 = pdb_140f71a50;
            uStack_a8 = (ulonglong *)&uStack_158;
            uStack_98 = (code *)&uStack_108;
            pbVar9 = (byte *)pdb_142db1360(&UNK_143087220,&uStack_a8);
          }
          else {
            uStack_d8 = uStack_128;
            uStack_d4 = uStack_124;
            uStack_d0 = uStack_120;
            uStack_cc = uStack_11c;
            uStack_e8 = uStack_138;
            uStack_e4 = uStack_134;
            uStack_e0 = uStack_130;
            uStack_dc = uStack_12c;
            uStack_f8 = (ulonglong *)CONCAT44(uStack_144,uStack_148);
            uStack_f0 = (code *)CONCAT44(uStack_13c,uStack_140);
            uStack_108 = (ulonglong *)CONCAT44(uStack_154,uStack_158);
            uStack_100 = (code *)CONCAT44(uStack_14c,uStack_150);
            uStack_4a = 1;
            pdb_140f3f5b0(&uStack_a8);
            puStack_188 = uStack_88;
            pcStack_180 = uStack_80;
            uStack_198 = (ulonglong *)uStack_98;
            uStack_190 = uStack_90;
            puStack_1a8 = uStack_a8;
            pcStack_1a0 = uStack_a0;
            uStack_68 = uStack_128;
            uStack_64 = uStack_124;
            uStack_60 = uStack_120;
            uStack_5c = uStack_11c;
            uStack_78 = uStack_138;
            uStack_74 = uStack_134;
            uStack_70 = uStack_130;
            uStack_6c = uStack_12c;
            uStack_88 = (ulonglong *)CONCAT44(uStack_144,uStack_148);
            uStack_80 = (code *)CONCAT44(uStack_13c,uStack_140);
            uStack_98 = (code *)CONCAT44(uStack_154,uStack_158);
            uStack_90 = (code *)CONCAT44(uStack_14c,uStack_150);
            uStack_a8 = (ulonglong *)&UNK_1430871f9;
            uStack_a0 = (code *)0x23;
            uStack_4a = 0;
            pbVar9 = (byte *)pdb_142df6510(&uStack_a8,&puStack_1a8);
          }
        }
        else {
LAB_140ceae67:
          uStack_49 = 1;
          pcStack_170 = pcVar13;
          pdb_140f3f5b0(&uStack_a8);
          uStack_e8 = (undefined4)uStack_88;
          uStack_e4 = uStack_88._4_4_;
          uStack_e0 = (undefined4)uStack_80;
          uStack_dc = uStack_80._4_4_;
          uStack_f8 = (ulonglong *)uStack_98;
          uStack_f0 = uStack_90;
          uStack_108 = uStack_a8;
          uStack_100 = uStack_a0;
          uStack_a8 = (ulonglong *)&UNK_1430871e0;
          uStack_a0 = (code *)0x19;
          uStack_49 = 0;
          uStack_98 = pcVar13;
          pbVar9 = (byte *)pdb_142df6430(&uStack_a8,&uStack_108);
        }
        if (uStack_c8 != 0) {
          pub_1406abac0(pbStack_c0,uStack_c8,1);
        }
        goto LAB_140ceb041;
      }
      pdb_140f3f5b0(&uStack_a8);
      puVar10 = &UNK_1430871c5;
      uVar15 = 0x1b;
    }
    else {
      pdb_140f3f5b0(&uStack_a8);
      puVar10 = &UNK_1430871a8;
      uVar15 = 0x1d;
    }
  }
  pbVar9 = (byte *)pdb_142df67a0(puVar10,uVar15,&uStack_a8);
LAB_140ceb041:
  param_1[1] = pbVar9;
  *(undefined4 *)param_1 = 1;
  return;
}

