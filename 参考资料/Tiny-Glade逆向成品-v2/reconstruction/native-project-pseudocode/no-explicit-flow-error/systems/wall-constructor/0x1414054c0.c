// VA 0x1414054c0, PDB extent 1023 bytes
// system_wall_constructor::construct_playermade_stairs::brackets::construct_playermade_stair_brackets::closure$8
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_playermade_stairs/brackets.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_playermade_stairs::brackets::construct_playermade_stair_brackets::closure$8
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_playermade_stairs/brackets.rs
   Extent: 1023 */

void pdb_1414054c0(undefined8 *param_1,float *param_2,float *param_3,float param_4,float param_5)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined8 uStack_124;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  
  puVar6 = (undefined4 *)param_1[1];
  fVar2 = *(float *)*param_1;
  fVar12 = param_5 + _DAT_142e36f28;
  uVar4 = *(undefined8 *)(param_3 + 1);
  fVar17 = (float)*(undefined8 *)param_3 - (float)*(undefined8 *)param_2;
  fVar18 = (float)((ulonglong)*(undefined8 *)param_3 >> 0x20) -
           (float)((ulonglong)*(undefined8 *)param_2 >> 0x20);
  fVar19 = param_3[2] - param_2[2];
  uVar5 = *(undefined8 *)(param_2 + 1);
  fVar28 = SQRT(fVar19 * fVar19 + fVar18 * fVar18 + fVar17 * fVar17);
  fVar13 = _DAT_142e36f28 / fVar28;
  fVar18 = fVar13 * fVar18;
  fVar19 = fVar13 * fVar19;
  fVar21 = fVar18 * 0.0;
  fVar24 = fVar19 * 0.0;
  fVar26 = fVar13 * fVar17;
  fVar20 = fVar13 * fVar17 * 0.0;
  fVar3 = *param_2;
  fVar34 = fVar21 - fVar19;
  fVar35 = fVar24 - fVar20;
  fVar36 = fVar26 - fVar21;
  fVar22 = _DAT_142e36f28 / SQRT(fVar36 * fVar36 + fVar35 * fVar35 + fVar34 * fVar34);
  fVar34 = fVar22 * fVar34;
  fVar35 = fVar22 * fVar35;
  fVar36 = fVar22 * fVar36;
  fVar37 = fVar36 * fVar26 - fVar19 * fVar34;
  fVar38 = fVar18 * fVar34 - fVar35 * fVar26;
  fVar14 = _DAT_143307090 * (fVar19 * fVar35 - fVar36 * fVar18);
  fVar26 = _UNK_143307094 * fVar37;
  fVar15 = _UNK_143307098 * fVar38;
  fVar16 = _UNK_14330709c * (fVar35 * fVar19 - fVar18 * fVar36);
  fVar29 = fVar28 * fVar18 + fVar26 + fVar35 * 0.0;
  fVar38 = fVar38 * _UNK_1433070a4;
  fVar39 = fVar14 * _UNK_1433070a8;
  fVar31 = fVar36 * 0.0 * _UNK_1433070b4;
  fVar32 = fVar34 * _UNK_1433070b8;
  fVar30 = fVar35 * 0.0 * _DAT_1433070b0 + fVar21 + fVar37 * _DAT_1433070a0;
  fVar33 = fVar35 * _UNK_1433070bc + fVar21 + fVar26 * _UNK_1433070ac;
  fVar26 = *param_3;
  fVar23 = fVar36 * _DAT_1433070c0;
  fVar25 = _DAT_142e36f28 * _UNK_1433070c4;
  fVar27 = _DAT_142e36f28 * _UNK_1433070cc;
  fVar37 = ((float)uVar5 + (float)uVar4) * _DAT_142e36f28 * _UNK_1433070c8;
  fVar35 = fVar37 - ((float)((uint)fVar33 & _DAT_142e377e0) +
                    (float)((uint)fVar30 & _DAT_142e377e0) + (float)((uint)fVar29 & _DAT_142e377e0))
                    * _DAT_142e36f50;
  fVar21 = fVar35;
  if (fVar2 <= fVar35) {
    fVar21 = fVar2;
  }
  *(float *)*param_1 = (float)(~-(uint)NAN(fVar2) & (uint)fVar21 | -(uint)NAN(fVar2) & (uint)fVar35)
  ;
  uVar10 = pdb_14094c330(*puVar6);
  fVar2 = *(float *)param_1[2];
  pdb_140951920(&uStack_118);
  uStack_148 = uStack_e8;
  uStack_140 = uStack_e0;
  uStack_138 = uStack_d8;
  uStack_130 = uStack_d0;
  uStack_12c = 0;
  uStack_124 = CONCAT44(fVar2 * (float)(~-(uint)(param_5 < param_4) & (uint)param_5 |
                                       (uint)fVar12 & -(uint)(param_5 < param_4)),fVar2 * param_4);
  uStack_11c = 0x40;
  plVar7 = (longlong *)param_1[3];
  fStack_178 = fVar28 * fVar13 * fVar17 + fVar14 + fVar34 * 0.0;
  fStack_174 = fVar29;
  fStack_170 = fVar28 * fVar19 + fVar15 + fVar36 * 0.0;
  fStack_16c = fVar20 + fVar16 + fVar22 * (fVar18 * 0.0 - fVar19) * 0.0;
  fStack_168 = fVar30;
  fStack_164 = fVar31 + fVar24 + fVar38;
  fStack_160 = fVar32 + fVar20 + fVar39;
  fStack_15c = fVar33;
  fStack_158 = fVar15 + fVar24 + fVar23;
  fStack_154 = (fVar26 + fVar3) * fVar25;
  fStack_150 = fVar37;
  fStack_14c = ((float)((ulonglong)uVar5 >> 0x20) + (float)((ulonglong)uVar4 >> 0x20)) * fVar27;
  uStack_128 = uVar10;
  pdb_14094c790(&uStack_118,&fStack_178);
  lVar8 = plVar7[2];
  if (lVar8 == *plVar7) {
    pdb_142d8db70(plVar7);
  }
  lVar9 = plVar7[1];
  lVar11 = lVar8 * 0x40;
  puVar1 = (undefined8 *)(lVar9 + 0x30 + lVar11);
  *puVar1 = uStack_e8;
  puVar1[1] = uStack_e0;
  puVar1 = (undefined8 *)(lVar9 + 0x20 + lVar11);
  *puVar1 = uStack_f8;
  puVar1[1] = uStack_f0;
  puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar11);
  *puVar1 = uStack_108;
  puVar1[1] = uStack_100;
  *(undefined8 *)(lVar9 + lVar11) = uStack_118;
  ((undefined8 *)(lVar9 + lVar11))[1] = uStack_110;
  plVar7[2] = lVar8 + 1;
  return;
}

