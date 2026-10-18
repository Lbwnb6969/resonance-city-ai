// VA 0x1424b60d0, PDB extent 234 bytes
// system_wall_constructor::construct_platform_stairs::emit_wooden_stair_pieces::emit_wooden_stair_pieces
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_platform_stairs/emit_wooden_stair_pieces.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_wall_constructor::construct_platform_stairs::emit_wooden_stair_pieces::emit_wooden_stair_pieces
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_platform_stairs/emit_wooden_stair_pieces.rs
   Extent: 234 */

void pdb_1424b60d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  pdb_1424b4d90(&uStack_68,param_1,param_2);
  if (!SBORROW8(0,CONCAT44(uStack_64,uStack_68))) {
    uStack_38 = uStack_58;
    uStack_34 = uStack_54;
    uStack_30 = uStack_50;
    uStack_2c = uStack_4c;
    uStack_48 = uStack_68;
    uStack_44 = uStack_64;
    uStack_40 = uStack_60;
    uStack_3c = uStack_5c;
    pdb_1424b5270(param_1,&uStack_48,param_3,param_4,param_5,param_6,param_7,param_8);
    if (CONCAT44(uStack_44,uStack_48) != 0) {
      pub_1406abac0((byte *)CONCAT44(uStack_3c,uStack_40),CONCAT44(uStack_44,uStack_48) << 4,4);
    }
  }
  return;
}

