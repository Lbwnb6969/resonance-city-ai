// VA 0x1408b1840, PDB extent 7862 bytes
// system_decorator::decorator_visual::playermade_stairs::utils::stairs_assemble_wood_misc::upload_wooden_frames_to_gpu
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/utils/stairs_assemble_wood_misc.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::utils::stairs_assemble_wood_misc::upload_wooden_frames_to_gpu
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/utils/stairs_assemble_wood_misc.rs
   Extent: 7862 */

void pdb_1408b1840(code *******param_1,code *******param_2,code *******param_3,undefined8 param_4)

{
  byte *pbVar1;
  code *******pppppppcVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  code ******ppppppcVar9;
  int iVar10;
  code *pcVar11;
  uint uVar12;
  code ******ppppppcVar13;
  code ******ppppppcVar14;
  code ******ppppppcVar15;
  code ******ppppppcVar16;
  code ******ppppppcVar17;
  char cVar18;
  uint uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  longlong lVar22;
  ulonglong uVar23;
  code ******ppppppcVar24;
  code *******pppppppcVar25;
  undefined8 *puVar26;
  code *******pppppppcVar27;
  longlong *plVar28;
  uint uVar29;
  uint uVar30;
  code *******pppppppcVar31;
  uint uVar32;
  undefined *puVar33;
  undefined *puVar34;
  code *******pppppppcVar35;
  ushort uVar36;
  ulonglong uVar37;
  code ******ppppppcVar38;
  undefined8 uVar39;
  code *******pppppppcVar40;
  code *******pppppppcVar41;
  code *******unaff_R15;
  code ******ppppppcVar42;
  byte bVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  code *******pppppppcStack_328;
  code *******pppppppcStack_320;
  code *******pppppppcStack_318;
  code *******pppppppcStack_310;
  code *******pppppppcStack_2e8;
  code *******pppppppcStack_2e0;
  code *******pppppppcStack_2d8;
  code *******pppppppcStack_2d0;
  code ******ppppppcStack_2c8;
  code ******ppppppcStack_2c0;
  code *******pppppppcStack_2b8;
  code *******pppppppcStack_2b0;
  code ******ppppppcStack_2a8;
  code *******pppppppcStack_2a0;
  code *******pppppppcStack_288;
  code ******ppppppcStack_280;
  code ******ppppppcStack_278;
  code *******pppppppcStack_270;
  code *******pppppppcStack_268;
  code *******pppppppcStack_260;
  code *******pppppppcStack_258;
  code *******pppppppcStack_250;
  code *******pppppppcStack_248;
  code *******pppppppcStack_240;
  code *******pppppppcStack_238;
  uint uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  code *******pppppppcStack_218;
  code *******pppppppcStack_210;
  code *******pppppppcStack_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  code ******ppppppcStack_1f0;
  code *******pppppppcStack_1e8;
  code *******pppppppcStack_1e0;
  undefined1 uStack_1d8;
  code *******pppppppcStack_1c8;
  undefined8 uStack_1c0;
  code *******pppppppcStack_1b8;
  code *******pppppppcStack_1b0;
  code *******pppppppcStack_1a8;
  code *******pppppppcStack_1a0;
  undefined8 uStack_198;
  code ******ppppppcStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  uint uStack_168;
  uint uStack_164;
  code *******pppppppcStack_160;
  undefined8 uStack_158;
  code *******pppppppcStack_150;
  longlong lStack_148;
  undefined8 uStack_140;
  code ******ppppppcStack_138;
  code ******ppppppcStack_130;
  code *******pppppppcStack_128;
  code *******pppppppcStack_120;
  code *******pppppppcStack_118;
  code *******pppppppcStack_110;
  code ******ppppppcStack_108;
  code *******pppppppcStack_100;
  code ******ppppppcStack_f8;
  uint uStack_ec;
  code *******pppppppcStack_e8;
  code *******pppppppcStack_e0;
  longlong lStack_d8;
  code ******ppppppcStack_d0;
  code ******ppppppcStack_c8;
  code *******pppppppcStack_c0;
  code *******pppppppcStack_b8;
  code *******pppppppcStack_b0;
  code ******ppppppcStack_a8;
  code *******pppppppcStack_a0;
  code *******pppppppcStack_98;
  code ******ppppppcStack_90;
  undefined1 uStack_88;
  undefined1 uStack_86;
  undefined1 uStack_85;
  undefined1 uStack_84;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  pppppppcVar31 = param_2;
  uStack_158 = param_4;
  cVar18 = pdb_140e94b40();
  pppppppcStack_a0 = param_2;
  if (cVar18 == '\0') {
    lStack_148 = 0;
    goto LAB_1408b1a25;
  }
  pppppppcVar40 = (code *******)0x74;
  lVar22 = pdb_1408b4820(0x74);
  unaff_R15 = (code *******)&UNK_143015430;
  if (lVar22 == 1) {
    if ((code *******)0x74 < pppppppcVar31) {
      pdb_142dc8070(&UNK_143015430,0x74,0,pppppppcVar31,&UNK_143015528);
LAB_1408b2d86:
      pdb_142dc8070(&UNK_143015430,0x74);
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    uVar23 = pdb_1408b4820(pppppppcVar31);
    if ((uVar23 & 1) != 0) {
      if (0x74 < (longlong)pppppppcVar31 + 2U) goto LAB_1408b2d86;
      pppppppcVar40 = (code *******)(0x72 - (longlong)pppppppcVar31);
      unaff_R15 = (code *******)((longlong)pppppppcVar31 + 0x143015432);
    }
  }
  puVar33 = &UNK_143015352;
  ppppppcVar38 = (code ******)&UNK_1430152f0;
  do {
    bVar43 = puVar33[-1];
    uVar19 = (uint)(char)bVar43;
    if ((char)bVar43 < '\0') {
      bVar4 = puVar33[-2];
      if ((char)bVar4 < -0x40) {
        bVar5 = puVar33[-3];
        if ((char)bVar5 < -0x40) {
          pbVar1 = puVar33 + -4;
          puVar33 = puVar33 + -4;
          uVar19 = bVar5 & 0x3f | (*pbVar1 & 7) << 6;
        }
        else {
          puVar33 = puVar33 + -3;
          uVar19 = bVar5 & 0xf;
        }
        uVar19 = bVar4 & 0x3f | uVar19 << 6;
      }
      else {
        puVar33 = puVar33 + -2;
        uVar19 = bVar4 & 0x1f;
      }
      uVar19 = (uint)(bVar43 & 0x3f) | uVar19 << 6;
      if (uVar19 != 0x5c) goto LAB_1408b1984;
LAB_1408b199c:
      puVar34 = puVar33 + -0x1430152ef;
      if ((undefined *)0x62 < puVar34) {
        pdb_142dc8070(&UNK_1430152f0,0x62,puVar34,0x62,&UNK_143015508);
        goto LAB_1408b2d4f;
      }
      pppppppcVar31 = (code *******)(0x62 - (longlong)puVar34);
      ppppppcVar38 = (code ******)(puVar33 + 1);
      goto LAB_1408b19be;
    }
    puVar33 = puVar33 + -1;
    if (uVar19 == 0x5c) goto LAB_1408b199c;
LAB_1408b1984:
    if (uVar19 == 0x2f) goto LAB_1408b199c;
  } while (puVar33 != &UNK_1430152f0);
  pppppppcVar31 = (code *******)0x62;
LAB_1408b19be:
  ppppppcVar24 = (code ******)pdb_140e97000();
  if (*(char *)(ppppppcVar24 + 0xd) != '\x01') goto LAB_1408b2cb7;
  do {
    if (*ppppppcVar24 == (code *****)0x0) {
      *ppppppcVar24 = (code *****)0xffffffffffffffff;
      ppppppcStack_90 = ppppppcVar24;
      uStack_140 = pdb_140e94f10(ppppppcVar24 + 1,unaff_R15,pppppppcVar40,ppppppcVar38,pppppppcVar31
                                 ,1,0);
      *ppppppcStack_90 = (code *****)((longlong)*ppppppcStack_90 + 1);
      lStack_148 = 1;
LAB_1408b1a25:
      lStack_d8 = 0;
      ppppppcStack_d0 = (code ******)0x4;
      ppppppcStack_c8 = (code ******)0x0;
      pppppppcVar31 = (code *******)*param_1;
      ppppppcVar38 = pppppppcVar31[2];
      if ((code ******)0x1745d1745d1745d < ppppppcVar38) {
        uVar39 = 0;
LAB_1408b1a66:
        pdb_142dc7e2a(uVar39,unaff_R15);
        goto LAB_1408b2d64;
      }
      pppppppcVar41 = (code *******)0x8;
      pppppppcVar40 = (code *******)0x8;
      if (ppppppcVar38 != (code ******)0x0) {
        unaff_R15 = (code *******)((longlong)ppppppcVar38 * 0x58);
        pdb_14007ee60();
        uVar39 = 8;
        pppppppcVar40 = (code *******)pub_1406abab0((ulonglong)unaff_R15,8);
        if (pppppppcVar40 == (code *******)0x0) goto LAB_1408b1a66;
      }
      ppppppcStack_f8 = (code ******)0x0;
      pppppppcVar35 = (code *******)pppppppcVar31[5];
      ppppppcStack_108 = ppppppcVar38;
      pppppppcStack_100 = pppppppcVar40;
      if (pppppppcVar35 != (code *******)0x0) {
        unaff_R15 = (code *******)((longlong)pppppppcVar35 * 0x30);
        pdb_14007ee60();
        pppppppcVar41 = (code *******)pub_1406abab0((ulonglong)unaff_R15,8);
        if (pppppppcVar41 == (code *******)0x0) goto LAB_1408b2d4f;
      }
      pppppppcStack_e0 = &ppppppcStack_1f0;
      pppppppcStack_b8 = pppppppcVar31 + 3;
      pppppppcStack_110 = (code *******)0x0;
      ppppppcStack_130 = param_1[2];
      pppppppcStack_b0 =
           (code *******)CONCAT44(pppppppcStack_b0._4_4_,*(uint *)((longlong)param_1 + 0x1c));
      *(uint *)ppppppcStack_130 = *(uint *)((longlong)param_1 + 0x1c);
      pppppppcStack_218 = (code *******)pppppppcVar31[1];
      ppppppcVar38 = pppppppcVar31[2];
      pppppppcVar31[2] = (code ******)0x0;
      pppppppcVar2 = pppppppcStack_218 + (longlong)ppppppcVar38 * 9;
      uStack_200 = SUB84(ppppppcVar38,0);
      uStack_1fc = (undefined4)((ulonglong)ppppppcVar38 >> 0x20);
      uStack_1f8 = 0;
      uStack_1f4 = 0;
      ppppppcStack_a8 = (code ******)0x4;
      pppppppcVar25 = pppppppcStack_218;
      ppppppcVar38 = (code ******)0x0;
      pppppppcStack_210 = pppppppcVar2;
      pppppppcStack_208 = pppppppcVar31;
      pppppppcStack_128 = param_3;
      pppppppcStack_120 = pppppppcVar35;
      pppppppcStack_118 = pppppppcVar41;
      pppppppcStack_e8 = pppppppcVar31;
      while (pppppppcVar40 = pppppppcStack_e8, pppppppcVar25 != pppppppcVar2) {
        pppppppcVar31 = pppppppcVar25 + 9;
        pppppppcVar41 = (code *******)*pppppppcVar25;
        pppppppcStack_218 = pppppppcVar31;
        if (SBORROW8(0,(longlong)pppppppcVar41)) break;
        ppppppcVar24 = pppppppcVar25[7];
        uVar19 = *(uint *)(pppppppcVar25 + 8);
        ppppppcStack_90 = pppppppcVar25[1];
        ppppppcVar9 = pppppppcVar25[2];
        ppppppcVar13 = pppppppcVar25[5];
        ppppppcVar14 = pppppppcVar25[6];
        ppppppcVar15 = pppppppcVar25[3];
        ppppppcVar16 = pppppppcVar25[4];
        pppppppcStack_98 = pppppppcVar41;
        if ((code ******)(lStack_d8 - (longlong)ppppppcVar38) < ppppppcVar9) {
          uStack_88 = 1;
          pdb_142d7f1b0(&lStack_d8,ppppppcVar38,ppppppcVar9,4,0x30);
          ppppppcStack_a8 = ppppppcStack_d0;
          ppppppcVar42 = ppppppcStack_c8;
LAB_1408b1c6e:
          pub_142e32760(ppppppcStack_a8 + (longlong)ppppppcVar42 * 6,ppppppcStack_90,
                        (longlong)ppppppcVar9 * 0x30);
        }
        else {
          ppppppcVar42 = ppppppcVar38;
          if (ppppppcVar9 != (code ******)0x0) goto LAB_1408b1c6e;
        }
        ppppppcVar17 = ppppppcStack_f8;
        ppppppcVar42 = (code ******)((longlong)ppppppcVar42 + (longlong)ppppppcVar9);
        ppppppcStack_c8 = ppppppcVar42;
        if (ppppppcStack_f8 == ppppppcStack_108) {
          pdb_142d7ebb0(&ppppppcStack_108);
        }
        pppppppcStack_100[(longlong)ppppppcVar17 * 0xb] = ppppppcVar24;
        pppppppcStack_100[(longlong)ppppppcVar17 * 0xb + 1] = ppppppcVar38;
        pppppppcStack_100[(longlong)ppppppcVar17 * 0xb + 2] = ppppppcVar9;
        *(uint *)(pppppppcStack_100 + (longlong)ppppppcVar17 * 0xb + 3) = uVar19;
        pppppppcStack_100[(longlong)ppppppcVar17 * 0xb + 4] = (code ******)pppppppcStack_98;
        pppppppcStack_100[(longlong)ppppppcVar17 * 0xb + 5] = ppppppcStack_90;
        pppppppcStack_100[(longlong)ppppppcVar17 * 0xb + 6] = (code ******)0x0;
        pppppppcStack_100[(longlong)ppppppcVar17 * 0xb + 7] = ppppppcVar15;
        (pppppppcStack_100 + (longlong)ppppppcVar17 * 0xb + 7)[1] = ppppppcVar16;
        pppppppcStack_100[(longlong)ppppppcVar17 * 0xb + 9] = ppppppcVar13;
        (pppppppcStack_100 + (longlong)ppppppcVar17 * 0xb + 9)[1] = ppppppcVar14;
        ppppppcStack_f8 = (code ******)((longlong)ppppppcVar17 + 1);
        pppppppcVar25 = pppppppcVar31;
        ppppppcVar38 = ppppppcVar42;
      }
      param_3 = pppppppcStack_218;
      if (pppppppcVar2 != pppppppcStack_218) {
        uVar23 = (ulonglong)((longlong)pppppppcVar2 - (longlong)pppppppcStack_218) / 0x48;
        param_3 = pppppppcStack_218 + 1;
        do {
          if (param_3[-1] != (code ******)0x0) {
            pub_1406abac0((byte *)*param_3,(longlong)param_3[-1] * 0x30,4);
          }
          param_3 = param_3 + 9;
          uVar23 = uVar23 - 1;
        } while (uVar23 != 0);
      }
      *(uint *)ppppppcStack_130 = (uint)pppppppcStack_b0;
      pppppppcVar31 = (code *******)pppppppcVar40[4];
      ppppppcVar24 = pppppppcVar40[5];
      pppppppcVar40[5] = (code ******)0x0;
      unaff_R15 = pppppppcVar31 + (longlong)ppppppcVar24 * 7;
      pppppppcStack_208 = pppppppcStack_b8;
      uStack_200 = SUB84(ppppppcVar24,0);
      uStack_1fc = (undefined4)((ulonglong)ppppppcVar24 >> 0x20);
      uStack_1f8 = 0;
      uStack_1f4 = 0;
      pppppppcVar41 = pppppppcVar31;
      pppppppcStack_210 = unaff_R15;
      if (ppppppcVar24 == (code ******)0x0) {
LAB_1408b1f3e:
        uVar23 = (ulonglong)((longlong)unaff_R15 - (longlong)pppppppcVar31) / 0x38;
        if (unaff_R15 != pppppppcVar31) {
          pppppppcVar31 = pppppppcVar31 + 1;
          do {
            if (pppppppcVar31[-1] != (code ******)0x0) {
              pub_1406abac0((byte *)*pppppppcVar31,(longlong)pppppppcVar31[-1] * 0x30,4);
            }
            pppppppcVar31 = pppppppcVar31 + 7;
            uVar23 = uVar23 - 1;
          } while (uVar23 != 0);
        }
      }
      else {
        do {
          pppppppcVar31 = pppppppcVar41 + 7;
          ppppppcVar24 = *pppppppcVar41;
          if (SBORROW8(0,(longlong)ppppppcVar24)) goto LAB_1408b1f3e;
          ppppppcStack_a8 = pppppppcVar41[1];
          ppppppcVar9 = pppppppcVar41[2];
          uVar7 = *(uint *)(pppppppcVar41 + 3);
          uVar8 = *(uint *)((longlong)pppppppcVar41 + 0x1c);
          uVar6 = *(uint *)(pppppppcVar41 + 6);
          pppppppcVar40 = (code *******)(ulonglong)uVar6;
          uVar19 = *(uint *)((longlong)pppppppcVar41 + 0x34);
          ppppppcVar13 = pppppppcVar41[4];
          ppppppcVar14 = pppppppcVar41[5];
          pppppppcStack_98 = pppppppcVar31;
          ppppppcStack_90 = ppppppcVar24;
          if ((code ******)(lStack_d8 - (longlong)ppppppcVar38) < ppppppcVar9) {
            pdb_142d7f1b0(&lStack_d8,ppppppcVar38,ppppppcVar9,4,0x30);
            ppppppcVar24 = ppppppcStack_c8;
LAB_1408b1e50:
            pub_142e32760(ppppppcStack_d0 + (longlong)ppppppcVar24 * 6,ppppppcStack_a8,
                          (longlong)ppppppcVar9 * 0x30);
          }
          else {
            ppppppcVar24 = ppppppcVar38;
            if (ppppppcVar9 != (code ******)0x0) goto LAB_1408b1e50;
          }
          pppppppcVar31 = pppppppcStack_110;
          ppppppcVar24 = (code ******)((longlong)ppppppcVar24 + (longlong)ppppppcVar9);
          ppppppcStack_c8 = ppppppcVar24;
          if (pppppppcStack_110 == pppppppcStack_120) {
            pdb_142d7e7c0(&pppppppcStack_120);
          }
          pppppppcStack_118[(longlong)pppppppcVar31 * 6] = ppppppcVar13;
          (pppppppcStack_118 + (longlong)pppppppcVar31 * 6)[1] = ppppppcVar14;
          *(uint *)(pppppppcStack_118 + (longlong)pppppppcVar31 * 6 + 2) = uVar7;
          *(uint *)((longlong)(pppppppcStack_118 + (longlong)pppppppcVar31 * 6 + 2) + 4) = uVar8;
          pppppppcStack_118[(longlong)pppppppcVar31 * 6 + 3] = ppppppcVar38;
          pppppppcStack_118[(longlong)pppppppcVar31 * 6 + 4] = ppppppcVar9;
          *(uint *)(pppppppcStack_118 + (longlong)pppppppcVar31 * 6 + 5) = uVar6;
          *(uint *)((longlong)pppppppcStack_118 + (longlong)pppppppcVar31 * 0x30 + 0x2c) = uVar19;
          pppppppcStack_110 = (code *******)((longlong)pppppppcVar31 + 1);
          if (ppppppcStack_90 != (code ******)0x0) {
            pub_1406abac0((byte *)ppppppcStack_a8,(longlong)ppppppcStack_90 * 0x30,4);
          }
          param_3 = pppppppcVar41 + 7;
          ppppppcVar38 = ppppppcVar24;
          pppppppcVar41 = pppppppcStack_98;
        } while (param_3 != unaff_R15);
      }
      if ((ppppppcStack_f8 != (code ******)0x0) || (pppppppcStack_110 != (code *******)0x0)) {
        ppppppcVar24 = *pppppppcStack_a0;
        uStack_81 = 1;
        uStack_82 = 1;
        ppppppcStack_138 = ppppppcVar38;
        param_3 = (code *******)pdb_140a92040(ppppppcVar24);
        pppppppcVar41 = (code *******)((longlong)ppppppcStack_138 * 0x30);
        uStack_81 = 1;
        uStack_82 = 1;
        uVar39 = pdb_140e1cff0(pppppppcVar41,0x210);
        uStack_81 = 1;
        uStack_82 = 1;
        ppppppcStack_280 = ppppppcStack_d0;
        pdb_1414f3f20(&pppppppcStack_218,param_3,&UNK_143015352,0x19,uVar39,ppppppcStack_d0,
                      pppppppcVar41);
        pppppppcVar31 = pppppppcStack_210;
        if (pppppppcStack_218 == (code *******)0xb) {
          pppppppcStack_160 = pppppppcStack_210;
          uStack_83 = 1;
          uStack_84 = 1;
          uStack_85 = 1;
          lVar22 = pdb_140a92040(ppppppcVar24);
          param_3 = *(code ********)(lVar22 + 0x520);
          param_1 = *(code ********)(lVar22 + 0x658);
          uStack_83 = 1;
          uStack_84 = 1;
          uStack_85 = 1;
          puVar26 = (undefined8 *)pdb_140e17330(&pppppppcStack_160);
          pppppppcStack_208 = (code *******)*puVar26;
          pppppppcStack_218 = (code *******)CONCAT44(pppppppcStack_218._4_4_,0x3b9e8321);
          pppppppcStack_210 = (code *******)0x0;
          ppppppcStack_130 = (code ******)(*(code *)param_3)(param_1,&pppppppcStack_218);
          pppppppcStack_218 = (code *******)0x1;
          pppppppcStack_210 = (code *******)0x1;
          pppppppcStack_208 = pppppppcVar31;
          pdb_14007ee60();
          pppppppcVar40 = (code *******)pub_1406abab0(0x18,8);
          if (pppppppcVar40 == (code *******)0x0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc7e11(8,0x18);
          }
          pppppppcVar40[2] = (code ******)pppppppcStack_208;
          *pppppppcVar40 = (code ******)pppppppcStack_218;
          pppppppcVar40[1] = (code ******)pppppppcStack_210;
          pppppppcVar25 = _UNK_142e4e658;
          pppppppcVar2 = _DAT_142e4e650;
          pppppppcStack_2a0 = pppppppcStack_100 + (longlong)ppppppcStack_f8 * 0xb;
          pppppppcStack_2b8 = pppppppcStack_100;
          ppppppcStack_278 = ppppppcStack_108;
          ppppppcStack_2a8 = ppppppcStack_108;
          pppppppcStack_98 =
               (code *******)
               CONCAT44(pppppppcStack_98._4_4_,*(uint *)((longlong)pppppppcStack_128 + 0x1c));
          ppppppcStack_90 = *pppppppcStack_128;
          ppppppcStack_a8 = pppppppcStack_128[2];
          pppppppcStack_128 = (code *******)(ppppppcStack_90 + 4);
          pppppppcVar31 = pppppppcStack_100 + 0x10;
          pppppppcStack_270 = pppppppcStack_100;
          pppppppcVar27 = pppppppcStack_100;
          pppppppcVar35 = (code *******)((longlong)ppppppcStack_f8 * 0x58);
          pppppppcStack_e0 = pppppppcStack_2a0;
          pppppppcStack_c0 = pppppppcVar40;
          while (pppppppcVar35 = pppppppcVar35 + -0xb, unaff_R15 = pppppppcVar41,
                pppppppcVar27 != pppppppcStack_e0) {
            pppppppcStack_2b0 = pppppppcVar27 + 0xb;
            uVar19 = *(uint *)pppppppcVar27;
            ppppppcVar38 = (code ******)(ulonglong)uVar19;
            uVar6 = *(uint *)((longlong)pppppppcVar27 + 4);
            param_1 = (code *******)(ulonglong)uVar6;
            param_3 = (code *******)pppppppcVar27[1];
            uVar7 = *(uint *)(pppppppcVar27 + 2);
            uVar8 = *(uint *)(pppppppcVar27 + 3);
            unaff_R15 = (code *******)(ulonglong)uVar8;
            pppppppcVar40 = (code *******)pppppppcVar27[4];
            ppppppcStack_2c8 = pppppppcVar27[9];
            ppppppcStack_2c0 = pppppppcVar27[10];
            pppppppcStack_2d8 = (code *******)pppppppcVar27[7];
            pppppppcStack_2d0 = (code *******)pppppppcVar27[8];
            pppppppcVar41 = (code *******)pppppppcVar27[5];
            pppppppcStack_2e0 = (code *******)pppppppcVar27[6];
            pppppppcStack_2e8 = pppppppcVar41;
            if (SBORROW8(0,(longlong)pppppppcVar40)) {
              if (pppppppcStack_e0 != pppppppcStack_2b0) {
                uVar23 = (ulonglong)pppppppcVar35 / 0x58;
                do {
                  if (pppppppcVar31[-1] != (code ******)0x0) {
                    pub_1406abac0((byte *)*pppppppcVar31,(longlong)pppppppcVar31[-1] * 0x30,4);
                  }
                  pppppppcVar31 = pppppppcVar31 + 0xb;
                  uVar23 = uVar23 - 1;
                  param_1 = (code *******)0x0;
                } while (uVar23 != 0);
              }
              break;
            }
            uStack_230 = (uint)ppppppcStack_2c8;
            uStack_22c = (undefined4)((ulonglong)ppppppcStack_2c8 >> 0x20);
            uStack_228 = SUB84(ppppppcStack_2c0,0);
            uStack_224 = (undefined4)((ulonglong)ppppppcStack_2c0 >> 0x20);
            ppppppcVar24 = (code ******)((longlong)param_3 + ((ulonglong)uVar7 - 1));
            pppppppcStack_258 = pppppppcVar40;
            pppppppcStack_250 = pppppppcVar41;
            pppppppcStack_248 = pppppppcStack_2e0;
            pppppppcStack_240 = pppppppcStack_2d8;
            pppppppcStack_238 = pppppppcStack_2d0;
            uStack_168 = uVar19;
            uStack_164 = uVar6;
            pppppppcStack_a0 = pppppppcVar40;
            if (ppppppcStack_138 <= ppppppcVar24) goto LAB_1408b2d16;
            uVar21 = *(undefined4 *)
                      ((longlong)ppppppcStack_280 + (longlong)ppppppcVar24 * 0x30 + 0xc);
            uVar30 = (uStack_230 & 1) + (uint)((uStack_230 >> 1 & 1) != 0);
            uVar29 = (uVar7 - 1) + (uint)(uVar7 == 0);
            uVar32 = uVar29 + uVar30;
            if (CARRY4(uVar29,uVar30)) {
              uVar32 = 0xffffffff;
            }
            uVar29 = 1;
            if (1 < uVar32) {
              iVar10 = 0x1f;
              if (uVar32 - 1 != 0) {
                for (; uVar32 - 1 >> iVar10 == 0; iVar10 = iVar10 + -1) {
                }
              }
              uVar29 = (0xffffffffU >> (~(byte)iVar10 & 0x1f)) + 1;
              if (uVar29 == 0) {
                pdb_142dc8400(&UNK_1430153b8);
                goto LAB_1408b2d64;
              }
            }
            uVar32 = 0;
            for (; (uVar29 & 1) == 0; uVar29 = uVar29 >> 1 | 0x80000000) {
              uVar32 = uVar32 + 1;
            }
            uVar29 = 5;
            if (uVar32 < 5) {
              uVar29 = uVar32;
            }
            if (uVar32 == 0) {
              uVar29 = 1;
            }
            *(undefined4 *)ppppppcStack_a8 = pppppppcStack_98._0_4_;
            pppppppcVar41 = unaff_R15;
            pppppppcStack_e8 = pppppppcVar31;
            pppppppcStack_b8 = pppppppcVar35;
            pppppppcStack_b0 = pppppppcStack_2b0;
            if (ppppppcStack_90[3] != (code *****)0x0) {
              uVar23 = pdb_1400af680(pppppppcStack_128,&uStack_168);
              ppppppcVar24 = ppppppcStack_130 + (longlong)param_3 * 6;
              param_3 = (code *******)*ppppppcStack_90;
              bVar43 = (byte)(uVar23 >> 0x39);
              auVar44 = ZEXT216(CONCAT11(bVar43,bVar43));
              auVar44 = pshuflw(auVar44,auVar44,0);
              lVar22 = 0;
              while( true ) {
                uVar23 = uVar23 & (ulonglong)ppppppcStack_90[1];
                auVar3 = *(undefined1 (*) [16])((longlong)param_3 + uVar23);
                auVar47[0] = -(auVar3[0] == auVar44[0]);
                auVar47[1] = -(auVar3[1] == auVar44[1]);
                auVar47[2] = -(auVar3[2] == auVar44[2]);
                auVar47[3] = -(auVar3[3] == auVar44[3]);
                auVar47[4] = -(auVar3[4] == auVar44[4]);
                auVar47[5] = -(auVar3[5] == auVar44[5]);
                auVar47[6] = -(auVar3[6] == auVar44[6]);
                auVar47[7] = -(auVar3[7] == auVar44[7]);
                auVar47[8] = -(auVar3[8] == auVar44[0]);
                auVar47[9] = -(auVar3[9] == auVar44[1]);
                auVar47[10] = -(auVar3[10] == auVar44[2]);
                auVar47[0xb] = -(auVar3[0xb] == auVar44[3]);
                auVar47[0xc] = -(auVar3[0xc] == auVar44[4]);
                auVar47[0xd] = -(auVar3[0xd] == auVar44[5]);
                auVar47[0xe] = -(auVar3[0xe] == auVar44[6]);
                auVar47[0xf] = -(auVar3[0xf] == auVar44[7]);
                uVar36 = (ushort)(SUB161(auVar47 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
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
                         (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar47[0xf] >> 7) << 0xf;
                uVar32 = (uint)uVar36;
                while (uVar36 != 0) {
                  uVar30 = 0;
                  for (uVar12 = uVar32; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
                    uVar30 = uVar30 + 1;
                  }
                  uVar37 = uVar30 + uVar23 & (ulonglong)ppppppcStack_90[1];
                  pppppppcVar41 = (code *******)(uVar37 * -0x140);
                  uStack_ec = uVar8;
                  if ((uVar19 == *(uint *)(param_3 + -0x28 + uVar37 * -0x28)) &&
                     (uVar6 == *(uint *)((code *)((longlong)param_3 + -0x13c) +
                                        (longlong)pppppppcVar41))) {
                    LOCK();
                    ppppppcVar9 = *pppppppcStack_c0;
                    *pppppppcStack_c0 = (code ******)((longlong)*pppppppcStack_c0 + 1);
                    UNLOCK();
                    if (*pppppppcStack_c0 == (code ******)0x0 ||
                        SCARRY8((longlong)ppppppcVar9,1) != (longlong)*pppppppcStack_c0 < 0)
                    goto LAB_1408b2d64;
                    pppppppcStack_150 = pppppppcStack_c0;
                    pppppppcStack_288 = pppppppcStack_c0;
                    uVar20 = pdb_1409012c0(uVar29);
                    pdb_1408fd550(&pppppppcStack_318,uVar20);
                    pppppppcStack_268 = pppppppcStack_318;
                    pppppppcStack_260 = pppppppcStack_310;
                    pdb_14007ee60();
                    pppppppcVar40 = pppppppcStack_260;
                    pppppppcVar31 = pppppppcStack_268;
                    pdb_140fb49c0(&pppppppcStack_318,&pppppppcStack_240);
                    pppppppcStack_1a0 = pppppppcStack_318;
                    uStack_198 = pppppppcStack_310;
                    pppppppcStack_1b0 = pppppppcStack_240;
                    pppppppcStack_1a8 = pppppppcStack_238;
                    pppppppcStack_1c8 = pppppppcStack_150;
                    pppppppcStack_218 = pppppppcVar2;
                    pppppppcStack_210 = pppppppcVar25;
                    uStack_200 = 0;
                    pppppppcStack_208 = (code *******)0x0;
                    uStack_1fc = 0x3f800000;
                    uStack_1f8 = 0x3f800000;
                    uStack_1f4 = 0x3f800000;
                    pppppppcStack_1e8 = pppppppcVar31;
                    pppppppcStack_1e0 = pppppppcVar40;
                    uStack_1d8 = 0x1a;
                    uStack_1c0 = (code *******)CONCAT44(uStack_ec,1);
                    pppppppcStack_1b8 = (code *******)0x0;
                    uStack_188 = CONCAT44(uStack_ec,uVar7);
                    uStack_180 = CONCAT44(uStack_230,uVar29);
                    uStack_178 = CONCAT44(uStack_228,uStack_22c);
                    uStack_170 = uStack_224;
                    ppppppcStack_190 = ppppppcVar24;
                    uStack_16c = uVar21;
                    pdb_1414baa90(&pppppppcStack_318,uStack_158,&pppppppcStack_218,&UNK_1430153a0);
                    pppppppcVar31 = pppppppcStack_318;
                    param_3 = param_3 + uVar37 * -0x28;
                    ppppppcVar24 = param_3[-0x22];
                    if (ppppppcVar24 == param_3[-0x24]) {
                      pdb_142db0920(param_3 + -0x24);
                    }
                    param_3[-0x23][(longlong)ppppppcVar24] = (code *****)pppppppcVar31;
                    param_1 = (code *******)((longlong)ppppppcVar24 + 1);
                    param_3[-0x22] = (code ******)param_1;
                    goto LAB_1408b25c6;
                  }
                  uVar36 = (ushort)(uVar32 - 1) & (ushort)uVar32;
                  uVar32 = CONCAT22((short)(uVar32 - 1 >> 0x10),uVar36);
                }
                auVar45[0] = -(auVar3[0] == -1);
                auVar45[1] = -(auVar3[1] == -1);
                auVar45[2] = -(auVar3[2] == -1);
                auVar45[3] = -(auVar3[3] == -1);
                auVar45[4] = -(auVar3[4] == -1);
                auVar45[5] = -(auVar3[5] == -1);
                auVar45[6] = -(auVar3[6] == -1);
                auVar45[7] = -(auVar3[7] == -1);
                auVar45[8] = -(auVar3[8] == -1);
                auVar45[9] = -(auVar3[9] == -1);
                auVar45[10] = -(auVar3[10] == -1);
                auVar45[0xb] = -(auVar3[0xb] == -1);
                auVar45[0xc] = -(auVar3[0xc] == -1);
                auVar45[0xd] = -(auVar3[0xd] == -1);
                auVar45[0xe] = -(auVar3[0xe] == -1);
                auVar45[0xf] = -(auVar3[0xf] == -1);
                pppppppcVar41 = unaff_R15;
                if ((((((((((((((((SUB161(auVar45 >> 7,0) & 1) != 0 ||
                                 (SUB161(auVar45 >> 0xf,0) & 1) != 0) ||
                                (SUB161(auVar45 >> 0x17,0) & 1) != 0) ||
                               (SUB161(auVar45 >> 0x1f,0) & 1) != 0) ||
                              (SUB161(auVar45 >> 0x27,0) & 1) != 0) ||
                             (SUB161(auVar45 >> 0x2f,0) & 1) != 0) ||
                            (SUB161(auVar45 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar45 >> 0x3f,0) & 1) != 0) ||
                          (SUB161(auVar45 >> 0x47,0) & 1) != 0) ||
                         (SUB161(auVar45 >> 0x4f,0) & 1) != 0) ||
                        (SUB161(auVar45 >> 0x57,0) & 1) != 0) ||
                       (SUB161(auVar45 >> 0x5f,0) & 1) != 0) || (SUB161(auVar45 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar45 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar45 >> 0x77,0) & 1) != 0) || auVar45[0xf] < '\0') break;
                uVar23 = uVar23 + lVar22 + 0x10;
                lVar22 = lVar22 + 0x10;
              }
            }
LAB_1408b25c6:
            if (pppppppcStack_a0 != (code *******)0x0) {
              pub_1406abac0((byte *)pppppppcStack_250,(longlong)pppppppcStack_a0 * 0x30,4);
            }
            pppppppcVar31 = pppppppcStack_e8 + 0xb;
            pppppppcVar27 = pppppppcStack_b0;
            pppppppcVar35 = pppppppcStack_b8;
          }
          if (ppppppcStack_278 != (code ******)0x0) {
            pub_1406abac0((byte *)pppppppcStack_270,(longlong)ppppppcStack_278 * 0x58,8);
          }
          pppppppcStack_b8 = pppppppcStack_120;
          pppppppcStack_e8 = pppppppcStack_118 + (longlong)pppppppcStack_110 * 6;
          pppppppcStack_b0 = pppppppcStack_118;
          for (pppppppcVar40 = pppppppcStack_118; pppppppcVar40 != pppppppcStack_e8;
              pppppppcVar40 = pppppppcVar40 + 6) {
            uVar6 = *(uint *)(pppppppcVar40 + 2);
            pppppppcStack_268 = (code *******)pppppppcVar40[2];
            pppppppcVar31 = (code *******)pppppppcVar40[3];
            uVar7 = *(uint *)(pppppppcVar40 + 4);
            param_1 = (code *******)(ulonglong)uVar7;
            uVar8 = *(uint *)(pppppppcVar40 + 5);
            uVar19 = *(uint *)((longlong)pppppppcVar40 + 0x2c);
            pppppppcStack_a0 =
                 (code *******)
                 CONCAT44(pppppppcStack_a0._4_4_,*(uint *)((longlong)pppppppcVar40 + 0x14));
            pppppppcStack_328 = (code *******)*pppppppcVar40;
            pppppppcStack_320 = (code *******)pppppppcVar40[1];
            uVar29 = (uVar8 & 1) + (uint)((uVar8 >> 1 & 1) != 0);
            uVar30 = (uVar7 - 1) + (uint)(uVar7 == 0);
            uVar32 = uVar30 + uVar29;
            if (CARRY4(uVar30,uVar29)) {
              uVar32 = 0xffffffff;
            }
            uVar29 = 1;
            if (1 < uVar32) {
              iVar10 = 0x1f;
              if (uVar32 - 1 != 0) {
                for (; uVar32 - 1 >> iVar10 == 0; iVar10 = iVar10 + -1) {
                }
              }
              uVar29 = (0xffffffffU >> (~(byte)iVar10 & 0x1f)) + 1;
              if (uVar29 == 0) {
                pdb_142dc8400(&UNK_1430153b8);
                goto LAB_1408b2d64;
              }
            }
            uVar32 = 0;
            for (; (uVar29 & 1) == 0; uVar29 = uVar29 >> 1 | 0x80000000) {
              uVar32 = uVar32 + 1;
            }
            uVar29 = 5;
            if (uVar32 < 5) {
              uVar29 = uVar32;
            }
            if (uVar32 == 0) {
              uVar29 = 1;
            }
            unaff_R15 = (code *******)(ulonglong)uVar29;
            *(undefined4 *)ppppppcStack_a8 = pppppppcStack_98._0_4_;
            ppppppcVar38 = (code ******)(ulonglong)uVar6;
            if (ppppppcStack_90[3] != (code *****)0x0) {
              uVar23 = pdb_1400af680(pppppppcStack_128,&pppppppcStack_268);
              pppppppcVar31 = (code *******)(ppppppcStack_130 + (longlong)pppppppcVar31 * 6);
              param_3 = (code *******)*ppppppcStack_90;
              bVar43 = (byte)(uVar23 >> 0x39);
              auVar44 = ZEXT216(CONCAT11(bVar43,bVar43));
              auVar44 = pshuflw(auVar44,auVar44,0);
              lVar22 = 0;
              while( true ) {
                uVar23 = uVar23 & (ulonglong)ppppppcStack_90[1];
                auVar3 = *(undefined1 (*) [16])((longlong)param_3 + uVar23);
                auVar48[0] = -(auVar3[0] == auVar44[0]);
                auVar48[1] = -(auVar3[1] == auVar44[1]);
                auVar48[2] = -(auVar3[2] == auVar44[2]);
                auVar48[3] = -(auVar3[3] == auVar44[3]);
                auVar48[4] = -(auVar3[4] == auVar44[4]);
                auVar48[5] = -(auVar3[5] == auVar44[5]);
                auVar48[6] = -(auVar3[6] == auVar44[6]);
                auVar48[7] = -(auVar3[7] == auVar44[7]);
                auVar48[8] = -(auVar3[8] == auVar44[0]);
                auVar48[9] = -(auVar3[9] == auVar44[1]);
                auVar48[10] = -(auVar3[10] == auVar44[2]);
                auVar48[0xb] = -(auVar3[0xb] == auVar44[3]);
                auVar48[0xc] = -(auVar3[0xc] == auVar44[4]);
                auVar48[0xd] = -(auVar3[0xd] == auVar44[5]);
                auVar48[0xe] = -(auVar3[0xe] == auVar44[6]);
                auVar48[0xf] = -(auVar3[0xf] == auVar44[7]);
                uVar36 = (ushort)(SUB161(auVar48 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar48 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar48 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar48 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar48 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar48 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar48 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar48 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar48 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar48 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar48 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar48 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar48 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar48 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar48 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar48[0xf] >> 7) << 0xf;
                uVar32 = (uint)uVar36;
                while (uVar36 != 0) {
                  uVar30 = 0;
                  for (uVar12 = uVar32; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
                    uVar30 = uVar30 + 1;
                  }
                  uVar37 = uVar30 + uVar23 & (ulonglong)ppppppcStack_90[1];
                  ppppppcVar38 = (code ******)(uVar37 * -0x140);
                  if ((uVar6 == *(uint *)(param_3 + -0x28 + uVar37 * -0x28)) &&
                     ((int)pppppppcStack_a0 ==
                      *(int *)((code *)((longlong)param_3 + -0x13c) + (longlong)ppppppcVar38))) {
                    LOCK();
                    ppppppcVar24 = *pppppppcStack_c0;
                    *pppppppcStack_c0 = (code ******)((longlong)*pppppppcStack_c0 + 1);
                    UNLOCK();
                    if (*pppppppcStack_c0 == (code ******)0x0 ||
                        SCARRY8((longlong)ppppppcVar24,1) != (longlong)*pppppppcStack_c0 < 0)
                    goto LAB_1408b2d64;
                    pppppppcStack_a0 = pppppppcStack_c0;
                    pppppppcStack_2b8 = pppppppcStack_c0;
                    uVar21 = pdb_1409012c0(unaff_R15);
                    pdb_1408fd550(&pppppppcStack_258,uVar21);
                    pppppppcStack_2e8 = pppppppcStack_258;
                    pppppppcStack_2e0 = pppppppcStack_250;
                    pdb_14007ee60();
                    pppppppcStack_318 = pppppppcStack_2e8;
                    pppppppcStack_310 = pppppppcStack_2e0;
                    pdb_140fb49c0(&pppppppcStack_2e8,&pppppppcStack_328);
                    pppppppcStack_248 = pppppppcStack_2e8;
                    pppppppcStack_240 = pppppppcStack_2e0;
                    pppppppcStack_258 = pppppppcStack_328;
                    pppppppcStack_250 = pppppppcStack_320;
                    pppppppcStack_1c8 = pppppppcStack_a0;
                    pppppppcStack_218 = pppppppcVar2;
                    pppppppcStack_210 = pppppppcVar25;
                    uStack_200 = 0;
                    pppppppcStack_208 = (code *******)0x0;
                    uStack_1fc = 0x3f800000;
                    uStack_1f8 = 0x3f800000;
                    uStack_1f4 = 0x3f800000;
                    pppppppcStack_1e8 = pppppppcStack_318;
                    pppppppcStack_1e0 = pppppppcStack_310;
                    uStack_1d8 = 0x1b;
                    pppppppcStack_1b0 = pppppppcStack_2e8;
                    pppppppcStack_1a8 = pppppppcStack_2e0;
                    uStack_1c0 = pppppppcStack_328;
                    pppppppcStack_1b8 = pppppppcStack_320;
                    uStack_198 = (code *******)CONCAT44(uVar29,uVar7);
                    ppppppcStack_190 = (code ******)(ulonglong)uVar8;
                    uStack_188 = (ulonglong)uVar19;
                    uStack_180 = 0;
                    pppppppcStack_1a0 = pppppppcVar31;
                    pdb_1414bad50(&pppppppcStack_258,uStack_158,&pppppppcStack_218,&UNK_143015370);
                    pppppppcVar31 = pppppppcStack_258;
                    param_3 = param_3 + uVar37 * -0x28;
                    ppppppcVar24 = param_3[-0x22];
                    if (ppppppcVar24 == param_3[-0x24]) {
                      pdb_142db0920(param_3 + -0x24);
                    }
                    param_3[-0x23][(longlong)ppppppcVar24] = (code *****)pppppppcVar31;
                    param_1 = (code *******)((longlong)ppppppcVar24 + 1);
                    param_3[-0x22] = (code ******)param_1;
                    goto LAB_1408b2705;
                  }
                  uVar36 = (ushort)(uVar32 - 1) & (ushort)uVar32;
                  uVar32 = CONCAT22((short)(uVar32 - 1 >> 0x10),uVar36);
                }
                auVar46[0] = -(auVar3[0] == -1);
                auVar46[1] = -(auVar3[1] == -1);
                auVar46[2] = -(auVar3[2] == -1);
                auVar46[3] = -(auVar3[3] == -1);
                auVar46[4] = -(auVar3[4] == -1);
                auVar46[5] = -(auVar3[5] == -1);
                auVar46[6] = -(auVar3[6] == -1);
                auVar46[7] = -(auVar3[7] == -1);
                auVar46[8] = -(auVar3[8] == -1);
                auVar46[9] = -(auVar3[9] == -1);
                auVar46[10] = -(auVar3[10] == -1);
                auVar46[0xb] = -(auVar3[0xb] == -1);
                auVar46[0xc] = -(auVar3[0xc] == -1);
                auVar46[0xd] = -(auVar3[0xd] == -1);
                auVar46[0xe] = -(auVar3[0xe] == -1);
                auVar46[0xf] = -(auVar3[0xf] == -1);
                ppppppcVar38 = (code ******)(ulonglong)uVar6;
                if ((((((((((((((((SUB161(auVar46 >> 7,0) & 1) != 0 ||
                                 (SUB161(auVar46 >> 0xf,0) & 1) != 0) ||
                                (SUB161(auVar46 >> 0x17,0) & 1) != 0) ||
                               (SUB161(auVar46 >> 0x1f,0) & 1) != 0) ||
                              (SUB161(auVar46 >> 0x27,0) & 1) != 0) ||
                             (SUB161(auVar46 >> 0x2f,0) & 1) != 0) ||
                            (SUB161(auVar46 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar46 >> 0x3f,0) & 1) != 0) ||
                          (SUB161(auVar46 >> 0x47,0) & 1) != 0) ||
                         (SUB161(auVar46 >> 0x4f,0) & 1) != 0) ||
                        (SUB161(auVar46 >> 0x57,0) & 1) != 0) ||
                       (SUB161(auVar46 >> 0x5f,0) & 1) != 0) || (SUB161(auVar46 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar46 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar46 >> 0x77,0) & 1) != 0) || auVar46[0xf] < '\0') break;
                uVar23 = uVar23 + lVar22 + 0x10;
                lVar22 = lVar22 + 0x10;
              }
            }
LAB_1408b2705:
          }
          if (pppppppcStack_b8 != (code *******)0x0) {
            pub_1406abac0((byte *)pppppppcStack_b0,(longlong)pppppppcStack_b8 * 0x30,8);
          }
          LOCK();
          *pppppppcStack_c0 = (code ******)((longlong)*pppppppcStack_c0 + -1);
          UNLOCK();
          if (*pppppppcStack_c0 == (code ******)0x0) {
            uStack_83 = 0;
            uStack_84 = 0;
            uStack_85 = 0;
            pdb_140c7ac50(&pppppppcStack_c0);
          }
          if (lStack_d8 != 0) {
            pub_1406abac0((byte *)ppppppcStack_d0,lStack_d8 * 0x30,4);
          }
          if (lStack_148 == 0) {
            return;
          }
          plVar28 = (longlong *)pdb_140e97000();
          if (((char)plVar28[0xd] == '\x01') ||
             (plVar28 = (longlong *)pdb_142dde6e0(plVar28,0), plVar28 != (longlong *)0x0)) {
            if (*plVar28 == 0) {
              *plVar28 = -1;
              ppppppcStack_90 = (code ******)plVar28;
              pdb_140e95370(plVar28 + 1,uStack_140);
              goto LAB_1408b2c30;
            }
            goto LAB_1408b2cab;
          }
          break;
        }
        pppppppcVar31 = (code *******)0x0;
        if ((code *******)0x7 < pppppppcStack_218) {
          pppppppcVar31 = pppppppcStack_218 + -1;
        }
        unaff_R15 = pppppppcVar41;
        if (pppppppcVar31 == (code *******)0x0) {
          if (((pppppppcStack_218 < (code *******)0x6) &&
              ((0x32UL >> ((ulonglong)pppppppcStack_218 & 0x3f) & 1) != 0)) &&
             (pppppppcStack_210 != (code *******)0x0)) {
            pub_1406abac0((byte *)pppppppcStack_208,(ulonglong)pppppppcStack_210,1);
          }
          pppppppcVar31 = (code *******)CONCAT44(uStack_1f4,uStack_1f8);
        }
        else {
          if (pppppppcVar31 == (code *******)0x1) {
            uStack_81 = 1;
            uStack_82 = 1;
            pdb_1404b83f0(&pppppppcStack_210);
            goto LAB_1408b2b40;
          }
          pppppppcStack_e0 = (code *******)&pppppppcStack_208;
          pppppppcVar31 = pppppppcStack_210;
        }
        if (pppppppcVar31 != (code *******)0x0) {
          pub_1406abac0((byte *)*pppppppcStack_e0,(ulonglong)pppppppcVar31,1);
        }
      }
LAB_1408b2b40:
      if (pppppppcStack_120 != (code *******)0x0) {
        pub_1406abac0((byte *)pppppppcStack_118,(longlong)pppppppcStack_120 * 0x30,8);
      }
      param_1 = pppppppcStack_100;
      if (ppppppcStack_f8 != (code ******)0x0) {
        param_3 = pppppppcStack_100 + 5;
        ppppppcVar24 = ppppppcStack_f8;
        do {
          if (param_3[-1] != (code ******)0x0) {
            pub_1406abac0((byte *)*param_3,(longlong)param_3[-1] * 0x30,4);
          }
          param_3 = param_3 + 0xb;
          ppppppcVar24 = (code ******)((longlong)ppppppcVar24 - 1);
        } while (ppppppcVar24 != (code ******)0x0);
      }
      pppppppcVar31 = (code *******)0x0;
      if (ppppppcStack_108 != (code ******)0x0) {
        pub_1406abac0((byte *)param_1,(longlong)ppppppcStack_108 * 0x58,8);
      }
      if (lStack_d8 != 0) {
        pub_1406abac0((byte *)ppppppcStack_d0,lStack_d8 * 0x30,4);
      }
      if (lStack_148 == 0) {
        return;
      }
      plVar28 = (longlong *)pdb_140e97000();
      if (((char)plVar28[0xd] != '\x01') &&
         (plVar28 = (longlong *)pdb_142dde6e0(plVar28,0), plVar28 == (longlong *)0x0)) break;
      if (*plVar28 == 0) {
        *plVar28 = -1;
        ppppppcStack_90 = (code ******)plVar28;
        pdb_140e95370(plVar28 + 1,uStack_140);
LAB_1408b2c30:
        *ppppppcStack_90 = (code *****)((longlong)*ppppppcStack_90 + 1);
        return;
      }
    }
LAB_1408b2cab:
    ppppppcVar24 = (code ******)pdb_142dc8090(&UNK_14330e608);
LAB_1408b2cb7:
    ppppppcVar24 = (code ******)pdb_142dde6e0(ppppppcVar24,0);
  } while (ppppppcVar24 != (code ******)0x0);
  pppppppcVar41 = (code *******)pdb_142dc7890(&UNK_14330e598);
LAB_1408b2d16:
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(pppppppcVar41,ppppppcStack_138,&UNK_143015388);
LAB_1408b2d4f:
  uStack_86 = 1;
  pdb_142dc7e2a(8,unaff_R15);
LAB_1408b2d64:
                    /* WARNING: Does not return */
  pcVar11 = (code *)invalidInstructionException();
  (*pcVar11)();
}

