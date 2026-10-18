// VA 0x142981260, PDB extent 872 bytes
// toolbar::taffy_update::taffy_update_drawables
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/taffy_update.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::taffy_update::taffy_update_drawables
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/taffy_update.rs
   Extent: 872 */

void pdb_142981260(longlong *param_1,undefined8 *param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  uint *puVar18;
  int iStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  fVar11 = _UNK_142e36f64;
  fVar10 = _DAT_142e36f60;
  lVar5 = *param_1;
  lVar6 = param_1[1];
  uVar4 = *(undefined4 *)((longlong)param_1 + 0x14);
  puVar18 = *(uint **)(lVar5 + 0xf8);
  puVar1 = puVar18 + *(longlong *)(lVar5 + 0x100);
  uVar7 = *param_2;
  if (*(char *)(lVar5 + 0x108) == '\0') {
    while (puVar18 != puVar1) {
      while( true ) {
        lVar8 = *(longlong *)(*(longlong *)(lVar6 + 0x100) + 0x58 + (ulonglong)*puVar18 * 0xa0);
        if (lVar8 != 0) break;
        puVar18 = puVar18 + 1;
        if (puVar18 == puVar1) {
          return;
        }
      }
      lVar13 = *(longlong *)(lVar6 + 0x100) + (ulonglong)*puVar18 * 0xa0;
      uVar12 = (ulonglong)*(uint *)(lVar13 + 0x94);
      lVar17 = *(longlong *)(lVar6 + 0x1a0);
      lVar9 = *(longlong *)(lVar17 + 0x18 + uVar12 * 0x48);
      lVar15 = *(longlong *)(lVar17 + 0x38 + uVar12 * 0x48);
      if ((*(ulonglong *)(lVar5 + 0x118) < *(ulonglong *)(lVar17 + 0x40 + uVar12 * 0x48)) &&
         (uVar12 = *(ulonglong *)(lVar15 + *(ulonglong *)(lVar5 + 0x118) * 8), uVar12 != 0)) {
        lVar17 = *(longlong *)(lVar9 + 0x10 + ~uVar12 * 0x30);
      }
      else {
        lVar17 = 0;
      }
      lVar14 = ~*(ulonglong *)(lVar15 + *(longlong *)(lVar5 + 0x110) * 8) * 0x30;
      lVar15 = *(longlong *)(lVar9 + 0x10 + lVar14);
      lVar9 = *(longlong *)(lVar9 + 0x28 + lVar14);
      puVar18 = puVar18 + 1;
      lVar13 = *(longlong *)(lVar13 + 0x50);
      uVar16 = 1;
      uVar12 = 0;
      while( true ) {
        uVar12 = (ulonglong)~*(uint *)(lVar13 + 8 + uVar12 * 0x10);
        pdb_1411bdd00(&iStack_98,uVar7,*(undefined4 *)(lVar17 + uVar12 * 0x14),
                      *(undefined4 *)(lVar17 + 4 + uVar12 * 0x14));
        if (iStack_98 != 4) goto LAB_142981587;
        uVar2 = *(undefined8 *)CONCAT44(uStack_8c,uStack_90);
        uVar3 = ((undefined8 *)CONCAT44(uStack_8c,uStack_90))[1];
        *(ulonglong *)(lVar15 + uVar12 * 0x10) =
             CONCAT44((float)((ulonglong)uVar2 >> 0x20) * fVar11 + (float)((ulonglong)uVar3 >> 0x20)
                      ,(float)uVar2 * fVar10 + (float)uVar3);
        *(undefined4 *)(lVar9 + uVar12 * 4) = uVar4;
        *(undefined8 *)(lVar15 + 8 + uVar12 * 0x10) = uVar2;
        if (uVar16 == (uint)lVar8) break;
        uVar12 = (ulonglong)uVar16;
        uVar16 = uVar16 + 1;
      }
    }
  }
  else {
    while (puVar18 != puVar1) {
      while( true ) {
        lVar8 = *(longlong *)(*(longlong *)(lVar6 + 0x1a0) + 0x10 + (ulonglong)*puVar18 * 0x48);
        if (lVar8 != 0) break;
        puVar18 = puVar18 + 1;
        if (puVar18 == puVar1) {
          return;
        }
      }
      lVar17 = *(longlong *)(lVar6 + 0x1a0) + (ulonglong)*puVar18 * 0x48;
      lVar9 = *(longlong *)(lVar17 + 0x18);
      if ((*(ulonglong *)(lVar5 + 0x118) < *(ulonglong *)(lVar17 + 0x40)) &&
         (uVar12 = *(ulonglong *)(*(longlong *)(lVar17 + 0x38) + *(ulonglong *)(lVar5 + 0x118) * 8),
         uVar12 != 0)) {
        lVar15 = *(longlong *)(lVar9 + 0x10 + ~uVar12 * 0x30);
      }
      else {
        lVar15 = 0;
      }
      lVar13 = ~*(ulonglong *)(*(longlong *)(lVar17 + 0x38) + *(longlong *)(lVar5 + 0x110) * 8) *
               0x30;
      lVar17 = *(longlong *)(lVar9 + 0x10 + lVar13);
      lVar9 = *(longlong *)(lVar9 + 0x28 + lVar13);
      puVar18 = puVar18 + 1;
      uVar16 = 0;
      do {
        uVar12 = (ulonglong)uVar16;
        pdb_1411bdd00(&iStack_98,uVar7,*(undefined4 *)(lVar15 + uVar12 * 0x14),
                      *(undefined4 *)(lVar15 + 4 + uVar12 * 0x14));
        if (iStack_98 != 4) {
LAB_142981587:
          uStack_68 = uStack_88;
          uStack_64 = uStack_84;
          uStack_60 = uStack_80;
          uStack_5c = uStack_7c;
          iStack_78 = iStack_98;
          uStack_74 = uStack_94;
          uStack_70 = uStack_90;
          uStack_6c = uStack_8c;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_143607988,0x2b,&iStack_78,&UNK_143607968,&UNK_143607b00);
        }
        uVar16 = uVar16 + 1;
        uVar2 = *(undefined8 *)CONCAT44(uStack_8c,uStack_90);
        uVar3 = ((undefined8 *)CONCAT44(uStack_8c,uStack_90))[1];
        *(ulonglong *)(lVar17 + uVar12 * 0x10) =
             CONCAT44((float)((ulonglong)uVar2 >> 0x20) * fVar11 + (float)((ulonglong)uVar3 >> 0x20)
                      ,(float)uVar2 * fVar10 + (float)uVar3);
        *(undefined4 *)(lVar9 + uVar12 * 4) = uVar4;
        *(undefined8 *)(lVar17 + 8 + uVar12 * 0x10) = uVar2;
      } while (uVar16 != (uint)lVar8);
    }
  }
  return;
}

