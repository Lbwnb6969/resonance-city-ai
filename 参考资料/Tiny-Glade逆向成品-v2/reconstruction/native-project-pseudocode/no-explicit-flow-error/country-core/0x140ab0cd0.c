// VA 0x140ab0cd0, PDB extent 1477 bytes
// country_core::utils::debug_viz::impl$1::emit::closure$0<country_core::utils::debug_viz::impl$1::show::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/debug_viz.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::utils::debug_viz::impl$1::emit::closure$0<country_core::utils::debug_viz::impl$1::show::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/debug_viz.rs
   Extent: 1477 */

undefined8 *
pdb_140ab0cd0(undefined8 *param_1,byte *param_2,undefined8 param_3,byte *param_4,ulonglong param_5)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  code *pcVar5;
  uint uVar6;
  undefined *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined1 uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  byte *pbVar14;
  longlong *plVar15;
  undefined1 auStack_1d8 [152];
  undefined8 auStack_140 [5];
  undefined8 uStack_118;
  ulonglong uStack_110;
  byte *pbStack_108;
  ulonglong uStack_100;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined2 uStack_b0;
  ulonglong uStack_ac;
  undefined8 uStack_a4;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined2 uStack_94;
  undefined1 uStack_92;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_68;
  byte *pbStack_60;
  longlong *plStack_58;
  longlong *plStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_68 = param_3;
  uVar6 = pdb_140e94b40();
  uVar11 = (ulonglong)uVar6;
  if ((char)uVar6 == '\0') {
    uStack_88 = 0;
    uVar10 = 0;
    pbVar14 = param_4;
    goto LAB_140ab0e5d;
  }
  puVar7 = &UNK_14304a03a;
  plVar15 = (longlong *)&UNK_14304a010;
  do {
    pbVar14 = puVar7 + -1;
    uVar6 = (uint)(char)*pbVar14;
    if ((int)uVar6 < 0) {
      bVar2 = puVar7[-2];
      if ((char)bVar2 < -0x40) {
        bVar3 = puVar7[-3];
        if ((char)bVar3 < -0x40) {
          pbVar1 = puVar7 + -4;
          puVar7 = puVar7 + -4;
          uVar6 = bVar3 & 0x3f | (*pbVar1 & 7) << 6;
        }
        else {
          puVar7 = puVar7 + -3;
          uVar6 = bVar3 & 0xf;
        }
        uVar6 = bVar2 & 0x3f | uVar6 << 6;
      }
      else {
        puVar7 = puVar7 + -2;
        uVar6 = bVar2 & 0x1f;
      }
      uVar6 = (uint)(*pbVar14 & 0x3f) | uVar6 << 6;
      if (uVar6 != 0x5c) goto LAB_140ab0da9;
LAB_140ab0dc5:
      if ((undefined *)0x2a < puVar7 + -0x14304a00f) goto LAB_140ab10d1;
      puVar13 = (undefined1 *)(0x29 - (longlong)(puVar7 + -0x14304a010));
      plVar15 = (longlong *)(puVar7 + 1);
      goto LAB_140ab0de8;
    }
    puVar7 = puVar7 + -1;
    if (uVar6 == 0x5c) goto LAB_140ab0dc5;
LAB_140ab0da9:
    if (uVar6 == 0x2f) goto LAB_140ab0dc5;
  } while (puVar7 != &UNK_14304a010);
  puVar13 = (undefined1 *)0x2a;
LAB_140ab0de8:
  plVar8 = (longlong *)pdb_140e97000();
  pbVar14 = param_2;
  if ((char)plVar8[0xd] != '\x01') goto LAB_140ab109d;
  do {
    uVar10 = (undefined1)uVar11;
    pbVar14 = param_2;
    if (*plVar8 == 0) {
      *plVar8 = -1;
      plStack_58 = plVar8;
      puStack_80 = (undefined *)pdb_140e94f10(plVar8 + 1,&UNK_14304a03a,0xe,plVar15,puVar13,1,0);
      *plStack_58 = *plStack_58 + 1;
      uStack_88 = 1;
      pbVar14 = param_4;
      plStack_58 = (longlong *)puStack_80;
LAB_140ab0e5d:
      uVar11 = *(ulonglong *)(param_2 + 8);
      plStack_50 = (longlong *)CONCAT71(plStack_50._1_7_,uVar10);
      if ((longlong)uVar11 < 0) {
        uVar12 = 0;
LAB_140ab0e75:
        pdb_142dc7e2a(uVar12,uVar11);
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      if (uVar11 == 0) {
        param_4 = (byte *)0x1;
      }
      else {
        uVar4 = *(undefined8 *)param_2;
        pdb_14007ee60();
        uVar12 = 1;
        param_4 = pub_1406abab0(uVar11,1);
        if (param_4 == (byte *)0x0) goto LAB_140ab0e75;
        pub_142e32760(param_4,uVar4,uVar11);
      }
      uStack_9c = *(undefined4 *)(param_2 + 0x18);
      uStack_a4 = *(undefined8 *)(param_2 + 0x10);
      uStack_d4 = *(undefined4 *)(param_2 + 0x1c);
      uStack_118 = 0x8000000000000000;
      uStack_e8 = _DAT_142e4e650;
      uStack_e4 = _UNK_142e4e654;
      uStack_e0 = _UNK_142e4e658;
      uStack_dc = _UNK_142e4e65c;
      uStack_d8 = 1;
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_c0 = 2;
      uStack_b8 = 1;
      uStack_b0 = 0x100;
      uStack_ac = (ulonglong)_DAT_142e36f28;
      uStack_98 = 0x3f800000;
      uStack_94 = 0;
      uStack_92 = 0;
      if (param_2[0x24] == 0) {
        uStack_bc = *(undefined4 *)(param_2 + 0x20);
        uStack_c0 = 0;
      }
      uStack_110 = uVar11;
      pbStack_108 = param_4;
      uStack_100 = uVar11;
      pdb_14007ee60();
      pbStack_60 = pub_1406abab0(8,8);
      plVar15 = plStack_58;
      if (pbStack_60 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,8);
      }
      puVar13 = auStack_1d8;
      pub_142e32760(puVar13,&uStack_118,0x90);
      pdb_1409bba50(auStack_140,puVar13,uStack_68,pbVar14,param_5);
      *(undefined8 *)pbStack_60 = auStack_140[0];
      *param_1 = 1;
      param_1[1] = pbStack_60;
      param_1[2] = 1;
      if ((char)plStack_50 == '\0') {
        return param_1;
      }
      plVar8 = (longlong *)pdb_140e97000();
      if (((char)plVar8[0xd] != '\x01') &&
         (plVar8 = (longlong *)pdb_142d8ec20(plVar8,0), plVar8 == (longlong *)0x0)) break;
      uVar11 = param_5;
      if (*plVar8 == 0) {
        *plVar8 = -1;
        plStack_50 = plVar8;
        pdb_140e95370(plVar8 + 1,plVar15);
        *plStack_50 = *plStack_50 + 1;
        return param_1;
      }
    }
    plVar8 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_140ab109d:
    plVar8 = (longlong *)pdb_142d8ec20(plVar8,0);
    param_2 = pbVar14;
  } while (plVar8 != (longlong *)0x0);
  pdb_142dc7890(&UNK_143326860);
LAB_140ab10d1:
  pdb_142dc8070(&UNK_14304a010,0x2a);
  pcVar5 = (code *)swi(3);
  puVar9 = (undefined8 *)(*pcVar5)();
  return puVar9;
}

