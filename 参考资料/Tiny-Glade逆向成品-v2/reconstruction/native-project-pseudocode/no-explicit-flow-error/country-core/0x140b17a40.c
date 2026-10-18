// VA 0x140b17a40, PDB extent 6562 bytes
// country_core::startup::load_mesh_atlases::load_mesh_atlases
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_mesh_atlases.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::startup::load_mesh_atlases::load_mesh_atlases
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_mesh_atlases.rs
   Extent: 6562 */

void pdb_140b17a40(undefined8 *param_1,code *param_2,undefined8 *param_3,undefined8 *param_4,
                  longlong *param_5)

{
  float fVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  code *pcVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined4 ***pppuVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong *plVar19;
  undefined8 uVar20;
  uint ***pppuVar21;
  uint uVar22;
  longlong lVar23;
  undefined8 uVar24;
  int iVar25;
  undefined1 (*pauVar26) [16];
  undefined1 (*pauVar27) [16];
  longlong lVar28;
  bool bVar29;
  uint uVar30;
  float fVar31;
  float fVar32;
  undefined4 ****in_stack_fffffffffffffc88;
  undefined4 uVar34;
  undefined4 ****ppppuVar33;
  undefined4 ***pppuStack_368;
  code *pcStack_360;
  undefined4 ***pppuStack_358;
  undefined8 uStack_350;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  longlong lStack_310;
  int *piStack_308;
  undefined *puStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  int aiStack_2e8 [6];
  undefined8 *puStack_2d0;
  undefined4 ***pppuStack_2c8;
  code *pcStack_2c0;
  undefined1 auStack_2b8 [16];
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  longlong lStack_270;
  int *piStack_268;
  undefined *puStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  uint **ppuStack_240;
  code *pcStack_238;
  uint *puStack_228;
  code *pcStack_220;
  undefined4 ***pppuStack_218;
  code *pcStack_210;
  undefined4 ***pppuStack_208;
  undefined8 uStack_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  longlong lStack_1c0;
  int *piStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined1 uStack_1a0;
  undefined7 uStack_19f;
  undefined8 uStack_190;
  int *piStack_138;
  undefined4 uStack_130;
  int iStack_12c;
  int *piStack_108;
  undefined4 uStack_100;
  int iStack_fc;
  int iStack_f0;
  undefined1 auStack_ec [12];
  undefined8 uStack_e0;
  undefined4 uStack_d4;
  code *pcStack_d0;
  undefined4 ***pppuStack_c8;
  undefined8 uStack_c0;
  
  uStack_c0 = 0xfffffffffffffffe;
  pppuVar21 = (uint ***)((undefined8 *)*param_1)[3];
  uStack_d4 = *(undefined4 *)((longlong)param_3 + 0x1c);
  uStack_e0 = *param_3;
  auStack_ec._4_8_ = param_3[2];
  puStack_2d0 = param_4;
  pcStack_d0 = param_2;
  if (pppuVar21 != (uint ***)0x0) {
    pauVar27 = *(undefined1 (**) [16])*param_1;
    auVar3 = *pauVar27;
    uVar17 = ~(uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar3[0xf] >> 7) << 0xf);
    pauVar26 = pauVar27 + 1;
    do {
      if ((short)uVar17 == 0) {
        do {
          auVar3 = *pauVar26;
          pauVar27 = pauVar27 + -0x28;
          pauVar26 = pauVar26 + 1;
          uVar17 = (ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar3[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar17 == 0);
      }
      uVar22 = 0;
      for (uVar10 = uVar17; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
        uVar22 = uVar22 + 1;
      }
      uVar18 = (ulonglong)uVar22;
      lVar6 = *(longlong *)((longlong)pauVar27 + uVar18 * -0x28 + -8);
      pppuStack_c8 = pppuVar21;
      if (lVar6 != 0) {
        lVar28 = *(longlong *)((longlong)pauVar27 + uVar18 * -0x28 + -0x10);
        lVar23 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar28 + 0x88 + lVar23) + 0x20) != 0) {
            *(undefined4 *)auStack_ec._4_8_ = uStack_d4;
            uVar4 = *(undefined1 *)(lVar28 + 0x90 + lVar23);
            plVar19 = *(longlong **)((longlong)pauVar27 + uVar18 * -0x28 + -0x28);
            uVar7 = *(undefined8 *)((longlong)pauVar27 + uVar18 * -0x28 + -0x20);
            LOCK();
            lVar2 = *plVar19;
            *plVar19 = *plVar19 + 1;
            UNLOCK();
            if (*plVar19 == 0 || SCARRY8(lVar2,1) != *plVar19 < 0) goto LAB_140b17bd1;
            in_stack_fffffffffffffc88 =
                 (undefined4 ****)(*(longlong *)(lVar28 + 0x88 + lVar23) + 0x10);
            pdb_140a58290(uStack_e0,uVar4,plVar19,uVar7,in_stack_fffffffffffffc88);
          }
          lVar23 = lVar23 + 0x98;
        } while (lVar6 * 0x98 - lVar23 != 0);
      }
      uVar17 = uVar17 - 1 & uVar17;
      pppuVar21 = (uint ***)((longlong)pppuStack_c8 + -1);
    } while (pppuVar21 != (uint ***)0x0);
  }
  uVar34 = uStack_d4;
  uVar24 = uStack_e0;
  uVar7 = auStack_ec._4_8_;
  *(undefined4 *)auStack_ec._4_8_ = uStack_d4;
  if (*param_5 == 0) {
    pdb_141826650(uStack_e0,0);
    uVar20 = *(undefined8 *)pcStack_d0;
    *(undefined4 *)uVar7 = uVar34;
  }
  else {
    uVar5 = *(undefined4 *)((longlong)param_5 + 0x1c);
    puVar8 = (undefined4 *)param_5[2];
    *puVar8 = uVar5;
    pdb_141826650(uStack_e0);
    uVar20 = *(undefined8 *)pcStack_d0;
    *(undefined4 *)uVar7 = uVar34;
    *puVar8 = uVar5;
    uVar24 = uStack_e0;
  }
  pdb_140b1a190(uVar20,uVar24);
  *(undefined4 *)uVar7 = uVar34;
  uVar10 = _DAT_143009de0;
  fVar14 = _DAT_142f94714;
  uVar22 = _DAT_142e3c640;
  uVar17 = _DAT_142e37820;
  fVar13 = _DAT_142e36f50;
  fVar12 = _DAT_142e36f28;
  bVar29 = false;
  uVar30 = 0;
  while ((uVar34 = (undefined4)((ulonglong)in_stack_fffffffffffffc88 >> 0x20), !bVar29 &&
         (uVar30 < 6))) {
    bVar29 = uVar30 == 5;
    uVar11 = uVar30 + 1;
    if (bVar29) {
      uVar11 = uVar30;
    }
    puStack_228 = (uint *)CONCAT44(puStack_228._4_4_,uVar30);
    iVar25 = 1 << ((byte)uVar30 & 0x1f);
    aiStack_2e8[0] = iVar25;
    plVar19 = (longlong *)pdb_14008d710(0);
    if (plVar19 == (longlong *)0x0) goto LAB_140b18a12;
    lStack_1c0 = *plVar19;
    piStack_1b8 = (int *)plVar19[1];
    *plVar19 = *plVar19 + 1;
    uStack_1d0 = _DAT_143046120;
    uStack_1c8 = _UNK_143046128;
    uStack_1e0 = _DAT_143046110;
    uStack_1d8 = _UNK_143046118;
    pppuStack_218 = (uint ***)0x0;
    pcStack_210 = (code *)0x4;
    pppuStack_208 = (undefined4 ***)0x0;
    uStack_200 = 0x8000000000000000;
    puStack_1b0 = &UNK_14303ecc8;
    uStack_1a8 = 7;
    uStack_1a0 = 0;
    pdb_140a5c690(&pppuStack_218,0,1,iVar25,CONCAT44(uVar34,1));
    uStack_250 = CONCAT71(uStack_19f,uStack_1a0);
    uStack_258 = uStack_1a8;
    piStack_268 = piStack_1b8;
    puStack_260 = puStack_1b0;
    uStack_278 = uStack_1c8;
    lStack_270 = lStack_1c0;
    uStack_288 = uStack_1d8;
    uStack_280 = uStack_1d0;
    auStack_2b8._8_8_ = uStack_200;
    auStack_2b8._0_8_ = pppuStack_208;
    uStack_298 = (undefined4)uStack_1e8;
    uStack_294 = uStack_1e8._4_4_;
    uStack_290 = (undefined4)uStack_1e0;
    uStack_28c = uStack_1e0._4_4_;
    uStack_2a8 = uStack_1f8;
    uStack_2a4 = uStack_1f4;
    uStack_2a0 = uStack_1f0;
    uStack_29c = uStack_1ec;
    pppuStack_2c8 = pppuStack_218;
    pcStack_2c0 = pcStack_210;
    pppuStack_218 = (undefined4 ***)0x0;
    uStack_1e8 = 0;
    piStack_1b8 = aiStack_2e8;
    puStack_1b0 = (undefined *)((ulonglong)(iVar25 + 1) << 0x20);
    pdb_141607ca0(&pppuStack_368,&pppuStack_218);
    pcVar9 = pcStack_360;
    if ((uVar30 != 0) && (pppuStack_358 != (uint ***)0x0)) {
      lVar6 = (longlong)pppuStack_358 * 0xc;
      lVar28 = 0;
      do {
        fVar1 = *(float *)(pcVar9 + lVar28);
        fVar31 = (float)pub_142e32b30(*(float *)(pcVar9 + lVar28 + 8) * fVar14);
        fVar31 = fVar31 * fVar13;
        *(float *)(pcVar9 + lVar28 + 8) = fVar31;
        uVar30 = -(uint)NAN(fVar1);
        fVar32 = fVar12 - (fVar31 + fVar31) * (fVar31 + fVar31);
        fVar31 = 0.0;
        if (0.0 <= fVar32) {
          fVar31 = fVar32;
        }
        fVar32 = fVar12;
        if (fVar31 <= fVar12) {
          fVar32 = fVar31;
        }
        *(float *)(pcVar9 + lVar28) =
             SQRT(fVar32) * (float)(uVar30 & uVar10 | ~uVar30 & ((uint)fVar1 & uVar17 | uVar22)) *
             fVar13;
        lVar28 = lVar28 + 0xc;
      } while (lVar6 != lVar28);
    }
    pppuStack_208 = pppuStack_358;
    pppuStack_218 = pppuStack_368;
    pcStack_210 = pcStack_360;
    pdb_140c93200(&pppuStack_2c8,&UNK_143055881,0xf,&pppuStack_218);
    ppuStack_240 = &puStack_228;
    pcStack_238 = pdb_140f71a50;
    pdb_140f60760(&pppuStack_218,&UNK_143055890,&ppuStack_240);
    pppuStack_c8 = pppuStack_218;
    in_stack_fffffffffffffc88 = &pppuStack_2c8;
    pcStack_d0 = pcStack_210;
    pdb_140a58820(uStack_e0,7,pcStack_210,pppuStack_208,in_stack_fffffffffffffc88);
    if (pppuStack_c8 != (uint ***)0x0) {
      pub_1406abac0((byte *)pcStack_d0,(ulonglong)pppuStack_c8,1);
    }
    pdb_14098a960(&pppuStack_2c8);
    uVar30 = uVar11;
  }
  *(undefined4 *)auStack_ec._4_8_ = uStack_d4;
  uVar17 = 0;
  do {
    uVar34 = (undefined4)((ulonglong)in_stack_fffffffffffffc88 >> 0x20);
    if (5 < uVar17) break;
    bVar29 = uVar17 != 5;
    uVar22 = uVar17 + 1;
    if (!bVar29) {
      uVar22 = uVar17;
    }
    iVar25 = 1 << ((byte)uVar17 & 0x1f);
    iStack_f0 = iVar25;
    auStack_ec._0_4_ = uVar17;
    plVar19 = (longlong *)pdb_14008d710(0);
    if (plVar19 == (longlong *)0x0) goto LAB_140b18a12;
    lStack_1c0 = *plVar19;
    piStack_1b8 = (int *)plVar19[1];
    *plVar19 = *plVar19 + 1;
    uVar15 = _UNK_143046128;
    uVar20 = _DAT_143046120;
    uVar24 = _UNK_143046118;
    uVar7 = _DAT_143046110;
    uStack_1d0 = _DAT_143046120;
    uStack_1c8 = _UNK_143046128;
    uStack_1e0 = _DAT_143046110;
    uStack_1d8 = _UNK_143046118;
    pppuStack_218 = (uint ***)0x0;
    pcStack_210 = (code *)0x4;
    pppuStack_208 = (uint ***)0x0;
    uStack_200 = 0x8000000000000000;
    puStack_1b0 = &UNK_14303eccf;
    uStack_1a8 = 8;
    uStack_1a0 = 0;
    pdb_140a5c8b0(&pppuStack_218,0,6,iVar25,CONCAT44(uVar34,6));
    uStack_2f0 = CONCAT71(uStack_19f,uStack_1a0);
    uStack_2f8 = uStack_1a8;
    piStack_308 = piStack_1b8;
    puStack_300 = puStack_1b0;
    uStack_318 = uStack_1c8;
    lStack_310 = lStack_1c0;
    uStack_328 = uStack_1d8;
    uStack_320 = uStack_1d0;
    uStack_338 = (undefined4)uStack_1e8;
    uStack_334 = uStack_1e8._4_4_;
    uStack_330 = (undefined4)uStack_1e0;
    uStack_32c = uStack_1e0._4_4_;
    uStack_348 = uStack_1f8;
    uStack_344 = uStack_1f4;
    uStack_340 = uStack_1f0;
    uStack_33c = uStack_1ec;
    pppuStack_358 = pppuStack_208;
    uStack_350 = uStack_200;
    pppuStack_368 = pppuStack_218;
    pcStack_360 = pcStack_210;
    pppuStack_218 = (uint ***)0x0;
    uStack_1a8 = 0;
    piStack_138 = &iStack_f0;
    uStack_130 = 0;
    iStack_12c = iVar25 + 1;
    pdb_141607820(aiStack_2e8,&pppuStack_218);
    pdb_140c93200(&pppuStack_368,&UNK_143055881,0xf,aiStack_2e8);
    pppuStack_2c8 = (undefined4 ***)auStack_ec;
    pcStack_2c0 = pdb_140f71a50;
    pdb_140f60760(&pppuStack_218,&UNK_143055a00,&pppuStack_2c8);
    pppuStack_c8 = pppuStack_218;
    pcStack_d0 = pcStack_210;
    ppppuVar33 = &pppuStack_368;
    pdb_140a58820(uStack_e0,0x16,pcStack_210,pppuStack_208,&pppuStack_368);
    uVar34 = (undefined4)((ulonglong)ppppuVar33 >> 0x20);
    if (pppuStack_c8 != (uint ***)0x0) {
      pub_1406abac0((byte *)pcStack_d0,(ulonglong)pppuStack_c8,1);
    }
    plVar19 = (longlong *)pdb_14008d710(0);
    if (plVar19 == (longlong *)0x0) goto LAB_140b18a1f;
    lStack_1c0 = *plVar19;
    piStack_1b8 = (int *)plVar19[1];
    *plVar19 = *plVar19 + 1;
    uStack_1d0 = uVar20;
    uStack_1c8 = uVar15;
    uStack_1e0 = uVar7;
    uStack_1d8 = uVar24;
    pppuStack_218 = (uint ***)0x0;
    pcStack_210 = (code *)0x4;
    pppuStack_208 = (uint ***)0x0;
    uStack_200 = 0x8000000000000000;
    puStack_1b0 = &UNK_14303eccf;
    uStack_1a8 = 8;
    uStack_1a0 = 0;
    pdb_140a5c8b0(&pppuStack_218,0,8,iVar25,CONCAT44(uVar34,8));
    uStack_250 = CONCAT71(uStack_19f,uStack_1a0);
    uStack_258 = uStack_1a8;
    piStack_268 = piStack_1b8;
    puStack_260 = puStack_1b0;
    uStack_278 = uStack_1c8;
    lStack_270 = lStack_1c0;
    uStack_288 = uStack_1d8;
    uStack_280 = uStack_1d0;
    auStack_2b8._8_8_ = uStack_200;
    auStack_2b8._0_8_ = pppuStack_208;
    uStack_298 = (undefined4)uStack_1e8;
    uStack_294 = uStack_1e8._4_4_;
    uStack_290 = (undefined4)uStack_1e0;
    uStack_28c = uStack_1e0._4_4_;
    uStack_2a8 = uStack_1f8;
    uStack_2a4 = uStack_1f4;
    uStack_2a0 = uStack_1f0;
    uStack_29c = uStack_1ec;
    pppuStack_2c8 = pppuStack_218;
    pcStack_2c0 = pcStack_210;
    pppuStack_218 = (uint ***)0x0;
    uStack_190 = 0;
    piStack_108 = &iStack_f0;
    uStack_100 = 0;
    iStack_fc = iVar25 + 1;
    pdb_1415f82f0(&ppuStack_240,&pppuStack_218);
    pdb_140c93200(&pppuStack_2c8,&UNK_143055881,0xf,&ppuStack_240);
    puStack_228 = (uint *)auStack_ec;
    pcStack_220 = pdb_140f71a50;
    pdb_140f60760(&pppuStack_218,&UNK_143055a0a,&puStack_228);
    pppuStack_c8 = pppuStack_218;
    pcStack_d0 = pcStack_210;
    pdb_140a58820(uStack_e0,0x1a,pcStack_210,pppuStack_208,&pppuStack_2c8);
    if (pppuStack_c8 != (uint ***)0x0) {
      pub_1406abac0((byte *)pcStack_d0,(ulonglong)pppuStack_c8,1);
    }
    puStack_228 = (uint *)auStack_ec;
    pcStack_220 = pdb_140f71a50;
    pdb_140f60760(&pppuStack_218,&UNK_143055a1f,&puStack_228);
    pppuStack_c8 = pppuStack_218;
    in_stack_fffffffffffffc88 = &pppuStack_2c8;
    pcStack_d0 = pcStack_210;
    pdb_140a58820(uStack_e0,0x1b,pcStack_210,pppuStack_208,in_stack_fffffffffffffc88);
    if (pppuStack_c8 != (uint ***)0x0) {
      pub_1406abac0((byte *)pcStack_d0,(ulonglong)pppuStack_c8,1);
    }
    pdb_14098a960(&pppuStack_2c8);
    pdb_14098a960(&pppuStack_368);
    uVar17 = uVar22;
  } while (bVar29);
  *(undefined4 *)auStack_ec._4_8_ = uStack_d4;
  plVar19 = (longlong *)pdb_14008d710(0);
  if (plVar19 != (longlong *)0x0) {
    lStack_1c0 = *plVar19;
    piStack_1b8 = (int *)plVar19[1];
    *plVar19 = *plVar19 + 1;
    uVar15 = _UNK_143046128;
    uVar20 = _DAT_143046120;
    uVar24 = _UNK_143046118;
    uVar7 = _DAT_143046110;
    uStack_1d0 = _DAT_143046120;
    uStack_1c8 = _UNK_143046128;
    uStack_1e0 = _DAT_143046110;
    uStack_1d8 = _UNK_143046118;
    pppuStack_218 = (uint ***)0x0;
    pcStack_210 = (code *)0x4;
    pppuStack_208 = (uint ***)0x0;
    uStack_200 = 0x8000000000000000;
    puStack_1b0 = &UNK_14305575a;
    uStack_1a8 = 7;
    uStack_1a0 = 0;
    uVar17 = 0;
    while (pppuVar16 = pppuStack_208, uVar17 < 0x20) {
      if (pppuStack_208 == pppuStack_218) {
        pdb_142db0990(&pppuStack_218);
      }
      *(uint *)(pcStack_210 + (longlong)pppuVar16 * 4) = uVar17 | 0x10000;
      pppuVar21 = (uint ***)((ulonglong)pppuVar16 | 1);
      if (pppuVar21 == pppuStack_218) {
        pppuStack_208 = pppuVar21;
        pdb_142db0990(&pppuStack_218);
      }
      *(uint *)(pcStack_210 + (longlong)pppuVar21 * 4) = uVar17;
      pppuStack_208 = (undefined4 ***)((longlong)pppuVar16 + 2);
      if (pppuStack_208 == pppuStack_218) {
        pdb_142db0990(&pppuStack_218);
      }
      uVar22 = uVar17 + 1;
      *(uint *)(pcStack_210 + (longlong)pppuVar16 * 4 + 8) = uVar22;
      pppuStack_208 = (undefined4 ***)((longlong)pppuVar16 + 3);
      if (pppuStack_208 == pppuStack_218) {
        pdb_142db0990(&pppuStack_218);
      }
      *(uint *)(pcStack_210 + (longlong)pppuVar16 * 4 + 0xc) = uVar22;
      pppuStack_208 = (undefined4 ***)((longlong)pppuVar16 + 4);
      if (pppuStack_208 == pppuStack_218) {
        pdb_142db0990(&pppuStack_218);
      }
      *(uint *)(pcStack_210 + (longlong)pppuVar16 * 4 + 0x10) = uVar17 + 0x10001;
      pppuStack_208 = (undefined4 ***)((longlong)pppuVar16 + 5);
      if (pppuStack_208 == pppuStack_218) {
        pdb_142db0990(&pppuStack_218);
      }
      *(uint *)(pcStack_210 + (longlong)pppuVar16 * 4 + 0x14) = uVar17 | 0x10000;
      pppuStack_208 = (undefined4 ***)((longlong)pppuVar16 + 6);
      uVar17 = uVar22;
    }
    pdb_140a58820(uStack_e0,0x10,&UNK_143055761,0xd,&pppuStack_218);
    ppppuVar33 = &pppuStack_218;
    pdb_140a58820(uStack_e0,0x19,&UNK_14305576e,0x16,&pppuStack_218);
    pdb_14098a960(&pppuStack_218);
    *(undefined4 *)auStack_ec._4_8_ = uStack_d4;
    ppuStack_240 = (uint **)CONCAT44(ppuStack_240._4_4_,4);
    uVar17 = 4;
    while (uVar34 = (undefined4)((ulonglong)ppppuVar33 >> 0x20), uVar17 < 0x41) {
      plVar19 = (longlong *)pdb_14008d710(0);
      if (plVar19 == (longlong *)0x0) goto LAB_140b18a12;
      lStack_1c0 = *plVar19;
      piStack_1b8 = (int *)plVar19[1];
      *plVar19 = *plVar19 + 1;
      uStack_1d0 = uVar20;
      uStack_1c8 = uVar15;
      uStack_1e0 = uVar7;
      uStack_1d8 = uVar24;
      pppuStack_218 = (uint ***)0x0;
      pcStack_210 = (code *)0x4;
      pppuStack_208 = (uint ***)0x0;
      uStack_200 = 0x8000000000000000;
      puStack_1b0 = &UNK_14305589f;
      uStack_1a8 = 0xc;
      uStack_1a0 = 0;
      for (uVar22 = 0; pppuVar16 = pppuStack_208, uVar22 < uVar17; uVar22 = uVar22 + 1) {
        if (pppuStack_208 == pppuStack_218) {
          pdb_142db0990(&pppuStack_218);
        }
        iVar25 = uVar22 * 3;
        *(int *)(pcStack_210 + (longlong)pppuVar16 * 4) = iVar25;
        pppuStack_208 = (undefined4 ***)((longlong)pppuVar16 + 1);
        if (pppuStack_208 == pppuStack_218) {
          pdb_142db0990(&pppuStack_218);
        }
        *(int *)(pcStack_210 + (longlong)pppuVar16 * 4 + 4) = iVar25 + 1;
        pppuStack_208 = (undefined4 ***)((longlong)pppuVar16 + 2);
        if (pppuStack_208 == pppuStack_218) {
          pdb_142db0990(&pppuStack_218);
        }
        *(int *)(pcStack_210 + (longlong)pppuVar16 * 4 + 8) = iVar25 + 2;
        pppuStack_208 = (undefined4 ***)((longlong)pppuVar16 + 3);
      }
      pppuStack_368 = &ppuStack_240;
      pcStack_360 = pdb_140f71a50;
      pdb_140f60760(&pppuStack_2c8,&UNK_1430558ab,&pppuStack_368);
      pppuStack_c8 = pppuStack_2c8;
      pcStack_d0 = pcStack_2c0;
      ppppuVar33 = &pppuStack_218;
      pdb_140a58820(uStack_e0,0x18,pcStack_2c0,auStack_2b8._0_8_,&pppuStack_218);
      if (pppuStack_c8 != (uint ***)0x0) {
        pub_1406abac0((byte *)pcStack_d0,(ulonglong)pppuStack_c8,1);
      }
      uVar17 = uVar17 * 2;
      ppuStack_240 = (uint **)CONCAT44(ppuStack_240._4_4_,uVar17);
      pdb_14098a960();
    }
    *(undefined4 *)auStack_ec._4_8_ = uStack_d4;
    plVar19 = (longlong *)pdb_14008d710(0);
    if (plVar19 != (longlong *)0x0) {
      lStack_1c0 = *plVar19;
      piStack_1b8 = (int *)plVar19[1];
      *plVar19 = *plVar19 + 1;
      uStack_1d0 = uVar20;
      uStack_1c8 = uVar15;
      uStack_1e0 = uVar7;
      uStack_1d8 = uVar24;
      pppuStack_218 = (undefined4 ***)0x0;
      pcStack_210 = (code *)0x4;
      pppuStack_208 = (undefined4 ***)0x0;
      uStack_200 = 0x8000000000000000;
      puStack_1b0 = &UNK_14303eccf;
      uStack_1a8 = 8;
      uStack_1a0 = 0;
      pdb_140a5c8b0(&pppuStack_218,0,0xc,0x32,CONCAT44(uVar34,0xc));
      uVar7 = uStack_e0;
      uStack_250 = CONCAT71(uStack_19f,uStack_1a0);
      uStack_258 = uStack_1a8;
      piStack_268 = piStack_1b8;
      puStack_260 = puStack_1b0;
      uStack_278 = uStack_1c8;
      lStack_270 = lStack_1c0;
      uStack_288 = uStack_1d8;
      uStack_280 = uStack_1d0;
      uStack_298 = (undefined4)uStack_1e8;
      uStack_294 = uStack_1e8._4_4_;
      uStack_290 = (undefined4)uStack_1e0;
      uStack_28c = uStack_1e0._4_4_;
      uStack_2a8 = uStack_1f8;
      uStack_2a4 = uStack_1f4;
      uStack_2a0 = uStack_1f0;
      uStack_29c = uStack_1ec;
      auStack_2b8._8_8_ = uStack_200;
      auStack_2b8._0_8_ = pppuStack_208;
      pppuStack_2c8 = pppuStack_218;
      pcStack_2c0 = pcStack_210;
      pdb_140a58820(uStack_e0,0x12,&UNK_1430556fb,5,&pppuStack_2c8);
      pdb_14098a960(&pppuStack_2c8);
      *(undefined4 *)auStack_ec._4_8_ = uStack_d4;
      *(undefined4 *)puStack_2d0[2] = *(undefined4 *)((longlong)puStack_2d0 + 0x1c);
      pdb_140a57030(uVar7,*puStack_2d0);
      return;
    }
  }
LAB_140b18a12:
  pdb_142dc7890(&UNK_143326860);
LAB_140b18a1f:
  pdb_142dc7890(&UNK_143326860);
LAB_140b17bd1:
                    /* WARNING: Does not return */
  pcVar9 = (code *)invalidInstructionException();
  (*pcVar9)();
}

