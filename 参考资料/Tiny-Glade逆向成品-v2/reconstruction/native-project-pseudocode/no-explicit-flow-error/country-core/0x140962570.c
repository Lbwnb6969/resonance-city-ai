// VA 0x140962570, PDB extent 7014 bytes
// country_core::render::nani::maintenance::nani_frame_boundary_maintenance
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/maintenance.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::render::nani::maintenance::nani_frame_boundary_maintenance
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/maintenance.rs
   Extent: 7014 */

void pdb_140962570(longlong param_1,ulonglong param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte *pbVar3;
  char *pcVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  undefined8 **ppuVar12;
  code *pcVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  uint uVar32;
  char cVar33;
  uint uVar34;
  longlong lVar35;
  ulonglong uVar36;
  longlong *plVar37;
  longlong lVar38;
  byte *pbVar39;
  undefined8 *puVar40;
  int *piVar41;
  undefined4 *puVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  ulonglong uVar45;
  uint *puVar46;
  undefined *puVar47;
  longlong lVar48;
  longlong lVar49;
  int iVar50;
  longlong lVar51;
  ushort uVar52;
  ulonglong uVar53;
  ulonglong in_R11;
  undefined *puVar54;
  undefined *puVar55;
  ulonglong uVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  uint uVar70;
  uint uVar78;
  uint uVar79;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  uint uVar80;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
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
  char unaff_XMM6_Ba;
  uint uVar92;
  char unaff_XMM6_Bb;
  char unaff_XMM6_Bc;
  char unaff_XMM6_Bd;
  char unaff_XMM6_Be;
  uint uVar96;
  char unaff_XMM6_Bf;
  char unaff_XMM6_Bg;
  char unaff_XMM6_Bh;
  char unaff_XMM6_Bi;
  uint uVar97;
  char unaff_XMM6_Bj;
  char unaff_XMM6_Bk;
  char unaff_XMM6_Bl;
  char unaff_XMM6_Bm;
  char unaff_XMM6_Bn;
  char unaff_XMM6_Bo;
  char unaff_XMM6_Bp;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  uint uVar98;
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
  char unaff_XMM8_Ba;
  char cVar99;
  char unaff_XMM8_Bb;
  char cVar100;
  char unaff_XMM8_Bc;
  char cVar101;
  char unaff_XMM8_Bd;
  char cVar102;
  char unaff_XMM8_Be;
  char cVar103;
  char unaff_XMM8_Bf;
  char cVar104;
  char unaff_XMM8_Bg;
  char cVar105;
  char unaff_XMM8_Bh;
  char cVar106;
  char unaff_XMM8_Bi;
  char cVar107;
  char unaff_XMM8_Bj;
  char cVar108;
  char unaff_XMM8_Bk;
  char cVar109;
  char unaff_XMM8_Bl;
  char cVar110;
  char unaff_XMM8_Bm;
  char cVar111;
  char unaff_XMM8_Bn;
  char cVar112;
  char unaff_XMM8_Bo;
  char cVar113;
  char unaff_XMM8_Bp;
  char cVar114;
  char unaff_XMM9_Ba;
  char cVar115;
  char unaff_XMM9_Bb;
  char cVar116;
  char unaff_XMM9_Bc;
  char cVar117;
  char unaff_XMM9_Bd;
  char cVar118;
  char unaff_XMM9_Be;
  char cVar119;
  char unaff_XMM9_Bf;
  char cVar120;
  char unaff_XMM9_Bg;
  char cVar121;
  char unaff_XMM9_Bh;
  char cVar122;
  char unaff_XMM9_Bi;
  char cVar123;
  char unaff_XMM9_Bj;
  char cVar124;
  char unaff_XMM9_Bk;
  char cVar125;
  char unaff_XMM9_Bl;
  char cVar126;
  char unaff_XMM9_Bm;
  char cVar127;
  char unaff_XMM9_Bn;
  char cVar128;
  char unaff_XMM9_Bo;
  char cVar129;
  char unaff_XMM9_Bp;
  char cVar130;
  undefined8 **ppuStack_278;
  undefined8 **ppuStack_270;
  longlong *plStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  longlong *plStack_250;
  longlong *plStack_248;
  undefined8 uStack_240;
  undefined8 *puStack_148;
  longlong lStack_140;
  longlong *plStack_138;
  longlong *plStack_130;
  longlong lStack_128;
  longlong lStack_120;
  ulonglong uStack_118;
  byte *pbStack_110;
  longlong lStack_108;
  longlong lStack_100;
  undefined8 uStack_f8;
  longlong lStack_f0;
  undefined8 **ppuStack_e8;
  longlong lStack_e0;
  undefined8 *puStack_d8;
  byte bStack_d0;
  undefined7 uStack_cf;
  undefined8 *puStack_c8;
  longlong *plStack_c0;
  longlong lStack_b8;
  longlong *plStack_b0;
  char cStack_a1;
  longlong *plStack_a0;
  undefined1 uStack_92;
  undefined1 uStack_91;
  undefined8 uStack_90;
  
  uStack_90 = 0xfffffffffffffffe;
  cVar33 = pdb_140e94b40();
  if (cVar33 == '\0') {
    lStack_100 = 0;
    lVar35 = *(longlong *)(param_1 + 0x88);
    cVar99 = DAT_142e33df0;
    cVar100 = UNK_142e33df1;
    cVar101 = UNK_142e33df2;
    cVar102 = UNK_142e33df3;
    cVar103 = UNK_142e33df4;
    cVar104 = UNK_142e33df5;
    cVar105 = UNK_142e33df6;
    cVar106 = UNK_142e33df7;
    cVar107 = UNK_142e33df8;
    cVar108 = UNK_142e33df9;
    cVar109 = UNK_142e33dfa;
    cVar110 = UNK_142e33dfb;
    cVar111 = UNK_142e33dfc;
    cVar112 = UNK_142e33dfd;
    cVar113 = UNK_142e33dfe;
    cVar114 = UNK_142e33dff;
    cVar115 = DAT_142e34190;
    cVar116 = UNK_142e34191;
    cVar117 = UNK_142e34192;
    cVar118 = UNK_142e34193;
    cVar119 = UNK_142e34194;
    cVar120 = UNK_142e34195;
    cVar121 = UNK_142e34196;
    cVar122 = UNK_142e34197;
    cVar123 = UNK_142e34198;
    cVar124 = UNK_142e34199;
    cVar125 = UNK_142e3419a;
    cVar126 = UNK_142e3419b;
    cVar127 = UNK_142e3419c;
    cVar128 = UNK_142e3419d;
    cVar129 = UNK_142e3419e;
    cVar130 = UNK_142e3419f;
    plVar37 = plStack_c0;
joined_r0x0001409626c7:
    DAT_142e33df0 = cVar99;
    UNK_142e33df1 = cVar100;
    UNK_142e33df2 = cVar101;
    UNK_142e33df3 = cVar102;
    UNK_142e33df4 = cVar103;
    UNK_142e33df5 = cVar104;
    UNK_142e33df6 = cVar105;
    UNK_142e33df7 = cVar106;
    UNK_142e33df8 = cVar107;
    UNK_142e33df9 = cVar108;
    UNK_142e33dfa = cVar109;
    UNK_142e33dfb = cVar110;
    UNK_142e33dfc = cVar111;
    UNK_142e33dfd = cVar112;
    UNK_142e33dfe = cVar113;
    UNK_142e33dff = cVar114;
    DAT_142e34190 = cVar115;
    UNK_142e34191 = cVar116;
    UNK_142e34192 = cVar117;
    UNK_142e34193 = cVar118;
    UNK_142e34194 = cVar119;
    UNK_142e34195 = cVar120;
    UNK_142e34196 = cVar121;
    UNK_142e34197 = cVar122;
    UNK_142e34198 = cVar123;
    UNK_142e34199 = cVar124;
    UNK_142e3419a = cVar125;
    UNK_142e3419b = cVar126;
    UNK_142e3419c = cVar127;
    UNK_142e3419d = cVar128;
    UNK_142e3419e = cVar129;
    UNK_142e3419f = cVar130;
    if (lVar35 != 0) {
      lVar35 = *(longlong *)(param_1 + 0x70);
      uVar45 = *(ulonglong *)(param_1 + 0x78);
      uVar36 = 0x10a3366b2ce2bcb7;
      lVar48 = 0;
      while( true ) {
        uVar36 = uVar36 & uVar45;
        pcVar2 = (char *)(lVar35 + uVar36);
        auVar64[0] = -(*pcVar2 == cVar99);
        auVar64[1] = -(pcVar2[1] == cVar100);
        auVar64[2] = -(pcVar2[2] == cVar101);
        auVar64[3] = -(pcVar2[3] == cVar102);
        auVar64[4] = -(pcVar2[4] == cVar103);
        auVar64[5] = -(pcVar2[5] == cVar104);
        auVar64[6] = -(pcVar2[6] == cVar105);
        auVar64[7] = -(pcVar2[7] == cVar106);
        auVar64[8] = -(pcVar2[8] == cVar107);
        auVar64[9] = -(pcVar2[9] == cVar108);
        auVar64[10] = -(pcVar2[10] == cVar109);
        auVar64[0xb] = -(pcVar2[0xb] == cVar110);
        auVar64[0xc] = -(pcVar2[0xc] == cVar111);
        auVar64[0xd] = -(pcVar2[0xd] == cVar112);
        auVar64[0xe] = -(pcVar2[0xe] == cVar113);
        auVar64[0xf] = -(pcVar2[0xf] == cVar114);
        uVar52 = (ushort)(SUB161(auVar64 >> 7,0) & 1) | (ushort)(SUB161(auVar64 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar64 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar64 >> 0x77,0) & 1) << 0xe | (ushort)(auVar64[0xf] >> 7) << 0xf
        ;
        uVar34 = (uint)uVar52;
        while (unaff_XMM8_Ba = cVar99, unaff_XMM8_Bb = cVar100, unaff_XMM8_Bc = cVar101,
              unaff_XMM8_Bd = cVar102, unaff_XMM8_Be = cVar103, unaff_XMM8_Bf = cVar104,
              unaff_XMM8_Bg = cVar105, unaff_XMM8_Bh = cVar106, unaff_XMM8_Bi = cVar107,
              unaff_XMM8_Bj = cVar108, unaff_XMM8_Bk = cVar109, unaff_XMM8_Bl = cVar110,
              unaff_XMM8_Bm = cVar111, unaff_XMM8_Bn = cVar112, unaff_XMM8_Bo = cVar113,
              unaff_XMM8_Bp = cVar114, unaff_XMM9_Ba = cVar115, unaff_XMM9_Bb = cVar116,
              unaff_XMM9_Bc = cVar117, unaff_XMM9_Bd = cVar118, unaff_XMM9_Be = cVar119,
              unaff_XMM9_Bf = cVar120, unaff_XMM9_Bg = cVar121, unaff_XMM9_Bh = cVar122,
              unaff_XMM9_Bi = cVar123, unaff_XMM9_Bj = cVar124, unaff_XMM9_Bk = cVar125,
              unaff_XMM9_Bl = cVar126, unaff_XMM9_Bm = cVar127, unaff_XMM9_Bn = cVar128,
              unaff_XMM9_Bo = cVar129, unaff_XMM9_Bp = cVar130, uVar52 != 0) {
          uVar14 = 0;
          for (uVar15 = uVar34; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
            uVar14 = uVar14 + 1;
          }
          uVar53 = uVar14 + uVar36 & uVar45;
          pcVar4 = (char *)(lVar35 + -0x18 + uVar53 * -0x18);
          auVar65[0] = -(*pcVar4 == cVar115);
          auVar65[1] = -(pcVar4[1] == cVar116);
          auVar65[2] = -(pcVar4[2] == cVar117);
          auVar65[3] = -(pcVar4[3] == cVar118);
          auVar65[4] = -(pcVar4[4] == cVar119);
          auVar65[5] = -(pcVar4[5] == cVar120);
          auVar65[6] = -(pcVar4[6] == cVar121);
          auVar65[7] = -(pcVar4[7] == cVar122);
          auVar65[8] = -(pcVar4[8] == cVar123);
          auVar65[9] = -(pcVar4[9] == cVar124);
          auVar65[10] = -(pcVar4[10] == cVar125);
          auVar65[0xb] = -(pcVar4[0xb] == cVar126);
          auVar65[0xc] = -(pcVar4[0xc] == cVar127);
          auVar65[0xd] = -(pcVar4[0xd] == cVar128);
          auVar65[0xe] = -(pcVar4[0xe] == cVar129);
          auVar65[0xf] = -(pcVar4[0xf] == cVar130);
          uVar52 = (ushort)(SUB161(auVar65 >> 7,0) & 1) |
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
          in_R11 = (ulonglong)uVar52;
          if (uVar52 == 0xffff) {
            uVar36 = *(ulonglong *)(lVar35 + uVar53 * -0x18 + -8);
            if (*(ulonglong *)(param_1 + 0x210) <= uVar36) goto LAB_140962a3f;
            uVar36 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar36 * 8);
            if ((uVar36 == 0) ||
               (lVar48 = *(longlong *)(param_1 + 0x1d8),
               *(longlong *)(lVar48 + 0x20 + ~uVar36 * 0x40) == 0)) goto LAB_140962a3f;
            uVar36 = 0x89344017c8ec8a8d;
            in_R11 = 0;
            goto LAB_140962876;
          }
          uVar52 = (ushort)(uVar34 - 1) & (ushort)uVar34;
          uVar34 = CONCAT22((short)(uVar34 - 1 >> 0x10),uVar52);
        }
        auVar58[0] = -(*pcVar2 == -1);
        auVar58[1] = -(pcVar2[1] == -1);
        auVar58[2] = -(pcVar2[2] == -1);
        auVar58[3] = -(pcVar2[3] == -1);
        auVar58[4] = -(pcVar2[4] == -1);
        auVar58[5] = -(pcVar2[5] == -1);
        auVar58[6] = -(pcVar2[6] == -1);
        auVar58[7] = -(pcVar2[7] == -1);
        auVar58[8] = -(pcVar2[8] == -1);
        auVar58[9] = -(pcVar2[9] == -1);
        auVar58[10] = -(pcVar2[10] == -1);
        auVar58[0xb] = -(pcVar2[0xb] == -1);
        auVar58[0xc] = -(pcVar2[0xc] == -1);
        auVar58[0xd] = -(pcVar2[0xd] == -1);
        auVar58[0xe] = -(pcVar2[0xe] == -1);
        auVar58[0xf] = -(pcVar2[0xf] == -1);
        if ((((((((((((((((SUB161(auVar58 >> 7,0) & 1) != 0 || (SUB161(auVar58 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar58 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar58 >> 0x1f,0) & 1) != 0) || (SUB161(auVar58 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar58 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar58 >> 0x37,0) & 1) != 0) || (SUB161(auVar58 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar58 >> 0x47,0) & 1) != 0) || (SUB161(auVar58 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar58 >> 0x57,0) & 1) != 0) || (SUB161(auVar58 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar58 >> 0x67,0) & 1) != 0) || (SUB161(auVar58 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar58 >> 0x77,0) & 1) != 0) || auVar58[0xf] < '\0') break;
        uVar36 = uVar36 + lVar48 + 0x10;
        lVar48 = lVar48 + 0x10;
      }
    }
LAB_140962a3f:
    if (cVar33 == '\0') {
      return;
    }
    plStack_c0 = plVar37;
    plVar37 = (longlong *)pdb_140e97000();
    if ((char)plVar37[0xd] != '\x01') {
      uVar36 = 0;
      plVar37 = (longlong *)pdb_142d8ec20(plVar37);
      if (plVar37 == (longlong *)0x0) goto LAB_140962f70;
    }
    cVar99 = unaff_XMM8_Ba;
    cVar100 = unaff_XMM8_Bb;
    cVar101 = unaff_XMM8_Bc;
    cVar102 = unaff_XMM8_Bd;
    cVar103 = unaff_XMM8_Be;
    cVar104 = unaff_XMM8_Bf;
    cVar105 = unaff_XMM8_Bg;
    cVar106 = unaff_XMM8_Bh;
    cVar107 = unaff_XMM8_Bi;
    cVar108 = unaff_XMM8_Bj;
    cVar109 = unaff_XMM8_Bk;
    cVar110 = unaff_XMM8_Bl;
    cVar111 = unaff_XMM8_Bm;
    cVar112 = unaff_XMM8_Bn;
    cVar113 = unaff_XMM8_Bo;
    cVar114 = unaff_XMM8_Bp;
    cVar115 = unaff_XMM9_Ba;
    cVar116 = unaff_XMM9_Bb;
    cVar117 = unaff_XMM9_Bc;
    cVar118 = unaff_XMM9_Bd;
    cVar119 = unaff_XMM9_Be;
    cVar120 = unaff_XMM9_Bf;
    cVar121 = unaff_XMM9_Bg;
    cVar122 = unaff_XMM9_Bh;
    cVar123 = unaff_XMM9_Bi;
    cVar124 = unaff_XMM9_Bj;
    cVar125 = unaff_XMM9_Bk;
    cVar126 = unaff_XMM9_Bl;
    cVar127 = unaff_XMM9_Bm;
    cVar128 = unaff_XMM9_Bn;
    cVar129 = unaff_XMM9_Bo;
    cVar130 = unaff_XMM9_Bp;
    if (*plVar37 == 0) {
      *plVar37 = -1;
      plStack_b0 = plVar37;
      pdb_140e95370(plVar37 + 1,uStack_f8);
      *plStack_b0 = *plStack_b0 + 1;
      return;
    }
  }
  else {
    uVar45 = 0x48;
    lVar35 = pdb_140964280(0x48);
    puVar54 = &UNK_143027708;
    if (lVar35 == 1) {
      if (0x48 < param_2) {
        pdb_142dc8070(&UNK_143027708,0x48,0,param_2,&UNK_1430277d8);
LAB_140963ba8:
        pdb_142dc8070(&UNK_143027708,0x48);
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      uVar36 = pdb_140964280(param_2);
      if ((uVar36 & 1) != 0) {
        if (0x48 < param_2 + 2) goto LAB_140963ba8;
        uVar45 = 0x46 - param_2;
        puVar54 = &UNK_14302770a + param_2;
      }
    }
    puVar47 = &UNK_143027522;
    puVar55 = &UNK_1430274f0;
    do {
      bVar7 = puVar47[-1];
      uVar34 = (uint)(char)bVar7;
      if ((char)bVar7 < '\0') {
        bVar8 = puVar47[-2];
        if ((char)bVar8 < -0x40) {
          bVar9 = puVar47[-3];
          if ((char)bVar9 < -0x40) {
            pbVar1 = puVar47 + -4;
            puVar47 = puVar47 + -4;
            uVar34 = bVar9 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar47 = puVar47 + -3;
            uVar34 = bVar9 & 0xf;
          }
          uVar34 = bVar8 & 0x3f | uVar34 << 6;
        }
        else {
          puVar47 = puVar47 + -2;
          uVar34 = bVar8 & 0x1f;
        }
        uVar34 = (uint)(bVar7 & 0x3f) | uVar34 << 6;
        if (uVar34 != 0x5c) goto LAB_1409626a4;
LAB_1409626d2:
        puVar55 = puVar47 + -0x1430274ef;
        if ((undefined *)0x32 < puVar55) {
          pdb_142dc8070(&UNK_1430274f0,0x32,puVar55,0x32,&UNK_1430277b8);
LAB_140963b57:
          uVar44 = 0x88;
          uVar43 = 0;
LAB_140963b76:
          pdb_142dc8420(uVar43,uVar44,uVar45,&UNK_1430274d8);
          plVar37 = plStack_c0;
LAB_140963b86:
          plStack_c0 = plVar37;
                    /* WARNING: Does not return */
          pcVar13 = (code *)invalidInstructionException();
          (*pcVar13)();
        }
        lVar35 = 0x32 - (longlong)puVar55;
        puVar55 = puVar47 + 1;
        goto LAB_1409626f5;
      }
      puVar47 = puVar47 + -1;
      if (uVar34 == 0x5c) goto LAB_1409626d2;
LAB_1409626a4:
      if (uVar34 == 0x2f) goto LAB_1409626d2;
    } while (puVar47 != &UNK_1430274f0);
    lVar35 = 0x32;
LAB_1409626f5:
    plVar37 = (longlong *)pdb_140e97000();
    if ((char)plVar37[0xd] != '\x01') {
      uVar36 = 0;
      plVar37 = (longlong *)pdb_142d8ec20(plVar37);
      if (plVar37 != (longlong *)0x0) goto LAB_140962704;
LAB_140962f70:
      puVar54 = &UNK_143326860;
      lVar35 = pdb_142dc7890();
LAB_140962f7c:
      uVar45 = *(ulonglong *)(param_1 + 0x210);
      if (*(ulonglong *)(puVar54 + in_R11 * 8 + -8) < uVar45) {
        lVar48 = *(longlong *)(param_1 + 0x208);
        uVar53 = *(ulonglong *)(lVar48 + *(ulonglong *)(puVar54 + in_R11 * 8 + -8) * 8);
        if (uVar53 != 0) {
          lVar49 = *(longlong *)(param_1 + 0x1d8);
          lVar51 = ~uVar53 * 0x40;
          if (*(longlong *)(lVar49 + 0x20 + lVar51) != 0) {
            uStack_260 = *(undefined8 ***)(lVar51 + lVar49 + 0x10);
            uVar53 = 0x1d6a82b468dfb8a2;
            lVar51 = 0;
            do {
              uVar53 = uVar53 & uVar36;
              pcVar2 = puVar54 + uVar53;
              auVar83[0] = -(*pcVar2 == DAT_142e34ec0);
              auVar83[1] = -(pcVar2[1] == DAT_142e34ec0._1_1_);
              auVar83[2] = -(pcVar2[2] == DAT_142e34ec0._2_1_);
              auVar83[3] = -(pcVar2[3] == DAT_142e34ec0._3_1_);
              auVar83[4] = -(pcVar2[4] == DAT_142e34ec0._4_1_);
              auVar83[5] = -(pcVar2[5] == DAT_142e34ec0._5_1_);
              auVar83[6] = -(pcVar2[6] == DAT_142e34ec0._6_1_);
              auVar83[7] = -(pcVar2[7] == DAT_142e34ec0._7_1_);
              auVar83[8] = -(pcVar2[8] == DAT_142e34ec0._8_1_);
              auVar83[9] = -(pcVar2[9] == DAT_142e34ec0._9_1_);
              auVar83[10] = -(pcVar2[10] == DAT_142e34ec0._10_1_);
              auVar83[0xb] = -(pcVar2[0xb] == DAT_142e34ec0._11_1_);
              auVar83[0xc] = -(pcVar2[0xc] == DAT_142e34ec0._12_1_);
              auVar83[0xd] = -(pcVar2[0xd] == DAT_142e34ec0._13_1_);
              auVar83[0xe] = -(pcVar2[0xe] == DAT_142e34ec0._14_1_);
              auVar83[0xf] = -(pcVar2[0xf] == DAT_142e34ec0._15_1_);
              uVar52 = (ushort)(SUB161(auVar83 >> 7,0) & 1) |
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
              uVar34 = (uint)uVar52;
              while (uVar52 != 0) {
                uVar14 = 0;
                for (uVar15 = uVar34; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
                  uVar14 = uVar14 + 1;
                }
                uVar56 = uVar14 + uVar53 & uVar36;
                pcVar4 = puVar54 + uVar56 * -0x18 + -0x18;
                auVar84[0] = -(*pcVar4 == DAT_142e60e60);
                auVar84[1] = -(pcVar4[1] == DAT_142e60e60._1_1_);
                auVar84[2] = -(pcVar4[2] == DAT_142e60e60._2_1_);
                auVar84[3] = -(pcVar4[3] == DAT_142e60e60._3_1_);
                auVar84[4] = -(pcVar4[4] == DAT_142e60e60._4_1_);
                auVar84[5] = -(pcVar4[5] == DAT_142e60e60._5_1_);
                auVar84[6] = -(pcVar4[6] == DAT_142e60e60._6_1_);
                auVar84[7] = -(pcVar4[7] == DAT_142e60e60._7_1_);
                auVar84[8] = -(pcVar4[8] == DAT_142e60e60._8_1_);
                auVar84[9] = -(pcVar4[9] == DAT_142e60e60._9_1_);
                auVar84[10] = -(pcVar4[10] == DAT_142e60e60._10_1_);
                auVar84[0xb] = -(pcVar4[0xb] == DAT_142e60e60._11_1_);
                auVar84[0xc] = -(pcVar4[0xc] == DAT_142e60e60._12_1_);
                auVar84[0xd] = -(pcVar4[0xd] == DAT_142e60e60._13_1_);
                auVar84[0xe] = -(pcVar4[0xe] == DAT_142e60e60._14_1_);
                auVar84[0xf] = -(pcVar4[0xf] == DAT_142e60e60._15_1_);
                if ((ushort)((ushort)(SUB161(auVar84 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar84 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar84 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar84 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar84 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar84 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar84 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar84 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar84 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar84 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar84 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar84 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar84 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar84 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar84 >> 0x77,0) & 1) << 0xe |
                            (ushort)(auVar84[0xf] >> 7) << 0xf) == 0xffff) {
                  if (((uVar45 <= *(ulonglong *)(puVar54 + uVar56 * -0x18 + -8)) ||
                      (uVar53 = *(ulonglong *)
                                 (lVar48 + *(ulonglong *)(puVar54 + uVar56 * -0x18 + -8) * 8),
                      uVar53 == 0)) ||
                     (lVar51 = ~uVar53 * 0x40, *(longlong *)(lVar49 + 0x20 + lVar51) == 0))
                  goto LAB_1409636ed;
                  plStack_250 = *(longlong **)(lVar51 + lVar49 + 0x10);
                  uVar53 = 0x7057b4358e925fdb;
                  lVar51 = 0;
                  goto LAB_14096358a;
                }
                uVar52 = (ushort)(uVar34 - 1) & (ushort)uVar34;
                uVar34 = CONCAT22((short)(uVar34 - 1 >> 0x10),uVar52);
              }
              auVar72[0] = -(*pcVar2 == -1);
              auVar72[1] = -(pcVar2[1] == -1);
              auVar72[2] = -(pcVar2[2] == -1);
              auVar72[3] = -(pcVar2[3] == -1);
              auVar72[4] = -(pcVar2[4] == -1);
              auVar72[5] = -(pcVar2[5] == -1);
              auVar72[6] = -(pcVar2[6] == -1);
              auVar72[7] = -(pcVar2[7] == -1);
              auVar72[8] = -(pcVar2[8] == -1);
              auVar72[9] = -(pcVar2[9] == -1);
              auVar72[10] = -(pcVar2[10] == -1);
              auVar72[0xb] = -(pcVar2[0xb] == -1);
              auVar72[0xc] = -(pcVar2[0xc] == -1);
              auVar72[0xd] = -(pcVar2[0xd] == -1);
              auVar72[0xe] = -(pcVar2[0xe] == -1);
              auVar72[0xf] = -(pcVar2[0xf] == -1);
              if ((((((((((((((((SUB161(auVar72 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar72 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar72 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar72 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar72 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar72 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar72 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar72 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar72 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar72 >> 0x4f,0) & 1) != 0) || (SUB161(auVar72 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar72 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar72 >> 0x67,0) & 1) != 0) || (SUB161(auVar72 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar72 >> 0x77,0) & 1) != 0) || auVar72[0xf] < '\0') {
LAB_1409636ed:
                ppuStack_278 = (undefined8 **)&uStack_91;
                ppuStack_270 = (undefined8 **)pdb_140f33ec0;
                    /* WARNING: Subroutine does not return */
                pdb_142dc83d0(&UNK_143027898,&ppuStack_278,&UNK_143027460);
              }
              uVar53 = uVar53 + lVar51 + 0x10;
              lVar51 = lVar51 + 0x10;
            } while( true );
          }
        }
      }
      goto LAB_1409635fb;
    }
LAB_140962704:
    cVar99 = unaff_XMM8_Ba;
    cVar100 = unaff_XMM8_Bb;
    cVar101 = unaff_XMM8_Bc;
    cVar102 = unaff_XMM8_Bd;
    cVar103 = unaff_XMM8_Be;
    cVar104 = unaff_XMM8_Bf;
    cVar105 = unaff_XMM8_Bg;
    cVar106 = unaff_XMM8_Bh;
    cVar107 = unaff_XMM8_Bi;
    cVar108 = unaff_XMM8_Bj;
    cVar109 = unaff_XMM8_Bk;
    cVar110 = unaff_XMM8_Bl;
    cVar111 = unaff_XMM8_Bm;
    cVar112 = unaff_XMM8_Bn;
    cVar113 = unaff_XMM8_Bo;
    cVar114 = unaff_XMM8_Bp;
    cVar115 = unaff_XMM9_Ba;
    cVar116 = unaff_XMM9_Bb;
    cVar117 = unaff_XMM9_Bc;
    cVar118 = unaff_XMM9_Bd;
    cVar119 = unaff_XMM9_Be;
    cVar120 = unaff_XMM9_Bf;
    cVar121 = unaff_XMM9_Bg;
    cVar122 = unaff_XMM9_Bh;
    cVar123 = unaff_XMM9_Bi;
    cVar124 = unaff_XMM9_Bj;
    cVar125 = unaff_XMM9_Bk;
    cVar126 = unaff_XMM9_Bl;
    cVar127 = unaff_XMM9_Bm;
    cVar128 = unaff_XMM9_Bn;
    cVar129 = unaff_XMM9_Bo;
    cVar130 = unaff_XMM9_Bp;
    if (*plVar37 == 0) {
      *plVar37 = -1;
      plStack_b0 = plVar37;
      uStack_f8 = pdb_140e94f10(plVar37 + 1,puVar54,uVar45,puVar55,lVar35,1,0);
      *plStack_b0 = *plStack_b0 + 1;
      lStack_100 = 1;
      lVar35 = *(longlong *)(param_1 + 0x88);
      cVar99 = DAT_142e33df0;
      cVar100 = UNK_142e33df1;
      cVar101 = UNK_142e33df2;
      cVar102 = UNK_142e33df3;
      cVar103 = UNK_142e33df4;
      cVar104 = UNK_142e33df5;
      cVar105 = UNK_142e33df6;
      cVar106 = UNK_142e33df7;
      cVar107 = UNK_142e33df8;
      cVar108 = UNK_142e33df9;
      cVar109 = UNK_142e33dfa;
      cVar110 = UNK_142e33dfb;
      cVar111 = UNK_142e33dfc;
      cVar112 = UNK_142e33dfd;
      cVar113 = UNK_142e33dfe;
      cVar114 = UNK_142e33dff;
      cVar115 = DAT_142e34190;
      cVar116 = UNK_142e34191;
      cVar117 = UNK_142e34192;
      cVar118 = UNK_142e34193;
      cVar119 = UNK_142e34194;
      cVar120 = UNK_142e34195;
      cVar121 = UNK_142e34196;
      cVar122 = UNK_142e34197;
      cVar123 = UNK_142e34198;
      cVar124 = UNK_142e34199;
      cVar125 = UNK_142e3419a;
      cVar126 = UNK_142e3419b;
      cVar127 = UNK_142e3419c;
      cVar128 = UNK_142e3419d;
      cVar129 = UNK_142e3419e;
      cVar130 = UNK_142e3419f;
      plVar37 = plStack_c0;
      goto joined_r0x0001409626c7;
    }
  }
  pdb_142dc8090(&UNK_143326a50);
LAB_140962e95:
  pdb_140499e40(&ppuStack_278);
  if (lStack_e0 == 0) {
    pdb_14097dba0(&lStack_f0);
LAB_14096306b:
    lVar35 = *(longlong *)(param_1 + 0x88);
LAB_140963072:
    if (lVar35 != 0) {
      lVar35 = *(longlong *)(param_1 + 0x70);
      uVar45 = 0x1d6a82b468dfb8a2;
      lVar48 = 0;
      while( true ) {
        uVar45 = uVar45 & *(ulonglong *)(param_1 + 0x78);
        auVar64 = *(undefined1 (*) [16])(lVar35 + uVar45);
        auVar85[0] = -(auVar64[0] == DAT_142e34ec0);
        auVar85[1] = -(auVar64[1] == DAT_142e34ec0._1_1_);
        auVar85[2] = -(auVar64[2] == DAT_142e34ec0._2_1_);
        auVar85[3] = -(auVar64[3] == DAT_142e34ec0._3_1_);
        auVar85[4] = -(auVar64[4] == DAT_142e34ec0._4_1_);
        auVar85[5] = -(auVar64[5] == DAT_142e34ec0._5_1_);
        auVar85[6] = -(auVar64[6] == DAT_142e34ec0._6_1_);
        auVar85[7] = -(auVar64[7] == DAT_142e34ec0._7_1_);
        auVar85[8] = -(auVar64[8] == DAT_142e34ec0._8_1_);
        auVar85[9] = -(auVar64[9] == DAT_142e34ec0._9_1_);
        auVar85[10] = -(auVar64[10] == DAT_142e34ec0._10_1_);
        auVar85[0xb] = -(auVar64[0xb] == DAT_142e34ec0._11_1_);
        auVar85[0xc] = -(auVar64[0xc] == DAT_142e34ec0._12_1_);
        auVar85[0xd] = -(auVar64[0xd] == DAT_142e34ec0._13_1_);
        auVar85[0xe] = -(auVar64[0xe] == DAT_142e34ec0._14_1_);
        auVar85[0xf] = -(auVar64[0xf] == DAT_142e34ec0._15_1_);
        uVar52 = (ushort)(SUB161(auVar85 >> 7,0) & 1) | (ushort)(SUB161(auVar85 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar85 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar85 >> 0x77,0) & 1) << 0xe | (ushort)(auVar85[0xf] >> 7) << 0xf
        ;
        uVar34 = (uint)uVar52;
        while (uVar52 != 0) {
          uVar14 = 0;
          for (uVar15 = uVar34; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
            uVar14 = uVar14 + 1;
          }
          uVar36 = uVar14 + uVar45 & *(ulonglong *)(param_1 + 0x78);
          pcVar2 = (char *)(lVar35 + -0x18 + uVar36 * -0x18);
          auVar86[0] = -(*pcVar2 == DAT_142e60e60);
          auVar86[1] = -(pcVar2[1] == DAT_142e60e60._1_1_);
          auVar86[2] = -(pcVar2[2] == DAT_142e60e60._2_1_);
          auVar86[3] = -(pcVar2[3] == DAT_142e60e60._3_1_);
          auVar86[4] = -(pcVar2[4] == DAT_142e60e60._4_1_);
          auVar86[5] = -(pcVar2[5] == DAT_142e60e60._5_1_);
          auVar86[6] = -(pcVar2[6] == DAT_142e60e60._6_1_);
          auVar86[7] = -(pcVar2[7] == DAT_142e60e60._7_1_);
          auVar86[8] = -(pcVar2[8] == DAT_142e60e60._8_1_);
          auVar86[9] = -(pcVar2[9] == DAT_142e60e60._9_1_);
          auVar86[10] = -(pcVar2[10] == DAT_142e60e60._10_1_);
          auVar86[0xb] = -(pcVar2[0xb] == DAT_142e60e60._11_1_);
          auVar86[0xc] = -(pcVar2[0xc] == DAT_142e60e60._12_1_);
          auVar86[0xd] = -(pcVar2[0xd] == DAT_142e60e60._13_1_);
          auVar86[0xe] = -(pcVar2[0xe] == DAT_142e60e60._14_1_);
          auVar86[0xf] = -(pcVar2[0xf] == DAT_142e60e60._15_1_);
          if ((ushort)((ushort)(SUB161(auVar86 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar86 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar86 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar86 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar86 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar86 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar86 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar86 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar86 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar86 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar86 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar86 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar86 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar86 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar86 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar86[0xf] >> 7) << 0xf) == 0xffff) {
            uVar45 = *(ulonglong *)(lVar35 + uVar36 * -0x18 + -8);
            if ((*(ulonglong *)(param_1 + 0x210) <= uVar45) ||
               (uVar45 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar45 * 8), uVar45 == 0))
            goto LAB_1409634b6;
            lVar35 = ~uVar45 * 0x40;
            if ((*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20 + lVar35) == 0) ||
               ((puVar40 = (undefined8 *)
                           pdb_140bf45b0(*(undefined8 *)
                                          (*(longlong *)(param_1 + 0x1d8) + lVar35 + 0x10),
                                         &UNK_14331c8f8), puVar40 == (undefined8 *)0x0 ||
                (lVar35 = (**(code **)(puVar40[1] + 0x18))(*puVar40), lVar35 == 0))))
            goto LAB_1409634b6;
            ppuVar12 = *(undefined8 ***)(lVar35 + 8);
            uVar45 = *(ulonglong *)(lVar35 + 0x10);
            pdb_141980a10(&ppuStack_278,param_1,&UNK_1430274c0);
            *(undefined4 *)plStack_268 = uStack_260._4_4_;
            if (0x87 < uVar45) {
              if (ppuStack_278 < ppuVar12 + 0x44 && ppuVar12 < ppuStack_278 + 0x44) {
                lVar35 = 1;
                do {
                  uVar34 = *(uint *)((longlong)ppuVar12 + lVar35 * 4 + -4);
                  uVar14 = *(uint *)((longlong)ppuStack_278 + lVar35 * 4 + -4);
                  if (uVar14 < uVar34) {
                    uVar14 = uVar34;
                  }
                  uVar34 = *(uint *)((longlong)ppuStack_278 + lVar35 * 4);
                  *(uint *)((longlong)ppuStack_278 + lVar35 * 4 + -4) = uVar14;
                  uVar14 = *(uint *)((longlong)ppuVar12 + lVar35 * 4);
                  if (uVar34 < uVar14) {
                    uVar34 = uVar14;
                  }
                  *(uint *)((longlong)ppuStack_278 + lVar35 * 4) = uVar34;
                  lVar35 = lVar35 + 2;
                } while (lVar35 != 0x89);
              }
              else {
                lVar35 = 4;
                auVar31._4_4_ = _UNK_142e37824;
                auVar31._0_4_ = _DAT_142e37820;
                auVar31._8_4_ = _UNK_142e37828;
                auVar31._12_4_ = _UNK_142e3782c;
                do {
                  auVar64 = *(undefined1 (*) [16])((longlong)ppuStack_278 + lVar35 * 4 + -0x10);
                  auVar65 = *(undefined1 (*) [16])((longlong)ppuStack_278 + lVar35 * 4);
                  auVar81 = *(undefined1 (*) [16])((longlong)ppuVar12 + lVar35 * 4 + -0x10);
                  auVar82 = *(undefined1 (*) [16])((longlong)ppuVar12 + lVar35 * 4);
                  auVar91 = auVar64 ^ auVar31;
                  auVar94 = auVar81 ^ auVar31;
                  auVar93._0_4_ = -(uint)(auVar91._0_4_ < auVar94._0_4_);
                  auVar93._4_4_ = -(uint)(auVar91._4_4_ < auVar94._4_4_);
                  auVar93._8_4_ = -(uint)(auVar91._8_4_ < auVar94._8_4_);
                  auVar93._12_4_ = -(uint)(auVar91._12_4_ < auVar94._12_4_);
                  auVar91 = auVar65 ^ auVar31;
                  auVar94 = auVar82 ^ auVar31;
                  auVar74._0_4_ = -(uint)(auVar91._0_4_ < auVar94._0_4_);
                  auVar74._4_4_ = -(uint)(auVar91._4_4_ < auVar94._4_4_);
                  auVar74._8_4_ = -(uint)(auVar91._8_4_ < auVar94._8_4_);
                  auVar74._12_4_ = -(uint)(auVar91._12_4_ < auVar94._12_4_);
                  *(undefined1 (*) [16])((longlong)ppuStack_278 + lVar35 * 4 + -0x10) =
                       ~auVar93 & auVar64 | auVar81 & auVar93;
                  *(undefined1 (*) [16])((longlong)ppuStack_278 + lVar35 * 4) =
                       ~auVar74 & auVar65 | auVar82 & auVar74;
                  lVar35 = lVar35 + 8;
                } while (lVar35 != 0x8c);
              }
              if (uVar45 < 0x110) {
                uVar44 = 0x110;
                uVar43 = 0x88;
                goto LAB_140963b76;
              }
              if (ppuStack_278 + 0x44 < ppuVar12 + 0x88 && ppuVar12 + 0x44 < ppuStack_278 + 0x88) {
                lVar35 = 0;
                do {
                  uVar34 = *(uint *)((longlong)ppuVar12 + lVar35 * 4 + 0x220);
                  uVar14 = *(uint *)((longlong)ppuStack_278 + lVar35 * 4 + 0x220);
                  if (uVar14 < uVar34) {
                    uVar14 = uVar34;
                  }
                  uVar34 = *(uint *)((longlong)ppuStack_278 + lVar35 * 4 + 0x224);
                  *(uint *)((longlong)ppuStack_278 + lVar35 * 4 + 0x220) = uVar14;
                  uVar14 = *(uint *)((longlong)ppuVar12 + lVar35 * 4 + 0x224);
                  if (uVar34 < uVar14) {
                    uVar34 = uVar14;
                  }
                  *(uint *)((longlong)ppuStack_278 + lVar35 * 4 + 0x224) = uVar34;
                  lVar35 = lVar35 + 2;
                } while (lVar35 != 0x88);
              }
              else {
                lVar35 = 0;
                auVar30._4_4_ = _UNK_142e37824;
                auVar30._0_4_ = _DAT_142e37820;
                auVar30._8_4_ = _UNK_142e37828;
                auVar30._12_4_ = _UNK_142e3782c;
                do {
                  auVar64 = *(undefined1 (*) [16])((longlong)ppuStack_278 + lVar35 * 4 + 0x220);
                  auVar65 = *(undefined1 (*) [16])((longlong)ppuStack_278 + lVar35 * 4 + 0x230);
                  auVar81 = *(undefined1 (*) [16])((longlong)ppuVar12 + lVar35 * 4 + 0x220);
                  auVar82 = *(undefined1 (*) [16])((longlong)ppuVar12 + lVar35 * 4 + 0x230);
                  auVar91 = auVar64 ^ auVar30;
                  auVar94 = auVar81 ^ auVar30;
                  auVar95._0_4_ = -(uint)(auVar91._0_4_ < auVar94._0_4_);
                  auVar95._4_4_ = -(uint)(auVar91._4_4_ < auVar94._4_4_);
                  auVar95._8_4_ = -(uint)(auVar91._8_4_ < auVar94._8_4_);
                  auVar95._12_4_ = -(uint)(auVar91._12_4_ < auVar94._12_4_);
                  auVar91 = auVar65 ^ auVar30;
                  auVar94 = auVar82 ^ auVar30;
                  auVar75._0_4_ = -(uint)(auVar91._0_4_ < auVar94._0_4_);
                  auVar75._4_4_ = -(uint)(auVar91._4_4_ < auVar94._4_4_);
                  auVar75._8_4_ = -(uint)(auVar91._8_4_ < auVar94._8_4_);
                  auVar75._12_4_ = -(uint)(auVar91._12_4_ < auVar94._12_4_);
                  *(undefined1 (*) [16])((longlong)ppuStack_278 + lVar35 * 4 + 0x220) =
                       ~auVar95 & auVar64 | auVar81 & auVar95;
                  *(undefined1 (*) [16])((longlong)ppuStack_278 + lVar35 * 4 + 0x230) =
                       ~auVar75 & auVar65 | auVar82 & auVar75;
                  lVar35 = lVar35 + 8;
                } while (lVar35 != 0x88);
              }
              uVar32 = _UNK_142e3782c;
              uVar15 = _UNK_142e37828;
              uVar14 = _UNK_142e37824;
              uVar34 = _DAT_142e37820;
              if (uVar45 < 0x198) {
                uVar44 = 0x198;
                uVar43 = 0x110;
                goto LAB_140963b76;
              }
              if (ppuStack_278 + 0x88 < ppuVar12 + 0xcc && ppuVar12 + 0x88 < ppuStack_278 + 0xcc) {
                lVar35 = 0;
                do {
                  uVar34 = *(uint *)((longlong)ppuVar12 + lVar35 * 4 + 0x440);
                  uVar14 = *(uint *)((longlong)ppuStack_278 + lVar35 * 4 + 0x440);
                  if (uVar14 < uVar34) {
                    uVar14 = uVar34;
                  }
                  uVar34 = *(uint *)((longlong)ppuStack_278 + lVar35 * 4 + 0x444);
                  *(uint *)((longlong)ppuStack_278 + lVar35 * 4 + 0x440) = uVar14;
                  uVar14 = *(uint *)((longlong)ppuVar12 + lVar35 * 4 + 0x444);
                  if (uVar34 < uVar14) {
                    uVar34 = uVar14;
                  }
                  *(uint *)((longlong)ppuStack_278 + lVar35 * 4 + 0x444) = uVar34;
                  lVar35 = lVar35 + 2;
                } while (lVar35 != 0x88);
              }
              else {
                lVar35 = 0;
                do {
                  puVar5 = (uint *)((longlong)ppuStack_278 + lVar35 * 4 + 0x440);
                  uVar23 = puVar5[1];
                  uVar24 = puVar5[2];
                  uVar25 = puVar5[3];
                  puVar46 = (uint *)((longlong)ppuStack_278 + lVar35 * 4 + 0x450);
                  uVar26 = *puVar46;
                  uVar27 = puVar46[1];
                  uVar28 = puVar46[2];
                  uVar29 = puVar46[3];
                  puVar46 = (uint *)((longlong)ppuVar12 + lVar35 * 4 + 0x440);
                  uVar20 = puVar46[1];
                  uVar21 = puVar46[2];
                  uVar22 = puVar46[3];
                  puVar6 = (uint *)((longlong)ppuVar12 + lVar35 * 4 + 0x450);
                  uVar16 = *puVar6;
                  uVar17 = puVar6[1];
                  uVar18 = puVar6[2];
                  uVar19 = puVar6[3];
                  uVar92 = -(uint)((int)(*puVar5 ^ uVar34) < (int)(*puVar46 ^ uVar34));
                  uVar96 = -(uint)((int)(uVar23 ^ uVar14) < (int)(uVar20 ^ uVar14));
                  uVar97 = -(uint)((int)(uVar24 ^ uVar15) < (int)(uVar21 ^ uVar15));
                  uVar98 = -(uint)((int)(uVar25 ^ uVar32) < (int)(uVar22 ^ uVar32));
                  uVar70 = -(uint)((int)(uVar26 ^ uVar34) < (int)(uVar16 ^ uVar34));
                  uVar78 = -(uint)((int)(uVar27 ^ uVar14) < (int)(uVar17 ^ uVar14));
                  uVar79 = -(uint)((int)(uVar28 ^ uVar15) < (int)(uVar18 ^ uVar15));
                  uVar80 = -(uint)((int)(uVar29 ^ uVar32) < (int)(uVar19 ^ uVar32));
                  puVar6 = (uint *)((longlong)ppuStack_278 + lVar35 * 4 + 0x440);
                  *puVar6 = ~uVar92 & *puVar5 | *puVar46 & uVar92;
                  puVar6[1] = ~uVar96 & uVar23 | uVar20 & uVar96;
                  puVar6[2] = ~uVar97 & uVar24 | uVar21 & uVar97;
                  puVar6[3] = ~uVar98 & uVar25 | uVar22 & uVar98;
                  puVar5 = (uint *)((longlong)ppuStack_278 + lVar35 * 4 + 0x450);
                  *puVar5 = ~uVar70 & uVar26 | uVar16 & uVar70;
                  puVar5[1] = ~uVar78 & uVar27 | uVar17 & uVar78;
                  puVar5[2] = ~uVar79 & uVar28 | uVar18 & uVar79;
                  puVar5[3] = ~uVar80 & uVar29 | uVar19 & uVar80;
                  lVar35 = lVar35 + 8;
                } while (lVar35 != 0x88);
              }
              goto LAB_1409634b6;
            }
            goto LAB_140963b57;
          }
          uVar52 = (ushort)(uVar34 - 1) & (ushort)uVar34;
          uVar34 = CONCAT22((short)(uVar34 - 1 >> 0x10),uVar52);
        }
        auVar73[0] = -(auVar64[0] == -1);
        auVar73[1] = -(auVar64[1] == -1);
        auVar73[2] = -(auVar64[2] == -1);
        auVar73[3] = -(auVar64[3] == -1);
        auVar73[4] = -(auVar64[4] == -1);
        auVar73[5] = -(auVar64[5] == -1);
        auVar73[6] = -(auVar64[6] == -1);
        auVar73[7] = -(auVar64[7] == -1);
        auVar73[8] = -(auVar64[8] == -1);
        auVar73[9] = -(auVar64[9] == -1);
        auVar73[10] = -(auVar64[10] == -1);
        auVar73[0xb] = -(auVar64[0xb] == -1);
        auVar73[0xc] = -(auVar64[0xc] == -1);
        auVar73[0xd] = -(auVar64[0xd] == -1);
        auVar73[0xe] = -(auVar64[0xe] == -1);
        auVar73[0xf] = -(auVar64[0xf] == -1);
        if ((((((((((((((((SUB161(auVar73 >> 7,0) & 1) != 0 || (SUB161(auVar73 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar73 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar73 >> 0x1f,0) & 1) != 0) || (SUB161(auVar73 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar73 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar73 >> 0x37,0) & 1) != 0) || (SUB161(auVar73 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar73 >> 0x47,0) & 1) != 0) || (SUB161(auVar73 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar73 >> 0x57,0) & 1) != 0) || (SUB161(auVar73 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar73 >> 0x67,0) & 1) != 0) || (SUB161(auVar73 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar73 >> 0x77,0) & 1) != 0) || auVar73[0xf] < '\0') break;
        uVar45 = uVar45 + lVar48 + 0x10;
        lVar48 = lVar48 + 0x10;
      }
    }
LAB_1409634b6:
    if (uStack_118 != 0) {
      pub_1406abac0(pbStack_110,uStack_118,1);
    }
    LOCK();
    *plStack_c0 = *plStack_c0 + -1;
    UNLOCK();
    if (*plStack_c0 == 0) {
      pdb_140e3f860(&plStack_c0);
    }
    if (lStack_100 != 0) {
      puStack_d8 = &uStack_f8;
      ppuStack_278 = &puStack_d8;
      pdb_1416fcb40(&UNK_143027758,&ppuStack_278);
    }
    return;
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    puVar54 = *(undefined **)(param_1 + 0x70);
    uVar36 = *(ulonglong *)(param_1 + 0x78);
    uVar45 = 0x10a3366b2ce2bcb7;
    lVar48 = 0;
    while( true ) {
      uVar45 = uVar45 & uVar36;
      pcVar2 = puVar54 + uVar45;
      auVar66[0] = -(*pcVar2 == cVar99);
      auVar66[1] = -(pcVar2[1] == cVar100);
      auVar66[2] = -(pcVar2[2] == cVar101);
      auVar66[3] = -(pcVar2[3] == cVar102);
      auVar66[4] = -(pcVar2[4] == cVar103);
      auVar66[5] = -(pcVar2[5] == cVar104);
      auVar66[6] = -(pcVar2[6] == cVar105);
      auVar66[7] = -(pcVar2[7] == cVar106);
      auVar66[8] = -(pcVar2[8] == cVar107);
      auVar66[9] = -(pcVar2[9] == cVar108);
      auVar66[10] = -(pcVar2[10] == cVar109);
      auVar66[0xb] = -(pcVar2[0xb] == cVar110);
      auVar66[0xc] = -(pcVar2[0xc] == cVar111);
      auVar66[0xd] = -(pcVar2[0xd] == cVar112);
      auVar66[0xe] = -(pcVar2[0xe] == cVar113);
      auVar66[0xf] = -(pcVar2[0xf] == cVar114);
      uVar52 = (ushort)(SUB161(auVar66 >> 7,0) & 1) | (ushort)(SUB161(auVar66 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar66 >> 0x77,0) & 1) << 0xe | (ushort)(auVar66[0xf] >> 7) << 0xf;
      uVar34 = (uint)uVar52;
      while (uVar52 != 0) {
        uVar14 = 0;
        for (uVar15 = uVar34; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
          uVar14 = uVar14 + 1;
        }
        uVar53 = uVar14 + uVar45 & uVar36;
        in_R11 = uVar53 * -3;
        pcVar4 = puVar54 + uVar53 * -0x18 + -0x18;
        auVar67[0] = -(*pcVar4 == cVar115);
        auVar67[1] = -(pcVar4[1] == cVar116);
        auVar67[2] = -(pcVar4[2] == cVar117);
        auVar67[3] = -(pcVar4[3] == cVar118);
        auVar67[4] = -(pcVar4[4] == cVar119);
        auVar67[5] = -(pcVar4[5] == cVar120);
        auVar67[6] = -(pcVar4[6] == cVar121);
        auVar67[7] = -(pcVar4[7] == cVar122);
        auVar67[8] = -(pcVar4[8] == cVar123);
        auVar67[9] = -(pcVar4[9] == cVar124);
        auVar67[10] = -(pcVar4[10] == cVar125);
        auVar67[0xb] = -(pcVar4[0xb] == cVar126);
        auVar67[0xc] = -(pcVar4[0xc] == cVar127);
        auVar67[0xd] = -(pcVar4[0xd] == cVar128);
        auVar67[0xe] = -(pcVar4[0xe] == cVar129);
        auVar67[0xf] = -(pcVar4[0xf] == cVar130);
        lVar35 = lStack_e0;
        if ((ushort)((ushort)(SUB161(auVar67 >> 7,0) & 1) |
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
                    (ushort)(auVar67[0xf] >> 7) << 0xf) == 0xffff) goto LAB_140962f7c;
        uVar52 = (ushort)(uVar34 - 1) & (ushort)uVar34;
        uVar34 = CONCAT22((short)(uVar34 - 1 >> 0x10),uVar52);
      }
      auVar60[0] = -(*pcVar2 == -1);
      auVar60[1] = -(pcVar2[1] == -1);
      auVar60[2] = -(pcVar2[2] == -1);
      auVar60[3] = -(pcVar2[3] == -1);
      auVar60[4] = -(pcVar2[4] == -1);
      auVar60[5] = -(pcVar2[5] == -1);
      auVar60[6] = -(pcVar2[6] == -1);
      auVar60[7] = -(pcVar2[7] == -1);
      auVar60[8] = -(pcVar2[8] == -1);
      auVar60[9] = -(pcVar2[9] == -1);
      auVar60[10] = -(pcVar2[10] == -1);
      auVar60[0xb] = -(pcVar2[0xb] == -1);
      auVar60[0xc] = -(pcVar2[0xc] == -1);
      auVar60[0xd] = -(pcVar2[0xd] == -1);
      auVar60[0xe] = -(pcVar2[0xe] == -1);
      auVar60[0xf] = -(pcVar2[0xf] == -1);
      if ((((((((((((((((SUB161(auVar60 >> 7,0) & 1) != 0 || (SUB161(auVar60 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar60 >> 0x17,0) & 1) != 0) || (SUB161(auVar60 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar60 >> 0x27,0) & 1) != 0) || (SUB161(auVar60 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar60 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar60 >> 0x3f,0) & 1) != 0) || (SUB161(auVar60 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar60 >> 0x4f,0) & 1) != 0) || (SUB161(auVar60 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar60 >> 0x5f,0) & 1) != 0) || (SUB161(auVar60 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar60 >> 0x6f,0) & 1) != 0) || (SUB161(auVar60 >> 0x77,0) & 1) != 0) ||
          auVar60[0xf] < '\0') break;
      uVar45 = uVar45 + lVar48 + 0x10;
      lVar48 = lVar48 + 0x10;
    }
  }
LAB_1409635fb:
  ppuStack_278 = (undefined8 **)&uStack_91;
  ppuStack_270 = (undefined8 **)pdb_140f33ec0;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_143027898,&ppuStack_278,&UNK_143027448);
LAB_140962876:
  uVar36 = uVar36 & uVar45;
  auVar64 = *(undefined1 (*) [16])(lVar35 + uVar36);
  auVar81[0] = -(auVar64[0] == DAT_142e342a0);
  auVar81[1] = -(auVar64[1] == DAT_142e342a0._1_1_);
  auVar81[2] = -(auVar64[2] == DAT_142e342a0._2_1_);
  auVar81[3] = -(auVar64[3] == DAT_142e342a0._3_1_);
  auVar81[4] = -(auVar64[4] == DAT_142e342a0._4_1_);
  auVar81[5] = -(auVar64[5] == DAT_142e342a0._5_1_);
  auVar81[6] = -(auVar64[6] == DAT_142e342a0._6_1_);
  auVar81[7] = -(auVar64[7] == DAT_142e342a0._7_1_);
  auVar81[8] = -(auVar64[8] == DAT_142e342a0._8_1_);
  auVar81[9] = -(auVar64[9] == DAT_142e342a0._9_1_);
  auVar81[10] = -(auVar64[10] == DAT_142e342a0._10_1_);
  auVar81[0xb] = -(auVar64[0xb] == DAT_142e342a0._11_1_);
  auVar81[0xc] = -(auVar64[0xc] == DAT_142e342a0._12_1_);
  auVar81[0xd] = -(auVar64[0xd] == DAT_142e342a0._13_1_);
  auVar81[0xe] = -(auVar64[0xe] == DAT_142e342a0._14_1_);
  auVar81[0xf] = -(auVar64[0xf] == DAT_142e342a0._15_1_);
  uVar52 = (ushort)(SUB161(auVar81 >> 7,0) & 1) | (ushort)(SUB161(auVar81 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar81 >> 0x77,0) & 1) << 0xe | (ushort)(auVar81[0xf] >> 7) << 0xf;
  uVar34 = (uint)uVar52;
  while (uVar52 != 0) {
    uVar14 = 0;
    for (uVar15 = uVar34; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
      uVar14 = uVar14 + 1;
    }
    uVar53 = uVar14 + uVar36 & uVar45;
    pcVar2 = (char *)(lVar35 + -0x18 + uVar53 * -0x18);
    auVar82[0] = -(*pcVar2 == DAT_142e342b0);
    auVar82[1] = -(pcVar2[1] == DAT_142e342b0._1_1_);
    auVar82[2] = -(pcVar2[2] == DAT_142e342b0._2_1_);
    auVar82[3] = -(pcVar2[3] == DAT_142e342b0._3_1_);
    auVar82[4] = -(pcVar2[4] == DAT_142e342b0._4_1_);
    auVar82[5] = -(pcVar2[5] == DAT_142e342b0._5_1_);
    auVar82[6] = -(pcVar2[6] == DAT_142e342b0._6_1_);
    auVar82[7] = -(pcVar2[7] == DAT_142e342b0._7_1_);
    auVar82[8] = -(pcVar2[8] == DAT_142e342b0._8_1_);
    auVar82[9] = -(pcVar2[9] == DAT_142e342b0._9_1_);
    auVar82[10] = -(pcVar2[10] == DAT_142e342b0._10_1_);
    auVar82[0xb] = -(pcVar2[0xb] == DAT_142e342b0._11_1_);
    auVar82[0xc] = -(pcVar2[0xc] == DAT_142e342b0._12_1_);
    auVar82[0xd] = -(pcVar2[0xd] == DAT_142e342b0._13_1_);
    auVar82[0xe] = -(pcVar2[0xe] == DAT_142e342b0._14_1_);
    auVar82[0xf] = -(pcVar2[0xf] == DAT_142e342b0._15_1_);
    if ((ushort)((ushort)(SUB161(auVar82 >> 7,0) & 1) | (ushort)(SUB161(auVar82 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar82 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar82 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar82 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar82 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar82 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar82 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar82 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar82 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar82 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar82 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar82 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar82 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar82 >> 0x77,0) & 1) << 0xe | (ushort)(auVar82[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar45 = *(ulonglong *)(lVar35 + uVar53 * -0x18 + -8);
      if (((*(ulonglong *)(param_1 + 0x210) <= uVar45) ||
          (uVar45 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar45 * 8), uVar45 == 0)) ||
         (lVar35 = ~uVar45 * 0x40, *(longlong *)(lVar48 + 0x20 + lVar35) == 0)) goto LAB_140962a3f;
      plStack_c0 = (longlong *)**(undefined8 **)(lVar48 + lVar35 + 0x10);
      LOCK();
      lVar35 = *plStack_c0;
      *plStack_c0 = *plStack_c0 + 1;
      UNLOCK();
      if (*plStack_c0 == 0 || SCARRY8(lVar35,1) != *plStack_c0 < 0) goto LAB_140963b86;
      uStack_118 = 0;
      pbStack_110 = (byte *)0x1;
      lStack_108 = 0;
      pdb_141952eb0(param_1,&uStack_118,&plStack_c0,&UNK_143027528);
      lVar48 = lStack_108;
      pbVar1 = pbStack_110;
      unaff_XMM7_Bp = UNK_142e3451f;
      unaff_XMM7_Bo = UNK_142e3451e;
      unaff_XMM7_Bn = UNK_142e3451d;
      unaff_XMM7_Bm = UNK_142e3451c;
      unaff_XMM7_Bl = UNK_142e3451b;
      unaff_XMM7_Bk = UNK_142e3451a;
      unaff_XMM7_Bj = UNK_142e34519;
      unaff_XMM7_Bi = UNK_142e34518;
      unaff_XMM7_Bh = UNK_142e34517;
      unaff_XMM7_Bg = UNK_142e34516;
      unaff_XMM7_Bf = UNK_142e34515;
      unaff_XMM7_Be = UNK_142e34514;
      unaff_XMM7_Bd = UNK_142e34513;
      unaff_XMM7_Bc = UNK_142e34512;
      unaff_XMM7_Bb = UNK_142e34511;
      unaff_XMM7_Ba = DAT_142e34510;
      unaff_XMM6_Bp = UNK_142e3450f;
      unaff_XMM6_Bo = UNK_142e3450e;
      unaff_XMM6_Bn = UNK_142e3450d;
      unaff_XMM6_Bm = UNK_142e3450c;
      unaff_XMM6_Bl = UNK_142e3450b;
      unaff_XMM6_Bk = UNK_142e3450a;
      unaff_XMM6_Bj = UNK_142e34509;
      unaff_XMM6_Bi = UNK_142e34508;
      unaff_XMM6_Bh = UNK_142e34507;
      unaff_XMM6_Bg = UNK_142e34506;
      unaff_XMM6_Bf = UNK_142e34505;
      unaff_XMM6_Be = UNK_142e34504;
      unaff_XMM6_Bd = UNK_142e34503;
      unaff_XMM6_Bc = UNK_142e34502;
      unaff_XMM6_Bb = UNK_142e34501;
      unaff_XMM6_Ba = DAT_142e34500;
      lVar35 = *(longlong *)(param_1 + 0x88);
      if (lStack_108 == 0) goto LAB_140963072;
      if (lVar35 == 0) goto LAB_14096306b;
      plVar37 = plStack_c0 + 2;
      lVar35 = *(longlong *)(param_1 + 0x70);
      uVar45 = 0x6d79c7fc2d5f98ee;
      lVar49 = 0;
      goto LAB_1409629ca;
    }
    uVar52 = (ushort)(uVar34 - 1) & (ushort)uVar34;
    uVar34 = CONCAT22((short)(uVar34 - 1 >> 0x10),uVar52);
  }
  auVar71[0] = -(auVar64[0] == -1);
  auVar71[1] = -(auVar64[1] == -1);
  auVar71[2] = -(auVar64[2] == -1);
  auVar71[3] = -(auVar64[3] == -1);
  auVar71[4] = -(auVar64[4] == -1);
  auVar71[5] = -(auVar64[5] == -1);
  auVar71[6] = -(auVar64[6] == -1);
  auVar71[7] = -(auVar64[7] == -1);
  auVar71[8] = -(auVar64[8] == -1);
  auVar71[9] = -(auVar64[9] == -1);
  auVar71[10] = -(auVar64[10] == -1);
  auVar71[0xb] = -(auVar64[0xb] == -1);
  auVar71[0xc] = -(auVar64[0xc] == -1);
  auVar71[0xd] = -(auVar64[0xd] == -1);
  auVar71[0xe] = -(auVar64[0xe] == -1);
  auVar71[0xf] = -(auVar64[0xf] == -1);
  if ((((((((((((((((SUB161(auVar71 >> 7,0) & 1) != 0 || (SUB161(auVar71 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar71 >> 0x17,0) & 1) != 0) || (SUB161(auVar71 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar71 >> 0x27,0) & 1) != 0) || (SUB161(auVar71 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar71 >> 0x37,0) & 1) != 0) || (SUB161(auVar71 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar71 >> 0x47,0) & 1) != 0) || (SUB161(auVar71 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar71 >> 0x57,0) & 1) != 0) || (SUB161(auVar71 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar71 >> 0x67,0) & 1) != 0) || (SUB161(auVar71 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar71 >> 0x77,0) & 1) != 0) || auVar71[0xf] < '\0') goto LAB_140962a3f;
  uVar36 = uVar36 + in_R11 + 0x10;
  in_R11 = in_R11 + 0x10;
  goto LAB_140962876;
LAB_1409629ca:
  uVar45 = uVar45 & *(ulonglong *)(param_1 + 0x78);
  auVar64 = *(undefined1 (*) [16])(lVar35 + uVar45);
  auVar91[0] = -(auVar64[0] == DAT_142e34500);
  auVar91[1] = -(auVar64[1] == UNK_142e34501);
  auVar91[2] = -(auVar64[2] == UNK_142e34502);
  auVar91[3] = -(auVar64[3] == UNK_142e34503);
  auVar91[4] = -(auVar64[4] == UNK_142e34504);
  auVar91[5] = -(auVar64[5] == UNK_142e34505);
  auVar91[6] = -(auVar64[6] == UNK_142e34506);
  auVar91[7] = -(auVar64[7] == UNK_142e34507);
  auVar91[8] = -(auVar64[8] == UNK_142e34508);
  auVar91[9] = -(auVar64[9] == UNK_142e34509);
  auVar91[10] = -(auVar64[10] == UNK_142e3450a);
  auVar91[0xb] = -(auVar64[0xb] == UNK_142e3450b);
  auVar91[0xc] = -(auVar64[0xc] == UNK_142e3450c);
  auVar91[0xd] = -(auVar64[0xd] == UNK_142e3450d);
  auVar91[0xe] = -(auVar64[0xe] == UNK_142e3450e);
  auVar91[0xf] = -(auVar64[0xf] == UNK_142e3450f);
  uVar52 = (ushort)(SUB161(auVar91 >> 7,0) & 1) | (ushort)(SUB161(auVar91 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar91 >> 0x77,0) & 1) << 0xe | (ushort)(auVar91[0xf] >> 7) << 0xf;
  uVar34 = (uint)uVar52;
  while (uVar52 != 0) {
    uVar14 = 0;
    for (uVar15 = uVar34; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
      uVar14 = uVar14 + 1;
    }
    uVar36 = uVar14 + uVar45 & *(ulonglong *)(param_1 + 0x78);
    pcVar2 = (char *)(lVar35 + -0x18 + uVar36 * -0x18);
    auVar94[0] = -(*pcVar2 == DAT_142e34510);
    auVar94[1] = -(pcVar2[1] == UNK_142e34511);
    auVar94[2] = -(pcVar2[2] == UNK_142e34512);
    auVar94[3] = -(pcVar2[3] == UNK_142e34513);
    auVar94[4] = -(pcVar2[4] == UNK_142e34514);
    auVar94[5] = -(pcVar2[5] == UNK_142e34515);
    auVar94[6] = -(pcVar2[6] == UNK_142e34516);
    auVar94[7] = -(pcVar2[7] == UNK_142e34517);
    auVar94[8] = -(pcVar2[8] == UNK_142e34518);
    auVar94[9] = -(pcVar2[9] == UNK_142e34519);
    auVar94[10] = -(pcVar2[10] == UNK_142e3451a);
    auVar94[0xb] = -(pcVar2[0xb] == UNK_142e3451b);
    auVar94[0xc] = -(pcVar2[0xc] == UNK_142e3451c);
    auVar94[0xd] = -(pcVar2[0xd] == UNK_142e3451d);
    auVar94[0xe] = -(pcVar2[0xe] == UNK_142e3451e);
    auVar94[0xf] = -(pcVar2[0xf] == UNK_142e3451f);
    if ((ushort)((ushort)(SUB161(auVar94 >> 7,0) & 1) | (ushort)(SUB161(auVar94 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar94 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar94 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar94 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar94 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar94 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar94 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar94 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar94 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar94 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar94 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar94 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar94 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar94 >> 0x77,0) & 1) << 0xe | (ushort)(auVar94[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar45 = *(ulonglong *)(lVar35 + uVar36 * -0x18 + -8);
      if (((*(ulonglong *)(param_1 + 0x210) <= uVar45) ||
          (uVar45 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar45 * 8), uVar45 == 0)) ||
         (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20 + ~uVar45 * 0x40) == 0))
      goto LAB_14096306b;
      lStack_f0 = 0;
      ppuStack_e8 = (undefined8 **)0x8;
      lStack_e0 = 0;
      pdb_141948b60(&ppuStack_278,param_1);
      plStack_138 = plVar37;
      pdb_14194a360(&puStack_d8,&ppuStack_278);
      lStack_140 = CONCAT71(uStack_cf,bStack_d0);
      puVar46 = (uint *)puStack_d8[0x1f];
      puVar5 = puVar46 + puStack_d8[0x20];
      lVar35 = 0;
      lStack_128 = 8;
      lStack_120 = 8;
      plStack_a0 = (longlong *)0x0;
      lStack_b8 = 0;
      uVar45 = 0;
      puStack_148 = puStack_d8;
      cVar33 = *(char *)(puStack_d8 + 0x21);
      goto LAB_140962ba2;
    }
    uVar52 = (ushort)(uVar34 - 1) & (ushort)uVar34;
    uVar34 = CONCAT22((short)(uVar34 - 1 >> 0x10),uVar52);
  }
  auVar59[0] = -(auVar64[0] == -1);
  auVar59[1] = -(auVar64[1] == -1);
  auVar59[2] = -(auVar64[2] == -1);
  auVar59[3] = -(auVar64[3] == -1);
  auVar59[4] = -(auVar64[4] == -1);
  auVar59[5] = -(auVar64[5] == -1);
  auVar59[6] = -(auVar64[6] == -1);
  auVar59[7] = -(auVar64[7] == -1);
  auVar59[8] = -(auVar64[8] == -1);
  auVar59[9] = -(auVar64[9] == -1);
  auVar59[10] = -(auVar64[10] == -1);
  auVar59[0xb] = -(auVar64[0xb] == -1);
  auVar59[0xc] = -(auVar64[0xc] == -1);
  auVar59[0xd] = -(auVar64[0xd] == -1);
  auVar59[0xe] = -(auVar64[0xe] == -1);
  auVar59[0xf] = -(auVar64[0xf] == -1);
  if ((((((((((((((((SUB161(auVar59 >> 7,0) & 1) != 0 || (SUB161(auVar59 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar59 >> 0x17,0) & 1) != 0) || (SUB161(auVar59 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar59 >> 0x27,0) & 1) != 0) || (SUB161(auVar59 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar59 >> 0x37,0) & 1) != 0) || (SUB161(auVar59 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar59 >> 0x47,0) & 1) != 0) || (SUB161(auVar59 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar59 >> 0x57,0) & 1) != 0) || (SUB161(auVar59 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar59 >> 0x67,0) & 1) != 0) || (SUB161(auVar59 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar59 >> 0x77,0) & 1) != 0) || auVar59[0xf] < '\0') goto LAB_14096306b;
  uVar45 = uVar45 + lVar49 + 0x10;
  lVar49 = lVar49 + 0x10;
  goto LAB_1409629ca;
LAB_140962ba2:
  lVar49 = lStack_e0;
  if (cVar33 == '\0') {
    if ((int)uVar45 == (int)lVar35) {
      do {
        if (puVar46 == puVar5) goto LAB_140962e95;
        uVar34 = *puVar46;
        puVar46 = puVar46 + 1;
        lVar35 = *(longlong *)(*(longlong *)(lStack_140 + 0x100) + 0x58 + (ulonglong)uVar34 * 0xa0);
      } while (lVar35 == 0);
      lVar38 = *(longlong *)(lStack_140 + 0x100) + (ulonglong)uVar34 * 0xa0;
      uVar45 = (ulonglong)*(uint *)(lVar38 + 0x94);
      lVar51 = *(longlong *)(lStack_140 + 0x1a0) + uVar45 * 0x48;
      uVar45 = *(ulonglong *)(*(longlong *)(lStack_140 + 0x1a0) + 0x40 + uVar45 * 0x48);
      if (((ulonglong)puStack_148[0x22] < uVar45) &&
         (uVar36 = *(ulonglong *)(*(longlong *)(lVar51 + 0x38) + puStack_148[0x22] * 8), uVar36 != 0
         )) {
        plStack_a0 = *(longlong **)(*(longlong *)(lVar51 + 0x18) + 0x10 + ~uVar36 * 0x30);
      }
      else {
        plStack_a0 = (longlong *)0x0;
      }
      if (((ulonglong)puStack_148[0x23] < uVar45) &&
         (uVar45 = *(ulonglong *)(*(longlong *)(lVar51 + 0x38) + puStack_148[0x23] * 8), uVar45 != 0
         )) {
        lStack_b8 = *(longlong *)(*(longlong *)(lVar51 + 0x18) + 0x10 + ~uVar45 * 0x30);
      }
      else {
        lStack_b8 = 0;
      }
      lStack_120 = *(longlong *)(lVar38 + 0x50);
      uVar45 = 0;
    }
    iVar50 = (int)uVar45;
    puVar40 = (undefined8 *)(lStack_120 + uVar45 * 0x10);
    uVar45 = (ulonglong)~*(uint *)(lStack_120 + 8 + uVar45 * 0x10);
  }
  else {
    if ((int)uVar45 == (int)lVar35) {
      do {
        if (puVar46 == puVar5) goto LAB_140962e95;
        uVar34 = *puVar46;
        puVar46 = puVar46 + 1;
        lVar35 = *(longlong *)(*(longlong *)(lStack_140 + 0x1a0) + 0x10 + (ulonglong)uVar34 * 0x48);
      } while (lVar35 == 0);
      lVar51 = *(longlong *)(lStack_140 + 0x1a0) + (ulonglong)uVar34 * 0x48;
      if (((ulonglong)puStack_148[0x22] < *(ulonglong *)(lVar51 + 0x40)) &&
         (uVar45 = *(ulonglong *)(*(longlong *)(lVar51 + 0x38) + puStack_148[0x22] * 8), uVar45 != 0
         )) {
        plStack_a0 = *(longlong **)(*(longlong *)(lVar51 + 0x18) + 0x10 + ~uVar45 * 0x30);
      }
      else {
        plStack_a0 = (longlong *)0x0;
      }
      if (((ulonglong)puStack_148[0x23] < *(ulonglong *)(lVar51 + 0x40)) &&
         (uVar45 = *(ulonglong *)(*(longlong *)(lVar51 + 0x38) + puStack_148[0x23] * 8), uVar45 != 0
         )) {
        lStack_b8 = *(longlong *)(*(longlong *)(lVar51 + 0x18) + 0x10 + ~uVar45 * 0x30);
      }
      else {
        lStack_b8 = 0;
      }
      lStack_128 = *(longlong *)(lVar51 + 8);
      uVar45 = 0;
    }
    iVar50 = (int)uVar45;
    puVar40 = (undefined8 *)(lStack_128 + uVar45 * 8);
  }
  pbVar39 = (byte *)((longlong)plStack_a0 + uVar45);
  puVar40 = (undefined8 *)*puVar40;
  if ((int)puVar40 == 0) goto LAB_140962e95;
  uVar34 = iVar50 + 1;
  plStack_b0 = (longlong *)CONCAT44(plStack_b0._4_4_,uVar34);
  lVar51 = 0;
  do {
    if (lVar48 == lVar51) {
      uVar45 = (ulonglong)uVar34;
      goto LAB_140962ba2;
    }
    pbVar3 = pbVar1 + lVar51;
    lVar51 = lVar51 + 1;
  } while (*pbVar3 != *pbVar39);
  puVar11 = *(undefined8 **)(lStack_b8 + uVar45 * 8);
  uVar45 = (ulonglong)uVar34;
  if (puVar11 != (undefined8 *)0x0) {
    LOCK();
    piVar41 = (int *)(((ulonglong)puVar11 & 0xfffffffffffffffc) + 0x10 +
                     (ulonglong)((uint)puVar11 & 3) * 4);
    *piVar41 = *piVar41 + 1;
    UNLOCK();
    bStack_d0 = *pbVar39;
    puStack_d8 = puVar40;
    puStack_c8 = puVar11;
    cStack_a1 = cVar33;
    if (lStack_e0 == lStack_f0) {
      pdb_142d7e830(&lStack_f0);
    }
    ppuStack_e8[lVar49 * 3 + 2] = puStack_c8;
    ppuStack_e8[lVar49 * 3] = puStack_d8;
    (ppuStack_e8 + lVar49 * 3)[1] = (undefined8 *)CONCAT71(uStack_cf,bStack_d0);
    lStack_e0 = lVar49 + 1;
    uVar45 = (ulonglong)plStack_b0 & 0xffffffff;
    cVar33 = cStack_a1;
  }
  goto LAB_140962ba2;
LAB_14096358a:
  uVar53 = uVar53 & uVar36;
  auVar64 = *(undefined1 (*) [16])(puVar54 + uVar53);
  auVar87[0] = -(auVar64[0] == DAT_142e33d90);
  auVar87[1] = -(auVar64[1] == DAT_142e33d90._1_1_);
  auVar87[2] = -(auVar64[2] == DAT_142e33d90._2_1_);
  auVar87[3] = -(auVar64[3] == DAT_142e33d90._3_1_);
  auVar87[4] = -(auVar64[4] == DAT_142e33d90._4_1_);
  auVar87[5] = -(auVar64[5] == DAT_142e33d90._5_1_);
  auVar87[6] = -(auVar64[6] == DAT_142e33d90._6_1_);
  auVar87[7] = -(auVar64[7] == DAT_142e33d90._7_1_);
  auVar87[8] = -(auVar64[8] == DAT_142e33d90._8_1_);
  auVar87[9] = -(auVar64[9] == DAT_142e33d90._9_1_);
  auVar87[10] = -(auVar64[10] == DAT_142e33d90._10_1_);
  auVar87[0xb] = -(auVar64[0xb] == DAT_142e33d90._11_1_);
  auVar87[0xc] = -(auVar64[0xc] == DAT_142e33d90._12_1_);
  auVar87[0xd] = -(auVar64[0xd] == DAT_142e33d90._13_1_);
  auVar87[0xe] = -(auVar64[0xe] == DAT_142e33d90._14_1_);
  auVar87[0xf] = -(auVar64[0xf] == DAT_142e33d90._15_1_);
  uVar52 = (ushort)(SUB161(auVar87 >> 7,0) & 1) | (ushort)(SUB161(auVar87 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar87 >> 0x77,0) & 1) << 0xe | (ushort)(auVar87[0xf] >> 7) << 0xf;
  uVar34 = (uint)uVar52;
  while (plStack_b0 = plStack_250, uVar52 != 0) {
    uVar14 = 0;
    for (uVar15 = uVar34; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
      uVar14 = uVar14 + 1;
    }
    uVar56 = uVar14 + uVar53 & uVar36;
    pcVar2 = puVar54 + uVar56 * -0x18 + -0x18;
    auVar88[0] = -(*pcVar2 == DAT_142e34350);
    auVar88[1] = -(pcVar2[1] == DAT_142e34350._1_1_);
    auVar88[2] = -(pcVar2[2] == DAT_142e34350._2_1_);
    auVar88[3] = -(pcVar2[3] == DAT_142e34350._3_1_);
    auVar88[4] = -(pcVar2[4] == DAT_142e34350._4_1_);
    auVar88[5] = -(pcVar2[5] == DAT_142e34350._5_1_);
    auVar88[6] = -(pcVar2[6] == DAT_142e34350._6_1_);
    auVar88[7] = -(pcVar2[7] == DAT_142e34350._7_1_);
    auVar88[8] = -(pcVar2[8] == DAT_142e34350._8_1_);
    auVar88[9] = -(pcVar2[9] == DAT_142e34350._9_1_);
    auVar88[10] = -(pcVar2[10] == DAT_142e34350._10_1_);
    auVar88[0xb] = -(pcVar2[0xb] == DAT_142e34350._11_1_);
    auVar88[0xc] = -(pcVar2[0xc] == DAT_142e34350._12_1_);
    auVar88[0xd] = -(pcVar2[0xd] == DAT_142e34350._13_1_);
    auVar88[0xe] = -(pcVar2[0xe] == DAT_142e34350._14_1_);
    auVar88[0xf] = -(pcVar2[0xf] == DAT_142e34350._15_1_);
    if ((ushort)((ushort)(SUB161(auVar88 >> 7,0) & 1) | (ushort)(SUB161(auVar88 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar88 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar88 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar88 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar88 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar88 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar88 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar88 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar88 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar88 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar88 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar88 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar88 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar88 >> 0x77,0) & 1) << 0xe | (ushort)(auVar88[0xf] >> 7) << 0xf
                ) == 0xffff) {
      if (((uVar45 <= *(ulonglong *)(puVar54 + uVar56 * -0x18 + -8)) ||
          (uVar53 = *(ulonglong *)(lVar48 + *(ulonglong *)(puVar54 + uVar56 * -0x18 + -8) * 8),
          uVar53 == 0)) || (lVar51 = ~uVar53 * 0x40, *(longlong *)(lVar49 + 0x20 + lVar51) == 0))
      goto LAB_1409637e6;
      plStack_248 = *(longlong **)(lVar51 + lVar49 + 0x10);
      uVar53 = 0x6d79c7fc2d5f98ee;
      lVar51 = 0;
      goto LAB_14096367e;
    }
    uVar52 = (ushort)(uVar34 - 1) & (ushort)uVar34;
    uVar34 = CONCAT22((short)(uVar34 - 1 >> 0x10),uVar52);
  }
  goto LAB_1409635dc;
LAB_14096367e:
  uVar53 = uVar53 & uVar36;
  pcVar2 = puVar54 + uVar53;
  auVar68[0] = -(*pcVar2 == unaff_XMM6_Ba);
  auVar68[1] = -(pcVar2[1] == unaff_XMM6_Bb);
  auVar68[2] = -(pcVar2[2] == unaff_XMM6_Bc);
  auVar68[3] = -(pcVar2[3] == unaff_XMM6_Bd);
  auVar68[4] = -(pcVar2[4] == unaff_XMM6_Be);
  auVar68[5] = -(pcVar2[5] == unaff_XMM6_Bf);
  auVar68[6] = -(pcVar2[6] == unaff_XMM6_Bg);
  auVar68[7] = -(pcVar2[7] == unaff_XMM6_Bh);
  auVar68[8] = -(pcVar2[8] == unaff_XMM6_Bi);
  auVar68[9] = -(pcVar2[9] == unaff_XMM6_Bj);
  auVar68[10] = -(pcVar2[10] == unaff_XMM6_Bk);
  auVar68[0xb] = -(pcVar2[0xb] == unaff_XMM6_Bl);
  auVar68[0xc] = -(pcVar2[0xc] == unaff_XMM6_Bm);
  auVar68[0xd] = -(pcVar2[0xd] == unaff_XMM6_Bn);
  auVar68[0xe] = -(pcVar2[0xe] == unaff_XMM6_Bo);
  auVar68[0xf] = -(pcVar2[0xf] == unaff_XMM6_Bp);
  uVar52 = (ushort)(SUB161(auVar68 >> 7,0) & 1) | (ushort)(SUB161(auVar68 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar68 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar68 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar68 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar68 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar68 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar68 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar68 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar68 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar68 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar68 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar68 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar68 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar68 >> 0x77,0) & 1) << 0xe | (ushort)(auVar68[0xf] >> 7) << 0xf;
  uVar34 = (uint)uVar52;
  while (plStack_a0 = plStack_248, uVar52 != 0) {
    uVar14 = 0;
    for (uVar15 = uVar34; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
      uVar14 = uVar14 + 1;
    }
    uVar56 = uVar14 + uVar53 & uVar36;
    pcVar4 = puVar54 + uVar56 * -0x18 + -0x18;
    auVar69[0] = -(*pcVar4 == unaff_XMM7_Ba);
    auVar69[1] = -(pcVar4[1] == unaff_XMM7_Bb);
    auVar69[2] = -(pcVar4[2] == unaff_XMM7_Bc);
    auVar69[3] = -(pcVar4[3] == unaff_XMM7_Bd);
    auVar69[4] = -(pcVar4[4] == unaff_XMM7_Be);
    auVar69[5] = -(pcVar4[5] == unaff_XMM7_Bf);
    auVar69[6] = -(pcVar4[6] == unaff_XMM7_Bg);
    auVar69[7] = -(pcVar4[7] == unaff_XMM7_Bh);
    auVar69[8] = -(pcVar4[8] == unaff_XMM7_Bi);
    auVar69[9] = -(pcVar4[9] == unaff_XMM7_Bj);
    auVar69[10] = -(pcVar4[10] == unaff_XMM7_Bk);
    auVar69[0xb] = -(pcVar4[0xb] == unaff_XMM7_Bl);
    auVar69[0xc] = -(pcVar4[0xc] == unaff_XMM7_Bm);
    auVar69[0xd] = -(pcVar4[0xd] == unaff_XMM7_Bn);
    auVar69[0xe] = -(pcVar4[0xe] == unaff_XMM7_Bo);
    auVar69[0xf] = -(pcVar4[0xf] == unaff_XMM7_Bp);
    if ((ushort)((ushort)(SUB161(auVar69 >> 7,0) & 1) | (ushort)(SUB161(auVar69 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar69 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar69 >> 0x77,0) & 1) << 0xe | (ushort)(auVar69[0xf] >> 7) << 0xf
                ) == 0xffff) {
      if (((uVar45 <= *(ulonglong *)(puVar54 + uVar56 * -0x18 + -8)) ||
          (uVar53 = *(ulonglong *)(lVar48 + *(ulonglong *)(puVar54 + uVar56 * -0x18 + -8) * 8),
          uVar53 == 0)) || (lVar51 = ~uVar53 * 0x40, *(longlong *)(lVar49 + 0x20 + lVar51) == 0))
      goto LAB_140963ad1;
      uStack_258 = *(undefined8 *)(lVar51 + lVar49 + 0x10);
      uVar53 = 0xe7b8cd022ee6b97f;
      lVar51 = 0;
      goto LAB_140963779;
    }
    uVar52 = (ushort)(uVar34 - 1) & (ushort)uVar34;
    uVar34 = CONCAT22((short)(uVar34 - 1 >> 0x10),uVar52);
  }
  goto LAB_1409636d0;
LAB_140963779:
  uVar53 = uVar53 & uVar36;
  auVar64 = *(undefined1 (*) [16])(puVar54 + uVar53);
  auVar89[0] = -(auVar64[0] == DAT_142e33cb0);
  auVar89[1] = -(auVar64[1] == DAT_142e33cb0._1_1_);
  auVar89[2] = -(auVar64[2] == DAT_142e33cb0._2_1_);
  auVar89[3] = -(auVar64[3] == DAT_142e33cb0._3_1_);
  auVar89[4] = -(auVar64[4] == DAT_142e33cb0._4_1_);
  auVar89[5] = -(auVar64[5] == DAT_142e33cb0._5_1_);
  auVar89[6] = -(auVar64[6] == DAT_142e33cb0._6_1_);
  auVar89[7] = -(auVar64[7] == DAT_142e33cb0._7_1_);
  auVar89[8] = -(auVar64[8] == DAT_142e33cb0._8_1_);
  auVar89[9] = -(auVar64[9] == DAT_142e33cb0._9_1_);
  auVar89[10] = -(auVar64[10] == DAT_142e33cb0._10_1_);
  auVar89[0xb] = -(auVar64[0xb] == DAT_142e33cb0._11_1_);
  auVar89[0xc] = -(auVar64[0xc] == DAT_142e33cb0._12_1_);
  auVar89[0xd] = -(auVar64[0xd] == DAT_142e33cb0._13_1_);
  auVar89[0xe] = -(auVar64[0xe] == DAT_142e33cb0._14_1_);
  auVar89[0xf] = -(auVar64[0xf] == DAT_142e33cb0._15_1_);
  uVar52 = (ushort)(SUB161(auVar89 >> 7,0) & 1) | (ushort)(SUB161(auVar89 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar89 >> 0x77,0) & 1) << 0xe | (ushort)(auVar89[0xf] >> 7) << 0xf;
  uVar34 = (uint)uVar52;
  while (uVar52 != 0) {
    uVar14 = 0;
    for (uVar15 = uVar34; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
      uVar14 = uVar14 + 1;
    }
    uVar56 = uVar14 + uVar53 & uVar36;
    pcVar2 = puVar54 + uVar56 * -0x18 + -0x18;
    auVar90[0] = -(*pcVar2 == DAT_143027180);
    auVar90[1] = -(pcVar2[1] == DAT_143027180._1_1_);
    auVar90[2] = -(pcVar2[2] == DAT_143027180._2_1_);
    auVar90[3] = -(pcVar2[3] == DAT_143027180._3_1_);
    auVar90[4] = -(pcVar2[4] == DAT_143027180._4_1_);
    auVar90[5] = -(pcVar2[5] == DAT_143027180._5_1_);
    auVar90[6] = -(pcVar2[6] == DAT_143027180._6_1_);
    auVar90[7] = -(pcVar2[7] == DAT_143027180._7_1_);
    auVar90[8] = -(pcVar2[8] == DAT_143027180._8_1_);
    auVar90[9] = -(pcVar2[9] == DAT_143027180._9_1_);
    auVar90[10] = -(pcVar2[10] == DAT_143027180._10_1_);
    auVar90[0xb] = -(pcVar2[0xb] == DAT_143027180._11_1_);
    auVar90[0xc] = -(pcVar2[0xc] == DAT_143027180._12_1_);
    auVar90[0xd] = -(pcVar2[0xd] == DAT_143027180._13_1_);
    auVar90[0xe] = -(pcVar2[0xe] == DAT_143027180._14_1_);
    auVar90[0xf] = -(pcVar2[0xf] == DAT_143027180._15_1_);
    if ((ushort)((ushort)(SUB161(auVar90 >> 7,0) & 1) | (ushort)(SUB161(auVar90 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar90 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar90 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar90 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar90 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar90 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar90 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar90 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar90 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar90 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar90 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar90 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar90 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar90 >> 0x77,0) & 1) << 0xe | (ushort)(auVar90[0xf] >> 7) << 0xf
                ) == 0xffff) {
      if (((uVar45 <= *(ulonglong *)(puVar54 + uVar56 * -0x18 + -8)) ||
          (uVar45 = *(ulonglong *)(lVar48 + *(ulonglong *)(puVar54 + uVar56 * -0x18 + -8) * 8),
          uVar45 == 0)) || (lVar48 = ~uVar45 * 0x40, *(longlong *)(lVar49 + 0x20 + lVar48) == 0))
      goto LAB_140963b04;
      uStack_240 = *(undefined8 *)(lVar49 + lVar48 + 0x10);
      ppuStack_270 = ppuStack_e8 + lVar35 * 3;
      ppuStack_278 = ppuStack_e8;
      plStack_268 = plStack_138;
      pdb_1415e9d80(&puStack_d8,&ppuStack_278);
      cVar129 = UNK_14302062f;
      cVar128 = UNK_14302062e;
      cVar127 = UNK_14302062d;
      cVar126 = UNK_14302062c;
      cVar125 = UNK_14302062b;
      cVar124 = UNK_14302062a;
      cVar123 = UNK_143020629;
      cVar122 = UNK_143020628;
      cVar121 = UNK_143020627;
      cVar120 = UNK_143020626;
      cVar119 = UNK_143020625;
      cVar118 = UNK_143020624;
      cVar117 = UNK_143020623;
      cVar116 = UNK_143020622;
      cVar115 = UNK_143020621;
      cVar114 = DAT_143020620;
      cVar113 = UNK_142e343af;
      cVar112 = UNK_142e343ae;
      cVar111 = UNK_142e343ad;
      cVar110 = UNK_142e343ac;
      cVar109 = UNK_142e343ab;
      cVar108 = UNK_142e343aa;
      cVar107 = UNK_142e343a9;
      cVar106 = UNK_142e343a8;
      cVar105 = UNK_142e343a7;
      cVar104 = UNK_142e343a6;
      cVar103 = UNK_142e343a5;
      cVar102 = UNK_142e343a4;
      cVar101 = UNK_142e343a3;
      cVar100 = UNK_142e343a2;
      cVar99 = UNK_142e343a1;
      cVar33 = DAT_142e343a0;
      ppuStack_270 = (undefined8 **)CONCAT71(uStack_cf,bStack_d0);
      uStack_260 = ppuStack_270 + (longlong)puStack_c8 * 2;
      plStack_268 = puStack_d8;
      ppuStack_278 = ppuStack_270;
      ppuVar12 = ppuStack_270;
      if (ppuStack_270 == uStack_260) goto LAB_140963ab5;
      goto LAB_1409638fd;
    }
    uVar52 = (ushort)(uVar34 - 1) & (ushort)uVar34;
    uVar34 = CONCAT22((short)(uVar34 - 1 >> 0x10),uVar52);
  }
  goto LAB_1409637c9;
LAB_1409638fd:
  do {
    ppuVar12 = ppuStack_270 + 2;
    puVar40 = *ppuStack_270;
    uVar45 = (ulonglong)puVar40 & 0xffffffff;
    if (uVar45 == 0) break;
    plStack_130 = ppuStack_270[1];
    uVar45 = uVar45 ^ 0xffffffff;
    ppuStack_270 = ppuVar12;
    if (((uVar45 < *(ulonglong *)(param_1 + 0x10)) &&
        (piVar41 = (int *)(uVar45 * 0x18 + *(longlong *)(param_1 + 8)),
        piVar41[4] == (int)((ulonglong)puVar40 >> 0x20))) &&
       ((*piVar41 != 0 && (*(longlong *)(param_1 + 0x68) != 0)))) {
      iVar50 = piVar41[1];
      uVar10 = *(undefined4 *)(param_1 + 0x5a8);
      lVar35 = *(longlong *)(param_1 + 0x50);
      lVar48 = 0;
      uVar45 = 0x5a7e9e04c4acc2c5;
      while( true ) {
        uVar45 = uVar45 & *(ulonglong *)(param_1 + 0x58);
        auVar64 = *(undefined1 (*) [16])(lVar35 + uVar45);
        auVar62[0] = -(auVar64[0] == cVar33);
        auVar62[1] = -(auVar64[1] == cVar99);
        auVar62[2] = -(auVar64[2] == cVar100);
        auVar62[3] = -(auVar64[3] == cVar101);
        auVar62[4] = -(auVar64[4] == cVar102);
        auVar62[5] = -(auVar64[5] == cVar103);
        auVar62[6] = -(auVar64[6] == cVar104);
        auVar62[7] = -(auVar64[7] == cVar105);
        auVar62[8] = -(auVar64[8] == cVar106);
        auVar62[9] = -(auVar64[9] == cVar107);
        auVar62[10] = -(auVar64[10] == cVar108);
        auVar62[0xb] = -(auVar64[0xb] == cVar109);
        auVar62[0xc] = -(auVar64[0xc] == cVar110);
        auVar62[0xd] = -(auVar64[0xd] == cVar111);
        auVar62[0xe] = -(auVar64[0xe] == cVar112);
        auVar62[0xf] = -(auVar64[0xf] == cVar113);
        uVar52 = (ushort)(SUB161(auVar62 >> 7,0) & 1) | (ushort)(SUB161(auVar62 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar62 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar62 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar62 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar62 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar62 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar62 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar62 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar62 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar62 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar62 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar62 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar62 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar62 >> 0x77,0) & 1) << 0xe | (ushort)(auVar62[0xf] >> 7) << 0xf
        ;
        uVar34 = (uint)uVar52;
        while (plStack_b0 = plStack_130, uVar52 != 0) {
          uVar14 = 0;
          for (uVar15 = uVar34; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
            uVar14 = uVar14 + 1;
          }
          uVar36 = uVar14 + uVar45 & *(ulonglong *)(param_1 + 0x58);
          pcVar2 = (char *)(lVar35 + -0x18 + uVar36 * -0x18);
          auVar63[0] = -(*pcVar2 == cVar114);
          auVar63[1] = -(pcVar2[1] == cVar115);
          auVar63[2] = -(pcVar2[2] == cVar116);
          auVar63[3] = -(pcVar2[3] == cVar117);
          auVar63[4] = -(pcVar2[4] == cVar118);
          auVar63[5] = -(pcVar2[5] == cVar119);
          auVar63[6] = -(pcVar2[6] == cVar120);
          auVar63[7] = -(pcVar2[7] == cVar121);
          auVar63[8] = -(pcVar2[8] == cVar122);
          auVar63[9] = -(pcVar2[9] == cVar123);
          auVar63[10] = -(pcVar2[10] == cVar124);
          auVar63[0xb] = -(pcVar2[0xb] == cVar125);
          auVar63[0xc] = -(pcVar2[0xc] == cVar126);
          auVar63[0xd] = -(pcVar2[0xd] == cVar127);
          auVar63[0xe] = -(pcVar2[0xe] == cVar128);
          auVar63[0xf] = -(pcVar2[0xf] == cVar129);
          if ((ushort)((ushort)(SUB161(auVar63 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar63 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar63 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar63 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar63 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar63 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar63 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar63 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar63 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar63 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar63 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar63 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar63 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar63 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar63 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar63[0xf] >> 7) << 0xf) == 0xffff) {
            if (*(ulonglong *)(param_1 + 0x1a8) <= (ulonglong)(uint)piVar41[3]) goto LAB_140963a9b;
            uVar43 = *(undefined8 *)(lVar35 + uVar36 * -0x18 + -8);
            lVar35 = (ulonglong)(uint)piVar41[3] * 0x48 + *(longlong *)(param_1 + 0x1a0);
            uStack_92 = 1;
            plStack_a0 = (longlong *)pdb_140eff5a0(lVar35,uVar43);
            if (plStack_a0 == (longlong *)0x0) goto LAB_140963a9b;
            uStack_92 = 1;
            pdb_140eff5e0(lVar35,uVar43,iVar50);
            uStack_92 = 1;
            puVar42 = (undefined4 *)pdb_140eff620(lVar35,uVar43);
            *puVar42 = uVar10;
            if (*plStack_a0 != 0) {
              pdb_14098d520(plStack_a0);
            }
            *plStack_a0 = (longlong)plStack_b0;
            goto LAB_140963aa4;
          }
          uVar52 = (ushort)(uVar34 - 1) & (ushort)uVar34;
          uVar34 = CONCAT22((short)(uVar34 - 1 >> 0x10),uVar52);
        }
        auVar57[0] = -(auVar64[0] == -1);
        auVar57[1] = -(auVar64[1] == -1);
        auVar57[2] = -(auVar64[2] == -1);
        auVar57[3] = -(auVar64[3] == -1);
        auVar57[4] = -(auVar64[4] == -1);
        auVar57[5] = -(auVar64[5] == -1);
        auVar57[6] = -(auVar64[6] == -1);
        auVar57[7] = -(auVar64[7] == -1);
        auVar57[8] = -(auVar64[8] == -1);
        auVar57[9] = -(auVar64[9] == -1);
        auVar57[10] = -(auVar64[10] == -1);
        auVar57[0xb] = -(auVar64[0xb] == -1);
        auVar57[0xc] = -(auVar64[0xc] == -1);
        auVar57[0xd] = -(auVar64[0xd] == -1);
        auVar57[0xe] = -(auVar64[0xe] == -1);
        auVar57[0xf] = -(auVar64[0xf] == -1);
        if ((((((((((((((((SUB161(auVar57 >> 7,0) & 1) != 0 || (SUB161(auVar57 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar57 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar57 >> 0x1f,0) & 1) != 0) || (SUB161(auVar57 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar57 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar57 >> 0x37,0) & 1) != 0) || (SUB161(auVar57 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar57 >> 0x47,0) & 1) != 0) || (SUB161(auVar57 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar57 >> 0x57,0) & 1) != 0) || (SUB161(auVar57 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar57 >> 0x67,0) & 1) != 0) || (SUB161(auVar57 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar57 >> 0x77,0) & 1) != 0) || auVar57[0xf] < '\0') break;
        uVar45 = uVar45 + lVar48 + 0x10;
        lVar48 = lVar48 + 0x10;
      }
    }
LAB_140963a9b:
    pdb_14098d520(&plStack_130);
LAB_140963aa4:
    ppuVar12 = ppuStack_270;
  } while (ppuStack_270 != uStack_260);
LAB_140963ab5:
  ppuStack_270 = ppuVar12;
  pdb_140974b00(&ppuStack_278);
  pdb_14097dba0(&lStack_f0);
  goto LAB_14096306b;
LAB_1409637c9:
  auVar77[0] = -(auVar64[0] == -1);
  auVar77[1] = -(auVar64[1] == -1);
  auVar77[2] = -(auVar64[2] == -1);
  auVar77[3] = -(auVar64[3] == -1);
  auVar77[4] = -(auVar64[4] == -1);
  auVar77[5] = -(auVar64[5] == -1);
  auVar77[6] = -(auVar64[6] == -1);
  auVar77[7] = -(auVar64[7] == -1);
  auVar77[8] = -(auVar64[8] == -1);
  auVar77[9] = -(auVar64[9] == -1);
  auVar77[10] = -(auVar64[10] == -1);
  auVar77[0xb] = -(auVar64[0xb] == -1);
  auVar77[0xc] = -(auVar64[0xc] == -1);
  auVar77[0xd] = -(auVar64[0xd] == -1);
  auVar77[0xe] = -(auVar64[0xe] == -1);
  auVar77[0xf] = -(auVar64[0xf] == -1);
  if ((((((((((((((((SUB161(auVar77 >> 7,0) & 1) != 0 || (SUB161(auVar77 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar77 >> 0x17,0) & 1) != 0) || (SUB161(auVar77 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar77 >> 0x27,0) & 1) != 0) || (SUB161(auVar77 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar77 >> 0x37,0) & 1) != 0) || (SUB161(auVar77 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar77 >> 0x47,0) & 1) != 0) || (SUB161(auVar77 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar77 >> 0x57,0) & 1) != 0) || (SUB161(auVar77 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar77 >> 0x67,0) & 1) != 0) || (SUB161(auVar77 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar77 >> 0x77,0) & 1) != 0) || auVar77[0xf] < '\0') {
LAB_140963b04:
    ppuStack_278 = (undefined8 **)&uStack_91;
    ppuStack_270 = (undefined8 **)pdb_140f33ec0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_143027898,&ppuStack_278,&UNK_1430274a8);
  }
  uVar53 = uVar53 + lVar51 + 0x10;
  lVar51 = lVar51 + 0x10;
  goto LAB_140963779;
LAB_1409636d0:
  auVar61[0] = -(*pcVar2 == -1);
  auVar61[1] = -(pcVar2[1] == -1);
  auVar61[2] = -(pcVar2[2] == -1);
  auVar61[3] = -(pcVar2[3] == -1);
  auVar61[4] = -(pcVar2[4] == -1);
  auVar61[5] = -(pcVar2[5] == -1);
  auVar61[6] = -(pcVar2[6] == -1);
  auVar61[7] = -(pcVar2[7] == -1);
  auVar61[8] = -(pcVar2[8] == -1);
  auVar61[9] = -(pcVar2[9] == -1);
  auVar61[10] = -(pcVar2[10] == -1);
  auVar61[0xb] = -(pcVar2[0xb] == -1);
  auVar61[0xc] = -(pcVar2[0xc] == -1);
  auVar61[0xd] = -(pcVar2[0xd] == -1);
  auVar61[0xe] = -(pcVar2[0xe] == -1);
  auVar61[0xf] = -(pcVar2[0xf] == -1);
  if ((((((((((((((((SUB161(auVar61 >> 7,0) & 1) != 0 || (SUB161(auVar61 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar61 >> 0x17,0) & 1) != 0) || (SUB161(auVar61 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar61 >> 0x27,0) & 1) != 0) || (SUB161(auVar61 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar61 >> 0x37,0) & 1) != 0) || (SUB161(auVar61 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar61 >> 0x47,0) & 1) != 0) || (SUB161(auVar61 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar61 >> 0x57,0) & 1) != 0) || (SUB161(auVar61 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar61 >> 0x67,0) & 1) != 0) || (SUB161(auVar61 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar61 >> 0x77,0) & 1) != 0) || auVar61[0xf] < '\0') {
LAB_140963ad1:
    ppuStack_278 = (undefined8 **)&uStack_91;
    ppuStack_270 = (undefined8 **)pdb_140f33ec0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_143027898,&ppuStack_278,&UNK_143027490);
  }
  uVar53 = uVar53 + lVar51 + 0x10;
  lVar51 = lVar51 + 0x10;
  goto LAB_14096367e;
LAB_1409635dc:
  auVar76[0] = -(auVar64[0] == -1);
  auVar76[1] = -(auVar64[1] == -1);
  auVar76[2] = -(auVar64[2] == -1);
  auVar76[3] = -(auVar64[3] == -1);
  auVar76[4] = -(auVar64[4] == -1);
  auVar76[5] = -(auVar64[5] == -1);
  auVar76[6] = -(auVar64[6] == -1);
  auVar76[7] = -(auVar64[7] == -1);
  auVar76[8] = -(auVar64[8] == -1);
  auVar76[9] = -(auVar64[9] == -1);
  auVar76[10] = -(auVar64[10] == -1);
  auVar76[0xb] = -(auVar64[0xb] == -1);
  auVar76[0xc] = -(auVar64[0xc] == -1);
  auVar76[0xd] = -(auVar64[0xd] == -1);
  auVar76[0xe] = -(auVar64[0xe] == -1);
  auVar76[0xf] = -(auVar64[0xf] == -1);
  if ((((((((((((((((SUB161(auVar76 >> 7,0) & 1) != 0 || (SUB161(auVar76 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar76 >> 0x17,0) & 1) != 0) || (SUB161(auVar76 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar76 >> 0x27,0) & 1) != 0) || (SUB161(auVar76 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar76 >> 0x37,0) & 1) != 0) || (SUB161(auVar76 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar76 >> 0x47,0) & 1) != 0) || (SUB161(auVar76 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar76 >> 0x57,0) & 1) != 0) || (SUB161(auVar76 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar76 >> 0x67,0) & 1) != 0) || (SUB161(auVar76 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar76 >> 0x77,0) & 1) != 0) || auVar76[0xf] < '\0') {
LAB_1409637e6:
    ppuStack_278 = (undefined8 **)&uStack_91;
    ppuStack_270 = (undefined8 **)pdb_140f33ec0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_143027898,&ppuStack_278,&UNK_143027478);
  }
  uVar53 = uVar53 + lVar51 + 0x10;
  lVar51 = lVar51 + 0x10;
  goto LAB_14096358a;
}

