// VA 0x1409edd50, PDB extent 1335 bytes
// country_core::systems::collision::world::RaycastWorld::flush_colliders
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::collision::world::RaycastWorld::flush_colliders
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 1335 */

void pdb_1409edd50(longlong param_1)

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
  undefined *puVar12;
  longlong lVar13;
  undefined *puVar14;
  longlong lVar15;
  undefined *puVar16;
  undefined8 uStack_2a0;
  undefined *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined *puStack_250;
  char **ppcStack_248;
  char *pcStack_a0;
  code *pcStack_98;
  longlong lStack_80;
  longlong lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_59;
  longlong *plStack_58;
  char acStack_49 [9];
  
  acStack_49[1] = -2;
  acStack_49[2] = -1;
  acStack_49[3] = -1;
  acStack_49[4] = -1;
  acStack_49[5] = -1;
  acStack_49[6] = -1;
  acStack_49[7] = -1;
  acStack_49[8] = -1;
  cVar6 = pdb_140e94b40();
  if (cVar6 == '\0') {
    lStack_78 = 0;
LAB_1409edf1c:
    plStack_58 = (longlong *)(param_1 + 0x20);
    lStack_80 = param_1 + 0x50;
    lVar8 = param_1 + 0x3a8;
    cVar6 = '\0';
    lVar13 = 0;
    do {
      if (*(char *)(lVar8 + lVar13) != '\0') {
        lVar15 = lVar8 + lVar13 + -0x200;
        pub_142e32760(&uStack_2a0,lVar15,0x200);
        pub_142e32780(lVar15,0,0x200);
        pdb_1409c5460(param_1 + 0x170 + lVar13,&uStack_2a0);
        *(undefined1 *)(lVar8 + lVar13) = 0;
        if (4 < *_DAT_143ca8e90) {
          pcStack_a0 = acStack_49;
          pcStack_98 = pdb_1409fb1a0;
          uStack_2a0 = 0;
          puStack_298 = &UNK_1430333de;
          uStack_290 = 0x27;
          uStack_288 = 0;
          puStack_280 = &UNK_143033360;
          uStack_278 = 0x32;
          uStack_270 = 5;
          puStack_268 = &UNK_1430333de;
          uStack_260 = 0x27;
          uStack_258 = 0x27100000001;
          puStack_250 = &UNK_1430333c5;
          ppcStack_248 = &pcStack_a0;
          acStack_49[0] = cVar6;
          pdb_140f332f0(&uStack_59,&uStack_2a0);
        }
        pdb_141a08910(lStack_80 + lVar13,(longlong)plStack_58 + lVar13);
      }
      lVar13 = lVar13 + 0x390;
      cVar6 = cVar6 + '\x01';
    } while (lVar13 != 0x3c90);
    if (lStack_78 == 0) {
      return;
    }
    plVar10 = (longlong *)pdb_140e97000();
    if ((char)plVar10[0xd] != '\x01') goto LAB_1409ee0fa;
    do {
      if (*plVar10 == 0) {
        *plVar10 = -1;
        plStack_58 = plVar10;
        pdb_140e95370(plVar10 + 1);
        *plStack_58 = *plStack_58 + 1;
        return;
      }
LAB_1409ee0ee:
      plVar10 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_1409ee0fa:
      plVar10 = (longlong *)pdb_142d8ec20(plVar10,0);
    } while (plVar10 != (longlong *)0x0);
LAB_1409ee125:
    pdb_142dc7890(&UNK_143326860);
LAB_1409ee131:
    pdb_142dc8070(&UNK_143033393,0x32);
  }
  else {
    puVar12 = &UNK_143033e4d;
    lVar13 = 0x46;
    uVar11 = 0x46;
    lVar8 = pdb_1409f9af0(&UNK_143033e4d);
    if (lVar8 != 1) {
LAB_1409edde8:
      puVar14 = &UNK_1430333c5;
      puVar16 = &UNK_143033393;
      do {
        bVar2 = puVar14[-1];
        uVar7 = (uint)(char)bVar2;
        if ((char)bVar2 < '\0') {
          bVar3 = puVar14[-2];
          if ((char)bVar3 < -0x40) {
            bVar4 = puVar14[-3];
            if ((char)bVar4 < -0x40) {
              pbVar1 = puVar14 + -4;
              puVar14 = puVar14 + -4;
              uVar7 = bVar4 & 0x3f | (*pbVar1 & 7) << 6;
            }
            else {
              puVar14 = puVar14 + -3;
              uVar7 = bVar4 & 0xf;
            }
            uVar7 = bVar3 & 0x3f | uVar7 << 6;
          }
          else {
            puVar14 = puVar14 + -2;
            uVar7 = bVar3 & 0x1f;
          }
          uVar7 = (uint)(bVar2 & 0x3f) | uVar7 << 6;
          if (uVar7 != 0x5c) goto LAB_1409ede74;
LAB_1409ede8c:
          if ((undefined *)0x32 < puVar14 + -0x143033392) goto LAB_1409ee131;
          lVar8 = 0x32 - (longlong)(puVar14 + -0x143033392);
          puVar16 = puVar14 + 1;
          goto LAB_1409edeae;
        }
        puVar14 = puVar14 + -1;
        if (uVar7 == 0x5c) goto LAB_1409ede8c;
LAB_1409ede74:
        if (uVar7 == 0x2f) goto LAB_1409ede8c;
      } while (puVar14 != &UNK_143033393);
      lVar8 = 0x32;
LAB_1409edeae:
      plVar10 = (longlong *)pdb_140e97000();
      if (((char)plVar10[0xd] == '\x01') ||
         (plVar10 = (longlong *)pdb_142d8ec20(plVar10,0), plVar10 != (longlong *)0x0)) {
        if (*plVar10 != 0) goto LAB_1409ee0ee;
        *plVar10 = -1;
        plStack_58 = plVar10;
        uStack_70 = pdb_140e94f10(plVar10 + 1,puVar12,lVar13,puVar16,lVar8,1,0);
        *plStack_58 = *plStack_58 + 1;
        lStack_78 = 1;
        uStack_68 = uStack_70;
        goto LAB_1409edf1c;
      }
      goto LAB_1409ee125;
    }
    if (uVar11 < 0x47) {
      puVar12 = &UNK_143033e4d;
      uVar9 = pdb_1409f9af0(&UNK_143033e4d);
      if ((uVar9 & 1) != 0) {
        if (0x46 < uVar11 + 2) goto LAB_1409ee174;
        lVar13 = 0x44 - uVar11;
        puVar12 = &UNK_143033e4f + uVar11;
      }
      goto LAB_1409edde8;
    }
  }
  pdb_142dc8070(&UNK_143033e4d,0x46,0);
LAB_1409ee174:
  pdb_142dc8070(&UNK_143033e4d,0x46);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

