// VA 0x1408e6090, PDB extent 3447 bytes
// system_decorator::chimney_smoke_anim_thickness::chimney_smoke_anim_thickness
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/chimney_smoke_anim_thickness.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::chimney_smoke_anim_thickness::chimney_smoke_anim_thickness
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/chimney_smoke_anim_thickness.rs
   Extent: 3447 */

void pdb_1408e6090(undefined8 *param_1,longlong **param_2,uint *param_3,longlong *param_4)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined1 (*pauVar5) [16];
  code *pcVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  char cVar13;
  bool bVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong *plVar19;
  longlong lVar20;
  longlong lVar21;
  longlong **pplVar22;
  undefined8 *puVar23;
  uint uVar24;
  undefined *puVar25;
  uint uVar26;
  ushort uVar27;
  ulonglong uVar28;
  byte bVar29;
  undefined *puVar30;
  longlong *plVar31;
  uint *puVar32;
  uint *puVar33;
  byte bVar34;
  float fVar35;
  undefined8 uVar36;
  undefined1 auVar37 [16];
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  float fVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  char unaff_XMM6_Ba;
  char unaff_XMM6_Bb;
  char unaff_XMM6_Bc;
  char unaff_XMM6_Bd;
  char unaff_XMM6_Be;
  char unaff_XMM6_Bf;
  char unaff_XMM6_Bg;
  char unaff_XMM6_Bh;
  char unaff_XMM6_Bi;
  char unaff_XMM6_Bj;
  char unaff_XMM6_Bk;
  char unaff_XMM6_Bl;
  char unaff_XMM6_Bm;
  char unaff_XMM6_Bn;
  char unaff_XMM6_Bo;
  char unaff_XMM6_Bp;
  float fVar43;
  char unaff_XMM11_Ba;
  char unaff_XMM11_Bb;
  char unaff_XMM11_Bc;
  char unaff_XMM11_Bd;
  char unaff_XMM11_Be;
  char unaff_XMM11_Bf;
  char unaff_XMM11_Bg;
  char unaff_XMM11_Bh;
  char unaff_XMM11_Bi;
  char unaff_XMM11_Bj;
  char unaff_XMM11_Bk;
  char unaff_XMM11_Bl;
  char unaff_XMM11_Bm;
  char unaff_XMM11_Bn;
  char unaff_XMM11_Bo;
  char unaff_XMM11_Bp;
  float fVar44;
  undefined8 uStack_160;
  longlong *plStack_150;
  undefined4 *puStack_148;
  longlong *plStack_140;
  longlong lStack_138;
  byte *pbStack_130;
  longlong lStack_128;
  longlong lStack_120;
  longlong lStack_118;
  undefined4 *puStack_110;
  longlong *plStack_108;
  longlong lStack_100;
  longlong *plStack_f8;
  undefined4 uStack_ec;
  longlong *plStack_e8;
  longlong lStack_e0;
  longlong *plStack_d8;
  undefined8 uStack_d0;
  
  uStack_d0 = 0xfffffffffffffffe;
  puVar33 = (uint *)0x0;
  pplVar22 = param_2;
  cVar13 = pdb_140e94b40();
  plStack_108 = param_4;
  if (cVar13 == '\0') {
    bVar14 = false;
    goto LAB_1408e628d;
  }
  plVar31 = (longlong *)0x4c;
  lVar16 = pdb_1408e6e10(0x4c);
  puVar30 = &UNK_14301bb40;
  if (lVar16 != 1) goto LAB_1408e6167;
  if (pplVar22 < (longlong **)0x4d) {
    uVar17 = pdb_1408e6e10(pplVar22);
    if ((uVar17 & 1) == 0) {
LAB_1408e6167:
      puVar25 = &UNK_14301bac1;
      puVar32 = (uint *)&UNK_14301ba85;
      do {
        bVar34 = puVar25[-1];
        uVar15 = (uint)(char)bVar34;
        plStack_d8 = plVar31;
        if ((char)bVar34 < '\0') {
          bVar29 = puVar25[-2];
          if ((char)bVar29 < -0x40) {
            bVar3 = puVar25[-3];
            if ((char)bVar3 < -0x40) {
              pbVar1 = puVar25 + -4;
              puVar25 = puVar25 + -4;
              uVar15 = bVar3 & 0x3f | (*pbVar1 & 7) << 6;
            }
            else {
              puVar25 = puVar25 + -3;
              uVar15 = bVar3 & 0xf;
            }
            uVar15 = bVar29 & 0x3f | uVar15 << 6;
          }
          else {
            puVar25 = puVar25 + -2;
            uVar15 = bVar29 & 0x1f;
          }
          uVar15 = (uint)(bVar34 & 0x3f) | uVar15 << 6;
          if (uVar15 != 0x5c) goto LAB_1408e61f4;
LAB_1408e620c:
          if ((undefined *)0x3c < puVar25 + -0x14301ba84) goto LAB_1408e6b4d;
          uVar17 = 0x3c - (longlong)(puVar25 + -0x14301ba84);
          puVar32 = (uint *)(puVar25 + 1);
          goto LAB_1408e622e;
        }
        puVar25 = puVar25 + -1;
        if (uVar15 == 0x5c) goto LAB_1408e620c;
LAB_1408e61f4:
        if (uVar15 == 0x2f) goto LAB_1408e620c;
      } while (puVar25 != &UNK_14301ba85);
      uVar17 = 0x3c;
LAB_1408e622e:
      plVar31 = (longlong *)pdb_140e97000();
      if ((char)plVar31[0xd] != '\x01') goto LAB_1408e6b19;
LAB_1408e623d:
      plVar19 = plStack_d8;
      if (*plVar31 == 0) {
        *plVar31 = -1;
        plStack_d8 = plVar31;
        uStack_160 = pdb_140e94f10(plVar31 + 1,puVar30,plVar19,puVar32,uVar17,1,0);
        *plStack_d8 = *plStack_d8 + 1;
        bVar14 = true;
LAB_1408e628d:
        uVar12 = _UNK_142e47bfc;
        uVar11 = _UNK_142e47bf8;
        fVar8 = _DAT_142e36f28;
        puStack_110 = (undefined4 *)
                      CONCAT44(puStack_110._4_4_,
                               -(uint)(*(float *)(*(longlong *)param_3 + 8) < _DAT_143007998 &&
                                      _DAT_14300bbe4 <= *(float *)(*(longlong *)param_3 + 8)));
        lStack_138 = 0;
        pbStack_130 = (byte *)0x8;
        lStack_128 = 0;
        plStack_f8 = *param_2;
        plStack_d8 = param_2[1];
        uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
        puVar32 = (uint *)plStack_f8[0x1f];
        param_3 = puVar32 + plStack_f8[0x20];
        lStack_120 = CONCAT71(lStack_120._1_7_,(char)plStack_f8[0x21]);
        uStack_ec = *(undefined4 *)((longlong)param_1 + 0x1c);
        plStack_e8 = (longlong *)*param_1;
        puStack_148 = (undefined4 *)param_1[2];
        plStack_140 = plStack_e8 + 4;
        lStack_118 = 8;
        iVar7 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                                 CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                       CONCAT13(unaff_XMM6_Bd,
                                CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
        unaff_XMM6_Ba = (char)iVar7;
        unaff_XMM6_Bb = (char)((uint)iVar7 >> 8);
        unaff_XMM6_Bc = (char)((uint)iVar7 >> 0x10);
        unaff_XMM6_Bd = (char)((uint)iVar7 >> 0x18);
        iVar7 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                                 CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                       CONCAT13(unaff_XMM6_Bh,
                                CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
        unaff_XMM6_Be = (char)iVar7;
        unaff_XMM6_Bf = (char)((uint)iVar7 >> 8);
        unaff_XMM6_Bg = (char)((uint)iVar7 >> 0x10);
        unaff_XMM6_Bh = (char)((uint)iVar7 >> 0x18);
        iVar7 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                                 CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                       CONCAT13(unaff_XMM6_Bl,
                                CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
        unaff_XMM6_Bi = (char)iVar7;
        unaff_XMM6_Bj = (char)((uint)iVar7 >> 8);
        unaff_XMM6_Bk = (char)((uint)iVar7 >> 0x10);
        unaff_XMM6_Bl = (char)((uint)iVar7 >> 0x18);
        iVar7 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                                 CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                       CONCAT13(unaff_XMM6_Bp,
                                CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
        unaff_XMM6_Bm = (char)iVar7;
        unaff_XMM6_Bn = (char)((uint)iVar7 >> 8);
        unaff_XMM6_Bo = (char)((uint)iVar7 >> 0x10);
        unaff_XMM6_Bp = (char)((uint)iVar7 >> 0x18);
        lStack_e0 = 0;
        uVar15 = 0;
        do {
          lVar16 = lStack_128;
          if ((char)lStack_120 == '\0') {
            if (uVar15 == (uint)puVar33) {
              do {
                if (puVar32 == param_3) goto LAB_1408e66c7;
                uVar15 = *puVar32;
                puVar32 = puVar32 + 1;
                puVar33 = *(uint **)(plStack_d8[0x20] + 0x58 + (ulonglong)uVar15 * 0xa0);
              } while (puVar33 == (uint *)0x0);
              lVar20 = plStack_d8[0x20] + (ulonglong)uVar15 * 0xa0;
              uVar17 = (ulonglong)*(uint *)(lVar20 + 0x94);
              if ((ulonglong)plStack_f8[0x22] <
                  *(ulonglong *)(plStack_d8[0x34] + 0x40 + uVar17 * 0x48)) {
                lVar21 = plStack_d8[0x34] + uVar17 * 0x48;
                uVar17 = *(ulonglong *)(*(longlong *)(lVar21 + 0x38) + plStack_f8[0x22] * 8);
                if (uVar17 == 0) goto LAB_1408e6484;
                lStack_e0 = *(longlong *)(*(longlong *)(lVar21 + 0x18) + 0x10 + ~uVar17 * 0x30);
              }
              else {
LAB_1408e6484:
                lStack_e0 = 0;
              }
              lStack_118 = *(longlong *)(lVar20 + 0x50);
              uVar15 = 0;
            }
            uVar26 = ~*(uint *)(lStack_118 + 8 + (ulonglong)uVar15 * 0x10);
          }
          else {
            uVar26 = uVar15;
            if (uVar15 == (uint)puVar33) {
              do {
                if (puVar32 == param_3) goto LAB_1408e66c7;
                uVar15 = *puVar32;
                puVar32 = puVar32 + 1;
                puVar33 = *(uint **)(plStack_d8[0x34] + 0x10 + (ulonglong)uVar15 * 0x48);
              } while (puVar33 == (uint *)0x0);
              lVar20 = plStack_d8[0x34] + (ulonglong)uVar15 * 0x48;
              if (((ulonglong)plStack_f8[0x22] < *(ulonglong *)(lVar20 + 0x40)) &&
                 (uVar17 = *(ulonglong *)(*(longlong *)(lVar20 + 0x38) + plStack_f8[0x22] * 8),
                 uVar17 != 0)) {
                lStack_e0 = *(longlong *)(*(longlong *)(lVar20 + 0x18) + 0x10 + ~uVar17 * 0x30);
              }
              else {
                lStack_e0 = 0;
              }
              uVar26 = 0;
              uVar15 = uVar26;
            }
          }
          puVar23 = (undefined8 *)((ulonglong)uVar26 * 0x10 + lStack_e0);
          plVar31 = (longlong *)*puVar23;
          lStack_100._0_4_ = uVar15;
          if (lStack_128 == lStack_138) {
            pdb_142d896b0(&lStack_138);
          }
          *(longlong **)(pbStack_130 + lVar16 * 8) = plVar31;
          lStack_128 = lVar16 + 1;
          *puStack_148 = uStack_ec;
          plStack_150 = plVar31;
          uVar18 = pdb_1400af0a0(plStack_140,&plStack_150);
          plVar19 = plStack_e8;
          lStack_100 = CONCAT44(lStack_100._4_4_,(uint)lStack_100 + 1);
          bVar34 = (byte)(uVar18 >> 0x39);
          auVar37 = ZEXT216(CONCAT11(bVar34,bVar34));
          auVar37 = pshuflw(auVar37,auVar37,0);
          lVar16 = 0;
          uVar17 = uVar18;
          while( true ) {
            uVar17 = uVar17 & plStack_e8[1];
            auVar42 = *(undefined1 (*) [16])(*plStack_e8 + uVar17);
            auVar41[0] = -(auVar42[0] == auVar37[0]);
            auVar41[1] = -(auVar42[1] == auVar37[1]);
            auVar41[2] = -(auVar42[2] == auVar37[2]);
            auVar41[3] = -(auVar42[3] == auVar37[3]);
            auVar41[4] = -(auVar42[4] == auVar37[4]);
            auVar41[5] = -(auVar42[5] == auVar37[5]);
            auVar41[6] = -(auVar42[6] == auVar37[6]);
            auVar41[7] = -(auVar42[7] == auVar37[7]);
            auVar41[8] = -(auVar42[8] == auVar37[0]);
            auVar41[9] = -(auVar42[9] == auVar37[1]);
            auVar41[10] = -(auVar42[10] == auVar37[2]);
            auVar41[0xb] = -(auVar42[0xb] == auVar37[3]);
            auVar41[0xc] = -(auVar42[0xc] == auVar37[4]);
            auVar41[0xd] = -(auVar42[0xd] == auVar37[5]);
            auVar41[0xe] = -(auVar42[0xe] == auVar37[6]);
            auVar41[0xf] = -(auVar42[0xf] == auVar37[7]);
            uVar27 = (ushort)(SUB161(auVar41 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar41 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar41 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar41 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar41 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar41 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar41 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar41 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar41 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar41 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar41 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar41 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar41 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar41[0xf] >> 7) << 0xf;
            uVar15 = (uint)uVar27;
            while (uVar27 != 0) {
              uVar26 = 0;
              for (uVar24 = uVar15; (uVar24 & 1) == 0; uVar24 = uVar24 >> 1 | 0x80000000) {
                uVar26 = uVar26 + 1;
              }
              uVar28 = *plStack_e8 + (uVar26 + uVar17 & plStack_e8[1]) * -0x10;
              if (*(longlong **)(uVar28 - 0x10) == plVar31) {
                plVar19 = (longlong *)0x0;
                plVar31 = plStack_e8;
                uVar18 = uVar28;
                goto LAB_1408e65b2;
              }
              uVar27 = (ushort)(uVar15 - 1) & (ushort)uVar15;
              uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar27);
            }
            auVar39[0] = -(auVar42[0] == unaff_XMM6_Ba);
            auVar39[1] = -(auVar42[1] == unaff_XMM6_Bb);
            auVar39[2] = -(auVar42[2] == unaff_XMM6_Bc);
            auVar39[3] = -(auVar42[3] == unaff_XMM6_Bd);
            auVar39[4] = -(auVar42[4] == unaff_XMM6_Be);
            auVar39[5] = -(auVar42[5] == unaff_XMM6_Bf);
            auVar39[6] = -(auVar42[6] == unaff_XMM6_Bg);
            auVar39[7] = -(auVar42[7] == unaff_XMM6_Bh);
            auVar39[8] = -(auVar42[8] == unaff_XMM6_Bi);
            auVar39[9] = -(auVar42[9] == unaff_XMM6_Bj);
            auVar39[10] = -(auVar42[10] == unaff_XMM6_Bk);
            auVar39[0xb] = -(auVar42[0xb] == unaff_XMM6_Bl);
            auVar39[0xc] = -(auVar42[0xc] == unaff_XMM6_Bm);
            auVar39[0xd] = -(auVar42[0xd] == unaff_XMM6_Bn);
            auVar39[0xe] = -(auVar42[0xe] == unaff_XMM6_Bo);
            auVar39[0xf] = -(auVar42[0xf] == unaff_XMM6_Bp);
            if ((((((((((((((((SUB161(auVar39 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar39 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar39 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar39 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar39 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar39 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar39 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar39 >> 0x3f,0) & 1) != 0) || (SUB161(auVar39 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar39 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar39 >> 0x57,0) & 1) != 0) || (SUB161(auVar39 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar39 >> 0x67,0) & 1) != 0) || (SUB161(auVar39 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar39 >> 0x77,0) & 1) != 0) || auVar39[0xf] < '\0') break;
            uVar17 = uVar17 + lVar16 + 0x10;
            lVar16 = lVar16 + 0x10;
          }
          if (plStack_e8[2] == 0) {
            pdb_142dd9d60(plStack_e8,1);
          }
LAB_1408e65b2:
          fVar35 = 0.0;
          if ((((ulonglong)puStack_110 & 1) == 0) && (*(char *)((longlong)puVar23 + 0xd) == '\x01'))
          {
            fVar35 = fVar8;
          }
          uVar15 = (uint)lStack_100;
          if (plVar19 != (longlong *)0x0) {
            pauVar5 = (undefined1 (*) [16])*plVar19;
            uVar17 = plVar19[1];
            uVar28 = uVar17 & uVar18;
            auVar37 = *(undefined1 (*) [16])(*pauVar5 + uVar28);
            uVar27 = (ushort)(SUB161(auVar37 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
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
                     (ushort)(byte)(auVar37[0xf] >> 7) << 0xf;
            uVar26 = (uint)uVar27;
            if (uVar27 == 0) {
              lVar16 = 0x10;
              do {
                uVar28 = uVar28 + lVar16 & uVar17;
                auVar37 = *(undefined1 (*) [16])(*pauVar5 + uVar28);
                lVar16 = lVar16 + 0x10;
                uVar26 = (uint)(ushort)((ushort)(SUB161(auVar37 >> 7,0) & 1) |
                                        (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
                                        (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
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
                                       (ushort)(byte)(auVar37[0xf] >> 7) << 0xf);
              } while (uVar26 == 0);
            }
            uVar24 = 0;
            for (; (uVar26 & 1) == 0; uVar26 = uVar26 >> 1 | 0x80000000) {
              uVar24 = uVar24 + 1;
            }
            uVar28 = uVar24 + uVar28 & uVar17;
            bVar34 = (*pauVar5)[uVar28];
            if (-1 < (char)bVar34) {
              auVar37 = *pauVar5;
              uVar26 = 0;
              for (uVar24 = (uint)(ushort)((ushort)(SUB161(auVar37 >> 7,0) & 1) |
                                           (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
                                           (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
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
                                          (ushort)(byte)(auVar37[0xf] >> 7) << 0xf);
                  (uVar24 & 1) == 0; uVar24 = uVar24 >> 1 | 0x80000000) {
                uVar26 = uVar26 + 1;
              }
              uVar28 = (ulonglong)uVar26;
              bVar34 = (*pauVar5)[uVar28];
            }
            bVar29 = (byte)(uVar18 >> 0x39);
            (*pauVar5)[uVar28] = bVar29;
            pauVar5[1][uVar28 - 0x10 & uVar17] = bVar29;
            *(longlong **)pauVar5[-1 - uVar28] = plVar31;
            *(float *)(pauVar5[-1 - uVar28] + 8) = fVar35;
            auVar37._0_8_ = CONCAT44(0,bVar34 & 0xffffff01);
            auVar37._8_4_ = uVar11;
            auVar37._12_4_ = uVar12;
            plVar19[2] = plVar19[2] - auVar37._0_8_;
            plVar19[3] = plVar19[3] - auVar37._8_8_;
          }
        } while( true );
      }
      goto LAB_1408e6b0d;
    }
    if ((longlong)pplVar22 + 2U < 0x4d) {
      plVar31 = (longlong *)(0x4a - (longlong)pplVar22);
      puVar30 = &UNK_14301bb42 + (longlong)pplVar22;
      goto LAB_1408e6167;
    }
    goto LAB_1408e6b90;
  }
  goto LAB_1408e6b70;
LAB_1408e66c7:
  *puStack_148 = uStack_ec;
  pdb_1414b6ba0(plStack_e8,&lStack_138);
  fVar10 = _DAT_142e37adc;
  fVar9 = _DAT_142e3788c;
  fVar35 = _DAT_142e36f34;
  fVar8 = _DAT_142e36f28;
  puVar33 = (uint *)plStack_f8[0x1f];
  fVar43 = _DAT_142e36f34;
  if (((ulonglong)puStack_110 & 1) == 0) {
    fVar43 = _DAT_142e36f28;
  }
  puVar32 = puVar33 + plStack_f8[0x20];
  bVar34 = *(byte *)(plStack_f8 + 0x21);
  uVar17 = (ulonglong)bVar34;
  lStack_118 = *plStack_108;
  param_1 = (undefined8 *)0x0;
  lStack_e0 = 8;
  param_2 = &plStack_150;
  iVar7 = -(uint)(CONCAT13(unaff_XMM11_Bd,
                           CONCAT12(unaff_XMM11_Bc,CONCAT11(unaff_XMM11_Bb,unaff_XMM11_Ba))) ==
                 CONCAT13(unaff_XMM11_Bd,
                          CONCAT12(unaff_XMM11_Bc,CONCAT11(unaff_XMM11_Bb,unaff_XMM11_Ba))));
  unaff_XMM11_Ba = (char)iVar7;
  unaff_XMM11_Bb = (char)((uint)iVar7 >> 8);
  unaff_XMM11_Bc = (char)((uint)iVar7 >> 0x10);
  unaff_XMM11_Bd = (char)((uint)iVar7 >> 0x18);
  iVar7 = -(uint)(CONCAT13(unaff_XMM11_Bh,
                           CONCAT12(unaff_XMM11_Bg,CONCAT11(unaff_XMM11_Bf,unaff_XMM11_Be))) ==
                 CONCAT13(unaff_XMM11_Bh,
                          CONCAT12(unaff_XMM11_Bg,CONCAT11(unaff_XMM11_Bf,unaff_XMM11_Be))));
  unaff_XMM11_Be = (char)iVar7;
  unaff_XMM11_Bf = (char)((uint)iVar7 >> 8);
  unaff_XMM11_Bg = (char)((uint)iVar7 >> 0x10);
  unaff_XMM11_Bh = (char)((uint)iVar7 >> 0x18);
  iVar7 = -(uint)(CONCAT13(unaff_XMM11_Bl,
                           CONCAT12(unaff_XMM11_Bk,CONCAT11(unaff_XMM11_Bj,unaff_XMM11_Bi))) ==
                 CONCAT13(unaff_XMM11_Bl,
                          CONCAT12(unaff_XMM11_Bk,CONCAT11(unaff_XMM11_Bj,unaff_XMM11_Bi))));
  unaff_XMM11_Bi = (char)iVar7;
  unaff_XMM11_Bj = (char)((uint)iVar7 >> 8);
  unaff_XMM11_Bk = (char)((uint)iVar7 >> 0x10);
  unaff_XMM11_Bl = (char)((uint)iVar7 >> 0x18);
  iVar7 = -(uint)(CONCAT13(unaff_XMM11_Bp,
                           CONCAT12(unaff_XMM11_Bo,CONCAT11(unaff_XMM11_Bn,unaff_XMM11_Bm))) ==
                 CONCAT13(unaff_XMM11_Bp,
                          CONCAT12(unaff_XMM11_Bo,CONCAT11(unaff_XMM11_Bn,unaff_XMM11_Bm))));
  unaff_XMM11_Bm = (char)iVar7;
  unaff_XMM11_Bn = (char)((uint)iVar7 >> 8);
  unaff_XMM11_Bo = (char)((uint)iVar7 >> 0x10);
  unaff_XMM11_Bp = (char)((uint)iVar7 >> 0x18);
  puVar30 = (undefined *)0x0;
  lVar20 = 0;
  lVar16 = lStack_120;
joined_r0x0001408e6752:
  lStack_120 = lVar20;
  if (bVar34 == 0) {
    if ((int)puVar30 == (int)param_1) {
      if (puVar33 == puVar32) goto LAB_1408e6a66;
      while( true ) {
        param_1 = *(undefined8 **)(plStack_d8[0x20] + 0x58 + (ulonglong)*puVar33 * 0xa0);
        if (param_1 != (undefined8 *)0x0) break;
        puVar33 = puVar33 + 1;
        if (puVar33 == puVar32) goto LAB_1408e6a66;
      }
      lVar20 = plStack_d8[0x20] + (ulonglong)*puVar33 * 0xa0;
      uVar18 = (ulonglong)*(uint *)(lVar20 + 0x94);
      lVar16 = *(longlong *)(plStack_d8[0x34] + 0x18 + uVar18 * 0x48);
      lVar21 = ~*(ulonglong *)
                 (*(longlong *)(plStack_d8[0x34] + 0x38 + uVar18 * 0x48) + plStack_f8[0x22] * 8) *
               0x30;
      lStack_120 = *(longlong *)(lVar16 + 0x10 + lVar21);
      plStack_108 = *(longlong **)(lVar16 + 0x28 + lVar21);
      lStack_e0 = *(longlong *)(lVar20 + 0x50);
      puVar33 = puVar33 + 1;
      puVar30 = (undefined *)0x0;
    }
    puVar25 = (undefined *)(ulonglong)~*(uint *)(lStack_e0 + 8 + (longlong)puVar30 * 0x10);
  }
  else {
    puVar25 = puVar30;
    if ((int)puVar30 == (int)param_1) {
      if (puVar33 == puVar32) goto LAB_1408e6a66;
      while( true ) {
        param_1 = *(undefined8 **)(plStack_d8[0x34] + 0x10 + (ulonglong)*puVar33 * 0x48);
        if (param_1 != (undefined8 *)0x0) break;
        puVar33 = puVar33 + 1;
        if (puVar33 == puVar32) goto LAB_1408e6a66;
      }
      lVar16 = plStack_d8[0x34] + (ulonglong)*puVar33 * 0x48;
      lVar20 = *(longlong *)(lVar16 + 0x18);
      lVar16 = ~*(ulonglong *)(*(longlong *)(lVar16 + 0x38) + plStack_f8[0x22] * 8) * 0x30;
      lStack_120 = *(longlong *)(lVar20 + 0x10 + lVar16);
      plStack_108 = *(longlong **)(lVar20 + 0x28 + lVar16);
      puVar33 = puVar33 + 1;
      puVar30 = (undefined *)0x0;
      puVar25 = puVar30;
    }
  }
  puStack_110 = (undefined4 *)((longlong)plStack_108 + (longlong)puVar25 * 4);
  param_3 = (uint *)((longlong)puVar25 * 0x10 + lStack_120);
  plStack_150 = (longlong *)pdb_140dedfe0(*param_3);
  uVar36 = pdb_140e02880(param_2);
  unaff_XMM6_Be = (char)((ulonglong)uVar36 >> 0x20);
  unaff_XMM6_Bf = (char)((ulonglong)uVar36 >> 0x28);
  unaff_XMM6_Bg = (char)((ulonglong)uVar36 >> 0x30);
  unaff_XMM6_Bh = (char)((ulonglong)uVar36 >> 0x38);
  unaff_XMM6_Bi = (char)extraout_XMM0_Qb;
  unaff_XMM6_Bj = (char)((ulonglong)extraout_XMM0_Qb >> 8);
  unaff_XMM6_Bk = (char)((ulonglong)extraout_XMM0_Qb >> 0x10);
  unaff_XMM6_Bl = (char)((ulonglong)extraout_XMM0_Qb >> 0x18);
  unaff_XMM6_Bm = (char)((ulonglong)extraout_XMM0_Qb >> 0x20);
  unaff_XMM6_Bn = (char)((ulonglong)extraout_XMM0_Qb >> 0x28);
  unaff_XMM6_Bo = (char)((ulonglong)extraout_XMM0_Qb >> 0x30);
  unaff_XMM6_Bp = (char)((ulonglong)extraout_XMM0_Qb >> 0x38);
  if (*(char *)((longlong)param_3 + 0xd) == '\0') {
    uVar36 = pdb_140e02880(param_2);
    unaff_XMM6_Be = (char)((ulonglong)uVar36 >> 0x20);
    unaff_XMM6_Bf = (char)((ulonglong)uVar36 >> 0x28);
    unaff_XMM6_Bg = (char)((ulonglong)uVar36 >> 0x30);
    unaff_XMM6_Bh = (char)((ulonglong)uVar36 >> 0x38);
    unaff_XMM6_Bi = (char)extraout_XMM0_Qb_00;
    unaff_XMM6_Bj = (char)((ulonglong)extraout_XMM0_Qb_00 >> 8);
    unaff_XMM6_Bk = (char)((ulonglong)extraout_XMM0_Qb_00 >> 0x10);
    unaff_XMM6_Bl = (char)((ulonglong)extraout_XMM0_Qb_00 >> 0x18);
    unaff_XMM6_Bm = (char)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
    unaff_XMM6_Bn = (char)((ulonglong)extraout_XMM0_Qb_00 >> 0x28);
    unaff_XMM6_Bo = (char)((ulonglong)extraout_XMM0_Qb_00 >> 0x30);
    unaff_XMM6_Bp = (char)((ulonglong)extraout_XMM0_Qb_00 >> 0x38);
    fVar38 = (float)uVar36 * fVar9 + (fVar8 - (float)uVar36);
    unaff_XMM6_Ba = SUB41(fVar38,0);
    unaff_XMM6_Bb = (char)((uint)fVar38 >> 8);
    unaff_XMM6_Bc = (char)((uint)fVar38 >> 0x10);
    unaff_XMM6_Bd = (char)((uint)fVar38 >> 0x18);
    fVar38 = fVar35;
  }
  else {
    fVar38 = fVar8 - (float)uVar36;
    fVar38 = (float)uVar36 * fVar10 + fVar38 + fVar38;
    unaff_XMM6_Ba = SUB41(fVar38,0);
    unaff_XMM6_Bb = (char)((uint)fVar38 >> 8);
    unaff_XMM6_Bc = (char)((uint)fVar38 >> 0x10);
    unaff_XMM6_Bd = (char)((uint)fVar38 >> 0x18);
    fVar38 = fVar43;
  }
  *puStack_148 = uStack_ec;
  if (plStack_e8[3] != 0) {
    uVar18 = pdb_1400af0a0(plStack_140,param_3);
    puVar30 = (undefined *)(ulonglong)((int)puVar30 + 1);
    bVar29 = (byte)(uVar18 >> 0x39);
    auVar37 = ZEXT216(CONCAT11(bVar29,bVar29));
    auVar37 = pshuflw(auVar37,auVar37,0);
    lStack_100 = *(longlong *)param_3;
    lVar16 = 0;
    while( true ) {
      uVar18 = uVar18 & plStack_e8[1];
      pcVar2 = (char *)(*plStack_e8 + uVar18);
      auVar42[0] = -(*pcVar2 == auVar37[0]);
      auVar42[1] = -(pcVar2[1] == auVar37[1]);
      auVar42[2] = -(pcVar2[2] == auVar37[2]);
      auVar42[3] = -(pcVar2[3] == auVar37[3]);
      auVar42[4] = -(pcVar2[4] == auVar37[4]);
      auVar42[5] = -(pcVar2[5] == auVar37[5]);
      auVar42[6] = -(pcVar2[6] == auVar37[6]);
      auVar42[7] = -(pcVar2[7] == auVar37[7]);
      auVar42[8] = -(pcVar2[8] == auVar37[0]);
      auVar42[9] = -(pcVar2[9] == auVar37[1]);
      auVar42[10] = -(pcVar2[10] == auVar37[2]);
      auVar42[0xb] = -(pcVar2[0xb] == auVar37[3]);
      auVar42[0xc] = -(pcVar2[0xc] == auVar37[4]);
      auVar42[0xd] = -(pcVar2[0xd] == auVar37[5]);
      auVar42[0xe] = -(pcVar2[0xe] == auVar37[6]);
      auVar42[0xf] = -(pcVar2[0xf] == auVar37[7]);
      uVar27 = (ushort)(SUB161(auVar42 >> 7,0) & 1) | (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar42 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar42 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar42 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar42 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar42 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar42 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar42 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar42 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar42 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar42 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar42 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar42 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe | (ushort)(auVar42[0xf] >> 7) << 0xf;
      uVar15 = (uint)uVar27;
      while (uVar27 != 0) {
        uVar26 = 0;
        for (uVar24 = uVar15; (uVar24 & 1) == 0; uVar24 = uVar24 >> 1 | 0x80000000) {
          uVar26 = uVar26 + 1;
        }
        lVar20 = *plStack_e8 + (uVar26 + uVar18 & plStack_e8[1]) * -0x10;
        if (lStack_100 == *(longlong *)(lVar20 + -0x10)) {
          fVar44 = (fVar38 * *(float *)(lStack_118 + 0x28)) /
                   (float)CONCAT13(unaff_XMM6_Bd,
                                   CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) +
                   *(float *)(lVar20 + -8);
          fVar38 = 0.0;
          if (0.0 <= fVar44) {
            fVar38 = fVar44;
          }
          fVar44 = fVar8;
          if (fVar38 <= fVar8) {
            fVar44 = fVar38;
          }
          *(float *)(lVar20 + -8) = fVar44;
          *puStack_110 = uVar4;
          param_3[2] = (uint)fVar44;
          lVar20 = lStack_120;
          lVar16 = lStack_120;
          goto joined_r0x0001408e6752;
        }
        uVar27 = (ushort)(uVar15 - 1) & (ushort)uVar15;
        uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar27);
      }
      auVar40[0] = -(*pcVar2 == unaff_XMM11_Ba);
      auVar40[1] = -(pcVar2[1] == unaff_XMM11_Bb);
      auVar40[2] = -(pcVar2[2] == unaff_XMM11_Bc);
      auVar40[3] = -(pcVar2[3] == unaff_XMM11_Bd);
      auVar40[4] = -(pcVar2[4] == unaff_XMM11_Be);
      auVar40[5] = -(pcVar2[5] == unaff_XMM11_Bf);
      auVar40[6] = -(pcVar2[6] == unaff_XMM11_Bg);
      auVar40[7] = -(pcVar2[7] == unaff_XMM11_Bh);
      auVar40[8] = -(pcVar2[8] == unaff_XMM11_Bi);
      auVar40[9] = -(pcVar2[9] == unaff_XMM11_Bj);
      auVar40[10] = -(pcVar2[10] == unaff_XMM11_Bk);
      auVar40[0xb] = -(pcVar2[0xb] == unaff_XMM11_Bl);
      auVar40[0xc] = -(pcVar2[0xc] == unaff_XMM11_Bm);
      auVar40[0xd] = -(pcVar2[0xd] == unaff_XMM11_Bn);
      auVar40[0xe] = -(pcVar2[0xe] == unaff_XMM11_Bo);
      auVar40[0xf] = -(pcVar2[0xf] == unaff_XMM11_Bp);
      if ((((((((((((((((SUB161(auVar40 >> 7,0) & 1) != 0 || (SUB161(auVar40 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar40 >> 0x17,0) & 1) != 0) || (SUB161(auVar40 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar40 >> 0x27,0) & 1) != 0) || (SUB161(auVar40 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar40 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar40 >> 0x3f,0) & 1) != 0) || (SUB161(auVar40 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar40 >> 0x4f,0) & 1) != 0) || (SUB161(auVar40 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar40 >> 0x5f,0) & 1) != 0) || (SUB161(auVar40 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar40 >> 0x6f,0) & 1) != 0) || (SUB161(auVar40 >> 0x77,0) & 1) != 0) ||
          auVar40[0xf] < '\0') break;
      uVar18 = uVar18 + lVar16 + 0x10;
      lVar16 = lVar16 + 0x10;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_14301bac8);
LAB_1408e6a66:
  lStack_120 = lVar16;
  if (lStack_138 != 0) {
    pub_1406abac0(pbStack_130,lStack_138 << 3,8);
  }
  if (bVar14) {
    plVar31 = (longlong *)pdb_140e97000();
    if (((char)plVar31[0xd] != '\x01') &&
       (plVar31 = (longlong *)pdb_142dde6e0(plVar31,0), plVar31 == (longlong *)0x0))
    goto LAB_1408e6b41;
    if (*plVar31 != 0) {
LAB_1408e6b0d:
      plVar31 = (longlong *)pdb_142dc8090(&UNK_14330e608);
LAB_1408e6b19:
      plVar31 = (longlong *)pdb_142dde6e0(plVar31,0);
      if (plVar31 == (longlong *)0x0) goto LAB_1408e6b41;
      goto LAB_1408e623d;
    }
    *plVar31 = -1;
    plStack_d8 = plVar31;
    pdb_140e95370(plVar31 + 1,uStack_160);
    *plStack_d8 = *plStack_d8 + 1;
  }
  return;
LAB_1408e6b41:
  pdb_142dc7890(&UNK_14330e598);
LAB_1408e6b4d:
  pdb_142dc8070(&UNK_14301ba85,0x3c);
LAB_1408e6b70:
  pdb_142dc8070(&UNK_14301bb40,0x4c,0);
LAB_1408e6b90:
  pdb_142dc8070(&UNK_14301bb40,0x4c);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

