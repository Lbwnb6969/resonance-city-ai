// VA 0x140481450, PDB extent 1076 bytes
// tiny_glade::winit_setup::DesktopModes::ensure
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/winit_setup.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::winit_setup::DesktopModes::ensure
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/winit_setup.rs
   Extent: 1076 */

undefined8 * pdb_140481450(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double dVar13;
  double dVar14;
  char cStack_228;
  undefined4 uStack_227;
  undefined4 uStack_223;
  undefined4 uStack_21f;
  undefined4 uStack_21b;
  undefined7 uStack_217;
  byte abStack_210 [4];
  uint uStack_20c;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined3 uStack_1ec;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  int iStack_1b0;
  uint uStack_1ac;
  int iStack_1a8;
  int iStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined2 uStack_174;
  undefined2 uStack_172;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined8 uStack_e4;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulonglong *puStack_90;
  uint *puStack_88;
  ulonglong uStack_68;
  longlong lStack_60;
  uint uStack_54;
  int iStack_50;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lVar9 = param_2[1];
  lVar10 = param_2[2];
  lVar4 = *param_3;
  lVar8 = lVar10 * 0x20;
  lVar7 = 0;
  while (lVar8 != lVar7) {
    lVar1 = lVar7 + 0x20;
    plVar3 = (longlong *)(lVar9 + lVar7);
    lVar7 = lVar1;
    if (*plVar3 == lVar4) {
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(lVar9 + -8 + lVar1);
      puVar2 = (undefined8 *)(lVar9 + -0x18 + lVar1);
      uVar5 = puVar2[1];
      *param_1 = *puVar2;
      param_1[1] = uVar5;
      return param_1;
    }
  }
  pdb_140747860(&uStack_1b8,lVar4);
  if ((char)uStack_1b8 == '\0') {
    dVar13 = 0.0;
    if (0.0 <= (double)(uint)(iStack_1a8 - iStack_1b0)) {
      dVar13 = (double)(uint)(iStack_1a8 - iStack_1b0);
    }
    uVar11 = SUB84(_DAT_142e33020,0);
    uVar12 = (undefined4)((ulonglong)_DAT_142e33020 >> 0x20);
    dVar14 = _DAT_142e33020;
    if (dVar13 <= _DAT_142e33020) {
      dVar14 = dVar13;
    }
    dVar13 = 0.0;
    if (0.0 <= (double)(iStack_1a4 - uStack_1ac)) {
      dVar13 = (double)(iStack_1a4 - uStack_1ac);
    }
    if (dVar13 <= _DAT_142e33020) {
      uVar11 = SUB84(dVar13,0);
      uVar12 = (undefined4)((ulonglong)dVar13 >> 0x20);
    }
    uStack_68 = (longlong)dVar14 & 0xffffffffU | (longlong)(double)CONCAT44(uVar12,uVar11) << 0x20;
  }
  else {
    uStack_d0 = CONCAT44(uStack_1ac,iStack_1b0);
    uStack_d8 = CONCAT44(uStack_d8._4_4_,1);
    pdb_1404b38e0(&uStack_d0);
    uStack_68 = 0;
  }
  pdb_140747860(&uStack_1b8,lVar4);
  if ((char)uStack_1b8 == '\0') {
    uStack_98 = CONCAT44(uStack_170,CONCAT22(uStack_172,uStack_174));
    uStack_d8 = CONCAT44(iStack_1b0,uStack_1b4);
    uStack_d0 = CONCAT44(iStack_1a8,uStack_1ac);
    uStack_c8 = CONCAT44(uStack_1a0,iStack_1a4);
    uStack_c0 = CONCAT44(uStack_198,uStack_19c);
    uStack_a8 = CONCAT44(uStack_180,uStack_184);
    uStack_a0 = CONCAT44(uStack_178,uStack_17c);
    uStack_b8 = uStack_194;
    uStack_b4 = (undefined4)uStack_190;
    uStack_b0 = uStack_190._4_4_;
    uStack_ac = uStack_188;
    uStack_178 = 0;
    uStack_172 = 0;
    uStack_170 = 0;
    uStack_16c = 0;
    uStack_e8 = 0;
    uStack_e4 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_ec = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    uStack_154 = 0;
    uStack_150 = 0;
    uStack_14c = 0;
    uStack_168 = 0;
    uStack_164 = 0;
    uStack_160 = 0;
    uStack_15c = 0;
    uStack_188 = 0;
    uStack_184 = 0;
    uStack_180 = 0;
    uStack_17c = 0;
    uStack_198 = 0;
    uStack_194 = 0;
    uStack_190 = 0;
    iStack_1a8 = 0;
    iStack_1a4 = 0;
    uStack_1a0 = 0;
    uStack_19c = 0;
    uStack_1b8 = 0;
    uStack_1b4 = 0;
    iStack_1b0 = 0;
    uStack_1ac = 0;
    uStack_174 = 0xdc;
    iVar6 = EnumDisplaySettingsExW(&uStack_b0,0xffffffff,&uStack_1b8,0);
    uStack_54 = (uint)(iVar6 != 0);
    iStack_50 = (int)uStack_100 * 1000;
  }
  else {
    iStack_50 = pdb_1404b38e0();
    uStack_54 = 0;
  }
  pdb_140484ce0(&uStack_d8,lVar4);
  puStack_90 = &uStack_68;
  puStack_88 = &uStack_54;
  uStack_49 = 1;
  pdb_140566dd0(&uStack_1b8,&uStack_d8,&puStack_90);
  if ((char)uStack_1b8 == '\0') {
    lStack_60 = lVar10;
    pdb_14057f2e0(&uStack_1b8,&uStack_d8);
    lVar7 = CONCAT44(uStack_1b4,uStack_1b8);
    lVar10 = lStack_60;
    if (lVar7 != 0) {
      do {
        pub_1406abac0(*(byte **)(lVar7 + CONCAT44(iStack_1a4,iStack_1a8) * 0x20),0xdc,4);
        pdb_14057f2e0(&uStack_1b8,&uStack_d8);
        lVar7 = CONCAT44(uStack_1b4,uStack_1b8);
        lVar10 = lStack_60;
      } while (lVar7 != 0);
    }
LAB_1404817e7:
    *(undefined4 *)param_1 = 0;
    if (lVar10 != *param_2) goto LAB_1404817fe;
  }
  else {
    abStack_210[0] = uStack_1ac == puStack_88[1] & (byte)*puStack_88;
    uStack_208 = CONCAT44(iStack_1b0,uStack_1b4);
    uStack_200 = CONCAT44(iStack_1a8,uStack_1ac);
    uStack_20c = uStack_1ac;
    uStack_168 = SUB84(puStack_88,0);
    uStack_164 = (undefined4)((ulonglong)puStack_88 >> 0x20);
    uStack_178 = (undefined4)uStack_98;
    uStack_174 = (undefined2)((ulonglong)uStack_98 >> 0x20);
    uStack_172 = (undefined2)((ulonglong)uStack_98 >> 0x30);
    uStack_170 = SUB84(puStack_90,0);
    uStack_16c = (undefined4)((ulonglong)puStack_90 >> 0x20);
    uStack_188 = (undefined4)uStack_a8;
    uStack_184 = (undefined4)((ulonglong)uStack_a8 >> 0x20);
    uStack_180 = (undefined4)uStack_a0;
    uStack_17c = (undefined4)((ulonglong)uStack_a0 >> 0x20);
    uStack_198 = uStack_b8;
    uStack_194 = uStack_b4;
    uStack_190 = CONCAT44(uStack_ac,uStack_b0);
    iStack_1a8 = (int)uStack_c8;
    iStack_1a4 = (int)((ulonglong)uStack_c8 >> 0x20);
    uStack_1a0 = (undefined4)uStack_c0;
    uStack_19c = (undefined4)((ulonglong)uStack_c0 >> 0x20);
    uStack_1b8 = (undefined4)uStack_d8;
    uStack_1b4 = uStack_d8._4_4_;
    iStack_1b0 = (int)uStack_d0;
    uStack_1ac = uStack_d0._4_4_;
    uStack_49 = 0;
    pdb_140566650(&cStack_228,&uStack_1b8,abStack_210);
    uStack_1f8 = uStack_227;
    uStack_1f4 = uStack_223;
    uStack_1f0 = uStack_21f;
    uStack_1ec = (undefined3)uStack_21b;
    if (cStack_228 == '\x02') goto LAB_1404817e7;
    uStack_1d8 = uStack_227;
    uStack_1d4 = uStack_223;
    uVar11 = uStack_1d4;
    uStack_1d0 = uStack_21f;
    uStack_1cc = uStack_21b;
    uStack_1d4._3_1_ = (undefined1)((uint)uStack_223 >> 0x18);
    *(ulonglong *)((longlong)param_1 + 4) =
         CONCAT35(uStack_1ec,CONCAT41(uStack_21f,uStack_1d4._3_1_));
    *(ulonglong *)((longlong)param_1 + 0xc) = CONCAT71(uStack_217,uStack_21b._3_1_);
    *(undefined4 *)param_1 = 1;
    uStack_1d4 = uVar11;
    if (lVar10 != *param_2) goto LAB_1404817fe;
  }
  pdb_142d7e6e0(param_2);
  lVar9 = param_2[1];
LAB_1404817fe:
  *(longlong *)(lVar9 + lVar8) = lVar4;
  uVar5 = param_1[1];
  puVar2 = (undefined8 *)(lVar9 + 8 + lVar8);
  *puVar2 = *param_1;
  puVar2[1] = uVar5;
  *(undefined4 *)(lVar9 + 0x18 + lVar8) = *(undefined4 *)(param_1 + 2);
  param_2[2] = lVar10 + 1;
  return param_1;
}

