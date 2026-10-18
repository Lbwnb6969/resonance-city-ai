// VA 0x1408c7060, PDB extent 383 bytes
// system_decorator::decorator_visual::cottage_wall_window::flowerbed_xforms
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/cottage_wall_window.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_decorator::decorator_visual::cottage_wall_window::flowerbed_xforms
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/cottage_wall_window.rs
   Extent: 383 */

undefined8
pdb_1408c7060(undefined8 param_1,char param_2,byte param_3,undefined8 param_4,undefined8 param_5)

{
  undefined *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lStack_60;
  longlong lStack_58;
  longlong lStack_50;
  longlong lStack_48;
  undefined8 uStack_40;
  ulonglong uStack_38;
  undefined8 uStack_30;
  
  if (param_3 < 2) {
    if (2 < (byte)(param_2 - 1U)) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_14301709f,0x28,&UNK_1430170c8);
    }
    uVar6 = 0x31;
    puVar1 = &UNK_1430179d8;
  }
  else {
    if (param_3 != 3) {
      if (param_3 == 2) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_1430170e0,0xc5,&UNK_143017148);
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_143017250,0xad,&UNK_1430172a8);
    }
    if (2 < (byte)(param_2 - 1U)) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_14301709f,0x28,&UNK_143017238);
    }
    uVar6 = 0x38;
    puVar1 = &UNK_1430179f0;
  }
  lVar4 = *(longlong *)(puVar1 + (ulonglong)(byte)(param_2 - 1) * 8);
  lVar2 = pdb_140a2b210(param_5,lVar4,uVar6);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143017208);
  }
  lVar3 = pdb_140a97600(lVar2);
  lVar5 = lVar4;
  lStack_50 = pdb_140a974f0(lVar2);
  if (lStack_50 != 0) {
    uVar7 = ((ulonglong)(lVar4 - lVar3) >> 2) * -0x5555555555555555;
    uStack_38 = ((ulonglong)(lVar5 - lStack_50) >> 2) * -0x5555555555555555;
    if (uVar7 <= uStack_38) {
      uStack_38 = uVar7;
    }
    uStack_40 = 0;
    lStack_60 = lVar3;
    lStack_58 = lVar4;
    lStack_48 = lVar5;
    uStack_30 = param_4;
    pdb_141498bd0(param_1,&lStack_60);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143017220);
}

