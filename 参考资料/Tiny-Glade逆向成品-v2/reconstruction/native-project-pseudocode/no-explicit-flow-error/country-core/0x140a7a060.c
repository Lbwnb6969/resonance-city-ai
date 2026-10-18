// VA 0x140a7a060, PDB extent 925 bytes
// country_core::resources::world_raster::impl$3::clear_all<512>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/world_raster.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::world_raster::impl$3::clear_all<512>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/world_raster.rs
   Extent: 925 */

void pdb_140a7a060(longlong param_1)

{
  byte *pbVar1;
  undefined4 *puVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined4 *puVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char cVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong *plVar16;
  ulonglong uVar17;
  undefined4 *puVar18;
  longlong unaff_RDI;
  undefined *puVar19;
  ulonglong uVar20;
  longlong unaff_R12;
  undefined *unaff_R14;
  undefined *unaff_R15;
  
  cVar12 = pdb_140e94b40();
  if (cVar12 == '\0') goto LAB_140a7a201;
  unaff_R14 = &UNK_143042220;
  unaff_RDI = 0x7c;
  uVar17 = 0x7c;
  lVar14 = pdb_140a7a9e0(&UNK_143042220);
  if (lVar14 == 1) {
    if (uVar17 < 0x7d) {
      unaff_R14 = &UNK_143042220;
      uVar15 = pdb_140a7a9e0(&UNK_143042220);
      if ((uVar15 & 1) != 0) {
        if (0x7c < uVar17 + 2) goto LAB_140a7a371;
        unaff_RDI = 0x7a - uVar17;
        unaff_R14 = &UNK_143042222 + uVar17;
      }
      goto LAB_140a7a0ef;
    }
  }
  else {
LAB_140a7a0ef:
    puVar19 = &UNK_1430420e1;
    unaff_R15 = &UNK_1430420b0;
    do {
      bVar3 = puVar19[-1];
      uVar13 = (uint)(char)bVar3;
      if ((char)bVar3 < '\0') {
        bVar4 = puVar19[-2];
        if ((char)bVar4 < -0x40) {
          bVar5 = puVar19[-3];
          if ((char)bVar5 < -0x40) {
            pbVar1 = puVar19 + -4;
            puVar19 = puVar19 + -4;
            uVar13 = bVar5 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar19 = puVar19 + -3;
            uVar13 = bVar5 & 0xf;
          }
          uVar13 = bVar4 & 0x3f | uVar13 << 6;
        }
        else {
          puVar19 = puVar19 + -2;
          uVar13 = bVar4 & 0x1f;
        }
        uVar13 = (uint)(bVar3 & 0x3f) | uVar13 << 6;
        if (uVar13 != 0x5c) goto LAB_140a7a174;
LAB_140a7a186:
        if ((undefined *)0x31 < puVar19 + -0x1430420af) goto LAB_140a7a32e;
        unaff_R12 = 0x31 - (longlong)(puVar19 + -0x1430420af);
        unaff_R15 = puVar19 + 1;
        goto LAB_140a7a1a9;
      }
      puVar19 = puVar19 + -1;
      if (uVar13 == 0x5c) goto LAB_140a7a186;
LAB_140a7a174:
      if (uVar13 == 0x2f) goto LAB_140a7a186;
    } while (puVar19 != &UNK_1430420b0);
    unaff_R12 = 0x31;
LAB_140a7a1a9:
    plVar16 = (longlong *)pdb_140e97000();
    if ((char)plVar16[0xd] != '\x01') goto LAB_140a7a2fe;
    do {
      if (*plVar16 == 0) {
        *plVar16 = -1;
        unaff_RDI = pdb_140e94f10(plVar16 + 1,unaff_R14,unaff_RDI,unaff_R15,unaff_R12,1,0);
        *plVar16 = *plVar16 + 1;
LAB_140a7a201:
        pub_142e32780(*(undefined8 *)(param_1 + 8),0,*(undefined8 *)(param_1 + 0x10));
        pub_142e32780(*(undefined8 *)(param_1 + 0x20),0,*(undefined8 *)(param_1 + 0x28));
        pub_142e32780(param_1 + 0x98,0xff,0x200);
        *(undefined1 *)(param_1 + 0x299) = 1;
        pdb_14007ee60();
        uVar11 = _UNK_143041c5c;
        uVar10 = _UNK_143041c58;
        uVar9 = _UNK_143041c54;
        uVar8 = _DAT_143041c50;
        lVar14 = *(longlong *)(param_1 + 0x40);
        if (lVar14 != 0) {
          puVar6 = *(undefined4 **)(param_1 + 0x38);
          uVar17 = lVar14 * 4 - 4;
          puVar18 = puVar6;
          if (0x1b < uVar17) {
            uVar17 = (uVar17 >> 2) + 1;
            uVar15 = uVar17 & 0xfffffffffffffff8;
            puVar18 = puVar6 + uVar15;
            uVar20 = 0;
            do {
              puVar2 = puVar6 + uVar20;
              *puVar2 = uVar8;
              puVar2[1] = uVar9;
              puVar2[2] = uVar10;
              puVar2[3] = uVar11;
              puVar2 = puVar6 + uVar20 + 4;
              *puVar2 = uVar8;
              puVar2[1] = uVar9;
              puVar2[2] = uVar10;
              puVar2[3] = uVar11;
              uVar20 = uVar20 + 8;
            } while (uVar15 != uVar20);
            if (uVar17 == uVar15) goto LAB_140a7a2af;
          }
          do {
            *puVar18 = 0x7954dbb;
            puVar18 = puVar18 + 1;
          } while (puVar18 != puVar6 + lVar14);
        }
LAB_140a7a2af:
        if (cVar12 == '\0') {
          return;
        }
        plVar16 = (longlong *)pdb_140e97000();
        if (((char)plVar16[0xd] != '\x01') &&
           (plVar16 = (longlong *)pdb_142d8ec20(plVar16,0), plVar16 == (longlong *)0x0)) break;
        if (*plVar16 == 0) {
          *plVar16 = -1;
          pdb_140e95370(plVar16 + 1,unaff_RDI);
          *plVar16 = *plVar16 + 1;
          return;
        }
      }
      plVar16 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_140a7a2fe:
      plVar16 = (longlong *)pdb_142d8ec20(plVar16,0);
    } while (plVar16 != (longlong *)0x0);
    pdb_142dc7890(&UNK_143326860);
LAB_140a7a32e:
    pdb_142dc8070(&UNK_1430420b0,0x31);
  }
  pdb_142dc8070(&UNK_143042220,0x7c,0);
LAB_140a7a371:
  pdb_142dc8070(&UNK_143042220,0x7c);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

