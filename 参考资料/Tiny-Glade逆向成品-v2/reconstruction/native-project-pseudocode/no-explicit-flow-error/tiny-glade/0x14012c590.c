// VA 0x14012c590, PDB extent 4736 bytes
// ron::ser::impl$11::serialize_field<ref_mut$<alloc::string::String>,array$<u32,2> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   ron::ser::impl$11::serialize_field<ref_mut$<alloc::string::String>,array$<u32,2> >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 4736 */

ulonglong *
pdb_14012c590(ulonglong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5)

{
  code cVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code **ppcVar9;
  char cVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  code **ppcVar14;
  code *pcVar15;
  ulonglong uVar16;
  longlong *plVar17;
  ulonglong uVar18;
  code *pcVar19;
  bool bVar20;
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
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 uStack_218;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  code *pcStack_1c8;
  byte *pbStack_1c0;
  ulonglong uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  code **ppcStack_180;
  code *pcStack_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined8 uStack_128;
  byte *pbStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  byte *pbStack_100;
  ulonglong uStack_f8;
  undefined1 uStack_f0;
  undefined7 uStack_ef;
  undefined2 uStack_e8;
  undefined6 uStack_e6;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  byte *pbStack_78;
  ulonglong *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pcStack_58 = *(code **)(param_2 + 8);
  uStack_138 = param_3;
  puStack_70 = param_1;
  uStack_60 = param_4;
  if (*(longlong *)(pcStack_58 + 0x10) == -0x7fffffffffffffff) {
    uStack_c8 = (code **)0x8000000000000000;
  }
  else {
    uStack_c8 = (code **)0x8000000000000000;
    ppcVar14 = *(code ***)(pcStack_58 + 0x58);
    uVar11 = *(undefined8 *)(pcStack_58 + 0x90);
    uVar4 = *(undefined8 *)(pcStack_58 + 0x98);
    uVar5 = *(undefined8 *)(pcStack_58 + 0x80);
    uVar6 = *(undefined8 *)(pcStack_58 + 0x88);
    lVar12 = *(longlong *)(pcStack_58 + 0x70);
    uVar7 = *(undefined8 *)(pcStack_58 + 0x78);
    pcStack_208 = *(code **)(pcStack_58 + 0x60);
    uVar8 = *(undefined8 *)(pcStack_58 + 0x68);
    *(int *)(pcStack_58 + 0x88) = (int)uStack_98;
    *(int *)(pcStack_58 + 0x8c) = uStack_98._4_4_;
    *(int *)(pcStack_58 + 0x90) = (int)uStack_90;
    *(int *)(pcStack_58 + 0x94) = uStack_90._4_4_;
    *(int *)(pcStack_58 + 0x78) = (int)uStack_a8;
    *(int *)(pcStack_58 + 0x7c) = uStack_a8._4_4_;
    *(int *)(pcStack_58 + 0x80) = (int)uStack_a0;
    *(int *)(pcStack_58 + 0x84) = uStack_a0._4_4_;
    *(int *)(pcStack_58 + 0x68) = (int)uStack_b8;
    *(int *)(pcStack_58 + 0x6c) = uStack_b8._4_4_;
    *(int *)(pcStack_58 + 0x70) = (int)uStack_b0;
    *(int *)(pcStack_58 + 0x74) = uStack_b0._4_4_;
    *(undefined8 *)(pcStack_58 + 0x58) = 0x8000000000000000;
    *(code **)(pcStack_58 + 0x60) = uStack_c0;
    *(undefined8 *)(pcStack_58 + 0x98) = uStack_88;
    uStack_200 = uVar8;
    uStack_1f8 = lVar12;
    uStack_1f0 = uVar7;
    uStack_1e8 = uVar5;
    uStack_1e0 = uVar6;
    uStack_1d8 = uVar11;
    uStack_1d0 = uVar4;
    if (!SBORROW8(0,(longlong)ppcVar14)) {
      uStack_200._0_4_ = (undefined4)uVar8;
      uStack_200._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
      uStack_1f8._0_4_ = (undefined4)lVar12;
      uStack_1f8._4_4_ = (undefined4)((ulonglong)lVar12 >> 0x20);
      uStack_1f0._0_4_ = (undefined4)uVar7;
      uStack_1f0._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      uStack_1e8._0_4_ = (undefined4)uVar5;
      uStack_1e8._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_1e0._0_4_ = (undefined4)uVar6;
      uStack_1e0._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_1d8._0_4_ = (undefined4)uVar11;
      uStack_1d8._4_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
      uStack_1d0._0_4_ = (undefined4)uVar4;
      uStack_1d0._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_168 = (undefined4)uStack_1f8;
      uStack_164 = uStack_1f8._4_4_;
      uStack_160 = (undefined4)uStack_1f0;
      uStack_15c = uStack_1f0._4_4_;
      uStack_148 = (undefined4)uStack_1d8;
      uStack_144 = uStack_1d8._4_4_;
      uStack_140 = (undefined4)uStack_1d0;
      uStack_13c = uStack_1d0._4_4_;
      uStack_158 = (undefined4)uStack_1e8;
      uStack_154 = uStack_1e8._4_4_;
      uStack_150 = (undefined4)uStack_1e0;
      uStack_14c = uStack_1e0._4_4_;
      uStack_170 = (undefined4)uStack_200;
      uStack_16c = uStack_200._4_4_;
      ppcStack_180 = ppcVar14;
      pcStack_178 = pcStack_208;
      if (lVar12 != 0) {
        pbStack_78 = (byte *)0x8000000000000000;
        uVar11 = pdb_1400af950(&uStack_148,param_3,param_4);
        pdb_140269080(&uStack_128,&uStack_168,uVar11,param_3,param_4);
        pcStack_130 = pcStack_58 + 0x58;
        if (!SBORROW8(0,uStack_128)) {
          pbStack_78 = uStack_110;
          pcStack_1c8 = pcStack_108;
          pbStack_1c0 = pbStack_100;
          uStack_1b0 = CONCAT71(uStack_ef,uStack_f0);
          uStack_1b8 = uStack_f8;
          uStack_1a8 = CONCAT62(uStack_e6,uStack_e8);
          uStack_1a0 = uStack_e0;
          uStack_198 = uStack_d8;
          uStack_190 = uStack_d0;
          if (uStack_128 != 0) {
            pub_1406abac0(pbStack_120,uStack_128,1);
          }
        }
        pcStack_68 = pcStack_58 + 0x60;
        uVar18 = *(ulonglong *)pcStack_130;
        if (!SBORROW8(0,uVar18)) {
          if (uVar18 != 0) {
            pub_1406abac0(*(byte **)pcStack_68,uVar18,1);
          }
          if (*(longlong *)(pcStack_58 + 0x70) != 0) {
            pdb_140265910(pcStack_58 + 0x70,pcStack_58 + 0x90,0x60,0x10);
          }
        }
        *(byte **)pcStack_130 = pbStack_78;
        *(int *)(pcStack_68 + 0x30) = (int)uStack_198;
        *(int *)(pcStack_68 + 0x34) = uStack_198._4_4_;
        *(int *)(pcStack_68 + 0x38) = (int)uStack_190;
        *(int *)(pcStack_68 + 0x3c) = uStack_190._4_4_;
        *(undefined8 *)(pcStack_68 + 0x20) = uStack_1a8;
        *(undefined8 *)(pcStack_68 + 0x28) = uStack_1a0;
        *(ulonglong *)(pcStack_68 + 0x10) = uStack_1b8;
        *(undefined8 *)(pcStack_68 + 0x18) = uStack_1b0;
        *(code **)pcStack_68 = pcStack_1c8;
        *(byte **)(pcStack_68 + 8) = pbStack_1c0;
      }
      uStack_88 = CONCAT44(uStack_13c,uStack_140);
      uStack_98 = CONCAT44(uStack_14c,uStack_150);
      uStack_90 = CONCAT44(uStack_144,uStack_148);
      uStack_a8 = CONCAT44(uStack_15c,uStack_160);
      uStack_a0 = CONCAT44(uStack_154,uStack_158);
      uStack_b8 = CONCAT44(uStack_16c,uStack_170);
      uStack_b0 = CONCAT44(uStack_164,uStack_168);
      uStack_c8 = ppcStack_180;
      uStack_c0 = pcStack_178;
    }
  }
  if (*(char *)(param_2 + 0x10) == '\0') {
    *(undefined1 *)(param_2 + 0x10) = 1;
LAB_14012c98a:
    if ((*(longlong *)(pcStack_58 + 0x10) != -0x7fffffffffffffff) && (pcStack_58[0xb5] != (code)0x1)
       ) {
      uVar18 = *(ulonglong *)(pcStack_58 + 0xb8);
      if (uVar18 <= *(ulonglong *)(pcStack_58 + 0xa0)) {
        uVar11 = *(undefined8 *)(pcStack_58 + 0x30);
        uVar3 = *(ulonglong *)(pcStack_58 + 0x38);
        for (uVar16 = 0; uVar16 != uVar18; uVar16 = uVar16 + 1) {
          plVar17 = *(longlong **)(pcStack_58 + 0xc0);
          lVar12 = plVar17[2];
          if ((ulonglong)(*plVar17 - lVar12) < uVar3) {
            uStack_49 = 1;
            pdb_142d7f1b0(plVar17,lVar12,uVar3,1,1);
            lVar12 = plVar17[2];
LAB_14012d540:
            pub_142e32760(lVar12 + plVar17[1],uVar11,uVar3);
            lVar12 = plVar17[2];
          }
          else if (uVar3 != 0) goto LAB_14012d540;
          plVar17[2] = lVar12 + uVar3;
        }
      }
      if (!SBORROW8(0,*(longlong *)(pcStack_58 + 0x58))) {
        pcStack_118 = *(code **)(pcStack_58 + 0x60);
        pbStack_120 = *(byte **)(pcStack_58 + 0x68);
        uStack_128 = 0;
        pcStack_108 = (code *)0x0;
        uStack_f8 = 0xa0000000a;
        uStack_f0 = 1;
        uStack_e8 = 0;
        pcVar15 = pcStack_58;
        uStack_110 = pbStack_120;
        pbStack_100 = pbStack_120;
        while( true ) {
          uStack_49 = 1;
          lVar12 = pdb_140127c10(&uStack_128);
          if (lVar12 == 0) break;
          if (pcVar15 == (code *)0x0) {
LAB_14012caa0:
            pcVar19 = (code *)0x0;
          }
          else {
            pcVar19 = pcVar15;
            if (pcVar15[lVar12 + -1] == (code)0xa) {
              if (pcVar15 + -1 == (code *)0x0) goto LAB_14012caa0;
              pcVar19 = pcVar15 + -1;
              if (pcVar15[lVar12 + -2] == (code)0xd) {
                pcVar19 = pcVar15 + -2;
              }
            }
          }
          plVar17 = *(longlong **)(pcStack_58 + 0xc0);
          lVar13 = plVar17[2];
          if ((ulonglong)(*plVar17 - lVar13) < 4) {
            uStack_49 = 1;
            pdb_142d7f1b0(plVar17,lVar13,4,1,1);
            lVar13 = plVar17[2];
          }
          *(undefined4 *)(plVar17[1] + lVar13) = 0x202f2f2f;
          plVar17[2] = plVar17[2] + 4;
          plVar17 = *(longlong **)(pcStack_58 + 0xc0);
          lVar13 = plVar17[2];
          if ((code *)(*plVar17 - lVar13) < pcVar19) {
            uStack_49 = 1;
            pdb_142d7f1b0(plVar17,lVar13,pcVar19,1,1);
            lVar13 = plVar17[2];
LAB_14012cafb:
            pub_142e32760(lVar13 + plVar17[1],lVar12,pcVar19);
            lVar13 = plVar17[2];
          }
          else if (pcVar19 != (code *)0x0) goto LAB_14012cafb;
          plVar17[2] = (longlong)(pcVar19 + lVar13);
          plVar17 = *(longlong **)(pcStack_58 + 0xc0);
          lVar12 = plVar17[2];
          lVar13 = lVar12;
          if (*plVar17 == lVar12) {
            uStack_49 = 1;
            pdb_142d7f1b0(plVar17,lVar12,1,1,1);
            lVar13 = plVar17[2];
          }
          *(undefined1 *)(plVar17[1] + lVar13) = 10;
          plVar17[2] = lVar12 + 1;
          uVar18 = *(ulonglong *)(pcStack_58 + 0xb8);
          pcVar15 = pcStack_58;
          if (uVar18 <= *(ulonglong *)(pcStack_58 + 0xa0)) {
            uVar11 = *(undefined8 *)(pcStack_58 + 0x30);
            uVar3 = *(ulonglong *)(pcStack_58 + 0x38);
            for (uVar16 = 0; uVar16 != uVar18; uVar16 = uVar16 + 1) {
              plVar17 = *(longlong **)(pcStack_58 + 0xc0);
              lVar12 = plVar17[2];
              if ((ulonglong)(*plVar17 - lVar12) < uVar3) {
                uStack_49 = 1;
                pdb_142d7f1b0(plVar17,lVar12,uVar3,1,1);
                lVar12 = plVar17[2];
LAB_14012cb70:
                pub_142e32760(lVar12 + plVar17[1],uVar11,uVar3);
                lVar12 = plVar17[2];
              }
              else if (uVar3 != 0) goto LAB_14012cb70;
              pcVar15 = (code *)(lVar12 + uVar3);
              plVar17[2] = (longlong)pcVar15;
            }
          }
        }
      }
    }
  }
  else {
    plVar17 = *(longlong **)(pcStack_58 + 0xc0);
    lVar12 = plVar17[2];
    lVar13 = lVar12;
    if (*plVar17 == lVar12) {
      uStack_49 = 1;
      pdb_142d7f1b0(plVar17,lVar12,1,1,1);
      lVar13 = plVar17[2];
    }
    *(undefined1 *)(plVar17[1] + lVar13) = 0x2c;
    plVar17[2] = lVar12 + 1;
    if (*(longlong *)(pcStack_58 + 0x10) != -0x7fffffffffffffff) {
      if ((*(ulonglong *)(pcStack_58 + 0xa0) < *(ulonglong *)(pcStack_58 + 0xb8)) ||
         (pcStack_58[0xb5] == (code)0x1)) {
        uVar11 = *(undefined8 *)(pcStack_58 + 0x48);
        uVar18 = *(ulonglong *)(pcStack_58 + 0x50);
        plVar17 = *(longlong **)(pcStack_58 + 0xc0);
        lVar12 = plVar17[2];
        if ((ulonglong)(*plVar17 - lVar12) < uVar18) {
          uStack_49 = 1;
          pdb_142d7f1b0(plVar17,lVar12,uVar18,1,1);
          goto LAB_14012d68a;
        }
LAB_14012c96e:
        if (uVar18 != 0) goto LAB_14012c973;
      }
      else {
        uVar11 = *(undefined8 *)(pcStack_58 + 0x18);
        uVar18 = *(ulonglong *)(pcStack_58 + 0x20);
        plVar17 = *(longlong **)(pcStack_58 + 0xc0);
        lVar12 = plVar17[2];
        if (uVar18 <= (ulonglong)(*plVar17 - lVar12)) goto LAB_14012c96e;
        uStack_49 = 1;
        pdb_142d7f1b0(plVar17,lVar12,uVar18,1,1);
LAB_14012d68a:
        lVar12 = plVar17[2];
LAB_14012c973:
        pub_142e32760(lVar12 + plVar17[1],uVar11,uVar18);
        lVar12 = plVar17[2];
      }
      plVar17[2] = lVar12 + uVar18;
      goto LAB_14012c98a;
    }
  }
  uStack_49 = 1;
  pdb_1401276c0(&uStack_128,pcStack_58,uStack_138,uStack_60);
  if ((char)uStack_128 != '2') {
    puStack_70[8] = CONCAT62(uStack_e6,uStack_e8);
    puStack_70[6] = uStack_f8;
    puStack_70[7] = CONCAT71(uStack_ef,uStack_f0);
    puStack_70[4] = (ulonglong)pcStack_108;
    puStack_70[5] = (ulonglong)pbStack_100;
    puStack_70[2] = (ulonglong)pcStack_118;
    puStack_70[3] = (ulonglong)uStack_110;
    *puStack_70 = uStack_128;
    puStack_70[1] = (ulonglong)pbStack_120;
    goto LAB_14012d348;
  }
  plVar17 = *(longlong **)(pcStack_58 + 0xc0);
  lVar12 = plVar17[2];
  lVar13 = lVar12;
  if (*plVar17 == lVar12) {
    uStack_49 = 1;
    pdb_142d7f1b0(plVar17,lVar12,1,1,1);
    lVar13 = plVar17[2];
  }
  *(undefined1 *)(plVar17[1] + lVar13) = 0x3a;
  plVar17[2] = lVar12 + 1;
  if (*(longlong *)(pcStack_58 + 0x10) != -0x7fffffffffffffff) {
    uVar11 = *(undefined8 *)(pcStack_58 + 0x48);
    uVar18 = *(ulonglong *)(pcStack_58 + 0x50);
    plVar17 = *(longlong **)(pcStack_58 + 0xc0);
    lVar12 = plVar17[2];
    if ((ulonglong)(*plVar17 - lVar12) < uVar18) {
      uStack_49 = 1;
      pdb_142d7f1b0(plVar17,lVar12,uVar18,1,1);
      lVar12 = plVar17[2];
LAB_14012cd32:
      pub_142e32760(lVar12 + plVar17[1],uVar11,uVar18);
      lVar12 = plVar17[2];
    }
    else if (uVar18 != 0) goto LAB_14012cd32;
    plVar17[2] = lVar12 + uVar18;
  }
  if (*pcStack_58 != (code)0x0) {
    if (*(longlong *)(pcStack_58 + 8) == 0) {
      *(undefined1 *)puStack_70 = 0x30;
      goto LAB_14012d348;
    }
    *(longlong *)(pcStack_58 + 8) = *(longlong *)(pcStack_58 + 8) + -1;
  }
  pcVar15 = pcStack_58 + 0xc0;
  cVar1 = pcStack_58[0xd8];
  pcStack_58[0xd8] = (code)0x0;
  *(undefined8 *)(pcStack_58 + 0xd0) = 0;
  pcStack_68 = (code *)CONCAT71(pcStack_68._1_7_,cVar1);
  if (cVar1 == (code)0x0) {
    plVar17 = *(longlong **)pcVar15;
    lVar12 = plVar17[2];
    lVar13 = lVar12;
    if (*plVar17 == lVar12) {
      uStack_49 = 1;
      pdb_142d7f1b0(plVar17,lVar12,1,1,1);
      lVar13 = plVar17[2];
    }
    *(undefined1 *)(plVar17[1] + lVar13) = 0x28;
    plVar17[2] = lVar12 + 1;
  }
  if ((*(longlong *)(pcStack_58 + 0x10) == -0x7fffffffffffffff) || (pcStack_58[0xb1] == (code)0x0))
  {
LAB_14012ce9c:
    bVar20 = false;
    pbStack_78 = (byte *)0x0;
    while (pbStack_78 != (byte *)0x8) {
      uVar2 = *(uint *)(pbStack_78 + param_5);
      if (bVar20) {
        plVar17 = *(longlong **)pcVar15;
        lVar12 = plVar17[2];
        lVar13 = lVar12;
        if (*plVar17 == lVar12) {
          pdb_142d7f1b0(plVar17,lVar12,1,1,1);
          lVar13 = plVar17[2];
        }
        *(undefined1 *)(plVar17[1] + lVar13) = 0x2c;
        plVar17[2] = lVar12 + 1;
        if (*(longlong *)(pcStack_58 + 0x10) != -0x7fffffffffffffff) {
          if ((*(ulonglong *)(pcStack_58 + 0xa0) < *(ulonglong *)(pcStack_58 + 0xb8)) ||
             (pcStack_58[0xb1] == (code)0x0)) {
            uVar11 = *(undefined8 *)(pcStack_58 + 0x48);
            uVar18 = *(ulonglong *)(pcStack_58 + 0x50);
            plVar17 = *(longlong **)(pcStack_58 + 0xc0);
            lVar12 = plVar17[2];
            if (uVar18 <= (ulonglong)(*plVar17 - lVar12)) goto LAB_14012cf91;
            pdb_142d7f1b0(plVar17,lVar12,uVar18,1,1);
LAB_14012d1d7:
            lVar12 = plVar17[2];
LAB_14012cf96:
            pub_142e32760(lVar12 + plVar17[1],uVar11,uVar18);
            lVar12 = plVar17[2];
          }
          else {
            uVar11 = *(undefined8 *)(pcStack_58 + 0x18);
            uVar18 = *(ulonglong *)(pcStack_58 + 0x20);
            plVar17 = *(longlong **)(pcStack_58 + 0xc0);
            lVar12 = plVar17[2];
            if ((ulonglong)(*plVar17 - lVar12) < uVar18) {
              pdb_142d7f1b0(plVar17,lVar12,uVar18,1,1);
              goto LAB_14012d1d7;
            }
LAB_14012cf91:
            if (uVar18 != 0) goto LAB_14012cf96;
          }
          plVar17[2] = lVar12 + uVar18;
        }
      }
      if (((*(longlong *)(pcStack_58 + 0x10) != -0x7fffffffffffffff) &&
          (pcStack_58[0xb1] != (code)0x0)) &&
         (uVar18 = *(ulonglong *)(pcStack_58 + 0xb8), uVar18 <= *(ulonglong *)(pcStack_58 + 0xa0)))
      {
        uVar11 = *(undefined8 *)(pcStack_58 + 0x30);
        uVar3 = *(ulonglong *)(pcStack_58 + 0x38);
        for (uVar16 = 0; uVar16 != uVar18; uVar16 = uVar16 + 1) {
          plVar17 = *(longlong **)pcVar15;
          lVar12 = plVar17[2];
          if ((ulonglong)(*plVar17 - lVar12) < uVar3) {
            pdb_142d7f1b0(plVar17,lVar12,uVar3,1,1);
            lVar12 = plVar17[2];
LAB_14012d150:
            pub_142e32760(lVar12 + plVar17[1],uVar11,uVar3);
            lVar12 = plVar17[2];
          }
          else if (uVar3 != 0) goto LAB_14012d150;
          plVar17[2] = lVar12 + uVar3;
        }
      }
      if (*pcStack_58 != (code)0x0) {
        if (*(longlong *)(pcStack_58 + 8) != 0) {
          *(longlong *)(pcStack_58 + 8) = *(longlong *)(pcStack_58 + 8) + -1;
          goto LAB_14012d015;
        }
        uStack_128 = CONCAT71(uStack_128._1_7_,0x30);
LAB_14012d299:
        lVar12 = -1;
        if (*(longlong *)(pcStack_58 + 8) + 1 != 0) {
          lVar12 = *(longlong *)(pcStack_58 + 8) + 1;
        }
        *(longlong *)(pcStack_58 + 8) = lVar12;
        goto LAB_14012d2af;
      }
LAB_14012d015:
      pcStack_1c8 = (code *)&UNK_142e477f6;
      pbStack_1c0 = (byte *)0x3;
      pcStack_178 = pdb_140f72a40;
      pcStack_208 = (code *)(ulonglong)uVar2;
      ppcStack_180 = &pcStack_208;
      cVar10 = pdb_140f681d0(*(longlong *)pcVar15,&UNK_142f5fa00,&UNK_142e477c6,&ppcStack_180);
      if (cVar10 != '\0') {
LAB_14012d1e0:
        uStack_128 = uStack_128 & 0xffffffffffffff00;
        if (*(int *)pcStack_58 == 1) goto LAB_14012d299;
        goto LAB_14012d2af;
      }
      if ((*(longlong *)(pcStack_58 + 0x10) != -0x7fffffffffffffff) &&
         (pcStack_58[0xb7] != (code)0x0)) {
        ppcStack_180 = &pcStack_1c8;
        pcStack_178 = pdb_1402ed400;
        cVar10 = pdb_140f681d0(*(longlong *)pcVar15,&UNK_142f5fa00,&UNK_142e477c6,&ppcStack_180);
        if (cVar10 != '\0') goto LAB_14012d1e0;
      }
      pbStack_78 = pbStack_78 + 4;
      bVar20 = true;
      if (*(int *)pcStack_58 == 1) {
        lVar12 = *(longlong *)(pcStack_58 + 8) + 1;
        if (lVar12 == 0) {
          lVar12 = -1;
        }
        *(longlong *)(pcStack_58 + 8) = lVar12;
      }
    }
    ppcStack_180 = (code **)0x0;
    pcStack_178 = pcStack_58;
    uStack_170._0_2_ = CONCAT11(pcStack_68._0_1_,bVar20);
    pdb_1401280b0(&uStack_128,&ppcStack_180);
    if ((char)uStack_128 == '2') {
      if (*(int *)pcStack_58 == 1) {
        lVar12 = -1;
        if (*(longlong *)(pcStack_58 + 8) + 1 != 0) {
          lVar12 = *(longlong *)(pcStack_58 + 8) + 1;
        }
        *(longlong *)(pcStack_58 + 8) = lVar12;
      }
      ppcVar14 = uStack_c8;
      lVar12 = uStack_b0;
      if (*(longlong *)(pcStack_58 + 0x10) != -0x7fffffffffffffff) {
        ppcVar9 = *(code ***)(pcStack_58 + 0x58);
        pcVar15 = *(code **)(pcStack_58 + 0x60);
        bVar20 = SBORROW8(0,(longlong)uStack_c8);
        ppcVar14 = *(code ***)(pcStack_58 + 0x58);
        *(code ***)(pcStack_58 + 0x58) = uStack_c8;
        *(code **)(pcStack_58 + 0x60) = uStack_c0;
        uVar11 = *(undefined8 *)(pcStack_58 + 0x68);
        lVar12 = *(longlong *)(pcStack_58 + 0x70);
        *(undefined8 *)(pcStack_58 + 0x68) = uStack_b8;
        *(longlong *)(pcStack_58 + 0x70) = uStack_b0;
        uVar4 = *(undefined8 *)(pcStack_58 + 0x78);
        uVar5 = *(undefined8 *)(pcStack_58 + 0x80);
        *(undefined8 *)(pcStack_58 + 0x78) = uStack_a8;
        *(undefined8 *)(pcStack_58 + 0x80) = uStack_a0;
        uVar6 = *(undefined8 *)(pcStack_58 + 0x88);
        uVar7 = *(undefined8 *)(pcStack_58 + 0x90);
        *(int *)(pcStack_58 + 0x88) = (int)uStack_98;
        *(int *)(pcStack_58 + 0x8c) = uStack_98._4_4_;
        *(int *)(pcStack_58 + 0x90) = (int)uStack_90;
        *(int *)(pcStack_58 + 0x94) = uStack_90._4_4_;
        uStack_218 = *(undefined8 *)(pcStack_58 + 0x98);
        *(undefined8 *)(pcStack_58 + 0x98) = uStack_88;
        uStack_c8 = ppcVar9;
        uStack_c0 = pcVar15;
        uStack_b8 = uVar11;
        uStack_a8 = uVar4;
        uStack_a0 = uVar5;
        uStack_98 = uVar6;
        uStack_90 = uVar7;
        uStack_88 = uStack_218;
        if (((!bVar20) && (uStack_b0 != 0)) && (!SBORROW8(0,(longlong)ppcVar14))) {
          uStack_c8._0_4_ = SUB84(ppcVar9,0);
          uStack_c8._4_4_ = (undefined4)((ulonglong)ppcVar9 >> 0x20);
          uStack_c0._0_4_ = SUB84(pcVar15,0);
          uStack_c0._4_4_ = (undefined4)((ulonglong)pcVar15 >> 0x20);
          uStack_b8._0_4_ = (int)uVar11;
          uStack_b8._4_4_ = (int)((ulonglong)uVar11 >> 0x20);
          uStack_b0._0_4_ = (int)lVar12;
          uStack_b0._4_4_ = (int)((ulonglong)lVar12 >> 0x20);
          uStack_a8._0_4_ = (int)uVar4;
          uStack_a8._4_4_ = (int)((ulonglong)uVar4 >> 0x20);
          uStack_a0._0_4_ = (int)uVar5;
          uStack_a0._4_4_ = (int)((ulonglong)uVar5 >> 0x20);
          uStack_98._0_4_ = (int)uVar6;
          uStack_98._4_4_ = (int)((ulonglong)uVar6 >> 0x20);
          uStack_90._0_4_ = (int)uVar7;
          uStack_90._4_4_ = (int)((ulonglong)uVar7 >> 0x20);
          uStack_228 = (int)uStack_98;
          uStack_224 = uStack_98._4_4_;
          uStack_220 = (int)uStack_90;
          uStack_21c = uStack_90._4_4_;
          uStack_238 = (int)uStack_a8;
          uStack_234 = uStack_a8._4_4_;
          uStack_230 = (int)uStack_a0;
          uStack_22c = uStack_a0._4_4_;
          uStack_248 = (int)uStack_b8;
          uStack_244 = uStack_b8._4_4_;
          uStack_240 = (int)uStack_b0;
          uStack_23c = uStack_b0._4_4_;
          uStack_258 = (undefined4)uStack_c8;
          uStack_254 = uStack_c8._4_4_;
          uStack_250 = (undefined4)uStack_c0;
          uStack_24c = uStack_c0._4_4_;
          uStack_49 = 0;
          uStack_b0 = lVar12;
          pdb_14058e2b0(&uStack_128,pcStack_58 + 0x70,uStack_138,uStack_60,&uStack_258);
          if (!SBORROW8(0,uStack_128)) {
            uStack_49 = 0;
            pdb_1404b5910(&uStack_128);
          }
          *(undefined1 *)puStack_70 = 0x32;
          return puStack_70;
        }
      }
      uStack_b0 = lVar12;
      *(undefined1 *)puStack_70 = 0x32;
      if (SBORROW8(0,(longlong)ppcVar14)) {
        return puStack_70;
      }
      pdb_1404b5910(&uStack_c8);
      return puStack_70;
    }
  }
  else {
    pcStack_58[0xd9] = (code)0x0;
    lVar12 = *(longlong *)(pcStack_58 + 0xb8);
    *(ulonglong *)(pcStack_58 + 0xb8) = lVar12 + 1U;
    if (*(ulonglong *)(pcStack_58 + 0xa0) < lVar12 + 1U) goto LAB_14012ce9c;
    uStack_49 = 1;
    cVar10 = pdb_140494b50(pcVar15,*(undefined8 *)(pcStack_58 + 0x18));
    if (cVar10 == '\0') goto LAB_14012ce9c;
    uStack_128 = uStack_128 & 0xffffffffffffff00;
    pbStack_120 = (byte *)0x0;
    pcStack_118 = pcStack_58;
    uStack_110 = (byte *)((ulonglong)
                          CONCAT61((int6)((ulonglong)uStack_110 >> 0x10),pcStack_68._0_1_) << 8);
  }
LAB_14012d2af:
  puStack_70[8] = CONCAT62(uStack_e6,uStack_e8);
  puStack_70[6] = uStack_f8;
  puStack_70[7] = CONCAT71(uStack_ef,uStack_f0);
  puStack_70[4] = (ulonglong)pcStack_108;
  puStack_70[5] = (ulonglong)pbStack_100;
  puStack_70[2] = (ulonglong)pcStack_118;
  *(undefined1 *)(puStack_70 + 3) = (undefined1)uStack_110;
  *(undefined1 *)((longlong)puStack_70 + 0x19) = uStack_110._1_1_;
  *(undefined4 *)((longlong)puStack_70 + 0x1a) = uStack_110._2_4_;
  *(undefined2 *)((longlong)puStack_70 + 0x1e) = uStack_110._6_2_;
  *(char *)puStack_70 = (char)uStack_128;
  *(undefined4 *)((longlong)puStack_70 + 1) = uStack_128._1_4_;
  *(undefined2 *)((longlong)puStack_70 + 5) = uStack_128._5_2_;
  *(undefined1 *)((longlong)puStack_70 + 7) = uStack_128._7_1_;
  puStack_70[1] = (ulonglong)pbStack_120;
LAB_14012d348:
  if (!SBORROW8(0,(longlong)uStack_c8)) {
    if (uStack_c8 != (code **)0x0) {
      pub_1406abac0((byte *)uStack_c0,(ulonglong)uStack_c8,1);
    }
    if (uStack_b0 != 0) {
      pdb_140265910(&uStack_b0,&uStack_90,0x60,0x10);
    }
  }
  return puStack_70;
}

