// VA 0x141423520, PDB extent 1618 bytes
// system_wall_constructor::construct_gates::DoorMeshInProgress::add_mirrored_quad
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_gates/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_gates::DoorMeshInProgress::add_mirrored_quad
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_gates/mod.rs
   Extent: 1618 */

void pdb_141423520(longlong *param_1,undefined8 *param_2,float *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  uint uVar15;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 auStack_138 [7];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  
  uVar4 = *param_4;
  fVar13 = (float)uVar4;
  fVar14 = (float)((ulonglong)uVar4 >> 0x20);
  fVar1 = *(float *)(param_4 + 1);
  uStack_148 = 0;
  uStack_140 = 1;
  auStack_138[0] = 2;
  auStack_138[1] = 0;
  auStack_138[2] = 2;
  auStack_138[3] = 3;
  auStack_138[4] = 0;
  uStack_e8 = 0;
  uStack_100 = 0;
  uStack_f8 = 1;
  uStack_f0 = 2;
  fVar2 = *param_3;
  uVar5 = *param_2;
  fVar3 = *(float *)(param_2 + 1);
  lVar11 = param_1[2];
  if (lVar11 == *param_1) {
    pdb_142db7820(param_1);
  }
  lVar9 = param_1[1];
  *(ulonglong *)(lVar9 + lVar11 * 0xc) =
       CONCAT44(fVar2 * fVar14 + (float)((ulonglong)uVar5 >> 0x20),fVar2 * fVar13 + (float)uVar5);
  *(float *)(lVar9 + 8 + lVar11 * 0xc) = fVar2 * fVar1 + fVar3;
  param_1[2] = lVar11 + 1;
  lVar11 = param_1[5];
  if (lVar11 == param_1[3]) {
    pdb_142d7f010(param_1 + 3);
  }
  lVar9 = param_1[4];
  *(undefined8 *)(lVar9 + lVar11 * 0xc) = uVar4;
  *(float *)(lVar9 + 8 + lVar11 * 0xc) = fVar1;
  param_1[5] = lVar11 + 1;
  uVar5 = *param_5;
  lVar11 = param_1[8];
  if (lVar11 == param_1[6]) {
    pdb_142d8d7f0(param_1 + 6);
  }
  *(undefined8 *)(param_1[7] + lVar11 * 8) = uVar5;
  param_1[8] = lVar11 + 1;
  lVar11 = param_1[0xb];
  if (lVar11 == param_1[9]) {
    pdb_142d7f010(param_1 + 9);
  }
  lVar9 = param_1[10];
  *(undefined4 *)(lVar9 + 8 + lVar11 * 0xc) = *(undefined4 *)(param_6 + 1);
  *(undefined8 *)(lVar9 + lVar11 * 0xc) = *param_6;
  param_1[0xb] = lVar11 + 1;
  lVar9 = 1;
  lVar11 = 1;
  do {
    uVar8 = _UNK_142e37824;
    uVar7 = _DAT_142e37820;
    lVar10 = lVar11;
    if (lVar9 == 3) {
      if (lVar11 == 2) {
        uStack_148 = 0;
        uStack_140 = 2;
        auStack_138[0] = 1;
        auStack_138[1] = 0;
        auStack_138[2] = 3;
        auStack_138[3] = 2;
        auStack_138[4] = 0;
        uStack_e8 = 0;
        uStack_f0 = 1;
        uStack_100 = 0;
        uStack_f8 = 2;
        uVar15 = (uint)fVar1 ^ _DAT_142e37820;
        fVar2 = *(float *)(param_2 + 1);
        fVar3 = *param_3;
        uVar4 = *param_2;
        lVar11 = param_1[2];
        if (lVar11 == *param_1) {
          pdb_142db7820(param_1);
        }
        lVar9 = param_1[1];
        *(ulonglong *)(lVar9 + lVar11 * 0xc) =
             CONCAT44((float)((ulonglong)uVar4 >> 0x20) - fVar3 * fVar14,
                      (float)uVar4 - fVar3 * fVar13);
        *(float *)(lVar9 + 8 + lVar11 * 0xc) = fVar2 - fVar3 * fVar1;
        param_1[2] = lVar11 + 1;
        lVar11 = param_1[5];
        if (lVar11 == param_1[3]) {
          pdb_142d7f010(param_1 + 3);
        }
        lVar9 = param_1[4];
        *(ulonglong *)(lVar9 + lVar11 * 0xc) = CONCAT44(uVar8 ^ (uint)fVar14,uVar7 ^ (uint)fVar13);
        *(uint *)(lVar9 + 8 + lVar11 * 0xc) = uVar15;
        param_1[5] = lVar11 + 1;
        uVar4 = *param_5;
        lVar11 = param_1[8];
        if (lVar11 == param_1[6]) {
          pdb_142d8d7f0(param_1 + 6);
        }
        *(undefined8 *)(param_1[7] + lVar11 * 8) = uVar4;
        param_1[8] = lVar11 + 1;
        lVar11 = param_1[0xb];
        if (lVar11 == param_1[9]) {
          pdb_142d7f010(param_1 + 9);
        }
        lVar9 = param_1[10];
        *(undefined4 *)(lVar9 + 8 + lVar11 * 0xc) = *(undefined4 *)(param_6 + 1);
        *(undefined8 *)(lVar9 + lVar11 * 0xc) = *param_6;
        param_1[0xb] = lVar11 + 1;
        lVar9 = 1;
        lVar11 = 1;
        while( true ) {
          lVar10 = lVar11;
          if (lVar9 == 3) {
            if (lVar11 == 2) {
              return;
            }
            lVar10 = lVar11 + 1;
            uStack_f0 = auStack_138[lVar11 * 3];
            uStack_100 = CONCAT44(*(undefined4 *)((longlong)&uStack_148 + lVar11 * 0x18 + 4),
                                  *(undefined4 *)(&uStack_148 + lVar11 * 3));
            uStack_f8 = CONCAT44(*(undefined4 *)((longlong)&uStack_140 + lVar11 * 0x18 + 4),
                                 *(undefined4 *)(&uStack_140 + lVar11 * 3));
            lVar9 = 0;
          }
          uVar12 = (&uStack_100)[lVar9];
          if (3 < uVar12) break;
          fVar2 = *(float *)((longlong)param_2 + uVar12 * 0xc + 8);
          fVar3 = param_3[uVar12];
          uVar4 = *(undefined8 *)((longlong)param_2 + uVar12 * 0xc);
          lVar11 = param_1[2];
          if (lVar11 == *param_1) {
            pdb_142db7820(param_1);
          }
          lVar6 = param_1[1];
          *(ulonglong *)(lVar6 + lVar11 * 0xc) =
               CONCAT44((float)((ulonglong)uVar4 >> 0x20) - fVar3 * fVar14,
                        (float)uVar4 - fVar3 * fVar13);
          *(float *)(lVar6 + 8 + lVar11 * 0xc) = fVar2 - fVar3 * fVar1;
          param_1[2] = lVar11 + 1;
          lVar11 = param_1[5];
          if (lVar11 == param_1[3]) {
            pdb_142d7f010(param_1 + 3);
          }
          lVar6 = param_1[4];
          *(ulonglong *)(lVar6 + lVar11 * 0xc) = CONCAT44(uVar8 ^ (uint)fVar14,uVar7 ^ (uint)fVar13)
          ;
          *(uint *)(lVar6 + 8 + lVar11 * 0xc) = uVar15;
          param_1[5] = lVar11 + 1;
          uVar4 = param_5[uVar12];
          lVar11 = param_1[8];
          if (lVar11 == param_1[6]) {
            pdb_142d8d7f0(param_1 + 6);
          }
          *(undefined8 *)(param_1[7] + lVar11 * 8) = uVar4;
          param_1[8] = lVar11 + 1;
          lVar11 = param_1[0xb];
          if (lVar11 == param_1[9]) {
            pdb_142d7f010(param_1 + 9);
          }
          lVar9 = lVar9 + 1;
          lVar6 = param_1[10];
          *(undefined4 *)(lVar6 + 8 + lVar11 * 0xc) = *(undefined4 *)(param_6 + 1);
          *(undefined8 *)(lVar6 + lVar11 * 0xc) = *param_6;
          param_1[0xb] = lVar11 + 1;
          lVar11 = lVar10;
        }
LAB_141423b5d:
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar12,4,&UNK_143309040);
      }
      lVar10 = lVar11 + 1;
      uStack_f0 = auStack_138[lVar11 * 3];
      uStack_100 = CONCAT44(*(undefined4 *)((longlong)&uStack_148 + lVar11 * 0x18 + 4),
                            *(undefined4 *)(&uStack_148 + lVar11 * 3));
      uStack_f8 = CONCAT44(*(undefined4 *)((longlong)&uStack_140 + lVar11 * 0x18 + 4),
                           *(undefined4 *)(&uStack_140 + lVar11 * 3));
      lVar9 = 0;
    }
    uVar12 = (&uStack_100)[lVar9];
    if (3 < uVar12) goto LAB_141423b5d;
    fVar2 = param_3[uVar12];
    fVar3 = *(float *)((longlong)param_2 + uVar12 * 0xc + 8);
    uVar5 = *(undefined8 *)((longlong)param_2 + uVar12 * 0xc);
    lVar11 = param_1[2];
    if (lVar11 == *param_1) {
      pdb_142db7820(param_1);
    }
    lVar6 = param_1[1];
    *(ulonglong *)(lVar6 + lVar11 * 0xc) =
         CONCAT44((float)((ulonglong)uVar5 >> 0x20) + fVar2 * fVar14,(float)uVar5 + fVar2 * fVar13);
    *(float *)(lVar6 + 8 + lVar11 * 0xc) = fVar1 * fVar2 + fVar3;
    param_1[2] = lVar11 + 1;
    lVar11 = param_1[5];
    if (lVar11 == param_1[3]) {
      pdb_142d7f010(param_1 + 3);
    }
    lVar6 = param_1[4];
    *(undefined8 *)(lVar6 + lVar11 * 0xc) = uVar4;
    *(float *)(lVar6 + 8 + lVar11 * 0xc) = fVar1;
    param_1[5] = lVar11 + 1;
    uVar5 = param_5[uVar12];
    lVar11 = param_1[8];
    if (lVar11 == param_1[6]) {
      pdb_142d8d7f0(param_1 + 6);
    }
    *(undefined8 *)(param_1[7] + lVar11 * 8) = uVar5;
    param_1[8] = lVar11 + 1;
    lVar11 = param_1[0xb];
    if (lVar11 == param_1[9]) {
      pdb_142d7f010(param_1 + 9);
    }
    lVar9 = lVar9 + 1;
    lVar6 = param_1[10];
    *(undefined4 *)(lVar6 + 8 + lVar11 * 0xc) = *(undefined4 *)(param_6 + 1);
    *(undefined8 *)(lVar6 + lVar11 * 0xc) = *param_6;
    param_1[0xb] = lVar11 + 1;
    lVar11 = lVar10;
  } while( true );
}

