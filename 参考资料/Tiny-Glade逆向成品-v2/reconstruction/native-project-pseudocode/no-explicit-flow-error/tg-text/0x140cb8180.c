// VA 0x140cb8180, PDB extent 507 bytes
// tg_text::TextRenderer::rect
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_text::TextRenderer::rect
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/lib.rs
   Extent: 507 */

void pdb_140cb8180(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  longlong param_5)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  float fVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  if (*(int *)(param_1 + 0x4a0) == 1) {
    if (*(float *)(param_1 + 0x4ac) <= (float)param_2) {
      return;
    }
    fVar4 = (float)((ulonglong)param_2 >> 0x20);
    if (*(float *)(param_1 + 0x4b0) <= fVar4) {
      return;
    }
    if ((float)param_2 + (float)param_3 <= *(float *)(param_1 + 0x4a4)) {
      return;
    }
    if (fVar4 + (float)((ulonglong)param_3 >> 0x20) <= *(float *)(param_1 + 0x4a8)) {
      return;
    }
    if (*(float *)(param_1 + 0x4ac) <= *(float *)(param_1 + 0x4a4)) {
      return;
    }
    if (*(float *)(param_1 + 0x4b0) <= *(float *)(param_1 + 0x4a8)) {
      return;
    }
    uVar8 = *(undefined8 *)(param_1 + 0x498);
  }
  else {
    uVar8 = 0;
  }
  uVar1 = *(ulonglong *)(param_5 + 0x10);
  if (0xff < (uint)uVar1) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14307a9d0,0x22,&UNK_14307a9f8);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x438);
  uVar5 = pdb_140de9d00(0xffffffff,param_4);
  lVar7 = *(longlong *)(param_1 + 0x420);
  if (lVar7 == *(longlong *)(param_1 + 0x410)) {
    pdb_142d8d630(param_1 + 0x410);
  }
  lVar3 = *(longlong *)(param_1 + 0x418);
  lVar6 = lVar7 * 0x30;
  *(undefined8 *)(lVar3 + lVar6) = param_2;
  *(undefined8 *)(lVar3 + 8 + lVar6) = param_3;
  *(undefined8 *)(lVar3 + 0x10 + lVar6) = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar6) = 0x3f8000003f800000;
  *(undefined4 *)(lVar3 + 0x20 + lVar6) = uVar5;
  *(uint *)(lVar3 + 0x24 + lVar6) = (int)uVar2 << 8 | (uint)uVar1;
  *(undefined8 *)(lVar3 + 0x28 + lVar6) = uVar8;
  *(longlong *)(param_1 + 0x420) = lVar7 + 1;
  uVar8 = *(undefined8 *)(param_5 + 8);
  lVar7 = *(longlong *)(param_1 + 0x438);
  if ((ulonglong)(*(longlong *)(param_1 + 0x428) - lVar7) < uVar1) {
    pdb_142d7f1b0(param_1 + 0x428,lVar7,uVar1,4,4);
    lVar7 = *(longlong *)(param_1 + 0x438);
  }
  else if (uVar1 == 0) goto LAB_140cb8310;
  pub_142e32760(lVar7 * 4 + *(longlong *)(param_1 + 0x430),uVar8,uVar1 * 4);
LAB_140cb8310:
  *(ulonglong *)(param_1 + 0x438) = lVar7 + uVar1;
  return;
}

