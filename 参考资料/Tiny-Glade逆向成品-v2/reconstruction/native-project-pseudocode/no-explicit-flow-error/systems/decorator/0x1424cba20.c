// VA 0x1424cba20, PDB extent 680 bytes
// system_decorator::merge_proposal_roof_decorators::intersect_roof_decorators<system_decorator::ui_systems::decorator_interaction_intent::calculate_decorator_interaction_intent::closure_env$1>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/merge_proposal_roof_decorators.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::merge_proposal_roof_decorators::intersect_roof_decorators<system_decorator::ui_systems::decorator_interaction_intent::calculate_decorator_interaction_intent::closure_env$1>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/merge_proposal_roof_decorators.rs
   Extent: 680 */

void pdb_1424cba20(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7,longlong *param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 **ppuStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  undefined1 (*pauStack_b0) [16];
  undefined1 *puStack_a8;
  ushort uStack_a0;
  longlong lStack_98;
  undefined1 *puStack_90;
  longlong lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined1 auStack_60 [32];
  
  uVar8 = param_10;
  uVar7 = param_9;
  plVar6 = param_8;
  uStack_c0 = *(undefined4 *)(param_2 + 1);
  ppuStack_c8 = (undefined1 **)*param_2;
  uStack_b8 = (undefined1 (*) [16])CONCAT44(param_4,param_3);
  pauStack_b0 = (undefined1 (*) [16])CONCAT44(pauStack_b0._4_4_,0x3dcccccd);
  fVar14 = *(float *)(param_2 + 2);
  fVar16 = *(float *)((longlong)param_2 + 0x14);
  fVar4 = *(float *)(param_2 + 3);
  fVar5 = *(float *)((longlong)param_2 + 0x1c);
  fVar13 = fVar16 * fVar16 + fVar14 * fVar14;
  fVar12 = fVar4 * 0.0 + fVar16 * 0.0 + _DAT_142e36f28 * fVar14;
  fVar12 = fVar12 + fVar12;
  fVar15 = (fVar5 + fVar5) * (fVar16 * 0.0 - fVar4 * _DAT_14300d230) +
           fVar12 * fVar14 + (fVar5 * fVar5 - (fVar13 + fVar4 * fVar4)) * _DAT_142e36f28;
  fVar16 = (fVar5 + fVar5) * (fVar14 * 0.0 - fVar16 * _UNK_14300d238) +
           fVar12 * fVar4 + (fVar5 * fVar5 - (fVar13 + fVar4 * fVar4)) * 0.0;
  fVar14 = _DAT_142e36f28 / SQRT(fVar16 * fVar16 + fVar15 * fVar15);
  pdb_140df3fd0(auStack_60,&ppuStack_c8,&uStack_b8,fVar15 * fVar14,fVar14 * fVar16,&UNK_1435113e8);
  uStack_b8 = *(undefined1 (**) [16])(param_5 + 0x30);
  puStack_a8 = *uStack_b8 + *(longlong *)(param_5 + 0x38) + 1;
  auVar1 = *uStack_b8;
  uStack_a0 = ~((ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
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
  pauStack_b0 = uStack_b8 + 1;
  lStack_98 = *(longlong *)(param_5 + 0x48);
  lStack_88 = param_1 + 8;
  puStack_90 = (undefined1 *)&param_7;
  uStack_80 = uVar7;
  uStack_78 = param_6;
  uStack_70 = uVar8;
  ppuStack_c8 = &puStack_90;
  puStack_68 = auStack_60;
  while (lStack_98 != 0) {
    uVar10 = (uint)uStack_a0;
    if (uStack_a0 == 0) {
      do {
        auVar1 = *pauStack_b0;
        uStack_b8 = uStack_b8 + -0x68;
        pauStack_b0 = pauStack_b0 + 1;
        uVar10 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
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
                         (ushort)(byte)(auVar1[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar10 == 0);
    }
    uStack_a0 = (ushort)uVar10;
    uVar3 = 0;
    for (; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
      uVar3 = uVar3 + 1;
    }
    uStack_a0 = uStack_a0 - 1 & uStack_a0;
    lStack_98 = lStack_98 + -1;
    lVar11 = (longlong)uStack_b8 + (ulonglong)uVar3 * -0x68 + -0x68;
    iVar9 = pdb_1424cc160(&ppuStack_c8,lVar11,(longlong)uStack_b8 + (ulonglong)uVar3 * -0x68 + -0x60
                         );
    if (iVar9 == 1) {
      lVar2 = plVar6[2];
      if (lVar2 == *plVar6) {
        pdb_142d7f1b0(plVar6,lVar2,1,4,4);
      }
      *(int *)(plVar6[1] + lVar2 * 4) = (int)lVar11;
      plVar6[2] = lVar2 + 1;
      ppuStack_c8 = &puStack_90;
    }
  }
  return;
}

