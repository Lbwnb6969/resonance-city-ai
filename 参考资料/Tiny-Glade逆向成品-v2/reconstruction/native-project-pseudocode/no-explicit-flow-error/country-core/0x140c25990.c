// VA 0x140c25990, PDB extent 1127 bytes
// country_core::systems::grass2::read_grass2_runtime_config
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/grass2/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::grass2::read_grass2_runtime_config
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/grass2/mod.rs
   Extent: 1127 */

void pdb_140c25990(ulonglong *param_1,byte *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  byte *arg0;
  int iVar3;
  undefined8 uVar4;
  byte *pbVar5;
  longlong lVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulonglong uStack_158;
  byte *pbStack_150;
  ulonglong uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  ulonglong uStack_f8;
  ulonglong uStack_f0;
  ulonglong uStack_e0;
  byte *pbStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  byte *pbStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong uStack_68;
  ulonglong uStack_60;
  byte *pbStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pbStack_d8 = param_2;
  uStack_d0 = param_3;
  pdb_140dca300(&uStack_158);
  pdb_1417fbe90(&uStack_a8,&uStack_158);
  if (SBORROW8(0,(longlong)uStack_a8)) {
    pdb_142d90830(&pbStack_d8,uStack_a0);
  }
  else {
    pbStack_b8 = (byte *)uStack_98;
    uStack_c8 = (undefined4)uStack_a8;
    uStack_c4 = uStack_a8._4_4_;
    uStack_c0 = (undefined4)uStack_a0;
    uStack_bc = uStack_a0._4_4_;
    pdb_140dca390(&uStack_a8,param_2,param_3);
    pbVar5 = (byte *)uStack_98;
    pbVar8 = pbStack_b8;
    pbStack_50 = (byte *)uStack_a0;
    if (pbStack_b8 != (byte *)0x0) {
      arg0 = (byte *)CONCAT44(uStack_bc,uStack_c0);
      lVar6 = (longlong)pbStack_b8 * 0x40;
      pbVar7 = arg0;
      do {
        uVar4 = pdb_14043b7e0(pbVar7 + 0x10);
        if (param_2 == pbVar5) {
          param_2 = pbStack_50;
          iVar3 = pub_142e32750(uVar4,pbStack_50,pbVar5);
          if ((iVar3 == 0) && (*(longlong *)(pbVar7 + 0x38) == 0x28)) {
            param_2 = &UNK_14333e3d6;
            iVar3 = pub_142e32750(*(undefined8 *)(pbVar7 + 0x30),&UNK_14333e3d6,0x28);
            if (iVar3 == 0) {
              uVar4 = *(undefined8 *)pbVar7;
              uVar1 = *(undefined8 *)(pbVar7 + 8);
              if (uStack_a8 != (byte **)0x0) {
                pub_1406abac0(pbStack_50,(ulonglong)uStack_a8,1);
              }
              pdb_1417fcaa0(&uStack_a8,&uStack_158,uVar4,uVar1);
              if (!SBORROW8(0,CONCAT44(uStack_74,uStack_78))) {
                uStack_f8 = uStack_68;
                uStack_f0 = uStack_60;
                uStack_108 = uStack_78;
                uStack_104 = uStack_74;
                uStack_100 = uStack_70;
                uStack_fc = uStack_6c;
                uStack_118 = (undefined4)uStack_88;
                uStack_114 = uStack_88._4_4_;
                uStack_110 = (undefined4)uStack_80;
                uStack_10c = uStack_80._4_4_;
                uStack_128 = (undefined4)uStack_98;
                uStack_124 = uStack_98._4_4_;
                uStack_120 = (undefined4)uStack_90;
                uStack_11c = uStack_90._4_4_;
                uStack_130 = (undefined4)uStack_a0;
                uStack_12c = uStack_a0._4_4_;
                if (uStack_68 - 1 < 0xe) {
                  param_1[8] = uStack_68;
                  param_1[9] = uStack_60;
                  param_1[6] = CONCAT44(uStack_74,uStack_78);
                  param_1[7] = CONCAT44(uStack_6c,uStack_70);
                  param_1[4] = (ulonglong)uStack_88;
                  param_1[5] = (ulonglong)uStack_80;
                  param_1[2] = (ulonglong)uStack_98;
                  param_1[3] = (ulonglong)uStack_90;
                  *param_1 = (ulonglong)uStack_a8;
                  param_1[1] = (ulonglong)uStack_a0;
                  pbVar5 = arg0 + 0x30;
                  do {
                    if (*(ulonglong *)(pbVar5 + -0x20) != 0) {
                      pub_1406abac0(*(byte **)(pbVar5 + -0x18),*(ulonglong *)(pbVar5 + -0x20),1);
                    }
                    if (*(ulonglong *)(pbVar5 + -8) != 0) {
                      pub_1406abac0(*(byte **)pbVar5,*(ulonglong *)(pbVar5 + -8),1);
                    }
                    pbVar5 = pbVar5 + 0x40;
                    pbVar8 = pbVar8 + -1;
                  } while (pbVar8 != (byte *)0x0);
                  if (CONCAT44(uStack_c4,uStack_c8) != 0) {
                    pub_1406abac0(arg0,CONCAT44(uStack_c4,uStack_c8) << 6,0x10);
                  }
                  if (uStack_158 != 0) {
                    pub_1406abac0(pbStack_150,uStack_158,1);
                  }
                  return;
                }
                uStack_e0 = uStack_68;
                uStack_a8 = &pbStack_d8;
                uStack_a0 = pdb_1402ed420;
                uStack_98 = &uStack_e0;
                uStack_90 = pdb_140f72a40;
                uStack_88 = &UNK_14306add8;
                uStack_80 = pdb_140f72a40;
                    /* WARNING: Subroutine does not return */
                pdb_142dc83d0(&UNK_14306ade0,&uStack_a8,&UNK_14306ae10);
              }
              uStack_138 = (ulonglong)uStack_a8;
                    /* WARNING: Subroutine does not return */
              pdb_142dc8170(&UNK_14306ad98,0x26,&uStack_138,&UNK_14306af90,&UNK_14306adc0);
            }
          }
        }
        pbVar7 = pbVar7 + 0x40;
      } while (pbVar7 != arg0 + lVar6);
    }
    pdb_142dc8110(&UNK_14306ad60,0x1b,&UNK_14306ad80);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

