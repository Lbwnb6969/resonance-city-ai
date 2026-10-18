// VA 0x140a94da0, PDB extent 187 bytes
// zune_jpeg::decoder::JpegDecoder::decode_into<ref$<slice2$<u8> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: zune_jpeg::decoder::JpegDecoder::decode_into<ref$<slice2$<u8> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 187 */

undefined8 *
pdb_140a94da0(undefined8 *param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  char cStack_40;
  undefined7 uStack_3f;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  pdb_140a955c0(&cStack_40);
  if (cStack_40 == '\r') {
    if (*(char *)(param_2 + 0x71c6) != '\x01') {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143045538);
    }
    uVar1 = (ulonglong)*(ushort *)(param_2 + 0x71ba) * (ulonglong)*(ushort *)(param_2 + 0x71b8) *
            *(longlong *)(&UNK_143045718 + (ulonglong)*(byte *)(param_2 + 0x7118) * 8);
    if (param_4 < uVar1) {
      *(undefined1 *)param_1 = 0xc;
      param_1[1] = uVar1;
      param_1[2] = param_4;
    }
    else if (*(char *)(param_2 + 0x71c5) == '\0') {
      pdb_140daecf0(param_1,param_2,param_3);
    }
    else {
      pdb_140db2df0(param_1,param_2,param_3);
    }
  }
  else {
    param_1[2] = uStack_30;
    param_1[3] = uStack_28;
    *param_1 = CONCAT71(uStack_3f,cStack_40);
    param_1[1] = uStack_38;
  }
  return param_1;
}

