// VA 0x14062ea90, PDB extent 1319 bytes
// tiny_glade::gui::gui_tod_editor::selected_entry_inspector
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_tod_editor.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::gui::gui_tod_editor::selected_entry_inspector
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_tod_editor.rs
   Extent: 1319 */

void pdb_14062ea90(undefined8 param_1,int *param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint uVar6;
  longlong lVar7;
  byte *pbVar8;
  uint uVar9;
  float fVar10;
  undefined4 *puStack_138;
  undefined8 uStack_130;
  longlong *plStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  uint uStack_d8;
  uint uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined2 uStack_c8;
  undefined1 uStack_c6;
  undefined1 uStack_c3;
  uint *puStack_b8;
  code *pcStack_b0;
  uint *puStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  uint uStack_64;
  undefined8 uStack_60;
  uint uStack_58;
  uint uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint uStack_44;
  uint uStack_40;
  undefined1 uStack_3a;
  char acStack_39 [9];
  
  acStack_39[1] = -2;
  acStack_39[2] = -1;
  acStack_39[3] = -1;
  acStack_39[4] = -1;
  acStack_39[5] = -1;
  acStack_39[6] = -1;
  acStack_39[7] = -1;
  acStack_39[8] = -1;
  pdb_1404372d0(&puStack_b8,&UNK_142f899c0,0xc);
  if ((pcStack_a0 != (code *)0x6) && (4 < (uint)pcStack_a0)) {
    LOCK();
    *uStack_98 = *uStack_98 + -1;
    UNLOCK();
    if (*uStack_98 == 0) {
      pdb_1406ed6a0(&uStack_98);
    }
  }
  pcStack_a0 = (code *)0x4;
  puStack_138 = puStack_b8;
  uStack_130 = pcStack_b0;
  uStack_118 = (undefined4)uStack_98;
  uStack_114 = uStack_98._4_4_;
  uStack_110 = (undefined4)uStack_90;
  uStack_10c = uStack_90._4_4_;
  uStack_108 = (undefined4)uStack_88;
  uStack_104 = uStack_88._4_4_;
  uStack_100 = (undefined4)uStack_80;
  uStack_fc = uStack_80._4_4_;
  uStack_f8 = uStack_78;
  uStack_f4 = uStack_74;
  uStack_f0 = uStack_70;
  uStack_ec = uStack_6c;
  uStack_e8._4_4_ = uStack_64;
  uStack_e0 = uStack_60;
  uStack_d8 = uStack_58;
  uStack_d4 = uStack_54;
  uStack_d0 = uStack_50;
  uStack_cc = uStack_4c;
  plStack_128 = (longlong *)puStack_a8;
  uStack_120 = 4;
  uStack_c8 = 0x200;
  uStack_c6 = 2;
  uStack_c3 = 2;
  pdb_140d7b910(&puStack_b8,&puStack_138,param_1);
  LOCK();
  *(longlong *)puStack_a8 = *(longlong *)puStack_a8 + -1;
  UNLOCK();
  if (*(longlong *)puStack_a8 == 0) {
    pdb_140d71bf0(&puStack_a8);
  }
  puStack_b8 = (uint *)(ulonglong)_DAT_142e37900;
  pcStack_b0 = (code *)CONCAT71(pcStack_b0._1_7_,2);
  pdb_140d1bd90(&puStack_138,&puStack_b8,param_1);
  LOCK();
  *plStack_128 = *plStack_128 + -1;
  UNLOCK();
  if (*plStack_128 == 0) {
    pdb_140d71bf0(&plStack_128);
  }
  if (*param_2 == 1) {
    lVar3 = *(longlong *)(param_3 + 8);
    uVar4 = *(ulonglong *)(param_3 + 0x10);
    lVar7 = 0;
    do {
      if (uVar4 * 0x60 == lVar7) {
        param_2[0] = 0;
        param_2[1] = 0;
        return;
      }
      lVar1 = lVar7 + 0x60;
      plVar2 = (longlong *)(lVar3 + 0x50 + lVar7);
      lVar7 = lVar1;
    } while (*plVar2 != *(longlong *)(param_2 + 2));
    acStack_39[0] = '\0';
    fVar10 = (float)pub_142e32a70(*(float *)(lVar3 + -8 + lVar1) * _DAT_142f57bc4 + _DAT_142f57bc8);
    fVar10 = (float)pub_142e32b00(fVar10 * _DAT_142f3e554);
    uVar9 = 0;
    if (0.0 <= fVar10) {
      uVar9 = (uint)(longlong)fVar10;
    }
    uVar6 = 0xffffffff;
    if (fVar10 <= _DAT_142e46a48) {
      uVar6 = uVar9;
    }
    uStack_40 = (uVar6 % 0x5a0) / 0x3c;
    uStack_44 = (uVar6 % 0x5a0) % 0x3c;
    puStack_b8 = &uStack_40;
    pcStack_b0 = pdb_140f71a50;
    puStack_a8 = &uStack_44;
    pcStack_a0 = pdb_140f71a50;
    pdb_140f60760(&uStack_108,&UNK_142f89864,&puStack_b8);
    uStack_d8 = uStack_d8 & 0xffffff00;
    uStack_d4 = uStack_d4 & 0xff;
    uStack_d0 = 0;
    puStack_138 = (undefined4 *)0x3;
    uStack_120 = 6;
    uStack_f0 = 0;
    uStack_e8 = (ulonglong)uStack_e8._4_4_ << 0x20;
    uStack_e0 = 0;
    uStack_c8 = 0x200;
    uStack_c6 = 2;
    uStack_c3 = 2;
    pdb_140d7b910(&puStack_b8,&puStack_138,param_1);
    puVar5 = puStack_a8;
    LOCK();
    *(longlong *)puStack_a8 = *(longlong *)puStack_a8 + -1;
    UNLOCK();
    if (*(longlong *)puVar5 == 0) {
      pdb_140d71bf0(&puStack_a8);
    }
    puStack_138 = (undefined4 *)0x452821e638d01376;
    uStack_130 = 0xbe5466cf34e90c6e;
    plStack_128 = (longlong *)0xc0ac29b7c97c50de;
    uStack_120 = 0x3f84d5b5b5470913;
    lVar7 = pdb_140572df0(&puStack_138,&UNK_142f899cc,0x1a);
    uStack_98 = (longlong *)(lVar7 + (ulonglong)(lVar7 == 0));
    uStack_88 = 0;
    uStack_80 = 0;
    puStack_b8 = (uint *)0x1;
    pcStack_b0 = (code *)0x2;
    puStack_a8 = (uint *)((ulonglong)puStack_a8 & 0xffffffff00000000);
    pcStack_a0 = (code *)((ulonglong)pcStack_a0 & 0xffffffff00000000);
    uStack_90 = _DAT_142e3ec80;
    uStack_70 = 1;
    uStack_6c = (undefined4)_DAT_142f89690;
    uStack_68 = (undefined4)((ulonglong)_DAT_142f89690 >> 0x20);
    pdb_14007ee60();
    pbVar8 = pub_1406abab0(0x60,8);
    if (pbVar8 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x60);
    }
    *(char **)pbVar8 = acStack_39;
    *(longlong *)(pbVar8 + 8) = lVar3 + lVar1 + -8;
    *(longlong *)(pbVar8 + 0x10) = lVar3 + -0x60 + lVar1;
    *(longlong *)(pbVar8 + 0x18) = lVar3 + -0x54 + lVar1;
    *(longlong *)(pbVar8 + 0x20) = lVar3 + -0x48 + lVar1;
    *(longlong *)(pbVar8 + 0x28) = lVar3 + -0x3c + lVar1;
    *(longlong *)(pbVar8 + 0x30) = lVar3 + -0x30 + lVar1;
    *(longlong *)(pbVar8 + 0x38) = lVar3 + -0x2c + lVar1;
    *(longlong *)(pbVar8 + 0x40) = lVar3 + -0x28 + lVar1;
    *(longlong *)(pbVar8 + 0x48) = lVar3 + -0x24 + lVar1;
    *(longlong *)(pbVar8 + 0x50) = lVar3 + -0x20 + lVar1;
    *(longlong *)(pbVar8 + 0x58) = lVar3 + -0x14 + lVar1;
    pdb_1405729d0(&puStack_138,&puStack_b8,param_1,pbVar8,&UNK_142f6a918,pbVar8);
    LOCK();
    *plStack_128 = *plStack_128 + -1;
    UNLOCK();
    if (*plStack_128 == 0) {
      pdb_140d71bf0(&plStack_128);
    }
    if ((acStack_39[0] != '\0') && (puStack_138 = (undefined4 *)&uStack_3a, 1 < uVar4)) {
      if (uVar4 < 0x15) {
        pdb_1400e1980(lVar3,uVar4,1,&puStack_138);
      }
      else {
        pdb_140224b00(lVar3,uVar4,&puStack_138);
      }
    }
  }
  else {
    pdb_140572d40(&puStack_138,&UNK_142f899e6,0x3a);
    uStack_c8 = 0x200;
    uStack_c6 = 2;
    uStack_c3 = 2;
    pdb_140d7b910(&puStack_b8,&puStack_138,param_1);
    LOCK();
    *(longlong *)puStack_a8 = *(longlong *)puStack_a8 + -1;
    UNLOCK();
    if (*(longlong *)puStack_a8 == 0) {
      pdb_140d71bf0(&puStack_a8);
    }
  }
  return;
}

