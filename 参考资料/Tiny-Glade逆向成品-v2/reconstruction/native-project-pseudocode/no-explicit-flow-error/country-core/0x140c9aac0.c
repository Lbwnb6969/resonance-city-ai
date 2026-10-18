// VA 0x140c9aac0, PDB extent 427 bytes
// country_core::systems::wooden_stair_support::resample_wooden_support_station_points
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wooden_stair_support.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wooden_stair_support::resample_wooden_support_station_points
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wooden_stair_support.rs
   Extent: 427 */

longlong * pdb_140c9aac0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  code *pcVar1;
  ulonglong arg0;
  longlong *plVar2;
  longlong lStack_d8;
  longlong lStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  byte *pbStack_b8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_88;
  undefined4 uStack_84;
  byte *pbStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  longlong lStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  byte *pbStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  if (param_3 == 0) {
    uStack_68 = 0;
    uStack_60 = (byte *)0x4;
    lStack_58 = 0;
  }
  else {
    arg0 = param_3 * 0xc;
    pdb_14007ee60();
    uStack_60 = pub_1406abab0(arg0,4);
    if (uStack_60 == (byte *)0x0) {
      pdb_142dc7e2a(4,arg0);
      pcVar1 = (code *)swi(3);
      plVar2 = (longlong *)(*pcVar1)();
      return plVar2;
    }
    uStack_68 = param_3;
    pub_142e32760(uStack_60,param_2,arg0);
    lStack_58 = param_3;
  }
  pdb_14148c570(&uStack_a0,&uStack_68,0);
  if (!SBORROW8(0,CONCAT44(uStack_9c,uStack_a0))) {
    uStack_38 = uStack_70;
    pbStack_48 = pbStack_80;
    uStack_40 = uStack_78;
    uStack_50 = uStack_88;
    uStack_4c = uStack_84;
    uStack_68 = CONCAT44(uStack_9c,uStack_a0);
    uStack_60 = (byte *)CONCAT44(uStack_94,uStack_98);
    pdb_1419a7ea0(&lStack_d8,&uStack_68,_DAT_142e37830,1);
    if (uStack_68 != 0) {
      pub_1406abac0(uStack_60,uStack_68 * 0xc,4);
    }
    if (CONCAT44(uStack_4c,uStack_50) != 0) {
      pub_1406abac0(pbStack_48,CONCAT44(uStack_4c,uStack_50) << 2,4);
    }
    if (!SBORROW8(0,lStack_d8)) {
      param_1[1] = lStack_d0;
      param_1[2] = lStack_c8;
      *param_1 = lStack_d8;
      if (lStack_c0 == 0) {
        return param_1;
      }
      pub_1406abac0(pbStack_b8,lStack_c0 << 2,4);
      return param_1;
    }
  }
  *param_1 = -0x8000000000000000;
  return param_1;
}

