// VA 0x142897540, PDB extent 1255 bytes
// system_onboarding::hint_terrain_steepness::hint_terrain_steepness
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_terrain_steepness.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_onboarding::hint_terrain_steepness::hint_terrain_steepness
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_terrain_steepness.rs
   Extent: 1255 */

void pdb_142897540(undefined8 *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  longlong *param_5,longlong *param_6,undefined8 *param_7)

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined2 uVar10;
  longlong lVar11;
  longlong lVar12;
  char *pcVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined4 uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined4 *puVar19;
  longlong lVar20;
  undefined1 auStack_170 [48];
  undefined4 uStack_140;
  undefined2 uStack_13c;
  longlong lStack_110;
  longlong lStack_108;
  undefined4 *puStack_100;
  undefined8 *puStack_f8;
  longlong *plStack_f0;
  undefined8 uStack_e8;
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
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined2 uStack_70;
  undefined6 uStack_6e;
  char *pcStack_60;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puVar4 = (ulonglong *)*param_4;
  lVar5 = param_4[1];
  uVar6 = *puVar4;
  uVar17 = 0;
  uVar14 = uVar6 - *(ulonglong *)(lVar5 + 0x18);
  if (uVar6 < *(ulonglong *)(lVar5 + 0x18)) {
    uVar14 = uVar17;
  }
  uVar18 = uVar6 - *(ulonglong *)(lVar5 + 0x38);
  if (uVar6 < *(ulonglong *)(lVar5 + 0x38)) {
    uVar18 = uVar17;
  }
  lVar11 = uVar14 * 0x10 + *(longlong *)(lVar5 + 8);
  uVar6 = *(ulonglong *)(lVar5 + 0x10) - uVar14;
  if (*(ulonglong *)(lVar5 + 0x10) < uVar14) {
    lVar11 = 8;
    uVar6 = uVar17;
  }
  lVar12 = uVar18 * 0x10 + *(longlong *)(lVar5 + 0x28);
  uVar14 = *(ulonglong *)(lVar5 + 0x30) - uVar18;
  if (*(ulonglong *)(lVar5 + 0x30) < uVar18) {
    lVar12 = 8;
    uVar14 = uVar17;
  }
  *puVar4 = (*(longlong *)(lVar5 + 0x40) - uVar14) - uVar6;
  lVar20 = uVar6 * 0x10 + lVar11;
  lVar15 = uVar14 * 0x10 + lVar12;
  uVar16 = *(undefined4 *)((longlong)param_3 + 0x1c);
  pcVar13 = (char *)*param_3;
  puVar7 = (undefined4 *)param_3[2];
  uStack_54 = *(undefined4 *)((longlong)param_5 + 0x1c);
  lVar5 = *param_5;
  puVar19 = (undefined4 *)param_5[2];
  lStack_110 = lVar15;
  lStack_108 = lVar20;
  puStack_100 = puVar19;
  puStack_f8 = param_1;
  plStack_f0 = param_2;
  pcStack_60 = pcVar13;
  uStack_50 = uVar16;
  do {
    while( true ) {
      if ((lVar11 != 0) && (lVar11 != lVar20)) break;
      if ((lVar12 == 0) || (lVar12 == lVar15)) {
        if ((*(longlong *)*param_7 != 0) && (*(char *)*puStack_f8 == '\x05')) {
          uVar16 = *(undefined4 *)((longlong)param_6 + 0x1c);
          puVar7 = (undefined4 *)param_6[2];
          *puVar7 = uVar16;
          param_6 = (longlong *)*param_6;
          uVar10 = pdb_140a44d70(0);
          uStack_e8 = CONCAT44(CONCAT22(uStack_e8._6_2_,uVar10),0xca);
          uStack_49 = 1;
          uVar10 = pdb_140a44d60(1);
          uStack_b8 = CONCAT44(CONCAT22(uStack_b8._6_2_,uVar10),0xca);
          uStack_49 = 0;
          pdb_1420c0160(&uStack_140,&uStack_e8,&uStack_b8);
          uStack_b8 = 0x1000000c7;
          pdb_1420c0330(&uStack_e8,&uStack_140,&uStack_b8);
          uStack_98 = uStack_c8;
          uStack_94 = uStack_c4;
          uStack_90 = uStack_c0;
          uStack_8c = uStack_bc;
          uStack_a8 = uStack_d8;
          uStack_a4 = uStack_d4;
          uStack_a0 = uStack_d0;
          uStack_9c = uStack_cc;
          uStack_b8._0_4_ = (undefined4)uStack_e8;
          uStack_b8._4_4_ = uStack_e8._4_4_;
          uStack_b0 = uStack_e0;
          uStack_ac = uStack_dc;
          uStack_88 = 4;
          lVar5 = param_6[2];
          if (lVar5 == *param_6) {
            pdb_142d7f080(param_6);
          }
          lVar11 = param_6[1];
          lVar12 = lVar5 * 0x38;
          *(ulonglong *)(lVar11 + 0x30 + lVar12) = CONCAT71(uStack_87,uStack_88);
          puVar19 = (undefined4 *)(lVar11 + 0x20 + lVar12);
          *puVar19 = uStack_98;
          puVar19[1] = uStack_94;
          puVar19[2] = uStack_90;
          puVar19[3] = uStack_8c;
          puVar19 = (undefined4 *)(lVar11 + 0x10 + lVar12);
          *puVar19 = uStack_a8;
          puVar19[1] = uStack_a4;
          puVar19[2] = uStack_a0;
          puVar19[3] = uStack_9c;
          puVar19 = (undefined4 *)(lVar11 + lVar12);
          *puVar19 = (undefined4)uStack_b8;
          puVar19[1] = uStack_b8._4_4_;
          puVar19[2] = uStack_b0;
          puVar19[3] = uStack_ac;
          param_6[2] = lVar5 + 1;
          if (((*(char *)(*plStack_f0 + 0x40a) == '\0') && (*pcStack_60 == '\x01')) &&
             (pcStack_60[1] == '\0')) {
            *puVar7 = uVar16;
            uStack_13c = pdb_140a44d70(0);
            uStack_140 = 0xca;
            uStack_4a = 1;
            uVar10 = pdb_140a44d60(1);
            uStack_e8 = CONCAT44(CONCAT22(uStack_e8._6_2_,uVar10),0xca);
            uStack_4a = 0;
            pdb_1420c0160(auStack_170,&uStack_140,&uStack_e8);
            uStack_e8 = 0x1000000c7;
            pdb_1420c0330(&uStack_a0,auStack_170,&uStack_e8);
            uStack_70 = 0x400;
            uStack_b8 = CONCAT44(uStack_b8._4_4_,7);
            lVar5 = param_6[5];
            if (lVar5 == param_6[3]) {
              pdb_142d8d780(param_6 + 3);
            }
            lVar11 = param_6[4];
            lVar12 = lVar5 * 0x50;
            puVar2 = (undefined8 *)(lVar11 + 0x40 + lVar12);
            *puVar2 = uStack_78;
            puVar2[1] = CONCAT62(uStack_6e,uStack_70);
            puVar2 = (undefined8 *)(lVar11 + 0x30 + lVar12);
            *puVar2 = CONCAT71(uStack_87,uStack_88);
            puVar2[1] = uStack_80;
            puVar2 = (undefined8 *)(lVar11 + 0x20 + lVar12);
            *puVar2 = CONCAT44(uStack_94,uStack_98);
            puVar2[1] = CONCAT44(uStack_8c,uStack_90);
            puVar2 = (undefined8 *)(lVar11 + 0x10 + lVar12);
            *puVar2 = CONCAT44(uStack_a4,uStack_a8);
            puVar2[1] = CONCAT44(uStack_9c,uStack_a0);
            *(undefined8 *)(lVar11 + lVar12) = uStack_b8;
            ((undefined8 *)(lVar11 + lVar12))[1] = CONCAT44(uStack_ac,uStack_b0);
            param_6[5] = lVar5 + 1;
          }
        }
        return;
      }
      lVar1 = lVar12 + 0x10;
      lVar11 = 0;
      *puVar4 = *puVar4 + 1;
      cVar3 = *(char *)(lVar12 + 8);
      *puVar7 = uVar16;
      lVar12 = lVar1;
      if (cVar3 == '\0') goto LAB_142897630;
LAB_142897688:
      pcVar13[1] = '\x01';
      *puVar19 = uStack_54;
      lVar1 = *(longlong *)(lVar5 + 0x30);
      uVar8 = *(undefined8 *)(lVar5 + 0x40);
      if (lVar1 == *(longlong *)(lVar5 + 0x20)) {
        pdb_142d7e980(lVar5 + 0x20);
        pcVar13 = pcStack_60;
        lVar15 = lStack_110;
        puVar19 = puStack_100;
        lVar20 = lStack_108;
        uVar16 = uStack_50;
      }
      lVar9 = *(longlong *)(lVar5 + 0x28);
      *(undefined8 *)(lVar9 + lVar1 * 0x10) = uVar8;
      *(undefined1 *)(lVar9 + 8 + lVar1 * 0x10) = 4;
      *(longlong *)(lVar5 + 0x30) = lVar1 + 1;
      *(longlong *)(lVar5 + 0x40) = *(longlong *)(lVar5 + 0x40) + 1;
    }
    lVar1 = lVar11 + 0x10;
    *puVar4 = *puVar4 + 1;
    cVar3 = *(char *)(lVar11 + 8);
    *puVar7 = uVar16;
    lVar11 = lVar1;
    if (cVar3 != '\0') goto LAB_142897688;
LAB_142897630:
    *pcVar13 = '\x01';
  } while( true );
}

