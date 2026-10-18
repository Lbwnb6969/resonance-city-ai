// VA 0x140b3c430, PDB extent 4445 bytes
// country_core::systems::wall::shapes::rectangle::ui_edit_rectangle_dims::do_ui_edit_rectangle_dims
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/rectangle/ui_edit_rectangle_dims.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000140b3ef73) overlaps instruction at (ram,0x000140b3ef71)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::shapes::rectangle::ui_edit_rectangle_dims::do_ui_edit_rectangle_dims
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/rectangle/ui_edit_rectangle_dims.rs
   Extent: 4445 */

void pdb_140b3c430(undefined8 *param_1,longlong *param_2,undefined8 *param_3,longlong *param_4,
                  longlong *param_5,undefined8 param_6,longlong *param_7,longlong *param_8,
                  longlong *param_9,undefined8 *param_10)

{
  byte *pbVar1;
  byte *pbVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  ulonglong *puVar11;
  code *pcVar12;
  uint uVar13;
  uint uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  char cVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined *puVar20;
  longlong *plVar21;
  int *piVar22;
  undefined *puVar23;
  undefined8 uVar24;
  uint uVar25;
  longlong lVar26;
  longlong lVar27;
  ulonglong uVar28;
  longlong *plVar29;
  longlong *plVar30;
  int *piVar31;
  ushort uVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  longlong *plVar36;
  longlong *plVar37;
  longlong *plVar38;
  longlong *plVar39;
  longlong *plVar40;
  longlong *plVar41;
  bool bVar42;
  bool bVar43;
  bool bVar44;
  byte bVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar52;
  float fVar53;
  undefined1 auVar51 [16];
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar59;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar62;
  float fVar63;
  undefined4 unaff_XMM12_Dc;
  undefined4 unaff_XMM12_Dd;
  undefined4 unaff_XMM14_Da;
  undefined4 unaff_XMM14_Db;
  undefined8 uStack_278;
  undefined8 *puStack_270;
  float fStack_264;
  int iStack_260;
  undefined8 *puStack_25c;
  undefined1 *puStack_254;
  longlong **pplStack_24c;
  undefined8 *puStack_244;
  undefined8 uStack_23c;
  undefined8 uStack_234;
  int iStack_22c;
  undefined1 auStack_228 [12];
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined1 *puStack_210;
  longlong **pplStack_208;
  undefined8 uStack_1f0;
  longlong lStack_1e8;
  undefined8 *puStack_1e0;
  longlong *plStack_1d8;
  undefined4 *puStack_1d0;
  undefined4 *puStack_1c8;
  longlong *plStack_1c0;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  longlong *plStack_1a8;
  longlong *plStack_1a0;
  longlong lStack_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  longlong lStack_188;
  longlong lStack_180;
  undefined4 uStack_178;
  float fStack_174;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  longlong lStack_158;
  undefined1 *puStack_150;
  longlong **pplStack_148;
  longlong *plStack_140;
  longlong lStack_138;
  undefined1 *puStack_130;
  undefined8 uStack_128;
  longlong *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  longlong lStack_f8;
  undefined8 uStack_f0;
  int iStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  uStack_e0 = 0xfffffffffffffffe;
  lStack_198 = *param_7;
  lStack_180 = param_7[4];
  puVar9 = (undefined4 *)param_7[6];
  uStack_18c = *(undefined4 *)((longlong)param_7 + 0x3c);
  lStack_188 = param_7[8];
  puVar10 = (undefined4 *)param_7[10];
  uVar7 = *(undefined4 *)((longlong)param_7 + 0x5c);
  plStack_1c0 = param_4;
  plStack_1a0 = param_3;
  uStack_70 = unaff_XMM12_Dc;
  uStack_6c = unaff_XMM12_Dd;
  uStack_58 = unaff_XMM14_Da;
  uStack_54 = unaff_XMM14_Db;
  cVar17 = pdb_140e94b40();
  plStack_120 = (longlong *)CONCAT71(plStack_120._1_7_,cVar17);
  puStack_1e0 = param_1;
  plStack_1d8 = param_2;
  puStack_1d0 = puVar10;
  puStack_1c8 = puVar9;
  uStack_190 = uVar7;
  if (cVar17 == '\0') {
    uStack_1f0 = 0;
    goto LAB_140b3c6b5;
  }
  plVar38 = (longlong *)&UNK_143058b4f;
  plVar30 = (longlong *)0x61;
  uVar28 = 0x61;
  lVar18 = pdb_140b413c0(&UNK_143058b4f);
  if (lVar18 == 1) {
    if (0x61 < uVar28) {
LAB_140b3d21a:
      pdb_142dc8070(&UNK_143058b4f,0x61,0);
LAB_140b3d23a:
      pdb_142dc8070(&UNK_143058b4f,0x61);
code_r0x000140b3d25e:
      pdb_142d8e040();
                    /* WARNING: Does not return */
      pcVar12 = (code *)invalidInstructionException();
      (*pcVar12)();
    }
    plVar38 = (longlong *)&UNK_143058b4f;
    uVar19 = pdb_140b413c0(&UNK_143058b4f);
    if ((uVar19 & 1) != 0) {
      if (0x61 < uVar28 + 2) goto LAB_140b3d23a;
      plVar30 = (longlong *)(0x5f - uVar28);
      plVar38 = (longlong *)(&UNK_143058b51 + uVar28);
    }
  }
  puVar20 = &UNK_1430584d7;
  plVar36 = (longlong *)&UNK_143058488;
  do {
    pbVar1 = puVar20 + -1;
    uVar25 = (uint)(char)*pbVar1;
    if ((int)uVar25 < 0) {
      bVar6 = puVar20[-2];
      if ((char)bVar6 < -0x40) {
        bVar45 = puVar20[-3];
        if ((char)bVar45 < -0x40) {
          pbVar2 = puVar20 + -4;
          puVar20 = puVar20 + -4;
          uVar25 = bVar45 & 0x3f | (*pbVar2 & 7) << 6;
        }
        else {
          puVar20 = puVar20 + -3;
          uVar25 = bVar45 & 0xf;
        }
        uVar25 = bVar6 & 0x3f | uVar25 << 6;
      }
      else {
        puVar20 = puVar20 + -2;
        uVar25 = bVar6 & 0x1f;
      }
      uVar25 = (uint)(*pbVar1 & 0x3f) | uVar25 << 6;
      if (uVar25 != 0x5c) goto LAB_140b3c609;
LAB_140b3c626:
      if ((undefined *)0x4f < puVar20 + -0x143058487) {
        pdb_142dc8070(&UNK_143058488,0x4f,puVar20 + -0x143058487,0x4f,&UNK_143058c58);
        goto LAB_140b3d21a;
      }
      plVar40 = (longlong *)(0x4e - (longlong)(puVar20 + -0x143058488));
      plVar36 = (longlong *)(puVar20 + 1);
      goto LAB_140b3c64a;
    }
    puVar20 = puVar20 + -1;
    if (uVar25 == 0x5c) goto LAB_140b3c626;
LAB_140b3c609:
    if (uVar25 == 0x2f) goto LAB_140b3c626;
  } while (puVar20 != &UNK_143058488);
  plVar40 = (longlong *)0x4f;
LAB_140b3c64a:
  plVar21 = (longlong *)pdb_140e97000();
  if ((char)plVar21[0xd] != '\x01') goto LAB_140b3d174;
  do {
    if (*plVar21 == 0) {
      *plVar21 = -1;
      plStack_140 = plVar21;
      lStack_1e8 = pdb_140e94f10(plVar21 + 1,plVar38,plVar30,plVar36,plVar40,1,0);
      *plStack_140 = *plStack_140 + 1;
      uStack_1f0 = 1;
      plStack_140 = (longlong *)lStack_1e8;
LAB_140b3c6b5:
      lVar18 = param_10[1];
      uVar28 = *(ulonglong *)*param_10;
      plVar36 = (longlong *)0x0;
      plVar38 = (longlong *)(uVar28 - *(ulonglong *)(lVar18 + 0x18));
      if (uVar28 < *(ulonglong *)(lVar18 + 0x18)) {
        plVar38 = plVar36;
      }
      plVar21 = (longlong *)(uVar28 - *(ulonglong *)(lVar18 + 0x38));
      if (uVar28 < *(ulonglong *)(lVar18 + 0x38)) {
        plVar21 = plVar36;
      }
      plVar39 = *(longlong **)(lVar18 + 0x10);
      plVar37 = *(longlong **)(lVar18 + 0x30);
      bVar42 = plVar37 < plVar21;
      bVar44 = (longlong *)((longlong)plVar37 - (longlong)plVar21) == (longlong *)0x0;
      plVar30 = (longlong *)((longlong)plVar37 - (longlong)plVar21);
      if (bVar42) {
        plVar30 = plVar36;
      }
      bVar43 = plVar39 < plVar38;
      plVar41 = (longlong *)((longlong)plVar39 - (longlong)plVar38);
      plVar40 = plVar41;
      if (bVar43) {
        plVar40 = plVar36;
      }
      lVar35 = *(longlong *)(lVar18 + 8);
      plVar29 = (longlong *)((longlong)plVar30 + (longlong)plVar40);
      if (!bVar43 && plVar41 != (longlong *)0x0 || !bVar42 && !bVar44) {
        plVar29 = plVar36;
      }
      lVar34 = *(longlong *)(lVar18 + 0x28);
      *(ulonglong *)*param_10 = *(longlong *)(lVar18 + 0x40) - (longlong)plVar29;
      puVar4 = uStack_118;
      if (!bVar43 && plVar41 != (longlong *)0x0 || !bVar42 && !bVar44) {
        lVar34 = lVar34 + (longlong)plVar21 * 0x70;
        lVar35 = lVar35 + (longlong)plVar38 * 0x70;
        if (plVar39 < plVar38) {
          lVar35 = 8;
        }
        piVar31 = (int *)0x0;
        if (plVar38 < plVar39) {
          piVar31 = (int *)(lVar35 + -0x70 + (longlong)plVar40 * 0x70);
        }
        if (plVar37 < plVar21) {
          lVar34 = 8;
        }
        piVar22 = (int *)(lVar34 + -0x70 + (longlong)plVar30 * 0x70);
        if (plVar37 <= plVar21) {
          piVar22 = piVar31;
        }
        bVar6 = *(byte *)(piVar22 + 0x18);
        plVar36 = (longlong *)(ulonglong)bVar6;
        lVar18 = *(longlong *)(piVar22 + 0xe);
        plVar30 = *(longlong **)(piVar22 + 0x16);
        iVar8 = *piVar22;
        iStack_e8 = piVar22[0xd];
        lStack_f8 = *(longlong *)(piVar22 + 9);
        uStack_f0 = *(undefined8 *)(piVar22 + 0xb);
        uStack_108 = *(longlong ***)(piVar22 + 5);
        uStack_100 = *(undefined8 **)(piVar22 + 7);
        puVar4 = *(undefined8 **)(piVar22 + 1);
        uStack_110 = *(undefined1 **)(piVar22 + 3);
        if (iVar8 != 2) {
          lStack_138 = *(longlong *)(piVar22 + 0x10);
          puStack_130 = *(undefined1 **)(piVar22 + 0x12);
          uStack_128 = *(longlong ***)(piVar22 + 0x14);
          plVar40 = (longlong *)*puStack_1e0;
          uStack_118._0_4_ = (undefined4)lVar18;
          uStack_118._4_4_ = (float)((ulonglong)lVar18 >> 0x20);
          iStack_260 = iVar8;
          puStack_25c = puVar4;
          puStack_254 = uStack_110;
          pplStack_24c = uStack_108;
          puStack_244 = uStack_100;
          uStack_23c = lStack_f8;
          uStack_234 = uStack_f0;
          iStack_22c = iStack_e8;
          plStack_1a8 = plVar30;
          if (plVar40[3] == 0) {
LAB_140b3cb7b:
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_1430584f0);
          }
          uVar28 = pdb_1400af0a0(plVar40 + 4,&uStack_118);
          lVar35 = *plVar40;
          bVar45 = (byte)(uVar28 >> 0x39);
          auVar51 = ZEXT216(CONCAT11(bVar45,bVar45));
          auVar51 = pshuflw(auVar51,auVar51,0);
          lVar34 = 0;
          do {
            uVar28 = uVar28 & plVar40[1];
            auVar61 = *(undefined1 (*) [16])(lVar35 + uVar28);
            auVar60[0] = -(auVar61[0] == auVar51[0]);
            auVar60[1] = -(auVar61[1] == auVar51[1]);
            auVar60[2] = -(auVar61[2] == auVar51[2]);
            auVar60[3] = -(auVar61[3] == auVar51[3]);
            auVar60[4] = -(auVar61[4] == auVar51[4]);
            auVar60[5] = -(auVar61[5] == auVar51[5]);
            auVar60[6] = -(auVar61[6] == auVar51[6]);
            auVar60[7] = -(auVar61[7] == auVar51[7]);
            auVar60[8] = -(auVar61[8] == auVar51[0]);
            auVar60[9] = -(auVar61[9] == auVar51[1]);
            auVar60[10] = -(auVar61[10] == auVar51[2]);
            auVar60[0xb] = -(auVar61[0xb] == auVar51[3]);
            auVar60[0xc] = -(auVar61[0xc] == auVar51[4]);
            auVar60[0xd] = -(auVar61[0xd] == auVar51[5]);
            auVar60[0xe] = -(auVar61[0xe] == auVar51[6]);
            auVar60[0xf] = -(auVar61[0xf] == auVar51[7]);
            uVar32 = (ushort)(SUB161(auVar60 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar60 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar60 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar60 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar60 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar60 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar60 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar60 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar60 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar60 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar60 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar60 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar60[0xf] >> 7) << 0xf;
            uVar25 = (uint)uVar32;
            if (uVar32 != 0) {
LAB_140b3c917:
              uVar13 = 0;
              for (uVar14 = uVar25; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
                uVar13 = uVar13 + 1;
              }
              lVar33 = (uVar13 + uVar28 & plVar40[1]) * -0x2b0;
              if (lVar18 != *(longlong *)(lVar35 + -0x2b0 + lVar33)) goto code_r0x000140b3c936;
              lVar35 = lVar35 + lVar33;
              uStack_118 = (undefined8 *)CONCAT44(uStack_118._4_4_,(undefined4)uStack_118);
              if ((*(ulonglong *)(lVar35 + -0x298) < 2) ||
                 (fVar63 = 0.0,
                 uStack_118 = (undefined8 *)CONCAT44(uStack_118._4_4_,(undefined4)uStack_118),
                 *(float *)(lVar35 + -0x278) <= 0.0)) goto LAB_140b3d1a9;
              uStack_118._0_4_ = pdb_140df1760(&lStack_138,plVar30);
              uStack_118._4_4_ = fVar63;
              pdb_140df4520(auStack_228,&uStack_118);
              bVar45 = 3;
              if (1 < bVar6) {
                bVar45 = bVar6 - 2;
              }
              puVar20 = &UNK_143058d08;
              puVar23 = &UNK_143058d08 + *(int *)(&UNK_143058d08 + (ulonglong)bVar45 * 4);
              puVar15 = uStack_170;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
              switch(bVar45) {
              case 0:
                break;
              case 1:
                *(undefined4 *)plStack_1d8[2] = *(undefined4 *)((longlong)plStack_1d8 + 0x1c);
                *(undefined1 *)(*plStack_1d8 + 0x1e0) = 1;
                uVar7 = uStack_23c._4_4_;
                fVar46 = (float)pdb_140df1760(&lStack_138,plVar30);
                fVar50 = (float)uStack_23c;
                fVar53 = (float)uStack_234;
                uStack_108._0_4_ = SUB84(uStack_128,0);
                uStack_108._4_4_ = (undefined4)((ulonglong)uStack_128 >> 0x20);
                uStack_118._0_4_ = (undefined4)lStack_138;
                uStack_118._4_4_ = (float)((ulonglong)lStack_138 >> 0x20);
                uStack_110._0_4_ = SUB84(puStack_130,0);
                uStack_110._4_4_ = (float)((ulonglong)puStack_130 >> 0x20);
                fVar54 = fVar63;
                fVar47 = (float)pdb_140df3e10(&uStack_118,plVar30);
                fVar55 = fVar54;
                fVar48 = (float)pdb_140df3e10(&uStack_118,(undefined *)((longlong)plVar30 + 1));
                fVar52 = fVar55;
                fVar49 = (float)pdb_140df1760(&uStack_118,plVar30);
                fVar56 = fVar48 - fVar47;
                fVar59 = fVar55 - fVar54;
                fVar62 = fVar59 * fVar59 + fVar56 * fVar56;
                if (fVar62 <= _DAT_143006dc0) {
                  fVar62 = _DAT_143006dc0;
                }
                fVar62 = ((fVar53 - fVar54) * fVar59 + (fVar50 - fVar47) * fVar56) / fVar62;
                fVar49 = fVar49 * (fVar50 - ((_DAT_142e36f28 - fVar62) * fVar47 + fVar62 * fVar48));
                fVar52 = fVar52 * (fVar53 - ((_DAT_142e36f28 - fVar62) * fVar54 + fVar62 * fVar55));
                uStack_118._0_4_ = (undefined4)lStack_138;
                uStack_118._4_4_ = (float)((ulonglong)lStack_138 >> 0x20);
                *(undefined4 *)plStack_1a0[2] = *(undefined4 *)((longlong)plStack_1a0 + 0x1c);
                puVar9 = (undefined4 *)*plStack_1a0;
                *puVar9 = 2;
                puVar9[1] = uVar7;
                *(longlong *)(puVar9 + 2) = lVar18;
                *(longlong **)(puVar9 + 4) = plVar30;
                *(longlong *)(puVar9 + 6) = lStack_138;
                *(undefined1 **)(puVar9 + 8) = puStack_130;
                *(longlong ***)(puVar9 + 10) = uStack_128;
                *(longlong *)(puVar9 + 0xc) = lStack_138;
                *(undefined1 **)(puVar9 + 0xe) = puStack_130;
                *(longlong ***)(puVar9 + 0x10) = uStack_128;
                *(ulonglong *)(puVar9 + 0x12) =
                     CONCAT44((fVar52 + fVar49) * fVar63,(fVar52 + fVar49) * fVar46);
                uStack_178 = (undefined4)uStack_118;
                fStack_174 = uStack_118._4_4_;
                uStack_110 = puStack_130;
                uStack_108 = uStack_128;
                puVar15 = puStack_130;
                uStack_168 = uStack_128;
                break;
              case 2:
                if (*(char *)(lVar35 + -0x1a0) != '\0') {
                  uVar7 = *(undefined4 *)(lVar35 + -0x24);
                  uVar5 = *(undefined4 *)(lVar35 + -0x19c);
                  uStack_108._3_1_ = SUB81(uStack_128,0);
                  uStack_108._4_4_ = (undefined4)((ulonglong)uStack_128 >> 8);
                  uStack_100._0_3_ = (undefined3)((ulonglong)uStack_128 >> 0x28);
                  uStack_118._3_1_ = (undefined1)lStack_138;
                  uStack_118._4_4_ = (float)((ulonglong)lStack_138 >> 8);
                  uStack_110._0_3_ = (undefined3)((ulonglong)lStack_138 >> 0x28);
                  uStack_110._3_1_ = SUB81(puStack_130,0);
                  uStack_110._4_4_ = (float)((ulonglong)puStack_130 >> 8);
                  uStack_108._0_3_ = (undefined3)((ulonglong)puStack_130 >> 0x28);
                  *(int *)param_9[2] = *(int *)((longlong)param_9 + 0x1c);
                  lVar34 = *param_9;
                  lVar33 = *(longlong *)(lVar34 + 0x30);
                  uVar24 = *(undefined8 *)(lVar34 + 0x40);
                  if (lVar33 == *(longlong *)(lVar34 + 0x20)) {
                    pdb_142d7ee50(lVar34 + 0x20);
                  }
                  lVar27 = *(longlong *)(lVar34 + 0x28);
                  lVar26 = lVar33 * 0x40;
                  *(undefined1 *)(lVar27 + lVar26) = 1;
                  puVar4 = (undefined8 *)(lVar27 + 1 + lVar26);
                  *puVar4 = CONCAT44(uStack_118._4_4_,(undefined4)uStack_118);
                  puVar4[1] = CONCAT44(uStack_110._4_4_,(float)uStack_110);
                  puVar4 = (undefined8 *)(lVar27 + 0xc + lVar26);
                  *puVar4 = CONCAT35((undefined3)uStack_108,
                                     CONCAT41(uStack_110._4_4_,uStack_110._3_1_));
                  puVar4[1] = CONCAT35((undefined3)uStack_100,
                                       CONCAT41(uStack_108._4_4_,uStack_108._3_1_));
                  *(undefined4 *)(lVar27 + 0x1c + lVar26) = uVar7;
                  *(undefined4 *)(lVar27 + 0x20 + lVar26) = uVar5;
                  *(undefined8 *)(lVar27 + 0x28 + lVar26) = 1;
                  *(longlong *)(lVar27 + 0x30 + lVar26) = lVar18;
                  *(undefined8 *)(lVar27 + 0x38 + lVar26) = uVar24;
                  *(longlong *)(lVar34 + 0x30) = lVar33 + 1;
                  *(longlong *)(lVar34 + 0x40) = *(longlong *)(lVar34 + 0x40) + 1;
                  uStack_108._0_4_ = SUB84(uStack_128,0);
                  uStack_108._4_4_ = (undefined4)((ulonglong)uStack_128 >> 0x20);
                  uStack_118._0_4_ = (undefined4)lStack_138;
                  uStack_118._4_4_ = (float)((ulonglong)lStack_138 >> 0x20);
                  uStack_110._0_4_ = SUB84(puStack_130,0);
                  uStack_110._4_4_ = (float)((ulonglong)puStack_130 >> 0x20);
                  uVar7 = *(undefined4 *)(lVar35 + -0x24);
                  *(int *)param_8[2] = *(int *)((longlong)param_8 + 0x1c);
                  lVar35 = *param_8;
                  lVar34 = *(longlong *)(lVar35 + 0x30);
                  plVar40 = *(longlong **)(lVar35 + 0x40);
                  puVar15 = uStack_170;
                  if (lVar34 == *(longlong *)(lVar35 + 0x20)) {
                    pdb_142d7e7c0(lVar35 + 0x20);
                    puVar15 = uStack_170;
                  }
                  lVar33 = *(longlong *)(lVar35 + 0x28);
                  lVar27 = lVar34 * 0x30;
                  *(undefined4 *)(lVar33 + lVar27) = 1;
                  puVar4 = (undefined8 *)(lVar33 + 4 + lVar27);
                  *puVar4 = CONCAT44(uStack_118._4_4_,(undefined4)uStack_118);
                  *(float *)(puVar4 + 1) = (float)uStack_110;
                  *(float *)((longlong)puVar4 + 0xc) = uStack_110._4_4_;
                  *(ulonglong *)(lVar33 + 0x14 + lVar27) =
                       CONCAT44(uStack_108._4_4_,(undefined4)uStack_108);
                  uVar5 = _UNK_14303a934;
                  puVar9 = (undefined4 *)(lVar33 + 0x1c + lVar27);
                  *puVar9 = uVar7;
                  puVar9[1] = uVar5;
                  *(undefined1 *)(lVar33 + 0x24 + lVar27) = 0;
                  goto code_r0x000140b3cd89;
                }
                goto code_r0x000140b3d25e;
              case 3:
                *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
                lVar34 = *param_5;
                lVar33 = *(longlong *)(lVar34 + 0x30);
                uVar24 = *(undefined8 *)(lVar34 + 0x40);
                if (lVar33 == *(longlong *)(lVar34 + 0x20)) {
                  pdb_142d7e8a0(lVar34 + 0x20);
                }
                *(undefined8 *)(*(longlong *)(lVar34 + 0x28) + lVar33 * 8) = uVar24;
                *(longlong *)(lVar34 + 0x30) = lVar33 + 1;
                *(longlong *)(lVar34 + 0x40) = *(longlong *)(lVar34 + 0x40) + 1;
                uStack_108._0_4_ = SUB84(uStack_128,0);
                uStack_108._4_4_ = (undefined4)((ulonglong)uStack_128 >> 0x20);
                uStack_118._0_4_ = (undefined4)lStack_138;
                uStack_118._4_4_ = (float)((ulonglong)lStack_138 >> 0x20);
                uStack_110._0_4_ = SUB84(puStack_130,0);
                uStack_110._4_4_ = (float)((ulonglong)puStack_130 >> 0x20);
                uVar7 = *(undefined4 *)(lVar35 + -0x24);
                *(int *)param_8[2] = *(int *)((longlong)param_8 + 0x1c);
                lVar35 = *param_8;
                lVar34 = *(longlong *)(lVar35 + 0x30);
                plVar40 = *(longlong **)(lVar35 + 0x40);
                if (lVar34 == *(longlong *)(lVar35 + 0x20)) {
                  pdb_142d7e7c0(lVar35 + 0x20);
                }
                lVar33 = *(longlong *)(lVar35 + 0x28);
                lVar27 = lVar34 * 0x30;
                *(undefined4 *)(lVar33 + lVar27) = 1;
                puVar4 = (undefined8 *)(lVar33 + 4 + lVar27);
                *puVar4 = CONCAT44(uStack_118._4_4_,(undefined4)uStack_118);
                *(float *)(puVar4 + 1) = (float)uStack_110;
                *(float *)((longlong)puVar4 + 0xc) = uStack_110._4_4_;
                *(ulonglong *)(lVar33 + 0x14 + lVar27) =
                     CONCAT44(uStack_108._4_4_,(undefined4)uStack_108);
                uVar5 = _UNK_14303a934;
                puVar9 = (undefined4 *)(lVar33 + 0x1c + lVar27);
                *puVar9 = uVar7;
                puVar9[1] = uVar5;
                *(undefined1 *)(lVar33 + 0x24 + lVar27) = 1;
                puVar15 = uStack_170;
code_r0x000140b3cd89:
                *(longlong **)(lVar33 + 0x28 + lVar27) = plVar40;
                *(longlong *)(lVar35 + 0x30) = lVar34 + 1;
                *(longlong *)(lVar35 + 0x40) = *(longlong *)(lVar35 + 0x40) + 1;
                break;
              case 4:
                *(longlong **)
                 ((longlong)*(int *)(&UNK_143058d08 + (ulonglong)bVar45 * 4) + 0x2860b1a38) =
                     param_8;
                plVar30[6] = lVar18 + 1;
                plVar30[8] = plVar30[8] + 1;
                goto code_r0x000140b3f69c;
              case 5:
                goto code_r0x000140b3ed3e;
              case 6:
                goto LAB_140b3ef71;
              case 7:
                param_8 = (longlong *)((longlong)param_8 + 1);
                *(longlong **)(lVar18 + 0x30) = param_8;
                *(longlong *)(lVar18 + 0x40) = *(longlong *)(lVar18 + 0x40) + 1;
code_r0x000140b3f69c:
                if ((char)uStack_170 == '\0') {
                  return;
                }
                plVar38 = (longlong *)pdb_140e97000();
                if ((char)plVar38[0xd] != '\x01') {
                  plVar38 = (longlong *)pdb_142d8ec20(plVar38,0);
                  if (plVar38 == (longlong *)0x0) goto LAB_140b3f716;
                }
                if (*plVar38 != 0) goto LAB_140b3f6e2;
                *plVar38 = -1;
                uStack_170._0_4_ = SUB84(plVar38,0);
                uStack_170._4_4_ = (float)((ulonglong)plVar38 >> 0x20);
                pdb_140e95370(plVar38 + 1,plStack_1a0);
                goto code_r0x000140b3ebbd;
              default:
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              uStack_170._4_4_ = (float)((ulonglong)puVar15 >> 0x20);
              uStack_170._0_4_ = SUB84(puVar15,0);
              *(undefined4 *)plStack_1a0[2] = *(undefined4 *)((longlong)plStack_1a0 + 0x1c);
              plVar30 = (longlong *)*plStack_1a0;
              puVar16 = uStack_110;
              if ((int)*plVar30 == 2) {
                uStack_118 = &uStack_23c;
                uStack_100 = &uStack_128;
                lStack_f8 = (longlong)&uStack_128 + 4;
                uStack_110 = auStack_228;
                uStack_108 = &plStack_1a8;
                uStack_178 = (undefined4)_UNK_143057f20;
                fStack_174 = (float)((ulonglong)_UNK_143057f20 >> 0x20);
                uStack_170._0_4_ = (float)((uint)(float)uStack_170 & 0xffffff00);
                pdb_1419bd5f0((longlong)&uStack_278 + 4,param_6,bVar6,&uStack_118,&uStack_178);
                puVar15 = (undefined1 *)CONCAT44(uStack_170._4_4_,(float)uStack_170);
                puVar16 = uStack_110;
                if (uStack_278._4_4_ == 1) {
                  pplStack_148 = uStack_128;
                  lStack_158 = lStack_138;
                  puStack_150 = puStack_130;
                  fVar63 = fStack_264 -
                           *(float *)((longlong)&pplStack_148 +
                                     (ulonglong)
                                     (((ulonglong)((longlong)plStack_1a8 + -1) & 0xfffffffffffffffd)
                                     == 0) * 4);
                  pdb_140df1c80(&lStack_158);
                  uStack_108._4_4_ = SUB84(pplStack_148,0);
                  uStack_100._0_4_ = (undefined4)((ulonglong)pplStack_148 >> 0x20);
                  uStack_118._4_4_ = (float)lStack_158;
                  uStack_110._0_4_ = (float)((ulonglong)lStack_158 >> 0x20);
                  uStack_110._4_4_ = SUB84(puStack_150,0);
                  uStack_108._0_4_ = (undefined4)((ulonglong)puStack_150 >> 0x20);
                  uStack_118._0_4_ = 1;
                  cVar17 = pdb_140b404c0(lStack_198,&uStack_118);
                  if (cVar17 == '\0') {
                    *puStack_1c8 = uStack_18c;
                    lVar35 = *(longlong *)(lStack_180 + 0x30);
                    uVar24 = *(undefined8 *)(lStack_180 + 0x40);
                    if (lVar35 == *(longlong *)(lStack_180 + 0x20)) {
                      pdb_142d7e8a0(lStack_180 + 0x20);
                    }
                    *(undefined8 *)(*(longlong *)(lStack_180 + 0x28) + lVar35 * 8) = uVar24;
                    *(longlong *)(lStack_180 + 0x30) = lVar35 + 1;
                    *(longlong *)(lStack_180 + 0x40) = *(longlong *)(lStack_180 + 0x40) + 1;
                    *puStack_1d0 = uStack_190;
                    lVar35 = *(longlong *)(lStack_188 + 0x30);
                    plVar40 = *(longlong **)(lStack_188 + 0x40);
                    if (lVar35 == *(longlong *)(lStack_188 + 0x20)) {
                      pdb_142d7e8a0(lStack_188 + 0x20);
                    }
                    *(longlong **)(*(longlong *)(lStack_188 + 0x28) + lVar35 * 8) = plVar40;
                    *(longlong *)(lStack_188 + 0x30) = lVar35 + 1;
                    *(longlong *)(lStack_188 + 0x40) = *(longlong *)(lStack_188 + 0x40) + 1;
                    uStack_168._4_4_ = (undefined4)plVar30[8];
                    uStack_160 = (undefined4)((ulonglong)plVar30[8] >> 0x20);
                    fStack_174 = (float)plVar30[6];
                    uStack_170._0_4_ = (float)((ulonglong)plVar30[6] >> 0x20);
                    uStack_170._4_4_ = (float)plVar30[7];
                    uStack_168._0_4_ = (undefined4)((ulonglong)plVar30[7] >> 0x20);
                    uStack_178 = 1;
                    uStack_108._4_4_ = SUB84(pplStack_148,0);
                    uStack_100._0_4_ = (undefined4)((ulonglong)pplStack_148 >> 0x20);
                    uStack_118._4_4_ = (float)lStack_158;
                    uStack_110._0_4_ = (float)((ulonglong)lStack_158 >> 0x20);
                    uStack_110._4_4_ = SUB84(puStack_150,0);
                    uStack_108._0_4_ = (undefined4)((ulonglong)puStack_150 >> 0x20);
                    uStack_118._0_4_ = 1;
                    pdb_140b40890(&uStack_21c,lStack_198,&uStack_178,&uStack_118);
                    if ((char)uStack_21c == '\0') {
                    /* WARNING: Subroutine does not return */
                      pdb_142dc83d0(&UNK_1430432d8,0x29,&UNK_143043328);
                    }
                    pplStack_148 = pplStack_208;
                    lStack_158 = CONCAT44(uStack_214,uStack_218);
                    puStack_150 = puStack_210;
                  }
                  puVar15 = (undefined1 *)CONCAT44(uStack_170._4_4_,(float)uStack_170);
                  puVar16 = (undefined1 *)CONCAT44(uStack_110._4_4_,(float)uStack_110);
                  uStack_110._0_4_ = SUB84(puStack_150,0);
                  uStack_110._4_4_ = (float)((ulonglong)puStack_150 >> 0x20);
                  fVar50 = (float)uStack_110 - (float)plVar30[7];
                  fVar53 = uStack_110._4_4_ - (float)((ulonglong)plVar30[7] >> 0x20);
                  if (0.0 < fVar53 * fVar53 + fVar50 * fVar50) {
                    plVar30[8] = (longlong)pplStack_148;
                    plVar30[6] = lStack_158;
                    plVar30[7] = (longlong)puStack_150;
                    uStack_108._0_4_ = SUB84(pplStack_148,0);
                    uStack_108._4_4_ = (undefined4)((ulonglong)pplStack_148 >> 0x20);
                    uStack_118._0_4_ = (undefined4)lStack_158;
                    uStack_118._4_4_ = (float)((ulonglong)lStack_158 >> 0x20);
                    pdb_140df4540(&uStack_21c,plVar30 + 4);
                    uStack_168._0_4_ = (undefined4)uStack_108;
                    uStack_168._4_4_ = uStack_108._4_4_;
                    uStack_178 = (undefined4)uStack_118;
                    fStack_174 = uStack_118._4_4_;
                    uStack_170._0_4_ = (float)uStack_110;
                    uStack_170._4_4_ = uStack_110._4_4_;
                    uStack_1b8 = CONCAT44(uStack_218,uStack_21c);
                    uStack_1b0 = uStack_214;
                    *(undefined4 *)plStack_1c0[2] = *(undefined4 *)((longlong)plStack_1c0 + 0x1c);
                    lVar35 = *plStack_1c0;
                    lVar34 = *(longlong *)(lVar35 + 0x30);
                    plVar40 = *(longlong **)(lVar35 + 0x40);
                    if (lVar34 == *(longlong *)(lVar35 + 0x20)) {
                      pdb_142d7ee50(lVar35 + 0x20);
                    }
                    puVar16 = (undefined1 *)CONCAT44(uStack_110._4_4_,(float)uStack_110);
                    uVar25 = (uint)fVar63 & _DAT_142e377e0;
                    lVar33 = *(longlong *)(lVar35 + 0x28);
                    lVar27 = lVar34 * 0x40;
                    *(longlong **)(lVar33 + lVar27) = plVar40;
                    *(longlong *)(lVar33 + 8 + lVar27) = lVar18;
                    puVar15 = (undefined1 *)CONCAT44(uStack_170._4_4_,(float)uStack_170);
                    puVar4 = (undefined8 *)(lVar33 + 0x10 + lVar27);
                    *puVar4 = CONCAT44(fStack_174,uStack_178);
                    puVar4[1] = puVar15;
                    *(longlong ***)(lVar33 + 0x20 + lVar27) = uStack_168;
                    *(undefined8 *)(lVar33 + 0x28 + lVar27) = uStack_1b8;
                    *(undefined4 *)(lVar33 + 0x30 + lVar27) = uStack_1b0;
                    *(uint *)(lVar33 + 0x34 + lVar27) = uVar25;
                    *(undefined1 *)(lVar33 + 0x38 + lVar27) = 0;
                    plVar30 = (longlong *)(lVar34 + 1);
                    *(longlong **)(lVar35 + 0x30) = plVar30;
                    *(longlong *)(lVar35 + 0x40) = *(longlong *)(lVar35 + 0x40) + 1;
                  }
                }
              }
              if ((char)plStack_120 == '\0') {
                return;
              }
              uStack_110 = puVar16;
              uStack_170 = puVar15;
              plVar21 = (longlong *)pdb_140e97000();
              if ((char)plVar21[0xd] != '\x01') {
                plVar21 = (longlong *)pdb_142d8ec20(plVar21,0);
                if (plVar21 == (longlong *)0x0) goto LAB_140b3d19c;
              }
              plVar38 = param_8;
              if (*plVar21 != 0) goto LAB_140b3d168;
              *plVar21 = -1;
              plStack_120 = plVar21;
              pdb_140e95370(plVar21 + 1,plStack_140);
              goto code_r0x000140b3c7eb;
            }
LAB_140b3c943:
            auVar57[0] = -(auVar61[0] == -1);
            auVar57[1] = -(auVar61[1] == -1);
            auVar57[2] = -(auVar61[2] == -1);
            auVar57[3] = -(auVar61[3] == -1);
            auVar57[4] = -(auVar61[4] == -1);
            auVar57[5] = -(auVar61[5] == -1);
            auVar57[6] = -(auVar61[6] == -1);
            auVar57[7] = -(auVar61[7] == -1);
            auVar57[8] = -(auVar61[8] == -1);
            auVar57[9] = -(auVar61[9] == -1);
            auVar57[10] = -(auVar61[10] == -1);
            auVar57[0xb] = -(auVar61[0xb] == -1);
            auVar57[0xc] = -(auVar61[0xc] == -1);
            auVar57[0xd] = -(auVar61[0xd] == -1);
            auVar57[0xe] = -(auVar61[0xe] == -1);
            auVar57[0xf] = -(auVar61[0xf] == -1);
            if ((((((((((((((((SUB161(auVar57 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar57 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar57 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar57 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar57 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar57 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar57 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar57 >> 0x3f,0) & 1) != 0) || (SUB161(auVar57 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar57 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar57 >> 0x57,0) & 1) != 0) || (SUB161(auVar57 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar57 >> 0x67,0) & 1) != 0) || (SUB161(auVar57 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar57 >> 0x77,0) & 1) != 0) || auVar57[0xf] < '\0') goto LAB_140b3cb7b;
            uVar28 = uVar28 + lVar34 + 0x10;
            lVar34 = lVar34 + 0x10;
          } while( true );
        }
      }
      if ((char)plStack_120 == '\0') {
        return;
      }
      uStack_118 = puVar4;
      plVar21 = (longlong *)pdb_140e97000();
      if ((char)plVar21[0xd] != '\x01') {
        plVar21 = (longlong *)pdb_142d8ec20(plVar21,0);
        if (plVar21 == (longlong *)0x0) break;
      }
      plVar38 = (longlong *)(ulonglong)(bVar42 || bVar44);
      if (*plVar21 == 0) {
        *plVar21 = -1;
        plStack_120 = plVar21;
        pdb_140e95370(plVar21 + 1,plStack_140);
code_r0x000140b3c7eb:
        *plStack_120 = *plStack_120 + 1;
        return;
      }
    }
LAB_140b3d168:
    plVar21 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_140b3d174:
    plVar21 = (longlong *)pdb_142d8ec20(plVar21,0);
  } while (plVar21 != (longlong *)0x0);
LAB_140b3d19c:
  pdb_142dc7890(&UNK_143326860);
LAB_140b3d1a9:
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_1430584d8);
code_r0x000140b3c936:
  uVar32 = (ushort)(uVar25 - 1) & (ushort)uVar25;
  uVar25 = CONCAT22((short)(uVar25 - 1 >> 0x10),uVar32);
  if (uVar32 == 0) goto LAB_140b3c943;
  goto LAB_140b3c917;
LAB_140b3f6e2:
  do {
    uVar24 = pdb_142dc8090(&UNK_143326a50);
    plVar38 = (longlong *)pdb_142d8ec20(uVar24,0);
    if (plVar38 == (longlong *)0x0) {
LAB_140b3f716:
      pdb_142dc7890(&UNK_143326860);
LAB_140b3f723:
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_1430585b8);
    }
  } while (*plVar38 != 0);
  *plVar38 = -1;
  plStack_1a0 = plVar38;
  puStack_270 = (undefined8 *)pdb_140e94f10(plVar38 + 1,param_9,lVar35,plVar30,param_8,1,0);
  *plStack_1a0 = *plStack_1a0 + 1;
  uStack_278 = 1;
  puVar11 = *(ulonglong **)CONCAT44(uStack_54,uStack_58);
  lVar18 = ((undefined8 *)CONCAT44(uStack_54,uStack_58))[1];
  uVar28 = *puVar11;
  param_9 = (longlong *)0x0;
  plVar38 = (longlong *)(uVar28 - *(ulonglong *)(lVar18 + 0x18));
  if (uVar28 < *(ulonglong *)(lVar18 + 0x18)) {
    plVar38 = param_9;
  }
  plVar36 = (longlong *)(uVar28 - *(ulonglong *)(lVar18 + 0x38));
  if (uVar28 < *(ulonglong *)(lVar18 + 0x38)) {
    plVar36 = param_9;
  }
  plVar40 = *(longlong **)(lVar18 + 0x10);
  plVar21 = *(longlong **)(lVar18 + 0x30);
  bVar42 = plVar21 < plVar36;
  bVar44 = (longlong *)((longlong)plVar21 - (longlong)plVar36) == (longlong *)0x0;
  plVar30 = (longlong *)((longlong)plVar21 - (longlong)plVar36);
  if (bVar42) {
    plVar30 = param_9;
  }
  lVar35 = CONCAT71((int7)((ulonglong)lVar35 >> 8),bVar42 || bVar44);
  bVar43 = plVar40 < plVar38;
  plVar39 = (longlong *)((longlong)plVar40 - (longlong)plVar38);
  param_8 = plVar39;
  if (bVar43) {
    param_8 = param_9;
  }
  lVar34 = *(longlong *)(lVar18 + 8);
  plVar37 = (longlong *)((longlong)plVar30 + (longlong)param_8);
  if (!bVar43 && plVar39 != (longlong *)0x0 || !bVar42 && !bVar44) {
    plVar37 = param_9;
  }
  lVar33 = *(longlong *)(lVar18 + 0x28);
  *puVar11 = *(longlong *)(lVar18 + 0x40) - (longlong)plVar37;
  plStack_1a0 = puStack_270;
  if (!bVar43 && plVar39 != (longlong *)0x0 || !bVar42 && !bVar44) {
    lVar33 = lVar33 + (longlong)plVar36 * 0x70;
    lVar18 = (longlong)plVar30 * 0x70;
    lVar34 = lVar34 + (longlong)plVar38 * 0x70;
    lVar35 = (longlong)param_8 * 0x70;
    if (plVar40 < plVar38) {
      lVar34 = 8;
    }
    plVar30 = (longlong *)0x0;
    if (plVar38 < plVar40) {
      plVar30 = (longlong *)(lVar34 + -0x70 + lVar35);
    }
    if (plVar21 < plVar36) {
      lVar33 = 8;
    }
    plVar38 = (longlong *)(lVar33 + -0x70 + lVar18);
    if (plVar21 <= plVar36) {
      plVar38 = plVar30;
    }
    if ((int)*plVar38 != 2) {
      bVar6 = *(byte *)(plVar38 + 0xc);
      lVar18 = plVar38[7];
      plStack_1d8 = (longlong *)plVar38[10];
      lStack_1e8 = plVar38[8];
      puStack_1e0 = (undefined8 *)plVar38[9];
      plVar30 = *uStack_168;
      lStack_198 = lVar18;
      if (plVar30[3] == 0) goto LAB_140b3ef71;
      uVar28 = pdb_1400af0a0(plVar30 + 4,&lStack_198);
      puVar20 = (undefined *)CONCAT44(uStack_6c,uStack_70);
      lVar35 = *plVar30;
      bVar45 = (byte)(uVar28 >> 0x39);
      auVar51 = ZEXT216(CONCAT11(bVar45,bVar45));
      auVar51 = pshuflw(auVar51,auVar51,0);
      lVar34 = 0;
      do {
        uVar28 = uVar28 & plVar30[1];
        pcVar3 = (char *)(lVar35 + uVar28);
        auVar61[0] = -(*pcVar3 == auVar51[0]);
        auVar61[1] = -(pcVar3[1] == auVar51[1]);
        auVar61[2] = -(pcVar3[2] == auVar51[2]);
        auVar61[3] = -(pcVar3[3] == auVar51[3]);
        auVar61[4] = -(pcVar3[4] == auVar51[4]);
        auVar61[5] = -(pcVar3[5] == auVar51[5]);
        auVar61[6] = -(pcVar3[6] == auVar51[6]);
        auVar61[7] = -(pcVar3[7] == auVar51[7]);
        auVar61[8] = -(pcVar3[8] == auVar51[0]);
        auVar61[9] = -(pcVar3[9] == auVar51[1]);
        auVar61[10] = -(pcVar3[10] == auVar51[2]);
        auVar61[0xb] = -(pcVar3[0xb] == auVar51[3]);
        auVar61[0xc] = -(pcVar3[0xc] == auVar51[4]);
        auVar61[0xd] = -(pcVar3[0xd] == auVar51[5]);
        auVar61[0xe] = -(pcVar3[0xe] == auVar51[6]);
        auVar61[0xf] = -(pcVar3[0xf] == auVar51[7]);
        uVar32 = (ushort)(SUB161(auVar61 >> 7,0) & 1) | (ushort)(SUB161(auVar61 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar61 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar61 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar61 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar61 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar61 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar61 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar61 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar61 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar61 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar61 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar61 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar61 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar61 >> 0x77,0) & 1) << 0xe | (ushort)(auVar61[0xf] >> 7) << 0xf
        ;
        uVar25 = (uint)uVar32;
        while (uVar32 != 0) {
          uVar13 = 0;
          for (uVar14 = uVar25; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
            uVar13 = uVar13 + 1;
          }
          lVar33 = (uVar13 + uVar28 & plVar30[1]) * -0x2b0;
          if (lVar18 == *(longlong *)(lVar35 + -0x2b0 + lVar33)) {
            lVar35 = lVar35 + lVar33;
            if ((1 < *(ulonglong *)(lVar35 + -0x298)) && (0.0 < *(float *)(lVar35 + -0x278))) {
              bVar45 = 3;
              if (1 < bVar6) {
                bVar45 = bVar6 - 2;
              }
              puVar23 = (undefined *)(ulonglong)bVar45;
code_r0x000140b3ed3e:
                    /* WARNING: Could not recover jumptable at 0x000140b3ed4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)(&UNK_143058d18 + *(int *)(&UNK_143058d18 + (longlong)puVar23 * 4)))
                        (puVar20);
              return;
            }
            goto LAB_140b3f723;
          }
          uVar32 = (ushort)(uVar25 - 1) & (ushort)uVar25;
          uVar25 = CONCAT22((short)(uVar25 - 1 >> 0x10),uVar32);
        }
        auVar58[0] = -(*pcVar3 == -1);
        auVar58[1] = -(pcVar3[1] == -1);
        auVar58[2] = -(pcVar3[2] == -1);
        auVar58[3] = -(pcVar3[3] == -1);
        auVar58[4] = -(pcVar3[4] == -1);
        auVar58[5] = -(pcVar3[5] == -1);
        auVar58[6] = -(pcVar3[6] == -1);
        auVar58[7] = -(pcVar3[7] == -1);
        auVar58[8] = -(pcVar3[8] == -1);
        auVar58[9] = -(pcVar3[9] == -1);
        auVar58[10] = -(pcVar3[10] == -1);
        auVar58[0xb] = -(pcVar3[0xb] == -1);
        auVar58[0xc] = -(pcVar3[0xc] == -1);
        auVar58[0xd] = -(pcVar3[0xd] == -1);
        auVar58[0xe] = -(pcVar3[0xe] == -1);
        auVar58[0xf] = -(pcVar3[0xf] == -1);
        if ((((((((((((((((SUB161(auVar58 >> 7,0) & 1) != 0 || (SUB161(auVar58 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar58 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar58 >> 0x1f,0) & 1) != 0) || (SUB161(auVar58 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar58 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar58 >> 0x37,0) & 1) != 0) || (SUB161(auVar58 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar58 >> 0x47,0) & 1) != 0) || (SUB161(auVar58 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar58 >> 0x57,0) & 1) != 0) || (SUB161(auVar58 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar58 >> 0x67,0) & 1) != 0) || (SUB161(auVar58 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar58 >> 0x77,0) & 1) != 0) || auVar58[0xf] < '\0') {
LAB_140b3ef71:
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_1430585d0);
        }
        uVar28 = uVar28 + lVar34 + 0x10;
        lVar34 = lVar34 + 0x10;
      } while( true );
    }
  }
  if ((char)uStack_170 == '\0') {
    return;
  }
  plVar38 = (longlong *)pdb_140e97000();
  if ((char)plVar38[0xd] != '\x01') {
    plVar38 = (longlong *)pdb_142d8ec20(plVar38,0);
    if (plVar38 == (longlong *)0x0) goto LAB_140b3f716;
  }
  if (*plVar38 == 0) {
    *plVar38 = -1;
    uStack_170._0_4_ = SUB84(plVar38,0);
    uStack_170._4_4_ = (float)((ulonglong)plVar38 >> 0x20);
    pdb_140e95370(plVar38 + 1,plStack_1a0);
code_r0x000140b3ebbd:
    *(longlong *)CONCAT44(uStack_170._4_4_,(float)uStack_170) =
         *(longlong *)CONCAT44(uStack_170._4_4_,(float)uStack_170) + 1;
    return;
  }
  goto LAB_140b3f6e2;
}

