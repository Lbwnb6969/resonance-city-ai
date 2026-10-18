// VA 0x140a56e00, PDB extent 559 bytes
// country_core::resources::render::mesh_atlas_library::MeshAtlasLibrary::remove_by_name<ref$<asset::prefab::PrefabName> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/render/mesh_atlas_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::render::mesh_atlas_library::MeshAtlasLibrary::remove_by_name<ref$<asset::prefab::PrefabName>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/render/mesh_atlas_library.rs
   Extent: 559 */

void pdb_140a56e00(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  ulonglong uVar10;
  longlong lVar11;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  code *pcStack_90;
  int iStack_88;
  undefined4 uStack_84;
  byte *pbStack_80;
  uint uStack_78;
  undefined4 uStack_74;
  byte *pbStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  uStack_b8 = pdb_1418bded0(param_2);
  puStack_98 = &uStack_b8;
  pcStack_90 = pdb_1402ed400;
  uStack_b0 = param_2;
  pdb_140f60760(&iStack_88,&UNK_14303de48,&puStack_98);
  pbStack_68 = pbStack_80;
  puVar5 = (undefined8 *)pdb_140df4400(pbStack_80,CONCAT44(uStack_74,uStack_78));
  if (CONCAT44(uStack_84,iStack_88) != 0) {
    pub_1406abac0(pbStack_68,CONCAT44(uStack_84,iStack_88),1);
  }
  puStack_a8 = puVar5;
  pdb_140ca8e90(&iStack_88,param_1 + 6,puVar5,&puStack_a8);
  if ((!SBORROW8(0,(longlong)pbStack_80)) && (pbStack_80 != (byte *)0x0)) {
    pub_1406abac0((byte *)CONCAT44(uStack_74,uStack_78),(longlong)pbStack_80 << 3,4);
  }
  lVar11 = param_1[3];
  if (lVar11 != 0) {
    pauVar8 = (undefined1 (*) [16])*param_1;
    auVar1 = *pauVar8;
    uVar7 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
    pauVar9 = pauVar8 + 1;
    puStack_a0 = puVar5;
    do {
      if ((short)uVar7 == 0) {
        do {
          auVar1 = *pauVar9;
          pauVar8 = pauVar8 + -0xf0;
          pauVar9 = pauVar9 + 1;
          uVar7 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
        } while (uVar7 == 0);
      }
      uVar3 = 0;
      for (uVar4 = uVar7; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        uVar3 = uVar3 + 1;
      }
      uVar6 = (ulonglong)uVar3;
      puStack_98 = puVar5;
      pdb_140cab130(&iStack_88,pauVar8[uVar6 * -0xf + -3] + 8,puVar5,&puStack_98);
      uVar3 = uStack_78;
      if (iStack_88 == 1) {
        uVar10 = (ulonglong)uStack_78;
        if (*(ulonglong *)(pauVar8[uVar6 * -0xf + -5] + 8) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar10,*(ulonglong *)(pauVar8[uVar6 * -0xf + -5] + 8),&UNK_14306e6f0);
        }
        puVar5 = (undefined8 *)(*(longlong *)pauVar8[uVar6 * -0xf + -5] + uVar10 * 0x10);
        *puVar5 = 0;
        puVar5[1] = 0;
        lVar2 = *(longlong *)pauVar8[uVar6 * -0xf + -3];
        if (lVar2 == *(longlong *)pauVar8[uVar6 * -0xf + -4]) {
          pdb_142db0990(pauVar8 + uVar6 * -0xf + -4);
        }
        *(uint *)(*(longlong *)(pauVar8[uVar6 * -0xf + -4] + 8) + lVar2 * 4) = uVar3;
        *(longlong *)pauVar8[uVar6 * -0xf + -3] = lVar2 + 1;
        puVar5 = puStack_a0;
      }
      uVar7 = uVar7 - 1 & uVar7;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}

