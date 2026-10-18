// VA 0x1419bde30, PDB extent 4421 bytes
// country_core::systems::audio::tree_audio::tree_audio_system
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/tree_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x0001419be147) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::audio::tree_audio::tree_audio_system
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/tree_audio.rs
   Extent: 4421 */

void pdb_1419bde30(ulonglong *param_1,longlong *param_2,undefined1 **param_3,longlong *param_4,
                  longlong *param_5,undefined1 *param_6,undefined1 *param_7,undefined8 *param_8)

{
  byte *pbVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined *puVar12;
  longlong *plVar13;
  byte *pbVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong *plVar19;
  longlong *plVar20;
  ulonglong uVar21;
  undefined1 **ppuVar22;
  undefined *puVar23;
  longlong *plVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 unaff_XMM7_Da;
  longlong lStack_1f8;
  byte *pbStack_1f0;
  ulonglong uStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  longlong lStack_1cc;
  undefined4 uStack_1c4;
  longlong lStack_1b0;
  undefined4 uStack_1a8;
  longlong *plStack_1a0;
  undefined8 uStack_198;
  longlong lStack_190;
  undefined4 uStack_188;
  undefined4 *puStack_180;
  undefined1 *puStack_178;
  undefined1 *puStack_170;
  ulonglong uStack_168;
  byte *pbStack_160;
  longlong lStack_158;
  undefined8 uStack_150;
  longlong lStack_148;
  longlong lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  longlong *plStack_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  ulonglong uStack_e8;
  byte *pbStack_e0;
  longlong lStack_d8;
  undefined4 uStack_d0;
  undefined1 uStack_cc;
  undefined2 uStack_cb;
  undefined1 uStack_c9;
  byte *pbStack_c0;
  ulonglong *puStack_b8;
  longlong *plStack_b0;
  undefined1 *puStack_a8;
  undefined1 uStack_99;
  undefined4 uStack_98;
  char cStack_92;
  byte bStack_91;
  undefined8 uStack_90;
  
  uStack_90 = 0xfffffffffffffffe;
  puStack_b8 = param_1;
  cStack_92 = pdb_140e94b40();
  plStack_100 = param_2;
  if (cStack_92 == '\0') goto LAB_1419be030;
  ppuVar22 = (undefined1 **)&UNK_143360fc0;
  uVar21 = 0x3b;
  uVar17 = 0x3b;
  lVar10 = pdb_1419c1f70(&UNK_143360fc0);
  if (lVar10 == 1) {
    if (0x3b < uVar17) {
      pdb_142dc8070(&UNK_143360fc0,0x3b,0,uVar17,&UNK_1433610d0);
LAB_1419bea35:
      pdb_142dc8070(&UNK_143360fc0,0x3b);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    ppuVar22 = (undefined1 **)&UNK_143360fc0;
    uVar11 = pdb_1419c1f70(&UNK_143360fc0);
    if ((uVar11 & 1) != 0) {
      if (0x3b < uVar17 + 2) goto LAB_1419bea35;
      uVar21 = 0x39 - uVar17;
      ppuVar22 = (undefined1 **)(&UNK_143360fc2 + uVar17);
    }
  }
  puVar12 = &UNK_143360c47;
  puVar23 = &UNK_143360c14;
  do {
    pbVar14 = puVar12 + -1;
    uVar15 = (uint)(char)*pbVar14;
    if ((int)uVar15 < 0) {
      bVar3 = puVar12[-2];
      if ((char)bVar3 < -0x40) {
        bVar4 = puVar12[-3];
        if ((char)bVar4 < -0x40) {
          pbVar1 = puVar12 + -4;
          puVar12 = puVar12 + -4;
          uVar15 = bVar4 & 0x3f | (*pbVar1 & 7) << 6;
        }
        else {
          puVar12 = puVar12 + -3;
          uVar15 = bVar4 & 0xf;
        }
        uVar15 = bVar3 & 0x3f | uVar15 << 6;
      }
      else {
        puVar12 = puVar12 + -2;
        uVar15 = bVar3 & 0x1f;
      }
      uVar15 = (uint)(*pbVar14 & 0x3f) | uVar15 << 6;
      if (uVar15 != 0x5c) goto LAB_1419bdf89;
LAB_1419bdfa5:
      if ((undefined *)0x33 < puVar12 + -0x143360c13) {
        pdb_142dc8070(&UNK_143360c14,0x33,puVar12 + -0x143360c13,0x33,&UNK_1433610b0);
        goto LAB_1419be9fc;
      }
      plVar19 = (longlong *)(0x32 - (longlong)(puVar12 + -0x143360c14));
      puVar23 = puVar12 + 1;
      goto LAB_1419bdfc8;
    }
    puVar12 = puVar12 + -1;
    if (uVar15 == 0x5c) goto LAB_1419bdfa5;
LAB_1419bdf89:
    if (uVar15 == 0x2f) goto LAB_1419bdfa5;
  } while (puVar12 != &UNK_143360c14);
  plVar19 = (longlong *)0x33;
LAB_1419bdfc8:
  plVar13 = (longlong *)pdb_140e97000();
  if ((char)plVar13[0xd] != '\x01') goto LAB_1419be934;
LAB_1419bdfd7:
  if (*plVar13 == 0) {
    *plVar13 = -1;
    plStack_b0 = plVar13;
    uStack_198 = pdb_140e94f10(plVar13 + 1,ppuVar22,uVar21,puVar23,plVar19,1,0);
    *plStack_b0 = *plStack_b0 + 1;
LAB_1419be030:
    uStack_150 = *param_5;
    uStack_168 = param_5[1];
    lStack_148 = *(longlong *)(uStack_150 + 0xf8);
    lStack_140 = lStack_148 + *(longlong *)(uStack_150 + 0x100) * 4;
    uStack_108 = *(undefined1 *)(uStack_150 + 0x108);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    lStack_158 = uStack_168 + 0xf8;
    pbStack_160 = (byte *)(uStack_168 + 0x198);
    uStack_138 = 8;
    uStack_130 = 0;
    uStack_128 = 8;
    puStack_178 = param_6;
    puStack_170 = param_7;
    plStack_b0 = param_4;
    pdb_1415f4420(&lStack_1f8,&puStack_178);
    uVar21 = uStack_1e8;
    pbStack_c0 = pbStack_1f0;
    puStack_178 = &uStack_99;
    if (1 < uStack_1e8) {
      if (uStack_1e8 < 0x15) {
        pdb_14151b390(pbStack_1f0,uStack_1e8,1,&puStack_178);
      }
      else {
LAB_1419be9fc:
        pdb_140c75b40(pbStack_c0,uVar21,&puStack_178);
      }
    }
    uStack_98 = *(undefined4 *)((longlong)param_3 + 0x1c);
    puStack_a8 = *param_3;
    puStack_180 = (undefined4 *)param_3[2];
    puVar23 = puStack_a8 + 0x38;
    uVar17 = 0;
    do {
      while( true ) {
        uVar11 = uVar17 + 1;
        puVar12 = puVar23 + uVar17 * 0x38;
        *puStack_180 = uStack_98;
        if (uVar21 <= uVar17) break;
        pdb_140a87e10(puVar12);
        if (*(ulonglong *)(puVar12 + 0x10) <= *(ulonglong *)(puVar12 + 0x28)) goto LAB_1419be969;
        puStack_170 = (undefined1 *)
                      CONCAT44(puStack_170._4_4_,*(undefined4 *)(pbStack_c0 + uVar17 * 0x10 + 0xc));
        puStack_178 = *(undefined1 **)(pbStack_c0 + uVar17 * 0x10 + 4);
        pdb_140a8e190(*(ulonglong *)(puVar12 + 0x28) * 0x30 + *(longlong *)(puVar12 + 8),
                      &puStack_178);
        uVar17 = uVar11;
        if (2 < uVar11) goto LAB_1419be1d3;
      }
      pdb_140a87f70();
      uVar17 = uVar11;
    } while (uVar11 < 3);
LAB_1419be1d3:
    fVar26 = _DAT_142e36f28;
    fVar27 = _DAT_142e36f28;
    if (*(char *)*puStack_b8 != '\t') {
      fVar27 = *(float *)(*plStack_b0 + 0x1c) / _DAT_142f3e554;
    }
    puStack_b8 = (ulonglong *)*param_8;
    lVar10 = param_8[1];
    uVar17 = *puStack_b8;
    uVar16 = 0;
    uVar11 = uVar17 - *(ulonglong *)(lVar10 + 0x18);
    if (uVar17 < *(ulonglong *)(lVar10 + 0x18)) {
      uVar11 = uVar16;
    }
    uVar18 = uVar17 - *(ulonglong *)(lVar10 + 0x38);
    if (uVar17 < *(ulonglong *)(lVar10 + 0x38)) {
      uVar18 = uVar16;
    }
    plVar13 = (longlong *)(uVar11 * 0x20 + *(longlong *)(lVar10 + 8));
    uVar17 = *(ulonglong *)(lVar10 + 0x10) - uVar11;
    if (*(ulonglong *)(lVar10 + 0x10) < uVar11) {
      plVar13 = (longlong *)0x8;
      uVar17 = uVar16;
    }
    plVar19 = (longlong *)(uVar18 * 0x20 + *(longlong *)(lVar10 + 0x28));
    uVar11 = *(ulonglong *)(lVar10 + 0x30) - uVar18;
    if (*(ulonglong *)(lVar10 + 0x30) < uVar18) {
      plVar19 = (longlong *)0x8;
      uVar11 = uVar16;
    }
    *puStack_b8 = (*(longlong *)(lVar10 + 0x40) - uVar11) - uVar17;
    plStack_b0 = plVar13 + uVar17 * 4;
    plStack_1a0 = plVar19 + uVar11 * 4;
    param_4 = &lStack_1cc;
    plStack_100 = (longlong *)*plStack_100;
    bStack_91 = 2;
    ppuVar22 = &puStack_f8;
    param_3 = &puStack_178;
    do {
      if ((plVar13 == (longlong *)0x0) || (plVar13 == plStack_b0)) {
        if ((plVar19 == (longlong *)0x0) || (plVar19 == plStack_1a0)) goto LAB_1419be6b1;
        plVar20 = plVar19 + 4;
        plVar24 = (longlong *)0x0;
        plVar13 = plVar19;
      }
      else {
        plVar24 = plVar13 + 4;
        plVar20 = plVar19;
      }
      *puStack_b8 = *puStack_b8 + 1;
      uVar2 = *(undefined4 *)((longlong)plVar13 + 0xc);
      plVar19 = plVar20;
      if ((char)plVar13[1] == '\0') {
        bVar3 = *(byte *)((longlong)plVar13 + 9);
        puVar23 = (undefined *)(ulonglong)bVar3;
        bVar4 = *(byte *)((longlong)plVar13 + 10);
        uVar21 = (ulonglong)bVar4;
        uStack_1c4 = (undefined4)plVar13[3];
        lStack_1cc = plVar13[2];
        puStack_1e0 = &DAT_143360c65;
        uStack_1d8 = 0x19;
        if (*plStack_100 == 0) {
          uStack_1d0 = uVar2;
          pdb_14007ee60();
          pbVar14 = pub_1406abab0(0x19,1);
          uVar9 = _UNK_143360c76;
          if (pbVar14 == (byte *)0x0) {
            pdb_142dc7e2a(1,0x19);
LAB_1419be9d6:
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          *(ulonglong *)(pbVar14 + 9) =
               CONCAT17(UNK_143360c75,CONCAT43(_UNK_143360c71,_DAT_143360c6e));
          *(undefined8 *)(pbVar14 + 0x11) = uVar9;
          uVar8 = _UNK_143360c71;
          uVar7 = _UNK_143360c6d;
          uVar6 = _UNK_143360c69;
          *(undefined4 *)pbVar14 = _DAT_143360c65;
          *(undefined4 *)(pbVar14 + 4) = uVar6;
          *(undefined4 *)(pbVar14 + 8) = uVar7;
          *(undefined4 *)(pbVar14 + 0xc) = uVar8;
          puStack_178 = (undefined1 *)0x0;
          uStack_168 = 0x19;
          lStack_158 = 0x19;
          uStack_150 = CONCAT71(uStack_150._1_7_,2);
          pbStack_160 = pbVar14;
        }
        else {
          uStack_1d0 = uVar2;
          pdb_140a8b180(param_3,*plStack_100 + 0x10,&DAT_143360c65,0x19);
          if ((int)puStack_178 == 2) {
            puStack_f8 = puStack_170;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8170(&UNK_143360f20,0x2b,&puStack_f8,&UNK_143360f50,&UNK_143360ca0);
          }
        }
        lStack_d8 = lStack_158;
        uStack_d0 = (undefined4)uStack_150;
        uStack_cc = (undefined1)((ulonglong)uStack_150 >> 0x20);
        uStack_cb = uStack_150._5_2_;
        uStack_c9 = uStack_150._7_1_;
        uStack_e8 = uStack_168;
        pbStack_e0 = pbStack_160;
        puStack_f8 = puStack_178;
        puStack_f0 = puStack_170;
        pdb_140a8e730(ppuVar22,&UNK_143360c5c,9,uVar2);
        pdb_140a8e190(ppuVar22,param_4);
        pdb_140a8a6f0(ppuVar22);
        lStack_158 = lStack_d8;
        uStack_150 = CONCAT44(CONCAT13(uStack_c9,CONCAT21(uStack_cb,uStack_cc)),uStack_d0);
        uStack_168 = uStack_e8;
        pbStack_160 = pbStack_e0;
        puStack_178 = puStack_f8;
        puStack_170 = puStack_f0;
        fVar25 = fVar26;
        if (bVar3 == 0) {
          fVar25 = 0.0;
        }
        pdb_140a8e730(param_3,&UNK_143360c54,8,fVar25);
        fVar25 = fVar26;
        if (bVar4 == 0) {
          fVar25 = 0.0;
        }
        pdb_140a8e730(param_3,&UNK_143360c7e,8,fVar25);
        pdb_1409a5ed0(param_3);
LAB_1419be663:
        plVar13 = plVar24;
        if (uStack_168 != 0) {
          pub_1406abac0(pbStack_160,uStack_168,1);
        }
      }
      else {
        if ((char)plVar13[1] == '\x02') {
          uStack_1c4 = (undefined4)plVar13[3];
          lStack_1cc = plVar13[2];
          puStack_1e0 = &DAT_143360c86;
          uStack_1d8 = 0x1a;
          if (*plStack_100 == 0) {
            uStack_1d0 = uVar2;
            pdb_14007ee60();
            pbVar14 = pub_1406abab0(0x1a,1);
            uVar9 = _UNK_143360c98;
            if (pbVar14 == (byte *)0x0) {
              pdb_142dc7e2a(1,0x1a);
              goto LAB_1419be9d6;
            }
            *(ulonglong *)(pbVar14 + 10) =
                 CONCAT26(_UNK_143360c96,CONCAT42(_UNK_143360c92,_DAT_143360c90));
            *(undefined8 *)(pbVar14 + 0x12) = uVar9;
            uVar8 = _UNK_143360c92;
            uVar7 = _UNK_143360c8a;
            uVar6 = CONCAT22(_DAT_143360c90,_UNK_143360c8e);
            *(undefined4 *)pbVar14 = _DAT_143360c86;
            *(undefined4 *)(pbVar14 + 4) = uVar7;
            *(undefined4 *)(pbVar14 + 8) = uVar6;
            *(undefined4 *)(pbVar14 + 0xc) = uVar8;
            puStack_178 = (undefined1 *)0x0;
            uStack_168 = 0x1a;
            lStack_158 = 0x1a;
            uStack_150 = CONCAT71(uStack_150._1_7_,2);
            pbStack_160 = pbVar14;
          }
          else {
            uStack_1d0 = uVar2;
            pdb_140a8b180(param_3,*plStack_100 + 0x10,&DAT_143360c86,0x1a);
            if ((int)puStack_178 == 2) {
              puStack_f8 = puStack_170;
                    /* WARNING: Subroutine does not return */
              pdb_142dc8170(&UNK_143360f20,0x2b,&puStack_f8,&UNK_143360f50,&UNK_143360ca0);
            }
          }
          lStack_d8 = lStack_158;
          uStack_d0 = (undefined4)uStack_150;
          uStack_cc = (undefined1)((ulonglong)uStack_150 >> 0x20);
          uStack_cb = uStack_150._5_2_;
          uStack_c9 = uStack_150._7_1_;
          uStack_e8 = uStack_168;
          pbStack_e0 = pbStack_160;
          puStack_f8 = puStack_178;
          puStack_f0 = puStack_170;
          pdb_140a8e730(ppuVar22,&UNK_143360c5c,9,uVar2);
          pdb_140a8e190(ppuVar22,param_4);
          pdb_140a8a6f0(ppuVar22);
          lStack_158 = lStack_d8;
          uStack_150 = CONCAT44(CONCAT13(uStack_c9,CONCAT21(uStack_cb,uStack_cc)),uStack_d0);
          uStack_168 = uStack_e8;
          pbStack_160 = pbStack_e0;
          puStack_178 = puStack_f8;
          puStack_170 = puStack_f0;
          pdb_1409a5ed0(param_3);
          goto LAB_1419be663;
        }
        bStack_91 = *(byte *)((longlong)plVar13 + 9);
        uStack_188 = (undefined4)plVar13[3];
        lStack_190 = plVar13[2];
        plVar13 = plVar24;
        unaff_XMM7_Da = uVar2;
      }
    } while( true );
  }
  goto LAB_1419be928;
LAB_1419be6b1:
  if (bStack_91 == 2) {
    *puStack_180 = uStack_98;
    pdb_140a87f70(puStack_a8);
  }
  else {
    uStack_1a8 = uStack_188;
    lStack_1b0 = lStack_190;
    *puStack_180 = uStack_98;
    pdb_140a87e10(puStack_a8);
    uVar17 = *(ulonglong *)(puStack_a8 + 0x28);
    if (*(ulonglong *)(puStack_a8 + 0x10) <= uVar17) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar17,*(ulonglong *)(puStack_a8 + 0x10),&UNK_143043a80);
    }
    pdb_140a8e190(uVar17 * 0x30 + *(longlong *)(puStack_a8 + 8),&lStack_1b0);
    uVar17 = *(ulonglong *)(puStack_a8 + 0x28);
    if (*(ulonglong *)(puStack_a8 + 0x10) <= uVar17) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar17,*(ulonglong *)(puStack_a8 + 0x10),&UNK_143043a80);
    }
    pdb_140a8e730(uVar17 * 0x30 + *(longlong *)(puStack_a8 + 8),&UNK_143360c47,0xd,fVar27);
    uVar17 = *(ulonglong *)(puStack_a8 + 0x28);
    if (*(ulonglong *)(puStack_a8 + 0x10) <= uVar17) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar17,*(ulonglong *)(puStack_a8 + 0x10),&UNK_143043a80);
    }
    fVar26 = _DAT_142e36f28;
    if ((bStack_91 & 1) == 0) {
      fVar26 = 0.0;
    }
    pdb_140a8e730(uVar17 * 0x30 + *(longlong *)(puStack_a8 + 8),&UNK_143360c54,8,fVar26);
    uVar17 = *(ulonglong *)(puStack_a8 + 0x28);
    if (*(ulonglong *)(puStack_a8 + 0x10) <= uVar17) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar17,*(ulonglong *)(puStack_a8 + 0x10),&UNK_143043a80);
    }
    pdb_140a8e730(uVar17 * 0x30 + *(longlong *)(puStack_a8 + 8),&UNK_143360c5c,9,unaff_XMM7_Da);
  }
  if (lStack_1f8 != 0) {
    pub_1406abac0(pbStack_c0,lStack_1f8 << 4,4);
  }
  if (cStack_92 != '\0') {
    plVar13 = (longlong *)pdb_140e97000();
    if (((char)plVar13[0xd] != '\x01') &&
       (plVar13 = (longlong *)pdb_142d8ec20(plVar13,0), plVar13 == (longlong *)0x0))
    goto LAB_1419be95c;
    if (*plVar13 != 0) {
LAB_1419be928:
      plVar13 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_1419be934:
      plVar13 = (longlong *)pdb_142d8ec20(plVar13,0);
      if (plVar13 == (longlong *)0x0) {
LAB_1419be95c:
        pdb_142dc7890(&UNK_143326860);
LAB_1419be969:
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2();
      }
      goto LAB_1419bdfd7;
    }
    *plVar13 = -1;
    puStack_b8 = (ulonglong *)plVar13;
    pdb_140e95370(plVar13 + 1,uStack_198);
    *puStack_b8 = *puStack_b8 + 1;
  }
  return;
}

