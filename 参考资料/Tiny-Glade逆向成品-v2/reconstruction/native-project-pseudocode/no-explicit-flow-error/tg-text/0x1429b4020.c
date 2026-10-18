// VA 0x1429b4020, PDB extent 264 bytes
// tg_text::shape_stream::_::impl$0::deserialize<ref_mut$<ron::de::Deserializer> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/shape_stream.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   tg_text::shape_stream::_::impl$0::deserialize<ref_mut$<ron::de::Deserializer> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/shape_stream.rs
   Extent: 264 */

char * pdb_1429b4020(char *param_1,longlong param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  longlong lVar3;
  char *pcVar4;
  undefined1 auStack_70 [4];
  undefined4 uStack_6c;
  longlong lStack_68;
  longlong lStack_60;
  longlong lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  pdb_140dd4910(auStack_70,param_2 + 0x10);
  lVar3 = lStack_60;
  if (auStack_70[0] == '2') {
    if (SBORROW8(0,lStack_68)) {
      pdb_140225b90(auStack_70,lStack_58,0,1,1);
      if (auStack_70 == (undefined1  [4])0x1) {
        pdb_142dc7e2a(lStack_68,lStack_60);
        pcVar1 = (code *)swi(3);
        pcVar4 = (char *)(*pcVar1)();
        return pcVar4;
      }
      if (lStack_58 != 0) {
        pub_142e32760(lStack_60,lVar3,lStack_58);
      }
    }
    lStack_60 = lStack_58;
    pdb_1406ccf20(param_1 + 8,auStack_70);
    *param_1 = '2';
  }
  else {
    uVar2 = stack0xffffffffffffff91;
    *(undefined4 *)(param_1 + 4) = uStack_6c;
    *(undefined4 *)(param_1 + 1) = uVar2;
    *(undefined8 *)(param_1 + 0x20) = uStack_50;
    *(undefined8 *)(param_1 + 0x28) = uStack_48;
    *(undefined8 *)(param_1 + 0x30) = uStack_40;
    *(undefined8 *)(param_1 + 0x38) = uStack_38;
    *(undefined8 *)(param_1 + 0x40) = uStack_30;
    *param_1 = auStack_70[0];
    *(longlong *)(param_1 + 8) = lStack_68;
    *(longlong *)(param_1 + 0x10) = lStack_60;
    *(longlong *)(param_1 + 0x18) = lStack_58;
  }
  return param_1;
}

