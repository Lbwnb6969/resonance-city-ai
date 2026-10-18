// VA 0x140a79cd0, PDB extent 909 bytes
// country_core::resources::world_raster::impl$3::commit_scratch_to_composite<512>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/world_raster.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::world_raster::impl$3::commit_scratch_to_composite<512>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/world_raster.rs
   Extent: 909 */

void pdb_140a79cd0(longlong param_1)

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
  undefined *unaff_RBX;
  longlong unaff_RDI;
  undefined *puVar12;
  undefined *unaff_R14;
  longlong unaff_R15;
  
  cVar6 = pdb_140e94b40();
  if (cVar6 == '\0') goto LAB_140a79e91;
  unaff_RBX = &UNK_14304232e;
  unaff_RDI = 0x8e;
  uVar11 = 0x8e;
  lVar8 = pdb_140a7a9e0(&UNK_14304232e);
  if (lVar8 == 1) {
    if (uVar11 < 0x8f) {
      unaff_RBX = &UNK_14304232e;
      uVar9 = pdb_140a7a9e0(&UNK_14304232e);
      if ((uVar9 & 1) != 0) {
        if (0x8e < uVar11 + 2) goto LAB_140a79f8b;
        unaff_RDI = 0x8c - uVar11;
        unaff_RBX = &UNK_143042330 + uVar11;
      }
      goto LAB_140a79d66;
    }
  }
  else {
LAB_140a79d66:
    puVar12 = &UNK_1430420e1;
    unaff_R14 = &UNK_1430420b0;
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
        if (uVar7 != 0x5c) goto LAB_140a79df4;
LAB_140a79e0d:
        if ((undefined *)0x31 < puVar12 + -0x1430420af) goto LAB_140a79f48;
        unaff_R15 = 0x31 - (longlong)(puVar12 + -0x1430420af);
        unaff_R14 = puVar12 + 1;
        goto LAB_140a79e30;
      }
      puVar12 = puVar12 + -1;
      if (uVar7 == 0x5c) goto LAB_140a79e0d;
LAB_140a79df4:
      if (uVar7 == 0x2f) goto LAB_140a79e0d;
    } while (puVar12 != &UNK_1430420b0);
    unaff_R15 = 0x31;
LAB_140a79e30:
    plVar10 = (longlong *)pdb_140e97000();
    if ((char)plVar10[0xd] != '\x01') goto LAB_140a79f18;
    do {
      if (*plVar10 == 0) {
        *plVar10 = -1;
        unaff_RDI = pdb_140e94f10(plVar10 + 1,unaff_RBX,unaff_RDI,unaff_R14,unaff_R15,1,0);
        *plVar10 = *plVar10 + 1;
LAB_140a79e91:
        if (*(longlong *)(param_1 + 0x10) != *(longlong *)(param_1 + 0x28)) {
          pdb_142dc85e0(*(longlong *)(param_1 + 0x10),*(longlong *)(param_1 + 0x28),&UNK_143042140);
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        pub_142e32760(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x20));
        if (cVar6 == '\0') {
          return;
        }
        plVar10 = (longlong *)pdb_140e97000();
        if (((char)plVar10[0xd] != '\x01') &&
           (plVar10 = (longlong *)pdb_142d8ec20(plVar10,0), plVar10 == (longlong *)0x0)) break;
        if (*plVar10 == 0) {
          *plVar10 = -1;
          pdb_140e95370(plVar10 + 1,unaff_RDI);
          *plVar10 = *plVar10 + 1;
          return;
        }
      }
      plVar10 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_140a79f18:
      plVar10 = (longlong *)pdb_142d8ec20(plVar10,0);
    } while (plVar10 != (longlong *)0x0);
    pdb_142dc7890(&UNK_143326860);
LAB_140a79f48:
    pdb_142dc8070(&UNK_1430420b0,0x31);
  }
  pdb_142dc8070(&UNK_14304232e,0x8e,0);
LAB_140a79f8b:
  pdb_142dc8070(&UNK_14304232e,0x8e);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

