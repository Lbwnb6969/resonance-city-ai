// VA 0x14289f690, PDB extent 1176 bytes
// system_onboarding::hint_always_on::hint_draw_always_on::closure$3
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_always_on.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_onboarding::hint_always_on::hint_draw_always_on::closure$3
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_always_on.rs
   Extent: 1176 */

void pdb_14289f690(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 uStack_121;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  undefined **ppuStack_100;
  code *pcStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined1 **ppuStack_98;
  undefined8 uStack_90;
  longlong lStack_88;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  uVar2 = _UNK_1435ad320;
  uVar1 = _DAT_1435ad318;
  if (param_2 != 0) {
    param_2 = param_2 * 0x38;
    param_1 = param_1 + 8;
    puVar6 = (undefined1 *)0x0;
    uStack_90 = param_3;
    lStack_88 = param_4;
    do {
      lVar3 = lStack_88;
      uVar5 = *(undefined8 *)(lStack_88 + 8);
      puStack_110 = puVar6;
      uStack_f0 = pdb_140315970(&puStack_110);
      puStack_e8 = (undefined *)uVar1;
      uStack_e0 = uVar2;
      puStack_e8 = (undefined *)pdb_142b38eb0(&uStack_f0);
      uStack_f0 = uVar5;
      uVar5 = pdb_142b39020(&uStack_f0);
      pdb_14072caa0(&uStack_f0,lVar3,uVar5);
      pdb_140734630(auStack_80,&uStack_f0,&UNK_1435ad204,0x24);
      puStack_120 = &UNK_1435ad228;
      uStack_118 = 4;
      uVar5 = pdb_14072cd40(auStack_70);
      puStack_110 = (undefined1 *)pdb_14072aeb0(&puStack_120);
      uStack_f0 = pdb_140315970(&puStack_110);
      puStack_e8 = (undefined *)uVar1;
      uStack_e0 = uVar2;
      puStack_e8 = (undefined *)pdb_142b38eb0(&uStack_f0);
      uStack_f0 = uVar5;
      uVar5 = pdb_142b39020(&uStack_f0);
      cVar4 = pdb_14072c9c0(auStack_70,uVar5);
      if (cVar4 == '\0') {
        if (*_DAT_143ca8e90 != 0) {
          puStack_110 = auStack_80;
          pcStack_108 = pdb_1402ed420;
          ppuStack_100 = &puStack_120;
          pcStack_f8 = pdb_1402ed420;
          uStack_f0 = 0;
          puStack_e8 = &UNK_1435ad27a;
          uStack_e0 = 0x14;
          uStack_d8 = 0;
          puStack_d0 = &UNK_1435ad251;
          uStack_c8 = 0x28;
          uStack_c0 = 1;
          puStack_b8 = &UNK_1435ad27a;
          uStack_b0 = 0x14;
          uStack_a8 = 0xf100000001;
          puStack_a0 = &UNK_1435ad233;
          ppuStack_98 = &puStack_110;
          pdb_140f332f0(&uStack_121,&uStack_f0);
        }
        uVar5 = uStack_68;
        puStack_110 = &UNK_1435ad228;
        pcStack_108 = (code *)0x4;
        uStack_f0 = pdb_14072aeb0(&puStack_110);
        puStack_e8 = (undefined *)uVar1;
        uStack_e0 = uVar2;
        puStack_e8 = (undefined *)pdb_142b38eb0(&uStack_f0);
        uStack_f0 = uVar5;
        uVar5 = pdb_142b39020(&uStack_f0);
        pdb_14072caa0(&uStack_f0,auStack_70,uVar5);
      }
      else {
        pdb_14072cd20(&uStack_f0,auStack_70,uVar5);
      }
      pdb_14289fb30(*(undefined1 *)(param_1 + -8),&uStack_f0);
      puStack_120 = &UNK_1435ad22c;
      uStack_118 = 5;
      uVar5 = pdb_14072cd40(auStack_70);
      puStack_110 = (undefined1 *)pdb_14072aeb0(&puStack_120);
      uStack_f0 = pdb_140315970(&puStack_110);
      puStack_e8 = (undefined *)uVar1;
      uStack_e0 = uVar2;
      puStack_e8 = (undefined *)pdb_142b38eb0(&uStack_f0);
      uStack_f0 = uVar5;
      uVar5 = pdb_142b39020(&uStack_f0);
      cVar4 = pdb_14072c9c0(auStack_70,uVar5);
      if (cVar4 == '\0') {
        if (*_DAT_143ca8e90 != 0) {
          puStack_110 = auStack_80;
          pcStack_108 = pdb_1402ed420;
          ppuStack_100 = &puStack_120;
          pcStack_f8 = pdb_1402ed420;
          uStack_f0 = 0;
          puStack_e8 = &UNK_1435ad27a;
          uStack_e0 = 0x14;
          uStack_d8 = 0;
          puStack_d0 = &UNK_1435ad251;
          uStack_c8 = 0x28;
          uStack_c0 = 1;
          puStack_b8 = &UNK_1435ad27a;
          uStack_b0 = 0x14;
          uStack_a8 = 0xf100000001;
          puStack_a0 = &UNK_1435ad233;
          ppuStack_98 = &puStack_110;
          pdb_140f332f0(&uStack_121,&uStack_f0);
        }
        uVar5 = uStack_68;
        puStack_110 = &UNK_1435ad22c;
        pcStack_108 = (code *)0x5;
        uStack_f0 = pdb_14072aeb0(&puStack_110);
        puStack_e8 = (undefined *)uVar1;
        uStack_e0 = uVar2;
        puStack_e8 = (undefined *)pdb_142b38eb0(&uStack_f0);
        uStack_f0 = uVar5;
        uVar5 = pdb_142b39020(&uStack_f0);
        pdb_14072caa0(&uStack_f0,auStack_70,uVar5);
      }
      else {
        pdb_14072cd20(&uStack_f0,auStack_70,uVar5);
      }
      pdb_142b37b50(param_1,uStack_90,&uStack_f0,0,1);
      param_1 = param_1 + 0x38;
      puVar6 = puVar6 + 1;
      param_2 = param_2 + -0x38;
    } while (param_2 != 0);
  }
  return;
}

