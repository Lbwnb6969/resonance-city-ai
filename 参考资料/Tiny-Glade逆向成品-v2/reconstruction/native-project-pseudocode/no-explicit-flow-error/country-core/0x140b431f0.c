// VA 0x140b431f0, PDB extent 147 bytes
// country_core::systems::mode_manager::switch_app_mode
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::mode_manager::switch_app_mode
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mode_manager.rs
   Extent: 147 */

ulonglong pdb_140b431f0(undefined4 *param_1,char *param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  char *pcStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined4 *)(param_2 + 4);
  uVar4 = *(undefined4 *)(param_2 + 8);
  uVar5 = *(undefined4 *)(param_2 + 0xc);
  *param_1 = *(undefined4 *)param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  uVar7 = (ulonglong)(byte)(*param_2 - 1U);
  if (0xf < (byte)(*param_2 - 1U)) {
    if (7 < *(ulonglong *)(param_3 + 0x10)) {
      lVar1 = *(longlong *)(param_3 + 8);
      uVar2 = *(ulonglong *)(lVar1 + 0xf0);
      if (uVar2 != 0) {
        if (*(char *)(param_3 + 0x18) == '\a') {
          uVar8 = *(longlong *)(lVar1 + 0xf8) + 1;
          if ((uVar8 | uVar2) >> 0x20 == 0) {
            uVar7 = (uVar8 & 0xffffffff) / (uVar2 & 0xffffffff);
            uVar8 = (uVar8 & 0xffffffff) % (uVar2 & 0xffffffff);
          }
          else {
            uVar7 = uVar8 / uVar2;
            uVar8 = uVar8 % uVar2;
          }
          *(ulonglong *)(lVar1 + 0xf8) = uVar8;
        }
        else if (uVar2 <= *(ulonglong *)(lVar1 + 0xf8)) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(*(ulonglong *)(lVar1 + 0xf8),uVar2,&UNK_14304f650);
        }
        *(undefined1 *)(param_3 + 0x18) = 7;
      }
    }
    return uVar7;
  }
  lVar1 = *(longlong *)(param_3 + 8);
  lVar10 = *(longlong *)(param_3 + 0x10);
  lVar13 = 1;
  lVar11 = 0;
  lVar9 = lVar1;
  do {
    if (lVar10 << 5 == lVar11) {
      pcStack_50 = pdb_140ae6b10;
      pcStack_58 = param_2;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14304f680,&pcStack_58,&UNK_14304f6c8);
    }
    uStack_48 = *(undefined8 *)(param_2 + 0x10);
    pcStack_58 = *(char **)param_2;
    pcStack_50 = *(code **)(param_2 + 8);
    cVar6 = pdb_141b6f050(&pcStack_58,*(undefined8 *)(lVar9 + 8),*(undefined8 *)(lVar9 + 0x10));
    lVar11 = lVar11 + 0x20;
    lVar13 = lVar13 + -1;
    lVar9 = lVar9 + 0x20;
  } while (cVar6 == '\0');
  if ((ulonglong)-lVar13 < 0xb) {
    lVar10 = *(longlong *)(lVar1 + -0x10 + lVar11);
    if (lVar10 != 0) {
      lVar9 = *(longlong *)(lVar1 + -0x18 + lVar11);
      lVar10 = lVar10 * 0x18;
      lVar12 = 0;
      do {
        uVar7 = pdb_140ae6da0(lVar9,param_2);
        if ((char)uVar7 != '\0') {
          *(longlong *)(lVar1 + -8 + lVar11) = lVar12;
          *(char *)(param_3 + 0x18) = -(char)lVar13;
          return uVar7;
        }
        lVar9 = lVar9 + 0x18;
        lVar12 = lVar12 + 1;
        lVar10 = lVar10 + -0x18;
      } while (lVar10 != 0);
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14304f668);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_14304eed9,0x28,&UNK_14304ef30);
}

