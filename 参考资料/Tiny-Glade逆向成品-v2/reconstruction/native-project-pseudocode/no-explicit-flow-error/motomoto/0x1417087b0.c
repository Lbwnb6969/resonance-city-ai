// VA 0x1417087b0, PDB extent 400 bytes
// motomoto::Writer::add_chunk<std::io::cursor::Cursor<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> > >,ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/motomoto/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   motomoto::Writer::add_chunk<std::io::cursor::Cursor<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   > >,ref$<str$> >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/motomoto/src/lib.rs
   Extent: 400 */

undefined8 *
pdb_1417087b0(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_2[2];
  param_2[2] = 0;
  if (lVar1 != 0) {
    param_1[1] = lVar1;
    *param_1 = 0;
    return param_1;
  }
  uVar2 = param_2[1];
  uStack_40 = param_3;
  uStack_38 = param_4;
  uVar4 = pdb_142565ab0(&uStack_40);
  puVar3 = (ulonglong *)*param_2;
  uVar7 = uVar2 + 8;
  uVar5 = 0xffffffffffffffff;
  if (uVar2 < 0xfffffffffffffff8) {
    uVar5 = uVar7;
  }
  if (*puVar3 < uVar5) {
    uVar6 = puVar3[2];
    if (*puVar3 - uVar6 < uVar5 - uVar6) {
      pdb_142d7f1b0(puVar3,uVar6,uVar5 - uVar6,1,1);
      uVar5 = puVar3[2];
      goto joined_r0x000141708839;
    }
  }
  uVar5 = puVar3[2];
joined_r0x000141708839:
  if (uVar5 < uVar2) {
    pub_142e32780(uVar5 + puVar3[1],0);
    puVar3[2] = uVar2;
  }
  *(undefined8 *)(puVar3[1] + uVar2) = uVar4;
  uVar5 = puVar3[2];
  if (puVar3[2] < uVar7) {
    puVar3[2] = uVar7;
    uVar5 = uVar7;
  }
  param_2[1] = uVar7;
  uVar6 = 0xffffffffffffffff;
  if (uVar7 < 0xfffffffffffffff8) {
    uVar6 = uVar2 + 0x10;
  }
  if ((*puVar3 < uVar6) && (*puVar3 - uVar5 < uVar6 - uVar5)) {
    pdb_142d7f1b0(puVar3,uVar5,uVar6 - uVar5,1,1);
    uVar5 = puVar3[2];
  }
  if (uVar5 < uVar7) {
    pub_142e32780(uVar5 + puVar3[1],0);
    puVar3[2] = uVar7;
  }
  *(undefined8 *)(puVar3[1] + 8 + uVar2) = 0;
  uVar5 = uVar2 + 0x10;
  if (puVar3[2] < uVar5) {
    puVar3[2] = uVar5;
  }
  param_2[1] = uVar5;
  *param_1 = param_2;
  param_1[1] = param_2 + 2;
  param_1[2] = uVar2;
  return param_1;
}

