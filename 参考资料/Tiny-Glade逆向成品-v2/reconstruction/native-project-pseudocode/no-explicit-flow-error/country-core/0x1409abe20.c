// VA 0x1409abe20, PDB extent 1524 bytes
// country_core::systems::render_loop::draw_passes::main_pass::main_pass_oc2
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/main_pass.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::render_loop::draw_passes::main_pass::main_pass_oc2
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/main_pass.rs
   Extent: 1524 */

void pdb_1409abe20(longlong param_1,undefined8 ******param_2,longlong param_3,undefined8 param_4,
                  undefined *param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  code *pcVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined *puVar9;
  longlong *plVar10;
  undefined8 uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 ******ppppppuVar17;
  undefined1 *puVar18;
  undefined8 *****pppppuStack_d8;
  undefined4 auStack_d0 [2];
  longlong lStack_c8;
  ulonglong uStack_b0;
  undefined *puStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined4 uStack_80;
  undefined *puStack_78;
  undefined8 *****pppppuStack_70;
  undefined1 *puStack_68;
  longlong *plStack_60;
  longlong *plStack_58;
  undefined1 uStack_4a;
  char cStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  plStack_60 = (longlong *)param_4;
  cStack_49 = pdb_140e94b40();
  if (cStack_49 == '\0') {
    lVar7 = *(longlong *)(param_1 + 0x130);
    ppppppuVar17 = param_2;
    if (lVar7 == *(longlong *)(param_1 + 0x120)) goto LAB_1409ac026;
    goto LAB_1409ac033;
  }
  puVar15 = &UNK_14302a50d;
  puVar18 = (undefined1 *)0x49;
  uVar13 = 0x49;
  lVar7 = pdb_1409b4de0(&UNK_14302a50d);
  if (lVar7 == 1) {
    if (uVar13 < 0x4a) {
      puVar15 = &UNK_14302a50d;
      uVar8 = pdb_1409b4de0(&UNK_14302a50d);
      if ((uVar8 & 1) != 0) {
        if (0x49 < uVar13 + 2) goto LAB_1409ac311;
        puVar18 = (undefined1 *)(0x47 - uVar13);
        puVar15 = &UNK_14302a50f + uVar13;
      }
      goto LAB_1409abec4;
    }
  }
  else {
LAB_1409abec4:
    puVar9 = &UNK_143029428;
    puVar16 = &UNK_1430293e4;
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
        if (uVar12 != 0x5c) goto LAB_1409abf59;
LAB_1409abf8d:
        if ((undefined *)0x44 < puVar9 + -0x1430293e3) goto LAB_1409ac2ce;
        ppuVar14 = (undefined **)(0x43 - (longlong)(puVar9 + -0x1430293e4));
        puVar16 = puVar9 + 1;
        goto LAB_1409abfb0;
      }
      puVar9 = puVar9 + -1;
      if (uVar12 == 0x5c) goto LAB_1409abf8d;
LAB_1409abf59:
      if (uVar12 == 0x2f) goto LAB_1409abf8d;
    } while (puVar9 != &UNK_1430293e4);
    ppuVar14 = (undefined **)0x44;
LAB_1409abfb0:
    plVar10 = (longlong *)pdb_140e97000();
    if ((char)plVar10[0xd] != '\x01') goto LAB_1409ac29a;
    do {
      if (*plVar10 == 0) {
        *plVar10 = -1;
        plStack_58 = plVar10;
        uVar11 = pdb_140e94f10(plVar10 + 1,puVar15,puVar18,puVar16,ppuVar14,1,0);
        *plStack_58 = *plStack_58 + 1;
        lVar7 = *(longlong *)(param_1 + 0x130);
        ppppppuVar17 = param_2;
        plStack_58 = (longlong *)uVar11;
        if (lVar7 == *(longlong *)(param_1 + 0x120)) {
LAB_1409ac026:
          pdb_142d8afd0(param_1 + 0x120);
          ppppppuVar17 = param_2;
        }
LAB_1409ac033:
        puVar15 = (undefined *)(param_3 + 0x18);
        lVar5 = *(longlong *)(param_1 + 0x128);
        *(undefined **)(lVar5 + lVar7 * 0x10) = &UNK_143029428;
        *(undefined8 *)(lVar5 + 8 + lVar7 * 0x10) = 0xe;
        *(longlong *)(param_1 + 0x130) = lVar7 + 1;
        uStack_4a = 0;
        auStack_d0[0] = 0;
        uStack_b0 = 0;
        uStack_a0 = 0;
        puStack_78 = param_5;
        param_2 = &pppppuStack_d8;
        puVar18 = &uStack_4a;
        ppuVar14 = &puStack_78;
        pppppuStack_d8 = ppppppuVar17;
        lStack_c8 = param_3;
        puStack_a8 = puVar15;
        pppppuStack_70 = param_2;
        puStack_68 = puVar18;
        pdb_141758190(param_1,&UNK_143029436,0xd,auStack_d0,ppuVar14);
        auStack_d0[0] = 0;
        uStack_b0 = uStack_b0 & 0xffffffff00000000;
        puStack_a8 = (undefined *)plStack_60;
        uStack_90 = 0;
        uStack_80 = 0;
        puStack_78 = param_5;
        lStack_c8 = param_3;
        puStack_88 = puVar15;
        pppppuStack_70 = param_2;
        puStack_68 = puVar18;
        pdb_141761320(param_1,&UNK_143029443,0x16,auStack_d0,ppuVar14);
        auStack_d0[0] = 0;
        uStack_b0 = uStack_b0 & 0xffffffff00000000;
        uStack_90 = 0;
        uStack_80 = 0;
        puStack_78 = param_5;
        lStack_c8 = param_3;
        puStack_a8 = (undefined *)(param_3 + 0x30);
        puStack_88 = puVar15;
        pppppuStack_70 = param_2;
        puStack_68 = puVar18;
        pdb_141755060(param_1,&UNK_143029459,0x16,auStack_d0,ppuVar14);
        auStack_d0[0] = 0;
        lStack_c8 = (longlong)plStack_60;
        uStack_b0 = 0;
        uStack_a0 = 0;
        puStack_a8 = puVar15;
        pdb_141754ae0(param_1,&UNK_14302946f,0xc,auStack_d0,param_5,param_2);
        auStack_d0[0] = 0;
        uStack_b0 = 1;
        uStack_a0 = 0;
        puStack_78 = param_5;
        lStack_c8 = param_3 + 0x30;
        puStack_a8 = puVar15;
        pppppuStack_70 = param_2;
        puStack_68 = puVar18;
        pdb_14175f370(param_1,&UNK_14302947b,0xd,auStack_d0,ppuVar14);
        param_3 = *(longlong *)(param_1 + 0x130);
        if (param_3 == *(longlong *)(param_1 + 0x120)) {
          pdb_142d8afd0(param_1 + 0x120);
        }
        *(undefined8 *)(*(longlong *)(param_1 + 0x128) + param_3 * 0x10) = 0;
        param_3 = param_3 + 1;
        *(longlong *)(param_1 + 0x130) = param_3;
        if (cStack_49 == '\0') {
          return;
        }
        plVar10 = (longlong *)pdb_140e97000();
        if (((char)plVar10[0xd] != '\x01') &&
           (plVar10 = (longlong *)pdb_142d8ec20(plVar10,0), plVar10 == (longlong *)0x0)) break;
        puVar16 = param_5;
        if (*plVar10 == 0) {
          *plVar10 = -1;
          plStack_60 = plVar10;
          pdb_140e95370(plVar10 + 1);
          *plStack_60 = *plStack_60 + 1;
          return;
        }
      }
      plVar10 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_1409ac29a:
      plVar10 = (longlong *)pdb_142d8ec20(plVar10,0);
    } while (plVar10 != (longlong *)0x0);
    pdb_142dc7890(&UNK_143326860);
LAB_1409ac2ce:
    pdb_142dc8070(&UNK_1430293e4,0x44);
  }
  pdb_142dc8070(&UNK_14302a50d,0x49,0);
LAB_1409ac311:
  pdb_142dc8070(&UNK_14302a50d,0x49);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

