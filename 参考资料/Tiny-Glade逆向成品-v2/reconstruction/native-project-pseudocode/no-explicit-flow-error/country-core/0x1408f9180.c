// VA 0x1408f9180, PDB extent 1502 bytes
// country_core::startup::load_glade_tod_and_weather::update_snow
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_glade_tod_and_weather.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::startup::load_glade_tod_and_weather::update_snow
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_glade_tod_and_weather.rs
   Extent: 1502 */

void pdb_1408f9180(longlong *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint *puVar14;
  ulonglong uVar15;
  uint *puStack_188;
  uint *puStack_180;
  longlong lStack_168;
  longlong lStack_158;
  longlong lStack_148;
  undefined4 uStack_13c;
  longlong lStack_138;
  longlong lStack_130;
  longlong lStack_120;
  undefined4 uStack_114;
  uint uStack_110;
  uint uStack_10c;
  byte bStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  ulonglong uStack_e0;
  longlong *plStack_d8;
  undefined8 uStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  longlong *plStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  longlong lStack_70;
  byte bStack_62;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  lVar5 = *param_1;
  lVar13 = param_1[1];
  pdb_1415239a0(&puStack_188,lVar13,lVar5,(int)param_1[2],*(undefined4 *)((longlong)param_1 + 0x14))
  ;
  lStack_b8 = lStack_168;
  lStack_90 = lStack_158;
  lStack_88 = lStack_148;
  uStack_a8 = uStack_13c;
  lStack_70 = lStack_138;
  lStack_80 = lStack_130;
  lStack_78 = lStack_120;
  lStack_c0 = *param_3;
  plStack_d8 = (longlong *)*param_2;
  uStack_d0 = *param_4;
  uVar15 = (ulonglong)uStack_110;
  uVar12 = (ulonglong)uStack_10c;
  bStack_62 = bStack_108;
  uStack_a4 = uStack_114;
  puVar14 = puStack_188;
  lStack_98 = lVar13;
  if ((bStack_108 & 1) != 0) goto LAB_1408f9400;
LAB_1408f929a:
  if ((int)uVar12 == (int)uVar15) {
    if (puVar14 == puStack_180) {
      return;
    }
    while( true ) {
      uVar15 = *(ulonglong *)(*(longlong *)(lStack_98 + 0x100) + 0x58 + (ulonglong)*puVar14 * 0xa0);
      if (uVar15 != 0) break;
      puVar14 = puVar14 + 1;
      if (puVar14 == puStack_180) {
        return;
      }
    }
    lVar9 = *(longlong *)(lStack_98 + 0x100) + (ulonglong)*puVar14 * 0xa0;
    uVar12 = (ulonglong)*(uint *)(lVar9 + 0x94);
    lVar13 = *(longlong *)(lStack_98 + 0x1a0);
    lVar11 = *(longlong *)(lVar13 + 0x18 + uVar12 * 0x48);
    lVar6 = *(longlong *)(lVar13 + 0x38 + uVar12 * 0x48);
    if ((*(ulonglong *)(lVar5 + 0x118) < *(ulonglong *)(lVar13 + 0x40 + uVar12 * 0x48)) &&
       (uVar12 = *(ulonglong *)(lVar6 + *(ulonglong *)(lVar5 + 0x118) * 8), uVar12 != 0)) {
      lStack_70 = *(longlong *)(lVar11 + 0x10 + ~uVar12 * 0x30);
    }
    else {
      lStack_70 = 0;
    }
    lVar13 = ~*(ulonglong *)(lVar6 + *(longlong *)(lVar5 + 0x110) * 8) * 0x30;
    lStack_90 = *(longlong *)(lVar11 + 0x10 + lVar13);
    lStack_88 = *(longlong *)(lVar11 + 0x28 + lVar13);
    puVar14 = puVar14 + 1;
    lVar13 = ~*(ulonglong *)(lVar6 + *(longlong *)(lVar5 + 0x120) * 8) * 0x30;
    lStack_80 = *(longlong *)(lVar11 + 0x10 + lVar13);
    lStack_78 = *(longlong *)(lVar11 + 0x28 + lVar13);
    lStack_b8 = *(longlong *)(lVar9 + 0x50);
    uVar12 = 0;
    uVar8 = 0;
  }
  else {
    uVar8 = uVar12 & 0xffffffff;
  }
  uVar8 = (ulonglong)~*(uint *)(lStack_b8 + 8 + uVar8 * 0x10);
  do {
    plVar7 = plStack_d8;
    plVar1 = (longlong *)(lStack_90 + uVar8 * 8);
    puVar2 = (undefined4 *)(lStack_88 + uVar8 * 4);
    lVar13 = uVar8 * 0x38 + lStack_70;
    puVar3 = (undefined4 *)(lStack_80 + uVar8 * 4);
    uVar12 = (ulonglong)((int)uVar12 + 1);
    fVar4 = *(float *)(lStack_c0 + 0x10);
    *(undefined4 *)(lStack_78 + uVar8 * 4) = uStack_114;
    if (fVar4 <= 0.0) {
      *puVar3 = 0;
    }
    else {
      *puVar3 = 12000;
      if (*(longlong *)(lVar13 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_14301d6f8);
      }
      uStack_e0 = uVar12;
      lStack_c8 = pdb_140e51270(*plStack_d8 + 0x10,lVar13 + 0x28);
      lVar13 = *plVar7;
      uStack_61 = 1;
      lStack_b0 = lStack_c8;
      puVar10 = (undefined8 *)pdb_140bf45b0(uStack_d0,&UNK_14331c9c0);
      if (puVar10 == (undefined8 *)0x0) {
LAB_1408f96a4:
        uStack_61 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_14301d710);
      }
      uStack_61 = 1;
      lVar11 = (**(code **)(puVar10[1] + 0x18))(*puVar10);
      if (lVar11 == 0) goto LAB_1408f96a4;
      uStack_f8 = 0x8000000000000000;
      puStack_f0 = &UNK_14301d728;
      uStack_e8 = 0x29;
      uStack_100 = 0;
      uStack_61 = 1;
      pdb_1415a9af0(lVar13 + 0x10,&lStack_c8,1,&uStack_100,lVar11,*(undefined4 *)(lStack_c0 + 0x10))
      ;
      *puVar2 = uStack_a8;
      plStack_a0 = plVar1;
      if (*plVar1 != 0) {
        pdb_14098d520(plVar1);
      }
      *plStack_a0 = lStack_b0;
      uVar12 = uStack_e0;
      uStack_114 = uStack_a4;
      bStack_108 = bStack_62;
    }
    if ((bStack_108 & 1) == 0) goto LAB_1408f929a;
LAB_1408f9400:
    if ((int)uVar12 == (int)uVar15) {
      if (puVar14 == puStack_180) {
        return;
      }
      while( true ) {
        uVar15 = *(ulonglong *)
                  (*(longlong *)(lStack_98 + 0x1a0) + 0x10 + (ulonglong)*puVar14 * 0x48);
        if (uVar15 != 0) break;
        puVar14 = puVar14 + 1;
        if (puVar14 == puStack_180) {
          return;
        }
      }
      lVar13 = *(longlong *)(lStack_98 + 0x1a0) + (ulonglong)*puVar14 * 0x48;
      lVar11 = *(longlong *)(lVar13 + 0x18);
      lVar6 = *(longlong *)(lVar13 + 0x38);
      if ((*(ulonglong *)(lVar5 + 0x118) < *(ulonglong *)(lVar13 + 0x40)) &&
         (uVar12 = *(ulonglong *)(lVar6 + *(ulonglong *)(lVar5 + 0x118) * 8), uVar12 != 0)) {
        lStack_70 = *(longlong *)(lVar11 + 0x10 + ~uVar12 * 0x30);
      }
      else {
        lStack_70 = 0;
      }
      lVar13 = ~*(ulonglong *)(lVar6 + *(longlong *)(lVar5 + 0x110) * 8) * 0x30;
      lStack_90 = *(longlong *)(lVar11 + 0x10 + lVar13);
      lStack_88 = *(longlong *)(lVar11 + 0x28 + lVar13);
      puVar14 = puVar14 + 1;
      lVar13 = ~*(ulonglong *)(lVar6 + *(longlong *)(lVar5 + 0x120) * 8) * 0x30;
      lStack_80 = *(longlong *)(lVar11 + 0x10 + lVar13);
      lStack_78 = *(longlong *)(lVar11 + 0x28 + lVar13);
      uVar12 = 0;
    }
    uVar8 = uVar12 & 0xffffffff;
  } while( true );
}

