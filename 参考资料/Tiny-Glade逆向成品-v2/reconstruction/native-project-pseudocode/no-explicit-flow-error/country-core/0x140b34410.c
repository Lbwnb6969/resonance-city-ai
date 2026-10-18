// VA 0x140b34410, PDB extent 330 bytes
// country_core::resources::gpu_lut::impl$0::build::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/gpu_lut.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::gpu_lut::impl$0::build::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/gpu_lut.rs
   Extent: 330 */

longlong pdb_140b34410(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 auStack_158 [136];
  undefined1 auStack_d0 [136];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  longlong *plStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  uVar5 = 0;
  plStack_30 = (longlong *)pdb_140a2e6e0(param_3,0,&UNK_143057eb8);
  lVar4 = *param_2;
  puVar1 = (undefined8 *)param_2[1];
  uStack_48 = 0;
  uStack_40 = 8;
  uStack_38 = 0;
  uVar3 = pdb_14177be60(*(undefined8 *)(lVar4 + 0x208),&UNK_143331eeb,0x23,&uStack_48);
  pdb_140e291c0(auStack_d0,&UNK_143331eeb,0x23,uVar3,lVar4);
  pdb_141789d60(auStack_158,auStack_d0,uVar5);
  pub_142e32760(auStack_d0,auStack_158,0x88);
  (**(code **)(puVar1[1] + 0x28))(*puVar1,auStack_d0);
  plVar2 = plStack_30;
  pdb_140e9a350(plStack_30);
  pdb_140e9a350();
  LOCK();
  lVar4 = *plVar2;
  bVar6 = lVar4 == 8;
  if (bVar6) {
    *plVar2 = 0;
    lVar4 = 8;
  }
  UNLOCK();
  if (!bVar6) {
    lVar4 = pdb_142dbca40(plVar2,0);
  }
  return lVar4;
}

