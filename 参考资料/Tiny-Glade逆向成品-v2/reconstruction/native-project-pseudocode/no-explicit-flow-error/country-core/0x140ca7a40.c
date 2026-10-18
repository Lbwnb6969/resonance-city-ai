// VA 0x140ca7a40, PDB extent 411 bytes
// hashbrown::raw::RawTableInner::fallible_with_capacity<alloc::alloc::Global>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   hashbrown::raw::RawTableInner::fallible_with_capacity<alloc::alloc::Global>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 411 */

void pdb_140ca7a40(undefined8 *param_1,ulonglong param_2,ulonglong param_3,undefined4 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  byte *pbVar6;
  ulonglong arg0;
  ulonglong uVar7;
  longlong lVar8;
  
  uVar5 = _UNK_143077fd8;
  if (param_3 == 0) {
    param_1[2] = _DAT_143077fd0;
    param_1[3] = uVar5;
    uVar5 = _UNK_143077fc8;
    *param_1 = _DAT_143077fc0;
    param_1[1] = uVar5;
    return;
  }
  if (param_3 < 0xf) {
    uVar7 = (ulonglong)(param_2 < 4) * 4 + 3;
    if (uVar7 < param_3) {
      uVar7 = param_3;
    }
    uVar3 = 0xe;
    if (1 < param_2) {
      uVar3 = uVar7;
    }
    uVar7 = 4;
    if (3 < uVar3) {
      uVar7 = (ulonglong)((uint)uVar3 & 8) + 8;
    }
LAB_140ca7afd:
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_2;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar7;
    param_2 = SUB168(auVar1 * auVar2,8);
    uVar3 = SUB168(auVar1 * auVar2,0);
    if ((param_2 == 0) && (uVar3 < 0xfffffffffffffff1)) {
      uVar4 = uVar3 + 0xf & 0xfffffffffffffff0;
      uVar3 = uVar7 + 0x10;
      arg0 = uVar4 + uVar3;
      param_2 = CONCAT71(0x7fffffffffffff,0x7ffffffffffffff0 < arg0 || CARRY8(uVar4,uVar3));
      if (0x7ffffffffffffff0 >= arg0 && !CARRY8(uVar4,uVar3)) {
        if (arg0 == 0) {
          pbVar6 = (byte *)0x10;
LAB_140ca7b8c:
          lVar8 = (uVar7 & 0xfffffffffffffff8) - (uVar7 >> 3);
          if (uVar7 < 9) {
            lVar8 = uVar7 - 1;
          }
          pub_142e32780(pbVar6 + uVar4,0xff,uVar3);
          *param_1 = pbVar6 + uVar4;
          param_1[1] = uVar7 - 1;
          param_1[2] = lVar8;
          param_1[3] = 0;
          return;
        }
        pdb_14007ee60();
        pbVar6 = pub_1406abab0(arg0,0x10);
        if (pbVar6 != (byte *)0x0) goto LAB_140ca7b8c;
        param_2 = 0x10;
        uVar5 = pdb_140f5ddb0(param_4,0x10,arg0);
        goto LAB_140ca7b3c;
      }
    }
  }
  else if (param_3 >> 0x3d == 0) {
    uVar7 = (param_3 * 8) / 7 - 1;
    lVar8 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar7 = (0xffffffffffffffffU >> (~(byte)lVar8 & 0x3f)) + 1;
    goto LAB_140ca7afd;
  }
  uVar5 = pdb_140f5dd80(param_4);
LAB_140ca7b3c:
  param_1[1] = uVar5;
  param_1[2] = param_2;
  *param_1 = 0;
  return;
}

