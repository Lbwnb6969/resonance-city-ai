// VA 0x140404b60, PDB extent 573 bytes
// serde_json::de::Deserializer::parse_exponent<serde_json::read::SliceRead>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   serde_json::de::Deserializer::parse_exponent<serde_json::read::SliceRead>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 573 */

void pdb_140404b60(undefined8 *param_1,longlong param_2,char param_3,longlong param_4,int param_5)

{
  double dVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  char cVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  uint uVar9;
  byte bVar10;
  ulonglong uVar11;
  bool bVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined8 auStack_30 [3];
  
  uVar3 = *(ulonglong *)(param_2 + 0x20);
  lVar4 = *(longlong *)(param_2 + 0x28);
  uVar11 = lVar4 + 1;
  *(ulonglong *)(param_2 + 0x28) = uVar11;
  cVar6 = '\x01';
  if (uVar11 < uVar3) {
    cVar2 = *(char *)(*(longlong *)(param_2 + 0x18) + uVar11);
    cVar6 = '\x01';
    cVar5 = '\x01';
    if (cVar2 != '+') {
      if (cVar2 != '-') goto LAB_140404ba0;
      cVar5 = '\0';
    }
    cVar6 = cVar5;
    uVar11 = lVar4 + 2;
    *(ulonglong *)(param_2 + 0x28) = uVar11;
  }
LAB_140404ba0:
  if (uVar3 <= uVar11) {
    auStack_30[0] = 5;
LAB_140404d48:
    uVar8 = pdb_142d855a0(param_2,auStack_30);
    param_1[1] = uVar8;
    *param_1 = 1;
    return;
  }
  cVar2 = *(char *)(*(longlong *)(param_2 + 0x18) + uVar11);
  *(ulonglong *)(param_2 + 0x28) = uVar11 + 1;
  bVar10 = cVar2 - 0x30;
  if (9 < bVar10) {
    auStack_30[0] = 0xd;
    goto LAB_140404d48;
  }
  uVar9 = (uint)bVar10;
  if (uVar11 + 1 < uVar3) {
    uVar11 = uVar11 + 2;
    do {
      bVar10 = *(char *)(*(longlong *)(param_2 + 0x18) + -1 + uVar11) - 0x30;
      if (9 < bVar10) break;
      *(ulonglong *)(param_2 + 0x28) = uVar11;
      if ((0xccccccb < (int)uVar9) && ((uVar9 != 0xccccccc || (7 < bVar10)))) {
        pdb_142db1d40(param_1,param_2,param_3,param_4 == 0,cVar6);
        return;
      }
      uVar9 = (uint)bVar10 + uVar9 * 10;
      bVar12 = uVar11 != uVar3;
      uVar11 = uVar11 + 1;
    } while (bVar12);
  }
  if (cVar6 == '\0') {
    uVar7 = (-1 < (int)(param_5 - uVar9)) + 0x7fffffff;
    bVar12 = SBORROW4(param_5,uVar9);
    uVar9 = -uVar9;
  }
  else {
    uVar7 = ((int)(param_5 + uVar9) >> 0x1f) + 0x80000000;
    bVar12 = SCARRY4(param_5,uVar9);
  }
  uVar9 = param_5 + uVar9;
  if (bVar12) {
    uVar9 = uVar7;
  }
  auVar14._8_4_ = (int)((ulonglong)param_4 >> 0x20);
  auVar14._0_8_ = param_4;
  auVar14._12_4_ = _UNK_142e42374;
  dVar13 = (auVar14._8_8_ - _UNK_142e42388) +
           ((double)CONCAT44(_DAT_142e42370,(int)param_4) - _DAT_142e42380);
  uVar7 = -uVar9;
  if ((int)-uVar9 < 0) {
    uVar7 = uVar9;
  }
  while (0x134 < uVar7) {
    if ((dVar13 == 0.0) && (!NAN(dVar13))) goto joined_r0x000140404d3b;
    if (-1 < (int)uVar9) goto LAB_140404d68;
    dVar13 = dVar13 / _DAT_142f566e0;
    uVar9 = uVar9 + 0x134;
    uVar7 = -uVar9;
    if ((int)-uVar9 < 0) {
      uVar7 = uVar9;
    }
  }
  dVar1 = *(double *)(_DAT_143ca4b10 + (ulonglong)uVar7 * 8);
  if ((int)uVar9 < 0) {
    dVar13 = dVar13 / dVar1;
  }
  else {
    dVar13 = dVar13 * dVar1;
    if (ABS(dVar13) == INFINITY) {
LAB_140404d68:
      auStack_30[0] = 0xe;
      uVar8 = pdb_142d855a0(param_2,auStack_30);
      param_1[1] = uVar8;
      uVar8 = 1;
      goto LAB_140404d29;
    }
  }
joined_r0x000140404d3b:
  if (param_3 == '\0') {
    dVar13 = (double)((ulonglong)dVar13 ^ _DAT_142f566f0);
  }
  param_1[1] = dVar13;
  uVar8 = 0;
LAB_140404d29:
  *param_1 = uVar8;
  return;
}

