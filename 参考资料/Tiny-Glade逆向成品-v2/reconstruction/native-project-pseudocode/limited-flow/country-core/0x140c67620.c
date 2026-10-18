// VA 0x140c67620, PDB extent 2926 bytes
// country_core::resources::walls::decorator_outline::DecoratorOutline::display_with_opacity
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_outline.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::decorator_outline::DecoratorOutline::display_with_opacity
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_outline.rs
   Extent: 2926 */

void pdb_140c67620(uint *param_1,longlong param_2,undefined8 param_3,uint param_4,undefined8 param_5
                  ,char param_6)

{
  ulonglong auStack_160 [3];
  undefined1 auStack_148 [32];
  ulonglong *puStack_128;
  code *pcStack_120;
  undefined8 *puStack_118;
  code *pcStack_110;
  undefined1 *puStack_108;
  code *pcStack_100;
  undefined1 *puStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  float fStack_e0;
  undefined8 uStack_d0;
  
  uStack_d0 = 0xfffffffffffffffe;
  uStack_e8 = *(undefined8 *)(param_2 + 0x30);
  fStack_e0 = *(float *)(param_2 + 0x38);
  if (param_6 != '\0') {
    uStack_e8 = CONCAT44(*(float *)(param_2 + 0x34) + *(float *)(param_2 + 0x24) * _UNK_143070284,
                         *(float *)(param_2 + 0x30) + *(float *)(param_2 + 0x20) * _DAT_143070280);
    fStack_e0 = fStack_e0 + *(float *)(param_2 + 0x28) * _DAT_1430151b0;
  }
  auStack_160[0] = (ulonglong)param_4;
  puStack_128 = auStack_160;
  pcStack_120 = pdb_140090b90;
  puStack_118 = &uStack_e8;
  pcStack_110 = pdb_140f33d80;
  puStack_108 = (undefined1 *)&param_5;
  pcStack_100 = pdb_140c6c150;
  puStack_f8 = &stack0x00000040;
  pcStack_f0 = pdb_140f70fc0;
  pdb_140f60760(auStack_148,&UNK_143070ce0,&puStack_128);
                    /* WARNING: Could not recover jumptable at 0x000140c678d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_14307236c + *(int *)(&UNK_14307236c + (ulonglong)*param_1 * 4)))();
  return;
}

