// VA 0x140c25320, PDB extent 860 bytes
// country_core::systems::grass2::apply_glade_foliage_pack
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/grass2/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::grass2::apply_glade_foliage_pack
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/grass2/mod.rs
   Extent: 860 */

void pdb_140c25320(undefined8 *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  code *param_5,undefined8 *param_6,longlong *param_7)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  uint uVar7;
  code **ppcVar8;
  code *pcVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  code *pcVar14;
  byte *pbVar15;
  longlong lVar16;
  undefined1 (*pauVar17) [16];
  undefined1 uVar18;
  undefined1 (*pauVar19) [16];
  ulonglong *puVar20;
  undefined8 uVar21;
  bool bVar22;
  code *pcStack_200;
  code *pcStack_1f8;
  undefined4 uStack_1f0;
  int iStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  code **ppcStack_1e0;
  undefined8 uStack_1d8;
  undefined8 *puStack_168;
  code *pcStack_160;
  ulonglong uStack_158;
  undefined8 uStack_150;
  byte *pbStack_148;
  code *pcStack_140;
  code *pcStack_138;
  code *pcStack_130;
  undefined8 *puStack_128;
  byte *pbStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  code *pcStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  code **ppcStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  ulonglong uStack_d8;
  ulonglong uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  code *pcStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  longlong lStack_58;
  byte *pbStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lVar16 = (ulonglong)*(byte *)(*param_2 + 0x98) * 8;
  uVar12 = *(ulonglong *)(&UNK_14306b5e8 + lVar16);
  uVar21 = *(undefined8 *)(&UNK_14306b610 + lVar16);
  lVar16 = *param_7;
  puStack_88 = param_4;
  puStack_80 = param_1;
  if (*(ulonglong *)(lVar16 + 0x90) == uVar12) {
    pcStack_100 = (code *)0x140c253a6;
    iVar11 = pub_142e32750(*(undefined8 *)(lVar16 + 0x88),uVar21,uVar12);
    if (iVar11 == 0) {
      return;
    }
  }
  pcStack_78 = param_5;
  pcStack_100 = (code *)0x140c253bb;
  lStack_58 = lVar16;
  pdb_14007ee60();
  pcStack_100 = (code *)0x140c253c8;
  pbVar15 = pub_1406abab0(uVar12,1);
  if (pbVar15 == (byte *)0x0) {
    pcStack_100 = (code *)0x140c2559e;
    pdb_142dc7e2a(1,uVar12);
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pcStack_100 = (code *)0x140c253e2;
  pub_142e32760(pbVar15,uVar21,uVar12);
  lVar16 = lStack_58;
  uVar3 = *(undefined4 *)((longlong)param_7 + 0x1c);
  puVar5 = (undefined4 *)param_7[2];
  *puVar5 = uVar3;
  if (*(ulonglong *)(lStack_58 + 0x80) != 0) {
    pcStack_100 = (code *)0x140c2540f;
    pub_1406abac0(*(byte **)(lStack_58 + 0x88),*(ulonglong *)(lStack_58 + 0x80),1);
  }
  *(ulonglong *)(lVar16 + 0x80) = uVar12;
  *(byte **)(lVar16 + 0x88) = pbVar15;
  *(ulonglong *)(lVar16 + 0x90) = uVar12;
  *puVar5 = uVar3;
  pcStack_100 = (code *)0x140c2543e;
  pdb_140c25990(&uStack_d8,*(undefined8 *)(lVar16 + 0x88),*(undefined8 *)(lVar16 + 0x90));
  pcVar14 = pcStack_78;
  uStack_68 = (ulonglong *)(lVar16 + 0x30);
  pbStack_50 = *(byte **)(lVar16 + 0x68);
  pcStack_70 = *(code **)(lVar16 + 0x70);
  pcStack_60 = (code *)0x0;
  pbVar15 = pbStack_50;
  while (lVar16 = lStack_58, pcStack_70 != pcStack_60) {
    pcStack_60 = pcStack_60 + 1;
    pcStack_100 = (code *)0x140c2548a;
    pdb_140989ed0(pbVar15);
    pbVar15 = pbVar15 + 0x48;
  }
  if (*(longlong *)(lStack_58 + 0x60) != 0) {
    pcStack_100 = (code *)0x140c254b4;
    pub_1406abac0(pbStack_50,*(longlong *)(lStack_58 + 0x60) * 0x48,8);
  }
  uStack_68[8] = (ulonglong)pcStack_98;
  uStack_68[9] = (ulonglong)puStack_90;
  *(undefined4 *)(uStack_68 + 6) = (undefined4)uStack_a8;
  *(undefined4 *)((longlong)uStack_68 + 0x34) = uStack_a8._4_4_;
  *(undefined4 *)(uStack_68 + 7) = (undefined4)uStack_a0;
  *(undefined4 *)((longlong)uStack_68 + 0x3c) = uStack_a0._4_4_;
  *(undefined4 *)(uStack_68 + 4) = (undefined4)uStack_b8;
  *(undefined4 *)((longlong)uStack_68 + 0x24) = uStack_b8._4_4_;
  *(undefined4 *)(uStack_68 + 5) = uStack_b0;
  *(undefined4 *)((longlong)uStack_68 + 0x2c) = uStack_ac;
  *(undefined4 *)(uStack_68 + 2) = uStack_c8;
  *(undefined4 *)((longlong)uStack_68 + 0x14) = uStack_c4;
  *(undefined4 *)(uStack_68 + 3) = (undefined4)uStack_c0;
  *(undefined4 *)((longlong)uStack_68 + 0x1c) = uStack_c0._4_4_;
  *uStack_68 = uStack_d8;
  uStack_68[1] = uStack_d0;
  pcStack_100 = (code *)0x140c254e7;
  pdb_140c23f60(lVar16);
  lVar6 = *(longlong *)*puStack_80;
  *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
  uVar21 = *param_3;
  pcStack_100 = (code *)0x140c2550f;
  pdb_140c244f0(lVar6 + 0x10,uVar21,lVar16);
  *(undefined4 *)puStack_88[2] = *(undefined4 *)((longlong)puStack_88 + 0x1c);
  pcStack_100 = (code *)0x140c2552d;
  pdb_140c24f90(lVar6 + 0x10,*puStack_88,uVar21,lVar16);
  uVar3 = *(undefined4 *)(pcVar14 + 0x1c);
  puVar5 = *(undefined4 **)(pcVar14 + 0x10);
  *puVar5 = uVar3;
  puVar13 = *(undefined8 **)pcVar14;
  pcStack_100 = (code *)0x140c25543;
  pdb_140a58020(puVar13,0x1c);
  *puVar5 = uVar3;
  pcStack_100 = (code *)0x140c25553;
  pdb_140b1a190(lVar16,puVar13,0);
  *puVar5 = uVar3;
  *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
  param_6 = (undefined8 *)*param_6;
  pcStack_60 = (code *)0xfffffffffffffffe;
  pauVar19 = (undefined1 (*) [16])*puVar13;
  lVar16 = puVar13[3];
  auVar2 = *pauVar19;
  pauVar17 = pauVar19 + 1;
  uVar10 = ~(uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar2[0xf] >> 7) << 0xf);
  puVar20 = _DAT_143ca8e90;
  do {
    bVar22 = lVar16 == 0;
    lVar16 = lVar16 + -1;
    if (bVar22) {
      return;
    }
    if ((short)uVar10 == 0) {
      do {
        auVar2 = *pauVar17;
        pauVar19 = pauVar19 + -0xf0;
        pauVar17 = pauVar17 + 1;
        uVar10 = (ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar2[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar10 == 0);
    }
    uStack_158 = (ulonglong)uVar10;
    uVar7 = 0;
    for (; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    uVar12 = (ulonglong)uVar7;
    uStack_a8 = pauVar19 + uVar12 * -0xf + -0xf;
    if (pauVar19[uVar12 * -0xf + -1][8] == '\0') {
      pauVar19[uVar12 * -0xf + -1][8] = 1;
      if (*(longlong *)(pauVar19[uVar12 * -0xf + -0xd] + 8) == 0) {
        if (1 < *puVar20) {
          pcStack_200 = (code *)&uStack_a8;
          pcStack_1f8 = pdb_140959810;
          pcStack_140 = (code *)0x0;
          pcStack_138 = (code *)&UNK_14303dce8;
          pcStack_130 = (code *)0x33;
          puStack_128 = (undefined8 *)0x0;
          pbStack_120 = &UNK_14303dc48;
          puStack_118 = (undefined8 *)0x3e;
          uStack_110 = 2;
          pcStack_108 = (code *)&UNK_14303dce8;
          pcStack_100 = (code *)0x33;
          uStack_f8 = 0xc000000001;
          uStack_f0 = &UNK_14303dd41;
          ppcStack_e8 = &pcStack_200;
          pdb_140f332f0((longlong)&uStack_68 + 4,&pcStack_140);
        }
      }
      else if (pauVar19[uVar12 * -0xf + -0xf][8] == '\0') {
        ppcVar8 = *(code ***)pauVar19[uVar12 * -0xf + -8];
        uVar21 = *(undefined8 *)(pauVar19[uVar12 * -0xf + -8] + 8);
        pdb_140ca3e60(&pcStack_200,pauVar19 + uVar12 * -0xf + -10);
        pcVar14 = *(code **)(pauVar19[uVar12 * -0xf + -0xd] + 8);
        uVar1 = (longlong)pcVar14 * 4;
        ppcStack_1e0 = ppcVar8;
        uStack_1d8 = uVar21;
        if (0x7ffffffffffffffc < uVar1 || (ulonglong)pcVar14 >> 0x3e != 0) {
          uVar21 = 0;
LAB_140a578d8:
          pdb_142dc7e2a(uVar21,uVar1);
          goto LAB_140a57953;
        }
        if (uVar1 == 0) {
          pcStack_78 = (code *)0x4;
          pcStack_70 = (code *)0x0;
          pcVar9 = *(code **)pauVar19[uVar12 * -0xf + -0xd];
        }
        else {
          pcStack_98 = *(code **)pauVar19[uVar12 * -0xf + -0xd];
          puStack_80 = param_6;
          pdb_14007ee60();
          uVar21 = 4;
          pcStack_78 = (code *)pub_1406abab0(uVar1,4);
          if (pcStack_78 == (code *)0x0) goto LAB_140a578d8;
          pcVar9 = pcStack_98;
          param_6 = puStack_80;
          pcStack_70 = pcVar14;
        }
        puStack_80 = param_6;
        uVar18 = uStack_68._6_1_;
        if (pcVar14 != (code *)0x0) {
          pub_142e32760(pcStack_78,pcVar9,uVar1);
          uVar18 = uStack_68._6_1_;
        }
        puVar13 = (undefined8 *)0x8000000000000000;
        if (!SBORROW8(0,*(longlong *)pauVar19[uVar12 * -0xf + -0xc])) {
          puVar13 = *(undefined8 **)pauVar19[uVar12 * -0xf + -0xb];
          if ((longlong)puVar13 < 0) {
            uVar21 = 0;
LAB_140a57934:
            pdb_142dc7e2a(uVar21,puVar13);
            goto LAB_140a57953;
          }
          puStack_90 = puVar13;
          if (puVar13 == (undefined8 *)0x0) {
            pbStack_148 = (byte *)0x1;
          }
          else {
            uVar4 = *(undefined8 *)(pauVar19[uVar12 * -0xf + -0xc] + 8);
            pdb_14007ee60();
            uVar21 = 1;
            pbVar15 = pub_1406abab0((ulonglong)puStack_90,1);
            puVar13 = puStack_90;
            if (pbVar15 == (byte *)0x0) goto LAB_140a57934;
            pbStack_148 = pbVar15;
            pub_142e32760(pbVar15,uVar4,puStack_90);
            param_6 = puStack_80;
          }
          uVar18 = pauVar19[uVar12 * -0xf + -0xb][8];
          puVar13 = puStack_90;
        }
        uStack_d8 = *(ulonglong *)pauVar19[uVar12 * -0xf + -7];
        uStack_d0 = *(ulonglong *)(pauVar19[uVar12 * -0xf + -7] + 8);
        ppcStack_e8 = ppcStack_1e0;
        uStack_e0 = (undefined4)uStack_1d8;
        uStack_dc = uStack_1d8._4_4_;
        uStack_f8 = CONCAT44(iStack_1ec,uStack_1f0);
        uStack_f0 = (undefined *)CONCAT44(uStack_1e4,uStack_1e8);
        pcStack_108 = pcStack_200;
        pcStack_100 = pcStack_1f8;
        pcStack_140 = pcStack_70;
        pcStack_138 = pcStack_78;
        pbStack_120 = pbStack_148;
        puStack_118 = puStack_90;
        uStack_68._0_7_ = CONCAT16(uVar18,(undefined6)uStack_68);
        uStack_110 = CONCAT71(uStack_110._1_7_,uVar18);
        uStack_c8 = CONCAT31(uStack_c8._1_3_,pauVar19[uVar12 * -0xf + -6][0]);
        uStack_c0 = 0x8000000000000000;
        puStack_168 = &uStack_a8;
        pcStack_160 = pdb_140959810;
        pcStack_130 = pcVar14;
        puStack_128 = puVar13;
        pdb_140f60760(&pcStack_200,&UNK_14303dd38,&puStack_168);
        pcStack_78 = pcStack_200;
        pcStack_70 = pcStack_1f8;
        uVar1 = CONCAT44(iStack_1ec,uStack_1f0);
        if (iStack_1ec < 0) {
          uVar21 = 0;
LAB_140a57915:
          pdb_142dc7e2a(uVar21,uVar1);
          goto LAB_140a57953;
        }
        if (uVar1 == 0) {
          pbVar15 = (byte *)0x1;
        }
        else {
          pdb_14007ee60();
          uVar21 = 1;
          pbVar15 = pub_1406abab0(uVar1,1);
          if (pbVar15 == (byte *)0x0) goto LAB_140a57915;
          pub_142e32760(pbVar15,pcStack_70,uVar1);
          param_6 = puStack_80;
        }
        if ((!SBORROW8(0,uStack_c0)) && (uStack_c0 != 0)) {
          pub_1406abac0(uStack_b8,uStack_c0,1);
        }
        uStack_c0 = uVar1;
        uStack_b8 = pbVar15;
        pub_142e32760(&pcStack_200,&pcStack_140,0x98);
        uVar21 = pdb_140a2ca40(param_6,&pcStack_200);
        puVar20 = _DAT_143ca8e90;
        if (pcStack_78 != (code *)0x0) {
          pub_1406abac0((byte *)pcStack_70,(ulonglong)pcStack_78,1);
        }
        *(undefined8 *)(pauVar19[uVar12 * -0xf + -0xf] + 8) = 1;
        *(undefined8 *)pauVar19[uVar12 * -0xf + -0xe] = uVar21;
      }
      else {
        pcStack_78 = *(code **)pauVar19[uVar12 * -0xf + -0xe];
        if (3 < *puVar20) {
          pcStack_200 = (code *)&uStack_a8;
          pcStack_1f8 = pdb_140959810;
          pcStack_140 = (code *)0x0;
          pcStack_138 = (code *)&UNK_14303dce8;
          pcStack_130 = (code *)0x33;
          puStack_128 = (undefined8 *)0x0;
          pbStack_120 = &UNK_14303dc48;
          puStack_118 = (undefined8 *)0x3e;
          uStack_110 = 4;
          pcStack_108 = (code *)&UNK_14303dce8;
          pcStack_100 = (code *)0x33;
          uStack_f8 = 0xb500000001;
          uStack_f0 = &UNK_14303dcc0;
          ppcStack_e8 = &pcStack_200;
          pdb_140f332f0((longlong)&uStack_68 + 4,&pcStack_140);
        }
        ppcVar8 = *(code ***)pauVar19[uVar12 * -0xf + -8];
        uVar21 = *(undefined8 *)(pauVar19[uVar12 * -0xf + -8] + 8);
        pdb_140ca3e60(&pcStack_200,pauVar19 + uVar12 * -0xf + -10);
        pcVar14 = *(code **)(pauVar19[uVar12 * -0xf + -0xd] + 8);
        uVar1 = (longlong)pcVar14 * 4;
        ppcStack_1e0 = ppcVar8;
        uStack_1d8 = uVar21;
        if (0x7ffffffffffffffc < uVar1 || (ulonglong)pcVar14 >> 0x3e != 0) {
          uVar21 = 0;
LAB_140a578e9:
          pdb_142dc7e2a(uVar21,uVar1);
          goto LAB_140a57953;
        }
        if (uVar1 == 0) {
          pcStack_70 = (code *)0x4;
          pcStack_98 = (code *)0x0;
          uVar21 = *(undefined8 *)pauVar19[uVar12 * -0xf + -0xd];
        }
        else {
          uStack_150 = *(undefined8 *)pauVar19[uVar12 * -0xf + -0xd];
          puStack_80 = param_6;
          pdb_14007ee60();
          uVar21 = 4;
          pcStack_70 = (code *)pub_1406abab0(uVar1,4);
          if (pcStack_70 == (code *)0x0) goto LAB_140a578e9;
          uVar21 = uStack_150;
          param_6 = puStack_80;
          pcStack_98 = pcVar14;
        }
        uVar18 = uStack_68._7_1_;
        if (pcVar14 != (code *)0x0) {
          pub_142e32760(pcStack_70,uVar21,uVar1);
          uVar18 = uStack_68._7_1_;
        }
        puVar13 = (undefined8 *)0x8000000000000000;
        pbVar15 = uStack_a0;
        if (!SBORROW8(0,*(longlong *)pauVar19[uVar12 * -0xf + -0xc])) {
          puVar13 = *(undefined8 **)pauVar19[uVar12 * -0xf + -0xb];
          if ((longlong)puVar13 < 0) {
            uVar21 = 0;
LAB_140a57926:
            pdb_142dc7e2a(uVar21,puVar13);
LAB_140a57953:
                    /* WARNING: Does not return */
            pcVar14 = (code *)invalidInstructionException();
            (*pcVar14)();
          }
          puStack_88 = puVar13;
          if (puVar13 == (undefined8 *)0x0) {
            pbVar15 = (byte *)0x1;
          }
          else {
            uVar4 = *(undefined8 *)(pauVar19[uVar12 * -0xf + -0xc] + 8);
            puStack_80 = param_6;
            pdb_14007ee60();
            uVar21 = 1;
            pbVar15 = pub_1406abab0((ulonglong)puStack_88,1);
            puVar13 = puStack_88;
            if (pbVar15 == (byte *)0x0) goto LAB_140a57926;
            pub_142e32760(pbVar15,uVar4,puStack_88);
            param_6 = puStack_80;
          }
          uVar18 = pauVar19[uVar12 * -0xf + -0xb][8];
          puVar13 = puStack_88;
        }
        puVar20 = uStack_68;
        uStack_d8 = *(ulonglong *)pauVar19[uVar12 * -0xf + -7];
        uStack_d0 = *(ulonglong *)(pauVar19[uVar12 * -0xf + -7] + 8);
        pcStack_108 = pcStack_200;
        pcStack_100 = pcStack_1f8;
        uStack_f8 = CONCAT44(iStack_1ec,uStack_1f0);
        uStack_f0 = (undefined *)CONCAT44(uStack_1e4,uStack_1e8);
        ppcStack_e8 = ppcStack_1e0;
        uStack_e0 = (undefined4)uStack_1d8;
        uStack_dc = uStack_1d8._4_4_;
        pcStack_140 = pcStack_98;
        pcStack_138 = pcStack_70;
        puStack_118 = puStack_88;
        uStack_68 = (ulonglong *)CONCAT17(uVar18,(undefined7)uStack_68);
        uStack_110 = CONCAT71(uStack_110._1_7_,uVar18);
        uStack_c8 = CONCAT31(uStack_c8._1_3_,pauVar19[uVar12 * -0xf + -6][0]);
        uStack_68._0_5_ = SUB85(puVar20,0);
        uStack_68._0_6_ = CONCAT15(1,(undefined5)uStack_68);
        pcStack_130 = pcVar14;
        puStack_128 = puVar13;
        pbStack_120 = pbVar15;
        uStack_a0 = pbVar15;
        pcVar14 = (code *)pdb_140a2d890(param_6,pcStack_78);
        puVar20 = _DAT_143ca8e90;
        if (pcVar14 == (code *)0x0) {
          uStack_68._0_6_ = CONCAT15(1,(undefined5)uStack_68);
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_14303dd20);
        }
        pcStack_78 = pcVar14;
        pdb_14098a960(pcVar14);
        *(ulonglong *)(pcStack_78 + 0x70) = uStack_d0;
        *(ulonglong *)(pcStack_78 + 0x78) = CONCAT44(uStack_c4,uStack_c8);
        *(ulonglong *)(pcStack_78 + 0x60) = CONCAT44(uStack_dc,uStack_e0);
        *(ulonglong *)(pcStack_78 + 0x68) = uStack_d8;
        *(undefined **)(pcStack_78 + 0x50) = uStack_f0;
        *(code ***)(pcStack_78 + 0x58) = ppcStack_e8;
        *(code **)(pcStack_78 + 0x40) = pcStack_100;
        *(undefined8 *)(pcStack_78 + 0x48) = uStack_f8;
        *(undefined8 *)(pcStack_78 + 0x30) = uStack_110;
        *(code **)(pcStack_78 + 0x38) = pcStack_108;
        *(byte **)(pcStack_78 + 0x20) = pbStack_120;
        *(undefined8 **)(pcStack_78 + 0x28) = puStack_118;
        *(code **)(pcStack_78 + 0x10) = pcStack_130;
        *(undefined8 **)(pcStack_78 + 0x18) = puStack_128;
        *(code **)pcStack_78 = pcStack_140;
        *(code **)(pcStack_78 + 8) = pcStack_138;
      }
    }
    uVar10 = (uint)uStack_158 - 1 & (uint)uStack_158;
  } while( true );
}

