// VA 0x140a3dbc0, PDB extent 21572 bytes
// country_core::systems::steam::update_steam_inputs
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::steam::update_steam_inputs
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/mod.rs
   Extent: 21572 */

void pdb_140a3dbc0(undefined8 *param_1,ulonglong *param_2,undefined8 *param_3,longlong *param_4,
                  longlong *param_5,undefined8 *param_6,longlong *param_7,undefined8 *param_8)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  code *pcVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  byte bVar18;
  bool bVar19;
  int iVar20;
  undefined8 uVar21;
  byte *pbVar22;
  ulonglong uVar23;
  longlong *plVar24;
  ulonglong uVar25;
  longlong lVar26;
  undefined1 (*pauVar27) [16];
  byte bVar28;
  undefined8 *puVar29;
  undefined4 uVar30;
  uint uVar31;
  undefined8 *puVar32;
  ulonglong uVar33;
  int *piVar34;
  ulonglong *puVar35;
  undefined1 (*pauVar36) [16];
  longlong lVar37;
  undefined1 (*pauVar38) [16];
  longlong lVar39;
  ulonglong *puVar40;
  longlong lVar41;
  ulonglong *puVar42;
  ushort uVar43;
  ulonglong *puVar44;
  uint uVar45;
  ulonglong *puVar46;
  byte bVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar61;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 unaff_XMM12_Ba;
  char cVar161;
  undefined1 unaff_XMM12_Bb;
  char cVar162;
  undefined1 unaff_XMM12_Bc;
  char cVar163;
  undefined1 unaff_XMM12_Bd;
  char cVar164;
  undefined1 unaff_XMM12_Be;
  char cVar165;
  undefined1 unaff_XMM12_Bf;
  char cVar166;
  undefined1 unaff_XMM12_Bg;
  char cVar167;
  undefined1 unaff_XMM12_Bh;
  char cVar168;
  undefined1 unaff_XMM12_Bi;
  char cVar169;
  undefined1 unaff_XMM12_Bj;
  char cVar170;
  undefined1 unaff_XMM12_Bk;
  char cVar171;
  undefined1 unaff_XMM12_Bl;
  char cVar172;
  undefined1 unaff_XMM12_Bm;
  char cVar173;
  undefined1 unaff_XMM12_Bn;
  char cVar174;
  undefined1 unaff_XMM12_Bo;
  char cVar175;
  undefined1 unaff_XMM12_Bp;
  char cVar176;
  longlong lStack_2a8;
  undefined4 *puStack_2a0;
  undefined8 *puStack_298;
  longlong lStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  ulonglong uStack_278;
  ulonglong uStack_270;
  byte bStack_268;
  byte bStack_267;
  byte bStack_266;
  byte bStack_265;
  byte bStack_264;
  byte bStack_263;
  byte bStack_262;
  byte bStack_261;
  byte bStack_260;
  byte bStack_25f;
  byte bStack_25e;
  byte bStack_25d;
  byte bStack_25c;
  byte bStack_25b;
  byte bStack_25a;
  byte bStack_259;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined *puStack_238;
  undefined8 uStack_230;
  ulonglong uStack_180;
  ulonglong uStack_178;
  byte *pbStack_170;
  ulonglong *puStack_168;
  longlong lStack_160;
  longlong *plStack_158;
  undefined8 uStack_150;
  undefined4 uStack_144;
  ulonglong *puStack_140;
  longlong *plStack_138;
  byte *pbStack_130;
  ulonglong uStack_128;
  ulonglong *puStack_120;
  ulonglong uStack_118;
  undefined *puStack_110;
  ulonglong uStack_108;
  ulonglong uStack_100;
  ulonglong uStack_f8;
  ulonglong uStack_f0;
  undefined1 uStack_e1;
  undefined4 *puStack_e0;
  undefined4 uStack_d8;
  undefined1 uStack_d1;
  undefined8 uStack_d0;
  
  uStack_d0 = 0xfffffffffffffffe;
  puVar4 = (ulonglong *)*param_1;
  plStack_138 = param_4;
  uVar21 = pub_142e320b0();
  plVar24 = (longlong *)*puVar4;
  LOCK();
  lVar37 = *plVar24;
  *plVar24 = *plVar24 + 1;
  UNLOCK();
  puStack_168 = puVar4;
  if (*plVar24 == 0 || SCARRY8(lVar37,1) != *plVar24 < 0) goto LAB_140a3ddcf;
  param_2[6] = param_2[6] + 1;
  uStack_d8 = *(undefined4 *)((longlong)param_3 + 0x1c);
  puStack_e0 = (undefined4 *)param_3[2];
  *puStack_e0 = uStack_d8;
  piVar5 = (int *)*param_3;
  lVar37 = *(longlong *)(piVar5 + 0x62);
  plStack_158 = plVar24;
  uStack_150 = uVar21;
  puStack_120 = param_2;
  if (lVar37 != 0) {
    pauVar38 = *(undefined1 (**) [16])(piVar5 + 0x5c);
    auVar51 = *pauVar38;
    pauVar27 = pauVar38 + 1;
    uVar45 = ~(uint)(ushort)((ushort)(SUB161(auVar51 >> 7,0) & 1) |
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
    pauVar36 = pauVar38;
    do {
      if ((short)uVar45 == 0) {
        do {
          auVar51 = *pauVar27;
          pauVar36 = pauVar36 + -0x20;
          pauVar27 = pauVar27 + 1;
          uVar45 = (ushort)((ushort)(SUB161(auVar51 >> 7,0) & 1) |
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
        } while (uVar45 == 0);
      }
      iVar20 = 0;
      for (uVar31 = uVar45; (uVar31 & 1) == 0; uVar31 = uVar31 >> 1 | 0x80000000) {
        iVar20 = iVar20 + 1;
      }
      lVar39 = *(longlong *)((longlong)pauVar36 + (-0x18 - (ulonglong)(uint)(iVar20 << 5)));
      if (lVar39 != 0) {
        pub_1406abac0(*(byte **)((longlong)pauVar36 + (-0x10 - (ulonglong)(uint)(iVar20 << 5))),
                      lVar39 * 2,1);
      }
      uVar45 = uVar45 - 1 & uVar45;
      lVar37 = lVar37 + -1;
    } while (lVar37 != 0);
    uVar23 = *(ulonglong *)(piVar5 + 0x5e);
    if (uVar23 == 0) {
      uVar33 = 0;
    }
    else {
      pub_142e32780(pauVar38,0xff,uVar23 + 0x11);
      uVar33 = (uVar23 + 1 & 0xfffffffffffffff8) - (uVar23 + 1 >> 3);
      if (uVar23 < 8) {
        uVar33 = uVar23;
      }
    }
    piVar5[0x62] = 0;
    piVar5[99] = 0;
    *(ulonglong *)(piVar5 + 0x60) = uVar33;
  }
  puVar4 = puStack_120;
  uVar21 = uStack_150;
  pub_142e320d0(uStack_150,0);
  puVar32 = &uStack_288;
  iVar20 = pub_142e320e0(uVar21);
  if (iVar20 != 0) {
    uVar23 = (longlong)iVar20 * 8;
    if (uVar23 < 0x7ffffffffffffff9 && -1 < iVar20) {
      pdb_14007ee60();
      uVar21 = 8;
      pbVar22 = pub_1406abab0(uVar23,8);
      if (pbVar22 != (byte *)0x0) {
        puVar32 = &uStack_288;
        pub_142e32760(pbVar22,puVar32,uVar23);
        iVar2 = *piVar5;
        uStack_128 = (longlong)iVar20;
        goto joined_r0x000140a3de16;
      }
    }
    else {
      uVar21 = 0;
    }
    pdb_142dc7e2a(uVar21,uVar23);
LAB_140a3ddcf:
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  pbVar22 = (byte *)0x8;
  iVar2 = *piVar5;
  uStack_128 = 0;
joined_r0x000140a3de16:
  if (iVar2 == 1) {
    lVar37 = *(longlong *)(piVar5 + 2);
    puVar29 = (undefined8 *)(uStack_128 & 0xffffffffffffff8);
    puVar32 = (undefined8 *)0x0;
    while (puVar29 != puVar32) {
      if ((((((*(longlong *)(pbVar22 + (longlong)puVar32 * 8) == lVar37) ||
             (*(longlong *)(pbVar22 + (longlong)puVar32 * 8 + 8) == lVar37)) ||
            (*(longlong *)(pbVar22 + (longlong)puVar32 * 8 + 0x10) == lVar37)) ||
           ((*(longlong *)(pbVar22 + (longlong)puVar32 * 8 + 0x18) == lVar37 ||
            (*(longlong *)(pbVar22 + (longlong)puVar32 * 8 + 0x20) == lVar37)))) ||
          (*(longlong *)(pbVar22 + (longlong)puVar32 * 8 + 0x28) == lVar37)) ||
         ((*(longlong *)(pbVar22 + (longlong)puVar32 * 8 + 0x30) == lVar37 ||
          (lVar39 = (longlong)puVar32 * 8, puVar32 = puVar32 + 1,
          *(longlong *)(pbVar22 + lVar39 + 0x38) == lVar37)))) goto LAB_140a3dea4;
    }
    uVar45 = (int)uStack_128 * 8 & 0x38;
    puVar32 = (undefined8 *)(ulonglong)uVar45;
    if ((uVar45 == 0) ||
       ((*(longlong *)(pbVar22 + (longlong)puVar29 * 8) != lVar37 &&
        ((uVar45 == 8 ||
         ((*(longlong *)(pbVar22 + (longlong)puVar29 * 8 + 8) != lVar37 &&
          ((uVar45 == 0x10 ||
           ((*(longlong *)(pbVar22 + (longlong)puVar29 * 8 + 0x10) != lVar37 &&
            ((uVar45 == 0x18 ||
             ((*(longlong *)(pbVar22 + (longlong)puVar29 * 8 + 0x18) != lVar37 &&
              ((uVar45 == 0x20 ||
               ((*(longlong *)(pbVar22 + (longlong)puVar29 * 8 + 0x20) != lVar37 &&
                ((uVar45 == 0x28 ||
                 ((*(longlong *)(pbVar22 + (longlong)puVar29 * 8 + 0x28) != lVar37 &&
                  ((uVar45 == 0x30 ||
                   ((*(longlong *)(pbVar22 + (longlong)puVar29 * 8 + 0x30) != lVar37 &&
                    (uVar45 == 0x38)))))))))))))))))))))))))))) {
      *puStack_e0 = uStack_d8;
      piVar5[0] = 0;
      piVar5[1] = 0;
    }
  }
LAB_140a3dea4:
  pbStack_170 = pbVar22 + uStack_128 * 8;
  pbStack_130 = pbVar22;
  if (100 < puVar4[6]) {
    uVar3 = *(undefined4 *)((longlong)param_5 + 0x1c);
    puVar29 = (undefined8 *)*param_5;
    puVar6 = (undefined4 *)param_5[2];
    puStack_140 = puStack_120 + 4;
LAB_140a3df70:
    if (pbVar22 != pbStack_170) {
      lVar37 = *(longlong *)pbVar22;
      pbVar22 = pbVar22 + 8;
      lStack_2a8 = lVar37;
      if (puStack_120[3] != 0) {
        uStack_d1 = 1;
        uVar23 = pdb_1400af0a0(puStack_140,&lStack_2a8);
        puVar32 = (undefined8 *)puStack_120[1];
        bVar18 = (byte)(uVar23 >> 0x39);
        auVar51 = ZEXT216(CONCAT11(bVar18,bVar18));
        auVar51 = pshuflw(auVar51,auVar51,0);
        lVar39 = 0;
        while( true ) {
          uVar23 = uVar23 & (ulonglong)puVar32;
          auVar60 = *(undefined1 (*) [16])(*puStack_120 + uVar23);
          auVar128[0] = -(auVar60[0] == auVar51[0]);
          auVar128[1] = -(auVar60[1] == auVar51[1]);
          auVar128[2] = -(auVar60[2] == auVar51[2]);
          auVar128[3] = -(auVar60[3] == auVar51[3]);
          auVar128[4] = -(auVar60[4] == auVar51[4]);
          auVar128[5] = -(auVar60[5] == auVar51[5]);
          auVar128[6] = -(auVar60[6] == auVar51[6]);
          auVar128[7] = -(auVar60[7] == auVar51[7]);
          auVar128[8] = -(auVar60[8] == auVar51[0]);
          auVar128[9] = -(auVar60[9] == auVar51[1]);
          auVar128[10] = -(auVar60[10] == auVar51[2]);
          auVar128[0xb] = -(auVar60[0xb] == auVar51[3]);
          auVar128[0xc] = -(auVar60[0xc] == auVar51[4]);
          auVar128[0xd] = -(auVar60[0xd] == auVar51[5]);
          auVar128[0xe] = -(auVar60[0xe] == auVar51[6]);
          auVar128[0xf] = -(auVar60[0xf] == auVar51[7]);
          uVar43 = (ushort)(SUB161(auVar128 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar128 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar128 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar128 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar128 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar128 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar128 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar128 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar128 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar128 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar128 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar128 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar128 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar128 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar128 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar128[0xf] >> 7) << 0xf;
          uVar45 = (uint)uVar43;
          while (uVar43 != 0) {
            uVar31 = 0;
            for (uVar8 = uVar45; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar31 = uVar31 + 1;
            }
            if (lVar37 == *(longlong *)
                           (*puStack_120 + (uVar31 + uVar23 & (ulonglong)puVar32) * -8 + -8))
            goto LAB_140a3df70;
            uVar43 = (ushort)(uVar45 - 1) & (ushort)uVar45;
            uVar45 = CONCAT22((short)(uVar45 - 1 >> 0x10),uVar43);
          }
          auVar62[0] = -(auVar60[0] == -1);
          auVar62[1] = -(auVar60[1] == -1);
          auVar62[2] = -(auVar60[2] == -1);
          auVar62[3] = -(auVar60[3] == -1);
          auVar62[4] = -(auVar60[4] == -1);
          auVar62[5] = -(auVar60[5] == -1);
          auVar62[6] = -(auVar60[6] == -1);
          auVar62[7] = -(auVar60[7] == -1);
          auVar62[8] = -(auVar60[8] == -1);
          auVar62[9] = -(auVar60[9] == -1);
          auVar62[10] = -(auVar60[10] == -1);
          auVar62[0xb] = -(auVar60[0xb] == -1);
          auVar62[0xc] = -(auVar60[0xc] == -1);
          auVar62[0xd] = -(auVar60[0xd] == -1);
          auVar62[0xe] = -(auVar60[0xe] == -1);
          auVar62[0xf] = -(auVar60[0xf] == -1);
          if ((((((((((((((((SUB161(auVar62 >> 7,0) & 1) != 0 || (SUB161(auVar62 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar62 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar62 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar62 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar62 >> 0x2f,0) & 1) != 0) || (SUB161(auVar62 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar62 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar62 >> 0x47,0) & 1) != 0) || (SUB161(auVar62 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar62 >> 0x57,0) & 1) != 0) || (SUB161(auVar62 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar62 >> 0x67,0) & 1) != 0) || (SUB161(auVar62 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar62 >> 0x77,0) & 1) != 0) || auVar62[0xf] < '\0') break;
          uVar23 = uVar23 + lVar39 + 0x10;
          lVar39 = lVar39 + 0x10;
        }
      }
      *puVar6 = uVar3;
      uStack_d1 = 1;
      uVar21 = pdb_140f3c9d0();
      uStack_d1 = 1;
      uVar21 = pdb_140f5a1d0(uVar21);
      *puVar29 = uVar21;
      *(int *)(puVar29 + 1) = (int)puVar32;
      *puStack_e0 = uStack_d8;
      piVar5[0] = 1;
      piVar5[1] = 0;
      *(longlong *)(piVar5 + 2) = lVar37;
      goto LAB_140a3df70;
    }
  }
  uStack_d1 = 1;
  plVar24 = (longlong *)pdb_140f3bda0();
  if ((char)plVar24[2] == '\x01') {
    lVar37 = *plVar24;
    puVar32 = (undefined8 *)plVar24[1];
  }
  else {
    uStack_d1 = 1;
    lVar37 = pdb_140f4fd10();
    *plVar24 = lVar37;
    plVar24[1] = (longlong)puVar32;
    *(undefined1 *)(plVar24 + 2) = 1;
  }
  puVar4 = puStack_120;
  *plVar24 = lVar37 + 1;
  uStack_278 = _DAT_14303b770;
  uStack_270 = _UNK_14303b778;
  uStack_288 = _DAT_14303b760;
  uStack_280 = _UNK_14303b768;
  bStack_268 = (byte)lVar37;
  bStack_267 = (byte)((ulonglong)lVar37 >> 8);
  bStack_266 = (byte)((ulonglong)lVar37 >> 0x10);
  bStack_265 = (byte)((ulonglong)lVar37 >> 0x18);
  bStack_264 = (byte)((ulonglong)lVar37 >> 0x20);
  bStack_263 = (byte)((ulonglong)lVar37 >> 0x28);
  bStack_262 = (byte)((ulonglong)lVar37 >> 0x30);
  bStack_261 = (byte)((ulonglong)lVar37 >> 0x38);
  bStack_260 = (byte)puVar32;
  bStack_25f = (byte)((ulonglong)puVar32 >> 8);
  bStack_25e = (byte)((ulonglong)puVar32 >> 0x10);
  bStack_25d = (byte)((ulonglong)puVar32 >> 0x18);
  bStack_25c = (byte)((ulonglong)puVar32 >> 0x20);
  bStack_25b = (byte)((ulonglong)puVar32 >> 0x28);
  bStack_25a = (byte)((ulonglong)puVar32 >> 0x30);
  bStack_259 = (byte)((ulonglong)puVar32 >> 0x38);
  uVar23 = uStack_128;
  if (uStack_128 != 0) {
    pdb_142d974a0(&uStack_288,uStack_128,&bStack_268,1);
    uVar23 = uStack_128;
    uVar33 = 0;
    do {
      pdb_1403b05d0(&uStack_288,*(undefined8 *)(pbStack_130 + uVar33 * 8));
      uVar33 = uVar33 + 1;
    } while (uVar33 != uVar23);
  }
  uStack_f8 = CONCAT17(bStack_261,
                       CONCAT16(bStack_262,
                                CONCAT15(bStack_263,
                                         CONCAT14(bStack_264,
                                                  CONCAT13(bStack_265,
                                                           CONCAT12(bStack_266,
                                                                    CONCAT11(bStack_267,bStack_268))
                                                          )))));
  uStack_f0 = CONCAT17(bStack_259,
                       CONCAT16(bStack_25a,
                                CONCAT15(bStack_25b,
                                         CONCAT14(bStack_25c,
                                                  CONCAT13(bStack_25d,
                                                           CONCAT12(bStack_25e,
                                                                    CONCAT11(bStack_25f,bStack_260))
                                                          )))));
  uStack_108 = uStack_278;
  uStack_100 = uStack_270;
  uStack_118 = uStack_288;
  puStack_110 = uStack_280;
  uVar33 = puVar4[1];
  if (uVar33 != 0) {
    uVar25 = uVar33 * 8 + 0x17 & 0xfffffffffffffff0;
    uVar33 = uVar33 + uVar25 + 0x11;
    if (uVar33 != 0) {
      pub_1406abac0((byte *)(*puVar4 - uVar25),uVar33,0x10);
    }
  }
  puVar4[4] = uStack_f8;
  puVar4[5] = uStack_f0;
  puVar4[2] = uStack_108;
  puVar4[3] = uStack_100;
  *puVar4 = uStack_118;
  puVar4[1] = (ulonglong)puStack_110;
  if (uVar23 == 0) {
    *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
    lVar37 = *param_5;
    uStack_d1 = 1;
    uVar21 = pdb_140f3c9d0();
    *(undefined8 *)(lVar37 + 0x10) = uVar21;
    *(int *)(lVar37 + 0x18) = (int)param_5;
    goto LAB_140a42b56;
  }
  if ((char)*piVar5 == '\0') {
    lVar37 = *(longlong *)pbStack_130;
    *puStack_e0 = uStack_d8;
    piVar5[0] = 1;
    piVar5[1] = 0;
    *(longlong *)(piVar5 + 2) = lVar37;
    cVar161 = (char)piVar5[4];
  }
  else {
    cVar161 = (char)piVar5[4];
  }
  if (cVar161 == '\0') {
    uStack_d1 = 1;
    pdb_140b2ba80(&uStack_288,&plStack_158);
    *puStack_e0 = uStack_d8;
    pub_142e32760(piVar5 + 4,&uStack_288,0x100);
    uVar23 = uStack_128;
    if ((*(longlong *)(piVar5 + 4) != 0) && (2 < *_DAT_143ca8e90)) {
      uStack_288 = 0;
      uStack_280 = &UNK_14303bc41;
      uStack_278 = 0x1c;
      uStack_270 = 0;
      bStack_268 = 0x14;
      bStack_267 = 0xbc;
      bStack_266 = 3;
      bStack_265 = 0x43;
      bStack_264 = 1;
      bStack_263 = 0;
      bStack_262 = 0;
      bStack_261 = 0;
      bStack_260 = 0x2c;
      bStack_25f = 0;
      bStack_25e = 0;
      bStack_25d = 0;
      bStack_25c = 0;
      bStack_25b = 0;
      bStack_25a = 0;
      bStack_259 = 0;
      uStack_258 = 3;
      uStack_250 = &UNK_14303bc41;
      uStack_248 = 0x1c;
      uStack_240 = 0x13300000001;
      puStack_238 = &UNK_14303bc5d;
      uStack_230 = 0x5d;
      uStack_d1 = 1;
      pdb_140f332f0(&uStack_e1,&uStack_288);
      uVar23 = uStack_128;
    }
  }
  if ((char)piVar5[0x44] == '\0') {
    uStack_d1 = 1;
    pdb_140b2d8b0(&uStack_288,&plStack_158);
    *puStack_e0 = uStack_d8;
    *(undefined **)(piVar5 + 0x58) = puStack_238;
    *(undefined8 *)(piVar5 + 0x5a) = uStack_230;
    *(undefined8 *)(piVar5 + 0x54) = uStack_248;
    *(undefined8 *)(piVar5 + 0x56) = uStack_240;
    auVar51[1] = bStack_267;
    auVar51[0] = bStack_268;
    auVar51[2] = bStack_266;
    auVar51[3] = bStack_265;
    auVar51[4] = bStack_264;
    auVar51[5] = bStack_263;
    auVar51[6] = bStack_262;
    auVar51[7] = bStack_261;
    auVar51[8] = bStack_260;
    auVar51[9] = bStack_25f;
    auVar51[10] = bStack_25e;
    auVar51[0xb] = bStack_25d;
    auVar51[0xc] = bStack_25c;
    auVar51[0xd] = bStack_25b;
    auVar51[0xe] = bStack_25a;
    auVar51[0xf] = bStack_259;
    piVar5[0x50] = (int)uStack_258;
    piVar5[0x51] = uStack_258._4_4_;
    piVar5[0x52] = (int)uStack_250;
    piVar5[0x53] = uStack_250._4_4_;
    *(undefined1 (*) [16])(piVar5 + 0x4c) = auVar51;
    *(ulonglong *)(piVar5 + 0x48) = uStack_278;
    *(ulonglong *)(piVar5 + 0x4a) = uStack_270;
    *(ulonglong *)(piVar5 + 0x44) = uStack_288;
    *(undefined **)(piVar5 + 0x46) = uStack_280;
    uVar23 = uStack_128;
    if ((*(ulonglong *)(piVar5 + 0x44) != 0) && (2 < *_DAT_143ca8e90)) {
      uStack_288 = 0;
      uStack_280 = &UNK_14303bc41;
      uStack_278 = 0x1c;
      uStack_270 = 0;
      bStack_268 = 0x14;
      bStack_267 = 0xbc;
      bStack_266 = 3;
      bStack_265 = 0x43;
      bStack_264 = 1;
      bStack_263 = 0;
      bStack_262 = 0;
      bStack_261 = 0;
      bStack_260 = 0x2c;
      bStack_25f = 0;
      bStack_25e = 0;
      bStack_25d = 0;
      bStack_25c = 0;
      bStack_25b = 0;
      bStack_25a = 0;
      bStack_259 = 0;
      uStack_258 = 3;
      uStack_250 = &UNK_14303bc41;
      uStack_248 = 0x1c;
      uStack_240 = 0x13a00000001;
      puStack_238 = &UNK_14303bc8b;
      uStack_230 = 0x4d;
      uStack_d1 = 1;
      pdb_140f332f0(&uStack_e1,&uStack_288);
      uVar23 = uStack_128;
    }
  }
  *(undefined4 *)plStack_138[2] = *(undefined4 *)((longlong)plStack_138 + 0x1c);
  fVar17 = _UNK_14303b71c;
  fVar16 = _UNK_14303b718;
  fVar15 = _UNK_14303b714;
  fVar14 = _DAT_14303b710;
  fVar13 = _DAT_142f61000;
  uVar12 = _UNK_142e47bfc;
  uVar3 = _UNK_142e47bf8;
  fVar11 = _DAT_142e37ae4;
  fVar49 = _DAT_142e37844;
  fVar50 = _DAT_142e37838;
  auVar51 = _DAT_142e377e0;
  lVar37 = *plStack_138;
  uStack_178 = uVar23 * 8;
  puStack_140 = (ulonglong *)*param_8;
  uStack_144 = *(undefined4 *)((longlong)param_5 + 0x1c);
  puStack_298 = (undefined8 *)*param_5;
  puStack_2a0 = (undefined4 *)param_5[2];
  lStack_290 = *param_7;
  plStack_138 = (longlong *)0x0;
  iVar20 = -(uint)(CONCAT13(unaff_XMM12_Bd,
                            CONCAT12(unaff_XMM12_Bc,CONCAT11(unaff_XMM12_Bb,unaff_XMM12_Ba))) ==
                  CONCAT13(unaff_XMM12_Bd,
                           CONCAT12(unaff_XMM12_Bc,CONCAT11(unaff_XMM12_Bb,unaff_XMM12_Ba))));
  cVar161 = (char)iVar20;
  cVar162 = (char)((uint)iVar20 >> 8);
  cVar163 = (char)((uint)iVar20 >> 0x10);
  cVar164 = (char)((uint)iVar20 >> 0x18);
  iVar20 = -(uint)(CONCAT13(unaff_XMM12_Bh,
                            CONCAT12(unaff_XMM12_Bg,CONCAT11(unaff_XMM12_Bf,unaff_XMM12_Be))) ==
                  CONCAT13(unaff_XMM12_Bh,
                           CONCAT12(unaff_XMM12_Bg,CONCAT11(unaff_XMM12_Bf,unaff_XMM12_Be))));
  cVar165 = (char)iVar20;
  cVar166 = (char)((uint)iVar20 >> 8);
  cVar167 = (char)((uint)iVar20 >> 0x10);
  cVar168 = (char)((uint)iVar20 >> 0x18);
  iVar20 = -(uint)(CONCAT13(unaff_XMM12_Bl,
                            CONCAT12(unaff_XMM12_Bk,CONCAT11(unaff_XMM12_Bj,unaff_XMM12_Bi))) ==
                  CONCAT13(unaff_XMM12_Bl,
                           CONCAT12(unaff_XMM12_Bk,CONCAT11(unaff_XMM12_Bj,unaff_XMM12_Bi))));
  cVar169 = (char)iVar20;
  cVar170 = (char)((uint)iVar20 >> 8);
  cVar171 = (char)((uint)iVar20 >> 0x10);
  cVar172 = (char)((uint)iVar20 >> 0x18);
  iVar20 = -(uint)(CONCAT13(unaff_XMM12_Bp,
                            CONCAT12(unaff_XMM12_Bo,CONCAT11(unaff_XMM12_Bn,unaff_XMM12_Bm))) ==
                  CONCAT13(unaff_XMM12_Bp,
                           CONCAT12(unaff_XMM12_Bo,CONCAT11(unaff_XMM12_Bn,unaff_XMM12_Bm))));
  cVar173 = (char)iVar20;
  cVar174 = (char)((uint)iVar20 >> 8);
  cVar175 = (char)((uint)iVar20 >> 0x10);
  cVar176 = (char)((uint)iVar20 >> 0x18);
  uStack_180 = 0;
  pbVar22 = pbStack_130;
  do {
    lVar39 = *(longlong *)pbVar22;
    lVar26 = *puStack_140 - 2;
    if (*puStack_140 < 2) {
      lVar26 = 4;
    }
    if ((lVar26 == 0) || ((lVar26 == 9 && ((char)puStack_140[1] != '\x01')))) {
      if (piVar5[4] != 1) {
        *(undefined1 *)((longlong)puStack_120 + 0x3c) = 0;
        *(undefined4 *)(puStack_120 + 7) = 0;
        goto LAB_140a42adf;
      }
      piVar34 = piVar5 + 6;
      pub_142e320f0(uStack_150,lVar39,*(undefined8 *)piVar34);
      pdb_140a44790(&uStack_288,piVar34,lVar39,puStack_168);
      uVar30 = SUB84(piVar34,0);
      auVar60._8_8_ = 0;
      auVar60._0_8_ = uStack_288;
      auVar53 = auVar60 & auVar51;
      if (auVar53._0_4_ <= auVar53._4_4_) {
        auVar53._0_4_ = auVar53._4_4_;
      }
      if (fVar11 <= auVar53._0_4_) {
LAB_140a3e530:
        *puStack_2a0 = uStack_144;
        uVar21 = pdb_140f3c9d0();
        uVar21 = pdb_140f5a1d0(uVar21);
        *puStack_298 = uVar21;
        *(undefined4 *)(puStack_298 + 1) = uVar30;
        fVar48 = *(float *)(lStack_290 + 0x28) * fVar49;
        uStack_180 = CONCAT71((int7)((ulonglong)lStack_290 >> 8),1);
        if (uStack_258._1_1_ != '\0') {
          *(ulonglong *)(lVar37 + 0x7c) =
               CONCAT44((float)((ulonglong)*(undefined8 *)(lVar37 + 0x7c) >> 0x20) + 0.0,
                        (float)*(undefined8 *)(lVar37 + 0x7c) + fVar48 * fVar50);
        }
        lStack_160 = lVar39;
        uVar23 = uStack_288;
      }
      else {
        auVar54._8_8_ = 0;
        auVar54._0_8_ = uStack_280;
        auVar55 = auVar54 & auVar51;
        if (auVar55._0_4_ <= auVar55._4_4_) {
          auVar55._0_4_ = auVar55._4_4_;
        }
        if (fVar11 <= auVar55._0_4_) goto LAB_140a3e530;
        auVar56._8_8_ = 0;
        auVar56._0_8_ = uStack_278;
        auVar57 = auVar56 & auVar51;
        if (auVar57._0_4_ <= auVar57._4_4_) {
          auVar57._0_4_ = auVar57._4_4_;
        }
        if (fVar11 <= auVar57._0_4_) goto LAB_140a3e530;
        auVar58._8_8_ = 0;
        auVar58._0_8_ = uStack_270;
        auVar59 = auVar58 & auVar51;
        if (auVar59._0_4_ <= auVar59._4_4_) {
          auVar59._0_4_ = auVar59._4_4_;
        }
        if (((fVar11 <= auVar59._0_4_) ||
            (uVar23 = CONCAT17(bStack_261,
                               CONCAT16(bStack_262,
                                        CONCAT15(bStack_263,
                                                 CONCAT14(bStack_264,
                                                          CONCAT13(bStack_265,
                                                                   CONCAT12(bStack_266,
                                                                            CONCAT11(bStack_267,
                                                                                     bStack_268)))))
                                       )), auVar10[8] = bStack_260, auVar10._0_8_ = uVar23,
            auVar10[9] = bStack_25f, auVar10[10] = bStack_25e, auVar10[0xb] = bStack_25d,
            auVar9[0xc] = bStack_25c, auVar9._0_12_ = auVar10, auVar9[0xd] = bStack_25b,
            auVar9[0xe] = bStack_25a, auVar9[0xf] = bStack_259, auVar63._0_8_ = uStack_258 | uVar23,
            auVar63._8_4_ = auVar10._8_4_, auVar63._12_4_ = auVar9._12_4_,
            auVar60 = psllw(auVar63,7),
            ((((((((((((((((SUB161(auVar60 >> 7,0) & 1) != 0 || (SUB161(auVar60 >> 0xf,0) & 1) != 0)
                         || (SUB161(auVar60 >> 0x17,0) & 1) != 0) ||
                        (SUB161(auVar60 >> 0x1f,0) & 1) != 0) ||
                       (SUB161(auVar60 >> 0x27,0) & 1) != 0) || (SUB161(auVar60 >> 0x2f,0) & 1) != 0
                      ) || (SUB161(auVar60 >> 0x37,0) & 1) != 0) ||
                    (SUB161(auVar60 >> 0x3f,0) & 1) != 0) || (SUB161(auVar60 >> 0x47,0) & 1) != 0)
                  || (SUB161(auVar60 >> 0x4f,0) & 1) != 0) || (SUB161(auVar60 >> 0x57,0) & 1) != 0)
                || (SUB161(auVar60 >> 0x5f,0) & 1) != 0) || (SUB161(auVar60 >> 0x67,0) & 1) != 0) ||
              (SUB161(auVar60 >> 0x6f,0) & 1) != 0) || (SUB161(auVar60 >> 0x77,0) & 1) != 0) ||
            auVar60[0xf] < '\0') || ((ulonglong)uStack_250 & 1) != 0)) || (uStack_250._1_1_ != '\0')
           ) goto LAB_140a3e530;
        fVar48 = *(float *)(lStack_290 + 0x28) * fVar49;
        uVar23 = uStack_288;
      }
      if (uStack_258._2_1_ != '\0') {
        *(float *)(lVar37 + 0x7c) = fVar48 * fVar13 + *(float *)(lVar37 + 0x7c);
      }
      *(ulonglong *)(lVar37 + 0x84) =
           CONCAT44((float)((ulonglong)*(undefined8 *)(lVar37 + 0x84) >> 0x20) +
                    (float)(uStack_270 >> 0x20),
                    (float)*(undefined8 *)(lVar37 + 0x84) + (float)uStack_270);
      uStack_288._0_4_ = (float)uVar23;
      uStack_288._4_4_ = (float)(uVar23 >> 0x20);
      *(float *)(lVar37 + 0x6c) = *(float *)(lVar37 + 0x6c) + (float)uStack_288 * fVar14;
      *(float *)(lVar37 + 0x70) = *(float *)(lVar37 + 0x70) + uStack_288._4_4_ * fVar15;
      *(float *)(lVar37 + 0x74) = *(float *)(lVar37 + 0x74) + (float)uStack_278 * fVar16;
      *(float *)(lVar37 + 0x78) = *(float *)(lVar37 + 0x78) + (float)(uStack_278 >> 0x20) * fVar17;
      *(byte *)(lVar37 + 0x90) = *(byte *)(lVar37 + 0x90) | bStack_264;
      uStack_288 = uVar23;
      if ((*piVar5 == 1) && (*(longlong *)(piVar5 + 2) == lVar39)) {
        *puStack_e0 = uStack_d8;
        uStack_118._1_7_ = (undefined7)(uStack_118 >> 8);
        uStack_118 = CONCAT71(uStack_118._1_7_,4);
        uVar25 = pdb_1400aef40(piVar5 + 100);
        pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
        uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        bVar18 = (byte)(uVar25 >> 0x38);
        bVar47 = bVar18 >> 1;
        auVar60 = ZEXT216(CONCAT11(bVar47,bVar47));
        auVar60 = pshuflw(auVar60,auVar60,0);
        lVar26 = 0;
        uVar33 = uVar25;
        while( true ) {
          uVar33 = uVar33 & uVar23;
          pcVar1 = *pauVar27 + uVar33;
          auVar129[0] = -(*pcVar1 == auVar60[0]);
          auVar129[1] = -(pcVar1[1] == auVar60[1]);
          auVar129[2] = -(pcVar1[2] == auVar60[2]);
          auVar129[3] = -(pcVar1[3] == auVar60[3]);
          auVar129[4] = -(pcVar1[4] == auVar60[4]);
          auVar129[5] = -(pcVar1[5] == auVar60[5]);
          auVar129[6] = -(pcVar1[6] == auVar60[6]);
          auVar129[7] = -(pcVar1[7] == auVar60[7]);
          auVar129[8] = -(pcVar1[8] == auVar60[0]);
          auVar129[9] = -(pcVar1[9] == auVar60[1]);
          auVar129[10] = -(pcVar1[10] == auVar60[2]);
          auVar129[0xb] = -(pcVar1[0xb] == auVar60[3]);
          auVar129[0xc] = -(pcVar1[0xc] == auVar60[4]);
          auVar129[0xd] = -(pcVar1[0xd] == auVar60[5]);
          auVar129[0xe] = -(pcVar1[0xe] == auVar60[6]);
          auVar129[0xf] = -(pcVar1[0xf] == auVar60[7]);
          uVar43 = (ushort)(SUB161(auVar129 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar129 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar129 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar129 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar129 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar129 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar129 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar129 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar129 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar129 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar129 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar129 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar129 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar129 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar129 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar129[0xf] >> 7) << 0xf;
          uVar45 = (uint)uVar43;
          while (uVar43 != 0) {
            uVar31 = 0;
            for (uVar8 = uVar45; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar31 = uVar31 + 1;
            }
            pauVar38 = pauVar27 + (uVar31 + uVar33 & uVar23) * -2;
            if (pauVar38[-2][0] == '\x04') goto LAB_140a3ea2c;
            uVar43 = (ushort)(uVar45 - 1) & (ushort)uVar45;
            uVar45 = CONCAT22((short)(uVar45 - 1 >> 0x10),uVar43);
          }
          auVar64[0] = -(*pcVar1 == cVar161);
          auVar64[1] = -(pcVar1[1] == cVar162);
          auVar64[2] = -(pcVar1[2] == cVar163);
          auVar64[3] = -(pcVar1[3] == cVar164);
          auVar64[4] = -(pcVar1[4] == cVar165);
          auVar64[5] = -(pcVar1[5] == cVar166);
          auVar64[6] = -(pcVar1[6] == cVar167);
          auVar64[7] = -(pcVar1[7] == cVar168);
          auVar64[8] = -(pcVar1[8] == cVar169);
          auVar64[9] = -(pcVar1[9] == cVar170);
          auVar64[10] = -(pcVar1[10] == cVar171);
          auVar64[0xb] = -(pcVar1[0xb] == cVar172);
          auVar64[0xc] = -(pcVar1[0xc] == cVar173);
          auVar64[0xd] = -(pcVar1[0xd] == cVar174);
          auVar64[0xe] = -(pcVar1[0xe] == cVar175);
          auVar64[0xf] = -(pcVar1[0xf] == cVar176);
          uVar43 = (ushort)(SUB161(auVar64 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar64 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar64 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar64 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar64 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar64 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar64 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar64 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar64 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar64 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar64 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar64 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar64 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar64 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar64 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar64[0xf] >> 7) << 0xf;
          if (uVar43 != 0) break;
          uVar33 = uVar33 + lVar26 + 0x10;
          lVar26 = lVar26 + 0x10;
        }
        if (*(longlong *)(piVar5 + 0x60) == 0) {
          pdb_142d98ac0(piVar5 + 0x5c,1,piVar5 + 100,CONCAT71((uint7)(byte)(uVar43 >> 8),1));
          pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
          uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        }
        uVar25 = uVar25 & uVar23;
        auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
        uVar43 = (ushort)(SUB161(auVar60 >> 7,0) & 1) | (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1
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
                 (ushort)(byte)(auVar60[0xf] >> 7) << 0xf;
        uVar45 = (uint)uVar43;
        if (uVar43 == 0) {
          lVar26 = 0x10;
          do {
            uVar25 = uVar25 + lVar26 & uVar23;
            auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
            lVar26 = lVar26 + 0x10;
            uVar45 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                   (ushort)(byte)(auVar60[0xf] >> 7) << 0xf);
          } while (uVar45 == 0);
        }
        uVar31 = 0;
        for (; (uVar45 & 1) == 0; uVar45 = uVar45 >> 1 | 0x80000000) {
          uVar31 = uVar31 + 1;
        }
        uVar33 = uVar31 + uVar25 & uVar23;
        bVar47 = (*pauVar27)[uVar33];
        if (-1 < (char)bVar47) {
          auVar60 = *pauVar27;
          uVar45 = 0;
          for (uVar31 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                      (ushort)(byte)(auVar60[0xf] >> 7) << 0xf); (uVar31 & 1) == 0;
              uVar31 = uVar31 >> 1 | 0x80000000) {
            uVar45 = uVar45 + 1;
          }
          uVar33 = (ulonglong)uVar45;
          bVar47 = (*pauVar27)[uVar33];
        }
        bVar18 = bVar18 >> 1;
        (*pauVar27)[uVar33] = bVar18;
        pauVar27[1][uVar33 - 0x10 & uVar23] = bVar18;
        pauVar38 = pauVar27 + uVar33 * -2;
        pauVar27[uVar33 * -2 + -2][0] = 4;
        *(undefined8 *)(pauVar38[-2] + 8) = 0;
        *(undefined8 *)pauVar38[-1] = 1;
        *(undefined8 *)(pauVar38[-1] + 8) = 0;
        auVar68._8_4_ = uVar3;
        auVar68._0_8_ = (ulonglong)bVar47 & 0xffffffffffffff01;
        auVar68._12_4_ = uVar12;
        *(ulonglong *)(piVar5 + 0x60) =
             *(longlong *)(piVar5 + 0x60) - ((ulonglong)bVar47 & 0xffffffffffffff01);
        *(longlong *)(piVar5 + 0x62) = *(longlong *)(piVar5 + 0x62) - auVar68._8_8_;
LAB_140a3ea2c:
        lVar26 = *(longlong *)(pauVar38[-1] + 8);
        if (lVar26 == *(longlong *)(pauVar38[-2] + 8)) {
          pdb_142d91f60(pauVar38[-2] + 8);
        }
        *(undefined2 *)(*(longlong *)pauVar38[-1] + lVar26 * 2) = 0x400;
        *(longlong *)(pauVar38[-1] + 8) = lVar26 + 1;
      }
      *(byte *)(lVar37 + 0x91) = *(byte *)(lVar37 + 0x91) | bStack_263;
      if ((*piVar5 == 1) && (*(longlong *)(piVar5 + 2) == lVar39)) {
        *puStack_e0 = uStack_d8;
        uStack_118 = CONCAT71(uStack_118._1_7_,5);
        uVar25 = pdb_1400aef40(piVar5 + 100);
        pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
        uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        bVar18 = (byte)(uVar25 >> 0x38);
        bVar47 = bVar18 >> 1;
        auVar60 = ZEXT216(CONCAT11(bVar47,bVar47));
        auVar60 = pshuflw(auVar60,auVar60,0);
        lVar26 = 0;
        uVar33 = uVar25;
        while( true ) {
          uVar33 = uVar33 & uVar23;
          pcVar1 = *pauVar27 + uVar33;
          auVar132[0] = -(*pcVar1 == auVar60[0]);
          auVar132[1] = -(pcVar1[1] == auVar60[1]);
          auVar132[2] = -(pcVar1[2] == auVar60[2]);
          auVar132[3] = -(pcVar1[3] == auVar60[3]);
          auVar132[4] = -(pcVar1[4] == auVar60[4]);
          auVar132[5] = -(pcVar1[5] == auVar60[5]);
          auVar132[6] = -(pcVar1[6] == auVar60[6]);
          auVar132[7] = -(pcVar1[7] == auVar60[7]);
          auVar132[8] = -(pcVar1[8] == auVar60[0]);
          auVar132[9] = -(pcVar1[9] == auVar60[1]);
          auVar132[10] = -(pcVar1[10] == auVar60[2]);
          auVar132[0xb] = -(pcVar1[0xb] == auVar60[3]);
          auVar132[0xc] = -(pcVar1[0xc] == auVar60[4]);
          auVar132[0xd] = -(pcVar1[0xd] == auVar60[5]);
          auVar132[0xe] = -(pcVar1[0xe] == auVar60[6]);
          auVar132[0xf] = -(pcVar1[0xf] == auVar60[7]);
          uVar43 = (ushort)(SUB161(auVar132 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar132 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar132 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar132 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar132 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar132 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar132 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar132 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar132 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar132 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar132 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar132 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar132 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar132 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar132 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar132[0xf] >> 7) << 0xf;
          uVar45 = (uint)uVar43;
          while (uVar43 != 0) {
            uVar31 = 0;
            for (uVar8 = uVar45; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar31 = uVar31 + 1;
            }
            pauVar38 = pauVar27 + (uVar31 + uVar33 & uVar23) * -2;
            if (pauVar38[-2][0] == '\x05') goto LAB_140a3ed8c;
            uVar43 = (ushort)(uVar45 - 1) & (ushort)uVar45;
            uVar45 = CONCAT22((short)(uVar45 - 1 >> 0x10),uVar43);
          }
          auVar69[0] = -(*pcVar1 == cVar161);
          auVar69[1] = -(pcVar1[1] == cVar162);
          auVar69[2] = -(pcVar1[2] == cVar163);
          auVar69[3] = -(pcVar1[3] == cVar164);
          auVar69[4] = -(pcVar1[4] == cVar165);
          auVar69[5] = -(pcVar1[5] == cVar166);
          auVar69[6] = -(pcVar1[6] == cVar167);
          auVar69[7] = -(pcVar1[7] == cVar168);
          auVar69[8] = -(pcVar1[8] == cVar169);
          auVar69[9] = -(pcVar1[9] == cVar170);
          auVar69[10] = -(pcVar1[10] == cVar171);
          auVar69[0xb] = -(pcVar1[0xb] == cVar172);
          auVar69[0xc] = -(pcVar1[0xc] == cVar173);
          auVar69[0xd] = -(pcVar1[0xd] == cVar174);
          auVar69[0xe] = -(pcVar1[0xe] == cVar175);
          auVar69[0xf] = -(pcVar1[0xf] == cVar176);
          uVar43 = (ushort)(SUB161(auVar69 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar69 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar69 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar69 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar69 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar69 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar69 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar69 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar69 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar69 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar69 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar69 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar69 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar69 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar69 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar69[0xf] >> 7) << 0xf;
          if (uVar43 != 0) break;
          uVar33 = uVar33 + lVar26 + 0x10;
          lVar26 = lVar26 + 0x10;
        }
        if (*(longlong *)(piVar5 + 0x60) == 0) {
          pdb_142d98ac0(piVar5 + 0x5c,1,piVar5 + 100,CONCAT71((uint7)(byte)(uVar43 >> 8),1));
          pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
          uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        }
        uVar25 = uVar25 & uVar23;
        auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
        uVar43 = (ushort)(SUB161(auVar60 >> 7,0) & 1) | (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1
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
                 (ushort)(byte)(auVar60[0xf] >> 7) << 0xf;
        uVar45 = (uint)uVar43;
        if (uVar43 == 0) {
          lVar26 = 0x10;
          do {
            uVar25 = uVar25 + lVar26 & uVar23;
            auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
            lVar26 = lVar26 + 0x10;
            uVar45 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                   (ushort)(byte)(auVar60[0xf] >> 7) << 0xf);
          } while (uVar45 == 0);
        }
        uVar31 = 0;
        for (; (uVar45 & 1) == 0; uVar45 = uVar45 >> 1 | 0x80000000) {
          uVar31 = uVar31 + 1;
        }
        uVar33 = uVar31 + uVar25 & uVar23;
        bVar47 = (*pauVar27)[uVar33];
        if (-1 < (char)bVar47) {
          auVar60 = *pauVar27;
          uVar45 = 0;
          for (uVar31 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                      (ushort)(byte)(auVar60[0xf] >> 7) << 0xf); (uVar31 & 1) == 0;
              uVar31 = uVar31 >> 1 | 0x80000000) {
            uVar45 = uVar45 + 1;
          }
          uVar33 = (ulonglong)uVar45;
          bVar47 = (*pauVar27)[uVar33];
        }
        bVar18 = bVar18 >> 1;
        (*pauVar27)[uVar33] = bVar18;
        pauVar27[1][uVar33 - 0x10 & uVar23] = bVar18;
        pauVar38 = pauVar27 + uVar33 * -2;
        pauVar27[uVar33 * -2 + -2][0] = 5;
        *(undefined8 *)(pauVar38[-2] + 8) = 0;
        *(undefined8 *)pauVar38[-1] = 1;
        *(undefined8 *)(pauVar38[-1] + 8) = 0;
        auVar72._8_4_ = uVar3;
        auVar72._0_8_ = (ulonglong)bVar47 & 0xffffffffffffff01;
        auVar72._12_4_ = uVar12;
        *(ulonglong *)(piVar5 + 0x60) =
             *(longlong *)(piVar5 + 0x60) - ((ulonglong)bVar47 & 0xffffffffffffff01);
        *(longlong *)(piVar5 + 0x62) = *(longlong *)(piVar5 + 0x62) - auVar72._8_8_;
LAB_140a3ed8c:
        lVar26 = *(longlong *)(pauVar38[-1] + 8);
        if (lVar26 == *(longlong *)(pauVar38[-2] + 8)) {
          pdb_142d91f60(pauVar38[-2] + 8);
        }
        *(undefined2 *)(*(longlong *)pauVar38[-1] + lVar26 * 2) = 0x500;
        *(longlong *)(pauVar38[-1] + 8) = lVar26 + 1;
      }
      *(byte *)(lVar37 + 0x92) = *(byte *)(lVar37 + 0x92) | bStack_262;
      if ((*piVar5 == 1) && (*(longlong *)(piVar5 + 2) == lVar39)) {
        *puStack_e0 = uStack_d8;
        uStack_118 = CONCAT71(uStack_118._1_7_,6);
        uVar25 = pdb_1400aef40(piVar5 + 100);
        pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
        uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        bVar18 = (byte)(uVar25 >> 0x38);
        bVar47 = bVar18 >> 1;
        auVar60 = ZEXT216(CONCAT11(bVar47,bVar47));
        auVar60 = pshuflw(auVar60,auVar60,0);
        lVar26 = 0;
        uVar33 = uVar25;
        while( true ) {
          uVar33 = uVar33 & uVar23;
          pcVar1 = *pauVar27 + uVar33;
          auVar134[0] = -(*pcVar1 == auVar60[0]);
          auVar134[1] = -(pcVar1[1] == auVar60[1]);
          auVar134[2] = -(pcVar1[2] == auVar60[2]);
          auVar134[3] = -(pcVar1[3] == auVar60[3]);
          auVar134[4] = -(pcVar1[4] == auVar60[4]);
          auVar134[5] = -(pcVar1[5] == auVar60[5]);
          auVar134[6] = -(pcVar1[6] == auVar60[6]);
          auVar134[7] = -(pcVar1[7] == auVar60[7]);
          auVar134[8] = -(pcVar1[8] == auVar60[0]);
          auVar134[9] = -(pcVar1[9] == auVar60[1]);
          auVar134[10] = -(pcVar1[10] == auVar60[2]);
          auVar134[0xb] = -(pcVar1[0xb] == auVar60[3]);
          auVar134[0xc] = -(pcVar1[0xc] == auVar60[4]);
          auVar134[0xd] = -(pcVar1[0xd] == auVar60[5]);
          auVar134[0xe] = -(pcVar1[0xe] == auVar60[6]);
          auVar134[0xf] = -(pcVar1[0xf] == auVar60[7]);
          uVar43 = (ushort)(SUB161(auVar134 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar134 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar134 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar134 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar134 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar134 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar134 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar134 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar134 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar134 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar134 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar134 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar134 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar134 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar134 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar134[0xf] >> 7) << 0xf;
          uVar45 = (uint)uVar43;
          while (uVar43 != 0) {
            uVar31 = 0;
            for (uVar8 = uVar45; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar31 = uVar31 + 1;
            }
            pauVar38 = pauVar27 + (uVar31 + uVar33 & uVar23) * -2;
            if (pauVar38[-2][0] == '\x06') goto LAB_140a3f0ec;
            uVar43 = (ushort)(uVar45 - 1) & (ushort)uVar45;
            uVar45 = CONCAT22((short)(uVar45 - 1 >> 0x10),uVar43);
          }
          auVar73[0] = -(*pcVar1 == cVar161);
          auVar73[1] = -(pcVar1[1] == cVar162);
          auVar73[2] = -(pcVar1[2] == cVar163);
          auVar73[3] = -(pcVar1[3] == cVar164);
          auVar73[4] = -(pcVar1[4] == cVar165);
          auVar73[5] = -(pcVar1[5] == cVar166);
          auVar73[6] = -(pcVar1[6] == cVar167);
          auVar73[7] = -(pcVar1[7] == cVar168);
          auVar73[8] = -(pcVar1[8] == cVar169);
          auVar73[9] = -(pcVar1[9] == cVar170);
          auVar73[10] = -(pcVar1[10] == cVar171);
          auVar73[0xb] = -(pcVar1[0xb] == cVar172);
          auVar73[0xc] = -(pcVar1[0xc] == cVar173);
          auVar73[0xd] = -(pcVar1[0xd] == cVar174);
          auVar73[0xe] = -(pcVar1[0xe] == cVar175);
          auVar73[0xf] = -(pcVar1[0xf] == cVar176);
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
          if (uVar43 != 0) break;
          uVar33 = uVar33 + lVar26 + 0x10;
          lVar26 = lVar26 + 0x10;
        }
        if (*(longlong *)(piVar5 + 0x60) == 0) {
          pdb_142d98ac0(piVar5 + 0x5c,1,piVar5 + 100,CONCAT71((uint7)(byte)(uVar43 >> 8),1));
          pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
          uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        }
        uVar25 = uVar25 & uVar23;
        auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
        uVar43 = (ushort)(SUB161(auVar60 >> 7,0) & 1) | (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1
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
                 (ushort)(byte)(auVar60[0xf] >> 7) << 0xf;
        uVar45 = (uint)uVar43;
        if (uVar43 == 0) {
          lVar26 = 0x10;
          do {
            uVar25 = uVar25 + lVar26 & uVar23;
            auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
            lVar26 = lVar26 + 0x10;
            uVar45 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                   (ushort)(byte)(auVar60[0xf] >> 7) << 0xf);
          } while (uVar45 == 0);
        }
        uVar31 = 0;
        for (; (uVar45 & 1) == 0; uVar45 = uVar45 >> 1 | 0x80000000) {
          uVar31 = uVar31 + 1;
        }
        uVar33 = uVar31 + uVar25 & uVar23;
        bVar47 = (*pauVar27)[uVar33];
        if (-1 < (char)bVar47) {
          auVar60 = *pauVar27;
          uVar45 = 0;
          for (uVar31 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                      (ushort)(byte)(auVar60[0xf] >> 7) << 0xf); (uVar31 & 1) == 0;
              uVar31 = uVar31 >> 1 | 0x80000000) {
            uVar45 = uVar45 + 1;
          }
          uVar33 = (ulonglong)uVar45;
          bVar47 = (*pauVar27)[uVar33];
        }
        bVar18 = bVar18 >> 1;
        (*pauVar27)[uVar33] = bVar18;
        pauVar27[1][uVar33 - 0x10 & uVar23] = bVar18;
        pauVar38 = pauVar27 + uVar33 * -2;
        pauVar27[uVar33 * -2 + -2][0] = 6;
        *(undefined8 *)(pauVar38[-2] + 8) = 0;
        *(undefined8 *)pauVar38[-1] = 1;
        *(undefined8 *)(pauVar38[-1] + 8) = 0;
        auVar76._8_4_ = uVar3;
        auVar76._0_8_ = (ulonglong)bVar47 & 0xffffffffffffff01;
        auVar76._12_4_ = uVar12;
        *(ulonglong *)(piVar5 + 0x60) =
             *(longlong *)(piVar5 + 0x60) - ((ulonglong)bVar47 & 0xffffffffffffff01);
        *(longlong *)(piVar5 + 0x62) = *(longlong *)(piVar5 + 0x62) - auVar76._8_8_;
LAB_140a3f0ec:
        lVar26 = *(longlong *)(pauVar38[-1] + 8);
        if (lVar26 == *(longlong *)(pauVar38[-2] + 8)) {
          pdb_142d91f60(pauVar38[-2] + 8);
        }
        *(undefined2 *)(*(longlong *)pauVar38[-1] + lVar26 * 2) = 0x600;
        *(longlong *)(pauVar38[-1] + 8) = lVar26 + 1;
      }
      *(byte *)(lVar37 + 0x93) = *(byte *)(lVar37 + 0x93) | bStack_261;
      if ((*piVar5 == 1) && (*(longlong *)(piVar5 + 2) == lVar39)) {
        *puStack_e0 = uStack_d8;
        uStack_118 = CONCAT71(uStack_118._1_7_,7);
        uVar25 = pdb_1400aef40(piVar5 + 100);
        pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
        uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        bVar18 = (byte)(uVar25 >> 0x38);
        bVar47 = bVar18 >> 1;
        auVar60 = ZEXT216(CONCAT11(bVar47,bVar47));
        auVar60 = pshuflw(auVar60,auVar60,0);
        lVar26 = 0;
        uVar33 = uVar25;
        while( true ) {
          uVar33 = uVar33 & uVar23;
          pcVar1 = *pauVar27 + uVar33;
          auVar136[0] = -(*pcVar1 == auVar60[0]);
          auVar136[1] = -(pcVar1[1] == auVar60[1]);
          auVar136[2] = -(pcVar1[2] == auVar60[2]);
          auVar136[3] = -(pcVar1[3] == auVar60[3]);
          auVar136[4] = -(pcVar1[4] == auVar60[4]);
          auVar136[5] = -(pcVar1[5] == auVar60[5]);
          auVar136[6] = -(pcVar1[6] == auVar60[6]);
          auVar136[7] = -(pcVar1[7] == auVar60[7]);
          auVar136[8] = -(pcVar1[8] == auVar60[0]);
          auVar136[9] = -(pcVar1[9] == auVar60[1]);
          auVar136[10] = -(pcVar1[10] == auVar60[2]);
          auVar136[0xb] = -(pcVar1[0xb] == auVar60[3]);
          auVar136[0xc] = -(pcVar1[0xc] == auVar60[4]);
          auVar136[0xd] = -(pcVar1[0xd] == auVar60[5]);
          auVar136[0xe] = -(pcVar1[0xe] == auVar60[6]);
          auVar136[0xf] = -(pcVar1[0xf] == auVar60[7]);
          uVar43 = (ushort)(SUB161(auVar136 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar136 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar136 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar136 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar136 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar136 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar136 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar136 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar136 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar136 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar136 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar136 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar136 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar136 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar136 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar136[0xf] >> 7) << 0xf;
          uVar45 = (uint)uVar43;
          while (uVar43 != 0) {
            uVar31 = 0;
            for (uVar8 = uVar45; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar31 = uVar31 + 1;
            }
            pauVar38 = pauVar27 + (uVar31 + uVar33 & uVar23) * -2;
            if (pauVar38[-2][0] == '\a') goto LAB_140a3f44c;
            uVar43 = (ushort)(uVar45 - 1) & (ushort)uVar45;
            uVar45 = CONCAT22((short)(uVar45 - 1 >> 0x10),uVar43);
          }
          auVar77[0] = -(*pcVar1 == cVar161);
          auVar77[1] = -(pcVar1[1] == cVar162);
          auVar77[2] = -(pcVar1[2] == cVar163);
          auVar77[3] = -(pcVar1[3] == cVar164);
          auVar77[4] = -(pcVar1[4] == cVar165);
          auVar77[5] = -(pcVar1[5] == cVar166);
          auVar77[6] = -(pcVar1[6] == cVar167);
          auVar77[7] = -(pcVar1[7] == cVar168);
          auVar77[8] = -(pcVar1[8] == cVar169);
          auVar77[9] = -(pcVar1[9] == cVar170);
          auVar77[10] = -(pcVar1[10] == cVar171);
          auVar77[0xb] = -(pcVar1[0xb] == cVar172);
          auVar77[0xc] = -(pcVar1[0xc] == cVar173);
          auVar77[0xd] = -(pcVar1[0xd] == cVar174);
          auVar77[0xe] = -(pcVar1[0xe] == cVar175);
          auVar77[0xf] = -(pcVar1[0xf] == cVar176);
          uVar43 = (ushort)(SUB161(auVar77 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar77 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar77 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar77 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar77 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar77 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar77 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar77 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar77 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar77 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar77 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar77 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar77 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar77 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar77 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar77[0xf] >> 7) << 0xf;
          if (uVar43 != 0) break;
          uVar33 = uVar33 + lVar26 + 0x10;
          lVar26 = lVar26 + 0x10;
        }
        if (*(longlong *)(piVar5 + 0x60) == 0) {
          pdb_142d98ac0(piVar5 + 0x5c,1,piVar5 + 100,CONCAT71((uint7)(byte)(uVar43 >> 8),1));
          pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
          uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        }
        uVar25 = uVar25 & uVar23;
        auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
        uVar43 = (ushort)(SUB161(auVar60 >> 7,0) & 1) | (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1
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
                 (ushort)(byte)(auVar60[0xf] >> 7) << 0xf;
        uVar45 = (uint)uVar43;
        if (uVar43 == 0) {
          lVar26 = 0x10;
          do {
            uVar25 = uVar25 + lVar26 & uVar23;
            auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
            lVar26 = lVar26 + 0x10;
            uVar45 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                   (ushort)(byte)(auVar60[0xf] >> 7) << 0xf);
          } while (uVar45 == 0);
        }
        uVar31 = 0;
        for (; (uVar45 & 1) == 0; uVar45 = uVar45 >> 1 | 0x80000000) {
          uVar31 = uVar31 + 1;
        }
        uVar33 = uVar31 + uVar25 & uVar23;
        bVar47 = (*pauVar27)[uVar33];
        if (-1 < (char)bVar47) {
          auVar60 = *pauVar27;
          uVar45 = 0;
          for (uVar31 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                      (ushort)(byte)(auVar60[0xf] >> 7) << 0xf); (uVar31 & 1) == 0;
              uVar31 = uVar31 >> 1 | 0x80000000) {
            uVar45 = uVar45 + 1;
          }
          uVar33 = (ulonglong)uVar45;
          bVar47 = (*pauVar27)[uVar33];
        }
        bVar18 = bVar18 >> 1;
        (*pauVar27)[uVar33] = bVar18;
        pauVar27[1][uVar33 - 0x10 & uVar23] = bVar18;
        pauVar38 = pauVar27 + uVar33 * -2;
        pauVar27[uVar33 * -2 + -2][0] = 7;
        *(undefined8 *)(pauVar38[-2] + 8) = 0;
        *(undefined8 *)pauVar38[-1] = 1;
        *(undefined8 *)(pauVar38[-1] + 8) = 0;
        auVar80._8_4_ = uVar3;
        auVar80._0_8_ = (ulonglong)bVar47 & 0xffffffffffffff01;
        auVar80._12_4_ = uVar12;
        *(ulonglong *)(piVar5 + 0x60) =
             *(longlong *)(piVar5 + 0x60) - ((ulonglong)bVar47 & 0xffffffffffffff01);
        *(longlong *)(piVar5 + 0x62) = *(longlong *)(piVar5 + 0x62) - auVar80._8_8_;
LAB_140a3f44c:
        lVar26 = *(longlong *)(pauVar38[-1] + 8);
        if (lVar26 == *(longlong *)(pauVar38[-2] + 8)) {
          pdb_142d91f60(pauVar38[-2] + 8);
        }
        *(undefined2 *)(*(longlong *)pauVar38[-1] + lVar26 * 2) = 0x700;
        *(longlong *)(pauVar38[-1] + 8) = lVar26 + 1;
      }
      *(byte *)(lVar37 + 0x94) = *(byte *)(lVar37 + 0x94) | bStack_25f;
      if ((*piVar5 == 1) && (*(longlong *)(piVar5 + 2) == lVar39)) {
        *puStack_e0 = uStack_d8;
        uStack_118 = CONCAT71(uStack_118._1_7_,8);
        uVar25 = pdb_1400aef40(piVar5 + 100);
        pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
        uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        bVar18 = (byte)(uVar25 >> 0x38);
        bVar47 = bVar18 >> 1;
        auVar60 = ZEXT216(CONCAT11(bVar47,bVar47));
        auVar60 = pshuflw(auVar60,auVar60,0);
        lVar26 = 0;
        uVar33 = uVar25;
        while( true ) {
          uVar33 = uVar33 & uVar23;
          pcVar1 = *pauVar27 + uVar33;
          auVar138[0] = -(*pcVar1 == auVar60[0]);
          auVar138[1] = -(pcVar1[1] == auVar60[1]);
          auVar138[2] = -(pcVar1[2] == auVar60[2]);
          auVar138[3] = -(pcVar1[3] == auVar60[3]);
          auVar138[4] = -(pcVar1[4] == auVar60[4]);
          auVar138[5] = -(pcVar1[5] == auVar60[5]);
          auVar138[6] = -(pcVar1[6] == auVar60[6]);
          auVar138[7] = -(pcVar1[7] == auVar60[7]);
          auVar138[8] = -(pcVar1[8] == auVar60[0]);
          auVar138[9] = -(pcVar1[9] == auVar60[1]);
          auVar138[10] = -(pcVar1[10] == auVar60[2]);
          auVar138[0xb] = -(pcVar1[0xb] == auVar60[3]);
          auVar138[0xc] = -(pcVar1[0xc] == auVar60[4]);
          auVar138[0xd] = -(pcVar1[0xd] == auVar60[5]);
          auVar138[0xe] = -(pcVar1[0xe] == auVar60[6]);
          auVar138[0xf] = -(pcVar1[0xf] == auVar60[7]);
          uVar43 = (ushort)(SUB161(auVar138 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar138 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar138 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar138 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar138 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar138 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar138 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar138 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar138 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar138 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar138 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar138 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar138 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar138 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar138 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar138[0xf] >> 7) << 0xf;
          uVar45 = (uint)uVar43;
          while (uVar43 != 0) {
            uVar31 = 0;
            for (uVar8 = uVar45; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar31 = uVar31 + 1;
            }
            pauVar38 = pauVar27 + (uVar31 + uVar33 & uVar23) * -2;
            if (pauVar38[-2][0] == '\b') goto LAB_140a3f7ac;
            uVar43 = (ushort)(uVar45 - 1) & (ushort)uVar45;
            uVar45 = CONCAT22((short)(uVar45 - 1 >> 0x10),uVar43);
          }
          auVar81[0] = -(*pcVar1 == cVar161);
          auVar81[1] = -(pcVar1[1] == cVar162);
          auVar81[2] = -(pcVar1[2] == cVar163);
          auVar81[3] = -(pcVar1[3] == cVar164);
          auVar81[4] = -(pcVar1[4] == cVar165);
          auVar81[5] = -(pcVar1[5] == cVar166);
          auVar81[6] = -(pcVar1[6] == cVar167);
          auVar81[7] = -(pcVar1[7] == cVar168);
          auVar81[8] = -(pcVar1[8] == cVar169);
          auVar81[9] = -(pcVar1[9] == cVar170);
          auVar81[10] = -(pcVar1[10] == cVar171);
          auVar81[0xb] = -(pcVar1[0xb] == cVar172);
          auVar81[0xc] = -(pcVar1[0xc] == cVar173);
          auVar81[0xd] = -(pcVar1[0xd] == cVar174);
          auVar81[0xe] = -(pcVar1[0xe] == cVar175);
          auVar81[0xf] = -(pcVar1[0xf] == cVar176);
          uVar43 = (ushort)(SUB161(auVar81 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar81 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar81 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar81 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar81 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar81 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar81 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar81 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar81 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar81 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar81 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar81 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar81 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar81 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar81 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar81[0xf] >> 7) << 0xf;
          if (uVar43 != 0) break;
          uVar33 = uVar33 + lVar26 + 0x10;
          lVar26 = lVar26 + 0x10;
        }
        if (*(longlong *)(piVar5 + 0x60) == 0) {
          pdb_142d98ac0(piVar5 + 0x5c,1,piVar5 + 100,CONCAT71((uint7)(byte)(uVar43 >> 8),1));
          pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
          uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        }
        uVar25 = uVar25 & uVar23;
        auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
        uVar43 = (ushort)(SUB161(auVar60 >> 7,0) & 1) | (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1
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
                 (ushort)(byte)(auVar60[0xf] >> 7) << 0xf;
        uVar45 = (uint)uVar43;
        if (uVar43 == 0) {
          lVar26 = 0x10;
          do {
            uVar25 = uVar25 + lVar26 & uVar23;
            auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
            lVar26 = lVar26 + 0x10;
            uVar45 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                   (ushort)(byte)(auVar60[0xf] >> 7) << 0xf);
          } while (uVar45 == 0);
        }
        uVar31 = 0;
        for (; (uVar45 & 1) == 0; uVar45 = uVar45 >> 1 | 0x80000000) {
          uVar31 = uVar31 + 1;
        }
        uVar33 = uVar31 + uVar25 & uVar23;
        bVar47 = (*pauVar27)[uVar33];
        if (-1 < (char)bVar47) {
          auVar60 = *pauVar27;
          uVar45 = 0;
          for (uVar31 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                      (ushort)(byte)(auVar60[0xf] >> 7) << 0xf); (uVar31 & 1) == 0;
              uVar31 = uVar31 >> 1 | 0x80000000) {
            uVar45 = uVar45 + 1;
          }
          uVar33 = (ulonglong)uVar45;
          bVar47 = (*pauVar27)[uVar33];
        }
        bVar18 = bVar18 >> 1;
        (*pauVar27)[uVar33] = bVar18;
        pauVar27[1][uVar33 - 0x10 & uVar23] = bVar18;
        pauVar38 = pauVar27 + uVar33 * -2;
        pauVar27[uVar33 * -2 + -2][0] = 8;
        *(undefined8 *)(pauVar38[-2] + 8) = 0;
        *(undefined8 *)pauVar38[-1] = 1;
        *(undefined8 *)(pauVar38[-1] + 8) = 0;
        auVar84._8_4_ = uVar3;
        auVar84._0_8_ = (ulonglong)bVar47 & 0xffffffffffffff01;
        auVar84._12_4_ = uVar12;
        *(ulonglong *)(piVar5 + 0x60) =
             *(longlong *)(piVar5 + 0x60) - ((ulonglong)bVar47 & 0xffffffffffffff01);
        *(longlong *)(piVar5 + 0x62) = *(longlong *)(piVar5 + 0x62) - auVar84._8_8_;
LAB_140a3f7ac:
        lVar26 = *(longlong *)(pauVar38[-1] + 8);
        if (lVar26 == *(longlong *)(pauVar38[-2] + 8)) {
          pdb_142d91f60(pauVar38[-2] + 8);
        }
        *(undefined2 *)(*(longlong *)pauVar38[-1] + lVar26 * 2) = 0x900;
        *(longlong *)(pauVar38[-1] + 8) = lVar26 + 1;
      }
      *(byte *)(lVar37 + 0x95) = *(byte *)(lVar37 + 0x95) | bStack_260;
      if ((*piVar5 == 1) && (*(longlong *)(piVar5 + 2) == lVar39)) {
        *puStack_e0 = uStack_d8;
        uStack_118 = CONCAT71(uStack_118._1_7_,9);
        uVar25 = pdb_1400aef40(piVar5 + 100);
        pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
        uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        bVar18 = (byte)(uVar25 >> 0x38);
        bVar47 = bVar18 >> 1;
        auVar60 = ZEXT216(CONCAT11(bVar47,bVar47));
        auVar60 = pshuflw(auVar60,auVar60,0);
        lVar26 = 0;
        uVar33 = uVar25;
        while( true ) {
          uVar33 = uVar33 & uVar23;
          pcVar1 = *pauVar27 + uVar33;
          auVar140[0] = -(*pcVar1 == auVar60[0]);
          auVar140[1] = -(pcVar1[1] == auVar60[1]);
          auVar140[2] = -(pcVar1[2] == auVar60[2]);
          auVar140[3] = -(pcVar1[3] == auVar60[3]);
          auVar140[4] = -(pcVar1[4] == auVar60[4]);
          auVar140[5] = -(pcVar1[5] == auVar60[5]);
          auVar140[6] = -(pcVar1[6] == auVar60[6]);
          auVar140[7] = -(pcVar1[7] == auVar60[7]);
          auVar140[8] = -(pcVar1[8] == auVar60[0]);
          auVar140[9] = -(pcVar1[9] == auVar60[1]);
          auVar140[10] = -(pcVar1[10] == auVar60[2]);
          auVar140[0xb] = -(pcVar1[0xb] == auVar60[3]);
          auVar140[0xc] = -(pcVar1[0xc] == auVar60[4]);
          auVar140[0xd] = -(pcVar1[0xd] == auVar60[5]);
          auVar140[0xe] = -(pcVar1[0xe] == auVar60[6]);
          auVar140[0xf] = -(pcVar1[0xf] == auVar60[7]);
          uVar43 = (ushort)(SUB161(auVar140 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar140 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar140 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar140 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar140 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar140 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar140 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar140 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar140 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar140 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar140 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar140 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar140 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar140 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar140 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar140[0xf] >> 7) << 0xf;
          uVar45 = (uint)uVar43;
          while (uVar43 != 0) {
            uVar31 = 0;
            for (uVar8 = uVar45; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar31 = uVar31 + 1;
            }
            pauVar38 = pauVar27 + (uVar31 + uVar33 & uVar23) * -2;
            if (pauVar38[-2][0] == '\t') goto LAB_140a3fb0c;
            uVar43 = (ushort)(uVar45 - 1) & (ushort)uVar45;
            uVar45 = CONCAT22((short)(uVar45 - 1 >> 0x10),uVar43);
          }
          auVar85[0] = -(*pcVar1 == cVar161);
          auVar85[1] = -(pcVar1[1] == cVar162);
          auVar85[2] = -(pcVar1[2] == cVar163);
          auVar85[3] = -(pcVar1[3] == cVar164);
          auVar85[4] = -(pcVar1[4] == cVar165);
          auVar85[5] = -(pcVar1[5] == cVar166);
          auVar85[6] = -(pcVar1[6] == cVar167);
          auVar85[7] = -(pcVar1[7] == cVar168);
          auVar85[8] = -(pcVar1[8] == cVar169);
          auVar85[9] = -(pcVar1[9] == cVar170);
          auVar85[10] = -(pcVar1[10] == cVar171);
          auVar85[0xb] = -(pcVar1[0xb] == cVar172);
          auVar85[0xc] = -(pcVar1[0xc] == cVar173);
          auVar85[0xd] = -(pcVar1[0xd] == cVar174);
          auVar85[0xe] = -(pcVar1[0xe] == cVar175);
          auVar85[0xf] = -(pcVar1[0xf] == cVar176);
          uVar43 = (ushort)(SUB161(auVar85 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar85 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar85 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar85 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar85 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar85 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar85 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar85 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar85 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar85 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar85 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar85 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar85 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar85 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar85 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar85[0xf] >> 7) << 0xf;
          if (uVar43 != 0) break;
          uVar33 = uVar33 + lVar26 + 0x10;
          lVar26 = lVar26 + 0x10;
        }
        if (*(longlong *)(piVar5 + 0x60) == 0) {
          pdb_142d98ac0(piVar5 + 0x5c,1,piVar5 + 100,CONCAT71((uint7)(byte)(uVar43 >> 8),1));
          pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
          uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        }
        uVar25 = uVar25 & uVar23;
        auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
        uVar43 = (ushort)(SUB161(auVar60 >> 7,0) & 1) | (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1
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
                 (ushort)(byte)(auVar60[0xf] >> 7) << 0xf;
        uVar45 = (uint)uVar43;
        if (uVar43 == 0) {
          lVar26 = 0x10;
          do {
            uVar25 = uVar25 + lVar26 & uVar23;
            auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
            lVar26 = lVar26 + 0x10;
            uVar45 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                   (ushort)(byte)(auVar60[0xf] >> 7) << 0xf);
          } while (uVar45 == 0);
        }
        uVar31 = 0;
        for (; (uVar45 & 1) == 0; uVar45 = uVar45 >> 1 | 0x80000000) {
          uVar31 = uVar31 + 1;
        }
        uVar33 = uVar31 + uVar25 & uVar23;
        bVar47 = (*pauVar27)[uVar33];
        if (-1 < (char)bVar47) {
          auVar60 = *pauVar27;
          uVar45 = 0;
          for (uVar31 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                      (ushort)(byte)(auVar60[0xf] >> 7) << 0xf); (uVar31 & 1) == 0;
              uVar31 = uVar31 >> 1 | 0x80000000) {
            uVar45 = uVar45 + 1;
          }
          uVar33 = (ulonglong)uVar45;
          bVar47 = (*pauVar27)[uVar33];
        }
        bVar18 = bVar18 >> 1;
        (*pauVar27)[uVar33] = bVar18;
        pauVar27[1][uVar33 - 0x10 & uVar23] = bVar18;
        pauVar38 = pauVar27 + uVar33 * -2;
        pauVar27[uVar33 * -2 + -2][0] = 9;
        *(undefined8 *)(pauVar38[-2] + 8) = 0;
        *(undefined8 *)pauVar38[-1] = 1;
        *(undefined8 *)(pauVar38[-1] + 8) = 0;
        auVar88._8_4_ = uVar3;
        auVar88._0_8_ = (ulonglong)bVar47 & 0xffffffffffffff01;
        auVar88._12_4_ = uVar12;
        *(ulonglong *)(piVar5 + 0x60) =
             *(longlong *)(piVar5 + 0x60) - ((ulonglong)bVar47 & 0xffffffffffffff01);
        *(longlong *)(piVar5 + 0x62) = *(longlong *)(piVar5 + 0x62) - auVar88._8_8_;
LAB_140a3fb0c:
        lVar26 = *(longlong *)(pauVar38[-1] + 8);
        if (lVar26 == *(longlong *)(pauVar38[-2] + 8)) {
          pdb_142d91f60(pauVar38[-2] + 8);
        }
        *(undefined2 *)(*(longlong *)pauVar38[-1] + lVar26 * 2) = 0x800;
        *(longlong *)(pauVar38[-1] + 8) = lVar26 + 1;
      }
      *(byte *)(lVar37 + 0x96) = *(byte *)(lVar37 + 0x96) | bStack_25e;
      if ((*piVar5 == 1) && (*(longlong *)(piVar5 + 2) == lVar39)) {
        *puStack_e0 = uStack_d8;
        uStack_118 = CONCAT71(uStack_118._1_7_,10);
        uVar25 = pdb_1400aef40(piVar5 + 100);
        pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
        uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        bVar18 = (byte)(uVar25 >> 0x38);
        bVar47 = bVar18 >> 1;
        auVar60 = ZEXT216(CONCAT11(bVar47,bVar47));
        auVar60 = pshuflw(auVar60,auVar60,0);
        lVar26 = 0;
        uVar33 = uVar25;
        while( true ) {
          uVar33 = uVar33 & uVar23;
          pcVar1 = *pauVar27 + uVar33;
          auVar142[0] = -(*pcVar1 == auVar60[0]);
          auVar142[1] = -(pcVar1[1] == auVar60[1]);
          auVar142[2] = -(pcVar1[2] == auVar60[2]);
          auVar142[3] = -(pcVar1[3] == auVar60[3]);
          auVar142[4] = -(pcVar1[4] == auVar60[4]);
          auVar142[5] = -(pcVar1[5] == auVar60[5]);
          auVar142[6] = -(pcVar1[6] == auVar60[6]);
          auVar142[7] = -(pcVar1[7] == auVar60[7]);
          auVar142[8] = -(pcVar1[8] == auVar60[0]);
          auVar142[9] = -(pcVar1[9] == auVar60[1]);
          auVar142[10] = -(pcVar1[10] == auVar60[2]);
          auVar142[0xb] = -(pcVar1[0xb] == auVar60[3]);
          auVar142[0xc] = -(pcVar1[0xc] == auVar60[4]);
          auVar142[0xd] = -(pcVar1[0xd] == auVar60[5]);
          auVar142[0xe] = -(pcVar1[0xe] == auVar60[6]);
          auVar142[0xf] = -(pcVar1[0xf] == auVar60[7]);
          uVar43 = (ushort)(SUB161(auVar142 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar142 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar142 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar142 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar142 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar142 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar142 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar142 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar142 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar142 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar142 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar142 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar142 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar142 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar142 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar142[0xf] >> 7) << 0xf;
          uVar45 = (uint)uVar43;
          while (uVar43 != 0) {
            uVar31 = 0;
            for (uVar8 = uVar45; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar31 = uVar31 + 1;
            }
            pauVar38 = pauVar27 + (uVar31 + uVar33 & uVar23) * -2;
            if (pauVar38[-2][0] == '\n') goto LAB_140a3fe6c;
            uVar43 = (ushort)(uVar45 - 1) & (ushort)uVar45;
            uVar45 = CONCAT22((short)(uVar45 - 1 >> 0x10),uVar43);
          }
          auVar89[0] = -(*pcVar1 == cVar161);
          auVar89[1] = -(pcVar1[1] == cVar162);
          auVar89[2] = -(pcVar1[2] == cVar163);
          auVar89[3] = -(pcVar1[3] == cVar164);
          auVar89[4] = -(pcVar1[4] == cVar165);
          auVar89[5] = -(pcVar1[5] == cVar166);
          auVar89[6] = -(pcVar1[6] == cVar167);
          auVar89[7] = -(pcVar1[7] == cVar168);
          auVar89[8] = -(pcVar1[8] == cVar169);
          auVar89[9] = -(pcVar1[9] == cVar170);
          auVar89[10] = -(pcVar1[10] == cVar171);
          auVar89[0xb] = -(pcVar1[0xb] == cVar172);
          auVar89[0xc] = -(pcVar1[0xc] == cVar173);
          auVar89[0xd] = -(pcVar1[0xd] == cVar174);
          auVar89[0xe] = -(pcVar1[0xe] == cVar175);
          auVar89[0xf] = -(pcVar1[0xf] == cVar176);
          uVar43 = (ushort)(SUB161(auVar89 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar89 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar89 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar89 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar89 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar89 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar89 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar89 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar89 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar89 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar89 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar89 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar89 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar89 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar89 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar89[0xf] >> 7) << 0xf;
          if (uVar43 != 0) break;
          uVar33 = uVar33 + lVar26 + 0x10;
          lVar26 = lVar26 + 0x10;
        }
        if (*(longlong *)(piVar5 + 0x60) == 0) {
          pdb_142d98ac0(piVar5 + 0x5c,1,piVar5 + 100,CONCAT71((uint7)(byte)(uVar43 >> 8),1));
          pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
          uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        }
        uVar25 = uVar25 & uVar23;
        auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
        uVar43 = (ushort)(SUB161(auVar60 >> 7,0) & 1) | (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1
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
                 (ushort)(byte)(auVar60[0xf] >> 7) << 0xf;
        uVar45 = (uint)uVar43;
        if (uVar43 == 0) {
          lVar26 = 0x10;
          do {
            uVar25 = uVar25 + lVar26 & uVar23;
            auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
            lVar26 = lVar26 + 0x10;
            uVar45 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                   (ushort)(byte)(auVar60[0xf] >> 7) << 0xf);
          } while (uVar45 == 0);
        }
        uVar31 = 0;
        for (; (uVar45 & 1) == 0; uVar45 = uVar45 >> 1 | 0x80000000) {
          uVar31 = uVar31 + 1;
        }
        uVar33 = uVar31 + uVar25 & uVar23;
        bVar47 = (*pauVar27)[uVar33];
        if (-1 < (char)bVar47) {
          auVar60 = *pauVar27;
          uVar45 = 0;
          for (uVar31 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                      (ushort)(byte)(auVar60[0xf] >> 7) << 0xf); (uVar31 & 1) == 0;
              uVar31 = uVar31 >> 1 | 0x80000000) {
            uVar45 = uVar45 + 1;
          }
          uVar33 = (ulonglong)uVar45;
          bVar47 = (*pauVar27)[uVar33];
        }
        bVar18 = bVar18 >> 1;
        (*pauVar27)[uVar33] = bVar18;
        pauVar27[1][uVar33 - 0x10 & uVar23] = bVar18;
        pauVar38 = pauVar27 + uVar33 * -2;
        pauVar27[uVar33 * -2 + -2][0] = 10;
        *(undefined8 *)(pauVar38[-2] + 8) = 0;
        *(undefined8 *)pauVar38[-1] = 1;
        *(undefined8 *)(pauVar38[-1] + 8) = 0;
        auVar92._8_4_ = uVar3;
        auVar92._0_8_ = (ulonglong)bVar47 & 0xffffffffffffff01;
        auVar92._12_4_ = uVar12;
        *(ulonglong *)(piVar5 + 0x60) =
             *(longlong *)(piVar5 + 0x60) - ((ulonglong)bVar47 & 0xffffffffffffff01);
        *(longlong *)(piVar5 + 0x62) = *(longlong *)(piVar5 + 0x62) - auVar92._8_8_;
LAB_140a3fe6c:
        lVar26 = *(longlong *)(pauVar38[-1] + 8);
        if (lVar26 == *(longlong *)(pauVar38[-2] + 8)) {
          pdb_142d91f60(pauVar38[-2] + 8);
        }
        *(undefined2 *)(*(longlong *)pauVar38[-1] + lVar26 * 2) = 0xa00;
        *(longlong *)(pauVar38[-1] + 8) = lVar26 + 1;
      }
      *(byte *)(lVar37 + 0x97) = *(byte *)(lVar37 + 0x97) | bStack_25d;
      if ((*piVar5 == 1) && (*(longlong *)(piVar5 + 2) == lVar39)) {
        *puStack_e0 = uStack_d8;
        uStack_118 = CONCAT71(uStack_118._1_7_,0xb);
        uVar25 = pdb_1400aef40(piVar5 + 100);
        pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
        uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        bVar18 = (byte)(uVar25 >> 0x38);
        bVar47 = bVar18 >> 1;
        auVar60 = ZEXT216(CONCAT11(bVar47,bVar47));
        auVar60 = pshuflw(auVar60,auVar60,0);
        lVar26 = 0;
        uVar33 = uVar25;
        while( true ) {
          uVar33 = uVar33 & uVar23;
          pcVar1 = *pauVar27 + uVar33;
          auVar144[0] = -(*pcVar1 == auVar60[0]);
          auVar144[1] = -(pcVar1[1] == auVar60[1]);
          auVar144[2] = -(pcVar1[2] == auVar60[2]);
          auVar144[3] = -(pcVar1[3] == auVar60[3]);
          auVar144[4] = -(pcVar1[4] == auVar60[4]);
          auVar144[5] = -(pcVar1[5] == auVar60[5]);
          auVar144[6] = -(pcVar1[6] == auVar60[6]);
          auVar144[7] = -(pcVar1[7] == auVar60[7]);
          auVar144[8] = -(pcVar1[8] == auVar60[0]);
          auVar144[9] = -(pcVar1[9] == auVar60[1]);
          auVar144[10] = -(pcVar1[10] == auVar60[2]);
          auVar144[0xb] = -(pcVar1[0xb] == auVar60[3]);
          auVar144[0xc] = -(pcVar1[0xc] == auVar60[4]);
          auVar144[0xd] = -(pcVar1[0xd] == auVar60[5]);
          auVar144[0xe] = -(pcVar1[0xe] == auVar60[6]);
          auVar144[0xf] = -(pcVar1[0xf] == auVar60[7]);
          uVar43 = (ushort)(SUB161(auVar144 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar144 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar144 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar144 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar144 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar144 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar144 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar144 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar144 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar144 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar144 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar144 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar144 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar144 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar144 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar144[0xf] >> 7) << 0xf;
          uVar45 = (uint)uVar43;
          while (uVar43 != 0) {
            uVar31 = 0;
            for (uVar8 = uVar45; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar31 = uVar31 + 1;
            }
            pauVar38 = pauVar27 + (uVar31 + uVar33 & uVar23) * -2;
            if (pauVar38[-2][0] == '\v') goto LAB_140a401cc;
            uVar43 = (ushort)(uVar45 - 1) & (ushort)uVar45;
            uVar45 = CONCAT22((short)(uVar45 - 1 >> 0x10),uVar43);
          }
          auVar93[0] = -(*pcVar1 == cVar161);
          auVar93[1] = -(pcVar1[1] == cVar162);
          auVar93[2] = -(pcVar1[2] == cVar163);
          auVar93[3] = -(pcVar1[3] == cVar164);
          auVar93[4] = -(pcVar1[4] == cVar165);
          auVar93[5] = -(pcVar1[5] == cVar166);
          auVar93[6] = -(pcVar1[6] == cVar167);
          auVar93[7] = -(pcVar1[7] == cVar168);
          auVar93[8] = -(pcVar1[8] == cVar169);
          auVar93[9] = -(pcVar1[9] == cVar170);
          auVar93[10] = -(pcVar1[10] == cVar171);
          auVar93[0xb] = -(pcVar1[0xb] == cVar172);
          auVar93[0xc] = -(pcVar1[0xc] == cVar173);
          auVar93[0xd] = -(pcVar1[0xd] == cVar174);
          auVar93[0xe] = -(pcVar1[0xe] == cVar175);
          auVar93[0xf] = -(pcVar1[0xf] == cVar176);
          uVar43 = (ushort)(SUB161(auVar93 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar93 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar93 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar93 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar93 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar93 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar93 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar93 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar93 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar93 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar93 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar93 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar93 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar93 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar93 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar93[0xf] >> 7) << 0xf;
          if (uVar43 != 0) break;
          uVar33 = uVar33 + lVar26 + 0x10;
          lVar26 = lVar26 + 0x10;
        }
        if (*(longlong *)(piVar5 + 0x60) == 0) {
          pdb_142d98ac0(piVar5 + 0x5c,1,piVar5 + 100,CONCAT71((uint7)(byte)(uVar43 >> 8),1));
          pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
          uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        }
        uVar25 = uVar25 & uVar23;
        auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
        uVar43 = (ushort)(SUB161(auVar60 >> 7,0) & 1) | (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1
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
                 (ushort)(byte)(auVar60[0xf] >> 7) << 0xf;
        uVar45 = (uint)uVar43;
        if (uVar43 == 0) {
          lVar26 = 0x10;
          do {
            uVar25 = uVar25 + lVar26 & uVar23;
            auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
            lVar26 = lVar26 + 0x10;
            uVar45 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                   (ushort)(byte)(auVar60[0xf] >> 7) << 0xf);
          } while (uVar45 == 0);
        }
        uVar31 = 0;
        for (; (uVar45 & 1) == 0; uVar45 = uVar45 >> 1 | 0x80000000) {
          uVar31 = uVar31 + 1;
        }
        uVar33 = uVar31 + uVar25 & uVar23;
        bVar47 = (*pauVar27)[uVar33];
        if (-1 < (char)bVar47) {
          auVar60 = *pauVar27;
          uVar45 = 0;
          for (uVar31 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                      (ushort)(byte)(auVar60[0xf] >> 7) << 0xf); (uVar31 & 1) == 0;
              uVar31 = uVar31 >> 1 | 0x80000000) {
            uVar45 = uVar45 + 1;
          }
          uVar33 = (ulonglong)uVar45;
          bVar47 = (*pauVar27)[uVar33];
        }
        bVar18 = bVar18 >> 1;
        (*pauVar27)[uVar33] = bVar18;
        pauVar27[1][uVar33 - 0x10 & uVar23] = bVar18;
        pauVar38 = pauVar27 + uVar33 * -2;
        pauVar27[uVar33 * -2 + -2][0] = 0xb;
        *(undefined8 *)(pauVar38[-2] + 8) = 0;
        *(undefined8 *)pauVar38[-1] = 1;
        *(undefined8 *)(pauVar38[-1] + 8) = 0;
        auVar96._8_4_ = uVar3;
        auVar96._0_8_ = (ulonglong)bVar47 & 0xffffffffffffff01;
        auVar96._12_4_ = uVar12;
        *(ulonglong *)(piVar5 + 0x60) =
             *(longlong *)(piVar5 + 0x60) - ((ulonglong)bVar47 & 0xffffffffffffff01);
        *(longlong *)(piVar5 + 0x62) = *(longlong *)(piVar5 + 0x62) - auVar96._8_8_;
LAB_140a401cc:
        lVar26 = *(longlong *)(pauVar38[-1] + 8);
        if (lVar26 == *(longlong *)(pauVar38[-2] + 8)) {
          pdb_142d91f60(pauVar38[-2] + 8);
        }
        *(undefined2 *)(*(longlong *)pauVar38[-1] + lVar26 * 2) = 0xb00;
        *(longlong *)(pauVar38[-1] + 8) = lVar26 + 1;
      }
      *(byte *)(lVar37 + 0x98) = *(byte *)(lVar37 + 0x98) | bStack_25c;
      if ((*piVar5 == 1) && (*(longlong *)(piVar5 + 2) == lVar39)) {
        *puStack_e0 = uStack_d8;
        uStack_118 = CONCAT71(uStack_118._1_7_,0xc);
        uVar25 = pdb_1400aef40(piVar5 + 100);
        pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
        uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        bVar18 = (byte)(uVar25 >> 0x38);
        bVar47 = bVar18 >> 1;
        auVar60 = ZEXT216(CONCAT11(bVar47,bVar47));
        auVar60 = pshuflw(auVar60,auVar60,0);
        lVar26 = 0;
        uVar33 = uVar25;
        while( true ) {
          uVar33 = uVar33 & uVar23;
          pcVar1 = *pauVar27 + uVar33;
          auVar146[0] = -(*pcVar1 == auVar60[0]);
          auVar146[1] = -(pcVar1[1] == auVar60[1]);
          auVar146[2] = -(pcVar1[2] == auVar60[2]);
          auVar146[3] = -(pcVar1[3] == auVar60[3]);
          auVar146[4] = -(pcVar1[4] == auVar60[4]);
          auVar146[5] = -(pcVar1[5] == auVar60[5]);
          auVar146[6] = -(pcVar1[6] == auVar60[6]);
          auVar146[7] = -(pcVar1[7] == auVar60[7]);
          auVar146[8] = -(pcVar1[8] == auVar60[0]);
          auVar146[9] = -(pcVar1[9] == auVar60[1]);
          auVar146[10] = -(pcVar1[10] == auVar60[2]);
          auVar146[0xb] = -(pcVar1[0xb] == auVar60[3]);
          auVar146[0xc] = -(pcVar1[0xc] == auVar60[4]);
          auVar146[0xd] = -(pcVar1[0xd] == auVar60[5]);
          auVar146[0xe] = -(pcVar1[0xe] == auVar60[6]);
          auVar146[0xf] = -(pcVar1[0xf] == auVar60[7]);
          uVar43 = (ushort)(SUB161(auVar146 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar146 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar146 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar146 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar146 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar146 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar146 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar146 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar146 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar146 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar146 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar146 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar146 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar146 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar146 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar146[0xf] >> 7) << 0xf;
          uVar45 = (uint)uVar43;
          while (uVar43 != 0) {
            uVar31 = 0;
            for (uVar8 = uVar45; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar31 = uVar31 + 1;
            }
            pauVar38 = pauVar27 + (uVar31 + uVar33 & uVar23) * -2;
            if (pauVar38[-2][0] == '\f') goto LAB_140a40435;
            uVar43 = (ushort)(uVar45 - 1) & (ushort)uVar45;
            uVar45 = CONCAT22((short)(uVar45 - 1 >> 0x10),uVar43);
          }
          auVar97[0] = -(*pcVar1 == cVar161);
          auVar97[1] = -(pcVar1[1] == cVar162);
          auVar97[2] = -(pcVar1[2] == cVar163);
          auVar97[3] = -(pcVar1[3] == cVar164);
          auVar97[4] = -(pcVar1[4] == cVar165);
          auVar97[5] = -(pcVar1[5] == cVar166);
          auVar97[6] = -(pcVar1[6] == cVar167);
          auVar97[7] = -(pcVar1[7] == cVar168);
          auVar97[8] = -(pcVar1[8] == cVar169);
          auVar97[9] = -(pcVar1[9] == cVar170);
          auVar97[10] = -(pcVar1[10] == cVar171);
          auVar97[0xb] = -(pcVar1[0xb] == cVar172);
          auVar97[0xc] = -(pcVar1[0xc] == cVar173);
          auVar97[0xd] = -(pcVar1[0xd] == cVar174);
          auVar97[0xe] = -(pcVar1[0xe] == cVar175);
          auVar97[0xf] = -(pcVar1[0xf] == cVar176);
          uVar43 = (ushort)(SUB161(auVar97 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar97 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar97 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar97 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar97 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar97 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar97 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar97 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar97 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar97 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar97 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar97 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar97 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar97 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar97 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar97[0xf] >> 7) << 0xf;
          if (uVar43 != 0) break;
          uVar33 = uVar33 + lVar26 + 0x10;
          lVar26 = lVar26 + 0x10;
        }
        if (*(longlong *)(piVar5 + 0x60) == 0) {
          pdb_142d98ac0(piVar5 + 0x5c,1,piVar5 + 100,CONCAT71((uint7)(byte)(uVar43 >> 8),1));
          pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
          uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        }
        uVar25 = uVar25 & uVar23;
        auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
        uVar43 = (ushort)(SUB161(auVar60 >> 7,0) & 1) | (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1
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
                 (ushort)(byte)(auVar60[0xf] >> 7) << 0xf;
        uVar45 = (uint)uVar43;
        if (uVar43 == 0) {
          lVar26 = 0x10;
          do {
            uVar25 = uVar25 + lVar26 & uVar23;
            auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
            lVar26 = lVar26 + 0x10;
            uVar45 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                   (ushort)(byte)(auVar60[0xf] >> 7) << 0xf);
          } while (uVar45 == 0);
        }
        uVar31 = 0;
        for (; (uVar45 & 1) == 0; uVar45 = uVar45 >> 1 | 0x80000000) {
          uVar31 = uVar31 + 1;
        }
        uVar33 = uVar31 + uVar25 & uVar23;
        bVar47 = (*pauVar27)[uVar33];
        if (-1 < (char)bVar47) {
          auVar60 = *pauVar27;
          uVar45 = 0;
          for (uVar31 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                      (ushort)(byte)(auVar60[0xf] >> 7) << 0xf); (uVar31 & 1) == 0;
              uVar31 = uVar31 >> 1 | 0x80000000) {
            uVar45 = uVar45 + 1;
          }
          uVar33 = (ulonglong)uVar45;
          bVar47 = (*pauVar27)[uVar33];
        }
        bVar18 = bVar18 >> 1;
        (*pauVar27)[uVar33] = bVar18;
        pauVar27[1][uVar33 - 0x10 & uVar23] = bVar18;
        pauVar38 = pauVar27 + uVar33 * -2;
        pauVar27[uVar33 * -2 + -2][0] = 0xc;
        *(undefined8 *)(pauVar38[-2] + 8) = 0;
        *(undefined8 *)pauVar38[-1] = 1;
        *(undefined8 *)(pauVar38[-1] + 8) = 0;
        auVar99._8_4_ = uVar3;
        auVar99._0_8_ = (ulonglong)bVar47 & 0xffffffffffffff01;
        auVar99._12_4_ = uVar12;
        *(ulonglong *)(piVar5 + 0x60) =
             *(longlong *)(piVar5 + 0x60) - ((ulonglong)bVar47 & 0xffffffffffffff01);
        *(longlong *)(piVar5 + 0x62) = *(longlong *)(piVar5 + 0x62) - auVar99._8_8_;
LAB_140a40435:
        lVar26 = *(longlong *)(pauVar38[-1] + 8);
        if (lVar26 == *(longlong *)(pauVar38[-2] + 8)) {
          pdb_142d91f60(pauVar38[-2] + 8);
        }
        *(undefined2 *)(*(longlong *)pauVar38[-1] + lVar26 * 2) = 0xc00;
        *(longlong *)(pauVar38[-1] + 8) = lVar26 + 1;
      }
      *(byte *)(lVar37 + 0x99) = *(byte *)(lVar37 + 0x99) | bStack_25b;
      if ((*piVar5 == 1) && (*(longlong *)(piVar5 + 2) == lVar39)) {
        *puStack_e0 = uStack_d8;
        uStack_118 = CONCAT71(uStack_118._1_7_,0xd);
        uVar25 = pdb_1400aef40(piVar5 + 100);
        pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
        uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        bVar18 = (byte)(uVar25 >> 0x38);
        bVar47 = bVar18 >> 1;
        auVar60 = ZEXT216(CONCAT11(bVar47,bVar47));
        auVar60 = pshuflw(auVar60,auVar60,0);
        lVar26 = 0;
        uVar33 = uVar25;
        while( true ) {
          uVar33 = uVar33 & uVar23;
          pcVar1 = *pauVar27 + uVar33;
          auVar147[0] = -(*pcVar1 == auVar60[0]);
          auVar147[1] = -(pcVar1[1] == auVar60[1]);
          auVar147[2] = -(pcVar1[2] == auVar60[2]);
          auVar147[3] = -(pcVar1[3] == auVar60[3]);
          auVar147[4] = -(pcVar1[4] == auVar60[4]);
          auVar147[5] = -(pcVar1[5] == auVar60[5]);
          auVar147[6] = -(pcVar1[6] == auVar60[6]);
          auVar147[7] = -(pcVar1[7] == auVar60[7]);
          auVar147[8] = -(pcVar1[8] == auVar60[0]);
          auVar147[9] = -(pcVar1[9] == auVar60[1]);
          auVar147[10] = -(pcVar1[10] == auVar60[2]);
          auVar147[0xb] = -(pcVar1[0xb] == auVar60[3]);
          auVar147[0xc] = -(pcVar1[0xc] == auVar60[4]);
          auVar147[0xd] = -(pcVar1[0xd] == auVar60[5]);
          auVar147[0xe] = -(pcVar1[0xe] == auVar60[6]);
          auVar147[0xf] = -(pcVar1[0xf] == auVar60[7]);
          uVar43 = (ushort)(SUB161(auVar147 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar147 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar147 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar147 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar147 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar147 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar147 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar147 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar147 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar147 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar147 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar147 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar147 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar147 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar147 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar147[0xf] >> 7) << 0xf;
          uVar45 = (uint)uVar43;
          while (uVar43 != 0) {
            uVar31 = 0;
            for (uVar8 = uVar45; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar31 = uVar31 + 1;
            }
            pauVar38 = pauVar27 + (uVar31 + uVar33 & uVar23) * -2;
            if (pauVar38[-2][0] == '\r') goto LAB_140a405d8;
            uVar43 = (ushort)(uVar45 - 1) & (ushort)uVar45;
            uVar45 = CONCAT22((short)(uVar45 - 1 >> 0x10),uVar43);
          }
          auVar100[0] = -(*pcVar1 == cVar161);
          auVar100[1] = -(pcVar1[1] == cVar162);
          auVar100[2] = -(pcVar1[2] == cVar163);
          auVar100[3] = -(pcVar1[3] == cVar164);
          auVar100[4] = -(pcVar1[4] == cVar165);
          auVar100[5] = -(pcVar1[5] == cVar166);
          auVar100[6] = -(pcVar1[6] == cVar167);
          auVar100[7] = -(pcVar1[7] == cVar168);
          auVar100[8] = -(pcVar1[8] == cVar169);
          auVar100[9] = -(pcVar1[9] == cVar170);
          auVar100[10] = -(pcVar1[10] == cVar171);
          auVar100[0xb] = -(pcVar1[0xb] == cVar172);
          auVar100[0xc] = -(pcVar1[0xc] == cVar173);
          auVar100[0xd] = -(pcVar1[0xd] == cVar174);
          auVar100[0xe] = -(pcVar1[0xe] == cVar175);
          auVar100[0xf] = -(pcVar1[0xf] == cVar176);
          uVar43 = (ushort)(SUB161(auVar100 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar100 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar100 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar100 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar100 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar100 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar100 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar100 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar100 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar100 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar100 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar100 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar100 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar100 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar100 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar100[0xf] >> 7) << 0xf;
          if (uVar43 != 0) break;
          uVar33 = uVar33 + lVar26 + 0x10;
          lVar26 = lVar26 + 0x10;
        }
        if (*(longlong *)(piVar5 + 0x60) == 0) {
          pdb_142d98ac0(piVar5 + 0x5c,1,piVar5 + 100,CONCAT71((uint7)(byte)(uVar43 >> 8),1));
          pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
          uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        }
        uVar25 = uVar25 & uVar23;
        auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
        uVar43 = (ushort)(SUB161(auVar60 >> 7,0) & 1) | (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1
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
                 (ushort)(byte)(auVar60[0xf] >> 7) << 0xf;
        uVar45 = (uint)uVar43;
        if (uVar43 == 0) {
          lVar26 = 0x10;
          do {
            uVar25 = uVar25 + lVar26 & uVar23;
            auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
            lVar26 = lVar26 + 0x10;
            uVar45 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                   (ushort)(byte)(auVar60[0xf] >> 7) << 0xf);
          } while (uVar45 == 0);
        }
        uVar31 = 0;
        for (; (uVar45 & 1) == 0; uVar45 = uVar45 >> 1 | 0x80000000) {
          uVar31 = uVar31 + 1;
        }
        uVar33 = uVar31 + uVar25 & uVar23;
        bVar47 = (*pauVar27)[uVar33];
        if (-1 < (char)bVar47) {
          auVar60 = *pauVar27;
          uVar45 = 0;
          for (uVar31 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                      (ushort)(byte)(auVar60[0xf] >> 7) << 0xf); (uVar31 & 1) == 0;
              uVar31 = uVar31 >> 1 | 0x80000000) {
            uVar45 = uVar45 + 1;
          }
          uVar33 = (ulonglong)uVar45;
          bVar47 = (*pauVar27)[uVar33];
        }
        bVar18 = bVar18 >> 1;
        (*pauVar27)[uVar33] = bVar18;
        pauVar27[1][uVar33 - 0x10 & uVar23] = bVar18;
        pauVar38 = pauVar27 + uVar33 * -2;
        pauVar27[uVar33 * -2 + -2][0] = 0xd;
        *(undefined8 *)(pauVar38[-2] + 8) = 0;
        *(undefined8 *)pauVar38[-1] = 1;
        *(undefined8 *)(pauVar38[-1] + 8) = 0;
        auVar101._8_4_ = uVar3;
        auVar101._0_8_ = (ulonglong)bVar47 & 0xffffffffffffff01;
        auVar101._12_4_ = uVar12;
        *(ulonglong *)(piVar5 + 0x60) =
             *(longlong *)(piVar5 + 0x60) - ((ulonglong)bVar47 & 0xffffffffffffff01);
        *(longlong *)(piVar5 + 0x62) = *(longlong *)(piVar5 + 0x62) - auVar101._8_8_;
LAB_140a405d8:
        lVar26 = *(longlong *)(pauVar38[-1] + 8);
        if (lVar26 == *(longlong *)(pauVar38[-2] + 8)) {
          pdb_142d91f60(pauVar38[-2] + 8);
        }
        *(undefined2 *)(*(longlong *)pauVar38[-1] + lVar26 * 2) = 0xd00;
        *(longlong *)(pauVar38[-1] + 8) = lVar26 + 1;
      }
      *(byte *)(lVar37 + 0x9a) = *(byte *)(lVar37 + 0x9a) | bStack_259;
      if ((*piVar5 == 1) && (*(longlong *)(piVar5 + 2) == lVar39)) {
        *puStack_e0 = uStack_d8;
        uStack_118 = CONCAT71(uStack_118._1_7_,0xe);
        uVar25 = pdb_1400aef40(piVar5 + 100);
        pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
        uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        bVar18 = (byte)(uVar25 >> 0x38);
        bVar47 = bVar18 >> 1;
        auVar60 = ZEXT216(CONCAT11(bVar47,bVar47));
        auVar60 = pshuflw(auVar60,auVar60,0);
        lVar26 = 0;
        uVar33 = uVar25;
        while( true ) {
          uVar33 = uVar33 & uVar23;
          pcVar1 = *pauVar27 + uVar33;
          auVar148[0] = -(*pcVar1 == auVar60[0]);
          auVar148[1] = -(pcVar1[1] == auVar60[1]);
          auVar148[2] = -(pcVar1[2] == auVar60[2]);
          auVar148[3] = -(pcVar1[3] == auVar60[3]);
          auVar148[4] = -(pcVar1[4] == auVar60[4]);
          auVar148[5] = -(pcVar1[5] == auVar60[5]);
          auVar148[6] = -(pcVar1[6] == auVar60[6]);
          auVar148[7] = -(pcVar1[7] == auVar60[7]);
          auVar148[8] = -(pcVar1[8] == auVar60[0]);
          auVar148[9] = -(pcVar1[9] == auVar60[1]);
          auVar148[10] = -(pcVar1[10] == auVar60[2]);
          auVar148[0xb] = -(pcVar1[0xb] == auVar60[3]);
          auVar148[0xc] = -(pcVar1[0xc] == auVar60[4]);
          auVar148[0xd] = -(pcVar1[0xd] == auVar60[5]);
          auVar148[0xe] = -(pcVar1[0xe] == auVar60[6]);
          auVar148[0xf] = -(pcVar1[0xf] == auVar60[7]);
          uVar43 = (ushort)(SUB161(auVar148 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar148 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar148 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar148 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar148 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar148 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar148 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar148 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar148 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar148 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar148 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar148 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar148 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar148 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar148 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar148[0xf] >> 7) << 0xf;
          uVar45 = (uint)uVar43;
          while (uVar43 != 0) {
            uVar31 = 0;
            for (uVar8 = uVar45; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar31 = uVar31 + 1;
            }
            pauVar38 = pauVar27 + (uVar31 + uVar33 & uVar23) * -2;
            if (pauVar38[-2][0] == '\x0e') goto LAB_140a40778;
            uVar43 = (ushort)(uVar45 - 1) & (ushort)uVar45;
            uVar45 = CONCAT22((short)(uVar45 - 1 >> 0x10),uVar43);
          }
          auVar102[0] = -(*pcVar1 == cVar161);
          auVar102[1] = -(pcVar1[1] == cVar162);
          auVar102[2] = -(pcVar1[2] == cVar163);
          auVar102[3] = -(pcVar1[3] == cVar164);
          auVar102[4] = -(pcVar1[4] == cVar165);
          auVar102[5] = -(pcVar1[5] == cVar166);
          auVar102[6] = -(pcVar1[6] == cVar167);
          auVar102[7] = -(pcVar1[7] == cVar168);
          auVar102[8] = -(pcVar1[8] == cVar169);
          auVar102[9] = -(pcVar1[9] == cVar170);
          auVar102[10] = -(pcVar1[10] == cVar171);
          auVar102[0xb] = -(pcVar1[0xb] == cVar172);
          auVar102[0xc] = -(pcVar1[0xc] == cVar173);
          auVar102[0xd] = -(pcVar1[0xd] == cVar174);
          auVar102[0xe] = -(pcVar1[0xe] == cVar175);
          auVar102[0xf] = -(pcVar1[0xf] == cVar176);
          uVar43 = (ushort)(SUB161(auVar102 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar102 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar102 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar102 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar102 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar102 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar102 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar102 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar102 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar102 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar102 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar102 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar102 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar102 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar102 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar102[0xf] >> 7) << 0xf;
          if (uVar43 != 0) break;
          uVar33 = uVar33 + lVar26 + 0x10;
          lVar26 = lVar26 + 0x10;
        }
        if (*(longlong *)(piVar5 + 0x60) == 0) {
          pdb_142d98ac0(piVar5 + 0x5c,1,piVar5 + 100,CONCAT71((uint7)(byte)(uVar43 >> 8),1));
          pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
          uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        }
        uVar25 = uVar25 & uVar23;
        auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
        uVar43 = (ushort)(SUB161(auVar60 >> 7,0) & 1) | (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1
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
                 (ushort)(byte)(auVar60[0xf] >> 7) << 0xf;
        uVar45 = (uint)uVar43;
        if (uVar43 == 0) {
          lVar26 = 0x10;
          do {
            uVar25 = uVar25 + lVar26 & uVar23;
            auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
            lVar26 = lVar26 + 0x10;
            uVar45 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                   (ushort)(byte)(auVar60[0xf] >> 7) << 0xf);
          } while (uVar45 == 0);
        }
        uVar31 = 0;
        for (; (uVar45 & 1) == 0; uVar45 = uVar45 >> 1 | 0x80000000) {
          uVar31 = uVar31 + 1;
        }
        uVar33 = uVar31 + uVar25 & uVar23;
        bVar47 = (*pauVar27)[uVar33];
        if (-1 < (char)bVar47) {
          auVar60 = *pauVar27;
          uVar45 = 0;
          for (uVar31 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                      (ushort)(byte)(auVar60[0xf] >> 7) << 0xf); (uVar31 & 1) == 0;
              uVar31 = uVar31 >> 1 | 0x80000000) {
            uVar45 = uVar45 + 1;
          }
          uVar33 = (ulonglong)uVar45;
          bVar47 = (*pauVar27)[uVar33];
        }
        bVar18 = bVar18 >> 1;
        (*pauVar27)[uVar33] = bVar18;
        pauVar27[1][uVar33 - 0x10 & uVar23] = bVar18;
        pauVar38 = pauVar27 + uVar33 * -2;
        pauVar27[uVar33 * -2 + -2][0] = 0xe;
        *(undefined8 *)(pauVar38[-2] + 8) = 0;
        *(undefined8 *)pauVar38[-1] = 1;
        *(undefined8 *)(pauVar38[-1] + 8) = 0;
        auVar103._8_4_ = uVar3;
        auVar103._0_8_ = (ulonglong)bVar47 & 0xffffffffffffff01;
        auVar103._12_4_ = uVar12;
        *(ulonglong *)(piVar5 + 0x60) =
             *(longlong *)(piVar5 + 0x60) - ((ulonglong)bVar47 & 0xffffffffffffff01);
        *(longlong *)(piVar5 + 0x62) = *(longlong *)(piVar5 + 0x62) - auVar103._8_8_;
LAB_140a40778:
        lVar26 = *(longlong *)(pauVar38[-1] + 8);
        if (lVar26 == *(longlong *)(pauVar38[-2] + 8)) {
          pdb_142d91f60(pauVar38[-2] + 8);
        }
        *(undefined2 *)(*(longlong *)pauVar38[-1] + lVar26 * 2) = 0xf00;
        *(longlong *)(pauVar38[-1] + 8) = lVar26 + 1;
      }
      *(byte *)(lVar37 + 0x9b) = *(byte *)(lVar37 + 0x9b) | bStack_25a;
      if ((*piVar5 == 1) && (*(longlong *)(piVar5 + 2) == lVar39)) {
        *puStack_e0 = uStack_d8;
        uStack_118 = CONCAT71(uStack_118._1_7_,0xf);
        uVar25 = pdb_1400aef40(piVar5 + 100);
        pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
        uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        bVar18 = (byte)(uVar25 >> 0x38);
        bVar47 = bVar18 >> 1;
        auVar60 = ZEXT216(CONCAT11(bVar47,bVar47));
        auVar60 = pshuflw(auVar60,auVar60,0);
        lVar26 = 0;
        uVar33 = uVar25;
        while( true ) {
          uVar33 = uVar33 & uVar23;
          pcVar1 = *pauVar27 + uVar33;
          auVar149[0] = -(*pcVar1 == auVar60[0]);
          auVar149[1] = -(pcVar1[1] == auVar60[1]);
          auVar149[2] = -(pcVar1[2] == auVar60[2]);
          auVar149[3] = -(pcVar1[3] == auVar60[3]);
          auVar149[4] = -(pcVar1[4] == auVar60[4]);
          auVar149[5] = -(pcVar1[5] == auVar60[5]);
          auVar149[6] = -(pcVar1[6] == auVar60[6]);
          auVar149[7] = -(pcVar1[7] == auVar60[7]);
          auVar149[8] = -(pcVar1[8] == auVar60[0]);
          auVar149[9] = -(pcVar1[9] == auVar60[1]);
          auVar149[10] = -(pcVar1[10] == auVar60[2]);
          auVar149[0xb] = -(pcVar1[0xb] == auVar60[3]);
          auVar149[0xc] = -(pcVar1[0xc] == auVar60[4]);
          auVar149[0xd] = -(pcVar1[0xd] == auVar60[5]);
          auVar149[0xe] = -(pcVar1[0xe] == auVar60[6]);
          auVar149[0xf] = -(pcVar1[0xf] == auVar60[7]);
          uVar43 = (ushort)(SUB161(auVar149 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar149 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar149 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar149 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar149 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar149 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar149 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar149 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar149 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar149 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar149 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar149 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar149 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar149 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar149 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar149[0xf] >> 7) << 0xf;
          uVar45 = (uint)uVar43;
          while (uVar43 != 0) {
            uVar31 = 0;
            for (uVar8 = uVar45; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar31 = uVar31 + 1;
            }
            pauVar38 = pauVar27 + (uVar31 + uVar33 & uVar23) * -2;
            if (pauVar38[-2][0] == '\x0f') goto LAB_140a40918;
            uVar43 = (ushort)(uVar45 - 1) & (ushort)uVar45;
            uVar45 = CONCAT22((short)(uVar45 - 1 >> 0x10),uVar43);
          }
          auVar104[0] = -(*pcVar1 == cVar161);
          auVar104[1] = -(pcVar1[1] == cVar162);
          auVar104[2] = -(pcVar1[2] == cVar163);
          auVar104[3] = -(pcVar1[3] == cVar164);
          auVar104[4] = -(pcVar1[4] == cVar165);
          auVar104[5] = -(pcVar1[5] == cVar166);
          auVar104[6] = -(pcVar1[6] == cVar167);
          auVar104[7] = -(pcVar1[7] == cVar168);
          auVar104[8] = -(pcVar1[8] == cVar169);
          auVar104[9] = -(pcVar1[9] == cVar170);
          auVar104[10] = -(pcVar1[10] == cVar171);
          auVar104[0xb] = -(pcVar1[0xb] == cVar172);
          auVar104[0xc] = -(pcVar1[0xc] == cVar173);
          auVar104[0xd] = -(pcVar1[0xd] == cVar174);
          auVar104[0xe] = -(pcVar1[0xe] == cVar175);
          auVar104[0xf] = -(pcVar1[0xf] == cVar176);
          uVar43 = (ushort)(SUB161(auVar104 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar104 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar104 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar104 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar104 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar104 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar104 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar104 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar104 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar104 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar104 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar104 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar104 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar104 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar104 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar104[0xf] >> 7) << 0xf;
          if (uVar43 != 0) break;
          uVar33 = uVar33 + lVar26 + 0x10;
          lVar26 = lVar26 + 0x10;
        }
        if (*(longlong *)(piVar5 + 0x60) == 0) {
          pdb_142d98ac0(piVar5 + 0x5c,1,piVar5 + 100,CONCAT71((uint7)(byte)(uVar43 >> 8),1));
          pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
          uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        }
        uVar25 = uVar25 & uVar23;
        auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
        uVar43 = (ushort)(SUB161(auVar60 >> 7,0) & 1) | (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1
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
                 (ushort)(byte)(auVar60[0xf] >> 7) << 0xf;
        uVar45 = (uint)uVar43;
        if (uVar43 == 0) {
          lVar26 = 0x10;
          do {
            uVar25 = uVar25 + lVar26 & uVar23;
            auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
            lVar26 = lVar26 + 0x10;
            uVar45 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                   (ushort)(byte)(auVar60[0xf] >> 7) << 0xf);
          } while (uVar45 == 0);
        }
        uVar31 = 0;
        for (; (uVar45 & 1) == 0; uVar45 = uVar45 >> 1 | 0x80000000) {
          uVar31 = uVar31 + 1;
        }
        uVar33 = uVar31 + uVar25 & uVar23;
        bVar47 = (*pauVar27)[uVar33];
        if (-1 < (char)bVar47) {
          auVar60 = *pauVar27;
          uVar45 = 0;
          for (uVar31 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                      (ushort)(byte)(auVar60[0xf] >> 7) << 0xf); (uVar31 & 1) == 0;
              uVar31 = uVar31 >> 1 | 0x80000000) {
            uVar45 = uVar45 + 1;
          }
          uVar33 = (ulonglong)uVar45;
          bVar47 = (*pauVar27)[uVar33];
        }
        bVar18 = bVar18 >> 1;
        (*pauVar27)[uVar33] = bVar18;
        pauVar27[1][uVar33 - 0x10 & uVar23] = bVar18;
        pauVar38 = pauVar27 + uVar33 * -2;
        pauVar27[uVar33 * -2 + -2][0] = 0xf;
        *(undefined8 *)(pauVar38[-2] + 8) = 0;
        *(undefined8 *)pauVar38[-1] = 1;
        *(undefined8 *)(pauVar38[-1] + 8) = 0;
        auVar105._8_4_ = uVar3;
        auVar105._0_8_ = (ulonglong)bVar47 & 0xffffffffffffff01;
        auVar105._12_4_ = uVar12;
        *(ulonglong *)(piVar5 + 0x60) =
             *(longlong *)(piVar5 + 0x60) - ((ulonglong)bVar47 & 0xffffffffffffff01);
        *(longlong *)(piVar5 + 0x62) = *(longlong *)(piVar5 + 0x62) - auVar105._8_8_;
LAB_140a40918:
        lVar26 = *(longlong *)(pauVar38[-1] + 8);
        if (lVar26 == *(longlong *)(pauVar38[-2] + 8)) {
          pdb_142d91f60(pauVar38[-2] + 8);
        }
        *(undefined2 *)(*(longlong *)pauVar38[-1] + lVar26 * 2) = 0xe00;
        *(longlong *)(pauVar38[-1] + 8) = lVar26 + 1;
      }
      *(byte *)(lVar37 + 0x9d) = *(byte *)(lVar37 + 0x9d) | bStack_266;
      if ((*piVar5 == 1) && (*(longlong *)(piVar5 + 2) == lVar39)) {
        *puStack_e0 = uStack_d8;
        uStack_118 = CONCAT71(uStack_118._1_7_,0x11);
        uVar25 = pdb_1400aef40(piVar5 + 100);
        pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
        uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        bVar18 = (byte)(uVar25 >> 0x38);
        bVar47 = bVar18 >> 1;
        auVar60 = ZEXT216(CONCAT11(bVar47,bVar47));
        auVar60 = pshuflw(auVar60,auVar60,0);
        lVar26 = 0;
        uVar33 = uVar25;
        while( true ) {
          uVar33 = uVar33 & uVar23;
          pcVar1 = *pauVar27 + uVar33;
          auVar150[0] = -(*pcVar1 == auVar60[0]);
          auVar150[1] = -(pcVar1[1] == auVar60[1]);
          auVar150[2] = -(pcVar1[2] == auVar60[2]);
          auVar150[3] = -(pcVar1[3] == auVar60[3]);
          auVar150[4] = -(pcVar1[4] == auVar60[4]);
          auVar150[5] = -(pcVar1[5] == auVar60[5]);
          auVar150[6] = -(pcVar1[6] == auVar60[6]);
          auVar150[7] = -(pcVar1[7] == auVar60[7]);
          auVar150[8] = -(pcVar1[8] == auVar60[0]);
          auVar150[9] = -(pcVar1[9] == auVar60[1]);
          auVar150[10] = -(pcVar1[10] == auVar60[2]);
          auVar150[0xb] = -(pcVar1[0xb] == auVar60[3]);
          auVar150[0xc] = -(pcVar1[0xc] == auVar60[4]);
          auVar150[0xd] = -(pcVar1[0xd] == auVar60[5]);
          auVar150[0xe] = -(pcVar1[0xe] == auVar60[6]);
          auVar150[0xf] = -(pcVar1[0xf] == auVar60[7]);
          uVar43 = (ushort)(SUB161(auVar150 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar150 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar150 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar150 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar150 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar150 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar150 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar150 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar150 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar150 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar150 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar150 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar150 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar150 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar150 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar150[0xf] >> 7) << 0xf;
          uVar45 = (uint)uVar43;
          while (uVar43 != 0) {
            uVar31 = 0;
            for (uVar8 = uVar45; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar31 = uVar31 + 1;
            }
            pauVar38 = pauVar27 + (uVar31 + uVar33 & uVar23) * -2;
            if (pauVar38[-2][0] == '\x11') goto LAB_140a40ab8;
            uVar43 = (ushort)(uVar45 - 1) & (ushort)uVar45;
            uVar45 = CONCAT22((short)(uVar45 - 1 >> 0x10),uVar43);
          }
          auVar106[0] = -(*pcVar1 == cVar161);
          auVar106[1] = -(pcVar1[1] == cVar162);
          auVar106[2] = -(pcVar1[2] == cVar163);
          auVar106[3] = -(pcVar1[3] == cVar164);
          auVar106[4] = -(pcVar1[4] == cVar165);
          auVar106[5] = -(pcVar1[5] == cVar166);
          auVar106[6] = -(pcVar1[6] == cVar167);
          auVar106[7] = -(pcVar1[7] == cVar168);
          auVar106[8] = -(pcVar1[8] == cVar169);
          auVar106[9] = -(pcVar1[9] == cVar170);
          auVar106[10] = -(pcVar1[10] == cVar171);
          auVar106[0xb] = -(pcVar1[0xb] == cVar172);
          auVar106[0xc] = -(pcVar1[0xc] == cVar173);
          auVar106[0xd] = -(pcVar1[0xd] == cVar174);
          auVar106[0xe] = -(pcVar1[0xe] == cVar175);
          auVar106[0xf] = -(pcVar1[0xf] == cVar176);
          uVar43 = (ushort)(SUB161(auVar106 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar106 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar106 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar106 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar106 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar106 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar106 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar106 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar106 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar106 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar106 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar106 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar106 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar106 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar106 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar106[0xf] >> 7) << 0xf;
          if (uVar43 != 0) break;
          uVar33 = uVar33 + lVar26 + 0x10;
          lVar26 = lVar26 + 0x10;
        }
        if (*(longlong *)(piVar5 + 0x60) == 0) {
          pdb_142d98ac0(piVar5 + 0x5c,1,piVar5 + 100,CONCAT71((uint7)(byte)(uVar43 >> 8),1));
          pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
          uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        }
        uVar25 = uVar25 & uVar23;
        auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
        uVar43 = (ushort)(SUB161(auVar60 >> 7,0) & 1) | (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1
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
                 (ushort)(byte)(auVar60[0xf] >> 7) << 0xf;
        uVar45 = (uint)uVar43;
        if (uVar43 == 0) {
          lVar26 = 0x10;
          do {
            uVar25 = uVar25 + lVar26 & uVar23;
            auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
            lVar26 = lVar26 + 0x10;
            uVar45 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                   (ushort)(byte)(auVar60[0xf] >> 7) << 0xf);
          } while (uVar45 == 0);
        }
        uVar31 = 0;
        for (; (uVar45 & 1) == 0; uVar45 = uVar45 >> 1 | 0x80000000) {
          uVar31 = uVar31 + 1;
        }
        uVar33 = uVar31 + uVar25 & uVar23;
        bVar47 = (*pauVar27)[uVar33];
        if (-1 < (char)bVar47) {
          auVar60 = *pauVar27;
          uVar45 = 0;
          for (uVar31 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                      (ushort)(byte)(auVar60[0xf] >> 7) << 0xf); (uVar31 & 1) == 0;
              uVar31 = uVar31 >> 1 | 0x80000000) {
            uVar45 = uVar45 + 1;
          }
          uVar33 = (ulonglong)uVar45;
          bVar47 = (*pauVar27)[uVar33];
        }
        bVar18 = bVar18 >> 1;
        (*pauVar27)[uVar33] = bVar18;
        pauVar27[1][uVar33 - 0x10 & uVar23] = bVar18;
        pauVar38 = pauVar27 + uVar33 * -2;
        pauVar27[uVar33 * -2 + -2][0] = 0x11;
        *(undefined8 *)(pauVar38[-2] + 8) = 0;
        *(undefined8 *)pauVar38[-1] = 1;
        *(undefined8 *)(pauVar38[-1] + 8) = 0;
        auVar107._8_4_ = uVar3;
        auVar107._0_8_ = (ulonglong)bVar47 & 0xffffffffffffff01;
        auVar107._12_4_ = uVar12;
        *(ulonglong *)(piVar5 + 0x60) =
             *(longlong *)(piVar5 + 0x60) - ((ulonglong)bVar47 & 0xffffffffffffff01);
        *(longlong *)(piVar5 + 0x62) = *(longlong *)(piVar5 + 0x62) - auVar107._8_8_;
LAB_140a40ab8:
        lVar26 = *(longlong *)(pauVar38[-1] + 8);
        if (lVar26 == *(longlong *)(pauVar38[-2] + 8)) {
          pdb_142d91f60(pauVar38[-2] + 8);
        }
        *(undefined2 *)(*(longlong *)pauVar38[-1] + lVar26 * 2) = 0x200;
        *(longlong *)(pauVar38[-1] + 8) = lVar26 + 1;
      }
      *(byte *)(lVar37 + 0x9e) = *(byte *)(lVar37 + 0x9e) | bStack_265;
      if ((*piVar5 == 1) && (*(longlong *)(piVar5 + 2) == lVar39)) {
        *puStack_e0 = uStack_d8;
        uStack_118 = CONCAT71(uStack_118._1_7_,0x12);
        uVar25 = pdb_1400aef40(piVar5 + 100);
        pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
        uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        bVar18 = (byte)(uVar25 >> 0x38);
        bVar47 = bVar18 >> 1;
        auVar60 = ZEXT216(CONCAT11(bVar47,bVar47));
        auVar60 = pshuflw(auVar60,auVar60,0);
        lVar26 = 0;
        uVar33 = uVar25;
        while( true ) {
          uVar33 = uVar33 & uVar23;
          pcVar1 = *pauVar27 + uVar33;
          auVar151[0] = -(*pcVar1 == auVar60[0]);
          auVar151[1] = -(pcVar1[1] == auVar60[1]);
          auVar151[2] = -(pcVar1[2] == auVar60[2]);
          auVar151[3] = -(pcVar1[3] == auVar60[3]);
          auVar151[4] = -(pcVar1[4] == auVar60[4]);
          auVar151[5] = -(pcVar1[5] == auVar60[5]);
          auVar151[6] = -(pcVar1[6] == auVar60[6]);
          auVar151[7] = -(pcVar1[7] == auVar60[7]);
          auVar151[8] = -(pcVar1[8] == auVar60[0]);
          auVar151[9] = -(pcVar1[9] == auVar60[1]);
          auVar151[10] = -(pcVar1[10] == auVar60[2]);
          auVar151[0xb] = -(pcVar1[0xb] == auVar60[3]);
          auVar151[0xc] = -(pcVar1[0xc] == auVar60[4]);
          auVar151[0xd] = -(pcVar1[0xd] == auVar60[5]);
          auVar151[0xe] = -(pcVar1[0xe] == auVar60[6]);
          auVar151[0xf] = -(pcVar1[0xf] == auVar60[7]);
          uVar43 = (ushort)(SUB161(auVar151 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar151 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar151 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar151 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar151 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar151 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar151 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar151 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar151 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar151 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar151 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar151 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar151 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar151 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar151 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar151[0xf] >> 7) << 0xf;
          uVar45 = (uint)uVar43;
          while (uVar43 != 0) {
            uVar31 = 0;
            for (uVar8 = uVar45; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar31 = uVar31 + 1;
            }
            pauVar38 = pauVar27 + (uVar31 + uVar33 & uVar23) * -2;
            if (pauVar38[-2][0] == '\x12') goto LAB_140a40c58;
            uVar43 = (ushort)(uVar45 - 1) & (ushort)uVar45;
            uVar45 = CONCAT22((short)(uVar45 - 1 >> 0x10),uVar43);
          }
          auVar108[0] = -(*pcVar1 == cVar161);
          auVar108[1] = -(pcVar1[1] == cVar162);
          auVar108[2] = -(pcVar1[2] == cVar163);
          auVar108[3] = -(pcVar1[3] == cVar164);
          auVar108[4] = -(pcVar1[4] == cVar165);
          auVar108[5] = -(pcVar1[5] == cVar166);
          auVar108[6] = -(pcVar1[6] == cVar167);
          auVar108[7] = -(pcVar1[7] == cVar168);
          auVar108[8] = -(pcVar1[8] == cVar169);
          auVar108[9] = -(pcVar1[9] == cVar170);
          auVar108[10] = -(pcVar1[10] == cVar171);
          auVar108[0xb] = -(pcVar1[0xb] == cVar172);
          auVar108[0xc] = -(pcVar1[0xc] == cVar173);
          auVar108[0xd] = -(pcVar1[0xd] == cVar174);
          auVar108[0xe] = -(pcVar1[0xe] == cVar175);
          auVar108[0xf] = -(pcVar1[0xf] == cVar176);
          uVar43 = (ushort)(SUB161(auVar108 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar108 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar108 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar108 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar108 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar108 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar108 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar108 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar108 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar108 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar108 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar108 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar108 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar108 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar108 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar108[0xf] >> 7) << 0xf;
          if (uVar43 != 0) break;
          uVar33 = uVar33 + lVar26 + 0x10;
          lVar26 = lVar26 + 0x10;
        }
        if (*(longlong *)(piVar5 + 0x60) == 0) {
          pdb_142d98ac0(piVar5 + 0x5c,1,piVar5 + 100,CONCAT71((uint7)(byte)(uVar43 >> 8),1));
          pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
          uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        }
        uVar25 = uVar25 & uVar23;
        auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
        uVar43 = (ushort)(SUB161(auVar60 >> 7,0) & 1) | (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1
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
                 (ushort)(byte)(auVar60[0xf] >> 7) << 0xf;
        uVar45 = (uint)uVar43;
        if (uVar43 == 0) {
          lVar26 = 0x10;
          do {
            uVar25 = uVar25 + lVar26 & uVar23;
            auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
            lVar26 = lVar26 + 0x10;
            uVar45 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                   (ushort)(byte)(auVar60[0xf] >> 7) << 0xf);
          } while (uVar45 == 0);
        }
        uVar31 = 0;
        for (; (uVar45 & 1) == 0; uVar45 = uVar45 >> 1 | 0x80000000) {
          uVar31 = uVar31 + 1;
        }
        uVar33 = uVar31 + uVar25 & uVar23;
        bVar47 = (*pauVar27)[uVar33];
        if (-1 < (char)bVar47) {
          auVar60 = *pauVar27;
          uVar45 = 0;
          for (uVar31 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                      (ushort)(byte)(auVar60[0xf] >> 7) << 0xf); (uVar31 & 1) == 0;
              uVar31 = uVar31 >> 1 | 0x80000000) {
            uVar45 = uVar45 + 1;
          }
          uVar33 = (ulonglong)uVar45;
          bVar47 = (*pauVar27)[uVar33];
        }
        bVar18 = bVar18 >> 1;
        (*pauVar27)[uVar33] = bVar18;
        pauVar27[1][uVar33 - 0x10 & uVar23] = bVar18;
        pauVar38 = pauVar27 + uVar33 * -2;
        pauVar27[uVar33 * -2 + -2][0] = 0x12;
        *(undefined8 *)(pauVar38[-2] + 8) = 0;
        *(undefined8 *)pauVar38[-1] = 1;
        *(undefined8 *)(pauVar38[-1] + 8) = 0;
        auVar109._8_4_ = uVar3;
        auVar109._0_8_ = (ulonglong)bVar47 & 0xffffffffffffff01;
        auVar109._12_4_ = uVar12;
        *(ulonglong *)(piVar5 + 0x60) =
             *(longlong *)(piVar5 + 0x60) - ((ulonglong)bVar47 & 0xffffffffffffff01);
        *(longlong *)(piVar5 + 0x62) = *(longlong *)(piVar5 + 0x62) - auVar109._8_8_;
LAB_140a40c58:
        lVar26 = *(longlong *)(pauVar38[-1] + 8);
        if (lVar26 == *(longlong *)(pauVar38[-2] + 8)) {
          pdb_142d91f60(pauVar38[-2] + 8);
        }
        *(undefined2 *)(*(longlong *)pauVar38[-1] + lVar26 * 2) = 0x300;
        *(longlong *)(pauVar38[-1] + 8) = lVar26 + 1;
      }
      *(byte *)(lVar37 + 0x8c) = *(byte *)(lVar37 + 0x8c) | bStack_268;
      if ((*piVar5 == 1) && (*(longlong *)(piVar5 + 2) == lVar39)) {
        *puStack_e0 = uStack_d8;
        uStack_118 = uStack_118 & 0xffffffffffffff00;
        uVar25 = pdb_1400aef40(piVar5 + 100);
        pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
        uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        bVar18 = (byte)(uVar25 >> 0x38);
        bVar47 = bVar18 >> 1;
        auVar60 = ZEXT216(CONCAT11(bVar47,bVar47));
        auVar60 = pshuflw(auVar60,auVar60,0);
        lVar26 = 0;
        uVar33 = uVar25;
        while( true ) {
          uVar33 = uVar33 & uVar23;
          pcVar1 = *pauVar27 + uVar33;
          auVar152[0] = -(*pcVar1 == auVar60[0]);
          auVar152[1] = -(pcVar1[1] == auVar60[1]);
          auVar152[2] = -(pcVar1[2] == auVar60[2]);
          auVar152[3] = -(pcVar1[3] == auVar60[3]);
          auVar152[4] = -(pcVar1[4] == auVar60[4]);
          auVar152[5] = -(pcVar1[5] == auVar60[5]);
          auVar152[6] = -(pcVar1[6] == auVar60[6]);
          auVar152[7] = -(pcVar1[7] == auVar60[7]);
          auVar152[8] = -(pcVar1[8] == auVar60[0]);
          auVar152[9] = -(pcVar1[9] == auVar60[1]);
          auVar152[10] = -(pcVar1[10] == auVar60[2]);
          auVar152[0xb] = -(pcVar1[0xb] == auVar60[3]);
          auVar152[0xc] = -(pcVar1[0xc] == auVar60[4]);
          auVar152[0xd] = -(pcVar1[0xd] == auVar60[5]);
          auVar152[0xe] = -(pcVar1[0xe] == auVar60[6]);
          auVar152[0xf] = -(pcVar1[0xf] == auVar60[7]);
          uVar43 = (ushort)(SUB161(auVar152 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar152 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar152 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar152 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar152 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar152 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar152 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar152 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar152 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar152 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar152 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar152 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar152 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar152 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar152 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar152[0xf] >> 7) << 0xf;
          uVar45 = (uint)uVar43;
          while (uVar43 != 0) {
            uVar31 = 0;
            for (uVar8 = uVar45; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar31 = uVar31 + 1;
            }
            pauVar38 = pauVar27 + (uVar31 + uVar33 & uVar23) * -2;
            if (pauVar38[-2][0] == '\0') goto LAB_140a40df8;
            uVar43 = (ushort)(uVar45 - 1) & (ushort)uVar45;
            uVar45 = CONCAT22((short)(uVar45 - 1 >> 0x10),uVar43);
          }
          auVar110[0] = -(*pcVar1 == cVar161);
          auVar110[1] = -(pcVar1[1] == cVar162);
          auVar110[2] = -(pcVar1[2] == cVar163);
          auVar110[3] = -(pcVar1[3] == cVar164);
          auVar110[4] = -(pcVar1[4] == cVar165);
          auVar110[5] = -(pcVar1[5] == cVar166);
          auVar110[6] = -(pcVar1[6] == cVar167);
          auVar110[7] = -(pcVar1[7] == cVar168);
          auVar110[8] = -(pcVar1[8] == cVar169);
          auVar110[9] = -(pcVar1[9] == cVar170);
          auVar110[10] = -(pcVar1[10] == cVar171);
          auVar110[0xb] = -(pcVar1[0xb] == cVar172);
          auVar110[0xc] = -(pcVar1[0xc] == cVar173);
          auVar110[0xd] = -(pcVar1[0xd] == cVar174);
          auVar110[0xe] = -(pcVar1[0xe] == cVar175);
          auVar110[0xf] = -(pcVar1[0xf] == cVar176);
          uVar43 = (ushort)(SUB161(auVar110 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar110 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar110 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar110 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar110 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar110 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar110 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar110 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar110 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar110 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar110 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar110 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar110 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar110 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar110 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar110[0xf] >> 7) << 0xf;
          if (uVar43 != 0) break;
          uVar33 = uVar33 + lVar26 + 0x10;
          lVar26 = lVar26 + 0x10;
        }
        if (*(longlong *)(piVar5 + 0x60) == 0) {
          pdb_142d98ac0(piVar5 + 0x5c,1,piVar5 + 100,CONCAT71((uint7)(byte)(uVar43 >> 8),1));
          pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
          uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        }
        uVar25 = uVar25 & uVar23;
        auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
        uVar43 = (ushort)(SUB161(auVar60 >> 7,0) & 1) | (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1
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
                 (ushort)(byte)(auVar60[0xf] >> 7) << 0xf;
        uVar45 = (uint)uVar43;
        if (uVar43 == 0) {
          lVar26 = 0x10;
          do {
            uVar25 = uVar25 + lVar26 & uVar23;
            auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
            lVar26 = lVar26 + 0x10;
            uVar45 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                   (ushort)(byte)(auVar60[0xf] >> 7) << 0xf);
          } while (uVar45 == 0);
        }
        uVar31 = 0;
        for (; (uVar45 & 1) == 0; uVar45 = uVar45 >> 1 | 0x80000000) {
          uVar31 = uVar31 + 1;
        }
        uVar33 = uVar31 + uVar25 & uVar23;
        bVar47 = (*pauVar27)[uVar33];
        if (-1 < (char)bVar47) {
          auVar60 = *pauVar27;
          uVar45 = 0;
          for (uVar31 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                      (ushort)(byte)(auVar60[0xf] >> 7) << 0xf); (uVar31 & 1) == 0;
              uVar31 = uVar31 >> 1 | 0x80000000) {
            uVar45 = uVar45 + 1;
          }
          uVar33 = (ulonglong)uVar45;
          bVar47 = (*pauVar27)[uVar33];
        }
        bVar18 = bVar18 >> 1;
        (*pauVar27)[uVar33] = bVar18;
        pauVar27[1][uVar33 - 0x10 & uVar23] = bVar18;
        pauVar38 = pauVar27 + uVar33 * -2;
        pauVar27[uVar33 * -2 + -2][0] = 0;
        *(undefined8 *)(pauVar38[-2] + 8) = 0;
        *(undefined8 *)pauVar38[-1] = 1;
        *(undefined8 *)(pauVar38[-1] + 8) = 0;
        auVar111._8_4_ = uVar3;
        auVar111._0_8_ = (ulonglong)bVar47 & 0xffffffffffffff01;
        auVar111._12_4_ = uVar12;
        *(ulonglong *)(piVar5 + 0x60) =
             *(longlong *)(piVar5 + 0x60) - ((ulonglong)bVar47 & 0xffffffffffffff01);
        *(longlong *)(piVar5 + 0x62) = *(longlong *)(piVar5 + 0x62) - auVar111._8_8_;
LAB_140a40df8:
        lVar26 = *(longlong *)(pauVar38[-1] + 8);
        if (lVar26 == *(longlong *)(pauVar38[-2] + 8)) {
          pdb_142d91f60(pauVar38[-2] + 8);
        }
        *(undefined2 *)(*(longlong *)pauVar38[-1] + lVar26 * 2) = 0;
        *(longlong *)(pauVar38[-1] + 8) = lVar26 + 1;
      }
      *(byte *)(lVar37 + 0xa0) = *(byte *)(lVar37 + 0xa0) | uStack_258._4_1_;
      if ((*piVar5 == 1) && (*(longlong *)(piVar5 + 2) == lVar39)) {
        *puStack_e0 = uStack_d8;
        uStack_118 = CONCAT71(uStack_118._1_7_,0x14);
        uVar25 = pdb_1400aef40(piVar5 + 100);
        pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
        uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        bVar18 = (byte)(uVar25 >> 0x38);
        bVar47 = bVar18 >> 1;
        auVar60 = ZEXT216(CONCAT11(bVar47,bVar47));
        auVar60 = pshuflw(auVar60,auVar60,0);
        lVar26 = 0;
        uVar33 = uVar25;
        while( true ) {
          uVar33 = uVar33 & uVar23;
          pcVar1 = *pauVar27 + uVar33;
          auVar153[0] = -(*pcVar1 == auVar60[0]);
          auVar153[1] = -(pcVar1[1] == auVar60[1]);
          auVar153[2] = -(pcVar1[2] == auVar60[2]);
          auVar153[3] = -(pcVar1[3] == auVar60[3]);
          auVar153[4] = -(pcVar1[4] == auVar60[4]);
          auVar153[5] = -(pcVar1[5] == auVar60[5]);
          auVar153[6] = -(pcVar1[6] == auVar60[6]);
          auVar153[7] = -(pcVar1[7] == auVar60[7]);
          auVar153[8] = -(pcVar1[8] == auVar60[0]);
          auVar153[9] = -(pcVar1[9] == auVar60[1]);
          auVar153[10] = -(pcVar1[10] == auVar60[2]);
          auVar153[0xb] = -(pcVar1[0xb] == auVar60[3]);
          auVar153[0xc] = -(pcVar1[0xc] == auVar60[4]);
          auVar153[0xd] = -(pcVar1[0xd] == auVar60[5]);
          auVar153[0xe] = -(pcVar1[0xe] == auVar60[6]);
          auVar153[0xf] = -(pcVar1[0xf] == auVar60[7]);
          uVar43 = (ushort)(SUB161(auVar153 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar153 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar153 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar153 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar153 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar153 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar153 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar153 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar153 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar153 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar153 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar153 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar153 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar153 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar153 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar153[0xf] >> 7) << 0xf;
          uVar45 = (uint)uVar43;
          while (uVar43 != 0) {
            uVar31 = 0;
            for (uVar8 = uVar45; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar31 = uVar31 + 1;
            }
            pauVar38 = pauVar27 + (uVar31 + uVar33 & uVar23) * -2;
            if (pauVar38[-2][0] == '\x14') goto LAB_140a40f98;
            uVar43 = (ushort)(uVar45 - 1) & (ushort)uVar45;
            uVar45 = CONCAT22((short)(uVar45 - 1 >> 0x10),uVar43);
          }
          auVar112[0] = -(*pcVar1 == cVar161);
          auVar112[1] = -(pcVar1[1] == cVar162);
          auVar112[2] = -(pcVar1[2] == cVar163);
          auVar112[3] = -(pcVar1[3] == cVar164);
          auVar112[4] = -(pcVar1[4] == cVar165);
          auVar112[5] = -(pcVar1[5] == cVar166);
          auVar112[6] = -(pcVar1[6] == cVar167);
          auVar112[7] = -(pcVar1[7] == cVar168);
          auVar112[8] = -(pcVar1[8] == cVar169);
          auVar112[9] = -(pcVar1[9] == cVar170);
          auVar112[10] = -(pcVar1[10] == cVar171);
          auVar112[0xb] = -(pcVar1[0xb] == cVar172);
          auVar112[0xc] = -(pcVar1[0xc] == cVar173);
          auVar112[0xd] = -(pcVar1[0xd] == cVar174);
          auVar112[0xe] = -(pcVar1[0xe] == cVar175);
          auVar112[0xf] = -(pcVar1[0xf] == cVar176);
          uVar43 = (ushort)(SUB161(auVar112 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar112 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar112 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar112 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar112 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar112 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar112 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar112 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar112 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar112 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar112 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar112 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar112 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar112 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar112 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar112[0xf] >> 7) << 0xf;
          if (uVar43 != 0) break;
          uVar33 = uVar33 + lVar26 + 0x10;
          lVar26 = lVar26 + 0x10;
        }
        if (*(longlong *)(piVar5 + 0x60) == 0) {
          pdb_142d98ac0(piVar5 + 0x5c,1,piVar5 + 100,CONCAT71((uint7)(byte)(uVar43 >> 8),1));
          pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
          uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        }
        uVar25 = uVar25 & uVar23;
        auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
        uVar43 = (ushort)(SUB161(auVar60 >> 7,0) & 1) | (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1
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
                 (ushort)(byte)(auVar60[0xf] >> 7) << 0xf;
        uVar45 = (uint)uVar43;
        if (uVar43 == 0) {
          lVar26 = 0x10;
          do {
            uVar25 = uVar25 + lVar26 & uVar23;
            auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
            lVar26 = lVar26 + 0x10;
            uVar45 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                   (ushort)(byte)(auVar60[0xf] >> 7) << 0xf);
          } while (uVar45 == 0);
        }
        uVar31 = 0;
        for (; (uVar45 & 1) == 0; uVar45 = uVar45 >> 1 | 0x80000000) {
          uVar31 = uVar31 + 1;
        }
        uVar33 = uVar31 + uVar25 & uVar23;
        bVar47 = (*pauVar27)[uVar33];
        if (-1 < (char)bVar47) {
          auVar60 = *pauVar27;
          uVar45 = 0;
          for (uVar31 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                      (ushort)(byte)(auVar60[0xf] >> 7) << 0xf); (uVar31 & 1) == 0;
              uVar31 = uVar31 >> 1 | 0x80000000) {
            uVar45 = uVar45 + 1;
          }
          uVar33 = (ulonglong)uVar45;
          bVar47 = (*pauVar27)[uVar33];
        }
        bVar18 = bVar18 >> 1;
        (*pauVar27)[uVar33] = bVar18;
        pauVar27[1][uVar33 - 0x10 & uVar23] = bVar18;
        pauVar38 = pauVar27 + uVar33 * -2;
        pauVar27[uVar33 * -2 + -2][0] = 0x14;
        *(undefined8 *)(pauVar38[-2] + 8) = 0;
        *(undefined8 *)pauVar38[-1] = 1;
        *(undefined8 *)(pauVar38[-1] + 8) = 0;
        auVar113._8_4_ = uVar3;
        auVar113._0_8_ = (ulonglong)bVar47 & 0xffffffffffffff01;
        auVar113._12_4_ = uVar12;
        *(ulonglong *)(piVar5 + 0x60) =
             *(longlong *)(piVar5 + 0x60) - ((ulonglong)bVar47 & 0xffffffffffffff01);
        *(longlong *)(piVar5 + 0x62) = *(longlong *)(piVar5 + 0x62) - auVar113._8_8_;
LAB_140a40f98:
        lVar26 = *(longlong *)(pauVar38[-1] + 8);
        if (lVar26 == *(longlong *)(pauVar38[-2] + 8)) {
          pdb_142d91f60(pauVar38[-2] + 8);
        }
        *(undefined2 *)(*(longlong *)pauVar38[-1] + lVar26 * 2) = 0x1400;
        *(longlong *)(pauVar38[-1] + 8) = lVar26 + 1;
      }
      *(byte *)(lVar37 + 0xa1) = *(byte *)(lVar37 + 0xa1) | uStack_258._5_1_;
      if ((*piVar5 == 1) && (*(longlong *)(piVar5 + 2) == lVar39)) {
        *puStack_e0 = uStack_d8;
        uStack_118 = CONCAT71(uStack_118._1_7_,0x15);
        uVar25 = pdb_1400aef40(piVar5 + 100);
        pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
        uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        bVar18 = (byte)(uVar25 >> 0x38);
        bVar47 = bVar18 >> 1;
        auVar60 = ZEXT216(CONCAT11(bVar47,bVar47));
        auVar60 = pshuflw(auVar60,auVar60,0);
        lVar26 = 0;
        uVar33 = uVar25;
        while( true ) {
          uVar33 = uVar33 & uVar23;
          pcVar1 = *pauVar27 + uVar33;
          auVar154[0] = -(*pcVar1 == auVar60[0]);
          auVar154[1] = -(pcVar1[1] == auVar60[1]);
          auVar154[2] = -(pcVar1[2] == auVar60[2]);
          auVar154[3] = -(pcVar1[3] == auVar60[3]);
          auVar154[4] = -(pcVar1[4] == auVar60[4]);
          auVar154[5] = -(pcVar1[5] == auVar60[5]);
          auVar154[6] = -(pcVar1[6] == auVar60[6]);
          auVar154[7] = -(pcVar1[7] == auVar60[7]);
          auVar154[8] = -(pcVar1[8] == auVar60[0]);
          auVar154[9] = -(pcVar1[9] == auVar60[1]);
          auVar154[10] = -(pcVar1[10] == auVar60[2]);
          auVar154[0xb] = -(pcVar1[0xb] == auVar60[3]);
          auVar154[0xc] = -(pcVar1[0xc] == auVar60[4]);
          auVar154[0xd] = -(pcVar1[0xd] == auVar60[5]);
          auVar154[0xe] = -(pcVar1[0xe] == auVar60[6]);
          auVar154[0xf] = -(pcVar1[0xf] == auVar60[7]);
          uVar43 = (ushort)(SUB161(auVar154 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar154 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar154 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar154 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar154 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar154 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar154 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar154 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar154 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar154 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar154 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar154 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar154 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar154 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar154 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar154[0xf] >> 7) << 0xf;
          uVar45 = (uint)uVar43;
          while (uVar43 != 0) {
            uVar31 = 0;
            for (uVar8 = uVar45; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar31 = uVar31 + 1;
            }
            pauVar38 = pauVar27 + (uVar31 + uVar33 & uVar23) * -2;
            if (pauVar38[-2][0] == '\x15') goto LAB_140a41138;
            uVar43 = (ushort)(uVar45 - 1) & (ushort)uVar45;
            uVar45 = CONCAT22((short)(uVar45 - 1 >> 0x10),uVar43);
          }
          auVar114[0] = -(*pcVar1 == cVar161);
          auVar114[1] = -(pcVar1[1] == cVar162);
          auVar114[2] = -(pcVar1[2] == cVar163);
          auVar114[3] = -(pcVar1[3] == cVar164);
          auVar114[4] = -(pcVar1[4] == cVar165);
          auVar114[5] = -(pcVar1[5] == cVar166);
          auVar114[6] = -(pcVar1[6] == cVar167);
          auVar114[7] = -(pcVar1[7] == cVar168);
          auVar114[8] = -(pcVar1[8] == cVar169);
          auVar114[9] = -(pcVar1[9] == cVar170);
          auVar114[10] = -(pcVar1[10] == cVar171);
          auVar114[0xb] = -(pcVar1[0xb] == cVar172);
          auVar114[0xc] = -(pcVar1[0xc] == cVar173);
          auVar114[0xd] = -(pcVar1[0xd] == cVar174);
          auVar114[0xe] = -(pcVar1[0xe] == cVar175);
          auVar114[0xf] = -(pcVar1[0xf] == cVar176);
          uVar43 = (ushort)(SUB161(auVar114 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar114 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar114 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar114 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar114 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar114 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar114 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar114 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar114 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar114 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar114 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar114 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar114 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar114 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar114 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar114[0xf] >> 7) << 0xf;
          if (uVar43 != 0) break;
          uVar33 = uVar33 + lVar26 + 0x10;
          lVar26 = lVar26 + 0x10;
        }
        if (*(longlong *)(piVar5 + 0x60) == 0) {
          pdb_142d98ac0(piVar5 + 0x5c,1,piVar5 + 100,CONCAT71((uint7)(byte)(uVar43 >> 8),1));
          pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
          uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        }
        uVar25 = uVar25 & uVar23;
        auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
        uVar43 = (ushort)(SUB161(auVar60 >> 7,0) & 1) | (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1
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
                 (ushort)(byte)(auVar60[0xf] >> 7) << 0xf;
        uVar45 = (uint)uVar43;
        if (uVar43 == 0) {
          lVar26 = 0x10;
          do {
            uVar25 = uVar25 + lVar26 & uVar23;
            auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
            lVar26 = lVar26 + 0x10;
            uVar45 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                   (ushort)(byte)(auVar60[0xf] >> 7) << 0xf);
          } while (uVar45 == 0);
        }
        uVar31 = 0;
        for (; (uVar45 & 1) == 0; uVar45 = uVar45 >> 1 | 0x80000000) {
          uVar31 = uVar31 + 1;
        }
        uVar33 = uVar31 + uVar25 & uVar23;
        bVar47 = (*pauVar27)[uVar33];
        if (-1 < (char)bVar47) {
          auVar60 = *pauVar27;
          uVar45 = 0;
          for (uVar31 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                      (ushort)(byte)(auVar60[0xf] >> 7) << 0xf); (uVar31 & 1) == 0;
              uVar31 = uVar31 >> 1 | 0x80000000) {
            uVar45 = uVar45 + 1;
          }
          uVar33 = (ulonglong)uVar45;
          bVar47 = (*pauVar27)[uVar33];
        }
        bVar18 = bVar18 >> 1;
        (*pauVar27)[uVar33] = bVar18;
        pauVar27[1][uVar33 - 0x10 & uVar23] = bVar18;
        pauVar38 = pauVar27 + uVar33 * -2;
        pauVar27[uVar33 * -2 + -2][0] = 0x15;
        *(undefined8 *)(pauVar38[-2] + 8) = 0;
        *(undefined8 *)pauVar38[-1] = 1;
        *(undefined8 *)(pauVar38[-1] + 8) = 0;
        auVar115._8_4_ = uVar3;
        auVar115._0_8_ = (ulonglong)bVar47 & 0xffffffffffffff01;
        auVar115._12_4_ = uVar12;
        *(ulonglong *)(piVar5 + 0x60) =
             *(longlong *)(piVar5 + 0x60) - ((ulonglong)bVar47 & 0xffffffffffffff01);
        *(longlong *)(piVar5 + 0x62) = *(longlong *)(piVar5 + 0x62) - auVar115._8_8_;
LAB_140a41138:
        lVar26 = *(longlong *)(pauVar38[-1] + 8);
        if (lVar26 == *(longlong *)(pauVar38[-2] + 8)) {
          pdb_142d91f60(pauVar38[-2] + 8);
        }
        *(undefined2 *)(*(longlong *)pauVar38[-1] + lVar26 * 2) = 0x1500;
        *(longlong *)(pauVar38[-1] + 8) = lVar26 + 1;
      }
      *(byte *)(lVar37 + 0xa2) = *(byte *)(lVar37 + 0xa2) | uStack_258._7_1_;
      if ((*piVar5 == 1) && (*(longlong *)(piVar5 + 2) == lVar39)) {
        *puStack_e0 = uStack_d8;
        uStack_118 = CONCAT71(uStack_118._1_7_,0x16);
        uVar25 = pdb_1400aef40(piVar5 + 100);
        pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
        uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        bVar18 = (byte)(uVar25 >> 0x38);
        bVar47 = bVar18 >> 1;
        auVar60 = ZEXT216(CONCAT11(bVar47,bVar47));
        auVar60 = pshuflw(auVar60,auVar60,0);
        lVar26 = 0;
        uVar33 = uVar25;
        while( true ) {
          uVar33 = uVar33 & uVar23;
          pcVar1 = *pauVar27 + uVar33;
          auVar155[0] = -(*pcVar1 == auVar60[0]);
          auVar155[1] = -(pcVar1[1] == auVar60[1]);
          auVar155[2] = -(pcVar1[2] == auVar60[2]);
          auVar155[3] = -(pcVar1[3] == auVar60[3]);
          auVar155[4] = -(pcVar1[4] == auVar60[4]);
          auVar155[5] = -(pcVar1[5] == auVar60[5]);
          auVar155[6] = -(pcVar1[6] == auVar60[6]);
          auVar155[7] = -(pcVar1[7] == auVar60[7]);
          auVar155[8] = -(pcVar1[8] == auVar60[0]);
          auVar155[9] = -(pcVar1[9] == auVar60[1]);
          auVar155[10] = -(pcVar1[10] == auVar60[2]);
          auVar155[0xb] = -(pcVar1[0xb] == auVar60[3]);
          auVar155[0xc] = -(pcVar1[0xc] == auVar60[4]);
          auVar155[0xd] = -(pcVar1[0xd] == auVar60[5]);
          auVar155[0xe] = -(pcVar1[0xe] == auVar60[6]);
          auVar155[0xf] = -(pcVar1[0xf] == auVar60[7]);
          uVar43 = (ushort)(SUB161(auVar155 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar155 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar155 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar155 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar155 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar155 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar155 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar155 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar155 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar155 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar155 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar155 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar155 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar155 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar155 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar155[0xf] >> 7) << 0xf;
          uVar45 = (uint)uVar43;
          while (uVar43 != 0) {
            uVar31 = 0;
            for (uVar8 = uVar45; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar31 = uVar31 + 1;
            }
            pauVar38 = pauVar27 + (uVar31 + uVar33 & uVar23) * -2;
            if (pauVar38[-2][0] == '\x16') goto LAB_140a412d8;
            uVar43 = (ushort)(uVar45 - 1) & (ushort)uVar45;
            uVar45 = CONCAT22((short)(uVar45 - 1 >> 0x10),uVar43);
          }
          auVar116[0] = -(*pcVar1 == cVar161);
          auVar116[1] = -(pcVar1[1] == cVar162);
          auVar116[2] = -(pcVar1[2] == cVar163);
          auVar116[3] = -(pcVar1[3] == cVar164);
          auVar116[4] = -(pcVar1[4] == cVar165);
          auVar116[5] = -(pcVar1[5] == cVar166);
          auVar116[6] = -(pcVar1[6] == cVar167);
          auVar116[7] = -(pcVar1[7] == cVar168);
          auVar116[8] = -(pcVar1[8] == cVar169);
          auVar116[9] = -(pcVar1[9] == cVar170);
          auVar116[10] = -(pcVar1[10] == cVar171);
          auVar116[0xb] = -(pcVar1[0xb] == cVar172);
          auVar116[0xc] = -(pcVar1[0xc] == cVar173);
          auVar116[0xd] = -(pcVar1[0xd] == cVar174);
          auVar116[0xe] = -(pcVar1[0xe] == cVar175);
          auVar116[0xf] = -(pcVar1[0xf] == cVar176);
          uVar43 = (ushort)(SUB161(auVar116 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar116 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar116 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar116 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar116 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar116 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar116 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar116 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar116 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar116 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar116 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar116 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar116 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar116 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar116 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar116[0xf] >> 7) << 0xf;
          if (uVar43 != 0) break;
          uVar33 = uVar33 + lVar26 + 0x10;
          lVar26 = lVar26 + 0x10;
        }
        if (*(longlong *)(piVar5 + 0x60) == 0) {
          pdb_142d98ac0(piVar5 + 0x5c,1,piVar5 + 100,CONCAT71((uint7)(byte)(uVar43 >> 8),1));
          pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
          uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        }
        uVar25 = uVar25 & uVar23;
        auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
        uVar43 = (ushort)(SUB161(auVar60 >> 7,0) & 1) | (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1
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
                 (ushort)(byte)(auVar60[0xf] >> 7) << 0xf;
        uVar45 = (uint)uVar43;
        if (uVar43 == 0) {
          lVar26 = 0x10;
          do {
            uVar25 = uVar25 + lVar26 & uVar23;
            auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
            lVar26 = lVar26 + 0x10;
            uVar45 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                   (ushort)(byte)(auVar60[0xf] >> 7) << 0xf);
          } while (uVar45 == 0);
        }
        uVar31 = 0;
        for (; (uVar45 & 1) == 0; uVar45 = uVar45 >> 1 | 0x80000000) {
          uVar31 = uVar31 + 1;
        }
        uVar33 = uVar31 + uVar25 & uVar23;
        bVar47 = (*pauVar27)[uVar33];
        if (-1 < (char)bVar47) {
          auVar60 = *pauVar27;
          uVar45 = 0;
          for (uVar31 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                      (ushort)(byte)(auVar60[0xf] >> 7) << 0xf); (uVar31 & 1) == 0;
              uVar31 = uVar31 >> 1 | 0x80000000) {
            uVar45 = uVar45 + 1;
          }
          uVar33 = (ulonglong)uVar45;
          bVar47 = (*pauVar27)[uVar33];
        }
        bVar18 = bVar18 >> 1;
        (*pauVar27)[uVar33] = bVar18;
        pauVar27[1][uVar33 - 0x10 & uVar23] = bVar18;
        pauVar38 = pauVar27 + uVar33 * -2;
        pauVar27[uVar33 * -2 + -2][0] = 0x16;
        *(undefined8 *)(pauVar38[-2] + 8) = 0;
        *(undefined8 *)pauVar38[-1] = 1;
        *(undefined8 *)(pauVar38[-1] + 8) = 0;
        auVar117._8_4_ = uVar3;
        auVar117._0_8_ = (ulonglong)bVar47 & 0xffffffffffffff01;
        auVar117._12_4_ = uVar12;
        *(ulonglong *)(piVar5 + 0x60) =
             *(longlong *)(piVar5 + 0x60) - ((ulonglong)bVar47 & 0xffffffffffffff01);
        *(longlong *)(piVar5 + 0x62) = *(longlong *)(piVar5 + 0x62) - auVar117._8_8_;
LAB_140a412d8:
        lVar26 = *(longlong *)(pauVar38[-1] + 8);
        if (lVar26 == *(longlong *)(pauVar38[-2] + 8)) {
          pdb_142d91f60(pauVar38[-2] + 8);
        }
        *(undefined2 *)(*(longlong *)pauVar38[-1] + lVar26 * 2) = 0x1700;
        *(longlong *)(pauVar38[-1] + 8) = lVar26 + 1;
      }
      *(byte *)(lVar37 + 0xa3) = *(byte *)(lVar37 + 0xa3) | (byte)uStack_250;
      if ((*piVar5 == 1) && (*(longlong *)(piVar5 + 2) == lVar39)) {
        *puStack_e0 = uStack_d8;
        uStack_118 = CONCAT71(uStack_118._1_7_,0x17);
        uVar25 = pdb_1400aef40(piVar5 + 100);
        pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
        uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        bVar18 = (byte)(uVar25 >> 0x38);
        bVar47 = bVar18 >> 1;
        auVar60 = ZEXT216(CONCAT11(bVar47,bVar47));
        auVar60 = pshuflw(auVar60,auVar60,0);
        lVar26 = 0;
        uVar33 = uVar25;
        while( true ) {
          uVar33 = uVar33 & uVar23;
          pcVar1 = *pauVar27 + uVar33;
          auVar156[0] = -(*pcVar1 == auVar60[0]);
          auVar156[1] = -(pcVar1[1] == auVar60[1]);
          auVar156[2] = -(pcVar1[2] == auVar60[2]);
          auVar156[3] = -(pcVar1[3] == auVar60[3]);
          auVar156[4] = -(pcVar1[4] == auVar60[4]);
          auVar156[5] = -(pcVar1[5] == auVar60[5]);
          auVar156[6] = -(pcVar1[6] == auVar60[6]);
          auVar156[7] = -(pcVar1[7] == auVar60[7]);
          auVar156[8] = -(pcVar1[8] == auVar60[0]);
          auVar156[9] = -(pcVar1[9] == auVar60[1]);
          auVar156[10] = -(pcVar1[10] == auVar60[2]);
          auVar156[0xb] = -(pcVar1[0xb] == auVar60[3]);
          auVar156[0xc] = -(pcVar1[0xc] == auVar60[4]);
          auVar156[0xd] = -(pcVar1[0xd] == auVar60[5]);
          auVar156[0xe] = -(pcVar1[0xe] == auVar60[6]);
          auVar156[0xf] = -(pcVar1[0xf] == auVar60[7]);
          uVar43 = (ushort)(SUB161(auVar156 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar156 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar156 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar156 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar156 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar156 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar156 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar156 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar156 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar156 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar156 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar156 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar156 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar156 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar156 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar156[0xf] >> 7) << 0xf;
          uVar45 = (uint)uVar43;
          while (uVar43 != 0) {
            uVar31 = 0;
            for (uVar8 = uVar45; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar31 = uVar31 + 1;
            }
            pauVar38 = pauVar27 + (uVar31 + uVar33 & uVar23) * -2;
            if (pauVar38[-2][0] == '\x17') goto LAB_140a41478;
            uVar43 = (ushort)(uVar45 - 1) & (ushort)uVar45;
            uVar45 = CONCAT22((short)(uVar45 - 1 >> 0x10),uVar43);
          }
          auVar118[0] = -(*pcVar1 == cVar161);
          auVar118[1] = -(pcVar1[1] == cVar162);
          auVar118[2] = -(pcVar1[2] == cVar163);
          auVar118[3] = -(pcVar1[3] == cVar164);
          auVar118[4] = -(pcVar1[4] == cVar165);
          auVar118[5] = -(pcVar1[5] == cVar166);
          auVar118[6] = -(pcVar1[6] == cVar167);
          auVar118[7] = -(pcVar1[7] == cVar168);
          auVar118[8] = -(pcVar1[8] == cVar169);
          auVar118[9] = -(pcVar1[9] == cVar170);
          auVar118[10] = -(pcVar1[10] == cVar171);
          auVar118[0xb] = -(pcVar1[0xb] == cVar172);
          auVar118[0xc] = -(pcVar1[0xc] == cVar173);
          auVar118[0xd] = -(pcVar1[0xd] == cVar174);
          auVar118[0xe] = -(pcVar1[0xe] == cVar175);
          auVar118[0xf] = -(pcVar1[0xf] == cVar176);
          uVar43 = (ushort)(SUB161(auVar118 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar118 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar118 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar118 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar118 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar118 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar118 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar118 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar118 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar118 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar118 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar118 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar118 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar118 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar118 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar118[0xf] >> 7) << 0xf;
          if (uVar43 != 0) break;
          uVar33 = uVar33 + lVar26 + 0x10;
          lVar26 = lVar26 + 0x10;
        }
        if (*(longlong *)(piVar5 + 0x60) == 0) {
          pdb_142d98ac0(piVar5 + 0x5c,1,piVar5 + 100,CONCAT71((uint7)(byte)(uVar43 >> 8),1));
          pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
          uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        }
        uVar25 = uVar25 & uVar23;
        auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
        uVar43 = (ushort)(SUB161(auVar60 >> 7,0) & 1) | (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1
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
                 (ushort)(byte)(auVar60[0xf] >> 7) << 0xf;
        uVar45 = (uint)uVar43;
        if (uVar43 == 0) {
          lVar26 = 0x10;
          do {
            uVar25 = uVar25 + lVar26 & uVar23;
            auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
            lVar26 = lVar26 + 0x10;
            uVar45 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                   (ushort)(byte)(auVar60[0xf] >> 7) << 0xf);
          } while (uVar45 == 0);
        }
        uVar31 = 0;
        for (; (uVar45 & 1) == 0; uVar45 = uVar45 >> 1 | 0x80000000) {
          uVar31 = uVar31 + 1;
        }
        uVar33 = uVar31 + uVar25 & uVar23;
        bVar47 = (*pauVar27)[uVar33];
        if (-1 < (char)bVar47) {
          auVar60 = *pauVar27;
          uVar45 = 0;
          for (uVar31 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                      (ushort)(byte)(auVar60[0xf] >> 7) << 0xf); (uVar31 & 1) == 0;
              uVar31 = uVar31 >> 1 | 0x80000000) {
            uVar45 = uVar45 + 1;
          }
          uVar33 = (ulonglong)uVar45;
          bVar47 = (*pauVar27)[uVar33];
        }
        bVar18 = bVar18 >> 1;
        (*pauVar27)[uVar33] = bVar18;
        pauVar27[1][uVar33 - 0x10 & uVar23] = bVar18;
        pauVar38 = pauVar27 + uVar33 * -2;
        pauVar27[uVar33 * -2 + -2][0] = 0x17;
        *(undefined8 *)(pauVar38[-2] + 8) = 0;
        *(undefined8 *)pauVar38[-1] = 1;
        *(undefined8 *)(pauVar38[-1] + 8) = 0;
        auVar119._8_4_ = uVar3;
        auVar119._0_8_ = (ulonglong)bVar47 & 0xffffffffffffff01;
        auVar119._12_4_ = uVar12;
        *(ulonglong *)(piVar5 + 0x60) =
             *(longlong *)(piVar5 + 0x60) - ((ulonglong)bVar47 & 0xffffffffffffff01);
        *(longlong *)(piVar5 + 0x62) = *(longlong *)(piVar5 + 0x62) - auVar119._8_8_;
LAB_140a41478:
        lVar26 = *(longlong *)(pauVar38[-1] + 8);
        if (lVar26 == *(longlong *)(pauVar38[-2] + 8)) {
          pdb_142d91f60(pauVar38[-2] + 8);
        }
        *(undefined2 *)(*(longlong *)pauVar38[-1] + lVar26 * 2) = 0x1800;
        *(longlong *)(pauVar38[-1] + 8) = lVar26 + 1;
      }
      *(byte *)(lVar37 + 0xa4) = *(byte *)(lVar37 + 0xa4) | uStack_250._1_1_;
      if ((*piVar5 == 1) && (*(longlong *)(piVar5 + 2) == lVar39)) {
        *puStack_e0 = uStack_d8;
        uStack_118 = CONCAT71(uStack_118._1_7_,0x18);
        uVar25 = pdb_1400aef40(piVar5 + 100);
        pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
        uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        bVar18 = (byte)(uVar25 >> 0x38);
        bVar47 = bVar18 >> 1;
        auVar60 = ZEXT216(CONCAT11(bVar47,bVar47));
        auVar60 = pshuflw(auVar60,auVar60,0);
        lVar26 = 0;
        uVar33 = uVar25;
        while( true ) {
          uVar33 = uVar33 & uVar23;
          pcVar1 = *pauVar27 + uVar33;
          auVar157[0] = -(*pcVar1 == auVar60[0]);
          auVar157[1] = -(pcVar1[1] == auVar60[1]);
          auVar157[2] = -(pcVar1[2] == auVar60[2]);
          auVar157[3] = -(pcVar1[3] == auVar60[3]);
          auVar157[4] = -(pcVar1[4] == auVar60[4]);
          auVar157[5] = -(pcVar1[5] == auVar60[5]);
          auVar157[6] = -(pcVar1[6] == auVar60[6]);
          auVar157[7] = -(pcVar1[7] == auVar60[7]);
          auVar157[8] = -(pcVar1[8] == auVar60[0]);
          auVar157[9] = -(pcVar1[9] == auVar60[1]);
          auVar157[10] = -(pcVar1[10] == auVar60[2]);
          auVar157[0xb] = -(pcVar1[0xb] == auVar60[3]);
          auVar157[0xc] = -(pcVar1[0xc] == auVar60[4]);
          auVar157[0xd] = -(pcVar1[0xd] == auVar60[5]);
          auVar157[0xe] = -(pcVar1[0xe] == auVar60[6]);
          auVar157[0xf] = -(pcVar1[0xf] == auVar60[7]);
          uVar43 = (ushort)(SUB161(auVar157 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar157 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar157 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar157 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar157 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar157 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar157 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar157 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar157 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar157 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar157 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar157 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar157 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar157 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar157 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar157[0xf] >> 7) << 0xf;
          uVar45 = (uint)uVar43;
          while (uVar43 != 0) {
            uVar31 = 0;
            for (uVar8 = uVar45; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar31 = uVar31 + 1;
            }
            pauVar38 = pauVar27 + (uVar31 + uVar33 & uVar23) * -2;
            if (pauVar38[-2][0] == '\x18') goto LAB_140a41618;
            uVar43 = (ushort)(uVar45 - 1) & (ushort)uVar45;
            uVar45 = CONCAT22((short)(uVar45 - 1 >> 0x10),uVar43);
          }
          auVar120[0] = -(*pcVar1 == cVar161);
          auVar120[1] = -(pcVar1[1] == cVar162);
          auVar120[2] = -(pcVar1[2] == cVar163);
          auVar120[3] = -(pcVar1[3] == cVar164);
          auVar120[4] = -(pcVar1[4] == cVar165);
          auVar120[5] = -(pcVar1[5] == cVar166);
          auVar120[6] = -(pcVar1[6] == cVar167);
          auVar120[7] = -(pcVar1[7] == cVar168);
          auVar120[8] = -(pcVar1[8] == cVar169);
          auVar120[9] = -(pcVar1[9] == cVar170);
          auVar120[10] = -(pcVar1[10] == cVar171);
          auVar120[0xb] = -(pcVar1[0xb] == cVar172);
          auVar120[0xc] = -(pcVar1[0xc] == cVar173);
          auVar120[0xd] = -(pcVar1[0xd] == cVar174);
          auVar120[0xe] = -(pcVar1[0xe] == cVar175);
          auVar120[0xf] = -(pcVar1[0xf] == cVar176);
          uVar43 = (ushort)(SUB161(auVar120 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar120 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar120 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar120 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar120 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar120 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar120 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar120 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar120 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar120 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar120 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar120 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar120 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar120 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar120 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar120[0xf] >> 7) << 0xf;
          if (uVar43 != 0) break;
          uVar33 = uVar33 + lVar26 + 0x10;
          lVar26 = lVar26 + 0x10;
        }
        if (*(longlong *)(piVar5 + 0x60) == 0) {
          pdb_142d98ac0(piVar5 + 0x5c,1,piVar5 + 100,CONCAT71((uint7)(byte)(uVar43 >> 8),1));
          pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
          uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        }
        uVar25 = uVar25 & uVar23;
        auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
        uVar43 = (ushort)(SUB161(auVar60 >> 7,0) & 1) | (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1
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
                 (ushort)(byte)(auVar60[0xf] >> 7) << 0xf;
        uVar45 = (uint)uVar43;
        if (uVar43 == 0) {
          lVar26 = 0x10;
          do {
            uVar25 = uVar25 + lVar26 & uVar23;
            auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
            lVar26 = lVar26 + 0x10;
            uVar45 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                   (ushort)(byte)(auVar60[0xf] >> 7) << 0xf);
          } while (uVar45 == 0);
        }
        uVar31 = 0;
        for (; (uVar45 & 1) == 0; uVar45 = uVar45 >> 1 | 0x80000000) {
          uVar31 = uVar31 + 1;
        }
        uVar33 = uVar31 + uVar25 & uVar23;
        bVar47 = (*pauVar27)[uVar33];
        if (-1 < (char)bVar47) {
          auVar60 = *pauVar27;
          uVar45 = 0;
          for (uVar31 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                      (ushort)(byte)(auVar60[0xf] >> 7) << 0xf); (uVar31 & 1) == 0;
              uVar31 = uVar31 >> 1 | 0x80000000) {
            uVar45 = uVar45 + 1;
          }
          uVar33 = (ulonglong)uVar45;
          bVar47 = (*pauVar27)[uVar33];
        }
        bVar18 = bVar18 >> 1;
        (*pauVar27)[uVar33] = bVar18;
        pauVar27[1][uVar33 - 0x10 & uVar23] = bVar18;
        pauVar38 = pauVar27 + uVar33 * -2;
        pauVar27[uVar33 * -2 + -2][0] = 0x18;
        *(undefined8 *)(pauVar38[-2] + 8) = 0;
        *(undefined8 *)pauVar38[-1] = 1;
        *(undefined8 *)(pauVar38[-1] + 8) = 0;
        auVar121._8_4_ = uVar3;
        auVar121._0_8_ = (ulonglong)bVar47 & 0xffffffffffffff01;
        auVar121._12_4_ = uVar12;
        *(ulonglong *)(piVar5 + 0x60) =
             *(longlong *)(piVar5 + 0x60) - ((ulonglong)bVar47 & 0xffffffffffffff01);
        *(longlong *)(piVar5 + 0x62) = *(longlong *)(piVar5 + 0x62) - auVar121._8_8_;
LAB_140a41618:
        lVar26 = *(longlong *)(pauVar38[-1] + 8);
        if (lVar26 == *(longlong *)(pauVar38[-2] + 8)) {
          pdb_142d91f60(pauVar38[-2] + 8);
        }
        *(undefined2 *)(*(longlong *)pauVar38[-1] + lVar26 * 2) = 0x1900;
        *(longlong *)(pauVar38[-1] + 8) = lVar26 + 1;
      }
      *(byte *)(lVar37 + 0xa5) = *(byte *)(lVar37 + 0xa5) | uStack_258._6_1_;
      if ((*piVar5 == 1) && (*(longlong *)(piVar5 + 2) == lVar39)) {
        *puStack_e0 = uStack_d8;
        uStack_118 = CONCAT71(uStack_118._1_7_,0x19);
        uVar25 = pdb_1400aef40(piVar5 + 100);
        pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
        uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        bVar18 = (byte)(uVar25 >> 0x38);
        bVar47 = bVar18 >> 1;
        auVar60 = ZEXT216(CONCAT11(bVar47,bVar47));
        auVar60 = pshuflw(auVar60,auVar60,0);
        lVar26 = 0;
        uVar33 = uVar25;
        while( true ) {
          uVar33 = uVar33 & uVar23;
          pcVar1 = *pauVar27 + uVar33;
          auVar158[0] = -(*pcVar1 == auVar60[0]);
          auVar158[1] = -(pcVar1[1] == auVar60[1]);
          auVar158[2] = -(pcVar1[2] == auVar60[2]);
          auVar158[3] = -(pcVar1[3] == auVar60[3]);
          auVar158[4] = -(pcVar1[4] == auVar60[4]);
          auVar158[5] = -(pcVar1[5] == auVar60[5]);
          auVar158[6] = -(pcVar1[6] == auVar60[6]);
          auVar158[7] = -(pcVar1[7] == auVar60[7]);
          auVar158[8] = -(pcVar1[8] == auVar60[0]);
          auVar158[9] = -(pcVar1[9] == auVar60[1]);
          auVar158[10] = -(pcVar1[10] == auVar60[2]);
          auVar158[0xb] = -(pcVar1[0xb] == auVar60[3]);
          auVar158[0xc] = -(pcVar1[0xc] == auVar60[4]);
          auVar158[0xd] = -(pcVar1[0xd] == auVar60[5]);
          auVar158[0xe] = -(pcVar1[0xe] == auVar60[6]);
          auVar158[0xf] = -(pcVar1[0xf] == auVar60[7]);
          uVar43 = (ushort)(SUB161(auVar158 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar158 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar158 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar158 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar158 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar158 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar158 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar158 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar158 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar158 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar158 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar158 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar158 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar158 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar158 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar158[0xf] >> 7) << 0xf;
          uVar45 = (uint)uVar43;
          while (uVar43 != 0) {
            uVar31 = 0;
            for (uVar8 = uVar45; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar31 = uVar31 + 1;
            }
            pauVar38 = pauVar27 + (uVar31 + uVar33 & uVar23) * -2;
            if (pauVar38[-2][0] == '\x19') goto LAB_140a417b8;
            uVar43 = (ushort)(uVar45 - 1) & (ushort)uVar45;
            uVar45 = CONCAT22((short)(uVar45 - 1 >> 0x10),uVar43);
          }
          auVar122[0] = -(*pcVar1 == cVar161);
          auVar122[1] = -(pcVar1[1] == cVar162);
          auVar122[2] = -(pcVar1[2] == cVar163);
          auVar122[3] = -(pcVar1[3] == cVar164);
          auVar122[4] = -(pcVar1[4] == cVar165);
          auVar122[5] = -(pcVar1[5] == cVar166);
          auVar122[6] = -(pcVar1[6] == cVar167);
          auVar122[7] = -(pcVar1[7] == cVar168);
          auVar122[8] = -(pcVar1[8] == cVar169);
          auVar122[9] = -(pcVar1[9] == cVar170);
          auVar122[10] = -(pcVar1[10] == cVar171);
          auVar122[0xb] = -(pcVar1[0xb] == cVar172);
          auVar122[0xc] = -(pcVar1[0xc] == cVar173);
          auVar122[0xd] = -(pcVar1[0xd] == cVar174);
          auVar122[0xe] = -(pcVar1[0xe] == cVar175);
          auVar122[0xf] = -(pcVar1[0xf] == cVar176);
          uVar43 = (ushort)(SUB161(auVar122 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar122 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar122 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar122 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar122 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar122 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar122 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar122 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar122 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar122 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar122 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar122 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar122 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar122 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar122 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar122[0xf] >> 7) << 0xf;
          if (uVar43 != 0) break;
          uVar33 = uVar33 + lVar26 + 0x10;
          lVar26 = lVar26 + 0x10;
        }
        if (*(longlong *)(piVar5 + 0x60) == 0) {
          pdb_142d98ac0(piVar5 + 0x5c,1,piVar5 + 100,CONCAT71((uint7)(byte)(uVar43 >> 8),1));
          pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
          uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        }
        uVar25 = uVar25 & uVar23;
        auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
        uVar43 = (ushort)(SUB161(auVar60 >> 7,0) & 1) | (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1
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
                 (ushort)(byte)(auVar60[0xf] >> 7) << 0xf;
        uVar45 = (uint)uVar43;
        if (uVar43 == 0) {
          lVar26 = 0x10;
          do {
            uVar25 = uVar25 + lVar26 & uVar23;
            auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
            lVar26 = lVar26 + 0x10;
            uVar45 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                   (ushort)(byte)(auVar60[0xf] >> 7) << 0xf);
          } while (uVar45 == 0);
        }
        uVar31 = 0;
        for (; (uVar45 & 1) == 0; uVar45 = uVar45 >> 1 | 0x80000000) {
          uVar31 = uVar31 + 1;
        }
        uVar33 = uVar31 + uVar25 & uVar23;
        bVar47 = (*pauVar27)[uVar33];
        if (-1 < (char)bVar47) {
          auVar60 = *pauVar27;
          uVar45 = 0;
          for (uVar31 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                      (ushort)(byte)(auVar60[0xf] >> 7) << 0xf); (uVar31 & 1) == 0;
              uVar31 = uVar31 >> 1 | 0x80000000) {
            uVar45 = uVar45 + 1;
          }
          uVar33 = (ulonglong)uVar45;
          bVar47 = (*pauVar27)[uVar33];
        }
        bVar18 = bVar18 >> 1;
        (*pauVar27)[uVar33] = bVar18;
        pauVar27[1][uVar33 - 0x10 & uVar23] = bVar18;
        pauVar38 = pauVar27 + uVar33 * -2;
        pauVar27[uVar33 * -2 + -2][0] = 0x19;
        *(undefined8 *)(pauVar38[-2] + 8) = 0;
        *(undefined8 *)pauVar38[-1] = 1;
        *(undefined8 *)(pauVar38[-1] + 8) = 0;
        auVar123._8_4_ = uVar3;
        auVar123._0_8_ = (ulonglong)bVar47 & 0xffffffffffffff01;
        auVar123._12_4_ = uVar12;
        *(ulonglong *)(piVar5 + 0x60) =
             *(longlong *)(piVar5 + 0x60) - ((ulonglong)bVar47 & 0xffffffffffffff01);
        *(longlong *)(piVar5 + 0x62) = *(longlong *)(piVar5 + 0x62) - auVar123._8_8_;
LAB_140a417b8:
        lVar26 = *(longlong *)(pauVar38[-1] + 8);
        if (lVar26 == *(longlong *)(pauVar38[-2] + 8)) {
          pdb_142d91f60(pauVar38[-2] + 8);
        }
        *(undefined2 *)(*(longlong *)pauVar38[-1] + lVar26 * 2) = 0x1600;
        *(longlong *)(pauVar38[-1] + 8) = lVar26 + 1;
      }
      *(byte *)(lVar37 + 0xa9) = *(byte *)(lVar37 + 0xa9) | uStack_258._3_1_;
      if ((*piVar5 == 1) && (*(longlong *)(piVar5 + 2) == lVar39)) {
        *puStack_e0 = uStack_d8;
        uStack_118 = CONCAT71(uStack_118._1_7_,0x1d);
        uVar25 = pdb_1400aef40(piVar5 + 100);
        pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
        uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        bVar18 = (byte)(uVar25 >> 0x38);
        bVar47 = bVar18 >> 1;
        auVar60 = ZEXT216(CONCAT11(bVar47,bVar47));
        auVar60 = pshuflw(auVar60,auVar60,0);
        lVar26 = 0;
        uVar33 = uVar25;
        while( true ) {
          uVar33 = uVar33 & uVar23;
          pcVar1 = *pauVar27 + uVar33;
          auVar159[0] = -(*pcVar1 == auVar60[0]);
          auVar159[1] = -(pcVar1[1] == auVar60[1]);
          auVar159[2] = -(pcVar1[2] == auVar60[2]);
          auVar159[3] = -(pcVar1[3] == auVar60[3]);
          auVar159[4] = -(pcVar1[4] == auVar60[4]);
          auVar159[5] = -(pcVar1[5] == auVar60[5]);
          auVar159[6] = -(pcVar1[6] == auVar60[6]);
          auVar159[7] = -(pcVar1[7] == auVar60[7]);
          auVar159[8] = -(pcVar1[8] == auVar60[0]);
          auVar159[9] = -(pcVar1[9] == auVar60[1]);
          auVar159[10] = -(pcVar1[10] == auVar60[2]);
          auVar159[0xb] = -(pcVar1[0xb] == auVar60[3]);
          auVar159[0xc] = -(pcVar1[0xc] == auVar60[4]);
          auVar159[0xd] = -(pcVar1[0xd] == auVar60[5]);
          auVar159[0xe] = -(pcVar1[0xe] == auVar60[6]);
          auVar159[0xf] = -(pcVar1[0xf] == auVar60[7]);
          uVar43 = (ushort)(SUB161(auVar159 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar159 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar159 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar159 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar159 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar159 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar159 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar159 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar159 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar159 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar159 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar159 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar159 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar159 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar159 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar159[0xf] >> 7) << 0xf;
          uVar45 = (uint)uVar43;
          while (uVar43 != 0) {
            uVar31 = 0;
            for (uVar8 = uVar45; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar31 = uVar31 + 1;
            }
            pauVar38 = pauVar27 + (uVar31 + uVar33 & uVar23) * -2;
            if (pauVar38[-2][0] == '\x1d') goto LAB_140a41958;
            uVar43 = (ushort)(uVar45 - 1) & (ushort)uVar45;
            uVar45 = CONCAT22((short)(uVar45 - 1 >> 0x10),uVar43);
          }
          auVar124[0] = -(*pcVar1 == cVar161);
          auVar124[1] = -(pcVar1[1] == cVar162);
          auVar124[2] = -(pcVar1[2] == cVar163);
          auVar124[3] = -(pcVar1[3] == cVar164);
          auVar124[4] = -(pcVar1[4] == cVar165);
          auVar124[5] = -(pcVar1[5] == cVar166);
          auVar124[6] = -(pcVar1[6] == cVar167);
          auVar124[7] = -(pcVar1[7] == cVar168);
          auVar124[8] = -(pcVar1[8] == cVar169);
          auVar124[9] = -(pcVar1[9] == cVar170);
          auVar124[10] = -(pcVar1[10] == cVar171);
          auVar124[0xb] = -(pcVar1[0xb] == cVar172);
          auVar124[0xc] = -(pcVar1[0xc] == cVar173);
          auVar124[0xd] = -(pcVar1[0xd] == cVar174);
          auVar124[0xe] = -(pcVar1[0xe] == cVar175);
          auVar124[0xf] = -(pcVar1[0xf] == cVar176);
          uVar43 = (ushort)(SUB161(auVar124 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar124 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar124 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar124 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar124 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar124 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar124 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar124 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar124 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar124 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar124 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar124 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar124 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar124 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar124 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar124[0xf] >> 7) << 0xf;
          if (uVar43 != 0) break;
          uVar33 = uVar33 + lVar26 + 0x10;
          lVar26 = lVar26 + 0x10;
        }
        if (*(longlong *)(piVar5 + 0x60) == 0) {
          pdb_142d98ac0(piVar5 + 0x5c,1,piVar5 + 100,CONCAT71((uint7)(byte)(uVar43 >> 8),1));
          pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
          uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        }
        uVar25 = uVar25 & uVar23;
        auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
        uVar43 = (ushort)(SUB161(auVar60 >> 7,0) & 1) | (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1
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
                 (ushort)(byte)(auVar60[0xf] >> 7) << 0xf;
        uVar45 = (uint)uVar43;
        if (uVar43 == 0) {
          lVar26 = 0x10;
          do {
            uVar25 = uVar25 + lVar26 & uVar23;
            auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
            lVar26 = lVar26 + 0x10;
            uVar45 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                   (ushort)(byte)(auVar60[0xf] >> 7) << 0xf);
          } while (uVar45 == 0);
        }
        uVar31 = 0;
        for (; (uVar45 & 1) == 0; uVar45 = uVar45 >> 1 | 0x80000000) {
          uVar31 = uVar31 + 1;
        }
        uVar33 = uVar31 + uVar25 & uVar23;
        bVar47 = (*pauVar27)[uVar33];
        if (-1 < (char)bVar47) {
          auVar60 = *pauVar27;
          uVar45 = 0;
          for (uVar31 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                      (ushort)(byte)(auVar60[0xf] >> 7) << 0xf); (uVar31 & 1) == 0;
              uVar31 = uVar31 >> 1 | 0x80000000) {
            uVar45 = uVar45 + 1;
          }
          uVar33 = (ulonglong)uVar45;
          bVar47 = (*pauVar27)[uVar33];
        }
        bVar18 = bVar18 >> 1;
        (*pauVar27)[uVar33] = bVar18;
        pauVar27[1][uVar33 - 0x10 & uVar23] = bVar18;
        pauVar38 = pauVar27 + uVar33 * -2;
        pauVar27[uVar33 * -2 + -2][0] = 0x1d;
        *(undefined8 *)(pauVar38[-2] + 8) = 0;
        *(undefined8 *)pauVar38[-1] = 1;
        *(undefined8 *)(pauVar38[-1] + 8) = 0;
        auVar125._8_4_ = uVar3;
        auVar125._0_8_ = (ulonglong)bVar47 & 0xffffffffffffff01;
        auVar125._12_4_ = uVar12;
        *(ulonglong *)(piVar5 + 0x60) =
             *(longlong *)(piVar5 + 0x60) - ((ulonglong)bVar47 & 0xffffffffffffff01);
        *(longlong *)(piVar5 + 0x62) = *(longlong *)(piVar5 + 0x62) - auVar125._8_8_;
LAB_140a41958:
        lVar26 = *(longlong *)(pauVar38[-1] + 8);
        if (lVar26 == *(longlong *)(pauVar38[-2] + 8)) {
          pdb_142d91f60(pauVar38[-2] + 8);
        }
        *(undefined2 *)(*(longlong *)pauVar38[-1] + lVar26 * 2) = 0x1300;
        *(longlong *)(pauVar38[-1] + 8) = lVar26 + 1;
      }
      *(byte *)(lVar37 + 0xb5) = *(byte *)(lVar37 + 0xb5) | (byte)uStack_258;
      if ((*piVar5 == 1) && (*(longlong *)(piVar5 + 2) == lVar39)) {
        *puStack_e0 = uStack_d8;
        uStack_118 = CONCAT71(uStack_118._1_7_,0x29);
        uVar25 = pdb_1400aef40(piVar5 + 100);
        pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
        uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        bVar18 = (byte)(uVar25 >> 0x38);
        bVar47 = bVar18 >> 1;
        auVar60 = ZEXT216(CONCAT11(bVar47,bVar47));
        auVar60 = pshuflw(auVar60,auVar60,0);
        lVar39 = 0;
        uVar33 = uVar25;
        while( true ) {
          uVar33 = uVar33 & uVar23;
          pcVar1 = *pauVar27 + uVar33;
          auVar160[0] = -(*pcVar1 == auVar60[0]);
          auVar160[1] = -(pcVar1[1] == auVar60[1]);
          auVar160[2] = -(pcVar1[2] == auVar60[2]);
          auVar160[3] = -(pcVar1[3] == auVar60[3]);
          auVar160[4] = -(pcVar1[4] == auVar60[4]);
          auVar160[5] = -(pcVar1[5] == auVar60[5]);
          auVar160[6] = -(pcVar1[6] == auVar60[6]);
          auVar160[7] = -(pcVar1[7] == auVar60[7]);
          auVar160[8] = -(pcVar1[8] == auVar60[0]);
          auVar160[9] = -(pcVar1[9] == auVar60[1]);
          auVar160[10] = -(pcVar1[10] == auVar60[2]);
          auVar160[0xb] = -(pcVar1[0xb] == auVar60[3]);
          auVar160[0xc] = -(pcVar1[0xc] == auVar60[4]);
          auVar160[0xd] = -(pcVar1[0xd] == auVar60[5]);
          auVar160[0xe] = -(pcVar1[0xe] == auVar60[6]);
          auVar160[0xf] = -(pcVar1[0xf] == auVar60[7]);
          uVar43 = (ushort)(SUB161(auVar160 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar160 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar160 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar160 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar160 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar160 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar160 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar160 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar160 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar160 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar160 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar160 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar160 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar160 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar160 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar160[0xf] >> 7) << 0xf;
          uVar45 = (uint)uVar43;
          while (uVar43 != 0) {
            uVar31 = 0;
            for (uVar8 = uVar45; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar31 = uVar31 + 1;
            }
            pauVar38 = pauVar27 + (uVar31 + uVar33 & uVar23) * -2;
            if (pauVar38[-2][0] == ')') goto LAB_140a41af8;
            uVar43 = (ushort)(uVar45 - 1) & (ushort)uVar45;
            uVar45 = CONCAT22((short)(uVar45 - 1 >> 0x10),uVar43);
          }
          auVar126[0] = -(*pcVar1 == cVar161);
          auVar126[1] = -(pcVar1[1] == cVar162);
          auVar126[2] = -(pcVar1[2] == cVar163);
          auVar126[3] = -(pcVar1[3] == cVar164);
          auVar126[4] = -(pcVar1[4] == cVar165);
          auVar126[5] = -(pcVar1[5] == cVar166);
          auVar126[6] = -(pcVar1[6] == cVar167);
          auVar126[7] = -(pcVar1[7] == cVar168);
          auVar126[8] = -(pcVar1[8] == cVar169);
          auVar126[9] = -(pcVar1[9] == cVar170);
          auVar126[10] = -(pcVar1[10] == cVar171);
          auVar126[0xb] = -(pcVar1[0xb] == cVar172);
          auVar126[0xc] = -(pcVar1[0xc] == cVar173);
          auVar126[0xd] = -(pcVar1[0xd] == cVar174);
          auVar126[0xe] = -(pcVar1[0xe] == cVar175);
          auVar126[0xf] = -(pcVar1[0xf] == cVar176);
          uVar43 = (ushort)(SUB161(auVar126 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar126 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar126 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar126 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar126 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar126 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar126 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar126 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar126 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar126 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar126 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar126 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar126 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar126 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar126 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar126[0xf] >> 7) << 0xf;
          if (uVar43 != 0) break;
          uVar33 = uVar33 + lVar39 + 0x10;
          lVar39 = lVar39 + 0x10;
        }
        if (*(longlong *)(piVar5 + 0x60) == 0) {
          pdb_142d98ac0(piVar5 + 0x5c,1,piVar5 + 100,CONCAT71((uint7)(byte)(uVar43 >> 8),1));
          pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
          uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        }
        uVar25 = uVar25 & uVar23;
        auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
        uVar43 = (ushort)(SUB161(auVar60 >> 7,0) & 1) | (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1
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
                 (ushort)(byte)(auVar60[0xf] >> 7) << 0xf;
        uVar45 = (uint)uVar43;
        if (uVar43 == 0) {
          lVar39 = 0x10;
          do {
            uVar25 = uVar25 + lVar39 & uVar23;
            auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
            lVar39 = lVar39 + 0x10;
            uVar45 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                   (ushort)(byte)(auVar60[0xf] >> 7) << 0xf);
          } while (uVar45 == 0);
        }
        uVar31 = 0;
        for (; (uVar45 & 1) == 0; uVar45 = uVar45 >> 1 | 0x80000000) {
          uVar31 = uVar31 + 1;
        }
        uVar33 = uVar31 + uVar25 & uVar23;
        bVar47 = (*pauVar27)[uVar33];
        if (-1 < (char)bVar47) {
          auVar60 = *pauVar27;
          uVar45 = 0;
          for (uVar31 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                      (ushort)(byte)(auVar60[0xf] >> 7) << 0xf); (uVar31 & 1) == 0;
              uVar31 = uVar31 >> 1 | 0x80000000) {
            uVar45 = uVar45 + 1;
          }
          uVar33 = (ulonglong)uVar45;
          bVar47 = (*pauVar27)[uVar33];
        }
        bVar18 = bVar18 >> 1;
        (*pauVar27)[uVar33] = bVar18;
        pauVar27[1][uVar33 - 0x10 & uVar23] = bVar18;
        pauVar38 = pauVar27 + uVar33 * -2;
        pauVar27[uVar33 * -2 + -2][0] = 0x29;
        *(undefined8 *)(pauVar38[-2] + 8) = 0;
        *(undefined8 *)pauVar38[-1] = 1;
        *(undefined8 *)(pauVar38[-1] + 8) = 0;
        auVar127._8_4_ = uVar3;
        auVar127._0_8_ = (ulonglong)bVar47 & 0xffffffffffffff01;
        auVar127._12_4_ = uVar12;
        *(ulonglong *)(piVar5 + 0x60) =
             *(longlong *)(piVar5 + 0x60) - ((ulonglong)bVar47 & 0xffffffffffffff01);
        *(longlong *)(piVar5 + 0x62) = *(longlong *)(piVar5 + 0x62) - auVar127._8_8_;
LAB_140a41af8:
        lVar39 = *(longlong *)(pauVar38[-1] + 8);
        if (lVar39 == *(longlong *)(pauVar38[-2] + 8)) {
          pdb_142d91f60(pauVar38[-2] + 8);
        }
        *(undefined2 *)(*(longlong *)pauVar38[-1] + lVar39 * 2) = 0x1000;
        *(longlong *)(pauVar38[-1] + 8) = lVar39 + 1;
      }
      plStack_138 = (longlong *)
                    CONCAT71((int7)((ulonglong)plStack_138 >> 8),(byte)plStack_138 | bStack_267);
    }
    else {
      if (piVar5[0x44] != 1) {
LAB_140a42adf:
        pub_1406abac0(pbStack_130,uStack_178,8);
        goto LAB_140a42b56;
      }
      piVar34 = piVar5 + 0x46;
      pub_142e320f0(uStack_150,lVar39,*(undefined8 *)piVar34);
      pdb_140a44bc0(&uStack_288,piVar34,lVar39,puStack_168);
      uVar30 = SUB84(piVar34,0);
      auVar52._8_8_ = 0;
      auVar52._0_8_ = uStack_288;
      fVar48 = SUB164(auVar52 & auVar51,0);
      fVar61 = SUB164(auVar52 & auVar51,4);
      if (fVar48 <= fVar61) {
        fVar48 = fVar61;
      }
      if (((fVar11 <= fVar48) || (((ulonglong)uStack_280 & 0x101010101010101) != 0)) ||
         ((byte)uStack_278 != '\0')) {
        *puStack_2a0 = uStack_144;
        uVar21 = pdb_140f3c9d0();
        uVar21 = pdb_140f5a1d0(uVar21);
        *puStack_298 = uVar21;
        *(undefined4 *)(puStack_298 + 1) = uVar30;
        uStack_180 = CONCAT71((int7)((ulonglong)uVar21 >> 8),1);
        *(byte *)(lVar37 + 0xa0) = *(byte *)(lVar37 + 0xa0) | uStack_280._1_1_;
        iVar20 = *piVar5;
        lStack_160 = lVar39;
      }
      else {
        *(undefined1 *)(lVar37 + 0xa0) = *(undefined1 *)(lVar37 + 0xa0);
        iVar20 = *piVar5;
      }
      if ((iVar20 == 1) && (*(longlong *)(piVar5 + 2) == lVar39)) {
        *puStack_e0 = uStack_d8;
        uStack_118._1_7_ = (undefined7)(uStack_118 >> 8);
        uStack_118 = CONCAT71(uStack_118._1_7_,0x14);
        uVar25 = pdb_1400aef40(piVar5 + 100);
        pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
        uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        bVar18 = (byte)(uVar25 >> 0x38);
        bVar47 = bVar18 >> 1;
        auVar60 = ZEXT216(CONCAT11(bVar47,bVar47));
        auVar60 = pshuflw(auVar60,auVar60,0);
        lVar26 = 0;
        uVar33 = uVar25;
        while( true ) {
          uVar33 = uVar33 & uVar23;
          pcVar1 = *pauVar27 + uVar33;
          auVar130[0] = -(*pcVar1 == auVar60[0]);
          auVar130[1] = -(pcVar1[1] == auVar60[1]);
          auVar130[2] = -(pcVar1[2] == auVar60[2]);
          auVar130[3] = -(pcVar1[3] == auVar60[3]);
          auVar130[4] = -(pcVar1[4] == auVar60[4]);
          auVar130[5] = -(pcVar1[5] == auVar60[5]);
          auVar130[6] = -(pcVar1[6] == auVar60[6]);
          auVar130[7] = -(pcVar1[7] == auVar60[7]);
          auVar130[8] = -(pcVar1[8] == auVar60[0]);
          auVar130[9] = -(pcVar1[9] == auVar60[1]);
          auVar130[10] = -(pcVar1[10] == auVar60[2]);
          auVar130[0xb] = -(pcVar1[0xb] == auVar60[3]);
          auVar130[0xc] = -(pcVar1[0xc] == auVar60[4]);
          auVar130[0xd] = -(pcVar1[0xd] == auVar60[5]);
          auVar130[0xe] = -(pcVar1[0xe] == auVar60[6]);
          auVar130[0xf] = -(pcVar1[0xf] == auVar60[7]);
          uVar43 = (ushort)(SUB161(auVar130 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar130 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar130 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar130 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar130 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar130 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar130 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar130 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar130 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar130 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar130 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar130 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar130 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar130 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar130 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar130[0xf] >> 7) << 0xf;
          uVar45 = (uint)uVar43;
          while (uVar43 != 0) {
            uVar31 = 0;
            for (uVar8 = uVar45; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar31 = uVar31 + 1;
            }
            pauVar38 = pauVar27 + (uVar31 + uVar33 & uVar23) * -2;
            if (pauVar38[-2][0] == '\x14') goto LAB_140a3e888;
            uVar43 = (ushort)(uVar45 - 1) & (ushort)uVar45;
            uVar45 = CONCAT22((short)(uVar45 - 1 >> 0x10),uVar43);
          }
          auVar65[0] = -(*pcVar1 == cVar161);
          auVar65[1] = -(pcVar1[1] == cVar162);
          auVar65[2] = -(pcVar1[2] == cVar163);
          auVar65[3] = -(pcVar1[3] == cVar164);
          auVar65[4] = -(pcVar1[4] == cVar165);
          auVar65[5] = -(pcVar1[5] == cVar166);
          auVar65[6] = -(pcVar1[6] == cVar167);
          auVar65[7] = -(pcVar1[7] == cVar168);
          auVar65[8] = -(pcVar1[8] == cVar169);
          auVar65[9] = -(pcVar1[9] == cVar170);
          auVar65[10] = -(pcVar1[10] == cVar171);
          auVar65[0xb] = -(pcVar1[0xb] == cVar172);
          auVar65[0xc] = -(pcVar1[0xc] == cVar173);
          auVar65[0xd] = -(pcVar1[0xd] == cVar174);
          auVar65[0xe] = -(pcVar1[0xe] == cVar175);
          auVar65[0xf] = -(pcVar1[0xf] == cVar176);
          uVar43 = (ushort)(SUB161(auVar65 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar65 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar65 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar65 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar65 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar65 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar65 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar65 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar65 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar65 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar65 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar65 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar65 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar65 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar65 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar65[0xf] >> 7) << 0xf;
          if (uVar43 != 0) break;
          uVar33 = uVar33 + lVar26 + 0x10;
          lVar26 = lVar26 + 0x10;
        }
        if (*(longlong *)(piVar5 + 0x60) == 0) {
          pdb_142d98ac0(piVar5 + 0x5c,1,piVar5 + 100,CONCAT71((uint7)(byte)(uVar43 >> 8),1));
          pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
          uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        }
        uVar25 = uVar25 & uVar23;
        auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
        uVar43 = (ushort)(SUB161(auVar60 >> 7,0) & 1) | (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1
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
                 (ushort)(byte)(auVar60[0xf] >> 7) << 0xf;
        uVar45 = (uint)uVar43;
        if (uVar43 == 0) {
          lVar26 = 0x10;
          do {
            uVar25 = uVar25 + lVar26 & uVar23;
            auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
            lVar26 = lVar26 + 0x10;
            uVar45 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                   (ushort)(byte)(auVar60[0xf] >> 7) << 0xf);
          } while (uVar45 == 0);
        }
        uVar31 = 0;
        for (; (uVar45 & 1) == 0; uVar45 = uVar45 >> 1 | 0x80000000) {
          uVar31 = uVar31 + 1;
        }
        uVar33 = uVar31 + uVar25 & uVar23;
        bVar47 = (*pauVar27)[uVar33];
        if (-1 < (char)bVar47) {
          auVar60 = *pauVar27;
          uVar45 = 0;
          for (uVar31 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                      (ushort)(byte)(auVar60[0xf] >> 7) << 0xf); (uVar31 & 1) == 0;
              uVar31 = uVar31 >> 1 | 0x80000000) {
            uVar45 = uVar45 + 1;
          }
          uVar33 = (ulonglong)uVar45;
          bVar47 = (*pauVar27)[uVar33];
        }
        bVar18 = bVar18 >> 1;
        (*pauVar27)[uVar33] = bVar18;
        pauVar27[1][uVar33 - 0x10 & uVar23] = bVar18;
        pauVar38 = pauVar27 + uVar33 * -2;
        pauVar27[uVar33 * -2 + -2][0] = 0x14;
        *(undefined8 *)(pauVar38[-2] + 8) = 0;
        *(undefined8 *)pauVar38[-1] = 1;
        *(undefined8 *)(pauVar38[-1] + 8) = 0;
        auVar66._8_4_ = uVar3;
        auVar66._0_8_ = (ulonglong)bVar47 & 0xffffffffffffff01;
        auVar66._12_4_ = uVar12;
        *(ulonglong *)(piVar5 + 0x60) =
             *(longlong *)(piVar5 + 0x60) - ((ulonglong)bVar47 & 0xffffffffffffff01);
        *(longlong *)(piVar5 + 0x62) = *(longlong *)(piVar5 + 0x62) - auVar66._8_8_;
LAB_140a3e888:
        lVar26 = *(longlong *)(pauVar38[-1] + 8);
        if (lVar26 == *(longlong *)(pauVar38[-2] + 8)) {
          pdb_142d91f60(pauVar38[-2] + 8);
        }
        *(undefined2 *)(*(longlong *)pauVar38[-1] + lVar26 * 2) = 0x101;
        *(longlong *)(pauVar38[-1] + 8) = lVar26 + 1;
      }
      *(byte *)(lVar37 + 0xa1) = *(byte *)(lVar37 + 0xa1) | uStack_280._2_1_;
      if ((*piVar5 == 1) && (*(longlong *)(piVar5 + 2) == lVar39)) {
        *puStack_e0 = uStack_d8;
        uStack_118 = CONCAT71(uStack_118._1_7_,0x15);
        uVar25 = pdb_1400aef40(piVar5 + 100);
        pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
        uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        bVar18 = (byte)(uVar25 >> 0x38);
        bVar47 = bVar18 >> 1;
        auVar60 = ZEXT216(CONCAT11(bVar47,bVar47));
        auVar60 = pshuflw(auVar60,auVar60,0);
        lVar26 = 0;
        uVar33 = uVar25;
        while( true ) {
          uVar33 = uVar33 & uVar23;
          pcVar1 = *pauVar27 + uVar33;
          auVar131[0] = -(*pcVar1 == auVar60[0]);
          auVar131[1] = -(pcVar1[1] == auVar60[1]);
          auVar131[2] = -(pcVar1[2] == auVar60[2]);
          auVar131[3] = -(pcVar1[3] == auVar60[3]);
          auVar131[4] = -(pcVar1[4] == auVar60[4]);
          auVar131[5] = -(pcVar1[5] == auVar60[5]);
          auVar131[6] = -(pcVar1[6] == auVar60[6]);
          auVar131[7] = -(pcVar1[7] == auVar60[7]);
          auVar131[8] = -(pcVar1[8] == auVar60[0]);
          auVar131[9] = -(pcVar1[9] == auVar60[1]);
          auVar131[10] = -(pcVar1[10] == auVar60[2]);
          auVar131[0xb] = -(pcVar1[0xb] == auVar60[3]);
          auVar131[0xc] = -(pcVar1[0xc] == auVar60[4]);
          auVar131[0xd] = -(pcVar1[0xd] == auVar60[5]);
          auVar131[0xe] = -(pcVar1[0xe] == auVar60[6]);
          auVar131[0xf] = -(pcVar1[0xf] == auVar60[7]);
          uVar43 = (ushort)(SUB161(auVar131 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar131 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar131 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar131 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar131 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar131 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar131 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar131 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar131 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar131 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar131 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar131 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar131 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar131 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar131 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar131[0xf] >> 7) << 0xf;
          uVar45 = (uint)uVar43;
          while (uVar43 != 0) {
            uVar31 = 0;
            for (uVar8 = uVar45; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar31 = uVar31 + 1;
            }
            pauVar38 = pauVar27 + (uVar31 + uVar33 & uVar23) * -2;
            if (pauVar38[-2][0] == '\x15') goto LAB_140a3ebdc;
            uVar43 = (ushort)(uVar45 - 1) & (ushort)uVar45;
            uVar45 = CONCAT22((short)(uVar45 - 1 >> 0x10),uVar43);
          }
          auVar67[0] = -(*pcVar1 == cVar161);
          auVar67[1] = -(pcVar1[1] == cVar162);
          auVar67[2] = -(pcVar1[2] == cVar163);
          auVar67[3] = -(pcVar1[3] == cVar164);
          auVar67[4] = -(pcVar1[4] == cVar165);
          auVar67[5] = -(pcVar1[5] == cVar166);
          auVar67[6] = -(pcVar1[6] == cVar167);
          auVar67[7] = -(pcVar1[7] == cVar168);
          auVar67[8] = -(pcVar1[8] == cVar169);
          auVar67[9] = -(pcVar1[9] == cVar170);
          auVar67[10] = -(pcVar1[10] == cVar171);
          auVar67[0xb] = -(pcVar1[0xb] == cVar172);
          auVar67[0xc] = -(pcVar1[0xc] == cVar173);
          auVar67[0xd] = -(pcVar1[0xd] == cVar174);
          auVar67[0xe] = -(pcVar1[0xe] == cVar175);
          auVar67[0xf] = -(pcVar1[0xf] == cVar176);
          uVar43 = (ushort)(SUB161(auVar67 >> 7,0) & 1) |
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
          if (uVar43 != 0) break;
          uVar33 = uVar33 + lVar26 + 0x10;
          lVar26 = lVar26 + 0x10;
        }
        if (*(longlong *)(piVar5 + 0x60) == 0) {
          pdb_142d98ac0(piVar5 + 0x5c,1,piVar5 + 100,CONCAT71((uint7)(byte)(uVar43 >> 8),1));
          pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
          uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        }
        uVar25 = uVar25 & uVar23;
        auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
        uVar43 = (ushort)(SUB161(auVar60 >> 7,0) & 1) | (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1
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
                 (ushort)(byte)(auVar60[0xf] >> 7) << 0xf;
        uVar45 = (uint)uVar43;
        if (uVar43 == 0) {
          lVar26 = 0x10;
          do {
            uVar25 = uVar25 + lVar26 & uVar23;
            auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
            lVar26 = lVar26 + 0x10;
            uVar45 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                   (ushort)(byte)(auVar60[0xf] >> 7) << 0xf);
          } while (uVar45 == 0);
        }
        uVar31 = 0;
        for (; (uVar45 & 1) == 0; uVar45 = uVar45 >> 1 | 0x80000000) {
          uVar31 = uVar31 + 1;
        }
        uVar33 = uVar31 + uVar25 & uVar23;
        bVar47 = (*pauVar27)[uVar33];
        if (-1 < (char)bVar47) {
          auVar60 = *pauVar27;
          uVar45 = 0;
          for (uVar31 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                      (ushort)(byte)(auVar60[0xf] >> 7) << 0xf); (uVar31 & 1) == 0;
              uVar31 = uVar31 >> 1 | 0x80000000) {
            uVar45 = uVar45 + 1;
          }
          uVar33 = (ulonglong)uVar45;
          bVar47 = (*pauVar27)[uVar33];
        }
        bVar18 = bVar18 >> 1;
        (*pauVar27)[uVar33] = bVar18;
        pauVar27[1][uVar33 - 0x10 & uVar23] = bVar18;
        pauVar38 = pauVar27 + uVar33 * -2;
        pauVar27[uVar33 * -2 + -2][0] = 0x15;
        *(undefined8 *)(pauVar38[-2] + 8) = 0;
        *(undefined8 *)pauVar38[-1] = 1;
        *(undefined8 *)(pauVar38[-1] + 8) = 0;
        auVar70._8_4_ = uVar3;
        auVar70._0_8_ = (ulonglong)bVar47 & 0xffffffffffffff01;
        auVar70._12_4_ = uVar12;
        *(ulonglong *)(piVar5 + 0x60) =
             *(longlong *)(piVar5 + 0x60) - ((ulonglong)bVar47 & 0xffffffffffffff01);
        *(longlong *)(piVar5 + 0x62) = *(longlong *)(piVar5 + 0x62) - auVar70._8_8_;
LAB_140a3ebdc:
        lVar26 = *(longlong *)(pauVar38[-1] + 8);
        if (lVar26 == *(longlong *)(pauVar38[-2] + 8)) {
          pdb_142d91f60(pauVar38[-2] + 8);
        }
        *(undefined2 *)(*(longlong *)pauVar38[-1] + lVar26 * 2) = 0x201;
        *(longlong *)(pauVar38[-1] + 8) = lVar26 + 1;
      }
      *(byte *)(lVar37 + 0xa2) = *(byte *)(lVar37 + 0xa2) | uStack_280._4_1_;
      if ((*piVar5 == 1) && (*(longlong *)(piVar5 + 2) == lVar39)) {
        *puStack_e0 = uStack_d8;
        uStack_118 = CONCAT71(uStack_118._1_7_,0x16);
        uVar25 = pdb_1400aef40(piVar5 + 100);
        pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
        uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        bVar18 = (byte)(uVar25 >> 0x38);
        bVar47 = bVar18 >> 1;
        auVar60 = ZEXT216(CONCAT11(bVar47,bVar47));
        auVar60 = pshuflw(auVar60,auVar60,0);
        lVar26 = 0;
        uVar33 = uVar25;
        while( true ) {
          uVar33 = uVar33 & uVar23;
          pcVar1 = *pauVar27 + uVar33;
          auVar133[0] = -(*pcVar1 == auVar60[0]);
          auVar133[1] = -(pcVar1[1] == auVar60[1]);
          auVar133[2] = -(pcVar1[2] == auVar60[2]);
          auVar133[3] = -(pcVar1[3] == auVar60[3]);
          auVar133[4] = -(pcVar1[4] == auVar60[4]);
          auVar133[5] = -(pcVar1[5] == auVar60[5]);
          auVar133[6] = -(pcVar1[6] == auVar60[6]);
          auVar133[7] = -(pcVar1[7] == auVar60[7]);
          auVar133[8] = -(pcVar1[8] == auVar60[0]);
          auVar133[9] = -(pcVar1[9] == auVar60[1]);
          auVar133[10] = -(pcVar1[10] == auVar60[2]);
          auVar133[0xb] = -(pcVar1[0xb] == auVar60[3]);
          auVar133[0xc] = -(pcVar1[0xc] == auVar60[4]);
          auVar133[0xd] = -(pcVar1[0xd] == auVar60[5]);
          auVar133[0xe] = -(pcVar1[0xe] == auVar60[6]);
          auVar133[0xf] = -(pcVar1[0xf] == auVar60[7]);
          uVar43 = (ushort)(SUB161(auVar133 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar133 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar133 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar133 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar133 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar133 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar133 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar133 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar133 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar133 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar133 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar133 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar133 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar133 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar133 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar133[0xf] >> 7) << 0xf;
          uVar45 = (uint)uVar43;
          while (uVar43 != 0) {
            uVar31 = 0;
            for (uVar8 = uVar45; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar31 = uVar31 + 1;
            }
            pauVar38 = pauVar27 + (uVar31 + uVar33 & uVar23) * -2;
            if (pauVar38[-2][0] == '\x16') goto LAB_140a3ef3c;
            uVar43 = (ushort)(uVar45 - 1) & (ushort)uVar45;
            uVar45 = CONCAT22((short)(uVar45 - 1 >> 0x10),uVar43);
          }
          auVar71[0] = -(*pcVar1 == cVar161);
          auVar71[1] = -(pcVar1[1] == cVar162);
          auVar71[2] = -(pcVar1[2] == cVar163);
          auVar71[3] = -(pcVar1[3] == cVar164);
          auVar71[4] = -(pcVar1[4] == cVar165);
          auVar71[5] = -(pcVar1[5] == cVar166);
          auVar71[6] = -(pcVar1[6] == cVar167);
          auVar71[7] = -(pcVar1[7] == cVar168);
          auVar71[8] = -(pcVar1[8] == cVar169);
          auVar71[9] = -(pcVar1[9] == cVar170);
          auVar71[10] = -(pcVar1[10] == cVar171);
          auVar71[0xb] = -(pcVar1[0xb] == cVar172);
          auVar71[0xc] = -(pcVar1[0xc] == cVar173);
          auVar71[0xd] = -(pcVar1[0xd] == cVar174);
          auVar71[0xe] = -(pcVar1[0xe] == cVar175);
          auVar71[0xf] = -(pcVar1[0xf] == cVar176);
          uVar43 = (ushort)(SUB161(auVar71 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar71 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar71 >> 0x17,0) & 1) << 2 |
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
                   (ushort)(SUB161(auVar71 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar71[0xf] >> 7) << 0xf;
          if (uVar43 != 0) break;
          uVar33 = uVar33 + lVar26 + 0x10;
          lVar26 = lVar26 + 0x10;
        }
        if (*(longlong *)(piVar5 + 0x60) == 0) {
          pdb_142d98ac0(piVar5 + 0x5c,1,piVar5 + 100,CONCAT71((uint7)(byte)(uVar43 >> 8),1));
          pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
          uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        }
        uVar25 = uVar25 & uVar23;
        auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
        uVar43 = (ushort)(SUB161(auVar60 >> 7,0) & 1) | (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1
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
                 (ushort)(byte)(auVar60[0xf] >> 7) << 0xf;
        uVar45 = (uint)uVar43;
        if (uVar43 == 0) {
          lVar26 = 0x10;
          do {
            uVar25 = uVar25 + lVar26 & uVar23;
            auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
            lVar26 = lVar26 + 0x10;
            uVar45 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                   (ushort)(byte)(auVar60[0xf] >> 7) << 0xf);
          } while (uVar45 == 0);
        }
        uVar31 = 0;
        for (; (uVar45 & 1) == 0; uVar45 = uVar45 >> 1 | 0x80000000) {
          uVar31 = uVar31 + 1;
        }
        uVar33 = uVar31 + uVar25 & uVar23;
        bVar47 = (*pauVar27)[uVar33];
        if (-1 < (char)bVar47) {
          auVar60 = *pauVar27;
          uVar45 = 0;
          for (uVar31 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                      (ushort)(byte)(auVar60[0xf] >> 7) << 0xf); (uVar31 & 1) == 0;
              uVar31 = uVar31 >> 1 | 0x80000000) {
            uVar45 = uVar45 + 1;
          }
          uVar33 = (ulonglong)uVar45;
          bVar47 = (*pauVar27)[uVar33];
        }
        bVar18 = bVar18 >> 1;
        (*pauVar27)[uVar33] = bVar18;
        pauVar27[1][uVar33 - 0x10 & uVar23] = bVar18;
        pauVar38 = pauVar27 + uVar33 * -2;
        pauVar27[uVar33 * -2 + -2][0] = 0x16;
        *(undefined8 *)(pauVar38[-2] + 8) = 0;
        *(undefined8 *)pauVar38[-1] = 1;
        *(undefined8 *)(pauVar38[-1] + 8) = 0;
        auVar74._8_4_ = uVar3;
        auVar74._0_8_ = (ulonglong)bVar47 & 0xffffffffffffff01;
        auVar74._12_4_ = uVar12;
        *(ulonglong *)(piVar5 + 0x60) =
             *(longlong *)(piVar5 + 0x60) - ((ulonglong)bVar47 & 0xffffffffffffff01);
        *(longlong *)(piVar5 + 0x62) = *(longlong *)(piVar5 + 0x62) - auVar74._8_8_;
LAB_140a3ef3c:
        lVar26 = *(longlong *)(pauVar38[-1] + 8);
        if (lVar26 == *(longlong *)(pauVar38[-2] + 8)) {
          pdb_142d91f60(pauVar38[-2] + 8);
        }
        *(undefined2 *)(*(longlong *)pauVar38[-1] + lVar26 * 2) = 0x401;
        *(longlong *)(pauVar38[-1] + 8) = lVar26 + 1;
      }
      *(byte *)(lVar37 + 0xa3) = *(byte *)(lVar37 + 0xa3) | uStack_280._5_1_;
      if ((*piVar5 == 1) && (*(longlong *)(piVar5 + 2) == lVar39)) {
        *puStack_e0 = uStack_d8;
        uStack_118 = CONCAT71(uStack_118._1_7_,0x17);
        uVar25 = pdb_1400aef40(piVar5 + 100);
        pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
        uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        bVar18 = (byte)(uVar25 >> 0x38);
        bVar47 = bVar18 >> 1;
        auVar60 = ZEXT216(CONCAT11(bVar47,bVar47));
        auVar60 = pshuflw(auVar60,auVar60,0);
        lVar26 = 0;
        uVar33 = uVar25;
        while( true ) {
          uVar33 = uVar33 & uVar23;
          pcVar1 = *pauVar27 + uVar33;
          auVar135[0] = -(*pcVar1 == auVar60[0]);
          auVar135[1] = -(pcVar1[1] == auVar60[1]);
          auVar135[2] = -(pcVar1[2] == auVar60[2]);
          auVar135[3] = -(pcVar1[3] == auVar60[3]);
          auVar135[4] = -(pcVar1[4] == auVar60[4]);
          auVar135[5] = -(pcVar1[5] == auVar60[5]);
          auVar135[6] = -(pcVar1[6] == auVar60[6]);
          auVar135[7] = -(pcVar1[7] == auVar60[7]);
          auVar135[8] = -(pcVar1[8] == auVar60[0]);
          auVar135[9] = -(pcVar1[9] == auVar60[1]);
          auVar135[10] = -(pcVar1[10] == auVar60[2]);
          auVar135[0xb] = -(pcVar1[0xb] == auVar60[3]);
          auVar135[0xc] = -(pcVar1[0xc] == auVar60[4]);
          auVar135[0xd] = -(pcVar1[0xd] == auVar60[5]);
          auVar135[0xe] = -(pcVar1[0xe] == auVar60[6]);
          auVar135[0xf] = -(pcVar1[0xf] == auVar60[7]);
          uVar43 = (ushort)(SUB161(auVar135 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar135 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar135 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar135 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar135 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar135 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar135 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar135 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar135 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar135 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar135 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar135 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar135 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar135 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar135 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar135[0xf] >> 7) << 0xf;
          uVar45 = (uint)uVar43;
          while (uVar43 != 0) {
            uVar31 = 0;
            for (uVar8 = uVar45; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar31 = uVar31 + 1;
            }
            pauVar38 = pauVar27 + (uVar31 + uVar33 & uVar23) * -2;
            if (pauVar38[-2][0] == '\x17') goto LAB_140a3f29c;
            uVar43 = (ushort)(uVar45 - 1) & (ushort)uVar45;
            uVar45 = CONCAT22((short)(uVar45 - 1 >> 0x10),uVar43);
          }
          auVar75[0] = -(*pcVar1 == cVar161);
          auVar75[1] = -(pcVar1[1] == cVar162);
          auVar75[2] = -(pcVar1[2] == cVar163);
          auVar75[3] = -(pcVar1[3] == cVar164);
          auVar75[4] = -(pcVar1[4] == cVar165);
          auVar75[5] = -(pcVar1[5] == cVar166);
          auVar75[6] = -(pcVar1[6] == cVar167);
          auVar75[7] = -(pcVar1[7] == cVar168);
          auVar75[8] = -(pcVar1[8] == cVar169);
          auVar75[9] = -(pcVar1[9] == cVar170);
          auVar75[10] = -(pcVar1[10] == cVar171);
          auVar75[0xb] = -(pcVar1[0xb] == cVar172);
          auVar75[0xc] = -(pcVar1[0xc] == cVar173);
          auVar75[0xd] = -(pcVar1[0xd] == cVar174);
          auVar75[0xe] = -(pcVar1[0xe] == cVar175);
          auVar75[0xf] = -(pcVar1[0xf] == cVar176);
          uVar43 = (ushort)(SUB161(auVar75 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar75 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar75 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar75 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar75 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar75 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar75 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar75 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar75 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar75 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar75 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar75 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar75 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar75 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar75 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar75[0xf] >> 7) << 0xf;
          if (uVar43 != 0) break;
          uVar33 = uVar33 + lVar26 + 0x10;
          lVar26 = lVar26 + 0x10;
        }
        if (*(longlong *)(piVar5 + 0x60) == 0) {
          pdb_142d98ac0(piVar5 + 0x5c,1,piVar5 + 100,CONCAT71((uint7)(byte)(uVar43 >> 8),1));
          pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
          uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        }
        uVar25 = uVar25 & uVar23;
        auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
        uVar43 = (ushort)(SUB161(auVar60 >> 7,0) & 1) | (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1
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
                 (ushort)(byte)(auVar60[0xf] >> 7) << 0xf;
        uVar45 = (uint)uVar43;
        if (uVar43 == 0) {
          lVar26 = 0x10;
          do {
            uVar25 = uVar25 + lVar26 & uVar23;
            auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
            lVar26 = lVar26 + 0x10;
            uVar45 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                   (ushort)(byte)(auVar60[0xf] >> 7) << 0xf);
          } while (uVar45 == 0);
        }
        uVar31 = 0;
        for (; (uVar45 & 1) == 0; uVar45 = uVar45 >> 1 | 0x80000000) {
          uVar31 = uVar31 + 1;
        }
        uVar33 = uVar31 + uVar25 & uVar23;
        bVar47 = (*pauVar27)[uVar33];
        if (-1 < (char)bVar47) {
          auVar60 = *pauVar27;
          uVar45 = 0;
          for (uVar31 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                      (ushort)(byte)(auVar60[0xf] >> 7) << 0xf); (uVar31 & 1) == 0;
              uVar31 = uVar31 >> 1 | 0x80000000) {
            uVar45 = uVar45 + 1;
          }
          uVar33 = (ulonglong)uVar45;
          bVar47 = (*pauVar27)[uVar33];
        }
        bVar18 = bVar18 >> 1;
        (*pauVar27)[uVar33] = bVar18;
        pauVar27[1][uVar33 - 0x10 & uVar23] = bVar18;
        pauVar38 = pauVar27 + uVar33 * -2;
        pauVar27[uVar33 * -2 + -2][0] = 0x17;
        *(undefined8 *)(pauVar38[-2] + 8) = 0;
        *(undefined8 *)pauVar38[-1] = 1;
        *(undefined8 *)(pauVar38[-1] + 8) = 0;
        auVar78._8_4_ = uVar3;
        auVar78._0_8_ = (ulonglong)bVar47 & 0xffffffffffffff01;
        auVar78._12_4_ = uVar12;
        *(ulonglong *)(piVar5 + 0x60) =
             *(longlong *)(piVar5 + 0x60) - ((ulonglong)bVar47 & 0xffffffffffffff01);
        *(longlong *)(piVar5 + 0x62) = *(longlong *)(piVar5 + 0x62) - auVar78._8_8_;
LAB_140a3f29c:
        lVar26 = *(longlong *)(pauVar38[-1] + 8);
        if (lVar26 == *(longlong *)(pauVar38[-2] + 8)) {
          pdb_142d91f60(pauVar38[-2] + 8);
        }
        *(undefined2 *)(*(longlong *)pauVar38[-1] + lVar26 * 2) = 0x501;
        *(longlong *)(pauVar38[-1] + 8) = lVar26 + 1;
      }
      *(byte *)(lVar37 + 0xa4) = *(byte *)(lVar37 + 0xa4) | uStack_280._6_1_;
      if ((*piVar5 == 1) && (*(longlong *)(piVar5 + 2) == lVar39)) {
        *puStack_e0 = uStack_d8;
        uStack_118 = CONCAT71(uStack_118._1_7_,0x18);
        uVar25 = pdb_1400aef40(piVar5 + 100);
        pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
        uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        bVar18 = (byte)(uVar25 >> 0x38);
        bVar47 = bVar18 >> 1;
        auVar60 = ZEXT216(CONCAT11(bVar47,bVar47));
        auVar60 = pshuflw(auVar60,auVar60,0);
        lVar26 = 0;
        uVar33 = uVar25;
        while( true ) {
          uVar33 = uVar33 & uVar23;
          pcVar1 = *pauVar27 + uVar33;
          auVar137[0] = -(*pcVar1 == auVar60[0]);
          auVar137[1] = -(pcVar1[1] == auVar60[1]);
          auVar137[2] = -(pcVar1[2] == auVar60[2]);
          auVar137[3] = -(pcVar1[3] == auVar60[3]);
          auVar137[4] = -(pcVar1[4] == auVar60[4]);
          auVar137[5] = -(pcVar1[5] == auVar60[5]);
          auVar137[6] = -(pcVar1[6] == auVar60[6]);
          auVar137[7] = -(pcVar1[7] == auVar60[7]);
          auVar137[8] = -(pcVar1[8] == auVar60[0]);
          auVar137[9] = -(pcVar1[9] == auVar60[1]);
          auVar137[10] = -(pcVar1[10] == auVar60[2]);
          auVar137[0xb] = -(pcVar1[0xb] == auVar60[3]);
          auVar137[0xc] = -(pcVar1[0xc] == auVar60[4]);
          auVar137[0xd] = -(pcVar1[0xd] == auVar60[5]);
          auVar137[0xe] = -(pcVar1[0xe] == auVar60[6]);
          auVar137[0xf] = -(pcVar1[0xf] == auVar60[7]);
          uVar43 = (ushort)(SUB161(auVar137 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar137 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar137 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar137 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar137 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar137 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar137 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar137 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar137 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar137 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar137 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar137 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar137 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar137 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar137 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar137[0xf] >> 7) << 0xf;
          uVar45 = (uint)uVar43;
          while (uVar43 != 0) {
            uVar31 = 0;
            for (uVar8 = uVar45; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar31 = uVar31 + 1;
            }
            pauVar38 = pauVar27 + (uVar31 + uVar33 & uVar23) * -2;
            if (pauVar38[-2][0] == '\x18') goto LAB_140a3f5fc;
            uVar43 = (ushort)(uVar45 - 1) & (ushort)uVar45;
            uVar45 = CONCAT22((short)(uVar45 - 1 >> 0x10),uVar43);
          }
          auVar79[0] = -(*pcVar1 == cVar161);
          auVar79[1] = -(pcVar1[1] == cVar162);
          auVar79[2] = -(pcVar1[2] == cVar163);
          auVar79[3] = -(pcVar1[3] == cVar164);
          auVar79[4] = -(pcVar1[4] == cVar165);
          auVar79[5] = -(pcVar1[5] == cVar166);
          auVar79[6] = -(pcVar1[6] == cVar167);
          auVar79[7] = -(pcVar1[7] == cVar168);
          auVar79[8] = -(pcVar1[8] == cVar169);
          auVar79[9] = -(pcVar1[9] == cVar170);
          auVar79[10] = -(pcVar1[10] == cVar171);
          auVar79[0xb] = -(pcVar1[0xb] == cVar172);
          auVar79[0xc] = -(pcVar1[0xc] == cVar173);
          auVar79[0xd] = -(pcVar1[0xd] == cVar174);
          auVar79[0xe] = -(pcVar1[0xe] == cVar175);
          auVar79[0xf] = -(pcVar1[0xf] == cVar176);
          uVar43 = (ushort)(SUB161(auVar79 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar79 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar79 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar79 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar79 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar79 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar79 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar79 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar79 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar79 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar79 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar79 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar79 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar79 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar79 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar79[0xf] >> 7) << 0xf;
          if (uVar43 != 0) break;
          uVar33 = uVar33 + lVar26 + 0x10;
          lVar26 = lVar26 + 0x10;
        }
        if (*(longlong *)(piVar5 + 0x60) == 0) {
          pdb_142d98ac0(piVar5 + 0x5c,1,piVar5 + 100,CONCAT71((uint7)(byte)(uVar43 >> 8),1));
          pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
          uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        }
        uVar25 = uVar25 & uVar23;
        auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
        uVar43 = (ushort)(SUB161(auVar60 >> 7,0) & 1) | (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1
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
                 (ushort)(byte)(auVar60[0xf] >> 7) << 0xf;
        uVar45 = (uint)uVar43;
        if (uVar43 == 0) {
          lVar26 = 0x10;
          do {
            uVar25 = uVar25 + lVar26 & uVar23;
            auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
            lVar26 = lVar26 + 0x10;
            uVar45 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                   (ushort)(byte)(auVar60[0xf] >> 7) << 0xf);
          } while (uVar45 == 0);
        }
        uVar31 = 0;
        for (; (uVar45 & 1) == 0; uVar45 = uVar45 >> 1 | 0x80000000) {
          uVar31 = uVar31 + 1;
        }
        uVar33 = uVar31 + uVar25 & uVar23;
        bVar47 = (*pauVar27)[uVar33];
        if (-1 < (char)bVar47) {
          auVar60 = *pauVar27;
          uVar45 = 0;
          for (uVar31 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                      (ushort)(byte)(auVar60[0xf] >> 7) << 0xf); (uVar31 & 1) == 0;
              uVar31 = uVar31 >> 1 | 0x80000000) {
            uVar45 = uVar45 + 1;
          }
          uVar33 = (ulonglong)uVar45;
          bVar47 = (*pauVar27)[uVar33];
        }
        bVar18 = bVar18 >> 1;
        (*pauVar27)[uVar33] = bVar18;
        pauVar27[1][uVar33 - 0x10 & uVar23] = bVar18;
        pauVar38 = pauVar27 + uVar33 * -2;
        pauVar27[uVar33 * -2 + -2][0] = 0x18;
        *(undefined8 *)(pauVar38[-2] + 8) = 0;
        *(undefined8 *)pauVar38[-1] = 1;
        *(undefined8 *)(pauVar38[-1] + 8) = 0;
        auVar82._8_4_ = uVar3;
        auVar82._0_8_ = (ulonglong)bVar47 & 0xffffffffffffff01;
        auVar82._12_4_ = uVar12;
        *(ulonglong *)(piVar5 + 0x60) =
             *(longlong *)(piVar5 + 0x60) - ((ulonglong)bVar47 & 0xffffffffffffff01);
        *(longlong *)(piVar5 + 0x62) = *(longlong *)(piVar5 + 0x62) - auVar82._8_8_;
LAB_140a3f5fc:
        lVar26 = *(longlong *)(pauVar38[-1] + 8);
        if (lVar26 == *(longlong *)(pauVar38[-2] + 8)) {
          pdb_142d91f60(pauVar38[-2] + 8);
        }
        *(undefined2 *)(*(longlong *)pauVar38[-1] + lVar26 * 2) = 0x601;
        *(longlong *)(pauVar38[-1] + 8) = lVar26 + 1;
      }
      *(byte *)(lVar37 + 0xa5) = *(byte *)(lVar37 + 0xa5) | uStack_280._3_1_;
      if ((*piVar5 == 1) && (*(longlong *)(piVar5 + 2) == lVar39)) {
        *puStack_e0 = uStack_d8;
        uStack_118 = CONCAT71(uStack_118._1_7_,0x19);
        uVar25 = pdb_1400aef40(piVar5 + 100);
        pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
        uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        bVar18 = (byte)(uVar25 >> 0x38);
        bVar47 = bVar18 >> 1;
        auVar60 = ZEXT216(CONCAT11(bVar47,bVar47));
        auVar60 = pshuflw(auVar60,auVar60,0);
        lVar26 = 0;
        uVar33 = uVar25;
        while( true ) {
          uVar33 = uVar33 & uVar23;
          pcVar1 = *pauVar27 + uVar33;
          auVar139[0] = -(*pcVar1 == auVar60[0]);
          auVar139[1] = -(pcVar1[1] == auVar60[1]);
          auVar139[2] = -(pcVar1[2] == auVar60[2]);
          auVar139[3] = -(pcVar1[3] == auVar60[3]);
          auVar139[4] = -(pcVar1[4] == auVar60[4]);
          auVar139[5] = -(pcVar1[5] == auVar60[5]);
          auVar139[6] = -(pcVar1[6] == auVar60[6]);
          auVar139[7] = -(pcVar1[7] == auVar60[7]);
          auVar139[8] = -(pcVar1[8] == auVar60[0]);
          auVar139[9] = -(pcVar1[9] == auVar60[1]);
          auVar139[10] = -(pcVar1[10] == auVar60[2]);
          auVar139[0xb] = -(pcVar1[0xb] == auVar60[3]);
          auVar139[0xc] = -(pcVar1[0xc] == auVar60[4]);
          auVar139[0xd] = -(pcVar1[0xd] == auVar60[5]);
          auVar139[0xe] = -(pcVar1[0xe] == auVar60[6]);
          auVar139[0xf] = -(pcVar1[0xf] == auVar60[7]);
          uVar43 = (ushort)(SUB161(auVar139 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar139 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar139 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar139 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar139 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar139 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar139 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar139 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar139 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar139 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar139 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar139 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar139 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar139 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar139 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar139[0xf] >> 7) << 0xf;
          uVar45 = (uint)uVar43;
          while (uVar43 != 0) {
            uVar31 = 0;
            for (uVar8 = uVar45; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar31 = uVar31 + 1;
            }
            pauVar38 = pauVar27 + (uVar31 + uVar33 & uVar23) * -2;
            if (pauVar38[-2][0] == '\x19') goto LAB_140a3f95c;
            uVar43 = (ushort)(uVar45 - 1) & (ushort)uVar45;
            uVar45 = CONCAT22((short)(uVar45 - 1 >> 0x10),uVar43);
          }
          auVar83[0] = -(*pcVar1 == cVar161);
          auVar83[1] = -(pcVar1[1] == cVar162);
          auVar83[2] = -(pcVar1[2] == cVar163);
          auVar83[3] = -(pcVar1[3] == cVar164);
          auVar83[4] = -(pcVar1[4] == cVar165);
          auVar83[5] = -(pcVar1[5] == cVar166);
          auVar83[6] = -(pcVar1[6] == cVar167);
          auVar83[7] = -(pcVar1[7] == cVar168);
          auVar83[8] = -(pcVar1[8] == cVar169);
          auVar83[9] = -(pcVar1[9] == cVar170);
          auVar83[10] = -(pcVar1[10] == cVar171);
          auVar83[0xb] = -(pcVar1[0xb] == cVar172);
          auVar83[0xc] = -(pcVar1[0xc] == cVar173);
          auVar83[0xd] = -(pcVar1[0xd] == cVar174);
          auVar83[0xe] = -(pcVar1[0xe] == cVar175);
          auVar83[0xf] = -(pcVar1[0xf] == cVar176);
          uVar43 = (ushort)(SUB161(auVar83 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar83 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar83 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar83 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar83 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar83 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar83 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar83 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar83 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar83 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar83 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar83 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar83 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar83 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar83 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar83[0xf] >> 7) << 0xf;
          if (uVar43 != 0) break;
          uVar33 = uVar33 + lVar26 + 0x10;
          lVar26 = lVar26 + 0x10;
        }
        if (*(longlong *)(piVar5 + 0x60) == 0) {
          pdb_142d98ac0(piVar5 + 0x5c,1,piVar5 + 100,CONCAT71((uint7)(byte)(uVar43 >> 8),1));
          pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
          uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        }
        uVar25 = uVar25 & uVar23;
        auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
        uVar43 = (ushort)(SUB161(auVar60 >> 7,0) & 1) | (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1
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
                 (ushort)(byte)(auVar60[0xf] >> 7) << 0xf;
        uVar45 = (uint)uVar43;
        if (uVar43 == 0) {
          lVar26 = 0x10;
          do {
            uVar25 = uVar25 + lVar26 & uVar23;
            auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
            lVar26 = lVar26 + 0x10;
            uVar45 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                   (ushort)(byte)(auVar60[0xf] >> 7) << 0xf);
          } while (uVar45 == 0);
        }
        uVar31 = 0;
        for (; (uVar45 & 1) == 0; uVar45 = uVar45 >> 1 | 0x80000000) {
          uVar31 = uVar31 + 1;
        }
        uVar33 = uVar31 + uVar25 & uVar23;
        bVar47 = (*pauVar27)[uVar33];
        if (-1 < (char)bVar47) {
          auVar60 = *pauVar27;
          uVar45 = 0;
          for (uVar31 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                      (ushort)(byte)(auVar60[0xf] >> 7) << 0xf); (uVar31 & 1) == 0;
              uVar31 = uVar31 >> 1 | 0x80000000) {
            uVar45 = uVar45 + 1;
          }
          uVar33 = (ulonglong)uVar45;
          bVar47 = (*pauVar27)[uVar33];
        }
        bVar18 = bVar18 >> 1;
        (*pauVar27)[uVar33] = bVar18;
        pauVar27[1][uVar33 - 0x10 & uVar23] = bVar18;
        pauVar38 = pauVar27 + uVar33 * -2;
        pauVar27[uVar33 * -2 + -2][0] = 0x19;
        *(undefined8 *)(pauVar38[-2] + 8) = 0;
        *(undefined8 *)pauVar38[-1] = 1;
        *(undefined8 *)(pauVar38[-1] + 8) = 0;
        auVar86._8_4_ = uVar3;
        auVar86._0_8_ = (ulonglong)bVar47 & 0xffffffffffffff01;
        auVar86._12_4_ = uVar12;
        *(ulonglong *)(piVar5 + 0x60) =
             *(longlong *)(piVar5 + 0x60) - ((ulonglong)bVar47 & 0xffffffffffffff01);
        *(longlong *)(piVar5 + 0x62) = *(longlong *)(piVar5 + 0x62) - auVar86._8_8_;
LAB_140a3f95c:
        lVar26 = *(longlong *)(pauVar38[-1] + 8);
        if (lVar26 == *(longlong *)(pauVar38[-2] + 8)) {
          pdb_142d91f60(pauVar38[-2] + 8);
        }
        *(undefined2 *)(*(longlong *)pauVar38[-1] + lVar26 * 2) = 0x301;
        *(longlong *)(pauVar38[-1] + 8) = lVar26 + 1;
      }
      *(byte *)(lVar37 + 0xa6) = *(byte *)(lVar37 + 0xa6) | uStack_280._7_1_;
      if ((*piVar5 == 1) && (*(longlong *)(piVar5 + 2) == lVar39)) {
        *puStack_e0 = uStack_d8;
        uStack_118 = CONCAT71(uStack_118._1_7_,0x1a);
        uVar25 = pdb_1400aef40(piVar5 + 100);
        pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
        uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        bVar18 = (byte)(uVar25 >> 0x38);
        bVar47 = bVar18 >> 1;
        auVar60 = ZEXT216(CONCAT11(bVar47,bVar47));
        auVar60 = pshuflw(auVar60,auVar60,0);
        lVar26 = 0;
        uVar33 = uVar25;
        while( true ) {
          uVar33 = uVar33 & uVar23;
          pcVar1 = *pauVar27 + uVar33;
          auVar141[0] = -(*pcVar1 == auVar60[0]);
          auVar141[1] = -(pcVar1[1] == auVar60[1]);
          auVar141[2] = -(pcVar1[2] == auVar60[2]);
          auVar141[3] = -(pcVar1[3] == auVar60[3]);
          auVar141[4] = -(pcVar1[4] == auVar60[4]);
          auVar141[5] = -(pcVar1[5] == auVar60[5]);
          auVar141[6] = -(pcVar1[6] == auVar60[6]);
          auVar141[7] = -(pcVar1[7] == auVar60[7]);
          auVar141[8] = -(pcVar1[8] == auVar60[0]);
          auVar141[9] = -(pcVar1[9] == auVar60[1]);
          auVar141[10] = -(pcVar1[10] == auVar60[2]);
          auVar141[0xb] = -(pcVar1[0xb] == auVar60[3]);
          auVar141[0xc] = -(pcVar1[0xc] == auVar60[4]);
          auVar141[0xd] = -(pcVar1[0xd] == auVar60[5]);
          auVar141[0xe] = -(pcVar1[0xe] == auVar60[6]);
          auVar141[0xf] = -(pcVar1[0xf] == auVar60[7]);
          uVar43 = (ushort)(SUB161(auVar141 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar141 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar141 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar141 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar141 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar141 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar141 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar141 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar141 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar141 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar141 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar141 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar141 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar141 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar141 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar141[0xf] >> 7) << 0xf;
          uVar45 = (uint)uVar43;
          while (uVar43 != 0) {
            uVar31 = 0;
            for (uVar8 = uVar45; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar31 = uVar31 + 1;
            }
            pauVar38 = pauVar27 + (uVar31 + uVar33 & uVar23) * -2;
            if (pauVar38[-2][0] == '\x1a') goto LAB_140a3fcbc;
            uVar43 = (ushort)(uVar45 - 1) & (ushort)uVar45;
            uVar45 = CONCAT22((short)(uVar45 - 1 >> 0x10),uVar43);
          }
          auVar87[0] = -(*pcVar1 == cVar161);
          auVar87[1] = -(pcVar1[1] == cVar162);
          auVar87[2] = -(pcVar1[2] == cVar163);
          auVar87[3] = -(pcVar1[3] == cVar164);
          auVar87[4] = -(pcVar1[4] == cVar165);
          auVar87[5] = -(pcVar1[5] == cVar166);
          auVar87[6] = -(pcVar1[6] == cVar167);
          auVar87[7] = -(pcVar1[7] == cVar168);
          auVar87[8] = -(pcVar1[8] == cVar169);
          auVar87[9] = -(pcVar1[9] == cVar170);
          auVar87[10] = -(pcVar1[10] == cVar171);
          auVar87[0xb] = -(pcVar1[0xb] == cVar172);
          auVar87[0xc] = -(pcVar1[0xc] == cVar173);
          auVar87[0xd] = -(pcVar1[0xd] == cVar174);
          auVar87[0xe] = -(pcVar1[0xe] == cVar175);
          auVar87[0xf] = -(pcVar1[0xf] == cVar176);
          uVar43 = (ushort)(SUB161(auVar87 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar87 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar87 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar87 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar87 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar87 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar87 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar87 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar87 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar87 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar87 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar87 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar87 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar87 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar87 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar87[0xf] >> 7) << 0xf;
          if (uVar43 != 0) break;
          uVar33 = uVar33 + lVar26 + 0x10;
          lVar26 = lVar26 + 0x10;
        }
        if (*(longlong *)(piVar5 + 0x60) == 0) {
          pdb_142d98ac0(piVar5 + 0x5c,1,piVar5 + 100,CONCAT71((uint7)(byte)(uVar43 >> 8),1));
          pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
          uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        }
        uVar25 = uVar25 & uVar23;
        auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
        uVar43 = (ushort)(SUB161(auVar60 >> 7,0) & 1) | (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1
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
                 (ushort)(byte)(auVar60[0xf] >> 7) << 0xf;
        uVar45 = (uint)uVar43;
        if (uVar43 == 0) {
          lVar26 = 0x10;
          do {
            uVar25 = uVar25 + lVar26 & uVar23;
            auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
            lVar26 = lVar26 + 0x10;
            uVar45 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                   (ushort)(byte)(auVar60[0xf] >> 7) << 0xf);
          } while (uVar45 == 0);
        }
        uVar31 = 0;
        for (; (uVar45 & 1) == 0; uVar45 = uVar45 >> 1 | 0x80000000) {
          uVar31 = uVar31 + 1;
        }
        uVar33 = uVar31 + uVar25 & uVar23;
        bVar47 = (*pauVar27)[uVar33];
        if (-1 < (char)bVar47) {
          auVar60 = *pauVar27;
          uVar45 = 0;
          for (uVar31 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                      (ushort)(byte)(auVar60[0xf] >> 7) << 0xf); (uVar31 & 1) == 0;
              uVar31 = uVar31 >> 1 | 0x80000000) {
            uVar45 = uVar45 + 1;
          }
          uVar33 = (ulonglong)uVar45;
          bVar47 = (*pauVar27)[uVar33];
        }
        bVar18 = bVar18 >> 1;
        (*pauVar27)[uVar33] = bVar18;
        pauVar27[1][uVar33 - 0x10 & uVar23] = bVar18;
        pauVar38 = pauVar27 + uVar33 * -2;
        pauVar27[uVar33 * -2 + -2][0] = 0x1a;
        *(undefined8 *)(pauVar38[-2] + 8) = 0;
        *(undefined8 *)pauVar38[-1] = 1;
        *(undefined8 *)(pauVar38[-1] + 8) = 0;
        auVar90._8_4_ = uVar3;
        auVar90._0_8_ = (ulonglong)bVar47 & 0xffffffffffffff01;
        auVar90._12_4_ = uVar12;
        *(ulonglong *)(piVar5 + 0x60) =
             *(longlong *)(piVar5 + 0x60) - ((ulonglong)bVar47 & 0xffffffffffffff01);
        *(longlong *)(piVar5 + 0x62) = *(longlong *)(piVar5 + 0x62) - auVar90._8_8_;
LAB_140a3fcbc:
        lVar26 = *(longlong *)(pauVar38[-1] + 8);
        if (lVar26 == *(longlong *)(pauVar38[-2] + 8)) {
          pdb_142d91f60(pauVar38[-2] + 8);
        }
        *(undefined2 *)(*(longlong *)pauVar38[-1] + lVar26 * 2) = 0x701;
        *(longlong *)(pauVar38[-1] + 8) = lVar26 + 1;
      }
      *(byte *)(lVar37 + 0xa7) = *(byte *)(lVar37 + 0xa7) | (byte)uStack_278;
      if ((*piVar5 == 1) && (*(longlong *)(piVar5 + 2) == lVar39)) {
        *puStack_e0 = uStack_d8;
        uStack_118 = CONCAT71(uStack_118._1_7_,0x1b);
        uVar25 = pdb_1400aef40(piVar5 + 100);
        pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
        uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        bVar18 = (byte)(uVar25 >> 0x38);
        bVar47 = bVar18 >> 1;
        auVar60 = ZEXT216(CONCAT11(bVar47,bVar47));
        auVar60 = pshuflw(auVar60,auVar60,0);
        lVar26 = 0;
        uVar33 = uVar25;
        while( true ) {
          uVar33 = uVar33 & uVar23;
          pcVar1 = *pauVar27 + uVar33;
          auVar143[0] = -(*pcVar1 == auVar60[0]);
          auVar143[1] = -(pcVar1[1] == auVar60[1]);
          auVar143[2] = -(pcVar1[2] == auVar60[2]);
          auVar143[3] = -(pcVar1[3] == auVar60[3]);
          auVar143[4] = -(pcVar1[4] == auVar60[4]);
          auVar143[5] = -(pcVar1[5] == auVar60[5]);
          auVar143[6] = -(pcVar1[6] == auVar60[6]);
          auVar143[7] = -(pcVar1[7] == auVar60[7]);
          auVar143[8] = -(pcVar1[8] == auVar60[0]);
          auVar143[9] = -(pcVar1[9] == auVar60[1]);
          auVar143[10] = -(pcVar1[10] == auVar60[2]);
          auVar143[0xb] = -(pcVar1[0xb] == auVar60[3]);
          auVar143[0xc] = -(pcVar1[0xc] == auVar60[4]);
          auVar143[0xd] = -(pcVar1[0xd] == auVar60[5]);
          auVar143[0xe] = -(pcVar1[0xe] == auVar60[6]);
          auVar143[0xf] = -(pcVar1[0xf] == auVar60[7]);
          uVar43 = (ushort)(SUB161(auVar143 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar143 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar143 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar143 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar143 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar143 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar143 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar143 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar143 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar143 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar143 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar143 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar143 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar143 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar143 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar143[0xf] >> 7) << 0xf;
          uVar45 = (uint)uVar43;
          while (uVar43 != 0) {
            uVar31 = 0;
            for (uVar8 = uVar45; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar31 = uVar31 + 1;
            }
            pauVar38 = pauVar27 + (uVar31 + uVar33 & uVar23) * -2;
            if (pauVar38[-2][0] == '\x1b') goto LAB_140a4001c;
            uVar43 = (ushort)(uVar45 - 1) & (ushort)uVar45;
            uVar45 = CONCAT22((short)(uVar45 - 1 >> 0x10),uVar43);
          }
          auVar91[0] = -(*pcVar1 == cVar161);
          auVar91[1] = -(pcVar1[1] == cVar162);
          auVar91[2] = -(pcVar1[2] == cVar163);
          auVar91[3] = -(pcVar1[3] == cVar164);
          auVar91[4] = -(pcVar1[4] == cVar165);
          auVar91[5] = -(pcVar1[5] == cVar166);
          auVar91[6] = -(pcVar1[6] == cVar167);
          auVar91[7] = -(pcVar1[7] == cVar168);
          auVar91[8] = -(pcVar1[8] == cVar169);
          auVar91[9] = -(pcVar1[9] == cVar170);
          auVar91[10] = -(pcVar1[10] == cVar171);
          auVar91[0xb] = -(pcVar1[0xb] == cVar172);
          auVar91[0xc] = -(pcVar1[0xc] == cVar173);
          auVar91[0xd] = -(pcVar1[0xd] == cVar174);
          auVar91[0xe] = -(pcVar1[0xe] == cVar175);
          auVar91[0xf] = -(pcVar1[0xf] == cVar176);
          uVar43 = (ushort)(SUB161(auVar91 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar91 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar91 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar91 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar91 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar91 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar91 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar91 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar91 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar91 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar91 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar91 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar91 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar91 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar91 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar91[0xf] >> 7) << 0xf;
          if (uVar43 != 0) break;
          uVar33 = uVar33 + lVar26 + 0x10;
          lVar26 = lVar26 + 0x10;
        }
        if (*(longlong *)(piVar5 + 0x60) == 0) {
          pdb_142d98ac0(piVar5 + 0x5c,1,piVar5 + 100,CONCAT71((uint7)(byte)(uVar43 >> 8),1));
          pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
          uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        }
        uVar25 = uVar25 & uVar23;
        auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
        uVar43 = (ushort)(SUB161(auVar60 >> 7,0) & 1) | (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1
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
                 (ushort)(byte)(auVar60[0xf] >> 7) << 0xf;
        uVar45 = (uint)uVar43;
        if (uVar43 == 0) {
          lVar26 = 0x10;
          do {
            uVar25 = uVar25 + lVar26 & uVar23;
            auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
            lVar26 = lVar26 + 0x10;
            uVar45 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                   (ushort)(byte)(auVar60[0xf] >> 7) << 0xf);
          } while (uVar45 == 0);
        }
        uVar31 = 0;
        for (; (uVar45 & 1) == 0; uVar45 = uVar45 >> 1 | 0x80000000) {
          uVar31 = uVar31 + 1;
        }
        uVar33 = uVar31 + uVar25 & uVar23;
        bVar47 = (*pauVar27)[uVar33];
        if (-1 < (char)bVar47) {
          auVar60 = *pauVar27;
          uVar45 = 0;
          for (uVar31 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                      (ushort)(byte)(auVar60[0xf] >> 7) << 0xf); (uVar31 & 1) == 0;
              uVar31 = uVar31 >> 1 | 0x80000000) {
            uVar45 = uVar45 + 1;
          }
          uVar33 = (ulonglong)uVar45;
          bVar47 = (*pauVar27)[uVar33];
        }
        bVar18 = bVar18 >> 1;
        (*pauVar27)[uVar33] = bVar18;
        pauVar27[1][uVar33 - 0x10 & uVar23] = bVar18;
        pauVar38 = pauVar27 + uVar33 * -2;
        pauVar27[uVar33 * -2 + -2][0] = 0x1b;
        *(undefined8 *)(pauVar38[-2] + 8) = 0;
        *(undefined8 *)pauVar38[-1] = 1;
        *(undefined8 *)(pauVar38[-1] + 8) = 0;
        auVar94._8_4_ = uVar3;
        auVar94._0_8_ = (ulonglong)bVar47 & 0xffffffffffffff01;
        auVar94._12_4_ = uVar12;
        *(ulonglong *)(piVar5 + 0x60) =
             *(longlong *)(piVar5 + 0x60) - ((ulonglong)bVar47 & 0xffffffffffffff01);
        *(longlong *)(piVar5 + 0x62) = *(longlong *)(piVar5 + 0x62) - auVar94._8_8_;
LAB_140a4001c:
        lVar26 = *(longlong *)(pauVar38[-1] + 8);
        if (lVar26 == *(longlong *)(pauVar38[-2] + 8)) {
          pdb_142d91f60(pauVar38[-2] + 8);
        }
        *(undefined2 *)(*(longlong *)pauVar38[-1] + lVar26 * 2) = 0x801;
        *(longlong *)(pauVar38[-1] + 8) = lVar26 + 1;
      }
      *(byte *)(lVar37 + 0xa9) = *(byte *)(lVar37 + 0xa9) | (byte)uStack_280;
      if ((*piVar5 == 1) && (*(longlong *)(piVar5 + 2) == lVar39)) {
        *puStack_e0 = uStack_d8;
        uStack_118 = CONCAT71(uStack_118._1_7_,0x1d);
        uVar25 = pdb_1400aef40(piVar5 + 100);
        pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
        uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        bVar18 = (byte)(uVar25 >> 0x38);
        bVar47 = bVar18 >> 1;
        auVar60 = ZEXT216(CONCAT11(bVar47,bVar47));
        auVar60 = pshuflw(auVar60,auVar60,0);
        lVar39 = 0;
        uVar33 = uVar25;
        while( true ) {
          uVar33 = uVar33 & uVar23;
          pcVar1 = *pauVar27 + uVar33;
          auVar145[0] = -(*pcVar1 == auVar60[0]);
          auVar145[1] = -(pcVar1[1] == auVar60[1]);
          auVar145[2] = -(pcVar1[2] == auVar60[2]);
          auVar145[3] = -(pcVar1[3] == auVar60[3]);
          auVar145[4] = -(pcVar1[4] == auVar60[4]);
          auVar145[5] = -(pcVar1[5] == auVar60[5]);
          auVar145[6] = -(pcVar1[6] == auVar60[6]);
          auVar145[7] = -(pcVar1[7] == auVar60[7]);
          auVar145[8] = -(pcVar1[8] == auVar60[0]);
          auVar145[9] = -(pcVar1[9] == auVar60[1]);
          auVar145[10] = -(pcVar1[10] == auVar60[2]);
          auVar145[0xb] = -(pcVar1[0xb] == auVar60[3]);
          auVar145[0xc] = -(pcVar1[0xc] == auVar60[4]);
          auVar145[0xd] = -(pcVar1[0xd] == auVar60[5]);
          auVar145[0xe] = -(pcVar1[0xe] == auVar60[6]);
          auVar145[0xf] = -(pcVar1[0xf] == auVar60[7]);
          uVar43 = (ushort)(SUB161(auVar145 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar145 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar145 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar145 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar145 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar145 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar145 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar145 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar145 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar145 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar145 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar145 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar145 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar145 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar145 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar145[0xf] >> 7) << 0xf;
          uVar45 = (uint)uVar43;
          while (uVar43 != 0) {
            uVar31 = 0;
            for (uVar8 = uVar45; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
              uVar31 = uVar31 + 1;
            }
            pauVar38 = pauVar27 + (uVar31 + uVar33 & uVar23) * -2;
            if (pauVar38[-2][0] == '\x1d') goto LAB_140a4037c;
            uVar43 = (ushort)(uVar45 - 1) & (ushort)uVar45;
            uVar45 = CONCAT22((short)(uVar45 - 1 >> 0x10),uVar43);
          }
          auVar95[0] = -(*pcVar1 == cVar161);
          auVar95[1] = -(pcVar1[1] == cVar162);
          auVar95[2] = -(pcVar1[2] == cVar163);
          auVar95[3] = -(pcVar1[3] == cVar164);
          auVar95[4] = -(pcVar1[4] == cVar165);
          auVar95[5] = -(pcVar1[5] == cVar166);
          auVar95[6] = -(pcVar1[6] == cVar167);
          auVar95[7] = -(pcVar1[7] == cVar168);
          auVar95[8] = -(pcVar1[8] == cVar169);
          auVar95[9] = -(pcVar1[9] == cVar170);
          auVar95[10] = -(pcVar1[10] == cVar171);
          auVar95[0xb] = -(pcVar1[0xb] == cVar172);
          auVar95[0xc] = -(pcVar1[0xc] == cVar173);
          auVar95[0xd] = -(pcVar1[0xd] == cVar174);
          auVar95[0xe] = -(pcVar1[0xe] == cVar175);
          auVar95[0xf] = -(pcVar1[0xf] == cVar176);
          uVar43 = (ushort)(SUB161(auVar95 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar95 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar95 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar95 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar95 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar95 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar95 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar95 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar95 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar95 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar95 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar95 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar95 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar95 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar95 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar95[0xf] >> 7) << 0xf;
          if (uVar43 != 0) break;
          uVar33 = uVar33 + lVar39 + 0x10;
          lVar39 = lVar39 + 0x10;
        }
        if (*(longlong *)(piVar5 + 0x60) == 0) {
          pdb_142d98ac0(piVar5 + 0x5c,1,piVar5 + 100,CONCAT71((uint7)(byte)(uVar43 >> 8),1));
          pauVar27 = *(undefined1 (**) [16])(piVar5 + 0x5c);
          uVar23 = *(ulonglong *)(piVar5 + 0x5e);
        }
        uVar25 = uVar25 & uVar23;
        auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
        uVar43 = (ushort)(SUB161(auVar60 >> 7,0) & 1) | (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1
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
                 (ushort)(byte)(auVar60[0xf] >> 7) << 0xf;
        uVar45 = (uint)uVar43;
        if (uVar43 == 0) {
          lVar39 = 0x10;
          do {
            uVar25 = uVar25 + lVar39 & uVar23;
            auVar60 = *(undefined1 (*) [16])(*pauVar27 + uVar25);
            lVar39 = lVar39 + 0x10;
            uVar45 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                   (ushort)(byte)(auVar60[0xf] >> 7) << 0xf);
          } while (uVar45 == 0);
        }
        uVar31 = 0;
        for (; (uVar45 & 1) == 0; uVar45 = uVar45 >> 1 | 0x80000000) {
          uVar31 = uVar31 + 1;
        }
        uVar33 = uVar31 + uVar25 & uVar23;
        bVar47 = (*pauVar27)[uVar33];
        if (-1 < (char)bVar47) {
          auVar60 = *pauVar27;
          uVar45 = 0;
          for (uVar31 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
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
                                      (ushort)(byte)(auVar60[0xf] >> 7) << 0xf); (uVar31 & 1) == 0;
              uVar31 = uVar31 >> 1 | 0x80000000) {
            uVar45 = uVar45 + 1;
          }
          uVar33 = (ulonglong)uVar45;
          bVar47 = (*pauVar27)[uVar33];
        }
        bVar18 = bVar18 >> 1;
        (*pauVar27)[uVar33] = bVar18;
        pauVar27[1][uVar33 - 0x10 & uVar23] = bVar18;
        pauVar38 = pauVar27 + uVar33 * -2;
        pauVar27[uVar33 * -2 + -2][0] = 0x1d;
        *(undefined8 *)(pauVar38[-2] + 8) = 0;
        *(undefined8 *)pauVar38[-1] = 1;
        *(undefined8 *)(pauVar38[-1] + 8) = 0;
        auVar98._8_4_ = uVar3;
        auVar98._0_8_ = (ulonglong)bVar47 & 0xffffffffffffff01;
        auVar98._12_4_ = uVar12;
        *(ulonglong *)(piVar5 + 0x60) =
             *(longlong *)(piVar5 + 0x60) - ((ulonglong)bVar47 & 0xffffffffffffff01);
        *(longlong *)(piVar5 + 0x62) = *(longlong *)(piVar5 + 0x62) - auVar98._8_8_;
LAB_140a4037c:
        lVar39 = *(longlong *)(pauVar38[-1] + 8);
        if (lVar39 == *(longlong *)(pauVar38[-2] + 8)) {
          pdb_142d91f60(pauVar38[-2] + 8);
        }
        *(undefined2 *)(*(longlong *)pauVar38[-1] + lVar39 * 2) = 1;
        *(longlong *)(pauVar38[-1] + 8) = lVar39 + 1;
      }
    }
    pbVar22 = pbVar22 + 8;
  } while (pbVar22 != pbStack_170);
  pub_1406abac0(pbStack_130,uStack_178,8);
  bVar18 = (byte)plStack_138;
  puVar4 = (ulonglong *)*param_6;
  lVar39 = param_6[1];
  uVar23 = *puVar4;
  puVar40 = (ulonglong *)0x0;
  puVar42 = (ulonglong *)(uVar23 - *(ulonglong *)(lVar39 + 0x18));
  if (uVar23 < *(ulonglong *)(lVar39 + 0x18)) {
    puVar42 = puVar40;
  }
  puVar35 = (ulonglong *)(uVar23 - *(ulonglong *)(lVar39 + 0x38));
  if (uVar23 < *(ulonglong *)(lVar39 + 0x38)) {
    puVar35 = puVar40;
  }
  puStack_168 = *(ulonglong **)(lVar39 + 0x10);
  puStack_140 = *(ulonglong **)(lVar39 + 0x30);
  puVar44 = (ulonglong *)((longlong)puStack_140 - (longlong)puVar35);
  if (puStack_140 < puVar35) {
    puVar44 = puVar40;
  }
  puVar46 = (ulonglong *)((longlong)puStack_168 - (longlong)puVar42);
  if (puStack_168 < puVar42) {
    puVar46 = puVar40;
  }
  bVar47 = *(byte *)((longlong)puStack_120 + 0x3c);
  pbStack_170 = (byte *)CONCAT71(pbStack_170._1_7_,bVar47);
  uVar23 = *(ulonglong *)(lVar39 + 0x40);
  lVar26 = *(longlong *)(lVar39 + 8);
  lVar39 = *(longlong *)(lVar39 + 0x28);
  *puVar4 = (uVar23 - (longlong)puVar44) - (longlong)puVar46;
  fVar50 = 0.0;
  if (puStack_168 >= puVar42 &&
      (ulonglong *)((longlong)puStack_168 - (longlong)puVar42) != (ulonglong *)0x0 ||
      puStack_140 >= puVar35 &&
      (ulonglong *)((longlong)puStack_140 - (longlong)puVar35) != (ulonglong *)0x0) {
    lVar39 = lVar39 + (longlong)puVar35 * 0x10;
    lVar26 = lVar26 + (longlong)puVar42 * 0x10;
    if (puStack_168 < puVar42) {
      lVar26 = 8;
    }
    lVar41 = 0;
    if (puVar42 < puStack_168) {
      lVar41 = lVar26 + -0x10 + (longlong)puVar46 * 0x10;
    }
    if (puStack_140 < puVar35) {
      lVar39 = 8;
    }
    lVar39 = lVar39 + -0x10 + (longlong)puVar44 * 0x10;
    if (puStack_140 <= puVar35) {
      lVar39 = lVar41;
    }
    *puVar4 = uVar23;
    fVar49 = (float)*(undefined8 *)(lVar39 + 8);
    fVar50 = (float)((ulonglong)*(undefined8 *)(lVar39 + 8) >> 0x20);
    fVar50 = SQRT(fVar50 * fVar50 + fVar49 * fVar49);
  }
  bVar28 = (bVar18 ^ 1) & bVar47;
  if (((bVar18 ^ 1 | bVar47) & 1) == 0) {
    *(undefined4 *)(puStack_120 + 7) = 0;
    if ((bVar28 & 1) != 0) goto LAB_140a429a6;
LAB_140a42b18:
    bVar19 = false;
  }
  else {
    if (((ulonglong)plStack_138 & 1) != 0) {
      *(float *)(puStack_120 + 7) = fVar50 + *(float *)(puStack_120 + 7);
    }
    if ((bVar28 & 1) == 0) goto LAB_140a42b18;
LAB_140a429a6:
    bVar19 = *(float *)(puStack_120 + 7) <= _DAT_142e3788c &&
             _DAT_142e3788c != *(float *)(puStack_120 + 7);
  }
  *(byte *)(lVar37 + 0x8d) = *(byte *)(lVar37 + 0x8d) | bVar19;
  *(byte *)(lVar37 + 0x8e) = *(byte *)(lVar37 + 0x8e) | bVar18;
  *(byte *)((longlong)puStack_120 + 0x3c) = bVar18;
  if ((uStack_180 & 1) != 0) {
    *puStack_e0 = uStack_d8;
    piVar5[0] = 1;
    piVar5[1] = 0;
    *(longlong *)(piVar5 + 2) = lStack_160;
  }
LAB_140a42b56:
  LOCK();
  *plStack_158 = *plStack_158 + -1;
  UNLOCK();
  if (*plStack_158 == 0) {
    pdb_140cb1c10(&plStack_158);
  }
  return;
}

