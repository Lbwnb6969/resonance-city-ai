// VA 0x142d84860, PDB extent 213 bytes
// toolbar::mei::config::impl$20::template_with_id::closure$0<ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   toolbar::mei::config::impl$20::template_with_id::closure$0<ref$<str$> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
   Extent: 213 */

void pdb_142d84860(longlong param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined1 auStack_60 [24];
  undefined1 (*pauStack_48) [16];
  undefined1 (*pauStack_40) [16];
  undefined1 *puStack_38;
  code *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  pauStack_48 = *(undefined1 (**) [16])(param_1 + 0x240);
  puStack_38 = *pauStack_48 + *(longlong *)(param_1 + 0x248) + 1;
  auVar1 = *pauStack_48;
  uStack_28 = *(undefined8 *)(param_1 + 600);
  pauStack_40 = pauStack_48 + 1;
  pcStack_30 = (code *)CONCAT62(pcStack_30._2_6_,
                                ~((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar1[0xf] >> 7) << 0xf));
  pdb_14017d200(auStack_60,&pauStack_48);
  pauStack_40 = (undefined1 (*) [16])pdb_1402ed420;
  pcStack_30 = pdb_140174860;
  pauStack_48 = param_2;
  puStack_38 = auStack_60;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_142f3bc51,&pauStack_48,&UNK_142f3bc78);
}

