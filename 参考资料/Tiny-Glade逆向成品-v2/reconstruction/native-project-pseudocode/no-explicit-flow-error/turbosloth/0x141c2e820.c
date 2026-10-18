// VA 0x141c2e820, PDB extent 315 bytes
// turbosloth::store::DiskStore::build_record
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: turbosloth::store::DiskStore::build_record
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
   Extent: 315 */

undefined8 *
pdb_141c2e820(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  longlong *plVar4;
  char cStack_78;
  char cStack_77;
  char cStack_76;
  char cStack_75;
  char cStack_74;
  char cStack_73;
  char cStack_72;
  char cStack_71;
  char cStack_70;
  char cStack_6f;
  char cStack_6e;
  char cStack_6d;
  char cStack_6c;
  char cStack_6b;
  char cStack_6a;
  char cStack_69;
  longlong lStack_58;
  longlong lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  uStack_48 = _DAT_143337b80;
  uStack_40 = _UNK_143337b88;
  lStack_58 = _DAT_143337b70;
  lStack_50 = _UNK_143337b78;
  plVar4 = &lStack_58;
  pdb_141c301a0(&cStack_78);
  auVar3[0] = -(cStack_78 == DAT_14300c7d0);
  auVar3[1] = -(cStack_77 == UNK_14300c7d1);
  auVar3[2] = -(cStack_76 == UNK_14300c7d2);
  auVar3[3] = -(cStack_75 == UNK_14300c7d3);
  auVar3[4] = -(cStack_74 == UNK_14300c7d4);
  auVar3[5] = -(cStack_73 == UNK_14300c7d5);
  auVar3[6] = -(cStack_72 == UNK_14300c7d6);
  auVar3[7] = -(cStack_71 == UNK_14300c7d7);
  auVar3[8] = -(cStack_70 == UNK_14300c7d8);
  auVar3[9] = -(cStack_6f == UNK_14300c7d9);
  auVar3[10] = -(cStack_6e == UNK_14300c7da);
  auVar3[0xb] = -(cStack_6d == UNK_14300c7db);
  auVar3[0xc] = -(cStack_6c == UNK_14300c7dc);
  auVar3[0xd] = -(cStack_6b == UNK_14300c7dd);
  auVar3[0xe] = -(cStack_6a == UNK_14300c7de);
  auVar3[0xf] = -(cStack_69 == UNK_14300c7df);
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
               (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe | (ushort)(auVar3[0xf] >> 7) << 0xf) ==
      0xffff) {
    param_1[1] = 0;
    *param_1 = 2;
    if (lStack_50 != 0) {
      lVar1 = lStack_50 * 0x10 + 0x10;
      uVar2 = lStack_50 + lVar1 + 0x11;
      if (uVar2 != 0) {
        pub_1406abac0((byte *)(lStack_58 - lVar1),uVar2,0x10);
      }
    }
  }
  else {
    if (lStack_50 != 0) {
      lVar1 = lStack_50 * 0x10 + 0x10;
      uVar2 = lStack_50 + lVar1 + 0x11;
      if (uVar2 != 0) {
        pub_1406abac0((byte *)(lStack_58 - lVar1),uVar2,0x10);
      }
    }
    pdb_141c2f990(param_1,param_2,param_3,param_4,plVar4);
  }
  return param_1;
}

