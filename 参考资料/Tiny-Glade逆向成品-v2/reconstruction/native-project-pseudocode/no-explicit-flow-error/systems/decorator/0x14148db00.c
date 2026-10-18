// VA 0x14148db00, PDB extent 12051 bytes
// system_decorator::utils::visual_entity_builder::WindowVisualEntityBuilder::build<system_decorator::decorator_visual_state::DecoratorPersistentVisualState>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/utils/visual_entity_builder.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::utils::visual_entity_builder::WindowVisualEntityBuilder::build<system_decorator::decorator_visual_state::DecoratorPersistentVisualState>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/utils/visual_entity_builder.rs
   Extent: 12051 */

longlong pdb_14148db00(longlong *param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  float *pfVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 uVar5;
  longlong lVar6;
  char *pcVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  int iVar21;
  undefined4 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  longlong lVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  longlong *plVar30;
  longlong lVar31;
  float fVar40;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar53;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  longlong lStack_240;
  undefined8 uStack_238;
  longlong *plStack_230;
  longlong *plStack_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined8 uStack_210;
  undefined8 uStack_208;
  int iStack_200;
  int iStack_1f8;
  float fStack_1f4;
  longlong lStack_1f0;
  longlong lStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  undefined8 uStack_198;
  int iStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  longlong *plStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  undefined8 uStack_160;
  longlong lStack_150;
  longlong lStack_148;
  undefined8 uStack_140;
  longlong *plStack_138;
  longlong *plStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined8 uStack_110;
  longlong lStack_108;
  undefined1 uStack_fb;
  undefined1 uStack_fa;
  undefined1 uStack_f9;
  uint uStack_f8;
  undefined1 uStack_f3;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  fVar60 = fStack_19c;
  fVar54 = fStack_1a0;
  uStack_f0 = 0xfffffffffffffffe;
  pfVar1 = (float *)(param_1 + 0x16);
  fVar14 = *pfVar1;
  fVar15 = *(float *)((longlong)param_1 + 0xb4);
  lVar12 = *(longlong *)pfVar1;
  lVar9 = *(longlong *)pfVar1;
  lVar8 = *(longlong *)pfVar1;
  lVar31 = *(longlong *)pfVar1;
  pfVar1 = (float *)(param_1 + 0x17);
  fVar16 = *pfVar1;
  fVar41 = *(float *)((longlong)param_1 + 0xbc);
  lVar13 = *(longlong *)pfVar1;
  lVar10 = *(longlong *)pfVar1;
  lVar11 = *(longlong *)pfVar1;
  lVar27 = *(longlong *)pfVar1;
  fVar43 = *(float *)(param_1 + 0x18);
  fVar53 = *(float *)((longlong)param_1 + 0xc4);
  fVar59 = *(float *)(param_1 + 0x19);
  fVar44 = *(float *)(param_1 + 0x2c);
  fVar55 = (float)*(undefined8 *)((longlong)param_1 + 0x164);
  fVar61 = (float)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x164) >> 0x20);
  if (0.0 < fVar61 * fVar61 + fVar44 * fVar44 + fVar55 * fVar55) {
    fVar56 = fVar16 * fVar16;
    fVar57 = fVar41 * fVar41;
    fVar58 = fVar15 * fVar15 + fVar14 * fVar14;
    fVar42 = fVar16 * fVar61 + fVar15 * fVar55 + fVar14 * fVar44;
    fVar42 = fVar42 + fVar42;
    fVar40 = fVar41 + fVar41;
    fVar43 = fVar40 * (fVar15 * fVar61 - fVar55 * fVar16) +
             fVar42 * fVar14 + (fVar57 - (fVar58 + fVar56)) * fVar44 + fVar43;
    fVar53 = fVar40 * (fVar16 * fVar44 - fVar61 * fVar14) +
             fVar42 * fVar15 + (fVar57 - (fVar58 + fVar56)) * fVar55 + fVar53;
    fVar59 = fVar59 + fVar40 * (fVar14 * fVar55 - fVar44 * fVar15) +
                      fVar42 * fVar16 + (fVar57 - (fVar58 + fVar56)) * fVar61;
  }
  if ((char)param_1[8] == '\0') {
    fVar44 = *(float *)((longlong)param_1 + 0xcc);
    fVar55 = (float)param_1[0x1a];
    fVar61 = (float)((ulonglong)param_1[0x1a] >> 0x20);
  }
  else {
    fVar44 = *(float *)((longlong)param_1 + 0x44);
    fVar55 = (float)param_1[9];
    fVar61 = (float)((ulonglong)param_1[9] >> 0x20);
  }
  uStack_f8 = param_2;
  if (0x1b < param_1[0x15] - 0x16U) {
LAB_1414900e4:
    uStack_1d8 = param_1 + 0x14;
    uStack_1d0 = pdb_1402ed420;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14330dd8b,&uStack_1d8,&UNK_14330dde8);
  }
  lVar6 = param_1[0x1b];
  pcVar7 = (char *)param_1[0x14];
  fStack_1a0 = (float)lVar6;
  fVar40 = fStack_1a0;
  fStack_19c = (float)((ulonglong)lVar6 >> 0x20);
  fVar42 = fStack_19c;
  fStack_1a0 = fVar59;
  fStack_19c = fVar59;
  switch(param_1[0x15]) {
  case 0x16:
    auVar45[0] = -(pcVar7[6] == UNK_14330dc00);
    auVar45[1] = -(pcVar7[7] == UNK_14330dc01);
    auVar45[2] = -(pcVar7[8] == UNK_14330dc02);
    auVar45[3] = -(pcVar7[9] == UNK_14330dc03);
    auVar45[4] = -(pcVar7[10] == UNK_14330dc04);
    auVar45[5] = -(pcVar7[0xb] == UNK_14330dc05);
    auVar45[6] = -(pcVar7[0xc] == UNK_14330dc06);
    auVar45[7] = -(pcVar7[0xd] == UNK_14330dc07);
    auVar45[8] = -(pcVar7[0xe] == UNK_14330dc08);
    auVar45[9] = -(pcVar7[0xf] == UNK_14330dc09);
    auVar45[10] = -(pcVar7[0x10] == UNK_14330dc0a);
    auVar45[0xb] = -(pcVar7[0x11] == UNK_14330dc0b);
    auVar45[0xc] = -(pcVar7[0x12] == UNK_14330dc0c);
    auVar45[0xd] = -(pcVar7[0x13] == UNK_14330dc0d);
    auVar45[0xe] = -(pcVar7[0x14] == UNK_14330dc0e);
    auVar45[0xf] = -(pcVar7[0x15] == UNK_14330dc0f);
    auVar32[0] = -(*pcVar7 == UNK_14330dc10);
    auVar32[1] = -(pcVar7[1] == UNK_14330dc11);
    auVar32[2] = -(pcVar7[2] == UNK_14330dc12);
    auVar32[3] = -(pcVar7[3] == UNK_14330dc13);
    auVar32[4] = -(pcVar7[4] == UNK_14330dc14);
    auVar32[5] = -(pcVar7[5] == UNK_14330dc15);
    auVar32[6] = -(pcVar7[6] == UNK_14330dc16);
    auVar32[7] = -(pcVar7[7] == UNK_14330dc17);
    auVar32[8] = -(pcVar7[8] == UNK_14330dc18);
    auVar32[9] = -(pcVar7[9] == UNK_14330dc19);
    auVar32[10] = -(pcVar7[10] == UNK_14330dc1a);
    auVar32[0xb] = -(pcVar7[0xb] == UNK_14330dc1b);
    auVar32[0xc] = -(pcVar7[0xc] == UNK_14330dc1c);
    auVar32[0xd] = -(pcVar7[0xd] == UNK_14330dc1d);
    auVar32[0xe] = -(pcVar7[0xe] == UNK_14330dc1e);
    auVar32[0xf] = -(pcVar7[0xf] == UNK_14330dc1f);
    auVar32 = auVar32 & auVar45;
    if ((ushort)((ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar32[0xf] >> 7) << 0xf) != 0xffff) goto LAB_1414900e4;
    fStack_1a0 = fVar54;
    fStack_19c = fVar60;
    lStack_150 = lVar6;
    uStack_110 = pdb_140df4400(param_1[0x12],param_1[0x13]);
    pdb_14007ee60();
    uVar25 = *param_7;
    lStack_148 = pdb_140ed5970(uVar25);
    plStack_138 = (longlong *)param_7[1];
    plStack_130 = (longlong *)param_7[2];
    uStack_128 = param_7[3];
    plVar30 = plStack_138;
    if (plStack_138 == (longlong *)0x0) {
      plVar30 = plStack_130;
    }
    lVar31 = plVar30[2];
    if ((ulonglong)(*plVar30 - lVar31) < 0x68) {
      lStack_108 = lStack_148;
      pdb_142d7f1b0(plVar30,lVar31,0x68,1,1);
      lStack_148 = lStack_108;
    }
    lVar27 = plVar30[1];
    *(code **)(lVar27 + lVar31) = pdb_1414b8a60;
    pfVar1 = (float *)(lVar27 + 8 + lVar31);
    *pfVar1 = fVar14;
    pfVar1[1] = fVar15;
    pfVar1[2] = fVar16;
    pfVar1[3] = fVar41;
    *(ulonglong *)(lVar27 + 0x18 + lVar31) = CONCAT44(fVar53,fVar43);
    *(float *)(lVar27 + 0x20 + lVar31) = fVar59;
    *(float *)(lVar27 + 0x24 + lVar31) = fVar44;
    *(ulonglong *)(lVar27 + 0x28 + lVar31) = CONCAT44(fVar61,fVar55);
    *(longlong *)(lVar27 + 0x30 + lVar31) = lStack_150;
    *(undefined4 *)(lVar27 + 0x38 + lVar31) = 0;
    *(undefined8 *)(lVar27 + 0x40 + lVar31) = uStack_110;
    *(undefined1 *)(lVar27 + 0x48 + lVar31) = 0x14;
    break;
  case 0x17:
    auVar50[0] = -(pcVar7[7] == UNK_14330dc30);
    auVar50[1] = -(pcVar7[8] == UNK_14330dc31);
    auVar50[2] = -(pcVar7[9] == UNK_14330dc32);
    auVar50[3] = -(pcVar7[10] == UNK_14330dc33);
    auVar50[4] = -(pcVar7[0xb] == UNK_14330dc34);
    auVar50[5] = -(pcVar7[0xc] == UNK_14330dc35);
    auVar50[6] = -(pcVar7[0xd] == UNK_14330dc36);
    auVar50[7] = -(pcVar7[0xe] == UNK_14330dc37);
    auVar50[8] = -(pcVar7[0xf] == UNK_14330dc38);
    auVar50[9] = -(pcVar7[0x10] == UNK_14330dc39);
    auVar50[10] = -(pcVar7[0x11] == UNK_14330dc3a);
    auVar50[0xb] = -(pcVar7[0x12] == UNK_14330dc3b);
    auVar50[0xc] = -(pcVar7[0x13] == UNK_14330dc3c);
    auVar50[0xd] = -(pcVar7[0x14] == UNK_14330dc3d);
    auVar50[0xe] = -(pcVar7[0x15] == UNK_14330dc3e);
    auVar50[0xf] = -(pcVar7[0x16] == UNK_14330dc3f);
    auVar37[0] = -(*pcVar7 == UNK_14330dc10);
    auVar37[1] = -(pcVar7[1] == UNK_14330dc11);
    auVar37[2] = -(pcVar7[2] == UNK_14330dc12);
    auVar37[3] = -(pcVar7[3] == UNK_14330dc13);
    auVar37[4] = -(pcVar7[4] == UNK_14330dc14);
    auVar37[5] = -(pcVar7[5] == UNK_14330dc15);
    auVar37[6] = -(pcVar7[6] == UNK_14330dc16);
    auVar37[7] = -(pcVar7[7] == UNK_14330dc17);
    auVar37[8] = -(pcVar7[8] == UNK_14330dc18);
    auVar37[9] = -(pcVar7[9] == UNK_14330dc19);
    auVar37[10] = -(pcVar7[10] == UNK_14330dc1a);
    auVar37[0xb] = -(pcVar7[0xb] == UNK_14330dc1b);
    auVar37[0xc] = -(pcVar7[0xc] == UNK_14330dc1c);
    auVar37[0xd] = -(pcVar7[0xd] == UNK_14330dc1d);
    auVar37[0xe] = -(pcVar7[0xe] == UNK_14330dc1e);
    auVar37[0xf] = -(pcVar7[0xf] == UNK_14330dc1f);
    auVar37 = auVar37 & auVar50;
    if ((ushort)((ushort)(SUB161(auVar37 >> 7,0) & 1) | (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar37[0xf] >> 7) << 0xf) != 0xffff) {
      auVar51[0] = -(pcVar7[7] == UNK_14330dc40);
      auVar51[1] = -(pcVar7[8] == UNK_14330dc41);
      auVar51[2] = -(pcVar7[9] == UNK_14330dc42);
      auVar51[3] = -(pcVar7[10] == UNK_14330dc43);
      auVar51[4] = -(pcVar7[0xb] == UNK_14330dc44);
      auVar51[5] = -(pcVar7[0xc] == UNK_14330dc45);
      auVar51[6] = -(pcVar7[0xd] == UNK_14330dc46);
      auVar51[7] = -(pcVar7[0xe] == UNK_14330dc47);
      auVar51[8] = -(pcVar7[0xf] == UNK_14330dc48);
      auVar51[9] = -(pcVar7[0x10] == UNK_14330dc49);
      auVar51[10] = -(pcVar7[0x11] == UNK_14330dc4a);
      auVar51[0xb] = -(pcVar7[0x12] == UNK_14330dc4b);
      auVar51[0xc] = -(pcVar7[0x13] == UNK_14330dc4c);
      auVar51[0xd] = -(pcVar7[0x14] == UNK_14330dc4d);
      auVar51[0xe] = -(pcVar7[0x15] == UNK_14330dc4e);
      auVar51[0xf] = -(pcVar7[0x16] == UNK_14330dc4f);
      auVar38[0] = -(*pcVar7 == UNK_14330dc10);
      auVar38[1] = -(pcVar7[1] == UNK_14330dc11);
      auVar38[2] = -(pcVar7[2] == UNK_14330dc12);
      auVar38[3] = -(pcVar7[3] == UNK_14330dc13);
      auVar38[4] = -(pcVar7[4] == UNK_14330dc14);
      auVar38[5] = -(pcVar7[5] == UNK_14330dc15);
      auVar38[6] = -(pcVar7[6] == UNK_14330dc16);
      auVar38[7] = -(pcVar7[7] == UNK_14330dc17);
      auVar38[8] = -(pcVar7[8] == UNK_14330dc18);
      auVar38[9] = -(pcVar7[9] == UNK_14330dc19);
      auVar38[10] = -(pcVar7[10] == UNK_14330dc1a);
      auVar38[0xb] = -(pcVar7[0xb] == UNK_14330dc1b);
      auVar38[0xc] = -(pcVar7[0xc] == UNK_14330dc1c);
      auVar38[0xd] = -(pcVar7[0xd] == UNK_14330dc1d);
      auVar38[0xe] = -(pcVar7[0xe] == UNK_14330dc1e);
      auVar38[0xf] = -(pcVar7[0xf] == UNK_14330dc1f);
      auVar38 = auVar38 & auVar51;
      if ((ushort)((ushort)(SUB161(auVar38 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar38 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar38 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar38 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar38 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar38[0xf] >> 7) << 0xf) == 0xffff) {
        fStack_1a0 = fVar54;
        fStack_19c = fVar60;
        uVar22 = pdb_1409012c0(0);
        pdb_1408fd550(&fStack_1a8,uVar22);
        uStack_1c8 = CONCAT44(fVar53,fVar43);
        uStack_1c0 = CONCAT44(fVar44,fVar59);
        uStack_1b8 = CONCAT44(fVar61,fVar55);
        uStack_1d8 = (longlong *)lVar12;
        uStack_1d0 = (code *)lVar13;
        uStack_1b0 = lVar6;
        pdb_14007ee60();
        uStack_198 = CONCAT71(uStack_198._1_7_,0x12);
        uVar25 = *param_7;
        lStack_148 = pdb_140ed5970(uVar25);
        plStack_138 = (longlong *)param_7[1];
        plStack_130 = (longlong *)param_7[2];
        uStack_128 = param_7[3];
        plVar30 = plStack_138;
        if (plStack_138 == (longlong *)0x0) {
          plVar30 = plStack_130;
        }
        lVar31 = plVar30[2];
        if ((ulonglong)(*plVar30 - lVar31) < 0x68) {
          lStack_150 = lStack_148;
          pdb_142d7f1b0(plVar30,lVar31,0x68,1,1);
          lStack_148 = lStack_150;
        }
        lVar27 = plVar30[1];
        *(code **)(lVar27 + lVar31) = pdb_1414b8d40;
        plVar3 = (longlong *)(lVar27 + 8 + lVar31);
        *plVar3 = (longlong)uStack_1d8;
        plVar3[1] = (longlong)uStack_1d0;
        plVar3 = (longlong *)(lVar27 + 0x18 + lVar31);
        *plVar3 = uStack_1c8;
        plVar3[1] = uStack_1c0;
        puVar2 = (undefined8 *)(lVar27 + 0x28 + lVar31);
        *puVar2 = uStack_1b8;
        puVar2[1] = uStack_1b0;
        puVar2 = (undefined8 *)(lVar27 + 0x38 + lVar31);
        *puVar2 = CONCAT44(fStack_1a4,fStack_1a8);
        puVar2[1] = CONCAT44(fStack_19c,fStack_1a0);
        plVar3 = (longlong *)(lVar27 + 0x48 + lVar31);
        *plVar3 = uStack_198;
        plVar3[1] = CONCAT44(uStack_18c,iStack_190);
        *(longlong *)(lVar27 + 0x58 + lVar31) = lStack_148;
        plVar30[2] = lVar31 + 0x68;
        uStack_140 = uVar25;
      }
      else {
        auVar52[0] = -(pcVar7[7] == UNK_14330dc50);
        auVar52[1] = -(pcVar7[8] == UNK_14330dc51);
        auVar52[2] = -(pcVar7[9] == UNK_14330dc52);
        auVar52[3] = -(pcVar7[10] == UNK_14330dc53);
        auVar52[4] = -(pcVar7[0xb] == UNK_14330dc54);
        auVar52[5] = -(pcVar7[0xc] == UNK_14330dc55);
        auVar52[6] = -(pcVar7[0xd] == UNK_14330dc56);
        auVar52[7] = -(pcVar7[0xe] == UNK_14330dc57);
        auVar52[8] = -(pcVar7[0xf] == UNK_14330dc58);
        auVar52[9] = -(pcVar7[0x10] == UNK_14330dc59);
        auVar52[10] = -(pcVar7[0x11] == UNK_14330dc5a);
        auVar52[0xb] = -(pcVar7[0x12] == UNK_14330dc5b);
        auVar52[0xc] = -(pcVar7[0x13] == UNK_14330dc5c);
        auVar52[0xd] = -(pcVar7[0x14] == UNK_14330dc5d);
        auVar52[0xe] = -(pcVar7[0x15] == UNK_14330dc5e);
        auVar52[0xf] = -(pcVar7[0x16] == UNK_14330dc5f);
        auVar39[0] = -(*pcVar7 == UNK_14330dbe0);
        auVar39[1] = -(pcVar7[1] == UNK_14330dbe1);
        auVar39[2] = -(pcVar7[2] == UNK_14330dbe2);
        auVar39[3] = -(pcVar7[3] == UNK_14330dbe3);
        auVar39[4] = -(pcVar7[4] == UNK_14330dbe4);
        auVar39[5] = -(pcVar7[5] == UNK_14330dbe5);
        auVar39[6] = -(pcVar7[6] == UNK_14330dbe6);
        auVar39[7] = -(pcVar7[7] == UNK_14330dbe7);
        auVar39[8] = -(pcVar7[8] == UNK_14330dbe8);
        auVar39[9] = -(pcVar7[9] == UNK_14330dbe9);
        auVar39[10] = -(pcVar7[10] == UNK_14330dbea);
        auVar39[0xb] = -(pcVar7[0xb] == UNK_14330dbeb);
        auVar39[0xc] = -(pcVar7[0xc] == UNK_14330dbec);
        auVar39[0xd] = -(pcVar7[0xd] == UNK_14330dbed);
        auVar39[0xe] = -(pcVar7[0xe] == UNK_14330dbee);
        auVar39[0xf] = -(pcVar7[0xf] == UNK_14330dbef);
        auVar39 = auVar39 & auVar52;
        if ((ushort)((ushort)(SUB161(auVar39 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar39 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar39 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar39 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar39 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar39 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar39 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar39 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar39 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar39 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar39[0xf] >> 7) << 0xf) != 0xffff) goto LAB_1414900e4;
        if ((char)param_1[0x1d] == '\0') {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_14330de78);
        }
        if ((char)param_1[0x1c] == '\0') {
          uStack_110 = param_3;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_14330de90);
        }
        uStack_110 = param_3;
        pdb_140a596f0(&lStack_240,param_4,pcVar7,0x17,&UNK_14330dea8);
        uStack_f3 = 1;
        lStack_1f0 = pdb_1406d0830(&lStack_240);
        uStack_f3 = 1;
        uVar25 = pdb_140315970(&lStack_1f0);
        fVar54 = *(float *)((longlong)param_1 + 0xe4);
        iVar21 = *(int *)((longlong)param_1 + 0xec);
        uStack_f3 = 1;
        uVar26 = pdb_140df4400(&UNK_14330dec0,0x16);
        uStack_f3 = 1;
        uVar26 = pdb_140a2e580(param_5,uVar26);
        fVar56 = fVar15 + fVar15;
        fVar58 = fVar14 * (fVar14 + fVar14);
        fVar63 = fVar16 + fVar16;
        fVar64 = fVar14 * fVar63 - fVar56 * fVar41;
        fVar60 = (fVar14 + fVar14) * fVar41;
        fVar57 = fVar15 * fVar63 + fVar60;
        fVar62 = _UNK_142e378e4 - (fVar58 + fVar15 * fVar56);
        uStack_1d8 = (longlong *)
                     CONCAT44(fVar44 * (fVar14 * fVar56 + fVar63 * fVar41),
                              fVar44 * (_DAT_142e36f28 - (fVar16 * fVar63 + fVar15 * fVar56)));
        uStack_1d0 = (code *)CONCAT44(fVar44 * fVar64,fVar44 * fVar64);
        uStack_1c8 = CONCAT44(fVar55 * (_UNK_142e378e4 - (fVar58 + fVar16 * fVar63)),
                              fVar55 * (fVar14 * fVar56 - fVar63 * fVar41));
        uStack_1c0 = CONCAT44(fVar55 * fVar57,fVar55 * fVar57);
        uStack_1b8 = CONCAT44(fVar61 * (fVar15 * fVar63 - fVar60),
                              fVar61 * (fVar14 * fVar63 + fVar56 * fVar41));
        uStack_1b0 = CONCAT44(fVar61 * fVar62,fVar61 * fVar62);
        uStack_f3 = 1;
        fStack_1a8 = fVar43;
        fStack_1a4 = fVar53;
        pdb_140e07fe0(&lStack_148,&uStack_1d8);
        uStack_1d8 = (longlong *)lStack_148;
        uStack_1d0 = (code *)uStack_140;
        uStack_1c8 = (longlong)plStack_138;
        uStack_1c0 = (longlong)plStack_130;
        fStack_1a0 = (float)uVar26;
        fStack_19c = (float)((ulonglong)uVar26 >> 0x20);
        uStack_f3 = 1;
        fStack_1a8 = fVar54;
        fStack_1a4 = (float)iVar21;
        uVar25 = pdb_1424c9260(uVar25,param_6,&uStack_1d8);
        uStack_fa = 1;
        uStack_1e0 = uVar25;
        uVar26 = pdb_140a2c590(uStack_110,param_1[0x12],param_1[0x13]);
        uStack_fa = 1;
        pdb_1408fd560(&lStack_1f0,uVar26);
        uStack_118 = uStack_210;
        uStack_128 = CONCAT44(uStack_21c,uStack_220);
        uStack_120 = uStack_218;
        uStack_11c = uStack_214;
        plStack_138 = plStack_230;
        plStack_130 = plStack_228;
        lStack_148 = lStack_240;
        uStack_140 = uStack_238;
        uStack_160 = pdb_1406d0830(uVar25);
        uStack_1d8 = (longlong *)lStack_1f0;
        uStack_1d0 = (code *)lStack_1e8;
        uStack_198 = lStack_148;
        iStack_190 = (int)uStack_140;
        uStack_18c = (undefined4)((ulonglong)uStack_140 >> 0x20);
        uStack_188 = SUB84(plStack_138,0);
        uStack_184 = (undefined4)((ulonglong)plStack_138 >> 0x20);
        plStack_180 = plStack_130;
        uStack_178 = (undefined4)uStack_128;
        uStack_174 = uStack_128._4_4_;
        uStack_170 = uStack_120;
        uStack_16c = uStack_11c;
        uStack_168 = uStack_118;
        uStack_1b8 = CONCAT44(fVar53,fVar43);
        uStack_1b0 = CONCAT44(fVar44,fVar59);
        uStack_fa = 0;
        uStack_1c8 = lVar31;
        uStack_1c0 = lVar27;
        fStack_1a8 = fVar55;
        fStack_1a4 = fVar61;
        fStack_1a0 = fVar40;
        fStack_19c = fVar42;
        pdb_1414ba730(&lStack_148,param_7,&uStack_1d8,&UNK_14330ded8);
      }
      goto code_r0x00014148eda4;
    }
    fStack_1a0 = fVar54;
    fStack_19c = fVar60;
    lStack_150 = lVar6;
    uStack_110 = pdb_140df4400(param_1[0x12],param_1[0x13]);
    pdb_14007ee60();
    uVar25 = *param_7;
    lStack_148 = pdb_140ed5970(uVar25);
    plStack_138 = (longlong *)param_7[1];
    plStack_130 = (longlong *)param_7[2];
    uStack_128 = param_7[3];
    plVar30 = plStack_138;
    if (plStack_138 == (longlong *)0x0) {
      plVar30 = plStack_130;
    }
    lVar31 = plVar30[2];
    if ((ulonglong)(*plVar30 - lVar31) < 0x68) {
      lStack_108 = lStack_148;
      pdb_142d7f1b0(plVar30,lVar31,0x68,1,1);
      lStack_148 = lStack_108;
    }
    lVar27 = plVar30[1];
    *(code **)(lVar27 + lVar31) = pdb_1414b86a0;
    pfVar1 = (float *)(lVar27 + 8 + lVar31);
    *pfVar1 = fVar14;
    pfVar1[1] = fVar15;
    pfVar1[2] = fVar16;
    pfVar1[3] = fVar41;
    *(ulonglong *)(lVar27 + 0x18 + lVar31) = CONCAT44(fVar53,fVar43);
    *(float *)(lVar27 + 0x20 + lVar31) = fVar59;
    *(float *)(lVar27 + 0x24 + lVar31) = fVar44;
    *(ulonglong *)(lVar27 + 0x28 + lVar31) = CONCAT44(fVar61,fVar55);
    *(longlong *)(lVar27 + 0x30 + lVar31) = lStack_150;
    *(undefined4 *)(lVar27 + 0x38 + lVar31) = 0;
    *(undefined8 *)(lVar27 + 0x40 + lVar31) = uStack_110;
    *(undefined1 *)(lVar27 + 0x48 + lVar31) = 0x11;
    break;
  default:
    goto LAB_1414900e4;
  case 0x1c:
    auVar47[0] = -(pcVar7[0xc] == UNK_14330dbd0);
    auVar47[1] = -(pcVar7[0xd] == UNK_14330dbd1);
    auVar47[2] = -(pcVar7[0xe] == UNK_14330dbd2);
    auVar47[3] = -(pcVar7[0xf] == UNK_14330dbd3);
    auVar47[4] = -(pcVar7[0x10] == UNK_14330dbd4);
    auVar47[5] = -(pcVar7[0x11] == UNK_14330dbd5);
    auVar47[6] = -(pcVar7[0x12] == UNK_14330dbd6);
    auVar47[7] = -(pcVar7[0x13] == UNK_14330dbd7);
    auVar47[8] = -(pcVar7[0x14] == UNK_14330dbd8);
    auVar47[9] = -(pcVar7[0x15] == UNK_14330dbd9);
    auVar47[10] = -(pcVar7[0x16] == UNK_14330dbda);
    auVar47[0xb] = -(pcVar7[0x17] == UNK_14330dbdb);
    auVar47[0xc] = -(pcVar7[0x18] == UNK_14330dbdc);
    auVar47[0xd] = -(pcVar7[0x19] == UNK_14330dbdd);
    auVar47[0xe] = -(pcVar7[0x1a] == UNK_14330dbde);
    auVar47[0xf] = -(pcVar7[0x1b] == UNK_14330dbdf);
    auVar34[0] = -(*pcVar7 == UNK_14330dbe0);
    auVar34[1] = -(pcVar7[1] == UNK_14330dbe1);
    auVar34[2] = -(pcVar7[2] == UNK_14330dbe2);
    auVar34[3] = -(pcVar7[3] == UNK_14330dbe3);
    auVar34[4] = -(pcVar7[4] == UNK_14330dbe4);
    auVar34[5] = -(pcVar7[5] == UNK_14330dbe5);
    auVar34[6] = -(pcVar7[6] == UNK_14330dbe6);
    auVar34[7] = -(pcVar7[7] == UNK_14330dbe7);
    auVar34[8] = -(pcVar7[8] == UNK_14330dbe8);
    auVar34[9] = -(pcVar7[9] == UNK_14330dbe9);
    auVar34[10] = -(pcVar7[10] == UNK_14330dbea);
    auVar34[0xb] = -(pcVar7[0xb] == UNK_14330dbeb);
    auVar34[0xc] = -(pcVar7[0xc] == UNK_14330dbec);
    auVar34[0xd] = -(pcVar7[0xd] == UNK_14330dbed);
    auVar34[0xe] = -(pcVar7[0xe] == UNK_14330dbee);
    auVar34[0xf] = -(pcVar7[0xf] == UNK_14330dbef);
    auVar34 = auVar34 & auVar47;
    if ((ushort)((ushort)(SUB161(auVar34 >> 7,0) & 1) | (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar34[0xf] >> 7) << 0xf) == 0xffff) {
      if ((char)param_1[0x1d] == '\0') {
        uStack_110 = param_3;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_14330def0);
      }
      if ((char)param_1[0x1c] == '\0') {
        uStack_110 = param_3;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_14330df08);
      }
      uStack_110 = param_3;
      pdb_140a596f0(&lStack_240,param_4,pcVar7,0x1c,&UNK_14330df20);
      uStack_f1 = 1;
      lStack_1f0 = pdb_1406d0830(&lStack_240);
      uStack_f1 = 1;
      lStack_108 = pdb_140315970(&lStack_1f0);
      iStack_1f8 = *(int *)((longlong)param_1 + 0xe4);
      fStack_1f4 = *(float *)((longlong)param_1 + 0xec);
      uStack_f1 = 1;
      uVar25 = pdb_140df4400(&UNK_14330df38,0x13);
      uStack_f1 = 1;
      uVar25 = pdb_140a2e580(param_5,uVar25);
      uStack_f1 = 1;
      uVar26 = pdb_140df4400(&UNK_14330df4b,0x12);
      uStack_f1 = 1;
      uVar26 = pdb_140a2e580(param_5,uVar26);
      uStack_f1 = 1;
      uVar23 = pdb_140df4400(&UNK_14330df5d,0x15);
      uStack_f1 = 1;
      uVar23 = pdb_140a2e580(param_5,uVar23);
      uStack_f1 = 1;
      uVar24 = pdb_140df4400(&UNK_14330df72,0x15);
      uStack_f1 = 1;
      uVar24 = pdb_140a2e580(param_5,uVar24);
      fVar60 = fVar15 + fVar15;
      fVar57 = fVar14 * (fVar14 + fVar14);
      fVar62 = fVar16 + fVar16;
      fVar63 = fVar14 * fVar62 - fVar60 * fVar41;
      fVar54 = (fVar14 + fVar14) * fVar41;
      fVar56 = fVar15 * fVar62 + fVar54;
      fVar58 = _UNK_142e378e4 - (fVar57 + fVar15 * fVar60);
      uStack_1d8 = (longlong *)
                   CONCAT44(fVar44 * (fVar14 * fVar60 + fVar62 * fVar41),
                            fVar44 * (_DAT_142e36f28 - (fVar16 * fVar62 + fVar15 * fVar60)));
      uStack_1d0 = (code *)CONCAT44(fVar44 * fVar63,fVar44 * fVar63);
      uStack_1c8 = CONCAT44(fVar55 * (_UNK_142e378e4 - (fVar57 + fVar16 * fVar62)),
                            fVar55 * (fVar14 * fVar60 - fVar62 * fVar41));
      uStack_1c0 = CONCAT44(fVar55 * fVar56,fVar55 * fVar56);
      uStack_1b8 = CONCAT44(fVar61 * (fVar15 * fVar62 - fVar54),
                            fVar61 * (fVar14 * fVar62 + fVar60 * fVar41));
      uStack_1b0 = CONCAT44(fVar61 * fVar58,fVar61 * fVar58);
      uStack_f1 = 1;
      fStack_1a8 = fVar43;
      fStack_1a4 = fVar53;
      pdb_140e07fe0(&lStack_148,&uStack_1d8);
      uStack_1d8 = (longlong *)lStack_148;
      uStack_1d0 = (code *)uStack_140;
      uStack_1c8 = (longlong)plStack_138;
      uStack_1c0 = (longlong)plStack_130;
      fStack_1a8 = fStack_1f4;
      fStack_1a4 = (float)iStack_1f8;
      fStack_1a0 = (float)uVar25;
      fStack_19c = (float)((ulonglong)uVar25 >> 0x20);
      iStack_190 = (int)uVar23;
      uStack_18c = (undefined4)((ulonglong)uVar23 >> 0x20);
      uStack_188 = (undefined4)uVar24;
      uStack_184 = (undefined4)((ulonglong)uVar24 >> 0x20);
      uStack_f1 = 1;
      uStack_198 = uVar26;
      uVar25 = pdb_1424c90e0(lStack_108,param_6,&uStack_1d8);
      uStack_fb = 1;
      uStack_1e0 = uVar25;
      uVar26 = pdb_140a2c590(uStack_110,param_1[0x12],param_1[0x13]);
      uStack_fb = 1;
      pdb_1408fd560(&lStack_1f0,uVar26);
      uStack_118 = uStack_210;
      uStack_128 = CONCAT44(uStack_21c,uStack_220);
      uStack_120 = uStack_218;
      uStack_11c = uStack_214;
      plStack_138 = plStack_230;
      plStack_130 = plStack_228;
      lStack_148 = lStack_240;
      uStack_140 = uStack_238;
      uStack_160 = pdb_1406d0830(uVar25);
      uStack_1d8 = (longlong *)lStack_1f0;
      uStack_1d0 = (code *)lStack_1e8;
      uStack_198 = lStack_148;
      iStack_190 = (int)uStack_140;
      uStack_18c = (undefined4)((ulonglong)uStack_140 >> 0x20);
      uStack_188 = SUB84(plStack_138,0);
      uStack_184 = (undefined4)((ulonglong)plStack_138 >> 0x20);
      plStack_180 = plStack_130;
      uStack_178 = (undefined4)uStack_128;
      uStack_174 = uStack_128._4_4_;
      uStack_170 = uStack_120;
      uStack_16c = uStack_11c;
      uStack_168 = uStack_118;
      uStack_1b8 = CONCAT44(fVar53,fVar43);
      uStack_1b0 = CONCAT44(fVar44,fVar59);
      uStack_fb = 0;
      uStack_1c8 = lVar8;
      uStack_1c0 = lVar11;
      fStack_1a8 = fVar55;
      fStack_1a4 = fVar61;
      fStack_1a0 = fVar40;
      fStack_19c = fVar42;
      pdb_1414ba730(&lStack_148,param_7,&uStack_1d8,&UNK_14330df88);
    }
    else {
      auVar48[0] = -(pcVar7[0xc] == UNK_14330dbf0);
      auVar48[1] = -(pcVar7[0xd] == UNK_14330dbf1);
      auVar48[2] = -(pcVar7[0xe] == UNK_14330dbf2);
      auVar48[3] = -(pcVar7[0xf] == UNK_14330dbf3);
      auVar48[4] = -(pcVar7[0x10] == UNK_14330dbf4);
      auVar48[5] = -(pcVar7[0x11] == UNK_14330dbf5);
      auVar48[6] = -(pcVar7[0x12] == UNK_14330dbf6);
      auVar48[7] = -(pcVar7[0x13] == UNK_14330dbf7);
      auVar48[8] = -(pcVar7[0x14] == UNK_14330dbf8);
      auVar48[9] = -(pcVar7[0x15] == UNK_14330dbf9);
      auVar48[10] = -(pcVar7[0x16] == UNK_14330dbfa);
      auVar48[0xb] = -(pcVar7[0x17] == UNK_14330dbfb);
      auVar48[0xc] = -(pcVar7[0x18] == UNK_14330dbfc);
      auVar48[0xd] = -(pcVar7[0x19] == UNK_14330dbfd);
      auVar48[0xe] = -(pcVar7[0x1a] == UNK_14330dbfe);
      auVar48[0xf] = -(pcVar7[0x1b] == UNK_14330dbff);
      auVar35[0] = -(*pcVar7 == UNK_14330dbe0);
      auVar35[1] = -(pcVar7[1] == UNK_14330dbe1);
      auVar35[2] = -(pcVar7[2] == UNK_14330dbe2);
      auVar35[3] = -(pcVar7[3] == UNK_14330dbe3);
      auVar35[4] = -(pcVar7[4] == UNK_14330dbe4);
      auVar35[5] = -(pcVar7[5] == UNK_14330dbe5);
      auVar35[6] = -(pcVar7[6] == UNK_14330dbe6);
      auVar35[7] = -(pcVar7[7] == UNK_14330dbe7);
      auVar35[8] = -(pcVar7[8] == UNK_14330dbe8);
      auVar35[9] = -(pcVar7[9] == UNK_14330dbe9);
      auVar35[10] = -(pcVar7[10] == UNK_14330dbea);
      auVar35[0xb] = -(pcVar7[0xb] == UNK_14330dbeb);
      auVar35[0xc] = -(pcVar7[0xc] == UNK_14330dbec);
      auVar35[0xd] = -(pcVar7[0xd] == UNK_14330dbed);
      auVar35[0xe] = -(pcVar7[0xe] == UNK_14330dbee);
      auVar35[0xf] = -(pcVar7[0xf] == UNK_14330dbef);
      auVar35 = auVar35 & auVar48;
      uStack_110 = param_3;
      if ((ushort)((ushort)(SUB161(auVar35 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar35[0xf] >> 7) << 0xf) != 0xffff) goto LAB_1414900e4;
      if (*(uint *)(param_1 + 0xe) == 2) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_14330de00);
      }
      if ((char)param_1[0x1c] == '\0') {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_14330de18);
      }
      if ((*(uint *)(param_1 + 0xe) & 1) == 0) {
        lStack_108 = 0;
      }
      else {
        lStack_108 = *(longlong *)((longlong)param_1 + 0x74);
      }
      pdb_140a596f0(&lStack_240,param_4,pcVar7,0x1c,&UNK_14330de30);
      uStack_f2 = 1;
      lStack_1f0 = pdb_1406d0830(&lStack_240);
      uStack_f2 = 1;
      uVar25 = pdb_140315970(&lStack_1f0);
      fVar54 = *(float *)((longlong)param_1 + 0x7c);
      iVar21 = *(int *)((longlong)param_1 + 0xe4);
      uStack_f2 = 1;
      uVar26 = pdb_140df4400(&UNK_14330de48,0x15);
      uStack_f2 = 1;
      uVar26 = pdb_140a2e580(param_5,uVar26);
      fVar56 = fVar15 + fVar15;
      fVar58 = fVar14 * (fVar14 + fVar14);
      fVar63 = fVar16 + fVar16;
      fVar64 = fVar14 * fVar63 - fVar56 * fVar41;
      fVar60 = (fVar14 + fVar14) * fVar41;
      fVar57 = fVar15 * fVar63 + fVar60;
      fVar62 = _UNK_142e378e4 - (fVar58 + fVar15 * fVar56);
      uStack_1d8 = (longlong *)
                   CONCAT44(fVar44 * (fVar14 * fVar56 + fVar63 * fVar41),
                            fVar44 * (_DAT_142e36f28 - (fVar16 * fVar63 + fVar15 * fVar56)));
      uStack_1d0 = (code *)CONCAT44(fVar44 * fVar64,fVar44 * fVar64);
      uStack_1c8 = CONCAT44(fVar55 * (_UNK_142e378e4 - (fVar58 + fVar16 * fVar63)),
                            fVar55 * (fVar14 * fVar56 - fVar63 * fVar41));
      uStack_1c0 = CONCAT44(fVar55 * fVar57,fVar55 * fVar57);
      uStack_1b8 = CONCAT44(fVar61 * (fVar15 * fVar63 - fVar60),
                            fVar61 * (fVar14 * fVar63 + fVar56 * fVar41));
      uStack_1b0 = CONCAT44(fVar61 * fVar62,fVar61 * fVar62);
      uStack_f2 = 1;
      fStack_1a8 = fVar43;
      fStack_1a4 = fVar53;
      pdb_140e07fe0(&lStack_148,&uStack_1d8);
      fStack_19c = (float)param_1[0x11];
      iStack_190 = (int)param_1[0xe];
      uStack_1d8 = (longlong *)lStack_148;
      uStack_1d0 = (code *)uStack_140;
      fStack_1a4 = (float)param_1[0x10];
      fStack_1a0 = (float)((ulonglong)param_1[0x10] >> 0x20);
      uStack_198 = CONCAT44(iVar21,(uint)*(byte *)((longlong)param_1 + 0x8c));
      uStack_18c = (undefined4)lStack_108;
      uStack_188 = (undefined4)((ulonglong)lStack_108 >> 0x20);
      uStack_f2 = 1;
      fStack_1a8 = fVar54;
      plStack_180 = (longlong *)uVar26;
      uVar25 = pdb_1424c93d0(uVar25,param_6,&uStack_1d8);
      uStack_f9 = 1;
      uStack_1e0 = uVar25;
      uVar26 = pdb_140a2c590(uStack_110,param_1[0x12],param_1[0x13]);
      uStack_f9 = 1;
      pdb_1408fd560(&lStack_1f0,uVar26);
      uStack_118 = uStack_210;
      uStack_128 = CONCAT44(uStack_21c,uStack_220);
      uStack_120 = uStack_218;
      uStack_11c = uStack_214;
      plStack_138 = plStack_230;
      plStack_130 = plStack_228;
      lStack_148 = lStack_240;
      uStack_140 = uStack_238;
      uStack_160 = pdb_1406d0830(uVar25);
      uStack_1d8 = (longlong *)lStack_1f0;
      uStack_1d0 = (code *)lStack_1e8;
      uStack_198 = lStack_148;
      iStack_190 = (int)uStack_140;
      uStack_18c = (undefined4)((ulonglong)uStack_140 >> 0x20);
      uStack_188 = SUB84(plStack_138,0);
      uStack_184 = (undefined4)((ulonglong)plStack_138 >> 0x20);
      plStack_180 = plStack_130;
      uStack_178 = (undefined4)uStack_128;
      uStack_174 = uStack_128._4_4_;
      uStack_170 = uStack_120;
      uStack_16c = uStack_11c;
      uStack_168 = uStack_118;
      uStack_1b8 = CONCAT44(fVar53,fVar43);
      uStack_1b0 = CONCAT44(fVar44,fVar59);
      uStack_f9 = 0;
      uStack_1c8 = lVar9;
      uStack_1c0 = lVar10;
      fStack_1a8 = fVar55;
      fStack_1a4 = fVar61;
      fStack_1a0 = fVar40;
      fStack_19c = fVar42;
      pdb_1414ba730(&lStack_148,param_7,&uStack_1d8,&UNK_14330de60);
    }
    goto code_r0x00014148eda4;
  case 0x1e:
    auVar49[0] = -(pcVar7[0xe] == UNK_14330dc20);
    auVar49[1] = -(pcVar7[0xf] == UNK_14330dc21);
    auVar49[2] = -(pcVar7[0x10] == UNK_14330dc22);
    auVar49[3] = -(pcVar7[0x11] == UNK_14330dc23);
    auVar49[4] = -(pcVar7[0x12] == UNK_14330dc24);
    auVar49[5] = -(pcVar7[0x13] == UNK_14330dc25);
    auVar49[6] = -(pcVar7[0x14] == UNK_14330dc26);
    auVar49[7] = -(pcVar7[0x15] == UNK_14330dc27);
    auVar49[8] = -(pcVar7[0x16] == UNK_14330dc28);
    auVar49[9] = -(pcVar7[0x17] == UNK_14330dc29);
    auVar49[10] = -(pcVar7[0x18] == UNK_14330dc2a);
    auVar49[0xb] = -(pcVar7[0x19] == UNK_14330dc2b);
    auVar49[0xc] = -(pcVar7[0x1a] == UNK_14330dc2c);
    auVar49[0xd] = -(pcVar7[0x1b] == UNK_14330dc2d);
    auVar49[0xe] = -(pcVar7[0x1c] == UNK_14330dc2e);
    auVar49[0xf] = -(pcVar7[0x1d] == UNK_14330dc2f);
    auVar36[0] = -(*pcVar7 == UNK_14330dc10);
    auVar36[1] = -(pcVar7[1] == UNK_14330dc11);
    auVar36[2] = -(pcVar7[2] == UNK_14330dc12);
    auVar36[3] = -(pcVar7[3] == UNK_14330dc13);
    auVar36[4] = -(pcVar7[4] == UNK_14330dc14);
    auVar36[5] = -(pcVar7[5] == UNK_14330dc15);
    auVar36[6] = -(pcVar7[6] == UNK_14330dc16);
    auVar36[7] = -(pcVar7[7] == UNK_14330dc17);
    auVar36[8] = -(pcVar7[8] == UNK_14330dc18);
    auVar36[9] = -(pcVar7[9] == UNK_14330dc19);
    auVar36[10] = -(pcVar7[10] == UNK_14330dc1a);
    auVar36[0xb] = -(pcVar7[0xb] == UNK_14330dc1b);
    auVar36[0xc] = -(pcVar7[0xc] == UNK_14330dc1c);
    auVar36[0xd] = -(pcVar7[0xd] == UNK_14330dc1d);
    auVar36[0xe] = -(pcVar7[0xe] == UNK_14330dc1e);
    auVar36[0xf] = -(pcVar7[0xf] == UNK_14330dc1f);
    auVar36 = auVar36 & auVar49;
    if ((ushort)((ushort)(SUB161(auVar36 >> 7,0) & 1) | (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar36[0xf] >> 7) << 0xf) != 0xffff) goto LAB_1414900e4;
    fStack_1a0 = fVar54;
    fStack_19c = fVar60;
    lStack_150 = lVar6;
    uStack_110 = pdb_140df4400(param_1[0x12],param_1[0x13]);
    pdb_14007ee60();
    uVar25 = *param_7;
    lStack_148 = pdb_140ed5970(uVar25);
    plStack_138 = (longlong *)param_7[1];
    plStack_130 = (longlong *)param_7[2];
    uStack_128 = param_7[3];
    plVar30 = plStack_138;
    if (plStack_138 == (longlong *)0x0) {
      plVar30 = plStack_130;
    }
    lVar31 = plVar30[2];
    if ((ulonglong)(*plVar30 - lVar31) < 0x68) {
      lStack_108 = lStack_148;
      pdb_142d7f1b0(plVar30,lVar31,0x68,1,1);
      lStack_148 = lStack_108;
    }
    lVar27 = plVar30[1];
    *(code **)(lVar27 + lVar31) = pdb_1414b8550;
    pfVar1 = (float *)(lVar27 + 8 + lVar31);
    *pfVar1 = fVar14;
    pfVar1[1] = fVar15;
    pfVar1[2] = fVar16;
    pfVar1[3] = fVar41;
    *(ulonglong *)(lVar27 + 0x18 + lVar31) = CONCAT44(fVar53,fVar43);
    *(float *)(lVar27 + 0x20 + lVar31) = fVar59;
    *(float *)(lVar27 + 0x24 + lVar31) = fVar44;
    *(ulonglong *)(lVar27 + 0x28 + lVar31) = CONCAT44(fVar61,fVar55);
    *(longlong *)(lVar27 + 0x30 + lVar31) = lStack_150;
    *(undefined4 *)(lVar27 + 0x38 + lVar31) = 0;
    *(undefined8 *)(lVar27 + 0x40 + lVar31) = uStack_110;
    *(undefined1 *)(lVar27 + 0x48 + lVar31) = 0x13;
    break;
  case 0x1f:
    auVar46[0] = -(pcVar7[0xf] == UNK_14330dc60);
    auVar46[1] = -(pcVar7[0x10] == UNK_14330dc61);
    auVar46[2] = -(pcVar7[0x11] == UNK_14330dc62);
    auVar46[3] = -(pcVar7[0x12] == UNK_14330dc63);
    auVar46[4] = -(pcVar7[0x13] == UNK_14330dc64);
    auVar46[5] = -(pcVar7[0x14] == UNK_14330dc65);
    auVar46[6] = -(pcVar7[0x15] == UNK_14330dc66);
    auVar46[7] = -(pcVar7[0x16] == UNK_14330dc67);
    auVar46[8] = -(pcVar7[0x17] == UNK_14330dc68);
    auVar46[9] = -(pcVar7[0x18] == UNK_14330dc69);
    auVar46[10] = -(pcVar7[0x19] == UNK_14330dc6a);
    auVar46[0xb] = -(pcVar7[0x1a] == UNK_14330dc6b);
    auVar46[0xc] = -(pcVar7[0x1b] == UNK_14330dc6c);
    auVar46[0xd] = -(pcVar7[0x1c] == UNK_14330dc6d);
    auVar46[0xe] = -(pcVar7[0x1d] == UNK_14330dc6e);
    auVar46[0xf] = -(pcVar7[0x1e] == UNK_14330dc6f);
    auVar33[0] = -(*pcVar7 == UNK_14330dc10);
    auVar33[1] = -(pcVar7[1] == UNK_14330dc11);
    auVar33[2] = -(pcVar7[2] == UNK_14330dc12);
    auVar33[3] = -(pcVar7[3] == UNK_14330dc13);
    auVar33[4] = -(pcVar7[4] == UNK_14330dc14);
    auVar33[5] = -(pcVar7[5] == UNK_14330dc15);
    auVar33[6] = -(pcVar7[6] == UNK_14330dc16);
    auVar33[7] = -(pcVar7[7] == UNK_14330dc17);
    auVar33[8] = -(pcVar7[8] == UNK_14330dc18);
    auVar33[9] = -(pcVar7[9] == UNK_14330dc19);
    auVar33[10] = -(pcVar7[10] == UNK_14330dc1a);
    auVar33[0xb] = -(pcVar7[0xb] == UNK_14330dc1b);
    auVar33[0xc] = -(pcVar7[0xc] == UNK_14330dc1c);
    auVar33[0xd] = -(pcVar7[0xd] == UNK_14330dc1d);
    auVar33[0xe] = -(pcVar7[0xe] == UNK_14330dc1e);
    auVar33[0xf] = -(pcVar7[0xf] == UNK_14330dc1f);
    auVar33 = auVar33 & auVar46;
    if ((ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) | (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar33[0xf] >> 7) << 0xf) != 0xffff) goto LAB_1414900e4;
    fStack_1a0 = fVar54;
    fStack_19c = fVar60;
    lStack_150 = lVar6;
    uStack_110 = pdb_140df4400(param_1[0x12],param_1[0x13]);
    pdb_14007ee60();
    uVar25 = *param_7;
    lStack_148 = pdb_140ed5970(uVar25);
    plStack_138 = (longlong *)param_7[1];
    plStack_130 = (longlong *)param_7[2];
    uStack_128 = param_7[3];
    plVar30 = plStack_138;
    if (plStack_138 == (longlong *)0x0) {
      plVar30 = plStack_130;
    }
    lVar31 = plVar30[2];
    if ((ulonglong)(*plVar30 - lVar31) < 0x68) {
      lStack_108 = lStack_148;
      pdb_142d7f1b0(plVar30,lVar31,0x68,1,1);
      lStack_148 = lStack_108;
    }
    lVar27 = plVar30[1];
    *(code **)(lVar27 + lVar31) = pdb_1414b8a60;
    pfVar1 = (float *)(lVar27 + 8 + lVar31);
    *pfVar1 = fVar14;
    pfVar1[1] = fVar15;
    pfVar1[2] = fVar16;
    pfVar1[3] = fVar41;
    *(ulonglong *)(lVar27 + 0x18 + lVar31) = CONCAT44(fVar53,fVar43);
    *(float *)(lVar27 + 0x20 + lVar31) = fVar59;
    *(float *)(lVar27 + 0x24 + lVar31) = fVar44;
    *(ulonglong *)(lVar27 + 0x28 + lVar31) = CONCAT44(fVar61,fVar55);
    *(longlong *)(lVar27 + 0x30 + lVar31) = lStack_150;
    *(undefined4 *)(lVar27 + 0x38 + lVar31) = 0;
    *(undefined8 *)(lVar27 + 0x40 + lVar31) = uStack_110;
    *(undefined1 *)(lVar27 + 0x48 + lVar31) = 0x15;
    *(longlong *)(lVar27 + 0x58 + lVar31) = lStack_148;
    plVar30[2] = lVar31 + 0x68;
    uStack_140 = uVar25;
    goto code_r0x00014148eda4;
  case 0x22:
    fStack_1a0 = fVar54;
    fStack_19c = fVar60;
    iVar21 = pub_142e32750(pcVar7,&UNK_14330dcd8,0x22);
    if (iVar21 != 0) goto LAB_1414900e4;
    lStack_150 = lVar6;
    uStack_110 = pdb_140df4400(param_1[0x12],param_1[0x13]);
    pdb_14007ee60();
    uVar25 = *param_7;
    lStack_148 = pdb_140ed5970(uVar25);
    plStack_138 = (longlong *)param_7[1];
    plStack_130 = (longlong *)param_7[2];
    uStack_128 = param_7[3];
    plVar30 = plStack_138;
    if (plStack_138 == (longlong *)0x0) {
      plVar30 = plStack_130;
    }
    lVar31 = plVar30[2];
    if ((ulonglong)(*plVar30 - lVar31) < 0x68) {
      lStack_108 = lStack_148;
      pdb_142d7f1b0(plVar30,lVar31,0x68,1,1);
      lStack_148 = lStack_108;
    }
    lVar27 = plVar30[1];
    *(code **)(lVar27 + lVar31) = pdb_1414b8c60;
    pfVar1 = (float *)(lVar27 + 8 + lVar31);
    *pfVar1 = fVar14;
    pfVar1[1] = fVar15;
    pfVar1[2] = fVar16;
    pfVar1[3] = fVar41;
    *(ulonglong *)(lVar27 + 0x18 + lVar31) = CONCAT44(fVar53,fVar43);
    *(float *)(lVar27 + 0x20 + lVar31) = fVar59;
    *(float *)(lVar27 + 0x24 + lVar31) = fVar44;
    *(ulonglong *)(lVar27 + 0x28 + lVar31) = CONCAT44(fVar61,fVar55);
    *(longlong *)(lVar27 + 0x30 + lVar31) = lStack_150;
    *(undefined4 *)(lVar27 + 0x38 + lVar31) = 0;
    *(undefined8 *)(lVar27 + 0x40 + lVar31) = uStack_110;
    *(undefined1 *)(lVar27 + 0x48 + lVar31) = 0xf;
    break;
  case 0x26:
    fStack_1a0 = fVar54;
    fStack_19c = fVar60;
    iVar21 = pub_142e32750(pcVar7,&UNK_14330dc70,0x26);
    if (iVar21 != 0) goto LAB_1414900e4;
    lStack_150 = lVar6;
    uStack_110 = pdb_140df4400(param_1[0x12],param_1[0x13]);
    pdb_14007ee60();
    uVar25 = *param_7;
    lStack_148 = pdb_140ed5970(uVar25);
    plStack_138 = (longlong *)param_7[1];
    plStack_130 = (longlong *)param_7[2];
    uStack_128 = param_7[3];
    plVar30 = plStack_138;
    if (plStack_138 == (longlong *)0x0) {
      plVar30 = plStack_130;
    }
    lVar31 = plVar30[2];
    if ((ulonglong)(*plVar30 - lVar31) < 0x68) {
      lStack_108 = lStack_148;
      pdb_142d7f1b0(plVar30,lVar31,0x68,1,1);
      lStack_148 = lStack_108;
    }
    lVar27 = plVar30[1];
    *(code **)(lVar27 + lVar31) = pdb_1414b84d0;
    pfVar1 = (float *)(lVar27 + 8 + lVar31);
    *pfVar1 = fVar14;
    pfVar1[1] = fVar15;
    pfVar1[2] = fVar16;
    pfVar1[3] = fVar41;
    *(ulonglong *)(lVar27 + 0x18 + lVar31) = CONCAT44(fVar53,fVar43);
    *(float *)(lVar27 + 0x20 + lVar31) = fVar59;
    *(float *)(lVar27 + 0x24 + lVar31) = fVar44;
    *(ulonglong *)(lVar27 + 0x28 + lVar31) = CONCAT44(fVar61,fVar55);
    *(longlong *)(lVar27 + 0x30 + lVar31) = lStack_150;
    *(undefined4 *)(lVar27 + 0x38 + lVar31) = 0;
    *(undefined8 *)(lVar27 + 0x40 + lVar31) = uStack_110;
    *(undefined1 *)(lVar27 + 0x48 + lVar31) = 5;
    break;
  case 0x2b:
    fStack_1a0 = fVar54;
    fStack_19c = fVar60;
    iVar21 = pub_142e32750(pcVar7,&UNK_14330dc96,0x2b);
    if (iVar21 == 0) {
      if (*param_1 != 0) {
        lStack_150 = lVar6;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_14330dfa0,0x2b,&UNK_14330dfd0);
      }
      lStack_150 = lVar6;
      uStack_110 = pdb_140df4400(param_1[0x12],param_1[0x13]);
      pdb_14007ee60();
      uVar25 = *param_7;
      lStack_148 = pdb_140ed5970(uVar25);
      plStack_138 = (longlong *)param_7[1];
      plStack_130 = (longlong *)param_7[2];
      uStack_128 = param_7[3];
      plVar30 = plStack_138;
      if (plStack_138 == (longlong *)0x0) {
        plVar30 = plStack_130;
      }
      lVar31 = plVar30[2];
      if ((ulonglong)(*plVar30 - lVar31) < 0x68) {
        lStack_108 = lStack_148;
        pdb_142d7f1b0(plVar30,lVar31,0x68,1,1);
        lStack_148 = lStack_108;
      }
      lVar27 = plVar30[1];
      *(code **)(lVar27 + lVar31) = pdb_1414b8850;
      pfVar1 = (float *)(lVar27 + 8 + lVar31);
      *pfVar1 = fVar14;
      pfVar1[1] = fVar15;
      pfVar1[2] = fVar16;
      pfVar1[3] = fVar41;
      *(ulonglong *)(lVar27 + 0x18 + lVar31) = CONCAT44(fVar53,fVar43);
      *(float *)(lVar27 + 0x20 + lVar31) = fVar59;
      *(float *)(lVar27 + 0x24 + lVar31) = fVar44;
      *(ulonglong *)(lVar27 + 0x28 + lVar31) = CONCAT44(fVar61,fVar55);
      *(longlong *)(lVar27 + 0x30 + lVar31) = lStack_150;
      *(undefined4 *)(lVar27 + 0x38 + lVar31) = 0;
      *(undefined8 *)(lVar27 + 0x40 + lVar31) = uStack_110;
      *(undefined1 *)(lVar27 + 0x48 + lVar31) = 2;
    }
    else {
      lStack_150 = lVar6;
      iVar21 = pub_142e32750(pcVar7,&UNK_14330dd60,0x2b);
      if (iVar21 != 0) goto LAB_1414900e4;
      uStack_110 = pdb_140df4400(param_1[0x12],param_1[0x13]);
      pdb_14007ee60();
      uVar25 = *param_7;
      lStack_148 = pdb_140ed5970(uVar25);
      plStack_138 = (longlong *)param_7[1];
      plStack_130 = (longlong *)param_7[2];
      uStack_128 = param_7[3];
      plVar30 = plStack_138;
      if (plStack_138 == (longlong *)0x0) {
        plVar30 = plStack_130;
      }
      lVar31 = plVar30[2];
      if ((ulonglong)(*plVar30 - lVar31) < 0x68) {
        lStack_108 = lStack_148;
        pdb_142d7f1b0(plVar30,lVar31,0x68,1,1);
        lStack_148 = lStack_108;
      }
      lVar27 = plVar30[1];
      *(code **)(lVar27 + lVar31) = pdb_1414b88d0;
      pfVar1 = (float *)(lVar27 + 8 + lVar31);
      *pfVar1 = fVar14;
      pfVar1[1] = fVar15;
      pfVar1[2] = fVar16;
      pfVar1[3] = fVar41;
      *(ulonglong *)(lVar27 + 0x18 + lVar31) = CONCAT44(fVar53,fVar43);
      *(float *)(lVar27 + 0x20 + lVar31) = fVar59;
      *(float *)(lVar27 + 0x24 + lVar31) = fVar44;
      *(ulonglong *)(lVar27 + 0x28 + lVar31) = CONCAT44(fVar61,fVar55);
      *(longlong *)(lVar27 + 0x30 + lVar31) = lStack_150;
      *(undefined4 *)(lVar27 + 0x38 + lVar31) = 0;
      *(undefined8 *)(lVar27 + 0x40 + lVar31) = uStack_110;
      *(undefined1 *)(lVar27 + 0x48 + lVar31) = 4;
    }
    break;
  case 0x31:
    fStack_1a0 = fVar54;
    fStack_19c = fVar60;
    iVar21 = pub_142e32750(pcVar7,&UNK_14330dd2f,0x31);
    if (iVar21 != 0) goto LAB_1414900e4;
    lStack_150 = lVar6;
    uStack_110 = pdb_140df4400(param_1[0x12],param_1[0x13]);
    pdb_14007ee60();
    uVar25 = *param_7;
    lStack_148 = pdb_140ed5970(uVar25);
    plStack_138 = (longlong *)param_7[1];
    plStack_130 = (longlong *)param_7[2];
    uStack_128 = param_7[3];
    plVar30 = plStack_138;
    if (plStack_138 == (longlong *)0x0) {
      plVar30 = plStack_130;
    }
    lVar31 = plVar30[2];
    if ((ulonglong)(*plVar30 - lVar31) < 0x68) {
      lStack_108 = lStack_148;
      pdb_142d7f1b0(plVar30,lVar31,0x68,1,1);
      lStack_148 = lStack_108;
    }
    lVar27 = plVar30[1];
    *(code **)(lVar27 + lVar31) = pdb_1414b8450;
    pfVar1 = (float *)(lVar27 + 8 + lVar31);
    *pfVar1 = fVar14;
    pfVar1[1] = fVar15;
    pfVar1[2] = fVar16;
    pfVar1[3] = fVar41;
    *(ulonglong *)(lVar27 + 0x18 + lVar31) = CONCAT44(fVar53,fVar43);
    *(float *)(lVar27 + 0x20 + lVar31) = fVar59;
    *(float *)(lVar27 + 0x24 + lVar31) = fVar44;
    *(ulonglong *)(lVar27 + 0x28 + lVar31) = CONCAT44(fVar61,fVar55);
    *(longlong *)(lVar27 + 0x30 + lVar31) = lStack_150;
    *(undefined4 *)(lVar27 + 0x38 + lVar31) = 0;
    *(undefined8 *)(lVar27 + 0x40 + lVar31) = uStack_110;
    *(undefined1 *)(lVar27 + 0x48 + lVar31) = 3;
  }
  *(longlong *)(lVar27 + 0x58 + lVar31) = lStack_148;
  plVar30[2] = lVar31 + 0x68;
  uStack_140 = uVar25;
code_r0x00014148eda4:
  lVar31 = lStack_148;
  uVar28 = (ulonglong)uStack_f8;
  if ((char)param_1[0x1c] == '\0') {
    cVar4 = *(char *)((longlong)param_1 + 0x15c);
  }
  else {
    plVar30 = plStack_138;
    if (plStack_138 == (longlong *)0x0) {
      plVar30 = plStack_130;
    }
    iVar21 = *(int *)((longlong)param_1 + 0xe4);
    lVar27 = plVar30[2];
    if ((ulonglong)(*plVar30 - lVar27) < 0x18) {
      pdb_142d7f1b0(plVar30,lVar27,0x18,1,1);
      uVar28 = (ulonglong)uStack_f8;
    }
    lVar8 = plVar30[1];
    *(code **)(lVar8 + lVar27) = pdb_1414b82a0;
    *(longlong *)(lVar8 + 8 + lVar27) = lVar31;
    *(int *)(lVar8 + 0x10 + lVar27) = iVar21;
    *(undefined1 *)(lVar8 + 0x14 + lVar27) = 0;
    plVar30[2] = lVar27 + 0x18;
    cVar4 = *(char *)((longlong)param_1 + 0x15c);
    lVar31 = lStack_148;
  }
  if (cVar4 == '\x02') {
    cVar4 = *(char *)((longlong)param_1 + 0x105);
  }
  else {
    iVar21 = *(int *)((longlong)param_1 + 0x15c);
    uVar25 = *(undefined8 *)((longlong)param_1 + 0x11c);
    uVar26 = *(undefined8 *)((longlong)param_1 + 0x124);
    uVar23 = *(undefined8 *)((longlong)param_1 + 300);
    uVar24 = *(undefined8 *)((longlong)param_1 + 0x134);
    uVar17 = *(undefined8 *)((longlong)param_1 + 0x13c);
    uVar18 = *(undefined8 *)((longlong)param_1 + 0x144);
    uVar19 = *(undefined8 *)((longlong)param_1 + 0x14c);
    uVar20 = *(undefined8 *)((longlong)param_1 + 0x154);
    plVar30 = plStack_138;
    if (plStack_138 == (longlong *)0x0) {
      plVar30 = plStack_130;
    }
    lVar27 = plVar30[2];
    lStack_148 = lVar31;
    if ((ulonglong)(*plVar30 - lVar27) < 0x58) {
      pdb_142d7f1b0(plVar30,lVar27,0x58,1,1);
      uVar28 = (ulonglong)uStack_f8;
    }
    lVar8 = plVar30[1];
    *(code **)(lVar8 + lVar27) = pdb_1414b8b30;
    *(longlong *)(lVar8 + 8 + lVar27) = lVar31;
    puVar2 = (undefined8 *)(lVar8 + 0x10 + lVar27);
    *puVar2 = uVar25;
    puVar2[1] = uVar26;
    puVar2 = (undefined8 *)(lVar8 + 0x20 + lVar27);
    *puVar2 = uVar23;
    puVar2[1] = uVar24;
    puVar2 = (undefined8 *)(lVar8 + 0x30 + lVar27);
    *puVar2 = uVar17;
    puVar2[1] = uVar18;
    puVar2 = (undefined8 *)(lVar8 + 0x40 + lVar27);
    *puVar2 = uVar19;
    puVar2[1] = uVar20;
    *(int *)(lVar8 + 0x50 + lVar27) = iVar21;
    *(undefined1 *)(lVar8 + 0x54 + lVar27) = 0;
    plVar30[2] = lVar27 + 0x58;
    cVar4 = *(char *)((longlong)param_1 + 0x105);
    lVar31 = lStack_148;
  }
  if (cVar4 == '\x02') {
    iVar21 = (int)param_1[10];
  }
  else {
    lVar27 = param_1[0x20];
    lVar8 = param_1[0x1e];
    lVar11 = param_1[0x1f];
    plVar30 = plStack_138;
    if (plStack_138 == (longlong *)0x0) {
      plVar30 = plStack_130;
    }
    lVar9 = plVar30[2];
    lStack_148 = lVar31;
    if ((ulonglong)(*plVar30 - lVar9) < 0x30) {
      pdb_142d7f1b0(plVar30,lVar9,0x30,1,1);
      uVar28 = (ulonglong)uStack_f8;
    }
    lVar10 = plVar30[1];
    *(code **)(lVar10 + lVar9) = pdb_1414b8ba0;
    *(longlong *)(lVar10 + 8 + lVar9) = lVar31;
    plVar3 = (longlong *)(lVar10 + 0x10 + lVar9);
    *plVar3 = lVar8;
    plVar3[1] = lVar11;
    *(longlong *)(lVar10 + 0x20 + lVar9) = lVar27;
    *(undefined1 *)(lVar10 + 0x28 + lVar9) = 0;
    plVar30[2] = lVar9 + 0x30;
    iVar21 = (int)param_1[10];
    lVar31 = lStack_148;
  }
  if (iVar21 == 1) {
    iStack_200 = *(int *)((longlong)param_1 + 0x5c);
    uStack_208 = *(undefined8 *)((longlong)param_1 + 0x54);
    plVar30 = plStack_138;
    if (plStack_138 == (longlong *)0x0) {
      plVar30 = plStack_130;
    }
    lVar27 = plVar30[2];
    lStack_148 = lVar31;
    if ((ulonglong)(*plVar30 - lVar27) < 0x20) {
      pdb_142d7f1b0(plVar30,lVar27,0x20,1,1);
      uVar28 = (ulonglong)uStack_f8;
    }
    lVar8 = plVar30[1];
    *(code **)(lVar8 + lVar27) = pdb_1414b80d0;
    *(longlong *)(lVar8 + 8 + lVar27) = lVar31;
    *(undefined8 *)(lVar8 + 0x10 + lVar27) = uStack_208;
    *(int *)(lVar8 + 0x18 + lVar27) = iStack_200;
    *(undefined1 *)(lVar8 + 0x1c + lVar27) = 0;
    plVar30[2] = lVar27 + 0x20;
    cVar4 = *(char *)((longlong)param_1 + 0x16e);
    lVar31 = lStack_148;
  }
  else {
    cVar4 = *(char *)((longlong)param_1 + 0x16e);
  }
  if (cVar4 == '\0') {
    cVar4 = (char)param_1[2];
  }
  else {
    plVar30 = plStack_138;
    if (plStack_138 == (longlong *)0x0) {
      plVar30 = plStack_130;
    }
    lVar27 = plVar30[2];
    lStack_148 = lVar31;
    if ((ulonglong)(*plVar30 - lVar27) < 0x18) {
      pdb_142d7f1b0(plVar30,lVar27,0x18,1,1);
      uVar28 = (ulonglong)uStack_f8;
    }
    lVar8 = plVar30[1];
    *(code **)(lVar8 + lVar27) = pdb_1414b89b0;
    *(longlong *)(lVar8 + 8 + lVar27) = lVar31;
    *(undefined1 *)(lVar8 + 0x10 + lVar27) = 0;
    plVar30[2] = lVar27 + 0x18;
    cVar4 = (char)param_1[2];
    lVar31 = lStack_148;
  }
  if (cVar4 == '\0') {
    cVar4 = *(char *)((longlong)param_1 + 0x16f);
  }
  else {
    plVar30 = plStack_138;
    if (plStack_138 == (longlong *)0x0) {
      plVar30 = plStack_130;
    }
    lVar27 = param_1[3];
    lVar8 = plVar30[2];
    lStack_148 = lVar31;
    if ((ulonglong)(*plVar30 - lVar8) < 0x28) {
      pdb_142d7f1b0(plVar30,lVar8,0x28,1,1);
      uVar28 = (ulonglong)uStack_f8;
    }
    lVar11 = plVar30[1];
    *(code **)(lVar11 + lVar8) = pdb_1414b8e80;
    *(longlong *)(lVar11 + 8 + lVar8) = lVar31;
    *(longlong *)(lVar11 + 0x10 + lVar8) = lVar27;
    *(int *)(lVar11 + 0x18 + lVar8) = (int)uVar28;
    *(undefined1 *)(lVar11 + 0x20 + lVar8) = 0;
    plVar30[2] = lVar8 + 0x28;
    cVar4 = *(char *)((longlong)param_1 + 0x16f);
    lVar31 = lStack_148;
  }
  if (cVar4 == '\0') {
    cVar4 = *(char *)((longlong)param_1 + 0x16c);
  }
  else {
    fVar61 = fVar41 * fVar41;
    fVar60 = fVar16 * fVar16;
    fVar44 = fVar15 * fVar15 + fVar14 * fVar14;
    fVar54 = (fVar61 - (fVar44 + fVar60)) * _DAT_142e378f0;
    fVar55 = (fVar61 - (fVar44 + fVar60)) * _UNK_142e378f4;
    fVar61 = (fVar61 - (fVar44 + fVar60)) * _UNK_142e378f8;
    fVar44 = _UNK_142e378f8 * fVar16 + _UNK_142e378f4 * fVar15 + _DAT_142e378f0 * fVar14;
    fVar44 = fVar44 + fVar44;
    fVar60 = fVar14 * _DAT_142e36f28;
    fVar40 = fVar15 * _DAT_142e36f28;
    fVar42 = fVar41 + fVar41;
    plVar30 = plStack_138;
    if (plStack_138 == (longlong *)0x0) {
      plVar30 = plStack_130;
    }
    lVar27 = plVar30[2];
    lStack_148 = lVar31;
    if ((ulonglong)(*plVar30 - lVar27) < 0x30) {
      pdb_142d7f1b0(plVar30,lVar27,0x30,1,1);
      uVar28 = (ulonglong)uStack_f8;
    }
    lVar8 = plVar30[1];
    *(code **)(lVar8 + lVar27) = pdb_1414b8ce0;
    *(longlong *)(lVar8 + 8 + lVar27) = lVar31;
    *(ulonglong *)(lVar8 + 0x10 + lVar27) = CONCAT44(fVar53,fVar43);
    *(float *)(lVar8 + 0x18 + lVar27) = fVar59;
    *(ulonglong *)(lVar8 + 0x1c + lVar27) =
         CONCAT44(fVar42 * (fVar16 * 0.0 - fVar60) + fVar44 * fVar15 + fVar55,
                  fVar42 * (fVar40 - fVar16 * 0.0) + fVar44 * fVar14 + fVar54);
    *(float *)(lVar8 + 0x24 + lVar27) =
         fVar42 * (fVar14 * 0.0 - fVar15 * 0.0) + fVar44 * fVar16 + fVar61;
    *(undefined1 *)(lVar8 + 0x28 + lVar27) = 0;
    plVar30[2] = lVar27 + 0x30;
    cVar4 = *(char *)((longlong)param_1 + 0x16c);
    lVar31 = lStack_148;
  }
  if (cVar4 == '\x02') {
    iVar21 = (int)param_1[4];
  }
  else {
    plVar30 = plStack_138;
    if (plStack_138 == (longlong *)0x0) {
      plVar30 = plStack_130;
    }
    uVar5 = *(undefined1 *)((longlong)param_1 + 0x16d);
    lVar27 = plVar30[2];
    uVar29 = uVar28;
    lStack_148 = lVar31;
    if ((ulonglong)(*plVar30 - lVar27) < 0x28) {
      pdb_142d7f1b0(plVar30,lVar27,0x28,1,1);
      uVar29 = (ulonglong)uStack_f8;
    }
    lVar8 = plVar30[1];
    *(code **)(lVar8 + lVar27) = pdb_1414b8e20;
    *(longlong *)(lVar8 + 8 + lVar27) = lVar31;
    *(ulonglong *)(lVar8 + 0x10 + lVar27) = uVar28;
    *(undefined4 *)(lVar8 + 0x18 + lVar27) = 0;
    *(char *)(lVar8 + 0x1c + lVar27) = cVar4;
    *(undefined1 *)(lVar8 + 0x1d + lVar27) = uVar5;
    *(undefined1 *)(lVar8 + 0x20 + lVar27) = 0;
    plVar30[2] = lVar27 + 0x28;
    iVar21 = (int)param_1[4];
    uVar28 = uVar29;
    lVar31 = lStack_148;
  }
  if (iVar21 == 1) {
    plVar30 = plStack_138;
    if (plStack_138 == (longlong *)0x0) {
      plVar30 = plStack_130;
    }
    lVar27 = param_1[5];
    lVar8 = plVar30[2];
    lStack_148 = lVar31;
    if ((ulonglong)(*plVar30 - lVar8) < 0x20) {
      pdb_142d7f1b0(plVar30,lVar8,0x20,1,1);
      uVar28 = (ulonglong)uStack_f8;
    }
    lVar11 = plVar30[1];
    *(code **)(lVar11 + lVar8) = pdb_1414b8950;
    *(longlong *)(lVar11 + 8 + lVar8) = lVar31;
    *(longlong *)(lVar11 + 0x10 + lVar8) = lVar27;
    *(undefined1 *)(lVar11 + 0x18 + lVar8) = 0;
    plVar30[2] = lVar8 + 0x20;
    iVar21 = (int)param_1[6];
    lVar31 = lStack_148;
  }
  else {
    iVar21 = (int)param_1[6];
  }
  if (iVar21 == 1) {
    plVar30 = plStack_138;
    if (plStack_138 == (longlong *)0x0) {
      plVar30 = plStack_130;
    }
    lVar27 = param_1[7];
    lVar8 = plVar30[2];
    lStack_148 = lVar31;
    if ((ulonglong)(*plVar30 - lVar8) < 0x20) {
      pdb_142d7f1b0(plVar30,lVar8,0x20,1,1);
      uVar28 = (ulonglong)uStack_f8;
    }
    lVar11 = plVar30[1];
    *(code **)(lVar11 + lVar8) = pdb_1414b8950;
    *(longlong *)(lVar11 + 8 + lVar8) = lVar31;
    *(longlong *)(lVar11 + 0x10 + lVar8) = lVar27;
    *(undefined1 *)(lVar11 + 0x18 + lVar8) = 0;
    plVar30[2] = lVar8 + 0x20;
    iVar21 = (int)*param_1;
    lVar31 = lStack_148;
  }
  else {
    iVar21 = (int)*param_1;
  }
  if (iVar21 == 1) {
    plVar30 = plStack_138;
    if (plStack_138 == (longlong *)0x0) {
      plVar30 = plStack_130;
    }
    lVar27 = param_1[1];
    lVar8 = plVar30[2];
    lStack_148 = lVar31;
    if ((ulonglong)(*plVar30 - lVar8) < 0x20) {
      pdb_142d7f1b0(plVar30,lVar8,0x20,1,1);
      uVar28 = (ulonglong)uStack_f8;
    }
    lVar11 = plVar30[1];
    *(code **)(lVar11 + lVar8) = pdb_1414b8ee0;
    *(longlong *)(lVar11 + 8 + lVar8) = lVar31;
    *(longlong *)(lVar11 + 0x10 + lVar8) = lVar27;
    *(undefined1 *)(lVar11 + 0x18 + lVar8) = 0;
    plVar30[2] = lVar8 + 0x20;
    iVar21 = (int)param_1[0x1d];
    lVar31 = lStack_148;
  }
  else {
    iVar21 = (int)param_1[0x1d];
  }
  if (iVar21 == 1) {
    plVar30 = plStack_138;
    if (plStack_138 == (longlong *)0x0) {
      plVar30 = plStack_130;
    }
    iVar21 = *(int *)((longlong)param_1 + 0xec);
    lVar27 = plVar30[2];
    lStack_148 = lVar31;
    if ((ulonglong)(*plVar30 - lVar27) < 0x18) {
      pdb_142d7f1b0(plVar30,lVar27,0x18,1,1);
      uVar28 = (ulonglong)uStack_f8;
    }
    lVar8 = plVar30[1];
    *(code **)(lVar8 + lVar27) = pdb_1414b8ae0;
    *(longlong *)(lVar8 + 8 + lVar27) = lVar31;
    *(int *)(lVar8 + 0x10 + lVar27) = iVar21;
    *(undefined1 *)(lVar8 + 0x14 + lVar27) = 0;
    plVar30[2] = lVar27 + 0x18;
    iVar21 = (int)param_1[0xe];
    lVar27 = lStack_148;
  }
  else {
    iVar21 = (int)param_1[0xe];
    lVar27 = lVar31;
  }
  if (iVar21 == 2) {
    iVar21 = (int)param_1[0x21];
  }
  else {
    lVar8 = param_1[0xe];
    lVar11 = param_1[0xf];
    lVar9 = param_1[0x10];
    lVar10 = param_1[0x11];
    plVar30 = plStack_138;
    if (plStack_138 == (longlong *)0x0) {
      plVar30 = plStack_130;
    }
    lVar12 = plVar30[2];
    lStack_148 = lVar27;
    if ((ulonglong)(*plVar30 - lVar12) < 0x38) {
      pdb_142d7f1b0(plVar30,lVar12,0x38,1,1);
      uVar28 = (ulonglong)uStack_f8;
    }
    lVar13 = plVar30[1];
    *(code **)(lVar13 + lVar12) = pdb_1414b8dc0;
    *(longlong *)(lVar13 + 8 + lVar12) = lVar27;
    plVar3 = (longlong *)(lVar13 + 0x10 + lVar12);
    *plVar3 = lVar8;
    plVar3[1] = lVar11;
    plVar3 = (longlong *)(lVar13 + 0x20 + lVar12);
    *plVar3 = lVar9;
    plVar3[1] = lVar10;
    *(undefined1 *)(lVar13 + 0x30 + lVar12) = 0;
    plVar30[2] = lVar12 + 0x38;
    iVar21 = (int)param_1[0x21];
    lVar27 = lStack_148;
  }
  if (iVar21 == 1) {
    fVar61 = fVar41 * fVar41;
    fVar55 = fVar16 * fVar16;
    lVar8 = param_1[0x22];
    fVar40 = (float)lVar8;
    fVar42 = (float)((ulonglong)lVar8 >> 0x20);
    fVar54 = fVar15 * fVar15 + fVar14 * fVar14;
    fVar41 = fVar41 + fVar41;
    fVar44 = *(float *)((longlong)param_1 + 0x10c);
    fVar60 = fVar16 * fVar42 + fVar15 * fVar40 + fVar14 * fVar44;
    fVar60 = fVar60 + fVar60;
    plVar30 = plStack_138;
    if (plStack_138 == (longlong *)0x0) {
      plVar30 = plStack_130;
    }
    lVar9 = param_1[0x23];
    lVar11 = plVar30[2];
    lStack_148 = lVar27;
    if ((ulonglong)(*plVar30 - lVar11) < 0x38) {
      pdb_142d7f1b0(plVar30,lVar11,0x38,1,1);
      uVar28 = (ulonglong)uStack_f8;
    }
    lVar10 = plVar30[1];
    *(code **)(lVar10 + lVar11) = pdb_1414b8c00;
    *(longlong *)(lVar10 + 8 + lVar11) = lVar27;
    pfVar1 = (float *)(lVar10 + 0x10 + lVar11);
    *pfVar1 = fVar43 + (fVar15 * fVar42 - fVar40 * fVar16) * fVar41 +
                       fVar60 * fVar14 + fVar44 * (fVar61 - (fVar54 + fVar55));
    pfVar1[1] = fVar53 + (fVar16 * fVar44 - fVar42 * fVar14) * fVar41 +
                         fVar60 * fVar15 + fVar40 * (fVar61 - (fVar54 + fVar55));
    pfVar1[2] = fVar59 + (fVar14 * fVar40 - fVar44 * fVar15) * fVar41 +
                         fVar60 * fVar16 + fVar42 * (fVar61 - (fVar54 + fVar55));
    pfVar1[3] = fVar44;
    *(longlong *)(lVar10 + 0x20 + lVar11) = lVar8;
    *(int *)(lVar10 + 0x28 + lVar11) = (int)lVar9;
    *(int *)(lVar10 + 0x2c + lVar11) = (int)uVar28;
    *(undefined2 *)(lVar10 + 0x30 + lVar11) = 0;
    *(undefined1 *)(lVar10 + 0x32 + lVar11) = 0;
    *(undefined1 *)(lVar10 + 0x34 + lVar11) = 0;
    plVar30[2] = lVar11 + 0x38;
    iVar21 = (int)param_1[0xc];
    lVar27 = lStack_148;
  }
  else {
    iVar21 = (int)param_1[0xc];
  }
  lStack_148 = lVar27;
  if (iVar21 == 1) {
    uVar29 = (ulonglong)uStack_1d0 >> 0x20;
    uStack_1d0 = (code *)CONCAT44((int)uVar29,*(int *)((longlong)param_1 + 0x6c));
    uStack_1d8 = *(longlong **)((longlong)param_1 + 100);
    plVar30 = plStack_138;
    if (plStack_138 == (longlong *)0x0) {
      plVar30 = plStack_130;
    }
    lVar8 = plVar30[2];
    if ((ulonglong)(*plVar30 - lVar8) < 0x28) {
      pdb_142d7f1b0(plVar30,lVar8,0x28,1,1);
      uVar28 = (ulonglong)uStack_f8;
    }
    lVar11 = plVar30[1];
    *(code **)(lVar11 + lVar8) = pdb_1414b82f0;
    *(longlong *)(lVar11 + 8 + lVar8) = lVar27;
    *(int *)(lVar11 + 0x10 + lVar8) = (int)uVar28;
    *(longlong **)(lVar11 + 0x14 + lVar8) = uStack_1d8;
    *(undefined4 *)(lVar11 + 0x1c + lVar8) = (undefined4)uStack_1d0;
    *(undefined1 *)(lVar11 + 0x20 + lVar8) = 0;
    plVar30[2] = lVar8 + 0x28;
  }
  pdb_1408ddcc0(param_8,uVar28,lVar31);
  return lVar31;
}

