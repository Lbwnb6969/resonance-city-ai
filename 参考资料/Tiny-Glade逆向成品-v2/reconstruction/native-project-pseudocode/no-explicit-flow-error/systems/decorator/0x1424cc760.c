// VA 0x1424cc760, PDB extent 720 bytes
// system_decorator::collision_detection::intersect_wall_decorators<system_decorator::merge_proposal_wall_decorators::propose_wall_decorator_merge_position_inner::closure_env$1>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/collision_detection.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_decorator::collision_detection::intersect_wall_decorators<system_decorator::merge_proposal_wall_decorators::propose_wall_decorator_merge_position_inner::closure_env$1>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/collision_detection.rs
   Extent: 720 */

void pdb_1424cc760(undefined8 param_1,int param_2,undefined4 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,longlong *param_7)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined4 uStack_7c;
  undefined1 (*pauStack_78) [16];
  undefined1 (*pauStack_70) [16];
  undefined1 *puStack_68;
  ushort uStack_60;
  longlong lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 *puStack_38;
  undefined8 *puStack_30;
  
  uStack_7c = param_3;
  uStack_40 = param_1;
  if (param_2 == 1) {
    pauStack_78 = *(undefined1 (**) [16])(param_4 + 0x30);
    puStack_68 = *pauStack_78 + *(longlong *)(param_4 + 0x38) + 1;
    auVar1 = *pauStack_78;
    uStack_60 = ~((ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
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
    pauStack_70 = pauStack_78 + 1;
    lStack_58 = *(longlong *)(param_4 + 0x48);
    uStack_50 = param_6;
    uStack_48 = param_5;
    puStack_38 = &uStack_7c;
    puStack_30 = &uStack_50;
    while (lStack_58 != 0) {
      uVar5 = (uint)uStack_60;
      if (uStack_60 == 0) {
        do {
          auVar1 = *pauStack_70;
          pauStack_78 = pauStack_78 + -0x68;
          pauStack_70 = pauStack_70 + 1;
          uVar5 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
        } while (uVar5 == 0);
      }
      uStack_60 = (ushort)uVar5;
      uVar3 = 0;
      for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
        uVar3 = uVar3 + 1;
      }
      uStack_60 = uStack_60 - 1 & uStack_60;
      lStack_58 = lStack_58 + -1;
      lVar6 = (longlong)pauStack_78 + (ulonglong)uVar3 * -0x68 + -0x68;
      iVar4 = pdb_1424ccc10(&puStack_30,lVar6,
                            (longlong)pauStack_78 + (ulonglong)uVar3 * -0x68 + -0x60);
      if (iVar4 == 1) {
        lVar2 = param_7[2];
        if (lVar2 == *param_7) {
          pdb_142d7f1b0(param_7,lVar2,1,4,4);
        }
        *(int *)(param_7[1] + lVar2 * 4) = (int)lVar6;
        param_7[2] = lVar2 + 1;
        puStack_30 = &uStack_50;
      }
    }
  }
  else {
    pauStack_78 = *(undefined1 (**) [16])(param_4 + 0x30);
    puStack_68 = *pauStack_78 + *(longlong *)(param_4 + 0x38) + 1;
    auVar1 = *pauStack_78;
    uStack_60 = ~((ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
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
    pauStack_70 = pauStack_78 + 1;
    lStack_58 = *(longlong *)(param_4 + 0x48);
    uStack_50 = param_6;
    uStack_48 = param_5;
    puStack_38 = &uStack_7c;
    puStack_30 = &uStack_50;
    while (lStack_58 != 0) {
      uVar5 = (uint)uStack_60;
      if (uStack_60 == 0) {
        do {
          auVar1 = *pauStack_70;
          pauStack_78 = pauStack_78 + -0x68;
          pauStack_70 = pauStack_70 + 1;
          uVar5 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
        } while (uVar5 == 0);
      }
      uStack_60 = (ushort)uVar5;
      uVar3 = 0;
      for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
        uVar3 = uVar3 + 1;
      }
      uStack_60 = uStack_60 - 1 & uStack_60;
      lStack_58 = lStack_58 + -1;
      lVar6 = (longlong)pauStack_78 + (ulonglong)uVar3 * -0x68 + -0x68;
      iVar4 = pdb_1424cca30(&puStack_30,lVar6,
                            (longlong)pauStack_78 + (ulonglong)uVar3 * -0x68 + -0x60);
      if (iVar4 == 1) {
        lVar2 = param_7[2];
        if (lVar2 == *param_7) {
          pdb_142d7f1b0(param_7,lVar2,1,4,4);
        }
        *(int *)(param_7[1] + lVar2 * 4) = (int)lVar6;
        param_7[2] = lVar2 + 1;
        puStack_30 = &uStack_50;
      }
    }
  }
  return;
}

