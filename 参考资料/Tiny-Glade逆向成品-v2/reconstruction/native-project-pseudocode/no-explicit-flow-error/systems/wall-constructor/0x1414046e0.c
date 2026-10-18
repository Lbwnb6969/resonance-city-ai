// VA 0x1414046e0, PDB extent 852 bytes
// system_wall_constructor::construct_arches::construct_arches::closure$3
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_arches/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_arches::construct_arches::closure$3
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_arches/mod.rs
   Extent: 852 */

void pdb_1414046e0(undefined8 *param_1,float *param_2,float *param_3,float param_4,float param_5)

{
  float fVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  float fVar7;
  char cVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
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
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  int iStack_13c;
  undefined4 uStack_138;
  undefined8 uStack_134;
  undefined4 uStack_12c;
  undefined1 auStack_128 [48];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_cc;
  
  fVar7 = _DAT_142e36f28;
  fVar10 = param_5 + _DAT_142e36f28;
  plVar3 = (longlong *)param_1[1];
  lVar6 = *plVar3;
  iVar2 = *(int *)*param_1;
  lVar4 = param_1[2];
  uVar9 = pdb_1409012c0(*(undefined4 *)(lVar4 + 0x274));
  fVar1 = *(float *)(lVar4 + 0x290);
  pdb_140951920(auStack_128);
  fVar14 = (float)*(undefined8 *)param_3 - (float)*(undefined8 *)param_2;
  fVar15 = (float)((ulonglong)*(undefined8 *)param_3 >> 0x20) -
           (float)((ulonglong)*(undefined8 *)param_2 >> 0x20);
  fVar16 = param_3[2] - param_2[2];
  fVar22 = SQRT(fVar16 * fVar16 + fVar15 * fVar15 + fVar14 * fVar14);
  fVar11 = fVar7 / fVar22;
  fVar15 = fVar11 * fVar15;
  fVar16 = fVar11 * fVar16;
  fVar18 = fVar15 * 0.0;
  fVar20 = fVar16 * 0.0;
  fVar21 = fVar11 * fVar14;
  fVar17 = fVar11 * fVar14 * 0.0;
  fVar23 = fVar18 - fVar16;
  fVar24 = fVar20 - fVar17;
  fVar26 = fVar21 - fVar18;
  fVar19 = fVar7 / SQRT(fVar26 * fVar26 + fVar24 * fVar24 + fVar23 * fVar23);
  fVar23 = fVar19 * fVar23;
  fVar24 = fVar19 * fVar24;
  fVar26 = fVar19 * fVar26;
  fVar25 = fVar26 * fVar21 - fVar16 * fVar23;
  fVar27 = fVar15 * fVar23 - fVar24 * fVar21;
  fVar21 = _DAT_142f4e330 * (fVar16 * fVar24 - fVar26 * fVar15);
  fVar12 = _UNK_142f4e334 * fVar25;
  fVar13 = _UNK_142f4e338 * fVar27;
  fStack_188 = fVar22 * fVar11 * fVar14 + fVar21 + fVar23 * 0.0;
  fStack_184 = fVar22 * fVar15 + fVar12 + fVar24 * 0.0;
  fStack_180 = fVar22 * fVar16 + fVar13 + fVar26 * 0.0;
  fStack_17c = fVar17 + _UNK_142f4e33c * (fVar24 * fVar16 - fVar15 * fVar26) +
               fVar19 * (fVar15 * 0.0 - fVar16) * 0.0;
  fStack_178 = fVar24 * 0.0 * _DAT_143307050 + fVar18 + fVar25 * _DAT_143307040;
  fStack_174 = fVar26 * 0.0 * _UNK_143307054 + fVar20 + fVar27 * _UNK_143307044;
  fStack_170 = fVar23 * _UNK_143307058 + fVar17 + fVar21 * _UNK_143307048;
  fStack_16c = fVar24 * _UNK_14330705c + fVar18 + fVar12 * _UNK_14330704c;
  fStack_168 = fVar13 + fVar20 + fVar26 * _DAT_143307060;
  fStack_164 = (*param_3 + *param_2) * fVar7 * _UNK_143307064;
  fStack_160 = ((float)*(undefined8 *)(param_2 + 1) + (float)*(undefined8 *)(param_3 + 1)) *
               fVar7 * _UNK_143307068;
  fStack_15c = ((float)((ulonglong)*(undefined8 *)(param_2 + 1) >> 0x20) +
               (float)((ulonglong)*(undefined8 *)(param_3 + 1) >> 0x20)) * fVar7 * _UNK_14330706c;
  uStack_158 = uStack_f8;
  uStack_150 = uStack_f0;
  uStack_148 = uStack_e8;
  uStack_140 = uStack_e0;
  uStack_134 = CONCAT44(fVar1 * (float)(~-(uint)(param_5 < param_4) & (uint)param_5 |
                                       (uint)fVar10 & -(uint)(param_5 < param_4)),fVar1 * param_4);
  uStack_12c = uStack_cc;
  uVar5 = param_1[3];
  iStack_13c = (int)lVar6 + iVar2;
  uStack_138 = uVar9;
  pdb_14094c790(auStack_128,&fStack_188);
  cVar8 = pdb_1413f66a0(uVar5,auStack_128);
  if (cVar8 != '\0') {
    *(undefined1 *)param_1[4] = 1;
  }
  *plVar3 = *plVar3 + 1;
  return;
}

