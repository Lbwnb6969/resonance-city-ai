// VA 0x140a441b0, PDB extent 1500 bytes
// country_core::resources::steam::SteamInput::get_action_origin_glyphs
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/steam.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::steam::SteamInput::get_action_origin_glyphs
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/steam.rs
   Extent: 1500 */

ulonglong * pdb_140a441b0(ulonglong *param_1,char *param_2,undefined8 *param_3,ulonglong param_4)

{
  byte *pbVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  uint uVar8;
  undefined8 uVar9;
  byte *pbVar10;
  longlong lVar11;
  ulonglong uVar12;
  char *pcVar13;
  bool bVar14;
  byte *pbStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  byte *pbStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  ulonglong *puStack_98;
  byte *pbStack_90;
  longlong *plStack_88;
  undefined8 uStack_80;
  ulonglong uStack_78;
  byte *pbStack_70;
  ulonglong uStack_68;
  byte *pbStack_60;
  ulonglong uStack_58;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  if (*param_2 == '\0') {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 0x8000000000000000;
    return param_1;
  }
  uVar3 = *(undefined8 *)(param_2 + 8);
  uVar9 = pub_142e320b0();
  plVar4 = (longlong *)*param_3;
  LOCK();
  lVar11 = *plVar4;
  *plVar4 = *plVar4 + 1;
  UNLOCK();
  if (*plVar4 == 0 || SCARRY8(lVar11,1) != *plVar4 < 0) goto LAB_140a445a0;
  uVar12 = param_4 & 0xffff;
  bVar14 = (char)uVar12 == '\0';
  plStack_88 = plVar4;
  uStack_80 = uVar9;
  if ((char)uVar12 == '\x02') {
    if (*(int *)(param_2 + 0x110) != 1) goto LAB_140a442d9;
    pcVar13 = param_2 + 0x118;
    param_2 = pcVar13 + *(longlong *)(&UNK_14303c448 + (uVar12 >> 8) * 8);
    bVar14 = (short)(uVar12 >> 8) == 9;
  }
  else {
    if (*(int *)(param_2 + 0x10) != 1) {
LAB_140a442d9:
      *(undefined1 *)(param_1 + 1) = 1;
      *param_1 = 0x8000000000000000;
      LOCK();
      *plVar4 = *plVar4 + -1;
      lVar11 = *plVar4;
      UNLOCK();
joined_r0x000140a442ee:
      if (lVar11 == 0) {
        pdb_140cb1c10(&plStack_88);
      }
      return param_1;
    }
    pcVar13 = param_2 + 0x18;
    param_2 = param_2 + (ulonglong)((uint)(uVar12 >> 8) & 0x1f) * 8 +
                        (ulonglong)(((uint)param_4 & 1) << 5) + 0x20;
  }
  uVar5 = *(undefined8 *)pcVar13;
  uVar6 = *(undefined8 *)param_2;
  pdb_14007ee60();
  pbVar10 = pub_1406abab0(0x20,4);
  if (bVar14) {
    if (pbVar10 == (byte *)0x0) {
      pdb_142dc7e2a(4,0x20);
      goto LAB_140a445a0;
    }
    uVar8 = pub_142e32100(uVar9,uVar3,uVar5,uVar6,pbVar10);
  }
  else {
    if (pbVar10 == (byte *)0x0) {
      pdb_142dc7e2a(4,0x20);
      goto LAB_140a445a0;
    }
    uVar8 = pub_142e32110(uVar9,uVar3,uVar5,uVar6,pbVar10);
  }
  uVar12 = (ulonglong)uVar8;
  puStack_98 = param_1;
  pbStack_90 = pbVar10;
  if (uVar8 == 0) {
    pbStack_70 = (byte *)0x8;
    uStack_78 = 0;
  }
  else {
    pdb_14007ee60();
    pbStack_70 = pub_1406abab0(uVar12 << 5,8);
    uStack_78 = uVar12;
    if (pbStack_70 == (byte *)0x0) {
      uStack_4a = 1;
      pdb_142dc7e2a(8,uVar12 << 5);
LAB_140a445a0:
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
  }
  uStack_68 = 0;
  pbVar1 = pbVar10 + uVar12 * 4;
LAB_140a443e0:
  do {
    if (pbVar10 == pbVar1) break;
    iVar2 = *(int *)pbVar10;
    pbVar10 = pbVar10 + 4;
    if (iVar2 != 0) {
      pdb_1414d9610(&iStack_f0,&plStack_88);
      uStack_58 = CONCAT44(uStack_ec,iStack_f0);
      uVar3 = CONCAT44(uStack_dc,uStack_e0);
      uStack_49 = 1;
      pbStack_60 = pbStack_e8;
      pdb_140f4f620(&iStack_f0,pbStack_e8,uVar3);
      uVar12 = uStack_68;
      if (iStack_f0 != 2) {
        pbStack_140 = pbStack_e8;
        uStack_138 = uStack_e0;
        uStack_134 = uStack_dc;
        uStack_130 = uStack_d8;
        uStack_12c = uStack_d4;
        uStack_128 = uStack_d0;
        uStack_124 = uStack_cc;
        uStack_120 = uStack_c8;
        uStack_11c = uStack_c4;
        uStack_118 = uStack_c0;
        uStack_114 = uStack_bc;
        uStack_110 = uStack_b8;
        uStack_10c = uStack_b4;
        uStack_f8 = uStack_a0;
        uStack_108 = uStack_b0;
        uStack_104 = uStack_ac;
        uStack_100 = uStack_a8;
        uStack_fc = uStack_a4;
        if (CONCAT44(uStack_ec,iStack_f0) != 2) {
          if (uStack_68 == uStack_78) {
            pdb_142d8a600(&uStack_78);
          }
          lVar11 = uVar12 * 0x20;
          *(ulonglong *)(pbStack_70 + lVar11) = uStack_58;
          *(byte **)(pbStack_70 + lVar11 + 8) = pbStack_60;
          *(undefined8 *)(pbStack_70 + lVar11 + 0x10) = uVar3;
          pbStack_70[lVar11 + 0x18] = 1;
          uStack_68 = uVar12 + 1;
          goto LAB_140a443e0;
        }
      }
      pbStack_140 = pbStack_e8;
      uStack_49 = 1;
      pdb_1404b38e0(&pbStack_140);
      if (uStack_58 != 0) {
        pub_1406abac0(pbStack_60,uStack_58,1);
      }
    }
  } while( true );
  pub_1406abac0(pbStack_90,0x20,4);
  param_1 = puStack_98;
  if (uStack_68 == 0) {
    *(undefined1 *)(puStack_98 + 1) = 2;
    *puStack_98 = 0x8000000000000000;
    if (uStack_78 != 0) {
      pub_1406abac0(pbStack_70,uStack_78 << 5,8);
    }
  }
  else {
    puStack_98[2] = uStack_68;
    *puStack_98 = uStack_78;
    puStack_98[1] = (ulonglong)pbStack_70;
  }
  LOCK();
  *plStack_88 = *plStack_88 + -1;
  lVar11 = *plStack_88;
  UNLOCK();
  goto joined_r0x000140a442ee;
}

