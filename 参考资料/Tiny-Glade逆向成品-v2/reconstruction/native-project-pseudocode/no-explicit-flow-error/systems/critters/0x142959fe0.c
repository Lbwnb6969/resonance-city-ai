// VA 0x142959fe0, PDB extent 1470 bytes
// system_critters::sheep::sheep_input_record_replay::sheep_input_record_replay
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/sheep/sheep_input_record_replay.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_critters::sheep::sheep_input_record_replay::sheep_input_record_replay
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/sheep/sheep_input_record_replay.rs
   Extent: 1470 */

void pdb_142959fe0(longlong *param_1,longlong *param_2,undefined8 *param_3,longlong *param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong lVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  uint *puVar19;
  undefined8 uStack_118;
  undefined8 uStack_110;
  longlong lStack_108;
  undefined8 uStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  longlong lStack_a8;
  longlong lStack_a0;
  undefined4 *puStack_98;
  longlong lStack_90;
  longlong lStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong uStack_78;
  longlong lStack_70;
  longlong lStack_68;
  longlong lStack_60;
  undefined4 uStack_54;
  undefined4 uStack_50;
  char cStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
  lVar13 = *param_2;
  uVar10 = 1;
  if ((longlong)*(ulonglong *)(lVar13 + 0x40) < 0) {
    uVar10 = *(ulonglong *)(lVar13 + 0x40) ^ 0x8000000000000000;
  }
  if (uVar10 < 2) {
    lVar8 = *param_1;
    lVar9 = param_1[1];
    lStack_f8 = *(longlong *)(lVar8 + 0xf8);
    lStack_f0 = lStack_f8 + *(longlong *)(lVar8 + 0x100) * 4;
    uStack_b8 = *(undefined1 *)(lVar8 + 0x108);
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_e8 = 8;
    uStack_e0 = 0;
    uStack_d8 = 8;
    uStack_118 = lVar9;
    uStack_110 = lVar9 + 0x198;
    lStack_108 = lVar9 + 0xf8;
    uStack_100 = lVar8;
    pdb_14229a3d0(&puStack_98,&uStack_118);
    plVar12 = (longlong *)pdb_140a6d780(lVar13);
    if (plVar12 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143604950);
    }
    if (*plVar12 != 0) {
      pub_1406abac0((byte *)plVar12[1],*plVar12 * 0xc,4);
    }
    plVar12[2] = lStack_88;
    *plVar12 = (longlong)puStack_98;
    plVar12[1] = lStack_90;
    lStack_f8 = *(longlong *)(lVar8 + 0xf8);
    lStack_f0 = lStack_f8 + *(longlong *)(lVar8 + 0x100) * 4;
    uStack_b8 = *(undefined1 *)(lVar8 + 0x108);
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_e8 = 8;
    uStack_e0 = 0;
    uStack_d8 = 8;
    uStack_118 = lVar9;
    uStack_110 = lVar9 + 0x198;
    lStack_108 = lVar9 + 0xf8;
    uStack_100 = lVar8;
    pdb_142299250(&puStack_98,&uStack_118);
    lVar13 = pdb_140a6d780(lVar13);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143604968);
    }
    if (*(longlong *)(lVar13 + 0x18) != 0) {
      pub_1406abac0(*(byte **)(lVar13 + 0x20),*(longlong *)(lVar13 + 0x18) << 2,4);
    }
    *(longlong *)(lVar13 + 0x28) = lStack_88;
    *(undefined4 **)(lVar13 + 0x18) = puStack_98;
    *(longlong *)(lVar13 + 0x20) = lStack_90;
  }
  else if ((1 < uVar10 - 3) &&
          ((*(char *)(*param_4 + 0xcb) != '\0' || (*(char *)*param_3 == '\x01')))) {
    lVar8 = pdb_140a6d550(lVar13,*(undefined8 *)(lVar13 + 0x48),&UNK_143604980);
    lStack_a0 = *param_1;
    lVar13 = param_1[1];
    uStack_54 = (undefined4)param_1[2];
    uStack_50 = *(undefined4 *)((longlong)param_1 + 0x14);
    puVar19 = *(uint **)(lStack_a0 + 0xf8);
    puVar1 = puVar19 + *(longlong *)(lStack_a0 + 0x100);
    cStack_49 = *(char *)(lStack_a0 + 0x108);
    puVar14 = *(undefined8 **)(lVar8 + 8);
    puVar2 = (undefined8 *)((longlong)puVar14 + *(longlong *)(lVar8 + 0x10) * 0xc);
    puVar18 = *(undefined4 **)(lVar8 + 0x20);
    puVar3 = puVar18 + *(longlong *)(lVar8 + 0x28);
    lVar8 = 0;
    lStack_a8 = 8;
    lStack_60 = 0;
    uStack_78 = 0;
    if (cStack_49 == '\0') goto LAB_14295a1d0;
    do {
      if ((int)uStack_78 == (int)lVar8) {
        do {
          if (puVar19 == puVar1) {
            return;
          }
          uVar4 = *puVar19;
          puVar19 = puVar19 + 1;
          lVar8 = *(longlong *)(*(longlong *)(lVar13 + 0x1a0) + 0x10 + (ulonglong)uVar4 * 0x48);
        } while (lVar8 == 0);
        lVar9 = *(longlong *)(lVar13 + 0x1a0) + (ulonglong)uVar4 * 0x48;
        lVar11 = *(longlong *)(lVar9 + 0x18);
        lVar9 = ~*(ulonglong *)(*(longlong *)(lVar9 + 0x38) + *(longlong *)(lStack_a0 + 0x110) * 8)
                * 0x30;
        lStack_60 = *(longlong *)(lVar11 + 0x10 + lVar9);
        lStack_70 = *(longlong *)(lVar11 + 0x20 + lVar9);
        lStack_68 = *(longlong *)(lVar11 + 0x28 + lVar9);
        uStack_78 = 0;
      }
      uVar10 = uStack_78 & 0xffffffff;
      puVar17 = (undefined4 *)(uVar10 * 0x30 + lStack_60);
      lVar9 = lStack_70 + uVar10 * 4;
      puStack_98 = puVar17;
      lStack_90 = lVar9;
      lStack_88 = lStack_68 + uVar10 * 4;
      uStack_80 = uStack_54;
      uStack_7c = uStack_50;
      plVar12 = &lStack_90;
      puVar15 = puVar14;
      while( true ) {
        if (puVar17 == (undefined4 *)0x0) {
          return;
        }
        if (puVar15 == puVar2) {
          return;
        }
        if (puVar18 == puVar3) {
          return;
        }
        puVar7 = (undefined4 *)plVar12[1];
        uVar5 = *(undefined4 *)((longlong)plVar12 + 0x14);
        uStack_78 = (ulonglong)((int)uStack_78 + 1);
        puVar14 = (undefined8 *)((longlong)puVar15 + 0xc);
        uVar6 = *(undefined4 *)(puVar15 + 1);
        uStack_110 = CONCAT44(uStack_110._4_4_,uVar6);
        uStack_118 = *puVar15;
        *puVar7 = uVar5;
        puVar17[6] = uVar6;
        *(longlong *)(puVar17 + 4) = uStack_118;
        uVar6 = *puVar18;
        puVar18 = puVar18 + 1;
        pdb_140f33a40(&uStack_118,CONCAT71((int7)((ulonglong)lVar9 >> 8),4),0,uVar6,0);
        *puVar7 = uVar5;
        *puVar17 = (undefined4)uStack_118;
        puVar17[1] = uStack_118._4_4_;
        puVar17[2] = (undefined4)uStack_110;
        puVar17[3] = uStack_110._4_4_;
        if (cStack_49 != '\0') break;
LAB_14295a1d0:
        if ((int)uStack_78 == (int)lVar8) {
          do {
            if (puVar19 == puVar1) {
              return;
            }
            uVar4 = *puVar19;
            puVar19 = puVar19 + 1;
            lVar8 = *(longlong *)(*(longlong *)(lVar13 + 0x100) + 0x58 + (ulonglong)uVar4 * 0xa0);
          } while (lVar8 == 0);
          lVar11 = *(longlong *)(lVar13 + 0x100) + (ulonglong)uVar4 * 0xa0;
          uVar10 = (ulonglong)*(uint *)(lVar11 + 0x94);
          lVar9 = *(longlong *)(*(longlong *)(lVar13 + 0x1a0) + 0x18 + uVar10 * 0x48);
          lVar16 = ~*(ulonglong *)
                     (*(longlong *)(*(longlong *)(lVar13 + 0x1a0) + 0x38 + uVar10 * 0x48) +
                     *(longlong *)(lStack_a0 + 0x110) * 8) * 0x30;
          lStack_60 = *(longlong *)(lVar9 + 0x10 + lVar16);
          lStack_70 = *(longlong *)(lVar9 + 0x20 + lVar16);
          lStack_68 = *(longlong *)(lVar9 + 0x28 + lVar16);
          lStack_a8 = *(longlong *)(lVar11 + 0x50);
          uStack_78 = 0;
          uVar10 = 0;
        }
        else {
          uVar10 = uStack_78 & 0xffffffff;
        }
        uVar10 = (ulonglong)~*(uint *)(lStack_a8 + 8 + uVar10 * 0x10);
        puVar17 = (undefined4 *)(uVar10 * 0x30 + lStack_60);
        lVar9 = lStack_70 + uVar10 * 4;
        lStack_108 = lStack_68 + uVar10 * 4;
        uStack_100 = CONCAT44(uStack_50,uStack_54);
        plVar12 = &uStack_110;
        puVar15 = puVar14;
        uStack_110 = lVar9;
      }
    } while( true );
  }
  return;
}

