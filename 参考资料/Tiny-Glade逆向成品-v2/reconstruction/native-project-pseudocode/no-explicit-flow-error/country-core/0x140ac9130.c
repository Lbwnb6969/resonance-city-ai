// VA 0x140ac9130, PDB extent 358 bytes
// country_core::resources::time_of_day::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/time_of_day.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::time_of_day::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/time_of_day.rs
   Extent: 358 */

void pdb_140ac9130(undefined1 *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  switch(param_3) {
  case 7:
    if (*(int *)((longlong)param_2 + 3) == 0x796b735f && (int)*param_2 == 0x5f6e7573) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    break;
  case 8:
    if (*param_2 == 0x746e69745f676f66) {
      param_1[1] = 5;
      *param_1 = 0;
      return;
    }
    break;
  case 10:
    if ((short)param_2[1] == 0x7361 && *param_2 == 0x69625f6465657073) {
      param_1[1] = 6;
      *param_1 = 0;
      return;
    }
    break;
  case 0x11:
    auVar4[0] = -((char)*param_2 == UNK_14304c900);
    auVar4[1] = -(*(char *)((longlong)param_2 + 1) == UNK_14304c901);
    auVar4[2] = -(*(char *)((longlong)param_2 + 2) == UNK_14304c902);
    auVar4[3] = -(*(char *)((longlong)param_2 + 3) == UNK_14304c903);
    auVar4[4] = -(*(char *)((longlong)param_2 + 4) == UNK_14304c904);
    auVar4[5] = -(*(char *)((longlong)param_2 + 5) == UNK_14304c905);
    auVar4[6] = -(*(char *)((longlong)param_2 + 6) == UNK_14304c906);
    auVar4[7] = -(*(char *)((longlong)param_2 + 7) == UNK_14304c907);
    auVar4[8] = -((char)param_2[1] == UNK_14304c908);
    auVar4[9] = -(*(char *)((longlong)param_2 + 9) == UNK_14304c909);
    auVar4[10] = -(*(char *)((longlong)param_2 + 10) == UNK_14304c90a);
    auVar4[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_14304c90b);
    auVar4[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_14304c90c);
    auVar4[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_14304c90d);
    auVar4[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_14304c90e);
    auVar4[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_14304c90f);
    auVar8[0] = -((char)param_2[2] == UNK_142e49990);
    auVar8[1] = -(UNK_142e49991 == '\0');
    auVar8[2] = -(UNK_142e49992 == '\0');
    auVar8[3] = -(UNK_142e49993 == '\0');
    auVar8[4] = -(UNK_142e49994 == '\0');
    auVar8[5] = -(UNK_142e49995 == '\0');
    auVar8[6] = -(UNK_142e49996 == '\0');
    auVar8[7] = -(UNK_142e49997 == '\0');
    auVar8[8] = -(UNK_142e49998 == '\0');
    auVar8[9] = -(UNK_142e49999 == '\0');
    auVar8[10] = -(UNK_142e4999a == '\0');
    auVar8[0xb] = -(UNK_142e4999b == '\0');
    auVar8[0xc] = -(UNK_142e4999c == '\0');
    auVar8[0xd] = -(UNK_142e4999d == '\0');
    auVar8[0xe] = -(UNK_142e4999e == '\0');
    auVar8[0xf] = -(UNK_142e4999f == '\0');
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
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    break;
  case 0x12:
    auVar5[0] = -((char)*param_2 == UNK_14304c940);
    auVar5[1] = -(*(char *)((longlong)param_2 + 1) == UNK_14304c941);
    auVar5[2] = -(*(char *)((longlong)param_2 + 2) == UNK_14304c942);
    auVar5[3] = -(*(char *)((longlong)param_2 + 3) == UNK_14304c943);
    auVar5[4] = -(*(char *)((longlong)param_2 + 4) == UNK_14304c944);
    auVar5[5] = -(*(char *)((longlong)param_2 + 5) == UNK_14304c945);
    auVar5[6] = -(*(char *)((longlong)param_2 + 6) == UNK_14304c946);
    auVar5[7] = -(*(char *)((longlong)param_2 + 7) == UNK_14304c947);
    auVar5[8] = -((char)param_2[1] == UNK_14304c948);
    auVar5[9] = -(*(char *)((longlong)param_2 + 9) == UNK_14304c949);
    auVar5[10] = -(*(char *)((longlong)param_2 + 10) == UNK_14304c94a);
    auVar5[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_14304c94b);
    auVar5[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_14304c94c);
    auVar5[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_14304c94d);
    auVar5[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_14304c94e);
    auVar5[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_14304c94f);
    auVar9[0] = -((char)(short)param_2[2] == UNK_14304c950);
    auVar9[1] = -((char)((ushort)(short)param_2[2] >> 8) == UNK_14304c951);
    auVar9[2] = -(UNK_14304c952 == '\0');
    auVar9[3] = -(UNK_14304c953 == '\0');
    auVar9[4] = -(UNK_14304c954 == '\0');
    auVar9[5] = -(UNK_14304c955 == '\0');
    auVar9[6] = -(UNK_14304c956 == '\0');
    auVar9[7] = -(UNK_14304c957 == '\0');
    auVar9[8] = -(UNK_14304c958 == '\0');
    auVar9[9] = -(UNK_14304c959 == '\0');
    auVar9[10] = -(UNK_14304c95a == '\0');
    auVar9[0xb] = -(UNK_14304c95b == '\0');
    auVar9[0xc] = -(UNK_14304c95c == '\0');
    auVar9[0xd] = -(UNK_14304c95d == '\0');
    auVar9[0xe] = -(UNK_14304c95e == '\0');
    auVar9[0xf] = -(UNK_14304c95f == '\0');
    auVar9 = auVar9 & auVar5;
    if ((ushort)((ushort)(SUB161(auVar9 >> 7,0) & 1) | (ushort)(SUB161(auVar9 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar9 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar9 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar9 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar9 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar9 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar9 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar9 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar9 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar9 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar9 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar9 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar9 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar9 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar9[0xf] >> 7) << 0xf) == 0xffff) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    break;
  case 0x14:
    iVar1 = (int)param_2[2];
    auVar6[0] = -((char)iVar1 == UNK_14304c910);
    auVar6[1] = -((char)((uint)iVar1 >> 8) == UNK_14304c911);
    auVar6[2] = -((char)((uint)iVar1 >> 0x10) == UNK_14304c912);
    auVar6[3] = -((char)((uint)iVar1 >> 0x18) == UNK_14304c913);
    auVar6[4] = -(UNK_14304c914 == '\0');
    auVar6[5] = -(UNK_14304c915 == '\0');
    auVar6[6] = -(UNK_14304c916 == '\0');
    auVar6[7] = -(UNK_14304c917 == '\0');
    auVar6[8] = -(UNK_14304c918 == '\0');
    auVar6[9] = -(UNK_14304c919 == '\0');
    auVar6[10] = -(UNK_14304c91a == '\0');
    auVar6[0xb] = -(UNK_14304c91b == '\0');
    auVar6[0xc] = -(UNK_14304c91c == '\0');
    auVar6[0xd] = -(UNK_14304c91d == '\0');
    auVar6[0xe] = -(UNK_14304c91e == '\0');
    auVar6[0xf] = -(UNK_14304c91f == '\0');
    auVar2[0] = -((char)*param_2 == UNK_14304c920);
    auVar2[1] = -(*(char *)((longlong)param_2 + 1) == UNK_14304c921);
    auVar2[2] = -(*(char *)((longlong)param_2 + 2) == UNK_14304c922);
    auVar2[3] = -(*(char *)((longlong)param_2 + 3) == UNK_14304c923);
    auVar2[4] = -(*(char *)((longlong)param_2 + 4) == UNK_14304c924);
    auVar2[5] = -(*(char *)((longlong)param_2 + 5) == UNK_14304c925);
    auVar2[6] = -(*(char *)((longlong)param_2 + 6) == UNK_14304c926);
    auVar2[7] = -(*(char *)((longlong)param_2 + 7) == UNK_14304c927);
    auVar2[8] = -((char)param_2[1] == UNK_14304c928);
    auVar2[9] = -(*(char *)((longlong)param_2 + 9) == UNK_14304c929);
    auVar2[10] = -(*(char *)((longlong)param_2 + 10) == UNK_14304c92a);
    auVar2[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_14304c92b);
    auVar2[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_14304c92c);
    auVar2[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_14304c92d);
    auVar2[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_14304c92e);
    auVar2[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_14304c92f);
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
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
    iVar1 = (int)param_2[2];
    auVar7[0] = -((char)iVar1 == UNK_14304c910);
    auVar7[1] = -((char)((uint)iVar1 >> 8) == UNK_14304c911);
    auVar7[2] = -((char)((uint)iVar1 >> 0x10) == UNK_14304c912);
    auVar7[3] = -((char)((uint)iVar1 >> 0x18) == UNK_14304c913);
    auVar7[4] = -(UNK_14304c914 == '\0');
    auVar7[5] = -(UNK_14304c915 == '\0');
    auVar7[6] = -(UNK_14304c916 == '\0');
    auVar7[7] = -(UNK_14304c917 == '\0');
    auVar7[8] = -(UNK_14304c918 == '\0');
    auVar7[9] = -(UNK_14304c919 == '\0');
    auVar7[10] = -(UNK_14304c91a == '\0');
    auVar7[0xb] = -(UNK_14304c91b == '\0');
    auVar7[0xc] = -(UNK_14304c91c == '\0');
    auVar7[0xd] = -(UNK_14304c91d == '\0');
    auVar7[0xe] = -(UNK_14304c91e == '\0');
    auVar7[0xf] = -(UNK_14304c91f == '\0');
    auVar3[0] = -((char)*param_2 == UNK_14304c930);
    auVar3[1] = -(*(char *)((longlong)param_2 + 1) == UNK_14304c931);
    auVar3[2] = -(*(char *)((longlong)param_2 + 2) == UNK_14304c932);
    auVar3[3] = -(*(char *)((longlong)param_2 + 3) == UNK_14304c933);
    auVar3[4] = -(*(char *)((longlong)param_2 + 4) == UNK_14304c934);
    auVar3[5] = -(*(char *)((longlong)param_2 + 5) == UNK_14304c935);
    auVar3[6] = -(*(char *)((longlong)param_2 + 6) == UNK_14304c936);
    auVar3[7] = -(*(char *)((longlong)param_2 + 7) == UNK_14304c937);
    auVar3[8] = -((char)param_2[1] == UNK_14304c938);
    auVar3[9] = -(*(char *)((longlong)param_2 + 9) == UNK_14304c939);
    auVar3[10] = -(*(char *)((longlong)param_2 + 10) == UNK_14304c93a);
    auVar3[0xb] = -(*(char *)((longlong)param_2 + 0xb) == UNK_14304c93b);
    auVar3[0xc] = -(*(char *)((longlong)param_2 + 0xc) == UNK_14304c93c);
    auVar3[0xd] = -(*(char *)((longlong)param_2 + 0xd) == UNK_14304c93d);
    auVar3[0xe] = -(*(char *)((longlong)param_2 + 0xe) == UNK_14304c93e);
    auVar3[0xf] = -(*(char *)((longlong)param_2 + 0xf) == UNK_14304c93f);
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
      *param_1 = 0;
      return;
    }
  }
  param_1[1] = 7;
  *param_1 = 0;
  return;
}

