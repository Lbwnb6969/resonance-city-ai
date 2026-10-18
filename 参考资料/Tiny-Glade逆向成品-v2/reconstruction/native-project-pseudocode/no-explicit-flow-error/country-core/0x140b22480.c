// VA 0x140b22480, PDB extent 1718 bytes
// country_core::systems::render_loop::compute_passes::grass2::load_grass2_lod0_materials
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/grass2.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::grass2::load_grass2_lod0_materials
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/grass2.rs
   Extent: 1718 */

longlong * pdb_140b22480(longlong *param_1,longlong param_2,longlong param_3)

{
  char *pcVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
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
  char cVar24;
  char cVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  char cVar29;
  ushort uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  longlong lVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  longlong lVar38;
  longlong lVar39;
  undefined8 uVar40;
  longlong lVar41;
  longlong lVar42;
  uint uVar43;
  undefined4 uVar44;
  longlong lVar45;
  longlong lVar46;
  longlong lVar47;
  byte bVar48;
  float fVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 unaff_XMM6_Ba;
  char cVar54;
  undefined1 unaff_XMM6_Bb;
  char cVar55;
  undefined1 unaff_XMM6_Bc;
  char cVar56;
  undefined1 unaff_XMM6_Bd;
  char cVar57;
  undefined1 unaff_XMM6_Be;
  char cVar58;
  undefined1 unaff_XMM6_Bf;
  char cVar59;
  undefined1 unaff_XMM6_Bg;
  char cVar60;
  undefined1 unaff_XMM6_Bh;
  char cVar61;
  undefined1 unaff_XMM6_Bi;
  char cVar62;
  undefined1 unaff_XMM6_Bj;
  char cVar63;
  undefined1 unaff_XMM6_Bk;
  char cVar64;
  undefined1 unaff_XMM6_Bl;
  char cVar65;
  undefined1 unaff_XMM6_Bm;
  char cVar66;
  undefined1 unaff_XMM6_Bn;
  char cVar67;
  undefined1 unaff_XMM6_Bo;
  char cVar68;
  undefined1 unaff_XMM6_Bp;
  char cVar69;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  longlong lStack_120;
  longlong lStack_118;
  longlong lStack_110;
  longlong lStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  longlong lStack_d0;
  ulonglong uStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  undefined8 uStack_b0;
  
  fVar28 = _DAT_142e46a48;
  fVar27 = _DAT_142e37adc;
  uStack_b0 = 0xfffffffffffffffe;
  lStack_100 = 0;
  lStack_f8 = 4;
  lStack_f0 = 0;
  lStack_118 = 0;
  lStack_110 = 4;
  lStack_108 = 0;
  lVar3 = *(longlong *)(param_2 + 0x68);
  lVar4 = *(longlong *)(param_2 + 0x70);
  lStack_120 = 4;
  iVar9 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                           CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                 CONCAT13(unaff_XMM6_Bd,
                          CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
  cVar54 = (char)iVar9;
  cVar55 = (char)((uint)iVar9 >> 8);
  cVar56 = (char)((uint)iVar9 >> 0x10);
  cVar57 = (char)((uint)iVar9 >> 0x18);
  iVar9 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                           CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                 CONCAT13(unaff_XMM6_Bh,
                          CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
  cVar58 = (char)iVar9;
  cVar59 = (char)((uint)iVar9 >> 8);
  cVar60 = (char)((uint)iVar9 >> 0x10);
  cVar61 = (char)((uint)iVar9 >> 0x18);
  iVar9 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                           CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                 CONCAT13(unaff_XMM6_Bl,
                          CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
  cVar62 = (char)iVar9;
  cVar63 = (char)((uint)iVar9 >> 8);
  cVar64 = (char)((uint)iVar9 >> 0x10);
  cVar65 = (char)((uint)iVar9 >> 0x18);
  iVar9 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                           CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                 CONCAT13(unaff_XMM6_Bp,
                          CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
  cVar66 = (char)iVar9;
  cVar67 = (char)((uint)iVar9 >> 8);
  cVar68 = (char)((uint)iVar9 >> 0x10);
  cVar69 = (char)((uint)iVar9 >> 0x18);
  lStack_b8 = 0;
  lVar42 = lVar3;
  lStack_c0 = param_3;
LAB_140b22550:
  do {
    lVar41 = lVar42;
    if (lVar41 == lVar3 + lVar4 * 0x48) {
      param_1[2] = lStack_f0;
      *param_1 = lStack_100;
      param_1[1] = lStack_f8;
      param_1[3] = lStack_118;
      param_1[4] = lStack_110;
      param_1[5] = lStack_108;
      return param_1;
    }
    lVar42 = lVar41 + 0x48;
  } while (*(longlong *)(lVar41 + 0x28) == 0);
  lVar47 = *(longlong *)(lVar41 + 0x20);
  lVar33 = *(longlong *)(lVar41 + 0x28) * 0xd0 + lVar47;
LAB_140b2257c:
  uStack_e0 = *(undefined8 *)(lVar41 + 8);
  uStack_d8 = *(undefined8 *)(lVar41 + 0x10);
  uVar34 = pdb_140df4400();
  lVar45 = lStack_d0;
  uStack_c8 = uVar34;
  if (*(longlong *)(lStack_c0 + 0x60) != 0) {
    lVar38 = *(longlong *)(lStack_c0 + 0x48);
    uVar37 = *(ulonglong *)(lStack_c0 + 0x50);
    bVar48 = (byte)(uVar34 >> 0x39);
    auVar50 = ZEXT216(CONCAT11(bVar48,bVar48));
    auVar50 = pshuflw(auVar50,auVar50,0);
    lVar46 = 0;
    do {
      lVar39 = lVar47 + 0xd0;
      uVar34 = uVar34 & uVar37;
      pcVar1 = (char *)(lVar38 + uVar34);
      cVar10 = *pcVar1;
      cVar11 = pcVar1[1];
      cVar12 = pcVar1[2];
      cVar13 = pcVar1[3];
      cVar14 = pcVar1[4];
      cVar15 = pcVar1[5];
      cVar16 = pcVar1[6];
      cVar17 = pcVar1[7];
      cVar18 = pcVar1[8];
      cVar19 = pcVar1[9];
      cVar20 = pcVar1[10];
      cVar21 = pcVar1[0xb];
      cVar22 = pcVar1[0xc];
      cVar23 = pcVar1[0xd];
      cVar24 = pcVar1[0xe];
      cVar25 = pcVar1[0xf];
      auVar51[0] = -(cVar10 == auVar50[0]);
      auVar51[1] = -(cVar11 == auVar50[1]);
      auVar51[2] = -(cVar12 == auVar50[2]);
      auVar51[3] = -(cVar13 == auVar50[3]);
      auVar51[4] = -(cVar14 == auVar50[4]);
      auVar51[5] = -(cVar15 == auVar50[5]);
      auVar51[6] = -(cVar16 == auVar50[6]);
      auVar51[7] = -(cVar17 == auVar50[7]);
      auVar51[8] = -(cVar18 == auVar50[0]);
      auVar51[9] = -(cVar19 == auVar50[1]);
      auVar51[10] = -(cVar20 == auVar50[2]);
      auVar51[0xb] = -(cVar21 == auVar50[3]);
      auVar51[0xc] = -(cVar22 == auVar50[4]);
      auVar51[0xd] = -(cVar23 == auVar50[5]);
      auVar51[0xe] = -(cVar24 == auVar50[6]);
      auVar51[0xf] = -(cVar25 == auVar50[7]);
      uVar30 = (ushort)(SUB161(auVar51 >> 7,0) & 1) | (ushort)(SUB161(auVar51 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar51 >> 0x77,0) & 1) << 0xe | (ushort)(auVar51[0xf] >> 7) << 0xf;
      uVar43 = (uint)uVar30;
      lVar45 = lStack_d0;
      while (lStack_d0 = lVar46, uVar30 != 0) {
        uVar7 = 0;
        for (uVar8 = uVar43; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        uVar35 = uVar7 + uVar34 & uVar37;
        cVar29 = pdb_140df4430(&uStack_c8,lVar38 + uVar35 * -0x18 + -0x18);
        if (cVar29 != '\0') {
          uVar31 = pdb_140a2ec70(lStack_c0,*(undefined8 *)(lVar38 + uVar35 * -0x18 + -0x10));
          uVar32 = *(undefined4 *)(lVar41 + 0x30);
          fVar49 = (float)pub_142e32b00(*(float *)(lVar47 + 200) * fVar27);
          lVar45 = lStack_f0;
          uVar44 = (undefined4)(longlong)fVar49;
          if (fVar49 < 0.0) {
            uVar44 = 0;
          }
          if (fVar28 < fVar49) {
            uVar44 = 0xffffffff;
          }
          uVar40 = *(undefined8 *)(lVar41 + 0x34);
          uVar26 = *(undefined8 *)(lVar41 + 0x3c);
          if (lStack_f0 == lStack_100) {
            pdb_142d8a7a0(&lStack_100);
          }
          lVar38 = lVar45 * 0x20;
          *(undefined4 *)(lStack_f8 + lVar38) = uVar31;
          *(int *)(lStack_f8 + 4 + lVar38) = (int)lStack_b8;
          *(undefined4 *)(lStack_f8 + 8 + lVar38) = uVar32;
          *(undefined4 *)(lStack_f8 + 0xc + lVar38) = uVar44;
          puVar2 = (undefined8 *)(lStack_f8 + 0x10 + lVar38);
          *puVar2 = uVar40;
          puVar2[1] = uVar26;
          lStack_f0 = lVar45 + 1;
          lStack_d0 = *(longlong *)(lVar47 + 0x90);
          uVar34 = *(ulonglong *)(lVar47 + 0x98);
          if ((ulonglong)(lStack_118 - lStack_b8) < uVar34) {
            pdb_142d7f1b0(&lStack_118,lStack_b8,uVar34,4,0xc);
            lStack_120 = lStack_110;
            lStack_b8 = lStack_108;
          }
          else if (uVar34 == 0) goto LAB_140b229a0;
          uVar37 = 0;
LAB_140b22749:
          uVar40 = *(undefined8 *)(lStack_d0 + uVar37 * 0x30);
          uStack_e0 = pdb_140c23e60(param_2);
          uStack_d8 = uVar40;
          uVar35 = pdb_140df4400(uStack_e0);
          lVar47 = lStack_e8;
          uStack_c8 = uVar35;
          if (*(longlong *)(lStack_c0 + 0x60) != 0) {
            lVar46 = uVar37 * 0x30 + lStack_d0;
            lVar45 = *(longlong *)(lStack_c0 + 0x48);
            uVar5 = *(ulonglong *)(lStack_c0 + 0x50);
            bVar48 = (byte)(uVar35 >> 0x39);
            auVar50 = ZEXT216(CONCAT11(bVar48,bVar48));
            auVar50 = pshuflw(auVar50,auVar50,0);
            lVar38 = 0;
            while( true ) {
              uVar35 = uVar35 & uVar5;
              pcVar1 = (char *)(lVar45 + uVar35);
              cVar10 = *pcVar1;
              cVar11 = pcVar1[1];
              cVar12 = pcVar1[2];
              cVar13 = pcVar1[3];
              cVar14 = pcVar1[4];
              cVar15 = pcVar1[5];
              cVar16 = pcVar1[6];
              cVar17 = pcVar1[7];
              cVar18 = pcVar1[8];
              cVar19 = pcVar1[9];
              cVar20 = pcVar1[10];
              cVar21 = pcVar1[0xb];
              cVar22 = pcVar1[0xc];
              cVar23 = pcVar1[0xd];
              cVar24 = pcVar1[0xe];
              cVar25 = pcVar1[0xf];
              auVar52[0] = -(cVar10 == auVar50[0]);
              auVar52[1] = -(cVar11 == auVar50[1]);
              auVar52[2] = -(cVar12 == auVar50[2]);
              auVar52[3] = -(cVar13 == auVar50[3]);
              auVar52[4] = -(cVar14 == auVar50[4]);
              auVar52[5] = -(cVar15 == auVar50[5]);
              auVar52[6] = -(cVar16 == auVar50[6]);
              auVar52[7] = -(cVar17 == auVar50[7]);
              auVar52[8] = -(cVar18 == auVar50[0]);
              auVar52[9] = -(cVar19 == auVar50[1]);
              auVar52[10] = -(cVar20 == auVar50[2]);
              auVar52[0xb] = -(cVar21 == auVar50[3]);
              auVar52[0xc] = -(cVar22 == auVar50[4]);
              auVar52[0xd] = -(cVar23 == auVar50[5]);
              auVar52[0xe] = -(cVar24 == auVar50[6]);
              auVar52[0xf] = -(cVar25 == auVar50[7]);
              uVar30 = (ushort)(SUB161(auVar52 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar52 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar52 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar52 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar52 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar52 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar52 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar52 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar52 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar52 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar52 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar52 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar52 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar52 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar52 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar52[0xf] >> 7) << 0xf;
              uVar43 = (uint)uVar30;
              lVar47 = lStack_e8;
              while (lStack_e8 = lVar38, uVar30 != 0) {
                uVar7 = 0;
                for (uVar8 = uVar43; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
                  uVar7 = uVar7 + 1;
                }
                uVar36 = uVar7 + uVar35 & uVar5;
                cVar29 = pdb_140df4430(&uStack_c8,lVar45 + uVar36 * -0x18 + -0x18);
                if (cVar29 != '\0') {
                  uVar32 = pdb_140a2ec70(lStack_c0,*(undefined8 *)(lVar45 + uVar36 * -0x18 + -0x10))
                  ;
                  lStack_e8 = CONCAT44(lStack_e8._4_4_,uVar32);
                  uVar40 = *(undefined8 *)(lVar46 + 0x10);
                  uStack_e0 = pdb_140c23e60(param_2);
                  uStack_d8 = uVar40;
                  uVar35 = pdb_140df4400(uStack_e0);
                  uStack_c8 = uVar35;
                  if (*(longlong *)(lStack_c0 + 0x60) == 0) goto LAB_140b22a70;
                  lVar47 = *(longlong *)(lStack_c0 + 0x48);
                  uVar5 = *(ulonglong *)(lStack_c0 + 0x50);
                  bVar48 = (byte)(uVar35 >> 0x39);
                  auVar50 = ZEXT216(CONCAT11(bVar48,bVar48));
                  auVar50 = pshuflw(auVar50,auVar50,0);
                  lVar45 = 0;
                  goto LAB_140b228c2;
                }
                uVar30 = (ushort)(uVar43 - 1) & (ushort)uVar43;
                uVar43 = CONCAT22((short)(uVar43 - 1 >> 0x10),uVar30);
                lVar38 = lStack_e8;
                lVar47 = lStack_e8;
              }
              auVar71[0] = -(cVar10 == cVar54);
              auVar71[1] = -(cVar11 == cVar55);
              auVar71[2] = -(cVar12 == cVar56);
              auVar71[3] = -(cVar13 == cVar57);
              auVar71[4] = -(cVar14 == cVar58);
              auVar71[5] = -(cVar15 == cVar59);
              auVar71[6] = -(cVar16 == cVar60);
              auVar71[7] = -(cVar17 == cVar61);
              auVar71[8] = -(cVar18 == cVar62);
              auVar71[9] = -(cVar19 == cVar63);
              auVar71[10] = -(cVar20 == cVar64);
              auVar71[0xb] = -(cVar21 == cVar65);
              auVar71[0xc] = -(cVar22 == cVar66);
              auVar71[0xd] = -(cVar23 == cVar67);
              auVar71[0xe] = -(cVar24 == cVar68);
              auVar71[0xf] = -(cVar25 == cVar69);
              if ((((((((((((((((SUB161(auVar71 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar71 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar71 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar71 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar71 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar71 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar71 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar71 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar71 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar71 >> 0x4f,0) & 1) != 0) || (SUB161(auVar71 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar71 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar71 >> 0x67,0) & 1) != 0) || (SUB161(auVar71 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar71 >> 0x77,0) & 1) != 0) || auVar71[0xf] < '\0') break;
              uVar35 = uVar35 + lStack_e8 + 0x10;
              lVar38 = lStack_e8 + 0x10;
              lStack_e8 = lVar47;
            }
          }
          lStack_e8 = lVar47;
          pdb_142d8fbc0(&uStack_e0);
          goto LAB_140b22a7a;
        }
        uVar30 = (ushort)(uVar43 - 1) & (ushort)uVar43;
        uVar43 = CONCAT22((short)(uVar43 - 1 >> 0x10),uVar30);
        lVar46 = lStack_d0;
        lVar45 = lStack_d0;
      }
      auVar70[0] = -(cVar10 == cVar54);
      auVar70[1] = -(cVar11 == cVar55);
      auVar70[2] = -(cVar12 == cVar56);
      auVar70[3] = -(cVar13 == cVar57);
      auVar70[4] = -(cVar14 == cVar58);
      auVar70[5] = -(cVar15 == cVar59);
      auVar70[6] = -(cVar16 == cVar60);
      auVar70[7] = -(cVar17 == cVar61);
      auVar70[8] = -(cVar18 == cVar62);
      auVar70[9] = -(cVar19 == cVar63);
      auVar70[10] = -(cVar20 == cVar64);
      auVar70[0xb] = -(cVar21 == cVar65);
      auVar70[0xc] = -(cVar22 == cVar66);
      auVar70[0xd] = -(cVar23 == cVar67);
      auVar70[0xe] = -(cVar24 == cVar68);
      auVar70[0xf] = -(cVar25 == cVar69);
      if ((((((((((((((((SUB161(auVar70 >> 7,0) & 1) != 0 || (SUB161(auVar70 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar70 >> 0x17,0) & 1) != 0) || (SUB161(auVar70 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar70 >> 0x27,0) & 1) != 0) || (SUB161(auVar70 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar70 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar70 >> 0x3f,0) & 1) != 0) || (SUB161(auVar70 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar70 >> 0x4f,0) & 1) != 0) || (SUB161(auVar70 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar70 >> 0x5f,0) & 1) != 0) || (SUB161(auVar70 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar70 >> 0x6f,0) & 1) != 0) || (SUB161(auVar70 >> 0x77,0) & 1) != 0) ||
          auVar70[0xf] < '\0') break;
      uVar34 = uVar34 + lStack_d0 + 0x10;
      lVar46 = lStack_d0 + 0x10;
      lStack_d0 = lVar45;
    } while( true );
  }
  lStack_d0 = lVar45;
  pdb_142d8fbc0(&uStack_e0);
LAB_140b22a7a:
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
LAB_140b228c2:
  uVar35 = uVar35 & uVar5;
  pcVar1 = (char *)(lVar47 + uVar35);
  cVar10 = *pcVar1;
  cVar11 = pcVar1[1];
  cVar12 = pcVar1[2];
  cVar13 = pcVar1[3];
  cVar14 = pcVar1[4];
  cVar15 = pcVar1[5];
  cVar16 = pcVar1[6];
  cVar17 = pcVar1[7];
  cVar18 = pcVar1[8];
  cVar19 = pcVar1[9];
  cVar20 = pcVar1[10];
  cVar21 = pcVar1[0xb];
  cVar22 = pcVar1[0xc];
  cVar23 = pcVar1[0xd];
  cVar24 = pcVar1[0xe];
  cVar25 = pcVar1[0xf];
  auVar53[0] = -(cVar10 == auVar50[0]);
  auVar53[1] = -(cVar11 == auVar50[1]);
  auVar53[2] = -(cVar12 == auVar50[2]);
  auVar53[3] = -(cVar13 == auVar50[3]);
  auVar53[4] = -(cVar14 == auVar50[4]);
  auVar53[5] = -(cVar15 == auVar50[5]);
  auVar53[6] = -(cVar16 == auVar50[6]);
  auVar53[7] = -(cVar17 == auVar50[7]);
  auVar53[8] = -(cVar18 == auVar50[0]);
  auVar53[9] = -(cVar19 == auVar50[1]);
  auVar53[10] = -(cVar20 == auVar50[2]);
  auVar53[0xb] = -(cVar21 == auVar50[3]);
  auVar53[0xc] = -(cVar22 == auVar50[4]);
  auVar53[0xd] = -(cVar23 == auVar50[5]);
  auVar53[0xe] = -(cVar24 == auVar50[6]);
  auVar53[0xf] = -(cVar25 == auVar50[7]);
  uVar30 = (ushort)(SUB161(auVar53 >> 7,0) & 1) | (ushort)(SUB161(auVar53 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar53 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar53 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar53 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar53 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar53 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar53 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar53 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar53 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar53 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar53 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar53 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar53 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar53 >> 0x77,0) & 1) << 0xe | (ushort)(auVar53[0xf] >> 7) << 0xf;
  uVar43 = (uint)uVar30;
  while (uVar30 != 0) {
    uVar7 = 0;
    for (uVar8 = uVar43; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    uVar36 = uVar7 + uVar35 & uVar5;
    cVar29 = pdb_140df4430(&uStack_c8,lVar47 + uVar36 * -0x18 + -0x18);
    if (cVar29 != '\0') {
      uVar31 = pdb_140a2ec70(lStack_c0,*(undefined8 *)(lVar47 + uVar36 * -0x18 + -0x10));
      uVar32 = *(undefined4 *)(lVar46 + 0x20);
      *(undefined4 *)(lStack_120 + lStack_b8 * 0xc) = (undefined4)lStack_e8;
      *(undefined4 *)(lStack_120 + 4 + lStack_b8 * 0xc) = uVar31;
      *(undefined4 *)(lStack_120 + 8 + lStack_b8 * 0xc) = uVar32;
      lStack_b8 = lStack_b8 + 1;
      uVar37 = uVar37 + 1;
      if (uVar37 != uVar34) goto LAB_140b22749;
      goto LAB_140b229a0;
    }
    uVar30 = (ushort)(uVar43 - 1) & (ushort)uVar43;
    uVar43 = CONCAT22((short)(uVar43 - 1 >> 0x10),uVar30);
  }
  auVar72[0] = -(cVar10 == cVar54);
  auVar72[1] = -(cVar11 == cVar55);
  auVar72[2] = -(cVar12 == cVar56);
  auVar72[3] = -(cVar13 == cVar57);
  auVar72[4] = -(cVar14 == cVar58);
  auVar72[5] = -(cVar15 == cVar59);
  auVar72[6] = -(cVar16 == cVar60);
  auVar72[7] = -(cVar17 == cVar61);
  auVar72[8] = -(cVar18 == cVar62);
  auVar72[9] = -(cVar19 == cVar63);
  auVar72[10] = -(cVar20 == cVar64);
  auVar72[0xb] = -(cVar21 == cVar65);
  auVar72[0xc] = -(cVar22 == cVar66);
  auVar72[0xd] = -(cVar23 == cVar67);
  auVar72[0xe] = -(cVar24 == cVar68);
  auVar72[0xf] = -(cVar25 == cVar69);
  if ((((((((((((((((SUB161(auVar72 >> 7,0) & 1) != 0 || (SUB161(auVar72 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar72 >> 0x17,0) & 1) != 0) || (SUB161(auVar72 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar72 >> 0x27,0) & 1) != 0) || (SUB161(auVar72 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar72 >> 0x37,0) & 1) != 0) || (SUB161(auVar72 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar72 >> 0x47,0) & 1) != 0) || (SUB161(auVar72 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar72 >> 0x57,0) & 1) != 0) || (SUB161(auVar72 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar72 >> 0x67,0) & 1) != 0) || (SUB161(auVar72 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar72 >> 0x77,0) & 1) != 0) || auVar72[0xf] < '\0') goto LAB_140b22a70;
  uVar35 = uVar35 + lVar45 + 0x10;
  lVar45 = lVar45 + 0x10;
  goto LAB_140b228c2;
LAB_140b229a0:
  lStack_108 = lStack_b8;
  if ((lVar39 == 0) || (lVar47 = lVar39, lVar39 == lVar33)) goto LAB_140b22550;
  goto LAB_140b2257c;
LAB_140b22a70:
  pdb_142d8fbc0(&uStack_e0);
  goto LAB_140b22a7a;
}

