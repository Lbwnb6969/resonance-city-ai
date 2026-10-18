// VA 0x140142ba0, PDB extent 215 bytes
// country_core::render::render_config::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/render_config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::render_config::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/render_config.rs
   Extent: 215 */

void pdb_140142ba0(undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  switch(param_3) {
  case 4:
    if ((int)*param_2 == 0x656d616e) {
      param_1[1] = 0;
      *param_1 = 0x32;
      return;
    }
    break;
  case 0xc:
    if ((int)param_2[1] == 0x657a6973 && *param_2 == 0x5f6c616369676f6c) {
      param_1[1] = 2;
      *param_1 = 0x32;
      return;
    }
    break;
  case 0xd:
    if (*(longlong *)((longlong)param_2 + 5) == 0x657a69735f6c6163 && *param_2 == 0x6c61636973796870
       ) {
      param_1[1] = 2;
      *param_1 = 0x32;
      return;
    }
    break;
  case 0x10:
    auVar2[0] = -((char)*param_2 == UNK_142e478d0);
    auVar2[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142e478d1);
    auVar2[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142e478d2);
    auVar2[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142e478d3);
    auVar2[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142e478d4);
    auVar2[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142e478d5);
    auVar2[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142e478d6);
    auVar2[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142e478d7);
    auVar2[8] = -((char)param_2[1] == UNK_142e478d8);
    auVar2[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142e478d9);
    auVar2[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142e478da);
    auVar2[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e478db);
    auVar2[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e478dc);
    auVar2[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e478dd);
    auVar2[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e478de);
    auVar2[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e478df);
    uVar1 = (ushort)(SUB161(auVar2 >> 7,0) & 1) | (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
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
            (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe | (ushort)(auVar2[0xf] >> 7) << 0xf;
    goto joined_r0x000140142c6c;
  case 0x11:
    auVar3[0] = -((char)*param_2 == UNK_142e478b0);
    auVar3[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142e478b1);
    auVar3[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142e478b2);
    auVar3[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142e478b3);
    auVar3[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142e478b4);
    auVar3[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142e478b5);
    auVar3[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142e478b6);
    auVar3[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142e478b7);
    auVar3[8] = -((char)param_2[1] == UNK_142e478b8);
    auVar3[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142e478b9);
    auVar3[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142e478ba);
    auVar3[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e478bb);
    auVar3[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e478bc);
    auVar3[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e478bd);
    auVar3[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e478be);
    auVar3[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e478bf);
    auVar4[0] = -((char)param_2[2] == UNK_142e478c0);
    auVar4[1] = -(UNK_142e478c1 == '\0');
    auVar4[2] = -(UNK_142e478c2 == '\0');
    auVar4[3] = -(UNK_142e478c3 == '\0');
    auVar4[4] = -(UNK_142e478c4 == '\0');
    auVar4[5] = -(UNK_142e478c5 == '\0');
    auVar4[6] = -(UNK_142e478c6 == '\0');
    auVar4[7] = -(UNK_142e478c7 == '\0');
    auVar4[8] = -(UNK_142e478c8 == '\0');
    auVar4[9] = -(UNK_142e478c9 == '\0');
    auVar4[10] = -(UNK_142e478ca == '\0');
    auVar4[0xb] = -(UNK_142e478cb == '\0');
    auVar4[0xc] = -(UNK_142e478cc == '\0');
    auVar4[0xd] = -(UNK_142e478cd == '\0');
    auVar4[0xe] = -(UNK_142e478ce == '\0');
    auVar4[0xf] = -(UNK_142e478cf == '\0');
    auVar4 = auVar4 & auVar3;
    uVar1 = (ushort)(SUB161(auVar4 >> 7,0) & 1) | (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
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
            (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar4[0xf] >> 7) << 0xf;
joined_r0x000140142c6c:
    if (uVar1 == 0xffff) {
      param_1[1] = 1;
      *param_1 = 0x32;
      return;
    }
  }
  param_1[1] = 3;
  *param_1 = 0x32;
  return;
}

