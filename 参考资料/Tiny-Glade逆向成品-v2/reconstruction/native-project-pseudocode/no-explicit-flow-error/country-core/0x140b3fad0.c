// VA 0x140b3fad0, PDB extent 1308 bytes
// country_core::systems::audio::audio_update::audio_update_system
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/audio_update.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::audio::audio_update::audio_update_system
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/audio_update.rs
   Extent: 1308 */

void pdb_140b3fad0(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined4 uVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  char cVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined *puVar14;
  longlong *plVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined *unaff_R12;
  longlong unaff_R13;
  longlong unaff_R14;
  undefined *unaff_R15;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uStack_c0;
  float fStack_b8;
  undefined8 uStack_b4;
  undefined4 uStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  longlong lStack_88;
  longlong *plStack_70;
  longlong *plStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  cVar11 = pdb_140e94b40();
  plStack_68 = (longlong *)CONCAT71(plStack_68._1_7_,cVar11);
  if (cVar11 == '\0') {
    uStack_90 = 0;
    goto LAB_140b3fcab;
  }
  unaff_R15 = &UNK_143058bb3;
  unaff_R14 = 0x3f;
  uVar17 = 0x3f;
  lVar12 = pdb_140b413c0(&UNK_143058bb3);
  if (lVar12 == 1) {
    if (uVar17 < 0x40) {
      unaff_R15 = &UNK_143058bb3;
      uVar13 = pdb_140b413c0(&UNK_143058bb3);
      if ((uVar13 & 1) != 0) {
        if (0x3f < uVar17 + 2) goto LAB_140b3fee5;
        unaff_R14 = 0x3d - uVar17;
        unaff_R15 = &UNK_143058bb5 + uVar17;
      }
      goto LAB_140b3fb74;
    }
  }
  else {
LAB_140b3fb74:
    puVar14 = &UNK_143058765;
    unaff_R12 = &UNK_143058730;
    do {
      pbVar1 = puVar14 + -1;
      uVar16 = (uint)(char)*pbVar1;
      if ((int)uVar16 < 0) {
        bVar4 = puVar14[-2];
        if ((char)bVar4 < -0x40) {
          bVar5 = puVar14[-3];
          if ((char)bVar5 < -0x40) {
            pbVar2 = puVar14 + -4;
            puVar14 = puVar14 + -4;
            uVar16 = bVar5 & 0x3f | (*pbVar2 & 7) << 6;
          }
          else {
            puVar14 = puVar14 + -3;
            uVar16 = bVar5 & 0xf;
          }
          uVar16 = bVar4 & 0x3f | uVar16 << 6;
        }
        else {
          puVar14 = puVar14 + -2;
          uVar16 = bVar4 & 0x1f;
        }
        uVar16 = (uint)(*pbVar1 & 0x3f) | uVar16 << 6;
        if (uVar16 != 0x5c) goto LAB_140b3fc09;
LAB_140b3fc26:
        if ((undefined *)0x35 < puVar14 + -0x14305872f) goto LAB_140b3fea2;
        unaff_R13 = 0x34 - (longlong)(puVar14 + -0x143058730);
        unaff_R12 = puVar14 + 1;
        goto LAB_140b3fc4a;
      }
      puVar14 = puVar14 + -1;
      if (uVar16 == 0x5c) goto LAB_140b3fc26;
LAB_140b3fc09:
      if (uVar16 == 0x2f) goto LAB_140b3fc26;
    } while (puVar14 != &UNK_143058730);
    unaff_R13 = 0x35;
LAB_140b3fc4a:
    plVar15 = (longlong *)pdb_140e97000();
    if ((char)plVar15[0xd] != '\x01') goto LAB_140b3fe72;
    do {
      if (*plVar15 == 0) {
        *plVar15 = -1;
        plStack_70 = plVar15;
        unaff_R14 = pdb_140e94f10(plVar15 + 1,unaff_R15,unaff_R14,unaff_R12,unaff_R13,1,0);
        *plStack_70 = *plStack_70 + 1;
        uStack_90 = 1;
        lStack_88 = unaff_R14;
LAB_140b3fcab:
        param_1 = (longlong *)*param_1;
        if (*param_1 == 0) {
LAB_140b3fd81:
          lVar12 = 0;
        }
        else {
          unaff_R15 = (undefined *)*param_3;
          pdb_140a8af80(*param_1 + 0x10,&UNK_143043ee1,0xb,*(undefined4 *)(unaff_R15 + 0xf8));
          if (*param_1 == 0) goto LAB_140b3fd81;
          pdb_140a8af80(*param_1 + 0x10,&UNK_143043eec,8,*(undefined4 *)(unaff_R15 + 0x104));
          param_3 = (undefined8 *)*param_1;
          if (param_3 == (undefined8 *)0x0) goto LAB_140b3fd81;
          uVar3 = *(undefined4 *)(unaff_R15 + 0xfc);
          param_3 = param_3 + 2;
          pdb_140a8af80(param_3,&UNK_143043ec8,10,uVar3);
          pdb_140a8af80(param_3,&UNK_143043ef4,0x15,uVar3);
          if (*param_1 == 0) goto LAB_140b3fd81;
          pdb_140a8af80(*param_1 + 0x10,&UNK_143043ea2,8,*(undefined4 *)(unaff_R15 + 0x100));
          lVar12 = *param_1;
        }
        lVar6 = *param_2;
        fVar8 = *(float *)(lVar6 + 0xd0);
        fVar9 = *(float *)(lVar6 + 0xd4);
        fVar10 = *(float *)(lVar6 + 0xd8);
        fVar18 = *(float *)(lVar6 + 0xc0) * 0.0;
        fVar19 = *(float *)(lVar6 + 0xc4) * 0.0;
        fVar20 = *(float *)(lVar6 + 200) * 0.0;
        fStack_9c = *(float *)(lVar6 + 0xe0) * 0.0;
        fVar21 = *(float *)(lVar6 + 0xe4) * 0.0;
        fVar22 = *(float *)(lVar6 + 0xe8) * 0.0;
        uStack_c0 = CONCAT44(fVar9 * 0.0 + fVar19 + fVar21 + *(float *)(lVar6 + 0xf4),
                             fVar8 * 0.0 + fVar18 + fStack_9c + *(float *)(lVar6 + 0xf0));
        fStack_b8 = fVar10 * 0.0 + fVar20 + fVar22 + *(float *)(lVar6 + 0xf8);
        fStack_a8 = (_DAT_142e377a0 * fVar8 + *(float *)(lVar6 + 0xc0) * _DAT_142e377a0) -
                    *(float *)(lVar6 + 0xe0);
        fStack_a4 = (_UNK_142e377a4 * fVar9 + *(float *)(lVar6 + 0xc4) * _UNK_142e377a4) -
                    *(float *)(lVar6 + 0xe4);
        fStack_a0 = (_UNK_142e377a8 * fVar10 + *(float *)(lVar6 + 200) * _UNK_142e377a8) -
                    *(float *)(lVar6 + 0xe8);
        fStack_9c = fVar18 + fVar8 + fStack_9c;
        uStack_b4 = 0;
        uStack_ac = 0;
        uStack_98 = CONCAT44(fVar20 + fVar10 + fVar22,fVar19 + fVar9 + fVar21);
        if (lVar12 != 0) {
          pdb_140a8b3b0(lVar12 + 0x10,&uStack_c0);
        }
        if ((char)plStack_68 == '\0') {
          return;
        }
        plVar15 = (longlong *)pdb_140e97000();
        if (((char)plVar15[0xd] != '\x01') &&
           (plVar15 = (longlong *)pdb_142d8ec20(plVar15,0), plVar15 == (longlong *)0x0)) break;
        if (*plVar15 == 0) {
          *plVar15 = -1;
          plStack_68 = plVar15;
          pdb_140e95370(plVar15 + 1,unaff_R14);
          *plStack_68 = *plStack_68 + 1;
          return;
        }
      }
      plVar15 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_140b3fe72:
      plVar15 = (longlong *)pdb_142d8ec20(plVar15,0);
    } while (plVar15 != (longlong *)0x0);
    pdb_142dc7890(&UNK_143326860);
LAB_140b3fea2:
    pdb_142dc8070(&UNK_143058730,0x35);
  }
  pdb_142dc8070(&UNK_143058bb3,0x3f,0);
LAB_140b3fee5:
  pdb_142dc8070(&UNK_143058bb3,0x3f);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

