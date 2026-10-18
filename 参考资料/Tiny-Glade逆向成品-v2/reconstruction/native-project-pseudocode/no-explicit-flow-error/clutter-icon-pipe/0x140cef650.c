// VA 0x140cef650, PDB extent 629 bytes
// serde_json::de::Deserializer::parse_integer<serde_json::read::SliceRead>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-icon-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   serde_json::de::Deserializer::parse_integer<serde_json::read::SliceRead>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-icon-pipe/src/lib.rs
   Extent: 629 */

void pdb_140cef650(ulonglong *param_1,longlong param_2,byte param_3)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  byte bVar6;
  undefined1 auVar7 [16];
  undefined8 uStack_30;
  ulonglong uStack_28;
  
  uVar5 = *(ulonglong *)(param_2 + 0x20);
  uVar3 = *(ulonglong *)(param_2 + 0x28);
  if (uVar5 <= uVar3) {
    uStack_30 = 5;
LAB_140cef7f6:
    uStack_28 = pdb_142d855a0(param_2,&uStack_30);
LAB_140cef826:
    param_1[1] = uStack_28;
    *param_1 = 3;
    return;
  }
  lVar2 = *(longlong *)(param_2 + 0x18);
  cVar1 = *(char *)(lVar2 + uVar3);
  uVar3 = uVar3 + 1;
  *(ulonglong *)(param_2 + 0x28) = uVar3;
  if (cVar1 == '0') {
    if (uVar5 <= uVar3) {
LAB_140cef884:
      uVar5 = (ulonglong)param_3;
      uVar4 = (ulonglong)(param_3 == 0) << 0x3f;
      goto LAB_140cef894;
    }
    cVar1 = *(char *)(lVar2 + uVar3);
    if ((byte)(cVar1 - 0x30U) < 10) {
      uStack_30 = 0xd;
      uStack_28 = pdb_142d84ef0(param_2,&uStack_30);
      goto LAB_140cef826;
    }
    if (cVar1 == '.') {
      pdb_140cef420();
    }
    else {
      if ((cVar1 != 'E') && (cVar1 != 'e')) goto LAB_140cef884;
      pdb_140404b60();
    }
    goto joined_r0x000140cef8bd;
  }
  if (8 < (byte)(cVar1 - 0x31U)) {
    uStack_30 = 0xd;
    goto LAB_140cef7f6;
  }
  uVar4 = (ulonglong)(byte)(cVar1 - 0x30);
  if (uVar3 < uVar5) {
    do {
      bVar6 = *(char *)(lVar2 + uVar3) - 0x30;
      if (9 < bVar6) goto LAB_140cef752;
      if ((0x1999999999999998 < uVar4) && ((uVar4 != 0x1999999999999999 || (5 < bVar6)))) {
        pdb_142db1a40(&uStack_30);
        if ((int)uStack_30 == 1) {
          param_1[1] = uStack_28;
          *param_1 = 3;
          return;
        }
        param_1[1] = uStack_28;
        *param_1 = 0;
        return;
      }
      uVar3 = uVar3 + 1;
      *(ulonglong *)(param_2 + 0x28) = uVar3;
      uVar4 = (ulonglong)bVar6 + uVar4 * 10;
    } while (uVar5 != uVar3);
LAB_140cef791:
    uVar5 = 1;
    if (param_3 != 0) goto LAB_140cef894;
    if ((longlong)-uVar4 < 0) {
      uVar5 = 2;
      uVar4 = -uVar4;
      goto LAB_140cef894;
    }
    auVar7._8_4_ = (int)(uVar4 >> 0x20);
    auVar7._0_8_ = uVar4;
    auVar7._12_4_ = _UNK_142e42374;
    uStack_28 = (ulonglong)
                ((auVar7._8_8_ - _UNK_142e42388) +
                ((double)CONCAT44(_DAT_142e42370,(int)uVar4) - _DAT_142e42380)) | 0x8000000000000000
    ;
  }
  else {
LAB_140cef752:
    if (uVar5 <= uVar3) goto LAB_140cef791;
    cVar1 = *(char *)(lVar2 + uVar3);
    if (cVar1 == '.') {
      pdb_140cef420();
    }
    else {
      if ((cVar1 != 'E') && (cVar1 != 'e')) goto LAB_140cef791;
      pdb_140404b60();
    }
joined_r0x000140cef8bd:
    if ((char)uStack_30 != '\0') goto LAB_140cef826;
  }
  uVar5 = 0;
  uVar4 = uStack_28;
LAB_140cef894:
  *param_1 = uVar5;
  param_1[1] = uVar4;
  return;
}

