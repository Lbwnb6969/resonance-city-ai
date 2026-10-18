// VA 0x140dc6060, PDB extent 550 bytes
// lang_lib::load_last_used_locale
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/lang-lib/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: lang_lib::load_last_used_locale
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/lang-lib/src/lib.rs
   Extent: 550 */

undefined8 pdb_140dc6060(void)

{
  code *pcVar1;
  undefined8 uVar2;
  ulonglong uStack_70;
  byte *pbStack_68;
  undefined8 uStack_60;
  ulonglong uStack_58;
  byte *pbStack_50;
  undefined8 uStack_48;
  byte *pbStack_38;
  byte *pbStack_30;
  byte *pbStack_28;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  pdb_140dc7240(&uStack_58);
  if (SBORROW8(0,uStack_58)) {
    pdb_140f36c40(&pbStack_50);
  }
  else {
    pbStack_28 = (byte *)uStack_58;
    pbStack_38 = pbStack_50;
    pdb_140f3e9e0(&uStack_58,pbStack_50,uStack_48,&UNK_1431f2847,0x10);
    pbStack_30 = pbStack_50;
    pdb_140f55d10(&uStack_70,pbStack_50,uStack_48);
    if (uStack_58 != 0) {
      pub_1406abac0(pbStack_30,uStack_58,1);
    }
    if (!SBORROW8(0,uStack_70)) {
      pbStack_30 = (byte *)uStack_70;
      if (pbStack_28 != (byte *)0x0) {
        pub_1406abac0(pbStack_38,(ulonglong)pbStack_28,1);
      }
      goto LAB_140dc618d;
    }
    pdb_1404b38e0(&pbStack_68);
    if (pbStack_28 != (byte *)0x0) {
      pub_1406abac0(pbStack_38,(ulonglong)pbStack_28,1);
    }
  }
  pdb_14007ee60();
  pbStack_68 = pub_1406abab0(5,1);
  if (pbStack_68 == (byte *)0x0) {
    pdb_142dc7e2a(1,5);
    pcVar1 = (code *)swi(3);
    uVar2 = (*pcVar1)();
    return uVar2;
  }
  pbStack_30 = (byte *)0x5;
  pbStack_68[4] = 0x53;
  pbStack_68[0] = 0x65;
  pbStack_68[1] = 0x6e;
  pbStack_68[2] = 0x2d;
  pbStack_68[3] = 0x55;
  uStack_60 = 5;
LAB_140dc618d:
  pbStack_28 = pbStack_68;
  uVar2 = pdb_140dc5520(pbStack_68,uStack_60);
  if (pbStack_30 != (byte *)0x0) {
    pub_1406abac0(pbStack_28,(ulonglong)pbStack_30,1);
  }
  return uVar2;
}

