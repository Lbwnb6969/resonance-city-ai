// VA 0x140801020, PDB extent 878 bytes
// system_wall_constructor::segmentation::calculate_wall_path_segmentation::add_splits_in_empty_range
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/segmentation/calculate_wall_path_segmentation.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::segmentation::calculate_wall_path_segmentation::add_splits_in_empty_range
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/segmentation/calculate_wall_path_segmentation.rs
   Extent: 878 */

void pdb_140801020(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong param_4,
                  ulonglong param_5,longlong param_6,ulonglong param_7,float param_8)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  float extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  float afStack_128 [6];
  float *pfStack_110;
  code *pcStack_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e0;
  float *pfStack_d8;
  byte *pbStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  longlong lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  
  uStack_a0 = 0xfffffffffffffffe;
  pfStack_d8 = (float *)*param_3;
  pbStack_d0 = (byte *)param_3[1];
  uStack_c8 = *(undefined4 *)(param_3 + 2);
  uStack_c4 = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_c0 = *(undefined4 *)(param_3 + 3);
  uStack_bc = *(undefined4 *)((longlong)param_3 + 0x1c);
  uStack_b8 = (byte *)param_2;
  lStack_b0 = param_1;
  pdb_1413eb890(afStack_128,&pfStack_d8);
  pdb_140080c90(&pfStack_110,afStack_128,1);
  if (!SBORROW8(0,(longlong)pfStack_110)) {
    uStack_a8 = uStack_e0;
    uVar5 = uStack_a8;
    uStack_b8 = (byte *)CONCAT44(uStack_ec,uStack_f0);
    uStack_c8 = uStack_100;
    uStack_c4 = uStack_fc;
    uStack_c0 = uStack_f8;
    uStack_bc = uStack_f4;
    pfStack_d8 = pfStack_110;
    pbStack_d0 = (byte *)pcStack_108;
    uStack_a8._0_4_ = (float)uStack_e0;
    fVar2 = (float)uStack_a8;
    fVar9 = (float)uStack_a8 / param_8;
    uStack_a8 = uVar5;
    fVar10 = (float)pub_142e32a40(fVar9);
    fVar1 = _DAT_142e36f50;
    fVar9 = _DAT_142e36f28;
    uVar6 = 0;
    if (0.0 <= fVar10) {
      uVar6 = (longlong)(fVar10 - _DAT_142e36f2c) & (longlong)fVar10 >> 0x3f | (longlong)fVar10;
    }
    uVar8 = 0xffffffffffffffff;
    if (fVar10 <= _DAT_142e36f30) {
      uVar8 = uVar6;
    }
    if ((uVar8 == 1) && (uVar8 = 1, fVar2 < param_8 * _DAT_142e37838)) {
      uVar8 = 0;
    }
    uVar6 = 0;
    if (uVar8 != 0) {
      do {
        uVar6 = uVar6 + 1;
        afStack_128[0] = (float)uVar6 / (float)(uVar8 + 1);
        if ((afStack_128[0] < 0.0) || (fVar9 < afStack_128[0])) {
          pfStack_110 = afStack_128;
          pcStack_108 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_143307ab0,&pfStack_110,&UNK_143007070);
        }
        uVar3 = pdb_1413f9030(&pfStack_d8);
        uVar5 = pdb_1413f84b0(param_3 + 2);
        uVar4 = pdb_1413fb5c0((ulonglong)uVar3 + param_1,extraout_XMM0_Da,uVar5);
        uVar7 = (ulonglong)uVar3 + param_1 + (ulonglong)(fVar1 < extraout_XMM0_Da);
        if (param_5 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar7,param_5,&UNK_143007088);
        }
        *(byte *)(param_4 + uVar7) = *(byte *)(param_4 + uVar7) | 8;
        if (param_7 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar7,param_7,&UNK_1430070a0);
        }
        *(undefined4 *)(param_6 + uVar7 * 8) = uVar4;
        *(undefined4 *)(param_6 + 4 + uVar7 * 8) = extraout_XMM0_Da_00;
      } while (uVar6 < uVar8);
    }
    if (pfStack_d8 != (float *)0x0) {
      pub_1406abac0(pbStack_d0,(longlong)pfStack_d8 << 3,4);
    }
    if (CONCAT44(uStack_bc,uStack_c0) != 0) {
      pub_1406abac0(uStack_b8,CONCAT44(uStack_bc,uStack_c0) << 2,4);
    }
  }
  return;
}

