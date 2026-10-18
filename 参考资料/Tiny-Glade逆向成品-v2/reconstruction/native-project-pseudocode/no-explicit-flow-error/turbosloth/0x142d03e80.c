// VA 0x142d03e80, PDB extent 1046 bytes
// redb::tree_store::table_tree_base::InternalTableDefinition::check_match<ref$<str$>,u64>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   redb::tree_store::table_tree_base::InternalTableDefinition::check_match<ref$<str$>,u64>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/lib.rs
   Extent: 1046 */

ulonglong *
pdb_142d03e80(ulonglong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uStack_c8;
  byte *pbStack_c0;
  ulonglong uStack_b8;
  char cStack_b0;
  undefined7 uStack_af;
  ulonglong uStack_a8;
  ulonglong uStack_a0;
  ulonglong uStack_98;
  ulonglong uStack_90;
  ulonglong uStack_88;
  ulonglong uStack_80;
  ulonglong uStack_78;
  byte *pbStack_70;
  ulonglong uStack_68;
  byte *pbStack_60;
  ulonglong uStack_58;
  char cStack_50;
  undefined7 uStack_4f;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pdb_141e17440(&uStack_c8,param_2,param_3,param_4,param_5);
  if (uStack_c8 == 0x8000000000000007) {
    pdb_141e173e0(&uStack_68,param_2);
    pdb_141c8a790(&uStack_c8);
    pbVar5 = pbStack_60;
    pbVar4 = pbStack_c0;
    if (((cStack_50 == cStack_b0) && (uStack_58 == uStack_b8)) &&
       (iVar6 = pub_142e32750(pbStack_60,pbStack_c0), iVar6 == 0)) {
      if (uStack_c8 != 0) {
        pub_1406abac0(pbVar4,uStack_c8,1);
      }
      if (uStack_68 != 0) {
        pub_1406abac0(pbVar5,uStack_68,1);
      }
      pdb_141e17410(&uStack_68,param_2);
      pdb_141c8a5a0(&uStack_c8);
      pbVar5 = pbStack_60;
      pbVar4 = pbStack_c0;
      if (((cStack_50 == cStack_b0) && (uStack_58 == uStack_b8)) &&
         (iVar6 = pub_142e32750(pbStack_60,pbStack_c0), iVar6 == 0)) {
        if (uStack_c8 != 0) {
          pub_1406abac0(pbVar4,uStack_c8,1);
        }
        if (uStack_68 != 0) {
          pub_1406abac0(pbVar5,uStack_68,1);
        }
        if (*(int *)(param_2 + 0x60) == 1) {
          pdb_141c8a790(param_1 + 3);
          uVar1 = *(ulonglong *)(param_2 + 0x10);
          uVar2 = *(ulonglong *)(param_2 + 0x68);
          *param_1 = 0x8000000000000002;
          param_1[1] = 1;
          param_1[2] = uVar2;
          param_1[7] = uVar1;
          return param_1;
        }
        uVar1 = *(ulonglong *)(param_2 + 0x70);
        uVar2 = *(ulonglong *)(param_2 + 0x78);
        if (((byte)uVar1 & uVar2 == 8) != 0) {
          *param_1 = 0x8000000000000007;
          return param_1;
        }
        pdb_141c8a5a0(param_1 + 3);
        uVar3 = *(ulonglong *)(param_2 + 0x18);
        *param_1 = 0x8000000000000002;
        param_1[1] = uVar1;
        param_1[2] = uVar2;
        param_1[7] = uVar3;
        return param_1;
      }
    }
    if (uStack_c8 != 0) {
      pub_1406abac0(pbStack_c0,uStack_c8,1);
    }
    if (uStack_68 != 0) {
      pub_1406abac0(pbStack_60,uStack_68,1);
    }
    if ((longlong)param_5 < 0) {
      uVar7 = 0;
    }
    else {
      if (param_5 == 0) {
        pbStack_70 = (byte *)0x1;
LAB_142d04044:
        pdb_141e173e0(&uStack_68,param_2);
        pdb_141e17410(&uStack_c8,param_2);
        param_1[5] = uStack_58;
        param_1[6] = CONCAT71(uStack_4f,cStack_50);
        param_1[3] = uStack_68;
        param_1[4] = (ulonglong)pbStack_60;
        param_1[7] = uStack_c8;
        param_1[8] = (ulonglong)pbStack_c0;
        param_1[9] = uStack_b8;
        param_1[10] = CONCAT71(uStack_af,cStack_b0);
        *param_1 = param_5;
        param_1[1] = (ulonglong)pbStack_70;
        param_1[2] = param_5;
        return param_1;
      }
      pdb_14007ee60();
      uVar7 = 1;
      pbStack_70 = pub_1406abab0(param_5,1);
      if (pbStack_70 != (byte *)0x0) {
        pub_142e32760(pbStack_70,param_4,param_5);
        goto LAB_142d04044;
      }
    }
    pdb_142dc7e2a(uVar7,param_5);
  }
  param_1[10] = uStack_78;
  param_1[8] = uStack_88;
  param_1[9] = uStack_80;
  param_1[6] = uStack_98;
  param_1[7] = uStack_90;
  param_1[4] = uStack_a8;
  param_1[5] = uStack_a0;
  param_1[2] = uStack_b8;
  param_1[3] = CONCAT71(uStack_af,cStack_b0);
  *param_1 = uStack_c8;
  param_1[1] = (ulonglong)pbStack_c0;
  return param_1;
}

