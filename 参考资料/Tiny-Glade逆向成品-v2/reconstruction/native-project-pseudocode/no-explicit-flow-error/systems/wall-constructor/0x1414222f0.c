// VA 0x1414222f0, PDB extent 578 bytes
// system_wall_constructor::place_pillars::emit_pillar_at_point<system_wall_constructor::place_pillars::place_pillars::closure_env$3>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/place_pillars.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::place_pillars::emit_pillar_at_point<system_wall_constructor::place_pillars::place_pillars::closure_env$3>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/place_pillars.rs
   Extent: 578 */

void pdb_1414222f0(undefined8 *param_1,undefined4 param_2,undefined4 param_3,float param_4,
                  float param_5,float param_6,float param_7,float param_8,undefined8 *param_9,
                  longlong *param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13)

{
  float fVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  char cVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
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
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float afStack_b8 [16];
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  fVar12 = (float)_DAT_142e378e0;
  fVar13 = (float)((ulonglong)_DAT_142e378e0 >> 0x20);
  uVar2 = *param_1;
  fVar1 = *(float *)(param_1 + 1);
  param_8 = param_4 + param_7 + _DAT_142e3b1d8 + param_8;
  uStack_180 = param_2;
  uStack_17c = param_3;
  pdb_140df4520(afStack_b8,&uStack_180);
  fVar6 = (float)afStack_b8._4_8_;
  fVar8 = SUB84(afStack_b8._4_8_,4);
  fVar7 = fVar6 * _DAT_1431ff8d0 + _DAT_142e36f28 * fVar8;
  fVar9 = fVar8 * _UNK_1431ff8d4 + afStack_b8[0] * 0.0;
  fVar10 = afStack_b8[0] * _UNK_1431ff8d8 + fVar6 * 0.0;
  fVar11 = afStack_b8[0] * _UNK_1431ff8dc + fVar6 * 0.0;
  fStack_f8 = afStack_b8[0] * 0.0 + fVar12 * 0.0 + param_5 * fVar7;
  fStack_f4 = fVar6 * 0.0 + fVar13 * 0.0 + param_5 * fVar9;
  fStack_f0 = fVar8 * 0.0 + param_5 * fVar10 + 0.0;
  fStack_ec = param_5 * fVar8 + param_5 * 0.0 + param_5 * fVar11;
  fVar7 = fVar7 * 0.0;
  fVar9 = fVar9 * 0.0;
  fVar10 = fVar10 * 0.0;
  fVar11 = fVar11 * 0.0;
  fStack_e8 = param_8 * fVar12 + fVar7 + afStack_b8[0] * 0.0;
  fStack_e4 = param_8 * fVar13 + fVar9 + fVar6 * 0.0;
  fStack_e0 = param_8 * 0.0 + fVar10 + fVar8 * 0.0;
  fStack_dc = fVar11 + 0.0 + fVar8 * 0.0;
  fVar7 = fVar7 + 0.0;
  fVar9 = fVar9 + 0.0;
  fVar10 = fVar10 + 0.0;
  fVar11 = fVar11 + 0.0;
  fStack_d8 = param_6 * afStack_b8[0] + fVar7;
  fStack_d4 = param_6 * fVar6 + fVar9;
  fStack_d0 = param_6 * fVar8 + fVar10;
  fStack_cc = fVar8 * 0.0 + fVar11;
  fStack_c8 = fVar7 + afStack_b8[0] * 0.0 + ((float)uVar2 - param_7 * fVar12);
  fStack_c4 = fVar9 + fVar6 * 0.0 + ((float)((ulonglong)uVar2 >> 0x20) - param_7 * fVar13);
  fStack_c0 = fVar10 + fVar8 * 0.0 + (fVar1 - param_7 * 0.0);
  fStack_bc = fVar11 + fVar8 * 0.0 + (fVar1 - param_7 * 0.0);
  pdb_140e07fe0(&uStack_128,&fStack_f8);
  uVar5 = pdb_1409012c0(param_13);
  pdb_140a77410(afStack_b8);
  uStack_178 = uStack_128;
  uStack_174 = uStack_124;
  uStack_170 = uStack_120;
  uStack_16c = uStack_11c;
  uStack_168 = uStack_118;
  uStack_164 = uStack_114;
  uStack_160 = uStack_110;
  uStack_15c = uStack_10c;
  uStack_158 = uStack_108;
  uStack_154 = uStack_104;
  uStack_150 = uStack_100;
  uStack_14c = uStack_fc;
  uStack_148 = param_11;
  uStack_144 = param_12;
  uStack_13c = 0;
  uStack_138 = uStack_78;
  uStack_134 = uStack_74;
  uStack_130 = uStack_70;
  uStack_12c = uStack_6c;
  puVar3 = (undefined1 *)param_9[1];
  uStack_140 = uVar5;
  cVar4 = pdb_1413f6d90(*param_9,&uStack_178);
  if (cVar4 != '\0') {
    *puVar3 = 1;
  }
  *param_10 = *param_10 + 1;
  return;
}

