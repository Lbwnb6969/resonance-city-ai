// VA 0x14289a540, PDB extent 1162 bytes
// system_onboarding::hint_always_on::hint_draw_always_on
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_always_on.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_onboarding::hint_always_on::hint_draw_always_on
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_always_on.rs
   Extent: 1162 */

void pdb_14289a540(longlong *param_1,float param_2,longlong *param_3,undefined8 *param_4,
                  undefined8 *param_5,longlong *param_6,undefined8 *param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 *param_10,undefined8 *param_11)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  byte *pbVar11;
  longlong *in_RDX;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  bool bVar16;
  bool bVar17;
  float fVar18;
  undefined *puStack_e8;
  ulonglong uStack_e0;
  longlong lStack_d0;
  byte *pbStack_c8;
  ulonglong uStack_c0;
  longlong *plStack_b8;
  longlong *plStack_b0;
  undefined1 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulonglong uStack_90;
  byte *pbStack_88;
  ulonglong uStack_80;
  undefined1 auStack_72 [50];
  
  auStack_72._2_8_ = 0xfffffffffffffffe;
  lVar7 = param_11[1];
  uVar6 = *(ulonglong *)*param_11;
  uVar14 = 0;
  uVar8 = uVar6 - *(ulonglong *)(lVar7 + 0x18);
  if (uVar6 < *(ulonglong *)(lVar7 + 0x18)) {
    uVar8 = uVar14;
  }
  uVar15 = uVar6 - *(ulonglong *)(lVar7 + 0x38);
  if (uVar6 < *(ulonglong *)(lVar7 + 0x38)) {
    uVar15 = uVar14;
  }
  bVar16 = uVar15 <= *(ulonglong *)(lVar7 + 0x30);
  uVar15 = *(ulonglong *)(lVar7 + 0x30) - uVar15;
  uVar6 = uVar15;
  if (!bVar16) {
    uVar6 = uVar14;
  }
  bVar17 = uVar8 <= *(ulonglong *)(lVar7 + 0x10);
  uVar8 = *(ulonglong *)(lVar7 + 0x10) - uVar8;
  uVar9 = uVar8;
  if (!bVar17) {
    uVar9 = uVar14;
  }
  uVar6 = uVar9 + uVar6;
  if (bVar17 && uVar8 != 0 || bVar16 && uVar15 != 0) {
    uVar6 = uVar14;
  }
  *(ulonglong *)*param_11 = *(longlong *)(lVar7 + 0x40) - uVar6;
  cVar2 = *(char *)(*in_RDX + 0xf0);
  if ((*(char *)(*in_RDX + 0x123) == '\x01') && (*(char *)*param_4 != '\x10')) {
    cVar5 = pdb_140a00340(*param_5);
    if ((cVar5 == '\0') &&
       (((!bVar17 || uVar8 == 0) && (!bVar16 || uVar15 == 0)) && *(char *)(*param_6 + 10) == '\0'))
    {
      uVar3 = *param_10;
      pdb_140a6ad50(uVar3);
      fVar18 = param_2;
      pdb_140a6ad50(uVar3);
      auStack_72[1] = pdb_140a82300(*param_7);
      plStack_b8 = *(longlong **)(*param_3 + 8);
      plStack_b0 = plStack_b8 + *(longlong *)(*param_3 + 0x10) * 7;
      puStack_a8 = auStack_72 + 1;
      uStack_a0 = param_9;
      uStack_98 = param_8;
      pdb_14209a930(&lStack_d0,&plStack_b8);
      uStack_80 = uStack_c0;
      if (uStack_c0 != 0) {
        plStack_b8 = (longlong *)auStack_72;
        if (uStack_c0 != 1) {
          if (uStack_c0 < 0x15) {
            pdb_142b2beb0(pbStack_c8,uStack_c0,1,&plStack_b8);
          }
          else {
            pdb_142b2c690(pbStack_c8,uStack_c0,&plStack_b8);
          }
        }
        *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
        param_1 = (longlong *)*param_1;
        puStack_e8 = &UNK_1435ac890;
        uStack_e0 = 0x15;
        uVar6 = pdb_14072aeb0(&puStack_e8);
        plVar13 = (longlong *)(uVar6 ^ 0xb1695320004fb443);
        plVar12 = plVar13;
        lVar7 = pdb_14072c2d0(param_1);
        *(undefined1 *)(lVar7 + 0x5e) = 0;
        if (((ulonglong)plVar12 & 1) == 0) {
          lVar7 = param_1[2];
          if (lVar7 == *param_1) {
            pdb_142d7f080(param_1);
          }
          fVar18 = (fVar18 / (param_2 / _DAT_142e4bfe4)) * _DAT_142e36f50;
          uVar1 = *(undefined4 *)(&UNK_1435ac888 + (ulonglong)((byte)(cVar2 - 1U) < 2) * 4);
          lVar4 = param_1[1];
          lVar10 = lVar7 * 0x38;
          *(undefined4 *)(lVar4 + lVar10) = 4;
          *(undefined4 *)(lVar4 + 4 + lVar10) = uVar1;
          *(float *)(lVar4 + 8 + lVar10) = fVar18;
          *(ulonglong *)(lVar4 + 0xc + lVar10) = (ulonglong)_DAT_142e36f34;
          *(undefined4 *)(lVar4 + 0x14 + lVar10) = 0;
          *(longlong **)(lVar4 + 0x30 + lVar10) = plVar13;
          param_1[2] = lVar7 + 1;
        }
        puStack_a8 = (undefined1 *)0x0;
        plStack_b8 = param_1;
        plStack_b0 = plVar13;
        pdb_14072c7c0(&puStack_e8,&plStack_b8);
        pdb_140734630(&plStack_b8,&puStack_e8,&UNK_1435ac8a5,0x1a);
        lVar7 = pdb_140737690(&plStack_b8);
        *(undefined4 *)(lVar7 + 0xbc) = 0xc3480000;
        puStack_e8 = (undefined *)0x0;
        uStack_e0 = uStack_e0 & 0xffffffff00000000;
        pdb_1428a0f70(&plStack_b8,&UNK_1435ac8bf,4,&lStack_d0,&puStack_e8);
      }
      pbStack_88 = pbStack_c8;
      uStack_90 = 0;
      pbVar11 = pbStack_c8 + 8;
      while (uStack_80 != uStack_90) {
        uStack_90 = uStack_90 + 1;
        pdb_141086700(pbVar11);
        pbVar11 = pbVar11 + 0x38;
      }
      if (lStack_d0 != 0) {
        pub_1406abac0(pbStack_88,lStack_d0 * 0x38,8);
      }
    }
  }
  return;
}

