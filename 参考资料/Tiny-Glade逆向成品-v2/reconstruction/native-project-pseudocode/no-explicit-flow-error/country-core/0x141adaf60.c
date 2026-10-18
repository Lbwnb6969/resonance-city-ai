// VA 0x141adaf60, PDB extent 2365 bytes
// country_core::resources::clutter_meshes::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_meshes.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::clutter_meshes::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_meshes.rs
   Extent: 2365 */

void pdb_141adaf60(undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  switch(param_3) {
  case 4:
    if ((int)*param_2 == 0x74726163) {
      param_1[1] = 0x17;
    }
    else {
      if ((int)*param_2 != 0x64656572) goto LAB_141adb7c5;
      param_1[1] = 0x1e;
    }
    break;
  case 5:
    if (*(char *)((longlong)param_2 + 4) == 'l' && (int)*param_2 == 0x65656877) {
      param_1[1] = 2;
    }
    else if (*(char *)((longlong)param_2 + 4) == 'h' && (int)*param_2 == 0x636e6562) {
      param_1[1] = 10;
    }
    else if (*(char *)((longlong)param_2 + 4) == '2' && (int)*param_2 == 0x74726163) {
      param_1[1] = 0x18;
    }
    else {
      if (*(char *)((longlong)param_2 + 4) != 'l' || (int)*param_2 != 0x69766e61)
      goto LAB_141adb7c5;
      param_1[1] = 0x2c;
    }
    break;
  case 6:
    if (*(short *)((longlong)param_2 + 4) == 0x7265 && (int)*param_2 == 0x6464616c) {
      param_1[1] = 1;
    }
    else if (*(short *)((longlong)param_2 + 4) == 0x6c65 && (int)*param_2 == 0x766f6873) {
      param_1[1] = 4;
    }
    else if (*(short *)((longlong)param_2 + 4) == 0x7465 && (int)*param_2 == 0x6b637562) {
      param_1[1] = 8;
    }
    else {
      if (*(short *)((longlong)param_2 + 4) == 0x6c65 && (int)*param_2 == 0x72726162)
      goto code_r0x000141adb747;
      if (*(short *)((longlong)param_2 + 4) != 0x7465 || (int)*param_2 != 0x6b736162)
      goto LAB_141adb7c5;
      param_1[1] = 0x11;
    }
    break;
  case 7:
    if (*(int *)((longlong)param_2 + 3) == 0x64617079 && (int)*param_2 == 0x796c696c) {
      param_1[1] = 0x1f;
    }
    else {
      if (*(int *)((longlong)param_2 + 3) != 0x6e696b70 || (int)*param_2 != 0x706d7570)
      goto LAB_141adb7c5;
      param_1[1] = 0x25;
    }
    break;
  case 8:
    if (*param_2 == 0x646f6f7765726966) {
      param_1[1] = 7;
    }
    else if (*param_2 == 0x7473656e64726962) {
      param_1[1] = 9;
    }
    else if (*param_2 == 0x6b63617473796168) {
      param_1[1] = 0xe;
    }
    else {
      if (*param_2 != 0x326e696b706d7570) goto LAB_141adb7c5;
      param_1[1] = 0x26;
    }
    break;
  case 9:
    if ((char)param_2[1] == 'k' && *param_2 == 0x726f666863746970) {
      param_1[1] = 3;
    }
    else if ((char)param_2[1] == 'e' && *param_2 == 0x73756f6864726962) {
      param_1[1] = 0x10;
    }
    else if ((char)param_2[1] == 'n' && *param_2 == 0x6769735f64616f72) {
      param_1[1] = 0x15;
    }
    else if ((char)param_2[1] == 'r' && *param_2 == 0x65776f6c666e7573) {
      param_1[1] = 0x16;
    }
    else if ((char)param_2[1] == 'x' && *param_2 == 0x6f627265776f6c66) {
      param_1[1] = 0x32;
    }
    else {
      if ((char)param_2[1] != 'l' || *param_2 != 0x6c65625f726f6f64) goto LAB_141adb7c5;
      param_1[1] = 0x33;
    }
    break;
  case 10:
    if ((short)param_2[1] == 0x6b63 && *param_2 == 0x6f725f6e65646c6f) {
      param_1[1] = 0x22;
    }
    else if ((short)param_2[1] == 0x6873 && *param_2 == 0x69665f6574617263) {
      param_1[1] = 0x30;
    }
    else {
      if ((short)param_2[1] != 0x736e || *param_2 != 0x61726b5f726f6f64) goto LAB_141adb7c5;
      param_1[1] = 0x34;
    }
    break;
  case 0xb:
    if (*(longlong *)((longlong)param_2 + 3) == 0x66667574735f775f && *param_2 == 0x74735f775f786f62
       ) {
      param_1[1] = 5;
    }
    else if (*(longlong *)((longlong)param_2 + 3) == 0x74726f68735f6863 &&
             *param_2 == 0x68735f68636e6562) {
      param_1[1] = 0xc;
    }
    else if (*(longlong *)((longlong)param_2 + 3) == 0x6b6361735f6f7461 &&
             *param_2 == 0x735f6f7461746f70) {
      param_1[1] = 0x14;
    }
    else if (*(longlong *)((longlong)param_2 + 3) == 0x64616572625f6c6c &&
             *param_2 == 0x72625f6c6c617473) {
      param_1[1] = 0x2e;
    }
    else {
      if (*(longlong *)((longlong)param_2 + 3) != 0x736d6f6f72625f6b ||
          *param_2 != 0x6f72625f6b636172) goto LAB_141adb7c5;
      param_1[1] = 0x31;
    }
    break;
  case 0xc:
    if ((int)param_2[1] == 0x31765f74 && *param_2 == 0x6f705f746e616c70) {
      param_1[1] = 0;
    }
    else if ((int)param_2[1] == 0x6e61635f && *param_2 == 0x676e697265746177) {
      param_1[1] = 6;
    }
    else if ((int)param_2[1] == 0x32765f74 && *param_2 == 0x6f705f746e616c70) {
      param_1[1] = 0xf;
    }
    else {
      if ((int)param_2[1] != 0x736c6c6f || *param_2 != 0x725f636972626166) goto LAB_141adb7c5;
      param_1[1] = 0x2d;
    }
    break;
  case 0xd:
    if (*(longlong *)((longlong)param_2 + 5) == 0x646f6f665f775f74 && *param_2 == 0x775f74656b736162
       ) {
      param_1[1] = 0x12;
    }
    else if (*(longlong *)((longlong)param_2 + 5) == 0x73657661656c5f6e &&
             *param_2 == 0x6c5f6e656c6c6166) {
      param_1[1] = 0x20;
    }
    else if (*(longlong *)((longlong)param_2 + 5) == 0x736c617465705f6e &&
             *param_2 == 0x705f6e656c6c6166) {
      param_1[1] = 0x21;
    }
    else {
      if (*(longlong *)((longlong)param_2 + 5) != 0x736569676765765f ||
          *param_2 != 0x65765f6c6c617473) goto LAB_141adb7c5;
      param_1[1] = 0x2f;
    }
    break;
  case 0xe:
    if (*(longlong *)((longlong)param_2 + 6) == 0x74656b7361625f77 && *param_2 == 0x5f775f68636e6562
       ) {
      param_1[1] = 0xb;
    }
    else if (*(longlong *)((longlong)param_2 + 6) == 0x736c6f6f745f775f &&
             *param_2 == 0x775f736574617263) {
      param_1[1] = 0x19;
    }
    else if (*(longlong *)((longlong)param_2 + 6) == 0x726574747568735f &&
             *param_2 == 0x735f776f646e6977) {
      param_1[1] = 0x1c;
    }
    else if (*(longlong *)((longlong)param_2 + 6) == 0x676f6c5f65657274 &&
             *param_2 == 0x72745f6e65646c6f) {
      param_1[1] = 0x23;
    }
    else {
      if (*(longlong *)((longlong)param_2 + 6) != 0x656361665f775f6e ||
          *param_2 != 0x5f6e696b706d7570) goto LAB_141adb7c5;
      param_1[1] = 0x27;
    }
    break;
  case 0xf:
    if (*(longlong *)((longlong)param_2 + 7) != 0x736e696b706d7570 || *param_2 != 0x705f775f74726163
       ) goto LAB_141adb7c5;
    param_1[1] = 0x28;
    break;
  case 0x10:
    auVar4[0] = -((char)*param_2 == UNK_143388310);
    auVar4[1] = -(*(char *)((longlong)param_2 + 1) == UNK_143388311);
    auVar4[2] = -(*(char *)((longlong)param_2 + 2) == UNK_143388312);
    auVar4[3] = -(*(char *)((longlong)param_2 + 3) == UNK_143388313);
    auVar4[4] = -(*(char *)((longlong)param_2 + 4) == UNK_143388314);
    auVar4[5] = -(*(char *)((longlong)param_2 + 5) == UNK_143388315);
    auVar4[6] = -(*(char *)((longlong)param_2 + 6) == UNK_143388316);
    auVar4[7] = -(*(char *)((longlong)param_2 + 7) == UNK_143388317);
    auVar4[8] = -((char)param_2[1] == UNK_143388318);
    auVar4[9] = -(*(char *)((longlong)param_2 + 9) == UNK_143388319);
    auVar4[10] = -(*(char *)((longlong)param_2 + 10) == UNK_14338831a);
    auVar4[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_14338831b);
    auVar4[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_14338831c);
    auVar4[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_14338831d);
    auVar4[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_14338831e);
    auVar4[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_14338831f);
    if ((ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) | (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe | (ushort)(auVar4[0xf] >> 7) << 0xf)
        == 0xffff) {
      param_1[1] = 0x1a;
    }
    else {
      auVar5[0] = -((char)*param_2 == UNK_143388320);
      auVar5[1] = -(*(char *)((longlong)param_2 + 1) == UNK_143388321);
      auVar5[2] = -(*(char *)((longlong)param_2 + 2) == UNK_143388322);
      auVar5[3] = -(*(char *)((longlong)param_2 + 3) == UNK_143388323);
      auVar5[4] = -(*(char *)((longlong)param_2 + 4) == UNK_143388324);
      auVar5[5] = -(*(char *)((longlong)param_2 + 5) == UNK_143388325);
      auVar5[6] = -(*(char *)((longlong)param_2 + 6) == UNK_143388326);
      auVar5[7] = -(*(char *)((longlong)param_2 + 7) == UNK_143388327);
      auVar5[8] = -((char)param_2[1] == UNK_143388328);
      auVar5[9] = -(*(char *)((longlong)param_2 + 9) == UNK_143388329);
      auVar5[10] = -(*(char *)((longlong)param_2 + 10) == UNK_14338832a);
      auVar5[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_14338832b);
      auVar5[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_14338832c);
      auVar5[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_14338832d);
      auVar5[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_14338832e);
      auVar5[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_14338832f);
      if ((ushort)((ushort)(SUB161(auVar5 >> 7,0) & 1) | (ushort)(SUB161(auVar5 >> 0xf,0) & 1) << 1
                   | (ushort)(SUB161(auVar5 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar5 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar5 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar5 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar5 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar5 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar5 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar5 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar5 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar5 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar5 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar5 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar5 >> 0x77,0) & 1) << 0xe | (ushort)(auVar5[0xf] >> 7) << 0xf
                  ) == 0xffff) {
        param_1[1] = 0x1b;
      }
      else {
        auVar6[0] = -((char)*param_2 == UNK_143388300);
        auVar6[1] = -(*(char *)((longlong)param_2 + 1) == UNK_143388301);
        auVar6[2] = -(*(char *)((longlong)param_2 + 2) == UNK_143388302);
        auVar6[3] = -(*(char *)((longlong)param_2 + 3) == UNK_143388303);
        auVar6[4] = -(*(char *)((longlong)param_2 + 4) == UNK_143388304);
        auVar6[5] = -(*(char *)((longlong)param_2 + 5) == UNK_143388305);
        auVar6[6] = -(*(char *)((longlong)param_2 + 6) == UNK_143388306);
        auVar6[7] = -(*(char *)((longlong)param_2 + 7) == UNK_143388307);
        auVar6[8] = -((char)param_2[1] == UNK_143388308);
        auVar6[9] = -(*(char *)((longlong)param_2 + 9) == UNK_143388309);
        auVar6[10] = -(*(char *)((longlong)param_2 + 10) == UNK_14338830a);
        auVar6[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_14338830b);
        auVar6[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_14338830c);
        auVar6[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_14338830d);
        auVar6[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_14338830e);
        auVar6[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_14338830f);
        if ((ushort)((ushort)(SUB161(auVar6 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar6 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar6 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar6 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar6 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar6 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar6 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar6 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar6 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar6 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar6 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar6 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar6 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar6 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar6[0xf] >> 7) << 0xf) == 0xffff) {
          param_1[1] = 0x24;
        }
        else {
          auVar7[0] = -((char)*param_2 == UNK_143388330);
          auVar7[1] = -(*(char *)((longlong)param_2 + 1) == UNK_143388331);
          auVar7[2] = -(*(char *)((longlong)param_2 + 2) == UNK_143388332);
          auVar7[3] = -(*(char *)((longlong)param_2 + 3) == UNK_143388333);
          auVar7[4] = -(*(char *)((longlong)param_2 + 4) == UNK_143388334);
          auVar7[5] = -(*(char *)((longlong)param_2 + 5) == UNK_143388335);
          auVar7[6] = -(*(char *)((longlong)param_2 + 6) == UNK_143388336);
          auVar7[7] = -(*(char *)((longlong)param_2 + 7) == UNK_143388337);
          auVar7[8] = -((char)param_2[1] == UNK_143388338);
          auVar7[9] = -(*(char *)((longlong)param_2 + 9) == UNK_143388339);
          auVar7[10] = -(*(char *)((longlong)param_2 + 10) == UNK_14338833a);
          auVar7[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_14338833b);
          auVar7[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_14338833c);
          auVar7[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_14338833d);
          auVar7[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_14338833e);
          auVar7[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_14338833f);
          if ((ushort)((ushort)(SUB161(auVar7 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar7 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar7 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar7[0xf] >> 7) << 0xf) != 0xffff) goto LAB_141adb7c5;
          param_1[1] = 0x2b;
        }
      }
    }
    break;
  case 0x11:
    auVar9[0] = -((char)*param_2 == UNK_143388360);
    auVar9[1] = -(*(char *)((longlong)param_2 + 1) == UNK_143388361);
    auVar9[2] = -(*(char *)((longlong)param_2 + 2) == UNK_143388362);
    auVar9[3] = -(*(char *)((longlong)param_2 + 3) == UNK_143388363);
    auVar9[4] = -(*(char *)((longlong)param_2 + 4) == UNK_143388364);
    auVar9[5] = -(*(char *)((longlong)param_2 + 5) == UNK_143388365);
    auVar9[6] = -(*(char *)((longlong)param_2 + 6) == UNK_143388366);
    auVar9[7] = -(*(char *)((longlong)param_2 + 7) == UNK_143388367);
    auVar9[8] = -((char)param_2[1] == UNK_143388368);
    auVar9[9] = -(*(char *)((longlong)param_2 + 9) == UNK_143388369);
    auVar9[10] = -(*(char *)((longlong)param_2 + 10) == UNK_14338836a);
    auVar9[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_14338836b);
    auVar9[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_14338836c);
    auVar9[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_14338836d);
    auVar9[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_14338836e);
    auVar9[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_14338836f);
    auVar16[0] = -((char)param_2[2] == UNK_142e49990);
    auVar16[1] = -(UNK_142e49991 == '\0');
    auVar16[2] = -(UNK_142e49992 == '\0');
    auVar16[3] = -(UNK_142e49993 == '\0');
    auVar16[4] = -(UNK_142e49994 == '\0');
    auVar16[5] = -(UNK_142e49995 == '\0');
    auVar16[6] = -(UNK_142e49996 == '\0');
    auVar16[7] = -(UNK_142e49997 == '\0');
    auVar16[8] = -(UNK_142e49998 == '\0');
    auVar16[9] = -(UNK_142e49999 == '\0');
    auVar16[10] = -(UNK_142e4999a == '\0');
    auVar16[0xb] = -(UNK_142e4999b == '\0');
    auVar16[0xc] = -(UNK_142e4999c == '\0');
    auVar16[0xd] = -(UNK_142e4999d == '\0');
    auVar16[0xe] = -(UNK_142e4999e == '\0');
    auVar16[0xf] = -(UNK_142e4999f == '\0');
    auVar16 = auVar16 & auVar9;
    if ((ushort)((ushort)(SUB161(auVar16 >> 7,0) & 1) | (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar16[0xf] >> 7) << 0xf) == 0xffff) {
code_r0x000141adb747:
      param_1[1] = 0xd;
    }
    else {
      auVar10[0] = -((char)*param_2 == UNK_143388370);
      auVar10[1] = -(*(char *)((longlong)param_2 + 1) == UNK_143388371);
      auVar10[2] = -(*(char *)((longlong)param_2 + 2) == UNK_143388372);
      auVar10[3] = -(*(char *)((longlong)param_2 + 3) == UNK_143388373);
      auVar10[4] = -(*(char *)((longlong)param_2 + 4) == UNK_143388374);
      auVar10[5] = -(*(char *)((longlong)param_2 + 5) == UNK_143388375);
      auVar10[6] = -(*(char *)((longlong)param_2 + 6) == UNK_143388376);
      auVar10[7] = -(*(char *)((longlong)param_2 + 7) == UNK_143388377);
      auVar10[8] = -((char)param_2[1] == UNK_143388378);
      auVar10[9] = -(*(char *)((longlong)param_2 + 9) == UNK_143388379);
      auVar10[10] = -(*(char *)((longlong)param_2 + 10) == UNK_14338837a);
      auVar10[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_14338837b);
      auVar10[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_14338837c);
      auVar10[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_14338837d);
      auVar10[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_14338837e);
      auVar10[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_14338837f);
      auVar17[0] = -((char)param_2[2] == UNK_143388380);
      auVar17[1] = -(UNK_143388381 == '\0');
      auVar17[2] = -(UNK_143388382 == '\0');
      auVar17[3] = -(UNK_143388383 == '\0');
      auVar17[4] = -(UNK_143388384 == '\0');
      auVar17[5] = -(UNK_143388385 == '\0');
      auVar17[6] = -(UNK_143388386 == '\0');
      auVar17[7] = -(UNK_143388387 == '\0');
      auVar17[8] = -(UNK_143388388 == '\0');
      auVar17[9] = -(UNK_143388389 == '\0');
      auVar17[10] = -(UNK_14338838a == '\0');
      auVar17[0xb] = -(UNK_14338838b == '\0');
      auVar17[0xc] = -(UNK_14338838c == '\0');
      auVar17[0xd] = -(UNK_14338838d == '\0');
      auVar17[0xe] = -(UNK_14338838e == '\0');
      auVar17[0xf] = -(UNK_14338838f == '\0');
      auVar17 = auVar17 & auVar10;
      if ((ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar17[0xf] >> 7) << 0xf) == 0xffff) {
        param_1[1] = 0x1d;
      }
      else {
        auVar11[0] = -((char)*param_2 == UNK_1433882e0);
        auVar11[1] = -(*(char *)((longlong)param_2 + 1) == UNK_1433882e1);
        auVar11[2] = -(*(char *)((longlong)param_2 + 2) == UNK_1433882e2);
        auVar11[3] = -(*(char *)((longlong)param_2 + 3) == UNK_1433882e3);
        auVar11[4] = -(*(char *)((longlong)param_2 + 4) == UNK_1433882e4);
        auVar11[5] = -(*(char *)((longlong)param_2 + 5) == UNK_1433882e5);
        auVar11[6] = -(*(char *)((longlong)param_2 + 6) == UNK_1433882e6);
        auVar11[7] = -(*(char *)((longlong)param_2 + 7) == UNK_1433882e7);
        auVar11[8] = -((char)param_2[1] == UNK_1433882e8);
        auVar11[9] = -(*(char *)((longlong)param_2 + 9) == UNK_1433882e9);
        auVar11[10] = -(*(char *)((longlong)param_2 + 10) == UNK_1433882ea);
        auVar11[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_1433882eb);
        auVar11[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_1433882ec);
        auVar11[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_1433882ed);
        auVar11[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_1433882ee);
        auVar11[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_1433882ef);
        auVar18[0] = -((char)param_2[2] == UNK_143388380);
        auVar18[1] = -(UNK_143388381 == '\0');
        auVar18[2] = -(UNK_143388382 == '\0');
        auVar18[3] = -(UNK_143388383 == '\0');
        auVar18[4] = -(UNK_143388384 == '\0');
        auVar18[5] = -(UNK_143388385 == '\0');
        auVar18[6] = -(UNK_143388386 == '\0');
        auVar18[7] = -(UNK_143388387 == '\0');
        auVar18[8] = -(UNK_143388388 == '\0');
        auVar18[9] = -(UNK_143388389 == '\0');
        auVar18[10] = -(UNK_14338838a == '\0');
        auVar18[0xb] = -(UNK_14338838b == '\0');
        auVar18[0xc] = -(UNK_14338838c == '\0');
        auVar18[0xd] = -(UNK_14338838d == '\0');
        auVar18[0xe] = -(UNK_14338838e == '\0');
        auVar18[0xf] = -(UNK_14338838f == '\0');
        auVar18 = auVar18 & auVar11;
        if ((ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar18[0xf] >> 7) << 0xf) == 0xffff) {
          param_1[1] = 0x29;
        }
        else {
          auVar12[0] = -((char)*param_2 == UNK_143388390);
          auVar12[1] = -(*(char *)((longlong)param_2 + 1) == UNK_143388391);
          auVar12[2] = -(*(char *)((longlong)param_2 + 2) == UNK_143388392);
          auVar12[3] = -(*(char *)((longlong)param_2 + 3) == UNK_143388393);
          auVar12[4] = -(*(char *)((longlong)param_2 + 4) == UNK_143388394);
          auVar12[5] = -(*(char *)((longlong)param_2 + 5) == UNK_143388395);
          auVar12[6] = -(*(char *)((longlong)param_2 + 6) == UNK_143388396);
          auVar12[7] = -(*(char *)((longlong)param_2 + 7) == UNK_143388397);
          auVar12[8] = -((char)param_2[1] == UNK_143388398);
          auVar12[9] = -(*(char *)((longlong)param_2 + 9) == UNK_143388399);
          auVar12[10] = -(*(char *)((longlong)param_2 + 10) == UNK_14338839a);
          auVar12[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_14338839b);
          auVar12[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_14338839c);
          auVar12[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_14338839d);
          auVar12[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_14338839e);
          auVar12[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_14338839f);
          auVar19[0] = -((char)param_2[2] == UNK_142e478c0);
          auVar19[1] = -(UNK_142e478c1 == '\0');
          auVar19[2] = -(UNK_142e478c2 == '\0');
          auVar19[3] = -(UNK_142e478c3 == '\0');
          auVar19[4] = -(UNK_142e478c4 == '\0');
          auVar19[5] = -(UNK_142e478c5 == '\0');
          auVar19[6] = -(UNK_142e478c6 == '\0');
          auVar19[7] = -(UNK_142e478c7 == '\0');
          auVar19[8] = -(UNK_142e478c8 == '\0');
          auVar19[9] = -(UNK_142e478c9 == '\0');
          auVar19[10] = -(UNK_142e478ca == '\0');
          auVar19[0xb] = -(UNK_142e478cb == '\0');
          auVar19[0xc] = -(UNK_142e478cc == '\0');
          auVar19[0xd] = -(UNK_142e478cd == '\0');
          auVar19[0xe] = -(UNK_142e478ce == '\0');
          auVar19[0xf] = -(UNK_142e478cf == '\0');
          auVar19 = auVar19 & auVar12;
          if ((ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                      (ushort)(byte)(auVar19[0xf] >> 7) << 0xf) != 0xffff) goto LAB_141adb7c5;
          param_1[1] = 0x35;
        }
      }
    }
    break;
  default:
LAB_141adb7c5:
    uVar2 = pdb_142d8f140(param_2,param_3,&UNK_1433888a0,0x39);
    *(undefined8 *)(param_1 + 8) = uVar2;
    uVar3 = 1;
    goto LAB_141adb893;
  case 0x14:
    iVar1 = (int)param_2[2];
    auVar20[0] = -((char)iVar1 == UNK_143388340);
    auVar20[1] = -((char)((uint)iVar1 >> 8) == UNK_143388341);
    auVar20[2] = -((char)((uint)iVar1 >> 0x10) == UNK_143388342);
    auVar20[3] = -((char)((uint)iVar1 >> 0x18) == UNK_143388343);
    auVar20[4] = -(UNK_143388344 == '\0');
    auVar20[5] = -(UNK_143388345 == '\0');
    auVar20[6] = -(UNK_143388346 == '\0');
    auVar20[7] = -(UNK_143388347 == '\0');
    auVar20[8] = -(UNK_143388348 == '\0');
    auVar20[9] = -(UNK_143388349 == '\0');
    auVar20[10] = -(UNK_14338834a == '\0');
    auVar20[0xb] = -(UNK_14338834b == '\0');
    auVar20[0xc] = -(UNK_14338834c == '\0');
    auVar20[0xd] = -(UNK_14338834d == '\0');
    auVar20[0xe] = -(UNK_14338834e == '\0');
    auVar20[0xf] = -(UNK_14338834f == '\0');
    auVar13[0] = -((char)*param_2 == UNK_143388350);
    auVar13[1] = -(*(char *)((longlong)param_2 + 1) == UNK_143388351);
    auVar13[2] = -(*(char *)((longlong)param_2 + 2) == UNK_143388352);
    auVar13[3] = -(*(char *)((longlong)param_2 + 3) == UNK_143388353);
    auVar13[4] = -(*(char *)((longlong)param_2 + 4) == UNK_143388354);
    auVar13[5] = -(*(char *)((longlong)param_2 + 5) == UNK_143388355);
    auVar13[6] = -(*(char *)((longlong)param_2 + 6) == UNK_143388356);
    auVar13[7] = -(*(char *)((longlong)param_2 + 7) == UNK_143388357);
    auVar13[8] = -((char)param_2[1] == UNK_143388358);
    auVar13[9] = -(*(char *)((longlong)param_2 + 9) == UNK_143388359);
    auVar13[10] = -(*(char *)((longlong)param_2 + 10) == UNK_14338835a);
    auVar13[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_14338835b);
    auVar13[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_14338835c);
    auVar13[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_14338835d);
    auVar13[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_14338835e);
    auVar13[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_14338835f);
    auVar13 = auVar13 & auVar20;
    if ((ushort)((ushort)(SUB161(auVar13 >> 7,0) & 1) | (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar13[0xf] >> 7) << 0xf) != 0xffff) goto LAB_141adb7c5;
    param_1[1] = 0x13;
    break;
  case 0x17:
    auVar15[0] = -(*(char *)((longlong)param_2 + 7) == UNK_1433882f0);
    auVar15[1] = -((char)param_2[1] == UNK_1433882f1);
    auVar15[2] = -(*(char *)((longlong)param_2 + 9) == UNK_1433882f2);
    auVar15[3] = -(*(char *)((longlong)param_2 + 10) == UNK_1433882f3);
    auVar15[4] = -(*(char *)((longlong)param_2 + 0xb) == UNK_1433882f4);
    auVar15[5] = -(*(char *)((longlong)param_2 + 0xc) == UNK_1433882f5);
    auVar15[6] = -(*(char *)((longlong)param_2 + 0xd) == UNK_1433882f6);
    auVar15[7] = -(*(char *)((longlong)param_2 + 0xe) == UNK_1433882f7);
    auVar15[8] = -(*(char *)((longlong)param_2 + 0xf) == UNK_1433882f8);
    auVar15[9] = -((char)param_2[2] == UNK_1433882f9);
    auVar15[10] = -(*(char *)((longlong)param_2 + 0x11) == UNK_1433882fa);
    auVar15[0xb] = -(*(char *)((longlong)param_2 + 0x12) == UNK_1433882fb);
    auVar15[0xc] = -(*(char *)((longlong)param_2 + 0x13) == UNK_1433882fc);
    auVar15[0xd] = -(*(char *)((longlong)param_2 + 0x14) == UNK_1433882fd);
    auVar15[0xe] = -(*(char *)((longlong)param_2 + 0x15) == UNK_1433882fe);
    auVar15[0xf] = -(*(char *)((longlong)param_2 + 0x16) == UNK_1433882ff);
    auVar8[0] = -((char)*param_2 == UNK_143388300);
    auVar8[1] = -(*(char *)((longlong)param_2 + 1) == UNK_143388301);
    auVar8[2] = -(*(char *)((longlong)param_2 + 2) == UNK_143388302);
    auVar8[3] = -(*(char *)((longlong)param_2 + 3) == UNK_143388303);
    auVar8[4] = -(*(char *)((longlong)param_2 + 4) == UNK_143388304);
    auVar8[5] = -(*(char *)((longlong)param_2 + 5) == UNK_143388305);
    auVar8[6] = -(*(char *)((longlong)param_2 + 6) == UNK_143388306);
    auVar8[7] = -(*(char *)((longlong)param_2 + 7) == UNK_143388307);
    auVar8[8] = -((char)param_2[1] == UNK_143388308);
    auVar8[9] = -(*(char *)((longlong)param_2 + 9) == UNK_143388309);
    auVar8[10] = -(*(char *)((longlong)param_2 + 10) == UNK_14338830a);
    auVar8[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_14338830b);
    auVar8[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_14338830c);
    auVar8[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_14338830d);
    auVar8[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_14338830e);
    auVar8[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_14338830f);
    auVar8 = auVar8 & auVar15;
    if ((ushort)((ushort)(SUB161(auVar8 >> 7,0) & 1) | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar8[0xf] >> 7) << 0xf) == 0xffff) {
      param_1[1] = 0x2a;
    }
    else {
      iVar1 = pub_142e32750(param_2,&UNK_14338886b);
      if (iVar1 != 0) goto LAB_141adb7c5;
      param_1[1] = 0x36;
    }
    break;
  case 0x19:
    auVar21[0] = -(*(char *)((longlong)param_2 + 9) == DAT_14302e0a0);
    auVar21[1] = -(*(char *)((longlong)param_2 + 10) == UNK_14302e0a1);
    auVar21[2] = -(*(char *)((longlong)param_2 + 0xb) == UNK_14302e0a2);
    auVar21[3] = -(*(char *)((longlong)param_2 + 0xc) == UNK_14302e0a3);
    auVar21[4] = -(*(char *)((longlong)param_2 + 0xd) == UNK_14302e0a4);
    auVar21[5] = -(*(char *)((longlong)param_2 + 0xe) == UNK_14302e0a5);
    auVar21[6] = -(*(char *)((longlong)param_2 + 0xf) == UNK_14302e0a6);
    auVar21[7] = -((char)param_2[2] == UNK_14302e0a7);
    auVar21[8] = -(*(char *)((longlong)param_2 + 0x11) == UNK_14302e0a8);
    auVar21[9] = -(*(char *)((longlong)param_2 + 0x12) == UNK_14302e0a9);
    auVar21[10] = -(*(char *)((longlong)param_2 + 0x13) == UNK_14302e0aa);
    auVar21[0xb] = -(*(char *)((longlong)param_2 + 0x14) == UNK_14302e0ab);
    auVar21[0xc] = -(*(char *)((longlong)param_2 + 0x15) == UNK_14302e0ac);
    auVar21[0xd] = -(*(char *)((longlong)param_2 + 0x16) == UNK_14302e0ad);
    auVar21[0xe] = -(*(char *)((longlong)param_2 + 0x17) == UNK_14302e0ae);
    auVar21[0xf] = -((char)param_2[3] == UNK_14302e0af);
    auVar14[0] = -((char)*param_2 == UNK_1433882e0);
    auVar14[1] = -(*(char *)((longlong)param_2 + 1) == UNK_1433882e1);
    auVar14[2] = -(*(char *)((longlong)param_2 + 2) == UNK_1433882e2);
    auVar14[3] = -(*(char *)((longlong)param_2 + 3) == UNK_1433882e3);
    auVar14[4] = -(*(char *)((longlong)param_2 + 4) == UNK_1433882e4);
    auVar14[5] = -(*(char *)((longlong)param_2 + 5) == UNK_1433882e5);
    auVar14[6] = -(*(char *)((longlong)param_2 + 6) == UNK_1433882e6);
    auVar14[7] = -(*(char *)((longlong)param_2 + 7) == UNK_1433882e7);
    auVar14[8] = -((char)param_2[1] == UNK_1433882e8);
    auVar14[9] = -(*(char *)((longlong)param_2 + 9) == UNK_1433882e9);
    auVar14[10] = -(*(char *)((longlong)param_2 + 10) == UNK_1433882ea);
    auVar14[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_1433882eb);
    auVar14[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_1433882ec);
    auVar14[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_1433882ed);
    auVar14[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_1433882ee);
    auVar14[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_1433882ef);
    auVar14 = auVar14 & auVar21;
    if ((ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) | (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar14[0xf] >> 7) << 0xf) != 0xffff) goto LAB_141adb7c5;
    param_1[1] = 0x37;
  }
  uVar3 = 0;
LAB_141adb893:
  *param_1 = uVar3;
  return;
}

