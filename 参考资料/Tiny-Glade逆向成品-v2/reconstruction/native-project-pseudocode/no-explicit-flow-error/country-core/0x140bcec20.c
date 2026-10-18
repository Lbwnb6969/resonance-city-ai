// VA 0x140bcec20, PDB extent 3156 bytes
// country_core::systems::wall::adjust_wall_height::ui_adjust_wall_height::ui_adjust_wall_height
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/adjust_wall_height/ui_adjust_wall_height.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::adjust_wall_height::ui_adjust_wall_height::ui_adjust_wall_height
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/adjust_wall_height/ui_adjust_wall_height.rs
   Extent: 3156 */

void pdb_140bcec20(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6,longlong *param_7,longlong *param_8,
                  undefined8 *param_9,undefined8 *param_10,longlong *param_11)

{
  byte *pbVar1;
  byte *pbVar2;
  longlong lVar3;
  float fVar4;
  undefined1 auVar5 [16];
  byte bVar6;
  int iVar7;
  char *pcVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  longlong lVar16;
  code *pcVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  longlong lVar26;
  ulonglong uVar27;
  undefined *puVar28;
  longlong *plVar29;
  uint uVar30;
  undefined4 uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  longlong lVar34;
  undefined1 (*pauVar35) [16];
  uint uVar36;
  longlong lVar37;
  int *piVar38;
  longlong lVar39;
  ushort uVar40;
  longlong lVar41;
  undefined *puVar42;
  ulonglong uVar43;
  undefined *puVar44;
  undefined8 uVar45;
  undefined1 (*pauVar46) [16];
  bool bVar47;
  bool bVar48;
  bool bVar49;
  bool bVar50;
  byte bVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 unaff_XMM6_Ba;
  undefined1 unaff_XMM6_Bb;
  char cVar57;
  undefined1 unaff_XMM6_Bc;
  char cVar58;
  undefined1 unaff_XMM6_Bd;
  char cVar59;
  undefined1 unaff_XMM6_Be;
  undefined1 unaff_XMM6_Bf;
  char cVar60;
  undefined1 unaff_XMM6_Bg;
  char cVar61;
  undefined1 unaff_XMM6_Bh;
  char cVar62;
  undefined1 unaff_XMM6_Bi;
  undefined1 unaff_XMM6_Bj;
  char cVar63;
  undefined1 unaff_XMM6_Bk;
  char cVar64;
  undefined1 unaff_XMM6_Bl;
  char cVar65;
  undefined1 unaff_XMM6_Bm;
  undefined1 unaff_XMM6_Bn;
  char cVar66;
  undefined1 unaff_XMM6_Bo;
  char cVar67;
  undefined1 unaff_XMM6_Bp;
  char cVar68;
  longlong lStack_108;
  byte bStack_100;
  byte bStack_ff;
  longlong lStack_f8;
  undefined4 *puStack_f0;
  longlong lStack_e8;
  longlong lStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  undefined8 uStack_b8;
  ulonglong uStack_b0;
  undefined4 uStack_a4;
  longlong *plStack_a0;
  undefined1 uStack_93;
  char cStack_92;
  char cStack_91;
  undefined8 uStack_90;
  
  uStack_90 = 0xfffffffffffffffe;
  cStack_91 = pdb_140e94b40();
  if (cStack_91 == '\0') {
    pcVar8 = (char *)*param_1;
    cVar57 = *pcVar8;
joined_r0x000140bced9a:
    if (cVar57 == '\0') {
      lVar26 = param_10[1];
      uVar32 = *(ulonglong *)*param_10;
      uVar33 = 0;
      uVar27 = uVar32 - *(ulonglong *)(lVar26 + 0x18);
      if (uVar32 < *(ulonglong *)(lVar26 + 0x18)) {
        uVar27 = uVar33;
      }
      uVar43 = uVar32 - *(ulonglong *)(lVar26 + 0x38);
      if (uVar32 < *(ulonglong *)(lVar26 + 0x38)) {
        uVar43 = uVar33;
      }
      bVar47 = uVar43 <= *(ulonglong *)(lVar26 + 0x30);
      uVar43 = *(ulonglong *)(lVar26 + 0x30) - uVar43;
      bVar49 = uVar43 != 0;
      if (!bVar47) {
        uVar43 = uVar33;
      }
      bVar48 = uVar27 <= *(ulonglong *)(lVar26 + 0x10);
      uVar27 = *(ulonglong *)(lVar26 + 0x10) - uVar27;
      bVar50 = uVar27 != 0;
      if (!bVar48) {
        uVar27 = uVar33;
      }
      iVar7 = *(int *)(pcVar8 + 8);
      lVar34 = *(longlong *)(pcVar8 + 0x10);
      uStack_93 = bVar48 && bVar50 || bVar47 && bVar49;
      uVar32 = uVar27 + uVar43;
      if (bVar48 && bVar50 || bVar47 && bVar49) {
        uVar32 = uVar33;
      }
      *(ulonglong *)*param_10 = *(longlong *)(lVar26 + 0x40) - uVar32;
      fVar25 = _DAT_142e3b1d8;
      fVar24 = _DAT_142e36f28;
      plVar29 = (longlong *)*param_2;
      pauVar35 = (undefined1 (*) [16])*plVar29;
      auVar52 = *pauVar35;
      uVar30 = ~(uint)(ushort)((ushort)(SUB161(auVar52 >> 7,0) & 1) |
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
                              (ushort)(byte)(auVar52[0xf] >> 7) << 0xf);
      lVar9 = *param_8;
      lVar10 = param_8[1];
      lVar11 = *param_4;
      cStack_92 = (!bVar48 || !bVar50) && (!bVar47 || !bVar49);
      lVar12 = *param_11;
      uVar13 = *param_9;
      uStack_d8 = *(undefined4 *)((longlong)param_5 + 0x1c);
      lStack_f8 = *param_5;
      puVar14 = (undefined4 *)param_5[2];
      uStack_a4 = *(undefined4 *)((longlong)param_6 + 0x1c);
      lStack_c0 = *param_6;
      puStack_f0 = (undefined4 *)param_6[2];
      uStack_d4 = *(undefined4 *)((longlong)param_7 + 0x1c);
      lStack_e8 = *param_7;
      puVar15 = (undefined4 *)param_7[2];
      iVar20 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                                CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                      CONCAT13(unaff_XMM6_Bd,
                               CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
      cVar57 = (char)((uint)iVar20 >> 8);
      cVar58 = (char)((uint)iVar20 >> 0x10);
      cVar59 = (char)((uint)iVar20 >> 0x18);
      iVar21 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                                CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                      CONCAT13(unaff_XMM6_Bh,
                               CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
      cVar60 = (char)((uint)iVar21 >> 8);
      cVar61 = (char)((uint)iVar21 >> 0x10);
      cVar62 = (char)((uint)iVar21 >> 0x18);
      iVar22 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                                CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                      CONCAT13(unaff_XMM6_Bl,
                               CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
      cVar63 = (char)((uint)iVar22 >> 8);
      cVar64 = (char)((uint)iVar22 >> 0x10);
      cVar65 = (char)((uint)iVar22 >> 0x18);
      iVar23 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                                CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                      CONCAT13(unaff_XMM6_Bp,
                               CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
      cVar66 = (char)((uint)iVar23 >> 8);
      cVar67 = (char)((uint)iVar23 >> 0x10);
      cVar68 = (char)((uint)iVar23 >> 0x18);
      plStack_a0 = (longlong *)plVar29[3];
      pauVar46 = pauVar35 + 1;
      lVar26 = lStack_f8 + 0x20;
      lStack_e0 = lStack_c0 + 0x20;
      lVar3 = lStack_e8 + 0x20;
LAB_140bcf018:
      if (plStack_a0 != (longlong *)0x0) {
        if ((short)uVar30 == 0) {
          do {
            auVar52 = *pauVar46;
            pauVar35 = pauVar35 + -0x2b0;
            pauVar46 = pauVar46 + 1;
            uVar30 = (ushort)((ushort)(SUB161(auVar52 >> 7,0) & 1) |
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
                             (ushort)(byte)(auVar52[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar30 == 0);
        }
        uVar36 = 0;
        for (uVar18 = uVar30; (uVar18 & 1) == 0; uVar18 = uVar18 >> 1 | 0x80000000) {
          uVar36 = uVar36 + 1;
        }
        uVar30 = uVar30 - 1 & uVar30;
        plStack_a0 = (longlong *)((longlong)plStack_a0 + -1);
        lVar16 = *(longlong *)pauVar35[(ulonglong)uVar36 * -0x2b + -0x2b];
        if (plVar29[9] != 0) {
          uStack_b8 = lVar16;
          uVar32 = pdb_1400af0a0(plVar29 + 10,&uStack_b8);
          bVar51 = (byte)(uVar32 >> 0x39);
          auVar52 = ZEXT216(CONCAT11(bVar51,bVar51));
          auVar52 = pshuflw(auVar52,auVar52,0);
          lVar37 = 0;
          while( true ) {
            uVar32 = uVar32 & plVar29[7];
            auVar5 = *(undefined1 (*) [16])(plVar29[6] + uVar32);
            auVar55[0] = -(auVar5[0] == auVar52[0]);
            auVar55[1] = -(auVar5[1] == auVar52[1]);
            auVar55[2] = -(auVar5[2] == auVar52[2]);
            auVar55[3] = -(auVar5[3] == auVar52[3]);
            auVar55[4] = -(auVar5[4] == auVar52[4]);
            auVar55[5] = -(auVar5[5] == auVar52[5]);
            auVar55[6] = -(auVar5[6] == auVar52[6]);
            auVar55[7] = -(auVar5[7] == auVar52[7]);
            auVar55[8] = -(auVar5[8] == auVar52[0]);
            auVar55[9] = -(auVar5[9] == auVar52[1]);
            auVar55[10] = -(auVar5[10] == auVar52[2]);
            auVar55[0xb] = -(auVar5[0xb] == auVar52[3]);
            auVar55[0xc] = -(auVar5[0xc] == auVar52[4]);
            auVar55[0xd] = -(auVar5[0xd] == auVar52[5]);
            auVar55[0xe] = -(auVar5[0xe] == auVar52[6]);
            auVar55[0xf] = -(auVar5[0xf] == auVar52[7]);
            uVar40 = (ushort)(SUB161(auVar55 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar55 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar55 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar55 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar55 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar55 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar55 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar55 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar55 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar55 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar55 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar55 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar55 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar55 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar55 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar55[0xf] >> 7) << 0xf;
            uVar36 = (uint)uVar40;
            while (uVar40 != 0) {
              uVar18 = 0;
              for (uVar19 = uVar36; (uVar19 & 1) == 0; uVar19 = uVar19 >> 1 | 0x80000000) {
                uVar18 = uVar18 + 1;
              }
              lVar41 = plVar29[6] + (uVar18 + uVar32 & plVar29[7]) * -0x10;
              if (lVar16 == *(longlong *)(lVar41 + -0x10)) {
                uVar32 = *(ulonglong *)(lVar41 + -8);
                if ((uVar32 & 0xffffffff) == 0) goto LAB_140bcf1f0;
                uVar27 = uVar32 & 0xffffffff ^ 0xffffffff;
                uVar31 = 1;
                if (uVar27 < *(ulonglong *)(lVar10 + 0x10)) {
                  piVar38 = (int *)(uVar27 * 0x18 + *(longlong *)(lVar10 + 8));
                  uVar27 = uVar32 >> 0x20;
                  if ((piVar38[4] == (int)(uVar32 >> 0x20)) && (*piVar38 != 0)) {
                    uVar27 = *(ulonglong *)(piVar38 + 2);
                    uVar31 = 0;
                    if (((uVar27 & 0xffffffff) < *(ulonglong *)(lVar9 + 0x38)) &&
                       ((*(ulonglong *)(*(longlong *)(lVar9 + 0x28) + (uVar27 >> 6 & 0x3ffffff) * 8)
                         >> (uVar27 & 0x3f) & 1) != 0)) {
                      fVar4 = *(float *)(*(longlong *)
                                          (*(longlong *)
                                            (*(longlong *)(lVar10 + 0x1a0) + 0x18 +
                                            (uVar27 >> 0x20) * 0x48) + 0x10 +
                                          ~*(ulonglong *)
                                            (*(longlong *)
                                              (*(longlong *)(lVar10 + 0x1a0) + 0x38 +
                                              (uVar27 >> 0x20) * 0x48) +
                                            *(longlong *)(lVar9 + 0x110) * 8) * 0x30) +
                                        (ulonglong)(uint)~piVar38[1] * 8);
                      if ((fVar4 != fVar24) || (NAN(fVar4) || NAN(fVar24))) goto LAB_140bcf018;
                      goto LAB_140bcf1f0;
                    }
                  }
                }
                uStack_b8 = CONCAT44((int)uVar27,uVar31);
                uStack_b0 = uVar32;
                    /* WARNING: Subroutine does not return */
                pdb_142dc8170(&UNK_143064a60,0x2b,&uStack_b8,&UNK_143064a90,&UNK_143064250);
              }
              uVar40 = (ushort)(uVar36 - 1) & (ushort)uVar36;
              uVar36 = CONCAT22((short)(uVar36 - 1 >> 0x10),uVar40);
            }
            auVar53[0] = -(auVar5[0] == (char)iVar20);
            auVar53[1] = -(auVar5[1] == cVar57);
            auVar53[2] = -(auVar5[2] == cVar58);
            auVar53[3] = -(auVar5[3] == cVar59);
            auVar53[4] = -(auVar5[4] == (char)iVar21);
            auVar53[5] = -(auVar5[5] == cVar60);
            auVar53[6] = -(auVar5[6] == cVar61);
            auVar53[7] = -(auVar5[7] == cVar62);
            auVar53[8] = -(auVar5[8] == (char)iVar22);
            auVar53[9] = -(auVar5[9] == cVar63);
            auVar53[10] = -(auVar5[10] == cVar64);
            auVar53[0xb] = -(auVar5[0xb] == cVar65);
            auVar53[0xc] = -(auVar5[0xc] == (char)iVar23);
            auVar53[0xd] = -(auVar5[0xd] == cVar66);
            auVar53[0xe] = -(auVar5[0xe] == cVar67);
            auVar53[0xf] = -(auVar5[0xf] == cVar68);
            if ((((((((((((((((SUB161(auVar53 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar53 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar53 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar53 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar53 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar53 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar53 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar53 >> 0x3f,0) & 1) != 0) || (SUB161(auVar53 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar53 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar53 >> 0x57,0) & 1) != 0) || (SUB161(auVar53 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar53 >> 0x67,0) & 1) != 0) || (SUB161(auVar53 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar53 >> 0x77,0) & 1) != 0) || auVar53[0xf] < '\0') break;
            uVar32 = uVar32 + lVar37 + 0x10;
            lVar37 = lVar37 + 0x10;
          }
        }
LAB_140bcf1f0:
        uStack_b8 = lVar16;
        if (plVar29[3] != 0) {
          uVar32 = pdb_1400af0a0(plVar29 + 4,&uStack_b8);
          lVar37 = *plVar29;
          bVar51 = (byte)(uVar32 >> 0x39);
          auVar52 = ZEXT216(CONCAT11(bVar51,bVar51));
          auVar52 = pshuflw(auVar52,auVar52,0);
          lVar41 = 0;
          while( true ) {
            uVar32 = uVar32 & plVar29[1];
            auVar5 = *(undefined1 (*) [16])(lVar37 + uVar32);
            auVar56[0] = -(auVar5[0] == auVar52[0]);
            auVar56[1] = -(auVar5[1] == auVar52[1]);
            auVar56[2] = -(auVar5[2] == auVar52[2]);
            auVar56[3] = -(auVar5[3] == auVar52[3]);
            auVar56[4] = -(auVar5[4] == auVar52[4]);
            auVar56[5] = -(auVar5[5] == auVar52[5]);
            auVar56[6] = -(auVar5[6] == auVar52[6]);
            auVar56[7] = -(auVar5[7] == auVar52[7]);
            auVar56[8] = -(auVar5[8] == auVar52[0]);
            auVar56[9] = -(auVar5[9] == auVar52[1]);
            auVar56[10] = -(auVar5[10] == auVar52[2]);
            auVar56[0xb] = -(auVar5[0xb] == auVar52[3]);
            auVar56[0xc] = -(auVar5[0xc] == auVar52[4]);
            auVar56[0xd] = -(auVar5[0xd] == auVar52[5]);
            auVar56[0xe] = -(auVar5[0xe] == auVar52[6]);
            auVar56[0xf] = -(auVar5[0xf] == auVar52[7]);
            uVar40 = (ushort)(SUB161(auVar56 >> 7,0) & 1) |
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
            uVar36 = (uint)uVar40;
            while (uVar40 != 0) {
              uVar18 = 0;
              for (uVar19 = uVar36; (uVar19 & 1) == 0; uVar19 = uVar19 >> 1 | 0x80000000) {
                uVar18 = uVar18 + 1;
              }
              lVar39 = (uVar18 + uVar32 & plVar29[1]) * -0x2b0;
              if (lVar16 == *(longlong *)(lVar37 + -0x2b0 + lVar39)) {
                lVar37 = lVar37 + lVar39;
                if ((*(ulonglong *)(lVar37 + -0x298) < 2) || (*(float *)(lVar37 + -0x278) <= 0.0))
                goto LAB_140bcf57f;
                if (*(char *)(lVar37 + -7) != '\0') goto LAB_140bcf018;
                if (iVar7 - 1U < 2) {
                  if ((lVar34 != lVar16) ||
                     (uVar31 = (undefined4)CONCAT71((uint7)(uint3)((uint)iVar7 >> 8),1),
                     *(uint *)(lVar37 + -0x50) < 2)) goto LAB_140bcf018;
                }
                else {
                  if (iVar7 != 0) {
                    if (cStack_91 == '\0') {
                      return;
                    }
                    plVar29 = (longlong *)pdb_140e97000();
                    if ((char)plVar29[0xd] != '\x01') goto LAB_140bcf5d1;
                    goto LAB_140bcf54f;
                  }
                  uVar31 = 0;
                }
                bStack_100 = (byte)uVar31;
                bStack_ff = bStack_100 ^ 1;
                lStack_c8 = CONCAT44(lStack_c8._4_4_,uVar31);
                lStack_108 = lVar16;
                lVar41 = pdb_140b54cf0(plVar29,lVar16,param_3);
                if (lVar41 == 0) {
                  bVar47 = false;
                }
                else {
                  bVar47 = *(char *)(lVar41 + 0x3d) != '\0' && *(float *)(lVar41 + 0x30) <= fVar25;
                }
                lVar41 = lVar11;
                lVar39 = pdb_1409fec60(&lStack_108,lVar11,lVar37 + -0x2a8,uStack_93,bVar47);
                uStack_b8 = lVar39;
                uStack_b0 = lVar41;
                if ((((char)lStack_c8 == '\0' && cStack_92 == '\0') &&
                    (((*(char *)(lVar39 + 0x18) != '\x02' ||
                      (*(longlong *)(lVar39 + 0x38) != lVar41)) ||
                     (*(char *)(lVar39 + 0x19) == '\x02')))) ||
                   ((lStack_c8 = lVar41,
                    pdb_1409ff220(&lStack_108,lVar37 + -0x2a8,&uStack_b8,
                                  *(undefined4 *)(lVar12 + 0x2c),uVar13),
                    *(char *)(lVar39 + 0x18) != '\x02' ||
                    (*(longlong *)(lVar39 + 0x38) != lStack_c8)))) goto LAB_140bcf018;
                bVar51 = *(byte *)(lVar39 + 0x19);
                if (bVar51 < 2) {
                  *puVar14 = uStack_d8;
                  lVar37 = *(longlong *)(lStack_f8 + 0x30);
                  uVar45 = *(undefined8 *)(lStack_f8 + 0x40);
                  lVar41 = lStack_f8;
                  if (lVar37 == *(longlong *)(lStack_f8 + 0x20)) {
                    pdb_142d7e980(lVar26);
                    lVar41 = lStack_f8;
                  }
                }
                else {
                  if (bVar51 != 4) {
                    if (bVar51 == 3) {
                      *puStack_f0 = uStack_a4;
                      lVar37 = *(longlong *)(lStack_c0 + 0x30);
                      uVar45 = *(undefined8 *)(lStack_c0 + 0x40);
                      if (lVar37 == *(longlong *)(lStack_c0 + 0x20)) {
                        pdb_142d7e980(lStack_e0);
                      }
                      lVar41 = *(longlong *)(lStack_c0 + 0x28);
                      *(undefined8 *)(lVar41 + lVar37 * 0x10) = uVar45;
                      *(longlong *)(lVar41 + 8 + lVar37 * 0x10) = lVar16;
                      *(longlong *)(lStack_c0 + 0x30) = lVar37 + 1;
                      *(longlong *)(lStack_c0 + 0x40) = *(longlong *)(lStack_c0 + 0x40) + 1;
                      *puVar15 = uStack_d4;
                      lVar16 = *(longlong *)(lStack_e8 + 0x30);
                      uVar45 = *(undefined8 *)(lStack_e8 + 0x40);
                      if (lVar16 == *(longlong *)(lStack_e8 + 0x20)) {
                        pdb_142d7e8a0(lVar3);
                      }
                      *(undefined8 *)(*(longlong *)(lStack_e8 + 0x28) + lVar16 * 8) = uVar45;
                      *(longlong *)(lStack_e8 + 0x30) = lVar16 + 1;
                      *(longlong *)(lStack_e8 + 0x40) = *(longlong *)(lStack_e8 + 0x40) + 1;
                    }
                    goto LAB_140bcf018;
                  }
                  *puStack_f0 = uStack_a4;
                  lVar37 = *(longlong *)(lStack_c0 + 0x30);
                  uVar45 = *(undefined8 *)(lStack_c0 + 0x40);
                  lVar41 = lStack_c0;
                  if (lVar37 == *(longlong *)(lStack_c0 + 0x20)) {
                    pdb_142d7e980(lStack_e0);
                    lVar41 = lStack_c0;
                  }
                }
                lVar39 = *(longlong *)(lVar41 + 0x28);
                *(undefined8 *)(lVar39 + lVar37 * 0x10) = uVar45;
                *(longlong *)(lVar39 + 8 + lVar37 * 0x10) = lVar16;
                *(longlong *)(lVar41 + 0x30) = lVar37 + 1;
                *(longlong *)(lVar41 + 0x40) = *(longlong *)(lVar41 + 0x40) + 1;
                goto LAB_140bcf018;
              }
              uVar40 = (ushort)(uVar36 - 1) & (ushort)uVar36;
              uVar36 = CONCAT22((short)(uVar36 - 1 >> 0x10),uVar40);
            }
            auVar54[0] = -(auVar5[0] == (char)iVar20);
            auVar54[1] = -(auVar5[1] == cVar57);
            auVar54[2] = -(auVar5[2] == cVar58);
            auVar54[3] = -(auVar5[3] == cVar59);
            auVar54[4] = -(auVar5[4] == (char)iVar21);
            auVar54[5] = -(auVar5[5] == cVar60);
            auVar54[6] = -(auVar5[6] == cVar61);
            auVar54[7] = -(auVar5[7] == cVar62);
            auVar54[8] = -(auVar5[8] == (char)iVar22);
            auVar54[9] = -(auVar5[9] == cVar63);
            auVar54[10] = -(auVar5[10] == cVar64);
            auVar54[0xb] = -(auVar5[0xb] == cVar65);
            auVar54[0xc] = -(auVar5[0xc] == (char)iVar23);
            auVar54[0xd] = -(auVar5[0xd] == cVar66);
            auVar54[0xe] = -(auVar5[0xe] == cVar67);
            auVar54[0xf] = -(auVar5[0xf] == cVar68);
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
            uVar32 = uVar32 + lVar41 + 0x10;
            lVar41 = lVar41 + 0x10;
          }
        }
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143064280);
      }
    }
    if (cStack_91 == '\0') {
      return;
    }
    plVar29 = (longlong *)pdb_140e97000();
    if (((char)plVar29[0xd] == '\x01') ||
       (plVar29 = (longlong *)pdb_142d8ec20(plVar29,0), plVar29 != (longlong *)0x0)) {
      if (*plVar29 != 0) goto LAB_140bcf572;
      *plVar29 = -1;
      plStack_a0 = plVar29;
      pdb_140e95370(plVar29 + 1,uStack_d0);
      goto LAB_140bcee7a;
    }
  }
  else {
    puVar42 = &UNK_143064b03;
    lVar34 = 0x5d;
    uVar32 = 0x5d;
    lVar26 = pdb_140bd69c0(&UNK_143064b03);
    if (lVar26 == 1) {
      if (0x5d < uVar32) {
LAB_140bcf64e:
        pdb_142dc8070(&UNK_143064b03,0x5d,0);
LAB_140bcf66e:
        pdb_142dc8070(&UNK_143064b03,0x5d);
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
      puVar42 = &UNK_143064b03;
      uVar27 = pdb_140bd69c0(&UNK_143064b03);
      if ((uVar27 & 1) != 0) {
        if (0x5d < uVar32 + 2) goto LAB_140bcf66e;
        lVar34 = 0x5b - uVar32;
        puVar42 = &UNK_143064b05 + uVar32;
      }
    }
    puVar28 = &UNK_143064249;
    puVar44 = &UNK_1430641f9;
    do {
      pbVar1 = puVar28 + -1;
      uVar30 = (uint)(char)*pbVar1;
      if ((int)uVar30 < 0) {
        bVar51 = puVar28[-2];
        if ((char)bVar51 < -0x40) {
          bVar6 = puVar28[-3];
          if ((char)bVar6 < -0x40) {
            pbVar2 = puVar28 + -4;
            puVar28 = puVar28 + -4;
            uVar30 = bVar6 & 0x3f | (*pbVar2 & 7) << 6;
          }
          else {
            puVar28 = puVar28 + -3;
            uVar30 = bVar6 & 0xf;
          }
          uVar30 = bVar51 & 0x3f | uVar30 << 6;
        }
        else {
          puVar28 = puVar28 + -2;
          uVar30 = bVar51 & 0x1f;
        }
        uVar30 = (uint)(*pbVar1 & 0x3f) | uVar30 << 6;
        if (uVar30 != 0x5c) goto LAB_140bced79;
LAB_140bceda5:
        if (puVar28 + -0x1430641f8 < (undefined *)0x51) {
          lVar26 = 0x4f - (longlong)(puVar28 + -0x1430641f9);
          puVar44 = puVar28 + 1;
          goto LAB_140bcedc8;
        }
        pdb_142dc8070(&UNK_1430641f9,0x50,puVar28 + -0x1430641f8,0x50,&UNK_143064c20);
        goto LAB_140bcf64e;
      }
      puVar28 = puVar28 + -1;
      if (uVar30 == 0x5c) goto LAB_140bceda5;
LAB_140bced79:
      if (uVar30 == 0x2f) goto LAB_140bceda5;
    } while (puVar28 != &UNK_1430641f9);
    lVar26 = 0x50;
LAB_140bcedc8:
    plVar29 = (longlong *)pdb_140e97000();
    if (((char)plVar29[0xd] == '\x01') ||
       (plVar29 = (longlong *)pdb_142d8ec20(plVar29,0), plVar29 != (longlong *)0x0)) {
      if (*plVar29 != 0) goto LAB_140bcf572;
      *plVar29 = -1;
      plStack_a0 = plVar29;
      uStack_d0 = pdb_140e94f10(plVar29 + 1,puVar42,lVar34,puVar44,lVar26,1,0);
      *plStack_a0 = *plStack_a0 + 1;
      pcVar8 = (char *)*param_1;
      cVar57 = *pcVar8;
      goto joined_r0x000140bced9a;
    }
  }
  do {
    plVar29 = (longlong *)pdb_142dc7890(&UNK_143326860);
LAB_140bcf5d1:
    plVar29 = (longlong *)pdb_142d8ec20(plVar29,0);
  } while (plVar29 == (longlong *)0x0);
LAB_140bcf54f:
  if (*plVar29 != 0) {
LAB_140bcf572:
    pdb_142dc8090(&UNK_143326a50);
LAB_140bcf57f:
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_143064268);
  }
  *plVar29 = -1;
  plStack_a0 = plVar29;
  pdb_140e95370(plVar29 + 1,uStack_d0);
LAB_140bcee7a:
  *plStack_a0 = *plStack_a0 + 1;
  return;
}

