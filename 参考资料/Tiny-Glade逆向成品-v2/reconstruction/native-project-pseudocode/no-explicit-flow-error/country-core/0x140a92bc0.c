// VA 0x140a92bc0, PDB extent 2303 bytes
// country_core::resources::session::delete_session
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::session::delete_session
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
   Extent: 2303 */

void pdb_140a92bc0(undefined8 *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  code *pcVar4;
  char cVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  byte **ppbVar10;
  byte *pbVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined4 *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  byte **ppbVar20;
  byte ***pppbVar21;
  ulonglong uVar22;
  bool bVar23;
  bool bVar24;
  ulonglong uStack_168;
  byte *pbStack_160;
  undefined8 uStack_158;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  byte **ppbStack_138;
  byte **ppbStack_130;
  byte *pbStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 **ppuStack_e0;
  char cStack_d8;
  char cStack_d7;
  undefined1 auStack_d0 [8];
  longlong alStack_c8 [2];
  byte *pbStack_b8;
  byte *pbStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  byte **ppbStack_98;
  byte **ppbStack_90;
  byte *pbStack_88;
  undefined8 uStack_80;
  byte **ppbStack_70;
  byte **ppbStack_68;
  byte **ppbStack_60;
  byte **ppbStack_58;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lVar1 = param_1[1];
  uVar2 = *(ulonglong *)*param_1;
  uVar17 = 0;
  uVar14 = uVar2 - *(ulonglong *)(lVar1 + 0x18);
  if (uVar2 < *(ulonglong *)(lVar1 + 0x18)) {
    uVar14 = uVar17;
  }
  uVar6 = uVar2 - *(ulonglong *)(lVar1 + 0x38);
  if (uVar2 < *(ulonglong *)(lVar1 + 0x38)) {
    uVar6 = uVar17;
  }
  uVar2 = *(ulonglong *)(lVar1 + 0x10);
  uVar3 = *(ulonglong *)(lVar1 + 0x30);
  bVar23 = uVar3 < uVar6;
  uVar12 = uVar3 - uVar6;
  uVar13 = uVar12;
  if (bVar23) {
    uVar13 = uVar17;
  }
  bVar24 = uVar2 < uVar14;
  uVar18 = uVar2 - uVar14;
  uVar19 = uVar18;
  if (bVar24) {
    uVar19 = uVar17;
  }
  lVar15 = *(longlong *)(lVar1 + 8);
  uVar22 = uVar13 + uVar19;
  if (!bVar24 && uVar18 != 0 || !bVar23 && uVar12 != 0) {
    uVar22 = uVar17;
  }
  lVar7 = *(longlong *)(lVar1 + 0x28);
  *(ulonglong *)*param_1 = *(longlong *)(lVar1 + 0x40) - uVar22;
  if (!bVar24 && uVar18 != 0 || !bVar23 && uVar12 != 0) {
    lVar15 = lVar15 + uVar14 * 0x18;
    if (uVar2 < uVar14) {
      lVar15 = 8;
    }
    puVar16 = (undefined4 *)0x0;
    if (uVar14 < uVar2) {
      puVar16 = (undefined4 *)(lVar15 + -0x18 + uVar19 * 0x18);
    }
    lVar7 = lVar7 + uVar6 * 0x18;
    if (uVar3 < uVar6) {
      lVar7 = 8;
    }
    puVar8 = (undefined4 *)(lVar7 + -0x18 + uVar13 * 0x18);
    if (uVar3 <= uVar6) {
      puVar8 = puVar16;
    }
    uStack_148 = *puVar8;
    uStack_144 = puVar8[1];
    uStack_140 = puVar8[2];
    uStack_13c = puVar8[3];
    puVar16 = &uStack_148;
    pdb_140a937d0(&uStack_168,puVar16);
    uStack_4a = 1;
    uVar9 = pdb_140dc67b0();
    ppbStack_98 = (byte **)0x0;
    ppbStack_90 = (byte **)0x1;
    pbStack_88 = (byte *)0x0;
    pbStack_128 = (byte *)0x60000020;
    ppbStack_138 = (byte **)&ppbStack_98;
    ppbStack_130 = (byte **)&UNK_1430451f8;
    cVar5 = pdb_140eaccb0(&uStack_148,&ppbStack_138);
    if (cVar5 != '\0') {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143045228,0x37,&uStack_4b,&UNK_1430452e8,&UNK_1430452d0);
    }
    ppbStack_58 = ppbStack_98;
    ppbStack_60 = ppbStack_90;
    pdb_140f3e9e0(&ppbStack_98,uVar9,puVar16,ppbStack_90,pbStack_88);
    if ((byte ***)ppbStack_58 != (byte ***)0x0) {
      pub_1406abac0((byte *)ppbStack_60,(ulonglong)ppbStack_58,1);
    }
    pbVar11 = pbStack_88;
    ppbVar20 = ppbStack_90;
    if ((longlong)pbStack_88 < 0) {
      uVar9 = 0;
LAB_140a92d7a:
      ppbStack_68 = ppbVar20;
      uStack_49 = 1;
      pdb_142dc7e2a(uVar9,pbVar11);
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    ppbStack_58 = ppbStack_90;
    if (pbStack_88 == (byte *)0x0) {
      ppbVar10 = (byte **)0x1;
    }
    else {
      pdb_14007ee60();
      uVar9 = 1;
      ppbVar10 = (byte **)pub_1406abab0((ulonglong)pbVar11,1);
      if (ppbVar10 == (byte **)0x0) goto LAB_140a92d7a;
      pub_142e32760(ppbVar10,ppbVar20,pbVar11);
    }
    ppbStack_60 = (byte **)pbVar11;
    ppbStack_70 = ppbVar10;
    pdb_140f4f360(&cStack_d8,ppbVar10,pbVar11);
    ppbVar20 = ppbStack_60;
    if (ppbStack_60 != (byte **)0x0) {
      ppbVar10 = ppbStack_60;
      pub_1406abac0((byte *)ppbStack_70,(ulonglong)ppbStack_60,1);
    }
    pppbVar21 = (byte ***)ppbStack_58;
    if ((cStack_d8 == '\0') && (cStack_d7 != '\0')) {
      ppbStack_68 = ppbStack_58;
      uStack_49 = 1;
      uVar9 = pdb_140dc67b0();
      ppbStack_68 = (byte **)pppbVar21;
      uStack_49 = 1;
      pdb_140eacc10(alStack_c8);
      pbStack_b0 = (byte *)0x0;
      pcStack_a8 = (code *)0x1;
      uStack_a0 = 0;
      pbStack_128 = (byte *)0x60000020;
      ppbStack_138 = &pbStack_b0;
      ppbStack_130 = (byte **)&UNK_1430451f8;
      cVar5 = pdb_140eaccb0(alStack_c8,&ppbStack_138);
      if (cVar5 != '\0') {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_143045228,0x37,&uStack_4b,&UNK_1430452e8,&UNK_1430452d0);
      }
      ppbStack_60 = (byte **)pbStack_b0;
      ppbStack_70 = (byte **)pcStack_a8;
      pdb_140f3e9e0(&ppbStack_138,uVar9,ppbVar10,pcStack_a8,uStack_a0);
      if (ppbStack_60 != (byte **)0x0) {
        pub_1406abac0((byte *)ppbStack_70,(ulonglong)ppbStack_60,1);
      }
      if ((byte ***)ppbStack_98 != (byte ***)0x0) {
        pub_1406abac0((byte *)ppbStack_58,(ulonglong)ppbStack_98,1);
      }
      pbStack_88 = pbStack_128;
      uStack_80 = uStack_120;
      ppbStack_98 = ppbStack_138;
      ppbStack_90 = ppbStack_130;
      ppbVar20 = (byte **)pbStack_128;
      pppbVar21 = (byte ***)ppbStack_130;
    }
    else if (cStack_d8 != '\0') {
      ppbStack_68 = ppbStack_58;
      uStack_49 = 1;
      pdb_1404b38e0(auStack_d0);
    }
    ppbStack_60 = (byte **)uStack_168;
    ppbStack_70 = ppbStack_98;
    pbStack_b8 = pbStack_160;
    ppbStack_58 = (byte **)pppbVar21;
    pbVar11 = (byte *)pdb_140f4f450(pbStack_160,uStack_158,pppbVar21,ppbVar20);
    pppbVar21 = (byte ***)ppbStack_58;
    if ((byte ***)ppbStack_70 != (byte ***)0x0) {
      pub_1406abac0((byte *)ppbStack_58,(ulonglong)ppbStack_70,1);
    }
    if (ppbStack_60 != (byte **)0x0) {
      pub_1406abac0(pbStack_b8,(ulonglong)ppbStack_60,1);
    }
    if (pbVar11 != (byte *)0x0) {
      alStack_c8[0] = (longlong)pbVar11;
      if (*_DAT_143ca8e90 != 0) {
        pbStack_b0 = (byte *)alStack_c8;
        pcStack_a8 = pdb_140f56800;
        ppbStack_138 = (byte **)0x0;
        ppbStack_130 = (byte **)&UNK_14304514a;
        pbStack_128 = (byte *)0x20;
        uStack_120 = 0;
        puStack_118 = &UNK_1430450e0;
        uStack_110 = 0x2c;
        uStack_108 = 1;
        puStack_100 = &UNK_14304514a;
        uStack_f8 = 0x20;
        uStack_f0 = 0x1fe00000001;
        puStack_e8 = &UNK_143045131;
        ppuStack_e0 = (undefined8 **)&pbStack_b0;
        pdb_140f332f0(&uStack_4b,&ppbStack_138);
        pppbVar21 = (byte ***)ppbStack_58;
      }
      uStack_49 = 0;
      ppbStack_68 = (byte **)pppbVar21;
      pdb_1404b38e0(alStack_c8);
    }
  }
  return;
}

