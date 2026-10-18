// VA 0x1408dcd70, PDB extent 1183 bytes
// system_decorator::cull_oob_decorators::check_if_dormer_ridge_is_within_roof_bounds
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/cull_oob_decorators.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::cull_oob_decorators::check_if_dormer_ridge_is_within_roof_bounds
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/cull_oob_decorators.rs
   Extent: 1183 */

void pdb_1408dcd70(undefined1 *param_1,undefined8 *param_2,float param_3,float param_4,char param_5,
                  undefined8 param_6,undefined8 param_7,longlong param_8,longlong param_9,
                  longlong param_10)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int *piVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float afStack_114 [2];
  float fStack_10c;
  undefined4 uStack_108;
  float fStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  float fStack_e8;
  float fStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c0;
  
  uStack_c0 = 0xfffffffffffffffe;
  fStack_e8 = param_3;
  fStack_e4 = param_4;
  uVar2 = pdb_140b54b40(param_6,param_7);
  if (((((uVar2 & 0xffffffff) == 0) ||
       (uVar3 = uVar2 & 0xffffffff ^ 0xffffffff, *(ulonglong *)(param_9 + 0x10) <= uVar3)) ||
      (piVar4 = (int *)(uVar3 * 0x18 + *(longlong *)(param_9 + 8)),
      piVar4[4] != (int)(uVar2 >> 0x20))) ||
     (((*piVar4 == 0 ||
       (uVar2 = *(ulonglong *)(piVar4 + 2), *(ulonglong *)(param_8 + 0x38) <= (uVar2 & 0xffffffff)))
      || ((*(ulonglong *)(*(longlong *)(param_8 + 0x28) + (uVar2 >> 6 & 0x3ffffff) * 8) >>
           (uVar2 & 0x3f) & 1) == 0)))) {
    *param_1 = 9;
    return;
  }
  uVar1 = piVar4[1];
  lVar5 = *(longlong *)
           (*(longlong *)(*(longlong *)(param_9 + 0x1a0) + 0x18 + (uVar2 >> 0x20) * 0x48) + 0x10 +
           ~*(ulonglong *)
             (*(longlong *)(*(longlong *)(param_9 + 0x1a0) + 0x38 + (uVar2 >> 0x20) * 0x48) +
             *(longlong *)(param_8 + 0x110) * 8) * 0x30);
  if (*(int *)(lVar5 + 8 + (ulonglong)~uVar1 * 0x58) != 0) {
    if (param_5 == '\a') {
      pdb_1414dca40(&iStack_e0,*(undefined1 *)(param_10 + 0x59));
      if (CONCAT44(uStack_cc,uStack_d0) == 0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(0,0,&UNK_143019f08);
      }
    }
    else {
      pdb_140887990(&iStack_e0);
      if (CONCAT44(uStack_cc,uStack_d0) == 0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(0,0,&UNK_143019f20);
      }
    }
    fVar10 = *(float *)((byte *)CONCAT44(uStack_d4,uStack_d8) + 4);
    if (CONCAT44(uStack_dc,iStack_e0) != 0) {
      pub_1406abac0((byte *)CONCAT44(uStack_d4,uStack_d8),CONCAT44(uStack_dc,iStack_e0) << 3,4);
    }
    lVar5 = lVar5 + (ulonglong)~uVar1 * 0x58;
    fVar8 = fVar10 * _DAT_142e378e0;
    fVar9 = (float)*param_2 + fVar8;
    fVar10 = (float)((ulonglong)*param_2 >> 0x20) + fVar10 * _UNK_142e378e4;
    fVar8 = fVar8 + *(float *)(param_2 + 1);
    pdb_140b77620(&iStack_e0,lVar5,fVar10);
    if (iStack_e0 != 2) {
      fVar7 = fVar9;
      if (iStack_e0 == 1) {
        uStack_108 = uStack_dc;
        fStack_104 = (float)uStack_d8;
        uStack_100 = uStack_d4;
        uStack_fc = uStack_d0;
        uStack_108 = pdb_140df2a20(&uStack_108,fVar9,fVar8);
      }
      else {
        uStack_108 = uStack_dc;
        fStack_104 = (float)uStack_d8;
        uStack_100 = uStack_d4;
        uStack_fc = uStack_d0;
        uStack_108 = pdb_140defa20(&uStack_108,fVar9,fVar8);
      }
      fStack_104 = fVar7;
      pdb_140df4540(afStack_114,&uStack_108,fVar10);
      fVar7 = *(float *)(lVar5 + 0x4c);
      fVar6 = (float)pdb_140b77a00(lVar5);
      if (fVar10 <= fVar6 + fVar7 + _DAT_142e42360) {
        fStack_10c = fVar8 - fStack_10c;
        afStack_114[0] = fVar9 - afStack_114[0];
        fVar7 = _DAT_142e36f28 / SQRT(fStack_10c * fStack_10c + afStack_114[0] * afStack_114[0]);
        if (_DAT_143019c3c <= param_4 * fStack_10c * fVar7 + param_3 * fVar7 * afStack_114[0])
        goto LAB_1408dd090;
      }
    }
    pdb_140df4520(param_1 + 0x10,&fStack_e8);
    *param_1 = 1;
    *(ulonglong *)(param_1 + 4) = CONCAT44(fVar10,fVar9);
    *(float *)(param_1 + 0xc) = fVar8;
    *(undefined8 *)(param_1 + 0x20) = param_7;
    return;
  }
LAB_1408dd090:
  *param_1 = 0xb;
  return;
}

