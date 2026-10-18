// VA 0x1419c0d50, PDB extent 1927 bytes
// country_core::resources::terrain_height::TerrainHeightsData::copy_from_gpu<country_core::resources::terrain_height::VisualTerrainHeightSsbo>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/terrain_height.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::terrain_height::TerrainHeightsData::copy_from_gpu<country_core::resources::terrain_height::VisualTerrainHeightSsbo>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/terrain_height.rs
   Extent: 1927 */

void pdb_1419c0d50(longlong param_1,undefined1 *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  code *pcVar5;
  char cVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined *puVar9;
  longlong *plVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong unaff_RBX;
  longlong lVar15;
  longlong unaff_R12;
  undefined *puVar16;
  undefined *unaff_R15;
  undefined1 auStack_470 [512];
  ulonglong auStack_270 [64];
  undefined8 uStack_70;
  longlong lStack_68;
  longlong *plStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  cVar6 = pdb_140e94b40();
  if (cVar6 == '\0') {
    uStack_70 = 0;
    goto LAB_1419c0f24;
  }
  puVar16 = &UNK_143360f70;
  unaff_RBX = 0x4d;
  uVar13 = 0x4d;
  lVar7 = pdb_1419c1f70(&UNK_143360f70);
  if (lVar7 == 1) {
    if (uVar13 < 0x4e) {
      puVar16 = &UNK_143360f70;
      uVar8 = pdb_1419c1f70(&UNK_143360f70);
      if ((uVar8 & 1) != 0) {
        if (0x4d < uVar13 + 2) goto LAB_1419c13c4;
        unaff_RBX = 0x4b - uVar13;
        puVar16 = &UNK_143360f72 + uVar13;
      }
      goto LAB_1419c0dee;
    }
  }
  else {
LAB_1419c0dee:
    puVar9 = &UNK_143360e33;
    unaff_R15 = &UNK_143360e00;
    do {
      pbVar1 = puVar9 + -1;
      uVar11 = (uint)(char)*pbVar1;
      if ((int)uVar11 < 0) {
        bVar3 = puVar9[-2];
        if ((char)bVar3 < -0x40) {
          bVar4 = puVar9[-3];
          if ((char)bVar4 < -0x40) {
            pbVar2 = puVar9 + -4;
            puVar9 = puVar9 + -4;
            uVar11 = bVar4 & 0x3f | (*pbVar2 & 7) << 6;
          }
          else {
            puVar9 = puVar9 + -3;
            uVar11 = bVar4 & 0xf;
          }
          uVar11 = bVar3 & 0x3f | uVar11 << 6;
        }
        else {
          puVar9 = puVar9 + -2;
          uVar11 = bVar3 & 0x1f;
        }
        uVar11 = (uint)(*pbVar1 & 0x3f) | uVar11 << 6;
        if (uVar11 != 0x5c) goto LAB_1419c0e79;
LAB_1419c0e96:
        if ((undefined *)0x33 < puVar9 + -0x143360dff) goto LAB_1419c1381;
        unaff_R12 = 0x32 - (longlong)(puVar9 + -0x143360e00);
        unaff_R15 = puVar9 + 1;
        goto LAB_1419c0eba;
      }
      puVar9 = puVar9 + -1;
      if (uVar11 == 0x5c) goto LAB_1419c0e96;
LAB_1419c0e79:
      if (uVar11 == 0x2f) goto LAB_1419c0e96;
    } while (puVar9 != &UNK_143360e00);
    unaff_R12 = 0x33;
LAB_1419c0eba:
    plVar10 = (longlong *)pdb_140e97000();
    if ((char)plVar10[0xd] != '\x01') goto LAB_1419c1351;
    do {
      if (*plVar10 == 0) {
        *plVar10 = -1;
        plStack_50 = plVar10;
        unaff_RBX = pdb_140e94f10(plVar10 + 1,puVar16,unaff_RBX,unaff_R15,unaff_R12,1,0);
        *plStack_50 = *plStack_50 + 1;
        uStack_70 = 1;
        lStack_68 = unaff_RBX;
LAB_1419c0f24:
        pub_142e32780();
        uVar11 = -(uint)(*(float *)(param_1 + 0x54) != _DAT_142f57bc4 ||
                        _DAT_142f61034 != *(float *)(param_1 + 0x50));
        puVar16 = (undefined *)(ulonglong)uVar11;
        if ((uVar11 & 1) != 0) {
          *(undefined8 *)(param_1 + 0x50) = _DAT_1430218e0;
          pub_142e32780();
        }
        lVar7 = *(longlong *)(param_1 + 8);
        lVar14 = 0;
        do {
          lVar15 = 0;
          lVar12 = 0;
          do {
            if ((*(longlong *)(param_2 + lVar15) != *(longlong *)(lVar7 + lVar15)) ||
               (*(longlong *)(param_2 + lVar15 + 8) != *(longlong *)(lVar7 + 8 + lVar15))) {
              *(undefined1 (*) [16])(lVar7 + lVar15) = *(undefined1 (*) [16])(param_2 + lVar15);
              auStack_270[lVar14] = auStack_270[lVar14] | 1L << ((byte)lVar12 & 0x3f);
              puVar16 = (undefined *)CONCAT71((int7)((ulonglong)puVar16 >> 8),1);
            }
            lVar12 = lVar12 + 1;
            lVar15 = lVar15 + 0x10;
          } while (lVar12 != 0x40);
          lVar15 = 0x400;
          lVar12 = 0;
          do {
            if ((*(longlong *)(param_2 + lVar15) != *(longlong *)(lVar7 + lVar15)) ||
               (*(longlong *)(param_2 + lVar15 + 8) != *(longlong *)(lVar7 + 8 + lVar15))) {
              *(undefined1 (*) [16])(lVar7 + lVar15) = *(undefined1 (*) [16])(param_2 + lVar15);
              auStack_270[lVar14] = auStack_270[lVar14] | 1L << ((byte)lVar12 & 0x3f);
              puVar16 = (undefined *)CONCAT71((int7)((ulonglong)puVar16 >> 8),1);
            }
            lVar12 = lVar12 + 1;
            lVar15 = lVar15 + 0x10;
          } while (lVar12 != 0x40);
          lVar15 = 0x800;
          lVar12 = 0;
          do {
            if ((*(longlong *)(param_2 + lVar15) != *(longlong *)(lVar7 + lVar15)) ||
               (*(longlong *)(param_2 + lVar15 + 8) != *(longlong *)(lVar7 + 8 + lVar15))) {
              *(undefined1 (*) [16])(lVar7 + lVar15) = *(undefined1 (*) [16])(param_2 + lVar15);
              auStack_270[lVar14] = auStack_270[lVar14] | 1L << ((byte)lVar12 & 0x3f);
              puVar16 = (undefined *)CONCAT71((int7)((ulonglong)puVar16 >> 8),1);
            }
            lVar12 = lVar12 + 1;
            lVar15 = lVar15 + 0x10;
          } while (lVar12 != 0x40);
          lVar15 = 0xc00;
          lVar12 = 0;
          do {
            if ((*(longlong *)(param_2 + lVar15) != *(longlong *)(lVar7 + lVar15)) ||
               (*(longlong *)(param_2 + lVar15 + 8) != *(longlong *)(lVar7 + 8 + lVar15))) {
              *(undefined1 (*) [16])(lVar7 + lVar15) = *(undefined1 (*) [16])(param_2 + lVar15);
              auStack_270[lVar14] = auStack_270[lVar14] | 1L << ((byte)lVar12 & 0x3f);
              puVar16 = (undefined *)CONCAT71((int7)((ulonglong)puVar16 >> 8),1);
            }
            lVar12 = lVar12 + 1;
            lVar15 = lVar15 + 0x10;
          } while (lVar12 != 0x40);
          lVar15 = 0x1000;
          lVar12 = 0;
          do {
            if ((*(longlong *)(param_2 + lVar15) != *(longlong *)(lVar7 + lVar15)) ||
               (*(longlong *)(param_2 + lVar15 + 8) != *(longlong *)(lVar7 + 8 + lVar15))) {
              *(undefined1 (*) [16])(lVar7 + lVar15) = *(undefined1 (*) [16])(param_2 + lVar15);
              auStack_270[lVar14] = auStack_270[lVar14] | 1L << ((byte)lVar12 & 0x3f);
              puVar16 = (undefined *)CONCAT71((int7)((ulonglong)puVar16 >> 8),1);
            }
            lVar12 = lVar12 + 1;
            lVar15 = lVar15 + 0x10;
          } while (lVar12 != 0x40);
          lVar15 = 0x1400;
          lVar12 = 0;
          do {
            if ((*(longlong *)(param_2 + lVar15) != *(longlong *)(lVar7 + lVar15)) ||
               (*(longlong *)(param_2 + lVar15 + 8) != *(longlong *)(lVar7 + 8 + lVar15))) {
              *(undefined1 (*) [16])(lVar7 + lVar15) = *(undefined1 (*) [16])(param_2 + lVar15);
              auStack_270[lVar14] = auStack_270[lVar14] | 1L << ((byte)lVar12 & 0x3f);
              puVar16 = (undefined *)CONCAT71((int7)((ulonglong)puVar16 >> 8),1);
            }
            lVar12 = lVar12 + 1;
            lVar15 = lVar15 + 0x10;
          } while (lVar12 != 0x40);
          lVar15 = 0x1800;
          lVar12 = 0;
          do {
            if ((*(longlong *)(param_2 + lVar15) != *(longlong *)(lVar7 + lVar15)) ||
               (*(longlong *)(param_2 + lVar15 + 8) != *(longlong *)(lVar7 + 8 + lVar15))) {
              *(undefined1 (*) [16])(lVar7 + lVar15) = *(undefined1 (*) [16])(param_2 + lVar15);
              auStack_270[lVar14] = auStack_270[lVar14] | 1L << ((byte)lVar12 & 0x3f);
              puVar16 = (undefined *)CONCAT71((int7)((ulonglong)puVar16 >> 8),1);
            }
            lVar12 = lVar12 + 1;
            lVar15 = lVar15 + 0x10;
          } while (lVar12 != 0x40);
          lVar15 = 0x1c00;
          lVar12 = 0;
          do {
            if ((*(longlong *)(param_2 + lVar15) != *(longlong *)(lVar7 + lVar15)) ||
               (*(longlong *)(param_2 + lVar15 + 8) != *(longlong *)(lVar7 + 8 + lVar15))) {
              *(undefined1 (*) [16])(lVar7 + lVar15) = *(undefined1 (*) [16])(param_2 + lVar15);
              auStack_270[lVar14] = auStack_270[lVar14] | 1L << ((byte)lVar12 & 0x3f);
              puVar16 = (undefined *)CONCAT71((int7)((ulonglong)puVar16 >> 8),1);
            }
            lVar12 = lVar12 + 1;
            lVar15 = lVar15 + 0x10;
          } while (lVar12 != 0x40);
          lVar14 = lVar14 + 1;
          lVar7 = lVar7 + 0x2000;
          param_2 = param_2 + 0x2000;
        } while (lVar14 != 0x40);
        if (((ulonglong)puVar16 & 1) != 0) {
          plStack_50 = (longlong *)CONCAT71(plStack_50._1_7_,cVar6);
          param_1 = param_1 + 0x18;
          param_2 = auStack_470;
          pub_142e32760(param_2,auStack_270,0x200);
          pdb_1409c5460(param_1,param_2);
          cVar6 = (char)plStack_50;
        }
        if (cVar6 == '\0') {
          return;
        }
        plVar10 = (longlong *)pdb_140e97000();
        if (((char)plVar10[0xd] != '\x01') &&
           (plVar10 = (longlong *)pdb_142d8ec20(plVar10,0), plVar10 == (longlong *)0x0)) break;
        if (*plVar10 == 0) {
          *plVar10 = -1;
          plStack_50 = plVar10;
          pdb_140e95370(plVar10 + 1,unaff_RBX);
          *plStack_50 = *plStack_50 + 1;
          return;
        }
      }
      plVar10 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_1419c1351:
      plVar10 = (longlong *)pdb_142d8ec20(plVar10,0);
    } while (plVar10 != (longlong *)0x0);
    pdb_142dc7890(&UNK_143326860);
LAB_1419c1381:
    pdb_142dc8070(&UNK_143360e00,0x33);
  }
  pdb_142dc8070(&UNK_143360f70,0x4d,0);
LAB_1419c13c4:
  pdb_142dc8070(&UNK_143360f70,0x4d);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

