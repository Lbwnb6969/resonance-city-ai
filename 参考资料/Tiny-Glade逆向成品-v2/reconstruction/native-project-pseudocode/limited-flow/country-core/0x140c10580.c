// VA 0x140c10580, PDB extent 2992 bytes
// country_core::systems::terrain::ui_draw_terrain::ui_draw_terrain
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/terrain/ui_draw_terrain.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Instruction at (ram,0x0001430689c5) overlaps instruction at (ram,0x0001430689c4)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000140c11477) */
/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* WARNING: Removing unreachable block (ram,0x000140c11491) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::terrain::ui_draw_terrain::ui_draw_terrain
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/terrain/ui_draw_terrain.rs
   Extent: 2992 */

float * pdb_140c10580(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,
                     undefined8 *param_5,undefined8 *param_6,float *param_7,longlong *param_8,
                     float *param_9,longlong *param_10,longlong *param_11,undefined8 *param_12,
                     byte *param_13,float *param_14,longlong *param_15)

{
  uint *puVar1;
  byte *pbVar2;
  longlong *plVar3;
  ulonglong uVar4;
  int *piVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  undefined8 uVar8;
  float *pfVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  int iVar13;
  byte bVar22;
  float *pfVar14;
  float *pfVar15;
  undefined6 uVar24;
  undefined8 *puVar16;
  char *pcVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  char *pcVar20;
  undefined7 uVar23;
  char *pcVar21;
  byte bVar25;
  uint uVar26;
  float fVar27;
  undefined8 *puVar28;
  code *UNRECOVERED_JUMPTABLE;
  float *pfVar29;
  float *pfVar30;
  longlong lVar31;
  undefined4 uVar32;
  uint uVar33;
  undefined *puVar34;
  ulonglong uVar35;
  float *pfVar36;
  ulonglong *puVar37;
  float *pfVar38;
  longlong lVar39;
  undefined8 uVar40;
  uint uVar41;
  uint uVar42;
  ushort uVar43;
  int iVar44;
  longlong in_R10;
  longlong lVar45;
  float in_R11D;
  longlong lVar46;
  float *pfVar47;
  float *pfVar48;
  float *pfVar49;
  bool bVar50;
  byte bVar51;
  byte bVar52;
  float fVar53;
  float fVar54;
  undefined8 extraout_XMM0_Qa;
  int iVar59;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar60 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar64;
  float fVar68;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar69;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  float fVar74;
  ulonglong in_XMM4_Qa;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  float unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  float unaff_XMM7_Da;
  float unaff_XMM7_Db;
  float unaff_XMM7_Dc;
  float unaff_XMM7_Dd;
  float unaff_XMM8_Da;
  float unaff_XMM8_Db;
  float unaff_XMM9_Da;
  float fVar75;
  float unaff_XMM9_Db;
  float fVar76;
  float unaff_XMM10_Da;
  float unaff_XMM10_Db;
  float unaff_XMM11_Da;
  int unaff_XMM11_Db;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  ulonglong uStack_170;
  float *apfStack_168 [4];
  float fStack_148;
  float fStack_144;
  undefined8 uStack_140;
  float fStack_138;
  float fStack_134;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  ulonglong auStack_f0 [3];
  undefined4 uStack_d8;
  undefined4 uStack_c0;
  byte bStack_af;
  char acStack_9f [3];
  undefined4 uStack_9c;
  undefined8 uStack_98;
  float fStack_90;
  longlong lStack_88;
  float *pfStack_80;
  byte *pbStack_78;
  undefined8 uStack_70;
  undefined1 auVar61 [16];
  
  puVar6 = (ulonglong *)apfStack_168;
  puVar37 = (ulonglong *)((longlong)auStack_f0 + 8);
  uStack_70 = 0xfffffffffffffffe;
  if (*(char *)*param_1 != '\x05') {
    return (float *)*param_1;
  }
  pfVar38 = (float *)*param_12;
  lVar45 = param_12[4];
  pbStack_78 = (byte *)param_12[6];
  pfStack_80 = (float *)CONCAT44(pfStack_80._4_4_,*(undefined4 *)((longlong)param_12 + 0x3c));
  lStack_88 = param_12[8];
  lVar39 = *param_4;
  puVar16 = (undefined8 *)(lVar39 + 0x20);
  puVar28 = (undefined8 *)(lVar39 + 0x28);
  if (*(char *)(lVar39 + 0x298) == '\0') {
    puVar28 = (undefined8 *)(lVar39 + 0x10);
    puVar16 = (undefined8 *)(lVar39 + 8);
  }
  lVar39 = lVar39 + 0x10;
  uStack_120 = *puVar28;
  uStack_128 = *puVar16;
  pfVar47 = (float *)*param_2;
  uStack_118 = (undefined4 *)param_12[10];
  uStack_9c = *(undefined4 *)((longlong)param_12 + 0x5c);
  fStack_148 = 130.0;
  uStack_110 = param_3;
  fVar53 = (float)pdb_140a7d8d0(&uStack_128);
  if (fVar53 <= 0.0) {
    uVar40 = *param_6;
  }
  else {
    pfVar29 = (float *)&UNK_143044340;
    if (*(char *)pfVar47 != '\0') {
      pfVar29 = pfVar47 + 1;
    }
    uVar40 = *param_6;
    if (pfVar29[1] <= _DAT_142e36f50) {
      fStack_108 = 0.0;
      auStack_f0[0] = CONCAT44(auStack_f0[0]._4_4_,4);
      uStack_d8 = 0;
      uStack_c0 = 0;
      uStack_140 = &fStack_108;
      fStack_148 = (float)CONCAT31(fStack_148._1_3_,1);
      lVar39 = 0;
      pdb_1408ffe50(uVar40,&UNK_14306844b,0x11,0);
    }
  }
  fStack_108 = 0.0;
  auStack_f0[0] = auStack_f0[0] & 0xffffffff00000000;
  uStack_d8 = 0;
  uStack_c0 = 0;
  uStack_140 = &fStack_108;
  fStack_148 = (float)CONCAT31(fStack_148._1_3_,2);
  puVar34 = &UNK_14306845c;
  pfVar29 = (float *)CONCAT71((int7)((ulonglong)lVar39 >> 8),3);
  pfVar14 = (float *)pdb_1408ffe50(uVar40,&UNK_14306845c,0xc);
  pfVar15 = (float *)&UNK_143044340;
  if (*(char *)pfVar47 != '\0') {
    pfVar15 = pfVar47 + 1;
  }
  uStack_98 = *(undefined8 *)pfVar15;
  fVar53 = pfVar15[2];
  auVar60 = ZEXT416((uint)uStack_98);
  fVar69 = 0.0;
  auVar70 = ZEXT416(_DAT_142e3c670);
  fStack_90 = fVar53;
  pdb_140defa80(&fStack_138);
  fStack_104 = fStack_138;
  fStack_100 = fStack_134;
  uStack_fc = (undefined4)uStack_130;
  uStack_f8 = (undefined4)((ulonglong)uStack_130 >> 0x20);
  fStack_108 = 0.0;
  pfVar15 = (float *)pdb_140b404c0(pfVar38,&fStack_108);
  auVar55._8_8_ = extraout_XMM0_Qb;
  auVar55._0_8_ = extraout_XMM0_Qa;
  pfVar49 = pfVar47;
  pfVar9 = uStack_140;
  if ((char)pfVar15 == '\0') {
    *(float *)pbStack_78 = pfStack_80._0_4_;
    lVar39 = *(longlong *)(lVar45 + 0x30);
    pfVar49 = *(float **)(lVar45 + 0x40);
    if (lVar39 == *(longlong *)(lVar45 + 0x20)) {
      pfVar15 = (float *)((ulonglong)pfVar15 & 0xffffffff);
      auVar55._0_8_ = pdb_142d7e8a0(lVar45 + 0x20);
      auVar55._8_8_ = extraout_XMM0_Qb_00;
      pfVar9 = uStack_140;
    }
    *(float **)(*(longlong *)(lVar45 + 0x28) + lVar39 * 8) = pfVar49;
    pfVar38 = (float *)(lVar39 + 1);
    *(float **)(lVar45 + 0x30) = pfVar38;
    *(longlong *)(lVar45 + 0x40) = *(longlong *)(lVar45 + 0x40) + 1;
    if (((*(char *)(pfVar14 + 6) == '\x02') && (*(undefined **)(pfVar14 + 0xe) == puVar34)) &&
       (*(char *)((longlong)pfVar14 + 0x19) != '\x02')) {
      *uStack_118 = uStack_9c;
      lVar45 = *(longlong *)(lStack_88 + 0x30);
      uVar40 = *(undefined8 *)(lStack_88 + 0x40);
      if (lVar45 == *(longlong *)(lStack_88 + 0x20)) {
        pfVar15 = (float *)((ulonglong)pfVar15 & 0xffffffff);
        uStack_140 = pfVar9;
        auVar55._0_8_ = pdb_142d7e8a0(lStack_88 + 0x20);
        auVar55._8_8_ = extraout_XMM0_Qb_01;
        pfVar49 = pfVar15;
        pfVar9 = uStack_140;
      }
      *(undefined8 *)(*(longlong *)(lStack_88 + 0x28) + lVar45 * 8) = uVar40;
      pfVar38 = (float *)(lVar45 + 1);
      *(float **)(lStack_88 + 0x30) = pfVar38;
      *(longlong *)(lStack_88 + 0x40) = *(longlong *)(lStack_88 + 0x40) + 1;
    }
  }
  uStack_140._4_4_ = (float)((ulonglong)pfVar9 >> 0x20);
  uStack_140._0_4_ = SUB84(pfVar9,0);
  if ((*(char *)(pfVar14 + 6) != '\x02') || (*(undefined **)(pfVar14 + 0xe) != puVar34)) {
    *param_13 = 0;
    return pfVar15;
  }
  bVar52 = (byte)pfVar15;
  if (*(byte *)((longlong)pfVar14 + 0x19) < 2) {
    bVar51 = ((byte)(*param_13 - 1) < 2) * '\x03';
    *param_13 = bVar51;
    cVar10 = *(char *)((longlong)pfVar14 + 0x19);
  }
  else if (*(byte *)((longlong)pfVar14 + 0x19) == 2) {
    bVar51 = 0;
    *param_13 = 0;
    cVar10 = *(char *)((longlong)pfVar14 + 0x19);
  }
  else {
    bVar51 = 2;
    if (1 < (byte)(*param_13 - 1)) {
      bVar51 = bVar52;
    }
    *param_13 = bVar51;
    cVar10 = *(char *)((longlong)pfVar14 + 0x19);
  }
  if (cVar10 == '\x03') {
    pfVar48 = (float *)&UNK_143044340;
    if (*(char *)pfVar47 != '\0') {
      pfVar48 = pfVar47 + 1;
    }
    auVar55 = ZEXT416((uint)pfVar48[1]);
    *param_14 = pfVar48[1];
  }
  pfVar48 = (float *)&UNK_143044340;
  puVar34 = &UNK_1430689c0;
  uVar35 = (ulonglong)*(int *)(&UNK_1430689c0 + (ulonglong)bVar51 * 4);
  pfVar36 = (float *)(&UNK_1430689c0 + uVar35);
  bVar50 = pfVar36 == (float *)0x0;
  fVar54 = auVar55._0_4_;
  fVar64 = auVar55._4_4_;
  uVar40 = auVar55._0_8_;
  uVar41 = (uint)pfVar15;
  uVar24 = (undefined6)((ulonglong)pfVar15 >> 0x10);
  uVar23 = (undefined7)((ulonglong)pfVar15 >> 8);
  bVar25 = (byte)param_7;
  fVar68 = auVar60._0_4_;
  auVar63._4_12_ = auVar60._4_12_;
  cVar10 = (char)pfVar36;
  fVar75 = auVar70._0_4_;
  fVar74 = (float)in_XMM4_Qa;
  fVar76 = (float)(in_XMM4_Qa >> 0x20);
  fVar27 = SUB84(pfVar38,0);
  bVar22 = (byte)((ulonglong)pfVar15 >> 8);
  pfVar30 = param_7;
  uStack_140 = pfVar9;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar51) {
  case 0:
    return pfVar15;
  case 1:
    fVar53 = param_7[7];
    pfVar15 = *(float **)(param_7 + 4);
    *pfVar15 = fVar53;
    pfVar38 = *(float **)param_7;
    uVar32 = SUB84(&uStack_98,0);
    uVar35 = pdb_140b14280(pfVar38);
    if ((uVar35 & 1) == 0) {
      pfVar38 = (float *)pdb_140a433b0(&UNK_143068498,0x25);
      return pfVar38;
    }
    pbStack_78 = (byte *)CONCAT44(pbStack_78._4_4_,uVar32);
    unaff_XMM6_Da = *param_14;
    *pfVar15 = fVar53;
    *pfVar38 = 1.4013e-45;
    pfVar38[1] = unaff_XMM6_Da;
    uVar40 = *uStack_110;
    puVar16 = (undefined8 *)pdb_140bf45b0(uVar40,&UNK_14331ca40);
    unaff_XMM7_Da = _DAT_142e37874;
    bVar50 = true;
    if (puVar16 != (undefined8 *)0x0) {
      lVar45 = (**(code **)(puVar16[1] + 0x18))(*puVar16);
      if (lVar45 != 0) {
        if (*(longlong *)(lVar45 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(0,0,&UNK_1430685e8);
        }
        if (*(int *)(*(longlong *)(lVar45 + 8) + 0x10) != -1) {
          unaff_XMM7_Da = 0.0;
          bVar50 = false;
        }
      }
    }
    pfStack_80 = (float *)CONCAT44(pfStack_80._4_4_,fVar53);
    puVar16 = (undefined8 *)pdb_140bf45b0(uVar40,&UNK_14331ca70);
    if (puVar16 != (undefined8 *)0x0) {
      lVar45 = (**(code **)(puVar16[1] + 0x18))(*puVar16);
      if (lVar45 != 0) {
        pfVar29 = pfVar47 + 1;
        if (bVar50) {
          fVar53 = pbStack_78._0_4_;
        }
        else {
code_r0x000140c10c34:
          pfVar14 = pfVar48;
          if (*(char *)pfVar47 != '\0') {
            pfVar14 = pfVar29;
          }
          auVar56._4_4_ = *pfVar14;
          auVar56._0_4_ = pfVar14[2];
          auVar56._8_8_ = 0;
          auVar55 = divps(auVar56,_DAT_142e61200);
          auVar57._0_4_ = auVar55._0_4_ + _DAT_142e36f60;
          auVar57._4_4_ = auVar55._4_4_ + _UNK_142e36f64;
          auVar57._8_4_ = auVar55._8_4_ + _UNK_142e36f68;
          auVar57._12_4_ = auVar55._12_4_ + _UNK_142e36f6c;
          auVar55 = maxps(auVar57,ZEXT816(0));
          fVar69 = auVar55._4_4_ * _DAT_142e61210;
          fVar53 = auVar55._0_4_ * _DAT_142e61210;
          uVar41 = (uint)(longlong)fVar69;
          if (fVar69 < 0.0) {
            uVar41 = 0;
          }
          iVar13 = -(uint)(auVar55._0_4_ < _DAT_142e37950);
          iVar59 = -(uint)(auVar55._4_4_ < _UNK_142e37954);
          auVar62._4_4_ = iVar59;
          auVar62._0_4_ = iVar13;
          if (_DAT_142e46a48 < fVar69) {
            uVar41 = 0xffffffff;
          }
          uVar42 = (uint)(longlong)fVar53;
          if (fVar53 < 0.0) {
            uVar42 = 0;
          }
          auVar62._8_4_ = iVar59;
          auVar62._12_4_ = iVar59;
          auVar61._8_8_ = auVar62._8_8_;
          auVar61._4_4_ = iVar13;
          auVar61._0_4_ = iVar13;
          if (_DAT_142e46a48 < fVar53) {
            uVar42 = 0xffffffff;
          }
          if (0x1fe < uVar41) {
            uVar41 = 0x1ff;
          }
          uVar33 = movmskpd(0xffffffff,auVar61);
          if ((uVar33 & 2) == 0) {
            uVar41 = 0x1ff;
          }
          if (0x1fe < uVar42) {
            uVar42 = 0x1ff;
          }
          uVar26 = 0x3fe00;
          if ((uVar33 & 1) != 0) {
            uVar26 = uVar42 << 9;
          }
          uVar35 = (ulonglong)((uVar26 | uVar41) >> 5);
          if (*(ulonglong *)(lVar45 + 0x10) <= uVar35) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar35,*(ulonglong *)(lVar45 + 0x10),&UNK_143360e88);
          }
          fVar53 = pbStack_78._0_4_;
          if ((*(uint *)(*(longlong *)(lVar45 + 8) + uVar35 * 4) >> (uVar41 & 0x1f) & 1) == 0) {
            unaff_XMM6_Da = unaff_XMM6_Da + _DAT_142e37838;
          }
        }
        *pfVar15 = pfStack_80._0_4_;
        fStack_108 = fVar53;
        if (*(longlong *)(pfVar38 + 8) != 0) {
          uVar35 = pdb_1400aede0(pfVar38 + 10,&fStack_108);
          lVar45 = *(longlong *)(pfVar38 + 2);
          bVar52 = (byte)(uVar35 >> 0x39);
          auVar55 = ZEXT216(CONCAT11(bVar52,bVar52));
          auVar55 = pshuflw(auVar55,auVar55,0);
          lVar39 = 0;
          while( true ) {
            uVar35 = uVar35 & *(ulonglong *)(pfVar38 + 4);
            auVar60 = *(undefined1 (*) [16])(lVar45 + uVar35);
            auVar73[0] = -(auVar60[0] == auVar55[0]);
            auVar73[1] = -(auVar60[1] == auVar55[1]);
            auVar73[2] = -(auVar60[2] == auVar55[2]);
            auVar73[3] = -(auVar60[3] == auVar55[3]);
            auVar73[4] = -(auVar60[4] == auVar55[4]);
            auVar73[5] = -(auVar60[5] == auVar55[5]);
            auVar73[6] = -(auVar60[6] == auVar55[6]);
            auVar73[7] = -(auVar60[7] == auVar55[7]);
            auVar73[8] = -(auVar60[8] == auVar55[0]);
            auVar73[9] = -(auVar60[9] == auVar55[1]);
            auVar73[10] = -(auVar60[10] == auVar55[2]);
            auVar73[0xb] = -(auVar60[0xb] == auVar55[3]);
            auVar73[0xc] = -(auVar60[0xc] == auVar55[4]);
            auVar73[0xd] = -(auVar60[0xd] == auVar55[5]);
            auVar73[0xe] = -(auVar60[0xe] == auVar55[6]);
            auVar73[0xf] = -(auVar60[0xf] == auVar55[7]);
            uVar43 = (ushort)(SUB161(auVar73 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar73 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar73 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar73 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar73 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar73 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar73 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar73 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar73 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar73 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar73 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar73 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar73 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar73 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar73 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar73[0xf] >> 7) << 0xf;
            uVar41 = (uint)uVar43;
            while (uVar43 != 0) {
              uVar42 = 0;
              for (uVar33 = uVar41; (uVar33 & 1) == 0; uVar33 = uVar33 >> 1 | 0x80000000) {
                uVar42 = uVar42 + 1;
              }
              lVar31 = (uVar42 + uVar35 & *(ulonglong *)(pfVar38 + 4)) * -0x30;
              if (fVar53 == *(float *)(lVar45 + -0x30 + lVar31)) {
                fVar53 = unaff_XMM7_Da;
                if (unaff_XMM7_Da <= unaff_XMM6_Da) {
                  fVar53 = unaff_XMM6_Da;
                }
                fVar53 = (float)(~-(uint)NAN(unaff_XMM6_Da) & (uint)fVar53 |
                                -(uint)NAN(unaff_XMM6_Da) & (uint)unaff_XMM7_Da);
                if (_DAT_142e382c8 <= fVar53) {
                  fVar53 = _DAT_142e382c8;
                }
                *(float *)(lVar45 + lVar31 + -8) = fVar53;
                *(undefined4 *)param_8[2] = *(undefined4 *)((longlong)param_8 + 0x1c);
                *(undefined1 *)(*param_8 + 0x1e0) = 1;
                **(float **)(param_9 + 4) = param_9[7];
                lVar45 = *(longlong *)param_9;
                lVar39 = *(longlong *)(lVar45 + 0x30);
                uVar40 = *(undefined8 *)(lVar45 + 0x40);
                if (lVar39 == *(longlong *)(lVar45 + 0x20)) {
                  pdb_142d7e980(lVar45 + 0x20);
                }
                lVar31 = *(longlong *)(lVar45 + 0x28);
                *(undefined8 *)(lVar31 + lVar39 * 0x10) = uVar40;
                *(float *)(lVar31 + 8 + lVar39 * 0x10) = pbStack_78._0_4_;
                *(longlong *)(lVar45 + 0x30) = lVar39 + 1;
                *(longlong *)(lVar45 + 0x40) = *(longlong *)(lVar45 + 0x40) + 1;
                if (*(char *)pfVar47 != '\0') {
                  pfVar48 = pfVar29;
                }
                fStack_100 = pfVar48[2];
                fStack_108 = (float)*(undefined8 *)pfVar48;
                fStack_104 = (float)((ulonglong)*(undefined8 *)pfVar48 >> 0x20);
                *(undefined4 *)param_15[2] = *(undefined4 *)((longlong)param_15 + 0x1c);
                lVar45 = *param_15;
                lVar39 = *(longlong *)(lVar45 + 0x30);
                uVar40 = *(undefined8 *)(lVar45 + 0x40);
                if (lVar39 == *(longlong *)(lVar45 + 0x20)) {
                  pdb_142d7ede0(lVar45 + 0x20);
                }
                pfVar38 = *(float **)(lVar45 + 0x28);
                *(undefined8 *)(pfVar38 + lVar39 * 10) = uVar40;
                pfVar38[lVar39 * 10 + 2] = 7.00649e-45;
                *(ulonglong *)(pfVar38 + lVar39 * 10 + 3) = CONCAT44(fStack_104,fStack_108);
                pfVar38[lVar39 * 10 + 5] = fStack_100;
                pfVar38[lVar39 * 10 + 6] = unaff_XMM6_Da;
                *(longlong *)(lVar45 + 0x30) = lVar39 + 1;
                *(longlong *)(lVar45 + 0x40) = *(longlong *)(lVar45 + 0x40) + 1;
                return pfVar38;
              }
              uVar43 = (ushort)(uVar41 - 1) & (ushort)uVar41;
              uVar41 = CONCAT22((short)(uVar41 - 1 >> 0x10),uVar43);
              fVar53 = pbStack_78._0_4_;
            }
            auVar67[0] = -(auVar60[0] == -1);
            auVar67[1] = -(auVar60[1] == -1);
            auVar67[2] = -(auVar60[2] == -1);
            auVar67[3] = -(auVar60[3] == -1);
            auVar67[4] = -(auVar60[4] == -1);
            auVar67[5] = -(auVar60[5] == -1);
            auVar67[6] = -(auVar60[6] == -1);
            auVar67[7] = -(auVar60[7] == -1);
            auVar67[8] = -(auVar60[8] == -1);
            auVar67[9] = -(auVar60[9] == -1);
            auVar67[10] = -(auVar60[10] == -1);
            auVar67[0xb] = -(auVar60[0xb] == -1);
            auVar67[0xc] = -(auVar60[0xc] == -1);
            auVar67[0xd] = -(auVar60[0xd] == -1);
            auVar67[0xe] = -(auVar60[0xe] == -1);
            auVar67[0xf] = -(auVar60[0xf] == -1);
            if ((((((((((((((((SUB161(auVar67 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar67 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar67 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar67 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar67 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar67 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar67 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar67 >> 0x3f,0) & 1) != 0) || (SUB161(auVar67 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar67 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar67 >> 0x57,0) & 1) != 0) || (SUB161(auVar67 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar67 >> 0x67,0) & 1) != 0) || (SUB161(auVar67 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar67 >> 0x77,0) & 1) != 0) || auVar67[0xf] < '\0') break;
            uVar35 = uVar35 + lVar39 + 0x10;
            lVar39 = lVar39 + 0x10;
          }
        }
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143068480);
      }
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143068468);
  case 2:
    **(float **)(param_7 + 4) = param_7[7];
    lVar45 = *(longlong *)param_7;
    if (*(longlong *)(lVar45 + 0x38) != 0) {
      fVar53 = (float)((int)*(longlong *)(lVar45 + 0x38) + -1);
      if (*(longlong *)(lVar45 + 0x20) == 0) {
        return pfVar15;
      }
      fStack_108 = fVar53;
      pcVar17 = (char *)pdb_1400aede0(lVar45 + 0x28,&fStack_108);
      lVar39 = *(longlong *)(lVar45 + 8);
      bVar51 = (byte)((ulonglong)pcVar17 >> 0x39);
      auVar55 = ZEXT216(CONCAT11(bVar51,bVar51));
      auVar55 = pshuflw(auVar55,auVar55,0);
      lVar31 = 0;
      do {
        pfVar38 = (float *)((ulonglong)pcVar17 & *(ulonglong *)(lVar45 + 0x10));
        pcVar17 = (char *)(lVar39 + (longlong)pfVar38);
        auVar71[0] = -(*pcVar17 == auVar55[0]);
        auVar71[1] = -(pcVar17[1] == auVar55[1]);
        auVar71[2] = -(pcVar17[2] == auVar55[2]);
        auVar71[3] = -(pcVar17[3] == auVar55[3]);
        auVar71[4] = -(pcVar17[4] == auVar55[4]);
        auVar71[5] = -(pcVar17[5] == auVar55[5]);
        auVar71[6] = -(pcVar17[6] == auVar55[6]);
        auVar71[7] = -(pcVar17[7] == auVar55[7]);
        auVar71[8] = -(pcVar17[8] == auVar55[0]);
        auVar71[9] = -(pcVar17[9] == auVar55[1]);
        auVar71[10] = -(pcVar17[10] == auVar55[2]);
        auVar71[0xb] = -(pcVar17[0xb] == auVar55[3]);
        auVar71[0xc] = -(pcVar17[0xc] == auVar55[4]);
        auVar71[0xd] = -(pcVar17[0xd] == auVar55[5]);
        auVar71[0xe] = -(pcVar17[0xe] == auVar55[6]);
        auVar71[0xf] = -(pcVar17[0xf] == auVar55[7]);
        uVar43 = (ushort)(SUB161(auVar71 >> 7,0) & 1) | (ushort)(SUB161(auVar71 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar71 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar71 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar71 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar71 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar71 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar71 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar71 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar71 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar71 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar71 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar71 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar71 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar71 >> 0x77,0) & 1) << 0xe | (ushort)(auVar71[0xf] >> 7) << 0xf
        ;
        uVar41 = (uint)uVar43;
        while (uVar43 != 0) {
          uVar42 = 0;
          for (uVar33 = uVar41; (uVar33 & 1) == 0; uVar33 = uVar33 >> 1 | 0x80000000) {
            uVar42 = uVar42 + 1;
          }
          lVar46 = ((ulonglong)((ulonglong)uVar42 + (longlong)pfVar38) &
                   *(ulonglong *)(lVar45 + 0x10)) * -0x30;
          if (fVar53 == *(float *)(lVar39 + -0x30 + lVar46)) {
            if (bVar52 == 0) {
              return pfVar38;
            }
            pdb_140a00140(lVar39 + lVar46 + -0x28,&uStack_98);
            lVar45 = *(longlong *)(lVar45 + 0x38);
            if (lVar45 != 0) {
              **(float **)(param_9 + 4) = param_9[7];
              lVar39 = *(longlong *)param_9;
              lVar31 = *(longlong *)(lVar39 + 0x30);
              uVar40 = *(undefined8 *)(lVar39 + 0x40);
              if (lVar31 == *(longlong *)(lVar39 + 0x20)) {
                pdb_142d7e980(lVar39 + 0x20);
              }
              pfVar38 = *(float **)(lVar39 + 0x28);
              *(undefined8 *)(pfVar38 + lVar31 * 4) = uVar40;
              pfVar38[lVar31 * 4 + 2] = (float)((int)lVar45 - 1);
              *(longlong *)(lVar39 + 0x30) = lVar31 + 1;
              *(longlong *)(lVar39 + 0x40) = *(longlong *)(lVar39 + 0x40) + 1;
              return pfVar38;
            }
            goto code_r0x000140c11057;
          }
          uVar43 = (ushort)(uVar41 - 1) & (ushort)uVar41;
          uVar41 = CONCAT22((short)(uVar41 - 1 >> 0x10),uVar43);
        }
        auVar65[0] = -(*pcVar17 == -1);
        auVar65[1] = -(pcVar17[1] == -1);
        auVar65[2] = -(pcVar17[2] == -1);
        auVar65[3] = -(pcVar17[3] == -1);
        auVar65[4] = -(pcVar17[4] == -1);
        auVar65[5] = -(pcVar17[5] == -1);
        auVar65[6] = -(pcVar17[6] == -1);
        auVar65[7] = -(pcVar17[7] == -1);
        auVar65[8] = -(pcVar17[8] == -1);
        auVar65[9] = -(pcVar17[9] == -1);
        auVar65[10] = -(pcVar17[10] == -1);
        auVar65[0xb] = -(pcVar17[0xb] == -1);
        auVar65[0xc] = -(pcVar17[0xc] == -1);
        auVar65[0xd] = -(pcVar17[0xd] == -1);
        auVar65[0xe] = -(pcVar17[0xe] == -1);
        auVar65[0xf] = -(pcVar17[0xf] == -1);
        if ((((((((((((((((SUB161(auVar65 >> 7,0) & 1) != 0 || (SUB161(auVar65 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar65 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar65 >> 0x1f,0) & 1) != 0) || (SUB161(auVar65 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar65 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar65 >> 0x37,0) & 1) != 0) || (SUB161(auVar65 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar65 >> 0x47,0) & 1) != 0) || (SUB161(auVar65 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar65 >> 0x57,0) & 1) != 0) || (SUB161(auVar65 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar65 >> 0x67,0) & 1) != 0) || (SUB161(auVar65 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar65 >> 0x77,0) & 1) != 0) || auVar65[0xf] < '\0') {
          return pfVar38;
        }
        pcVar17 = (char *)((longlong)pfVar38 + lVar31 + 0x10);
        lVar31 = lVar31 + 0x10;
      } while( true );
    }
    goto code_r0x000140c11057;
  case 3:
    fVar53 = param_7[7];
    pfVar29 = *(float **)(param_7 + 4);
    *pfVar29 = fVar53;
    pfVar48 = *(float **)param_7;
    if (*(longlong *)(pfVar48 + 0xe) != 0) {
      fVar69 = (float)((int)*(longlong *)(pfVar48 + 0xe) + -1);
      if (*(longlong *)(pfVar48 + 8) == 0) {
code_r0x000140c11047:
        *pfVar29 = fVar53;
        *pfVar48 = 0.0;
        return pfVar15;
      }
      fStack_108 = fVar69;
      pcVar17 = (char *)pdb_1400aede0(pfVar48 + 10,&fStack_108);
      lVar45 = *(longlong *)(pfVar48 + 2);
      bVar52 = (byte)((ulonglong)pcVar17 >> 0x39);
      auVar55 = ZEXT216(CONCAT11(bVar52,bVar52));
      auVar55 = pshuflw(auVar55,auVar55,0);
      lVar39 = 0;
      do {
        pfVar15 = (float *)((ulonglong)pcVar17 & *(ulonglong *)(pfVar48 + 4));
        auVar60 = *(undefined1 (*) [16])(lVar45 + (longlong)pfVar15);
        auVar72[0] = -(auVar60[0] == auVar55[0]);
        auVar72[1] = -(auVar60[1] == auVar55[1]);
        auVar72[2] = -(auVar60[2] == auVar55[2]);
        auVar72[3] = -(auVar60[3] == auVar55[3]);
        auVar72[4] = -(auVar60[4] == auVar55[4]);
        auVar72[5] = -(auVar60[5] == auVar55[5]);
        auVar72[6] = -(auVar60[6] == auVar55[6]);
        auVar72[7] = -(auVar60[7] == auVar55[7]);
        auVar72[8] = -(auVar60[8] == auVar55[0]);
        auVar72[9] = -(auVar60[9] == auVar55[1]);
        auVar72[10] = -(auVar60[10] == auVar55[2]);
        auVar72[0xb] = -(auVar60[0xb] == auVar55[3]);
        auVar72[0xc] = -(auVar60[0xc] == auVar55[4]);
        auVar72[0xd] = -(auVar60[0xd] == auVar55[5]);
        auVar72[0xe] = -(auVar60[0xe] == auVar55[6]);
        auVar72[0xf] = -(auVar60[0xf] == auVar55[7]);
        uVar43 = (ushort)(SUB161(auVar72 >> 7,0) & 1) | (ushort)(SUB161(auVar72 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar72 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar72 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar72 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar72 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar72 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar72 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar72 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar72 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar72 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar72 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar72 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar72 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar72 >> 0x77,0) & 1) << 0xe | (ushort)(auVar72[0xf] >> 7) << 0xf
        ;
        uVar41 = (uint)uVar43;
        while (uVar43 != 0) {
          uVar42 = 0;
          for (uVar33 = uVar41; (uVar33 & 1) == 0; uVar33 = uVar33 >> 1 | 0x80000000) {
            uVar42 = uVar42 + 1;
          }
          lVar31 = ((ulonglong)((ulonglong)uVar42 + (longlong)pfVar15) & *(ulonglong *)(pfVar48 + 4)
                   ) * -0x30;
          if (fVar69 == *(float *)(lVar45 + -0x30 + lVar31)) {
            lVar45 = lVar45 + lVar31;
            pfVar47 = *(float **)(lVar45 + -0x18);
            pfVar15 = (float *)((longlong)pfVar47 * 0xc);
            if ((float *)0xaaaaaaaaaaaaaaa < pfVar47) {
              uVar40 = 0;
code_r0x000140c10c29:
              lVar45 = pdb_142dc7e2a(uVar40,pfVar15);
              goto code_r0x000140c10c34;
            }
            unaff_XMM6_Da = *(float *)(lVar45 + -8);
            pfVar38 = *(float **)(lVar45 + -0x20);
            if (pfVar15 == (float *)0x0) {
              pbStack_78 = (byte *)0x4;
              pfStack_80 = (float *)0x0;
              pfVar14 = pfStack_80;
            }
            else {
              pdb_14007ee60();
              uVar40 = 4;
              pbStack_78 = pub_1406abab0((ulonglong)pfVar15,4);
              pfVar14 = pfVar47;
              if (pbStack_78 == (byte *)0x0) goto code_r0x000140c10c29;
            }
            pfStack_80 = pfVar14;
            if (pfVar47 != (float *)0x0) {
              pub_142e32760(pbStack_78,pfVar38,pfVar15);
            }
            *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
            lStack_88 = *(longlong *)(pfVar48 + 0xe);
            if (lStack_88 == 0) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc8150(&UNK_143055190);
            }
            plVar3 = (longlong *)*param_5;
            auStack_f0[1] = plVar3[4];
            lVar45 = *plVar3;
            auStack_f0[0] = plVar3[3];
            uStack_f8 = (undefined4)plVar3[2];
            uStack_f4 = (undefined4)((ulonglong)plVar3[2] >> 0x20);
            fStack_108 = (float)lVar45;
            fStack_104 = (float)((ulonglong)lVar45 >> 0x20);
            fStack_100 = (float)plVar3[1];
            uStack_fc = (undefined4)((ulonglong)plVar3[1] >> 0x20);
            *plVar3 = -0x8000000000000000;
            plVar3[1] = (longlong)pfStack_80;
            plVar3[2] = (longlong)pbStack_78;
            plVar3[3] = (longlong)pfVar47;
            *(int *)(plVar3 + 4) = (int)lStack_88 + -1;
            *(float *)((longlong)plVar3 + 0x24) = unaff_XMM6_Da;
            if (lVar45 != -0x7ffffffffffffffe) {
              pdb_140c11450(&fStack_108);
                    /* WARNING: Subroutine does not return */
              pdb_142dc83b0(&UNK_1430684bd,0x10f,&UNK_1430685d0);
            }
            *(undefined4 *)param_10[2] = *(undefined4 *)((longlong)param_10 + 0x1c);
            lVar45 = *param_10;
            lVar39 = *(longlong *)(lVar45 + 0x30);
            uVar40 = *(undefined8 *)(lVar45 + 0x40);
            if (lVar39 == *(longlong *)(lVar45 + 0x20)) {
              pdb_142d7e980(lVar45 + 0x20);
            }
            lVar31 = *(longlong *)(lVar45 + 0x28);
            *(undefined8 *)(lVar31 + lVar39 * 0x10) = uVar40;
            *(undefined1 *)(lVar31 + 8 + lVar39 * 0x10) = 0;
            *(longlong *)(lVar45 + 0x30) = lVar39 + 1;
            *(longlong *)(lVar45 + 0x40) = *(longlong *)(lVar45 + 0x40) + 1;
            *(undefined4 *)param_11[2] = *(undefined4 *)((longlong)param_11 + 0x1c);
            lVar45 = *param_11;
            lVar39 = *(longlong *)(lVar45 + 0x30);
            uVar40 = *(undefined8 *)(lVar45 + 0x40);
            if (lVar39 == *(longlong *)(lVar45 + 0x20)) {
              pdb_142d7e8a0(lVar45 + 0x20);
            }
            pfVar15 = *(float **)(lVar45 + 0x28);
            *(undefined8 *)(pfVar15 + lVar39 * 2) = uVar40;
            *(longlong *)(lVar45 + 0x30) = lVar39 + 1;
            *(longlong *)(lVar45 + 0x40) = *(longlong *)(lVar45 + 0x40) + 1;
            goto code_r0x000140c11047;
          }
          uVar43 = (ushort)(uVar41 - 1) & (ushort)uVar41;
          uVar41 = CONCAT22((short)(uVar41 - 1 >> 0x10),uVar43);
        }
        auVar66[0] = -(auVar60[0] == -1);
        auVar66[1] = -(auVar60[1] == -1);
        auVar66[2] = -(auVar60[2] == -1);
        auVar66[3] = -(auVar60[3] == -1);
        auVar66[4] = -(auVar60[4] == -1);
        auVar66[5] = -(auVar60[5] == -1);
        auVar66[6] = -(auVar60[6] == -1);
        auVar66[7] = -(auVar60[7] == -1);
        auVar66[8] = -(auVar60[8] == -1);
        auVar66[9] = -(auVar60[9] == -1);
        auVar66[10] = -(auVar60[10] == -1);
        auVar66[0xb] = -(auVar60[0xb] == -1);
        auVar66[0xc] = -(auVar60[0xc] == -1);
        auVar66[0xd] = -(auVar60[0xd] == -1);
        auVar66[0xe] = -(auVar60[0xe] == -1);
        auVar66[0xf] = -(auVar60[0xf] == -1);
        if ((((((((((((((((SUB161(auVar66 >> 7,0) & 1) != 0 || (SUB161(auVar66 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar66 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar66 >> 0x1f,0) & 1) != 0) || (SUB161(auVar66 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar66 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar66 >> 0x37,0) & 1) != 0) || (SUB161(auVar66 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar66 >> 0x47,0) & 1) != 0) || (SUB161(auVar66 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar66 >> 0x57,0) & 1) != 0) || (SUB161(auVar66 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar66 >> 0x67,0) & 1) != 0) || (SUB161(auVar66 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar66 >> 0x77,0) & 1) != 0) || auVar66[0xf] < '\0') goto code_r0x000140c11047;
        pcVar17 = (char *)((longlong)pfVar15 + lVar39 + 0x10);
        lVar39 = lVar39 + 0x10;
      } while( true );
    }
code_r0x000140c11057:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143055190);
  case 4:
    UNRECOVERED_JUMPTABLE =
         (code *)(&UNK_1430689d0 + *(int *)(&UNK_1430689d0 + (longlong)param_7 * 4));
    goto code_r0x000140c11298;
  case 5:
    puVar34 = (undefined *)(ulonglong)(uVar41 + 0x24574f5);
    goto code_r0x000140c11399;
  case 6:
    *(char *)((longlong)pfVar15 + -0x77) = *(char *)((longlong)pfVar15 + -0x77) + bVar25;
    puVar1 = (uint *)((longlong)pfVar15 + -0x77);
    *puVar1 = *puVar1 >> 1 | (uint)((*puVar1 & 1) != 0) << 0x1f;
    return pfVar15;
  case 7:
    pfVar15 = (float *)((ulonglong)param_14 & 0xffffffff);
    *(char *)pfVar15 = *(char *)pfVar15 + (char)pfVar15;
    *(char *)((longlong)pfVar15 + -0x73) = *(char *)((longlong)pfVar15 + -0x73) + bVar25;
  case 0xb:
    puVar34 = (undefined *)(ulonglong)((int)pfVar15 + 0x2457528);
    goto code_r0x000140c11399;
  case 8:
    puVar34 = (undefined *)(ulonglong)(uVar41 + 0x245757e);
    goto code_r0x000140c11399;
  case 9:
    uVar40 = 6;
    puVar34 = &UNK_143068866;
    goto pdb_140f679a0;
  case 10:
    *(char *)((longlong)pfVar15 + -0x77) = *(char *)((longlong)pfVar15 + -0x77) + bVar25;
    puVar1 = (uint *)((longlong)pfVar15 + -0x77);
    *puVar1 = *puVar1 >> 1 | (uint)((*puVar1 & 1) != 0) << 0x1f;
    return pfVar15;
  case 0xc:
    *(char *)((longlong)pfVar15 + -0x77) = *(char *)((longlong)pfVar15 + -0x77) + bVar25;
    puVar1 = (uint *)((longlong)pfVar15 + -0x77);
    *puVar1 = *puVar1 >> 1 | (uint)((*puVar1 & 1) != 0) << 0x1f;
    return pfVar15;
  case 0xd:
    puVar34 = (undefined *)0x43068847;
    goto code_r0x000140c113e3;
  case 0xe:
    *(char *)((longlong)pfVar15 + -0x77) = *(char *)((longlong)pfVar15 + -0x77) + bVar25;
    puVar1 = (uint *)((longlong)pfVar15 + -0x77);
    *puVar1 = *puVar1 >> 1 | (uint)((*puVar1 & 1) != 0) << 0x1f;
    return pfVar15;
  case 0xf:
    *param_7 = (float)((uint)*param_7 ^ uVar41);
    *(byte *)pfVar15 = *(char *)pfVar15 + bVar52;
    puVar34 = &UNK_14306884e;
    goto code_r0x000140c113b5;
  case 0x10:
    return pfVar15;
  case 0x11:
    goto code_r0x000140c1135d;
  case 0x12:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x13:
    lVar45 = CONCAT62(uVar24,CONCAT11(*(char *)((longlong)pfVar14 + 0x35),bVar52));
    pcVar17 = (char *)(lVar45 + -0x73);
    *pcVar17 = *pcVar17 + bVar25;
    puVar34 = (undefined *)(ulonglong)((int)lVar45 + 0x2457507);
code_r0x000140c113b5:
    uVar40 = 3;
    goto pdb_140f679a0;
  case 0x14:
    UNRECOVERED_JUMPTABLE = (code *)(ulonglong)((int)param_7 + uVar41);
code_r0x000140c11298:
                    /* WARNING: Could not recover jumptable at 0x000140c11298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pfVar38 = (float *)(*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
    return pfVar38;
  case 0x15:
    puVar34 = (undefined *)(ulonglong)(uVar41 + 0x24574fa);
code_r0x000140c11399:
    uVar40 = 4;
pdb_140f679a0:
                    /* WARNING: Could not emulate address calculation at 0x000140f679a7 */
                    /* WARNING: Treating indirect jump as call */
    pfVar38 = (float *)(**(code **)(*(longlong *)(&UNK_1430689c8 + uVar35) + 0x18))
                                 (*(undefined8 *)pfVar36,puVar34,uVar40,
                                  *(code **)(*(longlong *)(&UNK_1430689c8 + uVar35) + 0x18));
    return pfVar38;
  case 0x16:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x17:
    puVar34 = (undefined *)(ulonglong)(uVar41 + 0x2457468);
    goto code_r0x000140c113e3;
  case 0x18:
    puVar34 = (undefined *)(ulonglong)(uVar41 + 0x24574de);
    goto code_r0x000140c11374;
  case 0x19:
    *(char *)pfVar38 = *(char *)pfVar14;
    *(byte *)pfVar15 = *(char *)pfVar15 + bVar52;
    *(char *)((longlong)pfVar15 + -0x73) = *(char *)((longlong)pfVar15 + -0x73) + bVar25;
    goto code_r0x000140c1135d;
  case 0x1a:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x1b:
    *(char *)((longlong)pfVar15 + -0x77) = *(char *)((longlong)pfVar15 + -0x77) + bVar25;
    puVar1 = (uint *)((longlong)pfVar15 + -0x77);
    *puVar1 = *puVar1 >> 1 | (uint)((*puVar1 & 1) != 0) << 0x1f;
    return pfVar15;
  case 0x1c:
    LOCK();
    cVar10 = *(char *)pfVar15;
    *(byte *)pfVar15 = bVar52;
    pcVar17 = (char *)CONCAT71(uVar23,cVar10);
    UNLOCK();
    *pcVar17 = *pcVar17 + cVar10;
    puVar34 = &UNK_143068882;
code_r0x000140c113e3:
    uVar40 = 5;
    goto pdb_140f679a0;
  case 0x1d:
    *param_7 = (float)((int)*param_7 + uVar41);
    *(byte *)pfVar15 = *(char *)pfVar15 + bVar52;
    puVar34 = &UNK_14306883e;
code_r0x000140c11374:
    uVar40 = 2;
    goto pdb_140f679a0;
  case 0x1e:
    *(char *)((longlong)pfVar15 + -0x77) = *(char *)((longlong)pfVar15 + -0x77) + bVar25;
    puVar1 = (uint *)((longlong)pfVar15 + -0x77);
    *puVar1 = *puVar1 >> 1 | (uint)((*puVar1 & 1) != 0) << 0x1f;
    return pfVar15;
  case 0x1f:
  case 0x20:
    ((char *)((longlong)pfVar14 + 0x49))[(longlong)puVar37] =
         ((char *)((longlong)pfVar14 + 0x49))[(longlong)puVar37] << 1;
    return (float *)0x0;
  case 0x21:
    pfVar15 = (float *)CONCAT62(uVar24,CONCAT11(bVar22 >> (bVar25 & 0x1f),bVar52));
    uVar40 = CONCAT44((float)((ulonglong)_UNK_1430689d0 >> 0x20) + fVar69 * fVar64 + auVar60._4_4_,
                      (float)_UNK_1430689d0 + fVar53 * fVar54 + fVar68);
    pfVar36 = (float *)0x8;
    lVar45 = 4;
    goto code_r0x000140c115d0;
  case 0x22:
    *(byte *)pfVar15 = *(char *)pfVar15 + bVar52;
    if (pfVar15 != (float *)0x0) {
      uVar40 = *(undefined8 *)((longlong)param_7 + (longlong)pfVar36);
      uVar19 = GetProcessHeap(uVar40,(longlong)pfVar15 * 0xc);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pfVar38 = (float *)HeapFree(uVar19,0,uVar40);
      return pfVar38;
    }
    uRam0000000000000000 = uRam0000000000000000;
    return (float *)0x0;
  case 0x23:
    *(byte *)pfVar15 = *(char *)pfVar15 + bVar52 + (0xfffffffebcf9763f < uVar35);
    *(byte *)pfVar15 = *(char *)pfVar15 + bVar52;
    lVar45 = 0xc;
code_r0x000140c115d0:
    *(int *)((longlong)param_7 + lVar45) = (int)uVar40;
    *(int *)((longlong)param_7 + (longlong)pfVar36) = (int)((ulonglong)uVar40 >> 0x20);
    *param_7 = SUB84(pfVar15,0);
    return pfVar15;
  case 0x24:
    out((short)pfVar36,uVar41);
    goto code_r0x000140c12971;
  case 0x25:
    bStack_af = bStack_af >> (bVar25 & 7) | bStack_af << 8 - (bVar25 & 7);
    *pfVar38 = (float)((uint)*pfVar38 >> 1 | (uint)(((uint)*pfVar38 & 1) != 0) << 0x1f);
    LOCK();
    *(char *)((longlong)param_14 + 3) = (char)((ulonglong)pfVar36 >> 8);
    UNLOCK();
    *(byte *)pfVar15 = *(char *)pfVar15 + bVar52;
    pfVar47 = pfVar38 + 0x1014;
    if ((float *)0x200 < param_7) {
      pfVar47 = *(float **)(pfVar38 + 8);
    }
    fVar53 = pfVar14[0xd];
    if (pfVar47[in_R10] == -NAN) {
      pfVar29 = *(float **)(pfVar38 + 0x12);
      *(char **)(pfVar38 + 0x12) = (char *)((longlong)pfVar29 + 1);
      fVar69 = -NAN;
      pfVar47[in_R10] = SUB84(pfVar29,0);
joined_r0x000140c12b9e:
      if (pfVar29 < (float *)0x400) goto code_r0x000140c12ba0;
code_r0x000140c12c06:
      lVar45 = *(longlong *)(pfVar38 + 4);
      if (lVar45 == 0) {
        if (*(ulonglong *)pfVar38 < 0x400) {
          fStack_148 = 2.24208e-44;
          fStack_144 = 0.0;
          pdb_142d7f1b0(pfVar38,0,0x400,4);
          lVar45 = *(longlong *)(pfVar38 + 4);
        }
        else {
          lVar45 = 0;
        }
        pub_142e32760(lVar45 * 0x10 + *(longlong *)(pfVar38 + 2),pfVar38 + 0x14,0x4000);
        lVar45 = *(longlong *)(pfVar38 + 4) + 0x400;
        *(longlong *)(pfVar38 + 4) = lVar45;
        pfVar9 = uStack_140;
        if (lVar45 == *(longlong *)pfVar38) goto code_r0x000140c12c18;
      }
      else if (lVar45 == *(longlong *)pfVar38) {
code_r0x000140c12c18:
        pdb_142d7ef30(pfVar38);
        pfVar9 = uStack_140;
      }
      lVar39 = *(longlong *)(pfVar38 + 2);
      lVar31 = lVar45 * 0x10;
      *(float *)(lVar39 + lVar31) = fVar53;
      *(float *)(lVar39 + 4 + lVar31) = unaff_XMM11_Da;
      *(int *)(lVar39 + 8 + lVar31) = unaff_XMM11_Db;
      *(float *)(lVar39 + 0xc + lVar31) = fVar69;
      *(longlong *)(pfVar38 + 4) = lVar45 + 1;
    }
    else {
      fVar27 = pfVar47[in_R10];
      fVar54 = -NAN;
      do {
        fVar69 = fVar27;
        pfVar48 = (float *)(longlong)(int)fVar69;
        if (pfVar15 <= pfVar48) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(pfVar48,pfVar15,&UNK_143068960);
        }
        lVar45 = (longlong)pfVar48 * 0x10;
        fVar27 = *(float *)(&UNK_1430689c0 + lVar45);
        if (fVar27 != fVar53 && (int)fVar53 <= (int)fVar27) {
          pfVar29 = *(float **)(pfVar38 + 0x12);
          *(char **)(pfVar38 + 0x12) = (char *)((longlong)pfVar29 + 1);
          if (fVar54 != -NAN) {
            pfVar48 = (float *)(longlong)(int)fVar54;
            goto joined_r0x000140c12beb;
          }
          pfVar47[in_R10] = SUB84(pfVar29,0);
          goto joined_r0x000140c12b9e;
        }
        if (fVar27 == fVar53) {
          *(ulonglong *)(&UNK_1430689c4 + lVar45) =
               CONCAT44((int)((ulonglong)*(undefined8 *)(&UNK_1430689c4 + lVar45) >> 0x20) +
                        unaff_XMM11_Db,
                        (int)*(undefined8 *)(&UNK_1430689c4 + lVar45) + (int)unaff_XMM11_Da);
          goto code_r0x000140c12c61;
        }
        fVar27 = *(float *)(&UNK_1430689cc + lVar45);
        fVar54 = fVar69;
      } while (*(float *)(&UNK_1430689cc + lVar45) != -NAN);
      pfVar29 = *(float **)(pfVar38 + 0x12);
      *(char **)(pfVar38 + 0x12) = (char *)((longlong)pfVar29 + 1);
      fVar69 = -NAN;
joined_r0x000140c12beb:
      if (pfVar15 <= pfVar48) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(pfVar48,pfVar15,&UNK_143068978);
      }
      *(int *)(&UNK_1430689cc + (longlong)pfVar48 * 0x10) = (int)pfVar29;
      if ((float *)0x3ff < pfVar29) goto code_r0x000140c12c06;
code_r0x000140c12ba0:
      if (pfVar15 <= pfVar29) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(pfVar29,pfVar15,&UNK_143068990);
      }
      lVar45 = (longlong)pfVar29 * 0x10;
      *(float *)(&UNK_1430689c0 + lVar45) = fVar53;
      *(float *)(&UNK_1430689c4 + lVar45) = unaff_XMM11_Da;
      *(int *)(&UNK_1430689c8 + lVar45) = unaff_XMM11_Db;
      *(float *)(&UNK_1430689cc + lVar45) = fVar69;
    }
code_r0x000140c12c61:
    iVar13 = (int)unaff_XMM10_Da;
    iVar59 = (int)unaff_XMM10_Db;
    fVar27 = (float)(iVar13 >> 8);
    fVar69 = (float)(iVar59 >> 8);
    pfVar14[0x11] = 0.0;
    pfVar14[0x12] = 0.0;
    fVar53 = (float)((int)pfVar14[8] - 1U);
    if ((int)((int)pfVar14[8] - 1U) < (int)fVar27) {
      fVar53 = fVar27;
    }
    pfVar14[0xd] = fVar53;
    pfVar14[0xe] = fVar69;
    bVar50 = ((int)pfVar14[9] <= (int)fVar27 || (int)fVar69 < (int)pfVar14[10]) ||
             (int)pfVar14[0xb] <= (int)fVar69;
    param_7 = (float *)(ulonglong)CONCAT31((int3)(short)((uint)iVar13 >> 0x10),bVar50);
    *(bool *)((longlong)pfVar14 + 0x4d) = bVar50;
    *(ulonglong *)(pfVar14 + 0xf) = CONCAT44(iVar59,iVar13);
    *(char *)(pfVar14 + 0x13) = '\0';
    *(ulonglong *)(pfVar14 + 2) = CONCAT44(iVar59,iVar13);
    *(ulonglong *)(pfVar14 + 4) = CONCAT44(unaff_XMM9_Db,unaff_XMM9_Da);
    param_9 = param_9 + 7;
    if (param_9 == param_14) {
      return (float *)(ulonglong)
                      CONCAT31((int3)(short)((uint)iVar59 >> 0x10),(int)fVar69 < (int)pfVar14[10]);
    }
code_r0x000140c12971:
    uStack_140 = pfVar9;
                    /* WARNING: Could not recover jumptable at 0x000140c1298c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pfVar38 = (float *)(*(code *)((longlong)(int)pfVar49[(uint)*param_9] + (longlong)pfVar49))
                                 (param_7,*(undefined8 *)(param_9 + 3));
    return pfVar38;
  case 0x26:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x27:
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(pfVar14);
  case 0x28:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x29:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x2a:
  case 0x2b:
    if (*(longlong *)(param_7 + 2) == 0) {
      return pfVar15;
    }
    param_14 = (float *)(*(longlong *)param_7 + 0x18);
    param_9 = (float *)&UNK_143068a68;
    goto code_r0x000140c12e65;
  case 0x2c:
    return pfVar15;
  case 0x2d:
    goto code_r0x000140c12e54;
  case 0x2e:
    return pfVar15;
  case 0x2f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x30:
    *(byte *)((longlong)(pfVar38 + 10) + (longlong)param_7) =
         *(byte *)((longlong)(pfVar38 + 10) + (longlong)param_7) | bVar52;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x31:
    fVar27 = pfVar14[6];
    fVar53 = fVar53 * fVar54 + unaff_XMM7_Db * fVar64 + unaff_XMM9_Da;
    fVar69 = in_XMM5_Da * fVar64 + unaff_XMM7_Da * fVar54 + unaff_XMM9_Db;
    param_7[4] = fVar53;
    param_7[5] = fVar69;
    *(char *)(param_7 + 0x13) = '\0';
    auVar55 = ZEXT416((uint)*param_7);
    auVar60 = ZEXT416((uint)param_7[1]);
    in_XMM4_Qa = (ulonglong)(uint)(unaff_XMM9_Db + fVar27 * unaff_XMM7_Da + fVar74 + param_7[1]);
    pfVar36 = (float *)(ulonglong)
                       (uint)(int)((unaff_XMM8_Db + unaff_XMM8_Da + unaff_XMM9_Da + *param_7) *
                                  unaff_XMM6_Da);
    goto code_r0x000140c1312f;
  case 0x32:
code_r0x000140c1312f:
    fStack_148 = (float)(int)((fVar69 + auVar60._0_4_) * unaff_XMM6_Da);
    pfVar38 = (float *)pdb_141c7d0c0(param_7,pfVar36,(int)((float)in_XMM4_Qa * unaff_XMM6_Da),
                                     (int)((auVar55._0_4_ + fVar53) * unaff_XMM6_Da));
code_r0x000140c13160:
    if (param_9 + 7 != param_14) {
                    /* WARNING: Could not recover jumptable at 0x000140c13183. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pfVar38 = (float *)(*(code *)((longlong)(int)pfVar49[(uint)param_9[7]] + (longlong)pfVar49))
                                   (*(undefined8 *)(param_9 + 10),*(undefined8 *)(param_9 + 8));
      return pfVar38;
    }
    return pfVar38;
  case 0x33:
    *(undefined1 (*) [16])(pfVar15 + 8) = auVar55;
    if (fVar64 < fVar68) {
      pfVar15[7] = fVar64;
    }
    if (unaff_XMM8_Da < fVar64) {
      pfVar15[9] = fVar64;
    }
    param_7 = (float *)(*(longlong *)pfVar15 + 2);
    *(float **)pfVar15 = param_7;
    *(undefined8 *)(pfVar15 + 4) = uVar40;
    pfVar15 = param_14 + -6;
    goto code_r0x000140c12e54;
  case 0x34:
    pfVar30 = (float *)((longlong)param_7 + -1);
    if (pfVar30 != (float *)0x0 && bVar50) {
      pfVar30 = (float *)((longlong)param_7 + -2);
      if (pfVar30 != (float *)0x0 && bVar50) {
        in_XMM4_Qa = (ulonglong)(uint)(fVar74 * unaff_XMM13_Da + unaff_XMM9_Da);
        unaff_XMM9_Da = (float)*(undefined8 *)(pfVar14 + 6);
        unaff_XMM9_Db = (float)((ulonglong)*(undefined8 *)(pfVar14 + 6) >> 0x20);
      }
      else {
        unaff_XMM9_Da = pfVar14[6];
        unaff_XMM9_Db = pfVar14[7];
      }
      in_XMM4_Qa = (ulonglong)(uint)((float)in_XMM4_Qa + unaff_XMM9_Da);
      auVar63._0_4_ = fVar68 * unaff_XMM7_Da;
    }
    else {
      auVar63._0_4_ = fVar68 * unaff_XMM7_Da;
      auVar63._4_4_ = auVar60._4_4_ * unaff_XMM7_Db;
      auVar63._8_4_ = auVar60._8_4_ * unaff_XMM7_Dc;
      auVar63._12_4_ = auVar60._12_4_ * unaff_XMM7_Dd;
    }
    auVar60._4_12_ = auVar63._4_12_;
    auVar60._0_4_ = auVar63._0_4_ + unaff_XMM10_Da + unaff_XMM9_Db;
    unaff_XMM10_Da = unaff_XMM9_Db;
    goto code_r0x000140c13267;
  case 0x35:
code_r0x000140c13267:
    fVar69 = fVar53 * unaff_XMM8_Da + unaff_XMM7_Db * unaff_XMM8_Db + unaff_XMM9_Da;
    fVar27 = in_XMM5_Da * unaff_XMM8_Db + unaff_XMM7_Da * unaff_XMM8_Da + unaff_XMM9_Db;
    *(ulonglong *)(pfVar30 + 4) = CONCAT44(fVar27,fVar69);
    *(char *)(pfVar30 + 0x13) = '\0';
    fVar53 = pfVar30[1];
    pfVar36 = (float *)(ulonglong)(uint)(int)(((float)in_XMM4_Qa + *pfVar30) * unaff_XMM6_Da);
    puVar34 = (undefined *)(ulonglong)(uint)(int)((auVar60._0_4_ + fVar53) * unaff_XMM6_Da);
    fStack_148 = (float)(int)((fVar54 * unaff_XMM7_Da + unaff_XMM12_Da + unaff_XMM10_Da + fVar53) *
                             unaff_XMM6_Da);
    uStack_140._0_4_ = (float)(int)((*pfVar30 + fVar69) * unaff_XMM6_Da);
    in_R11D = (float)(int)((fVar27 + fVar53) * unaff_XMM6_Da);
code_r0x000140c132fa:
    fStack_138 = in_R11D;
    pfVar38 = (float *)pdb_141c7d550(pfVar30,pfVar36,puVar34);
    goto code_r0x000140c13160;
  case 0x36:
  case 0x37:
    return pfVar15;
  case 0x38:
    *(byte *)pfVar15 = *(char *)pfVar15 + bVar52;
    *(char *)((longlong)(pfVar38 + 10) + (longlong)param_7) =
         *(char *)((longlong)(pfVar38 + 10) + (longlong)param_7) + bVar52;
    pcVar17 = (char *)(CONCAT71(uVar23,*(char *)pfVar14) & 0xffffffffffffffb0);
    *pcVar17 = *pcVar17 + (char)pcVar17;
    pcVar17[-0x7f] = pcVar17[-0x7f] + bVar25;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x39:
    param_7 = (float *)((longlong)param_7 + -1);
    if (param_7 == (float *)0x0 || !bVar50) {
      LOCK();
      *(float *)(uVar35 + 0x1520689c0) = fVar27;
      UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    lVar45 = 1;
    if (in_XMM5_Da <= fVar75) goto code_r0x000140c133c8;
    goto code_r0x000140c133c0;
  case 0x3a:
    goto code_r0x000140c132fa;
  case 0x3b:
    *(uint *)(&UNK_1430689d8 + uVar35) =
         *(int *)(&UNK_1430689d8 + uVar35) + (int)fVar27 + (uint)(0xfffffffebcf9763f < uVar35);
    if (unaff_XMM7_Da <= fVar68) {
      if (fVar53 <= unaff_XMM6_Da) goto code_r0x000140c13479;
code_r0x000140c13597:
      fVar69 = auVar60._0_4_;
      *(float *)(&UNK_1430689dc + uVar35) = unaff_XMM6_Da;
      fVar53 = unaff_XMM6_Da;
      if (fVar75 < unaff_XMM6_Da) goto code_r0x000140c135a8;
code_r0x000140c13482:
      if (unaff_XMM7_Da <= fVar74) goto code_r0x000140c1348b;
code_r0x000140c135b9:
      fVar27 = auVar70._0_4_;
      *(float *)(&UNK_1430689d8 + uVar35) = fVar74;
    }
    else {
      *(float *)(&UNK_1430689e0 + uVar35) = unaff_XMM7_Da;
      auVar60._4_4_ = unaff_XMM7_Db;
      auVar60._0_4_ = unaff_XMM7_Da;
      auVar60._8_4_ = unaff_XMM7_Dc;
      auVar60._12_4_ = unaff_XMM7_Dd;
      if (unaff_XMM6_Da < fVar53) goto code_r0x000140c13597;
code_r0x000140c13479:
      fVar69 = auVar60._0_4_;
      if (unaff_XMM6_Da <= fVar75) goto code_r0x000140c13482;
code_r0x000140c135a8:
      *(float *)(&UNK_1430689e4 + uVar35) = unaff_XMM6_Da;
      auVar70._4_4_ = unaff_XMM6_Db;
      auVar70._0_4_ = unaff_XMM6_Da;
      auVar70._8_4_ = unaff_XMM6_Dc;
      auVar70._12_4_ = unaff_XMM6_Dd;
      if (fVar74 < unaff_XMM7_Da) goto code_r0x000140c135b9;
code_r0x000140c1348b:
      fVar27 = auVar70._0_4_;
    }
    if (fVar69 < fVar74) {
      *(float *)(&UNK_1430689e0 + uVar35) = fVar74;
    }
    if (fVar76 < fVar53) {
      *(float *)(&UNK_1430689dc + uVar35) = fVar76;
    }
    lVar45 = 3;
    in_XMM5_Da = fVar76;
    if (fVar76 <= fVar27) goto code_r0x000140c133c8;
code_r0x000140c133c0:
    *(float *)(&UNK_1430689e4 + uVar35) = in_XMM5_Da;
code_r0x000140c133c8:
    *(char **)pfVar36 = &UNK_1430689c0 + lVar45;
    *(ulonglong *)(&UNK_1430689d0 + uVar35) = in_XMM4_Qa;
    if (param_7 + 7 != pfVar15) {
                    /* WARNING: Could not recover jumptable at 0x000140c133fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pfVar38 = (float *)(*(code *)((longlong)(int)pfVar29[(uint)param_7[7]] + (longlong)pfVar29))()
      ;
      return pfVar38;
    }
    return pfVar15;
  case 0x3c:
    pfVar49 = (float *)&UNK_143068ab0;
    goto code_r0x000140c1379d;
  case 0x3d:
    goto code_r0x000140c1379d;
  case 0x3e:
    fVar53 = fVar53 * fVar54 + unaff_XMM7_Db + unaff_XMM9_Da;
    fVar69 = in_XMM5_Da * fVar64 + unaff_XMM7_Da + unaff_XMM9_Db;
    *(ulonglong *)(param_7 + 4) = CONCAT44(fVar69,fVar53);
    *(char *)(param_7 + 0x13) = '\0';
    fStack_148 = (float)(int)((fVar69 + param_7[1]) * unaff_XMM6_Da);
    pfVar15 = (float *)pdb_141c7ceb0(param_7,(int)((fVar75 + *param_7) * unaff_XMM6_Da),
                                     (int)((fVar74 + param_7[1]) * unaff_XMM6_Da),
                                     (int)((*param_7 + fVar53) * unaff_XMM6_Da));
    pfVar9 = uStack_140;
    goto code_r0x000140c13790;
  case 0x3f:
    if (param_7 == (float *)0x1 || !bVar50) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x40:
    auVar70._8_8_ = uVar40;
    unaff_XMM12_Da = fVar75 * in_XMM5_Da;
    unaff_XMM8_Da = (float)*(undefined8 *)(param_9 + 5);
    unaff_XMM8_Db = (float)((ulonglong)*(undefined8 *)(param_9 + 5) >> 0x20);
    unaff_XMM7_Da = (float)*(undefined8 *)(pfVar14 + 3);
    unaff_XMM7_Db = (float)((ulonglong)*(undefined8 *)(pfVar14 + 3) >> 0x20);
    unaff_XMM13_Da = unaff_XMM7_Db;
    goto code_r0x000140c13865;
  case 0x41:
    out((short)pfVar36,uVar41);
code_r0x000140c13865:
    fVar75 = (float)*(undefined8 *)(pfVar14 + 6);
    fVar76 = (float)((ulonglong)*(undefined8 *)(pfVar14 + 6) >> 0x20);
    fVar27 = fVar53 * unaff_XMM8_Da + unaff_XMM7_Db * unaff_XMM8_Db + fVar75;
    fVar64 = in_XMM5_Da * unaff_XMM8_Db + unaff_XMM7_Da * unaff_XMM8_Da + fVar76;
    *(ulonglong *)(param_7 + 4) = CONCAT44(fVar64,fVar27);
    *(char *)(param_7 + 0x13) = '\0';
    fVar53 = *param_7;
    fVar69 = param_7[1];
    fStack_148 = (float)(int)((fVar54 * unaff_XMM7_Da + unaff_XMM12_Da + fVar76 + fVar69) *
                             unaff_XMM6_Da);
    uStack_140._0_4_ = (float)(int)((fVar53 + fVar27) * unaff_XMM6_Da);
    fStack_138 = (float)(int)((fVar64 + fVar69) * unaff_XMM6_Da);
    pfVar15 = (float *)pdb_141c7d2d0(param_7,(int)((fVar74 * unaff_XMM13_Da + unaff_XMM9_Da + fVar75
                                                   + fVar53) * unaff_XMM6_Da),
                                     (int)((fVar68 * unaff_XMM7_Da + unaff_XMM10_Da + fVar76 +
                                           fVar69) * unaff_XMM6_Da),
                                     (int)((auVar70._0_4_ * unaff_XMM13_Da + unaff_XMM11_Da + fVar75
                                           + fVar53) * unaff_XMM6_Da));
    pfVar9 = (float *)CONCAT44(uStack_140._4_4_,(float)uStack_140);
code_r0x000140c13790:
    param_9 = param_9 + 7;
    if (param_9 == param_14) {
code_r0x000140c13996:
      return pfVar15;
    }
code_r0x000140c1379d:
    uStack_140 = pfVar9;
                    /* WARNING: Could not recover jumptable at 0x000140c137b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pfVar38 = (float *)(*(code *)((longlong)(int)pfVar49[(uint)*param_9] + (longlong)pfVar49))
                                 (*(undefined8 *)(param_9 + 3),*(undefined8 *)(param_9 + 1));
    return pfVar38;
  case 0x42:
    goto code_r0x000140c13996;
  case 0x43:
    param_7 = param_7 + 0x12080911;
    *(byte *)param_7 = *(byte *)param_7 >> 1 | *(char *)param_7 << 7;
    UNRECOVERED_JUMPTABLE = (code *)swi(1);
    pfVar38 = (float *)(*UNRECOVERED_JUMPTABLE)();
    return pfVar38;
  case 0x44:
    if (*(char *)(pfVar14 + 0x13) == '\0') {
      pfVar15 = (float *)pdb_141c7b410(pfVar14,pfVar14[2],pfVar14[3]);
    }
    uVar40 = *(undefined8 *)pfVar14;
    if (*(char *)((longlong)pfVar14 + 0x4d) == '\0') {
      fVar53 = (float)*(undefined8 *)(pfVar14 + 0x11);
      fVar69 = (float)((ulonglong)*(undefined8 *)(pfVar14 + 0x11) >> 0x20);
      auVar58._0_4_ = -(uint)(fVar53 == unaff_XMM7_Da);
      auVar58._4_4_ = -(uint)(fVar53 == unaff_XMM7_Db);
      auVar58._8_4_ = -(uint)(fVar69 == unaff_XMM7_Dc);
      auVar58._12_4_ = -(uint)(fVar69 == unaff_XMM7_Dd);
      iVar13 = movmskpd((int)pfVar15,auVar58);
      if (iVar13 != 3) {
        plVar3 = *(longlong **)(pfVar14 + 6);
        uVar35 = (ulonglong)((int)pfVar14[0xe] - *(int *)((longlong)plVar3 + 0x34));
        if ((ulonglong)plVar3[5] <= uVar35) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar35,plVar3[5],&UNK_143068900);
        }
        fVar27 = pfVar14[0xd];
        uVar4 = plVar3[2];
        iVar13 = *(int *)(plVar3[4] + uVar35 * 4);
        if (iVar13 == -1) {
          iVar59 = -1;
code_r0x000140c13c51:
          *(int *)(plVar3[4] + uVar35 * 4) = (int)uVar4;
          lVar45 = plVar3[2];
          if (lVar45 == *plVar3) goto code_r0x000140c13c5e;
        }
        else {
          iVar44 = -1;
          do {
            iVar59 = iVar13;
            uVar18 = (ulonglong)iVar59;
            if (uVar4 <= uVar18) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar18,uVar4,&UNK_143068918);
            }
            lVar39 = plVar3[1];
            lVar45 = lVar39 + uVar18 * 0x10;
            fVar54 = *(float *)(lVar39 + uVar18 * 0x10);
            if (fVar54 != fVar27 && (int)fVar27 <= (int)fVar54) {
              if (iVar44 == -1) goto code_r0x000140c13c51;
              uVar18 = (ulonglong)iVar44;
              goto joined_r0x000140c13ca1;
            }
            if (fVar54 == fVar27) {
              *(ulonglong *)(lVar45 + 4) =
                   CONCAT44((int)((ulonglong)*(undefined8 *)(lVar45 + 4) >> 0x20) + (int)fVar69,
                            (int)*(undefined8 *)(lVar45 + 4) + (int)fVar53);
              goto code_r0x000140c13ccc;
            }
            iVar13 = *(int *)(lVar45 + 0xc);
            iVar44 = iVar59;
          } while (*(int *)(lVar45 + 0xc) != -1);
          iVar59 = -1;
joined_r0x000140c13ca1:
          if (uVar4 <= uVar18) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar18,uVar4,&UNK_143068930);
          }
          *(int *)(lVar39 + 0xc + uVar18 * 0x10) = (int)uVar4;
          lVar45 = plVar3[2];
          if (lVar45 == *plVar3) {
code_r0x000140c13c5e:
            pdb_142d7ef30(plVar3);
          }
        }
        lVar39 = plVar3[1];
        lVar31 = lVar45 * 0x10;
        *(float *)(lVar39 + lVar31) = fVar27;
        *(float *)(lVar39 + 4 + lVar31) = fVar53;
        *(float *)(lVar39 + 8 + lVar31) = fVar69;
        *(int *)(lVar39 + 0xc + lVar31) = iVar59;
        plVar3[2] = lVar45 + 1;
      }
    }
code_r0x000140c13ccc:
    iVar13 = (int)(((float)uVar40 + unaff_XMM9_Da) * unaff_XMM6_Da);
    iVar59 = (int)(((float)((ulonglong)uVar40 >> 0x20) + unaff_XMM9_Db) * unaff_XMM6_Db);
    uVar40 = CONCAT44(iVar59,iVar13);
    fVar27 = (float)(iVar13 >> 8);
    fVar69 = (float)(iVar59 >> 8);
    pfVar14[0x11] = 0.0;
    pfVar14[0x12] = 0.0;
    fVar53 = (float)((int)pfVar14[8] - 1U);
    if ((int)((int)pfVar14[8] - 1U) < (int)fVar27) {
      fVar53 = fVar27;
    }
    pfVar14[0xd] = fVar53;
    pfVar14[0xe] = fVar69;
    pfVar38 = (float *)(ulonglong)
                       CONCAT31((int3)(short)((uint)iVar59 >> 0x10),(int)fVar69 < (int)pfVar14[10]);
    *(bool *)((longlong)pfVar14 + 0x4d) =
         ((int)pfVar14[9] <= (int)fVar27 || (int)fVar69 < (int)pfVar14[10]) ||
         (int)pfVar14[0xb] <= (int)fVar69;
    *(undefined8 *)(pfVar14 + 0xf) = uVar40;
    *(char *)(pfVar14 + 0x13) = '\0';
    *(undefined8 *)(pfVar14 + 2) = uVar40;
    *(ulonglong *)(pfVar14 + 4) = CONCAT44(unaff_XMM9_Db,unaff_XMM9_Da);
code_r0x000140c13a74:
    if (param_9 + 7 != param_14) {
                    /* WARNING: Could not recover jumptable at 0x000140c13a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pfVar38 = (float *)(*(code *)((longlong)(int)pfVar49[(uint)param_9[7]] + (longlong)pfVar49))()
      ;
      return pfVar38;
    }
    return pfVar38;
  case 0x45:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x46:
    *(byte *)((longlong)param_7 + -0x77) = *(byte *)((longlong)param_7 + -0x77) | bVar25;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x47:
    pfVar38 = (float *)pdb_141c7d2d0();
    goto code_r0x000140c13a74;
  case 0x48:
    goto LAB_140c142b9;
  case 0x49:
code_r0x000140c144df:
    pfVar38[0x8c] = 0.0;
    *(char *)((longlong)pfVar38 + 0x237) = '\x01';
    *(undefined2 *)pfVar14 = 0x102;
    return pfVar14;
  case 0x4a:
    *(char *)((longlong)pfVar38 + 0x237) = '\0';
    *(char *)pfVar14 = '\0';
    *(char *)((longlong)pfVar14 + 1) = -0x40;
    *(undefined8 *)(pfVar14 + 1) = uVar40;
    *(longlong *)(pfVar14 + 3) = auVar60._0_8_;
    break;
  case 0x4b:
    if ((float)((uint)(fVar54 - fVar69) & _DAT_142e377e0) < fVar75) goto code_r0x000140c144df;
    *(char *)((longlong)pfVar38 + 0x235) = '\x01';
    goto LAB_140c14484;
  case 0x4c:
    pfVar38[0x86] = fVar53;
    pfVar38[0x87] = fVar69;
    *(char *)((longlong)pfVar38 + 0x237) = '\0';
LAB_140c14484:
    *(char *)pfVar14 = '\0';
    *(byte *)((longlong)pfVar14 + 1) = bVar52;
    pfVar14[1] = fVar68;
    pfVar14[2] = fVar54;
    pfVar14[3] = fVar53;
    pfVar14[4] = fVar69;
    break;
  case 0x4d:
    param_7 = (float *)CONCAT62((int6)((ulonglong)param_7 >> 0x10),
                                CONCAT11((char)((ulonglong)param_7 >> 8) - bVar52,bVar25));
  case 0x53:
    pfVar38[0x84] = fVar53;
    pfVar38[0x85] = fVar69;
    pfVar38[0x86] = fVar53;
    pfVar38[0x87] = fVar69;
    pfVar38[0x8c] = 0.0;
    pfVar29 = param_7 + 7;
    if (pfVar29 != pfVar36) {
LAB_140c142b9:
                    /* WARNING: Could not recover jumptable at 0x000140c142d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pfVar38 = (float *)(*(code *)(&UNK_1430689c0 +
                                   *(int *)(&UNK_1430689c0 + (ulonglong)(uint)*pfVar29 * 4)))
                                   (pfVar29,pfVar36,*(undefined8 *)(pfVar29 + 1),
                                    &UNK_1430689c0 +
                                    *(int *)(&UNK_1430689c0 + (ulonglong)(uint)*pfVar29 * 4));
      return pfVar38;
    }
    *(float **)(pfVar38 + 0x80) = param_7 + 7;
LAB_140c143d2:
    *(char *)pfVar14 = '\x03';
    break;
  case 0x4e:
    *(byte *)pfVar38 = *(char *)pfVar38 + bVar25;
    *(byte *)pfVar15 = *(char *)pfVar15 + bVar52;
code_r0x000140c1415f:
    *(float **)(pfVar38 + 0x80) = pfVar15 + 7;
    uStack_140 = pfVar9;
                    /* WARNING: Could not recover jumptable at 0x000140c1418a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pfVar38 = (float *)(*(code *)((longlong)(int)param_9[(uint)*pfVar15] + (longlong)param_9))
                                 ((code *)((longlong)(int)param_9[(uint)*pfVar15] +
                                          (longlong)param_9));
    return pfVar38;
  case 0x4f:
    *(byte *)pfVar15 = *(char *)pfVar15 + bVar52;
    *(char *)((longlong)pfVar15 + 0x237bf) = *(char *)((longlong)pfVar15 + 0x237bf) + bVar52;
    *(byte *)pfVar15 = *(char *)pfVar15 + bVar52;
    if (*(char *)pfVar15 == '\0') {
      *(char *)((longlong)pfVar38 + 0x237) = '\x01';
      *(undefined2 *)pfVar14 = 2;
      return pfVar14;
    }
    goto LAB_140c140d0;
  case 0x50:
    *(byte *)pfVar15 = *(char *)pfVar15 + bVar52;
    break;
  case 0x51:
    break;
  case 0x52:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x54:
    puVar37 = (ulonglong *)0x0;
    param_9 = (float *)&UNK_143068b10;
    goto LAB_140c140d0;
  case 0x55:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x56:
    uStack_140._0_4_ = fVar74 * unaff_XMM9_Da + fVar54;
    uStack_140._4_4_ = fVar76 * unaff_XMM9_Db + fVar64;
    uStack_130 = CONCAT44(unaff_XMM10_Db,unaff_XMM10_Da);
    fStack_148 = fVar54;
    fStack_144 = fVar64;
    fStack_138 = fVar68;
    fStack_134 = fVar53;
    pdb_140c115f0(pfVar14,pfVar38,&UNK_1430689c0,param_14);
    pfVar9 = (float *)CONCAT44(uStack_140._4_4_,(float)uStack_140);
    if (*(char *)pfVar14 != '\x03') {
      pfVar38[0x8c] = (float)((int)pfVar38[0x8c] + 1);
      *(ulonglong *)(pfVar38 + 0x86) = CONCAT44(unaff_XMM10_Db,unaff_XMM10_Da);
      *(char *)((longlong)pfVar38 + 0x237) = '\0';
      return pfVar14;
    }
LAB_140c140d0:
    do {
      uVar35 = *(ulonglong *)(pfVar38 + 0x8a);
      if (*(ulonglong *)(pfVar38 + 0x88) <= uVar35) {
        cVar10 = *(char *)(pfVar38 + 0x8d) + '\x01';
        if (*(char *)(pfVar38 + 0x8d) == -2) {
          cVar10 = (char)puVar37;
        }
        *(char *)(pfVar38 + 0x8d) = cVar10;
        pfVar15 = *(float **)(pfVar38 + 0x80);
        if (pfVar15 != *(float **)(pfVar38 + 0x82)) goto code_r0x000140c1415f;
        goto LAB_140c143d2;
      }
      if (0xf < uVar35) {
        uStack_140 = pfVar9;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar35,0x10,&UNK_1430689a8);
      }
      uVar40 = *(undefined8 *)(pfVar38 + uVar35 * 8);
      uVar19 = *(undefined8 *)(pfVar38 + uVar35 * 8 + 2);
      uVar8 = *(undefined8 *)(pfVar38 + uVar35 * 8 + 4);
      uStack_130 = *(undefined8 *)(pfVar38 + uVar35 * 8 + 4 + 2);
      fStack_138 = (float)uVar8;
      fStack_134 = (float)((ulonglong)uVar8 >> 0x20);
      fStack_148 = (float)uVar40;
      fStack_144 = (float)((ulonglong)uVar40 >> 0x20);
      uStack_140._0_4_ = (float)uVar19;
      uStack_140._4_4_ = (float)((ulonglong)uVar19 >> 0x20);
      *(ulonglong *)(pfVar38 + 0x8a) = uVar35 + 1;
      pdb_141c70590(pfVar14,param_14,*(char *)(pfVar38 + 0x8d));
      pfVar9 = (float *)CONCAT44(uStack_140._4_4_,(float)uStack_140);
    } while (*(char *)pfVar14 == '\x03');
    pfVar38[0x8c] = (float)((int)pfVar38[0x8c] + 1);
    *(char *)((longlong)pfVar38 + 0x237) = '\0';
    *(undefined8 *)(pfVar38 + 0x86) = uStack_130;
    break;
  case 0x57:
    cVar10 = '\x18';
    puVar7 = puVar37;
    do {
      puVar7 = puVar7 + -1;
      puVar6 = puVar6 + -1;
      *puVar6 = *puVar7;
      cVar10 = cVar10 + -1;
    } while ('\0' < cVar10);
    apfStack_168[0] = (float *)puVar37;
    if ((_DAT_142e36f34 < fVar68) && (fVar68 < unaff_XMM7_Da)) {
      fVar54 = fVar54 * _DAT_142e4fba0;
      if ((_DAT_142e36f34 < fVar54) && (fVar54 < unaff_XMM7_Da)) {
        fVar53 = (float)((int)fVar74 & 0xffU |
                        ((int)in_XMM5_Da & 0xffU) << 8 |
                        ((int)fVar68 & 0xffU) << 0x10 | (int)fVar54 << 0x18);
        *param_7 = fVar53;
        return (float *)(ulonglong)(uint)fVar53;
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143068808);
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_1430687f0);
  case 0x58:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x59:
    _DAT_142e37848 = (float)CONCAT31(_UNK_142e37849,DAT_142e37848 + (bVar22 ^ 2));
    goto LAB_140c142b9;
  case 0x5a:
    UNRECOVERED_JUMPTABLE = (code *)swi(1);
    pfVar38 = (float *)(*UNRECOVERED_JUMPTABLE)();
    return pfVar38;
  case 0x5b:
    *(byte *)pfVar15 = *(char *)pfVar15 + bVar52;
    *(char *)((longlong)param_7 + 0xf) = *(char *)((longlong)param_7 + 0xf) + bVar52;
    if ((unaff_XMM6_Da <= (float)((uint)(fVar68 - fVar54) & _DAT_142e377e0)) ||
       (unaff_XMM6_Da <= (float)((uint)(unaff_XMM10_Db - fVar64) & _DAT_142e377e0))) {
      *(char *)((longlong)pfVar38 + 0x23d) = '\x01';
      *(char *)pfVar14 = '\0';
      *(char *)((longlong)pfVar14 + 1) = (char)puVar37;
      pfVar14[1] = unaff_XMM10_Da;
      pfVar14[2] = unaff_XMM10_Db;
      pfVar14[3] = fVar54;
      pfVar14[4] = fVar64;
      return pfVar14;
    }
    pfVar38[0x8e] = 0.0;
code_r0x000140c1466a:
    *(char *)((longlong)pfVar38 + 0x23f) = '\x01';
code_r0x000140c14671:
    *(undefined2 *)pfVar14 = 0x102;
    return pfVar14;
  case 0x5c:
    goto LAB_140c14a91;
  case 0x5d:
    *(char *)((longlong)pfVar15 + -0x7f) = *(char *)((longlong)pfVar15 + -0x7f) + bVar25;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x5e:
    pbVar2 = (byte *)((longlong)param_7 + 99);
    *pbVar2 = *pbVar2 >> 4 | *pbVar2 << 4;
    goto code_r0x000140c14974;
  case 0x5f:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x60:
    return apfStack_168[0];
  case 0x61:
    goto code_r0x000140c14aa4;
  case 0x62:
    *(byte *)param_7 = *(char *)param_7 + bVar52 + *(char *)pfVar15;
    *(undefined2 *)pfVar14 = 2;
    return pfVar14;
  case 99:
    *(byte *)pfVar15 = *(char *)pfVar15 + bVar52;
code_r0x000140c14974:
    uStack_140 = pfVar9;
                    /* WARNING: Could not recover jumptable at 0x000140c1498e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pfVar38 = (float *)(*(code *)((longlong)(int)pfVar47[(ulonglong)pfVar15 & 0xffffffff] +
                                 (longlong)pfVar47))();
    return pfVar38;
  case 100:
    if (!SCARRY8(uVar35,0x1430689c0)) {
      fStack_100 = auVar55._8_4_;
      uStack_fc = auVar55._12_4_;
      uStack_118 = (undefined4 *)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da);
      uStack_110 = (undefined8 *)CONCAT44(unaff_XMM7_Dd,unaff_XMM7_Dc);
      uStack_128 = CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
      uStack_120 = CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
      pfVar14 = param_7;
      pfVar38 = pfVar36;
      if ((&UNK_143068bfd)[uVar35] != '\0') {
        (&UNK_143068bfd)[uVar35] = 0;
        goto code_r0x000140c1466a;
      }
      fStack_108 = fVar54;
      fStack_104 = fVar64;
      if ((&UNK_143068bfe)[uVar35] != '\x01') {
        bVar52 = (&UNK_143068bfc)[uVar35];
        pfVar49 = (float *)(ulonglong)bVar52;
        cVar10 = bVar52 + 1;
        if (bVar52 == 0xfe) {
          cVar10 = '\0';
        }
        (&UNK_143068bfc)[uVar35] = cVar10;
        pfVar48 = *(float **)(&UNK_143068be8 + uVar35);
        pfVar29 = *(float **)(&UNK_143068be0 + uVar35);
        if (pfVar29 == pfVar48) goto LAB_140c14a46;
        unaff_XMM7_Da = (float)*(undefined8 *)(&UNK_143068bc8 + uVar35);
        unaff_XMM6_Da = *(float *)(&UNK_143068bcc + uVar35);
        param_14 = *(float **)(&UNK_143068bf0 + uVar35);
        if (((&UNK_143068bff)[uVar35] & 1) != 0) {
          pfVar47 = (float *)&UNK_143068b3c;
          *(float **)(&UNK_143068be0 + uVar35) = pfVar29 + 7;
          if (*pfVar29 != 7.00649e-45) {
            pdb_140c114c0(&fStack_148,pfVar29,param_14);
            pfVar15 = (float *)(ulonglong)(uint)fStack_148;
            pfVar9 = uStack_140;
            if (fStack_148 != 7.00649e-45) goto code_r0x000140c14974;
          }
          goto LAB_140c14a46;
        }
        goto LAB_140c149cb;
      }
    }
    do {
      uVar35 = *(ulonglong *)(pfVar38 + 0x86);
      uStack_140 = pfVar9;
      if (*(ulonglong *)(pfVar38 + 0x84) <= uVar35) {
        cVar10 = *(char *)(pfVar38 + 0x8f) + '\x01';
        if (*(char *)(pfVar38 + 0x8f) == -2) {
          cVar10 = '\0';
        }
        *(char *)(pfVar38 + 0x8f) = cVar10;
        piVar5 = *(int **)(pfVar38 + 0x88);
        param_7 = pfVar14;
        if ((piVar5 != *(int **)(pfVar38 + 0x8a)) &&
           (*(int **)(pfVar38 + 0x88) = piVar5 + 7, *piVar5 != 5)) {
          pdb_140c114c0(&fStack_148,piVar5,*(undefined8 *)(pfVar38 + 0x8c));
          if (fStack_148 != 7.00649e-45) {
                    /* WARNING: Could not recover jumptable at 0x000140c147d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            pfVar38 = (float *)(*(code *)(&UNK_143068b50 +
                                         *(int *)(&UNK_143068b50 + (ulonglong)(uint)fStack_148 * 4))
                               )();
            return pfVar38;
          }
        }
        goto LAB_140c14a46;
      }
      if (0xf < uVar35) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar35,0x10,&UNK_1430689a8);
      }
      uVar40 = *(undefined8 *)(pfVar38 + uVar35 * 8);
      uVar19 = *(undefined8 *)(pfVar38 + uVar35 * 8 + 2);
      uVar8 = *(undefined8 *)(pfVar38 + uVar35 * 8 + 4);
      uStack_130 = *(undefined8 *)(pfVar38 + uVar35 * 8 + 4 + 2);
      fStack_138 = (float)uVar8;
      fStack_134 = (float)((ulonglong)uVar8 >> 0x20);
      fStack_148 = (float)uVar40;
      fStack_144 = (float)((ulonglong)uVar40 >> 0x20);
      uStack_140._0_4_ = (float)uVar19;
      uStack_140._4_4_ = (float)((ulonglong)uVar19 >> 0x20);
      *(ulonglong *)(pfVar38 + 0x86) = uVar35 + 1;
      pdb_141c70590(pfVar14,&fStack_148,*(char *)(pfVar38 + 0x8f));
      pfVar9 = (float *)CONCAT44(uStack_140._4_4_,(float)uStack_140);
    } while (*(char *)pfVar14 == '\x03');
    goto LAB_140c14a91;
  case 0x65:
    UNRECOVERED_JUMPTABLE = (code *)swi(1);
    pfVar38 = (float *)(*UNRECOVERED_JUMPTABLE)();
    return pfVar38;
  case 0x66:
    fVar27 = param_7[4];
    *(float **)(pfVar38 + 0x80) = param_7 + 7;
    pfVar38[0x8c] = (float)((int)pfVar38[0x8c] + 1);
    pfVar38[0x86] = unaff_XMM6_Da;
    pfVar38[0x87] = fVar27;
    *(char *)((longlong)pfVar38 + 0x237) = '\0';
    *(char *)pfVar14 = '\x01';
    *(byte *)((longlong)pfVar14 + 1) = bVar52;
    pfVar14[1] = fVar68;
    fVar64 = (fVar53 - auVar70._8_4_) * _UNK_143068390;
    fVar68 = (fVar69 - fVar75) * _UNK_143068394;
    fVar53 = (fVar53 - unaff_XMM6_Da) * _UNK_143068398;
    fVar69 = (fVar69 - fVar27) * _UNK_14306839c;
    pfVar14[2] = fVar54;
    pfVar14[3] = fVar64 + auVar70._8_4_;
    pfVar14[4] = fVar68 + fVar75;
    pfVar14[5] = fVar53 + unaff_XMM6_Da;
    pfVar14[6] = fVar69 + fVar27;
    pfVar14[7] = unaff_XMM6_Da;
    pfVar14[8] = fVar27;
    break;
  case 0x67:
    LOCK();
    *pfVar38 = fVar27;
    UNLOCK();
    *(byte *)param_7 = *(char *)param_7 + bVar52 + *(char *)pfVar15;
    goto code_r0x000140c14671;
  case 0x68:
    *(byte *)pfVar15 = *(char *)pfVar15 + bVar52;
    pfVar29 = pfVar36;
    param_7 = pfVar14;
    pfVar36 = pfVar38;
LAB_140c149cb:
    fVar53 = _DAT_142e37848;
    uVar41 = _DAT_142e377e0;
    do {
      pfVar38 = pfVar29 + 7;
      *(float **)(pfVar36 + 0x88) = pfVar38;
      if (*pfVar29 == 7.00649e-45) break;
      pdb_140c114c0(&fStack_148,pfVar29,param_14);
      if (fStack_148 == 7.00649e-45) break;
      if (fStack_148 != 1.4013e-45) {
                    /* WARNING: Could not recover jumptable at 0x000140c14ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pfVar38 = (float *)(*(code *)(&UNK_143068b28 +
                                     *(int *)(&UNK_143068b28 + (ulonglong)(uint)fStack_148 * 4)))();
        return pfVar38;
      }
      if ((fVar53 <= (float)((uint)(unaff_XMM7_Da - fStack_144) & uVar41)) ||
         (fVar53 <= (float)((uint)(unaff_XMM6_Da - (float)uStack_140) & uVar41))) {
        pfVar36[0x8e] = (float)((int)pfVar36[0x8e] + 1);
        *(ulonglong *)(pfVar36 + 0x82) = CONCAT44((float)uStack_140,fStack_144);
        *(char *)((longlong)pfVar36 + 0x23f) = '\0';
        *(char *)param_7 = '\0';
        *(char *)((longlong)param_7 + 1) = (char)pfVar49;
        param_7[1] = unaff_XMM7_Da;
        param_7[2] = unaff_XMM6_Da;
        *(ulonglong *)(param_7 + 3) = CONCAT44((float)uStack_140,fStack_144);
        return param_7;
      }
      pfVar29 = pfVar38;
    } while (pfVar38 != pfVar48);
LAB_140c14a46:
    *(char *)param_7 = '\x03';
    return param_7;
  default:
    pfVar38 = (float *)((ulonglong)pfVar14 & 0xffffffff);
    pcVar17 = (char *)((ulonglong)pfVar15 & 0xffffffff);
    if (bVar50 || (longlong)uVar35 < -0x1430689c0) {
      cVar12 = (char)pfVar14;
      *(char *)pfVar38 = *(char *)pfVar38 + cVar12;
      *(byte *)param_7 = *(char *)param_7 + bVar25;
      *(char *)pfVar38 = *(char *)pfVar38 + cVar12;
      *(char *)pfVar38 = *(char *)pfVar38 + cVar12;
      *(char *)pfVar38 = *(char *)pfVar38 + cVar12;
      *pfVar36 = (float)((int)*pfVar36 << (bVar25 & 0x1f) | (uint)*pfVar36 >> 0x20 - (bVar25 & 0x1f)
                        );
      *(char *)pfVar38 = *(char *)pfVar38 + cVar12;
      pcVar20 = (char *)(ulonglong)((uint)pfVar14 | 0xaf000000);
      while( true ) {
        cVar11 = (char)pcVar20;
        *pcVar17 = cVar11;
        _UNK_1430689c0 = _UNK_1430689c0 + (int)pcVar20;
        *pcVar20 = *pcVar20 + cVar11;
        _UNK_1430689c0 = CONCAT31(_UNK_1430689c1,UNK_1430689c0 + cVar11);
        *pcVar20 = *pcVar20 + cVar11;
        *pcVar20 = *pcVar20 + cVar11;
        uVar23 = (undefined7)((ulonglong)pcVar20 >> 8);
        cVar11 = cVar11 + (char)param_14;
        cRam000000019b0689a9 = cRam000000019b0689a9 + bVar25;
        LOCK();
        cVar12 = *pcVar17;
        *pcVar17 = cVar11 + *(char *)CONCAT71(uVar23,cVar11);
        pcVar21 = (char *)CONCAT71(uVar23,cVar12);
        UNLOCK();
        _UNK_1430689c0 = _UNK_1430689c0 + (int)pcVar21;
        *pcVar21 = *pcVar21 + cVar12;
        *pcVar21 = *pcVar21 + cVar12;
        *pcVar21 = *pcVar21 + cVar12;
        *pcVar21 = *pcVar21 + cVar12;
        *pcVar21 = *pcVar21 + bVar25;
        cVar12 = cVar12 + *pcVar21;
        pfVar38 = (float *)CONCAT71(uVar23,cVar12);
        *(char *)param_7 = *(char *)param_7 + (char)((ulonglong)pcVar20 >> 8);
        *(char *)pfVar38 = *(char *)pfVar38 + cVar12;
        pcVar20 = pcVar17 + 0x1bfdba7e;
        cVar11 = *pcVar20;
        *pcVar20 = *pcVar20 + cVar10;
        if (*pcVar20 == '\0' || SCARRY1(cVar11,cVar10) != *pcVar20 < '\0') break;
        *(char *)pfVar38 = *(char *)pfVar38 + cVar12;
        *(char *)pfVar38 = *(char *)pfVar38 + cVar12;
        *(char *)pfVar38 = *(char *)pfVar38 + cVar12;
        param_14 = (float *)(ulonglong)(byte)((char)param_14 + cVar10);
        pcVar20 = (char *)CONCAT71(uVar23,cVar12 + *(char *)pfVar38);
        cRam00000000f2068991 = cRam00000000f2068991 + bVar25;
      }
    }
    out(0x7f,(int)pfVar38);
    return pfVar38;
  }
  return pfVar14;
code_r0x000140c1135d:
  puVar34 = (undefined *)(ulonglong)(uVar41 + 0x24574ce);
  goto code_r0x000140c11374;
LAB_140c14a91:
  pfVar38[0x8e] = (float)((int)pfVar38[0x8e] + 1);
  *(char *)((longlong)pfVar38 + 0x23f) = '\0';
  uVar40 = uStack_130;
code_r0x000140c14aa4:
  *(undefined8 *)(pfVar38 + 0x82) = uVar40;
  return pfVar14;
code_r0x000140c12e54:
  param_14 = param_14 + 7;
  if (pfVar15 + 7 == pfVar38) {
    return pfVar15 + 7;
  }
code_r0x000140c12e65:
                    /* WARNING: Could not recover jumptable at 0x000140c12e79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pfVar38 = (float *)(*(code *)((longlong)(int)param_9[(uint)param_14[-6]] + (longlong)param_9))
                               (param_7,*(undefined8 *)(param_14 + -5),&UNK_1430689c0,
                                *(undefined8 *)(param_14 + -3));
  return pfVar38;
}

