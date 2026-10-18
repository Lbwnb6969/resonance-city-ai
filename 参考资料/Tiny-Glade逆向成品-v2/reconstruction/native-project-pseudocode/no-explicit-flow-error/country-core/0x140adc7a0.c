// VA 0x140adc7a0, PDB extent 3913 bytes
// country_core::systems::wall::shapes::rectangle::ui_create_rectangle::ui_create_rectangle
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/rectangle/ui_create_rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::shapes::rectangle::ui_create_rectangle::ui_create_rectangle
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/rectangle/ui_create_rectangle.rs
   Extent: 3913 */

void pdb_140adc7a0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6,longlong *param_7,longlong *param_8,
                  longlong *param_9,undefined8 *param_10,longlong *param_11,undefined8 *param_12,
                  longlong *param_13,longlong *param_14,undefined8 *param_15,longlong *param_16)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  float *pfVar7;
  uint uVar8;
  uint uVar9;
  char cVar10;
  longlong lVar11;
  longlong lVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  longlong lVar16;
  undefined4 *puVar17;
  longlong lVar18;
  byte bVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  byte *pbVar25;
  undefined4 *puVar26;
  bool bVar27;
  bool bVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  float fVar35;
  undefined8 uVar33;
  undefined8 uVar34;
  float fVar36;
  undefined1 auVar37 [16];
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 *puStack_1e0;
  undefined4 uStack_1d4;
  undefined4 *puStack_1d0;
  undefined *puStack_1c8;
  longlong lStack_1c0;
  longlong lStack_1b8;
  undefined8 uStack_1b0;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  longlong lStack_198;
  longlong lStack_190;
  undefined4 *puStack_188;
  undefined8 uStack_180;
  longlong lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_120;
  undefined4 uStack_108;
  undefined1 uStack_f0;
  undefined1 uStack_e0;
  undefined4 uStack_dc;
  undefined2 uStack_c0;
  undefined4 *puStack_b8;
  float *pfStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  
  puVar26 = (undefined4 *)*param_3;
  pbVar4 = (byte *)param_3[4];
  puVar15 = (undefined4 *)param_3[6];
  uVar30 = *(undefined4 *)((longlong)param_3 + 0x3c);
  pfStack_b0 = (float *)param_12[5];
  lStack_1b8 = param_13[4];
  lStack_198 = param_13[8];
  lStack_190 = param_13[9];
  puStack_188 = (undefined4 *)param_13[10];
  uStack_180 = param_13[0xb];
  uStack_1b0 = *param_15;
  lStack_170 = param_15[4];
  puVar17 = (undefined4 *)param_15[6];
  uStack_98 = *(undefined4 *)(param_15 + 8);
  uStack_94 = *(undefined4 *)((longlong)param_15 + 0x44);
  uStack_90 = *(undefined4 *)(param_15 + 9);
  uStack_8c = *(undefined4 *)((longlong)param_15 + 0x4c);
  uStack_88 = *(undefined4 *)(param_15 + 10);
  uStack_84 = *(undefined4 *)((longlong)param_15 + 0x54);
  uStack_80 = *(undefined4 *)(param_15 + 0xb);
  uStack_7c = *(undefined4 *)((longlong)param_15 + 0x5c);
  uVar2 = *(undefined4 *)((longlong)param_15 + 0x3c);
  puStack_b8 = (undefined4 *)param_13[6];
  uStack_1d4 = *(undefined4 *)((longlong)param_13 + 0x3c);
  if ((*(char *)*param_1 != '\x01') || (((char *)*param_1)[1] != '\x02')) {
    *puVar15 = uVar30;
    pbVar4[0] = 0;
    pbVar4[1] = 0;
    pbVar4[2] = 0;
    pbVar4[3] = 0;
    return;
  }
  uStack_168._0_4_ = 0.0;
  uStack_168._4_4_ = 0.0;
  uStack_160 = (undefined8 *)0x8;
  uStack_158 = 0;
  uStack_154 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_f0 = 0;
  uStack_e0 = 5;
  uStack_dc = 0x7f7fffff;
  uStack_c0 = 0x100;
  puVar13 = &UNK_14304e80d;
  lStack_1c0 = pdb_140900b80(*param_2,&UNK_14304e80d,0x15,&uStack_168);
  puStack_1c8 = puVar13;
  if (_DAT_142f3e554 <= (float)puVar26[0x11]) {
    uStack_158 = (undefined4)*(undefined8 *)(pbVar4 + 0x20);
    uStack_154 = (undefined4)((ulonglong)*(undefined8 *)(pbVar4 + 0x20) >> 0x20);
    uStack_168._0_4_ = *(float *)(pbVar4 + 0x10);
    uStack_168._4_4_ = *(float *)(pbVar4 + 0x14);
    uStack_160 = *(undefined8 **)(pbVar4 + 0x18);
    *(undefined4 *)param_16[2] = *(undefined4 *)((longlong)param_16 + 0x1c);
    lVar18 = *param_16;
    lVar16 = *(longlong *)(lVar18 + 0x30);
    uVar33 = *(undefined8 *)(lVar18 + 0x40);
    puStack_1e0 = puVar17;
    if (lVar16 == *(longlong *)(lVar18 + 0x20)) {
      pdb_142d7ede0(lVar18 + 0x20);
    }
    lVar11 = *(longlong *)(lVar18 + 0x28);
    *(undefined8 *)(lVar11 + lVar16 * 0x28) = uVar33;
    *(undefined4 *)(lVar11 + (lVar16 * 10 + 2) * 4) = 1;
    *(ulonglong *)(lVar11 + (lVar16 * 10 + 7) * 4) = CONCAT44(uStack_154,uStack_158);
    pfVar7 = (float *)(lVar11 + (lVar16 * 10 + 3) * 4);
    *pfVar7 = (float)uStack_168;
    pfVar7[1] = uStack_168._4_4_;
    pfVar7[2] = (float)uStack_160;
    pfVar7[3] = uStack_160._4_4_;
    *(longlong *)(lVar18 + 0x30) = lVar16 + 1;
    *(longlong *)(lVar18 + 0x40) = *(longlong *)(lVar18 + 0x40) + 1;
    puVar17 = puStack_1e0;
  }
  if (*(char *)(lStack_1c0 + 0x18) == '\x02') {
    if ((*(undefined **)(lStack_1c0 + 0x38) == puStack_1c8) &&
       (*(char *)(lStack_1c0 + 0x19) == '\x03')) {
      uVar3 = *(undefined4 *)((longlong)param_7 + 0x1c);
      puVar5 = (undefined4 *)param_7[2];
      *puVar5 = uVar3;
      puVar6 = (undefined4 *)*param_7;
      *(undefined1 *)(puVar6 + 3) = 0;
      *(undefined8 *)(puVar6 + 1) = *(undefined8 *)*param_10;
      *puVar5 = uVar3;
      *puVar6 = 0;
      *(undefined4 *)param_11[2] = *(undefined4 *)((longlong)param_11 + 0x1c);
      lVar18 = *param_11;
      lVar16 = *(longlong *)(lVar18 + 0x30);
      uVar33 = *(undefined8 *)(lVar18 + 0x40);
      puStack_1e0 = puVar17;
      puStack_1d0 = puVar15;
      if (lVar16 == *(longlong *)(lVar18 + 0x20)) {
        pdb_142d7e8a0(lVar18 + 0x20);
      }
      *(undefined8 *)(*(longlong *)(lVar18 + 0x28) + lVar16 * 8) = uVar33;
      *(longlong *)(lVar18 + 0x30) = lVar16 + 1;
      *(longlong *)(lVar18 + 0x40) = *(longlong *)(lVar18 + 0x40) + 1;
      puVar15 = puStack_1d0;
      puVar17 = puStack_1e0;
      if (*(char *)(lStack_1c0 + 0x18) != '\x02') goto LAB_140adcdff;
    }
    if ((*(undefined **)(lStack_1c0 + 0x38) == puStack_1c8) &&
       (*(char *)(lStack_1c0 + 0x19) == '\x04')) {
      fVar29 = (float)*(undefined8 *)(*param_8 + 0x150);
      fVar31 = (float)((ulonglong)*(undefined8 *)(*param_8 + 0x150) >> 0x20);
      uVar3 = *(undefined4 *)((longlong)param_7 + 0x1c);
      puVar5 = (undefined4 *)param_7[2];
      *puVar5 = uVar3;
      pfVar7 = (float *)*param_7;
      fVar29 = SQRT(fVar31 * fVar31 + fVar29 * fVar29) + *pfVar7;
      *pfVar7 = fVar29;
      if (_DAT_142e37adc < fVar29) {
        *puVar5 = uVar3;
        *(undefined1 *)(pfVar7 + 3) = 1;
      }
      *(undefined4 *)param_11[2] = *(undefined4 *)((longlong)param_11 + 0x1c);
      lVar18 = *param_11;
      lVar16 = *(longlong *)(lVar18 + 0x30);
      uVar33 = *(undefined8 *)(lVar18 + 0x40);
      puStack_1e0 = puVar17;
      puStack_1d0 = puVar15;
      if (lVar16 == *(longlong *)(lVar18 + 0x20)) {
        pdb_142d7e8a0(lVar18 + 0x20);
      }
      *(undefined8 *)(*(longlong *)(lVar18 + 0x28) + lVar16 * 8) = uVar33;
      *(longlong *)(lVar18 + 0x30) = lVar16 + 1;
      *(longlong *)(lVar18 + 0x40) = *(longlong *)(lVar18 + 0x40) + 1;
      puVar15 = puStack_1d0;
      puVar17 = puStack_1e0;
      if (*(char *)(lStack_1c0 + 0x18) != '\x02') goto LAB_140adcdff;
    }
    if ((*(undefined **)(lStack_1c0 + 0x38) == puStack_1c8) && (*(byte *)(lStack_1c0 + 0x19) < 2)) {
      uVar33 = *(undefined8 *)(*param_7 + 4);
      *(undefined4 *)param_9[2] = *(undefined4 *)((longlong)param_9 + 0x1c);
      lVar18 = *param_9;
      lVar16 = *(longlong *)(lVar18 + 0x30);
      uVar34 = *(undefined8 *)(lVar18 + 0x40);
      puStack_1e0 = puVar17;
      puStack_1d0 = puVar26;
      if (lVar16 == *(longlong *)(lVar18 + 0x20)) {
        pdb_142d7e830(lVar18 + 0x20);
      }
      lVar11 = *(longlong *)(lVar18 + 0x28);
      *(undefined8 *)(lVar11 + lVar16 * 0x18) = uVar34;
      *(undefined4 *)(lVar11 + 8 + lVar16 * 0x18) = 2;
      *(undefined8 *)(lVar11 + 0xc + lVar16 * 0x18) = uVar33;
      *(longlong *)(lVar18 + 0x30) = lVar16 + 1;
      *(longlong *)(lVar18 + 0x40) = *(longlong *)(lVar18 + 0x40) + 1;
      puVar17 = puStack_1e0;
      puVar26 = puStack_1d0;
      if (*(char *)(lStack_1c0 + 0x18) != '\x02') goto LAB_140adcdff;
    }
    uVar9 = _UNK_142e377e4;
    uVar8 = _DAT_142e377e0;
    if (*(undefined **)(lStack_1c0 + 0x38) != puStack_1c8) goto LAB_140adcdff;
    if (*(byte *)(lStack_1c0 + 0x19) < 2) {
      uVar33 = 0;
      bVar27 = true;
      if (*(char *)(*param_7 + 0xc) != '\0') goto LAB_140adcf1e;
      uStack_154 = (undefined4)*(undefined8 *)(pbVar4 + 0x20);
      uStack_150 = (undefined4)((ulonglong)*(undefined8 *)(pbVar4 + 0x20) >> 0x20);
      uStack_160 = *(undefined8 **)(pbVar4 + 0x14);
      uStack_158 = *(undefined4 *)(pbVar4 + 0x1c);
      uStack_168 = CONCAT44(*(undefined4 *)(pbVar4 + 0x10),1);
      puVar14 = &uStack_168;
      cVar10 = pdb_140b404c0(uStack_1b0);
      if (cVar10 == '\0') {
        pdb_140314c70(&uStack_98,&UNK_14304e828);
        bVar27 = false;
        goto LAB_140adcf1e;
      }
      uStack_138 = puVar26[0x12];
      if (*(char *)(puVar26 + 0xd) != '\x02') {
        puVar14 = *(undefined8 **)(puVar26 + 10);
      }
      uStack_168 = (ulonglong)(*(char *)(puVar26 + 0xd) != '\x02');
      uStack_134 = puVar26[0x11];
      uStack_158 = puVar26[2];
      uStack_154 = puVar26[3];
      uStack_140 = *(undefined8 *)(pbVar4 + 0x20);
      uStack_150 = *(undefined4 *)(pbVar4 + 0x10);
      uStack_14c = *(undefined4 *)(pbVar4 + 0x14);
      uStack_148 = *(undefined4 *)(pbVar4 + 0x18);
      uStack_144 = *(undefined4 *)(pbVar4 + 0x1c);
      uStack_160 = puVar14;
      pdb_141b75220(param_5,&uStack_168,&UNK_14304e840);
      uStack_1e8 = puVar26[0x10];
      uStack_1f0 = (undefined4)*(undefined8 *)(puVar26 + 0xe);
      uStack_1ec = (undefined4)((ulonglong)*(undefined8 *)(puVar26 + 0xe) >> 0x20);
      uStack_154 = (undefined4)*(undefined8 *)(pbVar4 + 0x20);
      uStack_150 = (undefined4)((ulonglong)*(undefined8 *)(pbVar4 + 0x20) >> 0x20);
      uStack_160 = *(undefined8 **)(pbVar4 + 0x14);
      uStack_158 = *(undefined4 *)(pbVar4 + 0x1c);
      uStack_168 = CONCAT44(*(undefined4 *)(pbVar4 + 0x10),1);
      uStack_1e4 = pdb_140abde60(&uStack_168);
      uStack_1f8 = CONCAT31(uStack_1f8._1_3_,7);
      pdb_1414af090(&lStack_198,&uStack_1f8,&UNK_14304e858);
      uVar33 = 0;
    }
    else {
      if (*(byte *)(lStack_1c0 + 0x19) != 4) goto LAB_140adcdff;
      lVar18 = *param_7;
      uVar33 = 0;
      bVar19 = 1;
      if (*(char *)(lVar18 + 0xc) != '\0') {
        fVar29 = ((float)puVar26[0xf] - pfStack_b0[1]) / pfStack_b0[4];
        fVar31 = (pfStack_b0[3] * fVar29 + *pfStack_b0) - *(float *)(pbVar4 + 0x18);
        fVar29 = (fVar29 * pfStack_b0[5] + pfStack_b0[2]) - *(float *)(pbVar4 + 0x1c);
        fVar32 = (float)*(undefined8 *)(pbVar4 + 0x10);
        fVar35 = (float)((ulonglong)*(undefined8 *)(pbVar4 + 0x10) >> 0x20);
        fVar36 = (float)((uint)(fVar29 * fVar35 + fVar31 * fVar32) & _DAT_142e377e0);
        fVar29 = (float)((uint)(fVar29 * fVar32 - fVar31 * fVar35) & _UNK_142e377e4);
        auVar37._0_4_ = fVar36 + fVar36;
        auVar37._4_4_ = fVar29 + fVar29;
        auVar37._8_8_ = 0;
        auVar37 = maxps(auVar37,_DAT_14304e500);
        uVar33 = *(undefined8 *)(pbVar4 + 0x20);
        auVar37 = minps(auVar37,_DAT_14304e510);
        *(float *)(pbVar4 + 0x20) = auVar37._0_4_;
        uVar33 = CONCAT44((uint)(auVar37._4_4_ - (float)((ulonglong)uVar33 >> 0x20)) & uVar9,
                          (uint)(auVar37._0_4_ - (float)uVar33) & uVar8);
        *puVar15 = uVar30;
        *(float *)(pbVar4 + 0x24) = auVar37._4_4_;
        bVar19 = *(byte *)(lVar18 + 0xc) ^ 1;
      }
      uVar34 = *param_6;
      uStack_1e8 = (undefined4)*(undefined8 *)(pbVar4 + 0x20);
      uStack_1e4 = (undefined4)((ulonglong)*(undefined8 *)(pbVar4 + 0x20) >> 0x20);
      uStack_1f8 = *(undefined4 *)(pbVar4 + 0x10);
      uStack_1f4 = *(undefined4 *)(pbVar4 + 0x14);
      uStack_1f0 = *(undefined4 *)(pbVar4 + 0x18);
      uStack_1ec = *(undefined4 *)(pbVar4 + 0x1c);
      pdb_140adc1d0(&uStack_158,&uStack_1f8,bVar19);
      uStack_160 = (undefined8 *)CONCAT71(uStack_160._1_7_,2);
      pdb_141a88350(uVar34,&uStack_168);
    }
  }
  else {
LAB_140adcdff:
    if (*(char *)(puVar26 + 0xd) == '\x02') {
      pdb_140e09030(&uStack_168,*param_4);
      fVar32 = _DAT_142e36f28 /
               SQRT((float)uStack_160 * (float)uStack_160 + (float)uStack_168 * (float)uStack_168);
      fVar31 = fVar32 * (float)uStack_168;
      fVar32 = fVar32 * (float)uStack_160;
    }
    else {
      fVar29 = (float)puVar26[8];
      fVar31 = (float)puVar26[9];
      fVar32 = _DAT_142e36f28 / SQRT(fVar29 * fVar29 + fVar31 * fVar31);
      fVar31 = fVar32 * (float)(_DAT_142e37820 ^ (uint)fVar31);
      fVar32 = fVar32 * fVar29;
    }
    *puVar15 = uVar30;
    *(ulonglong *)(pbVar4 + 0x10) = CONCAT44(fVar32,fVar31);
    uVar3 = puVar26[0xe];
    uVar1 = puVar26[0x10];
    *puVar15 = uVar30;
    *(undefined4 *)(pbVar4 + 0x18) = uVar3;
    *(undefined4 *)(pbVar4 + 0x1c) = uVar1;
    uVar3 = puVar26[0xf];
    *puVar15 = uVar30;
    *(undefined4 *)(pbVar4 + 0x28) = uVar3;
    uVar33 = *param_6;
    uStack_1e8 = (undefined4)*(undefined8 *)(pbVar4 + 0x20);
    uStack_1e4 = (undefined4)((ulonglong)*(undefined8 *)(pbVar4 + 0x20) >> 0x20);
    uStack_1f8 = *(undefined4 *)(pbVar4 + 0x10);
    uStack_1f4 = *(undefined4 *)(pbVar4 + 0x14);
    uStack_1f0 = *(undefined4 *)(pbVar4 + 0x18);
    uStack_1ec = *(undefined4 *)(pbVar4 + 0x1c);
    pdb_140adc1d0(&uStack_158,&uStack_1f8,1);
    uStack_160 = (undefined8 *)CONCAT71(uStack_160._1_7_,2);
    pdb_141a88350(uVar33,&uStack_168);
    uVar33 = 0;
  }
  bVar27 = true;
LAB_140adcf1e:
  uStack_154 = (undefined4)*(undefined8 *)(pbVar4 + 0x20);
  uStack_150 = (undefined4)((ulonglong)*(undefined8 *)(pbVar4 + 0x20) >> 0x20);
  uStack_168._4_4_ = *(float *)(pbVar4 + 0x10);
  uStack_160._0_4_ = *(float *)(pbVar4 + 0x14);
  uStack_160._4_4_ = *(float *)(pbVar4 + 0x18);
  uStack_158 = *(undefined4 *)(pbVar4 + 0x1c);
  uStack_168._0_4_ = 1.4013e-45;
  cVar10 = pdb_140b404c0(uStack_1b0,&uStack_168);
  if (cVar10 == '\0') {
    *puVar17 = uVar2;
    lVar18 = *(longlong *)(lStack_170 + 0x30);
    uVar34 = *(undefined8 *)(lStack_170 + 0x40);
    if (lVar18 == *(longlong *)(lStack_170 + 0x20)) {
      pdb_142d7e8a0(lStack_170 + 0x20);
    }
    *(undefined8 *)(*(longlong *)(lStack_170 + 0x28) + lVar18 * 8) = uVar34;
    *(longlong *)(lStack_170 + 0x30) = lVar18 + 1;
    *(longlong *)(lStack_170 + 0x40) = *(longlong *)(lStack_170 + 0x40) + 1;
  }
  uStack_1b0 = CONCAT44(uStack_1b0._4_4_,uVar30);
  if (bVar27) {
    uStack_a8 = *(undefined8 *)(pbVar4 + 0x10);
    uStack_a0 = *(undefined8 *)(pbVar4 + 0x18);
    fVar29 = (float)*(undefined8 *)(pbVar4 + 0x20) + _DAT_142f61060;
    fVar31 = (float)((ulonglong)*(undefined8 *)(pbVar4 + 0x20) >> 0x20) + _UNK_142f61064;
    cVar10 = '\0';
    if ((char)puVar26[0xd] != '\x02') {
      cVar10 = (char)puVar26[0xd];
    }
    uStack_168._0_4_ = *(float *)(pbVar4 + 0x10);
    uStack_168._4_4_ = *(float *)(pbVar4 + 0x14);
    uStack_160._0_4_ = *(float *)(pbVar4 + 0x18);
    uStack_160._4_4_ = *(float *)(pbVar4 + 0x1c);
    *(undefined4 *)param_13[2] = *(undefined4 *)((longlong)param_13 + 0x1c);
    lVar18 = *param_13;
    lVar16 = *(longlong *)(lVar18 + 0x30);
    uVar34 = *(undefined8 *)(lVar18 + 0x40);
    if (lVar16 == *(longlong *)(lVar18 + 0x20)) {
      pdb_142d7ede0(lVar18 + 0x20);
    }
    lVar11 = *(longlong *)(lVar18 + 0x28);
    *(undefined4 *)(lVar11 + lVar16 * 0x28) = 1;
    puVar17 = (undefined4 *)(lVar11 + 4 + lVar16 * 0x28);
    *puVar17 = (float)uStack_168;
    puVar17[1] = uStack_168._4_4_;
    puVar17[2] = (float)uStack_160;
    puVar17[3] = uStack_160._4_4_;
    *(ulonglong *)(lVar11 + 0x14 + lVar16 * 0x28) = CONCAT44(fVar31,fVar29);
    *(char *)(lVar11 + 0x1c + lVar16 * 0x28) = cVar10;
    *(undefined8 *)(lVar11 + 0x20 + lVar16 * 0x28) = uVar34;
    *(longlong *)(lVar18 + 0x30) = lVar16 + 1;
    *(longlong *)(lVar18 + 0x40) = *(longlong *)(lVar18 + 0x40) + 1;
    fVar32 = (float)puVar26[0x11];
    *puStack_b8 = uStack_1d4;
    lVar18 = *(longlong *)(lStack_1b8 + 0x30);
    uVar34 = *(undefined8 *)(lStack_1b8 + 0x40);
    if (lVar18 == *(longlong *)(lStack_1b8 + 0x20)) {
      pdb_142d7e7c0(lStack_1b8 + 0x20);
    }
    lVar16 = *(longlong *)(lStack_1b8 + 0x28);
    lVar11 = lVar18 * 0x30;
    *(undefined4 *)(lVar16 + lVar11) = 1;
    puVar14 = (undefined8 *)(lVar16 + 4 + lVar11);
    *puVar14 = uStack_a8;
    puVar14[1] = uStack_a0;
    fVar35 = _UNK_142f69444;
    pfVar7 = (float *)(lVar16 + 0x14 + lVar11);
    *pfVar7 = fVar29;
    pfVar7[1] = fVar31;
    pfVar7[2] = fVar32;
    pfVar7[3] = fVar35;
    *(undefined1 *)(lVar16 + 0x24 + lVar11) = 0;
    *(undefined8 *)(lVar16 + 0x28 + lVar11) = uVar34;
    *(longlong *)(lStack_1b8 + 0x30) = lVar18 + 1;
    *(longlong *)(lStack_1b8 + 0x40) = *(longlong *)(lStack_1b8 + 0x40) + 1;
  }
  pbVar25 = pbVar4 + 0x10;
  lVar18 = param_12[1];
  uVar22 = *(ulonglong *)*param_12;
  uVar20 = 0;
  uVar23 = uVar22 - *(ulonglong *)(lVar18 + 0x18);
  if (uVar22 < *(ulonglong *)(lVar18 + 0x18)) {
    uVar23 = uVar20;
  }
  uVar21 = uVar22 - *(ulonglong *)(lVar18 + 0x38);
  if (uVar22 < *(ulonglong *)(lVar18 + 0x38)) {
    uVar21 = uVar20;
  }
  bVar27 = *(ulonglong *)(lVar18 + 0x30) < uVar21;
  uVar21 = *(ulonglong *)(lVar18 + 0x30) - uVar21;
  uVar22 = uVar21;
  if (bVar27) {
    uVar22 = uVar20;
  }
  bVar28 = *(ulonglong *)(lVar18 + 0x10) < uVar23;
  uVar23 = *(ulonglong *)(lVar18 + 0x10) - uVar23;
  uVar24 = uVar23;
  if (bVar28) {
    uVar24 = uVar20;
  }
  uVar22 = uVar24 + uVar22;
  if (!bVar28 && uVar23 != 0 || !bVar27 && uVar21 != 0) {
    uVar22 = uVar20;
  }
  *(ulonglong *)*param_12 = *(longlong *)(lVar18 + 0x40) - uVar22;
  if ((*(char *)(lStack_1c0 + 0x18) == '\x02') &&
     (*(undefined **)(lStack_1c0 + 0x38) == puStack_1c8)) {
    bVar19 = *(byte *)(lStack_1c0 + 0x19);
    if (bVar19 < 2) {
      return;
    }
    if (bVar19 != 2) {
      if (bVar19 == 3) {
        uStack_1e8._0_3_ = (undefined3)((uint)puVar26[0x10] >> 8);
        uVar33 = *(undefined8 *)(puVar26 + 0xe);
        uStack_1f4._3_1_ = (undefined1)uVar33;
        uStack_1f0 = (undefined4)((ulonglong)uVar33 >> 8);
        uStack_1ec._0_3_ = (undefined3)((ulonglong)uVar33 >> 0x28);
        uStack_1ec = CONCAT13((char)puVar26[0x10],(undefined3)uStack_1ec);
        uStack_154 = (undefined4)*(undefined8 *)(pbVar4 + 0x20);
        uStack_150 = (undefined4)((ulonglong)*(undefined8 *)(pbVar4 + 0x20) >> 0x20);
        uStack_160 = *(undefined8 **)(pbVar4 + 0x14);
        uStack_158 = *(undefined4 *)(pbVar4 + 0x1c);
        uStack_168 = CONCAT44(*(undefined4 *)pbVar25,1);
        uVar33 = pdb_140df34b0((longlong)&uStack_168 + 4);
        uVar30 = pdb_140de8220(_DAT_14304ab28,_DAT_14304ab2c,uVar33);
        lVar16 = lStack_198;
        *puStack_188 = uStack_180._4_4_;
        lVar18 = *(longlong *)(lStack_198 + 0x30);
        uVar33 = *(undefined8 *)(lStack_198 + 0x40);
        if (lVar18 == *(longlong *)(lStack_198 + 0x20)) {
          pdb_142d7e6e0(lStack_198 + 0x20);
        }
        lVar11 = *(longlong *)(lVar16 + 0x28);
        lVar12 = lVar18 * 0x20;
        *(undefined1 *)(lVar11 + lVar12) = 2;
        puVar14 = (undefined8 *)(lVar11 + 1 + lVar12);
        *puVar14 = CONCAT44(uStack_1f4,uStack_1f8);
        puVar14[1] = CONCAT44(uStack_1ec,uStack_1f0);
        uStack_1f0 = CONCAT31((undefined3)uStack_1e8,uStack_1ec._3_1_);
      }
      else {
        if (0.0 < (float)uVar33) {
          uStack_1f0 = puVar26[0x10];
          uStack_1f8 = (undefined4)*(undefined8 *)(puVar26 + 0xe);
          uStack_1f4 = (undefined4)((ulonglong)*(undefined8 *)(puVar26 + 0xe) >> 0x20);
          uStack_154 = (undefined4)*(undefined8 *)(pbVar4 + 0x20);
          uStack_150 = (undefined4)((ulonglong)*(undefined8 *)(pbVar4 + 0x20) >> 0x20);
          uStack_160 = *(undefined8 **)(pbVar4 + 0x14);
          uStack_158 = *(undefined4 *)(pbVar4 + 0x1c);
          uStack_168 = CONCAT44(*(undefined4 *)pbVar25,1);
          uVar34 = pdb_140df34b0((longlong)&uStack_168 + 4);
          uVar30 = pdb_140de8220(_DAT_14304ab28,_DAT_14304ab2c,uVar34);
          lVar16 = lStack_198;
          *puStack_188 = uStack_180._4_4_;
          lVar18 = *(longlong *)(lStack_198 + 0x30);
          uVar34 = *(undefined8 *)(lStack_198 + 0x40);
          if (lVar18 == *(longlong *)(lStack_198 + 0x20)) {
            pdb_142d7e6e0(lStack_198 + 0x20);
          }
          lVar11 = *(longlong *)(lVar16 + 0x28);
          lVar12 = lVar18 * 0x20;
          *(undefined1 *)(lVar11 + lVar12) = 1;
          *(float *)(lVar11 + 4 + lVar12) = (float)uVar33;
          *(ulonglong *)(lVar11 + 8 + lVar12) = CONCAT44(uStack_1f4,uStack_1f8);
          *(undefined4 *)(lVar11 + 0x10 + lVar12) = uStack_1f0;
          *(undefined4 *)(lVar11 + 0x14 + lVar12) = uVar30;
          *(undefined8 *)(lVar11 + 0x18 + lVar12) = uVar34;
          *(longlong *)(lVar16 + 0x30) = lVar18 + 1;
          *(longlong *)(lVar16 + 0x40) = *(longlong *)(lVar16 + 0x40) + 1;
        }
        fVar29 = (float)((ulonglong)uVar33 >> 0x20);
        if (fVar29 <= 0.0) {
          return;
        }
        uStack_1f0 = puVar26[0x10];
        uStack_1f8 = (undefined4)*(undefined8 *)(puVar26 + 0xe);
        uStack_1f4 = (undefined4)((ulonglong)*(undefined8 *)(puVar26 + 0xe) >> 0x20);
        uStack_154 = (undefined4)*(undefined8 *)(pbVar4 + 0x20);
        uStack_150 = (undefined4)((ulonglong)*(undefined8 *)(pbVar4 + 0x20) >> 0x20);
        uStack_160 = *(undefined8 **)(pbVar4 + 0x14);
        uStack_158 = *(undefined4 *)(pbVar4 + 0x1c);
        uStack_168 = CONCAT44(*(undefined4 *)pbVar25,1);
        uVar33 = pdb_140df34b0((longlong)&uStack_168 + 4);
        uVar30 = pdb_140de8220(_DAT_14304ab28,_DAT_14304ab2c,uVar33);
        lVar16 = lStack_198;
        *puStack_188 = uStack_180._4_4_;
        lVar18 = *(longlong *)(lStack_198 + 0x30);
        uVar33 = *(undefined8 *)(lStack_198 + 0x40);
        if (lVar18 == *(longlong *)(lStack_198 + 0x20)) {
          pdb_142d7e6e0(lStack_198 + 0x20);
        }
        lVar11 = *(longlong *)(lVar16 + 0x28);
        lVar12 = lVar18 * 0x20;
        *(undefined1 *)(lVar11 + lVar12) = 0;
        *(float *)(lVar11 + 4 + lVar12) = fVar29;
        *(ulonglong *)(lVar11 + 8 + lVar12) = CONCAT44(uStack_1f4,uStack_1f8);
      }
      *(undefined4 *)(lVar11 + 0x10 + lVar12) = uStack_1f0;
      *(undefined4 *)(lVar11 + 0x14 + lVar12) = uVar30;
      *(undefined8 *)(lVar11 + 0x18 + lVar12) = uVar33;
      *(longlong *)(lVar16 + 0x30) = lVar18 + 1;
      *(longlong *)(lVar16 + 0x40) = *(longlong *)(lVar16 + 0x40) + 1;
      return;
    }
  }
  if (!bVar28 && uVar23 != 0 || !bVar27 && uVar21 != 0) {
    pdb_140df4540(&fStack_1a4,pbVar4 + 0x18,puVar26[0x11]);
    fVar29 = fStack_1a4;
    fVar31 = fStack_1a0;
    fVar32 = fStack_19c;
    if ((*pbVar4 & 1) != 0) {
      fVar29 = *(float *)(pbVar4 + 4);
      fVar31 = *(float *)(pbVar4 + 8);
      fVar32 = *(float *)(pbVar4 + 0xc);
    }
    fVar29 = fStack_1a4 - fVar29;
    fVar31 = fStack_1a0 - fVar31;
    fVar32 = fStack_19c - fVar32;
    fVar35 = *(float *)(*param_14 + 0x28);
    fVar36 = (float)puVar26[0x11];
    uStack_1f8 = (undefined4)*(undefined8 *)(puVar26 + 0xe);
    uStack_1f4 = (undefined4)((ulonglong)*(undefined8 *)(puVar26 + 0xe) >> 0x20);
    uStack_1f0 = puVar26[0x10];
    uStack_154 = (undefined4)*(undefined8 *)(pbVar4 + 0x20);
    uStack_150 = (undefined4)((ulonglong)*(undefined8 *)(pbVar4 + 0x20) >> 0x20);
    uStack_160 = *(undefined8 **)(pbVar4 + 0x14);
    uStack_158 = *(undefined4 *)(pbVar4 + 0x1c);
    uStack_168 = CONCAT44(*(undefined4 *)pbVar25,1);
    uVar33 = pdb_140df34b0((longlong)&uStack_168 + 4);
    uVar30 = pdb_140de8220(_DAT_14304ab28,_DAT_14304ab2c,uVar33);
    lVar16 = lStack_198;
    *puStack_188 = uStack_180._4_4_;
    lVar18 = *(longlong *)(lStack_198 + 0x30);
    uVar33 = *(undefined8 *)(lStack_198 + 0x40);
    if (lVar18 == *(longlong *)(lStack_198 + 0x20)) {
      pdb_142d7e6e0(lStack_198 + 0x20);
    }
    lVar11 = *(longlong *)(lVar16 + 0x28);
    lVar12 = lVar18 * 0x20;
    *(undefined1 *)(lVar11 + lVar12) = 3;
    *(byte *)(lVar11 + 1 + lVar12) = -(fVar36 == 0.0) & 1;
    *(float *)(lVar11 + 4 + lVar12) =
         SQRT(fVar32 * fVar32 + fVar31 * fVar31 + fVar29 * fVar29) / fVar35;
    *(ulonglong *)(lVar11 + 8 + lVar12) = CONCAT44(uStack_1f4,uStack_1f8);
    *(undefined4 *)(lVar11 + 0x10 + lVar12) = uStack_1f0;
    *(undefined4 *)(lVar11 + 0x14 + lVar12) = uVar30;
    *(undefined8 *)(lVar11 + 0x18 + lVar12) = uVar33;
    *(longlong *)(lVar16 + 0x30) = lVar18 + 1;
    *(longlong *)(lVar16 + 0x40) = *(longlong *)(lVar16 + 0x40) + 1;
    *puVar15 = (undefined4)uStack_1b0;
    pbVar4[0] = 1;
    pbVar4[1] = 0;
    pbVar4[2] = 0;
    pbVar4[3] = 0;
    *(float *)(pbVar4 + 0xc) = fStack_19c;
    *(ulonglong *)(pbVar4 + 4) = CONCAT44(fStack_1a0,fStack_1a4);
  }
  return;
}

