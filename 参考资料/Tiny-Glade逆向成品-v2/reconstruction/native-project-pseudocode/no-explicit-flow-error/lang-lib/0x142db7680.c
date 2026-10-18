// VA 0x142db7680, PDB extent 126 bytes
// lang_lib::load_locale_impl::closure$1
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/lang-lib/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: lang_lib::load_locale_impl::closure$1
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/lang-lib/src/lib.rs
   Extent: 126 */

void pdb_142db7680(undefined8 param_1)

{
  undefined *puStack_38;
  code *pcStack_30;
  undefined8 *puStack_28;
  code *pcStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  uStack_10 = 0xfffffffffffffffe;
  puStack_38 = &UNK_1431f2870;
  pcStack_30 = pdb_1402ed420;
  puStack_28 = &uStack_18;
  pcStack_20 = pdb_140f36c20;
  uStack_18 = param_1;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_1431f28d5,&puStack_38,&UNK_1431f2900);
}

