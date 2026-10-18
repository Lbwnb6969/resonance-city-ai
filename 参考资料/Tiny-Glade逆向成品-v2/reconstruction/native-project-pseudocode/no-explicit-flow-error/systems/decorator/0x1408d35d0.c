// VA 0x1408d35d0, PDB extent 31 bytes
// system_decorator::decorator_visual::maintain_visual_entities::clear_out_wall_holes
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/maintain_visual_entities.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::maintain_visual_entities::clear_out_wall_holes
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/maintain_visual_entities.rs
   Extent: 31 */

void pdb_1408d35d0(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char *pcVar2;
  char cVar3;
  undefined8 uVar4;
  ushort uVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined1 (*pauVar20) [16];
  undefined1 (*pauVar21) [16];
  ulonglong uVar22;
  byte bVar23;
  undefined1 uVar24;
  undefined1 (*pauVar25) [16];
  longlong lVar26;
  uint uVar27;
  uint uVar28;
  ulonglong uVar29;
  ushort uVar30;
  ulonglong uVar31;
  longlong lVar32;
  byte bVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 unaff_XMM6_Ba;
  undefined1 unaff_XMM6_Bb;
  undefined1 unaff_XMM6_Bc;
  undefined1 unaff_XMM6_Bd;
  undefined1 unaff_XMM6_Be;
  undefined1 unaff_XMM6_Bf;
  undefined1 unaff_XMM6_Bg;
  undefined1 unaff_XMM6_Bh;
  undefined1 unaff_XMM6_Bi;
  undefined1 unaff_XMM6_Bj;
  undefined1 unaff_XMM6_Bk;
  undefined1 unaff_XMM6_Bl;
  undefined1 unaff_XMM6_Bm;
  undefined1 unaff_XMM6_Bn;
  undefined1 unaff_XMM6_Bo;
  undefined1 unaff_XMM6_Bp;
  longlong lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  longlong lStack_98;
  undefined *puStack_90;
  ulonglong uStack_60;
  
  *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
  param_1 = (undefined8 *)*param_1;
  *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2 = (undefined8 *)*param_2;
  lVar16 = param_2[3];
  if (lVar16 != 0) {
    pauVar21 = (undefined1 (*) [16])*param_2;
    auVar34 = *pauVar21;
    uVar27 = ~(uint)(ushort)((ushort)(SUB161(auVar34 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar34[0xf] >> 7) << 0xf);
    pauVar25 = pauVar21 + 1;
    do {
      if ((short)uVar27 == 0) {
        do {
          auVar34 = *pauVar25;
          pauVar21 = pauVar21 + -0x28;
          pauVar25 = pauVar25 + 1;
          uVar27 = (ushort)((ushort)(SUB161(auVar34 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar34[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar27 == 0);
      }
      uVar28 = 0;
      for (uVar15 = uVar27; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
        uVar28 = uVar28 + 1;
      }
      uVar27 = uVar27 - 1 & uVar27;
      *(undefined8 *)((longlong)pauVar21 + (ulonglong)uVar28 * -0x28 + -0x10) = 0;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  uVar14 = _UNK_142e47bfc;
  uVar13 = _UNK_142e47bf8;
  lVar16 = param_1[3];
  if (lVar16 != 0) {
    pauVar21 = (undefined1 (*) [16])*param_1;
    auVar34 = *pauVar21;
    uVar27 = ~(uint)(ushort)((ushort)(SUB161(auVar34 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar34[0xf] >> 7) << 0xf);
    pauVar25 = pauVar21 + 1;
    iVar8 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                             CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                   CONCAT13(unaff_XMM6_Bd,
                            CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
    iVar9 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                             CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                   CONCAT13(unaff_XMM6_Bh,
                            CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
    iVar10 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                              CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                    CONCAT13(unaff_XMM6_Bl,
                             CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
    iVar11 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                              CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                    CONCAT13(unaff_XMM6_Bp,
                             CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
LAB_140c2b763:
    do {
      if ((short)uVar27 == 0) {
        do {
          auVar34 = *pauVar25;
          pauVar21 = pauVar21 + -0x68;
          pauVar25 = pauVar25 + 1;
          uVar27 = (ushort)((ushort)(SUB161(auVar34 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar34[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar27 == 0);
      }
      uVar28 = 0;
      for (uVar15 = uVar27; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
        uVar28 = uVar28 + 1;
      }
      uVar27 = uVar27 - 1 & uVar27;
      lVar17 = (ulonglong)uVar28 * -0x68;
      lVar16 = lVar16 + -1;
      lVar32 = *(longlong *)((longlong)pauVar21 + lVar17 + -0x68);
      lStack_b8 = lVar32;
      uVar18 = pdb_1400af0a0(param_2 + 4,&lStack_b8);
      pauVar20 = (undefined1 (*) [16])*param_2;
      uVar22 = param_2[1];
      bVar23 = (byte)(uVar18 >> 0x38);
      bVar33 = bVar23 >> 1;
      auVar34 = ZEXT216(CONCAT11(bVar33,bVar33));
      auVar34 = pshuflw(auVar34,auVar34,0);
      lVar26 = 0;
      uVar29 = uVar18;
      while( true ) {
        uVar29 = uVar29 & uVar22;
        pcVar2 = *pauVar20 + uVar29;
        auVar38[0] = -(*pcVar2 == auVar34[0]);
        auVar38[1] = -(pcVar2[1] == auVar34[1]);
        auVar38[2] = -(pcVar2[2] == auVar34[2]);
        auVar38[3] = -(pcVar2[3] == auVar34[3]);
        auVar38[4] = -(pcVar2[4] == auVar34[4]);
        auVar38[5] = -(pcVar2[5] == auVar34[5]);
        auVar38[6] = -(pcVar2[6] == auVar34[6]);
        auVar38[7] = -(pcVar2[7] == auVar34[7]);
        auVar38[8] = -(pcVar2[8] == auVar34[0]);
        auVar38[9] = -(pcVar2[9] == auVar34[1]);
        auVar38[10] = -(pcVar2[10] == auVar34[2]);
        auVar38[0xb] = -(pcVar2[0xb] == auVar34[3]);
        auVar38[0xc] = -(pcVar2[0xc] == auVar34[4]);
        auVar38[0xd] = -(pcVar2[0xd] == auVar34[5]);
        auVar38[0xe] = -(pcVar2[0xe] == auVar34[6]);
        auVar38[0xf] = -(pcVar2[0xf] == auVar34[7]);
        uVar30 = (ushort)(SUB161(auVar38 >> 7,0) & 1) | (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar38 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar38 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar38 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar38 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe | (ushort)(auVar38[0xf] >> 7) << 0xf
        ;
        uVar28 = (uint)uVar30;
        while (uVar30 != 0) {
          uVar15 = 0;
          for (uVar7 = uVar28; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
            uVar15 = uVar15 + 1;
          }
          uVar31 = uVar15 + uVar29 & uVar22;
          if (*(longlong *)((longlong)pauVar20 + uVar31 * -0x28 + -0x28) == lVar32) {
            lVar26 = (longlong)pauVar20 + uVar31 * -0x28;
            cVar3 = *(char *)((longlong)pauVar21 + lVar17 + -0x60);
            goto joined_r0x000140c2b858;
          }
          uVar30 = (ushort)(uVar28 - 1) & (ushort)uVar28;
          uVar28 = CONCAT22((short)(uVar28 - 1 >> 0x10),uVar30);
        }
        auVar37[0] = -(*pcVar2 == (char)iVar8);
        auVar37[1] = -(pcVar2[1] == (char)((uint)iVar8 >> 8));
        auVar37[2] = -(pcVar2[2] == (char)((uint)iVar8 >> 0x10));
        auVar37[3] = -(pcVar2[3] == (char)((uint)iVar8 >> 0x18));
        auVar37[4] = -(pcVar2[4] == (char)iVar9);
        auVar37[5] = -(pcVar2[5] == (char)((uint)iVar9 >> 8));
        auVar37[6] = -(pcVar2[6] == (char)((uint)iVar9 >> 0x10));
        auVar37[7] = -(pcVar2[7] == (char)((uint)iVar9 >> 0x18));
        auVar37[8] = -(pcVar2[8] == (char)iVar10);
        auVar37[9] = -(pcVar2[9] == (char)((uint)iVar10 >> 8));
        auVar37[10] = -(pcVar2[10] == (char)((uint)iVar10 >> 0x10));
        auVar37[0xb] = -(pcVar2[0xb] == (char)((uint)iVar10 >> 0x18));
        auVar37[0xc] = -(pcVar2[0xc] == (char)iVar11);
        auVar37[0xd] = -(pcVar2[0xd] == (char)((uint)iVar11 >> 8));
        auVar37[0xe] = -(pcVar2[0xe] == (char)((uint)iVar11 >> 0x10));
        auVar37[0xf] = -(pcVar2[0xf] == (char)((uint)iVar11 >> 0x18));
        if ((((((((((((((((SUB161(auVar37 >> 7,0) & 1) != 0 || (SUB161(auVar37 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar37 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar37 >> 0x1f,0) & 1) != 0) || (SUB161(auVar37 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar37 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar37 >> 0x37,0) & 1) != 0) || (SUB161(auVar37 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar37 >> 0x47,0) & 1) != 0) || (SUB161(auVar37 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar37 >> 0x57,0) & 1) != 0) || (SUB161(auVar37 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar37 >> 0x67,0) & 1) != 0) || (SUB161(auVar37 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar37 >> 0x77,0) & 1) != 0) || auVar37[0xf] < '\0') break;
        uVar29 = uVar29 + lVar26 + 0x10;
        lVar26 = lVar26 + 0x10;
      }
      if (param_2[2] == 0) {
        pdb_142d9fed0(param_2,1,param_2 + 4,CONCAT71((int7)(uVar29 >> 8),1));
        pauVar20 = (undefined1 (*) [16])*param_2;
        uVar22 = param_2[1];
      }
      uVar18 = uVar18 & uVar22;
      auVar34 = *(undefined1 (*) [16])(*pauVar20 + uVar18);
      uVar30 = (ushort)(SUB161(auVar34 >> 7,0) & 1) | (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar34[0xf] >> 7) << 0xf;
      uVar28 = (uint)uVar30;
      if (uVar30 == 0) {
        lVar26 = 0x10;
        do {
          uVar18 = uVar18 + lVar26 & uVar22;
          auVar34 = *(undefined1 (*) [16])(*pauVar20 + uVar18);
          lVar26 = lVar26 + 0x10;
          uVar28 = (uint)(ushort)((ushort)(SUB161(auVar34 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar34[0xf] >> 7) << 0xf);
        } while (uVar28 == 0);
      }
      uVar15 = 0;
      for (; (uVar28 & 1) == 0; uVar28 = uVar28 >> 1 | 0x80000000) {
        uVar15 = uVar15 + 1;
      }
      uVar29 = uVar15 + uVar18 & uVar22;
      bVar33 = (*pauVar20)[uVar29];
      if (-1 < (char)bVar33) {
        auVar34 = *pauVar20;
        uVar28 = 0;
        for (uVar15 = (uint)(ushort)((ushort)(SUB161(auVar34 >> 7,0) & 1) |
                                     (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
                                     (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
                                     (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
                                     (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
                                     (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
                                     (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
                                     (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
                                     (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
                                     (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
                                     (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
                                     (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
                                     (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
                                     (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
                                     (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe |
                                    (ushort)(byte)(auVar34[0xf] >> 7) << 0xf); (uVar15 & 1) == 0;
            uVar15 = uVar15 >> 1 | 0x80000000) {
          uVar28 = uVar28 + 1;
        }
        uVar29 = (ulonglong)uVar28;
        bVar33 = (*pauVar20)[uVar29];
      }
      bVar23 = bVar23 >> 1;
      (*pauVar20)[uVar29] = bVar23;
      pauVar20[1][uVar29 - 0x10 & uVar22] = bVar23;
      lVar26 = (longlong)pauVar20 + uVar29 * -0x28;
      *(longlong *)((longlong)pauVar20 + uVar29 * -0x28 + -0x28) = lVar32;
      *(undefined8 *)((longlong)pauVar20 + uVar29 * -0x28 + -0x20) = 0;
      *(undefined8 *)((longlong)pauVar20 + uVar29 * -0x28 + -0x18) = 4;
      *(undefined8 *)((longlong)pauVar20 + uVar29 * -0x28 + -0x10) = 0;
      *(undefined4 *)((longlong)pauVar20 + uVar29 * -0x28 + -8) = 0;
      *(undefined1 *)((longlong)pauVar20 + uVar29 * -0x28 + -4) = 0;
      auVar34._0_8_ = CONCAT71(0,bVar33 & 1);
      auVar34._8_4_ = uVar13;
      auVar34._12_4_ = uVar14;
      param_2[2] = param_2[2] - auVar34._0_8_;
      param_2[3] = param_2[3] - auVar34._8_8_;
      cVar3 = *(char *)((longlong)pauVar21 + lVar17 + -0x60);
joined_r0x000140c2b858:
      if (cVar3 != '\0') {
        *(undefined4 *)(lVar26 + -8) = *(undefined4 *)((longlong)pauVar21 + lVar17 + -0x40);
        *(undefined1 *)(lVar26 + -4) = *(undefined1 *)((longlong)pauVar21 + lVar17 + -0x3c);
        uVar4 = *(undefined8 *)((longlong)pauVar21 + lVar17 + -0x50);
        uVar22 = *(ulonglong *)((longlong)pauVar21 + lVar17 + -0x48);
        *(undefined8 *)(lVar26 + -0x10) = 0;
        if (*(ulonglong *)(lVar26 + -0x20) < uVar22) {
          pdb_142d7f1b0(lVar26 + -0x20,0,uVar22,4,0x14);
          lVar32 = *(longlong *)(lVar26 + -0x10);
LAB_140c2b950:
          lVar19 = lVar32;
          pub_142e32760(lVar19 * 0x14 + *(longlong *)(lVar26 + -0x18),uVar4);
        }
        else {
          lVar19 = 0;
          lVar32 = 0;
          if (uVar22 != 0) goto LAB_140c2b950;
        }
        plVar1 = (longlong *)((longlong)pauVar21 + lVar17 + -0x58);
        *(ulonglong *)(lVar26 + -0x10) = lVar19 + uVar22;
        lStack_b8 = *plVar1;
        uStack_b0 = *(undefined8 *)((longlong)pauVar21 + lVar17 + -0x50);
        uStack_a8 = *(undefined8 *)((longlong)pauVar21 + lVar17 + -0x48);
        uStack_a0 = *(undefined8 *)((longlong)pauVar21 + lVar17 + -0x40);
        *(undefined8 *)((longlong)pauVar21 + lVar17 + -0x58) = 0;
        *(undefined8 *)((longlong)pauVar21 + lVar17 + -0x50) = 4;
        *(undefined8 *)((longlong)pauVar21 + lVar17 + -0x48) = 0;
        *(undefined4 *)((longlong)pauVar21 + lVar17 + -0x40) = 0;
        *(undefined1 *)((longlong)pauVar21 + lVar17 + -0x3c) = 0;
        lStack_98 = *(longlong *)((longlong)pauVar21 + lVar17 + -0x38);
        puStack_90 = *(undefined **)((longlong)pauVar21 + lVar17 + -0x30);
        *(undefined8 *)((longlong)pauVar21 + lVar17 + -0x38) = 0;
        *(undefined8 *)((longlong)pauVar21 + lVar17 + -0x30) = 4;
        *(undefined8 *)((longlong)pauVar21 + lVar17 + -0x28) = 0;
        uVar4 = *(undefined8 *)((longlong)pauVar21 + lVar17 + -0x20);
        uVar12 = *(undefined8 *)((longlong)pauVar21 + lVar17 + -0x18);
        lVar32 = *(longlong *)((longlong)pauVar21 + lVar17 + -0x58);
        if (lVar32 != 0) {
          pub_1406abac0(*(byte **)((longlong)pauVar21 + lVar17 + -0x50),lVar32 * 0x14,4);
        }
        *(undefined8 *)((longlong)pauVar21 + lVar17 + -0x60) = 0;
        *plVar1 = lStack_98;
        *(undefined **)((longlong)pauVar21 + lVar17 + -0x50) = puStack_90;
        *(undefined8 *)((longlong)pauVar21 + lVar17 + -0x48) = 0;
        *(undefined8 *)((longlong)pauVar21 + lVar17 + -0x30) = uStack_a8;
        *(undefined8 *)((longlong)pauVar21 + lVar17 + -0x28) = uStack_a0;
        *(longlong *)((longlong)pauVar21 + lVar17 + -0x40) = lStack_b8;
        *(undefined8 *)((longlong)pauVar21 + lVar17 + -0x38) = uStack_b0;
        *(undefined8 *)((longlong)pauVar21 + lVar17 + -0x20) = 0;
        *(undefined8 *)((longlong)pauVar21 + lVar17 + -0x18) = 0;
        *(undefined8 *)((longlong)pauVar21 + lVar17 + -0x10) = uVar4;
        *(undefined8 *)((longlong)pauVar21 + lVar17 + -8) = uVar12;
        if (lVar16 == 0) break;
        goto LAB_140c2b763;
      }
      *(undefined8 *)((longlong)pauVar21 + lVar17 + -0x48) = 0;
      *(undefined8 *)((longlong)pauVar21 + lVar17 + -0x30) = 0;
      *(undefined8 *)((longlong)pauVar21 + lVar17 + -0x20) = 0;
      *(undefined8 *)((longlong)pauVar21 + lVar17 + -0x18) = 0;
      *(undefined8 *)((longlong)pauVar21 + lVar17 + -0x10) = 0;
      *(undefined8 *)((longlong)pauVar21 + lVar17 + -8) = 0;
    } while (lVar16 != 0);
  }
  lVar16 = param_2[3];
  if (lVar16 != 0) {
    pauVar21 = (undefined1 (*) [16])*param_2;
    uStack_60 = param_2[1];
    auVar34 = *pauVar21;
    uVar27 = ~(uint)(ushort)((ushort)(SUB161(auVar34 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar34[0xf] >> 7) << 0xf);
    pauVar25 = pauVar21 + 1;
    lVar32 = param_2[2];
    pauVar20 = pauVar21;
    lVar17 = lVar16;
    do {
      if ((short)uVar27 == 0) {
        do {
          auVar34 = *pauVar25;
          pauVar20 = pauVar20 + -0x28;
          pauVar25 = pauVar25 + 1;
          uVar27 = (ushort)((ushort)(SUB161(auVar34 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar34[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar27 == 0);
      }
      uVar28 = 0;
      for (uVar15 = uVar27; (uVar15 & 1) == 0; uVar15 = uVar15 >> 1 | 0x80000000) {
        uVar28 = uVar28 + 1;
      }
      if (*(longlong *)((longlong)pauVar20 + (ulonglong)uVar28 * -0x28 + -0x10) == 0) {
        lVar26 = (ulonglong)uVar28 * -0x28 + (longlong)pauVar20;
        lVar19 = ((longlong)pauVar21 - lVar26 >> 3) * -0x3333333333333333;
        uVar22 = lVar19 - 0x10U & uStack_60;
        pcVar2 = *pauVar21 + uVar22;
        auVar35[0] = -(*pcVar2 == -1);
        auVar35[1] = -(pcVar2[1] == -1);
        auVar35[2] = -(pcVar2[2] == -1);
        auVar35[3] = -(pcVar2[3] == -1);
        auVar35[4] = -(pcVar2[4] == -1);
        auVar35[5] = -(pcVar2[5] == -1);
        auVar35[6] = -(pcVar2[6] == -1);
        auVar35[7] = -(pcVar2[7] == -1);
        auVar35[8] = -(pcVar2[8] == -1);
        auVar35[9] = -(pcVar2[9] == -1);
        auVar35[10] = -(pcVar2[10] == -1);
        auVar35[0xb] = -(pcVar2[0xb] == -1);
        auVar35[0xc] = -(pcVar2[0xc] == -1);
        auVar35[0xd] = -(pcVar2[0xd] == -1);
        auVar35[0xe] = -(pcVar2[0xe] == -1);
        auVar35[0xf] = -(pcVar2[0xf] == -1);
        uVar5 = (ushort)(SUB161(auVar35 >> 7,0) & 1) | (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe | (ushort)(auVar35[0xf] >> 7) << 0xf;
        pcVar2 = (char *)((longlong)pauVar21 + lVar19);
        auVar36[0] = -(*pcVar2 == -1);
        auVar36[1] = -(pcVar2[1] == -1);
        auVar36[2] = -(pcVar2[2] == -1);
        auVar36[3] = -(pcVar2[3] == -1);
        auVar36[4] = -(pcVar2[4] == -1);
        auVar36[5] = -(pcVar2[5] == -1);
        auVar36[6] = -(pcVar2[6] == -1);
        auVar36[7] = -(pcVar2[7] == -1);
        auVar36[8] = -(pcVar2[8] == -1);
        auVar36[9] = -(pcVar2[9] == -1);
        auVar36[10] = -(pcVar2[10] == -1);
        auVar36[0xb] = -(pcVar2[0xb] == -1);
        auVar36[0xc] = -(pcVar2[0xc] == -1);
        auVar36[0xd] = -(pcVar2[0xd] == -1);
        auVar36[0xe] = -(pcVar2[0xe] == -1);
        auVar36[0xf] = -(pcVar2[0xf] == -1);
        uVar30 = 0xf;
        if (uVar5 != 0) {
          for (; uVar5 >> uVar30 == 0; uVar30 = uVar30 - 1) {
          }
        }
        sVar6 = 0;
        for (uVar28 = (ushort)((ushort)(SUB161(auVar36 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe |
                              (ushort)(auVar36[0xf] >> 7) << 0xf) | 0x10000; (uVar28 & 1) == 0;
            uVar28 = uVar28 >> 1 | 0x80000000) {
          sVar6 = sVar6 + 1;
        }
        uVar24 = 0x80;
        if ((ushort)(sVar6 + (uVar30 ^ 0xf)) < 0x10) {
          lVar32 = lVar32 + 1;
          param_2[2] = lVar32;
          uVar24 = 0xff;
        }
        *(undefined1 *)((longlong)pauVar21 + lVar19) = uVar24;
        pauVar21[1][uVar22] = uVar24;
        lVar17 = lVar17 + -1;
        param_2[3] = lVar17;
        if (*(longlong *)(lVar26 + -0x20) != 0) {
          puStack_90 = &UNK_1417bd86f;
          pub_1406abac0(*(byte **)(lVar26 + -0x18),*(longlong *)(lVar26 + -0x20) * 0x14,4);
        }
      }
      uVar27 = uVar27 - 1 & uVar27;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  return;
}

