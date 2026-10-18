// VA 0x1409d5aa0, PDB extent 910 bytes
// country_core::systems::render_loop::find_crash::advance_frame
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/find_crash.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::render_loop::find_crash::advance_frame
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/find_crash.rs
   Extent: 910 */

void pdb_1409d5aa0(longlong *param_1,uint *param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uStack_108;
  byte *pbStack_100;
  undefined8 uStack_f8;
  ulonglong *puStack_f0;
  code *pcStack_e8;
  longlong lStack_e0;
  byte *pbStack_d8;
  ulonglong uStack_d0;
  undefined1 (*pauStack_c8) [16];
  undefined1 (*pauStack_c0) [16];
  undefined1 *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  ulonglong **ppuStack_70;
  ulonglong uStack_68;
  byte *pbStack_60;
  undefined8 uStack_58;
  byte *pbStack_48;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  if ((char)param_2[1] != '\0') {
    return;
  }
  uVar3 = *param_2;
  *param_2 = uVar3 + 1;
  if ((uVar3 + 1 & 3) != 0) {
    return;
  }
  lVar4 = *param_1;
  pauStack_c8 = *(undefined1 (**) [16])(lVar4 + 0x90);
  puStack_b8 = *pauStack_c8 + *(longlong *)(lVar4 + 0x98) + 1;
  auVar2 = *pauStack_c8;
  uStack_b0 = CONCAT62(uStack_b0._2_6_,
                       ~((ushort)(SUB161(auVar2 >> 7,0) & 1) |
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
                        (ushort)(byte)(auVar2[0xf] >> 7) << 0xf));
  pauStack_c0 = pauStack_c8 + 1;
  puStack_a8 = *(undefined **)(lVar4 + 0xa8);
  pdb_1415efc00(&lStack_e0,&pauStack_c8);
  pbStack_48 = pbStack_d8;
  if (uStack_d0 < 2) {
    if (uStack_d0 != 0) goto LAB_1409d5b47;
  }
  else {
    if (uStack_d0 < 0x15) {
      pdb_1400e1b80(pbStack_d8,uStack_d0,1,&uStack_39);
    }
    else {
      pdb_140c75ce0(pbStack_d8,uStack_d0,&uStack_39);
    }
LAB_1409d5b47:
    lVar6 = lStack_e0;
    lVar1 = uStack_d0 * 8;
    uStack_d0 = uStack_d0 - 1;
    pdb_140f60be0(&uStack_108,*(undefined8 *)(pbStack_48 + lVar1 + -8));
    if (!SBORROW8(0,uStack_108)) {
      uStack_58 = uStack_f8;
      uStack_68 = uStack_108;
      pbStack_60 = pbStack_100;
      if (2 < *_DAT_143ca8e90) {
        puStack_f0 = &uStack_68;
        pcStack_e8 = pdb_140094770;
        pauStack_c8 = (undefined1 (*) [16])0x0;
        pauStack_c0 = (undefined1 (*) [16])&UNK_14302eebb;
        puStack_b8 = (undefined1 *)0x2e;
        uStack_b0 = 0;
        puStack_a8 = &UNK_14302edf5;
        uStack_a0 = 0x39;
        uStack_98 = 3;
        puStack_90 = &UNK_14302eebb;
        uStack_88 = 0x2e;
        uStack_80 = 0x2a00000001;
        puStack_78 = &UNK_14302ee80;
        ppuStack_70 = &puStack_f0;
        pdb_140f332f0(&uStack_39,&pauStack_c8);
      }
      *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
      uVar5 = pdb_1400afac0(lVar4 + 0xb0,&uStack_68);
      pdb_140269400(&pauStack_c8,lVar4 + 0x90,uVar5,&uStack_68);
      if ((!SBORROW8(0,(longlong)pauStack_c8)) && (pauStack_c8 != (undefined1 (*) [16])0x0)) {
        pub_1406abac0((byte *)pauStack_c0,(ulonglong)pauStack_c8,1);
      }
      if (uStack_68 != 0) {
        pub_1406abac0(pbStack_60,uStack_68,1);
      }
      goto LAB_1409d5d34;
    }
  }
  if (2 < *_DAT_143ca8e90) {
    pauStack_c8 = (undefined1 (*) [16])0x0;
    pauStack_c0 = (undefined1 (*) [16])&UNK_14302eebb;
    puStack_b8 = (undefined1 *)0x2e;
    uStack_b0 = 0;
    puStack_a8 = &UNK_14302edf5;
    uStack_a0 = 0x39;
    uStack_98 = 3;
    puStack_90 = &UNK_14302eebb;
    uStack_88 = 0x2e;
    uStack_80 = 0x3000000001;
    puStack_78 = &UNK_14302eee9;
    ppuStack_70 = (ulonglong **)0x77;
    pdb_140f332f0(&uStack_39,&pauStack_c8);
  }
  *(undefined1 *)(param_2 + 1) = 1;
  lVar6 = lStack_e0;
  if (lStack_e0 == 0) {
    return;
  }
LAB_1409d5d34:
  pub_1406abac0(pbStack_48,lVar6 << 3,8);
  return;
}

