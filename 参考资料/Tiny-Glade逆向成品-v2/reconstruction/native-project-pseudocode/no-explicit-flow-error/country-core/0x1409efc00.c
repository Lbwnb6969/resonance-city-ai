// VA 0x1409efc00, PDB extent 555 bytes
// country_core::systems::collision::world::RaycastMeshData::new_convex
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::collision::world::RaycastMeshData::new_convex
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 555 */

undefined8 * pdb_1409efc00(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte *pbVar3;
  longlong alStack_1e8 [24];
  longlong lStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  longlong lStack_110;
  byte *pbStack_108;
  undefined8 uStack_100;
  longlong lStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  byte *pbStack_40;
  longlong lStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  lStack_128 = param_2;
  uStack_120 = param_3;
  uVar2 = pdb_140bbb700(&lStack_128);
  pdb_141b3c2d0(&lStack_128,param_2,param_3);
  if (!SBORROW8(0,lStack_128)) {
    uStack_50 = (undefined4)uStack_120;
    uStack_4c = uStack_120._4_4_;
    uStack_48 = uStack_118;
    uStack_44 = uStack_114;
    lStack_38 = lStack_110;
    lStack_58 = lStack_128;
    pbStack_40 = pbStack_108;
    pdb_140cdfe00(alStack_1e8,&lStack_58,pbStack_108,uStack_100);
    if (lStack_38 != 0) {
      pub_1406abac0(pbStack_40,lStack_38 * 0xc,4);
    }
    if (!SBORROW8(0,alStack_1e8[0])) {
      lStack_128 = 1;
      uStack_120 = 1;
      pub_142e32760(&uStack_118,alStack_1e8,0xc0);
      pdb_14007ee60();
      pbVar3 = pub_1406abab0(0xd0,8);
      if (pbVar3 != (byte *)0x0) {
        pub_142e32760(pbVar3,&lStack_128,0xd0);
        *param_1 = 4;
        param_1[1] = 0;
        param_1[2] = 4;
        param_1[3] = 0;
        param_1[4] = pbVar3;
        param_1[5] = &UNK_143033540;
        param_1[6] = 0;
        param_1[8] = 0;
        uVar1 = _UNK_143033418;
        param_1[10] = _DAT_143033410;
        param_1[0xb] = uVar1;
        uVar1 = _UNK_143033428;
        param_1[0xc] = _DAT_143033420;
        param_1[0xd] = uVar1;
        param_1[0xe] = uVar2;
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0xd0);
    }
  }
  *param_1 = 0;
  return param_1;
}

