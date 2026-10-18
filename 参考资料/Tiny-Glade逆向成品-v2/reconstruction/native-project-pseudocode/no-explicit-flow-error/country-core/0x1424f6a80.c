// VA 0x1424f6a80, PDB extent 5328 bytes
// ron::ser::impl$11::serialize_field<ref_mut$<alloc::string::String>,alloc::vec::Vec<enum2$<country_core::game_key_bindings::InputBinding>,alloc::alloc::Global> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* Matched PDB project procedure:
   ron::ser::impl$11::serialize_field<ref_mut$<alloc::string::String>,alloc::vec::Vec<enum2$<country_core::game_key_bindings::InputBinding>,alloc::alloc::Global>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 5328 */

code * pdb_1424f6a80(code *param_1,ulonglong param_2,undefined *param_3,undefined8 param_4,
                    longlong param_5)

{
  byte bVar1;
  int iVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  code cVar12;
  undefined8 uVar13;
  longlong lVar14;
  ulonglong uVar15;
  byte *pbVar16;
  byte *pbVar17;
  ulonglong uVar18;
  code *pcVar19;
  code *pcVar20;
  code cVar21;
  byte *pbVar22;
  longlong *plVar23;
  int *piVar24;
  code cVar25;
  longlong lVar26;
  byte *pbVar27;
  ulonglong uVar28;
  byte *pbVar29;
  bool bVar30;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined8 uStack_248;
  byte *pbStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined6 uStack_1e0;
  undefined2 uStack_1da;
  undefined6 uStack_1d8;
  longlong lStack_1d2;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  ulonglong uStack_188;
  ulonglong *puStack_180;
  byte *pbStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  byte *pbStack_158;
  undefined1 uStack_150;
  undefined1 uStack_14f;
  undefined6 uStack_14e;
  undefined2 uStack_148;
  undefined6 uStack_146;
  undefined2 uStack_140;
  undefined6 uStack_13e;
  undefined2 uStack_138;
  undefined6 uStack_136;
  undefined1 uStack_130;
  undefined1 uStack_12f;
  undefined6 uStack_12e;
  undefined2 uStack_128;
  undefined6 uStack_126;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulonglong uStack_108;
  byte *pbStack_100;
  uint uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined3 uStack_6c;
  byte *pbStack_68;
  int *piStack_60;
  code *pcStack_58;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pbVar27 = *(byte **)(param_2 + 8);
  pcStack_58 = param_1;
  if (*(longlong *)(pbVar27 + 0x10) == -0x7fffffffffffffff) {
    uStack_b8 = 0x8000000000000000;
  }
  else {
    uStack_b8 = 0x8000000000000000;
    uVar18 = *(ulonglong *)(pbVar27 + 0x58);
    uVar13 = *(undefined8 *)(pbVar27 + 0x90);
    uVar6 = *(undefined8 *)(pbVar27 + 0x98);
    uVar7 = *(undefined8 *)(pbVar27 + 0x80);
    uVar8 = *(undefined8 *)(pbVar27 + 0x88);
    lVar14 = *(longlong *)(pbVar27 + 0x70);
    uVar9 = *(undefined8 *)(pbVar27 + 0x78);
    pbStack_238 = *(byte **)(pbVar27 + 0x60);
    uVar10 = *(undefined8 *)(pbVar27 + 0x68);
    *(int *)(pbVar27 + 0x88) = (int)uStack_88;
    *(int *)(pbVar27 + 0x8c) = uStack_88._4_4_;
    *(int *)(pbVar27 + 0x90) = (int)uStack_80;
    *(int *)(pbVar27 + 0x94) = uStack_80._4_4_;
    *(int *)(pbVar27 + 0x78) = (int)uStack_98;
    *(int *)(pbVar27 + 0x7c) = uStack_98._4_4_;
    *(int *)(pbVar27 + 0x80) = (int)uStack_90;
    *(int *)(pbVar27 + 0x84) = uStack_90._4_4_;
    *(int *)(pbVar27 + 0x68) = (int)uStack_a8;
    *(int *)(pbVar27 + 0x6c) = uStack_a8._4_4_;
    *(int *)(pbVar27 + 0x70) = (int)uStack_a0;
    *(int *)(pbVar27 + 0x74) = uStack_a0._4_4_;
    pbVar27[0x58] = 0;
    pbVar27[0x59] = 0;
    pbVar27[0x5a] = 0;
    pbVar27[0x5b] = 0;
    pbVar27[0x5c] = 0;
    pbVar27[0x5d] = 0;
    pbVar27[0x5e] = 0;
    pbVar27[0x5f] = 0x80;
    *(byte **)(pbVar27 + 0x60) = uStack_b0;
    *(undefined8 *)(pbVar27 + 0x98) = uStack_78;
    uStack_230 = uVar10;
    uStack_228 = lVar14;
    uStack_220 = uVar9;
    uStack_218 = uVar7;
    uStack_210 = uVar8;
    uStack_208 = uVar13;
    uStack_200 = uVar6;
    if (!SBORROW8(0,uVar18)) {
      uStack_230._0_4_ = (uint)uVar10;
      uStack_230._4_4_ = (undefined4)((ulonglong)uVar10 >> 0x20);
      uStack_228._0_4_ = (undefined4)lVar14;
      uStack_228._4_4_ = (undefined4)((ulonglong)lVar14 >> 0x20);
      uStack_220._0_4_ = (undefined4)uVar9;
      uStack_220._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
      uStack_218._0_4_ = (undefined4)uVar7;
      uStack_218._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      uStack_210._0_4_ = (undefined4)uVar8;
      uStack_210._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
      uStack_208._0_4_ = (undefined4)uVar13;
      uStack_208._4_4_ = (undefined4)((ulonglong)uVar13 >> 0x20);
      uStack_200._0_4_ = (undefined4)uVar6;
      uStack_200._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_f0 = (undefined4)uStack_228;
      uStack_ec = uStack_228._4_4_;
      uStack_e8 = (undefined4)uStack_220;
      uStack_e4 = uStack_220._4_4_;
      uStack_d0 = (undefined4)uStack_208;
      uStack_cc = uStack_208._4_4_;
      uStack_c8 = (undefined4)uStack_200;
      uStack_c4 = uStack_200._4_4_;
      uStack_e0 = (undefined4)uStack_218;
      uStack_dc = uStack_218._4_4_;
      uStack_d8 = (undefined4)uStack_210;
      uStack_d4 = uStack_210._4_4_;
      uStack_f8 = (uint)uStack_230;
      uStack_f4 = uStack_230._4_4_;
      uStack_108 = uVar18;
      pbStack_100 = pbStack_238;
      if (lVar14 != 0) {
        piStack_60 = (int *)0x8000000000000000;
        uVar13 = pdb_1400af950(&uStack_d0,param_3,param_4);
        pdb_140269080(&uStack_168,&uStack_f0,uVar13,param_3,param_4);
        puStack_180 = (ulonglong *)(pbVar27 + 0x58);
        if (!SBORROW8(0,(longlong)uStack_168)) {
          piStack_60 = (int *)CONCAT62(uStack_14e,CONCAT11(uStack_14f,uStack_150));
          uStack_1c8 = CONCAT62(uStack_146,uStack_148);
          uStack_1c0 = CONCAT62(uStack_13e,uStack_140);
          uStack_1b8 = CONCAT62(uStack_136,uStack_138);
          uStack_1b0 = CONCAT62(uStack_12e,CONCAT11(uStack_12f,uStack_130));
          uStack_1a8 = CONCAT62(uStack_126,uStack_128);
          uStack_1a0 = uStack_120;
          uStack_198 = uStack_118;
          uStack_190 = uStack_110;
          if (uStack_168 != (ulonglong *)0x0) {
            pub_1406abac0((byte *)pcStack_160,(ulonglong)uStack_168,1);
          }
        }
        pbStack_178 = pbVar27 + 0x60;
        uVar18 = *puStack_180;
        if (!SBORROW8(0,uVar18)) {
          if (uVar18 != 0) {
            pub_1406abac0(*(byte **)(pbVar27 + 0x60),uVar18,1);
          }
          if (*(longlong *)(pbVar27 + 0x70) != 0) {
            pdb_140265910(pbVar27 + 0x70,pbVar27 + 0x90,0x60,0x10);
          }
        }
        *(int **)(pbVar27 + 0x58) = piStack_60;
        *(int *)(pbVar27 + 0x90) = (int)uStack_198;
        *(int *)(pbVar27 + 0x94) = uStack_198._4_4_;
        *(int *)(pbVar27 + 0x98) = (int)uStack_190;
        *(int *)(pbVar27 + 0x9c) = uStack_190._4_4_;
        *(undefined8 *)(pbVar27 + 0x80) = uStack_1a8;
        *(undefined8 *)(pbVar27 + 0x88) = uStack_1a0;
        *(undefined8 *)(pbVar27 + 0x70) = uStack_1b8;
        *(undefined8 *)(pbVar27 + 0x78) = uStack_1b0;
        *(undefined8 *)(pbVar27 + 0x60) = uStack_1c8;
        *(undefined8 *)(pbVar27 + 0x68) = uStack_1c0;
      }
      uStack_78 = CONCAT44(uStack_c4,uStack_c8);
      uStack_88 = CONCAT44(uStack_d4,uStack_d8);
      uStack_80 = CONCAT44(uStack_cc,uStack_d0);
      uStack_98 = CONCAT44(uStack_e4,uStack_e8);
      uStack_90 = CONCAT44(uStack_dc,uStack_e0);
      uStack_a8 = CONCAT44(uStack_f4,uStack_f8);
      uStack_a0 = CONCAT44(uStack_ec,uStack_f0);
      uStack_b8 = uStack_108;
      uStack_b0 = pbStack_100;
    }
  }
  uStack_188 = param_2;
  uStack_170 = param_4;
  puStack_c0 = param_3;
  if (*(char *)(param_2 + 0x10) == '\0') {
    *(undefined1 *)(param_2 + 0x10) = 1;
    if (*(longlong *)(pbVar27 + 0x10) == -0x7fffffffffffffff) goto LAB_1424f7146;
LAB_1424f6e80:
    if (pbVar27[0xb5] != 1) {
      uVar18 = *(ulonglong *)(pbVar27 + 0xb8);
      if (uVar18 <= *(ulonglong *)(pbVar27 + 0xa0)) {
        uVar13 = *(undefined8 *)(pbVar27 + 0x30);
        uVar15 = *(ulonglong *)(pbVar27 + 0x38);
        for (uVar28 = 0; uVar28 != uVar18; uVar28 = uVar28 + 1) {
          plVar23 = *(longlong **)(pbVar27 + 0xc0);
          lVar14 = plVar23[2];
          if ((ulonglong)(*plVar23 - lVar14) < uVar15) {
            uStack_49 = 1;
            pdb_142d7f1b0(plVar23,lVar14,uVar15,1,1);
            lVar14 = plVar23[2];
LAB_1424f78c0:
            pub_142e32760(lVar14 + plVar23[1],uVar13,uVar15);
            lVar14 = plVar23[2];
          }
          else if (uVar15 != 0) goto LAB_1424f78c0;
          param_2 = lVar14 + uVar15;
          plVar23[2] = param_2;
        }
      }
      param_3 = puStack_c0;
      if (!SBORROW8(0,*(longlong *)(pbVar27 + 0x58))) {
        pbStack_158 = *(byte **)(pbVar27 + 0x60);
        pcStack_160 = *(code **)(pbVar27 + 0x68);
        uStack_168 = (ulonglong *)0x0;
        uStack_150 = SUB81(pcStack_160,0);
        uStack_14f = SUB81((ulonglong)pcStack_160 >> 8,0);
        uStack_14e = (undefined6)((ulonglong)pcStack_160 >> 0x10);
        uStack_148 = 0;
        uStack_146 = 0;
        uStack_140 = SUB82(pcStack_160,0);
        uStack_138 = 10;
        uStack_136 = 0xa0000;
        uStack_130 = 1;
        uStack_128 = 0;
        uStack_13e = uStack_14e;
        while( true ) {
          uStack_49 = 1;
          lVar14 = pdb_1424f4100(&uStack_168);
          param_3 = puStack_c0;
          param_4 = uStack_170;
          if (lVar14 == 0) break;
          if (param_2 == 0) {
LAB_1424f6f70:
            uVar18 = 0;
          }
          else {
            uVar18 = param_2;
            if (*(char *)(lVar14 + -1 + param_2) == '\n') {
              if (param_2 - 1 == 0) goto LAB_1424f6f70;
              uVar18 = param_2 - 1;
              if (*(char *)(lVar14 + -2 + param_2) == '\r') {
                uVar18 = param_2 - 2;
              }
            }
          }
          plVar23 = *(longlong **)(pbVar27 + 0xc0);
          lVar26 = plVar23[2];
          if ((ulonglong)(*plVar23 - lVar26) < 4) {
            uStack_49 = 1;
            pdb_142d7f1b0(plVar23,lVar26,4,1,1);
            lVar26 = plVar23[2];
          }
          *(undefined4 *)(plVar23[1] + lVar26) = 0x202f2f2f;
          plVar23[2] = plVar23[2] + 4;
          plVar23 = *(longlong **)(pbVar27 + 0xc0);
          lVar26 = plVar23[2];
          if ((ulonglong)(*plVar23 - lVar26) < uVar18) {
            uStack_49 = 1;
            pdb_142d7f1b0(plVar23,lVar26,uVar18,1,1);
            lVar26 = plVar23[2];
LAB_1424f6fbd:
            pub_142e32760(lVar26 + plVar23[1],lVar14,uVar18);
            lVar26 = plVar23[2];
          }
          else if (uVar18 != 0) goto LAB_1424f6fbd;
          param_2 = lVar26 + uVar18;
          plVar23[2] = param_2;
          puVar3 = *(ulonglong **)(pbVar27 + 0xc0);
          uVar18 = puVar3[2];
          uVar15 = uVar18;
          if (*puVar3 == uVar18) {
            uStack_49 = 1;
            param_2 = uVar18;
            pdb_142d7f1b0(puVar3,uVar18,1,1,1);
            uVar15 = puVar3[2];
          }
          *(undefined1 *)(puVar3[1] + uVar15) = 10;
          puVar3[2] = uVar18 + 1;
          uVar18 = *(ulonglong *)(pbVar27 + 0xb8);
          if (uVar18 <= *(ulonglong *)(pbVar27 + 0xa0)) {
            uVar13 = *(undefined8 *)(pbVar27 + 0x30);
            uVar15 = *(ulonglong *)(pbVar27 + 0x38);
            for (uVar28 = 0; uVar28 != uVar18; uVar28 = uVar28 + 1) {
              plVar23 = *(longlong **)(pbVar27 + 0xc0);
              lVar14 = plVar23[2];
              if ((ulonglong)(*plVar23 - lVar14) < uVar15) {
                uStack_49 = 1;
                pdb_142d7f1b0(plVar23,lVar14,uVar15,1,1);
                lVar14 = plVar23[2];
LAB_1424f7030:
                pub_142e32760(lVar14 + plVar23[1],uVar13,uVar15);
                lVar14 = plVar23[2];
              }
              else if (uVar15 != 0) goto LAB_1424f7030;
              param_2 = lVar14 + uVar15;
              plVar23[2] = param_2;
            }
          }
        }
      }
    }
  }
  else {
    plVar23 = *(longlong **)(pbVar27 + 0xc0);
    lVar14 = plVar23[2];
    lVar26 = lVar14;
    if (*plVar23 == lVar14) {
      uStack_49 = 1;
      pdb_142d7f1b0(plVar23,lVar14,1,1,1);
      lVar26 = plVar23[2];
    }
    *(undefined1 *)(plVar23[1] + lVar26) = 0x2c;
    plVar23[2] = lVar14 + 1;
    if (*(longlong *)(pbVar27 + 0x10) != -0x7fffffffffffffff) {
      if ((*(ulonglong *)(pbVar27 + 0xa0) < *(ulonglong *)(pbVar27 + 0xb8)) || (pbVar27[0xb5] == 1))
      {
        param_2 = *(ulonglong *)(pbVar27 + 0x48);
        uVar18 = *(ulonglong *)(pbVar27 + 0x50);
        plVar23 = *(longlong **)(pbVar27 + 0xc0);
        lVar14 = plVar23[2];
        if ((ulonglong)(*plVar23 - lVar14) < uVar18) {
          uStack_49 = 1;
          pdb_142d7f1b0(plVar23,lVar14,uVar18,1,1);
          goto LAB_1424f7d54;
        }
LAB_1424f6e4a:
        if (uVar18 != 0) goto LAB_1424f6e4f;
      }
      else {
        param_2 = *(ulonglong *)(pbVar27 + 0x18);
        uVar18 = *(ulonglong *)(pbVar27 + 0x20);
        plVar23 = *(longlong **)(pbVar27 + 0xc0);
        lVar14 = plVar23[2];
        if (uVar18 <= (ulonglong)(*plVar23 - lVar14)) goto LAB_1424f6e4a;
        uStack_49 = 1;
        pdb_142d7f1b0(plVar23,lVar14,uVar18,1,1);
LAB_1424f7d54:
        lVar14 = plVar23[2];
LAB_1424f6e4f:
        pub_142e32760(lVar14 + plVar23[1],param_2,uVar18);
        lVar14 = plVar23[2];
      }
      plVar23[2] = lVar14 + uVar18;
      if (*(longlong *)(pbVar27 + 0x10) != -0x7fffffffffffffff) goto LAB_1424f6e80;
    }
  }
LAB_1424f7146:
  uStack_49 = 1;
  pbVar22 = pbVar27;
  pdb_1424f3ce0(&uStack_168,pbVar27,param_3,param_4);
  if (uStack_168._0_1_ != (code)0x32) {
    *(longlong *)(pcStack_58 + 0x40) = CONCAT62(uStack_126,uStack_128);
    *(longlong *)(pcStack_58 + 0x30) = CONCAT62(uStack_136,uStack_138);
    *(longlong *)(pcStack_58 + 0x38) = CONCAT62(uStack_12e,CONCAT11(uStack_12f,uStack_130));
    *(longlong *)(pcStack_58 + 0x20) = CONCAT62(uStack_146,uStack_148);
    *(longlong *)(pcStack_58 + 0x28) = CONCAT62(uStack_13e,uStack_140);
    *(byte **)(pcStack_58 + 0x10) = pbStack_158;
    *(longlong *)(pcStack_58 + 0x18) = CONCAT62(uStack_14e,CONCAT11(uStack_14f,uStack_150));
    *(ulonglong **)pcStack_58 = uStack_168;
    *(code **)(pcStack_58 + 8) = pcStack_160;
    goto LAB_1424f7a23;
  }
  puVar4 = *(undefined8 **)(pbVar27 + 0xc0);
  pbVar29 = (byte *)puVar4[2];
  pbVar16 = pbVar29;
  if ((byte *)*puVar4 == pbVar29) {
    uStack_49 = 1;
    param_3 = (undefined *)0x1;
    pbVar22 = pbVar29;
    pdb_142d7f1b0(puVar4,pbVar29,1,1,1);
    pbVar16 = (byte *)puVar4[2];
  }
  pbVar16[puVar4[1]] = 0x3a;
  puVar4[2] = pbVar29 + 1;
  if (*(longlong *)(pbVar27 + 0x10) != -0x7fffffffffffffff) {
    pbVar22 = *(byte **)(pbVar27 + 0x48);
    puVar5 = *(undefined **)(pbVar27 + 0x50);
    plVar23 = *(longlong **)(pbVar27 + 0xc0);
    lVar14 = plVar23[2];
    if ((undefined *)(*plVar23 - lVar14) < puVar5) {
      uStack_49 = 1;
      pdb_142d7f1b0(plVar23,lVar14,puVar5,1,1);
      lVar14 = plVar23[2];
LAB_1424f71ca:
      param_3 = puVar5;
      pub_142e32760(lVar14 + plVar23[1]);
      lVar14 = plVar23[2];
    }
    else if (puVar5 != (undefined *)0x0) goto LAB_1424f71ca;
    plVar23[2] = (longlong)(puVar5 + lVar14);
  }
  if (*pbVar27 != 0) {
    if (*(longlong *)(pbVar27 + 8) == 0) {
      *pcStack_58 = (code)0x30;
      goto LAB_1424f7a23;
    }
    *(longlong *)(pbVar27 + 8) = *(longlong *)(pbVar27 + 8) + -1;
  }
  piVar24 = *(int **)(param_5 + 8);
  lVar14 = *(longlong *)(param_5 + 0x10);
  pbVar27[0xd8] = 0;
  pbVar27[0xd0] = 0;
  pbVar27[0xd1] = 0;
  pbVar27[0xd2] = 0;
  pbVar27[0xd3] = 0;
  pbVar27[0xd4] = 0;
  pbVar27[0xd5] = 0;
  pbVar27[0xd6] = 0;
  pbVar27[0xd7] = 0;
  puVar4 = *(undefined8 **)(pbVar27 + 0xc0);
  pbVar29 = (byte *)puVar4[2];
  pbVar16 = pbVar29;
  if ((byte *)*puVar4 == pbVar29) {
    uStack_49 = 1;
    param_3 = (undefined *)0x1;
    pbVar22 = pbVar29;
    pdb_142d7f1b0(puVar4,pbVar29,1,1,1);
    pbVar16 = (byte *)puVar4[2];
  }
  pbVar16[puVar4[1]] = 0x5b;
  puVar4[2] = pbVar29 + 1;
  pcVar19 = (code *)0x8000000000000001;
  if (((*(longlong *)(pbVar27 + 0x10) == -0x7fffffffffffffff) || (pbVar27[0xb3] == 0)) &&
     (pbVar27[0xd9] = lVar14 == 0, *(longlong *)(pbVar27 + 0x10) != -0x7fffffffffffffff)) {
    pcVar19 = (code *)(*(longlong *)(pbVar27 + 0xb8) + 1);
    *(code **)(pbVar27 + 0xb8) = pcVar19;
    if ((lVar14 == 0) || (*(code **)(pbVar27 + 0xa0) < pcVar19)) goto LAB_1424f730e;
    pcVar19 = (code *)(pbVar27 + 0xc0);
    pbVar22 = *(byte **)(pbVar27 + 0x18);
    param_3 = *(undefined **)(pbVar27 + 0x20);
    uStack_49 = 1;
    cVar11 = pdb_140494b50();
    if (cVar11 == '\0') {
      uStack_f8 = uStack_f8 & 0xffff0000;
      goto LAB_1424f7332;
    }
    cVar12 = (code)0x0;
    pcVar19 = (code *)0x0;
    cVar21 = (code)0x0;
    cVar25 = (code)0x0;
  }
  else {
LAB_1424f730e:
    uStack_108 = 0;
    uStack_f8 = uStack_f8 & 0xffff0000;
    pbStack_100 = pbVar27;
    if (lVar14 == 0) {
LAB_1424f779f:
      uVar13 = uStack_170;
      cVar25 = SUB81(param_3,0);
      if ((*(longlong *)(pbVar27 + 0x10) != -0x7fffffffffffffff) && (pbVar27[0xb3] == 0)) {
        uVar18 = *(ulonglong *)(pbVar27 + 0xb8);
        if ((uVar18 <= *(ulonglong *)(pbVar27 + 0xa0)) && (pbVar27[0xd9] != 1)) {
          for (lVar14 = 1; cVar25 = SUB81(param_3,0), lVar14 != uVar18 + (uVar18 == 0);
              lVar14 = lVar14 + 1) {
            uVar6 = *(undefined8 *)(pbVar27 + 0x30);
            puVar5 = *(undefined **)(pbVar27 + 0x38);
            plVar23 = *(longlong **)(pbVar27 + 0xc0);
            lVar26 = plVar23[2];
            if ((undefined *)(*plVar23 - lVar26) < puVar5) {
              pbStack_68 = pbVar27;
              pdb_142d7f1b0(plVar23,lVar26,puVar5,1,1);
              lVar26 = plVar23[2];
LAB_1424f7940:
              param_3 = puVar5;
              pub_142e32760(lVar26 + plVar23[1],uVar6);
              lVar26 = plVar23[2];
            }
            else if (puVar5 != (undefined *)0x0) goto LAB_1424f7940;
            plVar23[2] = (longlong)(puVar5 + lVar26);
          }
          uVar18 = *(ulonglong *)(pbVar27 + 0xb8);
        }
        *(ulonglong *)(pbVar27 + 0xb8) = uVar18 - 1;
        pbVar27[0xd9] = 2;
      }
      pcVar19 = (code *)(pbVar27 + 0xc0);
      cVar21 = (code)0x5d;
      pbStack_68 = pbVar27;
      cVar11 = pdb_140494a10();
      pcVar20 = pcStack_58;
      if (cVar11 == '\0') {
        if (*(int *)pbVar27 == 1) {
          lVar14 = -1;
          if (*(longlong *)(pbVar27 + 8) + 1 != 0) {
            lVar14 = *(longlong *)(pbVar27 + 8) + 1;
          }
          *(longlong *)(pbVar27 + 8) = lVar14;
          piVar24 = *(int **)(uStack_188 + 8);
          iVar2 = *piVar24;
        }
        else {
          piVar24 = *(int **)(uStack_188 + 8);
          iVar2 = *piVar24;
        }
        if (iVar2 == 1) {
          lVar26 = *(longlong *)((longlong)piVar24 + 8) + 1;
          lVar14 = -1;
          if (lVar26 != 0) {
            lVar14 = lVar26;
          }
          *(longlong *)((longlong)piVar24 + 8) = lVar14;
          lVar14 = *(longlong *)((longlong)piVar24 + 0x10);
        }
        else {
          lVar14 = *(longlong *)((longlong)piVar24 + 0x10);
        }
        uVar18 = uStack_b8;
        lVar26 = uStack_a0;
        if (lVar14 != -0x7fffffffffffffff) {
          uVar15 = *(ulonglong *)((longlong)piVar24 + 0x58);
          pbVar27 = *(byte **)((longlong)piVar24 + 0x60);
          bVar30 = SBORROW8(0,uStack_b8);
          uVar18 = *(ulonglong *)((longlong)piVar24 + 0x58);
          *(ulonglong *)((longlong)piVar24 + 0x58) = uStack_b8;
          *(byte **)((longlong)piVar24 + 0x60) = uStack_b0;
          uVar6 = *(undefined8 *)((longlong)piVar24 + 0x68);
          lVar26 = *(longlong *)((longlong)piVar24 + 0x70);
          *(undefined8 *)((longlong)piVar24 + 0x68) = uStack_a8;
          *(longlong *)((longlong)piVar24 + 0x70) = uStack_a0;
          uVar7 = *(undefined8 *)((longlong)piVar24 + 0x78);
          uVar8 = *(undefined8 *)((longlong)piVar24 + 0x80);
          *(undefined8 *)((longlong)piVar24 + 0x78) = uStack_98;
          *(undefined8 *)((longlong)piVar24 + 0x80) = uStack_90;
          uVar9 = *(undefined8 *)((longlong)piVar24 + 0x88);
          uVar10 = *(undefined8 *)((longlong)piVar24 + 0x90);
          *(int *)((longlong)piVar24 + 0x88) = (int)uStack_88;
          *(int *)((longlong)piVar24 + 0x8c) = uStack_88._4_4_;
          *(int *)((longlong)piVar24 + 0x90) = (int)uStack_80;
          *(int *)((longlong)piVar24 + 0x94) = uStack_80._4_4_;
          uStack_248 = *(undefined8 *)((longlong)piVar24 + 0x98);
          *(undefined8 *)((longlong)piVar24 + 0x98) = uStack_78;
          uStack_b8 = uVar15;
          uStack_b0 = pbVar27;
          uStack_a8 = uVar6;
          uStack_98 = uVar7;
          uStack_90 = uVar8;
          uStack_88 = uVar9;
          uStack_80 = uVar10;
          uStack_78 = uStack_248;
          if (((!bVar30) && (uStack_a0 != 0)) && (!SBORROW8(0,uVar18))) {
            uStack_b8._0_4_ = (undefined4)uVar15;
            uStack_b8._4_4_ = (undefined4)(uVar15 >> 0x20);
            uStack_b0._0_4_ = SUB84(pbVar27,0);
            uStack_b0._4_4_ = (undefined4)((ulonglong)pbVar27 >> 0x20);
            uStack_a8._0_4_ = (int)uVar6;
            uStack_a8._4_4_ = (int)((ulonglong)uVar6 >> 0x20);
            uStack_a0._0_4_ = (int)lVar26;
            uStack_a0._4_4_ = (int)((ulonglong)lVar26 >> 0x20);
            uStack_98._0_4_ = (int)uVar7;
            uStack_98._4_4_ = (int)((ulonglong)uVar7 >> 0x20);
            uStack_90._0_4_ = (int)uVar8;
            uStack_90._4_4_ = (int)((ulonglong)uVar8 >> 0x20);
            uStack_88._0_4_ = (int)uVar9;
            uStack_88._4_4_ = (int)((ulonglong)uVar9 >> 0x20);
            uStack_80._0_4_ = (int)uVar10;
            uStack_80._4_4_ = (int)((ulonglong)uVar10 >> 0x20);
            uStack_258 = (int)uStack_88;
            uStack_254 = uStack_88._4_4_;
            uStack_250 = (int)uStack_80;
            uStack_24c = uStack_80._4_4_;
            uStack_268 = (int)uStack_98;
            uStack_264 = uStack_98._4_4_;
            uStack_260 = (int)uStack_90;
            uStack_25c = uStack_90._4_4_;
            uStack_278 = (int)uStack_a8;
            uStack_274 = uStack_a8._4_4_;
            uStack_270 = (int)uStack_a0;
            uStack_26c = uStack_a0._4_4_;
            uStack_288 = (undefined4)uStack_b8;
            uStack_284 = uStack_b8._4_4_;
            uStack_280 = (undefined4)uStack_b0;
            uStack_27c = uStack_b0._4_4_;
            uStack_49 = 0;
            uStack_a0 = lVar26;
            pdb_14058e2b0(&uStack_168,(int *)((longlong)piVar24 + 0x70),puStack_c0,uVar13,
                          &uStack_288);
            if (!SBORROW8(0,(longlong)uStack_168)) {
              uStack_49 = 0;
              pdb_1404b5910(&uStack_168);
            }
            *pcStack_58 = (code)0x32;
            return pcStack_58;
          }
        }
        uStack_a0 = lVar26;
        *pcStack_58 = (code)0x32;
        if (SBORROW8(0,uVar18)) {
          return pcStack_58;
        }
        pdb_1404b5910(&uStack_b8);
        return pcVar20;
      }
    }
    else {
LAB_1424f7332:
      uStack_108 = 0;
      piStack_60 = piVar24 + lVar14 * 3;
      pbVar29 = pbVar27;
      pbStack_100 = pbVar27;
      do {
        pbVar27 = pbStack_100;
        if ((char)uStack_f8 == '\x01') {
          puVar4 = *(undefined8 **)(pbStack_100 + 0xc0);
          pbVar16 = (byte *)puVar4[2];
          pbVar17 = pbVar16;
          if ((byte *)*puVar4 == pbVar16) {
            uStack_4a = 1;
            param_3 = (undefined *)0x1;
            pbVar22 = pbVar16;
            pdb_142d7f1b0(puVar4,pbVar16,1,1,1);
            pbVar17 = (byte *)puVar4[2];
          }
          pcVar19 = (code *)puVar4[1];
          pcVar19[(longlong)pbVar17] = (code)0x2c;
          puVar4[2] = pbVar16 + 1;
          if (*(longlong *)(pbVar27 + 0x10) == -0x7fffffffffffffff) goto LAB_1424f741e;
          if ((*(ulonglong *)(pbVar27 + 0xa0) < *(ulonglong *)(pbVar27 + 0xb8)) ||
             (pbVar27[0xb3] == 1)) {
            pbVar22 = *(byte **)(pbVar27 + 0x48);
            puVar5 = *(undefined **)(pbVar27 + 0x50);
            plVar23 = *(longlong **)(pbVar27 + 0xc0);
            lVar14 = plVar23[2];
            if ((undefined *)(*plVar23 - lVar14) < puVar5) {
              uStack_4a = 1;
              pdb_142d7f1b0(plVar23,lVar14,puVar5,1,1);
              lVar14 = plVar23[2];
LAB_1424f73f0:
              param_3 = puVar5;
              pub_142e32760(lVar14 + plVar23[1]);
              lVar14 = plVar23[2];
            }
            else if (puVar5 != (undefined *)0x0) goto LAB_1424f73f0;
            pcVar19 = (code *)(puVar5 + lVar14);
            plVar23[2] = (longlong)pcVar19;
            goto LAB_1424f741e;
          }
          pcVar19 = (code *)(pbVar27 + 0xc0);
          pbVar22 = *(byte **)(pbVar27 + 0x18);
          param_3 = *(undefined **)(pbVar27 + 0x20);
          uStack_4a = 1;
          cVar11 = pdb_140494b50();
          cVar25 = SUB81(param_3,0);
          cVar21 = SUB81(pbVar22,0);
          if (cVar11 == '\0') goto LAB_1424f741e;
LAB_1424f7835:
          bVar1 = *pbStack_100;
          pbVar27 = pbVar29;
          cVar12 = (code)0x0;
          pbVar22 = pbStack_100;
          goto joined_r0x0001424f7842;
        }
        uStack_f8 = CONCAT31(uStack_f8._1_3_,1);
LAB_1424f741e:
        cVar25 = SUB81(param_3,0);
        cVar21 = SUB81(pbVar22,0);
        if (*(longlong *)(pbVar27 + 0x10) != -0x7fffffffffffffff) {
          if ((pbVar27[0xb3] == 0) &&
             (pbVar16 = *(byte **)(pbVar27 + 0xb8), pbVar16 <= *(byte **)(pbVar27 + 0xa0))) {
            uVar13 = *(undefined8 *)(pbVar27 + 0x30);
            puVar5 = *(undefined **)(pbVar27 + 0x38);
            pbVar29 = (byte *)0x0;
            while( true ) {
              cVar25 = SUB81(param_3,0);
              cVar21 = SUB81(pbVar22,0);
              if (pbVar29 == pbVar16) break;
              plVar23 = *(longlong **)(pbVar27 + 0xc0);
              lVar14 = plVar23[2];
              if ((undefined *)(*plVar23 - lVar14) < puVar5) {
                uStack_4a = 1;
                pdb_142d7f1b0(plVar23,lVar14,puVar5,1,1);
                lVar14 = plVar23[2];
LAB_1424f7470:
                pcVar19 = (code *)(lVar14 + plVar23[1]);
                param_3 = puVar5;
                pub_142e32760(pcVar19,uVar13);
                lVar14 = plVar23[2];
              }
              else if (puVar5 != (undefined *)0x0) goto LAB_1424f7470;
              pbVar22 = puVar5 + lVar14;
              plVar23[2] = (longlong)pbVar22;
              pbVar29 = pbVar29 + 1;
            }
            if (*(longlong *)(pbVar27 + 0x10) == -0x7fffffffffffffff) goto LAB_1424f7570;
          }
          if ((*(ulonglong *)(pbVar27 + 0xb8) <= *(ulonglong *)(pbVar27 + 0xa0)) &&
             (pbVar27[0xb2] == 1)) {
            uStack_168 = &uStack_108;
            pcStack_160 = pdb_140f72a40;
            pcVar19 = *(code **)(pbVar27 + 0xc0);
            uStack_4a = 1;
            cVar21 = (code)0xe0;
            cVar25 = (code)0x72;
            cVar11 = pdb_140f681d0(pcVar19,&UNK_1430729e0,&UNK_143513872,&uStack_168);
            if (cVar11 != '\0') goto LAB_1424f7835;
            uStack_108 = uStack_108 + 1;
            pbVar27 = pbStack_100;
          }
        }
LAB_1424f7570:
        pbVar22 = pbVar27;
        if (*pbVar27 != 0) {
          if (*(longlong *)(pbVar27 + 8) == 0) {
            cVar12 = (code)0x30;
            bVar1 = *pbStack_100;
            pbVar27 = pbVar29;
            pbVar22 = pbStack_100;
            goto joined_r0x0001424f7842;
          }
          *(longlong *)(pbVar27 + 8) = *(longlong *)(pbVar27 + 8) + -1;
          pbVar22 = pbStack_100;
        }
        if (*piVar24 == 0xc3) {
          uStack_4a = 1;
          pcVar19 = (code *)&uStack_168;
          param_3 = &UNK_1433404d5;
          pdb_1424fcec0(pcVar19,pbVar22,&UNK_1433404d5,0xc);
        }
        else {
          uStack_4a = 1;
          pcVar19 = (code *)&uStack_168;
          param_3 = &UNK_1433404d5;
          pdb_1424fcd00(pcVar19,pbVar22,&UNK_1433404d5,0xc);
        }
        pbVar27 = pbStack_100;
        cVar25 = SUB81(param_3,0);
        if (uStack_168._0_1_ != (code)0x32) {
          uStack_6c = (undefined3)((ulonglong)uStack_168 >> 0x28);
          uStack_1f8 = CONCAT26(uStack_148,uStack_14e);
          uStack_1f0 = CONCAT26(uStack_140,uStack_146);
          uStack_1e8 = CONCAT26(uStack_138,uStack_13e);
          uStack_1da = CONCAT11(uStack_12f,uStack_130);
          lStack_1d2 = CONCAT62(uStack_126,uStack_128);
          bVar1 = *pbStack_100;
          pcVar19 = pcStack_160;
          pbVar27 = pbStack_158;
          cVar12 = uStack_168._0_1_;
          cVar21 = uStack_150;
          cVar25 = uStack_14f;
          uStack_1e0 = uStack_136;
          uStack_1d8 = uStack_12e;
          pbVar22 = pbStack_100;
          uStack_70 = uStack_168._1_4_;
          goto joined_r0x0001424f7842;
        }
        if (*(int *)pbStack_100 == 1) {
          pcVar19 = (code *)(*(longlong *)(pbStack_100 + 8) + 1);
          pbVar22 = (byte *)0xffffffffffffffff;
          if (pcVar19 == (code *)0x0) {
            pcVar19 = (code *)0xffffffffffffffff;
          }
          *(code **)(pbStack_100 + 8) = pcVar19;
        }
        piVar24 = piVar24 + 3;
      } while (piVar24 != piStack_60);
      if (((((char)uStack_f8 != '\x01') ||
           (*(longlong *)(pbStack_100 + 0x10) == -0x7fffffffffffffff)) ||
          (*(ulonglong *)(pbStack_100 + 0xa0) < *(ulonglong *)(pbStack_100 + 0xb8))) ||
         (pbStack_100[0xb3] != 0)) goto LAB_1424f779f;
      pcVar20 = (code *)(pbStack_100 + 0xc0);
      pbStack_68 = pbStack_100;
      cVar21 = (code)0x2c;
      pcVar19 = pcVar20;
      cVar11 = pdb_140494a10();
      if (cVar11 == '\0') {
        cVar21 = SUB81(*(undefined8 *)(pbVar27 + 0x18),0);
        param_3 = *(undefined **)(pbVar27 + 0x20);
        pbStack_68 = pbVar27;
        cVar11 = pdb_140494b50();
        cVar25 = SUB81(param_3,0);
        pcVar19 = pcVar20;
        if (cVar11 == '\0') goto LAB_1424f779f;
      }
    }
    cVar12 = (code)0x0;
    bVar1 = *pbVar27;
    pbVar22 = pbVar27;
joined_r0x0001424f7842:
    if (bVar1 != 0) {
      lVar26 = *(longlong *)((longlong)pbVar22 + 8) + 1;
      lVar14 = -1;
      if (lVar26 != 0) {
        lVar14 = lVar26;
      }
      *(longlong *)((longlong)pbVar22 + 8) = lVar14;
    }
  }
  *pcStack_58 = cVar12;
  *(undefined4 *)(pcStack_58 + 1) = uStack_70;
  *(uint *)(pcStack_58 + 4) = CONCAT31(uStack_6c,uStack_70._3_1_);
  *(code **)(pcStack_58 + 8) = pcVar19;
  *(byte **)(pcStack_58 + 0x10) = pbVar27;
  pcStack_58[0x18] = cVar21;
  pcStack_58[0x19] = cVar25;
  *(undefined8 *)(pcStack_58 + 0x1a) = uStack_1f8;
  *(undefined8 *)(pcStack_58 + 0x22) = uStack_1f0;
  *(undefined8 *)(pcStack_58 + 0x2a) = uStack_1e8;
  *(ulonglong *)(pcStack_58 + 0x32) = CONCAT26(uStack_1da,uStack_1e0);
  *(longlong *)(pcStack_58 + 0x38) = CONCAT62(uStack_1d8,uStack_1da);
  *(longlong *)(pcStack_58 + 0x40) = lStack_1d2;
LAB_1424f7a23:
  pcVar19 = pcStack_58;
  if (!SBORROW8(0,uStack_b8)) {
    if (uStack_b8 != 0) {
      pub_1406abac0(uStack_b0,uStack_b8,1);
    }
    if (uStack_a0 != 0) {
      pdb_140265910(&uStack_a0,&uStack_80,0x60,0x10);
    }
  }
  return pcVar19;
}

