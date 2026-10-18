// VA 0x140b3fff0, PDB extent 1228 bytes
// country_core::systems::audio::audio_update::boot_audio_update_system
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/audio_update.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::audio::audio_update::boot_audio_update_system
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/audio_update.rs
   Extent: 1228 */

void pdb_140b3fff0(longlong *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined4 uVar3;
  byte bVar4;
  byte bVar5;
  code *pcVar6;
  char cVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined *puVar10;
  longlong *plVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong unaff_RBX;
  longlong unaff_R12;
  undefined *unaff_R14;
  undefined *unaff_R15;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_94;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  longlong lStack_80;
  longlong *plStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  cVar7 = pdb_140e94b40();
  if (cVar7 == '\0') {
    uStack_88 = 0;
    goto LAB_140b401bb;
  }
  unaff_R14 = &UNK_143058b08;
  unaff_RBX = 0x44;
  uVar13 = 0x44;
  lVar8 = pdb_140b413c0(&UNK_143058b08);
  if (lVar8 == 1) {
    if (uVar13 < 0x45) {
      unaff_R14 = &UNK_143058b08;
      uVar9 = pdb_140b413c0(&UNK_143058b08);
      if ((uVar9 & 1) != 0) {
        if (0x44 < uVar13 + 2) goto LAB_140b403af;
        unaff_RBX = 0x42 - uVar13;
        unaff_R14 = &UNK_143058b0a + uVar13;
      }
      goto LAB_140b4008f;
    }
  }
  else {
LAB_140b4008f:
    puVar10 = &UNK_143058765;
    unaff_R15 = &UNK_143058730;
    do {
      pbVar1 = puVar10 + -1;
      uVar12 = (uint)(char)*pbVar1;
      if ((int)uVar12 < 0) {
        bVar4 = puVar10[-2];
        if ((char)bVar4 < -0x40) {
          bVar5 = puVar10[-3];
          if ((char)bVar5 < -0x40) {
            pbVar2 = puVar10 + -4;
            puVar10 = puVar10 + -4;
            uVar12 = bVar5 & 0x3f | (*pbVar2 & 7) << 6;
          }
          else {
            puVar10 = puVar10 + -3;
            uVar12 = bVar5 & 0xf;
          }
          uVar12 = bVar4 & 0x3f | uVar12 << 6;
        }
        else {
          puVar10 = puVar10 + -2;
          uVar12 = bVar4 & 0x1f;
        }
        uVar12 = (uint)(*pbVar1 & 0x3f) | uVar12 << 6;
        if (uVar12 != 0x5c) goto LAB_140b40119;
LAB_140b40136:
        if ((undefined *)0x35 < puVar10 + -0x14305872f) goto LAB_140b4036c;
        unaff_R12 = 0x34 - (longlong)(puVar10 + -0x143058730);
        unaff_R15 = puVar10 + 1;
        goto LAB_140b4015a;
      }
      puVar10 = puVar10 + -1;
      if (uVar12 == 0x5c) goto LAB_140b40136;
LAB_140b40119:
      if (uVar12 == 0x2f) goto LAB_140b40136;
    } while (puVar10 != &UNK_143058730);
    unaff_R12 = 0x35;
LAB_140b4015a:
    plVar11 = (longlong *)pdb_140e97000();
    if ((char)plVar11[0xd] != '\x01') goto LAB_140b4033c;
    do {
      if (*plVar11 == 0) {
        *plVar11 = -1;
        plStack_68 = plVar11;
        unaff_RBX = pdb_140e94f10(plVar11 + 1,unaff_R14,unaff_RBX,unaff_R15,unaff_R12,1,0);
        *plStack_68 = *plStack_68 + 1;
        uStack_88 = 1;
        lStack_80 = unaff_RBX;
LAB_140b401bb:
        plStack_68 = (longlong *)CONCAT71(plStack_68._1_7_,cVar7);
        param_1 = (longlong *)*param_1;
        if (*param_1 == 0) {
LAB_140b40295:
          lVar8 = 0;
        }
        else {
          unaff_R14 = (undefined *)*param_2;
          pdb_140a8af80(*param_1 + 0x10,&UNK_143043ee1,0xb,*(undefined4 *)(unaff_R14 + 0xf8));
          if (*param_1 == 0) goto LAB_140b40295;
          pdb_140a8af80(*param_1 + 0x10,&UNK_143043eec,8,*(undefined4 *)(unaff_R14 + 0x104));
          param_2 = (undefined8 *)*param_1;
          if (param_2 == (undefined8 *)0x0) goto LAB_140b40295;
          uVar3 = *(undefined4 *)(unaff_R14 + 0xfc);
          param_2 = param_2 + 2;
          pdb_140a8af80(param_2,&UNK_143043ec8,10,uVar3);
          pdb_140a8af80(param_2,&UNK_143043ef4,0x15,uVar3);
          if (*param_1 == 0) goto LAB_140b40295;
          pdb_140a8af80(*param_1 + 0x10,&UNK_143043ea2,8,*(undefined4 *)(unaff_R14 + 0x100));
          lVar8 = *param_1;
        }
        uStack_b8 = 0;
        uStack_b0 = 0;
        uStack_a8 = 0;
        uStack_a0 = _DAT_142e37b50;
        uStack_98 = 0xbf800000;
        uStack_94 = 0x3f80000000000000;
        uStack_8c = 0;
        if (lVar8 != 0) {
          pdb_140a8b3b0(lVar8 + 0x10,&uStack_b8);
        }
        if ((char)plStack_68 == '\0') {
          return;
        }
        plVar11 = (longlong *)pdb_140e97000();
        if (((char)plVar11[0xd] != '\x01') &&
           (plVar11 = (longlong *)pdb_142d8ec20(plVar11,0), plVar11 == (longlong *)0x0)) break;
        if (*plVar11 == 0) {
          *plVar11 = -1;
          plStack_68 = plVar11;
          pdb_140e95370(plVar11 + 1,unaff_RBX);
          *plStack_68 = *plStack_68 + 1;
          return;
        }
      }
      plVar11 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_140b4033c:
      plVar11 = (longlong *)pdb_142d8ec20(plVar11,0);
    } while (plVar11 != (longlong *)0x0);
    pdb_142dc7890(&UNK_143326860);
LAB_140b4036c:
    pdb_142dc8070(&UNK_143058730,0x35);
  }
  pdb_142dc8070(&UNK_143058b08,0x44,0);
LAB_140b403af:
  pdb_142dc8070(&UNK_143058b08,0x44);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

