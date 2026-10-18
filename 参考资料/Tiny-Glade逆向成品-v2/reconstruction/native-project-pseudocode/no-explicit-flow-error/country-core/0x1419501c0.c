// VA 0x1419501c0, PDB extent 812 bytes
// country_core::resources::history::color_edit::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/color_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::history::color_edit::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/color_edit.rs
   Extent: 812 */

void pdb_1419501c0(undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  switch(param_3) {
  case 4:
    if ((int)*param_2 == 0x6c6c6157) {
      param_1[1] = 0;
    }
    else if ((int)*param_2 == 0x65746147) {
      param_1[1] = 3;
    }
    else {
      if ((int)*param_2 != 0x666f6f52) goto LAB_141950484;
      param_1[1] = 4;
    }
    break;
  default:
LAB_141950484:
    uVar1 = pdb_142d8f140(param_2,param_3,&UNK_14335a598,0x14);
    *(undefined8 *)(param_1 + 8) = uVar1;
    *param_1 = 1;
    return;
  case 8:
    if (*param_2 != 0x666f6f5274616c46) goto LAB_141950484;
    param_1[1] = 5;
    break;
  case 9:
    if ((char)param_2[1] != 'r' || *param_2 != 0x6f7461726f636544) goto LAB_141950484;
    goto code_r0x000141950476;
  case 10:
    if ((short)param_2[1] == 0x6c6c && *param_2 == 0x61576e65646f6f57) {
      param_1[1] = 1;
    }
    else if ((short)param_2[1] == 0x7265 && *param_2 == 0x626d6974666c6148) {
      param_1[1] = 8;
    }
    else if ((short)param_2[1] == 0x7373 && *param_2 == 0x656e746867697242) {
      param_1[1] = 10;
    }
    else {
      if ((short)param_2[1] != 0x726f || *param_2 != 0x6c6f43636967614d) goto LAB_141950484;
      param_1[1] = 0x10;
    }
    break;
  case 0xb:
    if (*(longlong *)((longlong)param_2 + 3) == 0x746867694c776f64 && *param_2 == 0x694c776f646e6957
       ) {
      param_1[1] = 7;
      break;
    }
    if (*(longlong *)((longlong)param_2 + 3) == 0x676e69746e754267 && *param_2 == 0x746e754267616c46
       ) {
      param_1[1] = 9;
      break;
    }
    if (*(longlong *)((longlong)param_2 + 3) != 0x72656464614c7269 || *param_2 != 0x64614c7269617453
       ) {
      if (*(longlong *)((longlong)param_2 + 3) != 0x6465666f6f527269 ||
          *param_2 != 0x6f6f527269617453) goto LAB_141950484;
      param_1[1] = 0xe;
      break;
    }
    goto code_r0x0001419502cc;
  case 0xc:
    if ((int)param_2[1] == 0x656b6f6d && *param_2 == 0x5379656e6d696843) {
      param_1[1] = 0xb;
    }
    else if ((int)param_2[1] == 0x676e696c && *param_2 == 0x6961527269617453) {
      param_1[1] = 0xd;
    }
    else {
      if ((int)param_2[1] != 0x74726f70 || *param_2 != 0x7075537269617453) goto LAB_141950484;
      param_1[1] = 0x11;
    }
    break;
  case 0xd:
    if (*(longlong *)((longlong)param_2 + 5) != 0x6c6169726574614d || *param_2 != 0x74614d7269617453
       ) goto LAB_141950484;
    param_1[1] = 0xf;
    break;
  case 0xe:
    if (*(longlong *)((longlong)param_2 + 6) != 0x726f6c6f43646f6f || *param_2 != 0x6f6f577269617453
       ) goto LAB_141950484;
code_r0x0001419502cc:
    param_1[1] = 0xc;
    break;
  case 0xf:
    if (*(longlong *)((longlong)param_2 + 7) != 0x6e6f697461646e75 || *param_2 != 0x756f46656e6f7453
       ) goto LAB_141950484;
    param_1[1] = 2;
    break;
  case 0x10:
    auVar2[0] = -((char)*param_2 == UNK_14335a2f0);
    auVar2[1] = -(*(char *)((longlong)param_2 + 1) == UNK_14335a2f1);
    auVar2[2] = -(*(char *)((longlong)param_2 + 2) == UNK_14335a2f2);
    auVar2[3] = -(*(char *)((longlong)param_2 + 3) == UNK_14335a2f3);
    auVar2[4] = -(*(char *)((longlong)param_2 + 4) == UNK_14335a2f4);
    auVar2[5] = -(*(char *)((longlong)param_2 + 5) == UNK_14335a2f5);
    auVar2[6] = -(*(char *)((longlong)param_2 + 6) == UNK_14335a2f6);
    auVar2[7] = -(*(char *)((longlong)param_2 + 7) == UNK_14335a2f7);
    auVar2[8] = -((char)param_2[1] == UNK_14335a2f8);
    auVar2[9] = -(*(char *)((longlong)param_2 + 9) == UNK_14335a2f9);
    auVar2[10] = -(*(char *)((longlong)param_2 + 10) == UNK_14335a2fa);
    auVar2[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_14335a2fb);
    auVar2[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_14335a2fc);
    auVar2[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_14335a2fd);
    auVar2[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_14335a2fe);
    auVar2[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_14335a2ff);
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
                 (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe | (ushort)(auVar2[0xf] >> 7) << 0xf)
        != 0xffff) goto LAB_141950484;
code_r0x000141950476:
    param_1[1] = 6;
  }
  *param_1 = 0;
  return;
}

