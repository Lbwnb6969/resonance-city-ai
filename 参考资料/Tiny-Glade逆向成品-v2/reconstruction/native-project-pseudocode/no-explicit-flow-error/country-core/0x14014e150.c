// VA 0x14014e150, PDB extent 360 bytes
// country_core::game_config::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::game_config::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_config.rs
   Extent: 360 */

void pdb_14014e150(undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  switch(param_3) {
  case 4:
    if ((int)*param_2 == 0x6f6d6564) {
      param_1[1] = 6;
      *param_1 = 0x32;
      return;
    }
    break;
  case 0xb:
    if (*(longlong *)((longlong)param_2 + 3) == 0x6873616c70735f70 && *param_2 == 0x6c70735f70696b73
       ) {
      param_1[1] = 4;
      *param_1 = 0x32;
      return;
    }
    break;
  case 0xc:
    if ((int)param_2[1] == 0x656d6f63 && *param_2 == 0x6c65775f70696b73) {
      param_1[1] = 5;
      *param_1 = 0x32;
      return;
    }
    break;
  case 0xe:
    if (*(longlong *)((longlong)param_2 + 6) == 0x736568736172635f && *param_2 == 0x635f74726f706572
       ) {
      param_1[1] = 1;
      *param_1 = 0x32;
      return;
    }
    break;
  case 0xf:
    if (*(longlong *)((longlong)param_2 + 7) == 0x736568736172635f && *param_2 == 0x5f65727574706163
       ) {
      param_1[1] = 0;
      *param_1 = 0x32;
      return;
    }
    if (*(longlong *)((longlong)param_2 + 7) == 0x656c6379635f7468 && *param_2 == 0x6867696e5f796164
       ) {
      param_1[1] = 3;
      *param_1 = 0x32;
      return;
    }
    break;
  case 0x10:
    auVar1[0] = -((char)*param_2 == UNK_142e49930);
    auVar1[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142e49931);
    auVar1[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142e49932);
    auVar1[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142e49933);
    auVar1[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142e49934);
    auVar1[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142e49935);
    auVar1[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142e49936);
    auVar1[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142e49937);
    auVar1[8] = -((char)param_2[1] == UNK_142e49938);
    auVar1[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142e49939);
    auVar1[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142e4993a);
    auVar1[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e4993b);
    auVar1[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e4993c);
    auVar1[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e4993d);
    auVar1[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e4993e);
    auVar1[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e4993f);
    if ((ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
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
                 (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe | (ushort)(auVar1[0xf] >> 7) << 0xf)
        == 0xffff) {
      param_1[1] = 2;
      *param_1 = 0x32;
      return;
    }
    break;
  case 0x15:
    auVar3[0] = -(*(char *)((longlong)param_2 + 5) == UNK_142e49910);
    auVar3[1] = -(*(char *)((longlong)param_2 + 6) == UNK_142e49911);
    auVar3[2] = -(*(char *)((longlong)param_2 + 7) == UNK_142e49912);
    auVar3[3] = -((char)param_2[1] == UNK_142e49913);
    auVar3[4] = -(*(char *)((longlong)param_2 + 9) == UNK_142e49914);
    auVar3[5] = -(*(char *)((longlong)param_2 + 10) == UNK_142e49915);
    auVar3[6] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e49916);
    auVar3[7] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e49917);
    auVar3[8] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e49918);
    auVar3[9] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e49919);
    auVar3[10] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e4991a);
    auVar3[0xb] = -((char)param_2[2] == UNK_142e4991b);
    auVar3[0xc] = -(*(char *)((longlong)param_2 + 0x11) == UNK_142e4991c);
    auVar3[0xd] = -(*(char *)((longlong)param_2 + 0x12) == UNK_142e4991d);
    auVar3[0xe] = -(*(char *)((longlong)param_2 + 0x13) == UNK_142e4991e);
    auVar3[0xf] = -(*(char *)((longlong)param_2 + 0x14) == UNK_142e4991f);
    auVar2[0] = -((char)*param_2 == UNK_142e49920);
    auVar2[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142e49921);
    auVar2[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142e49922);
    auVar2[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142e49923);
    auVar2[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142e49924);
    auVar2[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142e49925);
    auVar2[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142e49926);
    auVar2[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142e49927);
    auVar2[8] = -((char)param_2[1] == UNK_142e49928);
    auVar2[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142e49929);
    auVar2[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142e4992a);
    auVar2[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e4992b);
    auVar2[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e4992c);
    auVar2[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e4992d);
    auVar2[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e4992e);
    auVar2[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e4992f);
    auVar2 = auVar2 & auVar3;
    if ((ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) | (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar2[0xf] >> 7) << 0xf) == 0xffff) {
      param_1[1] = 7;
      *param_1 = 0x32;
      return;
    }
  }
  param_1[1] = 8;
  *param_1 = 0x32;
  return;
}

