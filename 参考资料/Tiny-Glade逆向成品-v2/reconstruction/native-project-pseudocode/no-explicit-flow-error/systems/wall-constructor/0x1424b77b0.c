// VA 0x1424b77b0, PDB extent 1043 bytes
// system_wall_constructor::construct_platform_stairs::wooden_corners::build_corners<system_wall_constructor::construct_platform_stairs::wooden::build_rectangle::closure_env$5>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_platform_stairs/wooden_corners.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_platform_stairs::wooden_corners::build_corners<system_wall_constructor::construct_platform_stairs::wooden::build_rectangle::closure_env$5>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_platform_stairs/wooden_corners.rs
   Extent: 1043 */

void pdb_1424b77b0(undefined8 param_1,undefined4 param_2,undefined8 param_3,longlong *param_4,
                  undefined4 *param_5,undefined8 param_6,longlong param_7)

{
  longlong lVar1;
  uint uVar2;
  float fVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  ulonglong uVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 in_stack_fffffffffffffe88;
  undefined4 uVar21;
  undefined8 uStack_158;
  undefined8 uStack_150;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  undefined4 uStack_13c;
  uint uStack_138;
  float fStack_134;
  uint uStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulonglong uVar11;
  
  fVar3 = _DAT_143009d64;
  uVar2 = _DAT_142e377e0;
  uVar12 = 0;
  plVar15 = param_4;
  uStack_13c = param_2;
  uStack_e8 = param_3;
  uStack_e0 = param_1;
  do {
    uVar4 = uStack_e8;
    uVar21 = (undefined4)((ulonglong)in_stack_fffffffffffffe88 >> 0x20);
    uVar10 = (int)uVar12 - 1U & 3;
    uVar11 = (ulonglong)uVar10;
    uVar5 = (ulonglong)(uVar10 * 0x50);
    if ((!SBORROW8(0,*(longlong *)((longlong)param_4 + uVar5 + 0x28))) && (!SBORROW8(0,*plVar15))) {
      lVar7 = *(longlong *)((longlong)param_4 + uVar5 + 0x38);
      if (lVar7 == 0) {
LAB_1424b7baa:
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_14350fc68);
      }
      lVar1 = *(longlong *)((longlong)param_4 + uVar5 + 0x30);
      lVar7 = lVar7 * 0x10;
      if (lVar1 + lVar7 == 0x10) goto LAB_1424b7baa;
      if (plVar15[2] == 0) {
LAB_1424b7bb6:
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_14350fc80);
      }
      lVar13 = plVar15[2] * 0x10;
      if (plVar15[1] + lVar13 == 0x10) goto LAB_1424b7bb6;
      fVar16 = *(float *)(lVar1 + lVar7 + -4) - *(float *)(plVar15[1] + lVar13 + -4);
      fVar19 = (float)((uint)fVar16 & uVar2);
      uVar8 = uVar11;
      if (fVar19 <= fVar3) {
        if (uVar12 < uVar11) {
          uVar8 = uVar12;
        }
      }
      else if (fVar16 <= 0.0) {
        uVar8 = uVar12;
      }
      plVar14 = plVar15;
      if (uVar8 == uVar11) {
        plVar14 = (longlong *)((longlong)param_4 + uVar5 + 0x28);
      }
      uVar10 = pdb_140df3e10(uStack_e8,uVar12);
      fVar16 = fVar19;
      fVar17 = (float)pdb_140df1760(uVar4,uVar11);
      fVar20 = fVar16;
      fVar18 = (float)pdb_140df1760(uVar4,uVar12);
      uStack_150 = CONCAT44(fVar17,fVar19);
      uStack_158 = (ulonglong)uVar10 << 0x20;
      uStack_118 = *param_5;
      uStack_114 = param_5[1];
      uStack_110 = param_5[2];
      uStack_10c = param_5[3];
      uStack_108 = param_5[4];
      uStack_104 = param_5[5];
      uStack_100 = param_5[6];
      uStack_fc = param_5[7];
      uStack_f8 = param_5[8];
      uStack_f4 = param_5[9];
      uStack_f0 = param_5[10];
      plVar9 = plVar14;
      fStack_148 = fVar16;
      fStack_144 = fVar18;
      fStack_140 = fVar20;
      plVar6 = (longlong *)
               pdb_1424b5270(&uStack_158,plVar14,uStack_e0,uStack_13c,
                             CONCAT44(uVar21,(int)plVar14[4]),&uStack_118,1,param_7);
      if ((plVar9 < plVar6) || (*(longlong **)(param_7 + 0x10) < plVar9)) {
        pdb_142dc8420(plVar6,plVar9,*(longlong **)(param_7 + 0x10),&UNK_14350fce8);
        return;
      }
      pdb_1424b6940((longlong)plVar6 * 0x50 + *(longlong *)(param_7 + 8),
                    (longlong)plVar9 - (longlong)plVar6,&stack0x00000040);
      uStack_158 = CONCAT44(fVar19,uVar10);
      uStack_150 = CONCAT44(fVar19,uVar10);
      uStack_118 = *param_5;
      uStack_114 = param_5[1];
      uStack_110 = param_5[2];
      uStack_10c = param_5[3];
      uStack_108 = param_5[4];
      uStack_104 = param_5[5];
      uStack_100 = param_5[6];
      uStack_fc = param_5[7];
      uStack_f8 = param_5[8];
      uStack_f4 = param_5[9];
      uStack_f0 = param_5[10];
      uStack_138 = uVar10;
      fStack_134 = fVar19;
      uStack_130 = uVar10;
      fStack_12c = fVar19;
      fStack_128 = fVar17;
      fStack_124 = fVar16;
      fStack_120 = fVar17 + fVar18;
      fStack_11c = fVar16 + fVar20;
      pdb_1424b7100(&uStack_158,&fStack_128,plVar14,&uStack_118,param_6);
      uStack_158 = CONCAT44(fVar16 + fVar20,fVar17 + fVar18);
      uStack_150 = CONCAT44(fVar20,fVar18);
      uStack_118 = *param_5;
      uStack_114 = param_5[1];
      uStack_110 = param_5[2];
      uStack_10c = param_5[3];
      uStack_108 = param_5[4];
      uStack_104 = param_5[5];
      uStack_100 = param_5[6];
      uStack_fc = param_5[7];
      uStack_f8 = param_5[8];
      uStack_f4 = param_5[9];
      uStack_f0 = param_5[10];
      in_stack_fffffffffffffe88 = param_6;
      pdb_1424b7100(&uStack_138,&uStack_158,plVar14,&uStack_118,param_6);
    }
    uVar12 = uVar12 + 1;
    plVar15 = plVar15 + 10;
    if (uVar12 == 4) {
      return;
    }
  } while( true );
}

