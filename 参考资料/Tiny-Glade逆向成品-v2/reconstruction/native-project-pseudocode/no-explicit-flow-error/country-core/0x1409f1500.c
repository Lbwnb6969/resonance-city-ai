// VA 0x1409f1500, PDB extent 857 bytes
// country_core::systems::collision::world::flush_rapier_colliders
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::collision::world::flush_rapier_colliders
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 857 */

void pdb_1409f1500(undefined8 *param_1)

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
  if (cVar6 == '\0') goto LAB_1409f16b1;
  unaff_RBX = &UNK_143033e0b;
  unaff_RDI = 0x3f;
  uVar11 = 0x3f;
  lVar8 = pdb_1409f9af0(&UNK_143033e0b);
  if (lVar8 == 1) {
    if (uVar11 < 0x40) {
      unaff_RBX = &UNK_143033e0b;
      uVar9 = pdb_1409f9af0(&UNK_143033e0b);
      if ((uVar9 & 1) != 0) {
        if (0x3f < uVar11 + 2) goto LAB_1409f1789;
        unaff_RDI = 0x3d - uVar11;
        unaff_RBX = &UNK_143033e0d + uVar11;
      }
      goto LAB_1409f158e;
    }
  }
  else {
LAB_1409f158e:
    puVar12 = &UNK_1430333c5;
    unaff_R14 = &UNK_143033393;
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
        if (uVar7 != 0x5c) goto LAB_1409f1614;
LAB_1409f162d:
        if ((undefined *)0x32 < puVar12 + -0x143033392) goto LAB_1409f1746;
        unaff_R15 = 0x32 - (longlong)(puVar12 + -0x143033392);
        unaff_R14 = puVar12 + 1;
        goto LAB_1409f1650;
      }
      puVar12 = puVar12 + -1;
      if (uVar7 == 0x5c) goto LAB_1409f162d;
LAB_1409f1614:
      if (uVar7 == 0x2f) goto LAB_1409f162d;
    } while (puVar12 != &UNK_143033393);
    unaff_R15 = 0x32;
LAB_1409f1650:
    plVar10 = (longlong *)pdb_140e97000();
    if ((char)plVar10[0xd] != '\x01') goto LAB_1409f1716;
    do {
      if (*plVar10 == 0) {
        *plVar10 = -1;
        unaff_RDI = pdb_140e94f10(plVar10 + 1,unaff_RBX,unaff_RDI,unaff_R14,unaff_R15,1,0);
        *plVar10 = *plVar10 + 1;
LAB_1409f16b1:
        *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
        pdb_1409edd50(*param_1);
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
LAB_1409f1716:
      plVar10 = (longlong *)pdb_142d8ec20(plVar10,0);
    } while (plVar10 != (longlong *)0x0);
    pdb_142dc7890(&UNK_143326860);
LAB_1409f1746:
    pdb_142dc8070(&UNK_143033393,0x32);
  }
  pdb_142dc8070(&UNK_143033e0b,0x3f,0);
LAB_1409f1789:
  pdb_142dc8070(&UNK_143033e0b,0x3f);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

