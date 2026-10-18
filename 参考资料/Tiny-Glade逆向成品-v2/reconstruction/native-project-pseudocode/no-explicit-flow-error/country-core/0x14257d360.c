// VA 0x14257d360, PDB extent 1005 bytes
// country_core::render::nani::systems::nani_flush_instance_updates
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/systems.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::render::nani::systems::nani_flush_instance_updates
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/systems.rs
   Extent: 1005 */

void pdb_14257d360(undefined8 *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  code *pcVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong unaff_RBX;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  longlong lVar15;
  
  cVar6 = pdb_140e94b40();
  if (cVar6 == '\0') goto LAB_14257d521;
  puVar13 = &UNK_14351c4f8;
  unaff_RBX = 0x40;
  uVar11 = 0x40;
  lVar8 = pdb_142585200(&UNK_14351c4f8);
  if (lVar8 == 1) {
    if (uVar11 < 0x41) {
      puVar13 = &UNK_14351c4f8;
      uVar9 = pdb_142585200(&UNK_14351c4f8);
      if ((uVar9 & 1) != 0) {
        if (0x40 < uVar11 + 2) goto LAB_14257d673;
        unaff_RBX = 0x3e - uVar11;
        puVar13 = &UNK_14351c4fa + uVar11;
      }
      goto LAB_14257d3f3;
    }
  }
  else {
LAB_14257d3f3:
    puVar12 = &UNK_14351bdcd;
    puVar14 = &UNK_14351bd9f;
    do {
      bVar2 = puVar12[-1];
      uVar7 = (uint)(char)bVar2;
      if ((char)bVar2 < '\0') {
        bVar3 = puVar12[-2];
        if ((char)bVar3 < -0x40) {
          bVar4 = puVar12[-3];
          if ((char)bVar4 < -0x40) {
            pbVar1 = puVar12 + -4;
            puVar12 = puVar12 + -4;
            uVar7 = bVar4 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar12 = puVar12 + -3;
            uVar7 = bVar4 & 0xf;
          }
          uVar7 = bVar3 & 0x3f | uVar7 << 6;
        }
        else {
          puVar12 = puVar12 + -2;
          uVar7 = bVar3 & 0x1f;
        }
        uVar7 = (uint)(bVar2 & 0x3f) | uVar7 << 6;
        if (uVar7 != 0x5c) goto LAB_14257d484;
LAB_14257d49d:
        if ((undefined *)0x2e < puVar12 + -0x14351bd9e) goto LAB_14257d630;
        lVar8 = 0x2e - (longlong)(puVar12 + -0x14351bd9e);
        puVar14 = puVar12 + 1;
        goto LAB_14257d4c0;
      }
      puVar12 = puVar12 + -1;
      if (uVar7 == 0x5c) goto LAB_14257d49d;
LAB_14257d484:
      if (uVar7 == 0x2f) goto LAB_14257d49d;
    } while (puVar12 != &UNK_14351bd9f);
    lVar8 = 0x2e;
LAB_14257d4c0:
    plVar10 = (longlong *)pdb_140e97000();
    if ((char)plVar10[0xd] != '\x01') goto LAB_14257d600;
    do {
      if (*plVar10 == 0) {
        *plVar10 = -1;
        unaff_RBX = pdb_140e94f10(plVar10 + 1,puVar13,unaff_RBX,puVar14,lVar8,1,0);
        *plVar10 = *plVar10 + 1;
LAB_14257d521:
        *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
        param_1 = (undefined8 *)(*(longlong *)*param_1 + 0x10);
        puVar13 = (undefined *)*param_2;
        param_2 = (undefined8 *)(puVar13 + 0x88);
        lVar8 = -0x7ffffffffffffffe;
        for (lVar15 = 0x1220; lVar15 != 0; lVar15 = lVar15 + -0xa0) {
          if (-0x7fffffffffffffff < (longlong)param_2[-9]) {
            pdb_141a85c90(param_2,param_1);
            (**(code **)(param_2[6] + 0x30))(param_2[5]);
          }
          param_2 = param_2 + 0x14;
        }
        *(undefined8 *)(puVar13 + 0x1348) = *(undefined8 *)(puVar13 + 0x1340);
        *(undefined8 *)(puVar13 + 0x1340) = 0;
        if (cVar6 == '\0') {
          return;
        }
        plVar10 = (longlong *)pdb_140e97000();
        if (((char)plVar10[0xd] != '\x01') &&
           (plVar10 = (longlong *)pdb_142d8ec20(plVar10,0), plVar10 == (longlong *)0x0)) break;
        puVar14 = (undefined *)0x0;
        if (*plVar10 == 0) {
          *plVar10 = -1;
          pdb_140e95370(plVar10 + 1,unaff_RBX);
          *plVar10 = *plVar10 + 1;
          return;
        }
      }
      plVar10 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_14257d600:
      plVar10 = (longlong *)pdb_142d8ec20(plVar10,0);
    } while (plVar10 != (longlong *)0x0);
    pdb_142dc7890(&UNK_143326860);
LAB_14257d630:
    pdb_142dc8070(&UNK_14351bd9f,0x2e);
  }
  pdb_142dc8070(&UNK_14351c4f8,0x40,0);
LAB_14257d673:
  pdb_142dc8070(&UNK_14351c4f8,0x40);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

