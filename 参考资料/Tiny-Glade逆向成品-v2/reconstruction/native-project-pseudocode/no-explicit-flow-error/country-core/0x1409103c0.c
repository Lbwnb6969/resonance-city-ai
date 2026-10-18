// VA 0x1409103c0, PDB extent 1518 bytes
// country_core::systems::prefab::despawn_prefabs
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/prefab.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::prefab::despawn_prefabs
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/prefab.rs
   Extent: 1518 */

void pdb_1409103c0(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  int *piVar14;
  longlong *plVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined *puVar18;
  undefined *puVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong *puVar22;
  longlong unaff_R14;
  longlong lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  longlong lStack_c0;
  longlong lStack_b8;
  undefined4 *puStack_b0;
  undefined8 uStack_a8;
  undefined4 *puStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  longlong lStack_80;
  longlong *plStack_78;
  longlong *plStack_70;
  char cStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  cStack_61 = pdb_140e94b40();
  plStack_70 = param_4;
  if (cStack_61 == '\0') {
    uStack_e0 = 0;
    goto LAB_140910594;
  }
  puVar18 = &UNK_14301f697;
  unaff_R14 = 0x2e;
  uVar16 = 0x2e;
  lVar11 = pdb_1409135d0(&UNK_14301f697);
  if (lVar11 == 1) {
    if (uVar16 < 0x2f) {
      puVar18 = &UNK_14301f697;
      uVar12 = pdb_1409135d0(&UNK_14301f697);
      if ((uVar12 & 1) != 0) {
        if (0x2e < uVar16 + 2) goto LAB_1409108a3;
        unaff_R14 = 0x2c - uVar16;
        puVar18 = &UNK_14301f699 + uVar16;
      }
      goto LAB_14091046b;
    }
  }
  else {
LAB_14091046b:
    puVar19 = &UNK_14301f36b;
    puVar22 = (ulonglong *)&UNK_14301f342;
    do {
      bVar2 = puVar19[-1];
      uVar10 = (uint)(char)bVar2;
      if ((char)bVar2 < '\0') {
        bVar3 = puVar19[-2];
        if ((char)bVar3 < -0x40) {
          bVar4 = puVar19[-3];
          if ((char)bVar4 < -0x40) {
            pbVar1 = puVar19 + -4;
            puVar19 = puVar19 + -4;
            uVar10 = bVar4 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar19 = puVar19 + -3;
            uVar10 = bVar4 & 0xf;
          }
          uVar10 = bVar3 & 0x3f | uVar10 << 6;
        }
        else {
          puVar19 = puVar19 + -2;
          uVar10 = bVar3 & 0x1f;
        }
        uVar10 = (uint)(bVar2 & 0x3f) | uVar10 << 6;
        if (uVar10 != 0x5c) goto LAB_1409104f4;
LAB_14091050c:
        if ((undefined *)0x29 < puVar19 + -0x14301f341) goto LAB_140910860;
        lVar11 = 0x29 - (longlong)(puVar19 + -0x14301f341);
        puVar22 = (ulonglong *)(puVar19 + 1);
        goto LAB_14091052e;
      }
      puVar19 = puVar19 + -1;
      if (uVar10 == 0x5c) goto LAB_14091050c;
LAB_1409104f4:
      if (uVar10 == 0x2f) goto LAB_14091050c;
    } while (puVar19 != &UNK_14301f342);
    lVar11 = 0x29;
LAB_14091052e:
    plVar13 = (longlong *)pdb_140e97000();
    if ((char)plVar13[0xd] != '\x01') goto LAB_140910830;
    do {
      if (*plVar13 == 0) {
        *plVar13 = -1;
        plStack_78 = plVar13;
        uStack_d8 = pdb_140e94f10(plVar13 + 1,puVar18,unaff_R14,puVar22,lVar11,1,0);
        *plStack_78 = *plStack_78 + 1;
        uStack_e0 = 1;
        uStack_98 = uStack_d8;
LAB_140910594:
        *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
        puVar22 = (ulonglong *)*param_2;
        lVar11 = param_2[1];
        uVar16 = *puVar22;
        uVar20 = 0;
        uVar12 = uVar16 - *(ulonglong *)(lVar11 + 0x18);
        if (uVar16 < *(ulonglong *)(lVar11 + 0x18)) {
          uVar12 = uVar20;
        }
        uVar21 = uVar16 - *(ulonglong *)(lVar11 + 0x38);
        if (uVar16 < *(ulonglong *)(lVar11 + 0x38)) {
          uVar21 = uVar20;
        }
        plVar13 = (longlong *)(uVar12 * 0x10 + *(longlong *)(lVar11 + 8));
        uVar16 = *(ulonglong *)(lVar11 + 0x10) - uVar12;
        if (*(ulonglong *)(lVar11 + 0x10) < uVar12) {
          plVar13 = (longlong *)0x8;
          uVar16 = uVar20;
        }
        plVar15 = (longlong *)(uVar21 * 0x10 + *(longlong *)(lVar11 + 0x28));
        uVar12 = *(ulonglong *)(lVar11 + 0x30) - uVar21;
        if (*(ulonglong *)(lVar11 + 0x30) < uVar21) {
          plVar15 = (longlong *)0x8;
          uVar12 = uVar20;
        }
        lStack_c0 = *param_3;
        *puVar22 = (*(longlong *)(lVar11 + 0x40) - uVar12) - uVar16;
        plStack_78 = plVar15 + uVar12 * 2;
        lStack_80 = *param_1;
        lVar11 = param_1[1];
        uStack_8c = *(undefined4 *)((longlong)param_1 + 0x14);
        uStack_88 = *(undefined4 *)((longlong)plStack_70 + 0x1c);
        lStack_b8 = *plStack_70;
        puStack_b0 = (undefined4 *)plStack_70[2];
        uStack_84 = *(undefined4 *)((longlong)param_5 + 0x1c);
        uStack_a8 = *param_5;
        puStack_a0 = (undefined4 *)param_5[2];
        uVar8 = *param_6;
        uVar9 = param_6[1];
        puVar18 = (undefined *)param_6[3];
        param_2 = (undefined8 *)param_6[2];
        plStack_70 = plVar13 + uVar16 * 2;
        if (plVar13 == (longlong *)0x0) goto LAB_1409106a0;
        do {
          if (plVar13 == plStack_70) goto LAB_1409106a0;
          param_1 = plVar13 + 2;
          while( true ) {
            *puVar22 = *puVar22 + 1;
            unaff_R14 = *plVar13;
            if (((((ulonglong)~(uint)unaff_R14 < *(ulonglong *)(lVar11 + 0x10)) &&
                 (piVar14 = (int *)((ulonglong)~(uint)unaff_R14 * 0x18 + *(longlong *)(lVar11 + 8)),
                 piVar14[4] == (int)((ulonglong)unaff_R14 >> 0x20))) && (*piVar14 != 0)) &&
               ((uVar16 = *(ulonglong *)(piVar14 + 2),
                (uVar16 & 0xffffffff) < *(ulonglong *)(lStack_80 + 0x38) &&
                ((*(ulonglong *)(*(longlong *)(lStack_80 + 0x28) + (uVar16 >> 6 & 0x3ffffff) * 8) >>
                  (uVar16 & 0x3f) & 1) != 0)))) {
              uVar10 = piVar14[1];
              lVar5 = *(longlong *)(*(longlong *)(lVar11 + 0x1a0) + 0x18 + (uVar16 >> 0x20) * 0x48);
              lVar17 = ~*(ulonglong *)
                         (*(longlong *)
                           (*(longlong *)(lVar11 + 0x1a0) + 0x38 + (uVar16 >> 0x20) * 0x48) +
                         *(longlong *)(lStack_80 + 0x110) * 8) * 0x30;
              lVar6 = *(longlong *)(lVar5 + 0x10 + lVar17);
              *(undefined4 *)(*(longlong *)(lVar5 + 0x28 + lVar17) + (ulonglong)~uVar10 * 4) =
                   uStack_8c;
              *puStack_b0 = uStack_88;
              *puStack_a0 = uStack_84;
              pdb_140911eb0((ulonglong)~uVar10 * 0x58 + lVar6,lStack_c0,lStack_b8,uStack_a8);
            }
            lStack_108 = unaff_R14;
            uStack_100 = uVar8;
            uStack_f8 = uVar9;
            puStack_f0 = param_2;
            puStack_e8 = puVar18;
            pdb_140f04aa0(&lStack_108,&UNK_14301f408);
            plVar13 = param_1;
            param_3 = plVar15;
            if (param_1 != (longlong *)0x0) break;
LAB_1409106a0:
            plVar13 = plVar15;
            if ((plVar13 == (longlong *)0x0) || (plVar13 == plStack_78)) {
              if (cStack_61 != '\0') {
                plVar13 = (longlong *)pdb_140e97000();
                if (((char)plVar13[0xd] != '\x01') &&
                   (plVar13 = (longlong *)pdb_142d8ec20(plVar13,0), plVar13 == (longlong *)0x0))
                goto LAB_140910854;
                if (*plVar13 != 0) goto LAB_140910824;
                *plVar13 = -1;
                plStack_70 = plVar13;
                pdb_140e95370(plVar13 + 1,uStack_98);
                *plStack_70 = *plStack_70 + 1;
              }
              return;
            }
            plVar15 = plVar13 + 2;
            param_1 = (longlong *)0x0;
          }
        } while( true );
      }
LAB_140910824:
      plVar13 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_140910830:
      plVar13 = (longlong *)pdb_142d8ec20(plVar13,0);
    } while (plVar13 != (longlong *)0x0);
LAB_140910854:
    pdb_142dc7890(&UNK_143326860);
LAB_140910860:
    pdb_142dc8070(&UNK_14301f342,0x29);
  }
  pdb_142dc8070(&UNK_14301f697,0x2e,0);
LAB_1409108a3:
  pdb_142dc8070(&UNK_14301f697,0x2e);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

