// VA 0x140640df0, PDB extent 719 bytes
// tiny_glade::crash_pickup::crash_payload::_::impl$0::deserialize<ref_mut$<serde_json::de::Deserializer<serde_json::read::SliceRead> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/crash_pickup/crash_payload.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   tiny_glade::crash_pickup::crash_payload::_::impl$0::deserialize<ref_mut$<serde_json::de::Deserializer<serde_json::read::SliceRead>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/crash_pickup/crash_payload.rs
   Extent: 719 */

ulonglong * pdb_140640df0(ulonglong *param_1,longlong param_2)

{
  char *pcVar1;
  byte bVar2;
  byte *arg0;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  uVar3 = *(ulonglong *)(param_2 + 0x28);
  if (uVar3 < *(ulonglong *)(param_2 + 0x20)) {
    do {
      uVar3 = uVar3 + 1;
      bVar2 = *(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar3);
      uVar4 = (ulonglong)bVar2;
      if (0x22 < uVar4) {
LAB_140640e9c:
        if (bVar2 != 0x7b) {
          uStack_40 = 10;
          goto LAB_140640e57;
        }
        pcVar1 = (char *)(param_2 + 0x38);
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          uStack_40 = 0x18;
          goto LAB_140640e57;
        }
        *(ulonglong *)(param_2 + 0x28) = uVar3;
        pdb_140408130(&uStack_40);
        uVar3 = CONCAT44(uStack_34,uStack_38);
        if ((char)uStack_40 == '\0') {
          uVar3 = pdb_140409730(uVar3);
          if (uVar3 != 0) goto LAB_140640ef7;
          uVar3 = 0x8000000000000000;
          *param_1 = 0x8000000000000000;
          *(char *)(param_2 + 0x38) = *(char *)(param_2 + 0x38) + '\x01';
        }
        else {
          if ((char)uStack_40 == '\x02') {
LAB_140640ef7:
            param_1[1] = uVar3;
            *param_1 = 0x8000000000000001;
            *(char *)(param_2 + 0x38) = *(char *)(param_2 + 0x38) + '\x01';
            return param_1;
          }
          pdb_14040f770(&uStack_40,uVar3);
          if (SBORROW8(0,uStack_40)) {
            param_1[1] = CONCAT44(uStack_34,uStack_38);
            *param_1 = 0x8000000000000001;
            *(char *)(param_2 + 0x38) = *(char *)(param_2 + 0x38) + '\x01';
            return param_1;
          }
          *(undefined4 *)param_1 = (undefined4)uStack_40;
          *(undefined4 *)((longlong)param_1 + 4) = uStack_40._4_4_;
          *(undefined4 *)(param_1 + 1) = uStack_38;
          *(undefined4 *)((longlong)param_1 + 0xc) = uStack_34;
          *(char *)(param_2 + 0x38) = *(char *)(param_2 + 0x38) + '\x01';
          param_1[2] = uStack_30;
          uVar3 = *param_1;
          if (uVar3 == 0x8000000000000001) {
            return param_1;
          }
        }
        arg0 = (byte *)param_1[1];
        uVar4 = *(ulonglong *)(param_2 + 0x28);
        if (*(ulonglong *)(param_2 + 0x20) <= uVar4) goto LAB_140640fbe;
        goto LAB_140640f98;
      }
      if ((0x100002600U >> (uVar4 & 0x3f) & 1) == 0) {
        if (uVar4 != 0x22) goto LAB_140640e9c;
        pdb_14040ccc0(&uStack_40);
        if ((char)uStack_40 == '\0') {
          uVar3 = 0x8000000000000000;
          goto LAB_140640edf;
        }
        if ((char)uStack_40 == '\x02') {
          uVar3 = CONCAT44(uStack_34,uStack_38);
        }
        else {
          uStack_40 = CONCAT71(uStack_40._1_7_,0xd);
          uVar3 = pdb_142db90e0(&uStack_40,&UNK_142f57020,&UNK_142f56898);
        }
        goto LAB_140640e8c;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar3;
    } while (uVar3 != *(ulonglong *)(param_2 + 0x20));
  }
  uStack_40 = 5;
LAB_140640e57:
  uVar3 = pdb_142d84ef0(param_2,&uStack_40);
LAB_140640e8c:
  param_1[1] = uVar3;
  uVar3 = 0x8000000000000001;
LAB_140640edf:
  *param_1 = uVar3;
  return param_1;
LAB_140640f98:
  uVar4 = uVar4 + 1;
  bVar2 = *(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar4);
  if ((0x20 < (ulonglong)bVar2) || ((0x100002600U >> ((ulonglong)bVar2 & 0x3f) & 1) == 0)) {
    if (bVar2 == 0x7d) {
      *(ulonglong *)(param_2 + 0x28) = uVar4;
      return param_1;
    }
    uStack_40 = 10;
    uVar4 = pdb_142d855a0(param_2,&uStack_40);
    goto LAB_140640fd8;
  }
  *(ulonglong *)(param_2 + 0x28) = uVar4;
  if (uVar4 == *(ulonglong *)(param_2 + 0x20)) {
LAB_140640fbe:
    uStack_40 = 3;
    uVar4 = pdb_142d855a0(param_2,&uStack_40);
LAB_140640fd8:
    param_1[1] = uVar4;
    *param_1 = 0x8000000000000001;
    if ((uVar3 & 0x7fffffffffffffff) != 0) {
      pub_1406abac0(arg0,uVar3,1);
    }
    return param_1;
  }
  goto LAB_140640f98;
}

