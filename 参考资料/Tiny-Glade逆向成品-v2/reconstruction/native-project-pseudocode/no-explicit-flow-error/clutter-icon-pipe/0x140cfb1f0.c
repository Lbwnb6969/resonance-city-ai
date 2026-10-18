// VA 0x140cfb1f0, PDB extent 384 bytes
// hashbrown::raw::RawTableInner::fallible_with_capacity<allocator_api2::stable::alloc::global::Global>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-icon-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   hashbrown::raw::RawTableInner::fallible_with_capacity<allocator_api2::stable::alloc::global::Global>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-icon-pipe/src/lib.rs
   Extent: 384 */

void pdb_140cfb1f0(undefined8 *param_1,ulonglong param_2,ulonglong param_3,char param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulonglong uVar3;
  ulonglong uVar4;
  byte *pbVar5;
  ulonglong unaff_RBX;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  if (param_3 < 8) {
    uVar6 = (ulonglong)((uint)param_3 & 4) + 4;
  }
  else {
    if (param_3 >> 0x3d != 0) {
      if (param_4 == '\0') {
        *param_1 = 0;
        param_1[1] = 0;
        return;
      }
      goto LAB_140cfb357;
    }
    uVar6 = (param_3 * 8) / 7 - 1;
    lVar8 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar6 = (0xffffffffffffffffU >> (~(byte)lVar8 & 0x3f)) + 1;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar6;
  uVar3 = SUB168(auVar1 * auVar2,0);
  if ((SUB168(auVar1 * auVar2,8) == 0) && (uVar3 < 0xfffffffffffffff1)) {
    uVar4 = uVar3 + 0xf & 0xfffffffffffffff0;
    uVar3 = uVar6 + 0x10;
    unaff_RBX = uVar4 + uVar3;
    if (unaff_RBX < 0x7ffffffffffffff1 && !CARRY8(uVar4,uVar3)) {
      if (unaff_RBX == 0) {
        pbVar5 = (byte *)0x10;
LAB_140cfb2fb:
        lVar8 = (uVar6 & 0xfffffffffffffff8) - (uVar6 >> 3);
        if (uVar6 < 9) {
          lVar8 = uVar6 - 1;
        }
        pub_142e32780(pbVar5 + uVar4,0xff,uVar3);
        *param_1 = pbVar5 + uVar4;
        param_1[1] = uVar6 - 1;
        param_1[2] = lVar8;
        param_1[3] = 0;
        return;
      }
      pdb_14007ee60();
      uVar7 = 0x10;
      pbVar5 = pub_1406abab0(unaff_RBX,0x10);
      if (pbVar5 != (byte *)0x0) goto LAB_140cfb2fb;
      if (param_4 != '\0') {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(0x10,unaff_RBX);
      }
      goto LAB_140cfb29b;
    }
  }
  if (param_4 != '\0') {
LAB_140cfb357:
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_143088a10,0x39,&UNK_143088a90);
  }
  uVar7 = 0;
LAB_140cfb29b:
  param_1[1] = uVar7;
  param_1[2] = unaff_RBX;
  *param_1 = 0;
  return;
}

