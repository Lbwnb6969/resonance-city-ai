// VA 0x14287e0f0, PDB extent 4600 bytes
// system_tree::process_tree_cmds::process_tree_cmds
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/tree-tool/src/process_tree_cmds.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_tree::process_tree_cmds::process_tree_cmds
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/tree-tool/src/process_tree_cmds.rs
   Extent: 4600 */

void pdb_14287e0f0(undefined8 *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,ulonglong *param_6,undefined8 *param_7,longlong *param_8,
                  undefined8 *param_9,undefined8 *param_10,longlong *param_11)

{
  undefined8 *puVar1;
  float *pfVar2;
  undefined4 *puVar3;
  float fVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  float fVar8;
  undefined8 uVar9;
  ulonglong *puVar10;
  undefined4 uVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  byte bVar28;
  char cVar29;
  int iVar30;
  longlong lVar31;
  undefined8 *puVar32;
  ulonglong *puVar33;
  undefined8 uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  undefined *puVar37;
  int *piVar38;
  longlong lVar39;
  longlong lVar40;
  ulonglong uVar41;
  undefined4 uVar42;
  longlong lVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  longlong lVar46;
  longlong lVar47;
  ulonglong *puVar48;
  undefined7 uVar49;
  int iVar50;
  longlong lVar51;
  ulonglong uVar52;
  undefined1 uVar53;
  longlong lVar54;
  undefined4 uVar55;
  float fVar56;
  float fVar57;
  undefined4 uVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar67;
  float fVar68;
  undefined8 in_stack_fffffffffffffd98;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  longlong lStack_240;
  ulonglong *puStack_238;
  undefined4 *puStack_230;
  undefined *puStack_228;
  longlong lStack_220;
  undefined4 *puStack_218;
  longlong lStack_210;
  longlong lStack_208;
  longlong lStack_200;
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  code *pcStack_1e8;
  longlong lStack_1e0;
  undefined8 uStack_1d8;
  longlong lStack_1d0;
  longlong lStack_1c8;
  undefined *puStack_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 uStack_1b0;
  undefined4 *puStack_1a8;
  undefined4 *puStack_1a0;
  longlong lStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  int iStack_14c;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined8 **ppuStack_138;
  ulonglong uStack_130;
  longlong lStack_128;
  longlong lStack_120;
  ulonglong uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  longlong *plStack_100;
  undefined1 uStack_f2;
  char cStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  puStack_1f8 = param_4;
  lVar31 = pdb_1406d0830(*param_10);
  puVar1 = (undefined8 *)(lVar31 + 0x20);
  puVar32 = (undefined8 *)(lVar31 + 0x28);
  if (*(char *)(lVar31 + 0x298) == '\0') {
    puVar32 = (undefined8 *)(lVar31 + 0x10);
    puVar1 = (undefined8 *)(lVar31 + 8);
  }
  uStack_248 = *puVar32;
  uStack_250 = *puVar1;
  puVar48 = (ulonglong *)*param_3;
  lVar31 = param_3[1];
  uVar52 = *puVar48;
  uVar35 = 0;
  uVar44 = uVar52 - *(ulonglong *)(lVar31 + 0x18);
  if (uVar52 < *(ulonglong *)(lVar31 + 0x18)) {
    uVar44 = uVar35;
  }
  uVar36 = uVar52 - *(ulonglong *)(lVar31 + 0x38);
  if (uVar52 < *(ulonglong *)(lVar31 + 0x38)) {
    uVar36 = uVar35;
  }
  lVar47 = uVar44 * 0x20 + *(longlong *)(lVar31 + 8);
  uVar52 = *(ulonglong *)(lVar31 + 0x10) - uVar44;
  if (*(ulonglong *)(lVar31 + 0x10) < uVar44) {
    lVar47 = 8;
    uVar52 = uVar35;
  }
  lVar51 = uVar36 * 0x20 + *(longlong *)(lVar31 + 0x28);
  uVar44 = *(ulonglong *)(lVar31 + 0x30) - uVar36;
  if (*(ulonglong *)(lVar31 + 0x30) < uVar36) {
    lVar51 = 8;
    uVar44 = uVar35;
  }
  *puVar48 = (*(longlong *)(lVar31 + 0x40) - uVar44) - uVar52;
  uVar11 = _DAT_143006a28;
  lVar43 = uVar52 * 0x20 + lVar47;
  lVar54 = uVar44 * 0x20 + lVar51;
  uStack_108 = *(undefined4 *)((longlong)param_1 + 0x1c);
  uStack_1b0 = *param_1;
  puStack_1a8 = (undefined4 *)param_1[2];
  lStack_1c8 = *param_2;
  lStack_128 = param_2[1];
  uStack_118 = CONCAT44(uStack_118._4_4_,*(undefined4 *)((longlong)param_2 + 0x14));
  uStack_104 = *(undefined4 *)((longlong)param_8 + 0x1c);
  lStack_120 = *param_8;
  puStack_1a0 = (undefined4 *)param_8[2];
  lStack_198 = lStack_120 + 0x20;
  lVar31 = lStack_1c8;
  puVar10 = _DAT_143ca8e90;
  while( true ) {
    while( true ) {
      if ((lVar47 == 0) || (lVar47 == lVar43)) {
        if ((lVar51 == 0) || (lVar51 == lVar54)) {
          puStack_238 = (ulonglong *)*param_5;
          lVar31 = param_5[1];
          uVar52 = *puStack_238;
          uVar35 = 0;
          uVar44 = uVar52 - *(ulonglong *)(lVar31 + 0x18);
          if (uVar52 < *(ulonglong *)(lVar31 + 0x18)) {
            uVar44 = uVar35;
          }
          uVar36 = uVar52 - *(ulonglong *)(lVar31 + 0x38);
          if (uVar52 < *(ulonglong *)(lVar31 + 0x38)) {
            uVar36 = uVar35;
          }
          lVar47 = uVar44 * 0x48 + *(longlong *)(lVar31 + 8);
          uVar52 = *(ulonglong *)(lVar31 + 0x10) - uVar44;
          if (*(ulonglong *)(lVar31 + 0x10) < uVar44) {
            lVar47 = 8;
            uVar52 = uVar35;
          }
          lVar51 = uVar36 * 0x48 + *(longlong *)(lVar31 + 0x28);
          uVar44 = *(ulonglong *)(lVar31 + 0x30) - uVar36;
          if (*(ulonglong *)(lVar31 + 0x30) < uVar36) {
            lVar51 = 8;
            uVar44 = uVar35;
          }
          *puStack_238 = (*(longlong *)(lVar31 + 0x40) - uVar44) - uVar52;
          cVar26 = UNK_1435a9fcf;
          cVar25 = UNK_1435a9fce;
          cVar24 = UNK_1435a9fcd;
          cVar23 = UNK_1435a9fcc;
          cVar22 = UNK_1435a9fcb;
          cVar21 = UNK_1435a9fca;
          cVar20 = UNK_1435a9fc9;
          cVar19 = UNK_1435a9fc8;
          cVar18 = UNK_1435a9fc7;
          cVar17 = UNK_1435a9fc6;
          cVar16 = UNK_1435a9fc5;
          cVar15 = UNK_1435a9fc4;
          cVar14 = UNK_1435a9fc3;
          cVar13 = UNK_1435a9fc2;
          cVar12 = UNK_1435a9fc1;
          cVar29 = DAT_1435a9fc0;
          uVar11 = _DAT_143006a28;
          puStack_1c0 = (undefined *)*param_9;
          plStack_100 = (longlong *)param_7[1];
          if (plStack_100 == (longlong *)0x0) {
            plStack_100 = (longlong *)param_7[2];
          }
          lStack_220 = lVar47 + uVar52 * 0x48;
          lStack_210 = lVar51 + uVar44 * 0x48;
          puVar37 = puStack_1c0 + 0x98;
          uStack_1d8 = *param_7;
          uStack_1b8 = *(undefined4 *)((longlong)param_6 + 0x1c);
          uStack_130 = *param_6;
          puStack_230 = (undefined4 *)param_6[2];
          lStack_208 = uStack_130 + 0x20;
          uStack_1b4 = *(undefined4 *)((longlong)param_11 + 0x1c);
          lStack_1d0 = *param_11;
          puStack_218 = (undefined4 *)param_11[2];
          lStack_200 = lStack_1d0 + 0x20;
          fVar56 = (float)_DAT_1430132e0;
          uVar52 = (ulonglong)_DAT_1430132e0 >> 0x20;
          puStack_228 = puVar37;
          goto LAB_14287e729;
        }
        lVar47 = 0;
        lVar40 = lVar51;
        lVar51 = lVar51 + 0x20;
      }
      else {
        lVar40 = lVar47;
        lVar47 = lVar47 + 0x20;
      }
      *puVar48 = *puVar48 + 1;
      uVar34 = *(undefined8 *)(lVar40 + 0x10);
      uVar42 = *(undefined4 *)(lVar40 + 0x18);
      uStack_258 = *(undefined8 *)(lVar40 + 8);
      *puStack_1a8 = uStack_108;
      puVar33 = (ulonglong *)pdb_140a2fc10(uStack_1b0);
      uVar58 = (undefined4)((ulonglong)in_stack_fffffffffffffd98 >> 0x20);
      if (puVar33 != (ulonglong *)0x0) break;
      if (1 < *puVar10) {
        puStack_1f0 = &uStack_258;
        pcStack_1e8 = pdb_14287f3c0;
        uStack_190 = 0;
        puStack_188 = &UNK_1435aa0e4;
        uStack_180 = 0x1e;
        uStack_178 = 0;
        uStack_170 = &UNK_1435aa010;
        uStack_168 = 0x31;
        uStack_160 = 2;
        uStack_15c = 0;
        uStack_158 = 0x435aa0e4;
        uStack_154 = 1;
        uStack_150 = 0x1e;
        iStack_14c = 0;
        uStack_148 = 0x2f00000001;
        puStack_140 = &UNK_1435aa120;
        ppuStack_138 = &puStack_1f0;
        pdb_140f332f0(&uStack_f2,&uStack_190);
      }
    }
    uVar52 = *puVar33;
    if (((*(ulonglong *)(lStack_128 + 0x10) <= (ulonglong)~(uint)uVar52) ||
        (piVar38 = (int *)((ulonglong)~(uint)uVar52 * 0x18 + *(longlong *)(lStack_128 + 8)),
        piVar38[4] != (int)(uVar52 >> 0x20))) || (*piVar38 == 0)) {
      uStack_190 = (uStack_130 & 0xffffffff00000000) + 1;
      goto LAB_14287f1f3;
    }
    uVar44 = *(ulonglong *)(piVar38 + 2);
    if ((*(ulonglong *)(lVar31 + 0x38) <= (uVar44 & 0xffffffff)) ||
       ((*(ulonglong *)(*(longlong *)(lVar31 + 0x28) + (uVar44 >> 6 & 0x3ffffff) * 8) >>
         (uVar44 & 0x3f) & 1) == 0)) break;
    lVar40 = *(longlong *)(*(longlong *)(lStack_128 + 0x1a0) + 0x18 + (uVar44 >> 0x20) * 0x48);
    lVar39 = ~*(ulonglong *)
               (*(longlong *)(*(longlong *)(lStack_128 + 0x1a0) + 0x38 + (uVar44 >> 0x20) * 0x48) +
               *(longlong *)(lVar31 + 0x110) * 8) * 0x30;
    lVar31 = *(longlong *)(lVar40 + 0x10 + lVar39);
    uVar52 = (ulonglong)(uint)~piVar38[1];
    lVar46 = uVar52 * 0x30;
    uStack_130 = uVar52 * 4 + *(longlong *)(lVar40 + 0x20 + lVar39);
    *(undefined4 *)(*(longlong *)(lVar40 + 0x28 + lVar39) + uVar52 * 4) = (undefined4)uStack_118;
    *(undefined8 *)(lVar31 + lVar46) = uVar34;
    *(undefined4 *)(lVar31 + 8 + lVar46) = uVar42;
    uVar55 = pdb_140de8220(uStack_118 & 0xffffffff,lVar31,*(undefined4 *)(lVar31 + 0xc + lVar46));
    in_stack_fffffffffffffd98 = CONCAT44(uVar58,0x43020000);
    fVar56 = (float)pdb_140a7d8d0(&uStack_250,uVar34,uVar42,uVar11,in_stack_fffffffffffffd98);
    *puStack_1a0 = uStack_104;
    lVar31 = *(longlong *)(lStack_120 + 0x30);
    uVar6 = *(undefined8 *)(lStack_120 + 0x40);
    uVar53 = 0.0 < fVar56;
    if (lVar31 == *(longlong *)(lStack_120 + 0x20)) {
      uStack_110 = CONCAT71(uStack_110._1_7_,0.0 < fVar56);
      pdb_142d7e6e0(lStack_198);
      uVar53 = (undefined1)uStack_110;
    }
    lVar40 = *(longlong *)(lStack_120 + 0x28);
    lVar39 = lVar31 * 0x20;
    *(undefined8 *)(lVar40 + lVar39) = uVar6;
    *(undefined1 *)(lVar40 + 8 + lVar39) = 1;
    *(undefined1 *)(lVar40 + 9 + lVar39) = uVar53;
    *(undefined4 *)(lVar40 + 0xc + lVar39) = uVar55;
    *(undefined8 *)(lVar40 + 0x10 + lVar39) = uVar34;
    *(undefined4 *)(lVar40 + 0x18 + lVar39) = uVar42;
    *(longlong *)(lStack_120 + 0x30) = lVar31 + 1;
    *(longlong *)(lStack_120 + 0x40) = *(longlong *)(lStack_120 + 0x40) + 1;
    lVar31 = lStack_1c8;
    puVar10 = _DAT_143ca8e90;
  }
  uStack_190 = uVar44 << 0x20;
LAB_14287f1f3:
  puVar37 = &UNK_1435aa108;
  puStack_188 = (undefined *)uVar52;
  goto LAB_14287f1b5;
LAB_14287e729:
  uVar42 = (undefined4)((ulonglong)in_stack_fffffffffffffd98 >> 0x20);
  if ((lVar47 == 0) || (lVar47 == lStack_220)) {
    if ((lVar51 == 0) || (lVar51 == lStack_210)) goto LAB_14287ee6a;
    lStack_1e0 = lVar51 + 0x48;
    lVar31 = 0;
    lVar43 = lVar51;
  }
  else {
    lVar31 = lVar47 + 0x48;
    lVar43 = lVar47;
    lStack_1e0 = lVar51;
  }
  *puStack_238 = *puStack_238 + 1;
  fVar4 = *(float *)(lVar43 + 0x24);
  fVar57 = (float)pdb_140de8220(lVar51,_DAT_143007998,fVar4);
  fVar68 = (_DAT_142e36f28 - fVar57) * _DAT_143014728;
  fVar67 = fVar57 * _DAT_142f95160;
  cVar27 = pdb_1408ff990(puVar37);
  iVar50 = 1;
  if (cVar27 != '\0') {
    iVar50 = 2 - (uint)((*(byte *)(lVar43 + 0x2c) & 3) == 0);
  }
  pcVar7 = *(char **)(lVar43 + 8);
  lVar47 = *(longlong *)(lVar43 + 0x10);
  uVar49 = (undefined7)((ulonglong)puVar48 >> 8);
  if (lVar47 == 0x19) {
    auVar65[0] = -(pcVar7[9] == DAT_1435a9fb0);
    auVar65[1] = -(pcVar7[10] == UNK_1435a9fb1);
    auVar65[2] = -(pcVar7[0xb] == UNK_1435a9fb2);
    auVar65[3] = -(pcVar7[0xc] == UNK_1435a9fb3);
    auVar65[4] = -(pcVar7[0xd] == UNK_1435a9fb4);
    auVar65[5] = -(pcVar7[0xe] == UNK_1435a9fb5);
    auVar65[6] = -(pcVar7[0xf] == UNK_1435a9fb6);
    auVar65[7] = -(pcVar7[0x10] == UNK_1435a9fb7);
    auVar65[8] = -(pcVar7[0x11] == UNK_1435a9fb8);
    auVar65[9] = -(pcVar7[0x12] == UNK_1435a9fb9);
    auVar65[10] = -(pcVar7[0x13] == UNK_1435a9fba);
    auVar65[0xb] = -(pcVar7[0x14] == UNK_1435a9fbb);
    auVar65[0xc] = -(pcVar7[0x15] == UNK_1435a9fbc);
    auVar65[0xd] = -(pcVar7[0x16] == UNK_1435a9fbd);
    auVar65[0xe] = -(pcVar7[0x17] == UNK_1435a9fbe);
    auVar65[0xf] = -(pcVar7[0x18] == UNK_1435a9fbf);
    auVar61[0] = -(*pcVar7 == cVar29);
    auVar61[1] = -(pcVar7[1] == cVar12);
    auVar61[2] = -(pcVar7[2] == cVar13);
    auVar61[3] = -(pcVar7[3] == cVar14);
    auVar61[4] = -(pcVar7[4] == cVar15);
    auVar61[5] = -(pcVar7[5] == cVar16);
    auVar61[6] = -(pcVar7[6] == cVar17);
    auVar61[7] = -(pcVar7[7] == cVar18);
    auVar61[8] = -(pcVar7[8] == cVar19);
    auVar61[9] = -(pcVar7[9] == cVar20);
    auVar61[10] = -(pcVar7[10] == cVar21);
    auVar61[0xb] = -(pcVar7[0xb] == cVar22);
    auVar61[0xc] = -(pcVar7[0xc] == cVar23);
    auVar61[0xd] = -(pcVar7[0xd] == cVar24);
    auVar61[0xe] = -(pcVar7[0xe] == cVar25);
    auVar61[0xf] = -(pcVar7[0xf] == cVar26);
    auVar61 = auVar61 & auVar65;
    uVar58 = (undefined4)
             CONCAT71(uVar49,(ushort)((ushort)(SUB161(auVar61 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar61 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar61 >> 0x17,0) & 1) << 2 |
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
                                      (ushort)(SUB161(auVar61 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar61[0xf] >> 7) << 0xf) == 0xffff);
  }
  else {
    if (lVar47 == 0x27) {
      iVar30 = pub_142e32750(pcVar7,&UNK_1435aa060,0x27);
      uVar58 = (undefined4)CONCAT71(uVar49,1);
      if ((iVar30 == 0) || (iVar30 = pub_142e32750(pcVar7,&UNK_1435aa087,0x27), iVar30 == 0))
      goto LAB_14287e8c7;
    }
    else if (lVar47 == 0x1a) {
      auVar63[0] = -(pcVar7[10] == DAT_1435a9fd0);
      auVar63[1] = -(pcVar7[0xb] == UNK_1435a9fd1);
      auVar63[2] = -(pcVar7[0xc] == UNK_1435a9fd2);
      auVar63[3] = -(pcVar7[0xd] == UNK_1435a9fd3);
      auVar63[4] = -(pcVar7[0xe] == UNK_1435a9fd4);
      auVar63[5] = -(pcVar7[0xf] == UNK_1435a9fd5);
      auVar63[6] = -(pcVar7[0x10] == UNK_1435a9fd6);
      auVar63[7] = -(pcVar7[0x11] == UNK_1435a9fd7);
      auVar63[8] = -(pcVar7[0x12] == UNK_1435a9fd8);
      auVar63[9] = -(pcVar7[0x13] == UNK_1435a9fd9);
      auVar63[10] = -(pcVar7[0x14] == UNK_1435a9fda);
      auVar63[0xb] = -(pcVar7[0x15] == UNK_1435a9fdb);
      auVar63[0xc] = -(pcVar7[0x16] == UNK_1435a9fdc);
      auVar63[0xd] = -(pcVar7[0x17] == UNK_1435a9fdd);
      auVar63[0xe] = -(pcVar7[0x18] == UNK_1435a9fde);
      auVar63[0xf] = -(pcVar7[0x19] == UNK_1435a9fdf);
      auVar59[0] = -(*pcVar7 == cVar29);
      auVar59[1] = -(pcVar7[1] == cVar12);
      auVar59[2] = -(pcVar7[2] == cVar13);
      auVar59[3] = -(pcVar7[3] == cVar14);
      auVar59[4] = -(pcVar7[4] == cVar15);
      auVar59[5] = -(pcVar7[5] == cVar16);
      auVar59[6] = -(pcVar7[6] == cVar17);
      auVar59[7] = -(pcVar7[7] == cVar18);
      auVar59[8] = -(pcVar7[8] == cVar19);
      auVar59[9] = -(pcVar7[9] == cVar20);
      auVar59[10] = -(pcVar7[10] == cVar21);
      auVar59[0xb] = -(pcVar7[0xb] == cVar22);
      auVar59[0xc] = -(pcVar7[0xc] == cVar23);
      auVar59[0xd] = -(pcVar7[0xd] == cVar24);
      auVar59[0xe] = -(pcVar7[0xe] == cVar25);
      auVar59[0xf] = -(pcVar7[0xf] == cVar26);
      auVar59 = auVar59 & auVar63;
      uVar58 = (undefined4)CONCAT71(uVar49,1);
      if (((ushort)((ushort)(SUB161(auVar59 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar59 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar59 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar59 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar59 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar59 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar59 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar59 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar59 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar59 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar59 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar59 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar59 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar59 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar59 >> 0x77,0) & 1) << 0xe |
                   (ushort)(byte)(auVar59[0xf] >> 7) << 0xf) == 0xffff) ||
         (auVar64[0] = -(pcVar7[10] == DAT_1435a9fe0), auVar64[1] = -(pcVar7[0xb] == UNK_1435a9fe1),
         auVar64[2] = -(pcVar7[0xc] == UNK_1435a9fe2), auVar64[3] = -(pcVar7[0xd] == UNK_1435a9fe3),
         auVar64[4] = -(pcVar7[0xe] == UNK_1435a9fe4), auVar64[5] = -(pcVar7[0xf] == UNK_1435a9fe5),
         auVar64[6] = -(pcVar7[0x10] == UNK_1435a9fe6),
         auVar64[7] = -(pcVar7[0x11] == UNK_1435a9fe7),
         auVar64[8] = -(pcVar7[0x12] == UNK_1435a9fe8),
         auVar64[9] = -(pcVar7[0x13] == UNK_1435a9fe9),
         auVar64[10] = -(pcVar7[0x14] == UNK_1435a9fea),
         auVar64[0xb] = -(pcVar7[0x15] == UNK_1435a9feb),
         auVar64[0xc] = -(pcVar7[0x16] == UNK_1435a9fec),
         auVar64[0xd] = -(pcVar7[0x17] == UNK_1435a9fed),
         auVar64[0xe] = -(pcVar7[0x18] == UNK_1435a9fee),
         auVar64[0xf] = -(pcVar7[0x19] == UNK_1435a9fef), auVar60[0] = -(*pcVar7 == cVar29),
         auVar60[1] = -(pcVar7[1] == cVar12), auVar60[2] = -(pcVar7[2] == cVar13),
         auVar60[3] = -(pcVar7[3] == cVar14), auVar60[4] = -(pcVar7[4] == cVar15),
         auVar60[5] = -(pcVar7[5] == cVar16), auVar60[6] = -(pcVar7[6] == cVar17),
         auVar60[7] = -(pcVar7[7] == cVar18), auVar60[8] = -(pcVar7[8] == cVar19),
         auVar60[9] = -(pcVar7[9] == cVar20), auVar60[10] = -(pcVar7[10] == cVar21),
         auVar60[0xb] = -(pcVar7[0xb] == cVar22), auVar60[0xc] = -(pcVar7[0xc] == cVar23),
         auVar60[0xd] = -(pcVar7[0xd] == cVar24), auVar60[0xe] = -(pcVar7[0xe] == cVar25),
         auVar60[0xf] = -(pcVar7[0xf] == cVar26), auVar60 = auVar60 & auVar64,
         (ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) | (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(byte)(auVar60[0xf] >> 7) << 0xf) == 0xffff)) goto LAB_14287e8c7;
    }
    uVar58 = 0;
  }
LAB_14287e8c7:
  lStack_240 = lVar31;
  bVar28 = pdb_140a937c0(puVar37);
  uStack_110 = CONCAT44(uStack_110._4_4_,uVar58);
  bVar28 = bVar28 & (byte)uVar58;
  cStack_f1 = pdb_140a3d910(puVar37);
  fVar8 = fVar4;
  if (fVar4 <= _DAT_142e3783c) {
    fVar8 = _DAT_142e3783c;
  }
  if (bVar28 == 0) {
    fVar8 = fVar4;
  }
  uVar44 = *(ulonglong *)(lVar43 + 0x38);
  cVar27 = *(char *)(lVar43 + 0x30);
  uVar34 = pdb_140ed5970(uStack_1d8);
  lVar31 = plStack_100[2];
  if ((ulonglong)(*plStack_100 - lVar31) < 0x20) {
    uVar42 = 0;
    pdb_142d7f1b0(plStack_100,lVar31,0x20,1,1);
  }
  lVar47 = plStack_100[1];
  *(code **)(lVar47 + lVar31) = pdb_142b22cd0;
  *(undefined8 *)(lVar47 + 8 + lVar31) = uVar34;
  *(ulonglong *)(lVar47 + 0x10 + lVar31) = uVar44;
  *(char *)(lVar47 + 0x18 + lVar31) = cVar27;
  lVar47 = lVar31 + 0x20;
  plStack_100[2] = lVar47;
  uStack_118 = uVar44;
  if ((ulonglong)(*plStack_100 - lVar47) < 0x28) {
    uVar42 = 0;
    pdb_142d7f1b0(plStack_100,lVar47,0x28,1,1);
  }
  lVar51 = plStack_100[1];
  *(code **)(lVar51 + 0x20 + lVar31) = pdb_142b22ad0;
  *(undefined8 *)(lVar51 + 0x28 + lVar31) = uVar34;
  *(float *)(lVar51 + 0x30 + lVar31) = fVar67 + fVar68;
  *(undefined1 *)(lVar51 + 0x1c + lVar47) = 0;
  *(undefined8 *)(lVar51 + 0x14 + lVar47) = 0;
  *(undefined1 *)(lVar51 + 0x40 + lVar31) = 0;
  lVar47 = lVar31 + 0x48;
  plStack_100[2] = lVar47;
  pfVar2 = (float *)(lVar43 + 0x18);
  fVar67 = *pfVar2;
  uVar58 = *(undefined4 *)(lVar43 + 0x1c);
  uVar9 = *(undefined8 *)pfVar2;
  uVar6 = *(undefined8 *)pfVar2;
  fVar4 = *(float *)(lVar43 + 0x20);
  if ((ulonglong)(*plStack_100 - lVar47) < 0x20) {
    uVar42 = 0;
    pdb_142d7f1b0(plStack_100,lVar47,0x20,1,1);
  }
  lVar47 = plStack_100[1];
  *(code **)(lVar47 + 0x48 + lVar31) = pdb_142b22b30;
  *(undefined8 *)(lVar47 + 0x50 + lVar31) = uVar34;
  *(float *)(lVar47 + 0x58 + lVar31) = fVar67;
  *(float *)(lVar47 + 0x5c + lVar31) = fVar4;
  *(undefined1 *)(lVar47 + 0x60 + lVar31) = 0;
  lVar47 = lVar31 + 0x68;
  plStack_100[2] = lVar47;
  fVar68 = fVar8 * fVar56;
  if ((ulonglong)(*plStack_100 - lVar47) < 0x20) {
    uVar42 = 0;
    pdb_142d7f1b0(plStack_100,lVar47,0x20,1,1);
  }
  lVar47 = plStack_100[1];
  *(code **)(lVar47 + 0x68 + lVar31) = pdb_142b22a70;
  *(undefined8 *)(lVar47 + 0x70 + lVar31) = uVar34;
  *(ulonglong *)(lVar47 + 0x78 + lVar31) =
       CONCAT44((float)((ulonglong)uVar6 >> 0x20) + fVar8 * (float)uVar52,fVar67 + fVar68);
  *(float *)(lVar47 + 0x80 + lVar31) = fVar68 + fVar4;
  *(undefined1 *)(lVar47 + 0x84 + lVar31) = 0;
  plStack_100[2] = lVar31 + 0x88;
  if (cVar27 != '\0') {
    iVar50 = 0;
  }
  uVar55 = *(undefined4 *)(lVar43 + 0x28);
  if (bVar28 != 0) {
    iVar50 = 3;
  }
  uVar5 = *(undefined4 *)(lVar43 + 0x2c);
  pcVar7 = *(char **)(lVar43 + 8);
  puVar37 = *(undefined **)(lVar43 + 0x10);
  if (puVar37 == (undefined *)0x18) {
    auVar62[0] = -(*pcVar7 == DAT_1435aa000);
    auVar62[1] = -(pcVar7[1] == UNK_1435aa001);
    auVar62[2] = -(pcVar7[2] == UNK_1435aa002);
    auVar62[3] = -(pcVar7[3] == UNK_1435aa003);
    auVar62[4] = -(pcVar7[4] == UNK_1435aa004);
    auVar62[5] = -(pcVar7[5] == UNK_1435aa005);
    auVar62[6] = -(pcVar7[6] == UNK_1435aa006);
    auVar62[7] = -(pcVar7[7] == UNK_1435aa007);
    auVar62[8] = -(pcVar7[8] == UNK_1435aa008);
    auVar62[9] = -(pcVar7[9] == UNK_1435aa009);
    auVar62[10] = -(pcVar7[10] == UNK_1435aa00a);
    auVar62[0xb] = -(pcVar7[0xb] == UNK_1435aa00b);
    auVar62[0xc] = -(pcVar7[0xc] == UNK_1435aa00c);
    auVar62[0xd] = -(pcVar7[0xd] == UNK_1435aa00d);
    auVar62[0xe] = -(pcVar7[0xe] == UNK_1435aa00e);
    auVar62[0xf] = -(pcVar7[0xf] == UNK_1435aa00f);
    uVar6 = *(undefined8 *)(pcVar7 + 0x10);
    auVar66[0] = -((char)uVar6 == DAT_1435a9ff0);
    auVar66[1] = -((char)((ulonglong)uVar6 >> 8) == UNK_1435a9ff1);
    auVar66[2] = -((char)((ulonglong)uVar6 >> 0x10) == UNK_1435a9ff2);
    auVar66[3] = -((char)((ulonglong)uVar6 >> 0x18) == UNK_1435a9ff3);
    auVar66[4] = -((char)((ulonglong)uVar6 >> 0x20) == UNK_1435a9ff4);
    auVar66[5] = -((char)((ulonglong)uVar6 >> 0x28) == UNK_1435a9ff5);
    auVar66[6] = -((char)((ulonglong)uVar6 >> 0x30) == UNK_1435a9ff6);
    auVar66[7] = -((char)((ulonglong)uVar6 >> 0x38) == UNK_1435a9ff7);
    auVar66[8] = -(UNK_1435a9ff8 == '\0');
    auVar66[9] = -(UNK_1435a9ff9 == '\0');
    auVar66[10] = -(UNK_1435a9ffa == '\0');
    auVar66[0xb] = -(UNK_1435a9ffb == '\0');
    auVar66[0xc] = -(UNK_1435a9ffc == '\0');
    auVar66[0xd] = -(UNK_1435a9ffd == '\0');
    auVar66[0xe] = -(UNK_1435a9ffe == '\0');
    auVar66[0xf] = -(UNK_1435a9fff == '\0');
    auVar66 = auVar66 & auVar62;
    if ((ushort)((ushort)(SUB161(auVar66 >> 7,0) & 1) | (ushort)(SUB161(auVar66 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar66 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar66 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar66 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar66 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar66 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar66 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar66 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar66 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar66 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar66 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar66 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar66 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar66 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar66[0xf] >> 7) << 0xf) != 0xffff) goto LAB_14287eabf;
    puVar37 = puStack_1c0;
    uStack_190 = pdb_142880b10(uStack_118);
  }
  else {
LAB_14287eabf:
    uStack_190 = pdb_1418bdee0();
  }
  uVar6 = uStack_110;
  uStack_15c = 0;
  uStack_158 = 0;
  uStack_154 = 0;
  uStack_150 = 0;
  *puStack_230 = uStack_1b8;
  uStack_148 = *(undefined8 *)(uStack_130 + 0x40);
  uStack_170 = (undefined *)CONCAT44(fVar8,fVar4);
  uStack_168 = CONCAT44(uVar5,uVar55);
  uStack_160 = 0x3f800000;
  lVar31 = *(longlong *)(uStack_130 + 0x30);
  puStack_188 = puVar37;
  uStack_180 = uVar34;
  uStack_178 = uVar9;
  iStack_14c = iVar50;
  uStack_110 = uStack_190;
  if (lVar31 == *(longlong *)(uStack_130 + 0x20)) {
    pdb_142d8d780(lStack_208);
  }
  lVar47 = *(longlong *)(uStack_130 + 0x28);
  lVar51 = lVar31 * 0x50;
  puVar1 = (undefined8 *)(lVar47 + 0x40 + lVar51);
  *puVar1 = CONCAT44(iStack_14c,uStack_150);
  puVar1[1] = uStack_148;
  puVar3 = (undefined4 *)(lVar47 + 0x30 + lVar51);
  *puVar3 = uStack_160;
  puVar3[1] = uStack_15c;
  puVar3[2] = uStack_158;
  puVar3[3] = uStack_154;
  puVar3 = (undefined4 *)(lVar47 + 0x20 + lVar51);
  *puVar3 = (undefined4)uStack_170;
  puVar3[1] = uStack_170._4_4_;
  puVar3[2] = (undefined4)uStack_168;
  puVar3[3] = uStack_168._4_4_;
  puVar1 = (undefined8 *)(lVar47 + 0x10 + lVar51);
  *puVar1 = uStack_180;
  puVar1[1] = uStack_178;
  *(undefined8 *)(lVar47 + lVar51) = uStack_190;
  ((undefined8 *)(lVar47 + lVar51))[1] = puStack_188;
  *(longlong *)(uStack_130 + 0x30) = lVar31 + 1;
  *(longlong *)(uStack_130 + 0x40) = *(longlong *)(uStack_130 + 0x40) + 1;
  *puStack_1a8 = uStack_108;
  uVar34 = pdb_140a2fb80(uStack_1b0,uStack_118,uVar34);
  in_stack_fffffffffffffd98 = CONCAT44(uVar42,0x43020000);
  fVar68 = (float)pdb_140a7d8d0(&uStack_250,fVar67,fVar4,uVar11,in_stack_fffffffffffffd98);
  uVar53 = (char)uVar6;
  if (cStack_f1 == '\0') {
    uVar53 = 0;
  }
  if (bVar28 != 0) {
    uVar53 = 1;
  }
  *puStack_1a0 = uStack_104;
  lVar31 = *(longlong *)(lStack_120 + 0x30);
  puVar48 = *(ulonglong **)(lStack_120 + 0x40);
  if (lVar31 == *(longlong *)(lStack_120 + 0x20)) {
    pdb_142d7e6e0(lStack_198);
  }
  lVar51 = lStack_1e0;
  puVar37 = puStack_228;
  lVar47 = lStack_240;
  lVar54 = *(longlong *)(lStack_120 + 0x28);
  lVar40 = lVar31 * 0x20;
  *(ulonglong **)(lVar54 + lVar40) = puVar48;
  *(undefined1 *)(lVar54 + 8 + lVar40) = 0;
  *(bool *)(lVar54 + 9 + lVar40) = 0.0 < fVar68;
  *(undefined1 *)(lVar54 + 10 + lVar40) = uVar53;
  *(float *)(lVar54 + 0xc + lVar40) = fVar57;
  *(float *)(lVar54 + 0x10 + lVar40) = fVar67;
  *(undefined4 *)(lVar54 + 0x14 + lVar40) = uVar58;
  *(float *)(lVar54 + 0x18 + lVar40) = fVar4;
  *(longlong *)(lStack_120 + 0x30) = lVar31 + 1;
  *(longlong *)(lStack_120 + 0x40) = *(longlong *)(lStack_120 + 0x40) + 1;
  if ((int)uVar34 != 0) {
    if (1 < *_DAT_143ca8e90) {
      puStack_1f0 = (undefined8 *)(lVar43 + 0x38);
      pcStack_1e8 = pdb_140f72a40;
      uStack_190 = 0;
      puStack_188 = &UNK_1435aa0e4;
      uStack_180 = 0x1e;
      uStack_178 = 0;
      uStack_170 = &UNK_1435aa010;
      uStack_168 = 0x31;
      uStack_160 = 2;
      uStack_15c = 0;
      uStack_158 = 0x435aa0e4;
      uStack_154 = 1;
      uStack_150 = 0x1e;
      iStack_14c = 0;
      uStack_148 = 0xac00000001;
      puStack_140 = &UNK_1435aa0ae;
      ppuStack_138 = &puStack_1f0;
      pdb_140f332f0(&uStack_f2,&uStack_190);
    }
    *puStack_218 = uStack_1b4;
    lVar31 = *(longlong *)(lStack_1d0 + 0x30);
    uVar6 = *(undefined8 *)(lStack_1d0 + 0x40);
    if (lVar31 == *(longlong *)(lStack_1d0 + 0x20)) {
      pdb_142d7e980(lStack_200);
    }
    lVar43 = *(longlong *)(lStack_1d0 + 0x28);
    *(undefined8 *)(lVar43 + lVar31 * 0x10) = uVar34;
    *(undefined8 *)(lVar43 + 8 + lVar31 * 0x10) = uVar6;
    *(longlong *)(lStack_1d0 + 0x30) = lVar31 + 1;
    *(longlong *)(lStack_1d0 + 0x40) = *(longlong *)(lStack_1d0 + 0x40) + 1;
  }
  goto LAB_14287e729;
LAB_14287ee6a:
  puVar48 = (ulonglong *)*puStack_1f8;
  lVar31 = puStack_1f8[1];
  uVar52 = *puVar48;
  uVar35 = 0;
  uVar44 = uVar52 - *(ulonglong *)(lVar31 + 0x18);
  if (uVar52 < *(ulonglong *)(lVar31 + 0x18)) {
    uVar44 = uVar35;
  }
  uVar36 = uVar52 - *(ulonglong *)(lVar31 + 0x38);
  if (uVar52 < *(ulonglong *)(lVar31 + 0x38)) {
    uVar36 = uVar35;
  }
  uVar41 = uVar44 * 0x10 + *(longlong *)(lVar31 + 8);
  uVar52 = *(ulonglong *)(lVar31 + 0x10) - uVar44;
  if (*(ulonglong *)(lVar31 + 0x10) < uVar44) {
    uVar41 = 8;
    uVar52 = uVar35;
  }
  uVar44 = uVar36 * 0x10 + *(longlong *)(lVar31 + 0x28);
  uVar45 = *(ulonglong *)(lVar31 + 0x30) - uVar36;
  if (*(ulonglong *)(lVar31 + 0x30) < uVar36) {
    uVar44 = 8;
    uVar45 = uVar35;
  }
  *puVar48 = (*(longlong *)(lVar31 + 0x40) - uVar45) - uVar52;
  uVar11 = _DAT_143007998;
  uVar52 = uVar52 * 0x10 + uVar41;
  uStack_118 = uVar45 * 0x10 + uVar44;
  while( true ) {
    do {
      if ((uVar41 == 0) || (uVar41 == uVar52)) {
        if ((uVar44 == 0) || (uVar44 == uStack_118)) {
          return;
        }
        uVar41 = 0;
        uVar35 = uVar44;
        uVar44 = uVar44 + 0x10;
      }
      else {
        uVar35 = uVar41;
        uVar41 = uVar41 + 0x10;
      }
      *puVar48 = *puVar48 + 1;
      *puStack_1a8 = uStack_108;
      uVar35 = pdb_140a2fbc0(uStack_1b0,*(undefined8 *)(uVar35 + 8));
    } while (((uVar35 & 0xffffffff) == 0) ||
            (cVar29 = pdb_140ed63a0(uStack_1d8,uVar35), cVar29 == '\0'));
    lVar31 = plStack_100[2];
    if ((ulonglong)(*plStack_100 - lVar31) < 0x18) {
      pdb_142d7f1b0(plStack_100,lVar31,0x18,1,1);
    }
    lVar47 = plStack_100[1];
    *(code **)(lVar47 + lVar31) = pdb_142b22c20;
    *(ulonglong *)(lVar47 + 8 + lVar31) = uVar35;
    *(undefined1 *)(lVar47 + 0x10 + lVar31) = 0;
    plStack_100[2] = lVar31 + 0x18;
    uVar36 = 0xffffffff;
    uVar45 = uVar35 & 0xffffffff ^ 0xffffffff;
    uVar42 = 1;
    if (*(ulonglong *)(lStack_128 + 0x10) <= uVar45) break;
    piVar38 = (int *)(uVar45 * 0x18 + *(longlong *)(lStack_128 + 8));
    uVar36 = uVar35 >> 0x20;
    if ((piVar38[4] != (int)(uVar35 >> 0x20)) || (*piVar38 == 0)) break;
    uVar36 = *(ulonglong *)(piVar38 + 2);
    if ((*(ulonglong *)(lStack_1c8 + 0x38) <= (uVar36 & 0xffffffff)) ||
       ((*(ulonglong *)(*(longlong *)(lStack_1c8 + 0x28) + (uVar36 >> 6 & 0x3ffffff) * 8) >>
         (uVar36 & 0x3f) & 1) == 0)) {
      uVar42 = 0;
      break;
    }
    lVar31 = *(longlong *)
              (*(longlong *)(*(longlong *)(lStack_128 + 0x1a0) + 0x18 + (uVar36 >> 0x20) * 0x48) +
               0x10 + ~*(ulonglong *)
                        (*(longlong *)
                          (*(longlong *)(lStack_128 + 0x1a0) + 0x38 + (uVar36 >> 0x20) * 0x48) +
                        *(longlong *)(lStack_1c8 + 0x110) * 8) * 0x30);
    lVar47 = (ulonglong)(uint)~piVar38[1] * 0x30;
    uVar58 = pdb_140de8220((ulonglong)(uint)~piVar38[1],uVar11,
                           *(undefined4 *)(lVar31 + 0xc + lVar47));
    uVar34 = *(undefined8 *)(lVar31 + lVar47);
    uVar42 = *(undefined4 *)(lVar31 + 8 + lVar47);
    *puStack_1a0 = uStack_104;
    lVar31 = *(longlong *)(lStack_120 + 0x30);
    uVar6 = *(undefined8 *)(lStack_120 + 0x40);
    if (lVar31 == *(longlong *)(lStack_120 + 0x20)) {
      pdb_142d7e6e0(lStack_198);
    }
    lVar47 = *(longlong *)(lStack_120 + 0x28);
    lVar51 = lVar31 * 0x20;
    *(undefined8 *)(lVar47 + lVar51) = uVar6;
    *(undefined1 *)(lVar47 + 8 + lVar51) = 2;
    *(undefined4 *)(lVar47 + 0xc + lVar51) = uVar58;
    *(undefined8 *)(lVar47 + 0x10 + lVar51) = uVar34;
    *(undefined4 *)(lVar47 + 0x18 + lVar51) = uVar42;
    *(longlong *)(lStack_120 + 0x30) = lVar31 + 1;
    *(longlong *)(lStack_120 + 0x40) = *(longlong *)(lStack_120 + 0x40) + 1;
  }
  uStack_190 = CONCAT44((int)uVar36,uVar42);
  puVar37 = &UNK_1435aa048;
  puStack_188 = (undefined *)uVar35;
LAB_14287f1b5:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_1435aa170,0x2b,&uStack_190,&UNK_1435aa150,puVar37);
}

