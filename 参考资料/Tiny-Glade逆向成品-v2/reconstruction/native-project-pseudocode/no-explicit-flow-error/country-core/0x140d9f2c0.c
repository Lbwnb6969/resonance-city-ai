// VA 0x140d9f2c0, PDB extent 404 bytes
// png::encoder::write_chunk<ref_mut$<ref_mut$<ref_mut$<std::io::buffered::bufwriter::BufWriter<std::fs::File> > > > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   png::encoder::write_chunk<ref_mut$<ref_mut$<ref_mut$<std::io::buffered::bufwriter::BufWriter<std::fs::File>
   > > > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 404 */

undefined8 *
pdb_140d9f2c0(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             ulonglong param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  
  uVar3 = (uint)param_5;
  uStack_48 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  plVar1 = (longlong *)*param_2;
  plVar2 = (longlong *)*plVar1;
  lVar4 = plVar2[2];
  uStack_50 = param_3;
  if ((ulonglong)(*plVar2 - lVar4) < 5) {
    lVar4 = pdb_142db7090(plVar2,&uStack_48,4);
    if (lVar4 == 0) goto LAB_140d9f313;
LAB_140d9f444:
    *param_1 = 2;
    param_1[1] = lVar4;
  }
  else {
    *(uint *)(plVar2[1] + lVar4) = uStack_48;
    plVar2[2] = lVar4 + 4;
LAB_140d9f313:
    plVar2 = (longlong *)*plVar1;
    lVar4 = plVar2[2];
    if ((ulonglong)(*plVar2 - lVar4) < 5) {
      lVar4 = pdb_142db7090(plVar2,&uStack_50,4);
      if (lVar4 != 0) goto LAB_140d9f444;
    }
    else {
      *(undefined4 *)(plVar2[1] + lVar4) = param_3;
      plVar2[2] = lVar4 + 4;
    }
    plVar2 = (longlong *)*plVar1;
    lVar4 = plVar2[2];
    if (param_5 < (ulonglong)(*plVar2 - lVar4)) {
      pub_142e32760(plVar2[1] + lVar4,param_4,param_5);
      plVar2[2] = lVar4 + param_5;
    }
    else {
      lVar4 = pdb_142db7090(plVar2,param_4,param_5);
      if (lVar4 != 0) goto LAB_140d9f444;
    }
    pdb_140dbfa40(&uStack_48);
    pdb_140dbfd20(&uStack_48,&uStack_50,4);
    pdb_140dbfd20(&uStack_48,param_4,param_5);
    uStack_4c = uStack_44 >> 0x18 | (uStack_44 & 0xff0000) >> 8 | (uStack_44 & 0xff00) << 8 |
                uStack_44 << 0x18;
    plVar1 = (longlong *)*plVar1;
    lVar4 = plVar1[2];
    if ((ulonglong)(*plVar1 - lVar4) < 5) {
      lVar4 = pdb_142db7090(plVar1,&uStack_4c,4);
      if (lVar4 != 0) goto LAB_140d9f444;
    }
    else {
      *(uint *)(plVar1[1] + lVar4) = uStack_4c;
      plVar1[2] = lVar4 + 4;
    }
    *param_1 = 6;
  }
  return param_1;
}

