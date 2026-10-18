// VA 0x140a5f000, PDB extent 981 bytes
// country_core::resources::stairs::stairs_state::StairsState::reduce_diff
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::stairs::stairs_state::StairsState::reduce_diff
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_state.rs
   Extent: 981 */

void pdb_140a5f000(undefined8 *param_1,undefined8 *param_2,longlong param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  int iVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 (*pauVar7) [16];
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 (*pauVar11) [16];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulonglong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulonglong uStack_a8;
  undefined8 uStack_a0;
  longlong lStack_98;
  undefined8 *puStack_90;
  undefined1 (*pauStack_88) [16];
  undefined1 (*pauStack_80) [16];
  undefined1 *puStack_78;
  ushort uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lVar10 = param_2[3];
  puStack_60 = param_4;
  puStack_58 = param_2;
  if (lVar10 == 0) {
    uStack_68 = 0;
    lVar5 = param_3;
  }
  else {
    pauVar11 = (undefined1 (*) [16])*param_2;
    auVar2 = *pauVar11;
    uVar6 = ~(uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
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
                           (ushort)(byte)(auVar2[0xf] >> 7) << 0xf);
    pauVar7 = pauVar11 + 1;
    puVar1 = param_4 + 4;
    do {
      if ((short)uVar6 == 0) {
        do {
          auVar2 = *pauVar7;
          pauVar11 = pauVar11 + -8;
          pauVar7 = pauVar7 + 1;
          uVar6 = (ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
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
                          (ushort)(byte)(auVar2[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar6 == 0);
      }
      iVar3 = 0;
      for (uVar4 = uVar6; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        iVar3 = iVar3 + 1;
      }
      lVar8 = (longlong)pauVar11 - (ulonglong)(uint)(iVar3 << 3);
      param_4 = (undefined8 *)(lVar8 + -8);
      uStack_49 = 1;
      uStack_4a = 1;
      lVar5 = pdb_1400af680(puVar1,param_4);
      uStack_49 = 1;
      uStack_4a = 1;
      pdb_140cab960(&uStack_a0,puStack_60);
      if ((int)uStack_a0 == 1) {
        uStack_49 = 1;
        uStack_4a = 1;
        pdb_140cacca0(puStack_58,lVar8);
      }
      uVar6 = uVar6 - 1 & uVar6;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    uStack_68 = puStack_58[3];
  }
  pauStack_88 = (undefined1 (*) [16])*puStack_58;
  lVar10 = puStack_58[1];
  auVar2 = *pauStack_88;
  if (lVar10 == 0) {
    uStack_a0 = 0;
  }
  else {
    uVar9 = lVar10 * 8 + 0x17U & 0xfffffffffffffff0;
    lVar5 = lVar10 + uVar9 + 0x11;
    param_4 = (undefined8 *)((longlong)pauStack_88 - uVar9);
    uStack_a0 = 0x10;
  }
  pauStack_80 = pauStack_88 + 1;
  uStack_70 = ~((ushort)(SUB161(auVar2 >> 7,0) & 1) | (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
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
               (ushort)(byte)(auVar2[0xf] >> 7) << 0xf);
  puStack_78 = *pauStack_88 + lVar10 + 1;
  uStack_49 = 0;
  uStack_4a = 1;
  lStack_98 = lVar5;
  puStack_90 = param_4;
  pdb_1415eae20(&uStack_b8,&uStack_a0);
  pauStack_88 = (undefined1 (*) [16])*puStack_60;
  lVar10 = puStack_60[1];
  uStack_68 = puStack_60[3];
  auVar2 = *pauStack_88;
  if (lVar10 == 0) {
    uStack_a0 = 0;
  }
  else {
    uVar9 = lVar10 * 8 + 0x17U & 0xfffffffffffffff0;
    lVar5 = lVar10 + uVar9 + 0x11;
    param_4 = (undefined8 *)((longlong)pauStack_88 - uVar9);
    uStack_a0 = 0x10;
  }
  pauStack_80 = pauStack_88 + 1;
  uStack_70 = ~((ushort)(SUB161(auVar2 >> 7,0) & 1) | (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
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
               (ushort)(byte)(auVar2[0xf] >> 7) << 0xf);
  puStack_78 = *pauStack_88 + lVar10 + 1;
  lStack_98 = lVar5;
  puStack_90 = param_4;
  pdb_1415eae20(&uStack_d0,&uStack_a0);
  if (1 < uStack_a8) {
    if (uStack_a8 < 0x15) {
      pdb_14145ff80(uStack_b0,uStack_a8,1,&uStack_4b);
    }
    else {
      pdb_140a90e70(uStack_b0,uStack_a8,&uStack_4b);
    }
  }
  if (1 < uStack_c0) {
    if (uStack_c0 < 0x15) {
      pdb_14145ff80(uStack_c8,uStack_c0,1,&uStack_4b);
    }
    else {
      pdb_140a90e70(uStack_c8,uStack_c0,&uStack_4b);
    }
  }
  param_1[6] = uStack_a8;
  param_1[4] = uStack_b8;
  param_1[5] = uStack_b0;
  param_1[7] = uStack_d0;
  param_1[8] = uStack_c8;
  param_1[9] = uStack_c0;
  *param_1 = 1;
  param_1[1] = param_3;
  param_1[2] = 1;
  param_1[3] = param_5;
  return;
}

