// VA 0x142579d20, PDB extent 5261 bytes
// country_core::render::nani::systems::nani_update_stone_floor
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/systems.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::render::nani::systems::nani_update_stone_floor
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/systems.rs
   Extent: 5261 */

longlong *
pdb_142579d20(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
             undefined8 *param_5)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong *plVar3;
  char *pcVar4;
  float *pfVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  byte bVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  code *pcVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 *puVar18;
  char cVar19;
  uint uVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong *plVar23;
  undefined4 *puVar24;
  char cVar25;
  ulonglong uVar26;
  undefined8 uVar27;
  longlong lVar28;
  uint *puVar29;
  undefined4 uVar30;
  longlong lVar31;
  longlong lVar32;
  undefined *puVar33;
  ushort uVar34;
  uint uVar35;
  undefined4 uVar36;
  int iVar37;
  longlong *plVar38;
  longlong *plVar39;
  undefined *puVar40;
  longlong *plVar41;
  undefined *puVar42;
  longlong *plVar43;
  longlong lVar44;
  bool bVar45;
  byte bVar46;
  undefined4 uVar47;
  undefined8 uVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar52;
  undefined4 uVar53;
  float fVar55;
  undefined1 auVar54 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar59;
  undefined1 unaff_XMM15_Ba;
  undefined1 unaff_XMM15_Bb;
  char cVar60;
  undefined1 unaff_XMM15_Bc;
  char cVar61;
  undefined1 unaff_XMM15_Bd;
  char cVar62;
  undefined1 unaff_XMM15_Be;
  char cVar63;
  undefined1 unaff_XMM15_Bf;
  char cVar64;
  undefined1 unaff_XMM15_Bg;
  char cVar65;
  undefined1 unaff_XMM15_Bh;
  char cVar66;
  undefined1 unaff_XMM15_Bi;
  char cVar67;
  undefined1 unaff_XMM15_Bj;
  char cVar68;
  undefined1 unaff_XMM15_Bk;
  char cVar69;
  undefined1 unaff_XMM15_Bl;
  char cVar70;
  undefined1 unaff_XMM15_Bm;
  char cVar71;
  undefined1 unaff_XMM15_Bn;
  char cVar72;
  undefined1 unaff_XMM15_Bo;
  char cVar73;
  undefined1 unaff_XMM15_Bp;
  char cVar74;
  undefined8 uStack_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined8 uStack_1f0;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  uint uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1bc;
  float fStack_1b8;
  undefined4 uStack_1b4;
  longlong lStack_1b0;
  undefined8 uStack_1a8;
  longlong *plStack_1a0;
  uint *puStack_198;
  longlong lStack_190;
  undefined8 *puStack_188;
  longlong *plStack_180;
  longlong *plStack_178;
  longlong *plStack_170;
  longlong *plStack_168;
  undefined4 uStack_15c;
  longlong lStack_158;
  longlong *plStack_150;
  longlong lStack_148;
  longlong lStack_140;
  longlong lStack_138;
  longlong lStack_130;
  longlong *plStack_128;
  longlong lStack_120;
  longlong lStack_118;
  longlong lStack_110;
  longlong lStack_108;
  char cStack_fd;
  undefined4 uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  cVar19 = pdb_140e94b40();
  if (cVar19 == '\0') {
    lStack_1b0 = 0;
    goto LAB_142579f49;
  }
  puVar40 = &UNK_14351c704;
  lVar31 = 0x3c;
  uVar26 = 0x3c;
  lVar21 = pdb_142585200(&UNK_14351c704);
  if (lVar21 == 1) {
    if (uVar26 < 0x3d) {
      puVar40 = &UNK_14351c704;
      uVar22 = pdb_142585200(&UNK_14351c704);
      if ((uVar22 & 1) != 0) {
        if (0x3c < uVar26 + 2) goto LAB_14257ae29;
        lVar31 = 0x3a - uVar26;
        puVar40 = &UNK_14351c706 + uVar26;
      }
      goto LAB_142579e10;
    }
  }
  else {
LAB_142579e10:
    puVar33 = &UNK_14351bdcd;
    puVar42 = &UNK_14351bd9f;
    do {
      bVar46 = puVar33[-1];
      uVar20 = (uint)(char)bVar46;
      plStack_128 = param_4;
      if ((char)bVar46 < '\0') {
        bVar8 = puVar33[-2];
        if ((char)bVar8 < -0x40) {
          bVar9 = puVar33[-3];
          if ((char)bVar9 < -0x40) {
            pbVar1 = puVar33 + -4;
            puVar33 = puVar33 + -4;
            uVar20 = bVar9 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar33 = puVar33 + -3;
            uVar20 = bVar9 & 0xf;
          }
          uVar20 = bVar8 & 0x3f | uVar20 << 6;
        }
        else {
          puVar33 = puVar33 + -2;
          uVar20 = bVar8 & 0x1f;
        }
        uVar20 = (uint)(bVar46 & 0x3f) | uVar20 << 6;
        if (uVar20 != 0x5c) goto LAB_142579ea4;
LAB_142579ebc:
        if ((undefined *)0x2e < puVar33 + -0x14351bd9e) goto LAB_14257ade6;
        lVar21 = 0x2e - (longlong)(puVar33 + -0x14351bd9e);
        puVar42 = puVar33 + 1;
        goto LAB_142579ede;
      }
      puVar33 = puVar33 + -1;
      if (uVar20 == 0x5c) goto LAB_142579ebc;
LAB_142579ea4:
      if (uVar20 == 0x2f) goto LAB_142579ebc;
    } while (puVar33 != &UNK_14351bd9f);
    lVar21 = 0x2e;
LAB_142579ede:
    plVar23 = (longlong *)pdb_140e97000();
    if (((char)plVar23[0xd] == '\x01') ||
       (plVar23 = (longlong *)pdb_142d8ec20(plVar23,0), plVar23 != (longlong *)0x0)) {
      if (*plVar23 != 0) {
LAB_14257ad86:
        pdb_142dc8090(&UNK_143326a50);
LAB_14257ad93:
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_14351c050);
      }
      *plVar23 = -1;
      plStack_150 = plVar23;
      uStack_1a8 = pdb_140e94f10(plVar23 + 1,puVar40,lVar31,puVar42,lVar21,1,0);
      *plStack_150 = *plStack_150 + 1;
      lStack_1b0 = 1;
      param_4 = plStack_128;
LAB_142579f49:
      uVar27 = 7;
      puStack_188 = (undefined8 *)pdb_1409d2d80(*param_5);
      fVar17 = _DAT_142e3b1d8;
      fVar16 = _DAT_142e36f28;
      lStack_108 = *param_1;
      lVar21 = param_1[1];
      puVar29 = *(uint **)(lStack_108 + 0xf8);
      puStack_198 = puVar29 + *(longlong *)(lStack_108 + 0x100);
      cStack_fd = *(char *)(lStack_108 + 0x108);
      plStack_1a0 = (longlong *)*param_2;
      plStack_180 = (longlong *)*param_3;
      plStack_170 = (longlong *)*param_4;
      plVar23 = plStack_1a0 + 4;
      plVar2 = plStack_180 + 4;
      plStack_178 = plStack_180 + 6;
      plVar3 = plStack_170 + 4;
      plStack_168 = plStack_170 + 6;
      iVar37 = -(uint)(CONCAT13(unaff_XMM15_Bd,
                                CONCAT12(unaff_XMM15_Bc,CONCAT11(unaff_XMM15_Bb,unaff_XMM15_Ba))) ==
                      CONCAT13(unaff_XMM15_Bd,
                               CONCAT12(unaff_XMM15_Bc,CONCAT11(unaff_XMM15_Bb,unaff_XMM15_Ba))));
      cVar19 = (char)iVar37;
      cVar60 = (char)((uint)iVar37 >> 8);
      cVar61 = (char)((uint)iVar37 >> 0x10);
      cVar62 = (char)((uint)iVar37 >> 0x18);
      iVar37 = -(uint)(CONCAT13(unaff_XMM15_Bh,
                                CONCAT12(unaff_XMM15_Bg,CONCAT11(unaff_XMM15_Bf,unaff_XMM15_Be))) ==
                      CONCAT13(unaff_XMM15_Bh,
                               CONCAT12(unaff_XMM15_Bg,CONCAT11(unaff_XMM15_Bf,unaff_XMM15_Be))));
      cVar63 = (char)iVar37;
      cVar64 = (char)((uint)iVar37 >> 8);
      cVar65 = (char)((uint)iVar37 >> 0x10);
      cVar66 = (char)((uint)iVar37 >> 0x18);
      iVar37 = -(uint)(CONCAT13(unaff_XMM15_Bl,
                                CONCAT12(unaff_XMM15_Bk,CONCAT11(unaff_XMM15_Bj,unaff_XMM15_Bi))) ==
                      CONCAT13(unaff_XMM15_Bl,
                               CONCAT12(unaff_XMM15_Bk,CONCAT11(unaff_XMM15_Bj,unaff_XMM15_Bi))));
      cVar67 = (char)iVar37;
      cVar68 = (char)((uint)iVar37 >> 8);
      cVar69 = (char)((uint)iVar37 >> 0x10);
      cVar70 = (char)((uint)iVar37 >> 0x18);
      iVar37 = -(uint)(CONCAT13(unaff_XMM15_Bp,
                                CONCAT12(unaff_XMM15_Bo,CONCAT11(unaff_XMM15_Bn,unaff_XMM15_Bm))) ==
                      CONCAT13(unaff_XMM15_Bp,
                               CONCAT12(unaff_XMM15_Bo,CONCAT11(unaff_XMM15_Bn,unaff_XMM15_Bm))));
      cVar71 = (char)iVar37;
      cVar72 = (char)((uint)iVar37 >> 8);
      cVar73 = (char)((uint)iVar37 >> 0x10);
      cVar74 = (char)((uint)iVar37 >> 0x18);
      lStack_190 = 8;
      lStack_140 = 0;
      uStack_f8 = 0;
      lStack_130 = 0;
      lStack_118 = 0;
      lStack_110 = 0;
      lStack_138 = 0;
      uStack_f4 = 0;
      lVar31 = 0;
      uVar26 = 0;
      plVar38 = (longlong *)0x0;
      lStack_120 = lVar21;
LAB_14257a600:
      puVar18 = puStack_188;
      fVar15 = fVar16;
      if (cStack_fd == '\0') {
        if ((int)uVar26 == (int)lVar31) {
          do {
            if (puVar29 == puStack_198) goto LAB_14257ac97;
            uVar20 = *puVar29;
            puVar29 = puVar29 + 1;
            lVar31 = *(longlong *)(*(longlong *)(lVar21 + 0x100) + 0x58 + (ulonglong)uVar20 * 0xa0);
          } while (lVar31 == 0);
          lVar32 = *(longlong *)(lVar21 + 0x100) + (ulonglong)uVar20 * 0xa0;
          lVar44 = *(longlong *)(lVar21 + 0x1a0) + (ulonglong)*(uint *)(lVar32 + 0x94) * 0x48;
          uVar22 = *(ulonglong *)
                    (*(longlong *)(lVar21 + 0x1a0) + 0x40 +
                    (ulonglong)*(uint *)(lVar32 + 0x94) * 0x48);
          if ((*(ulonglong *)(lStack_108 + 0x110) < uVar22) &&
             (uVar26 = *(ulonglong *)
                        (*(longlong *)(lVar44 + 0x38) + *(ulonglong *)(lStack_108 + 0x110) * 8),
             uVar26 != 0)) {
            lStack_118 = *(longlong *)(*(longlong *)(lVar44 + 0x18) + 0x10 + ~uVar26 * 0x30);
            uVar26 = *(ulonglong *)(lStack_108 + 0x118);
            if (uVar22 <= uVar26) goto LAB_14257a88d;
LAB_14257a7ed:
            uVar26 = *(ulonglong *)(*(longlong *)(lVar44 + 0x38) + uVar26 * 8);
            if (uVar26 == 0) goto LAB_14257a88d;
            lStack_110 = *(longlong *)(*(longlong *)(lVar44 + 0x18) + 0x10 + ~uVar26 * 0x30);
          }
          else {
            lStack_118 = 0;
            uVar26 = *(ulonglong *)(lStack_108 + 0x118);
            if (uVar26 < uVar22) goto LAB_14257a7ed;
LAB_14257a88d:
            lStack_110 = 0;
          }
          uVar26 = *(ulonglong *)(lStack_108 + 0x120);
          uVar10 = *(ulonglong *)(lVar32 + 0x88);
          if ((uVar26 < uVar10) && (*(longlong *)(*(longlong *)(lVar32 + 0x80) + uVar26 * 8) != 0))
          {
            uStack_f8 = (uint)CONCAT71((int7)((ulonglong)*(longlong *)(lVar32 + 0x80) >> 8),1);
            if ((uVar22 <= uVar26) ||
               (uVar26 = *(ulonglong *)(*(longlong *)(lVar44 + 0x38) + uVar26 * 8), uVar26 == 0)) {
              lStack_140 = 0;
              uVar26 = *(ulonglong *)(lStack_108 + 0x128);
              goto joined_r0x00014257a988;
            }
            lStack_140 = *(longlong *)(*(longlong *)(lVar44 + 0x18) + 0x10 + ~uVar26 * 0x30);
            uVar26 = *(ulonglong *)(lStack_108 + 0x128);
            if (uVar26 < uVar10) goto LAB_14257aa7e;
LAB_14257aabe:
            plVar38 = (longlong *)0x0;
          }
          else {
            uStack_f8 = 0;
            uVar26 = *(ulonglong *)(lStack_108 + 0x128);
joined_r0x00014257a988:
            if (uVar10 <= uVar26) goto LAB_14257aabe;
LAB_14257aa7e:
            if (*(longlong *)(*(longlong *)(lVar32 + 0x80) + uVar26 * 8) == 0) goto LAB_14257aabe;
            plVar38 = (longlong *)0x1;
            if ((uVar26 < uVar22) &&
               (uVar26 = *(ulonglong *)(*(longlong *)(lVar44 + 0x38) + uVar26 * 8), uVar26 != 0)) {
              lStack_130 = *(longlong *)(*(longlong *)(lVar44 + 0x18) + 0x10 + ~uVar26 * 0x30);
            }
            else {
              lStack_130 = 0;
            }
          }
          uVar11 = *(ulonglong *)(lStack_108 + 0x130);
          uVar26 = 0;
          if ((uVar11 < uVar10) && (*(longlong *)(*(longlong *)(lVar32 + 0x80) + uVar11 * 8) != 0))
          {
            uStack_f4 = (uint)CONCAT71((int7)((ulonglong)*(longlong *)(lVar32 + 0x80) >> 8),1);
            if ((uVar11 < uVar22) &&
               (uVar22 = *(ulonglong *)(*(longlong *)(lVar44 + 0x38) + uVar11 * 8), uVar22 != 0)) {
              lStack_138 = *(longlong *)(*(longlong *)(lVar44 + 0x18) + 0x10 + ~uVar22 * 0x30);
            }
            else {
              lStack_138 = 0;
            }
          }
          else {
            uStack_f4 = 0;
          }
          lStack_190 = *(longlong *)(lVar32 + 0x50);
          lVar21 = lStack_120;
        }
        iVar37 = (int)uVar26;
        uVar26 = (ulonglong)~*(uint *)(lStack_190 + 8 + uVar26 * 0x10);
        lVar44 = lStack_118 + uVar26 * 0xc;
        lVar32 = uVar26 * 0x30 + lStack_110;
        plVar39 = (longlong *)0x0;
        plVar41 = (longlong *)(uVar26 * 0x58 + lStack_140);
        if ((uStack_f8 & 1) == 0) {
          plVar41 = plVar39;
        }
        plVar43 = (longlong *)(lStack_138 + uVar26 * 0x28);
        if ((uStack_f4 & 1) == 0) {
          plVar43 = plVar39;
        }
        if (((ulonglong)plVar38 & 1) != 0) {
          pfVar5 = (float *)(lStack_130 + uVar26 * 8);
          goto joined_r0x00014257abc7;
        }
      }
      else {
        if ((int)uVar26 == (int)lVar31) {
          do {
            if (puVar29 == puStack_198) goto LAB_14257ac97;
            uVar20 = *puVar29;
            puVar29 = puVar29 + 1;
            lVar31 = *(longlong *)(*(longlong *)(lVar21 + 0x1a0) + 0x10 + (ulonglong)uVar20 * 0x48);
          } while (lVar31 == 0);
          lVar44 = *(longlong *)(lVar21 + 0x1a0) + (ulonglong)uVar20 * 0x48;
          uVar22 = *(ulonglong *)(lVar44 + 0x40);
          if ((*(ulonglong *)(lStack_108 + 0x110) < uVar22) &&
             (uVar26 = *(ulonglong *)
                        (*(longlong *)(lVar44 + 0x38) + *(ulonglong *)(lStack_108 + 0x110) * 8),
             uVar26 != 0)) {
            lStack_118 = *(longlong *)(*(longlong *)(lVar44 + 0x18) + 0x10 + ~uVar26 * 0x30);
            uVar26 = *(ulonglong *)(lStack_108 + 0x118);
            if (uVar22 <= uVar26) goto LAB_14257a81b;
LAB_14257a786:
            uVar26 = *(ulonglong *)(*(longlong *)(lVar44 + 0x38) + uVar26 * 8);
            if (uVar26 == 0) goto LAB_14257a81b;
            lStack_110 = *(longlong *)(*(longlong *)(lVar44 + 0x18) + 0x10 + ~uVar26 * 0x30);
            uVar26 = *(ulonglong *)(lStack_108 + 0x120);
            if (uVar26 < uVar22) goto LAB_14257a83d;
LAB_14257a923:
            uStack_f8 = 0;
            uVar26 = *(ulonglong *)(lStack_108 + 0x128);
            if (uVar22 <= uVar26) goto LAB_14257a993;
LAB_14257a940:
            uVar26 = *(ulonglong *)(*(longlong *)(lVar44 + 0x38) + uVar26 * 8);
            if (uVar26 == 0) goto LAB_14257a993;
            lStack_130 = *(longlong *)(*(longlong *)(lVar44 + 0x18) + 0x10 + ~uVar26 * 0x30);
            plVar38 = (longlong *)0x1;
          }
          else {
            lStack_118 = 0;
            uVar26 = *(ulonglong *)(lStack_108 + 0x118);
            if (uVar26 < uVar22) goto LAB_14257a786;
LAB_14257a81b:
            lStack_110 = 0;
            uVar26 = *(ulonglong *)(lStack_108 + 0x120);
            if (uVar22 <= uVar26) goto LAB_14257a923;
LAB_14257a83d:
            uVar26 = *(ulonglong *)(*(longlong *)(lVar44 + 0x38) + uVar26 * 8);
            if (uVar26 == 0) goto LAB_14257a923;
            lStack_140 = *(longlong *)(*(longlong *)(lVar44 + 0x18) + 0x10 + ~uVar26 * 0x30);
            uStack_f8 = (uint)CONCAT71((int7)((ulonglong)lStack_140 >> 8),1);
            uVar26 = *(ulonglong *)(lStack_108 + 0x128);
            if (uVar26 < uVar22) goto LAB_14257a940;
LAB_14257a993:
            plVar38 = (longlong *)0x0;
          }
          uVar26 = 0;
          if ((*(ulonglong *)(lStack_108 + 0x130) < uVar22) &&
             (uVar22 = *(ulonglong *)
                        (*(longlong *)(lVar44 + 0x38) + *(ulonglong *)(lStack_108 + 0x130) * 8),
             uVar22 != 0)) {
            lStack_138 = *(longlong *)(*(longlong *)(lVar44 + 0x18) + 0x10 + ~uVar22 * 0x30);
            uStack_f4 = (uint)CONCAT71((int7)((ulonglong)lStack_138 >> 8),1);
          }
          else {
            uStack_f4 = 0;
          }
        }
        iVar37 = (int)uVar26;
        lVar44 = lStack_118 + uVar26 * 0xc;
        lVar32 = uVar26 * 0x30 + lStack_110;
        plVar39 = (longlong *)0x0;
        plVar41 = (longlong *)(uVar26 * 0x58 + lStack_140);
        if ((uStack_f8 & 1) == 0) {
          plVar41 = plVar39;
        }
        plVar43 = (longlong *)(lStack_138 + uVar26 * 0x28);
        if ((uStack_f4 & 1) == 0) {
          plVar43 = plVar39;
        }
        if (((ulonglong)plVar38 & 1) != 0) {
          pfVar5 = (float *)(lStack_130 + uVar26 * 8);
joined_r0x00014257abc7:
          plVar39 = (longlong *)0x1;
          if (pfVar5 != (float *)0x0) {
            plVar39 = (longlong *)0x1;
            fVar15 = *pfVar5;
          }
        }
      }
      uVar47 = 0;
      plVar38 = plVar41;
      if ((plVar41 != (longlong *)0x0) ||
         (uVar47 = 1, plVar38 = plVar43, plVar43 != (longlong *)0x0)) {
        plStack_128 = (longlong *)CONCAT44(plStack_128._4_4_,iVar37 + 1);
        uStack_200 = *plVar38;
        uStack_15c = uVar47;
        plStack_150 = plVar39;
        lStack_148 = lVar44;
        if (plStack_1a0[3] != 0) {
          lStack_158 = uStack_200;
          uVar26 = pdb_1400af0a0(plVar23,&uStack_200);
          lVar44 = *plStack_1a0;
          bVar46 = (byte)(uVar26 >> 0x39);
          auVar51 = ZEXT216(CONCAT11(bVar46,bVar46));
          auVar51 = pshuflw(auVar51,auVar51,0);
          lVar28 = 0;
          do {
            uVar26 = uVar26 & plStack_1a0[1];
            auVar49 = *(undefined1 (*) [16])(lVar44 + uVar26);
            auVar56[0] = -(auVar49[0] == auVar51[0]);
            auVar56[1] = -(auVar49[1] == auVar51[1]);
            auVar56[2] = -(auVar49[2] == auVar51[2]);
            auVar56[3] = -(auVar49[3] == auVar51[3]);
            auVar56[4] = -(auVar49[4] == auVar51[4]);
            auVar56[5] = -(auVar49[5] == auVar51[5]);
            auVar56[6] = -(auVar49[6] == auVar51[6]);
            auVar56[7] = -(auVar49[7] == auVar51[7]);
            auVar56[8] = -(auVar49[8] == auVar51[0]);
            auVar56[9] = -(auVar49[9] == auVar51[1]);
            auVar56[10] = -(auVar49[10] == auVar51[2]);
            auVar56[0xb] = -(auVar49[0xb] == auVar51[3]);
            auVar56[0xc] = -(auVar49[0xc] == auVar51[4]);
            auVar56[0xd] = -(auVar49[0xd] == auVar51[5]);
            auVar56[0xe] = -(auVar49[0xe] == auVar51[6]);
            auVar56[0xf] = -(auVar49[0xf] == auVar51[7]);
            uVar34 = (ushort)(SUB161(auVar56 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar56 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar56 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar56 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar56 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar56 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar56 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar56 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar56 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar56 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar56 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar56 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar56 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar56 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar56 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar56[0xf] >> 7) << 0xf;
            uVar20 = (uint)uVar34;
            while (uVar34 != 0) {
              uVar35 = 0;
              for (uVar13 = uVar20; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
                uVar35 = uVar35 + 1;
              }
              lVar21 = (uVar35 + uVar26 & plStack_1a0[1]) * -0x2b0;
              if (lStack_158 == *(longlong *)(lVar44 + -0x2b0 + lVar21)) {
                lVar44 = lVar44 + lVar21;
                if ((*(ulonglong *)(lVar44 + -0x298) < 2) || (*(float *)(lVar44 + -0x278) <= 0.0)) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_14351c068);
                }
                cVar25 = *(char *)(lVar44 + -9);
                if (plVar41 == (longlong *)0x0) {
                  fVar55 = 0.0;
                  if ((int)plVar38[1] == 1) {
                    uVar48 = *(undefined8 *)((longlong)plVar38 + 0xc);
                    fVar52 = 0.0;
                    fVar55 = 0.0;
                    goto LAB_14257a1c8;
                  }
LAB_14257a205:
                  uStack_fc = CONCAT31(uStack_fc._1_3_,cVar25);
                  uVar53 = 0;
                  uVar47 = pdb_140def6c0((longlong)plVar38 + 0xc);
                  fVar52 = 0.0;
                  if (plVar43 != (longlong *)0x0) {
                    fVar52 = fVar17;
                  }
                  fVar52 = fVar55 + *(float *)((longlong)plVar38 + 0x14) +
                                    *(float *)((longlong)plVar38 + 0x14) + fVar52;
                  uVar48 = CONCAT44(uVar53,uVar47);
                  uVar47 = 0;
                  cVar25 = (char)uStack_fc;
                  fVar55 = fVar52;
                  if (plVar41 != (longlong *)0x0) goto LAB_14257a1dc;
LAB_14257a255:
                  puVar24 = (undefined4 *)(lVar32 + 0x10);
                  fVar59 = *(float *)(lVar32 + 0x14);
                  plVar38 = (longlong *)(lVar32 + 0x18);
LAB_14257a26e:
                  uVar53 = 0;
                }
                else {
                  if (*(float *)(plVar41 + 6) <= fVar17) {
                    fVar55 = _DAT_14300b140;
                    if (cVar25 == '\0') {
                      fVar55 = 0.0;
                    }
                  }
                  else {
                    fVar55 = *(float *)((longlong)plVar41 + 0x2c) * _DAT_142e36f50 + _DAT_14302c60c;
                  }
                  if ((char)plVar38[1] == '\0') goto LAB_14257a205;
                  uVar48 = *(undefined8 *)((longlong)plVar38 + 0xc);
                  fVar52 = fVar55;
                  if (fVar17 < *(float *)(plVar41 + 6)) {
                    if ((*(float *)((longlong)plVar41 + 0x34) == fVar16) &&
                       (!NAN(*(float *)((longlong)plVar41 + 0x34)) && !NAN(fVar16))) {
                      uVar20 = (*(int *)((longlong)plVar41 + 0x3c) << 0x1f) >> 0x1f;
                      fVar52 = fVar55 * (float)(~uVar20 & _DAT_142e378e0 |
                                               (uint)_DAT_142e36f28 & uVar20);
                      fVar55 = fVar55 * (float)(~((*(int *)((longlong)plVar41 + 0x3c) << 0x1f) >>
                                                 0x1f) & _UNK_142e378e4);
                    }
                  }
LAB_14257a1c8:
                  fVar52 = (float)*(undefined8 *)((longlong)plVar38 + 0x1c) + fVar52;
                  fVar55 = (float)((ulonglong)*(undefined8 *)((longlong)plVar38 + 0x1c) >> 0x20) +
                           fVar55;
                  uVar47 = 1;
                  if (plVar41 == (longlong *)0x0) goto LAB_14257a255;
LAB_14257a1dc:
                  plVar38 = plVar41 + (ulonglong)*(uint *)(plVar41 + 1) + 2;
                  puVar24 = (undefined4 *)
                            ((longlong)plVar41 + (ulonglong)*(uint *)(plVar41 + 1) * 8 + 0xc);
                  fVar59 = *(float *)((longlong)plVar41 + 0x4c);
                  if (*(float *)(plVar41 + 6) <= fVar17) {
                    fVar59 = fVar59 + _DAT_143007988;
                    goto LAB_14257a26e;
                  }
                  fVar52 = 0.0;
                  fVar55 = 0.0;
                  uVar53 = 1;
                }
                lVar21 = lStack_148;
                uVar6 = (undefined4)*plVar38;
                uVar7 = *puVar24;
                uVar36 = *(undefined4 *)(lVar44 + -0x34);
                uStack_1bc = uVar7;
                fStack_1b8 = fVar59;
                uStack_1b4 = uVar6;
                if (plVar41 != (longlong *)0x0) {
                  cVar25 = (char)plVar41[8];
                  uStack_1cc = 0;
                  if (cVar25 == '\0') {
                    uVar20 = (uint)*(byte *)((longlong)plVar41 + 0x54);
                    uVar30 = 0;
                    uStack_1f4 = uVar36;
                  }
                  else {
                    uVar20 = 0;
                    if (cVar25 != '\x01') {
                      uVar20 = *(byte *)((longlong)plVar41 + 0x41) | 2;
                      uStack_1cc = *(undefined4 *)((longlong)plVar41 + 0x44);
                    }
                    uVar30 = 0;
                    uStack_1f4 = uVar36;
                    if (cVar25 == '\x02') {
                      uVar30 = (undefined4)plVar41[9];
                    }
                  }
                  goto LAB_14257a560;
                }
                uVar30 = 0;
                if (cVar25 == '\0') {
                  uStack_1cc = 0;
                  uVar20 = 0;
                  uStack_1f4 = uVar36;
                  goto LAB_14257a560;
                }
                uVar20 = 3;
                uStack_200 = lStack_158;
                if (((*(char *)(lVar44 + -9) != '\x01') || (1 < *(uint *)(lVar44 + -0x50))) ||
                   (uVar20 = 0.0 < *(float *)(lVar44 + -0x14) ^ 3, *(float *)(lVar44 + -0x14) <= 0.0
                   )) {
                  plVar38 = plStack_178;
                  if (plStack_180[3] == 0) goto LAB_14257a54e;
                  uStack_fc = uVar36;
                  uVar26 = pdb_1400af0a0(plVar2,&uStack_200);
                  bVar46 = (byte)(uVar26 >> 0x39);
                  auVar51 = ZEXT216(CONCAT11(bVar46,bVar46));
                  auVar51 = pshuflw(auVar51,auVar51,0);
                  lVar44 = 0;
                  goto LAB_14257a49d;
                }
                plVar38 = plStack_168;
                if (plStack_170[3] == 0) goto LAB_14257a54e;
                uStack_fc = uVar36;
                uVar26 = pdb_1400af0a0(plVar3,&uStack_200);
                bVar46 = (byte)(uVar26 >> 0x39);
                auVar51 = ZEXT216(CONCAT11(bVar46,bVar46));
                auVar51 = pshuflw(auVar51,auVar51,0);
                lVar44 = 0;
                goto LAB_14257a38e;
              }
              uVar34 = (ushort)(uVar20 - 1) & (ushort)uVar20;
              uVar20 = CONCAT22((short)(uVar20 - 1 >> 0x10),uVar34);
            }
            auVar54[0] = -(auVar49[0] == cVar19);
            auVar54[1] = -(auVar49[1] == cVar60);
            auVar54[2] = -(auVar49[2] == cVar61);
            auVar54[3] = -(auVar49[3] == cVar62);
            auVar54[4] = -(auVar49[4] == cVar63);
            auVar54[5] = -(auVar49[5] == cVar64);
            auVar54[6] = -(auVar49[6] == cVar65);
            auVar54[7] = -(auVar49[7] == cVar66);
            auVar54[8] = -(auVar49[8] == cVar67);
            auVar54[9] = -(auVar49[9] == cVar68);
            auVar54[10] = -(auVar49[10] == cVar69);
            auVar54[0xb] = -(auVar49[0xb] == cVar70);
            auVar54[0xc] = -(auVar49[0xc] == cVar71);
            auVar54[0xd] = -(auVar49[0xd] == cVar72);
            auVar54[0xe] = -(auVar49[0xe] == cVar73);
            auVar54[0xf] = -(auVar49[0xf] == cVar74);
            lVar21 = lStack_120;
            if ((((((((((((((((SUB161(auVar54 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar54 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar54 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar54 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar54 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar54 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar54 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar54 >> 0x3f,0) & 1) != 0) || (SUB161(auVar54 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar54 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar54 >> 0x57,0) & 1) != 0) || (SUB161(auVar54 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar54 >> 0x67,0) & 1) != 0) || (SUB161(auVar54 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar54 >> 0x77,0) & 1) != 0) || auVar54[0xf] < '\0') break;
            uVar26 = uVar26 + lVar28 + 0x10;
            lVar28 = lVar28 + 0x10;
          } while( true );
        }
        goto LAB_14257ac80;
      }
      goto LAB_14257ad93;
    }
LAB_14257adda:
    pdb_142dc7890(&UNK_143326860);
LAB_14257ade6:
    pdb_142dc8070(&UNK_14351bd9f,0x2e);
  }
  pdb_142dc8070(&UNK_14351c704,0x3c,0);
LAB_14257ae29:
  pdb_142dc8070(&UNK_14351c704,0x3c);
  pcVar12 = (code *)swi(3);
  plVar23 = (longlong *)(*pcVar12)();
  return plVar23;
LAB_14257a38e:
  uVar26 = uVar26 & plStack_170[1];
  pcVar4 = (char *)(*plStack_170 + uVar26);
  auVar49[0] = -(*pcVar4 == auVar51[0]);
  auVar49[1] = -(pcVar4[1] == auVar51[1]);
  auVar49[2] = -(pcVar4[2] == auVar51[2]);
  auVar49[3] = -(pcVar4[3] == auVar51[3]);
  auVar49[4] = -(pcVar4[4] == auVar51[4]);
  auVar49[5] = -(pcVar4[5] == auVar51[5]);
  auVar49[6] = -(pcVar4[6] == auVar51[6]);
  auVar49[7] = -(pcVar4[7] == auVar51[7]);
  auVar49[8] = -(pcVar4[8] == auVar51[0]);
  auVar49[9] = -(pcVar4[9] == auVar51[1]);
  auVar49[10] = -(pcVar4[10] == auVar51[2]);
  auVar49[0xb] = -(pcVar4[0xb] == auVar51[3]);
  auVar49[0xc] = -(pcVar4[0xc] == auVar51[4]);
  auVar49[0xd] = -(pcVar4[0xd] == auVar51[5]);
  auVar49[0xe] = -(pcVar4[0xe] == auVar51[6]);
  auVar49[0xf] = -(pcVar4[0xf] == auVar51[7]);
  uVar34 = (ushort)(SUB161(auVar49 >> 7,0) & 1) | (ushort)(SUB161(auVar49 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar49 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar49 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar49 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar49 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar49 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar49 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar49 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar49 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar49 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar49 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar49 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar49 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar49 >> 0x77,0) & 1) << 0xe | (ushort)(auVar49[0xf] >> 7) << 0xf;
  uVar35 = (uint)uVar34;
  while (uVar34 != 0) {
    uVar13 = 0;
    for (uVar14 = uVar35; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
      uVar13 = uVar13 + 1;
    }
    lVar32 = *plStack_170 + (uVar13 + uVar26 & plStack_170[1]) * -0x10;
    if (lStack_158 == *(longlong *)(lVar32 + -0x10)) goto LAB_14257a502;
    uVar34 = (ushort)(uVar35 - 1) & (ushort)uVar35;
    uVar35 = CONCAT22((short)(uVar35 - 1 >> 0x10),uVar34);
  }
  auVar57[0] = -(*pcVar4 == -1);
  auVar57[1] = -(pcVar4[1] == -1);
  auVar57[2] = -(pcVar4[2] == -1);
  auVar57[3] = -(pcVar4[3] == -1);
  auVar57[4] = -(pcVar4[4] == -1);
  auVar57[5] = -(pcVar4[5] == -1);
  auVar57[6] = -(pcVar4[6] == -1);
  auVar57[7] = -(pcVar4[7] == -1);
  auVar57[8] = -(pcVar4[8] == -1);
  auVar57[9] = -(pcVar4[9] == -1);
  auVar57[10] = -(pcVar4[10] == -1);
  auVar57[0xb] = -(pcVar4[0xb] == -1);
  auVar57[0xc] = -(pcVar4[0xc] == -1);
  auVar57[0xd] = -(pcVar4[0xd] == -1);
  auVar57[0xe] = -(pcVar4[0xe] == -1);
  auVar57[0xf] = -(pcVar4[0xf] == -1);
  plVar38 = plStack_168;
  if ((((((((((((((((SUB161(auVar57 >> 7,0) & 1) != 0 || (SUB161(auVar57 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar57 >> 0x17,0) & 1) != 0) || (SUB161(auVar57 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar57 >> 0x27,0) & 1) != 0) || (SUB161(auVar57 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar57 >> 0x37,0) & 1) != 0) || (SUB161(auVar57 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar57 >> 0x47,0) & 1) != 0) || (SUB161(auVar57 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar57 >> 0x57,0) & 1) != 0) || (SUB161(auVar57 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar57 >> 0x67,0) & 1) != 0) || (SUB161(auVar57 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar57 >> 0x77,0) & 1) != 0) || auVar57[0xf] < '\0') goto LAB_14257a537;
  uVar26 = uVar26 + lVar44 + 0x10;
  lVar44 = lVar44 + 0x10;
  goto LAB_14257a38e;
LAB_14257a49d:
  uVar26 = uVar26 & plStack_180[1];
  pcVar4 = (char *)(*plStack_180 + uVar26);
  auVar50[0] = -(*pcVar4 == auVar51[0]);
  auVar50[1] = -(pcVar4[1] == auVar51[1]);
  auVar50[2] = -(pcVar4[2] == auVar51[2]);
  auVar50[3] = -(pcVar4[3] == auVar51[3]);
  auVar50[4] = -(pcVar4[4] == auVar51[4]);
  auVar50[5] = -(pcVar4[5] == auVar51[5]);
  auVar50[6] = -(pcVar4[6] == auVar51[6]);
  auVar50[7] = -(pcVar4[7] == auVar51[7]);
  auVar50[8] = -(pcVar4[8] == auVar51[0]);
  auVar50[9] = -(pcVar4[9] == auVar51[1]);
  auVar50[10] = -(pcVar4[10] == auVar51[2]);
  auVar50[0xb] = -(pcVar4[0xb] == auVar51[3]);
  auVar50[0xc] = -(pcVar4[0xc] == auVar51[4]);
  auVar50[0xd] = -(pcVar4[0xd] == auVar51[5]);
  auVar50[0xe] = -(pcVar4[0xe] == auVar51[6]);
  auVar50[0xf] = -(pcVar4[0xf] == auVar51[7]);
  uVar34 = (ushort)(SUB161(auVar50 >> 7,0) & 1) | (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar50 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar50 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar50 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar50 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar50 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar50 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar50 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar50 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar50 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar50 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar50 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar50 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe | (ushort)(auVar50[0xf] >> 7) << 0xf;
  uVar35 = (uint)uVar34;
  while (uVar34 != 0) {
    uVar13 = 0;
    for (uVar14 = uVar35; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x80000000) {
      uVar13 = uVar13 + 1;
    }
    lVar32 = *plStack_180 + (uVar13 + uVar26 & plStack_180[1]) * -0x10;
    if (lStack_158 == *(longlong *)(lVar32 + -0x10)) goto LAB_14257a502;
    uVar34 = (ushort)(uVar35 - 1) & (ushort)uVar35;
    uVar35 = CONCAT22((short)(uVar35 - 1 >> 0x10),uVar34);
  }
  auVar58[0] = -(*pcVar4 == -1);
  auVar58[1] = -(pcVar4[1] == -1);
  auVar58[2] = -(pcVar4[2] == -1);
  auVar58[3] = -(pcVar4[3] == -1);
  auVar58[4] = -(pcVar4[4] == -1);
  auVar58[5] = -(pcVar4[5] == -1);
  auVar58[6] = -(pcVar4[6] == -1);
  auVar58[7] = -(pcVar4[7] == -1);
  auVar58[8] = -(pcVar4[8] == -1);
  auVar58[9] = -(pcVar4[9] == -1);
  auVar58[10] = -(pcVar4[10] == -1);
  auVar58[0xb] = -(pcVar4[0xb] == -1);
  auVar58[0xc] = -(pcVar4[0xc] == -1);
  auVar58[0xd] = -(pcVar4[0xd] == -1);
  auVar58[0xe] = -(pcVar4[0xe] == -1);
  auVar58[0xf] = -(pcVar4[0xf] == -1);
  plVar38 = plStack_178;
  if ((((((((((((((((SUB161(auVar58 >> 7,0) & 1) != 0 || (SUB161(auVar58 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar58 >> 0x17,0) & 1) != 0) || (SUB161(auVar58 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar58 >> 0x27,0) & 1) != 0) || (SUB161(auVar58 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar58 >> 0x37,0) & 1) != 0) || (SUB161(auVar58 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar58 >> 0x47,0) & 1) != 0) || (SUB161(auVar58 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar58 >> 0x57,0) & 1) != 0) || (SUB161(auVar58 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar58 >> 0x67,0) & 1) != 0) || (SUB161(auVar58 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar58 >> 0x77,0) & 1) != 0) || auVar58[0xf] < '\0') goto LAB_14257a537;
  uVar26 = uVar26 + lVar44 + 0x10;
  lVar44 = lVar44 + 0x10;
  goto LAB_14257a49d;
LAB_14257a502:
  plVar38 = (longlong *)(lVar32 + -8);
  cVar19 = -1;
  cVar60 = -1;
  cVar61 = -1;
  cVar62 = -1;
  cVar63 = -1;
  cVar64 = -1;
  cVar65 = -1;
  cVar66 = -1;
  cVar67 = -1;
  cVar68 = -1;
  cVar69 = -1;
  cVar70 = -1;
  cVar71 = -1;
  cVar72 = -1;
  cVar73 = -1;
  cVar74 = -1;
  uVar36 = uStack_fc;
  goto LAB_14257a54e;
LAB_14257a537:
  cVar19 = -1;
  cVar60 = -1;
  cVar61 = -1;
  cVar62 = -1;
  cVar63 = -1;
  cVar64 = -1;
  cVar65 = -1;
  cVar66 = -1;
  cVar67 = -1;
  cVar68 = -1;
  cVar69 = -1;
  cVar70 = -1;
  cVar71 = -1;
  cVar72 = -1;
  cVar73 = -1;
  cVar74 = -1;
  uVar36 = uStack_fc;
LAB_14257a54e:
  uStack_1cc = (undefined4)*plVar38;
  uStack_1f4 = uVar36;
LAB_14257a560:
  uStack_200 = CONCAT44(fVar59,uVar7);
  uStack_1d8 = uStack_15c;
  uStack_1c4 = 0;
  uStack_1f8 = uVar6;
  uStack_1f0 = uVar48;
  fStack_1e8 = fVar52;
  fStack_1e4 = fVar55;
  fStack_1e0 = fVar15;
  uStack_1dc = uVar47;
  uStack_1d4 = uVar53;
  uStack_1d0 = uVar20;
  uStack_1c8 = uVar30;
  pdb_140954b60(uVar27,lVar21,&uStack_1bc,uStack_1f4,&uStack_200,&UNK_14351c080);
  lVar21 = lStack_120;
LAB_14257ac80:
  uVar26 = (ulonglong)plStack_128 & 0xffffffff;
  plVar38 = plStack_150;
  goto LAB_14257a600;
LAB_14257ac97:
  pdb_140e9a350(puStack_188);
  pdb_140e9a350();
  LOCK();
  plVar23 = (longlong *)*puVar18;
  bVar45 = plVar23 == (longlong *)0x8;
  if (bVar45) {
    *puVar18 = 0;
    plVar23 = (longlong *)0x8;
  }
  UNLOCK();
  if (!bVar45) {
    plVar23 = (longlong *)pdb_142dbca40(puVar18,0);
  }
  if (lStack_1b0 != 0) {
    plVar23 = (longlong *)pdb_140e97000();
    if (((char)plVar23[0xd] != '\x01') &&
       (plVar23 = (longlong *)pdb_142d8ec20(plVar23,0), plVar23 == (longlong *)0x0))
    goto LAB_14257adda;
    if (*plVar23 != 0) goto LAB_14257ad86;
    *plVar23 = -1;
    plStack_128 = plVar23;
    pdb_140e95370(plVar23 + 1,uStack_1a8);
    *plStack_128 = *plStack_128 + 1;
    plVar23 = plStack_128;
  }
  return plVar23;
}

