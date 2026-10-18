// VA 0x140a02200, PDB extent 1121 bytes
// country_core::systems::world_raster::upload_world_raster_buffers_to_staging
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/world_raster.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::world_raster::upload_world_raster_buffers_to_staging
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/world_raster.rs
   Extent: 1121 */

void pdb_140a02200(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  code *pcVar7;
  char cVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined *puVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong unaff_RDI;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined *unaff_R12;
  undefined8 *puVar20;
  longlong unaff_R15;
  undefined8 *puStack_60;
  
  cVar8 = pdb_140e94b40();
  puVar13 = param_3;
  puVar20 = param_1;
  if (cVar8 == '\0') goto LAB_140a023e0;
  unaff_R12 = &UNK_1430359e4;
  unaff_R15 = 0x4b;
  uVar15 = 0x4b;
  lVar9 = pdb_140a0a4c0(&UNK_1430359e4);
  if (lVar9 == 1) {
    if (0x4b < uVar15) {
LAB_140a0254a:
      pdb_142dc8070(&UNK_1430359e4,0x4b,0);
LAB_140a0256a:
      pdb_142dc8070(&UNK_1430359e4,0x4b);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    unaff_R12 = &UNK_1430359e4;
    uVar10 = pdb_140a0a4c0(&UNK_1430359e4);
    if ((uVar10 & 1) != 0) {
      if (0x4b < uVar15 + 2) goto LAB_140a0256a;
      unaff_R15 = 0x49 - uVar15;
      unaff_R12 = &UNK_1430359e6 + uVar15;
    }
  }
  puVar11 = &UNK_1430350c7;
  puVar20 = (undefined8 *)&UNK_143035098;
  do {
    pbVar1 = puVar11 + -1;
    uVar14 = (uint)(char)*pbVar1;
    if ((int)uVar14 < 0) {
      bVar3 = puVar11[-2];
      if ((char)bVar3 < -0x40) {
        bVar4 = puVar11[-3];
        if ((char)bVar4 < -0x40) {
          pbVar2 = puVar11 + -4;
          puVar11 = puVar11 + -4;
          uVar14 = bVar4 & 0x3f | (*pbVar2 & 7) << 6;
        }
        else {
          puVar11 = puVar11 + -3;
          uVar14 = bVar4 & 0xf;
        }
        uVar14 = bVar3 & 0x3f | uVar14 << 6;
      }
      else {
        puVar11 = puVar11 + -2;
        uVar14 = bVar3 & 0x1f;
      }
      uVar14 = (uint)(*pbVar1 & 0x3f) | uVar14 << 6;
      if (uVar14 != 0x5c) goto LAB_140a02339;
LAB_140a02355:
      if (puVar11 + -0x143035097 < (undefined *)0x30) {
        unaff_RDI = 0x2e - (longlong)(puVar11 + -0x143035098);
        puVar20 = (undefined8 *)(puVar11 + 1);
        goto LAB_140a02378;
      }
      pdb_142dc8070(&UNK_143035098,0x2f,puVar11 + -0x143035097,0x2f,&UNK_143035b18);
      goto LAB_140a0254a;
    }
    puVar11 = puVar11 + -1;
    if (uVar14 == 0x5c) goto LAB_140a02355;
LAB_140a02339:
    if (uVar14 == 0x2f) goto LAB_140a02355;
  } while (puVar11 != &UNK_143035098);
  unaff_RDI = 0x2f;
LAB_140a02378:
  plVar12 = (longlong *)pdb_140e97000();
  puStack_60 = param_3;
  if ((char)plVar12[0xd] != '\x01') goto LAB_140a024e7;
  do {
    if (*plVar12 == 0) {
      *plVar12 = -1;
      unaff_R15 = pdb_140e94f10(plVar12 + 1,unaff_R12,unaff_R15,puVar20,unaff_RDI,1,0);
      *plVar12 = *plVar12 + 1;
      puVar13 = puStack_60;
      puVar20 = param_1;
LAB_140a023e0:
      param_1 = puVar13;
      puVar5 = (ulonglong *)*param_4;
      lVar9 = param_4[1];
      uVar15 = *puVar5;
      uVar17 = 0;
      uVar10 = uVar15 - *(ulonglong *)(lVar9 + 0x18);
      if (uVar15 < *(ulonglong *)(lVar9 + 0x18)) {
        uVar10 = uVar17;
      }
      uVar16 = uVar15 - *(ulonglong *)(lVar9 + 0x38);
      if (uVar15 < *(ulonglong *)(lVar9 + 0x38)) {
        uVar16 = uVar17;
      }
      uVar15 = *(ulonglong *)(lVar9 + 0x30);
      uVar18 = uVar15 - uVar16;
      if (uVar15 < uVar16) {
        uVar18 = uVar17;
      }
      uVar6 = *(ulonglong *)(lVar9 + 0x10);
      uVar19 = uVar6 - uVar10;
      if (uVar6 < uVar10) {
        uVar19 = uVar17;
      }
      uVar17 = *(ulonglong *)(lVar9 + 0x40);
      *puVar5 = uVar17 - (uVar19 + uVar18);
      if (uVar6 >= uVar10 && uVar6 - uVar10 != 0 || uVar15 >= uVar16 && uVar15 - uVar16 != 0) {
        *puVar5 = uVar17;
        param_1 = (undefined8 *)*param_1;
        pdb_140905940(puVar20,param_1);
        *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
        param_2 = (undefined8 *)*param_2;
        puVar13 = (undefined8 *)pdb_140bf45b0(param_1,&UNK_14331c998);
        if ((puVar13 == (undefined8 *)0x0) ||
           (lVar9 = (**(code **)(puVar13[1] + 0x18))(*puVar13), lVar9 == 0)) goto LAB_140a02518;
        pdb_140a85430(param_2,0,*(undefined8 *)(lVar9 + 8),*(undefined8 *)(lVar9 + 0x10));
      }
      if (cVar8 == '\0') {
        return;
      }
      plVar12 = (longlong *)pdb_140e97000();
      if (((char)plVar12[0xd] != '\x01') &&
         (plVar12 = (longlong *)pdb_142d8ec20(plVar12,0), plVar12 == (longlong *)0x0)) break;
      if (*plVar12 == 0) {
        *plVar12 = -1;
        pdb_140e95370(plVar12 + 1,unaff_R15);
        *plVar12 = *plVar12 + 1;
        return;
      }
    }
    plVar12 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_140a024e7:
    plVar12 = (longlong *)pdb_142d8ec20(plVar12,0);
  } while (plVar12 != (longlong *)0x0);
  pdb_142dc7890(&UNK_143326860);
LAB_140a02518:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143043538);
}

