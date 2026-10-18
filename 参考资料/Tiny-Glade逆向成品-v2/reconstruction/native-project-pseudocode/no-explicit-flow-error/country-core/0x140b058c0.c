// VA 0x140b058c0, PDB extent 1525 bytes
// country_core::systems::mesh_follow_terrain::mesh_follow_terrain
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mesh_follow_terrain.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::mesh_follow_terrain::mesh_follow_terrain
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mesh_follow_terrain.rs
   Extent: 1525 */

void pdb_140b058c0(uint *param_1,undefined8 *param_2,undefined8 param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  code *pcVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined *puVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  uint *puVar15;
  undefined *puVar16;
  longlong lVar17;
  undefined1 auStack_110 [24];
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
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
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 *puStack_88;
  undefined8 uStack_80;
  longlong lStack_78;
  longlong lStack_70;
  undefined8 uStack_68;
  undefined4 uStack_5c;
  longlong *plStack_58;
  char cStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lVar17 = 0;
  uStack_80 = param_3;
  cStack_49 = pdb_140e94b40();
  if (cStack_49 == '\0') {
    uStack_a0 = 0;
    goto LAB_140b05a9a;
  }
  puVar15 = (uint *)&UNK_143053937;
  lVar13 = 0x3f;
  uVar12 = 0x3f;
  lVar7 = pdb_140b05ec0(&UNK_143053937);
  if (lVar7 == 1) {
    if (0x3f < uVar12) {
LAB_140b05d8d:
      pdb_142dc8070(&UNK_143053937,0x3f,0);
LAB_140b05dad:
      pdb_142dc8070(&UNK_143053937,0x3f);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    puVar15 = (uint *)&UNK_143053937;
    uVar8 = pdb_140b05ec0(&UNK_143053937);
    if ((uVar8 & 1) != 0) {
      if (0x3f < uVar12 + 2) goto LAB_140b05dad;
      lVar13 = 0x3d - uVar12;
      puVar15 = (uint *)(&UNK_143053939 + uVar12);
    }
  }
  puVar9 = &UNK_14305360d;
  puVar16 = &UNK_1430535d7;
  do {
    pbVar1 = puVar9 + -1;
    uVar11 = (uint)(char)*pbVar1;
    if ((int)uVar11 < 0) {
      bVar4 = puVar9[-2];
      if ((char)bVar4 < -0x40) {
        bVar5 = puVar9[-3];
        if ((char)bVar5 < -0x40) {
          pbVar2 = puVar9 + -4;
          puVar9 = puVar9 + -4;
          uVar11 = bVar5 & 0x3f | (*pbVar2 & 7) << 6;
        }
        else {
          puVar9 = puVar9 + -3;
          uVar11 = bVar5 & 0xf;
        }
        uVar11 = bVar4 & 0x3f | uVar11 << 6;
      }
      else {
        puVar9 = puVar9 + -2;
        uVar11 = bVar4 & 0x1f;
      }
      uVar11 = (uint)(*pbVar1 & 0x3f) | uVar11 << 6;
      if (uVar11 != 0x5c) goto LAB_140b059f9;
LAB_140b05a15:
      if ((undefined *)0x36 < puVar9 + -0x1430535d6) {
        pdb_142dc8070(&UNK_1430535d7,0x36,puVar9 + -0x1430535d6,0x36,&UNK_143053ac8);
        goto LAB_140b05d8d;
      }
      uVar12 = 0x35 - (longlong)(puVar9 + -0x1430535d7);
      puVar16 = puVar9 + 1;
      goto LAB_140b05a38;
    }
    puVar9 = puVar9 + -1;
    if (uVar11 == 0x5c) goto LAB_140b05a15;
LAB_140b059f9:
    if (uVar11 == 0x2f) goto LAB_140b05a15;
  } while (puVar9 != &UNK_1430535d7);
  uVar12 = 0x36;
LAB_140b05a38:
  plVar10 = (longlong *)pdb_140e97000();
  if ((char)plVar10[0xd] != '\x01') goto LAB_140b05d16;
LAB_140b05a47:
  if (*plVar10 == 0) {
    *plVar10 = -1;
    plStack_58 = plVar10;
    uStack_98 = pdb_140e94f10(plVar10 + 1,puVar15,lVar13,puVar16,uVar12,1,0);
    *plStack_58 = *plStack_58 + 1;
    uStack_a0 = 1;
    uStack_68 = uStack_98;
LAB_140b05a9a:
    lStack_70 = *(longlong *)param_1;
    lVar13 = *(longlong *)(param_1 + 2);
    puVar15 = *(uint **)(lStack_70 + 0xf8);
    param_1 = puVar15 + *(longlong *)(lStack_70 + 0x100);
    plStack_58 = (longlong *)CONCAT71(plStack_58._1_7_,*(undefined1 *)(lStack_70 + 0x108));
    uStack_5c = *(undefined4 *)((longlong)param_2 + 0x1c);
    uStack_90 = *param_2;
    puStack_88 = (undefined4 *)param_2[2];
    lStack_78 = 8;
    puVar16 = (undefined *)0x0;
    uVar12 = 0;
    do {
      if ((char)plStack_58 == '\0') {
        if ((int)uVar12 == (int)lVar17) {
          do {
            if (puVar15 == param_1) goto LAB_140b05ca4;
            uVar11 = *puVar15;
            puVar15 = puVar15 + 1;
            lVar17 = *(longlong *)(*(longlong *)(lVar13 + 0x100) + 0x58 + (ulonglong)uVar11 * 0xa0);
          } while (lVar17 == 0);
          lVar7 = *(longlong *)(lVar13 + 0x100) + (ulonglong)uVar11 * 0xa0;
          uVar12 = (ulonglong)*(uint *)(lVar7 + 0x94);
          if (*(ulonglong *)(lStack_70 + 0x110) <
              *(ulonglong *)(*(longlong *)(lVar13 + 0x1a0) + 0x40 + uVar12 * 0x48)) {
            lVar3 = *(longlong *)(lVar13 + 0x1a0) + uVar12 * 0x48;
            uVar12 = *(ulonglong *)
                      (*(longlong *)(lVar3 + 0x38) + *(ulonglong *)(lStack_70 + 0x110) * 8);
            if (uVar12 == 0) goto LAB_140b05c00;
            puVar16 = *(undefined **)(*(longlong *)(lVar3 + 0x18) + 0x10 + ~uVar12 * 0x30);
          }
          else {
LAB_140b05c00:
            puVar16 = (undefined *)0x0;
          }
          lStack_78 = *(longlong *)(lVar7 + 0x50);
          uVar12 = 0;
        }
        iVar14 = (int)uVar12;
        uVar12 = (ulonglong)~*(uint *)(lStack_78 + 8 + uVar12 * 0x10);
      }
      else {
        if ((int)uVar12 == (int)lVar17) {
          do {
            if (puVar15 == param_1) goto LAB_140b05ca4;
            uVar11 = *puVar15;
            puVar15 = puVar15 + 1;
            lVar17 = *(longlong *)(*(longlong *)(lVar13 + 0x1a0) + 0x10 + (ulonglong)uVar11 * 0x48);
          } while (lVar17 == 0);
          lVar7 = *(longlong *)(lVar13 + 0x1a0) + (ulonglong)uVar11 * 0x48;
          if ((*(ulonglong *)(lStack_70 + 0x110) < *(ulonglong *)(lVar7 + 0x40)) &&
             (uVar12 = *(ulonglong *)
                        (*(longlong *)(lVar7 + 0x38) + *(ulonglong *)(lStack_70 + 0x110) * 8),
             uVar12 != 0)) {
            puVar16 = *(undefined **)(*(longlong *)(lVar7 + 0x18) + 0x10 + ~uVar12 * 0x30);
          }
          else {
            puVar16 = (undefined *)0x0;
          }
          uVar12 = 0;
        }
        iVar14 = (int)uVar12;
      }
      if (puVar16[uVar12 * 0x10] != '\0') goto LAB_140b05d4f;
      *puStack_88 = uStack_5c;
      param_2 = (undefined8 *)pdb_140a2d890(uStack_90,*(undefined8 *)(puVar16 + uVar12 * 0x10 + 8));
      if (param_2 == (undefined8 *)0x0) {
        pdb_142dc8110(&UNK_14305360d,0x2c,&UNK_143053640);
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      pdb_140a97aa0(&uStack_f8,param_2);
      uStack_c8 = uStack_e8;
      uStack_c4 = uStack_e4;
      uStack_c0 = uStack_e0;
      uStack_bc = uStack_dc;
      uStack_d8 = uStack_f8;
      uStack_d4 = uStack_f4;
      uStack_d0 = uStack_f0;
      uStack_cc = uStack_ec;
      uStack_b8 = uStack_80;
      pdb_1415fd120(auStack_110,&uStack_d8);
      uVar12 = (ulonglong)(iVar14 + 1);
      pdb_140c93200(param_2,&UNK_143053658,0xf,auStack_110);
    } while( true );
  }
  goto LAB_140b05d0a;
LAB_140b05ca4:
  if (cStack_49 != '\0') {
    plVar10 = (longlong *)pdb_140e97000();
    if (((char)plVar10[0xd] != '\x01') &&
       (plVar10 = (longlong *)pdb_142d8ec20(plVar10,0), plVar10 == (longlong *)0x0))
    goto LAB_140b05d42;
    if (*plVar10 != 0) {
LAB_140b05d0a:
      plVar10 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_140b05d16:
      plVar10 = (longlong *)pdb_142d8ec20(plVar10,0);
      if (plVar10 == (longlong *)0x0) {
LAB_140b05d42:
        pdb_142dc7890(&UNK_143326860);
LAB_140b05d4f:
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_143053667,0x47,&UNK_143053690);
      }
      goto LAB_140b05a47;
    }
    *plVar10 = -1;
    plStack_58 = plVar10;
    pdb_140e95370(plVar10 + 1);
    *plStack_58 = *plStack_58 + 1;
  }
  return;
}

