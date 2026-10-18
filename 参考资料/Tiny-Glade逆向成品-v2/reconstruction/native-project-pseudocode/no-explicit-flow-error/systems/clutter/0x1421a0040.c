// VA 0x1421a0040, PDB extent 6751 bytes
// system_clutter::inter_roof_merlons::detect_inter_roof_merlons::detect_inter_roof_merlons
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/inter_roof_merlons/detect_inter_roof_merlons.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_clutter::inter_roof_merlons::detect_inter_roof_merlons::detect_inter_roof_merlons
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/inter_roof_merlons/detect_inter_roof_merlons.rs
   Extent: 6751 */

void pdb_1421a0040(longlong *param_1,longlong *param_2,undefined8 param_3,uint *param_4,
                  undefined8 *param_5,undefined8 *param_6,longlong *param_7)

{
  byte bVar1;
  byte bVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  undefined1 uVar15;
  char cVar16;
  bool bVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong *plVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  undefined1 auVar25 [8];
  byte *pbVar26;
  byte *pbVar27;
  ulonglong uVar28;
  byte *pbVar29;
  uint uVar30;
  int *piVar31;
  undefined8 *puVar32;
  undefined1 (*pauVar33) [16];
  undefined1 (*pauVar34) [16];
  undefined *puVar35;
  undefined1 auVar36 [8];
  byte *pbVar37;
  ushort uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  undefined1 (*pauVar41) [16];
  undefined8 *puVar42;
  undefined1 (*pauVar43) [16];
  bool bVar44;
  uint uVar45;
  byte bVar46;
  int iVar47;
  undefined4 uVar48;
  float fVar49;
  undefined8 uVar50;
  undefined1 auVar51 [16];
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  char unaff_XMM15_Ba;
  char unaff_XMM15_Bb;
  char unaff_XMM15_Bc;
  char unaff_XMM15_Bd;
  char unaff_XMM15_Be;
  char unaff_XMM15_Bf;
  char unaff_XMM15_Bg;
  char unaff_XMM15_Bh;
  char unaff_XMM15_Bi;
  char unaff_XMM15_Bj;
  char unaff_XMM15_Bk;
  char unaff_XMM15_Bl;
  char unaff_XMM15_Bm;
  char unaff_XMM15_Bn;
  char unaff_XMM15_Bo;
  char unaff_XMM15_Bp;
  undefined1 auStack_380 [28];
  int iStack_364;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined1 auStack_348 [16];
  undefined1 auStack_338 [12];
  char acStack_320 [8];
  byte *pbStack_318;
  byte *pbStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined4 uStack_2e8;
  int iStack_2e4;
  ulonglong uStack_2e0;
  ulonglong uStack_2c8;
  ulonglong uStack_2c0;
  undefined1 (*pauStack_2b8) [16];
  ulonglong uStack_2b0;
  longlong lStack_2a0;
  undefined1 auStack_298 [16];
  longlong *plStack_288;
  undefined8 uStack_280;
  undefined1 auStack_278 [16];
  undefined8 uStack_268;
  float fStack_260;
  float fStack_25c;
  longlong lStack_258;
  byte *pbStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined1 auStack_238 [16];
  int iStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 uStack_208;
  longlong lStack_200;
  byte *pbStack_1f8;
  byte *pbStack_1f0;
  undefined4 *puStack_1e8;
  longlong lStack_1e0;
  undefined1 auStack_1d8 [8];
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  int iStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined8 uStack_1b4;
  longlong lStack_1a0;
  longlong lStack_198;
  ulonglong uStack_190;
  undefined4 uStack_188;
  float fStack_184;
  int iStack_180;
  int iStack_17c;
  longlong *plStack_178;
  ulonglong uStack_170;
  longlong *plStack_168;
  byte *pbStack_160;
  longlong *plStack_158;
  byte *pbStack_150;
  undefined1 auStack_148 [24];
  byte *pbStack_130;
  undefined1 auStack_128 [16];
  byte *pbStack_110;
  byte *pbStack_108;
  byte *pbStack_100;
  char cStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  plVar21 = param_2;
  cStack_f1 = pdb_140e94b40();
  if (cStack_f1 == '\0') {
    uStack_308 = 0;
    goto LAB_1421a0262;
  }
  puVar32 = (undefined8 *)0x58;
  plStack_178 = param_1;
  lVar19 = pdb_1421a1aa0(0x58);
  piVar31 = (int *)&UNK_14346c0a0;
  if (lVar19 == 1) {
    if (plVar21 < (longlong *)0x59) {
      uVar20 = pdb_1421a1aa0(plVar21);
      if ((uVar20 & 1) != 0) {
        if (0x58 < (longlong)plVar21 + 2U) goto LAB_1421a1614;
        puVar32 = (undefined8 *)(0x56 - (longlong)plVar21);
        piVar31 = (int *)((longlong)plVar21 + 0x14346c0a2);
      }
      goto LAB_1421a0130;
    }
  }
  else {
LAB_1421a0130:
    puVar35 = &UNK_14346c03a;
    pauVar41 = (undefined1 (*) [16])&UNK_14346bff0;
    do {
      bVar46 = puVar35[-1];
      uVar18 = (uint)(char)bVar46;
      if ((char)bVar46 < '\0') {
        bVar1 = puVar35[-2];
        if ((char)bVar1 < -0x40) {
          bVar2 = puVar35[-3];
          if ((char)bVar2 < -0x40) {
            pbVar29 = puVar35 + -4;
            puVar35 = puVar35 + -4;
            uVar18 = bVar2 & 0x3f | (*pbVar29 & 7) << 6;
          }
          else {
            puVar35 = puVar35 + -3;
            uVar18 = bVar2 & 0xf;
          }
          uVar18 = bVar1 & 0x3f | uVar18 << 6;
        }
        else {
          puVar35 = puVar35 + -2;
          uVar18 = bVar1 & 0x1f;
        }
        uVar18 = (uint)(bVar46 & 0x3f) | uVar18 << 6;
        if (uVar18 != 0x5c) goto LAB_1421a01b4;
LAB_1421a01cd:
        if ((undefined *)0x4a < puVar35 + -0x14346bfef) goto LAB_1421a15d1;
        puVar42 = (undefined8 *)(0x4a - (longlong)(puVar35 + -0x14346bfef));
        pauVar41 = (undefined1 (*) [16])(puVar35 + 1);
        goto LAB_1421a01f0;
      }
      puVar35 = puVar35 + -1;
      if (uVar18 == 0x5c) goto LAB_1421a01cd;
LAB_1421a01b4:
      if (uVar18 == 0x2f) goto LAB_1421a01cd;
    } while (puVar35 != &UNK_14346bff0);
    puVar42 = (undefined8 *)0x4a;
LAB_1421a01f0:
    plVar21 = (longlong *)pdb_140e97000();
    if ((char)plVar21[0xd] != '\x01') goto LAB_1421a159d;
    do {
      if (*plVar21 == 0) {
        *plVar21 = -1;
        plStack_158 = plVar21;
        uStack_300 = pdb_140e94f10(plVar21 + 1,piVar31,puVar32,pauVar41,puVar42,1,0);
        *plStack_158 = *plStack_158 + 1;
        uStack_308 = 1;
        param_1 = plStack_178;
        uStack_280 = uStack_300;
LAB_1421a0262:
        pdb_142196ce0(&pauStack_2b8,param_3);
        uStack_188 = *(undefined4 *)((longlong)param_5 + 0x1c);
        puStack_1e8 = (undefined4 *)param_5[2];
        *puStack_1e8 = uStack_188;
        plStack_168 = (longlong *)*param_5;
        pdb_1421a7f60(plStack_168,&pauStack_2b8);
        pdb_1421a7b70(param_7,&pauStack_2b8);
        puVar3 = *(ulonglong **)param_4;
        lVar19 = *(longlong *)(param_4 + 2);
        uVar20 = *puVar3;
        uVar23 = 0;
        uVar22 = uVar20 - *(ulonglong *)(lVar19 + 0x18);
        if (uVar20 < *(ulonglong *)(lVar19 + 0x18)) {
          uVar22 = uVar23;
        }
        uVar28 = uVar20 - *(ulonglong *)(lVar19 + 0x38);
        if (uVar20 < *(ulonglong *)(lVar19 + 0x38)) {
          uVar28 = uVar23;
        }
        uVar20 = *(ulonglong *)(lVar19 + 0x30);
        uVar39 = uVar20 - uVar28;
        if (uVar20 < uVar28) {
          uVar39 = uVar23;
        }
        uVar4 = *(ulonglong *)(lVar19 + 0x10);
        uVar40 = uVar4 - uVar22;
        if (uVar4 < uVar22) {
          uVar40 = uVar23;
        }
        uVar23 = *(ulonglong *)(lVar19 + 0x40);
        *puVar3 = uVar23 - (uVar40 + uVar39);
        if (uVar4 >= uVar22 && uVar4 - uVar22 != 0 || uVar20 >= uVar28 && uVar20 - uVar28 != 0) {
          *puVar3 = uVar23;
          *puStack_1e8 = uStack_188;
          plStack_168[2] = 0;
          param_7[2] = 0;
        }
        fVar13 = _DAT_143356db4;
        fVar12 = _DAT_143288b1c;
        fVar11 = _DAT_142e3c620;
        fVar10 = _DAT_142e3787c;
        fVar9 = _DAT_142e36f28;
        plStack_178 = (longlong *)lStack_2a0;
        auVar51 = *pauStack_2b8;
        pauVar34 = pauStack_2b8 + 1;
        uVar18 = ~(uint)(ushort)((ushort)(SUB161(auVar51 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar51 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar51 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar51 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar51 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar51 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar51 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar51 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar51 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar51 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar51 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar51 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar51 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar51 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar51 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar51[0xf] >> 7) << 0xf);
        plStack_158 = (longlong *)*param_1;
        lStack_198 = *param_2;
        lStack_1a0 = param_2[1];
        plStack_288 = plStack_158 + 4;
        iVar47 = -(uint)(CONCAT13(unaff_XMM15_Bd,
                                  CONCAT12(unaff_XMM15_Bc,CONCAT11(unaff_XMM15_Bb,unaff_XMM15_Ba)))
                        == CONCAT13(unaff_XMM15_Bd,
                                    CONCAT12(unaff_XMM15_Bc,CONCAT11(unaff_XMM15_Bb,unaff_XMM15_Ba))
                                   ));
        unaff_XMM15_Ba = (char)iVar47;
        unaff_XMM15_Bb = (char)((uint)iVar47 >> 8);
        unaff_XMM15_Bc = (char)((uint)iVar47 >> 0x10);
        unaff_XMM15_Bd = (char)((uint)iVar47 >> 0x18);
        iVar47 = -(uint)(CONCAT13(unaff_XMM15_Bh,
                                  CONCAT12(unaff_XMM15_Bg,CONCAT11(unaff_XMM15_Bf,unaff_XMM15_Be)))
                        == CONCAT13(unaff_XMM15_Bh,
                                    CONCAT12(unaff_XMM15_Bg,CONCAT11(unaff_XMM15_Bf,unaff_XMM15_Be))
                                   ));
        unaff_XMM15_Be = (char)iVar47;
        unaff_XMM15_Bf = (char)((uint)iVar47 >> 8);
        unaff_XMM15_Bg = (char)((uint)iVar47 >> 0x10);
        unaff_XMM15_Bh = (char)((uint)iVar47 >> 0x18);
        iVar47 = -(uint)(CONCAT13(unaff_XMM15_Bl,
                                  CONCAT12(unaff_XMM15_Bk,CONCAT11(unaff_XMM15_Bj,unaff_XMM15_Bi)))
                        == CONCAT13(unaff_XMM15_Bl,
                                    CONCAT12(unaff_XMM15_Bk,CONCAT11(unaff_XMM15_Bj,unaff_XMM15_Bi))
                                   ));
        unaff_XMM15_Bi = (char)iVar47;
        unaff_XMM15_Bj = (char)((uint)iVar47 >> 8);
        unaff_XMM15_Bk = (char)((uint)iVar47 >> 0x10);
        unaff_XMM15_Bl = (char)((uint)iVar47 >> 0x18);
        iVar47 = -(uint)(CONCAT13(unaff_XMM15_Bp,
                                  CONCAT12(unaff_XMM15_Bo,CONCAT11(unaff_XMM15_Bn,unaff_XMM15_Bm)))
                        == CONCAT13(unaff_XMM15_Bp,
                                    CONCAT12(unaff_XMM15_Bo,CONCAT11(unaff_XMM15_Bn,unaff_XMM15_Bm))
                                   ));
        unaff_XMM15_Bm = (char)iVar47;
        unaff_XMM15_Bn = (char)((uint)iVar47 >> 8);
        unaff_XMM15_Bo = (char)((uint)iVar47 >> 0x10);
        unaff_XMM15_Bp = (char)((uint)iVar47 >> 0x18);
        pauVar41 = pauStack_2b8;
LAB_1421a03f0:
        if (plStack_178 != (longlong *)0x0) {
          if ((short)uVar18 == 0) {
            do {
              auVar51 = *pauVar34;
              pauVar41 = pauVar41 + -8;
              pauVar34 = pauVar34 + 1;
              uVar18 = (ushort)((ushort)(SUB161(auVar51 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar51 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar51 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar51 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar51 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar51 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar51 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar51 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar51 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar51 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar51 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar51 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar51 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar51 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar51 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar51[0xf] >> 7) << 0xf) ^ 0xffff;
            } while (uVar18 == 0);
          }
          iVar47 = 0;
          for (uVar30 = uVar18; (uVar30 & 1) == 0; uVar30 = uVar30 >> 1 | 0x80000000) {
            iVar47 = iVar47 + 1;
          }
          uVar20 = *(ulonglong *)((longlong)pauVar41 + (-8 - (ulonglong)(uint)(iVar47 << 3)));
          uVar22 = pdb_140b54b40(plStack_158,uVar20);
          uVar18 = uVar18 - 1 & uVar18;
          plStack_178 = (longlong *)((longlong)plStack_178 + -1);
          if ((((((uVar22 & 0xffffffff) != 0) &&
                (uVar23 = uVar22 & 0xffffffff ^ 0xffffffff,
                uVar23 < *(ulonglong *)(lStack_1a0 + 0x10))) &&
               (piVar31 = (int *)(uVar23 * 0x18 + *(longlong *)(lStack_1a0 + 8)),
               piVar31[4] == (int)(uVar22 >> 0x20))) &&
              ((*piVar31 != 0 &&
               (uVar22 = *(ulonglong *)(piVar31 + 2),
               (uVar22 & 0xffffffff) < *(ulonglong *)(lStack_198 + 0x38))))) &&
             ((*(ulonglong *)(*(longlong *)(lStack_198 + 0x28) + (uVar22 >> 6 & 0x3ffffff) * 8) >>
               (uVar22 & 0x3f) & 1) != 0)) {
            if (*(ulonglong *)(lStack_198 + 0x110) <
                *(ulonglong *)(*(longlong *)(lStack_1a0 + 0x1a0) + 0x40 + (uVar22 >> 0x20) * 0x48))
            {
              lVar19 = *(longlong *)(lStack_1a0 + 0x1a0) + (uVar22 >> 0x20) * 0x48;
              uVar22 = *(ulonglong *)
                        (*(longlong *)(lVar19 + 0x38) + *(ulonglong *)(lStack_198 + 0x110) * 8);
              if (uVar22 != 0) {
                lStack_1e0 = *(longlong *)(*(longlong *)(lVar19 + 0x18) + 0x10 + ~uVar22 * 0x30);
                goto LAB_1421a052f;
              }
            }
            lStack_1e0 = 0;
LAB_1421a052f:
            lStack_1e0 = (ulonglong)(uint)~piVar31[1] * 0x58 + lStack_1e0;
            pauVar33 = (undefined1 (*) [16])*plStack_158;
            lStack_258 = plStack_158[3];
            auVar51 = *pauVar33;
            pauVar43 = pauVar33 + 1;
            uVar30 = ~(uint)(ushort)((ushort)(SUB161(auVar51 >> 7,0) & 1) |
                                     (ushort)(SUB161(auVar51 >> 0xf,0) & 1) << 1 |
                                     (ushort)(SUB161(auVar51 >> 0x17,0) & 1) << 2 |
                                     (ushort)(SUB161(auVar51 >> 0x1f,0) & 1) << 3 |
                                     (ushort)(SUB161(auVar51 >> 0x27,0) & 1) << 4 |
                                     (ushort)(SUB161(auVar51 >> 0x2f,0) & 1) << 5 |
                                     (ushort)(SUB161(auVar51 >> 0x37,0) & 1) << 6 |
                                     (ushort)(SUB161(auVar51 >> 0x3f,0) & 1) << 7 |
                                     (ushort)(SUB161(auVar51 >> 0x47,0) & 1) << 8 |
                                     (ushort)(SUB161(auVar51 >> 0x4f,0) & 1) << 9 |
                                     (ushort)(SUB161(auVar51 >> 0x57,0) & 1) << 10 |
                                     (ushort)(SUB161(auVar51 >> 0x5f,0) & 1) << 0xb |
                                     (ushort)(SUB161(auVar51 >> 0x67,0) & 1) << 0xc |
                                     (ushort)(SUB161(auVar51 >> 0x6f,0) & 1) << 0xd |
                                     (ushort)(SUB161(auVar51 >> 0x77,0) & 1) << 0xe |
                                    (ushort)(byte)(auVar51[0xf] >> 7) << 0xf);
LAB_1421a05e0:
            if (lStack_258 != 0) {
              if ((short)uVar30 == 0) {
                do {
                  auVar51 = *pauVar43;
                  pauVar33 = pauVar33 + -0x2b0;
                  pauVar43 = pauVar43 + 1;
                  uVar30 = (ushort)((ushort)(SUB161(auVar51 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar51 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar51 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar51 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar51 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar51 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar51 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar51 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar51 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar51 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar51 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar51 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar51 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar51 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar51 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar51[0xf] >> 7) << 0xf) ^ 0xffff;
                } while (uVar30 == 0);
              }
              uVar45 = 0;
              for (uVar7 = uVar30; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                uVar45 = uVar45 + 1;
              }
              uVar30 = uVar30 - 1 & uVar30;
              lStack_258 = lStack_258 + -1;
              uStack_2c0 = *(ulonglong *)pauVar33[(ulonglong)uVar45 * -0x2b + -0x2b];
              uStack_170 = uStack_2c0;
              if (uVar20 != uStack_2c0) {
                uStack_170 = uStack_2c0;
                if ((uStack_2c0 < uVar20) && (lStack_2a0 != 0)) {
                  uVar22 = pdb_14216e010(auStack_298,&uStack_2c0);
                  bVar46 = (byte)(uVar22 >> 0x39);
                  auVar51 = ZEXT216(CONCAT11(bVar46,bVar46));
                  auVar51 = pshuflw(auVar51,auVar51,0);
                  lVar19 = 0;
                  while( true ) {
                    uVar22 = uVar22 & uStack_2b0;
                    auVar52 = *(undefined1 (*) [16])(*pauStack_2b8 + uVar22);
                    auVar58[0] = -(auVar52[0] == auVar51[0]);
                    auVar58[1] = -(auVar52[1] == auVar51[1]);
                    auVar58[2] = -(auVar52[2] == auVar51[2]);
                    auVar58[3] = -(auVar52[3] == auVar51[3]);
                    auVar58[4] = -(auVar52[4] == auVar51[4]);
                    auVar58[5] = -(auVar52[5] == auVar51[5]);
                    auVar58[6] = -(auVar52[6] == auVar51[6]);
                    auVar58[7] = -(auVar52[7] == auVar51[7]);
                    auVar58[8] = -(auVar52[8] == auVar51[0]);
                    auVar58[9] = -(auVar52[9] == auVar51[1]);
                    auVar58[10] = -(auVar52[10] == auVar51[2]);
                    auVar58[0xb] = -(auVar52[0xb] == auVar51[3]);
                    auVar58[0xc] = -(auVar52[0xc] == auVar51[4]);
                    auVar58[0xd] = -(auVar52[0xd] == auVar51[5]);
                    auVar58[0xe] = -(auVar52[0xe] == auVar51[6]);
                    auVar58[0xf] = -(auVar52[0xf] == auVar51[7]);
                    uVar38 = (ushort)(SUB161(auVar58 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar58 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar58 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar58 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar58 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar58 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar58 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar58 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar58 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar58 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar58 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar58 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar58 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar58[0xf] >> 7) << 0xf;
                    uVar45 = (uint)uVar38;
                    while (uVar38 != 0) {
                      uVar7 = 0;
                      for (uVar6 = uVar45; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                        uVar7 = uVar7 + 1;
                      }
                      if (uStack_170 ==
                          *(ulonglong *)
                           ((longlong)pauStack_2b8 + (uVar7 + uVar22 & uStack_2b0) * -8 + -8))
                      goto LAB_1421a05e0;
                      uVar38 = (ushort)(uVar45 - 1) & (ushort)uVar45;
                      uVar45 = CONCAT22((short)(uVar45 - 1 >> 0x10),uVar38);
                    }
                    auVar53[0] = -(auVar52[0] == unaff_XMM15_Ba);
                    auVar53[1] = -(auVar52[1] == unaff_XMM15_Bb);
                    auVar53[2] = -(auVar52[2] == unaff_XMM15_Bc);
                    auVar53[3] = -(auVar52[3] == unaff_XMM15_Bd);
                    auVar53[4] = -(auVar52[4] == unaff_XMM15_Be);
                    auVar53[5] = -(auVar52[5] == unaff_XMM15_Bf);
                    auVar53[6] = -(auVar52[6] == unaff_XMM15_Bg);
                    auVar53[7] = -(auVar52[7] == unaff_XMM15_Bh);
                    auVar53[8] = -(auVar52[8] == unaff_XMM15_Bi);
                    auVar53[9] = -(auVar52[9] == unaff_XMM15_Bj);
                    auVar53[10] = -(auVar52[10] == unaff_XMM15_Bk);
                    auVar53[0xb] = -(auVar52[0xb] == unaff_XMM15_Bl);
                    auVar53[0xc] = -(auVar52[0xc] == unaff_XMM15_Bm);
                    auVar53[0xd] = -(auVar52[0xd] == unaff_XMM15_Bn);
                    auVar53[0xe] = -(auVar52[0xe] == unaff_XMM15_Bo);
                    auVar53[0xf] = -(auVar52[0xf] == unaff_XMM15_Bp);
                    if ((((((((((((((((SUB161(auVar53 >> 7,0) & 1) != 0 ||
                                     (SUB161(auVar53 >> 0xf,0) & 1) != 0) ||
                                    (SUB161(auVar53 >> 0x17,0) & 1) != 0) ||
                                   (SUB161(auVar53 >> 0x1f,0) & 1) != 0) ||
                                  (SUB161(auVar53 >> 0x27,0) & 1) != 0) ||
                                 (SUB161(auVar53 >> 0x2f,0) & 1) != 0) ||
                                (SUB161(auVar53 >> 0x37,0) & 1) != 0) ||
                               (SUB161(auVar53 >> 0x3f,0) & 1) != 0) ||
                              (SUB161(auVar53 >> 0x47,0) & 1) != 0) ||
                             (SUB161(auVar53 >> 0x4f,0) & 1) != 0) ||
                            (SUB161(auVar53 >> 0x57,0) & 1) != 0) ||
                           (SUB161(auVar53 >> 0x5f,0) & 1) != 0) ||
                          (SUB161(auVar53 >> 0x67,0) & 1) != 0) ||
                         (SUB161(auVar53 >> 0x6f,0) & 1) != 0) ||
                        (SUB161(auVar53 >> 0x77,0) & 1) != 0) || auVar53[0xf] < '\0') break;
                    uVar22 = uVar22 + lVar19 + 0x10;
                    lVar19 = lVar19 + 0x10;
                  }
                }
                uVar22 = pdb_140b54b40(plStack_158,uStack_170);
                if (((((uVar22 & 0xffffffff) != 0) &&
                     (uVar23 = uVar22 & 0xffffffff ^ 0xffffffff,
                     uVar23 < *(ulonglong *)(lStack_1a0 + 0x10))) &&
                    (piVar31 = (int *)(uVar23 * 0x18 + *(longlong *)(lStack_1a0 + 8)),
                    piVar31[4] == (int)(uVar22 >> 0x20))) &&
                   (((*piVar31 != 0 &&
                     (uVar22 = *(ulonglong *)(piVar31 + 2),
                     (uVar22 & 0xffffffff) < *(ulonglong *)(lStack_198 + 0x38))) &&
                    ((*(ulonglong *)
                       (*(longlong *)(lStack_198 + 0x28) + (uVar22 >> 6 & 0x3ffffff) * 8) >>
                      (uVar22 & 0x3f) & 1) != 0)))) {
                  if (*(ulonglong *)(lStack_198 + 0x110) <
                      *(ulonglong *)
                       (*(longlong *)(lStack_1a0 + 0x1a0) + 0x40 + (uVar22 >> 0x20) * 0x48)) {
                    lVar19 = *(longlong *)(lStack_1a0 + 0x1a0) + (uVar22 >> 0x20) * 0x48;
                    uVar22 = *(ulonglong *)
                              (*(longlong *)(lVar19 + 0x38) + *(ulonglong *)(lStack_198 + 0x110) * 8
                              );
                    if (uVar22 == 0) goto LAB_1421a078e;
                    auStack_128._0_8_ =
                         *(longlong *)(*(longlong *)(lVar19 + 0x18) + 0x10 + ~uVar22 * 0x30);
                  }
                  else {
LAB_1421a078e:
                    auStack_128._0_8_ = 0;
                  }
                  uStack_190 = (ulonglong)(uint)piVar31[1];
                  uVar15 = pdb_140b77b50(lStack_1e0);
                  auStack_148[0] = uVar15;
                  auStack_128._0_8_ = auStack_128._0_8_ + (ulonglong)~(uint)uStack_190 * 0x58;
                  cVar16 = pdb_140b77b50();
                  if (auStack_148[0] == '\0') {
                    uVar22 = uStack_170;
                    lVar19 = lStack_1e0;
                    uStack_170 = uVar20;
                    if (cVar16 == '\0') goto LAB_1421a05e0;
                  }
                  else {
                    lVar19 = auStack_128._0_8_;
                    auStack_128._0_8_ = lStack_1e0;
                    uVar22 = uVar20;
                    if (cVar16 != '\0') goto LAB_1421a05e0;
                  }
                  auStack_148._0_8_ = lVar19;
                  fStack_25c = *(float *)(auStack_128._0_8_ + 0x4c);
                  fStack_260 = fStack_25c + fVar12;
                  uStack_2c8 = uVar22;
                  uStack_190 = uVar22;
                  fStack_184 = fStack_260;
                  if (plStack_158[3] != 0) {
                    uVar22 = pdb_14216e010(plStack_288,&uStack_2c8);
                    pbStack_110 = (byte *)*plStack_158;
                    bVar46 = (byte)(uVar22 >> 0x39);
                    auVar51 = ZEXT216(CONCAT11(bVar46,bVar46));
                    auVar51 = pshuflw(auVar51,auVar51,0);
                    lVar19 = 0;
                    while( true ) {
                      uVar22 = uVar22 & plStack_158[1];
                      auVar52 = *(undefined1 (*) [16])(pbStack_110 + uVar22);
                      auVar59[0] = -(auVar52[0] == auVar51[0]);
                      auVar59[1] = -(auVar52[1] == auVar51[1]);
                      auVar59[2] = -(auVar52[2] == auVar51[2]);
                      auVar59[3] = -(auVar52[3] == auVar51[3]);
                      auVar59[4] = -(auVar52[4] == auVar51[4]);
                      auVar59[5] = -(auVar52[5] == auVar51[5]);
                      auVar59[6] = -(auVar52[6] == auVar51[6]);
                      auVar59[7] = -(auVar52[7] == auVar51[7]);
                      auVar59[8] = -(auVar52[8] == auVar51[0]);
                      auVar59[9] = -(auVar52[9] == auVar51[1]);
                      auVar59[10] = -(auVar52[10] == auVar51[2]);
                      auVar59[0xb] = -(auVar52[0xb] == auVar51[3]);
                      auVar59[0xc] = -(auVar52[0xc] == auVar51[4]);
                      auVar59[0xd] = -(auVar52[0xd] == auVar51[5]);
                      auVar59[0xe] = -(auVar52[0xe] == auVar51[6]);
                      auVar59[0xf] = -(auVar52[0xf] == auVar51[7]);
                      uVar38 = (ushort)(SUB161(auVar59 >> 7,0) & 1) |
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
                               (ushort)(auVar59[0xf] >> 7) << 0xf;
                      uVar45 = (uint)uVar38;
                      while (uVar38 != 0) {
                        uVar7 = 0;
                        for (uVar6 = uVar45; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                          uVar7 = uVar7 + 1;
                        }
                        pbStack_100 = (byte *)((uVar7 + uVar22 & plStack_158[1]) * -0x2b0);
                        if (uStack_190 ==
                            *(ulonglong *)(pbStack_110 + -0x2b0 + (longlong)pbStack_100)) {
                          pdb_140b77620(&iStack_364,auStack_148._0_8_,fStack_184);
                          if (iStack_364 == 2) goto LAB_1421a05e0;
                          uStack_1b4 = uStack_350;
                          uStack_1c4 = (undefined4)uStack_360;
                          uStack_1c0 = (undefined4)((ulonglong)uStack_360 >> 0x20);
                          uStack_1bc = (undefined4)uStack_358;
                          uStack_1b8 = (undefined4)((ulonglong)uStack_358 >> 0x20);
                          iStack_1c8 = iStack_364;
                          pdb_140a85120(&iStack_21c,&iStack_1c8);
                          pdb_140a85120(auStack_380,auStack_128._0_8_ + 8);
                          auVar51._4_4_ = uStack_20c;
                          auVar51._0_4_ = uStack_210;
                          auVar51._8_8_ = uStack_208;
                          auStack_338 = auVar51._4_12_;
                          lStack_200 = 0;
                          pbStack_1f8 = (byte *)0x4;
                          pbStack_1f0 = (byte *)0x0;
                          pdb_1410c8bf0(auStack_380,auStack_348,1,&lStack_200);
                          if (pbStack_1f0 == (byte *)0x0) goto LAB_1421a0fe4;
                          pbStack_110 = pbStack_110 + (longlong)pbStack_100 + -0x2a8;
                          pbStack_150 = pbStack_1f0;
                          pbStack_108 = pbStack_1f8 + (longlong)pbStack_1f0 * 0xc;
                          lVar19 = 0;
                          uVar22 = 0;
                          goto LAB_1421a0a4e;
                        }
                        uVar38 = (ushort)(uVar45 - 1) & (ushort)uVar45;
                        uVar45 = CONCAT22((short)(uVar45 - 1 >> 0x10),uVar38);
                      }
                      auVar54[0] = -(auVar52[0] == unaff_XMM15_Ba);
                      auVar54[1] = -(auVar52[1] == unaff_XMM15_Bb);
                      auVar54[2] = -(auVar52[2] == unaff_XMM15_Bc);
                      auVar54[3] = -(auVar52[3] == unaff_XMM15_Bd);
                      auVar54[4] = -(auVar52[4] == unaff_XMM15_Be);
                      auVar54[5] = -(auVar52[5] == unaff_XMM15_Bf);
                      auVar54[6] = -(auVar52[6] == unaff_XMM15_Bg);
                      auVar54[7] = -(auVar52[7] == unaff_XMM15_Bh);
                      auVar54[8] = -(auVar52[8] == unaff_XMM15_Bi);
                      auVar54[9] = -(auVar52[9] == unaff_XMM15_Bj);
                      auVar54[10] = -(auVar52[10] == unaff_XMM15_Bk);
                      auVar54[0xb] = -(auVar52[0xb] == unaff_XMM15_Bl);
                      auVar54[0xc] = -(auVar52[0xc] == unaff_XMM15_Bm);
                      auVar54[0xd] = -(auVar52[0xd] == unaff_XMM15_Bn);
                      auVar54[0xe] = -(auVar52[0xe] == unaff_XMM15_Bo);
                      auVar54[0xf] = -(auVar52[0xf] == unaff_XMM15_Bp);
                      if ((((((((((((((((SUB161(auVar54 >> 7,0) & 1) != 0 ||
                                       (SUB161(auVar54 >> 0xf,0) & 1) != 0) ||
                                      (SUB161(auVar54 >> 0x17,0) & 1) != 0) ||
                                     (SUB161(auVar54 >> 0x1f,0) & 1) != 0) ||
                                    (SUB161(auVar54 >> 0x27,0) & 1) != 0) ||
                                   (SUB161(auVar54 >> 0x2f,0) & 1) != 0) ||
                                  (SUB161(auVar54 >> 0x37,0) & 1) != 0) ||
                                 (SUB161(auVar54 >> 0x3f,0) & 1) != 0) ||
                                (SUB161(auVar54 >> 0x47,0) & 1) != 0) ||
                               (SUB161(auVar54 >> 0x4f,0) & 1) != 0) ||
                              (SUB161(auVar54 >> 0x57,0) & 1) != 0) ||
                             (SUB161(auVar54 >> 0x5f,0) & 1) != 0) ||
                            (SUB161(auVar54 >> 0x67,0) & 1) != 0) ||
                           (SUB161(auVar54 >> 0x6f,0) & 1) != 0) ||
                          (SUB161(auVar54 >> 0x77,0) & 1) != 0) || auVar54[0xf] < '\0') break;
                      uVar22 = uVar22 + lVar19 + 0x10;
                      lVar19 = lVar19 + 0x10;
                    }
                  }
                }
              }
              goto LAB_1421a05e0;
            }
          }
          goto LAB_1421a03f0;
        }
        puVar32 = (undefined8 *)param_7[1];
        puVar42 = puVar32 + param_7[2] * 5;
        uVar18 = *(uint *)((longlong)param_6 + 0x1c);
        param_2 = (longlong *)(ulonglong)uVar18;
        param_3 = *param_6;
        param_4 = (uint *)param_6[2];
        piVar31 = &iStack_1c8;
        plStack_178 = (undefined8 *)0x0;
        for (; puVar32 != puVar42; puVar32 = puVar32 + 5) {
          *param_4 = uVar18;
          iStack_1c8 = (int)puVar32[2];
          uStack_1c4 = (undefined4)((ulonglong)puVar32[2] >> 0x20);
          uStack_1c0 = (undefined4)puVar32[3];
          uStack_1bc = (undefined4)((ulonglong)puVar32[3] >> 0x20);
          pdb_140c2bb20(param_3,*puVar32,piVar31,*(undefined1 *)(puVar32 + 4));
        }
        if (uStack_2b0 != 0) {
          uVar20 = uStack_2b0 * 8 + 0x17 & 0xfffffffffffffff0;
          uVar22 = uStack_2b0 + uVar20 + 0x11;
          if (uVar22 != 0) {
            pub_1406abac0((byte *)((longlong)pauStack_2b8 - uVar20),uVar22,0x10);
          }
        }
        if (cStack_f1 == '\0') {
          return;
        }
        plVar21 = (longlong *)pdb_140e97000();
        if (((char)plVar21[0xd] != '\x01') &&
           (plVar21 = (longlong *)pdb_142e16b00(plVar21,0), plVar21 == (longlong *)0x0)) break;
        if (*plVar21 == 0) {
          *plVar21 = -1;
          plStack_178 = plVar21;
          pdb_140e95370(plVar21 + 1,uStack_280);
          *plStack_178 = *plStack_178 + 1;
          return;
        }
      }
      plVar21 = (longlong *)pdb_142dc8090(&UNK_14328b468);
LAB_1421a159d:
      plVar21 = (longlong *)pdb_142e16b00(plVar21,0);
    } while (plVar21 != (longlong *)0x0);
    pdb_142dc7890(&UNK_14328b3f8);
LAB_1421a15d1:
    pdb_142dc8070(&UNK_14346bff0,0x4a);
  }
  pdb_142dc8070(&UNK_14346c0a0,0x58,0);
LAB_1421a1614:
  pdb_142dc8070(&UNK_14346c0a0,0x58);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
  while( true ) {
    uVar22 = uVar22 + 1;
    lVar19 = lVar19 + 0xc;
    if ((longlong)pbStack_1f0 * 0xc == lVar19) break;
LAB_1421a0a4e:
    if (*(int *)(pbStack_1f8 + lVar19) == 0) {
      pbStack_160 = pbStack_1f8 + 0xc;
      bVar44 = false;
      auStack_128._0_8_ = pbStack_108;
      auStack_1d8 = (undefined1  [8])pbStack_1f8;
      pbStack_130 = pbStack_1f8;
      pbStack_100 = pbStack_1f0;
      do {
        pbVar29 = (byte *)auStack_128._0_8_;
        uVar50 = uStack_248;
LAB_1421a0da7:
        bVar17 = bVar44;
        if (pbStack_100 == (byte *)0x0) goto LAB_1421a0a65;
        if (uVar22 == 0) {
          auVar25 = (undefined1  [8])pbStack_130;
          if (pbStack_130 == pbVar29) {
            pbVar29 = pbStack_108;
            auVar25 = auStack_1d8;
          }
LAB_1421a0de9:
          pbStack_130 = (byte *)((longlong)auVar25 + 0xc);
          auStack_128._0_8_ = pbVar29;
          auVar36 = auVar25;
        }
        else {
          uVar23 = ((ulonglong)((longlong)pbVar29 - (longlong)pbStack_130) >> 2) *
                   -0x5555555555555555;
          if (uVar22 < uVar23) {
            uVar23 = uVar22;
          }
          pbVar26 = (byte *)(uVar22 - uVar23);
          auVar36 = auStack_1d8;
          uVar50 = uStack_248;
          if ((byte *)(uVar22 - uVar23) == (byte *)0x0) {
            auVar25 = (undefined1  [8])(pbStack_130 + uVar23 * 0xc);
            pbStack_130 = pbStack_160;
            auStack_128._0_8_ = pbStack_108;
            if (auVar25 != (undefined1  [8])pbVar29) goto LAB_1421a0f31;
          }
          else {
            do {
              pbVar37 = pbVar26;
              pbVar29 = pbStack_150;
              if (pbVar37 < pbStack_150) {
                pbVar29 = pbVar37;
              }
              pbVar26 = pbVar37 + -(longlong)pbVar29;
            } while (pbVar37 + -(longlong)pbVar29 != (byte *)0x0);
            pbStack_130 = pbStack_160;
            auStack_128._0_8_ = pbStack_108;
            if (pbVar37 < pbStack_150) {
              auVar25 = (undefined1  [8])((longlong)auStack_1d8 + (longlong)pbVar29 * 0xc);
              pbVar29 = pbStack_108;
LAB_1421a0f31:
              auStack_128._0_8_ = pbStack_108;
              goto LAB_1421a0de9;
            }
          }
        }
        pbStack_100 = pbStack_100 + -1;
        if (*(int *)auVar36 != 0) {
          uVar22 = 0;
          pbVar29 = (byte *)auStack_128._0_8_;
          bVar44 = false;
          if (bVar17) {
            iStack_1c8 = (int)uVar50;
            uStack_1c4 = (undefined4)((ulonglong)uVar50 >> 0x20);
            uStack_1c0 = (undefined4)*(undefined8 *)((longlong)auVar36 + 4);
            uStack_1bc = (undefined4)((ulonglong)*(undefined8 *)((longlong)auVar36 + 4) >> 0x20);
            pdb_142198fd0(&uStack_2f8,pbStack_110,&iStack_1c8,&fStack_260);
            uVar22 = 0;
            pbVar29 = (byte *)auStack_128._0_8_;
            uVar50 = uStack_248;
            bVar44 = false;
            if ((char)uStack_2e8 != '\x05') {
              auStack_238._0_8_ = param_7[2];
              if (param_7[2] == *param_7) {
                pdb_142d7ede0(param_7);
              }
              lVar19 = param_7[1];
              *(ulonglong *)(lVar19 + auStack_238._0_8_ * 0x28) = uStack_190;
              *(ulonglong *)(lVar19 + 8 + auStack_238._0_8_ * 0x28) = uStack_170;
              puVar32 = (undefined8 *)(lVar19 + 0x10 + auStack_238._0_8_ * 0x28);
              *puVar32 = uStack_2f8;
              puVar32[1] = uStack_2f0;
              *(undefined4 *)(lVar19 + 0x20 + auStack_238._0_8_ * 0x28) = uStack_2e8;
              param_7[2] = auStack_238._0_8_ + 1;
              uVar22 = 0;
              pbVar29 = (byte *)auStack_128._0_8_;
              uVar50 = uStack_248;
              bVar44 = false;
            }
          }
          goto LAB_1421a0da7;
        }
        uStack_248 = *(undefined8 *)((longlong)auVar36 + 4);
        uStack_240 = 0;
        bVar44 = true;
        uVar22 = 0;
      } while( true );
    }
  }
LAB_1421a0a65:
  cVar16 = pdb_140b77b60(auStack_148._0_8_);
  if (cVar16 == '\0') {
    pbStack_160 = pbStack_1f0;
    if (pbStack_1f0 != (byte *)0x0) {
      pbStack_100 = pbStack_1f8;
      pbStack_150 = pbStack_1f8 + (longlong)pbStack_1f0 * 0xc;
      lVar19 = 0;
      uVar22 = 0;
      do {
        if (*(int *)(pbStack_1f8 + lVar19) == 1) {
          pbStack_250 = pbStack_1f8 + 0xc;
          bVar44 = false;
          pbStack_108 = pbStack_1f8;
          pbStack_130 = pbStack_1f0;
          pbStack_110 = pbStack_150;
          goto LAB_1421a1053;
        }
        uVar22 = uVar22 + 1;
        lVar19 = lVar19 + 0xc;
      } while ((longlong)pbStack_1f0 * 0xc != lVar19);
    }
  }
  else {
    pdb_140b77190(acStack_320,auStack_148._0_8_);
    if ((iStack_21c == 1) && (acStack_320[0] != '\0')) {
      uStack_268 = uStack_208;
      pbStack_110 = pbStack_318;
      pbStack_108 = pbStack_310;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = auStack_128._8_8_;
      auStack_128 = auVar8 << 0x40;
      while (uVar50 = auStack_128._0_8_, (ulonglong)auStack_128._0_8_ < (byte *)0x4) {
        auStack_128._0_8_ = (byte *)(auStack_128._0_8_ + 1);
        if (((byte *)uVar50 != pbStack_110) && ((byte *)uVar50 != pbStack_108)) {
          auStack_148._0_8_ = uVar50;
          iVar47 = pdb_140df3e10(auStack_278);
          pbStack_130 = (byte *)CONCAT44(pbStack_130._4_4_,auVar51._0_4_);
          pbStack_100._0_4_ = iVar47;
          uStack_1c0 = pdb_140df3e10(auStack_278,auStack_148._0_8_ + 1);
          iStack_1c8 = (int)pbStack_100;
          uStack_1c4 = pbStack_130._0_4_;
          uStack_1bc = auVar51._0_4_;
          uVar48 = pdb_140df0700(auStack_278,auStack_148._0_8_);
          auStack_148._0_4_ = uVar48;
          uVar48 = pdb_140df0700(auStack_278,auStack_128._0_8_);
          pbStack_100 = (byte *)CONCAT44(pbStack_100._4_4_,uVar48);
          fVar49 = (float)pdb_140df3ee0(auStack_278);
          auVar51 = ZEXT416((uint)(fVar13 / fVar49));
          pdb_140b74440(&iStack_2e4,&iStack_1c8);
          if (iStack_2e4 == 1) {
            auStack_148._8_8_ = 0;
            auStack_148._0_8_ = uStack_2e0;
            fVar49 = (float)pdb_140df3ee0(auStack_278);
            auVar51 = ZEXT416((uint)(fVar11 / fVar49));
            if (fVar11 / fVar49 <=
                (float)(~-(uint)((float)auStack_148._4_4_ < (float)auStack_148._0_4_) &
                        auStack_148._4_4_ |
                       (uint)((float)auStack_148._4_4_ + fVar9) &
                       -(uint)((float)auStack_148._4_4_ < (float)auStack_148._0_4_)) -
                (float)auStack_148._0_4_) {
              *puStack_1e8 = uStack_188;
              auVar51._4_4_ = uStack_20c;
              auVar51._0_4_ = uStack_210;
              auVar51._8_8_ = uStack_208;
              uStack_1b8 = uStack_20c;
              uStack_1b4 = uStack_208;
              iStack_1c8 = iStack_21c;
              uStack_1c4 = uStack_218;
              uStack_1c0 = uStack_214;
              uStack_1bc = uStack_210;
              pbStack_100 = (byte *)plStack_168[2];
              if (pbStack_100 == (byte *)*plStack_168) {
                pdb_142d7f080(plStack_168);
              }
              lVar19 = plStack_168[1];
              lVar24 = (longlong)pbStack_100 * 0x38;
              *(ulonglong *)(lVar19 + lVar24) = uStack_190;
              *(ulonglong *)(lVar19 + 8 + lVar24) = uStack_170;
              puVar32 = (undefined8 *)(lVar19 + 0x10 + lVar24);
              *puVar32 = CONCAT44(uStack_1c4,iStack_1c8);
              puVar32[1] = CONCAT44(uStack_1bc,uStack_1c0);
              puVar32 = (undefined8 *)(lVar19 + 0x1c + lVar24);
              *puVar32 = CONCAT44(uStack_1b8,uStack_1bc);
              puVar32[1] = uStack_1b4;
              *(undefined8 *)(lVar19 + 0x2c + lVar24) = auStack_148._0_8_;
              *(float *)(lVar19 + 0x34 + lVar24) = fStack_184;
              plStack_168[2] = (longlong)(pbStack_100 + 1);
            }
          }
        }
      }
    }
  }
  goto LAB_1421a0fe4;
LAB_1421a1053:
  pbVar29 = pbStack_110;
  if (pbStack_130 != (byte *)0x0) {
    pbVar26 = pbStack_100;
    if (uVar22 == 0) {
      pbVar26 = pbStack_108;
      if (pbStack_108 == pbStack_110) {
        pbStack_110 = pbStack_150;
        pbVar26 = pbStack_100;
      }
      pbStack_108 = pbVar26 + 0xc;
    }
    else {
      uVar23 = ((ulonglong)((longlong)pbStack_110 - (longlong)pbStack_108) >> 2) *
               -0x5555555555555555;
      if (uVar22 < uVar23) {
        uVar23 = uVar22;
      }
      pbVar37 = (byte *)(uVar22 - uVar23);
      if ((byte *)(uVar22 - uVar23) == (byte *)0x0) {
        pbVar37 = pbStack_108 + uVar23 * 0xc;
        pbStack_110 = pbStack_150;
        pbStack_108 = pbStack_250;
        if (pbVar37 != pbVar29) goto LAB_1421a1343;
      }
      else {
        do {
          pbVar27 = pbVar37;
          pbVar29 = pbStack_160;
          if (pbVar27 < pbStack_160) {
            pbVar29 = pbVar27;
          }
          pbVar37 = pbVar27 + -(longlong)pbVar29;
        } while (pbVar27 + -(longlong)pbVar29 != (byte *)0x0);
        pbStack_110 = pbStack_150;
        pbStack_108 = pbStack_250;
        if (pbVar27 < pbStack_160) {
          pbVar37 = pbStack_100 + (longlong)pbVar29 * 0xc;
          pbVar29 = pbStack_150;
LAB_1421a1343:
          pbStack_108 = pbVar37 + 0xc;
          pbVar26 = pbVar37;
          pbStack_110 = pbVar29;
        }
      }
    }
    pbStack_130 = pbStack_130 + -1;
    bVar17 = (bool)(bVar44 ^ 1);
    bVar44 = *(int *)pbVar26 == 1;
    auStack_128._0_4_ = *(int *)(pbVar26 + 4);
    auStack_1d8._0_4_ = *(int *)(pbVar26 + 8);
    iVar47 = *(int *)(pbVar26 + 8);
    iVar14 = *(int *)(pbVar26 + 4);
    if ((bVar44) || (iVar47 = iStack_17c, iVar14 = iStack_180, bVar17)) {
      iStack_180 = iVar14;
      iStack_17c = iVar47;
      uVar22 = 0;
    }
    else {
      uVar48 = pdb_140a850f0(&iStack_21c);
      auStack_148._0_4_ = uVar48;
      auStack_128._0_8_ = pdb_140a850f0(&iStack_21c);
      auStack_128._8_8_ = extraout_XMM0_Qb;
      register0x00001204 = auStack_128._4_12_;
      auStack_1d8._0_4_ = (float)auStack_128._0_8_ + fVar9;
      pdb_140a85220(&iStack_21c);
      auStack_238._0_8_ = pub_142e32a70();
      auStack_238._8_8_ = extraout_XMM0_Qb_00;
      pdb_140a85220(&iStack_21c);
      auStack_1d8._4_4_ = auStack_128._4_4_;
      auStack_1d8._0_4_ =
           (float)(~-(uint)((float)auStack_128._0_4_ < (float)auStack_148._0_4_) & auStack_128._0_4_
                  | auStack_1d8._0_4_ & -(uint)((float)auStack_128._0_4_ < (float)auStack_148._0_4_)
                  ) - (float)auStack_148._0_4_;
      uStack_1d0 = auStack_128._8_4_;
      uStack_1cc = auStack_128._12_4_;
      auVar55._0_4_ =
           (uint)((float)auStack_238._0_4_ + fVar9) & -(uint)((float)auStack_238._0_4_ < 0.0);
      auVar55._4_4_ = auStack_238._4_4_;
      auVar55._8_4_ = auStack_238._8_4_;
      auVar55._12_4_ = auStack_238._12_4_;
      auStack_148._0_16_ =
           ZEXT416(~-(uint)((float)auStack_238._0_4_ < 0.0) & auStack_238._0_4_) | auVar55;
      uVar50 = pub_142e32a70();
      fVar49 = (float)uVar50;
      auVar56._0_4_ = (uint)(fVar49 + fVar9) & -(uint)(fVar49 < 0.0);
      auVar56._4_4_ = (int)((ulonglong)uVar50 >> 0x20);
      auVar56._8_4_ = (int)extraout_XMM0_Qb_01;
      auVar56._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
      auStack_238 = ZEXT416(~-(uint)(fVar49 < 0.0) & (uint)fVar49) | auVar56;
      fVar49 = auStack_238._0_4_;
      uVar45 = -(uint)(fVar49 < auStack_148._0_4_);
      auVar52._0_4_ = (uint)(fVar49 + fVar9) & uVar45;
      auVar52._4_4_ = auStack_238._4_4_ & auStack_148._4_4_;
      auVar52._8_4_ = auStack_238._8_4_ & auStack_148._8_4_;
      auVar52._12_4_ = auStack_238._12_4_ & auStack_148._12_4_;
      auVar57._0_4_ = ~uVar45 & (uint)fVar49;
      auVar57._4_4_ = ~auStack_148._4_4_ & auStack_238._4_4_;
      auVar57._8_4_ = ~auStack_148._8_4_ & auStack_238._8_4_;
      auVar57._12_4_ = ~auStack_148._12_4_ & auStack_238._12_4_;
      auStack_128._4_12_ = SUB1612(auVar57 | auVar52,4);
      auStack_128._0_4_ = SUB164(auVar57 | auVar52,0) - auStack_148._0_4_;
      bVar44 = false;
      uVar22 = 0;
      if ((float)auStack_128._0_4_ <= (float)auStack_1d8._0_4_) {
        fVar49 = (float)pdb_140a85220(&iStack_21c);
        bVar44 = false;
        uVar22 = 0;
        if (fVar10 / fVar49 <= (float)auStack_128._0_4_) {
          *puStack_1e8 = uStack_188;
          uStack_1b8 = uStack_20c;
          uStack_1b4 = uStack_208;
          iStack_1c8 = iStack_21c;
          uStack_1c4 = uStack_218;
          uStack_1c0 = uStack_214;
          uStack_1bc = uStack_210;
          auStack_128._0_8_ = plStack_168[2];
          if (plStack_168[2] == *plStack_168) {
            pdb_142d7f080(plStack_168);
          }
          lVar19 = plStack_168[1];
          lVar24 = auStack_128._0_8_ * 0x38;
          *(ulonglong *)(lVar19 + lVar24) = uStack_190;
          *(ulonglong *)(lVar19 + 8 + lVar24) = uStack_170;
          puVar32 = (undefined8 *)(lVar19 + 0x10 + lVar24);
          *puVar32 = CONCAT44(uStack_1c4,iStack_1c8);
          puVar32[1] = CONCAT44(uStack_1bc,uStack_1c0);
          puVar32 = (undefined8 *)(lVar19 + 0x1c + lVar24);
          *puVar32 = CONCAT44(uStack_1b8,uStack_1bc);
          puVar32[1] = uStack_1b4;
          *(undefined4 *)(lVar19 + 0x2c + lVar24) = auStack_148._0_4_;
          *(undefined4 *)(lVar19 + 0x30 + lVar24) = auStack_238._0_4_;
          *(float *)(lVar19 + 0x34 + lVar24) = fStack_184;
          plStack_168[2] = auStack_128._0_8_ + 1;
          bVar44 = false;
          uVar22 = 0;
        }
      }
    }
    goto LAB_1421a1053;
  }
LAB_1421a0fe4:
  if (lStack_200 != 0) {
    pub_1406abac0(pbStack_1f8,lStack_200 * 0xc,4);
  }
  goto LAB_1421a05e0;
}

