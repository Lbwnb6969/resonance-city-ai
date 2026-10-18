// VA 0x140bfd160, PDB extent 1290 bytes
// country_core::systems::wall::shapes::circle::signifiers::edit_arrow::signifier_edit_circle_arrow
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/circle/signifiers/edit_arrow.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::wall::shapes::circle::signifiers::edit_arrow::signifier_edit_circle_arrow
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/circle/signifiers/edit_arrow.rs
   Extent: 1290 */

void pdb_140bfd160(ulonglong *param_1,longlong *param_2,undefined8 *param_3)

{
  uint *puVar1;
  byte bVar2;
  undefined4 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  byte *arg0;
  uint uVar9;
  byte *pbVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  uint *puVar18;
  undefined8 uVar19;
  byte *pbVar20;
  longlong lStack_100;
  longlong lStack_d0;
  byte *pbStack_c8;
  code *pcStack_c0;
  ulonglong uStack_b8;
  byte *pbStack_b0;
  ulonglong uStack_a8;
  byte *pbStack_a0;
  undefined *puStack_98;
  ulonglong uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  ulonglong uStack_80;
  ulonglong *puStack_78;
  byte *pbStack_70;
  byte *pbStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  pbVar4 = (byte *)*param_2;
  if (pbVar4[0x38] != 2) {
    uStack_88 = *(undefined4 *)(pbVar4 + 0x34);
    uStack_90 = *(ulonglong *)(pbVar4 + 0x2c);
    puStack_78 = param_1;
    pdb_140de8fd0(&pbStack_c8,&uStack_90);
    pcVar8 = pcStack_c0;
    pbVar10 = pbStack_c8;
    uVar3 = *(undefined4 *)(pbVar4 + 0x28);
    uVar19 = *(undefined8 *)(pbVar4 + 0x20);
    pbVar20 = (byte *)*param_3;
    pbVar5 = *(byte **)pbVar4;
    pcStack_c0 = pdb_140c05040;
    pbStack_c8 = pbVar4;
    pdb_140f60760(&uStack_90,&UNK_1430679c2,&pbStack_c8);
    arg0 = (byte *)CONCAT44(uStack_84,uStack_88);
    pdb_14007ee60();
    pbStack_68 = pub_1406abab0(0x30,0x10);
    if (pbStack_68 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(0x10,0x30);
    }
    pbStack_68[0] = 1;
    pbStack_68[1] = 0;
    pbStack_68[2] = 0;
    pbStack_68[3] = 0;
    pbStack_68[4] = 0;
    pbStack_68[5] = 0;
    pbStack_68[6] = 0;
    pbStack_68[7] = 0;
    pbStack_68[8] = 1;
    pbStack_68[9] = 0;
    pbStack_68[10] = 0;
    pbStack_68[0xb] = 0;
    pbStack_68[0xc] = 0;
    pbStack_68[0xd] = 0;
    pbStack_68[0xe] = 0;
    pbStack_68[0xf] = 0;
    *(byte **)(pbStack_68 + 0x10) = pbVar10;
    *(code **)(pbStack_68 + 0x18) = pcVar8;
    *(undefined8 *)(pbStack_68 + 0x20) = uVar19;
    *(undefined4 *)(pbStack_68 + 0x28) = uVar3;
    pcStack_c0 = (code *)&UNK_1430679d8;
    pbStack_c8 = pbStack_68;
    if ((longlong)uStack_80 < 0) {
      uVar19 = 0;
LAB_140bfd25b:
      pdb_142dc7e2a(uVar19,uStack_80);
                    /* WARNING: Does not return */
      pcVar8 = (code *)invalidInstructionException();
      (*pcVar8)();
    }
    if (uStack_80 == 0) {
      pbVar10 = (byte *)0x1;
    }
    else {
      pbStack_70 = pbVar20;
      pdb_14007ee60();
      uVar19 = 1;
      pbVar10 = pub_1406abab0(uStack_80,1);
      if (pbVar10 == (byte *)0x0) goto LAB_140bfd25b;
      pub_142e32760(pbVar10,arg0,uStack_80);
      pbVar20 = pbStack_70;
    }
    pcStack_c0 = (code *)((ulonglong)pcStack_c0 & 0xffffffffffffff00);
    uStack_b8 = uStack_80;
    uStack_a8 = uStack_80;
    pbStack_a0 = pbStack_68;
    puStack_98 = &UNK_1430679d8;
    pbStack_c8 = pbVar5;
    pbStack_b0 = pbVar10;
    pdb_141a88350(pbVar20,&pbStack_c8);
    if (uStack_90 != 0) {
      pub_1406abac0(arg0,uStack_90,1);
    }
    param_1 = puStack_78;
  }
  lVar6 = *param_1;
  lVar7 = param_1[1];
  pbStack_68 = (byte *)CONCAT44(pbStack_68._4_4_,*(undefined4 *)((longlong)param_1 + 0x14));
  puVar18 = *(uint **)(lVar6 + 0xf8);
  puVar1 = puVar18 + *(longlong *)(lVar6 + 0x100);
  puStack_78 = (ulonglong *)(pbVar4 + 0x2c);
  pbStack_70 = pbVar4 + 0x20;
  if (*(char *)(lVar6 + 0x108) == '\0') {
    lVar16 = 0;
    lVar17 = 8;
    lVar15 = 0;
    uVar13 = 0;
    do {
      if (uVar13 == (uint)lVar16) {
        if (puVar18 == puVar1) {
          return;
        }
        while( true ) {
          lVar16 = *(longlong *)(*(longlong *)(lVar7 + 0x100) + 0x58 + (ulonglong)*puVar18 * 0xa0);
          if (lVar16 != 0) break;
          puVar18 = puVar18 + 1;
          if (puVar18 == puVar1) {
            return;
          }
        }
        lVar11 = *(longlong *)(lVar7 + 0x100) + (ulonglong)*puVar18 * 0xa0;
        uVar12 = (ulonglong)*(uint *)(lVar11 + 0x94);
        lVar17 = *(longlong *)(*(longlong *)(lVar7 + 0x1a0) + 0x18 + uVar12 * 0x48);
        lVar14 = ~*(ulonglong *)
                   (*(longlong *)(*(longlong *)(lVar7 + 0x1a0) + 0x38 + uVar12 * 0x48) +
                   *(longlong *)(lVar6 + 0x118) * 8) * 0x30;
        lVar15 = *(longlong *)(lVar17 + 0x10 + lVar14);
        lStack_100 = *(longlong *)(lVar17 + 0x28 + lVar14);
        lVar17 = *(longlong *)(lVar11 + 0x50);
        puVar18 = puVar18 + 1;
        uVar13 = 1;
        uVar12 = 0;
        bVar2 = pbVar4[0x38];
      }
      else {
        uVar12 = (ulonglong)uVar13;
        uVar13 = uVar13 + 1;
        bVar2 = pbVar4[0x38];
      }
      if (bVar2 != 2) {
        uVar12 = (ulonglong)~*(uint *)(lVar17 + 8 + uVar12 * 0x10);
        lVar11 = uVar12 * 0x30;
        uStack_88 = (undefined4)puStack_78[1];
        uStack_90 = *puStack_78;
        pdb_140de8fd0(&pbStack_c8,&uStack_90);
        *(undefined4 *)(lStack_100 + uVar12 * 4) = pbStack_68._0_4_;
        *(undefined8 *)(lVar15 + lVar11) = pbStack_c8;
        ((undefined8 *)(lVar15 + lVar11))[1] = pcStack_c0;
        uVar3 = *(undefined4 *)(pbStack_70 + 8);
        pcStack_c0 = (code *)CONCAT44(pcStack_c0._4_4_,uVar3);
        pbStack_c8 = *(byte **)pbStack_70;
        *(undefined4 *)(lStack_100 + uVar12 * 4) = pbStack_68._0_4_;
        *(undefined4 *)(lVar15 + 0x18 + lVar11) = uVar3;
        *(byte **)(lVar15 + 0x10 + lVar11) = pbStack_c8;
      }
    } while( true );
  }
  lVar15 = 0;
  lVar16 = 0;
  uVar13 = 0;
LAB_140bfd341:
  do {
    uVar9 = uVar13;
    if (uVar9 != (uint)lVar16) goto LAB_140bfd380;
    if (puVar18 == puVar1) {
      return;
    }
    while( true ) {
      lVar16 = *(longlong *)(*(longlong *)(lVar7 + 0x1a0) + 0x10 + (ulonglong)*puVar18 * 0x48);
      if (lVar16 != 0) break;
      puVar18 = puVar18 + 1;
      if (puVar18 == puVar1) {
        return;
      }
    }
    lVar15 = *(longlong *)(lVar7 + 0x1a0) + (ulonglong)*puVar18 * 0x48;
    lVar17 = *(longlong *)(lVar15 + 0x18);
    lVar11 = ~*(ulonglong *)(*(longlong *)(lVar15 + 0x38) + *(longlong *)(lVar6 + 0x118) * 8) * 0x30
    ;
    lVar15 = *(longlong *)(lVar17 + 0x10 + lVar11);
    lStack_d0 = *(longlong *)(lVar17 + 0x28 + lVar11);
    puVar18 = puVar18 + 1;
    uVar9 = 0;
    uVar13 = 1;
  } while (pbVar4[0x38] == 2);
  goto LAB_140bfd3d9;
LAB_140bfd380:
  uVar13 = uVar9 + 1;
  if (pbVar4[0x38] != 2) {
LAB_140bfd3d9:
    uVar12 = (ulonglong)uVar9;
    lVar17 = uVar12 * 0x30;
    uStack_88 = (undefined4)puStack_78[1];
    uStack_90 = *puStack_78;
    pdb_140de8fd0(&pbStack_c8,&uStack_90);
    *(undefined4 *)(lStack_d0 + uVar12 * 4) = pbStack_68._0_4_;
    *(undefined8 *)(lVar15 + lVar17) = pbStack_c8;
    ((undefined8 *)(lVar15 + lVar17))[1] = pcStack_c0;
    uVar3 = *(undefined4 *)(pbStack_70 + 8);
    pcStack_c0 = (code *)CONCAT44(pcStack_c0._4_4_,uVar3);
    pbStack_c8 = *(byte **)pbStack_70;
    *(undefined4 *)(lStack_d0 + uVar12 * 4) = pbStack_68._0_4_;
    *(undefined4 *)(lVar15 + 0x18 + lVar17) = uVar3;
    *(byte **)(lVar15 + 0x10 + lVar17) = pbStack_c8;
  }
  goto LAB_140bfd341;
}

