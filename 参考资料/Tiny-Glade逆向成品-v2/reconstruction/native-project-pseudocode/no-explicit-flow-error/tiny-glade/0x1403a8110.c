// VA 0x1403a8110, PDB extent 325 bytes
// tiny_glade::run_game::impl$0::run_in_parallel<ref_mut$<typed_index_collections::slice::TiSlice<rhapsody::rg::resource_info::NodeIndex,rhapsody::rg::recorder::RecordedNode> >,tuple$<rhapsody::rg::compiled::impl$3::record_batch::RecordedNodeRange,alloc::vec::Vec<rhapsody::rg::executor::NodePgoDuration,alloc::alloc::Global> >,rhapsody::rg::compiled::impl$3::record_batch::closure_env$2<tiny_glade::run_game::GraphExecutorBevy> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/run_game.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   tiny_glade::run_game::impl$0::run_in_parallel<ref_mut$<typed_index_collections::slice::TiSlice<rhapsody::rg::resource_info::NodeIndex,rhapsody::rg::recorder::RecordedNode>
   >,tuple$<rhapsody::rg::compiled::impl$3::record_batch::RecordedNodeRange,alloc::vec::Vec<rhapsody::rg::executor::NodePgoDuration,alloc::alloc::Global>
   >,rhapsody::rg::compiled::impl$3::record_batch::closure_env$2<tiny_glade::run_game::GraphExecutorBevy>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/run_game.rs
   Extent: 325 */

longlong *
pdb_1403a8110(longlong *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
             undefined8 param_5)

{
  byte *arg0;
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  byte *pbStack_98;
  longlong lStack_90;
  undefined8 *puStack_88;
  undefined8 ***pppuStack_80;
  longlong lStack_78;
  longlong lStack_70;
  longlong lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 **ppuStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  longlong *plStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  uStack_58 = param_5;
  uStack_60 = param_4;
  plStack_38 = param_3;
  uVar3 = pdb_140f2cc80();
  uStack_40 = 1;
  puStack_48 = &uStack_60;
  arg0 = (byte *)plStack_38[1];
  lVar1 = plStack_38[2];
  ppuStack_50 = &puStack_48;
  plVar4 = (longlong *)pdb_140172620(0);
  if (plVar4 != (longlong *)0x0) {
    puStack_88 = &uStack_40;
    pppuStack_80 = &ppuStack_50;
    pbStack_98 = arg0;
    lStack_90 = lVar1;
    pdb_14034e2a0(&lStack_78,uVar3,1,*plVar4 + 0x10,*plVar4 + 0x10,&pbStack_98);
    if (!SBORROW8(0,lStack_78)) {
      param_1[2] = lStack_68;
      *param_1 = lStack_78;
      param_1[1] = lStack_70;
      if (*plStack_38 != 0) {
        pub_1406abac0(arg0,*plStack_38 << 4,8);
      }
      return param_1;
    }
  }
  pdb_142dc7890(&UNK_142f3dc40);
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

