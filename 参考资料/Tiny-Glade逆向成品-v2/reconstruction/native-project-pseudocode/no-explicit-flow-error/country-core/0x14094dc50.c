// VA 0x14094dc50, PDB extent 4522 bytes
// country_core::resources::rt::upload_rt_world
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/rt/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::rt::upload_rt_world
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/rt/mod.rs
   Extent: 4522 */

void pdb_14094dc50(code ***param_1,code **param_2,longlong ****param_3)

{
  byte *pbVar1;
  code cVar2;
  int iVar3;
  byte bVar4;
  code *pcVar5;
  undefined8 uVar6;
  char cVar7;
  byte bVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined *puVar11;
  code ***pppcVar12;
  undefined8 *puVar13;
  longlong lVar14;
  byte *pbVar15;
  longlong *plVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined *puVar19;
  code ***pppcVar20;
  code **ppcVar21;
  bool bVar22;
  code ***pppcStack_2b8;
  code ****ppppcStack_2b0;
  code *pcStack_2a8;
  code ****ppppcStack_2a0;
  code *pcStack_298;
  undefined8 uStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  code ***pppcStack_268;
  code ****ppppcStack_260;
  code *pcStack_258;
  code ****ppppcStack_250;
  code *pcStack_248;
  undefined8 uStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  code ***pppcStack_218;
  code ****ppppcStack_210;
  code *pcStack_208;
  code ****ppppcStack_200;
  code *pcStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  code ***pppcStack_1b8;
  code **ppcStack_1b0;
  code **ppcStack_1a8;
  code ***pppcStack_1a0;
  code **ppcStack_198;
  code **ppcStack_190;
  longlong ****pppplStack_188;
  longlong ****pppplStack_118;
  code ***pppcStack_110;
  undefined8 uStack_108;
  longlong lStack_100;
  undefined8 uStack_f8;
  code **ppcStack_f0;
  code ****ppppcStack_e8;
  code ***pppcStack_e0;
  code ****ppppcStack_d8;
  code *pcStack_d0;
  code ****ppppcStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 uStack_79;
  longlong ****pppplStack_78;
  byte *pbStack_70;
  longlong lStack_68;
  code ***pppcStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  cVar7 = pdb_140e94b40();
  if (cVar7 == '\0') {
    lStack_100 = 0;
  }
  else {
    ppcVar21 = (code **)&UNK_143024f60;
    pppcVar20 = (code ***)0x2c;
    uVar18 = 0x2c;
    lVar9 = pdb_14094f280(&UNK_143024f60);
    if (lVar9 == 1) {
      if (0x2c < uVar18) {
LAB_14094e77f:
        pdb_142dc8070(&UNK_143024f60,0x2c,0);
LAB_14094e7a0:
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143024be0);
      }
      ppcVar21 = (code **)&UNK_143024f60;
      uVar10 = pdb_14094f280(&UNK_143024f60);
      if ((uVar10 & 1) != 0) {
        if (0x2c < uVar18 + 2) {
          pdb_142dc8070(&UNK_143024f60,0x2c,uVar18 + 2,0x2c,&UNK_143025028);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pppcVar20 = (code ***)(0x2a - uVar18);
        ppcVar21 = (code **)(&UNK_143024f62 + uVar18);
      }
    }
    puVar11 = &UNK_143024ac3;
    puVar19 = &UNK_143024a98;
    do {
      pbVar15 = puVar11 + -1;
      uVar17 = (uint)(char)*pbVar15;
      if ((int)uVar17 < 0) {
        bVar8 = puVar11[-2];
        if ((char)bVar8 < -0x40) {
          bVar4 = puVar11[-3];
          if ((char)bVar4 < -0x40) {
            pbVar1 = puVar11 + -4;
            puVar11 = puVar11 + -4;
            uVar17 = bVar4 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar11 = puVar11 + -3;
            uVar17 = bVar4 & 0xf;
          }
          uVar17 = bVar8 & 0x3f | uVar17 << 6;
        }
        else {
          puVar11 = puVar11 + -2;
          uVar17 = bVar8 & 0x1f;
        }
        uVar17 = (uint)(*pbVar15 & 0x3f) | uVar17 << 6;
        if (uVar17 != 0x5c) goto LAB_14094dd79;
LAB_14094dd96:
        if ((undefined *)0x2b < puVar11 + -0x143024a97) {
          pdb_142dc8070(&UNK_143024a98,0x2b,puVar11 + -0x143024a97,0x2b,&UNK_143024ff0);
          goto LAB_14094e77f;
        }
        lVar9 = 0x2a - (longlong)(puVar11 + -0x143024a98);
        puVar19 = puVar11 + 1;
        goto LAB_14094ddba;
      }
      puVar11 = puVar11 + -1;
      if (uVar17 == 0x5c) goto LAB_14094dd96;
LAB_14094dd79:
      if (uVar17 == 0x2f) goto LAB_14094dd96;
    } while (puVar11 != &UNK_143024a98);
    lVar9 = 0x2b;
LAB_14094ddba:
    pppcVar12 = (code ***)pdb_140e97000();
    if ((*(code *)(pppcVar12 + 0xd) != (code)0x1) &&
       (pppcVar12 = (code ***)pdb_142d8ec20(pppcVar12,0), pppcVar12 == (code ***)0x0))
    goto LAB_14094e64f;
    if (*pppcVar12 != (code **)0x0) goto LAB_14094e5b9;
    *pppcVar12 = (code **)0xffffffffffffffff;
    pppcStack_58 = pppcVar12;
    uStack_f8 = pdb_140e94f10(pppcVar12 + 1,ppcVar21,pppcVar20,puVar19,lVar9,1,0);
    *pppcStack_58 = (code **)((longlong)*pppcStack_58 + 1);
    lStack_100 = 1;
  }
  pppcVar20 = (code ***)**param_3;
  param_3 = (longlong ****)(pppcVar20 + 2);
  LOCK();
  bVar22 = *(int *)(pppcVar20 + 2) == 0;
  if (bVar22) {
    *(int *)(pppcVar20 + 2) = 0x3fffffff;
  }
  UNLOCK();
  if (!bVar22) goto LAB_14094e5c6;
LAB_14094de45:
  ppcVar21 = _DAT_143ca8f38;
  if (((ulonglong)*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
    bVar8 = 0;
    cVar7 = *(char *)(pppcVar20 + 3);
  }
  else {
    bVar8 = pdb_142dc79e0();
    bVar8 = bVar8 ^ 1;
    cVar7 = *(char *)(pppcVar20 + 3);
  }
  if (cVar7 != '\0') {
    uVar18 = (ulonglong)pppcStack_e0 >> 8;
    pppcStack_e0 = (code ***)CONCAT71((int7)uVar18,bVar8);
    ppppcStack_e8 = (code ****)param_3;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143024e08,0x2b,&ppppcStack_e8,&UNK_143024e38,&UNK_143024b18);
  }
  pppplStack_188 = (longlong ****)pppcVar20[0xc];
  uStack_1c8 = *(undefined4 *)(pppcVar20 + 4);
  uStack_1c4 = *(undefined4 *)((longlong)pppcVar20 + 0x24);
  uStack_1c0 = *(undefined4 *)(pppcVar20 + 5);
  uStack_1bc = *(undefined4 *)((longlong)pppcVar20 + 0x2c);
  pppcStack_1b8 = (code ***)pppcVar20[6];
  ppcStack_1b0 = pppcVar20[7];
  ppcStack_1a8 = pppcVar20[8];
  pppcStack_1a0 = (code ***)pppcVar20[9];
  ppcStack_198 = pppcVar20[10];
  ppcStack_190 = pppcVar20[0xb];
  pppcVar20[4] = (code **)0x8000000000000000;
  if ((bVar8 == 0) && (((ulonglong)*ppcVar21 & 0x7fffffffffffffff) != 0)) goto LAB_14094e65b;
  do {
    LOCK();
    iVar3 = *(int *)param_3;
    *(int *)param_3 = *(int *)param_3 + -0x3fffffff;
    UNLOCK();
    if (0x3fffffff < iVar3 + 0xc0000001U) {
      uStack_49 = 1;
      pdb_142dc6fa0(param_3);
    }
    if (!SBORROW8(0,CONCAT44(uStack_1c4,uStack_1c8))) {
      if (((ulonglong)pppplStack_188 | (ulonglong)pppcStack_1a0) < 0x40000 &&
          pppcStack_1b8 < (code ***)0x10000) {
        ppcStack_f0 = ppcStack_190;
        uStack_108 = CONCAT44(uStack_1bc,uStack_1c0);
        param_2 = (code **)*param_2;
        puVar13 = (undefined8 *)pdb_140bf45b0(param_2,&UNK_14331ca28);
        if ((puVar13 == (undefined8 *)0x0) ||
           (lVar9 = (**(code **)(puVar13[1] + 0x18))(*puVar13), lVar9 == 0)) goto LAB_14094e7a0;
        pppcStack_58 = (code ***)*param_1;
        if (pppcStack_1a0 != (code ***)0x0) {
          ppcVar21 = *pppcStack_58;
          lVar14 = pdb_140e17350(lVar9);
          pbVar15 = (byte *)((longlong)pppcStack_1a0 * 0x18);
          if ((byte *)(ulonglong)*(uint *)(lVar14 + 0x10) < pbVar15) {
            ppppcStack_e8 = (code ****)0xb;
LAB_14094e832:
            pppcStack_e0 = pppcStack_218;
            ppppcStack_d8 = ppppcStack_210;
            pcStack_d0 = pcStack_208;
            ppppcStack_c8 = ppppcStack_200;
            pcStack_c0 = pcStack_1f8;
            uStack_b8 = uStack_1f0;
            puStack_b0 = puStack_1e8;
            uStack_a8 = uStack_1e0;
            uStack_a0 = uStack_1d8;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8170(&UNK_143024e08,0x2b,&ppppcStack_e8,&UNK_143024e58,&UNK_143024bf8);
          }
          pppplStack_78 = (longlong ****)0x0;
          pbStack_70 = pbVar15;
          pdb_140e55470(&ppppcStack_e8,ppcVar21 + 2,lVar9,ppcStack_1a8,pbVar15,&pppplStack_78,1,0);
          if (ppppcStack_e8 != (code ****)0xb) {
            uStack_1d8 = uStack_a0;
            puStack_1e8 = puStack_b0;
            uStack_1e0 = uStack_a8;
            pcStack_1f8 = pcStack_c0;
            uStack_1f0 = uStack_b8;
            pcStack_208 = pcStack_d0;
            ppppcStack_200 = ppppcStack_c8;
            pppcStack_218 = pppcStack_e0;
            ppppcStack_210 = ppppcStack_d8;
            goto LAB_14094e832;
          }
        }
        *(code ****)(lVar9 + 8) = pppcStack_1a0;
        puVar13 = (undefined8 *)pdb_140bf45b0(param_2,&UNK_14331c920);
        if ((puVar13 == (undefined8 *)0x0) ||
           (lVar9 = (**(code **)(puVar13[1] + 0x18))(*puVar13), lVar9 == 0)) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_143024c10);
        }
        ppcVar21 = ppcStack_1a8;
        if (pppplStack_188 != (longlong ****)0x0) {
          ppcVar21 = *pppcStack_58;
          lVar14 = pdb_140e17350(lVar9);
          pbVar15 = (byte *)((longlong)pppplStack_188 * 4);
          if ((byte *)(ulonglong)*(uint *)(lVar14 + 0x10) <= pbVar15 &&
              (longlong)pbVar15 - (longlong)(ulonglong)*(uint *)(lVar14 + 0x10) != 0) {
            ppppcStack_e8 = (code ****)0xb;
LAB_14094e8e8:
            pppcStack_e0 = pppcStack_268;
            ppppcStack_d8 = ppppcStack_260;
            pcStack_d0 = pcStack_258;
            ppppcStack_c8 = ppppcStack_250;
            pcStack_c0 = pcStack_248;
            uStack_b8 = uStack_240;
            puStack_b0 = puStack_238;
            uStack_a8 = uStack_230;
            uStack_a0 = uStack_228;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8170(&UNK_143024e08,0x2b,&ppppcStack_e8,&UNK_143024e58,&UNK_143024c28);
          }
          ppcVar21 = ppcVar21 + 2;
          pppplStack_78 = (longlong ****)0x0;
          pbStack_70 = pbVar15;
          pdb_140e55470(&ppppcStack_e8,ppcVar21,lVar9,ppcStack_f0,pbVar15,&pppplStack_78,1,0);
          if (ppppcStack_e8 != (code ****)0xb) {
            uStack_228 = uStack_a0;
            puStack_238 = puStack_b0;
            uStack_230 = uStack_a8;
            pcStack_248 = pcStack_c0;
            uStack_240 = uStack_b8;
            pcStack_258 = pcStack_d0;
            ppppcStack_250 = ppppcStack_c8;
            pppcStack_268 = pppcStack_e0;
            ppppcStack_260 = ppppcStack_d8;
            goto LAB_14094e8e8;
          }
        }
        *(longlong *****)(lVar9 + 8) = pppplStack_188;
        puVar13 = (undefined8 *)pdb_140bf45b0(param_2,&UNK_14331ca30);
        if ((puVar13 == (undefined8 *)0x0) ||
           (param_1 = (code ***)(**(code **)(puVar13[1] + 0x18))(*puVar13), param_1 == (code ***)0x0
           )) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_143024c40);
        }
        if (pppcStack_1b8 != (code ***)0x0) {
          param_2 = *pppcStack_58;
          lVar9 = pdb_140e17350(param_1);
          pbVar15 = (byte *)((longlong)pppcStack_1b8 * 0x50);
          if ((byte *)(ulonglong)*(uint *)(lVar9 + 0x10) < pbVar15) {
            ppppcStack_e8 = (code ****)0xb;
LAB_14094e995:
            pppcStack_e0 = pppcStack_2b8;
            ppppcStack_d8 = ppppcStack_2b0;
            pcStack_d0 = pcStack_2a8;
            ppppcStack_c8 = ppppcStack_2a0;
            pcStack_c0 = pcStack_298;
            uStack_b8 = uStack_290;
            puStack_b0 = puStack_288;
            uStack_a8 = uStack_280;
            uStack_a0 = uStack_278;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8170(&UNK_143024e08,0x2b,&ppppcStack_e8,&UNK_143024e58,&UNK_143024c58);
          }
          param_2 = param_2 + 2;
          pppplStack_78 = (longlong ****)0x0;
          pbStack_70 = pbVar15;
          pdb_140e55470(&ppppcStack_e8,param_2,param_1,uStack_108,pbVar15,&pppplStack_78,1,0);
          if (ppppcStack_e8 != (code ****)0xb) {
            uStack_278 = uStack_a0;
            puStack_288 = puStack_b0;
            uStack_280 = uStack_a8;
            pcStack_298 = pcStack_c0;
            uStack_290 = uStack_b8;
            pcStack_2a8 = pcStack_d0;
            ppppcStack_2a0 = ppppcStack_c8;
            pppcStack_2b8 = pppcStack_e0;
            ppppcStack_2b0 = ppppcStack_d8;
            goto LAB_14094e995;
          }
        }
        param_1[1] = (code **)pppcStack_1b8;
      }
      else {
        if (_DAT_143ca4270 != 0) {
          pppplStack_78 = (longlong ****)CONCAT71(pppplStack_78._1_7_,1);
          ppppcStack_e8 = (code ****)&pppplStack_78;
          pdb_142dc7060(&DAT_143ca4270,0,&ppppcStack_e8,&UNK_143024cb8,&UNK_143024b30);
        }
        pdb_1400f0d40(&ppppcStack_e8,_DAT_143cb2c68);
        if ((int)ppppcStack_e8 == 1) {
          pppplStack_78 = (longlong ****)pppcStack_e0;
          pbStack_70 = (byte *)CONCAT71(pbStack_70._1_7_,ppppcStack_d8._0_1_);
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_143024b48,0x13,&pppplStack_78,&UNK_143024dc8,&UNK_143024b30);
        }
        pppcStack_58 = pppcStack_e0;
        ppcStack_f0 = (code **)CONCAT71(ppcStack_f0._1_7_,ppppcStack_d8._0_1_);
        pdb_14007ee60();
        pbVar15 = pub_1406abab0(0xf,1);
        if (pbVar15 == (byte *)0x0) {
          pdb_142dc7e2a(1,0xf);
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        pbVar15[7] = 0x70;
        pbVar15[8] = 0x61;
        pbVar15[9] = 0x74;
        pbVar15[10] = 0x68;
        pbVar15[0xb] = 0x21;
        pbVar15[0xc] = 0x20;
        pbVar15[0xd] = 0x28;
        pbVar15[0xe] = 0x29;
        pbVar15[0] = 0x6d;
        pbVar15[1] = 0x6f;
        pbVar15[2] = 100;
        pbVar15[3] = 0x75;
        pbVar15[4] = 0x6c;
        pbVar15[5] = 0x65;
        pbVar15[6] = 0x5f;
        pbVar15[7] = 0x70;
        ppppcStack_e8 = (code ****)0xf;
        ppppcStack_d8 = (code ****)0xf;
        pppcStack_e0 = (code ***)pbVar15;
        pdb_142d7f1b0(&ppppcStack_e8,0xf,0x18,1,1);
        uVar6 = _UNK_143024b63;
        *(undefined8 *)((longlong)pppcStack_e0 + (longlong)ppppcStack_d8) = _DAT_143024b5b;
        *(undefined8 *)((byte *)((longlong)pppcStack_e0 + (longlong)ppppcStack_d8) + 8) = uVar6;
        pbVar15 = (byte *)((longlong)pppcStack_e0 + (longlong)ppppcStack_d8 + 0x10);
        pbVar15[0] = 0x3a;
        pbVar15[1] = 0x3a;
        pbVar15[2] = 0x20;
        pbVar15[3] = 0x45;
        pbVar15[4] = 0x72;
        pbVar15[5] = 0x72;
        pbVar15[6] = 0x6f;
        pbVar15[7] = 0x72;
        lStack_68 = (longlong)ppppcStack_d8 + 0x18;
        pppplStack_78 = (longlong ****)ppppcStack_e8;
        pbStack_70 = (byte *)pppcStack_e0;
        if ((ulonglong)((longlong)ppppcStack_e8 - lStack_68) < 0x36) {
          pdb_142d7f1b0(&pppplStack_78,lStack_68,0x36,1,1);
        }
        uVar6 = _UNK_143024b9b;
        *(undefined8 *)(pbStack_70 + lStack_68 + 0x20) = _DAT_143024b93;
        *(undefined8 *)(pbStack_70 + lStack_68 + 0x20 + 8) = uVar6;
        uVar6 = _UNK_143024b8b;
        *(undefined8 *)(pbStack_70 + lStack_68 + 0x10) = _DAT_143024b83;
        *(undefined8 *)(pbStack_70 + lStack_68 + 0x10 + 8) = uVar6;
        uVar6 = _UNK_143024b7b;
        *(undefined8 *)(pbStack_70 + lStack_68) = _DAT_143024b73;
        *(undefined8 *)(pbStack_70 + lStack_68 + 8) = uVar6;
        pbVar15 = pbStack_70 + lStack_68 + 0x2e;
        pbVar15[0] = 0x69;
        pbVar15[1] = 0x6e;
        pbVar15[2] = 0x67;
        pbVar15[3] = 0x2d;
        pbVar15[4] = 100;
        pbVar15[5] = 0x61;
        pbVar15[6] = 0x74;
        pbVar15[7] = 0x61;
        ppppcStack_d8 = (code ****)(lStack_68 + 0x36);
        ppppcStack_e8 = (code ****)pppplStack_78;
        pppcStack_e0 = (code ***)pbStack_70;
        lStack_68 = (longlong)ppppcStack_d8;
        cVar7 = pdb_14192b470(pppcStack_58 + 1,&ppppcStack_e8);
        if ((cVar7 == '\0') && (*_DAT_143ca8e90 != 0)) {
          ppppcStack_e8 = (code ****)0x0;
          pppcStack_e0 = (code ***)&UNK_143024adf;
          ppppcStack_d8 = (code ****)0x1b;
          pcStack_d0 = (code *)0x0;
          ppppcStack_c8 = (code ****)&UNK_143024a6c;
          pcStack_c0 = (code *)0x2b;
          uStack_b8 = 1;
          puStack_b0 = &UNK_143024adf;
          uStack_a8 = 0x1b;
          uStack_a0 = 0x12c00000001;
          puStack_98 = &DAT_143024b73;
          uStack_90 = 0x6d;
          pdb_140f332f0(&uStack_79,&ppppcStack_e8);
        }
        param_1 = pppcStack_58;
        if ((((char)ppcStack_f0 == '\0') && (((ulonglong)*ppcVar21 & 0x7fffffffffffffff) != 0)) &&
           (cVar7 = pdb_142dc79e0(), cVar7 == '\0')) {
          *(code *)((longlong)param_1 + 1) = (code)0x1;
        }
        LOCK();
        cVar2 = *(code *)param_1;
        *(code *)param_1 = (code)0x0;
        UNLOCK();
        if (cVar2 == (code)0x2) {
          pdb_142dc6ca0(param_1);
        }
        pppplStack_118 = pppplStack_188;
        ppppcStack_e8 = &pppcStack_110;
        pppcStack_e0 = (code ***)pdb_140f72a40;
        ppppcStack_d8 = (code ****)&pppplStack_118;
        pcStack_d0 = pdb_140f72a40;
        ppppcStack_c8 = (code ****)&pppplStack_78;
        pcStack_c0 = pdb_140f72a40;
        pppcStack_110 = pppcStack_1a0;
        pppplStack_78 = (longlong ****)pppcStack_1b8;
        pdb_140f4e8b0(&UNK_143024ba9,&ppppcStack_e8);
      }
      if (CONCAT44(uStack_1c4,uStack_1c8) != 0) {
        pub_1406abac0((byte *)CONCAT44(uStack_1bc,uStack_1c0),CONCAT44(uStack_1c4,uStack_1c8) * 0x50
                      ,4);
      }
      if (ppcStack_1b0 != (code **)0x0) {
        pub_1406abac0((byte *)ppcStack_1a8,(longlong)ppcStack_1b0 * 0x18,4);
      }
      param_3 = pppplStack_188;
      pppcVar20 = pppcStack_1a0;
      if (ppcStack_198 != (code **)0x0) {
        pub_1406abac0((byte *)ppcStack_190,(longlong)ppcStack_198 << 2,4);
      }
    }
    if (lStack_100 == 0) {
      return;
    }
    plVar16 = (longlong *)pdb_140e97000();
    if (((char)plVar16[0xd] == '\x01') ||
       (plVar16 = (longlong *)pdb_142d8ec20(plVar16,0), plVar16 != (longlong *)0x0)) break;
LAB_14094e64f:
    pdb_142dc7890(&UNK_143326860);
LAB_14094e65b:
    uStack_49 = 1;
    cVar7 = pdb_142dc79e0();
    if (cVar7 == '\0') {
      *(undefined1 *)(pppcVar20 + 3) = 1;
    }
  } while( true );
  if (*plVar16 == 0) {
    *plVar16 = -1;
    pppcStack_58 = (code ***)plVar16;
    pdb_140e95370(plVar16 + 1,uStack_f8);
    *pppcStack_58 = (code **)((longlong)*pppcStack_58 + 1);
    return;
  }
LAB_14094e5b9:
  pdb_142dc8090(&UNK_143326a50);
LAB_14094e5c6:
  pdb_142dc6e70(param_3);
  goto LAB_14094de45;
}

