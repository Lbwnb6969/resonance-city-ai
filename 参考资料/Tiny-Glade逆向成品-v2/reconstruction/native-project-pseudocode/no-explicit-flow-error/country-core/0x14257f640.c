// VA 0x14257f640, PDB extent 4057 bytes
// country_core::render::nani::systems::nani_update_curved_halftimber
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/systems.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::render::nani::systems::nani_update_curved_halftimber
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/systems.rs
   Extent: 4057 */

longlong *
pdb_14257f640(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
             longlong *param_5,longlong *param_6,longlong *param_7,longlong *param_8)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  char cVar10;
  uint uVar11;
  undefined4 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong lVar16;
  int *piVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  uint *puVar21;
  longlong lVar22;
  undefined *puVar23;
  longlong lVar24;
  ushort uVar25;
  longlong lVar26;
  longlong *plVar27;
  uint *puVar28;
  undefined *puVar29;
  undefined4 uVar30;
  bool bVar31;
  byte bVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 unaff_XMM7_Ba;
  undefined1 unaff_XMM7_Bb;
  char cVar46;
  undefined1 unaff_XMM7_Bc;
  char cVar47;
  undefined1 unaff_XMM7_Bd;
  char cVar48;
  undefined1 unaff_XMM7_Be;
  char cVar49;
  undefined1 unaff_XMM7_Bf;
  char cVar50;
  undefined1 unaff_XMM7_Bg;
  char cVar51;
  undefined1 unaff_XMM7_Bh;
  char cVar52;
  undefined1 unaff_XMM7_Bi;
  char cVar53;
  undefined1 unaff_XMM7_Bj;
  char cVar54;
  undefined1 unaff_XMM7_Bk;
  char cVar55;
  undefined1 unaff_XMM7_Bl;
  char cVar56;
  undefined1 unaff_XMM7_Bm;
  char cVar57;
  undefined1 unaff_XMM7_Bn;
  char cVar58;
  undefined1 unaff_XMM7_Bo;
  char cVar59;
  undefined1 unaff_XMM7_Bp;
  char cVar60;
  longlong lStack_1d0;
  undefined4 uStack_1c8;
  undefined8 uStack_1c0;
  uint *puStack_1b8;
  longlong lStack_1b0;
  longlong *plStack_1a8;
  longlong lStack_1a0;
  longlong *plStack_198;
  longlong lStack_190;
  longlong lStack_188;
  longlong lStack_180;
  longlong lStack_178;
  longlong lStack_170;
  longlong lStack_168;
  longlong lStack_160;
  longlong lStack_158;
  longlong lStack_150;
  longlong lStack_148;
  ulonglong uStack_140;
  longlong lStack_130;
  undefined8 uStack_128;
  longlong *plStack_120;
  longlong *plStack_118;
  longlong lStack_110;
  longlong *plStack_108;
  longlong *plStack_100;
  longlong *plStack_f8;
  longlong lStack_f0;
  undefined4 uStack_e4;
  ulonglong uStack_e0;
  longlong lStack_d8;
  longlong lStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  longlong *plStack_b0;
  longlong *plStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  char cStack_81;
  longlong *plStack_80;
  longlong *plStack_78;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  plVar27 = param_2;
  cVar10 = pdb_140e94b40();
  if (cVar10 == '\0') {
    lStack_130 = 0;
LAB_14257f82b:
    uVar20 = CONCAT71((int7)((ulonglong)plVar27 >> 8),0x16);
    plStack_100 = (longlong *)pdb_1409d2d80(*param_2);
    uVar9 = _DAT_142e36f28;
    lStack_a0 = *param_1;
    lStack_d0 = param_1[1];
    uVar30 = *(undefined4 *)((longlong)param_1 + 0x14);
    puVar21 = *(uint **)(lStack_a0 + 0xf8);
    puVar28 = puVar21 + *(longlong *)(lStack_a0 + 0x100);
    cStack_81 = *(char *)(lStack_a0 + 0x108);
    plStack_118 = (longlong *)*param_5;
    plStack_b0 = (longlong *)*param_4;
    lStack_f0 = *param_3;
    lStack_c0 = *param_6;
    lStack_c8 = param_6[1];
    lStack_1b0 = *param_8;
    plStack_120 = (longlong *)*param_7;
    iVar8 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                             CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                   CONCAT13(unaff_XMM7_Bd,
                            CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
    cVar10 = (char)iVar8;
    cVar46 = (char)((uint)iVar8 >> 8);
    cVar47 = (char)((uint)iVar8 >> 0x10);
    cVar48 = (char)((uint)iVar8 >> 0x18);
    iVar8 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                             CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                   CONCAT13(unaff_XMM7_Bh,
                            CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
    cVar49 = (char)iVar8;
    cVar50 = (char)((uint)iVar8 >> 8);
    cVar51 = (char)((uint)iVar8 >> 0x10);
    cVar52 = (char)((uint)iVar8 >> 0x18);
    iVar8 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                             CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                   CONCAT13(unaff_XMM7_Bl,
                            CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
    cVar53 = (char)iVar8;
    cVar54 = (char)((uint)iVar8 >> 8);
    cVar55 = (char)((uint)iVar8 >> 0x10);
    cVar56 = (char)((uint)iVar8 >> 0x18);
    iVar8 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                             CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                   CONCAT13(unaff_XMM7_Bp,
                            CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
    cVar57 = (char)iVar8;
    cVar58 = (char)((uint)iVar8 >> 8);
    cVar59 = (char)((uint)iVar8 >> 0x10);
    cVar60 = (char)((uint)iVar8 >> 0x18);
    plStack_1a8 = plStack_120 + 4;
    plStack_198 = plStack_118 + 4;
    plStack_108 = plStack_118 + 6;
    plStack_f8 = plStack_b0 + 4;
    plStack_a8 = plStack_b0 + 6;
    lStack_190 = lStack_f0 + 0x50;
    lStack_1a0 = lStack_1b0 + 0x50;
    lVar13 = 0;
    lStack_110 = 8;
    lStack_90 = 0;
    lStack_b8 = 0;
    lStack_98 = 0;
    uVar19 = 0;
    uStack_1c0 = uVar20;
    puStack_1b8 = puVar28;
    uStack_e4 = uVar30;
    if (cStack_81 != '\0') goto LAB_14257fb00;
LAB_14257f972:
    if ((int)uVar19 != (int)lVar13) goto LAB_14257fae5;
    if (puVar21 != puVar28) {
      while( true ) {
        lVar13 = *(longlong *)(*(longlong *)(lStack_d0 + 0x100) + 0x58 + (ulonglong)*puVar21 * 0xa0)
        ;
        if (lVar13 != 0) break;
        puVar21 = puVar21 + 1;
        if (puVar21 == puVar28) goto LAB_142580381;
      }
      lVar16 = *(longlong *)(lStack_d0 + 0x100) + (ulonglong)*puVar21 * 0xa0;
      uVar19 = (ulonglong)*(uint *)(lVar16 + 0x94);
      lVar18 = *(longlong *)(lStack_d0 + 0x1a0);
      lVar22 = lVar18 + uVar19 * 0x48;
      lVar24 = *(longlong *)(lVar18 + 0x38 + uVar19 * 0x48);
      uVar19 = *(ulonglong *)(lVar18 + 0x40 + uVar19 * 0x48);
      if (*(ulonglong *)(lStack_a0 + 0x110) < uVar19) {
        uVar14 = *(ulonglong *)(lVar24 + *(ulonglong *)(lStack_a0 + 0x110) * 8);
        lVar22 = *(longlong *)(lVar22 + 0x18);
        if (uVar14 == 0) goto LAB_14257fa49;
        lStack_98 = *(longlong *)(lVar22 + 0x10 + ~uVar14 * 0x30);
        uVar14 = *(ulonglong *)(lStack_a0 + 0x120);
        if (uVar14 < uVar19) goto LAB_14257fa67;
LAB_14257fa89:
        lStack_90 = 0;
      }
      else {
        lVar22 = *(longlong *)(lVar22 + 0x18);
LAB_14257fa49:
        lStack_98 = 0;
        uVar14 = *(ulonglong *)(lStack_a0 + 0x120);
        if (uVar19 <= uVar14) goto LAB_14257fa89;
LAB_14257fa67:
        uVar19 = *(ulonglong *)(lVar24 + uVar14 * 8);
        if (uVar19 == 0) goto LAB_14257fa89;
        lStack_90 = *(longlong *)(lVar22 + 0x10 + ~uVar19 * 0x30);
      }
      puVar21 = puVar21 + 1;
      lVar18 = ~*(ulonglong *)(lVar24 + *(longlong *)(lStack_a0 + 0x118) * 8) * 0x30;
      lStack_b8 = *(longlong *)(lVar22 + 0x10 + lVar18);
      lStack_d8 = *(longlong *)(lVar22 + 0x28 + lVar18);
      lStack_110 = *(longlong *)(lVar16 + 0x50);
      uStack_e0 = 0;
      uVar19 = uStack_e0;
LAB_14257fae5:
      uStack_e0 = uVar19;
      uVar19 = (ulonglong)~*(uint *)(lStack_110 + 8 + uStack_e0 * 0x10);
      uVar14 = uStack_e0;
LAB_14257fc2c:
      uStack_e0 = uVar14;
      lVar22 = lStack_98 + uVar19 * 0xc;
      plStack_80 = (longlong *)(uVar19 * 0x50 + lStack_b8);
      plStack_78 = (longlong *)(lStack_d8 + uVar19 * 4);
      plVar27 = (longlong *)(uVar19 * 0x10 + lStack_90);
      if ((*(byte *)(plStack_80 + 7) & 2) == 0) {
        lVar18 = *plVar27;
        lStack_188 = lVar18;
        if ((char)plVar27[1] == '\0') {
          if (*(longlong *)(lStack_f0 + 0x48) != 0) {
            uVar19 = pdb_1400af0a0(lStack_190,&lStack_188);
            bVar32 = (byte)(uVar19 >> 0x39);
            auVar33 = ZEXT216(CONCAT11(bVar32,bVar32));
            auVar33 = pshuflw(auVar33,auVar33,0);
            lVar24 = 0;
            while( true ) {
              uVar19 = uVar19 & *(ulonglong *)(lStack_f0 + 0x38);
              pcVar2 = (char *)(*(longlong *)(lStack_f0 + 0x30) + uVar19);
              auVar42[0] = -(*pcVar2 == auVar33[0]);
              auVar42[1] = -(pcVar2[1] == auVar33[1]);
              auVar42[2] = -(pcVar2[2] == auVar33[2]);
              auVar42[3] = -(pcVar2[3] == auVar33[3]);
              auVar42[4] = -(pcVar2[4] == auVar33[4]);
              auVar42[5] = -(pcVar2[5] == auVar33[5]);
              auVar42[6] = -(pcVar2[6] == auVar33[6]);
              auVar42[7] = -(pcVar2[7] == auVar33[7]);
              auVar42[8] = -(pcVar2[8] == auVar33[0]);
              auVar42[9] = -(pcVar2[9] == auVar33[1]);
              auVar42[10] = -(pcVar2[10] == auVar33[2]);
              auVar42[0xb] = -(pcVar2[0xb] == auVar33[3]);
              auVar42[0xc] = -(pcVar2[0xc] == auVar33[4]);
              auVar42[0xd] = -(pcVar2[0xd] == auVar33[5]);
              auVar42[0xe] = -(pcVar2[0xe] == auVar33[6]);
              auVar42[0xf] = -(pcVar2[0xf] == auVar33[7]);
              uVar25 = (ushort)(SUB161(auVar42 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
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
                       (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar42[0xf] >> 7) << 0xf;
              uVar11 = (uint)uVar25;
              while (uVar25 != 0) {
                uVar6 = 0;
                for (uVar7 = uVar11; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                  uVar6 = uVar6 + 1;
                }
                lVar16 = *(longlong *)(lStack_f0 + 0x30) +
                         (uVar6 + uVar19 & *(ulonglong *)(lStack_f0 + 0x38)) * -0x10;
                if (lVar18 == *(longlong *)(lVar16 + -0x10)) {
                  uVar19 = *(ulonglong *)(lVar16 + -8);
                  uVar14 = uVar19 & 0xffffffff;
                  if (((((uVar14 == 0) ||
                        (uVar14 = uVar14 ^ 0xffffffff, *(ulonglong *)(lStack_c8 + 0x10) <= uVar14))
                       || (piVar17 = (int *)(uVar14 * 0x18 + *(longlong *)(lStack_c8 + 8)),
                          piVar17[4] != (int)(uVar19 >> 0x20))) ||
                      ((*piVar17 == 0 ||
                       (uVar19 = *(ulonglong *)(piVar17 + 2),
                       *(ulonglong *)(lStack_c0 + 0x38) <= (uVar19 & 0xffffffff))))) ||
                     ((*(ulonglong *)
                        (*(longlong *)(lStack_c0 + 0x28) + (uVar19 >> 6 & 0x3ffffff) * 8) >>
                       (uVar19 & 0x3f) & 1) == 0)) goto LAB_14257fff0;
                  lVar24 = *(longlong *)
                            (*(longlong *)
                              (*(longlong *)(lStack_c8 + 0x1a0) + 0x18 + (uVar19 >> 0x20) * 0x48) +
                             0x10 + ~*(ulonglong *)
                                      (*(longlong *)
                                        (*(longlong *)(lStack_c8 + 0x1a0) + 0x38 +
                                        (uVar19 >> 0x20) * 0x48) +
                                      *(longlong *)(lStack_c0 + 0x110) * 8) * 0x30);
                  if (*(char *)(lVar24 + 0x40 + (ulonglong)(uint)~piVar17[1] * 0x58) != '\x02')
                  goto LAB_14257fff0;
                  uVar12 = *(undefined4 *)(lVar24 + 0x44 + (ulonglong)(uint)~piVar17[1] * 0x58);
                  goto LAB_1425800dd;
                }
                uVar25 = (ushort)(uVar11 - 1) & (ushort)uVar11;
                uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar25);
              }
              auVar36[0] = -(*pcVar2 == cVar10);
              auVar36[1] = -(pcVar2[1] == cVar46);
              auVar36[2] = -(pcVar2[2] == cVar47);
              auVar36[3] = -(pcVar2[3] == cVar48);
              auVar36[4] = -(pcVar2[4] == cVar49);
              auVar36[5] = -(pcVar2[5] == cVar50);
              auVar36[6] = -(pcVar2[6] == cVar51);
              auVar36[7] = -(pcVar2[7] == cVar52);
              auVar36[8] = -(pcVar2[8] == cVar53);
              auVar36[9] = -(pcVar2[9] == cVar54);
              auVar36[10] = -(pcVar2[10] == cVar55);
              auVar36[0xb] = -(pcVar2[0xb] == cVar56);
              auVar36[0xc] = -(pcVar2[0xc] == cVar57);
              auVar36[0xd] = -(pcVar2[0xd] == cVar58);
              auVar36[0xe] = -(pcVar2[0xe] == cVar59);
              auVar36[0xf] = -(pcVar2[0xf] == cVar60);
              if ((((((((((((((((SUB161(auVar36 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar36 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar36 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar36 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar36 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar36 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar36 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar36 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar36 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar36 >> 0x4f,0) & 1) != 0) || (SUB161(auVar36 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar36 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar36 >> 0x67,0) & 1) != 0) || (SUB161(auVar36 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar36 >> 0x77,0) & 1) != 0) || auVar36[0xf] < '\0') break;
              uVar19 = uVar19 + lVar24 + 0x10;
              lVar24 = lVar24 + 0x10;
            }
          }
LAB_14257fff0:
          plVar15 = plStack_a8;
          if (plStack_b0[3] != 0) {
            lStack_188 = lVar18;
            uVar19 = pdb_1400af0a0(plStack_f8,&lStack_188);
            bVar32 = (byte)(uVar19 >> 0x39);
            auVar33 = ZEXT216(CONCAT11(bVar32,bVar32));
            auVar33 = pshuflw(auVar33,auVar33,0);
            lVar24 = 0;
            while( true ) {
              uVar19 = uVar19 & plStack_b0[1];
              pcVar2 = (char *)(*plStack_b0 + uVar19);
              auVar43[0] = -(*pcVar2 == auVar33[0]);
              auVar43[1] = -(pcVar2[1] == auVar33[1]);
              auVar43[2] = -(pcVar2[2] == auVar33[2]);
              auVar43[3] = -(pcVar2[3] == auVar33[3]);
              auVar43[4] = -(pcVar2[4] == auVar33[4]);
              auVar43[5] = -(pcVar2[5] == auVar33[5]);
              auVar43[6] = -(pcVar2[6] == auVar33[6]);
              auVar43[7] = -(pcVar2[7] == auVar33[7]);
              auVar43[8] = -(pcVar2[8] == auVar33[0]);
              auVar43[9] = -(pcVar2[9] == auVar33[1]);
              auVar43[10] = -(pcVar2[10] == auVar33[2]);
              auVar43[0xb] = -(pcVar2[0xb] == auVar33[3]);
              auVar43[0xc] = -(pcVar2[0xc] == auVar33[4]);
              auVar43[0xd] = -(pcVar2[0xd] == auVar33[5]);
              auVar43[0xe] = -(pcVar2[0xe] == auVar33[6]);
              auVar43[0xf] = -(pcVar2[0xf] == auVar33[7]);
              uVar25 = (ushort)(SUB161(auVar43 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar43[0xf] >> 7) << 0xf;
              uVar11 = (uint)uVar25;
              while (uVar25 != 0) {
                uVar6 = 0;
                for (uVar7 = uVar11; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                  uVar6 = uVar6 + 1;
                }
                lVar16 = *plStack_b0 + (uVar6 + uVar19 & plStack_b0[1]) * -0x10;
                if (lVar18 == *(longlong *)(lVar16 + -0x10)) goto LAB_1425800b0;
                uVar25 = (ushort)(uVar11 - 1) & (ushort)uVar11;
                uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar25);
              }
              auVar37[0] = -(*pcVar2 == cVar10);
              auVar37[1] = -(pcVar2[1] == cVar46);
              auVar37[2] = -(pcVar2[2] == cVar47);
              auVar37[3] = -(pcVar2[3] == cVar48);
              auVar37[4] = -(pcVar2[4] == cVar49);
              auVar37[5] = -(pcVar2[5] == cVar50);
              auVar37[6] = -(pcVar2[6] == cVar51);
              auVar37[7] = -(pcVar2[7] == cVar52);
              auVar37[8] = -(pcVar2[8] == cVar53);
              auVar37[9] = -(pcVar2[9] == cVar54);
              auVar37[10] = -(pcVar2[10] == cVar55);
              auVar37[0xb] = -(pcVar2[0xb] == cVar56);
              auVar37[0xc] = -(pcVar2[0xc] == cVar57);
              auVar37[0xd] = -(pcVar2[0xd] == cVar58);
              auVar37[0xe] = -(pcVar2[0xe] == cVar59);
              auVar37[0xf] = -(pcVar2[0xf] == cVar60);
              plVar15 = plStack_a8;
              if ((((((((((((((((SUB161(auVar37 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar37 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar37 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar37 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar37 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar37 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar37 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar37 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar37 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar37 >> 0x4f,0) & 1) != 0) || (SUB161(auVar37 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar37 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar37 >> 0x67,0) & 1) != 0) || (SUB161(auVar37 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar37 >> 0x77,0) & 1) != 0) || auVar37[0xf] < '\0') break;
              uVar19 = uVar19 + lVar24 + 0x10;
              lVar24 = lVar24 + 0x10;
            }
          }
        }
        else {
          plVar15 = plStack_a8;
          if (plStack_b0[3] != 0) {
            uVar19 = pdb_1400af0a0(plStack_f8,&lStack_188);
            bVar32 = (byte)(uVar19 >> 0x39);
            auVar33 = ZEXT216(CONCAT11(bVar32,bVar32));
            auVar33 = pshuflw(auVar33,auVar33,0);
            lVar24 = 0;
            while( true ) {
              uVar19 = uVar19 & plStack_b0[1];
              pcVar2 = (char *)(*plStack_b0 + uVar19);
              auVar40[0] = -(*pcVar2 == auVar33[0]);
              auVar40[1] = -(pcVar2[1] == auVar33[1]);
              auVar40[2] = -(pcVar2[2] == auVar33[2]);
              auVar40[3] = -(pcVar2[3] == auVar33[3]);
              auVar40[4] = -(pcVar2[4] == auVar33[4]);
              auVar40[5] = -(pcVar2[5] == auVar33[5]);
              auVar40[6] = -(pcVar2[6] == auVar33[6]);
              auVar40[7] = -(pcVar2[7] == auVar33[7]);
              auVar40[8] = -(pcVar2[8] == auVar33[0]);
              auVar40[9] = -(pcVar2[9] == auVar33[1]);
              auVar40[10] = -(pcVar2[10] == auVar33[2]);
              auVar40[0xb] = -(pcVar2[0xb] == auVar33[3]);
              auVar40[0xc] = -(pcVar2[0xc] == auVar33[4]);
              auVar40[0xd] = -(pcVar2[0xd] == auVar33[5]);
              auVar40[0xe] = -(pcVar2[0xe] == auVar33[6]);
              auVar40[0xf] = -(pcVar2[0xf] == auVar33[7]);
              uVar25 = (ushort)(SUB161(auVar40 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar40[0xf] >> 7) << 0xf;
              uVar11 = (uint)uVar25;
              while (uVar25 != 0) {
                uVar6 = 0;
                for (uVar7 = uVar11; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                  uVar6 = uVar6 + 1;
                }
                lVar16 = *plStack_b0 + (uVar6 + uVar19 & plStack_b0[1]) * -0x10;
                if (lVar18 == *(longlong *)(lVar16 + -0x10)) goto LAB_1425800b0;
                uVar25 = (ushort)(uVar11 - 1) & (ushort)uVar11;
                uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar25);
              }
              auVar34[0] = -(*pcVar2 == cVar10);
              auVar34[1] = -(pcVar2[1] == cVar46);
              auVar34[2] = -(pcVar2[2] == cVar47);
              auVar34[3] = -(pcVar2[3] == cVar48);
              auVar34[4] = -(pcVar2[4] == cVar49);
              auVar34[5] = -(pcVar2[5] == cVar50);
              auVar34[6] = -(pcVar2[6] == cVar51);
              auVar34[7] = -(pcVar2[7] == cVar52);
              auVar34[8] = -(pcVar2[8] == cVar53);
              auVar34[9] = -(pcVar2[9] == cVar54);
              auVar34[10] = -(pcVar2[10] == cVar55);
              auVar34[0xb] = -(pcVar2[0xb] == cVar56);
              auVar34[0xc] = -(pcVar2[0xc] == cVar57);
              auVar34[0xd] = -(pcVar2[0xd] == cVar58);
              auVar34[0xe] = -(pcVar2[0xe] == cVar59);
              auVar34[0xf] = -(pcVar2[0xf] == cVar60);
              plVar15 = plStack_a8;
              if ((((((((((((((((SUB161(auVar34 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar34 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar34 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar34 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar34 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar34 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar34 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar34 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar34 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar34 >> 0x4f,0) & 1) != 0) || (SUB161(auVar34 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar34 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar34 >> 0x67,0) & 1) != 0) || (SUB161(auVar34 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar34 >> 0x77,0) & 1) != 0) || auVar34[0xf] < '\0') break;
              uVar19 = uVar19 + lVar24 + 0x10;
              lVar24 = lVar24 + 0x10;
            }
          }
        }
      }
      else {
        lVar18 = *plVar27;
        plVar15 = plStack_108;
        if (plStack_118[3] != 0) {
          lStack_188 = lVar18;
          uVar19 = pdb_1400af0a0(plStack_198,&lStack_188);
          bVar32 = (byte)(uVar19 >> 0x39);
          auVar33 = ZEXT216(CONCAT11(bVar32,bVar32));
          auVar33 = pshuflw(auVar33,auVar33,0);
          lVar24 = 0;
          while( true ) {
            uVar19 = uVar19 & plStack_118[1];
            pcVar2 = (char *)(*plStack_118 + uVar19);
            auVar41[0] = -(*pcVar2 == auVar33[0]);
            auVar41[1] = -(pcVar2[1] == auVar33[1]);
            auVar41[2] = -(pcVar2[2] == auVar33[2]);
            auVar41[3] = -(pcVar2[3] == auVar33[3]);
            auVar41[4] = -(pcVar2[4] == auVar33[4]);
            auVar41[5] = -(pcVar2[5] == auVar33[5]);
            auVar41[6] = -(pcVar2[6] == auVar33[6]);
            auVar41[7] = -(pcVar2[7] == auVar33[7]);
            auVar41[8] = -(pcVar2[8] == auVar33[0]);
            auVar41[9] = -(pcVar2[9] == auVar33[1]);
            auVar41[10] = -(pcVar2[10] == auVar33[2]);
            auVar41[0xb] = -(pcVar2[0xb] == auVar33[3]);
            auVar41[0xc] = -(pcVar2[0xc] == auVar33[4]);
            auVar41[0xd] = -(pcVar2[0xd] == auVar33[5]);
            auVar41[0xe] = -(pcVar2[0xe] == auVar33[6]);
            auVar41[0xf] = -(pcVar2[0xf] == auVar33[7]);
            uVar25 = (ushort)(SUB161(auVar41 >> 7,0) & 1) |
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
            uVar11 = (uint)uVar25;
            while (uVar25 != 0) {
              uVar6 = 0;
              for (uVar7 = uVar11; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                uVar6 = uVar6 + 1;
              }
              lVar16 = *plStack_118 + (uVar6 + uVar19 & plStack_118[1]) * -0x10;
              if (lVar18 == *(longlong *)(lVar16 + -0x10)) goto LAB_1425800b0;
              uVar25 = (ushort)(uVar11 - 1) & (ushort)uVar11;
              uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar25);
            }
            auVar35[0] = -(*pcVar2 == cVar10);
            auVar35[1] = -(pcVar2[1] == cVar46);
            auVar35[2] = -(pcVar2[2] == cVar47);
            auVar35[3] = -(pcVar2[3] == cVar48);
            auVar35[4] = -(pcVar2[4] == cVar49);
            auVar35[5] = -(pcVar2[5] == cVar50);
            auVar35[6] = -(pcVar2[6] == cVar51);
            auVar35[7] = -(pcVar2[7] == cVar52);
            auVar35[8] = -(pcVar2[8] == cVar53);
            auVar35[9] = -(pcVar2[9] == cVar54);
            auVar35[10] = -(pcVar2[10] == cVar55);
            auVar35[0xb] = -(pcVar2[0xb] == cVar56);
            auVar35[0xc] = -(pcVar2[0xc] == cVar57);
            auVar35[0xd] = -(pcVar2[0xd] == cVar58);
            auVar35[0xe] = -(pcVar2[0xe] == cVar59);
            auVar35[0xf] = -(pcVar2[0xf] == cVar60);
            plVar15 = plStack_108;
            if ((((((((((((((((SUB161(auVar35 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar35 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar35 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar35 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar35 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar35 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar35 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar35 >> 0x3f,0) & 1) != 0) || (SUB161(auVar35 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar35 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar35 >> 0x57,0) & 1) != 0) || (SUB161(auVar35 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar35 >> 0x67,0) & 1) != 0) || (SUB161(auVar35 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar35 >> 0x77,0) & 1) != 0) || auVar35[0xf] < '\0') break;
            uVar19 = uVar19 + lVar24 + 0x10;
            lVar24 = lVar24 + 0x10;
          }
        }
      }
      goto LAB_1425800d7;
    }
LAB_142580381:
    param_2 = plStack_100;
    pdb_140e9a350(plStack_100);
    pdb_140e9a350();
    LOCK();
    plVar27 = (longlong *)*param_2;
    bVar31 = plVar27 == (longlong *)0x8;
    if (bVar31) {
      *param_2 = 0;
      plVar27 = (longlong *)0x8;
    }
    UNLOCK();
    if (!bVar31) goto LAB_142580419;
    while( true ) {
      if (lStack_130 == 0) {
        return plVar27;
      }
      plVar27 = (longlong *)pdb_140e97000();
      if (((char)plVar27[0xd] != '\x01') &&
         (plVar27 = (longlong *)pdb_142d8ec20(plVar27,0), plVar27 == (longlong *)0x0)) break;
      if (*plVar27 == 0) {
        *plVar27 = -1;
        plStack_78 = plVar27;
        pdb_140e95370(plVar27 + 1,uStack_128);
        *plStack_78 = *plStack_78 + 1;
        return plStack_78;
      }
LAB_14258040c:
      pdb_142dc8090(&UNK_143326a50);
LAB_142580419:
      plVar27 = (longlong *)pdb_142dbca40(param_2);
    }
LAB_14258044a:
    pdb_142dc7890(&UNK_143326860);
LAB_142580456:
    pdb_142dc8070(&UNK_14351bd9f,0x2e);
  }
  else {
    plVar27 = (longlong *)&UNK_14351c3f4;
    lVar22 = 0x42;
    uVar19 = 0x42;
    lVar13 = pdb_142585200(&UNK_14351c3f4);
    if (lVar13 != 1) {
LAB_14257f6f0:
      puVar23 = &UNK_14351bdcd;
      puVar29 = &UNK_14351bd9f;
      do {
        bVar32 = puVar23[-1];
        uVar11 = (uint)(char)bVar32;
        plStack_78 = param_3;
        if ((char)bVar32 < '\0') {
          bVar3 = puVar23[-2];
          if ((char)bVar3 < -0x40) {
            bVar4 = puVar23[-3];
            if ((char)bVar4 < -0x40) {
              pbVar1 = puVar23 + -4;
              puVar23 = puVar23 + -4;
              uVar11 = bVar4 & 0x3f | (*pbVar1 & 7) << 6;
            }
            else {
              puVar23 = puVar23 + -3;
              uVar11 = bVar4 & 0xf;
            }
            uVar11 = bVar3 & 0x3f | uVar11 << 6;
          }
          else {
            puVar23 = puVar23 + -2;
            uVar11 = bVar3 & 0x1f;
          }
          uVar11 = (uint)(bVar32 & 0x3f) | uVar11 << 6;
          if (uVar11 != 0x5c) goto LAB_14257f784;
LAB_14257f79d:
          if ((undefined *)0x2e < puVar23 + -0x14351bd9e) goto LAB_142580456;
          lVar13 = 0x2e - (longlong)(puVar23 + -0x14351bd9e);
          puVar29 = puVar23 + 1;
          goto LAB_14257f7c0;
        }
        puVar23 = puVar23 + -1;
        if (uVar11 == 0x5c) goto LAB_14257f79d;
LAB_14257f784:
        if (uVar11 == 0x2f) goto LAB_14257f79d;
      } while (puVar23 != &UNK_14351bd9f);
      lVar13 = 0x2e;
LAB_14257f7c0:
      plVar15 = (longlong *)pdb_140e97000();
      if (((char)plVar15[0xd] == '\x01') ||
         (plVar15 = (longlong *)pdb_142d8ec20(plVar15,0), plVar15 != (longlong *)0x0)) {
        if (*plVar15 != 0) goto LAB_14258040c;
        *plVar15 = -1;
        plStack_80 = plVar15;
        uStack_128 = pdb_140e94f10(plVar15 + 1,plVar27,lVar22,puVar29,lVar13,1,0);
        *plStack_80 = *plStack_80 + 1;
        lStack_130 = 1;
        param_3 = plStack_78;
        goto LAB_14257f82b;
      }
      goto LAB_14258044a;
    }
    if (uVar19 < 0x43) {
      plVar27 = (longlong *)&UNK_14351c3f4;
      uVar14 = pdb_142585200(&UNK_14351c3f4);
      if ((uVar14 & 1) != 0) {
        if (0x42 < uVar19 + 2) goto LAB_142580499;
        lVar22 = 0x40 - uVar19;
        plVar27 = (longlong *)(&UNK_14351c3f6 + uVar19);
      }
      goto LAB_14257f6f0;
    }
  }
  pdb_142dc8070(&UNK_14351c3f4,0x42,0);
LAB_142580499:
  pdb_142dc8070(&UNK_14351c3f4,0x42);
  pcVar5 = (code *)swi(3);
  plVar27 = (longlong *)(*pcVar5)();
  return plVar27;
LAB_1425800b0:
  plVar15 = (longlong *)(lVar16 + -8);
LAB_1425800d7:
  uVar12 = (undefined4)*plVar15;
LAB_1425800dd:
  lVar24 = lStack_1b0;
  *(undefined4 *)plStack_78 = uVar30;
  *(undefined4 *)((longlong)plStack_80 + 0xc) = uVar12;
  lVar18 = *plVar27;
  uVar12 = 0;
  lStack_188 = lVar18;
  if (*(longlong *)(lStack_1b0 + 0x48) != 0) {
    uVar14 = pdb_1400af0a0(lStack_1a0,&lStack_188);
    lVar16 = *(longlong *)(lVar24 + 0x30);
    uVar19 = *(ulonglong *)(lVar24 + 0x38);
    bVar32 = (byte)(uVar14 >> 0x39);
    auVar33 = ZEXT216(CONCAT11(bVar32,bVar32));
    auVar33 = pshuflw(auVar33,auVar33,0);
    lVar24 = 0;
    while( true ) {
      uVar14 = uVar14 & uVar19;
      pcVar2 = (char *)(lVar16 + uVar14);
      auVar44[0] = -(*pcVar2 == auVar33[0]);
      auVar44[1] = -(pcVar2[1] == auVar33[1]);
      auVar44[2] = -(pcVar2[2] == auVar33[2]);
      auVar44[3] = -(pcVar2[3] == auVar33[3]);
      auVar44[4] = -(pcVar2[4] == auVar33[4]);
      auVar44[5] = -(pcVar2[5] == auVar33[5]);
      auVar44[6] = -(pcVar2[6] == auVar33[6]);
      auVar44[7] = -(pcVar2[7] == auVar33[7]);
      auVar44[8] = -(pcVar2[8] == auVar33[0]);
      auVar44[9] = -(pcVar2[9] == auVar33[1]);
      auVar44[10] = -(pcVar2[10] == auVar33[2]);
      auVar44[0xb] = -(pcVar2[0xb] == auVar33[3]);
      auVar44[0xc] = -(pcVar2[0xc] == auVar33[4]);
      auVar44[0xd] = -(pcVar2[0xd] == auVar33[5]);
      auVar44[0xe] = -(pcVar2[0xe] == auVar33[6]);
      auVar44[0xf] = -(pcVar2[0xf] == auVar33[7]);
      uVar25 = (ushort)(SUB161(auVar44 >> 7,0) & 1) | (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe | (ushort)(auVar44[0xf] >> 7) << 0xf;
      uVar11 = (uint)uVar25;
      while (uVar25 != 0) {
        uVar6 = 0;
        for (uVar7 = uVar11; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar6 = uVar6 + 1;
        }
        lVar26 = lVar16 + (uVar6 + uVar14 & uVar19) * -0x10;
        if (lVar18 == *(longlong *)(lVar26 + -0x10)) {
          uVar12 = *(undefined4 *)(lVar26 + -8);
          goto LAB_1425801c2;
        }
        uVar25 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar25);
      }
      auVar38[0] = -(*pcVar2 == cVar10);
      auVar38[1] = -(pcVar2[1] == cVar46);
      auVar38[2] = -(pcVar2[2] == cVar47);
      auVar38[3] = -(pcVar2[3] == cVar48);
      auVar38[4] = -(pcVar2[4] == cVar49);
      auVar38[5] = -(pcVar2[5] == cVar50);
      auVar38[6] = -(pcVar2[6] == cVar51);
      auVar38[7] = -(pcVar2[7] == cVar52);
      auVar38[8] = -(pcVar2[8] == cVar53);
      auVar38[9] = -(pcVar2[9] == cVar54);
      auVar38[10] = -(pcVar2[10] == cVar55);
      auVar38[0xb] = -(pcVar2[0xb] == cVar56);
      auVar38[0xc] = -(pcVar2[0xc] == cVar57);
      auVar38[0xd] = -(pcVar2[0xd] == cVar58);
      auVar38[0xe] = -(pcVar2[0xe] == cVar59);
      auVar38[0xf] = -(pcVar2[0xf] == cVar60);
      if ((((((((((((((((SUB161(auVar38 >> 7,0) & 1) != 0 || (SUB161(auVar38 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar38 >> 0x17,0) & 1) != 0) || (SUB161(auVar38 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar38 >> 0x27,0) & 1) != 0) || (SUB161(auVar38 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar38 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar38 >> 0x3f,0) & 1) != 0) || (SUB161(auVar38 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar38 >> 0x4f,0) & 1) != 0) || (SUB161(auVar38 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar38 >> 0x5f,0) & 1) != 0) || (SUB161(auVar38 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar38 >> 0x6f,0) & 1) != 0) || (SUB161(auVar38 >> 0x77,0) & 1) != 0) ||
          auVar38[0xf] < '\0') break;
      uVar14 = uVar14 + lVar24 + 0x10;
      lVar24 = lVar24 + 0x10;
    }
  }
LAB_1425801c2:
  uVar30 = uStack_e4;
  puVar28 = puStack_1b8;
  *(undefined4 *)plStack_78 = uStack_e4;
  *(undefined4 *)((longlong)plStack_80 + 0x3c) = uVar12;
  if (plStack_120[3] != 0) {
    uVar19 = pdb_1400af0a0(plStack_1a8,plVar27);
    lVar18 = *plStack_120;
    bVar32 = (byte)(uVar19 >> 0x39);
    auVar33 = ZEXT216(CONCAT11(bVar32,bVar32));
    auVar33 = pshuflw(auVar33,auVar33,0);
    lVar24 = 0;
    while( true ) {
      uVar19 = uVar19 & plStack_120[1];
      pcVar2 = (char *)(lVar18 + uVar19);
      auVar45[0] = -(*pcVar2 == auVar33[0]);
      auVar45[1] = -(pcVar2[1] == auVar33[1]);
      auVar45[2] = -(pcVar2[2] == auVar33[2]);
      auVar45[3] = -(pcVar2[3] == auVar33[3]);
      auVar45[4] = -(pcVar2[4] == auVar33[4]);
      auVar45[5] = -(pcVar2[5] == auVar33[5]);
      auVar45[6] = -(pcVar2[6] == auVar33[6]);
      auVar45[7] = -(pcVar2[7] == auVar33[7]);
      auVar45[8] = -(pcVar2[8] == auVar33[0]);
      auVar45[9] = -(pcVar2[9] == auVar33[1]);
      auVar45[10] = -(pcVar2[10] == auVar33[2]);
      auVar45[0xb] = -(pcVar2[0xb] == auVar33[3]);
      auVar45[0xc] = -(pcVar2[0xc] == auVar33[4]);
      auVar45[0xd] = -(pcVar2[0xd] == auVar33[5]);
      auVar45[0xe] = -(pcVar2[0xe] == auVar33[6]);
      auVar45[0xf] = -(pcVar2[0xf] == auVar33[7]);
      uVar25 = (ushort)(SUB161(auVar45 >> 7,0) & 1) | (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar45 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar45 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar45 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar45 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar45 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar45 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar45 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar45 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar45 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar45 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar45 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar45 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar45 >> 0x77,0) & 1) << 0xe | (ushort)(auVar45[0xf] >> 7) << 0xf;
      uVar11 = (uint)uVar25;
      if (uVar25 != 0) {
        do {
          uVar6 = 0;
          for (uVar7 = uVar11; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
            uVar6 = uVar6 + 1;
          }
          uVar14 = uVar6 + uVar19 & plStack_120[1];
          if (*plVar27 == *(longlong *)(lVar18 + -0x18 + uVar14 * -0x18)) {
            lVar18 = *(longlong *)(lVar18 + uVar14 * -0x18 + -8);
            *(undefined4 *)plStack_78 = uVar30;
            plStack_80[8] = lVar18;
            lStack_148 = plStack_80[8];
            uStack_140 = plStack_80[9];
            lStack_188 = *plStack_80;
            lStack_180 = plStack_80[1];
            lStack_178 = plStack_80[2];
            lStack_170 = plStack_80[3];
            lStack_168 = plStack_80[4];
            lStack_160 = plStack_80[5];
            lStack_158 = plStack_80[6];
            lStack_150 = plStack_80[7];
            if (lVar18 == 0) goto LAB_1425802cd;
            goto LAB_14258032f;
          }
          uVar25 = (ushort)(uVar11 - 1) & (ushort)uVar11;
          uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar25);
        } while (uVar25 != 0);
      }
      auVar39[0] = -(*pcVar2 == cVar10);
      auVar39[1] = -(pcVar2[1] == cVar46);
      auVar39[2] = -(pcVar2[2] == cVar47);
      auVar39[3] = -(pcVar2[3] == cVar48);
      auVar39[4] = -(pcVar2[4] == cVar49);
      auVar39[5] = -(pcVar2[5] == cVar50);
      auVar39[6] = -(pcVar2[6] == cVar51);
      auVar39[7] = -(pcVar2[7] == cVar52);
      auVar39[8] = -(pcVar2[8] == cVar53);
      auVar39[9] = -(pcVar2[9] == cVar54);
      auVar39[10] = -(pcVar2[10] == cVar55);
      auVar39[0xb] = -(pcVar2[0xb] == cVar56);
      auVar39[0xc] = -(pcVar2[0xc] == cVar57);
      auVar39[0xd] = -(pcVar2[0xd] == cVar58);
      auVar39[0xe] = -(pcVar2[0xe] == cVar59);
      auVar39[0xf] = -(pcVar2[0xf] == cVar60);
      if ((((((((((((((((SUB161(auVar39 >> 7,0) & 1) != 0 || (SUB161(auVar39 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar39 >> 0x17,0) & 1) != 0) || (SUB161(auVar39 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar39 >> 0x27,0) & 1) != 0) || (SUB161(auVar39 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar39 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar39 >> 0x3f,0) & 1) != 0) || (SUB161(auVar39 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar39 >> 0x4f,0) & 1) != 0) || (SUB161(auVar39 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar39 >> 0x5f,0) & 1) != 0) || (SUB161(auVar39 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar39 >> 0x6f,0) & 1) != 0) || (SUB161(auVar39 >> 0x77,0) & 1) != 0) ||
          auVar39[0xf] < '\0') break;
      uVar19 = uVar19 + lVar24 + 0x10;
      lVar24 = lVar24 + 0x10;
    }
  }
  *(undefined4 *)plStack_78 = uVar30;
  plStack_80[8] = 0;
  lStack_148 = plStack_80[8];
  uStack_140 = plStack_80[9];
  lStack_188 = *plStack_80;
  lStack_180 = plStack_80[1];
  lStack_178 = plStack_80[2];
  lStack_170 = plStack_80[3];
  lStack_168 = plStack_80[4];
  lStack_160 = plStack_80[5];
  lStack_158 = plStack_80[6];
  lStack_150 = plStack_80[7];
LAB_1425802cd:
  uStack_140 = uStack_140 & 0xffffffff00000000;
LAB_14258032f:
  uStack_1c8 = (undefined4)lStack_180;
  lStack_1d0 = lStack_188;
  pdb_140951dd0(uStack_1c0,lVar22,&lStack_1d0,uVar9,&lStack_188,&UNK_14351c140);
  uVar19 = (ulonglong)((int)uStack_e0 + 1);
  if (cStack_81 == '\0') goto LAB_14257f972;
LAB_14257fb00:
  uVar14 = uVar19;
  if ((int)uVar19 != (int)lVar13) goto LAB_14257fc2c;
  if (puVar21 == puVar28) goto LAB_142580381;
  while( true ) {
    lVar13 = *(longlong *)(*(longlong *)(lStack_d0 + 0x1a0) + 0x10 + (ulonglong)*puVar21 * 0x48);
    if (lVar13 != 0) break;
    puVar21 = puVar21 + 1;
    if (puVar21 == puVar28) goto LAB_142580381;
  }
  lVar22 = *(longlong *)(lStack_d0 + 0x1a0) + (ulonglong)*puVar21 * 0x48;
  lVar18 = *(longlong *)(lVar22 + 0x38);
  if (*(ulonglong *)(lStack_a0 + 0x110) < *(ulonglong *)(lVar22 + 0x40)) {
    uVar19 = *(ulonglong *)(lVar18 + *(ulonglong *)(lStack_a0 + 0x110) * 8);
    lVar24 = *(longlong *)(lVar22 + 0x18);
    if (uVar19 != 0) {
      lStack_98 = *(longlong *)(lVar24 + 0x10 + ~uVar19 * 0x30);
      uVar19 = *(ulonglong *)(lStack_a0 + 0x120);
      goto joined_r0x00014257fbb8;
    }
  }
  else {
    lVar24 = *(longlong *)(lVar22 + 0x18);
  }
  lStack_98 = 0;
  uVar19 = *(ulonglong *)(lStack_a0 + 0x120);
joined_r0x00014257fbb8:
  if ((uVar19 < *(ulonglong *)(lVar22 + 0x40)) &&
     (uVar19 = *(ulonglong *)(lVar18 + uVar19 * 8), uVar19 != 0)) {
    lStack_90 = *(longlong *)(lVar24 + 0x10 + ~uVar19 * 0x30);
  }
  else {
    lStack_90 = 0;
  }
  puVar21 = puVar21 + 1;
  lVar22 = ~*(ulonglong *)(lVar18 + *(longlong *)(lStack_a0 + 0x118) * 8) * 0x30;
  lStack_b8 = *(longlong *)(lVar24 + 0x10 + lVar22);
  lStack_d8 = *(longlong *)(lVar24 + 0x28 + lVar22);
  uVar19 = 0;
  uVar14 = uVar19;
  goto LAB_14257fc2c;
}

