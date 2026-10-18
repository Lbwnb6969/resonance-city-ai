// VA 0x140a787a0, PDB extent 829 bytes
// country_core::resources::world_raster::impl$3::clear_buffer<512>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/world_raster.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::world_raster::impl$3::clear_buffer<512>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/world_raster.rs
   Extent: 829 */

void pdb_140a787a0(undefined8 *param_1,char param_2)

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
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  
  cVar6 = pdb_140e94b40();
  if (cVar6 == '\0') {
    puVar10 = param_1 + 1;
    if (param_2 != '\0') {
      puVar10 = param_1 + 4;
    }
    puVar12 = param_1 + 5;
    if (param_2 == '\0') {
      puVar12 = param_1 + 2;
    }
                    /* WARNING: Could not recover jumptable at 0x000142e32780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    memset(*puVar10,0,*puVar12);
    return;
  }
  puVar16 = &UNK_1430424ca;
  lVar14 = 0x7f;
  uVar13 = 0x7f;
  lVar8 = pdb_140a7a9e0(&UNK_1430424ca);
  if (lVar8 == 1) {
    if (uVar13 < 0x80) {
      puVar16 = &UNK_1430424ca;
      uVar9 = pdb_140a7a9e0(&UNK_1430424ca);
      if ((uVar9 & 1) != 0) {
        if (0x7f < uVar13 + 2) goto LAB_140a78a5b;
        lVar14 = 0x7d - uVar13;
        puVar16 = &UNK_1430424cc + uVar13;
      }
      goto LAB_140a7882f;
    }
  }
  else {
LAB_140a7882f:
    puVar15 = &UNK_1430420e1;
    puVar17 = &UNK_1430420b0;
    do {
      bVar2 = puVar15[-1];
      uVar7 = (uint)(char)bVar2;
      if ((char)bVar2 < '\0') {
        bVar3 = puVar15[-2];
        if ((char)bVar3 < -0x40) {
          bVar4 = puVar15[-3];
          if ((char)bVar4 < -0x40) {
            pbVar1 = puVar15 + -4;
            puVar15 = puVar15 + -4;
            uVar7 = bVar4 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar15 = puVar15 + -3;
            uVar7 = bVar4 & 0xf;
          }
          uVar7 = bVar3 & 0x3f | uVar7 << 6;
        }
        else {
          puVar15 = puVar15 + -2;
          uVar7 = bVar3 & 0x1f;
        }
        uVar7 = (uint)(bVar2 & 0x3f) | uVar7 << 6;
        if (uVar7 != 0x5c) goto LAB_140a788b4;
LAB_140a788fb:
        if ((undefined *)0x31 < puVar15 + -0x1430420af) goto LAB_140a78a18;
        lVar8 = 0x31 - (longlong)(puVar15 + -0x1430420af);
        puVar17 = puVar15 + 1;
        goto LAB_140a7891e;
      }
      puVar15 = puVar15 + -1;
      if (uVar7 == 0x5c) goto LAB_140a788fb;
LAB_140a788b4:
      if (uVar7 == 0x2f) goto LAB_140a788fb;
    } while (puVar15 != &UNK_1430420b0);
    lVar8 = 0x31;
LAB_140a7891e:
    plVar11 = (longlong *)pdb_140e97000();
    if ((char)plVar11[0xd] != '\x01') goto LAB_140a789e8;
    do {
      if (*plVar11 == 0) {
        *plVar11 = -1;
        lVar14 = pdb_140e94f10(plVar11 + 1,puVar16,lVar14,puVar17,lVar8,1,0);
        *plVar11 = *plVar11 + 1;
        puVar10 = param_1 + 2;
        puVar12 = param_1 + 1;
        if (param_2 != '\0') {
          puVar12 = param_1 + 4;
        }
        param_1 = param_1 + 5;
        if (param_2 == '\0') {
          param_1 = puVar10;
        }
        pub_142e32780(*puVar12,0,*param_1);
        plVar11 = (longlong *)pdb_140e97000();
        if (((char)plVar11[0xd] != '\x01') &&
           (plVar11 = (longlong *)pdb_142d8ec20(plVar11,0), plVar11 == (longlong *)0x0)) break;
        if (*plVar11 == 0) {
          *plVar11 = -1;
          pdb_140e95370(plVar11 + 1,lVar14);
          *plVar11 = *plVar11 + 1;
          return;
        }
      }
      plVar11 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_140a789e8:
      plVar11 = (longlong *)pdb_142d8ec20(plVar11,0);
    } while (plVar11 != (longlong *)0x0);
    pdb_142dc7890(&UNK_143326860);
LAB_140a78a18:
    pdb_142dc8070(&UNK_1430420b0,0x31);
  }
  pdb_142dc8070(&UNK_1430424ca,0x7f,0);
LAB_140a78a5b:
  pdb_142dc8070(&UNK_1430424ca,0x7f);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

