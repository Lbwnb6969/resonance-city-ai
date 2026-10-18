// VA 0x140c683d0, PDB extent 390 bytes
// country_core::resources::walls::decorator_outline::impl$1::display_with_opacity::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_outline.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::decorator_outline::impl$1::display_with_opacity::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_outline.rs
   Extent: 390 */

undefined8 *
pdb_140c683d0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  float fVar1;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined2 uStack_90;
  ulonglong uStack_8c;
  undefined8 uStack_84;
  undefined4 uStack_7c;
  float fStack_78;
  undefined2 uStack_74;
  undefined1 uStack_72;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  byte *pbStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pbStack_38 = pub_1406abab0(8,8);
  if (pbStack_38 != (byte *)0x0) {
    pdb_140f60be0(&uStack_60,param_2 + 2);
    uStack_e0 = uStack_50;
    uStack_f0 = uStack_60;
    uStack_e8 = uStack_58;
    uStack_84 = param_2[5];
    uStack_7c = *(undefined4 *)(param_2 + 6);
    uStack_c8 = *param_2;
    uStack_c0 = param_2[1];
    fVar1 = 0.0;
    if (0.0 <= *(float *)((longlong)param_2 + 0x34)) {
      fVar1 = *(float *)((longlong)param_2 + 0x34);
    }
    fStack_78 = _DAT_142e36f28;
    if (fVar1 <= _DAT_142e36f28) {
      fStack_78 = fVar1;
    }
    uStack_f8 = 0x8000000000000000;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0x4040000000000000;
    uStack_98 = 1;
    uStack_90 = 0x100;
    uStack_8c = (ulonglong)(uint)_DAT_142e36f28;
    uStack_74 = 0;
    uStack_72 = 0;
    pdb_1409bba50(&uStack_60,&uStack_f8,param_3,param_4,param_5);
    *(undefined8 *)pbStack_38 = uStack_60;
    *param_1 = 1;
    param_1[1] = pbStack_38;
    param_1[2] = 1;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,8);
}

