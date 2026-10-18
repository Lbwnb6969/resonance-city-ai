// VA 0x1400053b0, PDB extent 442 bytes
// crash_reporter_gui::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/crash-reporter-gui/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   crash_reporter_gui::_::impl$0::deserialize::impl$0::visit_str<enum2$<ron::error::Error> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/crash-reporter-gui/src/lib.rs
   Extent: 442 */

undefined2 * pdb_1400053b0(undefined2 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  switch(param_3) {
  case 9:
    if ((char)param_2[1] == 'r' && *param_2 == 0x6576697244786946) {
      *param_1 = 0x132;
      return param_1;
    }
    if ((char)param_2[1] == 's' && *param_2 == 0x624f657461647055) {
      *param_1 = 0x432;
      return param_1;
    }
    break;
  case 0xb:
    if (*(longlong *)((longlong)param_2 + 3) == 0x6e657a6f4465766f && *param_2 == 0x6f4465766f6d6552
       ) {
      *param_1 = 0x332;
      return param_1;
    }
    break;
  case 0xc:
    if ((int)param_2[1] == 0x72657669 && *param_2 == 0x7244657461647055) {
      *param_1 = 0x32;
      return param_1;
    }
    break;
  case 0xd:
    if (*(longlong *)((longlong)param_2 + 5) == 0x6e6f4d737046656c && *param_2 == 0x46656c6261736944
       ) {
      *param_1 = 0x732;
      return param_1;
    }
    break;
  case 0xf:
    if (*(longlong *)((longlong)param_2 + 7) == 0x7265766972446574 && *param_2 == 0x7461647055797254
       ) {
      *param_1 = 0x232;
      return param_1;
    }
    break;
  case 0x10:
    auVar2[0] = -((char)*param_2 == UNK_142e33080);
    auVar2[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142e33081);
    auVar2[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142e33082);
    auVar2[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142e33083);
    auVar2[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142e33084);
    auVar2[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142e33085);
    auVar2[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142e33086);
    auVar2[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142e33087);
    auVar2[8] = -((char)param_2[1] == UNK_142e33088);
    auVar2[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142e33089);
    auVar2[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142e3308a);
    auVar2[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e3308b);
    auVar2[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e3308c);
    auVar2[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e3308d);
    auVar2[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e3308e);
    auVar2[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e3308f);
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
        == 0xffff) {
      *param_1 = 0x532;
      return param_1;
    }
    break;
  case 0x14:
    uVar1 = (undefined4)param_2[2];
    auVar4[0] = -((char)uVar1 == UNK_142e33060);
    auVar4[1] = -((char)((uint)uVar1 >> 8) == UNK_142e33061);
    auVar4[2] = -((char)((uint)uVar1 >> 0x10) == UNK_142e33062);
    auVar4[3] = -((char)((uint)uVar1 >> 0x18) == UNK_142e33063);
    auVar4[4] = -(UNK_142e33064 == '\0');
    auVar4[5] = -(UNK_142e33065 == '\0');
    auVar4[6] = -(UNK_142e33066 == '\0');
    auVar4[7] = -(UNK_142e33067 == '\0');
    auVar4[8] = -(UNK_142e33068 == '\0');
    auVar4[9] = -(UNK_142e33069 == '\0');
    auVar4[10] = -(UNK_142e3306a == '\0');
    auVar4[0xb] = -(UNK_142e3306b == '\0');
    auVar4[0xc] = -(UNK_142e3306c == '\0');
    auVar4[0xd] = -(UNK_142e3306d == '\0');
    auVar4[0xe] = -(UNK_142e3306e == '\0');
    auVar4[0xf] = -(UNK_142e3306f == '\0');
    auVar3[0] = -((char)*param_2 == UNK_142e33070);
    auVar3[1] = -(*(char *)((longlong)param_2 + 1) == UNK_142e33071);
    auVar3[2] = -(*(char *)((longlong)param_2 + 2) == UNK_142e33072);
    auVar3[3] = -(*(char *)((longlong)param_2 + 3) == UNK_142e33073);
    auVar3[4] = -(*(char *)((longlong)param_2 + 4) == UNK_142e33074);
    auVar3[5] = -(*(char *)((longlong)param_2 + 5) == UNK_142e33075);
    auVar3[6] = -(*(char *)((longlong)param_2 + 6) == UNK_142e33076);
    auVar3[7] = -(*(char *)((longlong)param_2 + 7) == UNK_142e33077);
    auVar3[8] = -((char)param_2[1] == UNK_142e33078);
    auVar3[9] = -(*(char *)((longlong)param_2 + 9) == UNK_142e33079);
    auVar3[10] = -(*(char *)((longlong)param_2 + 10) == UNK_142e3307a);
    auVar3[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_142e3307b);
    auVar3[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_142e3307c);
    auVar3[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_142e3307d);
    auVar3[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_142e3307e);
    auVar3[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_142e3307f);
    auVar3 = auVar3 & auVar4;
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
      *param_1 = 0x632;
      return param_1;
    }
  }
  pdb_142db7e70(param_1,param_2,param_3,&UNK_142e334c0,8);
  return param_1;
}

