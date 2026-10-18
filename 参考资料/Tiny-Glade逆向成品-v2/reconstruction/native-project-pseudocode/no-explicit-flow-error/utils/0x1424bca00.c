// VA 0x1424bca00, PDB extent 905 bytes
// utils::subtractive_1d_boolean::SubtractiveBoolean1D::subtract
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/subtractive_1d_boolean.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::subtractive_1d_boolean::SubtractiveBoolean1D::subtract
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/subtractive_1d_boolean.rs
   Extent: 905 */

void pdb_1424bca00(longlong *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  byte *arg0;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  longlong lStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  char cStack_91;
  undefined8 uStack_90;
  
  uStack_90 = 0xfffffffffffffffe;
  lStack_b0 = 0;
  lStack_a8 = 4;
  lStack_a0 = 0;
  arg0 = (byte *)param_1[1];
  lVar3 = param_1[2];
  if (lVar3 != 0) {
    fVar1 = *param_2;
    fVar2 = param_2[1];
    cStack_91 = *(char *)(param_2 + 2);
    lVar8 = 0;
    lVar7 = 0;
    do {
      fVar9 = *(float *)(arg0 + lVar7);
      if (fVar9 < fVar1) {
LAB_1424bcb00:
        lVar6 = lVar8;
        if (fVar9 <= fVar1) {
          fVar10 = *(float *)(arg0 + lVar7 + 4);
          if (arg0[lVar7 + 8] == 0) {
            if (((fVar1 <= fVar10) && (fVar9 <= fVar2)) && (fVar2 <= fVar10)) goto LAB_1424bcbbd;
            if (fVar1 <= fVar10) goto LAB_1424bcc74;
            goto LAB_1424bcb06;
          }
          if (((fVar10 <= fVar1) || (fVar2 < fVar9)) || (fVar10 <= fVar2)) {
            if (fVar10 <= fVar1) goto LAB_1424bcb06;
LAB_1424bcc74:
            lVar4 = 1;
            if (lVar8 == lStack_b0) {
              pdb_142d7f010(&lStack_b0);
            }
            bVar5 = 0;
            fVar10 = fVar1;
          }
          else {
LAB_1424bcbbd:
            if (lVar8 == lStack_b0) {
              pdb_142d7f010(&lStack_b0);
            }
            *(float *)(lStack_a8 + lVar8 * 0xc) = fVar9;
            *(float *)(lStack_a8 + 4 + lVar8 * 0xc) = fVar1;
            *(undefined1 *)(lStack_a8 + 8 + lVar8 * 0xc) = 0;
            lVar6 = lVar8 + 1;
            fVar10 = *(float *)(arg0 + lVar7 + 4);
            lVar4 = 2;
            if (lVar6 == lStack_b0) {
              lStack_a0 = lVar6;
              pdb_142d7f010(&lStack_b0);
            }
LAB_1424bcc44:
            bVar5 = 0;
            fVar9 = fVar2;
          }
        }
        else {
LAB_1424bcb06:
          if (fVar9 <= fVar2) {
            fVar10 = *(float *)(arg0 + lVar7 + 4);
            if (arg0[lVar7 + 8] == 0) {
              if (fVar2 <= fVar10) goto LAB_1424bcc2a;
              bVar5 = 0;
            }
            else {
              bVar5 = 1;
              if (fVar2 < fVar10) {
LAB_1424bcc2a:
                lVar4 = 1;
                if (lVar8 == lStack_b0) {
                  pdb_142d7f010(&lStack_b0);
                }
                goto LAB_1424bcc44;
              }
            }
          }
          else {
            fVar10 = *(float *)(arg0 + lVar7 + 4);
            bVar5 = arg0[lVar7 + 8];
          }
          if (lVar8 == lStack_b0) {
            lVar4 = 1;
            pdb_142d7f010(&lStack_b0);
          }
          else {
            lVar4 = 1;
          }
        }
        *(float *)(lStack_a8 + lVar6 * 0xc) = fVar9;
        *(float *)(lStack_a8 + 4 + lVar6 * 0xc) = fVar10;
        *(byte *)(lStack_a8 + 8 + lVar6 * 0xc) = bVar5;
        lVar8 = lVar8 + lVar4;
        lStack_a0 = lVar8;
      }
      else if (cStack_91 == '\0') {
        if (((fVar2 < fVar9) || (*(float *)(arg0 + lVar7 + 4) < fVar1)) ||
           (fVar2 < *(float *)(arg0 + lVar7 + 4))) goto LAB_1424bcb00;
      }
      else if (((fVar2 <= fVar9) || (*(float *)(arg0 + lVar7 + 4) < fVar1)) ||
              (fVar2 <= *(float *)(arg0 + lVar7 + 4))) goto LAB_1424bcb00;
      lVar7 = lVar7 + 0xc;
    } while (lVar3 * 0xc != lVar7);
  }
  lVar8 = lStack_a0;
  lVar7 = lStack_a8;
  lVar3 = lStack_b0;
  if (*param_1 != 0) {
    pub_1406abac0(arg0,*param_1 * 0xc,4);
  }
  param_1[2] = lVar8;
  *param_1 = lVar3;
  param_1[1] = lVar7;
  return;
}

