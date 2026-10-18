// VA 0x1425728f0, PDB extent 5138 bytes
// country_core::render::nani::systems::nani_update_uber
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/systems.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::render::nani::systems::nani_update_uber
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/systems.rs
   Extent: 5138 */

longlong * pdb_1425728f0(undefined8 *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  byte *pbVar1;
  char *pcVar2;
  char *pcVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  char cVar7;
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
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
  char cVar28;
  char cVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  uint uVar35;
  char cVar36;
  char cVar37;
  ushort uVar38;
  uint uVar39;
  undefined4 uVar40;
  uint uVar41;
  int iVar42;
  longlong lVar43;
  ulonglong uVar44;
  longlong *plVar45;
  ulonglong *puVar46;
  ulonglong uVar47;
  ulonglong uVar48;
  uint uVar49;
  undefined8 *puVar50;
  undefined8 uVar51;
  ulonglong uVar52;
  undefined8 uVar53;
  char *pcVar54;
  longlong *plVar55;
  uint *puVar56;
  undefined *puVar57;
  undefined8 *puVar58;
  longlong lVar59;
  float *pfVar60;
  undefined *puVar61;
  bool bVar62;
  byte bVar63;
  byte bVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  undefined1 unaff_XMM9_Ba;
  undefined1 unaff_XMM9_Bb;
  undefined1 unaff_XMM9_Bc;
  char cVar74;
  undefined1 unaff_XMM9_Bd;
  char cVar75;
  undefined1 unaff_XMM9_Be;
  undefined1 unaff_XMM9_Bf;
  char cVar76;
  undefined1 unaff_XMM9_Bg;
  char cVar77;
  undefined1 unaff_XMM9_Bh;
  char cVar78;
  undefined1 unaff_XMM9_Bi;
  undefined1 unaff_XMM9_Bj;
  char cVar79;
  undefined1 unaff_XMM9_Bk;
  char cVar80;
  undefined1 unaff_XMM9_Bl;
  char cVar81;
  undefined1 unaff_XMM9_Bm;
  undefined1 unaff_XMM9_Bn;
  char cVar82;
  undefined1 unaff_XMM9_Bo;
  char cVar83;
  undefined1 unaff_XMM9_Bp;
  char cVar84;
  float fVar85;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  float fVar88;
  float fVar89;
  undefined8 in_stack_fffffffffffffd18;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  float fStack_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined8 uStack_298;
  undefined8 uStack_290;
  float fStack_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  longlong lStack_258;
  longlong lStack_248;
  byte bStack_240;
  longlong lStack_238;
  byte bStack_230;
  longlong lStack_228;
  longlong lStack_220;
  longlong lStack_218;
  longlong lStack_210;
  byte bStack_208;
  uint uStack_200;
  uint uStack_1fc;
  byte bStack_1f8;
  undefined8 uStack_1e0;
  float fStack_1d8;
  longlong lStack_1d0;
  longlong lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  uint *puStack_1b0;
  undefined8 *puStack_1a8;
  longlong lStack_1a0;
  longlong lStack_198;
  undefined8 uStack_190;
  longlong lStack_188;
  longlong lStack_180;
  longlong lStack_178;
  longlong *plStack_170;
  longlong *plStack_168;
  longlong lStack_160;
  char *pcStack_158;
  undefined8 *puStack_150;
  ulonglong uStack_148;
  uint uStack_140;
  uint uStack_13c;
  longlong lStack_138;
  longlong lStack_130;
  longlong lStack_128;
  uint uStack_11c;
  longlong *plStack_118;
  longlong lStack_110;
  byte bStack_101;
  uint uStack_100;
  uint uStack_fc;
  longlong *plStack_f8;
  undefined8 uStack_f0;
  
  uVar40 = (undefined4)((ulonglong)in_stack_fffffffffffffd18 >> 0x20);
  uStack_f0 = 0xfffffffffffffffe;
  plVar55 = param_2;
  cVar36 = pdb_140e94b40();
  if (cVar36 == '\0') {
    lStack_198 = 0;
    goto LAB_142572b1c;
  }
  plVar55 = (longlong *)&UNK_14351c7d4;
  lVar59 = 0x35;
  uVar52 = 0x35;
  lVar43 = pdb_142585200(&UNK_14351c7d4);
  if (lVar43 != 1) {
LAB_1425729e5:
    puVar57 = &UNK_14351bdcd;
    puVar61 = &UNK_14351bd9f;
    do {
      bVar63 = puVar57[-1];
      uVar39 = (uint)(char)bVar63;
      plStack_f8 = param_3;
      if ((char)bVar63 < '\0') {
        bVar64 = puVar57[-2];
        if ((char)bVar64 < -0x40) {
          bVar6 = puVar57[-3];
          if ((char)bVar6 < -0x40) {
            pbVar1 = puVar57 + -4;
            puVar57 = puVar57 + -4;
            uVar39 = bVar6 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar57 = puVar57 + -3;
            uVar39 = bVar6 & 0xf;
          }
          uVar39 = bVar64 & 0x3f | uVar39 << 6;
        }
        else {
          puVar57 = puVar57 + -2;
          uVar39 = bVar64 & 0x1f;
        }
        uVar39 = (uint)(bVar63 & 0x3f) | uVar39 << 6;
        if (uVar39 != 0x5c) goto LAB_142572a74;
LAB_142572a8c:
        if ((undefined *)0x2e < puVar57 + -0x14351bd9e) goto LAB_142573810;
        lVar43 = 0x2e - (longlong)(puVar57 + -0x14351bd9e);
        puVar61 = puVar57 + 1;
        goto LAB_142572aae;
      }
      puVar57 = puVar57 + -1;
      if (uVar39 == 0x5c) goto LAB_142572a8c;
LAB_142572a74:
      if (uVar39 == 0x2f) goto LAB_142572a8c;
    } while (puVar57 != &UNK_14351bd9f);
    lVar43 = 0x2e;
LAB_142572aae:
    plVar45 = (longlong *)pdb_140e97000();
    if (((char)plVar45[0xd] == '\x01') ||
       (plVar45 = (longlong *)pdb_142d8ec20(plVar45,0), plVar45 != (longlong *)0x0)) {
      if (*plVar45 != 0) goto LAB_1425737af;
      *plVar45 = -1;
      plStack_118 = plVar45;
      uStack_190 = pdb_140e94f10(plVar45 + 1,plVar55,lVar59,puVar61,lVar43,1,0);
      uVar40 = (undefined4)((ulonglong)lVar43 >> 0x20);
      *plStack_118 = *plStack_118 + 1;
      lStack_198 = 1;
      param_3 = plStack_f8;
LAB_142572b1c:
      lVar43 = *param_4;
      uVar51 = CONCAT71((int7)((ulonglong)plVar55 >> 8),0x14);
      plStack_170 = (longlong *)pdb_1409d2d80(lVar43);
      uVar53 = CONCAT71((int7)((ulonglong)uVar51 >> 8),0x15);
      uStack_1c0 = uVar51;
      plStack_168 = (longlong *)pdb_1409d2d80(lVar43);
      plStack_f8 = (longlong *)*param_1;
      lStack_1d0 = param_1[1];
      uStack_1b8 = uVar53;
      pdb_141523770(&fStack_278,lStack_1d0,plStack_f8,*(undefined4 *)(param_1 + 2),
                    CONCAT44(uVar40,*(undefined4 *)((longlong)param_1 + 0x14)));
      uVar35 = _UNK_142e377e4;
      uVar39 = _DAT_142e377e0;
      fVar34 = _DAT_142e36f28;
      puVar56 = (uint *)CONCAT44(fStack_274,fStack_278);
      puStack_1b0 = (uint *)CONCAT44(fStack_26c,fStack_270);
      uStack_100 = (uint)bStack_240;
      uStack_fc = (uint)bStack_230;
      lStack_180 = *param_2;
      puStack_1a8 = (undefined8 *)*param_3;
      iVar11 = -(uint)(CONCAT13(unaff_XMM9_Bd,
                                CONCAT12(unaff_XMM9_Bc,CONCAT11(unaff_XMM9_Bb,unaff_XMM9_Ba))) ==
                      CONCAT13(unaff_XMM9_Bd,
                               CONCAT12(unaff_XMM9_Bc,CONCAT11(unaff_XMM9_Bb,unaff_XMM9_Ba))));
      cVar36 = (char)((uint)iVar11 >> 8);
      cVar74 = (char)((uint)iVar11 >> 0x10);
      cVar75 = (char)((uint)iVar11 >> 0x18);
      iVar12 = -(uint)(CONCAT13(unaff_XMM9_Bh,
                                CONCAT12(unaff_XMM9_Bg,CONCAT11(unaff_XMM9_Bf,unaff_XMM9_Be))) ==
                      CONCAT13(unaff_XMM9_Bh,
                               CONCAT12(unaff_XMM9_Bg,CONCAT11(unaff_XMM9_Bf,unaff_XMM9_Be))));
      cVar76 = (char)((uint)iVar12 >> 8);
      cVar77 = (char)((uint)iVar12 >> 0x10);
      cVar78 = (char)((uint)iVar12 >> 0x18);
      iVar13 = -(uint)(CONCAT13(unaff_XMM9_Bl,
                                CONCAT12(unaff_XMM9_Bk,CONCAT11(unaff_XMM9_Bj,unaff_XMM9_Bi))) ==
                      CONCAT13(unaff_XMM9_Bl,
                               CONCAT12(unaff_XMM9_Bk,CONCAT11(unaff_XMM9_Bj,unaff_XMM9_Bi))));
      cVar79 = (char)((uint)iVar13 >> 8);
      cVar80 = (char)((uint)iVar13 >> 0x10);
      cVar81 = (char)((uint)iVar13 >> 0x18);
      iVar14 = -(uint)(CONCAT13(unaff_XMM9_Bp,
                                CONCAT12(unaff_XMM9_Bo,CONCAT11(unaff_XMM9_Bn,unaff_XMM9_Bm))) ==
                      CONCAT13(unaff_XMM9_Bp,
                               CONCAT12(unaff_XMM9_Bo,CONCAT11(unaff_XMM9_Bn,unaff_XMM9_Bm))));
      cVar82 = (char)((uint)iVar14 >> 8);
      cVar83 = (char)((uint)iVar14 >> 0x10);
      cVar84 = (char)((uint)iVar14 >> 0x18);
      uVar44 = (ulonglong)bStack_208;
      uVar52 = (ulonglong)uStack_200;
      lStack_178 = lStack_258;
      lStack_138 = lStack_248;
      lStack_130 = lStack_238;
      lStack_110 = lStack_218;
      lStack_128 = lStack_210;
      bStack_101 = bStack_1f8;
      param_4 = plStack_168;
      do {
        plStack_168 = param_4;
        if ((bStack_101 & 1) == 0) {
          if (uStack_1fc == (uint)uVar52) {
            do {
              if (puVar56 == puStack_1b0) goto LAB_142573694;
              uVar49 = *puVar56;
              puVar56 = puVar56 + 1;
              uVar52 = *(ulonglong *)
                        (*(longlong *)(lStack_1d0 + 0x100) + 0x58 + (ulonglong)uVar49 * 0xa0);
            } while (uVar52 == 0);
            lVar59 = *(longlong *)(lStack_1d0 + 0x100) + (ulonglong)uVar49 * 0xa0;
            lVar43 = *(longlong *)(lStack_1d0 + 0x1a0) + (ulonglong)*(uint *)(lVar59 + 0x94) * 0x48;
            uVar44 = *(ulonglong *)
                      (*(longlong *)(lStack_1d0 + 0x1a0) + 0x40 +
                      (ulonglong)*(uint *)(lVar59 + 0x94) * 0x48);
            if (((ulonglong)plStack_f8[0x22] < uVar44) &&
               (uVar48 = *(ulonglong *)(*(longlong *)(lVar43 + 0x38) + plStack_f8[0x22] * 8),
               uVar48 != 0)) {
              lStack_228 = *(longlong *)(*(longlong *)(lVar43 + 0x18) + 0x10 + ~uVar48 * 0x30);
              uVar48 = plStack_f8[0x23];
              if (uVar44 <= uVar48) goto LAB_142572d29;
LAB_142572cf3:
              uVar48 = *(ulonglong *)(*(longlong *)(lVar43 + 0x38) + uVar48 * 8);
              if (uVar48 == 0) goto LAB_142572d29;
              lStack_220 = *(longlong *)(*(longlong *)(lVar43 + 0x18) + 0x10 + ~uVar48 * 0x30);
              uVar48 = plStack_f8[0x24];
              if (uVar48 < uVar44) goto LAB_142572d3f;
LAB_142572d69:
              lStack_110 = 0;
            }
            else {
              lStack_228 = 0;
              uVar48 = plStack_f8[0x23];
              if (uVar48 < uVar44) goto LAB_142572cf3;
LAB_142572d29:
              lStack_220 = 0;
              uVar48 = plStack_f8[0x24];
              if (uVar44 <= uVar48) goto LAB_142572d69;
LAB_142572d3f:
              uVar48 = *(ulonglong *)(*(longlong *)(lVar43 + 0x38) + uVar48 * 8);
              if (uVar48 == 0) goto LAB_142572d69;
              lStack_110 = *(longlong *)(*(longlong *)(lVar43 + 0x18) + 0x10 + ~uVar48 * 0x30);
            }
            uVar48 = plStack_f8[0x25];
            uVar47 = *(ulonglong *)(lVar59 + 0x88);
            if (uVar48 < uVar47) {
              if (*(longlong *)(*(longlong *)(lVar59 + 0x80) + uVar48 * 8) == 0) {
                uStack_100 = 0;
              }
              else {
                uStack_100 = (uint)CONCAT71((int7)((ulonglong)*(longlong *)(lVar59 + 0x80) >> 8),1);
                if ((uVar48 < uVar44) &&
                   (uVar48 = *(ulonglong *)(*(longlong *)(lVar43 + 0x38) + uVar48 * 8), uVar48 != 0)
                   ) {
                  lStack_138 = *(longlong *)(*(longlong *)(lVar43 + 0x18) + 0x10 + ~uVar48 * 0x30);
                }
                else {
                  lStack_138 = 0;
                }
              }
              uVar48 = plStack_f8[0x26];
              if (uVar47 <= uVar48) goto LAB_142572df5;
LAB_142572e31:
              if (*(longlong *)(*(longlong *)(lVar59 + 0x80) + uVar48 * 8) == 0) {
                uStack_fc = 0;
              }
              else {
                uStack_fc = (uint)CONCAT71((int7)((ulonglong)*(longlong *)(lVar59 + 0x80) >> 8),1);
                if ((uVar48 < uVar44) &&
                   (uVar48 = *(ulonglong *)(*(longlong *)(lVar43 + 0x38) + uVar48 * 8), uVar48 != 0)
                   ) {
                  lStack_130 = *(longlong *)(*(longlong *)(lVar43 + 0x18) + 0x10 + ~uVar48 * 0x30);
                }
                else {
                  lStack_130 = 0;
                }
              }
            }
            else {
              uStack_100 = 0;
              uVar48 = plStack_f8[0x26];
              if (uVar48 < uVar47) goto LAB_142572e31;
LAB_142572df5:
              uStack_fc = 0;
            }
            uVar48 = plStack_f8[0x27];
            uStack_1fc = 0;
            if ((uVar48 < uVar47) && (*(longlong *)(*(longlong *)(lVar59 + 0x80) + uVar48 * 8) != 0)
               ) {
              if ((uVar48 < uVar44) &&
                 (uVar44 = *(ulonglong *)(*(longlong *)(lVar43 + 0x38) + uVar48 * 8), uVar44 != 0))
              {
                lStack_128 = *(longlong *)(*(longlong *)(lVar43 + 0x18) + 0x10 + ~uVar44 * 0x30);
              }
              else {
                lStack_128 = 0;
              }
              uVar44 = CONCAT71((int7)(uVar48 >> 8),1);
            }
            else {
              uVar44 = 0;
            }
            lStack_178 = *(longlong *)(lVar59 + 0x50);
          }
          uVar49 = ~*(uint *)(lStack_178 + 8 + (ulonglong)uStack_1fc * 0x10);
        }
        else {
          uVar49 = uStack_1fc;
          if (uStack_1fc == (uint)uVar52) {
            do {
              if (puVar56 == puStack_1b0) goto LAB_142573694;
              uVar49 = *puVar56;
              puVar56 = puVar56 + 1;
              uVar52 = *(ulonglong *)
                        (*(longlong *)(lStack_1d0 + 0x1a0) + 0x10 + (ulonglong)uVar49 * 0x48);
            } while (uVar52 == 0);
            lVar43 = *(longlong *)(lStack_1d0 + 0x1a0) + (ulonglong)uVar49 * 0x48;
            uVar48 = *(ulonglong *)(lVar43 + 0x40);
            if (((ulonglong)plStack_f8[0x22] < uVar48) &&
               (uVar47 = *(ulonglong *)(*(longlong *)(lVar43 + 0x38) + plStack_f8[0x22] * 8),
               uVar47 != 0)) {
              lStack_228 = *(longlong *)(*(longlong *)(lVar43 + 0x18) + 0x10 + ~uVar47 * 0x30);
              uVar47 = plStack_f8[0x23];
              if (uVar48 <= uVar47) goto LAB_142573000;
LAB_142572fca:
              uVar47 = *(ulonglong *)(*(longlong *)(lVar43 + 0x38) + uVar47 * 8);
              if (uVar47 == 0) goto LAB_142573000;
              lStack_220 = *(longlong *)(*(longlong *)(lVar43 + 0x18) + 0x10 + ~uVar47 * 0x30);
              uVar47 = plStack_f8[0x24];
              if (uVar47 < uVar48) goto LAB_142573016;
LAB_142573053:
              lStack_110 = 0;
              uVar47 = plStack_f8[0x25];
              if (uVar48 <= uVar47) goto LAB_1425730b6;
LAB_142573071:
              uVar47 = *(ulonglong *)(*(longlong *)(lVar43 + 0x38) + uVar47 * 8);
              if (uVar47 == 0) goto LAB_1425730b6;
              lStack_138 = *(longlong *)(*(longlong *)(lVar43 + 0x18) + 0x10 + ~uVar47 * 0x30);
              uStack_100 = (uint)CONCAT71((int7)((ulonglong)lStack_138 >> 8),1);
              uVar47 = plStack_f8[0x26];
              if (uVar47 < uVar48) goto LAB_1425730d3;
LAB_142573105:
              uStack_fc = 0;
            }
            else {
              lStack_228 = 0;
              uVar47 = plStack_f8[0x23];
              if (uVar47 < uVar48) goto LAB_142572fca;
LAB_142573000:
              lStack_220 = 0;
              uVar47 = plStack_f8[0x24];
              if (uVar48 <= uVar47) goto LAB_142573053;
LAB_142573016:
              uVar47 = *(ulonglong *)(*(longlong *)(lVar43 + 0x38) + uVar47 * 8);
              if (uVar47 == 0) goto LAB_142573053;
              lStack_110 = *(longlong *)(*(longlong *)(lVar43 + 0x18) + 0x10 + ~uVar47 * 0x30);
              uVar47 = plStack_f8[0x25];
              if (uVar47 < uVar48) goto LAB_142573071;
LAB_1425730b6:
              uStack_100 = 0;
              uVar47 = plStack_f8[0x26];
              if (uVar48 <= uVar47) goto LAB_142573105;
LAB_1425730d3:
              uVar47 = *(ulonglong *)(*(longlong *)(lVar43 + 0x38) + uVar47 * 8);
              if (uVar47 == 0) goto LAB_142573105;
              lStack_130 = *(longlong *)(*(longlong *)(lVar43 + 0x18) + 0x10 + ~uVar47 * 0x30);
              uStack_fc = (uint)CONCAT71((int7)((ulonglong)lStack_130 >> 8),1);
            }
            uVar49 = 0;
            uStack_1fc = uVar49;
            if (((ulonglong)plStack_f8[0x27] < uVar48) &&
               (uVar48 = *(ulonglong *)(*(longlong *)(lVar43 + 0x38) + plStack_f8[0x27] * 8),
               uVar48 != 0)) {
              lStack_128 = *(longlong *)(*(longlong *)(lVar43 + 0x18) + 0x10 + ~uVar48 * 0x30);
              uVar44 = CONCAT71((int7)(uVar44 >> 8),1);
            }
            else {
              uVar44 = 0;
            }
          }
        }
        uStack_140 = uStack_1fc;
        uVar48 = (ulonglong)uVar49;
        pcVar2 = (char *)(lStack_228 + uVar48 * 0x18);
        lStack_188 = lStack_220 + uVar48 * 0xc;
        pfVar60 = (float *)(uVar48 * 0x30 + lStack_110);
        lVar43 = 0;
        if ((uStack_100 & 1) != 0) {
          lVar43 = lStack_138;
        }
        lVar59 = 0;
        if ((uStack_fc & 1) != 0) {
          lVar59 = lStack_130;
        }
        puVar46 = (ulonglong *)(lStack_128 + uVar48 * 8);
        uStack_13c = (uint)uVar44;
        if ((uVar44 & 1) == 0) {
          puVar46 = (ulonglong *)0x0;
        }
        uVar49 = (uint)(lVar43 != 0) * 2 + (uint)(lVar59 == 0) * 4 + (uint)(lVar59 != 0) * 8;
        plStack_118 = (longlong *)((ulonglong)plStack_118 & 0xffffffff00000000);
        lStack_1c8 = lStack_228;
        if (puVar46 != (ulonglong *)0x0) {
          uVar44 = *puVar46;
          uStack_298 = uVar44;
          puVar50 = puStack_150;
          if (*(longlong *)(lStack_180 + 0x60) != 0) {
            uVar49 = uVar49 | 1;
            lVar43 = *(longlong *)(lStack_180 + 0x48);
            uVar48 = *(ulonglong *)(lStack_180 + 0x50);
            bVar63 = (byte)(uVar44 >> 0x39);
            auVar65 = ZEXT216(CONCAT11(bVar63,bVar63));
            auVar65 = pshuflw(auVar65,auVar65,0);
            puVar58 = (undefined8 *)0x0;
            pcStack_158 = pcVar2;
            while( true ) {
              uVar44 = uVar44 & uVar48;
              pcVar2 = (char *)(lVar43 + uVar44);
              cVar7 = *pcVar2;
              cVar15 = pcVar2[1];
              cVar16 = pcVar2[2];
              cVar17 = pcVar2[3];
              cVar18 = pcVar2[4];
              cVar19 = pcVar2[5];
              cVar20 = pcVar2[6];
              cVar21 = pcVar2[7];
              cVar22 = pcVar2[8];
              cVar23 = pcVar2[9];
              cVar24 = pcVar2[10];
              cVar25 = pcVar2[0xb];
              cVar26 = pcVar2[0xc];
              cVar27 = pcVar2[0xd];
              cVar28 = pcVar2[0xe];
              cVar29 = pcVar2[0xf];
              auVar66[0] = -(cVar7 == auVar65[0]);
              auVar66[1] = -(cVar15 == auVar65[1]);
              auVar66[2] = -(cVar16 == auVar65[2]);
              auVar66[3] = -(cVar17 == auVar65[3]);
              auVar66[4] = -(cVar18 == auVar65[4]);
              auVar66[5] = -(cVar19 == auVar65[5]);
              auVar66[6] = -(cVar20 == auVar65[6]);
              auVar66[7] = -(cVar21 == auVar65[7]);
              auVar66[8] = -(cVar22 == auVar65[0]);
              auVar66[9] = -(cVar23 == auVar65[1]);
              auVar66[10] = -(cVar24 == auVar65[2]);
              auVar66[0xb] = -(cVar25 == auVar65[3]);
              auVar66[0xc] = -(cVar26 == auVar65[4]);
              auVar66[0xd] = -(cVar27 == auVar65[5]);
              auVar66[0xe] = -(cVar28 == auVar65[6]);
              auVar66[0xf] = -(cVar29 == auVar65[7]);
              uVar38 = (ushort)(SUB161(auVar66 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar66 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar66 >> 0x17,0) & 1) << 2 |
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
                       (ushort)(auVar66[0xf] >> 7) << 0xf;
              uVar41 = (uint)uVar38;
              puVar50 = puStack_150;
              while (puStack_150 = puVar58, uVar38 != 0) {
                uVar9 = 0;
                for (uVar10 = uVar41; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
                  uVar9 = uVar9 + 1;
                }
                uVar47 = uVar9 + uVar44 & uVar48;
                lStack_160 = lStack_220;
                uStack_148 = uVar48;
                uStack_11c = uVar49;
                cVar37 = pdb_140df4430(&uStack_298,lVar43 + uVar47 * -0x18 + -0x18);
                if (cVar37 != '\0') {
                  uVar40 = pdb_140a2ec70(lStack_180,*(undefined8 *)(lVar43 + uVar47 * -0x18 + -0x10)
                                        );
                  uStack_148 = CONCAT44(uStack_148._4_4_,uVar40);
                  cVar7 = *pcStack_158;
                  puVar50 = puStack_1a8;
                  pcVar2 = pcStack_158;
                  goto joined_r0x00014257332a;
                }
                uVar38 = (ushort)(uVar41 - 1) & (ushort)uVar41;
                uVar41 = CONCAT22((short)(uVar41 - 1 >> 0x10),uVar38);
                uVar48 = uStack_148;
                puVar58 = puStack_150;
                lStack_220 = lStack_160;
                uVar49 = uStack_11c;
                puVar50 = puStack_150;
              }
              auVar86[0] = -(cVar7 == (char)iVar11);
              auVar86[1] = -(cVar15 == cVar36);
              auVar86[2] = -(cVar16 == cVar74);
              auVar86[3] = -(cVar17 == cVar75);
              auVar86[4] = -(cVar18 == (char)iVar12);
              auVar86[5] = -(cVar19 == cVar76);
              auVar86[6] = -(cVar20 == cVar77);
              auVar86[7] = -(cVar21 == cVar78);
              auVar86[8] = -(cVar22 == (char)iVar13);
              auVar86[9] = -(cVar23 == cVar79);
              auVar86[10] = -(cVar24 == cVar80);
              auVar86[0xb] = -(cVar25 == cVar81);
              auVar86[0xc] = -(cVar26 == (char)iVar14);
              auVar86[0xd] = -(cVar27 == cVar82);
              auVar86[0xe] = -(cVar28 == cVar83);
              auVar86[0xf] = -(cVar29 == cVar84);
              if ((((((((((((((((SUB161(auVar86 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar86 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar86 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar86 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar86 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar86 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar86 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar86 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar86 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar86 >> 0x4f,0) & 1) != 0) || (SUB161(auVar86 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar86 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar86 >> 0x67,0) & 1) != 0) || (SUB161(auVar86 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar86 >> 0x77,0) & 1) != 0) || auVar86[0xf] < '\0') break;
              uVar44 = (longlong)puStack_150 + uVar44 + 0x10;
              puVar58 = puStack_150 + 2;
              puStack_150 = puVar50;
            }
          }
          puStack_150 = puVar50;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_14351bdd0);
        }
        uStack_148 = uStack_148 & 0xffffffff00000000;
        cVar7 = *pcVar2;
        puVar50 = puStack_1a8;
        lStack_160 = lStack_220;
        uStack_11c = uVar49;
joined_r0x00014257332a:
        uVar49 = 0;
        puStack_1a8 = puVar50;
        if (cVar7 == '\0') {
          uVar44 = *(ulonglong *)(pcVar2 + 8);
          bVar63 = 0;
          lVar43 = lStack_1a0;
          if (puVar50[3] != 0) {
            pcVar54 = (char *)*puVar50;
            bVar64 = (byte)(uVar44 >> 0x39);
            auVar65 = ZEXT216(CONCAT11(bVar64,bVar64));
            auVar65 = pshuflw(auVar65,auVar65,0);
            lVar59 = 0;
            puVar50 = (undefined8 *)puVar50[1];
            uStack_298 = uVar44;
            while( true ) {
              uVar44 = uVar44 & (ulonglong)puVar50;
              pcVar3 = pcVar54 + uVar44;
              cVar7 = *pcVar3;
              cVar15 = pcVar3[1];
              cVar16 = pcVar3[2];
              cVar17 = pcVar3[3];
              cVar18 = pcVar3[4];
              cVar19 = pcVar3[5];
              cVar20 = pcVar3[6];
              cVar21 = pcVar3[7];
              cVar22 = pcVar3[8];
              cVar23 = pcVar3[9];
              cVar24 = pcVar3[10];
              cVar25 = pcVar3[0xb];
              cVar26 = pcVar3[0xc];
              cVar27 = pcVar3[0xd];
              cVar28 = pcVar3[0xe];
              cVar29 = pcVar3[0xf];
              auVar67[0] = -(cVar7 == auVar65[0]);
              auVar67[1] = -(cVar15 == auVar65[1]);
              auVar67[2] = -(cVar16 == auVar65[2]);
              auVar67[3] = -(cVar17 == auVar65[3]);
              auVar67[4] = -(cVar18 == auVar65[4]);
              auVar67[5] = -(cVar19 == auVar65[5]);
              auVar67[6] = -(cVar20 == auVar65[6]);
              auVar67[7] = -(cVar21 == auVar65[7]);
              auVar67[8] = -(cVar22 == auVar65[0]);
              auVar67[9] = -(cVar23 == auVar65[1]);
              auVar67[10] = -(cVar24 == auVar65[2]);
              auVar67[0xb] = -(cVar25 == auVar65[3]);
              auVar67[0xc] = -(cVar26 == auVar65[4]);
              auVar67[0xd] = -(cVar27 == auVar65[5]);
              auVar67[0xe] = -(cVar28 == auVar65[6]);
              auVar67[0xf] = -(cVar29 == auVar65[7]);
              uVar38 = (ushort)(SUB161(auVar67 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar67 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar67 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar67 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar67 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar67 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar67 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar67 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar67 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar67 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar67 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar67 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar67 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar67 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar67 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar67[0xf] >> 7) << 0xf;
              plVar45 = (longlong *)(ulonglong)uVar38;
              lVar43 = lStack_1a0;
              plVar55 = plStack_118;
              while (lStack_1a0 = lVar59, plStack_118 = plVar45, uVar38 != 0) {
                uVar49 = 0;
                for (uVar41 = (uint)plStack_118; (uVar41 & 1) == 0;
                    uVar41 = uVar41 >> 1 | 0x80000000) {
                  uVar49 = uVar49 + 1;
                }
                uVar48 = uVar49 + uVar44 & (ulonglong)puVar50;
                pcStack_158 = pcVar54;
                puStack_150 = puVar50;
                cVar37 = pdb_140df4430(&uStack_298,pcVar54 + uVar48 * -0x10 + -0x10);
                if (cVar37 != '\0') {
                  uVar40 = *(undefined4 *)(pcVar54 + uVar48 * -0x10 + -8);
                  bVar63 = 1;
                  goto LAB_14257346c;
                }
                iVar42 = (int)plStack_118 + -1;
                uVar38 = (ushort)iVar42 & (ushort)plStack_118;
                plVar45 = (longlong *)(ulonglong)CONCAT22((short)((uint)iVar42 >> 0x10),uVar38);
                puVar50 = puStack_150;
                pcVar54 = pcStack_158;
                lVar59 = lStack_1a0;
                lVar43 = lStack_1a0;
                plVar55 = plStack_118;
              }
              auVar87[0] = -(cVar7 == (char)iVar11);
              auVar87[1] = -(cVar15 == cVar36);
              auVar87[2] = -(cVar16 == cVar74);
              auVar87[3] = -(cVar17 == cVar75);
              auVar87[4] = -(cVar18 == (char)iVar12);
              auVar87[5] = -(cVar19 == cVar76);
              auVar87[6] = -(cVar20 == cVar77);
              auVar87[7] = -(cVar21 == cVar78);
              auVar87[8] = -(cVar22 == (char)iVar13);
              auVar87[9] = -(cVar23 == cVar79);
              auVar87[10] = -(cVar24 == cVar80);
              auVar87[0xb] = -(cVar25 == cVar81);
              auVar87[0xc] = -(cVar26 == (char)iVar14);
              auVar87[0xd] = -(cVar27 == cVar82);
              auVar87[0xe] = -(cVar28 == cVar83);
              auVar87[0xf] = -(cVar29 == cVar84);
              plStack_118 = plVar55;
              if ((((((((((((((((SUB161(auVar87 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar87 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar87 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar87 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar87 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar87 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar87 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar87 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar87 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar87 >> 0x4f,0) & 1) != 0) || (SUB161(auVar87 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar87 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar87 >> 0x67,0) & 1) != 0) || (SUB161(auVar87 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar87 >> 0x77,0) & 1) != 0) || auVar87[0xf] < '\0') break;
              uVar44 = uVar44 + lStack_1a0 + 0x10;
              lVar59 = lStack_1a0 + 0x10;
              lStack_1a0 = lVar43;
            }
          }
          lStack_1a0 = lVar43;
          uVar40 = SUB84(puVar50,0);
LAB_14257346c:
          uVar49 = (uint)bVar63 << 4;
          if (bVar63 == 0) {
            uVar40 = 0;
          }
          plStack_118 = (longlong *)CONCAT44(plStack_118._4_4_,uVar40);
        }
        cVar7 = pcVar2[0x10];
        fStack_1d8 = pfVar60[6];
        uStack_1e0 = *(undefined8 *)(pfVar60 + 4);
        fVar73 = pfVar60[7];
        fVar85 = pfVar60[8];
        fVar33 = pfVar60[9];
        fVar30 = *pfVar60;
        fVar31 = pfVar60[1];
        fVar32 = pfVar60[3];
        fStack_268 = pfVar60[4];
        fStack_264 = pfVar60[5];
        fStack_260 = pfVar60[6];
        fVar4 = pfVar60[2];
        fVar89 = fVar4 + fVar4;
        fVar68 = fVar31 + fVar31;
        fVar72 = fVar30 * (fVar30 + fVar30);
        fVar69 = (fVar30 + fVar30) * fVar32;
        fVar88 = fVar89 * fVar30 - fVar68 * fVar32;
        fVar70 = fVar69 + fVar89 * fVar31;
        fVar71 = fVar34 - (fVar72 + fVar31 * fVar68);
        fVar5 = pfVar60[7];
        fStack_27c = (float)*(undefined8 *)(pfVar60 + 8);
        fStack_26c = (float)((ulonglong)*(undefined8 *)(pfVar60 + 8) >> 0x20);
        fStack_288 = fStack_27c * (fVar68 * fVar30 - fVar32 * fVar89);
        fStack_284 = fStack_27c * (fVar34 - (fVar4 * fVar89 + fVar72));
        fStack_280 = fStack_27c * fVar70;
        fStack_27c = fStack_27c * fVar70;
        fStack_278 = fStack_26c * (fVar68 * fVar32 + fVar89 * fVar30);
        fStack_274 = fStack_26c * (fVar89 * fVar31 - fVar69);
        fStack_270 = fStack_26c * fVar71;
        fStack_26c = fStack_26c * fVar71;
        uStack_298 = CONCAT44(fVar5 * (fVar68 * fVar30 + fVar32 * fVar89),
                              fVar5 * (fVar34 - (fVar31 * fVar68 + fVar4 * fVar89)));
        uStack_290 = CONCAT44(fVar5 * fVar88,fVar5 * fVar88);
        fStack_25c = fStack_260;
        pdb_140e07fe0(&uStack_2c8,&uStack_298);
        fVar73 = (float)((uint)fVar73 & uVar39);
        fVar85 = (float)((uint)fVar85 & uVar39);
        if (fVar85 <= (float)((uint)fVar33 & uVar35)) {
          fVar85 = (float)((uint)fVar33 & uVar35);
        }
        uVar51 = uStack_1c0;
        if (cVar7 == '\x15') {
          uVar51 = uStack_1b8;
        }
        if (fVar73 <= fVar85) {
          fVar73 = fVar85;
        }
        fStack_268 = (float)(uVar49 | uStack_11c);
        uStack_298 = uStack_2c8;
        uStack_290 = uStack_2c0;
        fStack_288 = (float)uStack_2b8;
        fStack_284 = (float)uStack_2b4;
        fStack_280 = (float)uStack_2b0;
        fStack_27c = (float)uStack_2ac;
        fStack_278 = fStack_2a8;
        fStack_274 = (float)uStack_2a4;
        fStack_270 = (float)uStack_2a0;
        fStack_26c = (float)uStack_29c;
        fStack_264 = (float)(undefined4)uStack_148;
        fStack_260 = (float)plStack_118._0_4_;
        fStack_25c = 0.0;
        pdb_140956c50(uVar51,lStack_188,&uStack_1e0,fVar73,&uStack_298,&UNK_14351bde8);
        uStack_1fc = uStack_140 + 1;
        uVar44 = (ulonglong)uStack_13c;
        lStack_228 = lStack_1c8;
        lStack_220 = lStack_160;
        param_4 = plStack_168;
      } while( true );
    }
    goto LAB_142573804;
  }
  if (uVar52 < 0x36) {
    plVar55 = (longlong *)&UNK_14351c7d4;
    uVar44 = pdb_142585200(&UNK_14351c7d4);
    if ((uVar44 & 1) != 0) {
      if (0x35 < uVar52 + 2) goto LAB_142573853;
      lVar59 = 0x33 - uVar52;
      plVar55 = (longlong *)(&UNK_14351c7d6 + uVar52);
    }
    goto LAB_1425729e5;
  }
  goto LAB_142573833;
LAB_142573694:
  pdb_140e9a350(param_4);
  pdb_140e9a350();
  LOCK();
  lVar43 = *param_4;
  if (lVar43 == 8) {
    *param_4 = 0;
  }
  UNLOCK();
  if (lVar43 != 8) goto LAB_1425737bc;
  while( true ) {
    param_4 = plStack_170;
    pdb_140e9a350(plStack_170);
    pdb_140e9a350();
    LOCK();
    plVar55 = (longlong *)*param_4;
    bVar62 = plVar55 == (longlong *)0x8;
    if (bVar62) {
      *param_4 = 0;
      plVar55 = (longlong *)0x8;
    }
    UNLOCK();
    if (!bVar62) {
      plVar55 = (longlong *)pdb_142dbca40(param_4,0);
    }
    if (lStack_198 == 0) {
      return plVar55;
    }
    plVar55 = (longlong *)pdb_140e97000();
    if (((char)plVar55[0xd] != '\x01') &&
       (plVar55 = (longlong *)pdb_142d8ec20(plVar55), plVar55 == (longlong *)0x0)) break;
    if (*plVar55 == 0) {
      *plVar55 = -1;
      plStack_f8 = plVar55;
      pdb_140e95370(plVar55 + 1,uStack_190);
      *plStack_f8 = *plStack_f8 + 1;
      return plStack_f8;
    }
LAB_1425737af:
    pdb_142dc8090(&UNK_143326a50);
LAB_1425737bc:
    pdb_142dbca40(param_4,0);
  }
LAB_142573804:
  pdb_142dc7890(&UNK_143326860);
LAB_142573810:
  pdb_142dc8070(&UNK_14351bd9f,0x2e);
LAB_142573833:
  pdb_142dc8070(&UNK_14351c7d4,0x35,0);
LAB_142573853:
  pdb_142dc8070(&UNK_14351c7d4,0x35);
  pcVar8 = (code *)swi(3);
  plVar55 = (longlong *)(*pcVar8)();
  return plVar55;
}

