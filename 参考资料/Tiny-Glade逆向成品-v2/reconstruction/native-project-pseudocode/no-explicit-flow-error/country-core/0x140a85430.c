// VA 0x140a85430, PDB extent 1831 bytes
// country_core::resources::plant_sample_raster::PlantSampleRaster::copy_to_staging
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/plant_sample_raster.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::plant_sample_raster::PlantSampleRaster::copy_to_staging
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/plant_sample_raster.rs
   Extent: 1831 */

void pdb_140a85430(longlong param_1,ulonglong param_2,undefined1 *param_3,undefined *param_4)

{
  byte *pbVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  code *pcVar7;
  longlong *plVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  undefined *puVar14;
  ulonglong uVar15;
  undefined *puVar16;
  longlong lVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  char cVar22;
  undefined1 *puVar23;
  longlong lVar24;
  undefined1 *puVar25;
  undefined1 auStack_290 [512];
  longlong lStack_90;
  longlong lStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  longlong lStack_70;
  undefined1 *puStack_68;
  undefined8 uStack_60;
  longlong *plStack_58;
  char cStack_4a;
  char cStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puVar25 = (undefined1 *)(param_2 & 0xffffffff);
  uVar10 = pdb_140e94b40();
  puVar23 = (undefined1 *)(ulonglong)uVar10;
  cVar22 = '\0';
  cVar9 = (char)puVar25;
  if ((char)uVar10 == '\0') goto LAB_140a8561c;
  puVar18 = &UNK_1430437e5;
  puVar19 = (undefined *)0x50;
  uVar15 = 0x50;
  lVar11 = pdb_140a87770(&UNK_1430437e5);
  if (lVar11 == 1) {
    if (0x50 < uVar15) {
LAB_140a859ff:
      pdb_142dc8070(&UNK_1430437e5,0x50,0);
LAB_140a85a1f:
      pdb_142dc8070(&UNK_1430437e5,0x50);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    puVar18 = &UNK_1430437e5;
    uVar12 = pdb_140a87770(&UNK_1430437e5);
    if ((uVar12 & 1) != 0) {
      if (0x50 < uVar15 + 2) goto LAB_140a85a1f;
      puVar19 = (undefined *)(0x4e - uVar15);
      puVar18 = &UNK_1430437e7 + uVar15;
    }
  }
  puVar16 = &UNK_143043490;
  puVar20 = &UNK_143043458;
  do {
    bVar3 = puVar16[-1];
    uVar10 = (uint)(char)bVar3;
    puStack_68 = param_3;
    plStack_58 = (longlong *)puVar19;
    if ((char)bVar3 < '\0') {
      bVar4 = puVar16[-2];
      if ((char)bVar4 < -0x40) {
        bVar5 = puVar16[-3];
        if ((char)bVar5 < -0x40) {
          pbVar1 = puVar16 + -4;
          puVar16 = puVar16 + -4;
          uVar10 = bVar5 & 0x3f | (*pbVar1 & 7) << 6;
        }
        else {
          puVar16 = puVar16 + -3;
          uVar10 = bVar5 & 0xf;
        }
        uVar10 = bVar4 & 0x3f | uVar10 << 6;
      }
      else {
        puVar16 = puVar16 + -2;
        uVar10 = bVar4 & 0x1f;
      }
      uVar10 = (uint)(bVar3 & 0x3f) | uVar10 << 6;
      if (uVar10 != 0x5c) goto LAB_140a85574;
LAB_140a85588:
      puVar19 = puVar16 + -0x143043457;
      if (puVar19 < (undefined *)0x39) {
        lVar11 = 0x38 - (longlong)puVar19;
        puVar20 = puVar16 + 1;
        goto LAB_140a855ad;
      }
      pdb_142dc8070(&UNK_143043458,0x38,puVar19,0x38,&UNK_143043898);
      goto LAB_140a859ff;
    }
    puVar16 = puVar16 + -1;
    if (uVar10 == 0x5c) goto LAB_140a85588;
LAB_140a85574:
    if (uVar10 == 0x2f) goto LAB_140a85588;
  } while (puVar16 != &UNK_143043458);
  lVar11 = 0x38;
LAB_140a855ad:
  plVar13 = (longlong *)pdb_140e97000();
  if ((char)plVar13[0xd] != '\x01') goto LAB_140a8598f;
  do {
    plVar8 = plStack_58;
    cVar22 = (char)puVar23;
    if (*plVar13 == 0) {
      *plVar13 = -1;
      plStack_58 = plVar13;
      uStack_60 = pdb_140e94f10(plVar13 + 1,puVar18,plVar8,puVar20,lVar11,1,0);
      *plStack_58 = *plStack_58 + 1;
      param_3 = puStack_68;
      cVar9 = (char)puVar25;
LAB_140a8561c:
      cStack_4a = cVar9;
      puVar19 = (undefined *)0x18;
      if (cStack_4a == '\0') {
        puVar19 = (undefined *)0x0;
      }
      puVar16 = *(undefined **)(puVar19 + param_1 + 0x10);
      lVar11 = 0;
      puVar18 = (undefined *)0x0;
      puVar20 = (undefined *)0x7;
      puVar25 = param_3 + 0x1c;
      do {
        puStack_68 = puVar25;
        puStack_78 = puVar20;
        puStack_80 = puVar18;
        lStack_70 = lVar11 + 1;
        lStack_88 = lVar11 * 0x1000;
        lVar11 = 0;
        puVar18 = puStack_80;
        puVar20 = puStack_78;
        puVar23 = puStack_68;
        do {
          plStack_58 = (longlong *)puVar20;
          lStack_90 = lVar11 + 1;
          lVar17 = 0;
          lVar24 = 0;
          puVar21 = (undefined *)plStack_58;
          do {
            puVar20 = puVar21 + -7;
            cStack_49 = cVar22;
            if (puVar16 <= puVar21 + -7) goto LAB_140a859b1;
            lVar2 = lVar11 * 0x40 + lStack_88 + lVar24 * 8;
            puVar20 = puVar18 + lVar17 + 4;
            if (param_4 < puVar20) {
              puVar14 = (undefined *)(lVar2 * 4);
LAB_140a8596e:
              pdb_142dc8420(puVar14,puVar20,param_4,&UNK_1430434a8);
                    /* WARNING: Does not return */
              pcVar7 = (code *)invalidInstructionException();
              (*pcVar7)();
            }
            lVar6 = *(longlong *)(puVar19 + param_1 + 8);
            *(undefined4 *)(puVar23 + lVar17 + -0x1c) =
                 *(undefined4 *)(lVar6 + -0x1c + (longlong)puVar21 * 4);
            puVar20 = puVar21 + -6;
            if (puVar16 <= puVar21 + -6) goto LAB_140a859b1;
            puVar20 = puVar18 + lVar17 + 8;
            if (param_4 < puVar20) {
              puVar14 = (undefined *)(lVar2 * 4 + 4);
              goto LAB_140a8596e;
            }
            *(undefined4 *)(puVar23 + lVar17 + -0x18) =
                 *(undefined4 *)(lVar6 + -0x18 + (longlong)puVar21 * 4);
            puVar20 = puVar21 + -5;
            if (puVar16 <= puVar21 + -5) goto LAB_140a859b1;
            puVar20 = puVar18 + lVar17 + 0xc;
            if (param_4 < puVar20) {
              puVar14 = (undefined *)(lVar2 * 4 + 8);
              goto LAB_140a8596e;
            }
            *(undefined4 *)(puVar23 + lVar17 + -0x14) =
                 *(undefined4 *)(lVar6 + -0x14 + (longlong)puVar21 * 4);
            puVar20 = puVar21 + -4;
            if (puVar16 <= puVar21 + -4) goto LAB_140a859b1;
            puVar20 = puVar18 + lVar17 + 0x10;
            if (param_4 < puVar20) {
              puVar14 = (undefined *)(lVar2 * 4 + 0xc);
              goto LAB_140a8596e;
            }
            *(undefined4 *)(puVar23 + lVar17 + -0x10) =
                 *(undefined4 *)(lVar6 + -0x10 + (longlong)puVar21 * 4);
            puVar20 = puVar21 + -3;
            if (puVar16 <= puVar21 + -3) goto LAB_140a859b1;
            puVar20 = puVar18 + lVar17 + 0x14;
            if (param_4 < puVar20) {
              puVar14 = (undefined *)(lVar2 * 4 + 0x10);
              goto LAB_140a8596e;
            }
            *(undefined4 *)(puVar23 + lVar17 + -0xc) =
                 *(undefined4 *)(lVar6 + -0xc + (longlong)puVar21 * 4);
            puVar20 = puVar21 + -2;
            if (puVar16 <= puVar21 + -2) goto LAB_140a859b1;
            puVar20 = puVar18 + lVar17 + 0x18;
            if (param_4 < puVar20) {
              puVar14 = (undefined *)(lVar2 * 4 + 0x14);
              goto LAB_140a8596e;
            }
            *(undefined4 *)(puVar23 + lVar17 + -8) =
                 *(undefined4 *)(lVar6 + -8 + (longlong)puVar21 * 4);
            puVar20 = puVar21 + -1;
            if (puVar16 <= puVar21 + -1) goto LAB_140a859b1;
            puVar14 = puVar18 + lVar17 + 0x1c;
            if (param_4 < puVar14) {
              puVar14 = (undefined *)(lVar2 * 4 + 0x18);
              puVar20 = puVar18 + lVar17 + 0x1c;
              goto LAB_140a8596e;
            }
            *(undefined4 *)(puVar23 + lVar17 + -4) =
                 *(undefined4 *)(lVar6 + -4 + (longlong)puVar21 * 4);
            puVar20 = puVar21;
            if (puVar16 <= puVar21) goto LAB_140a859b1;
            puVar20 = puVar18 + lVar17 + 0x20;
            if (param_4 < puVar20) goto LAB_140a8596e;
            *(undefined4 *)(puVar23 + lVar17) = *(undefined4 *)(lVar6 + (longlong)puVar21 * 4);
            lVar17 = lVar17 + 0x20;
            puVar21 = puVar21 + 0x200;
            lVar24 = lVar24 + 1;
          } while (lVar17 != 0x100);
          puVar18 = puVar18 + 0x100;
          puVar23 = puVar23 + 0x100;
          lVar11 = lStack_90;
          puVar20 = (undefined *)((longlong)plStack_58 + 8);
        } while (lStack_90 != 0x40);
        puVar18 = puStack_80 + 0x4000;
        puVar25 = puStack_68 + 0x4000;
        puVar20 = puStack_78 + 0x1000;
        lVar11 = lStack_70;
      } while (lStack_70 != 0x40);
      *(char *)(param_1 + 0x282) = cStack_4a;
      lVar11 = 0x40;
      if (*(char *)(param_1 + 0x283) != '\0') {
        param_4 = (undefined *)(param_1 + 0x48);
        lVar11 = param_1 + 0x80;
        puVar23 = auStack_290;
        pub_142e32760(puVar23,lVar11,0x200);
        pub_142e32780(lVar11,0,0x200);
        pdb_1409c5460(param_4,puVar23);
        *(undefined1 *)(param_1 + 0x283) = 0;
      }
      *(undefined1 *)(param_1 + 0x284) = 1;
      if (cStack_49 == '\0') {
        return;
      }
      plVar13 = (longlong *)pdb_140e97000();
      if (((char)plVar13[0xd] != '\x01') &&
         (plVar13 = (longlong *)pdb_142d8ec20(plVar13,0), plVar13 == (longlong *)0x0)) break;
      if (*plVar13 == 0) {
        *plVar13 = -1;
        plStack_58 = plVar13;
        pdb_140e95370(plVar13 + 1);
        *plStack_58 = *plStack_58 + 1;
        return;
      }
    }
    plVar13 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_140a8598f:
    plVar13 = (longlong *)pdb_142d8ec20(plVar13,0);
  } while (plVar13 != (longlong *)0x0);
  pdb_142dc7890(&UNK_143326860);
LAB_140a859b1:
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(puVar20);
}

