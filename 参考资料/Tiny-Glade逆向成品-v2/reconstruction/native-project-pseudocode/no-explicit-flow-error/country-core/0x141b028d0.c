// VA 0x141b028d0, PDB extent 248 bytes
// country_core::startup::load_mod_textures::is_moddable_texture_name
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_mod_textures.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::startup::load_mod_textures::is_moddable_texture_name
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_mod_textures.rs
   Extent: 248 */

bool pdb_141b028d0(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (param_2 < 0x10) {
    if (param_2 == 0) {
      return true;
    }
    uVar1 = 0;
    do {
      if (*(char *)((longlong)param_1 + uVar1) == ':') {
        return false;
      }
      uVar1 = uVar1 + 1;
    } while (param_2 != uVar1);
    if (param_2 < 5) goto LAB_141b02955;
  }
  else {
    lVar2 = pdb_140f69320(0x3a,param_1,param_2);
    if (lVar2 == 1) {
      return false;
    }
  }
  if ((*(char *)((longlong)param_1 + 4) == '/' && (int)*param_1 == 0x756e656d) ||
     ((0xd < param_2 &&
      (*(longlong *)((longlong)param_1 + 6) == 0x2f736e6f63695f72 && *param_1 == 0x5f72657474756c63)
      ))) {
    return false;
  }
LAB_141b02955:
  if (param_2 == 0x12) {
    auVar4[0] = -((char)*param_1 == DAT_14338c880);
    auVar4[1] = -(*(char *)((longlong)param_1 + 1) == UNK_14338c881);
    auVar4[2] = -(*(char *)((longlong)param_1 + 2) == UNK_14338c882);
    auVar4[3] = -(*(char *)((longlong)param_1 + 3) == UNK_14338c883);
    auVar4[4] = -(*(char *)((longlong)param_1 + 4) == UNK_14338c884);
    auVar4[5] = -(*(char *)((longlong)param_1 + 5) == UNK_14338c885);
    auVar4[6] = -(*(char *)((longlong)param_1 + 6) == UNK_14338c886);
    auVar4[7] = -(*(char *)((longlong)param_1 + 7) == UNK_14338c887);
    auVar4[8] = -((char)param_1[1] == UNK_14338c888);
    auVar4[9] = -(*(char *)((longlong)param_1 + 9) == UNK_14338c889);
    auVar4[10] = -(*(char *)((longlong)param_1 + 10) == UNK_14338c88a);
    auVar4[0xb] = -(*(char *)((longlong)param_1 + 0xb) == UNK_14338c88b);
    auVar4[0xc] = -(*(char *)((longlong)param_1 + 0xc) == UNK_14338c88c);
    auVar4[0xd] = -(*(char *)((longlong)param_1 + 0xd) == UNK_14338c88d);
    auVar4[0xe] = -(*(char *)((longlong)param_1 + 0xe) == UNK_14338c88e);
    auVar4[0xf] = -(*(char *)((longlong)param_1 + 0xf) == UNK_14338c88f);
    auVar5[0] = -((char)(short)param_1[2] == DAT_14338c890);
    auVar5[1] = -((char)((ushort)(short)param_1[2] >> 8) == UNK_14338c891);
    auVar5[2] = -(UNK_14338c892 == '\0');
    auVar5[3] = -(UNK_14338c893 == '\0');
    auVar5[4] = -(UNK_14338c894 == '\0');
    auVar5[5] = -(UNK_14338c895 == '\0');
    auVar5[6] = -(UNK_14338c896 == '\0');
    auVar5[7] = -(UNK_14338c897 == '\0');
    auVar5[8] = -(UNK_14338c898 == '\0');
    auVar5[9] = -(UNK_14338c899 == '\0');
    auVar5[10] = -(UNK_14338c89a == '\0');
    auVar5[0xb] = -(UNK_14338c89b == '\0');
    auVar5[0xc] = -(UNK_14338c89c == '\0');
    auVar5[0xd] = -(UNK_14338c89d == '\0');
    auVar5[0xe] = -(UNK_14338c89e == '\0');
    auVar5[0xf] = -(UNK_14338c89f == '\0');
    auVar5 = auVar5 & auVar4;
    bVar3 = (ushort)((ushort)(SUB161(auVar5 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar5 >> 0xf,0) & 1) << 1 |
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
                    (ushort)(byte)(auVar5[0xf] >> 7) << 0xf) == 0xffff;
  }
  else {
    if (param_2 != 0xe) {
      return true;
    }
    bVar3 = *(longlong *)((longlong)param_1 + 6) == 0x7468676965685f6e &&
            *param_1 == 0x5f6e696172726574;
  }
  return !bVar3;
}

