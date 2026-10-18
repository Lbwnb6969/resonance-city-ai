// VA 0x1417fa3e0, PDB extent 401 bytes
// turbosloth::store::impl$10::get_or_insert_with::closure$1<turbosloth::asset::impl$44::build::closure_env$0<clutter_pack_pipe::ClutterIconImage,turbosloth::asset::BuildContext> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   turbosloth::store::impl$10::get_or_insert_with::closure$1<turbosloth::asset::impl$44::build::closure_env$0<clutter_pack_pipe::ClutterIconImage,turbosloth::asset::BuildContext>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
   Extent: 401 */

void pdb_1417fa3e0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  byte *pbVar6;
  uint7 uStack_5f;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_20;
  
  plVar1 = (longlong *)*param_1;
  if (*plVar1 == 0) {
    *plVar1 = -1;
    lVar2 = plVar1[2];
    lVar3 = plVar1[3];
    lVar4 = plVar1[5];
    lVar5 = plVar1[4];
    plVar1[2] = 0;
    if (lVar2 != 0) {
      *plVar1 = 0;
      pdb_14007ee60();
      pbVar6 = pub_1406abab0(0x80,0x10);
      if (pbVar6 != (byte *)0x0) {
        pbVar6[0x70] = 0;
        pbVar6[0x71] = 0;
        pbVar6[0x72] = 0;
        pbVar6[0x73] = 0;
        pbVar6[0x74] = 0;
        pbVar6[0x75] = 0;
        pbVar6[0x76] = 0;
        pbVar6[0x77] = 0;
        *(undefined8 *)(pbVar6 + 0x78) = uStack_20;
        *(undefined8 *)(pbVar6 + 0x60) = uStack_38;
        *(undefined8 *)(pbVar6 + 0x68) = uStack_30;
        pbVar6[0x50] = 0;
        pbVar6[0x51] = 0;
        pbVar6[0x52] = 0;
        pbVar6[0x53] = 0;
        pbVar6[0x54] = 0;
        pbVar6[0x55] = 0;
        pbVar6[0x56] = 0;
        pbVar6[0x57] = 0;
        pbVar6[0x58] = 0;
        pbVar6[0x59] = 0;
        pbVar6[0x5a] = 0;
        pbVar6[0x5b] = 0;
        pbVar6[0x5c] = 0;
        pbVar6[0x5d] = 0;
        pbVar6[0x5e] = 0;
        pbVar6[0x5f] = 0x80;
        pbVar6[0x40] = 0;
        pbVar6[0x41] = 0;
        pbVar6[0x42] = 0;
        pbVar6[0x43] = 0;
        pbVar6[0x44] = 0;
        pbVar6[0x45] = 0;
        pbVar6[0x46] = 0;
        pbVar6[0x47] = 0;
        pbVar6[0x48] = 0x10;
        pbVar6[0x49] = 0;
        pbVar6[0x4a] = 0;
        pbVar6[0x4b] = 0;
        pbVar6[0x4c] = 0;
        pbVar6[0x4d] = 0;
        pbVar6[0x4e] = 0;
        pbVar6[0x4f] = 0;
        pbVar6[0x30] = 0;
        pbVar6[0x31] = 0;
        pbVar6[0x32] = 0;
        pbVar6[0x33] = 0;
        pbVar6[0x34] = 0;
        pbVar6[0x35] = 0;
        pbVar6[0x36] = 0;
        pbVar6[0x37] = 0;
        *(ulonglong *)(pbVar6 + 0x38) = (ulonglong)uStack_5f << 8;
        *(longlong *)(pbVar6 + 0x20) = lVar5;
        *(longlong *)(pbVar6 + 0x28) = lVar4;
        *(longlong *)(pbVar6 + 0x10) = lVar2;
        *(longlong *)(pbVar6 + 0x18) = lVar3;
        pbVar6[0] = 1;
        pbVar6[1] = 0;
        pbVar6[2] = 0;
        pbVar6[3] = 0;
        pbVar6[4] = 0;
        pbVar6[5] = 0;
        pbVar6[6] = 0;
        pbVar6[7] = 0;
        pbVar6[8] = 1;
        pbVar6[9] = 0;
        pbVar6[10] = 0;
        pbVar6[0xb] = 0;
        pbVar6[0xc] = 0;
        pbVar6[0xd] = 0;
        pbVar6[0xe] = 0;
        pbVar6[0xf] = 0;
        return;
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(0x10,0x80);
    }
  }
  else {
    pdb_142dc8090(&UNK_14333e040);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_14333e058);
}

