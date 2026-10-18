// VA 0x140bf59a0, PDB extent 2375 bytes
// country_core::systems::audio::clutter_audio::clutter_audio_system
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/clutter_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::audio::clutter_audio::clutter_audio_system
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/clutter_audio.rs
   Extent: 2375 */

void pdb_140bf59a0(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  code *pcVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  byte *pbVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  ulonglong uVar17;
  ulonglong *arg0;
  undefined *unaff_R12;
  undefined8 *puVar18;
  longlong *plVar19;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulonglong *puStack_a8;
  byte *pbStack_a0;
  ulonglong *puStack_98;
  undefined1 uStack_90;
  undefined4 uStack_8f;
  undefined2 uStack_8b;
  undefined1 uStack_89;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulonglong *puStack_78;
  byte *pbStack_70;
  ulonglong *puStack_68;
  undefined1 uStack_60;
  undefined4 uStack_5f;
  undefined2 uStack_5b;
  undefined1 uStack_59;
  ulonglong *puStack_58;
  char cStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puVar11 = param_2;
  cStack_49 = pdb_140e94b40();
  puVar14 = param_2;
  if (cStack_49 == '\0') goto LAB_140bf5b52;
  puVar13 = (ulonglong *)0x41;
  lVar6 = pdb_140bf6470(0x41);
  puVar18 = (undefined8 *)&UNK_143066d3b;
  if (lVar6 == 1) {
    if ((undefined8 *)0x41 < puVar11) {
LAB_140bf60f2:
      pdb_142dc8070(&UNK_143066d3b,0x41,0);
LAB_140bf6112:
      pdb_142dc8070(&UNK_143066d3b,0x41);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar7 = pdb_140bf6470(puVar11);
    if ((uVar7 & 1) != 0) {
      if (0x41 < (longlong)puVar11 + 2U) goto LAB_140bf6112;
      puVar13 = (ulonglong *)(0x3f - (longlong)puVar11);
      puVar18 = (undefined8 *)((longlong)puVar11 + 0x143066d3d);
    }
  }
  puVar15 = &UNK_14306676d;
  plVar19 = (longlong *)&UNK_143066737;
  do {
    bVar1 = puVar15[-1];
    uVar5 = (uint)(char)bVar1;
    if ((char)bVar1 < '\0') {
      bVar2 = puVar15[-2];
      if ((char)bVar2 < -0x40) {
        bVar3 = puVar15[-3];
        if ((char)bVar3 < -0x40) {
          pbVar9 = puVar15 + -4;
          puVar15 = puVar15 + -4;
          uVar5 = bVar3 & 0x3f | (*pbVar9 & 7) << 6;
        }
        else {
          puVar15 = puVar15 + -3;
          uVar5 = bVar3 & 0xf;
        }
        uVar5 = bVar2 & 0x3f | uVar5 << 6;
      }
      else {
        puVar15 = puVar15 + -2;
        uVar5 = bVar2 & 0x1f;
      }
      uVar5 = (uint)(bVar1 & 0x3f) | uVar5 << 6;
      if (uVar5 != 0x5c) goto LAB_140bf5ab4;
LAB_140bf5acd:
      puVar16 = puVar15 + -0x143066736;
      if (puVar16 < (undefined *)0x37) {
        unaff_R12 = (undefined *)(0x36 - (longlong)puVar16);
        plVar19 = (longlong *)(puVar15 + 1);
        goto LAB_140bf5af0;
      }
      pdb_142dc8070(&UNK_143066737,0x36,puVar16,0x36,&UNK_143066de0);
      goto LAB_140bf60f2;
    }
    puVar15 = puVar15 + -1;
    if (uVar5 == 0x5c) goto LAB_140bf5acd;
LAB_140bf5ab4:
    if (uVar5 == 0x2f) goto LAB_140bf5acd;
  } while (puVar15 != &UNK_143066737);
  unaff_R12 = (undefined *)0x36;
LAB_140bf5af0:
  plVar8 = (longlong *)pdb_140e97000();
  arg0 = puVar13;
  if ((char)plVar8[0xd] != '\x01') goto LAB_140bf608a;
LAB_140bf5aff:
  if (*plVar8 == 0) {
    *plVar8 = -1;
    puStack_58 = (ulonglong *)plVar8;
    uStack_c0 = pdb_140e94f10(plVar8 + 1,puVar18,puVar13,plVar19,unaff_R12,1,0);
    *puStack_58 = *puStack_58 + 1;
    puVar14 = param_2;
LAB_140bf5b52:
    puStack_58 = (ulonglong *)*param_1;
    lVar6 = param_1[1];
    uVar7 = *puStack_58;
    uVar10 = 0;
    uVar17 = uVar7 - *(ulonglong *)(lVar6 + 0x18);
    if (uVar7 < *(ulonglong *)(lVar6 + 0x18)) {
      uVar17 = uVar10;
    }
    uVar12 = uVar7 - *(ulonglong *)(lVar6 + 0x38);
    if (uVar7 < *(ulonglong *)(lVar6 + 0x38)) {
      uVar12 = uVar10;
    }
    puVar18 = (undefined8 *)(uVar17 * 0x18 + *(longlong *)(lVar6 + 8));
    uVar7 = *(ulonglong *)(lVar6 + 0x10) - uVar17;
    if (*(ulonglong *)(lVar6 + 0x10) < uVar17) {
      puVar18 = (undefined8 *)0x8;
      uVar7 = uVar10;
    }
    param_2 = (undefined8 *)(uVar12 * 0x18 + *(longlong *)(lVar6 + 0x28));
    uVar17 = *(ulonglong *)(lVar6 + 0x30) - uVar12;
    if (*(ulonglong *)(lVar6 + 0x30) < uVar12) {
      param_2 = (undefined8 *)0x8;
      uVar17 = uVar10;
    }
    *puStack_58 = (*(longlong *)(lVar6 + 0x40) - uVar17) - uVar7;
    puStack_d8 = puVar18 + uVar7 * 3;
    puStack_c8 = param_2 + uVar17 * 3;
    plVar19 = (longlong *)*puVar14;
    puVar13 = puStack_58;
code_r0x000140bf5bf0:
    param_1 = (undefined8 *)&UNK_143066e3c;
    if ((puVar18 == (undefined8 *)0x0) || (puVar18 == puStack_d8)) {
      if ((param_2 == (undefined8 *)0x0) || (param_2 == puStack_c8)) goto LAB_140bf5ffc;
      puVar18 = (undefined8 *)0x0;
      puVar11 = param_2 + 3;
      puVar14 = param_2;
    }
    else {
      puVar11 = param_2;
      puVar14 = puVar18;
      puVar18 = puVar18 + 3;
    }
    param_2 = puVar11;
    *puStack_58 = *puStack_58 + 1;
    arg0 = (ulonglong *)0x1e;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((longlong)puVar14 + 0x14)) {
    case 0:
      puVar15 = &UNK_14306676d;
      break;
    case 1:
      puVar15 = &UNK_14306678b;
      arg0 = (ulonglong *)0x18;
      break;
    case 2:
      puVar15 = &UNK_1430667a3;
      arg0 = (ulonglong *)0x1c;
      break;
    case 3:
      puVar15 = &UNK_1430667bf;
      arg0 = (ulonglong *)0x20;
      break;
    case 4:
      puVar15 = &UNK_1430667df;
      arg0 = (ulonglong *)0x1b;
      break;
    case 5:
      puVar15 = &UNK_1430667fa;
      arg0 = (ulonglong *)0x19;
      break;
    case 6:
      puVar15 = &UNK_143066813;
      arg0 = (ulonglong *)0x1b;
      break;
    case 7:
      puVar15 = &UNK_14306682e;
      arg0 = (ulonglong *)0x1c;
      break;
    case 8:
      puVar15 = &UNK_14306684a;
      break;
    case 9:
      puVar15 = &UNK_143066868;
      arg0 = (ulonglong *)0x1b;
      break;
    case 10:
      puVar15 = &UNK_143066883;
      arg0 = (ulonglong *)0x1a;
      break;
    case 0xb:
      puVar15 = &UNK_14306689d;
      goto code_r0x000140bf5e65;
    case 0xc:
      puVar15 = &UNK_1430668ba;
      break;
    case 0xd:
      puVar15 = &UNK_1430668d8;
      arg0 = (ulonglong *)0x1b;
      break;
    case 0xe:
      puVar15 = &UNK_1430668f3;
      goto code_r0x000140bf5e65;
    case 0xf:
      puVar15 = &UNK_143066910;
      arg0 = (ulonglong *)0x24;
      break;
    case 0x10:
      puVar15 = &UNK_143066934;
      arg0 = (ulonglong *)0x2e;
      break;
    case 0x11:
      puVar15 = &UNK_143066962;
      arg0 = (ulonglong *)0x1f;
      break;
    case 0x12:
      goto code_r0x000140bf5bf0;
    case 0x13:
      puVar15 = &UNK_143066981;
      arg0 = (ulonglong *)0x1a;
      break;
    case 0x14:
      puVar15 = &UNK_14306699b;
      break;
    case 0x15:
      puVar15 = &UNK_1430669b9;
      arg0 = (ulonglong *)0x1f;
      break;
    case 0x16:
      puVar15 = &UNK_1430669d8;
      goto code_r0x000140bf5e65;
    case 0x17:
      puVar15 = &UNK_1430669f5;
      arg0 = (ulonglong *)0x1b;
      break;
    case 0x18:
      puVar15 = &UNK_143066a10;
      goto code_r0x000140bf5e65;
    case 0x19:
      puVar15 = &UNK_143066a2d;
      arg0 = (ulonglong *)0x1b;
      break;
    case 0x1a:
      puVar15 = &UNK_143066a48;
      arg0 = (ulonglong *)0x1c;
      break;
    case 0x1b:
      puVar15 = &UNK_143066a64;
      arg0 = (ulonglong *)0x24;
      break;
    case 0x1c:
      puVar15 = &UNK_143066a88;
      goto code_r0x000140bf5e65;
    case 0x1d:
      puVar15 = &UNK_143066aa5;
      arg0 = (ulonglong *)0x1f;
      break;
    case 0x1e:
      puVar15 = &UNK_143066ac4;
      break;
    case 0x1f:
      puVar15 = &UNK_143066ae2;
      arg0 = (ulonglong *)0x24;
      break;
    case 0x20:
      puVar15 = &UNK_143066b06;
      arg0 = (ulonglong *)0x1a;
      break;
    case 0x21:
      puVar15 = &UNK_143066b20;
      arg0 = (ulonglong *)0x20;
      break;
    case 0x22:
      puVar15 = &UNK_143066b40;
      arg0 = (ulonglong *)0x1f;
      break;
    case 0x23:
      puVar15 = &UNK_143066b5f;
      arg0 = (ulonglong *)0x20;
      break;
    case 0x24:
      puVar15 = &UNK_143066b7f;
      arg0 = (ulonglong *)0x1c;
      break;
    case 0x25:
      puVar15 = &UNK_143066b9b;
      arg0 = (ulonglong *)0x1f;
      break;
    case 0x26:
      puVar15 = &UNK_143066bba;
code_r0x000140bf5e65:
      arg0 = (ulonglong *)0x1d;
    }
    uStack_e0 = *(undefined4 *)(puVar14 + 2);
    uStack_e8 = puVar14[1];
    if (*plVar19 == 0) {
      puStack_d0 = puVar14;
      pdb_14007ee60();
      pbVar9 = pub_1406abab0((ulonglong)arg0,1);
      if (pbVar9 == (byte *)0x0) goto code_r0x000140bf60bf;
      pub_142e32760(pbVar9,puVar15,arg0);
      uStack_b8 = 0;
      uStack_90 = 2;
      puVar14 = puStack_d0;
      puStack_a8 = arg0;
      pbStack_a0 = pbVar9;
      puStack_98 = arg0;
    }
    else {
      pdb_140a8b180(&uStack_b8,*plVar19 + 0x10);
      arg0 = puVar13;
      puVar15 = unaff_R12;
      if ((int)uStack_b8 == 2) {
        uStack_88 = uStack_b0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_143066d10,0x2b,&uStack_88,&UNK_143066cf0,&UNK_143066bd8);
      }
    }
    puStack_68 = puStack_98;
    uStack_60 = uStack_90;
    uStack_5f = uStack_8f;
    uStack_5b = uStack_8b;
    uStack_59 = uStack_89;
    puStack_78 = puStack_a8;
    pbStack_70 = pbStack_a0;
    uStack_88 = uStack_b8;
    uStack_80 = uStack_b0;
    pdb_140a8e190(&uStack_88,&uStack_e8);
    pdb_140a8e730(&uStack_88,&UNK_143066bf0,0xf,
                  *(undefined4 *)
                   (&UNK_143066e30 + (ulonglong)*(byte *)((longlong)puVar14 + 0x15) * 4));
    pdb_140a8a6f0(&uStack_88);
    pdb_1409a5ed0(&uStack_88);
    puVar13 = arg0;
    unaff_R12 = puVar15;
    if (puStack_78 != (ulonglong *)0x0) {
      pub_1406abac0(pbStack_70,(ulonglong)puStack_78,1);
    }
    goto code_r0x000140bf5bf0;
  }
  goto LAB_140bf607e;
LAB_140bf5ffc:
  if (cStack_49 != '\0') {
    plVar8 = (longlong *)pdb_140e97000();
    if (((char)plVar8[0xd] != '\x01') &&
       (plVar8 = (longlong *)pdb_142d8ec20(plVar8,0), arg0 = puVar13, plVar8 == (longlong *)0x0))
    goto LAB_140bf60b2;
    if (*plVar8 != 0) {
LAB_140bf607e:
      plVar8 = (longlong *)pdb_142dc8090(&UNK_143326a50);
      arg0 = puVar13;
LAB_140bf608a:
      plVar8 = (longlong *)pdb_142d8ec20(plVar8,0);
      puVar13 = arg0;
      if (plVar8 == (longlong *)0x0) {
LAB_140bf60b2:
        pdb_142dc7890(&UNK_143326860);
code_r0x000140bf60bf:
        pdb_142dc7e2a(1,arg0);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      goto LAB_140bf5aff;
    }
    *plVar8 = -1;
    puStack_58 = (ulonglong *)plVar8;
    pdb_140e95370(plVar8 + 1,uStack_c0);
    *puStack_58 = *puStack_58 + 1;
  }
  return;
}

