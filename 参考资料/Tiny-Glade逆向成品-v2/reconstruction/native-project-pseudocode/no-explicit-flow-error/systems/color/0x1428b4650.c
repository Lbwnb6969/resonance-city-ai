// VA 0x1428b4650, PDB extent 392 bytes
// system_color::style_picker_target::StairPickingSnapshot::capture
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/style_picker_target.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_color::style_picker_target::StairPickingSnapshot::capture
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/style_picker_target.rs
   Extent: 392 */

undefined8 *
pdb_1428b4650(undefined8 *param_1,int *param_2,longlong param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 param_6)

{
  undefined1 auVar1 [16];
  undefined8 auStack_148 [9];
  undefined8 uStack_100;
  byte *pbStack_b8;
  byte *pbStack_b0;
  undefined8 uStack_a8;
  undefined1 (*pauStack_a0) [16];
  undefined1 (*pauStack_98) [16];
  undefined1 *puStack_90;
  ushort uStack_88;
  undefined8 uStack_80;
  longlong *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  longlong lStack_50;
  byte *pbStack_48;
  longlong lStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  if (*param_2 == 1) {
    pdb_140a60320(&lStack_50,*(undefined8 *)(param_3 + 0x40),param_2[1]);
    pauStack_a0 = (undefined1 (*) [16])*param_5;
    puStack_90 = *pauStack_a0 + param_5[1] + 1;
    auVar1 = *pauStack_a0;
    uStack_88 = ~((ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
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
                 (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
    uStack_80 = param_5[3];
    pauStack_98 = pauStack_a0 + 1;
    pbStack_b0 = pbStack_48 + lStack_40 * 4;
    auStack_148[0] = 2;
    uStack_100 = 2;
    pbStack_b8 = pbStack_48;
    uStack_a8 = param_6;
    plStack_78 = &lStack_50;
    uStack_70 = param_4;
    pdb_1420f38d0(&uStack_68,auStack_148);
    param_1[2] = uStack_58;
    *param_1 = uStack_68;
    param_1[1] = uStack_60;
    if (lStack_50 != 0) {
      pub_1406abac0(pbStack_48,lStack_50 << 2,4);
    }
  }
  else {
    *param_1 = 0;
    param_1[1] = 0x10;
    param_1[2] = 0;
  }
  return param_1;
}

