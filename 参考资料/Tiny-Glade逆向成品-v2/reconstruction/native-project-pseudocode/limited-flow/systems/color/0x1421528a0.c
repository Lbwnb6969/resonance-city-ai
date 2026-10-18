// VA 0x1421528a0, PDB extent 3923 bytes
// system_color::ui_color_wall_and_roof::ui_color_wall_and_roof
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/ui_color_wall_and_roof.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Instruction at (ram,0x00014215347c) overlaps instruction at (ram,0x00014215347a)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000142153341) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_color::ui_color_wall_and_roof::ui_color_wall_and_roof
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/ui_color_wall_and_roof.rs
   Extent: 3923 */

void pdb_1421528a0(undefined8 *param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4,
                  longlong *param_5,undefined8 *param_6,longlong *param_7,undefined8 *param_8,
                  undefined8 *param_9,undefined8 *param_10,undefined8 *param_11,undefined8 *param_12
                  ,longlong *param_13,longlong *param_14)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  char cVar11;
  byte bVar12;
  char cVar13;
  undefined4 uVar14;
  ulonglong uVar15;
  float *pfVar16;
  longlong lVar17;
  char *pcVar18;
  longlong lVar19;
  uint *puVar20;
  undefined *puVar21;
  uint *puVar22;
  ulonglong uVar23;
  int *piVar24;
  undefined1 *puVar25;
  float *pfVar26;
  float **ppfVar27;
  float **ppfVar28;
  float **ppfVar29;
  float **ppfVar30;
  undefined1 *puVar31;
  undefined1 *puVar32;
  ulonglong uVar33;
  int iVar34;
  float *pfVar35;
  uint uVar36;
  ushort uVar37;
  ulonglong in_R10;
  longlong lVar38;
  undefined8 *puVar39;
  longlong in_R11;
  uint *puVar40;
  bool bVar41;
  char in_AF;
  float extraout_XMM0_Da;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 *puStack_3e0;
  float *apfStack_3d8 [4];
  undefined4 uStack_3b8;
  uint auStack_3a0 [2];
  undefined8 uStack_398;
  undefined1 uStack_358;
  char cStack_357;
  undefined1 auStack_340 [4];
  float fStack_33c;
  undefined8 **ppuStack_290;
  code *pcStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  byte bStack_1e7;
  ulonglong uStack_1e0;
  undefined1 *puStack_1d8;
  char cStack_180;
  undefined7 uStack_17f;
  undefined8 *puStack_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  float fStack_168;
  float fStack_164;
  undefined1 auStack_160 [16];
  int iStack_14c;
  undefined8 uStack_148;
  undefined1 auStack_140 [24];
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined1 auStack_e8 [16];
  undefined8 uStack_d8;
  int iStack_d4;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  code *pcStack_c0;
  undefined8 **ppuStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a4;
  undefined1 uStack_a3;
  undefined1 uStack_a2;
  byte bStack_a1;
  undefined8 uStack_a0;
  
  ppfVar28 = apfStack_3d8;
  ppfVar30 = apfStack_3d8;
  ppfVar27 = apfStack_3d8;
  puVar32 = &uStack_358;
  uStack_a0 = 0xfffffffffffffffe;
  if (*(char *)*param_1 != '\a') {
    return;
  }
  param_3 = (undefined8 *)*param_3;
  uVar14 = *(undefined4 *)param_3;
  uVar3 = *(undefined4 *)((longlong)param_3 + 4);
  lVar19 = *param_2;
  puStack_3e0 = (undefined1 *)0x142152922;
  uStack_b0 = param_4;
  pdb_140c9dd80(auStack_340,3);
  uStack_1e0 = CONCAT62(uStack_1e0._2_6_,1);
  puStack_3e0 = (undefined1 *)0x142152941;
  pdb_140c9dcb0(&ppuStack_290,auStack_340,&uStack_1e0);
  uStack_a4 = 1;
  puStack_3e0 = (undefined1 *)0x142152954;
  pdb_140c9dee0(&uStack_1e0);
  uStack_a4 = 0;
  puStack_3e0 = (undefined1 *)0x142152973;
  pdb_140c9dd20(auStack_340,&ppuStack_290,&uStack_1e0);
  puStack_3e0 = (undefined1 *)0x142152998;
  pdb_140c9dbe0(&ppuStack_290,auStack_340,0);
  puVar25 = auStack_340;
  puStack_3e0 = (undefined1 *)0x1421529af;
  pdb_1428b3570(puVar25,&ppuStack_290,uVar14,uVar3);
  puVar21 = &UNK_143462f00;
  puStack_3e0 = (undefined1 *)0x1421529c7;
  uStack_128 = pdb_1428b3d80(lVar19,&UNK_143462f00,0xc);
  puStack_3e0 = (undefined1 *)0x1421529e1;
  puStack_120 = puVar21;
  cVar11 = pdb_1408ffa90(&uStack_128);
  if (cVar11 != '\0') {
    *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
    lVar17 = *param_5;
    lVar38 = *(longlong *)(lVar17 + 0x30);
    uVar4 = *(undefined8 *)(lVar17 + 0x40);
    if (lVar38 == *(longlong *)(lVar17 + 0x20)) {
      puStack_3e0 = (undefined1 *)0x142152a0f;
      pdb_142d7e980(lVar17 + 0x20);
    }
    lVar5 = *(longlong *)(lVar17 + 0x28);
    *(undefined8 *)(lVar5 + lVar38 * 0x10) = uVar4;
    *(undefined1 *)(lVar5 + 8 + lVar38 * 0x10) = 1;
    *(longlong *)(lVar17 + 0x30) = lVar38 + 1;
    *(longlong *)(lVar17 + 0x40) = *(longlong *)(lVar17 + 0x40) + 1;
  }
  puVar40 = (uint *)*param_9;
  pfVar26 = (float *)*param_10;
  uStack_3b8 = 0x4cb;
  puStack_3e0 = (undefined1 *)0x142152a56;
  puVar22 = puVar40;
  pfVar35 = pfVar26;
  pdb_1409efbd0(&uStack_108,puVar40,pfVar26,_DAT_142e36f3c);
  puVar39 = puStack_100;
  if (iStack_d4 == 2) {
    return;
  }
  puVar31 = puVar32;
  if ((byte)uStack_108 == 0) {
    puStack_3e0 = (undefined1 *)0x142152ad6;
    lVar17 = pdb_140b54f80(*param_11,puStack_100,&UNK_143462f10);
    if (lVar17 != 0) {
      puStack_3e0 = (undefined1 *)0x142152ae9;
      cVar11 = pdb_1408ff980(lVar17 + 0x29f);
      if (cVar11 != '\0') {
        uStack_3b8 = 0x400;
        puStack_3e0 = (undefined1 *)0x142152b0f;
        puVar22 = puVar40;
        pfVar35 = pfVar26;
        pdb_1409efbd0(&cStack_180,puVar40,pfVar26,_DAT_142e36f3c);
        if (((iStack_14c != 2) && (cStack_180 == '\t')) && (puStack_178 == puVar39)) {
          uStack_108 = CONCAT71(uStack_17f,9);
          uStack_d0 = uStack_148;
          auStack_e8 = auStack_160;
          uStack_f8 = uStack_170;
          uStack_f4 = uStack_16c;
          fStack_f0 = fStack_168;
          fStack_ec = fStack_164;
          puStack_100 = puStack_178;
          if (iStack_14c == 2) {
            return;
          }
          bVar12 = 9;
          goto LAB_142152a84;
        }
      }
    }
    fVar45 = (float)auStack_e8._0_4_;
code_r0x000142152b37:
    fVar46 = fStack_ec;
    fVar47 = fStack_f0;
    uVar4 = *param_11;
    puStack_3e0 = (undefined1 *)0x142152b4c;
    lVar17 = pdb_140b54f80(uVar4,puVar39,&UNK_143462f28);
    if (lVar17 == 0) {
LAB_142152c0f:
      bStack_a1 = 3;
      goto LAB_142152cfc;
    }
    puStack_3e0 = (undefined1 *)0x142152b63;
    uVar15 = pdb_140b54b40(uVar4,puVar39);
    if ((uVar15 & 0xffffffff) == 0) {
LAB_142152c1b:
      uVar14 = 0;
    }
    else {
      lVar38 = param_14[1];
      uVar23 = uVar15 & 0xffffffff ^ 0xffffffff;
      if (((*(ulonglong *)(lVar38 + 0x10) <= uVar23) ||
          (piVar24 = (int *)(uVar23 * 0x18 + *(longlong *)(lVar38 + 8)),
          piVar24[4] != (int)(uVar15 >> 0x20))) || (*piVar24 == 0)) goto LAB_142152c1b;
      lVar5 = *param_14;
      uVar15 = *(ulonglong *)(piVar24 + 2);
      if ((*(ulonglong *)(lVar5 + 0x38) <= (uVar15 & 0xffffffff)) ||
         ((*(ulonglong *)(*(longlong *)(lVar5 + 0x28) + (uVar15 >> 6 & 0x3ffffff) * 8) >>
           (uVar15 & 0x3f) & 1) == 0)) goto LAB_142152c1b;
      puStack_3e0 = (undefined1 *)0x142152c0b;
      uVar14 = pdb_140b77b50((ulonglong)(uint)~piVar24[1] * 0x58 +
                             *(longlong *)
                              (*(longlong *)
                                (*(longlong *)(lVar38 + 0x1a0) + 0x18 + (uVar15 >> 0x20) * 0x48) +
                               0x10 + ~*(ulonglong *)
                                        (*(longlong *)
                                          (*(longlong *)(lVar38 + 0x1a0) + 0x38 +
                                          (uVar15 >> 0x20) * 0x48) +
                                        *(longlong *)(lVar5 + 0x110) * 8) * 0x30));
    }
    puStack_3e0 = (undefined1 *)0x142152c25;
    bVar12 = pdb_140930190(lVar17,uVar14);
    bStack_a1 = (fVar46 <= extraout_XMM0_Da & bVar12) + 3;
    goto LAB_142152cfc;
  }
  bVar12 = (byte)uStack_108;
  if (9 < (byte)uStack_108) {
    return;
  }
LAB_142152a84:
  fVar46 = fStack_ec;
  fVar47 = fStack_f0;
  puVar39 = puStack_100;
  fVar45 = (float)auStack_e8._0_4_;
  puVar20 = (uint *)&UNK_143462fc0;
  uVar15 = (ulonglong)*(int *)(&UNK_143462fc0 + (ulonglong)bVar12 * 4);
  bVar41 = 0xfffffffebcb9d03f < uVar15;
  pfVar16 = (float *)(&UNK_143462fc0 + uVar15);
  cVar11 = (char)pfVar16;
  ppfVar29 = apfStack_3d8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar12) {
  case 0:
    goto code_r0x000142152b37;
  default:
    goto LAB_14215352a;
  case 2:
    bStack_a1 = uStack_108._1_1_;
    break;
  case 6:
  case 7:
    goto LAB_142152c0f;
  case 8:
    bStack_a1 = 2;
    break;
  case 9:
    puStack_118 = puStack_100;
    param_13 = (longlong *)*param_13;
    if (param_13[3] != 0) {
      puStack_3e0 = (undefined1 *)0x142152c68;
      uVar15 = pdb_140fc4ba0(param_13 + 4,&puStack_118);
      bVar12 = (byte)(uVar15 >> 0x39);
      auVar42 = ZEXT216(CONCAT11(bVar12,bVar12));
      auVar42 = pshuflw(auVar42,auVar42,0);
      lVar17 = 0;
      while( true ) {
        uVar15 = uVar15 & param_13[1];
        auVar2 = *(undefined1 (*) [16])(*param_13 + uVar15);
        auVar44[0] = -(auVar2[0] == auVar42[0]);
        auVar44[1] = -(auVar2[1] == auVar42[1]);
        auVar44[2] = -(auVar2[2] == auVar42[2]);
        auVar44[3] = -(auVar2[3] == auVar42[3]);
        auVar44[4] = -(auVar2[4] == auVar42[4]);
        auVar44[5] = -(auVar2[5] == auVar42[5]);
        auVar44[6] = -(auVar2[6] == auVar42[6]);
        auVar44[7] = -(auVar2[7] == auVar42[7]);
        auVar44[8] = -(auVar2[8] == auVar42[0]);
        auVar44[9] = -(auVar2[9] == auVar42[1]);
        auVar44[10] = -(auVar2[10] == auVar42[2]);
        auVar44[0xb] = -(auVar2[0xb] == auVar42[3]);
        auVar44[0xc] = -(auVar2[0xc] == auVar42[4]);
        auVar44[0xd] = -(auVar2[0xd] == auVar42[5]);
        auVar44[0xe] = -(auVar2[0xe] == auVar42[6]);
        auVar44[0xf] = -(auVar2[0xf] == auVar42[7]);
        uVar37 = (ushort)(SUB161(auVar44 >> 7,0) & 1) | (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe | (ushort)(auVar44[0xf] >> 7) << 0xf
        ;
        uVar36 = (uint)uVar37;
        while (uVar37 != 0) {
          uVar9 = 0;
          for (uVar10 = uVar36; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
            uVar9 = uVar9 + 1;
          }
          lVar38 = *param_13 + (uVar9 + uVar15 & param_13[1]) * -0x20;
          if (puVar39 == *(undefined8 **)(lVar38 + -0x20)) {
            if (*(longlong *)(lVar38 + -8) != 0) {
              return;
            }
            goto code_r0x000142153351;
          }
          uVar37 = (ushort)(uVar36 - 1) & (ushort)uVar36;
          uVar36 = CONCAT22((short)(uVar36 - 1 >> 0x10),uVar37);
        }
        auVar43[0] = -(auVar2[0] == -1);
        auVar43[1] = -(auVar2[1] == -1);
        auVar43[2] = -(auVar2[2] == -1);
        auVar43[3] = -(auVar2[3] == -1);
        auVar43[4] = -(auVar2[4] == -1);
        auVar43[5] = -(auVar2[5] == -1);
        auVar43[6] = -(auVar2[6] == -1);
        auVar43[7] = -(auVar2[7] == -1);
        auVar43[8] = -(auVar2[8] == -1);
        auVar43[9] = -(auVar2[9] == -1);
        auVar43[10] = -(auVar2[10] == -1);
        auVar43[0xb] = -(auVar2[0xb] == -1);
        auVar43[0xc] = -(auVar2[0xc] == -1);
        auVar43[0xd] = -(auVar2[0xd] == -1);
        auVar43[0xe] = -(auVar2[0xe] == -1);
        auVar43[0xf] = -(auVar2[0xf] == -1);
        if ((((((((((((((((SUB161(auVar43 >> 7,0) & 1) != 0 || (SUB161(auVar43 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar43 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar43 >> 0x1f,0) & 1) != 0) || (SUB161(auVar43 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar43 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar43 >> 0x37,0) & 1) != 0) || (SUB161(auVar43 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar43 >> 0x47,0) & 1) != 0) || (SUB161(auVar43 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar43 >> 0x57,0) & 1) != 0) || (SUB161(auVar43 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar43 >> 0x67,0) & 1) != 0) || (SUB161(auVar43 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar43 >> 0x77,0) & 1) != 0) || auVar43[0xf] < '\0') break;
        uVar15 = uVar15 + lVar17 + 0x10;
        lVar17 = lVar17 + 0x10;
      }
    }
code_r0x000142153351:
    puStack_3e0 = (undefined1 *)0x14215336a;
    lVar17 = pdb_140b54f80(*param_11,puVar39,&UNK_143462f40);
    if (lVar17 == 0) {
      return;
    }
    puStack_3e0 = (undefined1 *)0x142153381;
    cVar11 = pdb_1408ff980(lVar17 + 0x29f);
    bStack_a1 = 5;
    if (cVar11 == '\0') {
      return;
    }
    break;
  case 10:
    *pfVar16 = (float)((int)*pfVar16 + (int)pfVar16);
    pbVar1 = &UNK_143462fc5 + uVar15;
    bVar12 = *pbVar1;
    *pbVar1 = *pbVar1 - 0x40;
    pcVar18 = (char *)CONCAT62((int6)((ulonglong)pfVar16 >> 0x10),
                               CONCAT11(((char)*pbVar1 < '\0') << 7 | (*pbVar1 == 0) << 6 |
                                        in_AF << 4 | ((POPCOUNT(*pbVar1) & 1U) == 0) << 2 | 2U |
                                        0x3f < bVar12,cVar11));
    pcVar18 = (char *)(CONCAT71((int7)((ulonglong)pcVar18 >> 8),cVar11 + *pcVar18) + -0x77);
    *pcVar18 = *pcVar18 + -0x40;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xb:
    *(char *)pfVar16 = *(char *)pfVar16 + cVar11;
    goto code_r0x000142152ffd;
  case 0xc:
    ppfVar27 = (float **)&puStack_3e0;
    puVar20 = (uint *)(ulonglong)((int)*pfVar16 + 0x43462fc0 + (uint)bVar41);
    puStack_3e0 = (undefined1 *)apfStack_3d8;
    goto LAB_14215320b;
  case 0xd:
    *(char *)pfVar16 = *(char *)pfVar16 + cVar11;
    cStack_357 = cStack_357 + -0x40;
    pfVar16 = (float *)CONCAT71((int7)((ulonglong)pfVar16 >> 8),
                                *(char *)((longlong)pfVar26 + ((ulonglong)pfVar16 & 0xff)));
    goto LAB_14215320b;
  case 0xe:
    pfVar26 = apfStack_3d8[0];
    ppfVar27 = apfStack_3d8;
    apfStack_3d8[0] = pfVar16;
    goto LAB_14215320b;
  case 0xf:
    goto LAB_14215346f;
  case 0x10:
    goto code_r0x000142153493;
  case 0x11:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x12:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x13:
    ppfVar28 = apfStack_3d8;
    goto LAB_14215346f;
  }
LAB_142152cfc:
  puStack_c8 = puVar39;
  pfVar16 = (float *)*param_6;
  puStack_110 = puVar39;
  if (*(longlong *)(pfVar16 + 0x40) == 0) {
    puVar39 = (undefined8 *)0x0;
    ppfVar30 = apfStack_3d8;
  }
  else {
    puVar20 = *(uint **)(pfVar16 + 0x3e);
    puVar22 = puVar20 + *(longlong *)(pfVar16 + 0x40);
    lVar17 = param_6[1];
    if (*(char *)(pfVar16 + 0x42) == '\0') {
      pfVar35 = *(float **)(lVar17 + 0x100);
      puVar25 = *(undefined1 **)(lVar17 + 0x1a0);
      puVar39 = (undefined8 *)0x0;
      ppfVar27 = apfStack_3d8;
      do {
        uVar15 = (ulonglong)*puVar20;
        in_R11 = uVar15 * 0xa0;
        uVar23 = (ulonglong)(uint)pfVar35[uVar15 * 0x28 + 0x25];
        uVar15 = *(ulonglong *)(pfVar35 + uVar15 * 0x28 + 0x16);
        uVar36 = (uint)uVar15;
        if (*(uint *)(puVar25 + (uVar23 * 0x12 + 4) * 4) == uVar36) {
          if (uVar15 != 0) {
            if ((*(ulonglong *)(pfVar16 + 0x44) <
                 *(ulonglong *)(puVar25 + (uVar23 * 0x12 + 0x10) * 4)) &&
               (uVar33 = *(ulonglong *)
                          (*(longlong *)(puVar25 + (uVar23 * 0x12 + 0xe) * 4) +
                          *(ulonglong *)(pfVar16 + 0x44) * 8), uVar33 != 0)) {
              lVar17 = *(longlong *)
                        (*(longlong *)(puVar25 + (uVar23 * 0x12 + 6) * 4) + 0x10 + ~uVar33 * 0x30);
            }
            else {
              lVar17 = 0;
            }
            if (uVar36 != 0) {
              uVar23 = (ulonglong)(uVar36 & 7);
              if ((uVar15 & 0xffffffff) - 1 < 7) {
                uVar15 = 0;
LAB_1421531d0:
                do {
                  uVar33 = uVar15;
                  uVar23 = uVar23 - 1;
                  uVar15 = uVar33 + 1;
                } while (uVar23 != 0);
              }
              else {
                uVar15 = 0;
                do {
                  uVar33 = uVar15;
                  uVar15 = uVar33 + 8;
                } while ((uVar36 & 0xfffffff8) != uVar15);
                if (uVar23 != 0) goto LAB_1421531d0;
                uVar33 = uVar33 + 7;
              }
              puVar39 = (undefined8 *)(lVar17 + uVar33 * 0xd8);
            }
          }
        }
        else if (uVar15 != 0) {
          if ((*(ulonglong *)(pfVar16 + 0x44) < *(ulonglong *)(puVar25 + (uVar23 * 0x12 + 0x10) * 4)
              ) && (uVar33 = *(ulonglong *)
                              (*(longlong *)(puVar25 + (uVar23 * 0x12 + 0xe) * 4) +
                              *(ulonglong *)(pfVar16 + 0x44) * 8), uVar33 != 0)) {
            param_10 = *(undefined8 **)
                        (*(longlong *)(puVar25 + (uVar23 * 0x12 + 6) * 4) + 0x10 + ~uVar33 * 0x30);
          }
          else {
            param_10 = (undefined8 *)0x0;
          }
          if (uVar36 != 0) {
            uVar23 = (ulonglong)(uVar36 & 7);
            if ((uVar15 & 0xffffffff) - 1 < 7) {
              uVar15 = 0;
LAB_142153200:
              do {
                in_R10 = uVar15;
                uVar23 = uVar23 - 1;
                uVar15 = in_R10 + 1;
              } while (uVar23 != 0);
            }
            else {
              uVar15 = 0;
              do {
                in_R10 = uVar15;
                uVar15 = in_R10 + 8;
              } while ((uVar36 & 0xfffffff8) != uVar15);
              if (uVar23 != 0) goto LAB_142153200;
              in_R10 = in_R10 + 7;
            }
LAB_14215320b:
            puVar39 = param_10 +
                      (ulonglong)
                      ~*(uint *)(*(longlong *)((longlong)pfVar35 + in_R11 + 0x50) + 8 +
                                in_R10 * 0x10) * 0x1b;
          }
        }
        puVar20 = puVar20 + 1;
        ppfVar30 = ppfVar27;
      } while (puVar20 != puVar22);
    }
    else {
      puVar39 = (undefined8 *)0x0;
      do {
        uVar15 = *(ulonglong *)(*(longlong *)(lVar17 + 0x1a0) + 0x10 + (ulonglong)*puVar20 * 0x48);
        if (uVar15 != 0) {
          lVar38 = *(longlong *)(lVar17 + 0x1a0) + (ulonglong)*puVar20 * 0x48;
          if ((*(ulonglong *)(pfVar16 + 0x44) < *(ulonglong *)(lVar38 + 0x40)) &&
             (uVar23 = *(ulonglong *)
                        (*(longlong *)(lVar38 + 0x38) + *(ulonglong *)(pfVar16 + 0x44) * 8),
             uVar23 != 0)) {
            lVar38 = *(longlong *)(*(longlong *)(lVar38 + 0x18) + 0x10 + ~uVar23 * 0x30);
          }
          else {
            lVar38 = 0;
          }
          if ((uVar15 & 0xffffffff) != 0) {
            uVar36 = (uint)uVar15;
            uVar15 = (ulonglong)(uVar36 & 7);
            if (uVar36 < 8) {
              uVar23 = 0;
LAB_142152e30:
              do {
                uVar33 = uVar23;
                uVar15 = uVar15 - 1;
                uVar23 = uVar33 + 1;
              } while (uVar15 != 0);
            }
            else {
              uVar23 = 0;
              do {
                uVar33 = uVar23;
                uVar23 = uVar33 + 8;
              } while ((uVar36 & 0xfffffff8) != uVar23);
              if (uVar15 != 0) goto LAB_142152e30;
              uVar33 = uVar33 + 7;
            }
            puVar39 = (undefined8 *)(lVar38 + uVar33 * 0xd8);
          }
        }
        puVar20 = puVar20 + 1;
        ppfVar30 = apfStack_3d8;
      } while (puVar20 != puVar22);
    }
  }
  ppuStack_290 = &puStack_c8;
  pcStack_288 = pdb_1421538d0;
  *(undefined8 *)((longlong)ppfVar30 + -8) = 0x142152e79;
  pdb_140f60760(auStack_140,&UNK_143462f58,&ppuStack_290);
  fStack_33c = SQRT((pfVar26[2] - fVar45) * (pfVar26[2] - fVar45) +
                    (pfVar26[1] - fVar46) * (pfVar26[1] - fVar46) +
                    (*pfVar26 - fVar47) * (*pfVar26 - fVar47));
  auStack_340[0] = 5;
  uStack_1e0 = uStack_1e0 & 0xffffffffffffff00;
  uStack_a2 = 1;
  *(undefined8 *)((longlong)ppfVar30 + -8) = 0x142152edf;
  pdb_140c9dcb0(&ppuStack_290,auStack_340,&uStack_1e0);
  bStack_1e7 = bStack_1e7 | 2;
  *(undefined8 *)((longlong)ppfVar30 + -8) = 0x142152efd;
  pub_142e32760(auStack_340,&ppuStack_290,0xb0);
  uStack_a3 = 1;
  *(undefined8 *)((longlong)ppfVar30 + -8) = 0x142152f10;
  pdb_140c9dee0(&ppuStack_290);
  if (puVar39 == (undefined8 *)0x0) {
    uStack_398 = 0;
  }
  auStack_3a0[0] = (uint)(puVar39 == (undefined8 *)0x0);
  uStack_a3 = 1;
  *(undefined8 *)((longlong)ppfVar30 + -8) = 0x142152f46;
  pdb_140c9de10(&uStack_1e0,&ppuStack_290,auStack_3a0);
  ppuStack_290 = (undefined8 **)CONCAT44(ppuStack_290._4_4_,9);
  uStack_a3 = 1;
  *(undefined8 *)((longlong)ppfVar30 + -8) = 0x142152f6f;
  pdb_140c9df00(auStack_3a0,&uStack_1e0,&ppuStack_290);
  uStack_a3 = 0;
  *(undefined8 *)((longlong)ppfVar30 + -8) = 0x142152f8b;
  pdb_140c9dd20(&ppuStack_290,auStack_340,auStack_3a0);
  uStack_a2 = 1;
  *(undefined8 *)((longlong)ppfVar30 + -8) = 0x142152faa;
  pdb_1428b3820(auStack_340,&ppuStack_290);
  uStack_a2 = 0;
  puVar25 = auStack_140;
  *(undefined8 *)((longlong)ppfVar30 + -8) = 0x142152fc5;
  uStack_1e0 = pdb_1428b3ad0(lVar19,puVar25,auStack_340);
  pfVar26 = (float *)CONCAT71((int7)((ulonglong)pfVar26 >> 8),puVar39 == (undefined8 *)0x0);
  *(undefined8 *)((longlong)ppfVar30 + -8) = 0x142152fe6;
  puStack_1d8 = puVar25;
  bVar12 = pdb_1408ffaf0(&uStack_1e0);
  puVar40 = (uint *)(ulonglong)bStack_a1;
  param_10 = puStack_110;
  if ((puVar39 == (undefined8 *)0x0 & bVar12) == 0) goto LAB_142153431;
code_r0x000142152ffd:
  uVar36 = (uint)puVar40;
  bVar12 = 4;
  if (1 < (byte)puVar40) {
    bVar12 = (byte)puVar40 - 2;
  }
  cVar11 = '\x01';
  pcVar18 = (char *)(&UNK_143462fe8 + *(int *)(&UNK_143462fe8 + (ulonglong)bVar12 * 4));
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar12) {
  case 1:
    uVar4 = *param_11;
    *(undefined8 *)((longlong)ppfVar30 + -8) = 0x14215303c;
    lVar19 = pdb_140b54f80(uVar4,param_10,&UNK_143462f68);
    if (lVar19 == 0) {
      cVar11 = '\x01';
    }
    else {
      *(undefined8 *)((longlong)ppfVar30 + -8) = 0x142153054;
      cVar13 = pdb_1408ff980(lVar19 + 0x29f);
      cVar11 = '\x01';
      if (cVar13 != '\0') {
        cVar11 = (*(uint *)(lVar19 + 600) < 2) + '\x01';
      }
    }
    break;
  case 2:
    cVar11 = '\x03';
    break;
  case 3:
    uVar4 = *param_11;
    *(undefined8 *)((longlong)ppfVar30 + -8) = 0x142153268;
    lVar19 = pdb_140b54f80(uVar4,param_10,&UNK_143462f80);
    uVar4 = *param_12;
    *(undefined8 *)((longlong)ppfVar30 + -8) = 0x14215327a;
    lVar17 = pdb_142153800(uVar4,&puStack_c8);
    if ((lVar19 != 0) && (lVar17 != 0)) {
      uVar4 = *param_8;
      uVar8 = *(undefined8 *)(lVar17 + 8);
      uVar6 = *(undefined8 *)(lVar17 + 0x10);
      uVar14 = *(undefined4 *)(lVar19 + 0x28c);
      *(undefined1 *)((longlong)ppfVar30 + 0x28) = *(undefined1 *)(lVar19 + 0x29c);
      *(undefined4 *)((longlong)ppfVar30 + 0x20) = uVar14;
      *(undefined8 *)((longlong)ppfVar30 + -8) = 0x1421532bf;
      pdb_1409fe300(uVar4,param_10,uVar8,uVar6);
    }
    goto LAB_142153431;
  case 4:
    cVar11 = '\0';
    break;
  case 5:
    puVar31 = (undefined1 *)((longlong)ppfVar30 + -8);
    *(undefined1 **)((longlong)ppfVar30 + -8) = puVar32;
    *(undefined1 **)((longlong)ppfVar30 + -0x10) = (undefined1 *)((longlong)ppfVar30 + -8);
    ppfVar30 = (float **)((longlong)ppfVar30 + -0xb61f);
    goto code_r0x0001421534a1;
  case 6:
    *(char *)((longlong)pfVar26 + 0x13eb03c7) = *(char *)((longlong)pfVar26 + 0x13eb03c7) + '\x01';
    goto code_r0x0001421534c1;
  case 7:
    pcVar18 = (char *)(ulonglong)((int)pcVar18 + 0x43462fe8);
    goto code_r0x0001421534a1;
  case 8:
    *pcVar18 = *pcVar18 + (byte)pcVar18;
    goto code_r0x0001421534b6;
  case 9:
    *(float ***)((longlong)ppfVar30 + -8) = ppfVar30;
    UNK_143462fe8 = UNK_143462fe8 ^ (byte)pcVar18;
    ppfVar30 = (float **)((longlong)ppfVar30 + -8);
    goto code_r0x0001421534a1;
  }
  *(undefined8 *)((longlong)ppfVar30 + -8) = 0x1421533b6;
  pdb_140bc10b0(&ppuStack_290,param_10,cVar11,_DAT_142e36f28);
  *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
  lVar19 = *param_7;
  lVar17 = *(longlong *)(lVar19 + 0x30);
  uVar4 = *(undefined8 *)(lVar19 + 0x40);
  ppuStack_b8 = ppuStack_290;
  pcStack_c0 = pcStack_288;
  if (lVar17 == *(longlong *)(lVar19 + 0x20)) {
    *(undefined8 *)((longlong)ppfVar30 + -8) = 0x1421533f5;
    pdb_142d7ede0(lVar19 + 0x20);
  }
  lVar38 = *(longlong *)(lVar19 + 0x28);
  *(undefined8 ***)(lVar38 + lVar17 * 0x28) = ppuStack_b8;
  *(code **)(lVar38 + 8 + lVar17 * 0x28) = pcStack_c0;
  puVar39 = (undefined8 *)(lVar38 + 0x10 + lVar17 * 0x28);
  *puVar39 = uStack_280;
  puVar39[1] = uStack_278;
  *(undefined8 *)(lVar38 + 0x20 + lVar17 * 0x28) = uVar4;
  *(longlong *)(lVar19 + 0x30) = lVar17 + 1;
  *(longlong *)(lVar19 + 0x40) = *(longlong *)(lVar19 + 0x40) + 1;
LAB_142153431:
  *(undefined8 *)((longlong)ppfVar30 + -8) = 0x14215343d;
  cVar11 = pdb_1408ffa90(&uStack_1e0);
  if (cVar11 != '\0') {
    *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
    param_11 = (undefined8 *)*param_5;
    lVar19 = param_11[6];
    pfVar26 = (float *)param_11[8];
    ppfVar28 = ppfVar30;
    if (lVar19 == param_11[4]) {
      *(undefined8 *)((longlong)ppfVar30 + -8) = 0x14215346f;
      pdb_142d7e980(param_11 + 4);
    }
LAB_14215346f:
    lVar17 = param_11[5];
    *(float **)(lVar17 + lVar19 * 0x10) = pfVar26;
    *(undefined1 *)(lVar17 + 8 + lVar19 * 0x10) = 0;
    param_11[6] = lVar19 + 1;
    param_11[8] = param_11[8] + 1;
    bVar41 = (byte)puVar40 < 2;
    pfVar16 = (float *)(ulonglong)(byte)((byte)puVar40 - 2);
    ppfVar29 = ppfVar28;
code_r0x000142153493:
    uVar36 = (uint)puVar40;
    bVar12 = 4;
    if (!bVar41) {
      bVar12 = (byte)pfVar16;
    }
    pcVar18 = (char *)(ulonglong)bVar12;
    ppfVar30 = ppfVar29;
code_r0x0001421534a1:
    puVar32 = puVar31;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(&UNK_143462ffc + *(int *)(&UNK_143462ffc + (longlong)pcVar18 * 4)) {
    case (undefined *)0x1421534b1:
      lVar19 = 10;
code_r0x0001421534b6:
      iVar34 = (int)lVar19;
      break;
    case (undefined *)0x1421534b8:
      iVar34 = (uVar36 & 0xff) + 3;
      break;
    case (undefined *)0x1421534c1:
code_r0x0001421534c1:
      iVar34 = 0xb;
      puVar31 = puVar32;
      break;
    case (undefined *)0x1421534c8:
      iVar34 = 9;
      break;
    case (undefined *)0x1421534cf:
      iVar34 = 2;
    }
    plVar7 = *(longlong **)(puVar31 + 0x2a8);
    uVar4 = *param_3;
    *(undefined4 *)plVar7[2] = *(undefined4 *)((longlong)plVar7 + 0x1c);
    lVar19 = *plVar7;
    lVar17 = *(longlong *)(lVar19 + 0x30);
    uVar8 = *(undefined8 *)(lVar19 + 0x40);
    if (lVar17 == *(longlong *)(lVar19 + 0x20)) {
      *(undefined8 *)((longlong)ppfVar30 + -8) = 0x142153504;
      pdb_142d7ede0(lVar19 + 0x20);
    }
    lVar38 = *(longlong *)(lVar19 + 0x28);
    *(int *)(lVar38 + lVar17 * 0x28) = iVar34;
    *(undefined8 **)(lVar38 + 8 + lVar17 * 0x28) = param_10;
    *(undefined8 *)(lVar38 + 0x18 + lVar17 * 0x28) = uVar4;
    *(undefined8 *)(lVar38 + 0x20 + lVar17 * 0x28) = uVar8;
    *(longlong *)(lVar19 + 0x30) = lVar17 + 1;
    *(longlong *)(lVar19 + 0x40) = *(longlong *)(lVar19 + 0x40) + 1;
  }
LAB_14215352a:
  return;
}

