// VA 0x140c5aeb0, PDB extent 5117 bytes
// country_core::startup::startup_water::startup_water
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/startup_water.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::startup::startup_water::startup_water
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/startup_water.rs
   Extent: 5117 */

void pdb_140c5aeb0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 param_7,longlong *param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  longlong lVar12;
  bool bVar13;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
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
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_cc;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined1 uStack_65;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  if (DAT_143cb2d0c != '\0') {
    return;
  }
  lVar12 = *(longlong *)*param_1;
  pdb_141b241d0(&uStack_f8,&UNK_14306ecd8,0x1e);
  if (SBORROW8(0,CONCAT44(uStack_f4,uStack_f8))) {
    uStack_178 = uStack_f0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14306f5b0,0x2b,&uStack_178,&UNK_14306f570,&UNK_14306ed28);
  }
  uStack_108 = uStack_88;
  uStack_100 = uStack_80;
  uStack_110 = uStack_90;
  uStack_128 = uStack_a8;
  uStack_138 = uStack_b8;
  uStack_130 = uStack_b0;
  uStack_148 = uStack_cc._4_4_;
  uStack_144 = uStack_c4;
  uStack_158 = (undefined4)uStack_d8;
  uStack_154 = uStack_d8._4_4_;
  uStack_150 = uStack_d0;
  uStack_14c = (undefined4)uStack_cc;
  uStack_160 = (undefined4)uStack_e0;
  uStack_15c = uStack_e0._4_4_;
  uStack_188 = *param_3;
  uStack_180 = *param_2;
  uVar3 = pdb_140b08d00(&uStack_178,&UNK_14306ed40,0xb,uStack_188,uStack_180);
  uVar10 = *param_4;
  pdb_140a596f0(&uStack_b8,uVar10,&UNK_14306ed4b,0x28,&UNK_14306ed78);
  uVar2 = _UNK_142e4e658;
  uVar1 = _DAT_142e4e650;
  uStack_d0 = 0;
  uStack_d8 = 0;
  uStack_f8 = 0;
  uStack_e8 = _DAT_142e4e650;
  uStack_e0 = _UNK_142e4e658;
  uStack_cc = 0x3f8000003f800000;
  uStack_c4 = 0x3f800000;
  uStack_80 = 0;
  pcStack_78._0_4_ = 0xf;
  uStack_f0 = uVar3;
  pdb_14161ed70(&uStack_178,param_7,&uStack_f8,&UNK_14306ed90);
  lVar9 = *param_8;
  if (*(char *)(lVar9 + 0x98) == '\x04') {
    pdb_140a596f0(&uStack_b8,uVar10,&UNK_14306edf0,0x16,&UNK_14306ee08);
    uStack_d0 = 0;
    uStack_d8 = 0;
    uStack_f8 = 0;
    uStack_e8 = uVar1;
    uStack_e0 = uVar2;
    uStack_cc = 0x3f8000003f800000;
    uStack_c4 = 0x3f800000;
    uStack_80 = 0;
    uStack_f0 = uVar3;
    pdb_14161c4e0(&uStack_178,param_7,&uStack_f8,&UNK_14306ee20);
    pdb_140a596f0(&uStack_b8,uVar10,&UNK_14306ee38,0x1d,&UNK_14306ee58);
    uStack_d0 = 0;
    uStack_d8 = 0;
    uStack_f8 = 0;
    uStack_e8 = uVar1;
    uStack_e0 = uVar2;
    uStack_cc = 0x3f8000003f800000;
    uStack_c4 = 0x3f800000;
    uStack_80 = 0;
    uStack_f0 = uVar3;
    pdb_14161c4e0(&uStack_178,param_7,&uStack_f8,&UNK_14306ee70);
  }
  else {
    pdb_140a596f0(&uStack_b8,uVar10,&UNK_14306eda8,0x18,&UNK_14306edc0);
    uStack_d0 = 0;
    uStack_d8 = 0;
    uStack_f8 = 0;
    uStack_e8 = uVar1;
    uStack_e0 = uVar2;
    uStack_cc = 0x3f8000003f800000;
    uStack_c4 = 0x3f800000;
    uStack_80 = 0;
    pcStack_78._0_4_ = 0x11;
    uStack_f0 = uVar3;
    pdb_14161ed70(&uStack_178,param_7,&uStack_f8,&UNK_14306edd8);
  }
  lVar12 = lVar12 + 0x10;
  if (2 < *(byte *)(lVar9 + 0x98)) {
    pdb_140a596f0(&uStack_1c0,uVar10,&UNK_14306ef38,0x11,&UNK_14306ef50);
    uStack_63 = 1;
    pdb_141b241d0(&uStack_f8,&UNK_14306ef68,0x20);
    if (SBORROW8(0,CONCAT44(uStack_f4,uStack_f8))) {
      uStack_178 = uStack_f0;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14306f5b0,0x2b,&uStack_178,&UNK_14306f570,&UNK_14306ef88);
    }
    uStack_108 = uStack_88;
    uStack_100 = uStack_80;
    uStack_110 = uStack_90;
    uStack_128 = uStack_a8;
    uStack_138 = uStack_b8;
    uStack_130 = uStack_b0;
    uStack_148 = uStack_cc._4_4_;
    uStack_144 = uStack_c4;
    uStack_158 = (undefined4)uStack_d8;
    uStack_154 = uStack_d8._4_4_;
    uStack_150 = uStack_d0;
    uStack_14c = (undefined4)uStack_cc;
    uStack_168 = uStack_e8;
    uStack_160 = (undefined4)uStack_e0;
    uStack_15c = uStack_e0._4_4_;
    uStack_178 = CONCAT44(uStack_f4,uStack_f8);
    uStack_170 = uStack_f0;
    uStack_63 = 1;
    uVar4 = pdb_140b08d00(&uStack_178,&UNK_14306efa0,0xd,uStack_188,uStack_180);
    uVar3 = *param_5;
    uStack_63 = 1;
    puVar5 = (undefined8 *)pdb_140bf45b0(uVar3,&UNK_14331ca18);
    if (puVar5 != (undefined8 *)0x0) {
      uStack_63 = 1;
      lVar6 = (**(code **)(puVar5[1] + 0x18))(*puVar5);
      if (lVar6 != 0) {
        uStack_63 = 1;
        uStack_80 = pdb_141991790(&uStack_1c0,lVar12,lVar6);
        uStack_b8 = CONCAT44(uStack_1bc,uStack_1c0);
        uStack_b0 = CONCAT44(uStack_1b4,uStack_1b8);
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
        uStack_f8 = 0;
        uStack_e8 = uVar1;
        uStack_e0 = uVar2;
        uStack_cc = 0x3f8000003f800000;
        uStack_c4 = 0x3f800000;
        uStack_c0 = uStack_178;
        uStack_a8 = CONCAT44(uStack_1ac,uStack_1b0);
        uStack_a0 = uStack_1a8;
        uStack_9c = uStack_1a4;
        uStack_98 = uStack_1a0;
        uStack_94 = uStack_19c;
        uStack_90 = CONCAT44(uStack_194,uStack_198);
        uStack_88 = uStack_190;
        pcStack_78 = pdb_140af4a50;
        uStack_70 = 7;
        uStack_63 = 0;
        uStack_f0 = uVar4;
        pdb_14161c000(&uStack_178,param_7,&uStack_f8,&UNK_14306efc8);
LAB_140c5b699:
        pdb_140a596f0(&uStack_1c0,uVar10,&UNK_14306efe0,0x1b,&UNK_14306f000);
        if (*(char *)(lVar9 + 0x98) == '\x04') {
          uStack_61 = 1;
          pdb_141b241d0(&uStack_f8,&UNK_14306f058,0x25);
          if (SBORROW8(0,CONCAT44(uStack_f4,uStack_f8))) {
            uStack_178 = uStack_f0;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8170(&UNK_14306f5b0,0x2b,&uStack_178,&UNK_14306f570,&UNK_14306f080);
          }
        }
        else {
          uStack_61 = 1;
          pdb_141b241d0(&uStack_f8,&UNK_14306f018,0x21);
          if (SBORROW8(0,CONCAT44(uStack_f4,uStack_f8))) {
            uStack_178 = uStack_f0;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8170(&UNK_14306f5b0,0x2b,&uStack_178,&UNK_14306f570,&UNK_14306f040);
          }
        }
        uStack_108 = uStack_88;
        uStack_100 = uStack_80;
        uStack_118 = CONCAT44(uStack_94,uStack_98);
        uStack_110 = uStack_90;
        uStack_120 = CONCAT44(uStack_9c,uStack_a0);
        uStack_128 = uStack_a8;
        uStack_138 = uStack_b8;
        uStack_130 = uStack_b0;
        uStack_148 = uStack_cc._4_4_;
        uStack_144 = uStack_c4;
        uStack_140 = uStack_c0;
        uStack_158 = (undefined4)uStack_d8;
        uStack_154 = uStack_d8._4_4_;
        uStack_150 = uStack_d0;
        uStack_14c = (undefined4)uStack_cc;
        uStack_168 = uStack_e8;
        uStack_160 = (undefined4)uStack_e0;
        uStack_15c = uStack_e0._4_4_;
        uStack_178 = CONCAT44(uStack_f4,uStack_f8);
        uStack_170 = uStack_f0;
        uStack_61 = 1;
        uVar7 = pdb_140b08d00(&uStack_178,&UNK_14306f098,0xe,uStack_188,uStack_180);
        uVar4 = *param_6;
        uStack_61 = 1;
        uVar8 = pdb_140df4400(&UNK_14306f0a6,0x14);
        uStack_61 = 1;
        uVar8 = pdb_140a2e580(uVar4,uVar8);
        uStack_61 = 1;
        puVar5 = (undefined8 *)pdb_140bf45b0(uVar3,&UNK_14331c948);
        if (puVar5 != (undefined8 *)0x0) {
          uStack_61 = 1;
          lVar6 = (**(code **)(puVar5[1] + 0x18))(*puVar5);
          if (lVar6 != 0) {
            uStack_61 = 1;
            uStack_80 = pdb_141991210(&uStack_1c0,lVar12,uVar8,lVar6);
            uStack_b8 = CONCAT44(uStack_1bc,uStack_1c0);
            uStack_b0 = CONCAT44(uStack_1b4,uStack_1b8);
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
            uStack_f8 = 0;
            uStack_e8 = uVar1;
            uStack_e0 = uVar2;
            uStack_cc = 0x3f8000003f800000;
            uStack_c4 = 0x3f800000;
            uStack_c0 = uStack_178;
            uStack_a8 = CONCAT44(uStack_1ac,uStack_1b0);
            uStack_a0 = uStack_1a8;
            uStack_9c = uStack_1a4;
            uStack_98 = uStack_1a0;
            uStack_94 = uStack_19c;
            uStack_90 = CONCAT44(uStack_194,uStack_198);
            uStack_88 = uStack_190;
            pcStack_78 = pdb_140af4a50;
            uStack_70 = 0xe;
            uStack_61 = 0;
            uStack_f0 = uVar7;
            pdb_14161c000(&uStack_178,param_7,&uStack_f8,&UNK_14306f0d8);
            pdb_140a596f0(&uStack_1c0,uVar10,&UNK_14306ef38,0x11,&UNK_14306f0f0);
            bVar13 = *(char *)(lVar9 + 0x98) == '\x03';
            uVar7 = 0x17;
            if (bVar13) {
              uVar7 = 0x1e;
            }
            puVar11 = &UNK_14306f108;
            if (bVar13) {
              puVar11 = &UNK_14306f11f;
            }
            uStack_64 = 1;
            pdb_141b241d0(&uStack_f8,puVar11,uVar7);
            if (!SBORROW8(0,CONCAT44(uStack_f4,uStack_f8))) {
              uStack_108 = uStack_88;
              uStack_100 = uStack_80;
              uStack_118 = CONCAT44(uStack_94,uStack_98);
              uStack_110 = uStack_90;
              uStack_120 = CONCAT44(uStack_9c,uStack_a0);
              uStack_128 = uStack_a8;
              uStack_138 = uStack_b8;
              uStack_130 = uStack_b0;
              uStack_148 = uStack_cc._4_4_;
              uStack_144 = uStack_c4;
              uStack_140 = uStack_c0;
              uStack_158 = (undefined4)uStack_d8;
              uStack_154 = uStack_d8._4_4_;
              uStack_150 = uStack_d0;
              uStack_14c = (undefined4)uStack_cc;
              uStack_168 = uStack_e8;
              uStack_160 = (undefined4)uStack_e0;
              uStack_15c = uStack_e0._4_4_;
              uStack_178 = CONCAT44(uStack_f4,uStack_f8);
              uStack_170 = uStack_f0;
              uStack_64 = 1;
              uVar7 = pdb_140b08d00(&uStack_178,&UNK_14306f158,4,uStack_188,uStack_180);
              uStack_64 = 1;
              puVar5 = (undefined8 *)pdb_140bf45b0(uVar3,&UNK_14331ca10);
              if (puVar5 != (undefined8 *)0x0) {
                uStack_64 = 1;
                lVar9 = (**(code **)(puVar5[1] + 0x18))(*puVar5);
                if (lVar9 != 0) {
                  uStack_64 = 1;
                  uStack_80 = pdb_141991790(&uStack_1c0,lVar12,lVar9);
                  uStack_b8 = CONCAT44(uStack_1bc,uStack_1c0);
                  uStack_b0 = CONCAT44(uStack_1b4,uStack_1b8);
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
                  uStack_f8 = 0;
                  uStack_e8 = uVar1;
                  uStack_e0 = uVar2;
                  uStack_cc = 0x3f8000003f800000;
                  uStack_c4 = 0x3f800000;
                  uStack_c0 = uStack_178;
                  uStack_a8 = CONCAT44(uStack_1ac,uStack_1b0);
                  uStack_a0 = uStack_1a8;
                  uStack_9c = uStack_1a4;
                  uStack_98 = uStack_1a0;
                  uStack_94 = uStack_19c;
                  uStack_90 = CONCAT44(uStack_194,uStack_198);
                  uStack_88 = uStack_190;
                  pcStack_78 = pdb_140af4a50;
                  uStack_70 = 8;
                  uStack_64 = 0;
                  uStack_f0 = uVar7;
                  pdb_14161c000(&uStack_178,param_7,&uStack_f8,&UNK_14306f178);
                  pdb_140a596f0(&uStack_1c0,uVar10,&UNK_14306f190,0x1a,&UNK_14306f1b0);
                  uStack_65 = 1;
                  pdb_141b241d0(&uStack_f8,&UNK_14306f1c8,0x1f);
                  if (!SBORROW8(0,CONCAT44(uStack_f4,uStack_f8))) {
                    uStack_108 = uStack_88;
                    uStack_100 = uStack_80;
                    uStack_118 = CONCAT44(uStack_94,uStack_98);
                    uStack_110 = uStack_90;
                    uStack_120 = CONCAT44(uStack_9c,uStack_a0);
                    uStack_128 = uStack_a8;
                    uStack_138 = uStack_b8;
                    uStack_130 = uStack_b0;
                    uStack_148 = uStack_cc._4_4_;
                    uStack_144 = uStack_c4;
                    uStack_140 = uStack_c0;
                    uStack_158 = (undefined4)uStack_d8;
                    uStack_154 = uStack_d8._4_4_;
                    uStack_150 = uStack_d0;
                    uStack_14c = (undefined4)uStack_cc;
                    uStack_168 = uStack_e8;
                    uStack_160 = (undefined4)uStack_e0;
                    uStack_15c = uStack_e0._4_4_;
                    uStack_178 = CONCAT44(uStack_f4,uStack_f8);
                    uStack_170 = uStack_f0;
                    uStack_65 = 1;
                    uVar10 = pdb_140b08d00(&uStack_178,&UNK_14306f200,0xc,uStack_188,uStack_180);
                    uStack_65 = 1;
                    uVar3 = pdb_140df4400(&UNK_14306f20c,0xd);
                    uStack_65 = 1;
                    uVar3 = pdb_140a2e580(uVar4,uVar3);
                    uStack_65 = 1;
                    uStack_80 = pdb_141991630(&uStack_1c0,lVar12,uVar3);
                    uStack_88 = uStack_190;
                    uStack_98 = uStack_1a0;
                    uStack_94 = uStack_19c;
                    uStack_a0 = uStack_1a8;
                    uStack_9c = uStack_1a4;
                    uStack_f8 = 0;
                    uStack_e8 = uVar1;
                    uStack_e0 = uVar2;
                    uStack_d8 = 0;
                    uStack_d0 = 0;
                    uStack_cc = 0x3f8000003f800000;
                    uStack_c4 = 0x3f800000;
                    uStack_65 = 0;
                    uStack_f0 = uVar10;
                    pdb_14161fcb0(&uStack_178,param_7,&uStack_f8,&UNK_14306f220);
                    return;
                  }
                  uStack_178 = uStack_f0;
                    /* WARNING: Subroutine does not return */
                  pdb_142dc8170(&UNK_14306f5b0,0x2b,&uStack_178,&UNK_14306f570,&UNK_14306f1e8);
                }
              }
              uStack_64 = 1;
                    /* WARNING: Subroutine does not return */
              pdb_142dc8150(&UNK_14306f160);
            }
            uStack_178 = uStack_f0;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8170(&UNK_14306f5b0,0x2b,&uStack_178,&UNK_14306f570,&UNK_14306f140);
          }
        }
        uStack_61 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_14306f0c0);
      }
    }
    uStack_63 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14306efb0);
  }
  pdb_140a596f0(&uStack_1c0,uVar10,&UNK_14306ee88,0x14,&UNK_14306eea0);
  uStack_62 = 1;
  pdb_141b241d0(&uStack_f8,&UNK_14306eeb8,0x1a);
  if (SBORROW8(0,CONCAT44(uStack_f4,uStack_f8))) {
    uStack_178 = uStack_f0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14306f5b0,0x2b,&uStack_178,&UNK_14306f570,&UNK_14306eed8);
  }
  uStack_108 = uStack_88;
  uStack_100 = uStack_80;
  uStack_110 = uStack_90;
  uStack_128 = uStack_a8;
  uStack_138 = uStack_b8;
  uStack_130 = uStack_b0;
  uStack_148 = uStack_cc._4_4_;
  uStack_144 = uStack_c4;
  uStack_158 = (undefined4)uStack_d8;
  uStack_154 = uStack_d8._4_4_;
  uStack_150 = uStack_d0;
  uStack_14c = (undefined4)uStack_cc;
  uStack_168 = uStack_e8;
  uStack_160 = (undefined4)uStack_e0;
  uStack_15c = uStack_e0._4_4_;
  uStack_178 = CONCAT44(uStack_f4,uStack_f8);
  uStack_170 = uStack_f0;
  uStack_62 = 1;
  uVar4 = pdb_140b08d00(&uStack_178,&UNK_14306eef0,7,uStack_188,uStack_180);
  uVar3 = *param_5;
  uStack_62 = 1;
  puVar5 = (undefined8 *)pdb_140bf45b0(uVar3,&UNK_14331ca18);
  if (puVar5 != (undefined8 *)0x0) {
    uStack_62 = 1;
    lVar6 = (**(code **)(puVar5[1] + 0x18))(*puVar5);
    if (lVar6 != 0) {
      uVar7 = *param_6;
      uStack_62 = 1;
      uVar8 = pdb_140df4400(&UNK_14306ef10,0xd);
      uStack_62 = 1;
      uVar7 = pdb_140a2e580(uVar7,uVar8);
      uStack_62 = 1;
      uStack_80 = pdb_1419922e0(&uStack_1c0,lVar12,lVar6,uVar7);
      uStack_b8 = CONCAT44(uStack_1bc,uStack_1c0);
      uStack_b0 = CONCAT44(uStack_1b4,uStack_1b8);
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
      uStack_f8 = 0;
      uStack_e8 = uVar1;
      uStack_e0 = uVar2;
      uStack_cc = 0x3f8000003f800000;
      uStack_c4 = 0x3f800000;
      uStack_c0 = uStack_178;
      uStack_a8 = CONCAT44(uStack_1ac,uStack_1b0);
      uStack_a0 = uStack_1a8;
      uStack_9c = uStack_1a4;
      uStack_98 = uStack_1a0;
      uStack_94 = uStack_19c;
      uStack_90 = CONCAT44(uStack_194,uStack_198);
      uStack_88 = uStack_190;
      pcStack_78 = pdb_140af4a50;
      uStack_70 = 7;
      uStack_62 = 0;
      uStack_f0 = uVar4;
      pdb_14161c000(&uStack_178,param_7,&uStack_f8,&UNK_14306ef20);
      goto LAB_140c5b699;
    }
  }
  uStack_62 = 1;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_14306eef8);
}

