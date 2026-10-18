// VA 0x14052d9f0, PDB extent 385 bytes
// country_core::resources::ui_settings::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/ui_settings.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::ui_settings::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/ui_settings.rs
   Extent: 385 */

void pdb_14052d9f0(undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  switch(param_3) {
  case 9:
    if ((char)param_2[1] == 'o' && *param_2 == 0x676f6c5f656d6167) {
      param_1[1] = 4;
      *param_1 = 0x32;
      return;
    }
    break;
  case 0xd:
    if (*(longlong *)((longlong)param_2 + 5) == 0x726f737275635f6d && *param_2 == 0x635f6d6f74737563
       ) {
      param_1[1] = 5;
      *param_1 = 0x32;
      return;
    }
    break;
  case 0xe:
    if (*(longlong *)((longlong)param_2 + 6) == 0x746c756d5f657a69 && *param_2 == 0x7a69735f6e6f6369
       ) {
      param_1[1] = 0;
      *param_1 = 0x32;
      return;
    }
    break;
  case 0x11:
    auVar2[0] = -((char)*param_2 == UNK_142f64c20);
    auVar2[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142f64c21);
    auVar2[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142f64c22);
    auVar2[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142f64c23);
    auVar2[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142f64c24);
    auVar2[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142f64c25);
    auVar2[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142f64c26);
    auVar2[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142f64c27);
    auVar2[8] = -((char)param_2[1] == UNK_142f64c28);
    auVar2[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142f64c29);
    auVar2[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142f64c2a);
    auVar2[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142f64c2b);
    auVar2[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142f64c2c);
    auVar2[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142f64c2d);
    auVar2[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142f64c2e);
    auVar2[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142f64c2f);
    auVar6[0] = -((char)param_2[2] == UNK_142e49990);
    auVar6[1] = -(UNK_142e49991 == '\0');
    auVar6[2] = -(UNK_142e49992 == '\0');
    auVar6[3] = -(UNK_142e49993 == '\0');
    auVar6[4] = -(UNK_142e49994 == '\0');
    auVar6[5] = -(UNK_142e49995 == '\0');
    auVar6[6] = -(UNK_142e49996 == '\0');
    auVar6[7] = -(UNK_142e49997 == '\0');
    auVar6[8] = -(UNK_142e49998 == '\0');
    auVar6[9] = -(UNK_142e49999 == '\0');
    auVar6[10] = -(UNK_142e4999a == '\0');
    auVar6[0xb] = -(UNK_142e4999b == '\0');
    auVar6[0xc] = -(UNK_142e4999c == '\0');
    auVar6[0xd] = -(UNK_142e4999d == '\0');
    auVar6[0xe] = -(UNK_142e4999e == '\0');
    auVar6[0xf] = -(UNK_142e4999f == '\0');
    auVar6 = auVar6 & auVar2;
    if ((ushort)((ushort)(SUB161(auVar6 >> 7,0) & 1) | (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1 |
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
                (ushort)(byte)(auVar6[0xf] >> 7) << 0xf) == 0xffff) {
      param_1[1] = 1;
      *param_1 = 0x32;
      return;
    }
    auVar3[0] = -((char)*param_2 == UNK_142f64c30);
    auVar3[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142f64c31);
    auVar3[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142f64c32);
    auVar3[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142f64c33);
    auVar3[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142f64c34);
    auVar3[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142f64c35);
    auVar3[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142f64c36);
    auVar3[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142f64c37);
    auVar3[8] = -((char)param_2[1] == UNK_142f64c38);
    auVar3[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142f64c39);
    auVar3[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142f64c3a);
    auVar3[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142f64c3b);
    auVar3[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142f64c3c);
    auVar3[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142f64c3d);
    auVar3[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142f64c3e);
    auVar3[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142f64c3f);
    auVar7[0] = -((char)param_2[2] == UNK_142f53950);
    auVar7[1] = -(UNK_142f53951 == '\0');
    auVar7[2] = -(UNK_142f53952 == '\0');
    auVar7[3] = -(UNK_142f53953 == '\0');
    auVar7[4] = -(UNK_142f53954 == '\0');
    auVar7[5] = -(UNK_142f53955 == '\0');
    auVar7[6] = -(UNK_142f53956 == '\0');
    auVar7[7] = -(UNK_142f53957 == '\0');
    auVar7[8] = -(UNK_142f53958 == '\0');
    auVar7[9] = -(UNK_142f53959 == '\0');
    auVar7[10] = -(UNK_142f5395a == '\0');
    auVar7[0xb] = -(UNK_142f5395b == '\0');
    auVar7[0xc] = -(UNK_142f5395c == '\0');
    auVar7[0xd] = -(UNK_142f5395d == '\0');
    auVar7[0xe] = -(UNK_142f5395e == '\0');
    auVar7[0xf] = -(UNK_142f5395f == '\0');
    auVar7 = auVar7 & auVar3;
    if ((ushort)((ushort)(SUB161(auVar7 >> 7,0) & 1) | (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
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
                (ushort)(byte)(auVar7[0xf] >> 7) << 0xf) == 0xffff) {
      param_1[1] = 2;
      *param_1 = 0x32;
      return;
    }
    break;
  case 0x12:
    auVar4[0] = -((char)*param_2 == UNK_142f64be0);
    auVar4[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142f64be1);
    auVar4[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142f64be2);
    auVar4[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142f64be3);
    auVar4[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142f64be4);
    auVar4[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142f64be5);
    auVar4[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142f64be6);
    auVar4[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142f64be7);
    auVar4[8] = -((char)param_2[1] == UNK_142f64be8);
    auVar4[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142f64be9);
    auVar4[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142f64bea);
    auVar4[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142f64beb);
    auVar4[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142f64bec);
    auVar4[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142f64bed);
    auVar4[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142f64bee);
    auVar4[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142f64bef);
    auVar8[0] = -((char)(short)param_2[2] == UNK_142f64bf0);
    auVar8[1] = -((char)((ushort)(short)param_2[2] >> 8) == UNK_142f64bf1);
    auVar8[2] = -(UNK_142f64bf2 == '\0');
    auVar8[3] = -(UNK_142f64bf3 == '\0');
    auVar8[4] = -(UNK_142f64bf4 == '\0');
    auVar8[5] = -(UNK_142f64bf5 == '\0');
    auVar8[6] = -(UNK_142f64bf6 == '\0');
    auVar8[7] = -(UNK_142f64bf7 == '\0');
    auVar8[8] = -(UNK_142f64bf8 == '\0');
    auVar8[9] = -(UNK_142f64bf9 == '\0');
    auVar8[10] = -(UNK_142f64bfa == '\0');
    auVar8[0xb] = -(UNK_142f64bfb == '\0');
    auVar8[0xc] = -(UNK_142f64bfc == '\0');
    auVar8[0xd] = -(UNK_142f64bfd == '\0');
    auVar8[0xe] = -(UNK_142f64bfe == '\0');
    auVar8[0xf] = -(UNK_142f64bff == '\0');
    auVar8 = auVar8 & auVar4;
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
      param_1[1] = 6;
      *param_1 = 0x32;
      return;
    }
    break;
  case 0x13:
    auVar5[0] = -(*(char *)((longlong)param_2 + 3) == UNK_142f64c00);
    auVar5[1] = -(*(char *)((longlong)param_2 + 4) == UNK_142f64c01);
    auVar5[2] = -(*(char *)((longlong)param_2 + 5) == UNK_142f64c02);
    auVar5[3] = -(*(char *)((longlong)param_2 + 6) == UNK_142f64c03);
    auVar5[4] = -(*(char *)((longlong)param_2 + 7) == UNK_142f64c04);
    auVar5[5] = -((char)param_2[1] == UNK_142f64c05);
    auVar5[6] = -(*(char *)((longlong)param_2 + 9) == UNK_142f64c06);
    auVar5[7] = -(*(char *)((longlong)param_2 + 10) == UNK_142f64c07);
    auVar5[8] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142f64c08);
    auVar5[9] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142f64c09);
    auVar5[10] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142f64c0a);
    auVar5[0xb] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142f64c0b);
    auVar5[0xc] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142f64c0c);
    auVar5[0xd] = -((char)param_2[2] == UNK_142f64c0d);
    auVar5[0xe] = -(*(char *)((longlong)param_2 + 0x11) == UNK_142f64c0e);
    auVar5[0xf] = -(*(char *)((longlong)param_2 + 0x12) == UNK_142f64c0f);
    auVar1[0] = -((char)*param_2 == UNK_142f64c10);
    auVar1[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142f64c11);
    auVar1[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142f64c12);
    auVar1[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142f64c13);
    auVar1[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142f64c14);
    auVar1[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142f64c15);
    auVar1[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142f64c16);
    auVar1[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142f64c17);
    auVar1[8] = -((char)param_2[1] == UNK_142f64c18);
    auVar1[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142f64c19);
    auVar1[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142f64c1a);
    auVar1[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142f64c1b);
    auVar1[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142f64c1c);
    auVar1[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142f64c1d);
    auVar1[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142f64c1e);
    auVar1[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142f64c1f);
    auVar1 = auVar1 & auVar5;
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
                 (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar1[0xf] >> 7) << 0xf) == 0xffff) {
      param_1[1] = 3;
      *param_1 = 0x32;
      return;
    }
  }
  param_1[1] = 7;
  *param_1 = 0x32;
  return;
}

