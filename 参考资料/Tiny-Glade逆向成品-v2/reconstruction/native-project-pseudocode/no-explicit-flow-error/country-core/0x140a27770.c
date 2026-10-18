// VA 0x140a27770, PDB extent 1054 bytes
// country_core::systems::steam::missing_mods::MissingMods::drain_lookup_results
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/missing_mods.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::steam::missing_mods::MissingMods::drain_lookup_results
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/missing_mods.rs
   Extent: 1054 */

void pdb_140a27770(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong *puVar8;
  int iVar9;
  byte *pbVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  bool bVar15;
  ulonglong uStack_f8;
  byte *pbStack_f0;
  longlong lStack_e8;
  ulonglong uStack_e0;
  byte *pbStack_d8;
  ulonglong uStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong lStack_a8;
  ulonglong *puStack_a0;
  ulonglong *puStack_98;
  undefined8 uStack_90;
  ulonglong *puStack_88;
  ulonglong uStack_80;
  ulonglong uStack_78;
  byte *pbStack_70;
  ulonglong uStack_68;
  byte *pbStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lVar5 = *(longlong *)(param_1 + 0x78);
  pcVar1 = (char *)(lVar5 + 0x10);
  LOCK();
  bVar15 = *(char *)(lVar5 + 0x10) == '\0';
  if (bVar15) {
    *(char *)(lVar5 + 0x10) = '\x01';
  }
  UNLOCK();
  if (!bVar15) {
    pdb_142dbd1a0(pcVar1,param_2,1000000000);
  }
  pdb_140e9a150(pcVar1);
  lStack_a8 = *(longlong *)(lVar5 + 0x28);
  uStack_b8 = *(undefined4 *)(lVar5 + 0x18);
  uStack_b4 = *(undefined4 *)(lVar5 + 0x1c);
  uStack_b0 = *(undefined4 *)(lVar5 + 0x20);
  uStack_ac = *(undefined4 *)(lVar5 + 0x24);
  *(undefined8 *)(lVar5 + 0x18) = 0;
  *(undefined8 *)(lVar5 + 0x20) = 8;
  *(undefined8 *)(lVar5 + 0x28) = 0;
  uStack_49 = 1;
  pdb_140e9a350();
  LOCK();
  cVar4 = *pcVar1;
  if (cVar4 == '\x01') {
    *pcVar1 = '\0';
  }
  UNLOCK();
  if (cVar4 != '\x01') {
    uStack_49 = 1;
    pdb_142dbcef0(pcVar1,0);
  }
  uStack_90 = CONCAT44(uStack_b4,uStack_b8);
  puStack_98 = (ulonglong *)CONCAT44(uStack_ac,uStack_b0);
  puStack_88 = puStack_98 + lStack_a8 * 6;
  puStack_a0 = puStack_98;
  puVar3 = puStack_98;
  if (lStack_a8 != 0) {
    lVar5 = *(longlong *)(param_1 + 8);
    lStack_c8 = *(longlong *)(param_1 + 0x10);
    lVar14 = lStack_c8 * 0x58;
    do {
      puVar3 = puStack_98 + 6;
      uVar6 = *puStack_98;
      puVar2 = puStack_98 + 1;
      puVar8 = puStack_98 + 2;
      if (SBORROW8(0,uVar6)) break;
      uStack_68 = puStack_98[5];
      uStack_78 = puStack_98[3];
      pbStack_70 = (byte *)puStack_98[4];
      uStack_e0 = uVar6;
      pbStack_d8 = (byte *)*puVar2;
      uStack_d0 = *puVar8;
      puStack_98 = puVar3;
      uStack_80 = uVar6;
      if (lStack_c8 != 0) {
        lVar12 = 0;
        do {
          pdb_140f60be0(&uStack_f8,&uStack_e0);
          pbVar10 = pbStack_f0;
          if ((*(char *)(lVar5 + lVar12) == '\0') &&
             (*(longlong *)(lVar5 + 0x18 + lVar12) == lStack_e8)) {
            iVar9 = pub_142e32750(*(undefined8 *)(lVar5 + 0x10 + lVar12),pbStack_f0);
            if (uStack_f8 != 0) {
              pub_1406abac0(pbVar10,uStack_f8,1);
            }
            if (iVar9 != 0) goto LAB_140a278d0;
            lVar7 = *(longlong *)(lVar5 + 0x38 + lVar12);
            if (-1 < lVar7) {
              pbStack_58 = *(byte **)(lVar5 + 0x40 + lVar12);
              lVar11 = *(longlong *)(lVar5 + 0x48 + lVar12);
              lStack_c0 = lVar7;
              if (lVar11 != 0) {
                pbVar10 = pbStack_58 + 8;
                do {
                  if (*(ulonglong *)(pbVar10 + -8) != 0) {
                    pub_1406abac0(*(byte **)pbVar10,*(ulonglong *)(pbVar10 + -8),1);
                  }
                  pbVar10 = pbVar10 + 0x28;
                  lVar11 = lVar11 + -1;
                } while (lVar11 != 0);
              }
              if (lStack_c0 != 0) {
                pub_1406abac0(pbStack_58,lStack_c0 * 0x28,8);
              }
            }
            puVar3 = (ulonglong *)(lVar5 + 0x48 + lVar12);
            *puVar3 = uStack_68;
            puVar3[-2] = uStack_78;
            puVar3[-1] = (ulonglong)pbStack_70;
            goto joined_r0x000140a27a80;
          }
          if (uStack_f8 != 0) {
            pub_1406abac0(pbStack_f0,uStack_f8,1);
          }
LAB_140a278d0:
          lVar12 = lVar12 + 0x58;
        } while (lVar14 - lVar12 != 0);
      }
      uVar6 = uStack_78;
      if (-1 < (longlong)uStack_78) {
        pbStack_58 = pbStack_70;
        if (uStack_68 != 0) {
          pbVar10 = pbStack_70 + 8;
          uVar13 = uStack_68;
          do {
            if (*(ulonglong *)(pbVar10 + -8) != 0) {
              pub_1406abac0(*(byte **)pbVar10,*(ulonglong *)(pbVar10 + -8),1);
            }
            pbVar10 = pbVar10 + 0x28;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        if (uVar6 != 0) {
          pub_1406abac0(pbStack_58,uVar6 * 0x28,8);
        }
      }
joined_r0x000140a27a80:
      if (uStack_80 != 0) {
        pub_1406abac0(pbStack_d8,uStack_80,1);
      }
      puVar3 = puStack_98;
    } while (puStack_98 != puStack_88);
  }
  puStack_98 = puVar3;
  uStack_49 = 0;
  pdb_140977b40(&puStack_a0);
  return;
}

