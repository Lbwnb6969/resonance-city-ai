// VA 0x1406d2ec0, PDB extent 599 bytes
// usdl_sys::backend::load_default_library
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl-sys/src/backend.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: usdl_sys::backend::load_default_library
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/usdl-sys/src/backend.rs
   Extent: 599 */

undefined8 * pdb_1406d2ec0(undefined8 *param_1)

{
  byte *pbVar1;
  ulonglong arg1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  byte *pbVar5;
  longlong lVar6;
  undefined4 uStack_a8;
  int iStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  longlong lStack_60;
  byte *pbStack_58;
  longlong lStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lStack_60 = 0;
  pbStack_58 = (byte *)0x8;
  lStack_50 = 0;
  lVar6 = 0;
  puStack_68 = param_1;
  while( true ) {
    if (lVar6 == 0x10) {
      puStack_68[3] = lStack_50;
      puStack_68[1] = lStack_60;
      puStack_68[2] = pbStack_58;
      *puStack_68 = 0x8000000000000003;
      return puStack_68;
    }
    pdb_140f60120(&uStack_a8,*(undefined8 *)(&UNK_142f9af28 + lVar6),
                  *(undefined8 *)(&UNK_142f9af30 + lVar6));
    lVar3 = lStack_50;
    if (lStack_50 == lStack_60) {
      pdb_142dc7340(&lStack_60);
    }
    lVar4 = lVar3 * 0x20;
    pbVar1 = pbStack_58 + lVar4 + 0x10;
    *(undefined4 *)pbVar1 = uStack_98;
    *(undefined4 *)(pbVar1 + 4) = uStack_94;
    *(undefined4 *)(pbVar1 + 8) = uStack_90;
    *(undefined4 *)(pbVar1 + 0xc) = uStack_8c;
    pbVar1 = pbStack_58 + lVar4;
    *(undefined4 *)pbVar1 = uStack_a8;
    *(int *)(pbVar1 + 4) = iStack_a4;
    *(undefined4 *)(pbVar1 + 8) = uStack_a0;
    *(undefined4 *)(pbVar1 + 0xc) = uStack_9c;
    lStack_50 = lVar3 + 1;
    pdb_14100bd40(&uStack_a8,&UNK_142f9af28 + lVar6);
    pbVar1 = pbStack_58;
    puVar2 = puStack_68;
    arg1 = CONCAT44(iStack_a4,uStack_a8);
    if (arg1 == 0x8000000000000004) break;
    lVar6 = lVar6 + 0x10;
    if (iStack_a4 < 0) {
      puStack_68[6] = uStack_78;
      puStack_68[7] = uStack_70;
      puStack_68[4] = uStack_88;
      puStack_68[5] = uStack_80;
      puStack_68[2] = CONCAT44(uStack_94,uStack_98);
      puStack_68[3] = CONCAT44(uStack_8c,uStack_90);
      *puStack_68 = CONCAT44(iStack_a4,uStack_a8);
      puStack_68[1] = CONCAT44(uStack_9c,uStack_a0);
      goto joined_r0x0001406d2ff4;
    }
    if (arg1 != 0) {
      pub_1406abac0((byte *)CONCAT44(uStack_9c,uStack_a0),arg1,1);
    }
    pdb_1406d1bc0(&uStack_88);
  }
  *puStack_68 = 0x8000000000000004;
joined_r0x0001406d2ff4:
  if (lStack_50 != 0) {
    pbVar5 = pbStack_58 + 8;
    lVar6 = lStack_50;
    do {
      if (*(ulonglong *)(pbVar5 + -8) != 0) {
        pub_1406abac0(*(byte **)pbVar5,*(ulonglong *)(pbVar5 + -8),1);
      }
      pbVar5 = pbVar5 + 0x20;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if (lStack_60 == 0) {
    return puVar2;
  }
  pub_1406abac0(pbVar1,lStack_60 << 5,8);
  return puVar2;
}

