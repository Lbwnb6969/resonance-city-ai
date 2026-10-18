// VA 0x14100bd40, PDB extent 910 bytes
// usdl_sys::backend::load_library<ref$<ref$<str$> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl-sys/src/backend.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: usdl_sys::backend::load_library<ref$<ref$<str$> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/usdl-sys/src/backend.rs
   Extent: 910 */

ulonglong * pdb_14100bd40(ulonglong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_478 [280];
  longlong lStack_360;
  byte *pbStack_358;
  ulonglong uStack_350;
  ulonglong uStack_348;
  ulonglong uStack_340;
  ulonglong uStack_338;
  ulonglong uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined1 auStack_318 [280];
  longlong lStack_200;
  byte *pbStack_1f8;
  ulonglong uStack_1f0;
  ulonglong uStack_1e8;
  ulonglong uStack_1e0;
  ulonglong uStack_1d8;
  ulonglong uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 auStack_1b8 [272];
  undefined1 auStack_a8 [8];
  ulonglong uStack_a0;
  byte *pbStack_98;
  ulonglong uStack_90;
  ulonglong uStack_88;
  ulonglong uStack_80;
  ulonglong uStack_78;
  ulonglong uStack_70;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  if ((_DAT_143ca3368 != 0) && (_DAT_143ca3378 != 0)) {
    pdb_140f60120(&uStack_a0,*param_2,param_2[1]);
    uStack_61 = 1;
    pdb_1406d1d70(&lStack_200,pbStack_98,uStack_90);
    if (lStack_200 == 0) {
      uVar2 = uStack_1f0;
      if (pbStack_1f8 != (byte *)0x8000000000000011) {
        uStack_88 = uStack_1e8;
        uVar2 = uStack_1e0;
        uStack_90 = uStack_1f0;
        uStack_1e8 = uStack_1d8;
        uStack_1e0 = uStack_1d0;
        if (uStack_a0 == 0) {
          uStack_a0 = 0x8000000000000002;
          pbStack_98 = pbStack_1f8;
        }
        else {
          pub_1406abac0(pbStack_98,uStack_a0,1);
          uStack_a0 = 0x8000000000000002;
          pbStack_98 = pbStack_1f8;
        }
      }
      *param_1 = uStack_a0;
      param_1[1] = (ulonglong)pbStack_98;
      param_1[2] = uStack_90;
      param_1[3] = uStack_88;
      param_1[4] = uVar2;
      param_1[5] = uStack_1e8;
      param_1[6] = uStack_1e0;
      param_1[7] = uStack_1d8;
      return param_1;
    }
    uStack_80 = uStack_1d8;
    uStack_70 = uStack_1e0;
    uStack_78 = uStack_1d0;
    pub_142e32760(auStack_478,auStack_1b8,0x118);
    if (uStack_a0 != 0) {
      pub_1406abac0(pbStack_98,uStack_a0,1);
    }
    pub_142e32760(auStack_318,auStack_478,0x118);
    lStack_360 = lStack_200;
    pbStack_358 = pbStack_1f8;
    uStack_350 = uStack_1f0;
    uStack_348 = uStack_1e8;
    uStack_340 = uStack_70;
    uStack_338 = uStack_80;
    uStack_330 = uStack_78;
    uStack_328 = uStack_1c8;
    uStack_320 = uStack_1c0;
    if (_DAT_143ca3368 != 0) {
      pdb_142dc9717(0x143ca3208,&lStack_360);
    }
    lVar1 = lStack_360;
    if (lStack_360 == 0) {
      uVar2 = 0x8000000000000004;
      goto LAB_14100bf15;
    }
    pub_142e32760(&pbStack_1f8,&pbStack_358,0x158);
    lStack_200 = lVar1;
    uStack_61 = 0;
    pdb_140eac380(auStack_a8);
  }
  uVar2 = 0x8000000000000000;
LAB_14100bf15:
  *param_1 = uVar2;
  return param_1;
}

