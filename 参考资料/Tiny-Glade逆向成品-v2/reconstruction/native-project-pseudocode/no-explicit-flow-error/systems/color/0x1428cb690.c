// VA 0x1428cb690, PDB extent 1013 bytes
// system_color::set_flag_connection_n_chimney_smoke::set_flag_connection_and_chimney_smoke
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/set_flag_connection_n_chimney_smoke.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_color::set_flag_connection_n_chimney_smoke::set_flag_connection_and_chimney_smoke
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/set_flag_connection_n_chimney_smoke.rs
   Extent: 1013 */

void pdb_1428cb690(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,
                  undefined8 *param_5)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  undefined1 auStack_84 [12];
  undefined4 *puStack_78;
  undefined8 uStack_70;
  undefined4 *puStack_68;
  undefined4 uStack_5a;
  undefined2 uStack_56;
  undefined2 uStack_54;
  undefined4 uStack_52;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined8 *puStack_48;
  
  puVar6 = (ulonglong *)*param_2;
  lVar7 = param_2[1];
  uVar8 = *puVar6;
  uVar17 = 0;
  uVar14 = uVar8 - *(ulonglong *)(lVar7 + 0x18);
  if (uVar8 < *(ulonglong *)(lVar7 + 0x18)) {
    uVar14 = uVar17;
  }
  uVar18 = uVar8 - *(ulonglong *)(lVar7 + 0x38);
  if (uVar8 < *(ulonglong *)(lVar7 + 0x38)) {
    uVar18 = uVar17;
  }
  lVar21 = uVar14 * 0x10 + *(longlong *)(lVar7 + 8);
  uVar8 = *(ulonglong *)(lVar7 + 0x10) - uVar14;
  if (*(ulonglong *)(lVar7 + 0x10) < uVar14) {
    lVar21 = 8;
    uVar8 = uVar17;
  }
  lVar11 = uVar18 * 0x10 + *(longlong *)(lVar7 + 0x28);
  uVar14 = *(ulonglong *)(lVar7 + 0x30) - uVar18;
  if (*(ulonglong *)(lVar7 + 0x30) < uVar18) {
    lVar11 = 8;
    uVar14 = uVar17;
  }
  *puVar6 = (*(longlong *)(lVar7 + 0x40) - uVar14) - uVar8;
  lVar19 = uVar14 * 0x10 + lVar11;
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x1c);
  uVar9 = *param_1;
  puStack_68 = (undefined4 *)param_1[2];
  uStack_70 = *param_5;
  uVar4 = *(undefined4 *)((longlong)param_4 + 0x1c);
  lVar7 = *param_4;
  puStack_78 = (undefined4 *)param_4[2];
  lVar12 = lVar21;
  puStack_48 = param_3;
  do {
    if ((lVar12 == 0) || (lVar12 == uVar8 * 0x10 + lVar21)) {
      if ((lVar11 == 0) || (lVar11 == lVar19)) {
        puVar6 = (ulonglong *)*puStack_48;
        lVar21 = puStack_48[1];
        uVar8 = *puVar6;
        uVar17 = 0;
        uVar14 = uVar8 - *(ulonglong *)(lVar21 + 0x18);
        if (uVar8 < *(ulonglong *)(lVar21 + 0x18)) {
          uVar14 = uVar17;
        }
        uVar18 = uVar8 - *(ulonglong *)(lVar21 + 0x38);
        if (uVar8 < *(ulonglong *)(lVar21 + 0x38)) {
          uVar18 = uVar17;
        }
        lVar11 = uVar14 * 0x10 + *(longlong *)(lVar21 + 8);
        uVar8 = *(ulonglong *)(lVar21 + 0x10) - uVar14;
        if (*(ulonglong *)(lVar21 + 0x10) < uVar14) {
          lVar11 = 8;
          uVar8 = uVar17;
        }
        lVar12 = uVar18 * 0x10 + *(longlong *)(lVar21 + 0x28);
        uVar14 = *(ulonglong *)(lVar21 + 0x30) - uVar18;
        if (*(ulonglong *)(lVar21 + 0x30) < uVar18) {
          lVar12 = 8;
          uVar14 = uVar17;
        }
        *puVar6 = (*(longlong *)(lVar21 + 0x40) - uVar14) - uVar8;
        lVar21 = uVar8 * 0x10 + lVar11;
        lVar19 = uVar14 * 0x10 + lVar12;
        do {
          if ((lVar11 == 0) || (lVar11 == lVar21)) {
            if ((lVar12 == 0) || (lVar12 == lVar19)) {
              return;
            }
            lVar11 = 0;
            lVar15 = lVar12 + 0x10;
            lVar20 = lVar12;
          }
          else {
            lVar15 = lVar12;
            lVar20 = lVar11;
            lVar11 = lVar11 + 0x10;
          }
          lVar12 = lVar15;
          *puVar6 = *puVar6 + 1;
          *puStack_68 = uVar3;
          uVar5 = *(undefined4 *)(lVar20 + 8);
          lVar15 = pdb_140c40a30(uVar9,uVar5);
          if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_1435af438);
          }
          uVar2 = *(undefined1 *)(lVar20 + 0xc);
          lVar15 = pdb_1409013a0(lVar15 + 0x38,&UNK_1435af450);
          *(undefined1 *)(lVar15 + 4) = uVar2;
          if (*(char *)(lVar20 + 0xd) != '\0') {
            pdb_140c45db0(auStack_84,uStack_70,uVar5,&UNK_1435af468);
            uStack_4c = (undefined2)auStack_84._8_4_;
            uStack_4a = SUB42(auStack_84._8_4_,2);
            uStack_54 = (undefined2)auStack_84._0_8_;
            uStack_52 = SUB84(auStack_84._0_8_,2);
            uStack_4e = SUB82(auStack_84._0_8_,6);
            *puStack_78 = uVar4;
            lVar15 = *(longlong *)(lVar7 + 0x30);
            uVar10 = *(undefined8 *)(lVar7 + 0x40);
            if (lVar15 == *(longlong *)(lVar7 + 0x20)) {
              pdb_142d7e6e0(lVar7 + 0x20);
            }
            lVar20 = *(longlong *)(lVar7 + 0x28);
            lVar16 = lVar15 * 0x20;
            *(undefined8 *)(lVar20 + lVar16) = uVar10;
            *(undefined1 *)(lVar20 + 8 + lVar16) = 0xf;
            *(undefined1 *)(lVar20 + 9 + lVar16) = uVar2;
            *(undefined2 *)(lVar20 + 0x1a + lVar16) = uStack_4a;
            puVar1 = (undefined4 *)(lVar20 + 10 + lVar16);
            *puVar1 = uStack_5a;
            puVar1[1] = CONCAT22(uStack_54,uStack_56);
            puVar1[2] = uStack_52;
            puVar1[3] = CONCAT22(uStack_4c,uStack_4e);
            *(longlong *)(lVar7 + 0x30) = lVar15 + 1;
            *(longlong *)(lVar7 + 0x40) = *(longlong *)(lVar7 + 0x40) + 1;
          }
        } while( true );
      }
      lVar15 = 0;
      lVar20 = lVar11 + 0x10;
      lVar16 = lVar11;
    }
    else {
      lVar15 = lVar12 + 0x10;
      lVar20 = lVar11;
      lVar16 = lVar12;
    }
    lVar11 = lVar20;
    *puVar6 = *puVar6 + 1;
    *puStack_68 = uVar3;
    uVar5 = *(undefined4 *)(lVar16 + 8);
    lVar12 = pdb_140c40a30(uVar9,uVar5);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_1435af480);
    }
    uVar2 = *(undefined1 *)(lVar16 + 0xc);
    puVar13 = (undefined1 *)pdb_140901440(lVar12 + 0x38);
    *puVar13 = uVar2;
    lVar12 = lVar15;
    if (*(char *)(lVar16 + 0xd) != '\0') {
      pdb_140c45db0(auStack_84,uStack_70,uVar5,&UNK_1435af4b0);
      uStack_4c = (undefined2)auStack_84._8_4_;
      uStack_4a = SUB42(auStack_84._8_4_,2);
      uStack_54 = (undefined2)auStack_84._0_8_;
      uStack_52 = SUB84(auStack_84._0_8_,2);
      uStack_4e = SUB82(auStack_84._0_8_,6);
      *puStack_78 = uVar4;
      lVar15 = *(longlong *)(lVar7 + 0x30);
      uVar10 = *(undefined8 *)(lVar7 + 0x40);
      if (lVar15 == *(longlong *)(lVar7 + 0x20)) {
        pdb_142d7e6e0(lVar7 + 0x20);
      }
      lVar20 = *(longlong *)(lVar7 + 0x28);
      lVar16 = lVar15 * 0x20;
      *(undefined8 *)(lVar20 + lVar16) = uVar10;
      *(undefined1 *)(lVar20 + 8 + lVar16) = 9;
      *(undefined1 *)(lVar20 + 9 + lVar16) = uVar2;
      *(undefined2 *)(lVar20 + 0x1a + lVar16) = uStack_4a;
      puVar1 = (undefined4 *)(lVar20 + 10 + lVar16);
      *puVar1 = uStack_5a;
      puVar1[1] = CONCAT22(uStack_54,uStack_56);
      puVar1[2] = uStack_52;
      puVar1[3] = CONCAT22(uStack_4c,uStack_4e);
      *(longlong *)(lVar7 + 0x30) = lVar15 + 1;
      *(longlong *)(lVar7 + 0x40) = *(longlong *)(lVar7 + 0x40) + 1;
    }
  } while( true );
}

