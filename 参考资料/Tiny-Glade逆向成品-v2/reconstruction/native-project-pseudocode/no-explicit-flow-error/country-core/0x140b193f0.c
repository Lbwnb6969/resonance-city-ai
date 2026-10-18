// VA 0x140b193f0, PDB extent 3482 bytes
// country_core::startup::load_mesh_atlases::reload_mesh_atlases
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_mesh_atlases.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::startup::load_mesh_atlases::reload_mesh_atlases
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_mesh_atlases.rs
   Extent: 3482 */

void pdb_140b193f0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,longlong *param_7)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 (*pauVar6) [16];
  undefined8 uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
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
  char cVar26;
  undefined1 *puVar27;
  undefined8 uVar28;
  int iVar29;
  longlong *plVar30;
  undefined8 *puVar31;
  longlong lVar32;
  longlong lVar33;
  undefined1 (*pauVar34) [16];
  ulonglong uVar35;
  undefined1 (*pauVar36) [16];
  longlong lVar37;
  undefined8 *puVar38;
  ulonglong arg1;
  undefined1 (*pauVar39) [16];
  longlong lVar40;
  code *pcVar41;
  undefined1 (*pauVar42) [16];
  uint uVar43;
  ushort uVar44;
  undefined1 (*unaff_R12) [16];
  longlong unaff_R13;
  undefined8 *puVar45;
  uint unaff_R15D;
  uint uVar46;
  bool bVar47;
  byte bVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  code *pcStack_1a8;
  code *pcStack_1a0;
  undefined1 *puStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined1 **ppuStack_150;
  undefined1 *puStack_140;
  code *pcStack_138;
  longlong lStack_130;
  undefined1 auStack_128 [16];
  undefined1 *puStack_118;
  code *pcStack_110;
  longlong lStack_108;
  undefined8 *puStack_100;
  undefined1 (*pauStack_f8) [16];
  undefined8 *puStack_f0;
  undefined1 auStack_e8 [16];
  undefined1 *puStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined1 uStack_a1;
  ulonglong *puStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined1 uStack_81;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  puVar45 = param_2;
  plVar30 = (longlong *)pdb_140f3bda0();
  if ((char)plVar30[2] == '\x01') {
    lStack_108 = *plVar30;
    puVar45 = (undefined8 *)plVar30[1];
  }
  else {
    lStack_108 = pdb_140f4fd10();
    *plVar30 = lStack_108;
    plVar30[1] = (longlong)puVar45;
    *(undefined1 *)(plVar30 + 2) = 1;
  }
  *plVar30 = lStack_108 + 1;
  pcVar41 = _UNK_1430561b8;
  puVar27 = _DAT_1430561b0;
  auVar50 = _DAT_1430561a0;
  puStack_118 = _DAT_1430561b0;
  pcStack_110 = _UNK_1430561b8;
  auStack_128 = _DAT_1430561a0;
  puStack_100 = puVar45;
  puVar31 = (undefined8 *)pdb_140f3bda0();
  puStack_f0 = param_3;
  if (*(char *)(puVar31 + 2) == '\x01') {
    puStack_c8 = (undefined *)*puVar31;
    puVar45 = (undefined8 *)puVar31[1];
  }
  else {
    puStack_c8 = (undefined *)pdb_140f4fd10();
    *puVar31 = puStack_c8;
    puVar31[1] = puVar45;
    *(undefined1 *)(puVar31 + 2) = 1;
  }
  *puVar31 = puStack_c8 + 1;
  puStack_d8 = puVar27;
  pcStack_d0 = pcVar41;
  auStack_e8 = auVar50;
  uVar5 = *param_5;
  uStack_81 = 1;
  puStack_c0 = puVar45;
  pdb_140c58180(&puStack_140);
  pcStack_190 = pcStack_138 + lStack_130;
  pcStack_1a8 = pcStack_138;
  pcStack_1a0 = pcStack_138;
  puStack_198 = puStack_140;
  uStack_81 = 1;
  pdb_1417a6e30(auStack_e8,&pcStack_1a8);
  puStack_a0 = (ulonglong *)*param_6;
  lVar40 = param_6[1];
  uVar35 = *puStack_a0;
  pauVar39 = (undefined1 (*) [16])0x0;
  pauVar36 = (undefined1 (*) [16])(uVar35 - *(ulonglong *)(lVar40 + 0x18));
  if (uVar35 < *(ulonglong *)(lVar40 + 0x18)) {
    pauVar36 = pauVar39;
  }
  pauVar34 = (undefined1 (*) [16])(uVar35 - *(ulonglong *)(lVar40 + 0x38));
  if (uVar35 < *(ulonglong *)(lVar40 + 0x38)) {
    pauVar34 = pauVar39;
  }
  puVar45 = (undefined8 *)((longlong)pauVar36 * 0x38 + *(longlong *)(lVar40 + 8));
  pauVar6 = *(undefined1 (**) [16])(lVar40 + 0x10);
  pauVar42 = (undefined1 (*) [16])((longlong)pauVar6 - (longlong)pauVar36);
  if (pauVar6 < pauVar36) {
    pauVar42 = pauVar39;
  }
  if (pauVar6 < pauVar36) {
    puVar45 = (undefined8 *)0x8;
  }
  puStack_b0 = (undefined8 *)((longlong)pauVar34 * 0x38 + *(longlong *)(lVar40 + 0x28));
  pauVar36 = (undefined1 (*) [16])
             ((longlong)*(undefined1 (**) [16])(lVar40 + 0x30) - (longlong)pauVar34);
  if (*(undefined1 (**) [16])(lVar40 + 0x30) < pauVar34) {
    puStack_b0 = (undefined8 *)0x8;
    pauVar36 = pauVar39;
  }
  *puStack_a0 = (*(longlong *)(lVar40 + 0x40) - (longlong)pauVar36) - (longlong)pauVar42;
  puStack_98 = puVar45 + (longlong)pauVar42 * 7;
  puStack_90 = puStack_b0 + (longlong)pauVar36 * 7;
  puStack_b8 = (undefined8 *)*param_1;
  do {
    if ((pauVar39 == (undefined1 (*) [16])0x0) || (unaff_R13 == 0)) {
      if ((puVar45 == (undefined8 *)0x0) || (puVar45 == puStack_98)) {
        if ((puStack_b0 == (undefined8 *)0x0) || (puStack_b0 == puStack_90)) {
LAB_140b197c3:
          if (pcStack_110 == (code *)0x0 && pcStack_d0 == (code *)0x0) {
            if (auStack_e8._8_8_ != 0) {
              uVar35 = auStack_e8._8_8_ + 0x10 & 0xfffffffffffffff0;
              arg1 = auStack_e8._8_8_ + uVar35 + 0x11;
              if (arg1 != 0) {
                pub_1406abac0((byte *)(auStack_e8._0_8_ - uVar35),arg1,0x10);
              }
            }
          }
          else {
            auVar50 = *(undefined1 (*) [16])auStack_e8._0_8_;
            pauVar39 = (undefined1 (*) [16])(auStack_e8._0_8_ + 0x10);
            uVar46 = ~(uint)(ushort)((ushort)(SUB161(auVar50 >> 7,0) & 1) |
                                     (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1 |
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
                                     (ushort)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe |
                                    (ushort)(byte)(auVar50[0xf] >> 7) << 0xf);
            puStack_a0 = (ulonglong *)
                         CONCAT44(puStack_a0._4_4_,*(undefined4 *)((longlong)puStack_f0 + 0x1c));
            puStack_90 = (undefined8 *)*puStack_f0;
            puStack_98 = (undefined8 *)puStack_f0[2];
            pcVar41 = pcStack_d0;
            pauVar36 = (undefined1 (*) [16])auStack_e8._0_8_;
            while (bVar47 = pcVar41 != (code *)0x0, pcVar41 = pcVar41 + -1, bVar47) {
              if ((short)uVar46 == 0) {
                do {
                  auVar50 = *pauVar39;
                  pauVar36 = pauVar36 + -1;
                  pauVar39 = pauVar39 + 1;
                  uVar46 = (ushort)((ushort)(SUB161(auVar50 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1 |
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
                                    (ushort)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar50[0xf] >> 7) << 0xf) ^ 0xffff;
                } while (uVar46 == 0);
              }
              uVar43 = 0;
              for (uVar10 = uVar46; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
                uVar43 = uVar43 + 1;
              }
              uVar46 = uVar46 - 1 & uVar46;
              *(undefined4 *)puStack_98 = puStack_a0._0_4_;
              uStack_81 = 1;
              pdb_140a58020(puStack_90,(*pauVar36)[~(ulonglong)uVar43]);
            }
            auVar50 = *(undefined1 (*) [16])auStack_128._0_8_;
            pauVar39 = (undefined1 (*) [16])(auStack_128._0_8_ + 0x10);
            uVar46 = ~(uint)(ushort)((ushort)(SUB161(auVar50 >> 7,0) & 1) |
                                     (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1 |
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
                                     (ushort)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe |
                                    (ushort)(byte)(auVar50[0xf] >> 7) << 0xf);
            pauVar36 = (undefined1 (*) [16])auStack_128._0_8_;
            pcVar41 = pcStack_110;
            while (bVar47 = pcVar41 != (code *)0x0, pcVar41 = pcVar41 + -1, bVar47) {
              if ((short)uVar46 == 0) {
                do {
                  auVar50 = *pauVar39;
                  pauVar36 = pauVar36 + -0x10;
                  pauVar39 = pauVar39 + 1;
                  uVar46 = (ushort)((ushort)(SUB161(auVar50 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1 |
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
                                    (ushort)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar50[0xf] >> 7) << 0xf) ^ 0xffff;
                } while (uVar46 == 0);
              }
              iVar29 = 0;
              for (uVar43 = uVar46; (uVar43 & 1) == 0; uVar43 = uVar43 >> 1 | 0x80000000) {
                iVar29 = iVar29 + 1;
              }
              uVar46 = uVar46 - 1 & uVar46;
              *(undefined4 *)puStack_98 = puStack_a0._0_4_;
              uStack_81 = 1;
              pdb_140a57c70(puStack_90,(longlong)pauVar36 + (-0x10 - (ulonglong)(uint)(iVar29 << 4))
                           );
            }
            pauVar39 = (undefined1 (*) [16])*puStack_b8;
            lVar40 = puStack_b8[3];
            auVar50 = *pauVar39;
            uVar46 = ~(uint)(ushort)((ushort)(SUB161(auVar50 >> 7,0) & 1) |
                                     (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1 |
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
                                     (ushort)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe |
                                    (ushort)(byte)(auVar50[0xf] >> 7) << 0xf);
            pauVar36 = pauVar39 + 1;
            while (bVar47 = lVar40 != 0, lVar40 = lVar40 + -1, bVar47) {
              if ((short)uVar46 == 0) {
                do {
                  auVar50 = *pauVar36;
                  pauVar39 = pauVar39 + -0x28;
                  pauVar36 = pauVar36 + 1;
                  uVar46 = (ushort)((ushort)(SUB161(auVar50 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1 |
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
                                    (ushort)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar50[0xf] >> 7) << 0xf) ^ 0xffff;
                } while (uVar46 == 0);
              }
              uVar43 = 0;
              for (uVar10 = uVar46; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
                uVar43 = uVar43 + 1;
              }
              uVar35 = (ulonglong)uVar43;
              uVar46 = uVar46 - 1 & uVar46;
              puStack_b0 = (undefined8 *)((longlong)pauVar39 + uVar35 * -0x28);
              puStack_f0 = (undefined8 *)((longlong)pauVar39 + uVar35 * -0x28 + -0x28);
              puVar45 = *(undefined8 **)((longlong)pauVar39 + uVar35 * -0x28 + -0x10);
              puStack_b8 = puVar45 + *(longlong *)((longlong)pauVar39 + uVar35 * -0x28 + -8) * 0x13;
              pauStack_f8 = pauVar36;
LAB_140b19ad0:
              while (puVar31 = puVar45, pauVar36 = pauStack_f8, puVar31 != puStack_b8) {
                puVar45 = puVar31 + 0x13;
                pcVar1 = (char *)(puVar31 + 0x12);
                if (pcStack_d0 != (code *)0x0) {
                  uStack_81 = 1;
                  uVar35 = pdb_1417c4b30(&puStack_c8,pcVar1);
                  bVar48 = (byte)(uVar35 >> 0x39);
                  auVar50 = ZEXT216(CONCAT11(bVar48,bVar48));
                  auVar50 = pshuflw(auVar50,auVar50,0);
                  lVar32 = 0;
                  while( true ) {
                    uVar35 = uVar35 & auStack_e8._8_8_;
                    auVar49 = *(undefined1 (*) [16])(auStack_e8._0_8_ + uVar35);
                    auVar52[0] = -(auVar49[0] == auVar50[0]);
                    auVar52[1] = -(auVar49[1] == auVar50[1]);
                    auVar52[2] = -(auVar49[2] == auVar50[2]);
                    auVar52[3] = -(auVar49[3] == auVar50[3]);
                    auVar52[4] = -(auVar49[4] == auVar50[4]);
                    auVar52[5] = -(auVar49[5] == auVar50[5]);
                    auVar52[6] = -(auVar49[6] == auVar50[6]);
                    auVar52[7] = -(auVar49[7] == auVar50[7]);
                    auVar52[8] = -(auVar49[8] == auVar50[0]);
                    auVar52[9] = -(auVar49[9] == auVar50[1]);
                    auVar52[10] = -(auVar49[10] == auVar50[2]);
                    auVar52[0xb] = -(auVar49[0xb] == auVar50[3]);
                    auVar52[0xc] = -(auVar49[0xc] == auVar50[4]);
                    auVar52[0xd] = -(auVar49[0xd] == auVar50[5]);
                    auVar52[0xe] = -(auVar49[0xe] == auVar50[6]);
                    auVar52[0xf] = -(auVar49[0xf] == auVar50[7]);
                    uVar44 = (ushort)(SUB161(auVar52 >> 7,0) & 1) |
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
                    uVar43 = (uint)uVar44;
                    while (uVar44 != 0) {
                      uVar10 = 0;
                      for (uVar11 = uVar43; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
                        uVar10 = uVar10 + 1;
                      }
                      if (*pcVar1 ==
                          *(char *)(~(uVar10 + uVar35 & auStack_e8._8_8_) + auStack_e8._0_8_))
                      goto LAB_140b19ba0;
                      uVar44 = (ushort)(uVar43 - 1) & (ushort)uVar43;
                      uVar43 = CONCAT22((short)(uVar43 - 1 >> 0x10),uVar44);
                    }
                    auVar51[0] = -(auVar49[0] == -1);
                    auVar51[1] = -(auVar49[1] == -1);
                    auVar51[2] = -(auVar49[2] == -1);
                    auVar51[3] = -(auVar49[3] == -1);
                    auVar51[4] = -(auVar49[4] == -1);
                    auVar51[5] = -(auVar49[5] == -1);
                    auVar51[6] = -(auVar49[6] == -1);
                    auVar51[7] = -(auVar49[7] == -1);
                    auVar51[8] = -(auVar49[8] == -1);
                    auVar51[9] = -(auVar49[9] == -1);
                    auVar51[10] = -(auVar49[10] == -1);
                    auVar51[0xb] = -(auVar49[0xb] == -1);
                    auVar51[0xc] = -(auVar49[0xc] == -1);
                    auVar51[0xd] = -(auVar49[0xd] == -1);
                    auVar51[0xe] = -(auVar49[0xe] == -1);
                    auVar51[0xf] = -(auVar49[0xf] == -1);
                    if ((((((((((((((((SUB161(auVar51 >> 7,0) & 1) != 0 ||
                                     (SUB161(auVar51 >> 0xf,0) & 1) != 0) ||
                                    (SUB161(auVar51 >> 0x17,0) & 1) != 0) ||
                                   (SUB161(auVar51 >> 0x1f,0) & 1) != 0) ||
                                  (SUB161(auVar51 >> 0x27,0) & 1) != 0) ||
                                 (SUB161(auVar51 >> 0x2f,0) & 1) != 0) ||
                                (SUB161(auVar51 >> 0x37,0) & 1) != 0) ||
                               (SUB161(auVar51 >> 0x3f,0) & 1) != 0) ||
                              (SUB161(auVar51 >> 0x47,0) & 1) != 0) ||
                             (SUB161(auVar51 >> 0x4f,0) & 1) != 0) ||
                            (SUB161(auVar51 >> 0x57,0) & 1) != 0) ||
                           (SUB161(auVar51 >> 0x5f,0) & 1) != 0) ||
                          (SUB161(auVar51 >> 0x67,0) & 1) != 0) ||
                         (SUB161(auVar51 >> 0x6f,0) & 1) != 0) ||
                        (SUB161(auVar51 >> 0x77,0) & 1) != 0) || auVar51[0xf] < '\0') break;
                    uVar35 = uVar35 + lVar32 + 0x10;
                    lVar32 = lVar32 + 0x10;
                  }
                }
                if (pcStack_110 != (code *)0x0) {
                  uStack_81 = 1;
                  uVar35 = pdb_1417c49b0(&lStack_108,puStack_f0);
                  uVar7 = auStack_128._0_8_;
                  uVar28 = auStack_128._8_8_;
                  bVar48 = (byte)(uVar35 >> 0x39);
                  auVar50 = ZEXT216(CONCAT11(bVar48,bVar48));
                  auVar50 = pshuflw(auVar50,auVar50,0);
                  lVar32 = puStack_b0[-5];
                  lVar8 = puStack_b0[-4];
                  lVar37 = 0;
                  while( true ) {
                    uVar35 = uVar35 & uVar28;
                    pcVar2 = (char *)(uVar7 + uVar35);
                    cVar3 = *pcVar2;
                    cVar12 = pcVar2[1];
                    cVar13 = pcVar2[2];
                    cVar14 = pcVar2[3];
                    cVar15 = pcVar2[4];
                    cVar16 = pcVar2[5];
                    cVar17 = pcVar2[6];
                    cVar18 = pcVar2[7];
                    cVar19 = pcVar2[8];
                    cVar20 = pcVar2[9];
                    cVar21 = pcVar2[10];
                    cVar22 = pcVar2[0xb];
                    cVar23 = pcVar2[0xc];
                    cVar24 = pcVar2[0xd];
                    cVar25 = pcVar2[0xe];
                    cVar26 = pcVar2[0xf];
                    auVar49[0] = -(cVar3 == auVar50[0]);
                    auVar49[1] = -(cVar12 == auVar50[1]);
                    auVar49[2] = -(cVar13 == auVar50[2]);
                    auVar49[3] = -(cVar14 == auVar50[3]);
                    auVar49[4] = -(cVar15 == auVar50[4]);
                    auVar49[5] = -(cVar16 == auVar50[5]);
                    auVar49[6] = -(cVar17 == auVar50[6]);
                    auVar49[7] = -(cVar18 == auVar50[7]);
                    auVar49[8] = -(cVar19 == auVar50[0]);
                    auVar49[9] = -(cVar20 == auVar50[1]);
                    auVar49[10] = -(cVar21 == auVar50[2]);
                    auVar49[0xb] = -(cVar22 == auVar50[3]);
                    auVar49[0xc] = -(cVar23 == auVar50[4]);
                    auVar49[0xd] = -(cVar24 == auVar50[5]);
                    auVar49[0xe] = -(cVar25 == auVar50[6]);
                    auVar49[0xf] = -(cVar26 == auVar50[7]);
                    uVar44 = (ushort)(SUB161(auVar49 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar49 >> 0xf,0) & 1) << 1 |
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
                             (ushort)(SUB161(auVar49 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar49[0xf] >> 7) << 0xf;
                    uVar43 = (uint)uVar44;
                    while (uVar44 != 0) {
                      uVar10 = 0;
                      for (uVar11 = uVar43; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
                        uVar10 = uVar10 + 1;
                      }
                      lVar33 = uVar7 + (uVar10 + uVar35 & uVar28) * -0x10;
                      if ((lVar8 == *(longlong *)(lVar33 + -8)) &&
                         (iVar29 = pub_142e32750(lVar32 + 0x10,*(longlong *)(lVar33 + -0x10) + 0x10,
                                                 lVar8), iVar29 == 0)) goto LAB_140b19ba0;
                      uVar44 = (ushort)(uVar43 - 1) & (ushort)uVar43;
                      uVar43 = CONCAT22((short)(uVar43 - 1 >> 0x10),uVar44);
                    }
                    auVar55[0] = -(cVar3 == -1);
                    auVar55[1] = -(cVar12 == -1);
                    auVar55[2] = -(cVar13 == -1);
                    auVar55[3] = -(cVar14 == -1);
                    auVar55[4] = -(cVar15 == -1);
                    auVar55[5] = -(cVar16 == -1);
                    auVar55[6] = -(cVar17 == -1);
                    auVar55[7] = -(cVar18 == -1);
                    auVar55[8] = -(cVar19 == -1);
                    auVar55[9] = -(cVar20 == -1);
                    auVar55[10] = -(cVar21 == -1);
                    auVar55[0xb] = -(cVar22 == -1);
                    auVar55[0xc] = -(cVar23 == -1);
                    auVar55[0xd] = -(cVar24 == -1);
                    auVar55[0xe] = -(cVar25 == -1);
                    auVar55[0xf] = -(cVar26 == -1);
                    if ((((((((((((((((SUB161(auVar55 >> 7,0) & 1) != 0 ||
                                     (SUB161(auVar55 >> 0xf,0) & 1) != 0) ||
                                    (SUB161(auVar55 >> 0x17,0) & 1) != 0) ||
                                   (SUB161(auVar55 >> 0x1f,0) & 1) != 0) ||
                                  (SUB161(auVar55 >> 0x27,0) & 1) != 0) ||
                                 (SUB161(auVar55 >> 0x2f,0) & 1) != 0) ||
                                (SUB161(auVar55 >> 0x37,0) & 1) != 0) ||
                               (SUB161(auVar55 >> 0x3f,0) & 1) != 0) ||
                              (SUB161(auVar55 >> 0x47,0) & 1) != 0) ||
                             (SUB161(auVar55 >> 0x4f,0) & 1) != 0) ||
                            (SUB161(auVar55 >> 0x57,0) & 1) != 0) ||
                           (SUB161(auVar55 >> 0x5f,0) & 1) != 0) ||
                          (SUB161(auVar55 >> 0x67,0) & 1) != 0) ||
                         (SUB161(auVar55 >> 0x6f,0) & 1) != 0) ||
                        (SUB161(auVar55 >> 0x77,0) & 1) != 0) || auVar55[0xf] < '\0') break;
                    uVar35 = uVar35 + lVar37 + 0x10;
                    lVar37 = lVar37 + 0x10;
                  }
                }
              }
            }
            if (pcStack_d0 != (code *)0x0) {
              if (2 < *_DAT_143ca8e90) {
                puStack_140 = auStack_e8;
                pcStack_138 = pdb_140b80ad0;
                pcStack_1a8 = (code *)0x0;
                pcStack_1a0 = (code *)&UNK_143055731;
                puStack_198 = (undefined1 *)0x28;
                pcStack_190 = (code *)0x0;
                puStack_188 = &UNK_1430556c6;
                puStack_180 = (undefined8 *)0x34;
                uStack_178 = 3;
                puStack_170 = &UNK_143055731;
                uStack_168 = 0x28;
                uStack_160 = 0x29200000001;
                puStack_158 = &UNK_143055700;
                ppuStack_150 = &puStack_140;
                uStack_81 = 1;
                pdb_140f332f0(&uStack_a1,&pcStack_1a8);
              }
              *(undefined4 *)puStack_98 = puStack_a0._0_4_;
              uVar4 = *(undefined4 *)((longlong)param_5 + 0x1c);
              puVar9 = (undefined4 *)param_5[2];
              *puVar9 = uVar4;
              uStack_81 = 1;
              pdb_141825bf0(puStack_90,uVar5,auStack_e8);
              if (pcStack_d0 != (code *)0x0) {
                uStack_81 = 1;
                uVar35 = pdb_1417c4b30(&puStack_c8,&UNK_143055759);
                bVar48 = (byte)(uVar35 >> 0x39);
                auVar50 = ZEXT216(CONCAT11(bVar48,bVar48));
                auVar50 = pshuflw(auVar50,auVar50,0);
                lVar40 = 0;
                while( true ) {
                  uVar35 = uVar35 & auStack_e8._8_8_;
                  auVar49 = *(undefined1 (*) [16])(auStack_e8._0_8_ + uVar35);
                  auVar54[0] = -(auVar49[0] == auVar50[0]);
                  auVar54[1] = -(auVar49[1] == auVar50[1]);
                  auVar54[2] = -(auVar49[2] == auVar50[2]);
                  auVar54[3] = -(auVar49[3] == auVar50[3]);
                  auVar54[4] = -(auVar49[4] == auVar50[4]);
                  auVar54[5] = -(auVar49[5] == auVar50[5]);
                  auVar54[6] = -(auVar49[6] == auVar50[6]);
                  auVar54[7] = -(auVar49[7] == auVar50[7]);
                  auVar54[8] = -(auVar49[8] == auVar50[0]);
                  auVar54[9] = -(auVar49[9] == auVar50[1]);
                  auVar54[10] = -(auVar49[10] == auVar50[2]);
                  auVar54[0xb] = -(auVar49[0xb] == auVar50[3]);
                  auVar54[0xc] = -(auVar49[0xc] == auVar50[4]);
                  auVar54[0xd] = -(auVar49[0xd] == auVar50[5]);
                  auVar54[0xe] = -(auVar49[0xe] == auVar50[6]);
                  auVar54[0xf] = -(auVar49[0xf] == auVar50[7]);
                  uVar44 = (ushort)(SUB161(auVar54 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar54 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar54 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar54 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar54 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar54 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar54 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar54 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar54 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar54 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar54 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar54 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar54 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar54 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar54 >> 0x77,0) & 1) << 0xe |
                           (ushort)(auVar54[0xf] >> 7) << 0xf;
                  uVar46 = (uint)uVar44;
                  while (uVar44 != 0) {
                    uVar43 = 0;
                    for (uVar10 = uVar46; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
                      uVar43 = uVar43 + 1;
                    }
                    if (*(char *)(~(uVar43 + uVar35 & auStack_e8._8_8_) + auStack_e8._0_8_) ==
                        '\x1c') {
                      uVar5 = *param_2;
                      *(undefined4 *)puStack_98 = puStack_a0._0_4_;
                      *puVar9 = uVar4;
                      uStack_81 = 1;
                      pdb_140b1a190(uVar5,puStack_90);
                      goto LAB_140b19e48;
                    }
                    uVar44 = (ushort)(uVar46 - 1) & (ushort)uVar46;
                    uVar46 = CONCAT22((short)(uVar46 - 1 >> 0x10),uVar44);
                  }
                  auVar53[0] = -(auVar49[0] == -1);
                  auVar53[1] = -(auVar49[1] == -1);
                  auVar53[2] = -(auVar49[2] == -1);
                  auVar53[3] = -(auVar49[3] == -1);
                  auVar53[4] = -(auVar49[4] == -1);
                  auVar53[5] = -(auVar49[5] == -1);
                  auVar53[6] = -(auVar49[6] == -1);
                  auVar53[7] = -(auVar49[7] == -1);
                  auVar53[8] = -(auVar49[8] == -1);
                  auVar53[9] = -(auVar49[9] == -1);
                  auVar53[10] = -(auVar49[10] == -1);
                  auVar53[0xb] = -(auVar49[0xb] == -1);
                  auVar53[0xc] = -(auVar49[0xc] == -1);
                  auVar53[0xd] = -(auVar49[0xd] == -1);
                  auVar53[0xe] = -(auVar49[0xe] == -1);
                  auVar53[0xf] = -(auVar49[0xf] == -1);
                  if ((((((((((((((((SUB161(auVar53 >> 7,0) & 1) != 0 ||
                                   (SUB161(auVar53 >> 0xf,0) & 1) != 0) ||
                                  (SUB161(auVar53 >> 0x17,0) & 1) != 0) ||
                                 (SUB161(auVar53 >> 0x1f,0) & 1) != 0) ||
                                (SUB161(auVar53 >> 0x27,0) & 1) != 0) ||
                               (SUB161(auVar53 >> 0x2f,0) & 1) != 0) ||
                              (SUB161(auVar53 >> 0x37,0) & 1) != 0) ||
                             (SUB161(auVar53 >> 0x3f,0) & 1) != 0) ||
                            (SUB161(auVar53 >> 0x47,0) & 1) != 0) ||
                           (SUB161(auVar53 >> 0x4f,0) & 1) != 0) ||
                          (SUB161(auVar53 >> 0x57,0) & 1) != 0) ||
                         (SUB161(auVar53 >> 0x5f,0) & 1) != 0) ||
                        (SUB161(auVar53 >> 0x67,0) & 1) != 0) ||
                       (SUB161(auVar53 >> 0x6f,0) & 1) != 0) || (SUB161(auVar53 >> 0x77,0) & 1) != 0
                      ) || auVar53[0xf] < '\0') break;
                  uVar35 = uVar35 + lVar40 + 0x10;
                  lVar40 = lVar40 + 0x10;
                }
              }
            }
LAB_140b19e48:
            *(undefined4 *)puStack_98 = puStack_a0._0_4_;
            *(undefined4 *)param_4[2] = *(undefined4 *)((longlong)param_4 + 0x1c);
            uStack_81 = 1;
            pdb_140a57030(puStack_90,*param_4);
            puStack_188 = puStack_c8;
            puStack_180 = puStack_c0;
            puStack_198 = puStack_d8;
            pcStack_190 = pcStack_d0;
            pcStack_1a8 = (code *)auStack_e8._0_8_;
            pcStack_1a0 = (code *)auStack_e8._8_8_;
            *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
            lVar40 = *param_7;
            uStack_178 = *(undefined8 *)(lVar40 + 0x40);
            lVar32 = *(longlong *)(lVar40 + 0x30);
            if (lVar32 == *(longlong *)(lVar40 + 0x20)) {
              pdb_142d7f080(lVar40 + 0x20);
            }
            lVar8 = *(longlong *)(lVar40 + 0x28);
            lVar37 = lVar32 * 0x38;
            *(undefined8 *)(lVar8 + 0x30 + lVar37) = uStack_178;
            puVar45 = (undefined8 *)(lVar8 + 0x20 + lVar37);
            *puVar45 = puStack_188;
            puVar45[1] = puStack_180;
            plVar30 = (longlong *)(lVar8 + 0x10 + lVar37);
            *plVar30 = (longlong)puStack_198;
            plVar30[1] = (longlong)pcStack_190;
            *(undefined8 *)(lVar8 + lVar37) = pcStack_1a8;
            ((undefined8 *)(lVar8 + lVar37))[1] = pcStack_1a0;
            *(longlong *)(lVar40 + 0x30) = lVar32 + 1;
            *(longlong *)(lVar40 + 0x40) = *(longlong *)(lVar40 + 0x40) + 1;
          }
          uVar5 = auStack_128._8_8_;
          if (auStack_128._8_8_ != 0) {
            if (pcStack_110 != (code *)0x0) {
              auVar50 = *(undefined1 (*) [16])auStack_128._0_8_;
              pauVar39 = (undefined1 (*) [16])(auStack_128._0_8_ + 0x10);
              uVar46 = ~(uint)(ushort)((ushort)(SUB161(auVar50 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1 |
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
                                       (ushort)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar50[0xf] >> 7) << 0xf);
              pauVar36 = (undefined1 (*) [16])auStack_128._0_8_;
              pcVar41 = pcStack_110;
              do {
                if ((short)uVar46 == 0) {
                  do {
                    auVar50 = *pauVar39;
                    pauVar36 = pauVar36 + -0x10;
                    pauVar39 = pauVar39 + 1;
                    uVar46 = (ushort)((ushort)(SUB161(auVar50 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1 |
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
                                      (ushort)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar50[0xf] >> 7) << 0xf) ^ 0xffff;
                  } while (uVar46 == 0);
                }
                iVar29 = 0;
                for (uVar43 = uVar46; (uVar43 & 1) == 0; uVar43 = uVar43 >> 1 | 0x80000000) {
                  iVar29 = iVar29 + 1;
                }
                plVar30 = *(longlong **)
                           ((longlong)pauVar36 + (-0x10 - (ulonglong)(uint)(iVar29 << 4)));
                LOCK();
                *plVar30 = *plVar30 + -1;
                UNLOCK();
                if (*plVar30 == 0) {
                  pdb_1406ed6a0((longlong)pauVar36 + (-0x10 - (ulonglong)(uint)(iVar29 << 4)));
                }
                uVar46 = uVar46 - 1 & uVar46;
                pcVar41 = pcVar41 + -1;
              } while (pcVar41 != (code *)0x0);
            }
            lVar40 = uVar5 * 0x10 + 0x10;
            uVar35 = uVar5 + lVar40 + 0x11;
            if (uVar35 != 0) {
              pub_1406abac0((byte *)(auStack_128._0_8_ - lVar40),uVar35,0x10);
            }
          }
          return;
        }
        puVar31 = puStack_b0 + 7;
        puVar38 = (undefined8 *)0x0;
        puVar45 = puStack_b0;
      }
      else {
        puVar38 = puVar45 + 7;
        puVar31 = puStack_b0;
      }
      uVar35 = *puStack_a0;
      *puStack_a0 = uVar35 + 1;
      unaff_R13 = puVar45[3];
      if (unaff_R13 == 0) {
        uVar35 = uVar35 + 2;
        do {
          puVar45 = puVar38;
          if ((puVar45 == (undefined8 *)0x0) || (puVar45 == puStack_98)) {
            if ((puVar31 == (undefined8 *)0x0) || (puVar31 == puStack_90)) goto LAB_140b197c3;
            puVar38 = (undefined8 *)0x0;
            puVar45 = puVar31;
            puVar31 = puVar31 + 7;
          }
          else {
            puVar38 = puVar45 + 7;
          }
          *puStack_a0 = uVar35;
          unaff_R13 = puVar45[3];
          uVar35 = uVar35 + 1;
        } while (unaff_R13 == 0);
      }
      pauVar39 = (undefined1 (*) [16])*puVar45;
      auVar50 = *pauVar39;
      uVar44 = (ushort)(SUB161(auVar50 >> 7,0) & 1) | (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar50[0xf] >> 7) << 0xf;
      unaff_R12 = pauVar39;
      while( true ) {
        unaff_R15D = uVar44 ^ 0xffff;
        unaff_R12 = unaff_R12 + 1;
        puVar45 = puVar38;
        puStack_b0 = puVar31;
        if (unaff_R15D != 0) break;
        auVar50 = *unaff_R12;
        pauVar39 = pauVar39 + -0x10;
        uVar44 = (ushort)(SUB161(auVar50 >> 7,0) & 1) | (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar50 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe |
                 (ushort)(byte)(auVar50[0xf] >> 7) << 0xf;
      }
    }
    else if ((short)unaff_R15D == 0) {
      do {
        auVar50 = *unaff_R12;
        pauVar39 = pauVar39 + -0x10;
        unaff_R12 = unaff_R12 + 1;
        unaff_R15D = (ushort)((ushort)(SUB161(auVar50 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1 |
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
                              (ushort)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar50[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (unaff_R15D == 0);
    }
    iVar29 = 0;
    for (uVar46 = unaff_R15D; (uVar46 & 1) == 0; uVar46 = uVar46 >> 1 | 0x80000000) {
      iVar29 = iVar29 + 1;
    }
    plVar30 = *(longlong **)((longlong)pauVar39 + (-0x10 - (ulonglong)(uint)(iVar29 << 4)));
    uVar7 = *(undefined8 *)((longlong)pauVar39 + (-8 - (ulonglong)(uint)(iVar29 << 4)));
    LOCK();
    lVar40 = *plVar30;
    *plVar30 = *plVar30 + 1;
    UNLOCK();
    if (*plVar30 == 0 || SCARRY8(lVar40,1) != *plVar30 < 0) {
LAB_140b1a02c:
                    /* WARNING: Does not return */
      pcVar41 = (code *)invalidInstructionException();
      (*pcVar41)();
    }
    uStack_81 = 1;
    pdb_1417b6840(auStack_128,plVar30,uVar7);
    uStack_81 = 1;
    lVar32 = pdb_14091cf50(puStack_b8);
    unaff_R15D = unaff_R15D - 1 & unaff_R15D;
    unaff_R13 = unaff_R13 + -1;
    lVar40 = *(longlong *)(lVar32 + 8);
    lVar32 = *(longlong *)(lVar32 + 0x10) * 0x98 + lVar40;
    for (; lVar40 != lVar32; lVar40 = lVar40 + 0x98) {
      uStack_81 = 1;
      pdb_1417b2a00(auStack_e8);
    }
  } while( true );
LAB_140b19ba0:
  if (*(longlong *)(puVar31[0x11] + 0x20) != 0) {
    *(undefined4 *)puStack_98 = puStack_a0._0_4_;
    cVar3 = *pcVar1;
    plVar30 = (longlong *)puStack_b0[-5];
    uVar7 = puStack_b0[-4];
    LOCK();
    lVar32 = *plVar30;
    *plVar30 = *plVar30 + 1;
    UNLOCK();
    if (*plVar30 == 0 || SCARRY8(lVar32,1) != *plVar30 < 0) goto LAB_140b1a02c;
    uStack_81 = 1;
    pdb_140a58290(puStack_90,cVar3,plVar30,uVar7,puVar31[0x11] + 0x10);
  }
  goto LAB_140b19ad0;
}

