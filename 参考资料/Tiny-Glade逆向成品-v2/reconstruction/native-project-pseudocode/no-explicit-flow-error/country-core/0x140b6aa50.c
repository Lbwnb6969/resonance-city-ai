// VA 0x140b6aa50, PDB extent 858 bytes
// country_core::systems::terrain::animate_terrain_delete::animate_terrain_delete
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/terrain/animate_terrain_delete.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::terrain::animate_terrain_delete::animate_terrain_delete
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/terrain/animate_terrain_delete.rs
   Extent: 858 */

void pdb_140b6aa50(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,longlong *param_8,
                  longlong *param_9)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  char *pcVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  longlong lStack_98;
  longlong lStack_90;
  undefined8 uStack_88;
  longlong lStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  char *pcStack_58;
  undefined8 uStack_50;
  
  uStack_50 = 0xfffffffffffffffe;
  if (SBORROW8(0,*(longlong *)(*param_2 + 0x30))) {
    *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
    pcStack_58 = (char *)*param_3;
    if (*pcStack_58 != '\x12') {
      plVar2 = *(longlong **)(pcStack_58 + 0x18);
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        pdb_140c7a720(pcStack_58 + 0x18);
      }
    }
    *pcStack_58 = '\x12';
    return;
  }
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x1c);
  puVar3 = (undefined4 *)param_3[2];
  *puVar3 = uVar1;
  pcVar4 = (char *)*param_3;
  if (*pcVar4 == '\x12') {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14305acf0);
  }
  lVar5 = *(longlong *)(pcVar4 + 0x18);
  fVar11 = _DAT_142e37988;
  if (SBORROW8(0,*(longlong *)(lVar5 + 0x10))) {
    lStack_80 = lVar5 + 0x18;
    lStack_98 = *(longlong *)(lVar5 + 0x20);
    lStack_90 = lStack_98 + *(longlong *)(lVar5 + 0x28) * 0xc;
    uStack_88 = 0;
    fVar11 = (float)pdb_1419b5c40(&lStack_98,_DAT_142e377f0);
    if (0x7f7fffff < (uint)ABS(fVar11)) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_143021520,0x2b,&UNK_143021550);
    }
    fVar12 = _DAT_142e3798c;
    if (_DAT_142e3798c <= fVar11 * _DAT_142e37848) {
      fVar12 = fVar11 * _DAT_142e37848;
    }
    fVar11 = _DAT_142e3788c;
    if ((fVar12 <= _DAT_142e3788c) &&
       (fVar11 = fVar12, fVar13 = _DAT_142e36f28, fVar12 < _DAT_142e37870)) goto LAB_140b6abc0;
  }
  fVar12 = 0.0;
  if (0.0 <= *(float *)(pcVar4 + 0x24) / fVar11) {
    fVar12 = *(float *)(pcVar4 + 0x24) / fVar11;
  }
  fVar11 = _DAT_142e36f28;
  if (fVar12 <= _DAT_142e36f28) {
    fVar11 = fVar12;
  }
  fVar11 = _DAT_142e36f28 - fVar11;
  fVar13 = _DAT_142e36f28 - fVar11 * fVar11 * fVar11;
LAB_140b6abc0:
  plVar2 = (longlong *)(pcVar4 + 0x18);
  lVar5 = *plVar2;
  *(undefined4 *)param_4[2] = *(undefined4 *)((longlong)param_4 + 0x1c);
  pdb_140927440(lVar5 + 0x10,*param_4,param_5,param_6,param_7,fVar13);
  *(float *)(pcVar4 + 0x24) = *(float *)(*param_1 + 0x28) + *(float *)(pcVar4 + 0x24);
  if (_DAT_142e36f28 <= fVar13) {
    uStack_68 = *(undefined8 *)(pcVar4 + 0x10);
    uStack_78 = *(undefined4 *)pcVar4;
    uStack_74 = *(undefined4 *)(pcVar4 + 4);
    uStack_70 = *(undefined4 *)(pcVar4 + 8);
    uStack_6c = *(undefined4 *)(pcVar4 + 0xc);
    *puVar3 = uVar1;
    pcStack_58 = pcVar4;
    if (*pcVar4 != '\x12') {
      plVar6 = (longlong *)*plVar2;
      LOCK();
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        pdb_140c7a720(plVar2);
      }
    }
    *pcStack_58 = '\x12';
    *(undefined4 *)param_8[2] = *(undefined4 *)((longlong)param_8 + 0x1c);
    lVar5 = *param_8;
    lVar7 = *(longlong *)(lVar5 + 0x30);
    uVar8 = *(undefined8 *)(lVar5 + 0x40);
    if (lVar7 == *(longlong *)(lVar5 + 0x20)) {
      pdb_142d7e8a0(lVar5 + 0x20);
    }
    *(undefined8 *)(*(longlong *)(lVar5 + 0x28) + lVar7 * 8) = uVar8;
    *(longlong *)(lVar5 + 0x30) = lVar7 + 1;
    *(longlong *)(lVar5 + 0x40) = *(longlong *)(lVar5 + 0x40) + 1;
    *(undefined4 *)param_9[2] = *(undefined4 *)((longlong)param_9 + 0x1c);
    lVar5 = *param_9;
    lVar7 = *(longlong *)(lVar5 + 0x30);
    uVar8 = *(undefined8 *)(lVar5 + 0x40);
    if (lVar7 == *(longlong *)(lVar5 + 0x20)) {
      pdb_142d7e6e0(lVar5 + 0x20);
    }
    lVar9 = *(longlong *)(lVar5 + 0x28);
    lVar10 = lVar7 * 0x20;
    *(undefined8 *)(lVar9 + 0x10 + lVar10) = uStack_68;
    *(undefined8 *)(lVar9 + lVar10) = CONCAT44(uStack_74,uStack_78);
    ((undefined8 *)(lVar9 + lVar10))[1] = CONCAT44(uStack_6c,uStack_70);
    *(undefined8 *)(lVar9 + 0x18 + lVar10) = uVar8;
    *(longlong *)(lVar5 + 0x30) = lVar7 + 1;
    *(longlong *)(lVar5 + 0x40) = *(longlong *)(lVar5 + 0x40) + 1;
  }
  return;
}

