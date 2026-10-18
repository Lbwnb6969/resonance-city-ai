// VA 0x140b80bb0, PDB extent 49 bytes
// country_core::resources::glade_color_customization::impl$10::eq
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/glade_color_customization.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::glade_color_customization::impl$10::eq
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/glade_color_customization.rs
   Extent: 49 */

undefined2 pdb_140b80bb0(char *param_1,char *param_2)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar2[0] = -(*param_2 == *param_1);
  auVar2[1] = -(param_2[1] == param_1[1]);
  auVar2[2] = -(param_2[2] == param_1[2]);
  auVar2[3] = -(param_2[3] == param_1[3]);
  auVar2[4] = -(param_2[4] == param_1[4]);
  auVar2[5] = -(param_2[5] == param_1[5]);
  auVar2[6] = -(param_2[6] == param_1[6]);
  auVar2[7] = -(param_2[7] == param_1[7]);
  auVar2[8] = -(param_2[8] == param_1[8]);
  auVar2[9] = -(param_2[9] == param_1[9]);
  auVar2[10] = -(param_2[10] == param_1[10]);
  auVar2[0xb] = -(param_2[0xb] == param_1[0xb]);
  auVar2[0xc] = -(param_2[0xc] == param_1[0xc]);
  auVar2[0xd] = -(param_2[0xd] == param_1[0xd]);
  auVar2[0xe] = -(param_2[0xe] == param_1[0xe]);
  auVar2[0xf] = -(param_2[0xf] == param_1[0xf]);
  auVar3[0] = -((char)*(undefined2 *)(param_2 + 0x10) == (char)*(undefined2 *)(param_1 + 0x10));
  auVar3[1] = -((char)((ushort)*(undefined2 *)(param_2 + 0x10) >> 8) ==
               (char)((ushort)*(undefined2 *)(param_1 + 0x10) >> 8));
  auVar3[2] = 0xff;
  auVar3[3] = 0xff;
  auVar3[4] = 0xff;
  auVar3[5] = 0xff;
  auVar3[6] = 0xff;
  auVar3[7] = 0xff;
  auVar3[8] = 0xff;
  auVar3[9] = 0xff;
  auVar3[10] = 0xff;
  auVar3[0xb] = 0xff;
  auVar3[0xc] = 0xff;
  auVar3[0xd] = 0xff;
  auVar3[0xe] = 0xff;
  auVar3[0xf] = 0xff;
  auVar3 = auVar3 & auVar2;
  uVar1 = (ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3
          | (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 | (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6
          | (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9
          | (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar3[0xf] >> 7) << 0xf;
  return CONCAT11((char)(uVar1 >> 8),uVar1 == 0xffff);
}

