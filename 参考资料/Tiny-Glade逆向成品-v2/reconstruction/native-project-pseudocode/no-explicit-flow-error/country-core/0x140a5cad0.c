// VA 0x140a5cad0, PDB extent 2816 bytes
// country_core::startup::startup_terrain::startup_terrain
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/startup_terrain.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::startup::startup_terrain::startup_terrain
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/startup_terrain.rs
   Extent: 2816 */

void pdb_140a5cad0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,longlong param_7)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined8 uStack_190;
  undefined8 uStack_188;
  longlong *plStack_180;
  ulonglong uStack_178;
  ulonglong uStack_170;
  ulonglong uStack_168;
  uint uStack_160;
  undefined4 uStack_15c;
  uint uStack_158;
  undefined4 uStack_154;
  uint uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  ulonglong uStack_140;
  ulonglong uStack_138;
  ulonglong uStack_130;
  ulonglong uStack_128;
  ulonglong uStack_120;
  ulonglong uStack_118;
  ulonglong uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  ulonglong uStack_f8;
  ulonglong uStack_f0;
  ulonglong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  uint uStack_d0;
  undefined8 uStack_cc;
  undefined4 uStack_c4;
  ulonglong uStack_c0;
  ulonglong uStack_b8;
  ulonglong uStack_b0;
  ulonglong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulonglong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  plVar2 = (longlong *)*param_1;
  uVar13 = *param_5;
  uVar14 = 0x1e;
  lVar6 = pdb_141648c80(&UNK_14303ea68,0x1e,*plVar2 + 0x10,uVar13);
  if (lVar6 == 1) {
    uStack_f8 = uVar14;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14303f138,0x2b,&uStack_f8,&UNK_14303f118,&UNK_14303ea88);
  }
  plVar15 = *(longlong **)(param_7 + 8);
  if (plVar15 == (longlong *)0x0) {
    plVar15 = *(longlong **)(param_7 + 0x10);
  }
  lVar6 = plVar15[2];
  plStack_180 = plVar2;
  if ((ulonglong)(*plVar15 - lVar6) < 0x10) {
    pdb_142d7f1b0(plVar15,lVar6,0x10,1,1);
  }
  plVar2 = plStack_180;
  lVar10 = plVar15[1];
  *(code **)(lVar10 + lVar6) = pdb_14160a2f0;
  *(ulonglong *)(lVar10 + 8 + lVar6) = uVar14;
  plVar15[2] = lVar6 + 0x10;
  pdb_141b241d0(&uStack_f8,&UNK_14303eaa0,0x1e);
  if (!SBORROW8(0,uStack_f8)) {
    uStack_108 = uStack_88;
    uStack_100 = uStack_80;
    uStack_118 = uStack_98;
    uStack_110 = uStack_90;
    uStack_128 = uStack_a8;
    uStack_120 = uStack_a0;
    uStack_138 = uStack_b8;
    uStack_130 = uStack_b0;
    uStack_148 = uStack_cc._4_4_;
    uStack_144 = uStack_c4;
    uStack_158 = (uint)uStack_d8;
    uStack_154 = uStack_d8._4_4_;
    uStack_150 = uStack_d0;
    uStack_14c = (undefined4)uStack_cc;
    uStack_168 = uStack_e8;
    uStack_160 = (uint)uStack_e0;
    uStack_15c = uStack_e0._4_4_;
    uStack_178 = uStack_f8;
    uStack_170 = uStack_f0;
    uStack_188 = *param_3;
    uVar12 = *param_2;
    uVar14 = pdb_140b08d00(&uStack_178,&UNK_14303ead8,0x10,uStack_188,uVar12);
    uVar3 = *param_4;
    pdb_140a596f0(&uStack_178,uVar3,&UNK_14303eae8,0x31,&UNK_14303eb20);
    lVar6 = *plVar2;
    puVar7 = (undefined8 *)pdb_140bf45b0(uVar13,&UNK_14331ca08);
    if (puVar7 != (undefined8 *)0x0) {
      uVar8 = (**(code **)(puVar7[1] + 0x18))(*puVar7);
      if (uVar8 != 0) {
        uVar4 = *param_6;
        uVar9 = pdb_140df4400(&UNK_14303eb50,0xd);
        uStack_f0 = pdb_140a2e580(uVar4,uVar9);
        uStack_e8 = 0x9c4000000000;
        uStack_f8 = uVar8;
        uStack_80 = pdb_141991ea0(&uStack_178,lVar6 + 0x10,&uStack_f8);
        LOCK();
        piVar1 = (int *)((uStack_170 & 0xffffffffffffffc0) + 0x10 +
                        (ulonglong)((uint)uStack_170 & 0x3f) * 4);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        if (uStack_168 != 0) {
          LOCK();
          piVar1 = (int *)((uStack_168 & 0xffffffffffffffc0) + 0x10 +
                          (ulonglong)((uint)uStack_168 & 0x3f) * 4);
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        uStack_a0 = CONCAT44(uStack_15c,uStack_160);
        if (uStack_a0 != 0) {
          LOCK();
          piVar1 = (int *)((uStack_a0 & 0xffffffffffffffc0) + 0x10 +
                          (ulonglong)(uStack_160 & 0x3f) * 4);
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        uStack_98 = CONCAT44(uStack_154,uStack_158);
        if (uStack_98 != 0) {
          LOCK();
          piVar1 = (int *)((uStack_98 & 0xffffffffffffffc0) + 0x10 +
                          (ulonglong)(uStack_158 & 0x3f) * 4);
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        uStack_88 = CONCAT44(uStack_144,uStack_148);
        uStack_90 = CONCAT44(uStack_14c,uStack_150);
        if (uStack_90 != 0) {
          LOCK();
          piVar1 = (int *)((uStack_90 & 0xfffffffffffffffc) + 0x10 + (ulonglong)(uStack_150 & 3) * 4
                          );
          *piVar1 = *piVar1 + 1;
          UNLOCK();
        }
        uVar5 = _UNK_142e4e658;
        uVar9 = _DAT_142e4e650;
        uStack_d0 = 0;
        uStack_d8 = 0;
        uStack_f8 = uStack_f8 & 0xffffffff00000000;
        uStack_e8 = _DAT_142e4e650;
        uStack_e0 = _UNK_142e4e658;
        uStack_cc = 0x3f8000003f800000;
        uStack_c4 = 0x3f800000;
        uStack_b8 = uStack_178;
        uStack_b0 = uStack_170;
        uStack_a8 = uStack_168;
        pcStack_78 = pdb_140af4a50;
        uStack_70 = 0;
        uStack_f0 = uVar14;
        pdb_14161f290(&uStack_1c0,param_7,&uStack_f8,&UNK_14303eb60);
        pdb_1409694c0(&uStack_178);
        pdb_141b241d0(&uStack_f8,&UNK_14303eb78,0x1e);
        if (!SBORROW8(0,uStack_f8)) {
          uStack_108 = uStack_88;
          uStack_100 = uStack_80;
          uStack_118 = uStack_98;
          uStack_110 = uStack_90;
          uStack_128 = uStack_a8;
          uStack_120 = uStack_a0;
          uStack_138 = uStack_b8;
          uStack_130 = uStack_b0;
          uStack_148 = uStack_cc._4_4_;
          uStack_144 = uStack_c4;
          uStack_158 = (uint)uStack_d8;
          uStack_154 = uStack_d8._4_4_;
          uStack_150 = uStack_d0;
          uStack_14c = (undefined4)uStack_cc;
          uStack_168 = uStack_e8;
          uStack_160 = (uint)uStack_e0;
          uStack_15c = uStack_e0._4_4_;
          uStack_178 = uStack_f8;
          uStack_170 = uStack_f0;
          uVar14 = pdb_140b08d00(&uStack_178,&UNK_14303ebb0,0x10,uStack_188,uVar12);
          pdb_140a596f0(&uStack_1c0,uVar3,&UNK_14303ebc0,0x18,&UNK_14303ebd8);
          lVar6 = *plStack_180;
          uStack_61 = 1;
          puVar7 = (undefined8 *)pdb_140bf45b0(uVar13,&UNK_14331c908);
          if (puVar7 != (undefined8 *)0x0) {
            uStack_61 = 1;
            lVar10 = (**(code **)(puVar7[1] + 0x18))(*puVar7);
            if (lVar10 != 0) {
              uStack_61 = 1;
              uVar11 = pdb_140df4400(&UNK_14303ec08,10);
              uStack_61 = 1;
              uVar11 = pdb_140a2e580(uVar4,uVar11);
              uStack_61 = 1;
              uStack_80 = pdb_1419914d0(&uStack_1c0,lVar6 + 0x10,lVar10,uVar11);
              uStack_170 = uStack_1c0;
              uStack_168 = uStack_1b8;
              uStack_160 = uStack_1b0;
              uStack_15c = uStack_1ac;
              uStack_158 = uStack_1a8;
              uStack_154 = uStack_1a4;
              uStack_150 = uStack_1a0;
              uStack_14c = uStack_19c;
              uStack_148 = uStack_198;
              uStack_144 = uStack_194;
              uStack_140 = uStack_190;
              uStack_d8 = 0;
              uStack_d0 = 0;
              uStack_f8 = uStack_f8 & 0xffffffff00000000;
              uStack_e8 = uVar9;
              uStack_e0 = uVar5;
              uStack_cc = 0x3f8000003f800000;
              uStack_c4 = 0x3f800000;
              uStack_c0 = uStack_178;
              uStack_b8 = uStack_1c0;
              uStack_a8 = CONCAT44(uStack_1ac,uStack_1b0);
              uStack_b0 = uStack_1b8;
              uStack_a0 = CONCAT44(uStack_1a4,uStack_1a8);
              uStack_98 = CONCAT44(uStack_19c,uStack_1a0);
              uStack_90 = CONCAT44(uStack_194,uStack_198);
              uStack_88 = uStack_190;
              pcStack_78 = pdb_140af4a50;
              uStack_70 = 2;
              uStack_61 = 0;
              uStack_f0 = uVar14;
              pdb_14161f290(&uStack_178,param_7,&uStack_f8,&UNK_14303ec18);
              pdb_141b241d0(&uStack_f8,&UNK_14303ec30,0x20);
              if (SBORROW8(0,uStack_f8)) {
                uStack_178 = uStack_f0;
                    /* WARNING: Subroutine does not return */
                pdb_142dc8170(&UNK_14303f138,0x2b,&uStack_178,&UNK_14303f118,&UNK_14303ec50);
              }
              uStack_108 = uStack_88;
              uStack_100 = uStack_80;
              uStack_118 = uStack_98;
              uStack_110 = uStack_90;
              uStack_128 = uStack_a8;
              uStack_120 = uStack_a0;
              uStack_138 = uStack_b8;
              uStack_130 = uStack_b0;
              uStack_148 = uStack_cc._4_4_;
              uStack_144 = uStack_c4;
              uStack_140 = uStack_c0;
              uStack_158 = (uint)uStack_d8;
              uStack_154 = uStack_d8._4_4_;
              uStack_150 = uStack_d0;
              uStack_14c = (undefined4)uStack_cc;
              uStack_168 = uStack_e8;
              uStack_160 = (uint)uStack_e0;
              uStack_15c = uStack_e0._4_4_;
              uStack_178 = uStack_f8;
              uStack_170 = uStack_f0;
              uVar12 = pdb_140b08d00(&uStack_178,&UNK_14303ec68,0x12,uStack_188,uVar12);
              pdb_140a596f0(&uStack_1c0,uVar3,&UNK_14303eae8,0x31,&UNK_14303ec80);
              lVar6 = *plStack_180;
              uStack_62 = 1;
              puVar7 = (undefined8 *)pdb_140bf45b0(uVar13,&UNK_14331ca08);
              if (puVar7 != (undefined8 *)0x0) {
                uStack_62 = 1;
                uVar14 = (**(code **)(puVar7[1] + 0x18))(*puVar7);
                if (uVar14 != 0) {
                  uStack_62 = 1;
                  uVar13 = pdb_140df4400(&UNK_14303eb50,0xd);
                  uStack_62 = 1;
                  uStack_f0 = pdb_140a2e580(uVar4,uVar13);
                  uStack_e8 = 0x9c4000000001;
                  uStack_62 = 1;
                  uStack_f8 = uVar14;
                  uStack_80 = pdb_141991ea0(&uStack_1c0,lVar6 + 0x10,&uStack_f8);
                  uStack_170 = uStack_1c0;
                  uStack_168 = uStack_1b8;
                  uStack_160 = uStack_1b0;
                  uStack_15c = uStack_1ac;
                  uStack_158 = uStack_1a8;
                  uStack_154 = uStack_1a4;
                  uStack_150 = uStack_1a0;
                  uStack_14c = uStack_19c;
                  uStack_148 = uStack_198;
                  uStack_144 = uStack_194;
                  uStack_140 = uStack_190;
                  uStack_d8 = 0;
                  uStack_d0 = 0;
                  uStack_f8 = uStack_f8 & 0xffffffff00000000;
                  uStack_e8 = uVar9;
                  uStack_e0 = uVar5;
                  uStack_cc = 0x3f8000003f800000;
                  uStack_c4 = 0x3f800000;
                  uStack_c0 = uStack_178;
                  uStack_b8 = uStack_1c0;
                  uStack_b0 = uStack_1b8;
                  uStack_88 = uStack_190;
                  pcStack_78 = pdb_140af4a50;
                  uStack_70 = 1;
                  uStack_62 = 0;
                  uStack_f0 = uVar12;
                  pdb_14161f290(&uStack_178,param_7,&uStack_f8,&UNK_14303ecb0);
                  return;
                }
              }
              uStack_62 = 1;
                    /* WARNING: Subroutine does not return */
              pdb_142dc8150(&UNK_14303ec98);
            }
          }
          uStack_61 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_14303ebf0);
        }
        uStack_178 = uStack_f0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_14303f138,0x2b,&uStack_178,&UNK_14303f118,&UNK_14303eb98);
      }
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14303eb38);
  }
  uStack_178 = uStack_f0;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_14303f138,0x2b,&uStack_178,&UNK_14303f118,&UNK_14303eac0);
}

