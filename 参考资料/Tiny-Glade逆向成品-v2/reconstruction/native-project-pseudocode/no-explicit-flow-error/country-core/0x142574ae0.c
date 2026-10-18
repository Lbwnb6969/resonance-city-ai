// VA 0x142574ae0, PDB extent 3582 bytes
// country_core::render::nani::systems::nani_update_cloth
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/systems.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::render::nani::systems::nani_update_cloth
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/systems.rs
   Extent: 3582 */

longlong * pdb_142574ae0(uint *param_1,longlong *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  char *pcVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  code *pcVar8;
  char cVar9;
  char cVar10;
  char cVar11;
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
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  uint uVar29;
  char cVar30;
  char cVar31;
  ushort uVar32;
  uint uVar33;
  int iVar34;
  undefined4 uVar35;
  longlong lVar36;
  ulonglong uVar37;
  longlong *plVar38;
  longlong lVar39;
  ulonglong uVar40;
  undefined8 uVar41;
  longlong lVar42;
  uint *puVar43;
  undefined *puVar44;
  longlong lVar45;
  uint uVar46;
  longlong lVar47;
  longlong lVar48;
  undefined *puVar49;
  ulonglong uVar50;
  float *pfVar51;
  longlong *plVar52;
  bool bVar53;
  byte bVar54;
  float fVar57;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  char unaff_XMM7_Ba;
  char unaff_XMM7_Bb;
  char unaff_XMM7_Bc;
  char unaff_XMM7_Bd;
  char unaff_XMM7_Be;
  char unaff_XMM7_Bf;
  char unaff_XMM7_Bg;
  char unaff_XMM7_Bh;
  char unaff_XMM7_Bi;
  char unaff_XMM7_Bj;
  char unaff_XMM7_Bk;
  char unaff_XMM7_Bl;
  char unaff_XMM7_Bm;
  char unaff_XMM7_Bn;
  char unaff_XMM7_Bo;
  char unaff_XMM7_Bp;
  float fVar64;
  undefined1 auVar65 [16];
  float fVar66;
  undefined1 auStack_218 [8];
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  float fStack_1b0;
  float fStack_1ac;
  undefined8 uStack_198;
  float fStack_190;
  undefined8 uStack_188;
  longlong lStack_180;
  undefined8 uStack_178;
  ulonglong uStack_170;
  undefined8 *puStack_168;
  longlong *plStack_160;
  longlong lStack_158;
  undefined8 *puStack_150;
  longlong lStack_148;
  undefined *puStack_140;
  longlong lStack_138;
  longlong lStack_130;
  uint *puStack_128;
  longlong lStack_120;
  longlong lStack_118;
  longlong lStack_110;
  uint uStack_104;
  longlong *plStack_100;
  byte bStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  plVar52 = param_2;
  cVar30 = pdb_140e94b40();
  if (cVar30 == '\0') {
    lStack_180 = 0;
    goto LAB_142574cf4;
  }
  plVar52 = (longlong *)&UNK_14351c80c;
  uVar50 = 0x36;
  uVar40 = 0x36;
  lVar36 = pdb_142585200(&UNK_14351c80c);
  if (lVar36 != 1) goto LAB_142574bd0;
  if (uVar40 < 0x37) {
    plVar52 = (longlong *)&UNK_14351c80c;
    uVar37 = pdb_142585200(&UNK_14351c80c);
    if ((uVar37 & 1) == 0) {
LAB_142574bd0:
      puVar44 = &UNK_14351bdcd;
      puVar49 = &UNK_14351bd9f;
      do {
        bVar54 = puVar44[-1];
        uVar33 = (uint)(char)bVar54;
        if ((char)bVar54 < '\0') {
          bVar5 = puVar44[-2];
          if ((char)bVar5 < -0x40) {
            bVar6 = puVar44[-3];
            if ((char)bVar6 < -0x40) {
              pbVar1 = puVar44 + -4;
              puVar44 = puVar44 + -4;
              uVar33 = bVar6 & 0x3f | (*pbVar1 & 7) << 6;
            }
            else {
              puVar44 = puVar44 + -3;
              uVar33 = bVar6 & 0xf;
            }
            uVar33 = bVar5 & 0x3f | uVar33 << 6;
          }
          else {
            puVar44 = puVar44 + -2;
            uVar33 = bVar5 & 0x1f;
          }
          uVar33 = (uint)(bVar54 & 0x3f) | uVar33 << 6;
          if (uVar33 != 0x5c) goto LAB_142574c54;
LAB_142574c6d:
          if ((undefined *)0x2e < puVar44 + -0x14351bd9e) goto LAB_1425754dc;
          lVar36 = 0x2e - (longlong)(puVar44 + -0x14351bd9e);
          puVar49 = puVar44 + 1;
          goto LAB_142574c90;
        }
        puVar44 = puVar44 + -1;
        if (uVar33 == 0x5c) goto LAB_142574c6d;
LAB_142574c54:
        if (uVar33 == 0x2f) goto LAB_142574c6d;
      } while (puVar44 != &UNK_14351bd9f);
      lVar36 = 0x2e;
LAB_142574c90:
      plVar38 = (longlong *)pdb_140e97000();
      if ((char)plVar38[0xd] != '\x01') goto LAB_142575498;
LAB_142574c9f:
      if (*plVar38 == 0) {
        *plVar38 = -1;
        plStack_100 = plVar38;
        uStack_178 = pdb_140e94f10(plVar38 + 1,plVar52,uVar50,puVar49,lVar36,1,0);
        *plStack_100 = *plStack_100 + 1;
        lStack_180 = 1;
LAB_142574cf4:
        uVar41 = CONCAT71((int7)((ulonglong)plVar52 >> 8),0x11);
        param_3 = (undefined8 *)pdb_1409d2d80(*param_3);
        uVar29 = _UNK_142e377e4;
        uVar33 = _DAT_142e377e0;
        fVar28 = _DAT_142e36f28;
        lVar47 = *(longlong *)param_1;
        puVar43 = param_1 + 2;
        param_1 = *(uint **)(lVar47 + 0xf8);
        bStack_f1 = *(byte *)(lVar47 + 0x108);
        puVar49 = (undefined *)0x0;
        lStack_148 = 8;
        iVar34 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                                  CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                        CONCAT13(unaff_XMM7_Bd,
                                 CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
        unaff_XMM7_Ba = (char)iVar34;
        unaff_XMM7_Bb = (char)((uint)iVar34 >> 8);
        unaff_XMM7_Bc = (char)((uint)iVar34 >> 0x10);
        unaff_XMM7_Bd = (char)((uint)iVar34 >> 0x18);
        iVar34 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                                  CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                        CONCAT13(unaff_XMM7_Bh,
                                 CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
        unaff_XMM7_Be = (char)iVar34;
        unaff_XMM7_Bf = (char)((uint)iVar34 >> 8);
        unaff_XMM7_Bg = (char)((uint)iVar34 >> 0x10);
        unaff_XMM7_Bh = (char)((uint)iVar34 >> 0x18);
        iVar34 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                                  CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                        CONCAT13(unaff_XMM7_Bl,
                                 CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
        unaff_XMM7_Bi = (char)iVar34;
        unaff_XMM7_Bj = (char)((uint)iVar34 >> 8);
        unaff_XMM7_Bk = (char)((uint)iVar34 >> 0x10);
        unaff_XMM7_Bl = (char)((uint)iVar34 >> 0x18);
        iVar34 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                                  CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                        CONCAT13(unaff_XMM7_Bp,
                                 CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
        unaff_XMM7_Bm = (char)iVar34;
        unaff_XMM7_Bn = (char)((uint)iVar34 >> 8);
        unaff_XMM7_Bo = (char)((uint)iVar34 >> 0x10);
        unaff_XMM7_Bp = (char)((uint)iVar34 >> 0x18);
        plStack_100 = (longlong *)0x0;
        uVar40 = 0;
        lVar48 = *(longlong *)puVar43;
        puVar43 = param_1 + *(longlong *)(lVar47 + 0x100);
        lVar42 = *param_2;
        uStack_188 = uVar41;
        lVar45 = 0;
        lVar36 = 0;
        plVar52 = (longlong *)0x0;
joined_r0x000142574d77:
        uVar50 = (ulonglong)bStack_f1;
        uVar37 = uVar40;
        puStack_150 = param_3;
        if (bStack_f1 != 0) {
          if ((int)uVar40 != (int)puVar49) goto LAB_142575043;
          do {
            if (param_1 == puVar43) goto LAB_1425753b5;
            uVar7 = *param_1;
            param_1 = param_1 + 1;
            puVar49 = *(undefined **)
                       (*(longlong *)(lVar48 + 0x1a0) + 0x10 + (ulonglong)uVar7 * 0x48);
          } while (puVar49 == (undefined *)0x0);
          lVar45 = *(longlong *)(lVar48 + 0x1a0) + (ulonglong)uVar7 * 0x48;
          uVar50 = *(ulonglong *)(lVar45 + 0x40);
          if ((*(ulonglong *)(lVar47 + 0x110) < uVar50) &&
             (uVar40 = *(ulonglong *)
                        (*(longlong *)(lVar45 + 0x38) + *(ulonglong *)(lVar47 + 0x110) * 8),
             uVar40 != 0)) {
            plVar52 = *(longlong **)(*(longlong *)(lVar45 + 0x18) + 0x10 + ~uVar40 * 0x30);
            uVar40 = *(ulonglong *)(lVar47 + 0x118);
            if (uVar50 <= uVar40) goto LAB_142574fb8;
LAB_142574f89:
            uVar40 = *(ulonglong *)(*(longlong *)(lVar45 + 0x38) + uVar40 * 8);
            if (uVar40 == 0) goto LAB_142574fb8;
            lVar36 = *(longlong *)(*(longlong *)(lVar45 + 0x18) + 0x10 + ~uVar40 * 0x30);
            uVar40 = *(ulonglong *)(lVar47 + 0x120);
            if (uVar40 < uVar50) goto LAB_142574fc7;
LAB_142574ffd:
            plStack_100 = (longlong *)0x0;
            uVar40 = *(ulonglong *)(lVar47 + 0x128);
          }
          else {
            plVar52 = (longlong *)0x0;
            uVar40 = *(ulonglong *)(lVar47 + 0x118);
            if (uVar40 < uVar50) goto LAB_142574f89;
LAB_142574fb8:
            lVar36 = 0;
            uVar40 = *(ulonglong *)(lVar47 + 0x120);
            if (uVar50 <= uVar40) goto LAB_142574ffd;
LAB_142574fc7:
            uVar40 = *(ulonglong *)(*(longlong *)(lVar45 + 0x38) + uVar40 * 8);
            if (uVar40 == 0) goto LAB_142574ffd;
            plStack_100 = *(longlong **)(*(longlong *)(lVar45 + 0x18) + 0x10 + ~uVar40 * 0x30);
            uVar40 = *(ulonglong *)(lVar47 + 0x128);
          }
          if ((uVar40 < uVar50) &&
             (uVar50 = *(ulonglong *)(*(longlong *)(lVar45 + 0x38) + uVar40 * 8), uVar50 != 0)) {
            lVar45 = *(longlong *)(*(longlong *)(lVar45 + 0x18) + 0x10 + ~uVar50 * 0x30);
          }
          else {
            lVar45 = 0;
          }
          uVar40 = 0;
          uVar37 = uVar40;
          goto LAB_142575043;
        }
        if ((int)uVar40 == (int)puVar49) {
          do {
            if (param_1 == puVar43) goto LAB_1425753b5;
            uVar7 = *param_1;
            param_1 = param_1 + 1;
            puVar49 = *(undefined **)
                       (*(longlong *)(lVar48 + 0x100) + 0x58 + (ulonglong)uVar7 * 0xa0);
          } while (puVar49 == (undefined *)0x0);
          lVar39 = *(longlong *)(lVar48 + 0x100) + (ulonglong)uVar7 * 0xa0;
          uVar50 = (ulonglong)*(uint *)(lVar39 + 0x94);
          lVar45 = *(longlong *)(lVar48 + 0x1a0) + uVar50 * 0x48;
          uVar50 = *(ulonglong *)(*(longlong *)(lVar48 + 0x1a0) + 0x40 + uVar50 * 0x48);
          if ((*(ulonglong *)(lVar47 + 0x110) < uVar50) &&
             (uVar40 = *(ulonglong *)
                        (*(longlong *)(lVar45 + 0x38) + *(ulonglong *)(lVar47 + 0x110) * 8),
             uVar40 != 0)) {
            plVar52 = *(longlong **)(*(longlong *)(lVar45 + 0x18) + 0x10 + ~uVar40 * 0x30);
            uVar40 = *(ulonglong *)(lVar47 + 0x118);
            if (uVar50 <= uVar40) goto LAB_142574e51;
LAB_142574e22:
            uVar40 = *(ulonglong *)(*(longlong *)(lVar45 + 0x38) + uVar40 * 8);
            if (uVar40 == 0) goto LAB_142574e51;
            lVar36 = *(longlong *)(*(longlong *)(lVar45 + 0x18) + 0x10 + ~uVar40 * 0x30);
            uVar40 = *(ulonglong *)(lVar47 + 0x120);
            if (uVar40 < uVar50) goto LAB_142574e60;
LAB_142574e96:
            plStack_100 = (longlong *)0x0;
            uVar40 = *(ulonglong *)(lVar47 + 0x128);
            if (uVar50 <= uVar40) goto LAB_142574ed0;
LAB_142574ead:
            uVar50 = *(ulonglong *)(*(longlong *)(lVar45 + 0x38) + uVar40 * 8);
            if (uVar50 == 0) goto LAB_142574ed0;
            lVar45 = *(longlong *)(*(longlong *)(lVar45 + 0x18) + 0x10 + ~uVar50 * 0x30);
          }
          else {
            plVar52 = (longlong *)0x0;
            uVar40 = *(ulonglong *)(lVar47 + 0x118);
            if (uVar40 < uVar50) goto LAB_142574e22;
LAB_142574e51:
            lVar36 = 0;
            uVar40 = *(ulonglong *)(lVar47 + 0x120);
            if (uVar50 <= uVar40) goto LAB_142574e96;
LAB_142574e60:
            uVar40 = *(ulonglong *)(*(longlong *)(lVar45 + 0x38) + uVar40 * 8);
            if (uVar40 == 0) goto LAB_142574e96;
            plStack_100 = *(longlong **)(*(longlong *)(lVar45 + 0x18) + 0x10 + ~uVar40 * 0x30);
            uVar40 = *(ulonglong *)(lVar47 + 0x128);
            if (uVar40 < uVar50) goto LAB_142574ead;
LAB_142574ed0:
            lVar45 = 0;
          }
          lStack_148 = *(longlong *)(lVar39 + 0x50);
          uVar37 = 0;
        }
        uVar40 = (ulonglong)~*(uint *)(lStack_148 + 8 + uVar37 * 0x10);
LAB_142575043:
        puVar44 = (undefined *)((longlong)plVar52 + uVar40 * 0xc);
        pfVar51 = (float *)(uVar40 * 0x30 + lVar36);
        puStack_168 = (undefined8 *)(uVar40 * 0xc + (longlong)plStack_100);
        uVar50 = *(ulonglong *)(lVar45 + uVar40 * 8);
        uStack_1e8 = uVar50;
        plStack_160 = plVar52;
        lStack_158 = lVar36;
        uVar7 = uStack_104;
        if (*(longlong *)(lVar42 + 0x60) != 0) {
          lVar36 = *(longlong *)(lVar42 + 0x48);
          uStack_170 = *(ulonglong *)(lVar42 + 0x50);
          bVar54 = (byte)(uVar50 >> 0x39);
          auVar55 = ZEXT216(CONCAT11(bVar54,bVar54));
          auVar55 = pshuflw(auVar55,auVar55,0);
          lStack_118 = 0;
          uVar46 = (int)uVar37 + 1;
          while( true ) {
            uStack_104 = uVar7;
            uVar50 = uVar50 & uStack_170;
            pcVar2 = (char *)(lVar36 + uVar50);
            cVar30 = *pcVar2;
            cVar9 = pcVar2[1];
            cVar10 = pcVar2[2];
            cVar11 = pcVar2[3];
            cVar12 = pcVar2[4];
            cVar13 = pcVar2[5];
            cVar14 = pcVar2[6];
            cVar15 = pcVar2[7];
            cVar16 = pcVar2[8];
            cVar17 = pcVar2[9];
            cVar18 = pcVar2[10];
            cVar19 = pcVar2[0xb];
            cVar20 = pcVar2[0xc];
            cVar21 = pcVar2[0xd];
            cVar22 = pcVar2[0xe];
            cVar23 = pcVar2[0xf];
            auVar56[0] = -(cVar30 == auVar55[0]);
            auVar56[1] = -(cVar9 == auVar55[1]);
            auVar56[2] = -(cVar10 == auVar55[2]);
            auVar56[3] = -(cVar11 == auVar55[3]);
            auVar56[4] = -(cVar12 == auVar55[4]);
            auVar56[5] = -(cVar13 == auVar55[5]);
            auVar56[6] = -(cVar14 == auVar55[6]);
            auVar56[7] = -(cVar15 == auVar55[7]);
            auVar56[8] = -(cVar16 == auVar55[0]);
            auVar56[9] = -(cVar17 == auVar55[1]);
            auVar56[10] = -(cVar18 == auVar55[2]);
            auVar56[0xb] = -(cVar19 == auVar55[3]);
            auVar56[0xc] = -(cVar20 == auVar55[4]);
            auVar56[0xd] = -(cVar21 == auVar55[5]);
            auVar56[0xe] = -(cVar22 == auVar55[6]);
            auVar56[0xf] = -(cVar23 == auVar55[7]);
            uVar32 = (ushort)(SUB161(auVar56 >> 7,0) & 1) |
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
            param_2 = (longlong *)(ulonglong)uVar32;
            uVar7 = uStack_104;
            uStack_104 = uVar46;
            while (uVar32 != 0) {
              uVar7 = 0;
              for (uVar46 = (uint)param_2; (uVar46 & 1) == 0; uVar46 = uVar46 >> 1 | 0x80000000) {
                uVar7 = uVar7 + 1;
              }
              uVar40 = uVar7 + uVar50 & uStack_170;
              puStack_140 = puVar44;
              lStack_138 = lVar47;
              lStack_130 = lVar48;
              puStack_128 = puVar43;
              lStack_120 = lVar45;
              lStack_110 = lVar42;
              cVar31 = pdb_140df4430(&uStack_1e8,lVar36 + uVar40 * -0x18 + -0x18);
              if (cVar31 != '\0') {
                uVar35 = pdb_140a2ec70(lStack_110,*(undefined8 *)(lVar36 + uVar40 * -0x18 + -0x10));
                fStack_190 = pfVar51[6];
                uStack_198 = *(undefined8 *)(pfVar51 + 4);
                fVar63 = pfVar51[7];
                fVar64 = pfVar51[8];
                fVar27 = pfVar51[9];
                fVar24 = *pfVar51;
                fVar25 = pfVar51[1];
                fVar26 = pfVar51[3];
                uStack_1b8 = *(undefined8 *)(pfVar51 + 4);
                fStack_1b0 = pfVar51[6];
                fVar3 = pfVar51[2];
                fVar66 = fVar3 + fVar3;
                fVar58 = fVar25 + fVar25;
                fVar62 = fVar24 * (fVar24 + fVar24);
                fVar59 = (fVar24 + fVar24) * fVar26;
                fStack_1dc = fVar66 * fVar24 - fVar58 * fVar26;
                fVar60 = fVar59 + fVar66 * fVar25;
                fVar61 = fVar28 - (fVar62 + fVar25 * fVar58);
                fVar4 = pfVar51[7];
                fStack_1e0 = fVar4 * fStack_1dc;
                fStack_1dc = fVar4 * fStack_1dc;
                fStack_1cc = (float)*(undefined8 *)(pfVar51 + 8);
                fVar57 = (float)((ulonglong)*(undefined8 *)(pfVar51 + 8) >> 0x20);
                fStack_1d8 = fStack_1cc * (fVar58 * fVar24 - fVar26 * fVar66);
                fStack_1d4 = fStack_1cc * (fVar28 - (fVar3 * fVar66 + fVar62));
                fStack_1d0 = fStack_1cc * fVar60;
                fStack_1cc = fStack_1cc * fVar60;
                uStack_1e8 = CONCAT44(fVar4 * (fVar58 * fVar24 + fVar26 * fVar66),
                                      fVar4 * (fVar28 - (fVar25 * fVar58 + fVar3 * fVar66)));
                uStack_1c8 = CONCAT44(fVar57 * (fVar66 * fVar25 - fVar59),
                                      fVar57 * (fVar58 * fVar26 + fVar66 * fVar24));
                uStack_1c0 = CONCAT44(fVar57 * fVar61,fVar57 * fVar61);
                fStack_1ac = fStack_1b0;
                pdb_140e07fe0(auStack_218,&uStack_1e8);
                fVar63 = (float)((uint)fVar63 & uVar33);
                fVar64 = (float)((uint)fVar64 & uVar33);
                if (fVar64 <= (float)((uint)fVar27 & uVar29)) {
                  fVar64 = (float)((uint)fVar27 & uVar29);
                }
                if (fVar63 <= fVar64) {
                  fVar63 = fVar64;
                }
                fStack_1b0 = *(float *)(puStack_168 + 1);
                uStack_1b8 = *puStack_168;
                uStack_1c8 = uStack_1f8;
                uStack_1c0 = uStack_1f0;
                fStack_1d8 = (float)uStack_208;
                fStack_1d4 = (float)uStack_204;
                fStack_1d0 = (float)uStack_200;
                fStack_1cc = (float)uStack_1fc;
                fStack_1e0 = (float)uStack_210;
                fStack_1dc = (float)uStack_20c;
                fStack_1ac = (float)uVar35;
                pdb_140955fe0(uStack_188,puStack_140,&uStack_198,fVar63,&uStack_1e8,&UNK_14351be30);
                uVar40 = (ulonglong)uStack_104;
                lVar47 = lStack_138;
                lVar48 = lStack_130;
                puVar43 = puStack_128;
                lVar42 = lStack_110;
                param_3 = puStack_150;
                lVar45 = lStack_120;
                lVar36 = lStack_158;
                plVar52 = plStack_160;
                goto joined_r0x000142574d77;
              }
              iVar34 = (uint)param_2 - 1;
              uVar32 = (ushort)iVar34 & (ushort)param_2;
              param_2 = (longlong *)(ulonglong)CONCAT22((short)((uint)iVar34 >> 0x10),uVar32);
              puVar44 = puStack_140;
              lVar42 = lStack_110;
              puVar43 = puStack_128;
              lVar45 = lStack_120;
              lVar47 = lStack_138;
              lVar48 = lStack_130;
              uVar7 = uStack_104;
            }
            auVar65[0] = -(cVar30 == unaff_XMM7_Ba);
            auVar65[1] = -(cVar9 == unaff_XMM7_Bb);
            auVar65[2] = -(cVar10 == unaff_XMM7_Bc);
            auVar65[3] = -(cVar11 == unaff_XMM7_Bd);
            auVar65[4] = -(cVar12 == unaff_XMM7_Be);
            auVar65[5] = -(cVar13 == unaff_XMM7_Bf);
            auVar65[6] = -(cVar14 == unaff_XMM7_Bg);
            auVar65[7] = -(cVar15 == unaff_XMM7_Bh);
            auVar65[8] = -(cVar16 == unaff_XMM7_Bi);
            auVar65[9] = -(cVar17 == unaff_XMM7_Bj);
            auVar65[10] = -(cVar18 == unaff_XMM7_Bk);
            auVar65[0xb] = -(cVar19 == unaff_XMM7_Bl);
            auVar65[0xc] = -(cVar20 == unaff_XMM7_Bm);
            auVar65[0xd] = -(cVar21 == unaff_XMM7_Bn);
            auVar65[0xe] = -(cVar22 == unaff_XMM7_Bo);
            auVar65[0xf] = -(cVar23 == unaff_XMM7_Bp);
            if ((((((((((((((((SUB161(auVar65 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar65 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar65 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar65 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar65 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar65 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar65 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar65 >> 0x3f,0) & 1) != 0) || (SUB161(auVar65 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar65 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar65 >> 0x57,0) & 1) != 0) || (SUB161(auVar65 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar65 >> 0x67,0) & 1) != 0) || (SUB161(auVar65 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar65 >> 0x77,0) & 1) != 0) || auVar65[0xf] < '\0') break;
            uVar50 = uVar50 + lStack_118 + 0x10;
            lStack_118 = lStack_118 + 0x10;
            uVar46 = uStack_104;
          }
        }
        uStack_104 = uVar7;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_14351be18);
      }
      goto LAB_14257548c;
    }
    if (uVar40 + 2 < 0x37) {
      uVar50 = 0x34 - uVar40;
      plVar52 = (longlong *)(&UNK_14351c80e + uVar40);
      goto LAB_142574bd0;
    }
    goto LAB_14257551f;
  }
  goto LAB_1425754ff;
LAB_1425753b5:
  pdb_140e9a350(param_3);
  pdb_140e9a350();
  LOCK();
  plVar38 = (longlong *)*param_3;
  bVar53 = plVar38 == (longlong *)0x8;
  if (bVar53) {
    *param_3 = 0;
    plVar38 = (longlong *)0x8;
  }
  UNLOCK();
  if (!bVar53) {
    plVar38 = (longlong *)pdb_142dbca40(param_3,0);
  }
  if (lStack_180 != 0) {
    plVar38 = (longlong *)pdb_140e97000();
    if (((char)plVar38[0xd] != '\x01') &&
       (plVar38 = (longlong *)pdb_142d8ec20(plVar38,0), plVar38 == (longlong *)0x0))
    goto LAB_1425754d0;
    if (*plVar38 != 0) {
LAB_14257548c:
      plVar38 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_142575498:
      plVar38 = (longlong *)pdb_142d8ec20(plVar38,0);
      if (plVar38 == (longlong *)0x0) goto LAB_1425754d0;
      goto LAB_142574c9f;
    }
    *plVar38 = -1;
    plStack_100 = plVar38;
    pdb_140e95370(plVar38 + 1,uStack_178);
    *plStack_100 = *plStack_100 + 1;
    plVar38 = plStack_100;
  }
  return plVar38;
LAB_1425754d0:
  pdb_142dc7890(&UNK_143326860);
LAB_1425754dc:
  pdb_142dc8070(&UNK_14351bd9f,0x2e);
LAB_1425754ff:
  pdb_142dc8070(&UNK_14351c80c,0x36,0);
LAB_14257551f:
  pdb_142dc8070(&UNK_14351c80c,0x36);
  pcVar8 = (code *)swi(3);
  plVar52 = (longlong *)(*pcVar8)();
  return plVar52;
}

