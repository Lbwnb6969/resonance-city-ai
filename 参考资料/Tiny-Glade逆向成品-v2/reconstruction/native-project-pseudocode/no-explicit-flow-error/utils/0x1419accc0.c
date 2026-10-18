// VA 0x1419accc0, PDB extent 559 bytes
// utils::curve::Curve::reverse<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   utils::curve::Curve::reverse<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 559 */

void pdb_1419accc0(ulonglong *param_1)

{
  byte *arg0;
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uStack_a8;
  byte *pbStack_a0;
  ulonglong uStack_98;
  ulonglong uStack_90;
  ulonglong uStack_88;
  ulonglong uStack_80;
  ulonglong uStack_78;
  ulonglong uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulonglong uStack_50;
  ulonglong uStack_48;
  ulonglong uStack_40;
  ulonglong uStack_38;
  
  arg0 = (byte *)param_1[1];
  uVar1 = param_1[2];
  uVar3 = uVar1 >> 1;
  if (uVar3 != 0) {
    if (uVar3 == 1) {
      uVar2 = 0;
    }
    else {
      lVar4 = uVar1 - 1;
      uVar2 = 0;
      do {
        uVar5 = *(undefined8 *)(arg0 + uVar2 * 8);
        *(undefined8 *)(arg0 + uVar2 * 8) = *(undefined8 *)(arg0 + lVar4 * 8);
        *(undefined8 *)(arg0 + lVar4 * 8) = uVar5;
        uVar5 = *(undefined8 *)(arg0 + uVar2 * 8 + 8);
        *(undefined8 *)(arg0 + uVar2 * 8 + 8) =
             *(undefined8 *)(arg0 + (uVar2 ^ 0x1ffffffffffffffe) * 8 + uVar1 * 8);
        *(undefined8 *)(arg0 + (uVar2 ^ 0x1ffffffffffffffe) * 8 + uVar1 * 8) = uVar5;
        uVar2 = uVar2 + 2;
        lVar4 = lVar4 + -2;
      } while ((uVar3 & 0xfffffffffffffffe) != uVar2);
      if ((uVar3 & 1) == 0) goto LAB_1419acd68;
    }
    uVar5 = *(undefined8 *)(arg0 + uVar2 * 8);
    *(undefined8 *)(arg0 + uVar2 * 8) = *(undefined8 *)(arg0 + ~uVar2 * 8 + uVar1 * 8);
    *(undefined8 *)(arg0 + ~uVar2 * 8 + uVar1 * 8) = uVar5;
  }
LAB_1419acd68:
  uVar3 = uVar1 * 8;
  if (uVar3 < 0x7ffffffffffffffd && uVar1 >> 0x3d == 0) goto LAB_1419acd9c;
  uVar5 = 0;
  while( true ) {
    pdb_142dc7e2a(uVar5,uVar3);
LAB_1419acd9c:
    if (uVar3 == 0) break;
    pdb_14007ee60();
    uVar5 = 4;
    pbStack_a0 = pub_1406abab0(uVar3,4);
    if (pbStack_a0 != (byte *)0x0) {
      uVar2 = uVar1;
      if (uVar1 != 0) {
LAB_1419acdcd:
        pub_142e32760(pbStack_a0,arg0,uVar3);
      }
LAB_1419acddb:
      uStack_a8 = uVar2;
      uStack_98 = uVar1;
      pdb_140080c90(&uStack_68,&uStack_a8,0);
      if (SBORROW8(0,uStack_68)) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_14335e278,0x2b,&uStack_a8,&UNK_14335e258,&UNK_14335e8e0);
      }
      uStack_78 = uStack_38;
      pbStack_a0 = (byte *)CONCAT44(uStack_5c,uStack_60);
      uStack_98 = CONCAT44(uStack_54,uStack_58);
      uStack_88 = uStack_48;
      uStack_80 = uStack_40;
      uStack_90 = uStack_50;
      uStack_a8 = uStack_68;
      if (*param_1 != 0) {
        pub_1406abac0(arg0,*param_1 << 3,4);
      }
      if (param_1[3] != 0) {
        pub_1406abac0((byte *)param_1[4],param_1[3] << 2,4);
      }
      param_1[6] = uStack_78;
      param_1[4] = uStack_88;
      param_1[5] = uStack_80;
      param_1[2] = uStack_98;
      param_1[3] = uStack_90;
      *param_1 = uStack_a8;
      param_1[1] = (ulonglong)pbStack_a0;
      return;
    }
  }
  pbStack_a0 = (byte *)0x4;
  uVar2 = 0;
  if (uVar1 == 0) goto LAB_1419acddb;
  goto LAB_1419acdcd;
}

