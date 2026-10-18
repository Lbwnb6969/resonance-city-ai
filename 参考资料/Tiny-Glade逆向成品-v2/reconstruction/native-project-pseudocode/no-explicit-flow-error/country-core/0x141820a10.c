// VA 0x141820a10, PDB extent 295 bytes
// country_core::game_profile::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_profile.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::game_profile::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/game_profile.rs
   Extent: 295 */

void pdb_141820a10(undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  switch(param_3) {
  case 8:
    if (*param_2 == 0x6c6169726f747574) {
      param_1[1] = 0;
      *param_1 = 0x32;
      return;
    }
    break;
  case 9:
    if ((char)param_2[1] == 'd' && *param_2 == 0x695f726579616c70) {
      param_1[1] = 2;
      *param_1 = 0x32;
      return;
    }
    break;
  case 0xc:
    if ((int)param_2[1] == 0x73676e69 && *param_2 == 0x646e69625f79656b) {
      param_1[1] = 3;
      *param_1 = 0x32;
      return;
    }
    break;
  case 0xf:
    if (*(longlong *)((longlong)param_2 + 7) == 0x746e756f635f6564 && *param_2 == 0x64616c675f77656e
       ) {
      param_1[1] = 4;
      *param_1 = 0x32;
      return;
    }
    break;
  case 0x12:
    auVar3[0] = -((char)*param_2 == UNK_142f5d8b0);
    auVar3[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142f5d8b1);
    auVar3[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142f5d8b2);
    auVar3[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142f5d8b3);
    auVar3[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142f5d8b4);
    auVar3[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142f5d8b5);
    auVar3[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142f5d8b6);
    auVar3[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142f5d8b7);
    auVar3[8] = -((char)param_2[1] == UNK_142f5d8b8);
    auVar3[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142f5d8b9);
    auVar3[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142f5d8ba);
    auVar3[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142f5d8bb);
    auVar3[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142f5d8bc);
    auVar3[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142f5d8bd);
    auVar3[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142f5d8be);
    auVar3[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142f5d8bf);
    auVar5[0] = -((char)(short)param_2[2] == UNK_142f5d8c0);
    auVar5[1] = -((char)((ushort)(short)param_2[2] >> 8) == UNK_142f5d8c1);
    auVar5[2] = -(UNK_142f5d8c2 == '\0');
    auVar5[3] = -(UNK_142f5d8c3 == '\0');
    auVar5[4] = -(UNK_142f5d8c4 == '\0');
    auVar5[5] = -(UNK_142f5d8c5 == '\0');
    auVar5[6] = -(UNK_142f5d8c6 == '\0');
    auVar5[7] = -(UNK_142f5d8c7 == '\0');
    auVar5[8] = -(UNK_142f5d8c8 == '\0');
    auVar5[9] = -(UNK_142f5d8c9 == '\0');
    auVar5[10] = -(UNK_142f5d8ca == '\0');
    auVar5[0xb] = -(UNK_142f5d8cb == '\0');
    auVar5[0xc] = -(UNK_142f5d8cc == '\0');
    auVar5[0xd] = -(UNK_142f5d8cd == '\0');
    auVar5[0xe] = -(UNK_142f5d8ce == '\0');
    auVar5[0xf] = -(UNK_142f5d8cf == '\0');
    auVar5 = auVar5 & auVar3;
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
      param_1[1] = 1;
      *param_1 = 0x32;
      return;
    }
    break;
  case 0x14:
    uVar1 = (undefined4)param_2[2];
    auVar4[0] = -((char)uVar1 == UNK_142f5d890);
    auVar4[1] = -((char)((uint)uVar1 >> 8) == UNK_142f5d891);
    auVar4[2] = -((char)((uint)uVar1 >> 0x10) == UNK_142f5d892);
    auVar4[3] = -((char)((uint)uVar1 >> 0x18) == UNK_142f5d893);
    auVar4[4] = -(UNK_142f5d894 == '\0');
    auVar4[5] = -(UNK_142f5d895 == '\0');
    auVar4[6] = -(UNK_142f5d896 == '\0');
    auVar4[7] = -(UNK_142f5d897 == '\0');
    auVar4[8] = -(UNK_142f5d898 == '\0');
    auVar4[9] = -(UNK_142f5d899 == '\0');
    auVar4[10] = -(UNK_142f5d89a == '\0');
    auVar4[0xb] = -(UNK_142f5d89b == '\0');
    auVar4[0xc] = -(UNK_142f5d89c == '\0');
    auVar4[0xd] = -(UNK_142f5d89d == '\0');
    auVar4[0xe] = -(UNK_142f5d89e == '\0');
    auVar4[0xf] = -(UNK_142f5d89f == '\0');
    auVar2[0] = -((char)*param_2 == UNK_142f5d8a0);
    auVar2[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142f5d8a1);
    auVar2[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142f5d8a2);
    auVar2[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142f5d8a3);
    auVar2[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142f5d8a4);
    auVar2[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142f5d8a5);
    auVar2[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142f5d8a6);
    auVar2[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142f5d8a7);
    auVar2[8] = -((char)param_2[1] == UNK_142f5d8a8);
    auVar2[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142f5d8a9);
    auVar2[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142f5d8aa);
    auVar2[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142f5d8ab);
    auVar2[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142f5d8ac);
    auVar2[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142f5d8ad);
    auVar2[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142f5d8ae);
    auVar2[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142f5d8af);
    auVar2 = auVar2 & auVar4;
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
      param_1[1] = 2;
      *param_1 = 0x32;
      return;
    }
  }
  param_1[1] = 5;
  *param_1 = 0x32;
  return;
}

