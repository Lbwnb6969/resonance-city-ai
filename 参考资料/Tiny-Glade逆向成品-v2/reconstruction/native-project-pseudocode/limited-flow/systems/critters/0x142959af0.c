// VA 0x142959af0, PDB extent 1261 bytes
// system_critters::sheep::sheep_pet_animation::sheep_pet_animation
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/sheep/sheep_pet_animation.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000142959cc0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_critters::sheep::sheep_pet_animation::sheep_pet_animation
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/sheep/sheep_pet_animation.rs
   Extent: 1261 */

void pdb_142959af0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined7 uVar9;
  ulonglong uVar10;
  uint *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 uStack_98;
  longlong lStack_88;
  byte *pbStack_80;
  ulonglong uStack_78;
  ulonglong *puStack_70;
  longlong lStack_68;
  longlong lStack_60;
  longlong lStack_58;
  longlong lStack_50;
  longlong lStack_48;
  
  puStack_70 = (ulonglong *)*param_3;
  lVar8 = param_3[1];
  uVar13 = *puStack_70;
  uVar10 = 0;
  uVar6 = uVar13 - *(ulonglong *)(lVar8 + 0x18);
  if (uVar13 < *(ulonglong *)(lVar8 + 0x18)) {
    uVar6 = uVar10;
  }
  uVar12 = uVar13 - *(ulonglong *)(lVar8 + 0x38);
  if (uVar13 < *(ulonglong *)(lVar8 + 0x38)) {
    uVar12 = uVar10;
  }
  lStack_68 = uVar6 * 0x10 + *(longlong *)(lVar8 + 8);
  uVar13 = *(ulonglong *)(lVar8 + 0x10) - uVar6;
  if (*(ulonglong *)(lVar8 + 0x10) < uVar6) {
    lStack_68 = 8;
    uVar13 = uVar10;
  }
  lStack_58 = uVar12 * 0x10 + *(longlong *)(lVar8 + 0x28);
  uVar6 = *(ulonglong *)(lVar8 + 0x30) - uVar12;
  if (*(ulonglong *)(lVar8 + 0x30) < uVar12) {
    lStack_58 = 8;
    uVar6 = uVar10;
  }
  lStack_48 = uVar6 + uVar13;
  *puStack_70 = *(longlong *)(lVar8 + 0x40) - lStack_48;
  lStack_60 = uVar13 * 0x10 + lStack_68;
  lStack_50 = uVar6 * 0x10 + lStack_58;
  pdb_140fc81a0(&lStack_88,&puStack_70);
  lVar8 = *param_1;
  lVar5 = param_1[1];
  puVar11 = *(uint **)(lVar8 + 0xf8);
  puVar1 = puVar11 + *(longlong *)(lVar8 + 0x100);
  uVar13 = uStack_78 & 0xffffffffffffff8;
  uVar3 = (uint)uStack_78 & 7;
  uVar4 = 0;
  if (*(char *)(lVar8 + 0x108) == '\0') {
    if (puVar11 != puVar1) {
      do {
        if (*(longlong *)(*(longlong *)(lVar5 + 0x100) + 0x58 + (ulonglong)*puVar11 * 0xa0) != 0) {
          lVar7 = *(longlong *)(lVar5 + 0x100) + (ulonglong)*puVar11 * 0xa0;
          uVar6 = (ulonglong)*(uint *)(lVar7 + 0x94);
          lVar2 = *(longlong *)(*(longlong *)(lVar5 + 0x1a0) + 0x18 + uVar6 * 0x48);
          lVar5 = ~*(ulonglong *)
                    (*(longlong *)(*(longlong *)(lVar5 + 0x1a0) + 0x38 + uVar6 * 0x48) +
                    *(longlong *)(lVar8 + 0x110) * 8) * 0x30;
          lVar8 = *(longlong *)(lVar2 + 0x10 + lVar5);
          uStack_98 = *(undefined8 *)(lVar2 + 0x28 + lVar5);
          uVar4 = ~*(uint *)(*(longlong *)(lVar7 + 0x50) + 8);
          goto LAB_142959d6f;
        }
        puVar11 = puVar11 + 1;
      } while (puVar11 != puVar1);
    }
  }
  else if (puVar11 != puVar1) {
    while (*(longlong *)(*(longlong *)(lVar5 + 0x1a0) + 0x10 + (ulonglong)*puVar11 * 0x48) == 0) {
      puVar11 = puVar11 + 1;
      if (puVar11 == puVar1) goto LAB_142959faa;
    }
    lVar5 = *(longlong *)(lVar5 + 0x1a0) + (ulonglong)*puVar11 * 0x48;
    lVar2 = *(longlong *)(lVar5 + 0x18);
    lVar5 = ~*(ulonglong *)(*(longlong *)(lVar5 + 0x38) + *(longlong *)(lVar8 + 0x110) * 8) * 0x30;
    lVar8 = *(longlong *)(lVar2 + 0x10 + lVar5);
    uStack_98 = *(undefined8 *)(lVar2 + 0x28 + lVar5);
LAB_142959d6f:
    lVar8 = (ulonglong)uVar4 * 0x68 + lVar8;
    lVar5 = *(longlong *)(lVar8 + 0x20);
    uVar6 = 0;
    while (uVar9 = (undefined7)((ulonglong)uStack_98 >> 8), uVar13 != uVar6) {
      uStack_98 = CONCAT71(uVar9,1);
      if ((((*(longlong *)(pbStack_80 + uVar6 * 8) == lVar5) ||
           (*(longlong *)(pbStack_80 + uVar6 * 8 + 8) == lVar5)) ||
          ((*(longlong *)(pbStack_80 + uVar6 * 8 + 0x10) == lVar5 ||
           ((*(longlong *)(pbStack_80 + uVar6 * 8 + 0x18) == lVar5 ||
            (*(longlong *)(pbStack_80 + uVar6 * 8 + 0x20) == lVar5)))))) ||
         ((*(longlong *)(pbStack_80 + uVar6 * 8 + 0x28) == lVar5 ||
          ((*(longlong *)(pbStack_80 + uVar6 * 8 + 0x30) == lVar5 ||
           (lVar2 = uVar6 * 8, uVar6 = uVar6 + 8, *(longlong *)(pbStack_80 + lVar2 + 0x38) == lVar5)
           ))))) goto LAB_142959e90;
    }
    if ((uStack_78 & 7) == 0) {
      uStack_98 = 0;
    }
    else {
      uStack_98 = CONCAT71(uVar9,*(longlong *)(pbStack_80 + uVar13 * 8) == lVar5);
      if (((((((*(longlong *)(pbStack_80 + uVar13 * 8) != lVar5) && (uVar3 != 1)) &&
             (uStack_98 = CONCAT71(uVar9,*(longlong *)(pbStack_80 + uVar13 * 8 + 8) == lVar5),
             *(longlong *)(pbStack_80 + uVar13 * 8 + 8) != lVar5)) &&
            ((uVar3 != 2 &&
             (uStack_98 = CONCAT71(uVar9,*(longlong *)(pbStack_80 + uVar13 * 8 + 0x10) == lVar5),
             *(longlong *)(pbStack_80 + uVar13 * 8 + 0x10) != lVar5)))) &&
           ((uVar3 != 3 &&
            ((uStack_98 = CONCAT71(uVar9,*(longlong *)(pbStack_80 + uVar13 * 8 + 0x18) == lVar5),
             *(longlong *)(pbStack_80 + uVar13 * 8 + 0x18) != lVar5 && (uVar3 != 4)))))) &&
          (uStack_98 = CONCAT71(uVar9,*(longlong *)(pbStack_80 + uVar13 * 8 + 0x20) == lVar5),
          *(longlong *)(pbStack_80 + uVar13 * 8 + 0x20) != lVar5)) &&
         (((uVar3 != 5 &&
           (uStack_98 = CONCAT71(uVar9,*(longlong *)(pbStack_80 + uVar13 * 8 + 0x28) == lVar5),
           *(longlong *)(pbStack_80 + uVar13 * 8 + 0x28) != lVar5)) && (uVar3 != 6)))) {
                    /* WARNING: Could not recover jumptable at 0x000142959e89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_1436048f8 +
                  *(int *)(&UNK_1436048f8 + (ulonglong)*(uint *)(lVar8 + 0x18) * 4)))
                  (_DAT_142e37988,_DAT_142e36f28,_DAT_142e3787c);
        return;
      }
    }
LAB_142959e90:
                    /* WARNING: Could not recover jumptable at 0x000142959ea2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_1436048f8 + *(int *)(&UNK_1436048f8 + (ulonglong)*(uint *)(lVar8 + 0x18) * 4)))
              (lVar8,uStack_98);
    return;
  }
LAB_142959faa:
  if (lStack_88 != 0) {
    pub_1406abac0(pbStack_80,lStack_88 << 3,8);
  }
  return;
}

