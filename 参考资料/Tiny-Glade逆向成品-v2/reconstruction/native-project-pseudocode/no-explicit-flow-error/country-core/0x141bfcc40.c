// VA 0x141bfcc40, PDB extent 674 bytes
// serde_core::ser::Serializer::collect_seq<serde_json::value::ser::Serializer,ref$<std::collections::hash::set::HashSet<country_core::resources::stairs::stairs_state::StairGraphEdge,std::hash::random::RandomState,alloc::alloc::Global> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   serde_core::ser::Serializer::collect_seq<serde_json::value::ser::Serializer,ref$<std::collections::hash::set::HashSet<country_core::resources::stairs::stairs_state::StairGraphEdge,std::hash::random::RandomState,alloc::alloc::Global>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 674 */

undefined1 * pdb_141bfcc40(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 (*pauVar7) [16];
  uint uVar8;
  undefined1 (*pauVar9) [16];
  bool bVar10;
  char cStack_c0;
  undefined7 uStack_bf;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined7 uStack_a0;
  undefined1 uStack_99;
  undefined7 uStack_98;
  undefined1 uStack_91;
  undefined7 uStack_90;
  undefined1 uStack_89;
  byte *pbStack_80;
  longlong lStack_78;
  byte *pbStack_70;
  longlong lStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  pauVar9 = (undefined1 (*) [16])*param_2;
  lVar6 = param_2[3];
  auVar1 = *pauVar9;
  pdb_140ddc8f0(&uStack_a0,1,lVar6);
  if (SBORROW8(0,CONCAT17(uStack_99,uStack_a0))) {
    *(ulonglong *)(param_1 + 8) = CONCAT17(uStack_91,uStack_98);
    *param_1 = 6;
  }
  else {
    uVar8 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
                           (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
    pauVar7 = pauVar9 + 1;
    lStack_68 = CONCAT17(uStack_89,uStack_90);
    lStack_78 = CONCAT17(uStack_99,uStack_a0);
    pbStack_70 = (byte *)CONCAT17(uStack_91,uStack_98);
    while (bVar10 = lVar6 != 0, lVar6 = lVar6 + -1, bVar10) {
      if ((short)uVar8 == 0) {
        do {
          auVar1 = *pauVar7;
          pauVar9 = pauVar9 + -8;
          pauVar7 = pauVar7 + 1;
          uVar8 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
        } while (uVar8 == 0);
      }
      iVar2 = 0;
      for (uVar3 = uVar8; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
        iVar2 = iVar2 + 1;
      }
      pdb_1417cc480(&cStack_c0,(longlong)pauVar9 + (-8 - (ulonglong)(uint)(iVar2 << 3)));
      lVar4 = lStack_68;
      if (cStack_c0 == '\x06') {
        *(undefined8 *)(param_1 + 8) = uStack_b8;
        *param_1 = 6;
        pbStack_80 = pbStack_70;
        pdb_14098ae50(pbStack_70,lStack_68);
        if (lStack_78 == 0) {
          return param_1;
        }
        pub_1406abac0(pbStack_80,lStack_78 << 5,8);
        return param_1;
      }
      if (lStack_68 == lStack_78) {
        pdb_142db0ce0(&lStack_78);
      }
      uVar8 = uVar8 - 1 & uVar8;
      lVar5 = lVar4 * 0x20;
      *(undefined8 *)(pbStack_70 + lVar5 + 0x10) = uStack_b0;
      *(undefined8 *)(pbStack_70 + lVar5 + 0x10 + 8) = uStack_a8;
      *(ulonglong *)(pbStack_70 + lVar5) = CONCAT71(uStack_bf,cStack_c0);
      *(undefined8 *)(pbStack_70 + lVar5 + 8) = uStack_b8;
      lStack_68 = lVar4 + 1;
    }
    uStack_99 = (undefined1)lStack_78;
    uStack_98 = (undefined7)((ulonglong)lStack_78 >> 8);
    uStack_91 = SUB81(pbStack_70,0);
    *param_1 = 4;
    *(ulonglong *)(param_1 + 1) = CONCAT17(uStack_99,uStack_a0);
    *(ulonglong *)(param_1 + 9) = CONCAT17(uStack_91,uStack_98);
    *(byte **)(param_1 + 0x10) = pbStack_70;
    *(longlong *)(param_1 + 0x18) = lStack_68;
  }
  return param_1;
}

