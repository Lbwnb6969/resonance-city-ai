// Matched PDB: country_core::resources::roofs::roof_shape::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
// VA 0x14198eba0, PDB extent 205 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB:
   country_core::resources::roofs::roof_shape::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
   Extent: 205 bytes. No whole-program auto-analysis. */

void pdb_14198eba0(undefined1 *param_1,longlong *param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_3 == 8) {
    if (*param_2 == 0x676e69686374614d) {
      param_1[1] = 0;
      goto LAB_14198ec2b;
    }
    if (*param_2 != 0x656469727265764f) goto LAB_14198ec3b;
  }
  else {
    if (param_3 == 0x11) {
      auVar2[0] = -((char)*param_2 == DAT_14335c490);
      auVar2[1] = -(*(char *)((longlong)param_2 + 1) == UNK_14335c491);
      auVar2[2] = -(*(char *)((longlong)param_2 + 2) == UNK_14335c492);
      auVar2[3] = -(*(char *)((longlong)param_2 + 3) == UNK_14335c493);
      auVar2[4] = -(*(char *)((longlong)param_2 + 4) == UNK_14335c494);
      auVar2[5] = -(*(char *)((longlong)param_2 + 5) == UNK_14335c495);
      auVar2[6] = -(*(char *)((longlong)param_2 + 6) == UNK_14335c496);
      auVar2[7] = -(*(char *)((longlong)param_2 + 7) == UNK_14335c497);
      auVar2[8] = -((char)param_2[1] == UNK_14335c498);
      auVar2[9] = -(*(char *)((longlong)param_2 + 9) == UNK_14335c499);
      auVar2[10] = -(*(char *)((longlong)param_2 + 10) == UNK_14335c49a);
      auVar2[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_14335c49b);
      auVar2[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_14335c49c);
      auVar2[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_14335c49d);
      auVar2[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_14335c49e);
      auVar2[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_14335c49f);
      auVar3[0] = -((char)param_2[2] == DAT_142f45aa0);
      auVar3[1] = -(UNK_142f45aa1 == '\0');
      auVar3[2] = -(UNK_142f45aa2 == '\0');
      auVar3[3] = -(UNK_142f45aa3 == '\0');
      auVar3[4] = -(UNK_142f45aa4 == '\0');
      auVar3[5] = -(UNK_142f45aa5 == '\0');
      auVar3[6] = -(UNK_142f45aa6 == '\0');
      auVar3[7] = -(UNK_142f45aa7 == '\0');
      auVar3[8] = -(UNK_142f45aa8 == '\0');
      auVar3[9] = -(UNK_142f45aa9 == '\0');
      auVar3[10] = -(UNK_142f45aaa == '\0');
      auVar3[0xb] = -(UNK_142f45aab == '\0');
      auVar3[0xc] = -(UNK_142f45aac == '\0');
      auVar3[0xd] = -(UNK_142f45aad == '\0');
      auVar3[0xe] = -(UNK_142f45aae == '\0');
      auVar3[0xf] = -(UNK_142f45aaf == '\0');
      auVar3 = auVar3 & auVar2;
      if ((ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1
                   | (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
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
        param_1[1] = 1;
        goto LAB_14198ec2b;
      }
LAB_14198ec3b:
      uVar1 = pdb_142d8f140(param_2,param_3,&UNK_14335c600,4);
      *(undefined8 *)(param_1 + 8) = uVar1;
      *param_1 = 1;
      return;
    }
    if ((param_3 != 9) || ((char)param_2[1] != 'e' || *param_2 != 0x746972777265764f))
    goto LAB_14198ec3b;
  }
  param_1[1] = 2;
LAB_14198ec2b:
  *param_1 = 0;
  return;
}

