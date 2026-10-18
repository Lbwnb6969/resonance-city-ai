// VA 0x1409fb1d0, PDB extent 185 bytes
// country_core::systems::collision::world::impl$18::eq
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::collision::world::impl$18::eq
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 185 */

ulonglong pdb_1409fb1d0(char *param_1,char *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  int iVar7;
  int iVar8;
  
  if ((*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x80) !=
       *(longlong *)(*(longlong *)(param_2 + 0x18) + 0x80)) || (*param_1 != *param_2)) {
    return 0;
  }
  uVar4 = CONCAT71((int7)((ulonglong)*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x80) >> 8),1);
  switch(*param_1) {
  case '\x02':
    if (param_1[1] != param_2[1]) {
      return 0;
    }
    if (param_1[2] != param_2[2]) {
      return 0;
    }
  case '\0':
  case '\x01':
  case '\x06':
  case '\a':
  case '\b':
  case '\t':
  case '\f':
    uVar4 = *(ulonglong *)(param_1 + 8);
    bVar5 = uVar4 == *(ulonglong *)(param_2 + 8);
    break;
  case '\x03':
  case '\x04':
  case '\x05':
    if (*(int *)(param_1 + 4) != *(int *)(param_2 + 4)) {
      return 0;
    }
    if (*(longlong *)(param_1 + 8) != *(longlong *)(param_2 + 8)) {
      return 0;
    }
    if (*(longlong *)(param_1 + 8) != 0) {
      return uVar4;
    }
    uVar4 = *(ulonglong *)(param_1 + 0x10);
    bVar5 = uVar4 == *(ulonglong *)(param_2 + 0x10);
    break;
  default:
    goto LAB_1409fb273;
  case '\r':
  case '\x0e':
    uVar1 = *(undefined8 *)(param_1 + 4);
    uVar2 = *(undefined8 *)(param_2 + 4);
    goto code_r0x0001409fb260;
  case '\x0f':
  case '\x10':
    uVar4 = (ulonglong)*(uint *)(param_1 + 4);
    if (*(uint *)(param_1 + 4) != *(uint *)(param_2 + 4)) {
      return 0;
    }
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined8 *)(param_2 + 8);
code_r0x0001409fb260:
    iVar7 = -(uint)((int)uVar2 == (int)uVar1);
    iVar8 = -(uint)((int)((ulonglong)uVar2 >> 0x20) == (int)((ulonglong)uVar1 >> 0x20));
    auVar6._4_4_ = iVar7;
    auVar6._0_4_ = iVar7;
    auVar6._8_4_ = iVar8;
    auVar6._12_4_ = iVar8;
    uVar3 = movmskpd((int)uVar4,auVar6);
    uVar4 = (ulonglong)uVar3;
    bVar5 = uVar3 == 3;
  }
  uVar4 = CONCAT71((int7)(uVar4 >> 8),bVar5);
LAB_1409fb273:
  return uVar4;
}

