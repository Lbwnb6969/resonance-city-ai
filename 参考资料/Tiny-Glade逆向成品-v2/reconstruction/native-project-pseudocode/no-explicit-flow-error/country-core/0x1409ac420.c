// VA 0x1409ac420, PDB extent 1204 bytes
// country_core::systems::render_loop::draw_passes::main_pass::late_forward_and_deferred_pass
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/main_pass.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::render_loop::draw_passes::main_pass::late_forward_and_deferred_pass
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/main_pass.rs
   Extent: 1204 */

void pdb_1409ac420(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined *param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  code *pcVar5;
  char cVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined *puVar9;
  longlong *plVar10;
  undefined8 uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  undefined *puVar15;
  longlong *plVar16;
  longlong lVar17;
  undefined **ppuVar18;
  undefined4 auStack_f0 [2];
  longlong lStack_e8;
  ulonglong uStack_d0;
  longlong lStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b0;
  longlong lStack_a8;
  undefined4 uStack_a0;
  longlong lStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  longlong *plStack_70;
  undefined1 *puStack_68;
  longlong *plStack_60;
  longlong *plStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  cVar6 = pdb_140e94b40();
  plStack_58 = (longlong *)CONCAT71(plStack_58._1_7_,cVar6);
  lVar7 = param_3;
  lVar17 = param_2;
  uStack_80 = param_4;
  if (cVar6 == '\0') goto LAB_1409ac5fa;
  puVar15 = &UNK_14302a468;
  ppuVar18 = (undefined **)0x5a;
  uVar13 = 0x5a;
  lVar7 = pdb_1409b4de0(&UNK_14302a468);
  if (lVar7 == 1) {
    if (uVar13 < 0x5b) {
      puVar15 = &UNK_14302a468;
      uVar8 = pdb_1409b4de0(&UNK_14302a468);
      if ((uVar8 & 1) != 0) {
        if (0x5a < uVar13 + 2) goto LAB_1409ac7d5;
        ppuVar18 = (undefined **)(0x58 - uVar13);
        puVar15 = &UNK_14302a46a + uVar13;
      }
      goto LAB_1409ac4c7;
    }
  }
  else {
LAB_1409ac4c7:
    puVar9 = &UNK_143029428;
    plVar16 = (longlong *)&UNK_1430293e4;
    do {
      pbVar1 = puVar9 + -1;
      uVar12 = (uint)(char)*pbVar1;
      if ((int)uVar12 < 0) {
        bVar3 = puVar9[-2];
        if ((char)bVar3 < -0x40) {
          bVar4 = puVar9[-3];
          if ((char)bVar4 < -0x40) {
            pbVar2 = puVar9 + -4;
            puVar9 = puVar9 + -4;
            uVar12 = bVar4 & 0x3f | (*pbVar2 & 7) << 6;
          }
          else {
            puVar9 = puVar9 + -3;
            uVar12 = bVar4 & 0xf;
          }
          uVar12 = bVar3 & 0x3f | uVar12 << 6;
        }
        else {
          puVar9 = puVar9 + -2;
          uVar12 = bVar3 & 0x1f;
        }
        uVar12 = (uint)(*pbVar1 & 0x3f) | uVar12 << 6;
        if (uVar12 != 0x5c) goto LAB_1409ac559;
LAB_1409ac575:
        if ((undefined *)0x44 < puVar9 + -0x1430293e3) goto LAB_1409ac792;
        puVar14 = (undefined1 *)(0x43 - (longlong)(puVar9 + -0x1430293e4));
        plVar16 = (longlong *)(puVar9 + 1);
        goto LAB_1409ac598;
      }
      puVar9 = puVar9 + -1;
      if (uVar12 == 0x5c) goto LAB_1409ac575;
LAB_1409ac559:
      if (uVar12 == 0x2f) goto LAB_1409ac575;
    } while (puVar9 != &UNK_1430293e4);
    puVar14 = (undefined1 *)0x44;
LAB_1409ac598:
    plVar10 = (longlong *)pdb_140e97000();
    if ((char)plVar10[0xd] != '\x01') goto LAB_1409ac762;
    do {
      if (*plVar10 == 0) {
        *plVar10 = -1;
        plStack_60 = plVar10;
        uVar11 = pdb_140e94f10(plVar10 + 1,puVar15,ppuVar18,plVar16,puVar14,1,0);
        *plStack_60 = *plStack_60 + 1;
        lVar7 = param_3;
        lVar17 = param_2;
        plStack_60 = (longlong *)uVar11;
LAB_1409ac5fa:
        uStack_49 = 0;
        param_2 = lVar7 + 0x18;
        auStack_f0[0] = 0;
        uStack_d0 = 0;
        uStack_c0 = 0;
        puStack_78 = param_5;
        plVar16 = &lStack_88;
        puVar14 = &uStack_49;
        ppuVar18 = &puStack_78;
        lStack_e8 = lVar7;
        lStack_c8 = param_2;
        lStack_88 = lVar17;
        plStack_70 = plVar16;
        puStack_68 = puVar14;
        pdb_141751d90(param_1,&UNK_143029488,0xd,auStack_f0,ppuVar18);
        auStack_f0[0] = 0;
        param_3 = lVar7 + 0x30;
        uStack_d0 = uStack_d0 & 0xffffffff00000000;
        uStack_b0 = 0;
        uStack_a0 = 0;
        puStack_78 = param_5;
        lStack_e8 = lVar7;
        lStack_c8 = param_3;
        lStack_a8 = param_2;
        plStack_70 = plVar16;
        puStack_68 = puVar14;
        pdb_141757690(param_1,&UNK_143029495,0x16,auStack_f0,ppuVar18);
        auStack_f0[0] = 0;
        lStack_e8 = uStack_80;
        uStack_d0 = 0;
        uStack_c0 = 0;
        puStack_78 = param_5;
        lStack_c8 = param_2;
        plStack_70 = plVar16;
        puStack_68 = puVar14;
        pdb_141757c10(param_1,&UNK_1430294ab,0xc,auStack_f0,ppuVar18);
        if ((char)plStack_58 == '\0') {
          return;
        }
        plVar10 = (longlong *)pdb_140e97000();
        if (((char)plVar10[0xd] != '\x01') &&
           (plVar10 = (longlong *)pdb_142d8ec20(plVar10,0), plVar10 == (longlong *)0x0)) break;
        puVar15 = param_5;
        if (*plVar10 == 0) {
          *plVar10 = -1;
          plStack_58 = plVar10;
          pdb_140e95370(plVar10 + 1,plStack_60);
          *plStack_58 = *plStack_58 + 1;
          return;
        }
      }
      plVar10 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_1409ac762:
      plVar10 = (longlong *)pdb_142d8ec20(plVar10,0);
    } while (plVar10 != (longlong *)0x0);
    pdb_142dc7890(&UNK_143326860);
LAB_1409ac792:
    pdb_142dc8070(&UNK_1430293e4,0x44);
  }
  pdb_142dc8070(&UNK_14302a468,0x5a,0);
LAB_1409ac7d5:
  pdb_142dc8070(&UNK_14302a468,0x5a);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

