// VA 0x140aed090, PDB extent 2480 bytes
// country_core::systems::audio::replay_audio::replay_audio_system
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/replay_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::audio::replay_audio::replay_audio_system
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/replay_audio.rs
   Extent: 2480 */

void pdb_140aed090(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  longlong *param_5)

{
  byte *pbVar1;
  undefined8 *puVar2;
  byte bVar3;
  byte bVar4;
  ulonglong *puVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined *puVar12;
  longlong *plVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  byte *pbVar16;
  uint uVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  int *piVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined8 *unaff_R12;
  ulonglong *puVar24;
  undefined4 uVar25;
  longlong lStack_118;
  undefined1 auStack_110 [8];
  ulonglong uStack_108;
  byte *pbStack_100;
  undefined8 uStack_f8;
  undefined1 uStack_f0;
  undefined4 uStack_ef;
  undefined2 uStack_eb;
  undefined1 uStack_e9;
  longlong lStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  longlong *plStack_b0;
  longlong lStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  ulonglong uStack_98;
  byte *pbStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined1 uStack_7c;
  undefined2 uStack_7b;
  undefined1 uStack_79;
  undefined8 uStack_78;
  longlong *plStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  cVar9 = pdb_140e94b40();
  plStack_68 = (longlong *)CONCAT71(plStack_68._1_7_,cVar9);
  if (cVar9 == '\0') goto LAB_140aed26c;
  piVar20 = (int *)&UNK_1430504bf;
  puVar21 = (undefined8 *)0x3f;
  uVar19 = 0x3f;
  lVar10 = pdb_140aef6f0(&UNK_1430504bf);
  if (lVar10 == 1) {
    if (0x3f < uVar19) {
LAB_140aed76f:
      pdb_142dc8070(&UNK_1430504bf,0x3f,0);
LAB_140aed78f:
      pdb_142dc8070(&UNK_1430504bf,0x3f);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    piVar20 = (int *)&UNK_1430504bf;
    uVar11 = pdb_140aef6f0(&UNK_1430504bf);
    if ((uVar11 & 1) != 0) {
      if (0x3f < uVar19 + 2) goto LAB_140aed78f;
      puVar21 = (undefined8 *)(0x3d - uVar19);
      piVar20 = (int *)(&UNK_1430504c1 + uVar19);
    }
  }
  puVar12 = &UNK_143050213;
  unaff_R12 = (undefined8 *)&UNK_1430501de;
  do {
    pbVar16 = puVar12 + -1;
    uVar17 = (uint)(char)*pbVar16;
    if ((int)uVar17 < 0) {
      bVar3 = puVar12[-2];
      if ((char)bVar3 < -0x40) {
        bVar4 = puVar12[-3];
        if ((char)bVar4 < -0x40) {
          pbVar1 = puVar12 + -4;
          puVar12 = puVar12 + -4;
          uVar17 = bVar4 & 0x3f | (*pbVar1 & 7) << 6;
        }
        else {
          puVar12 = puVar12 + -3;
          uVar17 = bVar4 & 0xf;
        }
        uVar17 = bVar3 & 0x3f | uVar17 << 6;
      }
      else {
        puVar12 = puVar12 + -2;
        uVar17 = bVar3 & 0x1f;
      }
      uVar17 = (uint)(*pbVar16 & 0x3f) | uVar17 << 6;
      if (uVar17 != 0x5c) goto LAB_140aed1c9;
LAB_140aed1e6:
      if ((undefined *)0x35 < puVar12 + -0x1430501dd) {
        pdb_142dc8070(&UNK_1430501de,0x35,puVar12 + -0x1430501dd,0x35,&UNK_1430505e0);
        goto LAB_140aed76f;
      }
      puVar24 = (ulonglong *)(0x34 - (longlong)(puVar12 + -0x1430501de));
      unaff_R12 = (undefined8 *)(puVar12 + 1);
      goto LAB_140aed20a;
    }
    puVar12 = puVar12 + -1;
    if (uVar17 == 0x5c) goto LAB_140aed1e6;
LAB_140aed1c9:
    if (uVar17 == 0x2f) goto LAB_140aed1e6;
  } while (puVar12 != &UNK_1430501de);
  puVar24 = (ulonglong *)0x35;
LAB_140aed20a:
  plVar13 = (longlong *)pdb_140e97000();
  if ((char)plVar13[0xd] != '\x01') goto LAB_140aed705;
LAB_140aed219:
  if (*plVar13 == 0) {
    *plVar13 = -1;
    plStack_b0 = plVar13;
    uVar14 = pdb_140e94f10(plVar13 + 1,piVar20,puVar21,unaff_R12,puVar24,1,0);
    *plStack_b0 = *plStack_b0 + 1;
    plStack_b0 = (longlong *)uVar14;
LAB_140aed26c:
    puVar24 = (ulonglong *)*param_3;
    lVar10 = param_3[1];
    uVar19 = *puVar24;
    uVar22 = 0;
    uVar11 = uVar19 - *(ulonglong *)(lVar10 + 0x18);
    if (uVar19 < *(ulonglong *)(lVar10 + 0x18)) {
      uVar11 = uVar22;
    }
    uVar23 = uVar19 - *(ulonglong *)(lVar10 + 0x38);
    if (uVar19 < *(ulonglong *)(lVar10 + 0x38)) {
      uVar23 = uVar22;
    }
    puVar15 = (undefined8 *)(uVar11 * 0x10 + *(longlong *)(lVar10 + 8));
    uVar19 = *(ulonglong *)(lVar10 + 0x10) - uVar11;
    if (*(ulonglong *)(lVar10 + 0x10) < uVar11) {
      puVar15 = (undefined8 *)0x8;
      uVar19 = uVar22;
    }
    puVar18 = (undefined8 *)(uVar23 * 0x10 + *(longlong *)(lVar10 + 0x28));
    uVar11 = *(ulonglong *)(lVar10 + 0x30) - uVar23;
    if (*(ulonglong *)(lVar10 + 0x30) < uVar23) {
      puVar18 = (undefined8 *)0x8;
      uVar11 = uVar22;
    }
    *puVar24 = (*(longlong *)(lVar10 + 0x40) - uVar11) - uVar19;
    param_3 = puVar15 + uVar19 * 2;
    puVar21 = puVar18 + uVar11 * 2;
    param_1 = (longlong *)*param_1;
    piVar20 = (int *)*param_2;
    do {
      while ((puVar15 != (undefined8 *)0x0 && (puVar15 != param_3))) {
        puVar2 = puVar15 + 2;
        *puVar24 = *puVar24 + 1;
        cVar9 = *(char *)(puVar15 + 1);
        puVar15 = puVar2;
        if (cVar9 == '\0') goto LAB_140aed377;
LAB_140aed312:
        unaff_R12 = puVar15;
        param_2 = puVar18;
        if (cVar9 == '\x01') {
          if ((piVar20[0xc] == 1) && (pdb_141808ec0(&lStack_e8), lStack_e8 != -0x7ffffffffffffffc))
          {
            uStack_78 = uStack_b8;
            uStack_80 = uStack_c0;
            uStack_7c = (undefined1)uStack_bc;
            uStack_7b = (undefined2)((uint)uStack_bc >> 8);
            uStack_79 = (undefined1)((uint)uStack_bc >> 0x18);
            uStack_a0 = uStack_e0;
            uStack_9c = uStack_dc;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8170(&UNK_143044570,0x2b,&lStack_a8,&UNK_143044530,&UNK_143043dc0);
          }
        }
        else {
          if (*param_1 == 0) {
            pdb_14007ee60();
            pbVar16 = pub_1406abab0(0x13,1);
            uVar8 = _UNK_143050229;
            uVar7 = _UNK_143050225;
            uVar25 = _UNK_143050221;
            if (pbVar16 == (byte *)0x0) goto LAB_140aed73a;
            *(undefined4 *)pbVar16 = _DAT_14305021d;
            *(undefined4 *)(pbVar16 + 4) = uVar25;
            *(undefined4 *)(pbVar16 + 8) = uVar7;
            *(undefined4 *)(pbVar16 + 0xc) = uVar8;
            pbVar16[0xf] = 0x6e;
            pbVar16[0x10] = 0x70;
            pbVar16[0x11] = 0x75;
            pbVar16[0x12] = 0x74;
            lStack_a8 = 0;
            uStack_98 = 0x13;
            uStack_88 = 0x13;
            uStack_80 = CONCAT31(uStack_80._1_3_,2);
            pbStack_90 = pbVar16;
          }
          else {
            pdb_140a8b180(&lStack_a8,*param_1 + 0x10,&DAT_14305021d,0x13);
            if ((int)lStack_a8 == 2) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc8170(&UNK_143050468,0x2b,&lStack_e8,&UNK_143050448,&UNK_143050230);
            }
          }
          uStack_f8 = uStack_88;
          uStack_f0 = (undefined1)uStack_80;
          uStack_ef = CONCAT13(uStack_7c,uStack_80._1_3_);
          uStack_eb = uStack_7b;
          uStack_e9 = uStack_79;
          uStack_108 = uStack_98;
          pbStack_100 = pbStack_90;
          lStack_118 = lStack_a8;
          if ((lStack_a8 == 1) &&
             (pdb_141808ec0(&lStack_e8,auStack_110), lStack_e8 != -0x7ffffffffffffffc)) {
            uStack_78 = uStack_b8;
            uStack_80 = uStack_c0;
            uStack_7c = (undefined1)uStack_bc;
            uStack_7b = (undefined2)((uint)uStack_bc >> 8);
            uStack_79 = (undefined1)((uint)uStack_bc >> 0x18);
            uStack_a0 = uStack_e0;
            uStack_9c = uStack_dc;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8170(&UNK_143044570,0x2b,&lStack_a8,&UNK_143044530,&UNK_143043dc0);
          }
          pdb_1409a5ed0(&lStack_118);
          if (uStack_108 != 0) {
            pub_1406abac0(pbStack_100,uStack_108,1);
          }
        }
      }
      if ((puVar18 == (undefined8 *)0x0) || (puVar18 == puVar21)) goto LAB_140aed4cc;
      puVar2 = puVar18 + 2;
      puVar15 = (undefined8 *)0x0;
      *puVar24 = *puVar24 + 1;
      cVar9 = *(char *)(puVar18 + 1);
      puVar18 = puVar2;
      if (cVar9 != '\0') goto LAB_140aed312;
LAB_140aed377:
      unaff_R12 = puVar15;
      param_2 = puVar18;
      if ((*piVar20 == 1) && (pdb_141808ec0(&lStack_e8), lStack_e8 != -0x7ffffffffffffffc)) {
        uStack_78 = uStack_b8;
        uStack_80 = uStack_c0;
        uStack_7c = (undefined1)uStack_bc;
        uStack_7b = (undefined2)((uint)uStack_bc >> 8);
        uStack_79 = (undefined1)((uint)uStack_bc >> 0x18);
        uStack_a0 = uStack_e0;
        uStack_9c = uStack_dc;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_143044570,0x2b,&lStack_a8,&UNK_143044530,&UNK_143043dc0);
      }
    } while( true );
  }
  goto LAB_140aed6f9;
LAB_140aed4cc:
  uVar25 = 0;
  if (*(char *)*param_4 == '\t') {
    puVar5 = (ulonglong *)*param_5;
    if (puVar5[3] != 0) {
      uVar19 = 0;
      if (*puVar5 <= puVar5[2]) {
        uVar19 = *puVar5;
      }
      if (*(char *)(puVar5[1] + 0x38 + (puVar5[2] - uVar19) * 0x40) != '\0') {
        uVar25 = _DAT_142e36f28;
      }
    }
    lVar10 = *param_1;
    uVar7 = _DAT_142e36f28;
  }
  else {
    lVar10 = *param_1;
    uVar7 = 0;
  }
  if (lVar10 != 0) {
    pdb_140a8aa00(lVar10 + 0x10,&UNK_143050213,4,uVar25);
    if (*param_1 != 0) {
      pdb_140a8aa00(*param_1 + 0x10,&UNK_143050217,6,uVar7);
    }
  }
  if ((char)plStack_68 != '\0') {
    plVar13 = (longlong *)pdb_140e97000();
    if (((char)plVar13[0xd] != '\x01') &&
       (plVar13 = (longlong *)pdb_142d8ec20(plVar13,0), plVar13 == (longlong *)0x0))
    goto LAB_140aed72d;
    if (*plVar13 != 0) {
LAB_140aed6f9:
      plVar13 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_140aed705:
      plVar13 = (longlong *)pdb_142d8ec20(plVar13,0);
      if (plVar13 == (longlong *)0x0) {
LAB_140aed72d:
        pdb_142dc7890(&UNK_143326860);
LAB_140aed73a:
        pdb_142dc7e2a(1,0x13);
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      goto LAB_140aed219;
    }
    *plVar13 = -1;
    plStack_68 = plVar13;
    pdb_140e95370(plVar13 + 1,plStack_b0);
    *plStack_68 = *plStack_68 + 1;
  }
  return;
}

