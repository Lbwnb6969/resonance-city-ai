// VA 0x140887f70, PDB extent 1594 bytes
// system_decorator::decorator_visual::cottage_dormers::cottage_dormer::is_out_of_roof_bounds
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/cottage_dormers/cottage_dormer.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::cottage_dormers::cottage_dormer::is_out_of_roof_bounds
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/cottage_dormers/cottage_dormer.rs
   Extent: 1594 */

ulonglong pdb_140887f70(longlong param_1,float param_2,float param_3,longlong param_4,
                       longlong param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  
  fVar9 = (float)pdb_140b77a00(param_5);
  if (2 < param_4 - 1U) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14301200e,0x28,&UNK_143012098);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  iVar3 = *(int *)(param_5 + 8);
  fVar13 = _DAT_142e3b1d8;
  if (iVar3 == 0) {
    fVar13 = _DAT_142e36f50;
  }
  fVar12 = fVar9 * *(float *)(&UNK_143011f34 + param_4 * 4) +
           param_3 * _DAT_142e36f50 + _DAT_142e3b1d8 + *(float *)(param_1 + 0x14);
  fVar9 = *(float *)(param_5 + 0x4c);
  fVar10 = (float)pdb_140b77a00(param_5);
  fVar13 = (fVar10 + fVar9) - fVar13;
  uVar7 = CONCAT71((int7)((ulonglong)param_1 >> 8),fVar12 <= fVar13);
  uStack_c4 = uVar1;
  uStack_c0 = uVar2;
  pdb_140df4540(&uStack_d0,&uStack_c4);
  if (iVar3 != 1) goto LAB_1408882e9;
  uStack_d8 = uStack_c8;
  uStack_e0 = uStack_d0;
  if (fVar12 <= fVar13) {
    fVar11 = param_2 * _DAT_142e36f50 + _DAT_142e3b1d8;
    uStack_108 = uVar4;
    uStack_100 = uVar2;
    pdb_140b77d90(&uStack_c4,param_5,&uStack_108);
    puVar5 = (undefined4 *)pdb_140a84d90(&uStack_c4);
    uStack_f8 = *puVar5;
    uStack_f4 = puVar5[1];
    uStack_f0 = puVar5[2];
    uStack_ec = puVar5[3];
    uStack_e8 = *(undefined8 *)(puVar5 + 4);
    fVar13 = (float)pdb_140df2570(&uStack_f8,uVar1,uVar2);
    fVar10 = (float)pdb_140df3ee0(&uStack_f8);
    fVar9 = _DAT_142e36f28;
    fVar10 = fVar11 / fVar10;
    fVar12 = (float)pub_142e32a70(fVar13 - fVar10);
    fVar12 = (float)(~-(uint)(fVar12 < 0.0) & (uint)fVar12 |
                    (uint)(fVar12 + fVar9) & -(uint)(fVar12 < 0.0));
    fVar13 = (float)pub_142e32a70(fVar10 + fVar13);
    fVar10 = (float)(~-(uint)(fVar13 < 0.0) & (uint)fVar13 |
                    (uint)(fVar13 + fVar9) & -(uint)(fVar13 < 0.0));
    fVar13 = (float)pdb_140df0700(&uStack_f8,0);
    if (fVar12 <= fVar10) {
      if ((((fVar13 < fVar12) || (fVar10 < fVar13)) &&
          ((fVar13 = (float)pdb_140df0700(&uStack_f8,1), fVar13 < fVar12 || (fVar10 < fVar13)))) &&
         ((fVar13 = (float)pdb_140df0700(&uStack_f8,2), fVar13 < fVar12 || (fVar10 < fVar13)))) {
        fVar13 = (float)pdb_140df0700(&uStack_f8,3);
        if (fVar12 <= fVar13) {
          bVar8 = fVar10 < fVar13;
          goto LAB_140888360;
        }
LAB_140888358:
        bVar8 = false;
        goto LAB_140888363;
      }
    }
    else {
      fVar10 = _DAT_142e36f28 + fVar10;
      if (((((fVar13 < fVar12) || (fVar10 < fVar13)) &&
           ((fVar13 + _DAT_142e36f28 < fVar12 || (fVar10 < fVar13 + _DAT_142e36f28)))) &&
          (((fVar13 = (float)pdb_140df0700(&uStack_f8,1), fVar10 < fVar13 || (fVar13 < fVar12)) &&
           ((fVar13 + _DAT_142e36f28 < fVar12 || (fVar10 < fVar13 + _DAT_142e36f28)))))) &&
         (((fVar13 = (float)pdb_140df0700(&uStack_f8,2), fVar10 < fVar13 || (fVar13 < fVar12)) &&
          ((fVar13 + _DAT_142e36f28 < fVar12 || (fVar10 < fVar13 + _DAT_142e36f28)))))) {
        fVar13 = (float)pdb_140df0700(&uStack_f8,3);
        if ((fVar10 < fVar13) || (bVar8 = true, fVar13 < fVar12)) {
          if (fVar13 + _DAT_142e36f28 < fVar12) goto LAB_140888358;
          bVar8 = fVar10 < fVar13 + _DAT_142e36f28;
LAB_140888360:
          bVar8 = !bVar8;
        }
LAB_140888363:
        uStack_108 = uStack_e0;
        uStack_100 = uStack_d8;
        if (!bVar8) {
          puVar5 = &uStack_c4;
          pdb_140b77d90(puVar5,param_5,&uStack_108);
          puVar6 = (undefined4 *)pdb_140a84d90(puVar5);
          uStack_f8 = *puVar6;
          uStack_f4 = puVar6[1];
          uStack_f0 = puVar6[2];
          uStack_ec = puVar6[3];
          uStack_e8 = *(undefined8 *)(puVar6 + 4);
          fVar13 = (float)pdb_140df2570(&uStack_f8,uVar1,uVar2);
          fVar10 = (float)pdb_140df3ee0(&uStack_f8);
          fVar11 = fVar11 / fVar10;
          fVar10 = (float)pub_142e32a70(fVar13 - fVar11);
          fVar10 = (float)(~-(uint)(fVar10 < 0.0) & (uint)fVar10 |
                          (uint)(fVar10 + fVar9) & -(uint)(fVar10 < 0.0));
          fVar13 = (float)pub_142e32a70(fVar11 + fVar13);
          fVar13 = (float)(~-(uint)(fVar13 < 0.0) & (uint)fVar13 |
                          (uint)(fVar9 + fVar13) & -(uint)(fVar13 < 0.0));
          fVar9 = (float)pdb_140df0700(&uStack_f8,0);
          if (fVar10 <= fVar13) {
            if ((((fVar9 < fVar10) || (fVar13 < fVar9)) &&
                ((fVar9 = (float)pdb_140df0700(&uStack_f8,1), fVar9 < fVar10 || (fVar13 < fVar9))))
               && ((fVar9 = (float)pdb_140df0700(&uStack_f8,2), fVar9 < fVar10 || (fVar13 < fVar9)))
               ) {
              fVar9 = (float)pdb_140df0700(&uStack_f8,3);
              if (fVar9 < fVar10) {
LAB_140888575:
                uVar7 = 1;
                goto LAB_1408882e9;
              }
              bVar8 = fVar13 < fVar9;
LAB_140888584:
              puVar5 = (undefined4 *)CONCAT71((int7)((ulonglong)puVar5 >> 8),!bVar8);
              goto LAB_140888588;
            }
          }
          else {
            fVar13 = _DAT_142e36f28 + fVar13;
            if (((((fVar9 < fVar10) || (fVar13 < fVar9)) &&
                 ((fVar9 + _DAT_142e36f28 < fVar10 || (fVar13 < fVar9 + _DAT_142e36f28)))) &&
                (((fVar9 = (float)pdb_140df0700(&uStack_f8,1), fVar13 < fVar9 || (fVar9 < fVar10))
                 && ((fVar9 + _DAT_142e36f28 < fVar10 || (fVar13 < fVar9 + _DAT_142e36f28)))))) &&
               (((fVar9 = (float)pdb_140df0700(&uStack_f8,2), fVar13 < fVar9 || (fVar9 < fVar10)) &&
                ((fVar9 + _DAT_142e36f28 < fVar10 || (fVar13 < fVar9 + _DAT_142e36f28)))))) {
              fVar9 = (float)pdb_140df0700(&uStack_f8,3);
              if ((fVar13 < fVar9) ||
                 (puVar5 = (undefined4 *)CONCAT71((int7)((ulonglong)puVar5 >> 8),1), fVar9 < fVar10)
                 ) {
                if (fVar9 + _DAT_142e36f28 < fVar10) goto LAB_140888575;
                bVar8 = fVar13 < fVar9 + _DAT_142e36f28;
                goto LAB_140888584;
              }
LAB_140888588:
              uVar7 = (ulonglong)puVar5 ^ 1;
              goto LAB_1408882e9;
            }
          }
        }
      }
    }
  }
  uVar7 = 0;
LAB_1408882e9:
  return (uVar7 ^ 1) & 0xffffffff;
}

