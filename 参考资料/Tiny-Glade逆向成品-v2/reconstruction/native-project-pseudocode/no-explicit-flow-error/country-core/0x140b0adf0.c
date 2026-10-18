// VA 0x140b0adf0, PDB extent 1162 bytes
// country_core::startup::background_terrain_maps::gaussian_blur_separable::closure$1
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/background_terrain_maps.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::startup::background_terrain_maps::gaussian_blur_separable::closure$1
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/background_terrain_maps.rs
   Extent: 1162 */

void pdb_140b0adf0(ulonglong *param_1,undefined8 *param_2,longlong param_3,ulonglong param_4,
                  char param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  byte *pbVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  ulonglong *puStack_a8;
  code *pcStack_a0;
  ulonglong *puStack_98;
  code *pcStack_90;
  longlong lStack_88;
  longlong *plStack_80;
  ulonglong auStack_78 [3];
  ulonglong uStack_60;
  float *pfStack_58;
  byte *pbStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lVar1 = *(longlong *)*param_2;
  uVar3 = lVar1 * lVar1;
  uVar6 = uVar3 * 4;
  lVar7 = param_3;
  uVar9 = param_4;
  if (uVar6 < 0x7ffffffffffffffd && uVar3 >> 0x3e == 0) goto LAB_140b0ae5a;
  uVar4 = 0;
  while( true ) {
    uVar3 = uVar6;
    pdb_142dc7e2a(uVar4);
    lVar7 = param_3;
    uVar9 = param_4;
LAB_140b0ae5a:
    auStack_78[2] = uVar3;
    if (uVar6 == 0) break;
    param_3 = lVar7;
    param_4 = uVar9;
    pdb_14007ee60();
    uVar4 = 4;
    pbStack_50 = pub_1406abae0(uVar6,4);
    uStack_60 = auStack_78[2];
    if (pbStack_50 != (byte *)0x0) {
joined_r0x000140b0aeb5:
      if (lVar1 != 0) {
        lStack_88 = param_2[1];
        plStack_80 = (longlong *)param_2[2];
        auStack_78[0] = lVar1 - 1;
        pfStack_58 = (float *)param_2[3];
        if (param_5 == '\0') {
          if ((longlong)auStack_78[0] < 0) {
            lVar12 = 0;
            lVar7 = 0;
            pbVar10 = pbStack_50;
            do {
              lVar7 = lVar7 + 1;
              lVar5 = 0;
              do {
                if (*(longlong *)(lStack_88 + 0x10) != 0) {
                  auStack_78[1] = 0;
                  puStack_a8 = auStack_78 + 1;
                  pcStack_a0 = pdb_1404ed1d0;
                  puStack_98 = auStack_78;
                  pcStack_90 = pdb_1404ed1d0;
                    /* WARNING: Subroutine does not return */
                  pdb_142dc83d0(&UNK_143053d60,&puStack_a8,&UNK_143054200);
                }
                uVar6 = lVar12 + lVar5;
                if (auStack_78[2] <= uVar6) goto LAB_140b0b18a;
                *(float *)(pbVar10 + lVar5 * 4) = 0.0 / *pfStack_58;
                lVar5 = lVar5 + 1;
              } while (lVar1 != lVar5);
              lVar12 = lVar12 + lVar1;
              pbVar10 = pbVar10 + lVar1 * 4;
            } while (lVar7 != lVar1);
          }
          else {
            lVar12 = 0;
            do {
              lVar5 = lVar12 + 1;
              lVar11 = 0;
              do {
                if (*(longlong *)(lStack_88 + 0x10) == 0) {
                  fVar13 = 0.0;
                }
                else {
                  uVar6 = lVar12 - *plStack_80;
                  fVar13 = 0.0;
                  lVar8 = 0;
                  do {
                    uVar3 = auStack_78[0];
                    if (uVar6 < auStack_78[0]) {
                      uVar3 = uVar6;
                    }
                    uVar2 = 0;
                    if (-1 < (longlong)uVar6) {
                      uVar2 = uVar3;
                    }
                    uVar3 = uVar2 * lVar1 + lVar11;
                    if (uVar9 <= uVar3) goto LAB_140b0b0cc;
                    fVar13 = fVar13 + *(float *)(lVar7 + uVar3 * 4) *
                                      *(float *)(*(longlong *)(lStack_88 + 8) + lVar8);
                    uVar6 = uVar6 + 1;
                    lVar8 = lVar8 + 4;
                  } while (*(longlong *)(lStack_88 + 0x10) << 2 != lVar8);
                }
                uVar6 = lVar12 * lVar1 + lVar11;
                if (auStack_78[2] <= uVar6) goto LAB_140b0b18a;
                lVar8 = lVar12 * lVar1 + lVar11;
                lVar11 = lVar11 + 1;
                *(float *)(pbStack_50 + lVar8 * 4) = fVar13 / *pfStack_58;
              } while (lVar11 != lVar1);
              lVar12 = lVar5;
            } while (lVar5 != lVar1);
          }
        }
        else if ((longlong)auStack_78[0] < 0) {
          lVar12 = 0;
          lVar7 = 0;
          pbVar10 = pbStack_50;
          do {
            lVar7 = lVar7 + 1;
            lVar5 = 0;
            do {
              if (*(longlong *)(lStack_88 + 0x10) != 0) {
                auStack_78[1] = 0;
                puStack_a8 = auStack_78 + 1;
                pcStack_a0 = pdb_1404ed1d0;
                puStack_98 = auStack_78;
                pcStack_90 = pdb_1404ed1d0;
                    /* WARNING: Subroutine does not return */
                pdb_142dc83d0(&UNK_143053d60,&puStack_a8,&UNK_143054218);
              }
              uVar6 = lVar12 + lVar5;
              if (auStack_78[2] <= uVar6) goto LAB_140b0b18a;
              *(float *)(pbVar10 + lVar5 * 4) = 0.0 / *pfStack_58;
              lVar5 = lVar5 + 1;
            } while (lVar1 != lVar5);
            lVar12 = lVar12 + lVar1;
            pbVar10 = pbVar10 + lVar1 * 4;
          } while (lVar7 != lVar1);
        }
        else {
          lVar12 = 0;
          do {
            lVar5 = lVar12 + 1;
            lVar12 = lVar12 * lVar1;
            lVar11 = 0;
            do {
              if (*(longlong *)(lStack_88 + 0x10) == 0) {
                fVar13 = 0.0;
              }
              else {
                uVar6 = lVar11 - *plStack_80;
                fVar13 = 0.0;
                lVar8 = 0;
                do {
                  uVar2 = auStack_78[0];
                  if (uVar6 < auStack_78[0]) {
                    uVar2 = uVar6;
                  }
                  uVar3 = 0;
                  if (-1 < (longlong)uVar6) {
                    uVar3 = uVar2;
                  }
                  uVar3 = uVar3 + lVar12;
                  if (uVar9 <= uVar3) {
LAB_140b0b0cc:
                    /* WARNING: Subroutine does not return */
                    pdb_142dc81f2(uVar3,uVar9,&UNK_143054230);
                  }
                  fVar13 = fVar13 + *(float *)(lVar7 + uVar3 * 4) *
                                    *(float *)(*(longlong *)(lStack_88 + 8) + lVar8);
                  uVar6 = uVar6 + 1;
                  lVar8 = lVar8 + 4;
                } while (*(longlong *)(lStack_88 + 0x10) << 2 != lVar8);
              }
              uVar6 = lVar11 + lVar12;
              if (auStack_78[2] <= uVar6) {
LAB_140b0b18a:
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(uVar6);
              }
              lVar8 = lVar11 + lVar12;
              lVar11 = lVar11 + 1;
              *(float *)(pbStack_50 + lVar8 * 4) = fVar13 / *pfStack_58;
            } while (lVar11 != lVar1);
            lVar12 = lVar5;
          } while (lVar5 != lVar1);
        }
      }
      *param_1 = uStack_60;
      param_1[1] = (ulonglong)pbStack_50;
      param_1[2] = auStack_78[2];
      return;
    }
  }
  pbStack_50 = (byte *)0x4;
  uStack_60 = 0;
  goto joined_r0x000140b0aeb5;
}

