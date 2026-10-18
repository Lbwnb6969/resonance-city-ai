// VA 0x140142c80, PDB extent 327 bytes
// country_core::render::render_config::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/render_config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::render_config::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/render_config.rs
   Extent: 327 */

void pdb_140142c80(undefined1 *param_1,longlong *param_2,undefined8 param_3)

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
  case 7:
    if (*(int *)((longlong)param_2 + 3) == 0x726f7469 && (int)*param_2 == 0x696e6f6d) {
      param_1[1] = 5;
      *param_1 = 0x32;
      return;
    }
    break;
  case 10:
    if ((short)param_2[1] == 0x6e65 && *param_2 == 0x657263736c6c7566) {
      param_1[1] = 0;
      *param_1 = 0x32;
      return;
    }
    break;
  case 0x11:
    auVar1[0] = -((char)*param_2 == UNK_142e47900);
    auVar1[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142e47901);
    auVar1[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142e47902);
    auVar1[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142e47903);
    auVar1[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142e47904);
    auVar1[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142e47905);
    auVar1[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142e47906);
    auVar1[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142e47907);
    auVar1[8] = -((char)param_2[1] == UNK_142e47908);
    auVar1[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142e47909);
    auVar1[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142e4790a);
    auVar1[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e4790b);
    auVar1[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e4790c);
    auVar1[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e4790d);
    auVar1[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e4790e);
    auVar1[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e4790f);
    auVar5[0] = -((char)param_2[2] == UNK_142e47910);
    auVar5[1] = -(UNK_142e47911 == '\0');
    auVar5[2] = -(UNK_142e47912 == '\0');
    auVar5[3] = -(UNK_142e47913 == '\0');
    auVar5[4] = -(UNK_142e47914 == '\0');
    auVar5[5] = -(UNK_142e47915 == '\0');
    auVar5[6] = -(UNK_142e47916 == '\0');
    auVar5[7] = -(UNK_142e47917 == '\0');
    auVar5[8] = -(UNK_142e47918 == '\0');
    auVar5[9] = -(UNK_142e47919 == '\0');
    auVar5[10] = -(UNK_142e4791a == '\0');
    auVar5[0xb] = -(UNK_142e4791b == '\0');
    auVar5[0xc] = -(UNK_142e4791c == '\0');
    auVar5[0xd] = -(UNK_142e4791d == '\0');
    auVar5[0xe] = -(UNK_142e4791e == '\0');
    auVar5[0xf] = -(UNK_142e4791f == '\0');
    auVar5 = auVar5 & auVar1;
    if ((ushort)((ushort)(SUB161(auVar5 >> 7,0) & 1) | (ushort)(SUB161(auVar5 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar5 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar5 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar5[0xf] >> 7) << 0xf) == 0xffff) {
      param_1[1] = 3;
      *param_1 = 0x32;
      return;
    }
    break;
  case 0x13:
    auVar7[0] = -(*(char *)((longlong)param_2 + 3) == UNK_142e478e0);
    auVar7[1] = -(*(char *)((longlong)param_2 + 4) == UNK_142e478e1);
    auVar7[2] = -(*(char *)((longlong)param_2 + 5) == UNK_142e478e2);
    auVar7[3] = -(*(char *)((longlong)param_2 + 6) == UNK_142e478e3);
    auVar7[4] = -(*(char *)((longlong)param_2 + 7) == UNK_142e478e4);
    auVar7[5] = -((char)param_2[1] == UNK_142e478e5);
    auVar7[6] = -(*(char *)((longlong)param_2 + 9) == UNK_142e478e6);
    auVar7[7] = -(*(char *)((longlong)param_2 + 10) == UNK_142e478e7);
    auVar7[8] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e478e8);
    auVar7[9] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e478e9);
    auVar7[10] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e478ea);
    auVar7[0xb] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e478eb);
    auVar7[0xc] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e478ec);
    auVar7[0xd] = -((char)param_2[2] == UNK_142e478ed);
    auVar7[0xe] = -(*(char *)((longlong)param_2 + 0x11) == UNK_142e478ee);
    auVar7[0xf] = -(*(char *)((longlong)param_2 + 0x12) == UNK_142e478ef);
    auVar3[0] = -((char)*param_2 == UNK_142e478f0);
    auVar3[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142e478f1);
    auVar3[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142e478f2);
    auVar3[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142e478f3);
    auVar3[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142e478f4);
    auVar3[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142e478f5);
    auVar3[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142e478f6);
    auVar3[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142e478f7);
    auVar3[8] = -((char)param_2[1] == UNK_142e478f8);
    auVar3[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142e478f9);
    auVar3[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142e478fa);
    auVar3[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e478fb);
    auVar3[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e478fc);
    auVar3[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e478fd);
    auVar3[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e478fe);
    auVar3[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e478ff);
    auVar3 = auVar3 & auVar7;
    if ((ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar3[0xf] >> 7) << 0xf) == 0xffff) {
      param_1[1] = 4;
      *param_1 = 0x32;
      return;
    }
    break;
  case 0x15:
    auVar8[0] = -(*(char *)((longlong)param_2 + 5) == UNK_142e47920);
    auVar8[1] = -(*(char *)((longlong)param_2 + 6) == UNK_142e47921);
    auVar8[2] = -(*(char *)((longlong)param_2 + 7) == UNK_142e47922);
    auVar8[3] = -((char)param_2[1] == UNK_142e47923);
    auVar8[4] = -(*(char *)((longlong)param_2 + 9) == UNK_142e47924);
    auVar8[5] = -(*(char *)((longlong)param_2 + 10) == UNK_142e47925);
    auVar8[6] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e47926);
    auVar8[7] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e47927);
    auVar8[8] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e47928);
    auVar8[9] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e47929);
    auVar8[10] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e4792a);
    auVar8[0xb] = -((char)param_2[2] == UNK_142e4792b);
    auVar8[0xc] = -(*(char *)((longlong)param_2 + 0x11) == UNK_142e4792c);
    auVar8[0xd] = -(*(char *)((longlong)param_2 + 0x12) == UNK_142e4792d);
    auVar8[0xe] = -(*(char *)((longlong)param_2 + 0x13) == UNK_142e4792e);
    auVar8[0xf] = -(*(char *)((longlong)param_2 + 0x14) == UNK_142e4792f);
    auVar4[0] = -((char)*param_2 == UNK_142e47930);
    auVar4[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142e47931);
    auVar4[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142e47932);
    auVar4[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142e47933);
    auVar4[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142e47934);
    auVar4[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142e47935);
    auVar4[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142e47936);
    auVar4[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142e47937);
    auVar4[8] = -((char)param_2[1] == UNK_142e47938);
    auVar4[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142e47939);
    auVar4[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142e4793a);
    auVar4[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e4793b);
    auVar4[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e4793c);
    auVar4[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e4793d);
    auVar4[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e4793e);
    auVar4[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e4793f);
    auVar4 = auVar4 & auVar8;
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
                 (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar4[0xf] >> 7) << 0xf) == 0xffff) {
      param_1[1] = 2;
      *param_1 = 0x32;
      return;
    }
    break;
  case 0x1a:
    auVar6[0] = -(*(char *)((longlong)param_2 + 10) == UNK_142e47940);
    auVar6[1] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e47941);
    auVar6[2] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e47942);
    auVar6[3] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e47943);
    auVar6[4] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e47944);
    auVar6[5] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e47945);
    auVar6[6] = -((char)param_2[2] == UNK_142e47946);
    auVar6[7] = -(*(char *)((longlong)param_2 + 0x11) == UNK_142e47947);
    auVar6[8] = -(*(char *)((longlong)param_2 + 0x12) == UNK_142e47948);
    auVar6[9] = -(*(char *)((longlong)param_2 + 0x13) == UNK_142e47949);
    auVar6[10] = -(*(char *)((longlong)param_2 + 0x14) == UNK_142e4794a);
    auVar6[0xb] = -(*(char *)((longlong)param_2 + 0x15) == UNK_142e4794b);
    auVar6[0xc] = -(*(char *)((longlong)param_2 + 0x16) == UNK_142e4794c);
    auVar6[0xd] = -(*(char *)((longlong)param_2 + 0x17) == UNK_142e4794d);
    auVar6[0xe] = -((char)param_2[3] == UNK_142e4794e);
    auVar6[0xf] = -(*(char *)((longlong)param_2 + 0x19) == UNK_142e4794f);
    auVar2[0] = -((char)*param_2 == UNK_142e47950);
    auVar2[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142e47951);
    auVar2[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142e47952);
    auVar2[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142e47953);
    auVar2[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142e47954);
    auVar2[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142e47955);
    auVar2[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142e47956);
    auVar2[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142e47957);
    auVar2[8] = -((char)param_2[1] == UNK_142e47958);
    auVar2[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142e47959);
    auVar2[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142e4795a);
    auVar2[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e4795b);
    auVar2[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e4795c);
    auVar2[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e4795d);
    auVar2[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e4795e);
    auVar2[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e4795f);
    auVar2 = auVar2 & auVar6;
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
      param_1[1] = 1;
      *param_1 = 0x32;
      return;
    }
  }
  param_1[1] = 6;
  *param_1 = 0x32;
  return;
}

