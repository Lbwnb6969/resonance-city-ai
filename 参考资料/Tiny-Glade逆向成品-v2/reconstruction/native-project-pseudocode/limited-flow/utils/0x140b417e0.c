// VA 0x140b417e0, PDB extent 1495 bytes
// utils::rdp::Rdp::stitch_with<glam::f32::vec2::Vec2>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/rdp.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* Matched PDB project procedure: utils::rdp::Rdp::stitch_with<glam::f32::vec2::Vec2>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/rdp.rs
   Extent: 1495 */

void pdb_140b417e0(longlong *param_1,longlong *param_2,ulonglong param_3,longlong param_4)

{
  ulonglong uVar1;
  byte *arg0;
  longlong lVar2;
  code *pcVar3;
  byte *pbVar4;
  byte *pbVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auVar14 [16];
  longlong lStack_88;
  byte *pbStack_80;
  longlong lStack_78;
  longlong lStack_70;
  byte *pbStack_68;
  longlong lStack_60;
  ulonglong uStack_58;
  byte *pbStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  if ((ulonglong)param_1[5] <= param_3) {
    pdb_142dc8420(0,param_3,param_1[5],&UNK_1430588a8);
    goto LAB_140b41cc6;
  }
  uVar13 = param_3 * 8 + 8;
  if (0x7ffffffffffffffc < uVar13 || 0x1ffffffffffffffe < param_3) {
    uVar8 = 0;
LAB_140b41848:
    pdb_142dc7e2a(uVar8,uVar13);
    goto LAB_140b41cc6;
  }
  arg0 = (byte *)param_1[4];
  lVar7 = param_3 + 1;
  if (uVar13 == 0) {
    pbVar4 = (byte *)0x4;
    lVar6 = 0;
  }
  else {
    pdb_14007ee60();
    pbVar4 = pub_1406abab0(uVar13,4);
    if (pbVar4 == (byte *)0x0) {
      uVar8 = 4;
      goto LAB_140b41848;
    }
    lVar6 = param_3 + 1;
  }
  lStack_70 = lVar6;
  pbStack_68 = pbVar4;
  pbStack_50 = pbVar4;
  pub_142e32760(pbVar4,arg0,uVar13);
  uVar12 = param_2[2];
  lStack_60 = param_3 + 1;
  if (uVar12 == 0) {
    pdb_142dc7ef8(0,0,&UNK_1430588c0);
    goto LAB_140b41cc6;
  }
  pbVar4 = (byte *)param_2[1];
  uVar1 = uVar12 - 1;
  uStack_58 = uVar12;
  pub_142e32770(pbVar4,pbVar4 + 8,uVar12 * 8 + -8);
  param_2[2] = uVar1;
  lVar10 = param_2[5];
  if (lVar10 == 0) {
    pdb_142dc7ef8(0,0,&UNK_1430588d8);
    goto LAB_140b41cc6;
  }
  lVar2 = param_2[4];
  uVar12 = lVar10 - 1;
  pub_142e32770(lVar2,lVar2 + 8);
  param_2[5] = uVar12;
  lVar11 = param_3 + 1;
  if ((ulonglong)(lVar6 - lVar11) < uVar12) {
    pdb_142d7f1b0(&lStack_70,lVar11,uVar12,4,8);
    pbStack_50 = pbStack_68;
    lVar11 = lStack_60;
LAB_140b41940:
    pub_142e32760(pbStack_50 + lVar11 * 8,lVar2,lVar10 * 8 + -8);
  }
  else if (uVar12 != 0) goto LAB_140b41940;
  lStack_60 = lVar11 + uVar12;
  if ((ulonglong)param_1[2] <= param_3) {
    pdb_142dc8420(0,param_3,param_1[2],&UNK_1430588f0);
    goto LAB_140b41cc6;
  }
  if (0x7ffffffffffffff8 < uVar13) {
    uVar8 = 0;
LAB_140b4197e:
    pdb_142dc7e2a(uVar8,uVar13);
LAB_140b41cc6:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  pbStack_50 = (byte *)param_1[1];
  if (uVar13 == 0) {
    pbVar5 = (byte *)0x8;
    lVar6 = 0;
  }
  else {
    pdb_14007ee60();
    uVar8 = 8;
    pbVar5 = pub_1406abab0(uVar13,8);
    lVar6 = lVar7;
    if (pbVar5 == (byte *)0x0) goto LAB_140b4197e;
  }
  uVar13 = uStack_58;
  lStack_88 = lVar6;
  pbStack_80 = pbVar5;
  pub_142e32760(pbVar5,pbStack_50);
  lStack_78 = lVar7;
  if ((ulonglong)(lVar6 - lVar7) < uVar1) {
    pdb_142d7f1b0(&lStack_88,lVar7,uVar1,8,8);
    lVar7 = lStack_78;
    pbVar5 = pbStack_80;
    if (uVar13 < 9) goto LAB_140b41a2c;
LAB_140b41a1b:
    lVar7 = lStack_78;
    if (pbVar5 + (lStack_78 * 8 - (longlong)pbVar4) < (byte *)0x20) goto LAB_140b41a2c;
    uVar12 = uVar1 & 0xfffffffffffffffc;
    lVar7 = lStack_78 + uVar12;
    auVar14._8_4_ = (int)param_4;
    auVar14._0_8_ = param_4;
    auVar14._12_4_ = (int)((ulonglong)param_4 >> 0x20);
    uVar9 = 0;
    do {
      lVar6 = *(longlong *)(pbVar4 + uVar9 * 8 + 8);
      lVar10 = *(longlong *)(pbVar4 + uVar9 * 8 + 0x10);
      lVar11 = *(longlong *)(pbVar4 + uVar9 * 8 + 0x10 + 8);
      *(longlong *)(pbVar5 + uVar9 * 8 + lStack_78 * 8) =
           *(longlong *)(pbVar4 + uVar9 * 8) + param_4;
      *(longlong *)(pbVar5 + uVar9 * 8 + lStack_78 * 8 + 8) = lVar6 + auVar14._8_8_;
      *(longlong *)(pbVar5 + uVar9 * 8 + lStack_78 * 8 + 0x10) = lVar10 + param_4;
      *(longlong *)(pbVar5 + uVar9 * 8 + lStack_78 * 8 + 0x10 + 8) = lVar11 + auVar14._8_8_;
      uVar9 = uVar9 + 4;
    } while (uVar12 != uVar9);
    if (uVar1 == uVar12) goto LAB_140b41b54;
  }
  else {
    if (uVar1 == 0) goto LAB_140b41b54;
    if (8 < uVar13) goto LAB_140b41a1b;
LAB_140b41a2c:
    uVar12 = 0;
  }
  lVar6 = uVar13 - uVar12;
  if (((uint)uVar13 & 3) != 1) {
    lVar11 = 0;
    lVar10 = 0;
    do {
      *(longlong *)(pbVar5 + lVar11 + lVar7 * 8) =
           *(longlong *)(pbVar4 + lVar11 + uVar12 * 8) + param_4;
      lVar10 = lVar10 + -1;
      lVar11 = lVar11 + 8;
    } while (-lVar10 != (ulonglong)((uint)uVar13 - 1 & 3));
    lVar7 = lVar7 - lVar10;
    uVar12 = uVar12 - lVar10;
    uVar13 = uStack_58;
  }
  if (2 < lVar6 - 2U) {
    lVar6 = 0;
    do {
      *(longlong *)(pbVar5 + lVar6 * 8 + lVar7 * 8) =
           *(longlong *)(pbVar4 + lVar6 * 8 + uVar12 * 8) + param_4;
      *(longlong *)(pbVar5 + lVar6 * 8 + lVar7 * 8 + 8) =
           *(longlong *)(pbVar4 + lVar6 * 8 + uVar12 * 8 + 8) + param_4;
      *(longlong *)(pbVar5 + lVar6 * 8 + lVar7 * 8 + 0x10) =
           *(longlong *)(pbVar4 + lVar6 * 8 + uVar12 * 8 + 0x10) + param_4;
      *(longlong *)(pbVar5 + lVar6 * 8 + lVar7 * 8 + 0x18) =
           *(longlong *)(pbVar4 + lVar6 * 8 + uVar12 * 8 + 0x18) + param_4;
      lVar6 = lVar6 + 4;
    } while (~uVar12 + uVar13 != lVar6);
    lVar7 = lVar7 + lVar6;
  }
LAB_140b41b54:
  lStack_78 = lVar7;
  if (*param_1 != 0) {
    pub_1406abac0(pbStack_50,*param_1 << 3,8);
  }
  param_1[2] = lStack_78;
  *param_1 = lStack_88;
  param_1[1] = (longlong)pbStack_80;
  if (param_1[3] != 0) {
    pub_1406abac0(arg0,param_1[3] << 3,4);
  }
  param_1[5] = lStack_60;
  param_1[3] = lStack_70;
  param_1[4] = (longlong)pbStack_68;
  if (*param_2 != 0) {
    pub_1406abac0(pbVar4,*param_2 << 3,8);
  }
  if (param_2[3] != 0) {
    uVar8 = GetProcessHeap(lVar2,param_2[3] << 3);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    HeapFree(uVar8,0,lVar2);
    return;
  }
  return;
}

