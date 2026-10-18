// VA 0x140cb6740, PDB extent 430 bytes
// tg_text::TextFragment::prepare
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_text::TextFragment::prepare
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/lib.rs
   Extent: 430 */

void pdb_140cb6740(longlong param_1,undefined8 param_2)

{
  float fVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong lVar4;
  float *pfVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  float afStack_90 [2];
  int *piStack_88;
  longlong lStack_80;
  longlong lStack_78;
  undefined8 uStack_70;
  int *piStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  lStack_80 = param_1 + 0x1a0;
  lStack_78 = *(longlong *)(param_1 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  piVar7 = *(int **)(param_1 + 0x1a8) + lStack_78 * 8;
  uStack_70 = 0;
  piStack_88 = piVar7;
  if (lStack_78 != 0) {
    piVar2 = *(int **)(param_1 + 0x1a8);
    do {
      if (*piVar2 == 0x22) break;
      iStack_ac = piVar2[1];
      iStack_a8 = piVar2[2];
      iStack_a4 = piVar2[3];
      iStack_a0 = piVar2[4];
      iStack_9c = piVar2[5];
      iStack_98 = piVar2[6];
      iStack_94 = piVar2[7];
      iStack_b0 = *piVar2;
      piStack_68 = piVar2 + 8;
      pdb_140ccbb00(param_1,param_2,&iStack_b0);
      piVar6 = piVar2 + 8;
      piVar2 = piStack_68;
    } while (piVar6 != piVar7);
  }
  uVar8 = pdb_141cbe8e0(param_1,param_2,param_1 + 0x248);
  uVar3 = *(longlong *)(param_1 + 0x38) >> 0x3f &
          *(longlong *)(param_1 + 0x38) + 0x8000000000000001U;
  if (uVar3 == 0) {
    pfVar5 = (float *)(param_1 + 0x154);
  }
  else {
    if (uVar3 == 1) {
      lVar4 = 0x11c;
    }
    else {
      lVar4 = 300;
    }
    pfVar5 = (float *)(lVar4 + *(longlong *)(param_1 + 0x40));
  }
  fVar1 = *pfVar5;
  afStack_90[0] = 0.0;
  pdb_141cbde50(param_1,afStack_90);
  *(undefined4 *)(param_1 + 0x238) = uVar8;
  *(float *)(param_1 + 0x23c) = fVar1 + afStack_90[0];
  return;
}

