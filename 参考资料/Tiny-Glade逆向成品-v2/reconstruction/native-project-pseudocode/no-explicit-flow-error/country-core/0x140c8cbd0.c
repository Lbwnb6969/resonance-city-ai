// VA 0x140c8cbd0, PDB extent 3708 bytes
// country_core::resources::clutter_packs::write_pack_checksums
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_packs.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* Matched PDB project procedure: country_core::resources::clutter_packs::write_pack_checksums
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_packs.rs
   Extent: 3708 */

byte * pdb_140c8cbd0(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  undefined8 uVar33;
  undefined8 ***pppuVar34;
  char cVar35;
  longlong lVar36;
  byte *pbVar37;
  ulonglong *puVar38;
  code *pcVar39;
  undefined8 ****ppppuVar40;
  ulonglong *puVar41;
  ulonglong ***pppuVar42;
  ulonglong *puVar43;
  byte *pbVar44;
  ulonglong uVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined8 ***pppuStack_208;
  byte *pbStack_200;
  longlong lStack_1f8;
  ulonglong *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 ***pppuStack_1d8;
  byte *pbStack_1d0;
  longlong lStack_1c8;
  undefined8 ****ppppuStack_1b8;
  code *pcStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  uint uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  ulonglong ****ppppuStack_178;
  code *pcStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  uint uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  ulonglong *puStack_138;
  ulonglong *puStack_130;
  longlong lStack_128;
  ulonglong *puStack_120;
  ulonglong *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  longlong lStack_f8;
  ulonglong *puStack_f0;
  longlong lStack_e8;
  ulonglong *puStack_e0;
  longlong lStack_d8;
  undefined8 ***pppuStack_d0;
  byte *pbStack_c8;
  longlong lStack_c0;
  undefined8 ***pppuStack_b8;
  byte *pbStack_b0;
  longlong lStack_a8;
  ulonglong *puStack_a0;
  undefined8 ****ppppuStack_98;
  ulonglong *puStack_90;
  byte *pbStack_88;
  ulonglong ***pppuStack_80;
  undefined1 uStack_76;
  undefined1 uStack_75;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  lStack_e8 = 0;
  puStack_e0 = (ulonglong *)0x8;
  lStack_d8 = 0;
  uStack_71 = 1;
  uStack_110 = param_2;
  uStack_108 = param_1;
  lVar36 = pdb_140c8a3b0(param_1,param_2,&lStack_e8);
  bVar32 = UNK_143056a0f;
  bVar31 = UNK_143056a0e;
  bVar30 = UNK_143056a0d;
  bVar29 = UNK_143056a0c;
  bVar28 = UNK_143056a0b;
  bVar27 = UNK_143056a0a;
  bVar26 = UNK_143056a09;
  bVar25 = UNK_143056a08;
  bVar24 = UNK_143056a07;
  bVar23 = UNK_143056a06;
  bVar22 = UNK_143056a05;
  bVar21 = UNK_143056a04;
  bVar20 = UNK_143056a03;
  bVar19 = UNK_143056a02;
  bVar18 = UNK_143056a01;
  bVar17 = DAT_143056a00;
  bVar16 = UNK_1430569ff;
  bVar15 = UNK_1430569fe;
  bVar14 = UNK_1430569fd;
  bVar13 = UNK_1430569fc;
  bVar12 = UNK_1430569fb;
  bVar11 = UNK_1430569fa;
  bVar10 = UNK_1430569f9;
  bVar9 = UNK_1430569f8;
  bVar8 = UNK_1430569f7;
  bVar7 = UNK_1430569f6;
  bVar6 = UNK_1430569f5;
  bVar5 = UNK_1430569f4;
  bVar4 = UNK_1430569f3;
  bVar3 = UNK_1430569f2;
  bVar2 = UNK_1430569f1;
  bVar1 = DAT_1430569f0;
  if (lVar36 == 0) {
    puStack_1f0 = (ulonglong *)0x0;
    uStack_1e0 = 0;
    uVar45 = lStack_d8 * 0x20;
    puStack_120 = puStack_e0 + lStack_d8 * 4;
    puStack_138 = puStack_e0;
    lStack_f8 = lStack_e8;
    lStack_128 = lStack_e8;
    puVar41 = puStack_e0 + 5;
    puStack_f0 = puStack_e0;
    puVar38 = puStack_e0;
    puStack_a0 = puStack_120;
    while (uVar45 = uVar45 - 0x20, puVar38 != puStack_a0) {
      puVar43 = puVar38 + 4;
      puStack_130 = puVar43;
      if (SBORROW8(0,*puVar38)) {
        if (puStack_a0 != puVar43) {
          uVar45 = uVar45 >> 5;
          do {
            if (puVar41[-1] != 0) {
              pub_1406abac0((byte *)*puVar41,puVar41[-1],1);
            }
            puVar41 = puVar41 + 4;
            uVar45 = uVar45 - 1;
          } while (uVar45 != 0);
        }
        break;
      }
      pbStack_88 = (byte *)puVar38[1];
      ppppuVar40 = (undefined8 ****)puVar38[2];
      ppppuStack_98 = ppppuVar40;
      pppuStack_80 = (ulonglong ***)*puVar38;
      lVar36 = pdb_140f3e340(pbStack_88,ppppuVar40,uStack_108,uStack_110);
      if (lVar36 == 0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_143076840,0x2b,&uStack_76,&UNK_143076820,&UNK_143076258);
      }
      pdb_140f3ddd0(&ppppuStack_1b8,lVar36,ppppuVar40);
      uStack_148 = uStack_188;
      uStack_144 = uStack_184;
      uStack_140 = uStack_180;
      uStack_13c = uStack_17c;
      uStack_158 = uStack_198;
      uStack_154 = uStack_194;
      uStack_150 = uStack_190;
      uStack_14c = uStack_18c;
      uStack_168 = uStack_1a8;
      uStack_160 = uStack_1a0;
      ppppuStack_178 = ppppuStack_1b8;
      pcStack_170 = pcStack_1b0;
      pdb_140af3840(&pppuStack_d0,&ppppuStack_178);
      lVar36 = lStack_c0;
      pbVar37 = pbStack_c8;
      pppuVar34 = pppuStack_d0;
      pppuVar42 = pppuStack_80;
      if (SBORROW8(0,(longlong)pppuStack_d0)) goto LAB_140c8d2ba;
      pppuStack_1d8 = pppuStack_d0;
      pbStack_1d0 = pbStack_c8;
      lStack_1c8 = lStack_c0;
      puStack_118 = puVar41;
      puStack_90 = puVar43;
      pdb_141a6c240(&pppuStack_b8,pbStack_c8,lStack_c0,&UNK_143076270,1);
      if (lVar36 != 0) {
        pbVar44 = pbVar37 + 8;
        do {
          if (*(ulonglong *)(pbVar44 + -8) != 0) {
            pub_1406abac0(*(byte **)pbVar44,*(ulonglong *)(pbVar44 + -8),1);
          }
          pbVar44 = pbVar44 + 0x18;
          lVar36 = lVar36 + -1;
        } while (lVar36 != 0);
      }
      if (pppuVar34 != (undefined8 ***)0x0) {
        pub_1406abac0(pbVar37,(longlong)pppuVar34 * 0x18,8);
      }
      puVar38 = puStack_90;
      puVar41 = puStack_118;
      if (lStack_a8 == 0xd) {
        if (*(longlong *)(pbStack_b0 + 5) == 0x6e6f736a2e706f68 &&
            *(longlong *)pbStack_b0 == 0x706f68736b726f77) goto LAB_140c8d0b0;
LAB_140c8cf1d:
        uStack_73 = 1;
        cVar35 = pdb_140c8da50();
        puVar43 = puStack_90;
        puVar41 = puStack_118;
        if (cVar35 == '\0') {
          ppppuStack_178 = &pppuStack_b8;
          pcStack_170 = pdb_140094770;
          uStack_73 = 1;
          pbVar37 = (byte *)pdb_142d8fe70(&UNK_143076288,&ppppuStack_178);
        }
        else {
          uStack_73 = 1;
          pdb_140f55fb0(&ppppuStack_178,pbStack_88,ppppuStack_98);
          if (!SBORROW8(0,(longlong)ppppuStack_178)) {
            ppppuStack_98 = ppppuStack_178;
            lStack_1f8 = lStack_a8;
            pppuStack_208 = pppuStack_b8;
            pbStack_200 = pbStack_b0;
            uStack_75 = 1;
            pcStack_100 = pcStack_170;
            pdb_140faf160(&ppppuStack_178,pcStack_170,uStack_168);
            pppuStack_d0 = (undefined8 ***)0x0;
            pbStack_c8 = (byte *)0x1;
            lStack_c0 = 0;
            uStack_1a8 = 0x60000020;
            ppppuStack_1b8 = &pppuStack_d0;
            pcStack_1b0 = (code *)&UNK_143076710;
            cVar35 = pdb_140fae350(&ppppuStack_178,&ppppuStack_1b8);
            if (cVar35 != '\0') {
                    /* WARNING: Subroutine does not return */
              pdb_142dc8170(&UNK_143076740,0x37,&uStack_76,&UNK_143076800,&UNK_1430767e8);
            }
            lStack_1c8 = lStack_c0;
            pppuStack_1d8 = pppuStack_d0;
            pbStack_1d0 = pbStack_c8;
            uStack_75 = 0;
            pdb_14192b040(&ppppuStack_1b8,&puStack_1f0,&pppuStack_208,&pppuStack_1d8);
            if ((!SBORROW8(0,(longlong)ppppuStack_1b8)) && (ppppuStack_1b8 != (undefined8 ****)0x0))
            {
              pub_1406abac0((byte *)pcStack_1b0,(ulonglong)ppppuStack_1b8,1);
            }
            pppuVar42 = pppuStack_80;
            puVar38 = puVar43;
            if (ppppuStack_98 != (undefined8 ****)0x0) {
              pub_1406abac0((byte *)pcStack_100,(ulonglong)ppppuStack_98,1);
            }
            goto joined_r0x000140c8d078;
          }
          uStack_73 = 1;
          pbVar37 = (byte *)pdb_142d92a70(&pppuStack_b8);
        }
        pppuVar42 = pppuStack_80;
        if (pppuStack_b8 != (undefined8 ***)0x0) {
          pub_1406abac0(pbStack_b0,(ulonglong)pppuStack_b8,1);
        }
LAB_140c8d2ba:
        if (pppuVar42 != (ulonglong ***)0x0) {
          pub_1406abac0(pbStack_88,(ulonglong)pppuVar42,1);
        }
        if (puStack_a0 != puVar43) {
          uVar45 = uVar45 >> 5;
          do {
            if (puVar41[-1] != 0) {
              pub_1406abac0((byte *)*puVar41,puVar41[-1],1);
            }
            puVar41 = puVar41 + 4;
            uVar45 = uVar45 - 1;
          } while (uVar45 != 0);
        }
        if (lStack_f8 != 0) {
          pub_1406abac0((byte *)puStack_f0,lStack_f8 << 5,8);
        }
        uStack_71 = 0;
        pdb_14096d420(&puStack_1f0);
        return pbVar37;
      }
      if ((lStack_a8 != 0x13) ||
         (auVar46[0] = -(*pbStack_b0 == bVar17), auVar46[1] = -(pbStack_b0[1] == bVar18),
         auVar46[2] = -(pbStack_b0[2] == bVar19), auVar46[3] = -(pbStack_b0[3] == bVar20),
         auVar46[4] = -(pbStack_b0[4] == bVar21), auVar46[5] = -(pbStack_b0[5] == bVar22),
         auVar46[6] = -(pbStack_b0[6] == bVar23), auVar46[7] = -(pbStack_b0[7] == bVar24),
         auVar46[8] = -(pbStack_b0[8] == bVar25), auVar46[9] = -(pbStack_b0[9] == bVar26),
         auVar46[10] = -(pbStack_b0[10] == bVar27), auVar46[0xb] = -(pbStack_b0[0xb] == bVar28),
         auVar46[0xc] = -(pbStack_b0[0xc] == bVar29), auVar46[0xd] = -(pbStack_b0[0xd] == bVar30),
         auVar46[0xe] = -(pbStack_b0[0xe] == bVar31), auVar46[0xf] = -(pbStack_b0[0xf] == bVar32),
         auVar47[0] = -(pbStack_b0[3] == bVar1), auVar47[1] = -(pbStack_b0[4] == bVar2),
         auVar47[2] = -(pbStack_b0[5] == bVar3), auVar47[3] = -(pbStack_b0[6] == bVar4),
         auVar47[4] = -(pbStack_b0[7] == bVar5), auVar47[5] = -(pbStack_b0[8] == bVar6),
         auVar47[6] = -(pbStack_b0[9] == bVar7), auVar47[7] = -(pbStack_b0[10] == bVar8),
         auVar47[8] = -(pbStack_b0[0xb] == bVar9), auVar47[9] = -(pbStack_b0[0xc] == bVar10),
         auVar47[10] = -(pbStack_b0[0xd] == bVar11), auVar47[0xb] = -(pbStack_b0[0xe] == bVar12),
         auVar47[0xc] = -(pbStack_b0[0xf] == bVar13), auVar47[0xd] = -(pbStack_b0[0x10] == bVar14),
         auVar47[0xe] = -(pbStack_b0[0x11] == bVar15), auVar47[0xf] = -(pbStack_b0[0x12] == bVar16),
         auVar47 = auVar47 & auVar46,
         (ushort)((ushort)(SUB161(auVar47 >> 7,0) & 1) | (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(byte)(auVar47[0xf] >> 7) << 0xf) != 0xffff)) goto LAB_140c8cf1d;
LAB_140c8d0b0:
      pppuVar42 = pppuStack_80;
      if (pppuStack_b8 != (undefined8 ***)0x0) {
        pub_1406abac0(pbStack_b0,(ulonglong)pppuStack_b8,1);
        pppuVar42 = pppuStack_80;
      }
joined_r0x000140c8d078:
      if (pppuVar42 != (ulonglong ***)0x0) {
        pub_1406abac0(pbStack_88,(ulonglong)pppuVar42,1);
      }
      puVar41 = puVar41 + 4;
    }
    if (lStack_f8 != 0) {
      pub_1406abac0((byte *)puStack_f0,lStack_f8 << 5,8);
    }
    lStack_128 = uStack_1e0;
    puStack_138 = puStack_1f0;
    puStack_130 = (ulonglong *)uStack_1e8;
    pdb_14007ee60();
    pbVar37 = pub_1406abab0(0x80,1);
    if (pbVar37 == (byte *)0x0) {
      pdb_142dc7e2a(1,0x80);
                    /* WARNING: Does not return */
      pcVar39 = (code *)invalidInstructionException();
      (*pcVar39)();
    }
    ppppuStack_1b8 = (undefined8 ****)0x80;
    uStack_1a8 = 0;
    pcStack_170 = (code *)&UNK_143076051;
    uStack_168 = 2;
    uStack_160 = 0;
    uStack_158 = uStack_158 & 0xffffff00;
    pcStack_1b0 = (code *)pbVar37;
    ppppuStack_178 = (ulonglong ****)&ppppuStack_1b8;
    pcVar39 = (code *)pdb_141c37720(&puStack_138,&ppppuStack_178);
    uVar33 = uStack_1a8;
    if (pcVar39 == (code *)0x0) {
      pcVar39 = pcStack_1b0;
      if (!SBORROW8(0,(longlong)ppppuStack_1b8)) {
        pppuStack_80 = (ulonglong ***)ppppuStack_1b8;
        pbStack_88 = (byte *)pcStack_1b0;
        uStack_74 = 1;
        pdb_14096d420(&puStack_138);
        uStack_74 = 1;
        pdb_140f3e9e0(&ppppuStack_178,uStack_108,uStack_110,&UNK_14307623e,0x13);
        puStack_90 = (ulonglong *)pcStack_170;
        lVar36 = pdb_140f561c0(pcStack_170,uStack_168,pbStack_88,uVar33);
        if (pppuStack_80 != (ulonglong ***)0x0) {
          pub_1406abac0(pbStack_88,(ulonglong)pppuStack_80,1);
        }
        if (ppppuStack_178 != (ulonglong ****)0x0) {
          pub_1406abac0((byte *)puStack_90,(ulonglong)ppppuStack_178,1);
        }
        if (lVar36 != 0) {
          uStack_74 = 0;
          pbVar37 = (byte *)pdb_142deaf00(lVar36);
          return pbVar37;
        }
        return (byte *)0x0;
      }
    }
    else if (ppppuStack_1b8 != (undefined8 ****)0x0) {
      pub_1406abac0((byte *)pcStack_1b0,(ulonglong)ppppuStack_1b8,1);
    }
    pbVar37 = (byte *)pdb_142dead00(pcVar39);
    uStack_72 = 0;
    pdb_14096d420(&puStack_138);
  }
  else {
    uStack_71 = 1;
    pbVar37 = (byte *)pdb_142deaf00(lVar36);
    puVar41 = puStack_e0;
    if (lStack_d8 != 0) {
      puVar38 = puStack_e0 + 1;
      lVar36 = lStack_d8;
      do {
        if (puVar38[-1] != 0) {
          pub_1406abac0((byte *)*puVar38,puVar38[-1],1);
        }
        puVar38 = puVar38 + 4;
        lVar36 = lVar36 + -1;
      } while (lVar36 != 0);
    }
    if (lStack_e8 != 0) {
      pub_1406abac0((byte *)puVar41,lStack_e8 << 5,8);
    }
  }
  return pbVar37;
}

