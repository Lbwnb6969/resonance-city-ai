// VA 0x140af7860, PDB extent 1496 bytes
// country_core::systems::audio::clutter_audio::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/clutter_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::audio::clutter_audio::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/clutter_audio.rs
   Extent: 1496 */

void pdb_140af7860(undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  switch(param_3) {
  case 4:
    if ((int)*param_2 == 0x74726143) {
      param_1[1] = 5;
    }
    else {
      if ((int)*param_2 != 0x656e6f4e) goto LAB_140af7db0;
      param_1[1] = 0x12;
    }
    break;
  case 5:
    if (*(char *)((longlong)param_2 + 4) == 's' && (int)*param_2 == 0x65786f42) {
      param_1[1] = 1;
    }
    else if (*(char *)((longlong)param_2 + 4) == 'r' && (int)*param_2 == 0x69616843) {
      param_1[1] = 6;
    }
    else if (*(char *)((longlong)param_2 + 4) == 'l' && (int)*param_2 == 0x65656857) {
      param_1[1] = 10;
    }
    else if (*(char *)((longlong)param_2 + 4) == 'h' && (int)*param_2 == 0x636e6542) {
      param_1[1] = 0x13;
    }
    else {
      if (*(char *)((longlong)param_2 + 4) != 'l' || (int)*param_2 != 0x69766e41)
      goto LAB_140af7db0;
      param_1[1] = 0x20;
    }
    break;
  case 6:
    if (*(short *)((longlong)param_2 + 4) == 0x7465 && (int)*param_2 == 0x6b637542) {
      param_1[1] = 4;
    }
    else if (*(short *)((longlong)param_2 + 4) == 0x7265 && (int)*param_2 == 0x6464614c) {
      param_1[1] = 9;
    }
    else if (*(short *)((longlong)param_2 + 4) == 0x6c65 && (int)*param_2 == 0x766f6853) {
      param_1[1] = 0xd;
    }
    else if (*(short *)((longlong)param_2 + 4) == 0x6c65 && (int)*param_2 == 0x72726142) {
      param_1[1] = 0x17;
    }
    else {
      if (*(short *)((longlong)param_2 + 4) != 0x7465 || (int)*param_2 != 0x6b736142)
      goto LAB_140af7db0;
      param_1[1] = 0x19;
    }
    break;
  case 7:
    if (*(int *)((longlong)param_2 + 3) == 0x6b636153 && (int)*param_2 == 0x53786f42) {
      param_1[1] = 2;
    }
    else if (*(int *)((longlong)param_2 + 3) == 0x746f5079 && (int)*param_2 == 0x79616c43) {
      param_1[1] = 7;
    }
    else if (*(int *)((longlong)param_2 + 3) == 0x6e696b70 && (int)*param_2 == 0x706d7550) {
      param_1[1] = 0x1a;
    }
    else {
      if (*(int *)((longlong)param_2 + 3) != 0x68736946 || (int)*param_2 != 0x46786f42)
      goto LAB_140af7db0;
      param_1[1] = 0x24;
    }
    break;
  case 8:
    if (*param_2 == 0x646f6f7765726946) {
      param_1[1] = 0xb;
    }
    else if (*param_2 == 0x7372657474756853) {
      param_1[1] = 0xe;
    }
    else if (*param_2 == 0x6e67695364616f52) {
      param_1[1] = 0x16;
    }
    else if (*param_2 == 0x6b63617473796148) {
      param_1[1] = 0x18;
    }
    else if (*param_2 == 0x676f4c6e65646c4f) {
      param_1[1] = 0x1c;
    }
    else {
      if (*param_2 != 0x6c6c6542726f6f44) goto LAB_140af7db0;
      param_1[1] = 0x26;
    }
    break;
  case 9:
    if ((char)param_2[1] == 't' && *param_2 == 0x73654e7364726942) {
      param_1[1] = 0;
    }
    else if ((char)param_2[1] == 't' && *param_2 == 0x6f507265776f6c46) {
      param_1[1] = 8;
    }
    else if ((char)param_2[1] == 'k' && *param_2 == 0x726f666863746950) {
      param_1[1] = 0xc;
    }
    else if ((char)param_2[1] == 'e' && *param_2 == 0x73756f6864726942) {
      param_1[1] = 0x14;
    }
    else {
      if ((char)param_2[1] != 'k' || *param_2 != 0x636f526e65646c4f) goto LAB_140af7db0;
      param_1[1] = 0x1e;
    }
    break;
  case 10:
    if ((short)param_2[1] == 0x746e && *param_2 == 0x616c507265746157) {
      param_1[1] = 0x11;
    }
    else if ((short)param_2[1] == 0x6b63 && *param_2 == 0x61536f7461746f50) {
      param_1[1] = 0x15;
    }
    else if ((short)param_2[1] == 0x706d && *param_2 == 0x7574536e65646c4f) {
      param_1[1] = 0x1d;
    }
    else if ((short)param_2[1] == 0x6c6c && *param_2 == 0x6f52636972626146) {
      param_1[1] = 0x21;
    }
    else if ((short)param_2[1] == 0x6c6c && *param_2 == 0x6174536461657242) {
      param_1[1] = 0x22;
    }
    else {
      if ((short)param_2[1] != 0x736d || *param_2 != 0x6f6f72426b636152) goto LAB_140af7db0;
      param_1[1] = 0x25;
    }
    break;
  case 0xb:
    if (*(longlong *)((longlong)param_2 + 3) == 0x6e61437265746157 && *param_2 == 0x7265746157786f42
       ) {
      param_1[1] = 3;
    }
    else {
      if (*(longlong *)((longlong)param_2 + 3) != 0x6c6c617453656967 ||
          *param_2 != 0x7453656967676556) goto LAB_140af7db0;
      param_1[1] = 0x23;
    }
    break;
  default:
LAB_140af7db0:
    uVar1 = pdb_142d8f140(param_2,param_3,&UNK_143051490,0x27);
    *(undefined8 *)(param_1 + 8) = uVar1;
    *param_1 = 1;
    return;
  case 0xf:
    if (*(longlong *)((longlong)param_2 + 7) == 0x726165707041656e && *param_2 == 0x6e696c68746f6c43
       ) {
      param_1[1] = 0xf;
    }
    else if (*(longlong *)((longlong)param_2 + 7) == 0x6563614668746957 &&
             *param_2 == 0x576e696b706d7550) {
      param_1[1] = 0x1b;
    }
    else {
      if (*(longlong *)((longlong)param_2 + 7) != 0x6465627265776f6c ||
          *param_2 != 0x6c46776f646e6957) goto LAB_140af7db0;
      param_1[1] = 0x1f;
    }
    break;
  case 0x19:
    auVar3[0] = -(*(char *)((longlong)param_2 + 9) == UNK_143050cb0);
    auVar3[1] = -(*(char *)((longlong)param_2 + 10) == UNK_143050cb1);
    auVar3[2] = -(*(char *)((longlong)param_2 + 0xb) == UNK_143050cb2);
    auVar3[3] = -(*(char *)((longlong)param_2 + 0xc) == UNK_143050cb3);
    auVar3[4] = -(*(char *)((longlong)param_2 + 0xd) == UNK_143050cb4);
    auVar3[5] = -(*(char *)((longlong)param_2 + 0xe) == UNK_143050cb5);
    auVar3[6] = -(*(char *)((longlong)param_2 + 0xf) == UNK_143050cb6);
    auVar3[7] = -((char)param_2[2] == UNK_143050cb7);
    auVar3[8] = -(*(char *)((longlong)param_2 + 0x11) == UNK_143050cb8);
    auVar3[9] = -(*(char *)((longlong)param_2 + 0x12) == UNK_143050cb9);
    auVar3[10] = -(*(char *)((longlong)param_2 + 0x13) == UNK_143050cba);
    auVar3[0xb] = -(*(char *)((longlong)param_2 + 0x14) == UNK_143050cbb);
    auVar3[0xc] = -(*(char *)((longlong)param_2 + 0x15) == UNK_143050cbc);
    auVar3[0xd] = -(*(char *)((longlong)param_2 + 0x16) == UNK_143050cbd);
    auVar3[0xe] = -(*(char *)((longlong)param_2 + 0x17) == UNK_143050cbe);
    auVar3[0xf] = -((char)param_2[3] == UNK_143050cbf);
    auVar2[0] = -((char)*param_2 == UNK_143050cc0);
    auVar2[1] = -(*(char *)((longlong)param_2 + 1) == UNK_143050cc1);
    auVar2[2] = -(*(char *)((longlong)param_2 + 2) == UNK_143050cc2);
    auVar2[3] = -(*(char *)((longlong)param_2 + 3) == UNK_143050cc3);
    auVar2[4] = -(*(char *)((longlong)param_2 + 4) == UNK_143050cc4);
    auVar2[5] = -(*(char *)((longlong)param_2 + 5) == UNK_143050cc5);
    auVar2[6] = -(*(char *)((longlong)param_2 + 6) == UNK_143050cc6);
    auVar2[7] = -(*(char *)((longlong)param_2 + 7) == UNK_143050cc7);
    auVar2[8] = -((char)param_2[1] == UNK_143050cc8);
    auVar2[9] = -(*(char *)((longlong)param_2 + 9) == UNK_143050cc9);
    auVar2[10] = -(*(char *)((longlong)param_2 + 10) == UNK_143050cca);
    auVar2[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_143050ccb);
    auVar2[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_143050ccc);
    auVar2[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_143050ccd);
    auVar2[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_143050cce);
    auVar2[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_143050ccf);
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
                (ushort)(byte)(auVar2[0xf] >> 7) << 0xf) != 0xffff) goto LAB_140af7db0;
    param_1[1] = 0x10;
  }
  *param_1 = 0;
  return;
}

