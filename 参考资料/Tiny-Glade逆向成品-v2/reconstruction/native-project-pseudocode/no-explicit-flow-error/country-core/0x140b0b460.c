// VA 0x140b0b460, PDB extent 8925 bytes
// country_core::startup::background_terrain_maps::generate_background_terrain_maps
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/background_terrain_maps.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::startup::background_terrain_maps::generate_background_terrain_maps
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/background_terrain_maps.rs
   Extent: 8925 */

ulonglong *
pdb_140b0b460(ulonglong *param_1,byte *param_2,byte *param_3,code *param_4,ulonglong *param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  code *pcVar14;
  float **ppfVar15;
  float *pfVar16;
  longlong lVar17;
  longlong *plVar18;
  ulonglong *puVar19;
  ulonglong uVar20;
  code *pcVar21;
  undefined4 uVar22;
  int iVar23;
  ulonglong uVar24;
  float *pfVar25;
  undefined *puVar26;
  longlong lVar27;
  ulonglong uVar28;
  byte *pbVar29;
  longlong lVar30;
  code *pcVar31;
  longlong lVar32;
  byte *pbVar33;
  code *pcVar34;
  undefined *puVar35;
  code *pcVar36;
  byte *pbVar37;
  code *pcVar38;
  uint uVar39;
  float fVar42;
  float fVar43;
  undefined1 auVar40 [16];
  float fVar44;
  undefined1 auVar41 [16];
  float fVar45;
  float fVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar58;
  uint uVar60;
  undefined1 auVar59 [16];
  uint uVar61;
  float fVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar67;
  byte *in_stack_fffffffffffffd28;
  longlong lStack_2b8;
  byte *pbStack_2b0;
  ulonglong uStack_2a8;
  undefined8 uStack_2a0;
  undefined4 uStack_298;
  float *pfStack_290;
  byte *pbStack_288;
  float *pfStack_280;
  float afStack_278 [2];
  undefined8 *puStack_270;
  code *pcStack_268;
  float *pfStack_260;
  code *pcStack_258;
  float *pfStack_250;
  code *pcStack_248;
  longlong lStack_240;
  code *pcStack_238;
  byte *pbStack_230;
  byte *pbStack_228;
  byte *pbStack_220;
  undefined1 auStack_218 [16];
  undefined8 uStack_208;
  undefined4 uStack_200;
  ulonglong *puStack_1f8;
  float *pfStack_1f0;
  byte *pbStack_1e8;
  float *pfStack_1e0;
  float afStack_1d8 [2];
  longlong lStack_1d0;
  byte *pbStack_1c8;
  undefined8 uStack_1c0;
  float *pfStack_1b8;
  byte *pbStack_1b0;
  float *pfStack_1a8;
  float *pfStack_198;
  float **ppfStack_190;
  float *pfStack_188;
  float *pfStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 **ppuStack_140;
  longlong lStack_130;
  code *pcStack_128;
  byte *pbStack_120;
  byte *pbStack_118;
  undefined1 uStack_109;
  float fStack_108;
  float fStack_104;
  code *pcStack_100;
  char cStack_f5;
  undefined1 uStack_f4;
  undefined1 uStack_f3;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  ppfVar15 = (float **)param_2;
  pbStack_230 = param_3;
  cStack_f5 = pdb_140e94b40();
  if (cStack_f5 == '\0') goto LAB_140b0b668;
  pbVar37 = (byte *)0x50;
  lVar12 = pdb_140b0edb0(0x50);
  pbVar33 = &UNK_143054618;
  if (lVar12 == 1) {
    if ((byte *)0x50 < ppfVar15) {
LAB_140b0c73f:
      pdb_142dc8070(&UNK_143054618,0x50,0);
LAB_140b0c75f:
      pdb_142dc8070(&UNK_143054618,0x50);
      pcVar14 = (code *)swi(3);
      puVar19 = (ulonglong *)(*pcVar14)();
      return puVar19;
    }
    uVar13 = pdb_140b0edb0(ppfVar15);
    if ((uVar13 & 1) != 0) {
      if ((byte *)0x50 < (byte *)((longlong)ppfVar15 + 2)) goto LAB_140b0c75f;
      pbVar37 = (byte *)(0x4e - (longlong)ppfVar15);
      pbVar33 = (byte *)((longlong)ppfVar15 + 0x14305461a);
    }
  }
  puVar26 = &UNK_14305432a;
  puVar35 = &UNK_1430542f0;
  do {
    bVar1 = puVar26[-1];
    uVar11 = (uint)(char)bVar1;
    if ((char)bVar1 < '\0') {
      bVar2 = puVar26[-2];
      if ((char)bVar2 < -0x40) {
        bVar3 = puVar26[-3];
        if ((char)bVar3 < -0x40) {
          pbVar29 = puVar26 + -4;
          puVar26 = puVar26 + -4;
          uVar11 = bVar3 & 0x3f | (*pbVar29 & 7) << 6;
        }
        else {
          puVar26 = puVar26 + -3;
          uVar11 = bVar3 & 0xf;
        }
        uVar11 = bVar2 & 0x3f | uVar11 << 6;
      }
      else {
        puVar26 = puVar26 + -2;
        uVar11 = bVar2 & 0x1f;
      }
      uVar11 = (uint)(bVar1 & 0x3f) | uVar11 << 6;
      if (uVar11 != 0x5c) goto LAB_140b0b5d4;
LAB_140b0b5e5:
      puVar35 = puVar26 + -0x1430542ef;
      if ((undefined *)0x3a < puVar35) {
        pdb_142dc8070(&UNK_1430542f0,0x3a,puVar35,0x3a,&UNK_1430546c8);
        goto LAB_140b0c73f;
      }
      in_stack_fffffffffffffd28 = (byte *)(0x3a - (longlong)puVar35);
      puVar35 = puVar26 + 1;
      goto LAB_140b0b607;
    }
    puVar26 = puVar26 + -1;
    if (uVar11 == 0x5c) goto LAB_140b0b5e5;
LAB_140b0b5d4:
    if (uVar11 == 0x2f) goto LAB_140b0b5e5;
  } while (puVar26 != &UNK_1430542f0);
  in_stack_fffffffffffffd28 = (byte *)0x3a;
LAB_140b0b607:
  pcVar14 = (code *)pdb_140e97000();
  ppfVar15 = (float **)pbVar33;
  if (pcVar14[0x68] != (code)0x1) goto LAB_140b0c68c;
  do {
    if (*(longlong *)pcVar14 == 0) {
      *(longlong *)pcVar14 = -1;
      pcStack_100 = pcVar14;
      uStack_1c0 = pdb_140e94f10(pcVar14 + 8,ppfVar15,pbVar37,puVar35,in_stack_fffffffffffffd28,1,0)
      ;
      *(longlong *)pcStack_100 = *(longlong *)pcStack_100 + 1;
LAB_140b0b668:
      uVar22 = SUB84(ppfVar15,0);
      uStack_2a0 = pdb_140f3c9d0();
      pcVar14 = param_4;
      uStack_298 = uVar22;
      pdb_140b09020(&lStack_2b8,param_4,pdb_140b07270);
      if (SBORROW8(0,lStack_2b8)) {
        fStack_104 = INFINITY;
        fStack_108 = -INFINITY;
        pdb_14007ee60();
        pbVar33 = pub_1406abae0(0x40000,4);
        if (pbVar33 == (byte *)0x0) {
          pdb_142dc7e2a(4,0x40000);
          goto LAB_140b0c71a;
        }
        lStack_130 = 0x10000;
        auStack_218 = ZEXT416(_DAT_142f7737c);
        pbStack_120 = pbVar33;
        uVar13 = 0x10000;
        fVar62 = _DAT_143053cb0;
      }
      else {
        lStack_130 = lStack_2b8;
        pbStack_120 = pbStack_2b0;
        uVar13 = uStack_2a8;
        if (uStack_2a8 == 0) {
          fStack_104 = INFINITY;
          auStack_218 = ZEXT416(_DAT_142f7737c);
          fVar62 = _DAT_143053cb0;
          fStack_108 = _DAT_143053cb0;
        }
        else {
          if (uStack_2a8 < 8) {
            auVar59 = ZEXT416(_DAT_142f7737c);
            uVar24 = 0;
            pcVar34 = pcVar14;
LAB_140b0b720:
            do {
              fVar62 = *(float *)(pbStack_2b0 + uVar24 * 4);
              fVar42 = auVar59._0_4_;
              fVar58 = fVar62;
              if (fVar42 <= fVar62) {
                fVar58 = fVar42;
              }
              auVar59 = ZEXT416(~-(uint)NAN(fVar42) & (uint)fVar58 |
                                -(uint)NAN(fVar42) & (uint)fVar62);
              uVar24 = uVar24 + 1;
            } while (uStack_2a8 != uVar24);
          }
          else {
            uVar28 = uStack_2a8 & 0xfffffffffffffff8;
            uVar20 = 0xfffffffffffffff8;
            auVar53 = _DAT_14301cce0;
            auVar50 = _DAT_14301cce0;
            do {
              auVar59 = auVar50;
              auVar51 = auVar53;
              auVar53 = *(undefined1 (*) [16])(pbStack_2b0 + uVar20 * 4 + 0x20);
              auVar50 = *(undefined1 (*) [16])(pbStack_2b0 + uVar20 * 4 + 0x30);
              auVar63 = minps(auVar53,auVar51);
              auVar49._0_4_ = ~-(uint)NAN(auVar51._0_4_) & auVar63._0_4_;
              auVar49._4_4_ = ~-(uint)NAN(auVar51._4_4_) & auVar63._4_4_;
              auVar49._8_4_ = ~-(uint)NAN(auVar51._8_4_) & auVar63._8_4_;
              auVar49._12_4_ = ~-(uint)NAN(auVar51._12_4_) & auVar63._12_4_;
              auVar56._4_4_ = (uint)auVar53._4_4_ & -(uint)NAN(auVar51._4_4_);
              auVar56._0_4_ = (uint)auVar53._0_4_ & -(uint)NAN(auVar51._0_4_);
              auVar56._8_4_ = (uint)auVar53._8_4_ & -(uint)NAN(auVar51._8_4_);
              auVar56._12_4_ = (uint)auVar53._12_4_ & -(uint)NAN(auVar51._12_4_);
              auVar63 = minps(auVar50,auVar59);
              auVar55._0_4_ = ~-(uint)NAN(auVar59._0_4_) & auVar63._0_4_;
              auVar55._4_4_ = ~-(uint)NAN(auVar59._4_4_) & auVar63._4_4_;
              auVar55._8_4_ = ~-(uint)NAN(auVar59._8_4_) & auVar63._8_4_;
              auVar55._12_4_ = ~-(uint)NAN(auVar59._12_4_) & auVar63._12_4_;
              auVar66._4_4_ = (uint)auVar50._4_4_ & -(uint)NAN(auVar59._4_4_);
              auVar66._0_4_ = (uint)auVar50._0_4_ & -(uint)NAN(auVar59._0_4_);
              auVar66._8_4_ = (uint)auVar50._8_4_ & -(uint)NAN(auVar59._8_4_);
              auVar66._12_4_ = (uint)auVar50._12_4_ & -(uint)NAN(auVar59._12_4_);
              auVar63._4_4_ = -(uint)(NAN(auVar53._4_4_) || NAN(auVar50._4_4_));
              auVar63._0_4_ = -(uint)(NAN(auVar53._0_4_) || NAN(auVar50._0_4_));
              auVar63._8_4_ = -(uint)(NAN(auVar53._8_4_) || NAN(auVar50._8_4_));
              auVar63._12_4_ = -(uint)(NAN(auVar53._12_4_) || NAN(auVar50._12_4_));
              uVar11 = movmskps((int)pcVar14,auVar63);
              pcVar34 = (code *)(ulonglong)uVar11;
              uVar24 = uVar20 + 8;
              if (uVar11 != 0) break;
              lVar12 = uVar20 + (8 - uVar28);
              pcVar14 = (code *)0x0;
              uVar20 = uVar24;
              auVar53 = auVar49 | auVar56;
              auVar50 = auVar55 | auVar66;
            } while (lVar12 != -8);
            if ((char)uVar11 == '\0') {
              uVar24 = uVar28;
              auVar51 = auVar49 | auVar56;
              auVar59 = auVar55 | auVar66;
            }
            auVar50 = minps(auVar59,auVar51);
            auVar47._0_4_ = auVar59._0_4_ & -(uint)NAN(auVar51._0_4_);
            auVar47._4_4_ = auVar59._4_4_ & -(uint)NAN(auVar51._4_4_);
            auVar47._8_4_ = auVar59._8_4_ & -(uint)NAN(auVar51._8_4_);
            auVar47._12_4_ = auVar59._12_4_ & -(uint)NAN(auVar51._12_4_);
            auVar53._0_4_ = ~-(uint)NAN(auVar51._0_4_) & auVar50._0_4_;
            auVar53._4_4_ = ~-(uint)NAN(auVar51._4_4_) & auVar50._4_4_;
            auVar53._8_4_ = ~-(uint)NAN(auVar51._8_4_) & auVar50._8_4_;
            auVar53._12_4_ = ~-(uint)NAN(auVar51._12_4_) & auVar50._12_4_;
            auVar53 = auVar53 | auVar47;
            fVar58 = auVar53._0_4_;
            fVar42 = auVar53._4_4_;
            fVar43 = auVar53._8_4_;
            fVar44 = auVar53._12_4_;
            auVar50._0_8_ = auVar53._8_8_;
            auVar50._8_4_ = fVar43;
            auVar50._12_4_ = fVar44;
            fVar62 = fVar42;
            if (fVar58 <= fVar42) {
              fVar62 = fVar58;
            }
            fVar62 = (float)(~-(uint)NAN(fVar58) & (uint)fVar62 | -(uint)NAN(fVar58) & (uint)fVar42)
            ;
            if (fVar62 <= fVar43) {
              auVar50._4_12_ = auVar50._4_12_;
              auVar50._0_4_ = fVar62;
            }
            fVar58 = (float)(-(uint)NAN(fVar62) & (uint)fVar43 | ~-(uint)NAN(fVar62) & auVar50._0_4_
                            );
            uVar39 = (uint)fVar42 & (uint)fVar44 | ~(uint)fVar42 & auVar50._4_4_;
            uVar60 = (uint)fVar44 & (uint)fVar43 | ~(uint)fVar44 & auVar50._8_4_;
            uVar61 = (uint)fVar44 | ~(uint)fVar44 & auVar50._12_4_;
            fVar62 = fVar44;
            if (fVar58 <= fVar44) {
              fVar62 = fVar58;
            }
            auVar51._0_4_ = ~-(uint)NAN(fVar58) & (uint)fVar62;
            auVar51._4_4_ = ~uVar39 & (uint)fVar44;
            auVar51._8_4_ = ~uVar60 & (uint)fVar44;
            auVar51._12_4_ = ~uVar61 & (uint)fVar44;
            auVar59._0_4_ = -(uint)NAN(fVar58) & (uint)fVar44;
            auVar59._4_4_ = uVar39 & (uint)fVar44;
            auVar59._8_4_ = uVar60 & (uint)fVar44;
            auVar59._12_4_ = uVar61 & (uint)fVar44;
            auVar59 = auVar59 | auVar51;
            if ((uStack_2a8 != uVar28) || ((char)uVar11 != '\0')) goto LAB_140b0b720;
          }
          auStack_218._4_12_ = auVar59._4_12_;
          auStack_218._0_4_ = auVar59._0_4_ + _DAT_142e36f34;
          if (uStack_2a8 < 8) {
            uVar24 = 0;
            fStack_108 = _DAT_143053cb0;
LAB_140b0b8a0:
            do {
              fVar62 = *(float *)(pbStack_2b0 + uVar24 * 4);
              fVar58 = fVar62;
              if (fVar62 <= fStack_108) {
                fVar58 = fStack_108;
              }
              fStack_108 = (float)(~-(uint)NAN(fStack_108) & (uint)fVar58 |
                                  -(uint)NAN(fStack_108) & (uint)fVar62);
              uVar24 = uVar24 + 1;
            } while (uStack_2a8 != uVar24);
          }
          else {
            uVar28 = uStack_2a8 & 0xfffffffffffffff8;
            uVar20 = 0xfffffffffffffff8;
            auVar53 = _DAT_143053cc0;
            auVar50 = _DAT_143053cc0;
            do {
              auVar56 = auVar50;
              auVar63 = auVar53;
              auVar53 = *(undefined1 (*) [16])(pbStack_2b0 + uVar20 * 4 + 0x20);
              auVar50 = *(undefined1 (*) [16])(pbStack_2b0 + uVar20 * 4 + 0x30);
              auVar64._0_4_ = (uint)auVar53._0_4_ & -(uint)NAN(auVar63._0_4_);
              auVar64._4_4_ = (uint)auVar53._4_4_ & -(uint)NAN(auVar63._4_4_);
              auVar64._8_4_ = (uint)auVar53._8_4_ & -(uint)NAN(auVar63._8_4_);
              auVar64._12_4_ = (uint)auVar53._12_4_ & -(uint)NAN(auVar63._12_4_);
              auVar66 = maxps(auVar53,auVar63);
              auVar52._0_4_ = ~-(uint)NAN(auVar63._0_4_) & auVar66._0_4_;
              auVar52._4_4_ = ~-(uint)NAN(auVar63._4_4_) & auVar66._4_4_;
              auVar52._8_4_ = ~-(uint)NAN(auVar63._8_4_) & auVar66._8_4_;
              auVar52._12_4_ = ~-(uint)NAN(auVar63._12_4_) & auVar66._12_4_;
              auVar65._0_4_ = (uint)auVar50._0_4_ & -(uint)NAN(auVar56._0_4_);
              auVar65._4_4_ = (uint)auVar50._4_4_ & -(uint)NAN(auVar56._4_4_);
              auVar65._8_4_ = (uint)auVar50._8_4_ & -(uint)NAN(auVar56._8_4_);
              auVar65._12_4_ = (uint)auVar50._12_4_ & -(uint)NAN(auVar56._12_4_);
              auVar66 = maxps(auVar50,auVar56);
              auVar57._0_4_ = ~-(uint)NAN(auVar56._0_4_) & auVar66._0_4_;
              auVar57._4_4_ = ~-(uint)NAN(auVar56._4_4_) & auVar66._4_4_;
              auVar57._8_4_ = ~-(uint)NAN(auVar56._8_4_) & auVar66._8_4_;
              auVar57._12_4_ = ~-(uint)NAN(auVar56._12_4_) & auVar66._12_4_;
              auVar5._4_4_ = -(uint)(NAN(auVar53._4_4_) || NAN(auVar50._4_4_));
              auVar5._0_4_ = -(uint)(NAN(auVar53._0_4_) || NAN(auVar50._0_4_));
              auVar5._8_4_ = -(uint)(NAN(auVar53._8_4_) || NAN(auVar50._8_4_));
              auVar5._12_4_ = -(uint)(NAN(auVar53._12_4_) || NAN(auVar50._12_4_));
              iVar23 = movmskps((int)pcVar34,auVar5);
              uVar24 = uVar20 + 8;
              if (iVar23 != 0) break;
              lVar12 = uVar20 + (8 - uVar28);
              pcVar34 = (code *)0x0;
              uVar20 = uVar24;
              auVar53 = auVar52 | auVar64;
              auVar50 = auVar57 | auVar65;
            } while (lVar12 != -8);
            if ((char)iVar23 == '\0') {
              uVar24 = uVar28;
              auVar63 = auVar52 | auVar64;
              auVar56 = auVar57 | auVar65;
            }
            auVar53 = maxps(auVar56,auVar63);
            auVar48._0_4_ = auVar56._0_4_ & -(uint)NAN(auVar63._0_4_);
            auVar48._4_4_ = auVar56._4_4_ & -(uint)NAN(auVar63._4_4_);
            auVar48._8_4_ = auVar56._8_4_ & -(uint)NAN(auVar63._8_4_);
            auVar48._12_4_ = auVar56._12_4_ & -(uint)NAN(auVar63._12_4_);
            auVar40._0_4_ = ~-(uint)NAN(auVar63._0_4_) & auVar53._0_4_;
            auVar40._4_4_ = ~-(uint)NAN(auVar63._4_4_) & auVar53._4_4_;
            auVar40._8_4_ = ~-(uint)NAN(auVar63._8_4_) & auVar53._8_4_;
            auVar40._12_4_ = ~-(uint)NAN(auVar63._12_4_) & auVar53._12_4_;
            auVar40 = auVar40 | auVar48;
            fVar58 = auVar40._0_4_;
            fVar42 = auVar40._4_4_;
            fVar43 = auVar40._8_4_;
            fVar44 = auVar40._12_4_;
            auVar54._0_8_ = auVar40._8_8_;
            auVar54._8_4_ = fVar43;
            auVar54._12_4_ = fVar44;
            fVar62 = fVar42;
            if (fVar42 <= fVar58) {
              fVar62 = fVar58;
            }
            fVar62 = (float)(~-(uint)NAN(fVar58) & (uint)fVar62 | -(uint)NAN(fVar58) & (uint)fVar42)
            ;
            if (fVar43 <= fVar62) {
              auVar41._4_12_ = auVar54._4_12_;
              auVar41._0_4_ = fVar62;
              auVar54._0_8_ = auVar41._0_8_;
            }
            fVar58 = (float)(-(uint)NAN(fVar62) & (uint)fVar43 |
                            ~-(uint)NAN(fVar62) & (uint)auVar54._0_8_);
            fVar62 = fVar44;
            if (fVar44 <= fVar58) {
              fVar62 = fVar58;
            }
            fStack_108 = (float)(-(uint)NAN(fVar58) & (uint)fVar44 |
                                ~-(uint)NAN(fVar58) & (uint)fVar62);
            if ((uStack_2a8 != uVar28) || ((char)iVar23 != '\0')) goto LAB_140b0b8a0;
          }
          fStack_108 = fStack_108 + _DAT_142e36f28;
          fVar62 = fStack_108;
          fStack_104 = (float)auStack_218._0_4_;
        }
      }
      uStack_f4 = 1;
      pdb_140b09020(&pfStack_198,param_4,pdb_140b07290);
      pfVar16 = pfStack_188;
      ppfVar15 = ppfStack_190;
      pfVar25 = pfStack_198;
      if (SBORROW8(0,(longlong)pfStack_198)) {
        pdb_14007ee60();
        ppfVar15 = (float **)pub_1406abae0(0x40000,4);
        if (ppfVar15 == (float **)0x0) {
          uStack_f4 = 1;
          pdb_142dc7e2a(4,0x40000);
          goto LAB_140b0c71a;
        }
        pfVar16 = (float *)0x10000;
        pfVar25 = (float *)0x10000;
      }
      uVar20 = *param_5;
      pcStack_100 = (code *)CONCAT44(pcStack_100._4_4_,*(uint *)((longlong)param_5 + 4));
      fVar58 = *(float *)(param_5 + 1);
      lStack_1d0 = CONCAT44(lStack_1d0._4_4_,*(uint *)((longlong)param_5 + 0xc));
      fVar42 = *(float *)(param_5 + 2);
      pfStack_1e0 = pfVar16;
      pdb_14007ee60();
      pbVar33 = pub_1406abae0(0x10000,4);
      fVar10 = _DAT_143053cd4;
      fVar9 = _DAT_142f61000;
      fVar8 = _DAT_142e4bfe4;
      fVar7 = _DAT_142e37ae4;
      fVar6 = _DAT_142e37874;
      fVar44 = _DAT_142e36f50;
      fVar43 = _DAT_142e36f38;
      pfStack_1f0 = pfVar25;
      pbStack_1e8 = (byte *)ppfVar15;
      if (pbVar33 == (byte *)0x0) {
        uStack_f3 = 1;
        pdb_142dc7e2a(4,0x10000);
        goto LAB_140b0c71a;
      }
      pbStack_118 = pbVar33;
      if ((uVar20 & 1) == 0) {
        pbVar37 = pbStack_120 + 0x404;
        lVar12 = 0;
        lVar27 = 0;
        do {
          lVar27 = lVar27 + 1;
          lVar30 = 0;
          do {
            uVar20 = lVar12 + lVar30;
            if ((((uVar13 <= uVar20) || (uVar20 = lVar12 + lVar30 + 1, uVar13 <= uVar20)) ||
                (uVar20 = lVar12 + lVar30 + 0x100, uVar13 <= uVar20)) ||
               (uVar20 = lVar12 + lVar30 + 0x101, uVar13 <= uVar20)) goto LAB_140b0c656;
            fVar58 = (*(float *)(pbVar37 + lVar30 * 4 + -0x404) + 0.0 +
                      *(float *)(pbVar37 + lVar30 * 4 + -0x400) +
                      *(float *)(pbVar37 + lVar30 * 4 + -4) + *(float *)(pbVar37 + lVar30 * 4)) *
                     fVar7;
            if (fVar6 <= fVar58) {
              fVar58 = fVar6;
            }
            *(float *)(pbVar33 + lVar30 * 2) = fVar58 + fVar9;
            lVar30 = lVar30 + 2;
          } while (lVar30 != 0x100);
          pbVar33 = pbVar33 + 0x200;
          lVar12 = lVar12 + 0x200;
          pbVar37 = pbVar37 + 0x800;
        } while (lVar27 != 0x80);
      }
      else {
        pbVar37 = pbStack_120 + 0x404;
        lVar12 = 0;
        lVar27 = 0;
        do {
          fVar45 = (((float)lVar27 + fVar44) * _DAT_143053cd0 + fVar44) * fVar8;
          lVar30 = 0;
          if (fVar45 < pcStack_100._0_4_ || (float)lStack_1d0 < fVar45) {
            do {
              uVar20 = lVar12 + lVar30;
              if (((uVar13 <= uVar20) || (uVar20 = lVar12 + lVar30 + 1, uVar13 <= uVar20)) ||
                 ((uVar20 = lVar12 + lVar30 + 0x100, uVar13 <= uVar20 ||
                  (uVar20 = lVar12 + lVar30 + 0x101, uVar13 <= uVar20)))) goto LAB_140b0c656;
              fVar45 = (*(float *)(pbVar37 + lVar30 * 4 + -0x404) + 0.0 +
                        *(float *)(pbVar37 + lVar30 * 4 + -0x400) +
                        *(float *)(pbVar37 + lVar30 * 4 + -4) + *(float *)(pbVar37 + lVar30 * 4)) *
                       fVar7;
              if (fVar6 <= fVar45) {
                fVar45 = fVar6;
              }
              *(float *)(pbVar33 + lVar30 * 2) = fVar45 + fVar9;
              lVar30 = lVar30 + 2;
            } while (lVar30 != 0x100);
          }
          else {
            lVar32 = 0;
            do {
              uVar20 = lVar12 + lVar30;
              if (((uVar13 <= uVar20) || (uVar20 = lVar12 + lVar30 + 1, uVar13 <= uVar20)) ||
                 ((uVar20 = lVar12 + lVar30 + 0x100, uVar13 <= uVar20 ||
                  (uVar20 = lVar12 + lVar30 + 0x101, uVar13 <= uVar20)))) {
LAB_140b0c656:
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(uVar20,uVar13,&UNK_143054248);
              }
              fVar46 = (((float)lVar32 + fVar44) * fVar10 + fVar43) * fVar8;
              fVar45 = (*(float *)(pbVar37 + lVar30 * 4 + -0x404) + 0.0 +
                        *(float *)(pbVar37 + lVar30 * 4 + -0x400) +
                        *(float *)(pbVar37 + lVar30 * 4 + -4) + *(float *)(pbVar37 + lVar30 * 4)) *
                       fVar7;
              if (fVar6 <= fVar45) {
                fVar45 = fVar6;
              }
              fVar67 = fVar45;
              if (fVar45 <= 0.0) {
                fVar67 = 0.0;
              }
              uVar11 = -(uint)(fVar58 <= fVar46);
              uVar39 = -(uint)(fVar46 <= fVar42);
              *(float *)(pbVar33 + lVar30 * 2) =
                   (float)(~uVar39 & (uint)fVar45 |
                          (uVar11 & (uint)fVar67 | ~uVar11 & (uint)fVar45) & uVar39) + fVar9;
              lVar30 = lVar30 + 2;
              lVar32 = lVar32 + 1;
            } while (lVar30 != 0x100);
          }
          lVar27 = lVar27 + 1;
          pbVar33 = pbVar33 + 0x200;
          lVar12 = lVar12 + 0x200;
          pbVar37 = pbVar37 + 0x800;
        } while (lVar27 != 0x80);
      }
      afStack_278[0] = 1.79366e-43;
      afStack_278[1] = 0.0;
      afStack_1d8[1] = 4.0;
      uStack_208 = 0xc;
      pfStack_198 = afStack_1d8 + 1;
      ppfStack_190 = (float **)0xfffffffffffffff4;
      pfStack_188 = (float *)0xc;
      pfStack_180 = (float *)((ulonglong)pfStack_180 & 0xffffffffffffff00);
      pdb_1416085b0(&pfStack_1b8,&pfStack_198);
      afStack_1d8[0] = _DAT_142e377f0;
      if (pfStack_1a8 != (float *)0x0) {
        uVar20 = (ulonglong)((uint)pfStack_1a8 & 7);
        if (pfStack_1a8 < (float *)0x8) {
          uVar28 = 0;
        }
        else {
          uVar28 = 0;
          do {
            afStack_1d8[0] =
                 afStack_1d8[0] + *(float *)(pbStack_1b0 + uVar28 * 4) +
                 *(float *)(pbStack_1b0 + uVar28 * 4 + 4) + *(float *)(pbStack_1b0 + uVar28 * 4 + 8)
                 + *(float *)(pbStack_1b0 + uVar28 * 4 + 0xc) +
                 *(float *)(pbStack_1b0 + uVar28 * 4 + 0x10) +
                 *(float *)(pbStack_1b0 + uVar28 * 4 + 0x14) +
                 *(float *)(pbStack_1b0 + uVar28 * 4 + 0x18) +
                 *(float *)(pbStack_1b0 + uVar28 * 4 + 0x1c);
            uVar28 = uVar28 + 8;
          } while (((ulonglong)pfStack_1a8 & 0xfffffffffffffff8) != uVar28);
          if (uVar20 == 0) goto LAB_140b0bf1d;
        }
        uVar24 = 0;
        do {
          afStack_1d8[0] = afStack_1d8[0] + *(float *)(pbStack_1b0 + uVar24 * 4 + uVar28 * 4);
          uVar24 = uVar24 + 1;
        } while (uVar20 != uVar24);
      }
LAB_140b0bf1d:
      pfStack_188 = (float *)&uStack_208;
      pfStack_180 = afStack_1d8;
      uVar20 = CONCAT71((int7)((ulonglong)in_stack_fffffffffffffd28 >> 8),1);
      pfStack_198 = afStack_278;
      ppfStack_190 = &pfStack_1b8;
      pdb_140b0adf0(&puStack_270,&pfStack_198,pbStack_118,0x4000,uVar20);
      pcStack_100 = pcStack_268;
      pdb_140b0adf0(&pfStack_290,&pfStack_198,pcStack_268,pfStack_260,uVar20 & 0xffffffffffffff00);
      if (puStack_270 != (undefined8 *)0x0) {
        pub_1406abac0((byte *)pcStack_100,(longlong)puStack_270 << 2,4);
      }
      pbVar37 = pbStack_118;
      pbVar33 = pbStack_120;
      if (pfStack_1b8 != (float *)0x0) {
        pub_1406abac0(pbStack_1b0,(longlong)pfStack_1b8 << 2,4);
      }
      pub_1406abac0(pbVar37,0x10000,4);
      pdb_14007ee60();
      pbStack_220 = pub_1406abab0(0x18,8);
      if (pbStack_220 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x18);
      }
      *(longlong *)pbStack_220 = lStack_130;
      *(byte **)(pbStack_220 + 8) = pbVar33;
      *(ulonglong *)(pbStack_220 + 0x10) = uVar13;
      fVar58 = _DAT_142e37ae4;
      pfStack_198 = (float *)0x1;
      pfStack_188 = (float *)0x1;
      pcVar14 = (code *)0x100;
      pbStack_228 = param_2;
      puStack_1f8 = param_1;
      ppfStack_190 = (float **)pbStack_220;
      do {
        pfVar16 = pfStack_188;
        ppfVar15 = ppfStack_190;
        if ((pfStack_188 == (float *)0x0) ||
           ((byte *)((longlong)ppfStack_190 + (longlong)pfStack_188 * 0x18) == (byte *)0x18)) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_1430540a0);
        }
        pcStack_100 = (code *)((ulonglong)pcVar14 >> 1);
        pcVar34 = (code *)((longlong)pcStack_100 * (longlong)pcStack_100);
        lVar12 = 4;
        if (pcStack_100 == (code *)0x0) {
          pbVar33 = (byte *)0x4;
          pcStack_128 = (code *)0x0;
          pcVar38 = pcStack_128;
        }
        else {
          puVar35 = (undefined *)((longlong)pcVar34 * 4);
          pdb_14007ee60();
          pbVar33 = pub_1406abae0((ulonglong)puVar35,4);
          pcVar38 = pcVar34;
          if (pbVar33 == (byte *)0x0) goto LAB_140b0c6c8;
        }
        pcStack_128 = pcVar38;
        pfVar25 = pfStack_188;
        lStack_1d0 = (longlong)pcStack_100 * 4;
        pbStack_118 = (byte *)((longlong)pcVar14 * 2);
        lVar27 = (longlong)pcVar14 * 4 + 4;
        lStack_240 = (longlong)pcVar14 * 8;
        pbVar37 = (byte *)0x0;
        pcVar31 = (code *)0x0;
        pcVar36 = (code *)0x0;
        pbVar29 = pbVar33;
        pcVar38 = pcVar14;
        do {
          pcVar36 = pcVar36 + 1;
          lVar30 = 0;
          pcVar21 = pcVar31;
          do {
            pcVar4 = *(code **)((longlong)ppfVar15 + (longlong)pfVar16 * 0x18 + -8);
            pcStack_238 = pcVar14;
            pbStack_1c8 = pbVar33;
            if (pcVar4 <= pbVar37 + lVar30) {
              uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(pbVar37 + lVar30,pcVar4,&UNK_1430540b8);
            }
            if (pcVar4 <= pbVar37 + lVar30 + 1) {
              uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(pbVar37 + lVar30 + 1,pcVar4,&UNK_1430540d0);
            }
            if (pcVar4 <= pcVar38 + lVar30) {
              uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(pcVar38 + lVar30,pcVar4,&UNK_1430540e8);
            }
            if (pcVar4 <= pcVar38 + lVar30 + 1) {
              uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(pcVar38 + lVar30 + 1,pcVar4,&UNK_143054100);
            }
            if (pcVar34 <= pcVar21) {
              uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(pcVar21,pcVar34,&UNK_143054118);
            }
            lVar17 = *(longlong *)((longlong)ppfVar15 + (longlong)pfVar16 * 0x18 + -0x10);
            lVar32 = lVar17 + lVar12;
            lVar17 = lVar17 + lVar27;
            *(float *)(pbVar29 + lVar30 * 2) =
                 (*(float *)(lVar32 + lVar30 * 4) + *(float *)(lVar32 + -4 + lVar30 * 4) +
                  *(float *)(lVar17 + -4 + lVar30 * 4) + *(float *)(lVar17 + lVar30 * 4)) * fVar58;
            pcVar21 = pcVar21 + 1;
            lVar30 = lVar30 + 2;
          } while ((longlong)pcStack_100 * 2 != lVar30);
          pcVar31 = pcVar31 + (longlong)pcStack_100;
          pbVar29 = pbVar29 + lStack_1d0;
          pcVar38 = pcVar38 + (longlong)pbStack_118;
          lVar27 = lVar27 + lStack_240;
          pbVar37 = pbVar37 + (longlong)pbStack_118;
          lVar12 = lVar12 + lStack_240;
        } while (pcVar36 != pcStack_100);
        if (pfStack_188 == pfStack_198) {
          pdb_142d7e830(&pfStack_198);
        }
        param_4 = pcStack_100;
        ppfVar15 = ppfStack_190;
        in_stack_fffffffffffffd28 = pbStack_230;
        *(code **)((longlong)ppfStack_190 + (longlong)pfVar25 * 0x18) = pcStack_128;
        *(byte **)((longlong)ppfStack_190 + (longlong)pfVar25 * 0x18 + 8) = pbStack_1c8;
        *(code **)((longlong)ppfStack_190 + (longlong)pfVar25 * 0x18 + 0x10) = pcVar34;
        pfVar25 = (float *)((longlong)pfVar25 + 1);
        pcVar14 = pcStack_100;
        pfStack_188 = pfVar25;
      } while ((code *)0x3 < pcStack_238);
      pfStack_1b8 = pfStack_198;
      pbStack_1b0 = (byte *)ppfStack_190;
      param_2 = *(byte **)pbStack_228;
      uStack_f2 = 1;
      pfStack_1a8 = pfVar25;
      pdb_140b0a710(param_2,pbStack_230,&UNK_14305432a,0xe,0x100,ppfStack_190,pfVar25);
      pfStack_188 = pfStack_280;
      pfStack_198 = pfStack_290;
      ppfStack_190 = (float **)pbStack_288;
      pdb_140b0a710(param_2,in_stack_fffffffffffffd28,&UNK_143054338,0x12,0x80,&pfStack_198,1);
      param_1 = puStack_1f8;
      uVar22 = 0;
      if (pfStack_198 != (float *)0x0) {
        uVar13 = (longlong)pfStack_198 << 2;
        pub_1406abac0((byte *)ppfStack_190,uVar13,4);
        uVar22 = (undefined4)uVar13;
      }
      if (2 < *_DAT_143ca8e90) {
        uStack_f2 = 0;
        uStack_208 = pdb_140f3cb70(&uStack_2a0);
        puStack_270 = &uStack_208;
        pcStack_268 = pdb_140f72840;
        pfStack_260 = &fStack_104;
        pcStack_258 = pdb_140f70fc0;
        pfStack_250 = &fStack_108;
        pcStack_248 = pdb_140f70fc0;
        pfStack_198 = (float *)0x0;
        ppfStack_190 = (float **)&UNK_1430543a8;
        pfStack_188 = (float *)0x2e;
        pfStack_180 = (float *)0x0;
        puStack_178 = &UNK_143054020;
        uStack_170 = 0x3a;
        uStack_168 = 3;
        puStack_160 = &UNK_1430543a8;
        uStack_158 = 0x2e;
        uStack_150 = 0x9800000001;
        puStack_148 = &UNK_14305434a;
        ppuStack_140 = &puStack_270;
        uStack_f2 = 0;
        uStack_200 = uVar22;
        pdb_140f332f0(&uStack_109,&pfStack_198);
        param_1 = puStack_1f8;
      }
      *param_1 = (ulonglong)pfStack_1f0;
      param_1[1] = (ulonglong)pbStack_1e8;
      param_1[2] = (ulonglong)pfStack_1e0;
      *(undefined4 *)((longlong)param_1 + 0x2c) = auStack_218._0_4_;
      *(float *)(param_1 + 6) = fVar62;
      uVar13 = param_5[1];
      param_1[3] = *param_5;
      param_1[4] = uVar13;
      *(uint *)(param_1 + 5) = (uint)param_5[2];
      if (pfVar25 != (float *)0x0) {
        in_stack_fffffffffffffd28 = (byte *)((longlong)ppfVar15 + 8);
        do {
          if (*(longlong *)(in_stack_fffffffffffffd28 + -8) != 0) {
            pub_1406abac0(*(byte **)in_stack_fffffffffffffd28,
                          *(longlong *)(in_stack_fffffffffffffd28 + -8) << 2,4);
          }
          in_stack_fffffffffffffd28 = in_stack_fffffffffffffd28 + 0x18;
          pfVar25 = (float *)((longlong)pfVar25 - 1);
        } while (pfVar25 != (float *)0x0);
      }
      puVar35 = (undefined *)0x0;
      if (pfStack_1b8 != (float *)0x0) {
        pub_1406abac0((byte *)ppfVar15,(longlong)pfStack_1b8 * 0x18,8);
      }
      if (cStack_f5 == '\0') {
        return param_1;
      }
      plVar18 = (longlong *)pdb_140e97000();
      if (((char)plVar18[0xd] != '\x01') &&
         (plVar18 = (longlong *)pdb_142d8ec20(plVar18,0), plVar18 == (longlong *)0x0)) break;
      if (*plVar18 == 0) {
        *plVar18 = -1;
        pcStack_100 = (code *)plVar18;
        pdb_140e95370(plVar18 + 1);
        *(longlong *)pcStack_100 = *(longlong *)pcStack_100 + 1;
        return param_1;
      }
    }
    pcVar14 = (code *)pdb_142dc8090(&UNK_143326a50);
LAB_140b0c68c:
    pcVar14 = (code *)pdb_142d8ec20(pcVar14,0);
  } while (pcVar14 != (code *)0x0);
  pdb_142dc7890(&UNK_143326860);
LAB_140b0c6c8:
  pdb_142dc7e2a(4,puVar35);
LAB_140b0c71a:
                    /* WARNING: Does not return */
  pcVar14 = (code *)invalidInstructionException();
  (*pcVar14)();
}

