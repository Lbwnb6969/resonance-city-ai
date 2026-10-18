// VA 0x142b29e10, PDB extent 668 bytes
// system_onboarding::hint_binding::HintMouseInput::graphic
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_binding.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_onboarding::hint_binding::HintMouseInput::graphic
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_binding.rs
   Extent: 668 */

undefined8 * pdb_142b29e10(undefined8 *param_1,short *param_2)

{
  short sVar1;
  byte *pbVar2;
  undefined *puVar3;
  undefined8 uVar4;
  short *psStack_20;
  short **ppsStack_18;
  code *pcStack_10;
  
  if (*param_2 == 0) {
    sVar1 = param_2[1];
    if (sVar1 == 0) {
      pdb_14007ee60();
      pbVar2 = pub_1406abab0(0x20,8);
      if (pbVar2 == (byte *)0x0) {
LAB_142b2a056:
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x20);
      }
      *(undefined **)pbVar2 = &UNK_14366b56a;
      pbVar2[8] = 10;
      pbVar2[9] = 0;
      pbVar2[10] = 0;
      pbVar2[0xb] = 0;
      pbVar2[0xc] = 0;
      pbVar2[0xd] = 0;
      pbVar2[0xe] = 0;
      pbVar2[0xf] = 0;
      puVar3 = &UNK_14366b574;
    }
    else if (sVar1 == 1) {
      pdb_14007ee60();
      pbVar2 = pub_1406abab0(0x20,8);
      if (pbVar2 == (byte *)0x0) goto LAB_142b2a056;
      *(undefined **)pbVar2 = &UNK_14366b56a;
      pbVar2[8] = 10;
      pbVar2[9] = 0;
      pbVar2[10] = 0;
      pbVar2[0xb] = 0;
      pbVar2[0xc] = 0;
      pbVar2[0xd] = 0;
      pbVar2[0xe] = 0;
      pbVar2[0xf] = 0;
      puVar3 = &UNK_14366b57c;
    }
    else {
      if (sVar1 != 2) {
LAB_142b2a065:
        psStack_20 = param_2 + 1;
        ppsStack_18 = &psStack_20;
        pcStack_10 = pdb_142d26650;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14366b5b3,&ppsStack_18,&UNK_14366b5e8);
      }
      pdb_14007ee60();
      pbVar2 = pub_1406abab0(0x20,8);
      if (pbVar2 == (byte *)0x0) goto LAB_142b2a056;
      *(undefined **)pbVar2 = &UNK_14366b56a;
      pbVar2[8] = 10;
      pbVar2[9] = 0;
      pbVar2[10] = 0;
      pbVar2[0xb] = 0;
      pbVar2[0xc] = 0;
      pbVar2[0xd] = 0;
      pbVar2[0xe] = 0;
      pbVar2[0xf] = 0;
      puVar3 = &UNK_14366b584;
    }
    *(undefined **)(pbVar2 + 0x10) = puVar3;
    pbVar2[0x18] = 8;
    pbVar2[0x19] = 0;
    pbVar2[0x1a] = 0;
    pbVar2[0x1b] = 0;
    pbVar2[0x1c] = 0;
    pbVar2[0x1d] = 0;
    pbVar2[0x1e] = 0;
    pbVar2[0x1f] = 0;
LAB_142b2a02f:
    uVar4 = 2;
  }
  else {
    if (*param_2 != 1) {
      *param_1 = 0x8000000000000000;
      param_1[1] = 0x8000000000000000;
      param_1[2] = &UNK_14366b600;
      param_1[3] = 0xb;
      goto LAB_142b2a046;
    }
    sVar1 = param_2[1];
    if (sVar1 == 0) {
      pdb_14007ee60();
      pbVar2 = pub_1406abab0(0x20,8);
      if (pbVar2 == (byte *)0x0) goto LAB_142b2a056;
      *(undefined **)pbVar2 = &UNK_14366b574;
      pbVar2[8] = 8;
      pbVar2[9] = 0;
      pbVar2[10] = 0;
      pbVar2[0xb] = 0;
      pbVar2[0xc] = 0;
      pbVar2[0xd] = 0;
      pbVar2[0xe] = 0;
      pbVar2[0xf] = 0;
      *(undefined **)(pbVar2 + 0x10) = &UNK_14366b58c;
      pbVar2[0x18] = 0xd;
      pbVar2[0x19] = 0;
      pbVar2[0x1a] = 0;
      pbVar2[0x1b] = 0;
      pbVar2[0x1c] = 0;
      pbVar2[0x1d] = 0;
      pbVar2[0x1e] = 0;
      pbVar2[0x1f] = 0;
      goto LAB_142b2a02f;
    }
    if (sVar1 == 1) {
      pdb_14007ee60();
      pbVar2 = pub_1406abab0(0x30,8);
      if (pbVar2 == (byte *)0x0) {
LAB_142b2a09c:
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x30);
      }
      *(undefined **)pbVar2 = &UNK_14366b56a;
      pbVar2[8] = 10;
      pbVar2[9] = 0;
      pbVar2[10] = 0;
      pbVar2[0xb] = 0;
      pbVar2[0xc] = 0;
      pbVar2[0xd] = 0;
      pbVar2[0xe] = 0;
      pbVar2[0xf] = 0;
      *(undefined **)(pbVar2 + 0x10) = &UNK_14366b57c;
      pbVar2[0x18] = 8;
      pbVar2[0x19] = 0;
      pbVar2[0x1a] = 0;
      pbVar2[0x1b] = 0;
      pbVar2[0x1c] = 0;
      pbVar2[0x1d] = 0;
      pbVar2[0x1e] = 0;
      pbVar2[0x1f] = 0;
      puVar3 = &UNK_14366b599;
    }
    else {
      if (sVar1 != 2) goto LAB_142b2a065;
      pdb_14007ee60();
      pbVar2 = pub_1406abab0(0x30,8);
      if (pbVar2 == (byte *)0x0) goto LAB_142b2a09c;
      *(undefined **)pbVar2 = &UNK_14366b56a;
      pbVar2[8] = 10;
      pbVar2[9] = 0;
      pbVar2[10] = 0;
      pbVar2[0xb] = 0;
      pbVar2[0xc] = 0;
      pbVar2[0xd] = 0;
      pbVar2[0xe] = 0;
      pbVar2[0xf] = 0;
      *(undefined **)(pbVar2 + 0x10) = &UNK_14366b584;
      pbVar2[0x18] = 8;
      pbVar2[0x19] = 0;
      pbVar2[0x1a] = 0;
      pbVar2[0x1b] = 0;
      pbVar2[0x1c] = 0;
      pbVar2[0x1d] = 0;
      pbVar2[0x1e] = 0;
      pbVar2[0x1f] = 0;
      puVar3 = &UNK_14366b5a6;
    }
    *(undefined **)(pbVar2 + 0x20) = puVar3;
    pbVar2[0x28] = 0xd;
    pbVar2[0x29] = 0;
    pbVar2[0x2a] = 0;
    pbVar2[0x2b] = 0;
    pbVar2[0x2c] = 0;
    pbVar2[0x2d] = 0;
    pbVar2[0x2e] = 0;
    pbVar2[0x2f] = 0;
    uVar4 = 3;
  }
  *param_1 = uVar4;
  param_1[1] = pbVar2;
  param_1[2] = uVar4;
  *(undefined4 *)(param_1 + 3) = 0x3f333333;
LAB_142b2a046:
  *(undefined4 *)(param_1 + 4) = 0x42c80000;
  return param_1;
}

