// VA 0x140beb130, PDB extent 2077 bytes
// country_core::systems::wall::snapping::snapping_to_ends::snapping_to_ends
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/snapping/snapping_to_ends.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::snapping::snapping_to_ends::snapping_to_ends
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/snapping/snapping_to_ends.rs
   Extent: 2077 */

void pdb_140beb130(undefined8 *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  char cVar4;
  char cVar5;
  float fVar6;
  float fVar7;
  char *pcVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  char cVar13;
  float fVar14;
  undefined8 *puVar15;
  uint uVar16;
  ulonglong uVar17;
  bool bVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  float *pfVar22;
  undefined1 (*pauVar23) [16];
  uint uVar24;
  longlong lVar25;
  longlong lVar26;
  ushort uVar27;
  longlong lVar28;
  undefined1 (*pauVar29) [16];
  byte bVar30;
  float extraout_XMM0_Da;
  float fVar32;
  undefined1 auVar31 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  float fVar41;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar42 [16];
  undefined1 unaff_XMM8_Ba;
  char cVar43;
  undefined1 unaff_XMM8_Bb;
  char cVar44;
  undefined1 unaff_XMM8_Bc;
  char cVar45;
  undefined1 unaff_XMM8_Bd;
  char cVar46;
  undefined1 unaff_XMM8_Be;
  char cVar47;
  undefined1 unaff_XMM8_Bf;
  char cVar48;
  undefined1 unaff_XMM8_Bg;
  char cVar49;
  undefined1 unaff_XMM8_Bh;
  char cVar50;
  undefined1 unaff_XMM8_Bi;
  char cVar51;
  undefined1 unaff_XMM8_Bj;
  char cVar52;
  undefined1 unaff_XMM8_Bk;
  char cVar53;
  undefined1 unaff_XMM8_Bl;
  char cVar54;
  undefined1 unaff_XMM8_Bm;
  char cVar55;
  undefined1 unaff_XMM8_Bn;
  char cVar56;
  undefined1 unaff_XMM8_Bo;
  char cVar57;
  undefined1 unaff_XMM8_Bp;
  char cVar58;
  float unaff_XMM11_Da;
  float fVar59;
  float unaff_XMM11_Db;
  float unaff_XMM12_Da;
  float fVar60;
  longlong lStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  undefined8 *puStack_e0;
  
  fVar14 = _DAT_142e36f28;
  pcVar8 = (char *)*param_1;
  if (*pcVar8 != '\x01') {
    return;
  }
  param_2 = (longlong *)*param_2;
  if (SBORROW8(0,*param_2)) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143065a00);
  }
  pfVar22 = (float *)&UNK_143044340;
  if (*(char *)*param_3 != '\0') {
    pfVar22 = (float *)((char *)*param_3 + 4);
  }
  cVar4 = pcVar8[1];
  plVar9 = (longlong *)*param_4;
  pauVar29 = (undefined1 (*) [16])*plVar9;
  lVar25 = plVar9[3];
  auVar31 = *pauVar29;
  pauVar23 = pauVar29 + 1;
  uVar24 = ~(uint)(ushort)((ushort)(SUB161(auVar31 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar31[0xf] >> 7) << 0xf);
  lStack_e8 = param_2[0x10];
  cVar5 = *(char *)((longlong)param_2 + 0xa7);
  fVar6 = *pfVar22;
  fVar7 = pfVar22[2];
  iVar12 = -(uint)(CONCAT13(unaff_XMM8_Bd,
                            CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba))) ==
                  CONCAT13(unaff_XMM8_Bd,
                           CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba))));
  cVar43 = (char)iVar12;
  cVar44 = (char)((uint)iVar12 >> 8);
  cVar45 = (char)((uint)iVar12 >> 0x10);
  cVar46 = (char)((uint)iVar12 >> 0x18);
  iVar12 = -(uint)(CONCAT13(unaff_XMM8_Bh,
                            CONCAT12(unaff_XMM8_Bg,CONCAT11(unaff_XMM8_Bf,unaff_XMM8_Be))) ==
                  CONCAT13(unaff_XMM8_Bh,
                           CONCAT12(unaff_XMM8_Bg,CONCAT11(unaff_XMM8_Bf,unaff_XMM8_Be))));
  cVar47 = (char)iVar12;
  cVar48 = (char)((uint)iVar12 >> 8);
  cVar49 = (char)((uint)iVar12 >> 0x10);
  cVar50 = (char)((uint)iVar12 >> 0x18);
  iVar12 = -(uint)(CONCAT13(unaff_XMM8_Bl,
                            CONCAT12(unaff_XMM8_Bk,CONCAT11(unaff_XMM8_Bj,unaff_XMM8_Bi))) ==
                  CONCAT13(unaff_XMM8_Bl,
                           CONCAT12(unaff_XMM8_Bk,CONCAT11(unaff_XMM8_Bj,unaff_XMM8_Bi))));
  cVar51 = (char)iVar12;
  cVar52 = (char)((uint)iVar12 >> 8);
  cVar53 = (char)((uint)iVar12 >> 0x10);
  cVar54 = (char)((uint)iVar12 >> 0x18);
  iVar12 = -(uint)(CONCAT13(unaff_XMM8_Bp,
                            CONCAT12(unaff_XMM8_Bo,CONCAT11(unaff_XMM8_Bn,unaff_XMM8_Bm))) ==
                  CONCAT13(unaff_XMM8_Bp,
                           CONCAT12(unaff_XMM8_Bo,CONCAT11(unaff_XMM8_Bn,unaff_XMM8_Bm))));
  cVar55 = (char)iVar12;
  cVar56 = (char)((uint)iVar12 >> 8);
  cVar57 = (char)((uint)iVar12 >> 0x10);
  cVar58 = (char)((uint)iVar12 >> 0x18);
  fVar59 = _DAT_143057f74;
  puStack_e0 = param_1;
  cVar13 = '\x02';
LAB_140beb22b:
  if (cVar4 == '\0') {
LAB_140beb380:
    if (lVar25 != 0) {
      if ((short)uVar24 == 0) {
        do {
          auVar31 = *pauVar23;
          pauVar29 = pauVar29 + -0x2b0;
          pauVar23 = pauVar23 + 1;
          uVar24 = (ushort)((ushort)(SUB161(auVar31 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar31[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar24 == 0);
      }
      uVar16 = 0;
      for (uVar10 = uVar24; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
        uVar16 = uVar16 + 1;
      }
      lVar21 = *(longlong *)pauVar29[(ulonglong)uVar16 * -0x2b + -0x2b];
      lStack_f8 = lVar21;
      if (plVar9[3] != 0) {
        uVar24 = uVar24 - 1 & uVar24;
        lVar25 = lVar25 + -1;
        uVar17 = pdb_1400af0a0(plVar9 + 4,&lStack_f8);
        lVar19 = *plVar9;
        bVar30 = (byte)(uVar17 >> 0x39);
        auVar31 = ZEXT216(CONCAT11(bVar30,bVar30));
        auVar31 = pshuflw(auVar31,auVar31,0);
        lVar26 = 0;
        while( true ) {
          uVar17 = uVar17 & plVar9[1];
          auVar3 = *(undefined1 (*) [16])(lVar19 + uVar17);
          auVar38[0] = -(auVar3[0] == auVar31[0]);
          auVar38[1] = -(auVar3[1] == auVar31[1]);
          auVar38[2] = -(auVar3[2] == auVar31[2]);
          auVar38[3] = -(auVar3[3] == auVar31[3]);
          auVar38[4] = -(auVar3[4] == auVar31[4]);
          auVar38[5] = -(auVar3[5] == auVar31[5]);
          auVar38[6] = -(auVar3[6] == auVar31[6]);
          auVar38[7] = -(auVar3[7] == auVar31[7]);
          auVar38[8] = -(auVar3[8] == auVar31[0]);
          auVar38[9] = -(auVar3[9] == auVar31[1]);
          auVar38[10] = -(auVar3[10] == auVar31[2]);
          auVar38[0xb] = -(auVar3[0xb] == auVar31[3]);
          auVar38[0xc] = -(auVar3[0xc] == auVar31[4]);
          auVar38[0xd] = -(auVar3[0xd] == auVar31[5]);
          auVar38[0xe] = -(auVar3[0xe] == auVar31[6]);
          auVar38[0xf] = -(auVar3[0xf] == auVar31[7]);
          uVar27 = (ushort)(SUB161(auVar38 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
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
                   (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar38[0xf] >> 7) << 0xf;
          uVar16 = (uint)uVar27;
          while (uVar27 != 0) {
            uVar10 = 0;
            for (uVar11 = uVar16; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
              uVar10 = uVar10 + 1;
            }
            lVar28 = (uVar10 + uVar17 & plVar9[1]) * -0x2b0;
            if (lVar21 == *(longlong *)(lVar19 + -0x2b0 + lVar28)) {
              lVar19 = lVar19 + lVar28;
              if ((*(ulonglong *)(lVar19 + -0x298) < 2) || (*(float *)(lVar19 + -0x278) <= 0.0))
              goto LAB_140beb8ad;
              if ((*(int *)(lVar19 + -0x50) != 2) || (lVar21 == lStack_e8)) goto LAB_140beb380;
              goto LAB_140beb4b8;
            }
            uVar27 = (ushort)(uVar16 - 1) & (ushort)uVar16;
            uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar27);
          }
          auVar34[0] = -(auVar3[0] == cVar43);
          auVar34[1] = -(auVar3[1] == cVar44);
          auVar34[2] = -(auVar3[2] == cVar45);
          auVar34[3] = -(auVar3[3] == cVar46);
          auVar34[4] = -(auVar3[4] == cVar47);
          auVar34[5] = -(auVar3[5] == cVar48);
          auVar34[6] = -(auVar3[6] == cVar49);
          auVar34[7] = -(auVar3[7] == cVar50);
          auVar34[8] = -(auVar3[8] == cVar51);
          auVar34[9] = -(auVar3[9] == cVar52);
          auVar34[10] = -(auVar3[10] == cVar53);
          auVar34[0xb] = -(auVar3[0xb] == cVar54);
          auVar34[0xc] = -(auVar3[0xc] == cVar55);
          auVar34[0xd] = -(auVar3[0xd] == cVar56);
          auVar34[0xe] = -(auVar3[0xe] == cVar57);
          auVar34[0xf] = -(auVar3[0xf] == cVar58);
          if ((((((((((((((((SUB161(auVar34 >> 7,0) & 1) != 0 || (SUB161(auVar34 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar34 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar34 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar34 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar34 >> 0x2f,0) & 1) != 0) || (SUB161(auVar34 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar34 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar34 >> 0x47,0) & 1) != 0) || (SUB161(auVar34 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar34 >> 0x57,0) & 1) != 0) || (SUB161(auVar34 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar34 >> 0x67,0) & 1) != 0) || (SUB161(auVar34 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar34 >> 0x77,0) & 1) != 0) || auVar34[0xf] < '\0') break;
          uVar17 = uVar17 + lVar26 + 0x10;
          lVar26 = lVar26 + 0x10;
        }
      }
      goto LAB_140beb70f;
    }
  }
  else {
LAB_140beb233:
    if (lVar25 != 0) {
      if ((short)uVar24 == 0) {
        do {
          auVar31 = *pauVar23;
          pauVar29 = pauVar29 + -0x2b0;
          pauVar23 = pauVar23 + 1;
          uVar24 = (ushort)((ushort)(SUB161(auVar31 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar31[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar24 == 0);
      }
      uVar16 = 0;
      for (uVar10 = uVar24; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
        uVar16 = uVar16 + 1;
      }
      lVar21 = *(longlong *)pauVar29[(ulonglong)uVar16 * -0x2b + -0x2b];
      lStack_f8 = lVar21;
      if (plVar9[3] != 0) {
        uVar24 = uVar24 - 1 & uVar24;
        lVar25 = lVar25 + -1;
        uVar17 = pdb_1400af0a0(plVar9 + 4,&lStack_f8);
        lVar19 = *plVar9;
        bVar30 = (byte)(uVar17 >> 0x39);
        auVar31 = ZEXT216(CONCAT11(bVar30,bVar30));
        auVar31 = pshuflw(auVar31,auVar31,0);
        lVar26 = 0;
        do {
          uVar17 = uVar17 & plVar9[1];
          auVar3 = *(undefined1 (*) [16])(lVar19 + uVar17);
          auVar37[0] = -(auVar3[0] == auVar31[0]);
          auVar37[1] = -(auVar3[1] == auVar31[1]);
          auVar37[2] = -(auVar3[2] == auVar31[2]);
          auVar37[3] = -(auVar3[3] == auVar31[3]);
          auVar37[4] = -(auVar3[4] == auVar31[4]);
          auVar37[5] = -(auVar3[5] == auVar31[5]);
          auVar37[6] = -(auVar3[6] == auVar31[6]);
          auVar37[7] = -(auVar3[7] == auVar31[7]);
          auVar37[8] = -(auVar3[8] == auVar31[0]);
          auVar37[9] = -(auVar3[9] == auVar31[1]);
          auVar37[10] = -(auVar3[10] == auVar31[2]);
          auVar37[0xb] = -(auVar3[0xb] == auVar31[3]);
          auVar37[0xc] = -(auVar3[0xc] == auVar31[4]);
          auVar37[0xd] = -(auVar3[0xd] == auVar31[5]);
          auVar37[0xe] = -(auVar3[0xe] == auVar31[6]);
          auVar37[0xf] = -(auVar3[0xf] == auVar31[7]);
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
                   (ushort)(auVar37[0xf] >> 7) << 0xf;
          uVar16 = (uint)uVar27;
          while (uVar27 != 0) {
            uVar10 = 0;
            for (uVar11 = uVar16; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
              uVar10 = uVar10 + 1;
            }
            lVar28 = (uVar10 + uVar17 & plVar9[1]) * -0x2b0;
            if (lVar21 == *(longlong *)(lVar19 + -0x2b0 + lVar28)) {
              lVar19 = lVar19 + lVar28;
              if ((*(ulonglong *)(lVar19 + -0x298) < 2) || (*(float *)(lVar19 + -0x278) <= 0.0)) {
LAB_140beb8ad:
                    /* WARNING: Subroutine does not return */
                pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_143065a48);
              }
              if (*(int *)(lVar19 + -0x50) == 2) goto LAB_140beb4b8;
              goto LAB_140beb233;
            }
            uVar27 = (ushort)(uVar16 - 1) & (ushort)uVar16;
            uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar27);
          }
          auVar33[0] = -(auVar3[0] == cVar43);
          auVar33[1] = -(auVar3[1] == cVar44);
          auVar33[2] = -(auVar3[2] == cVar45);
          auVar33[3] = -(auVar3[3] == cVar46);
          auVar33[4] = -(auVar3[4] == cVar47);
          auVar33[5] = -(auVar3[5] == cVar48);
          auVar33[6] = -(auVar3[6] == cVar49);
          auVar33[7] = -(auVar3[7] == cVar50);
          auVar33[8] = -(auVar3[8] == cVar51);
          auVar33[9] = -(auVar3[9] == cVar52);
          auVar33[10] = -(auVar3[10] == cVar53);
          auVar33[0xb] = -(auVar3[0xb] == cVar54);
          auVar33[0xc] = -(auVar3[0xc] == cVar55);
          auVar33[0xd] = -(auVar3[0xd] == cVar56);
          auVar33[0xe] = -(auVar3[0xe] == cVar57);
          auVar33[0xf] = -(auVar3[0xf] == cVar58);
          if ((((((((((((((((SUB161(auVar33 >> 7,0) & 1) != 0 || (SUB161(auVar33 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar33 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar33 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar33 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar33 >> 0x2f,0) & 1) != 0) || (SUB161(auVar33 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar33 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar33 >> 0x47,0) & 1) != 0) || (SUB161(auVar33 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar33 >> 0x57,0) & 1) != 0) || (SUB161(auVar33 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar33 >> 0x67,0) & 1) != 0) || (SUB161(auVar33 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar33 >> 0x77,0) & 1) != 0) || auVar33[0xf] < '\0') break;
          uVar17 = uVar17 + lVar26 + 0x10;
          lVar26 = lVar26 + 0x10;
        } while( true );
      }
LAB_140beb70f:
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143065a60);
    }
  }
  puVar15 = puStack_e0;
  lVar25 = lStack_f0;
  if (cVar13 == '\x02' || _DAT_142e37838 <= fVar59) {
    return;
  }
  lStack_f8 = lStack_f0;
  if (plVar9[3] != 0) {
    uVar17 = pdb_1400af0a0(plVar9 + 4,&lStack_f8);
    lVar21 = *plVar9;
    bVar30 = (byte)(uVar17 >> 0x39);
    auVar31 = ZEXT216(CONCAT11(bVar30,bVar30));
    auVar31 = pshuflw(auVar31,auVar31,0);
    lVar19 = 0;
    while( true ) {
      uVar17 = uVar17 & plVar9[1];
      auVar3 = *(undefined1 (*) [16])(lVar21 + uVar17);
      auVar42[0] = -(auVar3[0] == auVar31[0]);
      auVar42[1] = -(auVar3[1] == auVar31[1]);
      auVar42[2] = -(auVar3[2] == auVar31[2]);
      auVar42[3] = -(auVar3[3] == auVar31[3]);
      auVar42[4] = -(auVar3[4] == auVar31[4]);
      auVar42[5] = -(auVar3[5] == auVar31[5]);
      auVar42[6] = -(auVar3[6] == auVar31[6]);
      auVar42[7] = -(auVar3[7] == auVar31[7]);
      auVar42[8] = -(auVar3[8] == auVar31[0]);
      auVar42[9] = -(auVar3[9] == auVar31[1]);
      auVar42[10] = -(auVar3[10] == auVar31[2]);
      auVar42[0xb] = -(auVar3[0xb] == auVar31[3]);
      auVar42[0xc] = -(auVar3[0xc] == auVar31[4]);
      auVar42[0xd] = -(auVar3[0xd] == auVar31[5]);
      auVar42[0xe] = -(auVar3[0xe] == auVar31[6]);
      auVar42[0xf] = -(auVar3[0xf] == auVar31[7]);
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
      uVar24 = (uint)uVar27;
      while (uVar27 != 0) {
        uVar16 = 0;
        for (uVar10 = uVar24; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
          uVar16 = uVar16 + 1;
        }
        lVar26 = (uVar16 + uVar17 & plVar9[1]) * -0x2b0;
        if (lVar25 == *(longlong *)(lVar21 + -0x2b0 + lVar26)) {
          lVar21 = lVar21 + lVar26;
          if ((1 < *(ulonglong *)(lVar21 + -0x298)) && (0.0 < *(float *)(lVar21 + -0x278))) {
            cVar4 = *(char *)(lVar21 + -8);
            *(undefined4 *)puVar15[2] = *(undefined4 *)((longlong)puVar15 + 0x1c);
            *pcVar8 = '\x02';
            pcVar8[1] = cVar4;
            *(float *)(pcVar8 + 4) = unaff_XMM12_Da;
            *(ulonglong *)(pcVar8 + 8) = CONCAT44(unaff_XMM11_Da,unaff_XMM11_Db);
            *(longlong *)(pcVar8 + 0x10) = lVar25;
            pcVar8[0x18] = cVar13;
            return;
          }
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_143065a18);
        }
        uVar27 = (ushort)(uVar24 - 1) & (ushort)uVar24;
        uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar27);
      }
      auVar40[0] = -(auVar3[0] == -1);
      auVar40[1] = -(auVar3[1] == -1);
      auVar40[2] = -(auVar3[2] == -1);
      auVar40[3] = -(auVar3[3] == -1);
      auVar40[4] = -(auVar3[4] == -1);
      auVar40[5] = -(auVar3[5] == -1);
      auVar40[6] = -(auVar3[6] == -1);
      auVar40[7] = -(auVar3[7] == -1);
      auVar40[8] = -(auVar3[8] == -1);
      auVar40[9] = -(auVar3[9] == -1);
      auVar40[10] = -(auVar3[10] == -1);
      auVar40[0xb] = -(auVar3[0xb] == -1);
      auVar40[0xc] = -(auVar3[0xc] == -1);
      auVar40[0xd] = -(auVar3[0xd] == -1);
      auVar40[0xe] = -(auVar3[0xe] == -1);
      auVar40[0xf] = -(auVar3[0xf] == -1);
      if ((((((((((((((((SUB161(auVar40 >> 7,0) & 1) != 0 || (SUB161(auVar40 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar40 >> 0x17,0) & 1) != 0) || (SUB161(auVar40 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar40 >> 0x27,0) & 1) != 0) || (SUB161(auVar40 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar40 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar40 >> 0x3f,0) & 1) != 0) || (SUB161(auVar40 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar40 >> 0x4f,0) & 1) != 0) || (SUB161(auVar40 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar40 >> 0x5f,0) & 1) != 0) || (SUB161(auVar40 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar40 >> 0x6f,0) & 1) != 0) || (SUB161(auVar40 >> 0x77,0) & 1) != 0) ||
          auVar40[0xf] < '\0') break;
      uVar17 = uVar17 + lVar19 + 0x10;
      lVar19 = lVar19 + 0x10;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143065a30);
LAB_140beb4b8:
  if (lVar21 == lStack_e8) {
    if (param_2[2] == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143065a78);
    }
    fVar60 = *(float *)param_2[1];
    fVar32 = ((float *)param_2[1])[1];
    bVar18 = true;
    if (cVar5 == '\0') {
      bVar18 = false;
    }
  }
  else {
    lVar26 = *(longlong *)(lVar19 + -0x298);
    if (lVar26 == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143065a90);
    }
    pfVar22 = *(float **)(lVar19 + -0x2a0);
    if (pfVar22 + lVar26 * 2 + -2 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143065aa8);
    }
    fVar60 = pfVar22[lVar26 * 2 + -2];
    fVar32 = pfVar22[lVar26 * 2 + -1];
    fVar36 = fVar6 - *pfVar22;
    fVar41 = fVar7 - pfVar22[1];
    bVar18 = SQRT(fVar41 * fVar41 + fVar36 * fVar36) <
             SQRT((fVar7 - fVar32) * (fVar7 - fVar32) + (fVar6 - fVar60) * (fVar6 - fVar60));
    if (bVar18) {
      fVar60 = *pfVar22;
      fVar32 = pfVar22[1];
    }
  }
  fVar60 = SQRT((fVar7 - fVar32) * (fVar7 - fVar32) + (fVar6 - fVar60) * (fVar6 - fVar60));
  if (fVar60 < fVar59) {
    lStack_f8 = lVar21;
    if (plVar9[3] != 0) {
      uVar17 = pdb_1400af0a0(plVar9 + 4,&lStack_f8);
      lVar19 = *plVar9;
      bVar30 = (byte)(uVar17 >> 0x39);
      auVar31 = ZEXT216(CONCAT11(bVar30,bVar30));
      auVar31 = pshuflw(auVar31,auVar31,0);
      lVar26 = 0;
      while( true ) {
        uVar17 = uVar17 & plVar9[1];
        auVar3 = *(undefined1 (*) [16])(lVar19 + uVar17);
        auVar39[0] = -(auVar3[0] == auVar31[0]);
        auVar39[1] = -(auVar3[1] == auVar31[1]);
        auVar39[2] = -(auVar3[2] == auVar31[2]);
        auVar39[3] = -(auVar3[3] == auVar31[3]);
        auVar39[4] = -(auVar3[4] == auVar31[4]);
        auVar39[5] = -(auVar3[5] == auVar31[5]);
        auVar39[6] = -(auVar3[6] == auVar31[6]);
        auVar39[7] = -(auVar3[7] == auVar31[7]);
        auVar39[8] = -(auVar3[8] == auVar31[0]);
        auVar39[9] = -(auVar3[9] == auVar31[1]);
        auVar39[10] = -(auVar3[10] == auVar31[2]);
        auVar39[0xb] = -(auVar3[0xb] == auVar31[3]);
        auVar39[0xc] = -(auVar3[0xc] == auVar31[4]);
        auVar39[0xd] = -(auVar3[0xd] == auVar31[5]);
        auVar39[0xe] = -(auVar3[0xe] == auVar31[6]);
        auVar39[0xf] = -(auVar3[0xf] == auVar31[7]);
        uVar27 = (ushort)(SUB161(auVar39 >> 7,0) & 1) | (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar39 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar39 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar39 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar39 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar39 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar39 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar39 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar39 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar39 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe | (ushort)(auVar39[0xf] >> 7) << 0xf
        ;
        uVar16 = (uint)uVar27;
        while (uVar27 != 0) {
          uVar10 = 0;
          for (uVar11 = uVar16; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
            uVar10 = uVar10 + 1;
          }
          lVar28 = (uVar10 + uVar17 & plVar9[1]) * -0x2b0;
          if (lVar21 == *(longlong *)(lVar19 + -0x2b0 + lVar28)) {
            lVar19 = lVar19 + lVar28;
            if ((*(ulonglong *)(lVar19 + -0x298) < 2) || (*(float *)(lVar19 + -0x278) <= 0.0)) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_143065ac0);
            }
            lStack_f0 = lVar19;
            uVar16 = pdb_1419a9060(lVar19 + -0x270);
            uVar20 = (ulonglong)uVar16;
            uVar17 = *(ulonglong *)(lStack_f0 + -0x260);
            if (uVar17 <= uVar20) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar20,uVar17,&UNK_14335e4e0);
            }
            uVar1 = uVar20 + 1;
            if (uVar17 <= uVar1) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar1,uVar17,&UNK_14335e4f8);
            }
            lVar19 = *(longlong *)(lStack_f0 + -0x268);
            fVar59 = fVar14 - extraout_XMM0_Da;
            unaff_XMM12_Da =
                 *(float *)(lVar19 + 4 + uVar1 * 0xc) * extraout_XMM0_Da +
                 *(float *)(lVar19 + 4 + uVar20 * 0xc) * fVar59;
            uVar2 = *(undefined8 *)(lVar19 + 8 + uVar20 * 0xc);
            unaff_XMM11_Da =
                 extraout_XMM0_Da * *(float *)(lVar19 + 8 + uVar1 * 0xc) + (float)uVar2 * fVar59;
            unaff_XMM11_Db =
                 fVar59 * *(float *)(lVar19 + uVar20 * 0xc) +
                 (float)((ulonglong)uVar2 >> 0x20) * extraout_XMM0_Da;
            fVar59 = fVar60;
            lStack_f0 = lVar21;
            cVar13 = bVar18;
            goto LAB_140beb22b;
          }
          uVar27 = (ushort)(uVar16 - 1) & (ushort)uVar16;
          uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar27);
        }
        auVar35[0] = -(auVar3[0] == cVar43);
        auVar35[1] = -(auVar3[1] == cVar44);
        auVar35[2] = -(auVar3[2] == cVar45);
        auVar35[3] = -(auVar3[3] == cVar46);
        auVar35[4] = -(auVar3[4] == cVar47);
        auVar35[5] = -(auVar3[5] == cVar48);
        auVar35[6] = -(auVar3[6] == cVar49);
        auVar35[7] = -(auVar3[7] == cVar50);
        auVar35[8] = -(auVar3[8] == cVar51);
        auVar35[9] = -(auVar3[9] == cVar52);
        auVar35[10] = -(auVar3[10] == cVar53);
        auVar35[0xb] = -(auVar3[0xb] == cVar54);
        auVar35[0xc] = -(auVar3[0xc] == cVar55);
        auVar35[0xd] = -(auVar3[0xd] == cVar56);
        auVar35[0xe] = -(auVar3[0xe] == cVar57);
        auVar35[0xf] = -(auVar3[0xf] == cVar58);
        if ((((((((((((((((SUB161(auVar35 >> 7,0) & 1) != 0 || (SUB161(auVar35 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar35 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar35 >> 0x1f,0) & 1) != 0) || (SUB161(auVar35 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar35 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar35 >> 0x37,0) & 1) != 0) || (SUB161(auVar35 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar35 >> 0x47,0) & 1) != 0) || (SUB161(auVar35 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar35 >> 0x57,0) & 1) != 0) || (SUB161(auVar35 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar35 >> 0x67,0) & 1) != 0) || (SUB161(auVar35 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar35 >> 0x77,0) & 1) != 0) || auVar35[0xf] < '\0') break;
        uVar17 = uVar17 + lVar26 + 0x10;
        lVar26 = lVar26 + 0x10;
      }
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143065ad8);
  }
  goto LAB_140beb22b;
}

