// VA 0x141c34660, PDB extent 4906 bytes
// turbosloth::store::DiskStore::dependency_source_files_match_recorded_state
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   turbosloth::store::DiskStore::dependency_source_files_match_recorded_state
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
   Extent: 4906 */

ulonglong * pdb_141c34660(ulonglong *param_1,undefined8 param_2,ulonglong *param_3,byte *param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  code *pcVar4;
  byte bVar5;
  ulonglong uVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  longlong *plVar23;
  char cVar24;
  char cVar25;
  uint uVar26;
  longlong *plVar27;
  ulonglong *puVar28;
  byte *pbVar29;
  byte *pbVar30;
  longlong lVar31;
  byte *pbVar32;
  ulonglong uVar33;
  undefined8 uVar34;
  ulonglong *puVar35;
  ulonglong uVar36;
  byte *pbVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  longlong *plVar40;
  bool bVar41;
  bool bVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  longlong *plStack_2a8;
  longlong *plStack_2a0;
  ulonglong uStack_298;
  ulonglong uStack_290;
  undefined8 uStack_238;
  undefined8 uStack_230;
  ulonglong uStack_228;
  ulonglong uStack_220;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  ulonglong *puStack_1f8;
  byte *pbStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  longlong *plStack_1d8;
  undefined8 uStack_1d0;
  byte *pbStack_1c0;
  byte *pbStack_1b8;
  longlong *plStack_1a8;
  longlong *plStack_1a0;
  ulonglong uStack_198;
  ulonglong uStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  ulonglong *puStack_168;
  byte *pbStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  longlong *plStack_148;
  undefined8 uStack_140;
  longlong lStack_130;
  byte *pbStack_128;
  ulonglong uStack_120;
  undefined1 auStack_118 [16];
  undefined8 uStack_108;
  undefined8 uStack_100;
  longlong *plStack_f8;
  ulonglong uStack_f0;
  ulonglong uStack_e8;
  ulonglong uStack_e0;
  byte *pbStack_d0;
  longlong *plStack_c8;
  longlong *plStack_c0;
  ulonglong *puStack_b8;
  uint uStack_ac;
  byte *pbStack_a8;
  byte *pbStack_a0;
  byte *pbStack_98;
  longlong *plStack_90;
  ulonglong *puStack_88;
  byte *pbStack_80;
  undefined1 uStack_71;
  undefined8 uStack_70;
  
  cVar13 = UNK_14300c813;
  cVar12 = UNK_14300c812;
  cVar11 = UNK_14300c811;
  cVar10 = DAT_14300c810;
  cVar9 = UNK_142f5c7d3;
  cVar8 = UNK_142f5c7d2;
  cVar7 = UNK_142f5c7d1;
  cVar25 = DAT_142f5c7d0;
  uStack_70 = 0xfffffffffffffffe;
  pbStack_a8 = (byte *)0x8000000000000000;
  lStack_130 = 0;
  pbVar37 = (byte *)0x0;
  puVar35 = param_3;
  pbStack_128 = param_4;
  puStack_b8 = param_1;
  do {
    if (puVar35 == param_3 + (longlong)param_4 * 0xc) {
      if (SBORROW8(0,(longlong)pbStack_a8)) {
        *puStack_b8 = 0x8000000000000000;
      }
      else {
        puStack_b8[2] = (ulonglong)pbStack_98;
        *puStack_b8 = (ulonglong)pbStack_a8;
        puStack_b8[1] = (ulonglong)pbStack_a0;
      }
      return puStack_b8;
    }
    uVar33 = puVar35[9];
    uVar36 = puVar35[10];
    plVar27 = (longlong *)pdb_141c2f600(param_2,uVar33,uVar36);
    plStack_c0 = plVar27 + 2;
    LOCK();
    bVar41 = (char)plVar27[2] == '\0';
    if (bVar41) {
      *(char *)(plVar27 + 2) = '\x01';
    }
    UNLOCK();
    plStack_c8 = plVar27;
    if (!bVar41) {
      pdb_142dc6be0();
    }
    if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
      uVar26 = 0;
      cVar24 = *(char *)((longlong)plVar27 + 0x11);
      plVar23 = plStack_1a8;
      plStack_1a8 = plStack_c0;
    }
    else {
      uVar26 = pdb_142dc79e0();
      uVar26 = uVar26 ^ 1;
      cVar24 = *(char *)((longlong)plVar27 + 0x11);
      plVar23 = plStack_1a8;
      plStack_1a8 = plStack_c0;
    }
    plStack_c0 = plStack_1a8;
    if (cVar24 != '\0') {
      uVar33 = (ulonglong)plStack_1a0 >> 8;
      plStack_1a0 = (longlong *)CONCAT71((int7)uVar33,(char)uVar26);
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14339fb38,0x2b,&plStack_1a8,&UNK_14339fc48,&UNK_14339fae8);
    }
    puVar1 = (ulonglong *)(plVar27 + 4);
    uVar39 = plVar27[4];
    lVar2 = plVar27[5];
    lVar31 = uVar39 - 3;
    if (lVar2 == 0 && (ulonglong)(2 < uVar39) <= (ulonglong)-lVar2) {
      lVar31 = 2;
    }
    uStack_ac = uVar26;
    plStack_90 = plVar27;
    puStack_88 = puVar35;
    if (lVar31 == 0) {
      plStack_1a8 = plVar23;
      pdb_140f4f620(&plStack_1a8,uVar33,uVar36);
      plVar23 = plStack_1a0;
      if ((int)plStack_1a8 != 2) {
        uStack_238 = (longlong *)CONCAT44(uStack_174,uStack_178);
        uStack_120 = CONCAT44(uStack_16c,uStack_170);
        pdb_140f3fcf0(&plStack_1a8,&uStack_238,0xd53e8000);
        if ((char)plStack_1a8 == '\0') {
          auVar3._8_8_ = 0;
          auVar3._0_8_ = plStack_1a0;
          auStack_118 = auVar3 * ZEXT816(1000000000) + ZEXT416((uint)uStack_198);
          pbVar30 = (byte *)0x1;
        }
        else {
          auStack_118._8_8_ = 0;
          pbVar30 = (byte *)0x0;
        }
LAB_141c3496f:
        uVar39 = (ulonglong)(2 < *puVar1);
        uVar38 = -plVar27[5];
        if (plVar27[5] == 0 && uVar39 <= uVar38 || *puVar1 < 3) {
          plVar27 = (longlong *)plVar27[0x10];
          pbStack_80 = pbVar30;
          if (plVar27 != (longlong *)0x0) {
            LOCK();
            *plVar27 = *plVar27 + -1;
            UNLOCK();
            if (*plVar27 == 0) {
              pdb_1406ed6a0(plStack_90 + 0x10,uVar38 - uVar39);
            }
          }
          plVar27 = plStack_90;
          pbVar30 = pbStack_80;
          if (plStack_90[0xc] != 0) {
            pub_1406abac0((byte *)plStack_90[0xd],plStack_90[0xc],1);
            pbVar30 = pbStack_80;
          }
        }
        plVar27[4] = 4;
        plVar27[5] = 0;
        plVar27[6] = (longlong)pbVar30;
        plVar27[7] = 0;
        plVar27[8] = auStack_118._0_8_;
        plVar27[9] = auStack_118._8_8_;
        plVar27[10] = uStack_120;
        uStack_100 = 0;
        plStack_f8 = (longlong *)auStack_118._0_8_;
        uStack_f0 = auStack_118._8_8_;
        uStack_e8 = uStack_120;
        plVar23 = plStack_1a8;
        uStack_108 = pbVar30;
        goto LAB_141c34a52;
      }
      cVar24 = pdb_142570dc0(plStack_1a0);
      if (cVar24 == '\0') {
        plStack_1a8 = plVar23;
        pdb_1404b38e0(&plStack_1a8);
        pbVar30 = (byte *)0x2;
        goto LAB_141c3496f;
      }
      plStack_f8 = plVar23;
      uStack_100 = 0;
      uStack_108 = (byte *)0x3;
      plVar23 = plStack_1a8;
LAB_141c35237:
      plStack_1a8 = plVar23;
      *puStack_b8 = 0x8000000000000002;
LAB_141c3524b:
      pdb_1404b38e0(&plStack_f8);
LAB_141c35258:
      if ((((char)uStack_ac == '\0') && ((*_DAT_143ca8f38 & 0x7fffffffffffffff) != 0)) &&
         (cVar25 = pdb_142dc79e0(), cVar25 == '\0')) {
        *(undefined1 *)((longlong)plVar27 + 0x11) = 1;
      }
      LOCK();
      lVar31 = *plStack_c0;
      *(char *)plStack_c0 = '\0';
      UNLOCK();
      if ((char)lVar31 == '\x02') {
        pdb_142dc6ca0(plStack_c0);
      }
      LOCK();
      *plStack_c8 = *plStack_c8 + -1;
      UNLOCK();
      if (*plStack_c8 == 0) {
        pdb_140dd77d0(&plStack_c8);
      }
      pbVar30 = pbStack_a0;
      pbVar37 = pbStack_a8;
      if (SBORROW8(0,(longlong)pbStack_a8)) {
        return puStack_b8;
      }
      if (pbStack_98 != (byte *)0x0) {
        pbVar29 = pbStack_a0 + 0x48;
        pbVar32 = pbStack_98;
        do {
          if (*(ulonglong *)(pbVar29 + -8) != 0) {
            pub_1406abac0(*(byte **)pbVar29,*(ulonglong *)(pbVar29 + -8),1);
          }
          pbVar29 = pbVar29 + 0x60;
          pbVar32 = pbVar32 + -1;
        } while (pbVar32 != (byte *)0x0);
      }
      if (pbVar37 == (byte *)0x0) {
        return puStack_b8;
      }
      pub_1406abac0(pbVar30,(longlong)pbVar37 * 0x60,0x10);
      return puStack_b8;
    }
    if (lVar31 == 1) {
      puVar28 = (ulonglong *)(plVar27 + 6);
LAB_141c348a0:
      uStack_108 = (byte *)*puVar28;
      uStack_100 = puVar28[1];
      plStack_f8 = (longlong *)puVar28[2];
      uStack_f0 = puVar28[3];
      uStack_e8 = puVar28[4];
      uStack_e0 = puVar28[5];
      auVar43[0] = -((char)*puVar28 == cVar25);
      auVar43[1] = -(*(char *)((longlong)puVar28 + 1) == cVar7);
      auVar43[2] = -(*(char *)((longlong)puVar28 + 2) == cVar8);
      auVar43[3] = -(*(char *)((longlong)puVar28 + 3) == cVar9);
      auVar43[4] = -(*(char *)((longlong)puVar28 + 4) == '\0');
      auVar43[5] = -(*(char *)((longlong)puVar28 + 5) == '\0');
      auVar43[6] = -(*(char *)((longlong)puVar28 + 6) == '\0');
      auVar43[7] = -(*(char *)((longlong)puVar28 + 7) == '\0');
      auVar43[8] = -((char)puVar28[1] == '\0');
      auVar43[9] = -(*(char *)((longlong)puVar28 + 9) == '\0');
      auVar43[10] = -(*(char *)((longlong)puVar28 + 10) == '\0');
      auVar43[0xb] = -(*(char *)((longlong)puVar28 + 0xb) == '\0');
      auVar43[0xc] = -(*(char *)((longlong)puVar28 + 0xc) == '\0');
      auVar43[0xd] = -(*(char *)((longlong)puVar28 + 0xd) == '\0');
      auVar43[0xe] = -(*(char *)((longlong)puVar28 + 0xe) == '\0');
      auVar43[0xf] = -(*(char *)((longlong)puVar28 + 0xf) == '\0');
      if ((ushort)((ushort)(SUB161(auVar43 >> 7,0) & 1) |
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
                  (ushort)(auVar43[0xf] >> 7) << 0xf) == 0xffff) goto LAB_141c35237;
LAB_141c34a52:
      plStack_1a8 = plVar23;
      auVar44[0] = -((char)*puStack_88 == cVar10);
      auVar44[1] = -(*(char *)((longlong)puStack_88 + 1) == cVar11);
      auVar44[2] = -(*(char *)((longlong)puStack_88 + 2) == cVar12);
      auVar44[3] = -(*(char *)((longlong)puStack_88 + 3) == cVar13);
      auVar44[4] = -(*(char *)((longlong)puStack_88 + 4) == '\0');
      auVar44[5] = -(*(char *)((longlong)puStack_88 + 5) == '\0');
      auVar44[6] = -(*(char *)((longlong)puStack_88 + 6) == '\0');
      auVar44[7] = -(*(char *)((longlong)puStack_88 + 7) == '\0');
      auVar44[8] = -((char)puStack_88[1] == '\0');
      auVar44[9] = -(*(char *)((longlong)puStack_88 + 9) == '\0');
      auVar44[10] = -(*(char *)((longlong)puStack_88 + 10) == '\0');
      auVar44[0xb] = -(*(char *)((longlong)puStack_88 + 0xb) == '\0');
      auVar44[0xc] = -(*(char *)((longlong)puStack_88 + 0xc) == '\0');
      auVar44[0xd] = -(*(char *)((longlong)puStack_88 + 0xd) == '\0');
      auVar44[0xe] = -(*(char *)((longlong)puStack_88 + 0xe) == '\0');
      auVar44[0xf] = -(*(char *)((longlong)puStack_88 + 0xf) == '\0');
      bVar42 = (ushort)((ushort)(SUB161(auVar44 >> 7,0) & 1) |
                        (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
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
                        (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar44[0xf] >> 7) << 0xf) == 0xffff;
      bVar41 = uStack_108 == (byte *)0x2 && uStack_100 == 0;
      uVar39 = *puStack_88;
      uVar38 = puStack_88[1];
      plVar23 = plStack_1a8;
      if ((bVar41) || (uVar39 == 2 && uVar38 == 0)) goto LAB_141c34ae0;
      if (uStack_e8 != puStack_88[4]) goto LAB_141c34c60;
      bVar41 = bVar42;
      if (((ulonglong)uStack_108 & 1) == 0) {
        uVar38 = 0;
        uVar6 = uVar39 & 1;
        uVar39 = 0;
        if (uVar6 != 0) goto LAB_141c34c60;
      }
      else {
        if (((byte)uVar39 & ((longlong *)puStack_88[2] == plStack_f8 && puStack_88[3] == uStack_f0))
            == 0) goto LAB_141c34c60;
        uVar39 = 1;
        uVar38 = 0;
      }
LAB_141c34af1:
      puVar35 = puStack_88;
      plVar40 = plStack_90;
      if (!SBORROW8(0,(longlong)pbStack_a8)) {
        pbVar30 = (byte *)puStack_88[10];
        if ((longlong)pbVar30 < 0) {
          uVar34 = 0;
LAB_141c35130:
          pdb_142dc7e2a(uVar34,pbVar30);
LAB_141c353d9:
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        pbStack_80 = pbVar30;
        if (pbVar30 == (byte *)0x0) {
          pbStack_d0 = (byte *)0x1;
          bVar5 = (byte)puStack_88[0xb];
          pbVar30 = pbStack_98;
        }
        else {
          uVar33 = puStack_88[9];
          pdb_14007ee60();
          uVar34 = 1;
          pbVar29 = pub_1406abab0((ulonglong)pbVar30,1);
          if (pbVar29 == (byte *)0x0) goto LAB_141c35130;
          pbStack_d0 = pbVar29;
          pub_142e32760(pbVar29,uVar33,pbVar30);
          bVar5 = (byte)puStack_88[0xb];
          pbVar30 = pbStack_98;
        }
        puVar35 = puStack_88;
        if (!bVar41) {
          uVar33 = puStack_88[7];
          puVar35 = (ulonglong *)puStack_88[6];
          plStack_1a8 = (longlong *)puStack_88[2];
          plStack_1a0 = (longlong *)puStack_88[3];
          uStack_198 = puStack_88[4];
          uStack_190 = puStack_88[5];
        }
        uStack_228 = uStack_198;
        uStack_220 = uStack_190;
        uStack_238 = plStack_1a8;
        uStack_230 = plStack_1a0;
        if (pbVar30 == pbStack_a8) {
          pbStack_98 = pbVar30;
          pdb_142d91e10(&pbStack_a8);
        }
        lVar31 = (longlong)pbVar30 * 0x60;
        *(ulonglong *)(pbStack_a0 + lVar31 + 8) = uVar38;
        *(ulonglong *)(pbStack_a0 + lVar31) = uVar39;
        *(longlong **)(pbStack_a0 + lVar31 + 0x10) = uStack_238;
        *(longlong **)((longlong)(pbStack_a0 + lVar31 + 0x10) + 8) = uStack_230;
        *(ulonglong *)(pbStack_a0 + lVar31 + 0x20) = uStack_228;
        *(ulonglong *)((longlong)(pbStack_a0 + lVar31 + 0x20) + 8) = uStack_220;
        *(ulonglong **)(pbStack_a0 + lVar31 + 0x30) = puVar35;
        *(ulonglong *)(pbStack_a0 + lVar31 + 0x38) = uVar33;
        *(byte **)(pbStack_a0 + lVar31 + 0x40) = pbStack_80;
        *(byte **)(pbStack_a0 + lVar31 + 0x48) = pbStack_d0;
        *(byte **)(pbStack_a0 + lVar31 + 0x50) = pbStack_80;
        pbStack_a0[lVar31 + 0x58] = bVar5;
        pbStack_98 = pbVar30 + 1;
        puVar35 = puStack_88;
        plVar40 = plStack_90;
      }
    }
    else {
      puVar28 = puVar1;
      if (uVar39 != 2 || lVar2 != 0) goto LAB_141c348a0;
      uStack_100 = 0;
      uStack_108 = (byte *)0x2;
      uVar38 = puVar35[1];
      uVar39 = *puVar35;
      auVar51[0] = -((char)uVar39 == cVar10);
      auVar51[1] = -((char)(uVar39 >> 8) == cVar11);
      auVar51[2] = -(*(char *)((longlong)puVar35 + 2) == cVar12);
      auVar51[3] = -(*(char *)((longlong)puVar35 + 3) == cVar13);
      auVar51[4] = -(*(char *)((longlong)puVar35 + 4) == '\0');
      auVar51[5] = -(*(char *)((longlong)puVar35 + 5) == '\0');
      auVar51[6] = -(*(char *)((longlong)puVar35 + 6) == '\0');
      auVar51[7] = -(*(char *)((longlong)puVar35 + 7) == '\0');
      auVar51[8] = -((char)puVar35[1] == '\0');
      auVar51[9] = -((char)(uVar38 >> 8) == '\0');
      auVar51[10] = -((char)(uVar38 >> 0x10) == '\0');
      auVar51[0xb] = -((char)(uVar38 >> 0x18) == '\0');
      auVar51[0xc] = -((char)(uVar38 >> 0x20) == '\0');
      auVar51[0xd] = -((char)(uVar38 >> 0x28) == '\0');
      auVar51[0xe] = -((char)(uVar38 >> 0x30) == '\0');
      auVar51[0xf] = -((char)(uVar38 >> 0x38) == '\0');
      bVar42 = (ushort)((ushort)(SUB161(auVar51 >> 7,0) & 1) |
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
                       (ushort)(auVar51[0xf] >> 7) << 0xf) == 0xffff;
      bVar41 = true;
LAB_141c34ae0:
      plStack_1a8 = plVar23;
      if ((bVar41) && (bVar41 = true, bVar42)) goto LAB_141c34af1;
LAB_141c34c60:
      puVar35 = puStack_88;
      pdb_141c2d780(&uStack_238,puVar1);
      plVar27 = plStack_90;
      auVar45[0] = -((char)uStack_238 == cVar25);
      auVar45[1] = -(uStack_238._1_1_ == cVar7);
      auVar45[2] = -(uStack_238._2_1_ == cVar8);
      auVar45[3] = -(uStack_238._3_1_ == cVar9);
      auVar45[4] = -(uStack_238._4_1_ == '\0');
      auVar45[5] = -(uStack_238._5_1_ == '\0');
      auVar45[6] = -(uStack_238._6_1_ == '\0');
      auVar45[7] = -(uStack_238._7_1_ == '\0');
      auVar45[8] = -((char)uStack_230 == '\0');
      auVar45[9] = -(uStack_230._1_1_ == '\0');
      auVar45[10] = -(uStack_230._2_1_ == '\0');
      auVar45[0xb] = -(uStack_230._3_1_ == '\0');
      auVar45[0xc] = -(uStack_230._4_1_ == '\0');
      auVar45[0xd] = -(uStack_230._5_1_ == '\0');
      auVar45[0xe] = -(uStack_230._6_1_ == '\0');
      auVar45[0xf] = -(uStack_230._7_1_ == '\0');
      if ((ushort)((ushort)(SUB161(auVar45 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1 |
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
                   (ushort)(SUB161(auVar45 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar45[0xf] >> 7) << 0xf) == 0xffff) {
        *puStack_b8 = 0x8000000000000002;
        pdb_1404b38e0(&uStack_228);
LAB_141c351da:
        auVar50[0] = -((char)uStack_108 == DAT_142f5c7c0);
        auVar50[1] = -(uStack_108._1_1_ == UNK_142f5c7c1);
        auVar50[2] = -(uStack_108._2_1_ == UNK_142f5c7c2);
        auVar50[3] = -(uStack_108._3_1_ == UNK_142f5c7c3);
        auVar50[4] = -(uStack_108._4_1_ == UNK_142f5c7c4);
        auVar50[5] = -(uStack_108._5_1_ == UNK_142f5c7c5);
        auVar50[6] = -(uStack_108._6_1_ == UNK_142f5c7c6);
        auVar50[7] = -(uStack_108._7_1_ == UNK_142f5c7c7);
        auVar50[8] = -((char)uStack_100 == UNK_142f5c7c8);
        auVar50[9] = -(uStack_100._1_1_ == UNK_142f5c7c9);
        auVar50[10] = -(uStack_100._2_1_ == UNK_142f5c7ca);
        auVar50[0xb] = -(uStack_100._3_1_ == UNK_142f5c7cb);
        auVar50[0xc] = -(uStack_100._4_1_ == UNK_142f5c7cc);
        auVar50[0xd] = -(uStack_100._5_1_ == UNK_142f5c7cd);
        auVar50[0xe] = -(uStack_100._6_1_ == UNK_142f5c7ce);
        auVar50[0xf] = -(uStack_100._7_1_ == UNK_142f5c7cf);
        if ((ushort)((ushort)(SUB161(auVar50 >> 7,0) & 1) |
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
                    (ushort)(auVar50[0xf] >> 7) << 0xf) != 0xffff) goto LAB_141c35258;
        goto LAB_141c3524b;
      }
      if (bVar42 || uStack_238 == (longlong *)0x2 && uStack_230 == (longlong *)0x0) {
        if (!(bool)(bVar42 & (uStack_238 == (longlong *)0x2 && uStack_230 == (longlong *)0x0))) {
LAB_141c35189:
          *puStack_b8 = 0x8000000000000002;
          if (plStack_1d8 != (longlong *)0x0) {
            LOCK();
            *plStack_1d8 = *plStack_1d8 + -1;
            UNLOCK();
            if (*plStack_1d8 == 0) {
              pdb_1406ed6a0(&plStack_1d8);
            }
          }
          if (puStack_1f8 != (ulonglong *)0x0) {
            pub_1406abac0(pbStack_1f0,(ulonglong)puStack_1f8,1);
          }
          goto LAB_141c351da;
        }
      }
      else {
        auVar46[0] = -((char)uStack_208 == (char)puVar35[6]);
        auVar46[1] = -(uStack_208._1_1_ == *(char *)((longlong)puVar35 + 0x31));
        auVar46[2] = -(uStack_208._2_1_ == *(char *)((longlong)puVar35 + 0x32));
        auVar46[3] = -(uStack_208._3_1_ == *(char *)((longlong)puVar35 + 0x33));
        auVar46[4] = -((char)uStack_204 == *(char *)((longlong)puVar35 + 0x34));
        auVar46[5] = -(uStack_204._1_1_ == *(char *)((longlong)puVar35 + 0x35));
        auVar46[6] = -(uStack_204._2_1_ == *(char *)((longlong)puVar35 + 0x36));
        auVar46[7] = -(uStack_204._3_1_ == *(char *)((longlong)puVar35 + 0x37));
        auVar46[8] = -((char)uStack_200 == (char)puVar35[7]);
        auVar46[9] = -(uStack_200._1_1_ == *(char *)((longlong)puVar35 + 0x39));
        auVar46[10] = -(uStack_200._2_1_ == *(char *)((longlong)puVar35 + 0x3a));
        auVar46[0xb] = -(uStack_200._3_1_ == *(char *)((longlong)puVar35 + 0x3b));
        auVar46[0xc] = -((char)uStack_1fc == *(char *)((longlong)puVar35 + 0x3c));
        auVar46[0xd] = -(uStack_1fc._1_1_ == *(char *)((longlong)puVar35 + 0x3d));
        auVar46[0xe] = -(uStack_1fc._2_1_ == *(char *)((longlong)puVar35 + 0x3e));
        auVar46[0xf] = -(uStack_1fc._3_1_ == *(char *)((longlong)puVar35 + 0x3f));
        if ((ushort)((ushort)(SUB161(auVar46 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar46 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar46 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar46 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar46 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar46 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar46 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar46 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar46 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar46 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar46 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar46 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar46 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar46 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar46 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar46[0xf] >> 7) << 0xf) != 0xffff) goto LAB_141c35189;
      }
      plStack_148 = plStack_1d8;
      uStack_140 = uStack_1d0;
      uStack_158 = uStack_1e8;
      uStack_150 = uStack_1e0;
      puStack_168 = puStack_1f8;
      pbStack_160 = pbStack_1f0;
      uStack_178 = uStack_208;
      uStack_174 = uStack_204;
      uStack_170 = uStack_200;
      uStack_16c = uStack_1fc;
      uStack_188 = uStack_218;
      uStack_184 = uStack_214;
      uStack_180 = uStack_210;
      uStack_17c = uStack_20c;
      uStack_198 = uStack_228;
      uStack_190 = uStack_220;
      plStack_1a8 = uStack_238;
      plStack_1a0 = uStack_230;
      if (SBORROW8(0,(longlong)pbStack_a8)) {
        if (pbStack_128 < pbVar37) {
          uStack_71 = 1;
          pdb_142dc8420(0,pbVar37,pbStack_128,&UNK_14339fb00);
          goto LAB_141c353d9;
        }
        if (pbVar37 == (byte *)0x0) {
          pbStack_1c0 = (byte *)0x0;
          pbStack_1b8 = (byte *)0x10;
        }
        else {
          pdb_14007ee60();
          pbVar30 = pub_1406abab0((longlong)pbVar37 * 0x60,0x10);
          if (pbVar30 == (byte *)0x0) {
            uStack_71 = 1;
            pdb_142dc7e2a(0x10,(longlong)pbVar37 * 0x60);
            goto LAB_141c353d9;
          }
          lVar31 = 0;
          pbStack_80 = (byte *)0x0;
          puVar35 = param_3;
          pbStack_1c0 = pbVar37;
          pbStack_1b8 = pbVar30;
          do {
            if (lStack_130 == lVar31) break;
            pbVar29 = pbStack_80 + 1;
            uVar39 = puVar35[10];
            if ((longlong)uVar39 < 0) {
              uVar34 = 0;
LAB_141c3511d:
              pdb_142dc7e2a(uVar34,uVar39);
              goto LAB_141c353d9;
            }
            if (uVar39 == 0) {
              pbVar32 = (byte *)0x1;
            }
            else {
              pbStack_d0 = (byte *)puVar35[9];
              pdb_14007ee60();
              uVar34 = 1;
              pbVar32 = pub_1406abab0(uVar39,1);
              if (pbVar32 == (byte *)0x0) goto LAB_141c3511d;
              uVar33 = uVar39;
              pub_142e32760(pbVar32,pbStack_d0);
            }
            uVar6 = puVar35[0xb];
            uVar38 = *puVar35;
            auVar47[0] = -((char)*puVar35 == cVar10);
            auVar47[1] = -(*(char *)((longlong)puVar35 + 1) == cVar11);
            auVar47[2] = -(*(char *)((longlong)puVar35 + 2) == cVar12);
            auVar47[3] = -(*(char *)((longlong)puVar35 + 3) == cVar13);
            auVar47[4] = -(*(char *)((longlong)puVar35 + 4) == '\0');
            auVar47[5] = -(*(char *)((longlong)puVar35 + 5) == '\0');
            auVar47[6] = -(*(char *)((longlong)puVar35 + 6) == '\0');
            auVar47[7] = -(*(char *)((longlong)puVar35 + 7) == '\0');
            auVar47[8] = -((char)puVar35[1] == '\0');
            auVar47[9] = -(*(char *)((longlong)puVar35 + 9) == '\0');
            auVar47[10] = -(*(char *)((longlong)puVar35 + 10) == '\0');
            auVar47[0xb] = -(*(char *)((longlong)puVar35 + 0xb) == '\0');
            auVar47[0xc] = -(*(char *)((longlong)puVar35 + 0xc) == '\0');
            auVar47[0xd] = -(*(char *)((longlong)puVar35 + 0xd) == '\0');
            auVar47[0xe] = -(*(char *)((longlong)puVar35 + 0xe) == '\0');
            auVar47[0xf] = -(*(char *)((longlong)puVar35 + 0xf) == '\0');
            if ((ushort)((ushort)(SUB161(auVar47 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar47 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar47 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar47 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar47 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar47 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar47 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar47 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar47 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar47 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar47 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar47 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar47[0xf] >> 7) << 0xf) != 0xffff) {
              uVar36 = *(ulonglong *)((longlong)param_3 + lVar31 + 0x38);
              uVar33 = *(ulonglong *)((longlong)param_3 + lVar31 + 0x30);
              puVar1 = (ulonglong *)((longlong)param_3 + lVar31 + 0x10);
              plStack_2a8 = (longlong *)*puVar1;
              plStack_2a0 = (longlong *)puVar1[1];
              puVar1 = (ulonglong *)((longlong)param_3 + lVar31 + 0x20);
              uStack_298 = *puVar1;
              uStack_290 = puVar1[1];
            }
            *(ulonglong *)(pbVar30 + lVar31 + 8) = puVar35[1];
            *(ulonglong *)(pbVar30 + lVar31) = uVar38;
            *(longlong **)(pbVar30 + lVar31 + 0x10) = plStack_2a8;
            *(longlong **)((longlong)(pbVar30 + lVar31 + 0x10) + 8) = plStack_2a0;
            *(ulonglong *)(pbVar30 + lVar31 + 0x20) = uStack_298;
            *(ulonglong *)((longlong)(pbVar30 + lVar31 + 0x20) + 8) = uStack_290;
            *(ulonglong *)(pbVar30 + lVar31 + 0x38) = uVar36;
            *(ulonglong *)(pbVar30 + lVar31 + 0x30) = uVar33;
            *(ulonglong *)(pbVar30 + lVar31 + 0x40) = uVar39;
            *(byte **)(pbVar30 + lVar31 + 0x48) = pbVar32;
            *(ulonglong *)(pbVar30 + lVar31 + 0x50) = uVar39;
            pbVar30[lVar31 + 0x58] = (byte)uVar6;
            lVar31 = lVar31 + 0x60;
            pbStack_80 = pbVar29;
            puVar35 = puVar35 + 0xc;
          } while (pbVar37 != pbVar29);
        }
        pbStack_a8 = pbStack_1c0;
        pbStack_a0 = pbStack_1b8;
        puVar35 = puStack_88;
        pbStack_98 = pbVar37;
      }
      plVar40 = plStack_90;
      pbVar30 = pbStack_98;
      uVar22 = uStack_150;
      uVar34 = uStack_158;
      uVar21 = uStack_16c;
      uVar20 = uStack_170;
      uVar19 = uStack_174;
      uVar18 = uStack_178;
      uVar17 = uStack_17c;
      uVar16 = uStack_180;
      uVar15 = uStack_184;
      uVar14 = uStack_188;
      uVar36 = uStack_190;
      uVar33 = uStack_198;
      plVar23 = plStack_1a0;
      plVar27 = plStack_1a8;
      plStack_2a8 = plStack_1a8;
      plStack_2a0 = plStack_1a0;
      uStack_298 = uStack_198;
      uStack_290 = uStack_190;
      puStack_88 = puStack_168;
      pbStack_80 = pbStack_160;
      if (pbStack_98 == pbStack_a8) {
        pdb_142d91e10(&pbStack_a8);
      }
      lVar31 = (longlong)pbVar30 * 0x60;
      pbVar29 = pbStack_a0 + lVar31 + 0x30;
      *(undefined4 *)pbVar29 = uVar18;
      *(undefined4 *)(pbVar29 + 4) = uVar19;
      *(undefined4 *)(pbVar29 + 8) = uVar20;
      *(undefined4 *)(pbVar29 + 0xc) = uVar21;
      pbVar29 = pbStack_a0 + lVar31 + 0x20;
      *(undefined4 *)pbVar29 = uVar14;
      *(undefined4 *)(pbVar29 + 4) = uVar15;
      *(undefined4 *)(pbVar29 + 8) = uVar16;
      *(undefined4 *)(pbVar29 + 0xc) = uVar17;
      *(ulonglong *)(pbStack_a0 + lVar31 + 0x10) = uVar33;
      *(ulonglong *)((longlong)(pbStack_a0 + lVar31 + 0x10) + 8) = uVar36;
      *(longlong **)(pbStack_a0 + lVar31) = plVar27;
      *(longlong **)((longlong)(pbStack_a0 + lVar31) + 8) = plVar23;
      *(ulonglong **)(pbStack_a0 + lVar31 + 0x40) = puStack_88;
      *(byte **)(pbStack_a0 + lVar31 + 0x48) = pbStack_80;
      *(undefined8 *)(pbStack_a0 + lVar31 + 0x50) = uVar34;
      *(undefined8 *)(pbStack_a0 + lVar31 + 0x50 + 8) = uVar22;
      pbStack_98 = pbVar30 + 1;
      if (plStack_148 != (longlong *)0x0) {
        LOCK();
        *plStack_148 = *plStack_148 + -1;
        UNLOCK();
        if (*plStack_148 == 0) {
          pdb_1406ed6a0(&plStack_148);
        }
      }
      auVar48[0] = -((char)uStack_238 == cVar25);
      auVar48[1] = -(uStack_238._1_1_ == cVar7);
      auVar48[2] = -(uStack_238._2_1_ == cVar8);
      auVar48[3] = -(uStack_238._3_1_ == cVar9);
      auVar48[4] = -(uStack_238._4_1_ == '\0');
      auVar48[5] = -(uStack_238._5_1_ == '\0');
      auVar48[6] = -(uStack_238._6_1_ == '\0');
      auVar48[7] = -(uStack_238._7_1_ == '\0');
      auVar48[8] = -((char)uStack_230 == '\0');
      auVar48[9] = -(uStack_230._1_1_ == '\0');
      auVar48[10] = -(uStack_230._2_1_ == '\0');
      auVar48[0xb] = -(uStack_230._3_1_ == '\0');
      auVar48[0xc] = -(uStack_230._4_1_ == '\0');
      auVar48[0xd] = -(uStack_230._5_1_ == '\0');
      auVar48[0xe] = -(uStack_230._6_1_ == '\0');
      auVar48[0xf] = -(uStack_230._7_1_ == '\0');
      if ((ushort)((ushort)(SUB161(auVar48 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar48 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar48 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar48 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar48 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar48 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar48 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar48 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar48 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar48 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar48 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar48 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar48 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar48 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar48 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar48[0xf] >> 7) << 0xf) == 0xffff) {
        pdb_1404b38e0(&uStack_228);
      }
      auVar49[0] = -((char)uStack_108 == cVar25);
      auVar49[1] = -(uStack_108._1_1_ == cVar7);
      auVar49[2] = -(uStack_108._2_1_ == cVar8);
      auVar49[3] = -(uStack_108._3_1_ == cVar9);
      auVar49[4] = -(uStack_108._4_1_ == '\0');
      auVar49[5] = -(uStack_108._5_1_ == '\0');
      auVar49[6] = -(uStack_108._6_1_ == '\0');
      auVar49[7] = -(uStack_108._7_1_ == '\0');
      auVar49[8] = -((char)uStack_100 == '\0');
      auVar49[9] = -(uStack_100._1_1_ == '\0');
      auVar49[10] = -(uStack_100._2_1_ == '\0');
      auVar49[0xb] = -(uStack_100._3_1_ == '\0');
      auVar49[0xc] = -(uStack_100._4_1_ == '\0');
      auVar49[0xd] = -(uStack_100._5_1_ == '\0');
      auVar49[0xe] = -(uStack_100._6_1_ == '\0');
      auVar49[0xf] = -(uStack_100._7_1_ == '\0');
      if ((ushort)((ushort)(SUB161(auVar49 >> 7,0) & 1) |
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
                  (ushort)(auVar49[0xf] >> 7) << 0xf) == 0xffff) {
        pdb_1404b38e0(&plStack_f8);
      }
    }
    if ((((char)uStack_ac == '\0') && ((*_DAT_143ca8f38 & 0x7fffffffffffffff) != 0)) &&
       (cVar24 = pdb_142dc79e0(), cVar24 == '\0')) {
      *(undefined1 *)((longlong)plVar40 + 0x11) = 1;
    }
    LOCK();
    lVar31 = *plStack_c0;
    *(char *)plStack_c0 = '\0';
    UNLOCK();
    if ((char)lVar31 == '\x02') {
      pdb_142dc6ca0(plStack_c0);
    }
    LOCK();
    *plStack_c8 = *plStack_c8 + -1;
    UNLOCK();
    if (*plStack_c8 == 0) {
      pdb_140dd77d0(&plStack_c8);
    }
    puVar35 = puVar35 + 0xc;
    pbVar37 = pbVar37 + 1;
    lStack_130 = lStack_130 + 0x60;
  } while( true );
}

