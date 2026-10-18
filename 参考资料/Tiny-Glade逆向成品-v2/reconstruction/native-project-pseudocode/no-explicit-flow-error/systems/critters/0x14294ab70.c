// VA 0x14294ab70, PDB extent 1852 bytes
// system_critters::duck::update_duck_ripples
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/duck.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_critters::duck::update_duck_ripples
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/duck.rs
   Extent: 1852 */

void pdb_14294ab70(longlong *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4)

{
  longlong lVar1;
  float fVar2;
  longlong lVar3;
  float fVar4;
  longlong lVar5;
  uint *puVar6;
  uint *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  byte *arg0;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  float fStack_650;
  float fStack_64c;
  undefined1 **ppuStack_648;
  undefined8 uStack_640;
  int iStack_638;
  undefined4 uStack_634;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  undefined4 uStack_628;
  undefined4 uStack_624;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  undefined4 uStack_618;
  undefined4 uStack_614;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  undefined4 uStack_608;
  undefined4 uStack_604;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  undefined4 uStack_5f8;
  undefined4 uStack_5f4;
  undefined4 uStack_5f0;
  undefined4 uStack_5ec;
  undefined8 *puStack_5e8;
  undefined8 *puStack_5e0;
  ulonglong uStack_5d8;
  ulonglong uStack_5d0;
  undefined8 uStack_5c8;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  undefined4 uStack_5b8;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined4 uStack_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  undefined4 uStack_598;
  undefined4 uStack_594;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  longlong lStack_588;
  undefined1 *puStack_580;
  float *pfStack_578;
  float *pfStack_570;
  longlong lStack_568;
  longlong lStack_560;
  longlong lStack_558;
  longlong lStack_550;
  uint *puStack_548;
  uint *puStack_540;
  longlong lStack_538;
  ulonglong uStack_530;
  longlong lStack_528;
  ulonglong uStack_520;
  longlong lStack_518;
  longlong lStack_510;
  undefined8 uStack_508;
  char cStack_500;
  undefined8 auStack_2f8 [32];
  undefined8 auStack_1f8 [32];
  undefined4 auStack_f8 [32];
  uint uStack_78;
  
  fVar2 = *(float *)(*param_4 + 0x28);
  puStack_5e8 = param_3;
  puStack_5e0 = param_2;
  fStack_650 = (float)pub_142e32a20(_DAT_142f61034 * fVar2);
  fVar4 = _DAT_142e36f28;
  fStack_650 = _DAT_142e36f28 - fStack_650;
  fStack_64c = (float)pub_142e32a20(fVar2 * _DAT_143006a20);
  fStack_64c = fVar4 - fStack_64c;
  uVar15 = 0;
  pub_142e32780(auStack_2f8,0,0x290);
  lStack_550 = *param_1;
  lStack_568 = param_1[1];
  lStack_560 = lStack_568 + 0x198;
  lStack_558 = lStack_568 + 0xf8;
  puStack_548 = *(uint **)(lStack_550 + 0xf8);
  puStack_540 = puStack_548 + *(longlong *)(lStack_550 + 0x100);
  cStack_500 = *(char *)(lStack_550 + 0x108);
  lStack_510 = 0;
  uStack_508 = 0;
  uStack_520 = 0;
  lStack_518 = 0;
  puStack_580 = &stack0x00000028;
  pfStack_578 = &fStack_64c;
  pfStack_570 = &fStack_650;
  lStack_538 = 8;
  uStack_530 = 0;
  lStack_528 = 8;
  lStack_588 = 0x20;
  do {
    puVar6 = puStack_540;
    lVar5 = lStack_550;
    lVar12 = lStack_558;
    lVar10 = lStack_560;
    ppuStack_648 = &puStack_580;
    lStack_588 = lStack_588 + -1;
    uVar16 = uStack_508 & 0xffffffff;
    puVar7 = puStack_548;
    uVar17 = uStack_508._4_4_;
    if (cStack_500 == '\0') {
      do {
        if (uVar17 == (uint)uVar16) {
          do {
            if (puVar7 == puVar6) goto LAB_14294b0b8;
            puStack_548 = puVar7 + 1;
            uVar17 = *puVar7;
            uVar16 = *(ulonglong *)(*(longlong *)(lVar12 + 8) + 0x58 + (ulonglong)uVar17 * 0xa0);
            puVar7 = puStack_548;
          } while (uVar16 == 0);
          lVar13 = *(longlong *)(lVar12 + 8) + (ulonglong)uVar17 * 0xa0;
          uVar8 = (ulonglong)*(uint *)(lVar13 + 0x94);
          lVar3 = *(longlong *)(lVar10 + 8);
          lVar1 = lVar3 + uVar8 * 0x48;
          uVar8 = *(ulonglong *)(lVar3 + 0x40 + uVar8 * 0x48);
          if ((*(ulonglong *)(lVar5 + 0x110) < uVar8) &&
             (uVar14 = *(ulonglong *)
                        (*(longlong *)(lVar1 + 0x38) + *(ulonglong *)(lVar5 + 0x110) * 8),
             uVar14 != 0)) {
            lStack_518 = *(longlong *)(*(longlong *)(lVar1 + 0x18) + 0x10 + ~uVar14 * 0x30);
            uVar14 = *(ulonglong *)(lVar5 + 0x118);
            if (uVar8 <= uVar14) goto LAB_14294afb3;
LAB_14294af90:
            uVar8 = *(ulonglong *)(*(longlong *)(lVar1 + 0x38) + uVar14 * 8);
            if (uVar8 == 0) goto LAB_14294afb3;
            lStack_510 = *(longlong *)(*(longlong *)(lVar1 + 0x18) + 0x10 + ~uVar8 * 0x30);
          }
          else {
            uVar14 = *(ulonglong *)(lVar5 + 0x118);
            lStack_518 = 0;
            if (uVar14 < uVar8) goto LAB_14294af90;
LAB_14294afb3:
            lStack_510 = 0;
          }
          lStack_528 = *(longlong *)(lVar13 + 0x50);
          uStack_508 = uVar16 & 0xffffffff;
          uVar17 = 0;
          uStack_520 = uVar16;
        }
        uVar8 = *(ulonglong *)(lStack_528 + (ulonglong)uVar17 * 0x10);
        uStack_508 = CONCAT44(uVar17 + 1,(undefined4)uStack_508);
        if ((int)uVar8 == 0) goto LAB_14294b0b8;
        uVar14 = (ulonglong)~*(uint *)(lStack_528 + 8 + (ulonglong)uVar17 * 0x10);
        uStack_5c8 = (byte *)(lStack_510 + uVar14);
        uStack_5d0 = lStack_518 + uVar14 * 0x30;
        uStack_5d8 = uVar8;
        pdb_142273db0(&iStack_638,&ppuStack_648,&uStack_5d8);
        uVar17 = uVar17 + 1;
      } while ((char)iStack_638 == '\0');
    }
    else {
      do {
        if (uVar17 == (uint)uVar16) {
          do {
            if (puVar7 == puVar6) goto LAB_14294b0b8;
            puStack_548 = puVar7 + 1;
            uVar17 = *puVar7;
            lVar12 = *(longlong *)(lVar10 + 8);
            uVar16 = *(ulonglong *)(lVar12 + 0x10 + (ulonglong)uVar17 * 0x48);
            puVar7 = puStack_548;
          } while (uVar16 == 0);
          lVar12 = lVar12 + (ulonglong)uVar17 * 0x48;
          uVar8 = *(ulonglong *)(lVar12 + 0x40);
          if ((*(ulonglong *)(lVar5 + 0x110) < uVar8) &&
             (uVar14 = *(ulonglong *)
                        (*(longlong *)(lVar12 + 0x38) + *(ulonglong *)(lVar5 + 0x110) * 8),
             uVar14 != 0)) {
            lStack_518 = *(longlong *)(*(longlong *)(lVar12 + 0x18) + 0x10 + ~uVar14 * 0x30);
            uVar14 = *(ulonglong *)(lVar5 + 0x118);
            if (uVar8 <= uVar14) goto LAB_14294ae13;
LAB_14294adf0:
            uVar8 = *(ulonglong *)(*(longlong *)(lVar12 + 0x38) + uVar14 * 8);
            if (uVar8 == 0) goto LAB_14294ae13;
            lStack_510 = *(longlong *)(*(longlong *)(lVar12 + 0x18) + 0x10 + ~uVar8 * 0x30);
          }
          else {
            uVar14 = *(ulonglong *)(lVar5 + 0x118);
            lStack_518 = 0;
            if (uVar14 < uVar8) goto LAB_14294adf0;
LAB_14294ae13:
            lStack_510 = 0;
          }
          lStack_538 = *(longlong *)(lVar12 + 8);
          uStack_508 = uVar16 & 0xffffffff;
          uVar17 = 0;
          uStack_530 = uVar16;
        }
        uVar14 = (ulonglong)uVar17;
        uVar8 = *(ulonglong *)(lStack_538 + uVar14 * 8);
        uVar17 = uVar17 + 1;
        uStack_508 = CONCAT44(uVar17,(undefined4)uStack_508);
        if ((int)uVar8 == 0) goto LAB_14294b0b8;
        uStack_5c8 = (byte *)(lStack_510 + uVar14);
        uStack_5d0 = lStack_518 + uVar14 * 0x30;
        uStack_5d8 = uVar8;
        pdb_142273db0(&iStack_638,&ppuStack_648,&uStack_5d8);
      } while ((char)iStack_638 == '\0');
    }
    if (0x1f < (uint)uVar15) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar15,0x20,&UNK_143600a30);
    }
    auStack_2f8[uVar15] = CONCAT44(uStack_630,uStack_634);
    auStack_1f8[uVar15] = CONCAT44(uStack_628,uStack_62c);
    auStack_f8[uVar15] = uStack_624;
    uStack_78 = uStack_78 + 1;
    uVar15 = (ulonglong)uStack_78;
  } while (lStack_588 != 0);
LAB_14294b0b8:
  puVar9 = (undefined8 *)pdb_1429472f0(*puStack_5e0,&UNK_143600378);
  if ((puVar9 == (undefined8 *)0x0) ||
     (lVar10 = (**(code **)(puVar9[1] + 0x18))(*puVar9), lVar10 == 0)) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143600a18);
  }
  uVar11 = pdb_140a92040(*puStack_5e8);
  pub_142e32760(&lStack_588,auStack_2f8,0x290);
  lVar12 = pdb_140e17350(lVar10);
  if (0x28f < *(uint *)(lVar12 + 0x10)) {
    ppuStack_648 = (undefined1 **)0x0;
    uStack_640 = 0x290;
    pdb_140e55470(&uStack_5d8,uVar11,lVar10,&lStack_588,0x290,&ppuStack_648,1,0);
    if ((int)uStack_5d8 != 0xb) {
      uStack_634 = (undefined4)(uStack_5d8 >> 0x20);
      uStack_630 = (undefined4)uStack_5d0;
      uStack_62c = (undefined4)(uStack_5d0 >> 0x20);
      uStack_5f8 = uStack_598;
      uStack_5f4 = uStack_594;
      uStack_5f0 = uStack_590;
      uStack_5ec = uStack_58c;
      uStack_608 = uStack_5a8;
      uStack_604 = uStack_5a4;
      uStack_600 = uStack_5a0;
      uStack_5fc = uStack_59c;
      uStack_618 = uStack_5b8;
      uStack_614 = uStack_5b4;
      uStack_610 = uStack_5b0;
      uStack_60c = uStack_5ac;
      uStack_628 = (undefined4)uStack_5c8;
      uStack_624 = uStack_5c8._4_4_;
      uStack_620 = uStack_5c0;
      uStack_61c = uStack_5bc;
      if (uStack_5d8 < 0xb) {
        lVar10 = 0;
        if (7 < uStack_5d8) {
          lVar10 = uStack_5d8 - 8;
        }
        iStack_638 = (int)uStack_5d8;
        if (lVar10 == 0) {
          if (((uStack_5d8 < 6) && ((0x32UL >> (uStack_5d8 & 0x3f) & 1) != 0)) && (uStack_5d0 != 0))
          {
            pub_1406abac0(uStack_5c8,uStack_5d0,1);
          }
          if (CONCAT44(uStack_614,uStack_618) == 0) {
            return;
          }
          arg0 = (byte *)CONCAT44(uStack_60c,uStack_610);
          uVar15 = CONCAT44(uStack_614,uStack_618);
        }
        else {
          if (lVar10 == 1) {
            pdb_1404b83f0(&uStack_630);
            return;
          }
          arg0 = uStack_5c8;
          uVar15 = uStack_5d0;
          if (uStack_5d0 == 0) {
            return;
          }
        }
        pub_1406abac0(arg0,uVar15,1);
      }
    }
  }
  return;
}

