// VA 0x140c3d980, PDB extent 2752 bytes
// country_core::resources::walls::decorator_storage::DecoratorStorage::on_walls_merged
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::decorator_storage::DecoratorStorage::on_walls_merged
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
   Extent: 2752 */

longlong pdb_140c3d980(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 ***param_4
                      )

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  uint uVar5;
  undefined8 ***pppuVar6;
  undefined8 uVar7;
  code ***pppcVar8;
  undefined8 uVar9;
  code **ppcVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined1 (*pauVar16) [16];
  longlong lVar17;
  ushort uVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  undefined1 *puVar22;
  undefined1 (*pauVar23) [16];
  byte bVar24;
  byte bVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  code ***pppcStack_4e0;
  undefined1 auStack_4d8 [136];
  code ***pppcStack_450;
  undefined1 auStack_448 [136];
  code ***pppcStack_3c0;
  undefined1 auStack_3b8 [136];
  undefined8 uStack_330;
  ulonglong uStack_328;
  undefined8 ***pppuStack_2a8;
  longlong lStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  longlong lStack_288;
  ulonglong uStack_280;
  undefined8 ***pppuStack_278;
  longlong lStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  longlong lStack_258;
  ulonglong uStack_250;
  undefined8 ***pppuStack_248;
  longlong lStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  code ***pppcStack_228;
  undefined8 ***pppuStack_220;
  code ***pppcStack_218;
  code *pcStack_210;
  undefined8 ****ppppuStack_208;
  code *pcStack_200;
  code ***pppcStack_198;
  longlong lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  longlong lStack_178;
  ulonglong uStack_170;
  undefined1 (*pauStack_168) [16];
  longlong lStack_150;
  undefined8 ***pppuStack_f8;
  longlong lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  longlong lStack_d8;
  ulonglong uStack_d0;
  code ***pppcStack_c8;
  undefined8 ***pppuStack_c0;
  longlong *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  longlong *plStack_a0;
  longlong *plStack_98;
  longlong *plStack_90;
  code ***pppcStack_88;
  undefined8 ***pppuStack_80;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  uStack_b0 = param_3;
  uStack_a8 = param_2;
  if ((char)param_1[0x36] != '\0') {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14306c3c9,0x21,&UNK_14306cce0);
  }
  plVar12 = param_1 + 4;
  uVar9 = pdb_1400af0a0(plVar12,&uStack_a8);
  pdb_140caa0c0(&pppcStack_198,param_1,uVar9,&uStack_a8);
  if (lStack_190 == 0) {
    pppcStack_3c0 = (code ***)0x0;
  }
  else {
    pub_142e32760(&pppcStack_3c0,&lStack_190,0x90);
  }
  uVar9 = pdb_1400af0a0(plVar12,&uStack_b0);
  uStack_72 = 0;
  pdb_140caa0c0(&pppcStack_198,param_1,uVar9,&uStack_b0);
  if (lStack_190 == 0) {
    pppcStack_450 = (code ***)0x0;
  }
  else {
    pub_142e32760(&pppcStack_450,&lStack_190,0x90);
  }
  pppcVar8 = pppcStack_450;
  plVar1 = param_1 + 0xc;
  pppcStack_c8 = (code ***)0x0;
  pppuStack_c0 = param_4;
  plStack_b8 = plVar1;
  if (pppcStack_3c0 == (code ***)0x0) {
    puVar22 = auStack_448;
    pppcStack_198 = pppcStack_450;
    if (pppcStack_450 == (code ***)0x0) {
      return 0;
    }
  }
  else {
    puVar22 = auStack_3b8;
    pppcStack_198 = pppcStack_3c0;
    if (pppcStack_450 != (code ***)0x0) {
      pub_142e32760(&lStack_190,puVar22,0x88);
      pppcStack_4e0 = pppcVar8;
      pub_142e32760(auStack_4d8,auStack_448,0x88);
      pppcStack_218 = (code ***)plStack_b8;
      pppcStack_228 = pppcStack_c8;
      pppuStack_220 = pppuStack_c0;
      pdb_140c8e6d0(&pppcStack_198,&pppcStack_4e0,&pppcStack_228);
      pppcVar8 = pppcStack_198;
      pub_142e32760(&uStack_330,&lStack_190,0x88);
      pppcStack_228 = pppcVar8;
      goto joined_r0x000140c3dcd7;
    }
  }
  plStack_90 = plVar12;
  pppcStack_88 = pppcStack_198;
  pppuStack_80 = param_4;
  pub_142e32760(&lStack_190,puVar22,0x88);
  auVar26 = *pauStack_168;
  pauVar23 = pauStack_168 + 1;
  uVar15 = ~(uint)(ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar26[0xf] >> 7) << 0xf);
  plStack_a0 = param_1 + 0x10;
  pppcStack_228 = (code ***)&uStack_330;
  plStack_98 = param_1;
  pauVar16 = pauStack_168;
  lVar21 = lStack_150;
  while (lVar21 != 0) {
    lVar21 = lVar21 + -1;
    if ((short)uVar15 == 0) {
      do {
        auVar26 = *pauVar23;
        pauVar16 = pauVar16 + -0x68;
        pauVar23 = pauVar23 + 1;
        uVar15 = (ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar26[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar15 == 0);
    }
    uVar19 = 0;
    for (uVar5 = uVar15; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      uVar19 = uVar19 + 1;
    }
    uVar19 = *(uint *)((longlong)pauVar16 + (ulonglong)uVar19 * -0x68 + -0x68);
    uVar14 = (ulonglong)uStack_330 >> 0x20;
    uStack_330 = (code **)CONCAT44((int)uVar14,uVar19);
    uVar9 = pdb_1400aede0(plStack_a0,pppcStack_228);
    pdb_140cabcd0(&pppcStack_228,plVar1,uVar9,pppcStack_228);
    if ((int)pppuStack_220 == 3) {
      pppuStack_220 = (undefined8 ***)pdb_140c447f0;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14306d3c7,&pppcStack_228,&UNK_14306ccb0);
    }
    pppuStack_f8 = (undefined8 ***)CONCAT44(pppuStack_f8._4_4_,uVar19);
    uVar14 = (ulonglong)uVar19;
    ppcVar10 = (code **)pdb_1417b43a0(plVar1,uVar14,0,pppuStack_80);
    if (ppcVar10 != (code **)0x3) {
      pppuStack_220 = (undefined8 ***)pdb_140c447f0;
      pcStack_210 = pdb_140c34b70;
      ppppuStack_208 = (undefined8 ****)&pppcStack_c8;
      pcStack_200 = pdb_140c34b70;
      uStack_330 = ppcVar10;
      uStack_328 = uVar14;
      pppcStack_218 = pppcStack_228;
      pppcStack_228 = (code ***)&pppuStack_f8;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14306d398,&pppcStack_228,&UNK_14306ccc8);
    }
    uVar15 = uVar15 - 1 & uVar15;
  }
  pub_142e32760(&uStack_330,&lStack_190,0x88);
  param_1 = plStack_98;
  plVar12 = plStack_90;
  pppcStack_228 = pppcStack_88;
  param_4 = pppuStack_80;
joined_r0x000140c3dcd7:
  if (pppcStack_228 == (code ***)0x0) {
    return 0;
  }
  pub_142e32760(&pppuStack_220,&uStack_330,0x88);
  pppcStack_198 = (code ***)param_4;
  uVar11 = pdb_1400af0a0(plVar12,&pppcStack_198);
  lVar21 = *param_1;
  bVar24 = (byte)(uVar11 >> 0x38);
  bVar25 = bVar24 >> 1;
  auVar26 = ZEXT216(CONCAT11(bVar25,bVar25));
  auVar26 = pshuflw(auVar26,auVar26,0);
  lVar13 = 0;
  uVar14 = uVar11;
  do {
    uVar14 = uVar14 & param_1[1];
    auVar3 = *(undefined1 (*) [16])(lVar21 + uVar14);
    auVar28[0] = -(auVar3[0] == auVar26[0]);
    auVar28[1] = -(auVar3[1] == auVar26[1]);
    auVar28[2] = -(auVar3[2] == auVar26[2]);
    auVar28[3] = -(auVar3[3] == auVar26[3]);
    auVar28[4] = -(auVar3[4] == auVar26[4]);
    auVar28[5] = -(auVar3[5] == auVar26[5]);
    auVar28[6] = -(auVar3[6] == auVar26[6]);
    auVar28[7] = -(auVar3[7] == auVar26[7]);
    auVar28[8] = -(auVar3[8] == auVar26[0]);
    auVar28[9] = -(auVar3[9] == auVar26[1]);
    auVar28[10] = -(auVar3[10] == auVar26[2]);
    auVar28[0xb] = -(auVar3[0xb] == auVar26[3]);
    auVar28[0xc] = -(auVar3[0xc] == auVar26[4]);
    auVar28[0xd] = -(auVar3[0xd] == auVar26[5]);
    auVar28[0xe] = -(auVar3[0xe] == auVar26[6]);
    auVar28[0xf] = -(auVar3[0xf] == auVar26[7]);
    uVar18 = (ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe | (ushort)(auVar28[0xf] >> 7) << 0xf;
    uVar15 = (uint)uVar18;
    while (uVar18 != 0) {
      uVar19 = 0;
      for (uVar5 = uVar15; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
        uVar19 = uVar19 + 1;
      }
      lVar20 = (uVar19 + uVar14 & param_1[1]) * -0x98;
      if (*(undefined8 ****)(lVar21 + -0x98 + lVar20) == param_4) {
        lVar21 = lVar21 + lVar20;
        goto LAB_140c3dfb8;
      }
      uVar18 = (ushort)(uVar15 - 1) & (ushort)uVar15;
      uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar18);
    }
    auVar27[0] = -(auVar3[0] == -1);
    auVar27[1] = -(auVar3[1] == -1);
    auVar27[2] = -(auVar3[2] == -1);
    auVar27[3] = -(auVar3[3] == -1);
    auVar27[4] = -(auVar3[4] == -1);
    auVar27[5] = -(auVar3[5] == -1);
    auVar27[6] = -(auVar3[6] == -1);
    auVar27[7] = -(auVar3[7] == -1);
    auVar27[8] = -(auVar3[8] == -1);
    auVar27[9] = -(auVar3[9] == -1);
    auVar27[10] = -(auVar3[10] == -1);
    auVar27[0xb] = -(auVar3[0xb] == -1);
    auVar27[0xc] = -(auVar3[0xc] == -1);
    auVar27[0xd] = -(auVar3[0xd] == -1);
    auVar27[0xe] = -(auVar3[0xe] == -1);
    auVar27[0xf] = -(auVar3[0xf] == -1);
    if ((((((((((((((((SUB161(auVar27 >> 7,0) & 1) != 0 || (SUB161(auVar27 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar27 >> 0x17,0) & 1) != 0) || (SUB161(auVar27 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar27 >> 0x27,0) & 1) != 0) || (SUB161(auVar27 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar27 >> 0x37,0) & 1) != 0) || (SUB161(auVar27 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar27 >> 0x47,0) & 1) != 0) || (SUB161(auVar27 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar27 >> 0x57,0) & 1) != 0) || (SUB161(auVar27 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar27 >> 0x67,0) & 1) != 0) || (SUB161(auVar27 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar27 >> 0x77,0) & 1) != 0) || auVar27[0xf] < '\0') {
      if (param_1[2] == 0) {
        uStack_71 = 1;
        uVar14 = 1;
        pdb_142dadf10(param_1,1,plVar12,1);
      }
      uStack_71 = 1;
      plVar12 = (longlong *)pdb_140f3bda0();
      if ((char)plVar12[2] == '\x01') {
        lStack_d8 = *plVar12;
        uVar14 = plVar12[1];
      }
      else {
        uStack_71 = 1;
        lStack_d8 = pdb_140f4fd10();
        *plVar12 = lStack_d8;
        plVar12[1] = uVar14;
        *(undefined1 *)(plVar12 + 2) = 1;
      }
      *plVar12 = lStack_d8 + 1;
      uVar7 = _UNK_14306c4f8;
      uVar9 = _DAT_14306c4f0;
      lVar13 = _UNK_14306c4e8;
      pppuVar6 = _DAT_14306c4e0;
      uStack_e8 = _DAT_14306c4f0;
      uStack_e0 = _UNK_14306c4f8;
      pppuStack_f8 = _DAT_14306c4e0;
      lStack_f0 = _UNK_14306c4e8;
      uStack_d0 = uVar14;
      plVar12 = (longlong *)pdb_140f3bda0();
      if ((char)plVar12[2] == '\x01') {
        lStack_178 = *plVar12;
        uVar14 = plVar12[1];
      }
      else {
        lStack_178 = pdb_140f4fd10();
        *plVar12 = lStack_178;
        plVar12[1] = uVar14;
        *(undefined1 *)(plVar12 + 2) = 1;
      }
      *plVar12 = lStack_178 + 1;
      uStack_188 = uVar9;
      uStack_180 = uVar7;
      pppcStack_198 = (code ***)pppuVar6;
      lStack_190 = lVar13;
      uStack_170 = uVar14;
      plVar12 = (longlong *)pdb_140f3bda0();
      if ((char)plVar12[2] == '\x01') {
        lVar20 = *plVar12;
        uVar14 = plVar12[1];
      }
      else {
        lVar20 = pdb_140f4fd10();
        *plVar12 = lVar20;
        plVar12[1] = uVar14;
        *(undefined1 *)(plVar12 + 2) = 1;
      }
      *plVar12 = lVar20 + 1;
      lStack_258 = lStack_d8;
      uStack_250 = uStack_d0;
      uStack_268 = uStack_e8;
      uStack_260 = uStack_e0;
      pppuStack_278 = pppuStack_f8;
      lStack_270 = lStack_f0;
      pppuStack_2a8 = (undefined8 ***)pppcStack_198;
      lStack_2a0 = lStack_190;
      uStack_298 = uStack_188;
      uStack_290 = uStack_180;
      lStack_288 = lStack_178;
      uStack_280 = uStack_170;
      pppuStack_248 = pppuVar6;
      lStack_240 = lVar13;
      uStack_238 = uVar9;
      uStack_230 = uVar7;
      pauVar23 = (undefined1 (*) [16])*param_1;
      uVar4 = param_1[1];
      uVar11 = uVar11 & uVar4;
      auVar26 = *(undefined1 (*) [16])(*pauVar23 + uVar11);
      uVar18 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar26[0xf] >> 7) << 0xf;
      uVar15 = (uint)uVar18;
      if (uVar18 == 0) {
        lVar21 = 0x10;
        do {
          uVar11 = uVar11 + lVar21 & uVar4;
          auVar26 = *(undefined1 (*) [16])(*pauVar23 + uVar11);
          lVar21 = lVar21 + 0x10;
          uVar15 = (uint)(ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar26[0xf] >> 7) << 0xf);
        } while (uVar15 == 0);
      }
      uVar19 = 0;
      for (; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
        uVar19 = uVar19 + 1;
      }
      uVar11 = uVar19 + uVar11 & uVar4;
      bVar25 = (*pauVar23)[uVar11];
      if (-1 < (char)bVar25) {
        auVar26 = *pauVar23;
        uVar15 = 0;
        for (uVar19 = (uint)(ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                                     (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                                     (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                                     (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                                     (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                                     (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                                     (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                                     (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                                     (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                                     (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                                     (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                                     (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                                     (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                                     (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                                     (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                                    (ushort)(byte)(auVar26[0xf] >> 7) << 0xf); (uVar19 & 1) == 0;
            uVar19 = uVar19 >> 1 | 0x80000000) {
          uVar15 = uVar15 + 1;
        }
        uVar11 = (ulonglong)uVar15;
        bVar25 = (*pauVar23)[uVar11];
      }
      bVar24 = bVar24 >> 1;
      (*pauVar23)[uVar11] = bVar24;
      pauVar23[1][uVar11 - 0x10 & uVar4] = bVar24;
      param_1[2] = param_1[2] - (ulonglong)(bVar25 & 1);
      lVar17 = uVar11 * -0x98;
      lVar21 = (longlong)pauVar23 + lVar17;
      *(undefined8 ****)((longlong)pauVar23 + lVar17 + -0x98) = param_4;
      plVar12 = (longlong *)((longlong)pauVar23 + lVar17 + -0x90);
      *plVar12 = (longlong)pppcStack_198;
      plVar12[1] = lStack_190;
      puVar2 = (undefined8 *)((longlong)pauVar23 + lVar17 + -0x80);
      *puVar2 = uStack_188;
      puVar2[1] = uStack_180;
      plVar12 = (longlong *)((longlong)pauVar23 + lVar17 + -0x70);
      *plVar12 = lStack_178;
      plVar12[1] = uStack_170;
      plVar12 = (longlong *)((longlong)pauVar23 + lVar17 + -0x60);
      *plVar12 = (longlong)pppuStack_f8;
      plVar12[1] = lStack_f0;
      puVar2 = (undefined8 *)((longlong)pauVar23 + lVar17 + -0x50);
      *puVar2 = uStack_e8;
      puVar2[1] = uStack_e0;
      plVar12 = (longlong *)((longlong)pauVar23 + lVar17 + -0x40);
      *plVar12 = lStack_d8;
      plVar12[1] = uStack_d0;
      plVar12 = (longlong *)((longlong)pauVar23 + lVar17 + -0x30);
      *plVar12 = (longlong)pppuVar6;
      plVar12[1] = lVar13;
      puVar2 = (undefined8 *)((longlong)pauVar23 + lVar17 + -0x20);
      *puVar2 = uVar9;
      puVar2[1] = uVar7;
      *(longlong *)((longlong)pauVar23 + lVar17 + -0x10) = lVar20;
      *(ulonglong *)((longlong)pauVar23 + lVar17 + -8) = uVar14;
      param_1[3] = param_1[3] + 1;
LAB_140c3dfb8:
      pppuStack_80 = (undefined8 ***)(lVar21 + -0x90);
      pub_142e32760(&pppcStack_198,&pppcStack_228,0x90);
      pdb_1404d6920(lVar21 + -0x90);
      pppuVar6 = pppuStack_80;
      pub_142e32760(pppuStack_80,&pppcStack_198,0x90);
      return (longlong)pppuVar6;
    }
    uVar14 = uVar14 + lVar13 + 0x10;
    lVar13 = lVar13 + 0x10;
  } while( true );
}

