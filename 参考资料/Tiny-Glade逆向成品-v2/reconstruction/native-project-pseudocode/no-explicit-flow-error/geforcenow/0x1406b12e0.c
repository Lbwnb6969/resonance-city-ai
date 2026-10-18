// VA 0x1406b12e0, PDB extent 396 bytes
// geforcenow::is_running_in_cloud
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/geforcenow/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: geforcenow::is_running_in_cloud
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/geforcenow/src/lib.rs
   Extent: 396 */

longlong * pdb_1406b12e0(longlong *param_1)

{
  code *pcVar1;
  code *pcVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lStack_60;
  code *pcStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  code *pcStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  pdb_140fb2b60(&lStack_60,&UNK_142f97e13,0x11,0);
  if (lStack_60 == -0x7fffffffffffffef) {
    pcStack_40 = pcStack_58;
    pdb_140fb2d10(&lStack_60,&pcStack_40,&UNK_142f97e24,0x17);
    pcVar1 = pcStack_58;
    if (lStack_60 == -0x7fffffffffffffef) {
      pdb_140fb2d10(&lStack_60,&pcStack_40,&UNK_142f97e3b,0x15);
      pcVar2 = pcStack_58;
      if (lStack_60 == -0x7fffffffffffffef) {
        pdb_140fb2d10(&lStack_60,&pcStack_40,&UNK_142f97e50,0x13);
        if (lStack_60 == -0x7fffffffffffffef) {
          iVar4 = (*pcVar1)(0);
          if (iVar4 == 0) {
            uVar3 = (*pcStack_58)();
            (*pcVar2)();
            *(undefined1 *)(param_1 + 1) = uVar3;
            *param_1 = -0x7fffffffffffffee;
          }
          else {
            *param_1 = -0x7fffffffffffffef;
            *(int *)(param_1 + 1) = iVar4;
          }
        }
        else {
          *(undefined4 *)(param_1 + 2) = uStack_50;
          *(undefined4 *)((longlong)param_1 + 0x14) = uStack_4c;
          *(undefined4 *)(param_1 + 3) = uStack_48;
          *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_44;
          *param_1 = lStack_60;
          param_1[1] = (longlong)pcStack_58;
        }
      }
      else {
        *(undefined4 *)(param_1 + 2) = uStack_50;
        *(undefined4 *)((longlong)param_1 + 0x14) = uStack_4c;
        *(undefined4 *)(param_1 + 3) = uStack_48;
        *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_44;
        *param_1 = lStack_60;
        param_1[1] = (longlong)pcStack_58;
      }
    }
    else {
      *(undefined4 *)(param_1 + 2) = uStack_50;
      *(undefined4 *)((longlong)param_1 + 0x14) = uStack_4c;
      *(undefined4 *)(param_1 + 3) = uStack_48;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_44;
      *param_1 = lStack_60;
      param_1[1] = (longlong)pcStack_58;
    }
    pdb_140eac380(&pcStack_40);
  }
  else {
    param_1[2] = CONCAT44(uStack_4c,uStack_50);
    param_1[3] = CONCAT44(uStack_44,uStack_48);
    *param_1 = lStack_60;
    param_1[1] = (longlong)pcStack_58;
  }
  return param_1;
}

