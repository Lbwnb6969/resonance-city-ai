// VA 0x140c2e450, PDB extent 327 bytes
// png::text_metadata::impl$1::encode<ref_mut$<ref_mut$<std::io::cursor::Cursor<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> > > > > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   png::text_metadata::impl$1::encode<ref_mut$<ref_mut$<std::io::cursor::Cursor<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   > > > > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 327 */

undefined8 * pdb_140c2e450(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  char cVar2;
  ulonglong uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined7 uStack_4f;
  ulonglong uStack_48;
  undefined1 uStack_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  pdb_140db48a0(&uStack_60,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  if (SBORROW8(0,uStack_60)) {
    *param_1 = 3;
    *(undefined1 *)(param_1 + 1) = 0xc;
    *(undefined1 *)((longlong)param_1 + 9) = uStack_58;
    return param_1;
  }
  uStack_37 = uStack_4f;
  uStack_3f = uStack_57;
  uStack_38 = uStack_50;
  uStack_48 = uStack_60;
  uStack_40 = uStack_58;
  uVar1 = CONCAT71(uStack_4f,uStack_50);
  cVar2 = '\x01';
  if (0xffffffffffffffb0 < uVar1 - 0x50) {
    if (uVar1 == uStack_60) {
      pdb_142dc7d20(&uStack_48);
    }
    *(undefined1 *)(CONCAT71(uStack_3f,uStack_40) + uVar1) = 0;
    uStack_38 = (undefined1)(uVar1 + 1);
    uStack_37 = (undefined7)(uVar1 + 1 >> 8);
    cVar2 = pdb_140db4930(&uStack_48,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28)
                         );
    if (cVar2 == '\x03') {
      pdb_141709900(param_1,param_3,0x74584574,CONCAT71(uStack_3f,uStack_40),
                    CONCAT71(uStack_37,uStack_38));
      goto joined_r0x000140c2e53f;
    }
  }
  *param_1 = 3;
  *(undefined1 *)(param_1 + 1) = 0xc;
  *(char *)((longlong)param_1 + 9) = cVar2;
joined_r0x000140c2e53f:
  if (uStack_48 != 0) {
    pub_1406abac0((byte *)CONCAT71(uStack_3f,uStack_40),uStack_48,1);
  }
  return param_1;
}

