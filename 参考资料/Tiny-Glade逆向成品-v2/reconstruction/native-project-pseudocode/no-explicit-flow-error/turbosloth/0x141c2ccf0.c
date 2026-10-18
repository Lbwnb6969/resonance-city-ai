// VA 0x141c2ccf0, PDB extent 1451 bytes
// turbosloth::store::PackagePass::begin
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: turbosloth::store::PackagePass::begin
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
   Extent: 1451 */

ulonglong * pdb_141c2ccf0(ulonglong *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  code *pcVar1;
  code *pcVar2;
  ulonglong uVar3;
  code *arg0;
  code *pcVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 auStack_f8 [2];
  undefined8 *puStack_e8;
  code *pcStack_e0;
  code *pcStack_d0;
  code *pcStack_c8;
  ulonglong uStack_c0;
  ulonglong uStack_b8;
  code *pcStack_b0;
  undefined8 *puStack_a8;
  code *pcStack_a0;
  undefined8 *puStack_98;
  code *pcStack_90;
  int iStack_88;
  code *pcStack_80;
  code *pcStack_78;
  code *pcStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  pdb_142623880(&puStack_a8,param_3,param_4);
  pcVar4 = pcStack_a0;
  if (SBORROW8(0,(longlong)puStack_a8)) {
LAB_141c2ce40:
    param_1[1] = (ulonglong)pcVar4;
    *param_1 = 0x8000000000000000;
    return param_1;
  }
  pcStack_68 = (code *)puStack_a8;
  pcStack_70 = pcStack_a0;
  auStack_f8[0] = pdb_142570fc0(pcStack_a0);
  if (pcStack_68 != (code *)0x0) {
    pub_1406abac0((byte *)pcStack_70,(ulonglong)pcStack_68,1);
  }
  pdb_140f3e9e0(&puStack_a8,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),
                &UNK_14339ef37,0xd);
  puVar6 = puStack_98;
  pcStack_70 = pcStack_a0;
  puStack_e8 = auStack_f8;
  pcStack_e0 = pdb_140f71da0;
  pdb_140f60760(&pcStack_d0,&UNK_14339f168,&puStack_e8);
  pcStack_68 = pcStack_d0;
  pcStack_78 = pcStack_c8;
  pdb_140f3e9e0(&pcStack_d0,pcStack_70,puVar6,pcStack_c8,uStack_c0);
  if (pcStack_68 != (code *)0x0) {
    pub_1406abac0((byte *)pcStack_78,(ulonglong)pcStack_68,1);
  }
  if (puStack_a8 != (undefined8 *)0x0) {
    pub_1406abac0((byte *)pcStack_70,(ulonglong)puStack_a8,1);
  }
  pcVar4 = pcStack_c8;
  if (SBORROW8(0,(longlong)pcStack_d0)) goto LAB_141c2ce40;
  pcStack_68 = pcStack_d0;
  pcStack_70 = pcStack_c8;
  pdb_140f55fb0(&puStack_a8,pcStack_c8,uStack_c0);
  if (SBORROW8(0,(longlong)puStack_a8)) {
    pdb_1404b38e0(&pcStack_a0);
  }
  else {
    pcStack_78 = (code *)puStack_a8;
    pcStack_b0 = pcStack_a0;
    pcStack_d0 = pcStack_a0;
    pcStack_c8 = (code *)puStack_98;
    pdb_1426210a0(&puStack_a8,&pcStack_d0,&UNK_143557fd8,0xc,&UNK_143557ff8,2);
    pcVar4 = pcStack_a0;
    puVar6 = puStack_a8;
    if (puStack_a8 == (undefined8 *)0x0) {
      uVar5 = *(ulonglong *)pcStack_a0;
      uVar3 = 8;
      if ((longlong)uVar5 < 0) {
        uVar3 = uVar5 ^ 0x8000000000000000;
      }
      pcStack_80 = pcStack_a0;
      if (6 < uVar3 - 1) {
        if (uVar3 == 0) {
          pdb_1404b38e0(pcStack_a0 + 8);
        }
        else if (uVar5 != 0) {
          pub_1406abac0(*(byte **)(pcStack_a0 + 8),uVar5,1);
        }
      }
      pub_1406abac0((byte *)pcStack_80,0x18,8);
      if (pcStack_78 != (code *)0x0) {
        uVar5 = 1;
        arg0 = pcStack_b0;
        pcVar4 = pcStack_78;
LAB_141c2cfb9:
        pcVar2 = pcStack_68;
        pcVar1 = pcStack_70;
        pub_1406abac0((byte *)arg0,(ulonglong)pcVar4,uVar5);
        pcStack_70 = pcVar1;
        pcStack_68 = pcVar2;
      }
    }
    else {
      puStack_e8 = puStack_98;
      pcStack_e0 = pcStack_90;
      if (pcStack_78 != (code *)0x0) {
        pub_1406abac0((byte *)pcStack_b0,(ulonglong)pcStack_78,1);
      }
      if (iStack_88 == 1) {
        puStack_a8 = puStack_e8;
        pcStack_a0 = pcStack_e0;
        goto LAB_141c2cfd3;
      }
      if (pcStack_a0 != (code *)0x0) {
        pcVar4 = (code *)((longlong)pcStack_a0 * 0x51 + 0x61);
        if (pcVar4 != (code *)0x0) {
          uVar5 = 0x10;
          arg0 = (code *)((longlong)puStack_a8 - ((longlong)pcStack_a0 * 0x50 + 0x50));
          goto LAB_141c2cfb9;
        }
      }
    }
  }
  puStack_a8 = _DAT_1435584f0;
  pcStack_a0 = _UNK_1435584f8;
  puVar6 = (undefined8 *)&UNK_1435584d0;
  pcVar4 = (code *)0x0;
LAB_141c2cfd3:
  *param_1 = (ulonglong)pcStack_68;
  param_1[1] = (ulonglong)pcStack_70;
  param_1[2] = uStack_c0;
  param_1[3] = uStack_b8;
  param_1[7] = (ulonglong)puVar6;
  param_1[8] = (ulonglong)pcVar4;
  param_1[9] = (ulonglong)puStack_a8;
  param_1[10] = (ulonglong)pcStack_a0;
  uVar5 = _UNK_1435584e8;
  param_1[0xb] = _DAT_1435584e0;
  param_1[0xc] = uVar5;
  pcVar4 = _UNK_1435584f8;
  param_1[0xd] = (ulonglong)_DAT_1435584f0;
  param_1[0xe] = (ulonglong)pcVar4;
  uVar5 = _UNK_143337b78;
  param_1[0xf] = _DAT_143337b70;
  param_1[0x10] = uVar5;
  uVar5 = _UNK_143337b88;
  param_1[0x11] = _DAT_143337b80;
  param_1[0x12] = uVar5;
  param_1[4] = param_2;
  param_1[5] = param_3;
  param_1[6] = param_4;
  return param_1;
}

