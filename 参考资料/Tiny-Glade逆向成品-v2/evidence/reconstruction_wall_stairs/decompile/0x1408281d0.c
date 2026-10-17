// Matched PDB: system_wall_constructor::construct_playermade_stairs::wooden_supports::curved_brace_params_from_positions
// VA 0x1408281d0, PDB extent 250 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB:
   system_wall_constructor::construct_playermade_stairs::wooden_supports::curved_brace_params_from_positions
   Extent: 250 bytes. No whole-program auto-analysis. */

undefined8 * pdb_1408281d0(undefined8 *param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 uStack_58;
  ulonglong uStack_50;
  undefined8 uStack_48;
  ulonglong uStack_40;
  longlong lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  if (param_3 < 2) {
    *param_1 = 0x8000000000000000;
  }
  else {
    uStack_48 = 0;
    uStack_58 = param_2;
    uStack_50 = param_3;
    uStack_40 = param_3;
    pdb_1413efab0(&lStack_38,&uStack_58);
    uStack_20 = uStack_30;
    pdb_1407fbce0(param_1,uStack_30,uStack_28,0x13,0x3e28f5c3,0x3de353f8,0x3d343958,0);
    if (lStack_38 != 0) {
      func_0x0001406abac0(uStack_20,lStack_38 * 0x18,4);
    }
  }
  return param_1;
}

