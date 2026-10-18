// VA 0x140a56c60, PDB extent 402 bytes
// country_core::resources::render::mesh_atlas_library::MeshAtlasLibrary::remove_by_name<ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/render/mesh_atlas_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::render::mesh_atlas_library::MeshAtlasLibrary::remove_by_name<ref$<str$>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/render/mesh_atlas_library.rs
   Extent: 402 */

void pdb_140a56c60(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  ulonglong uVar11;
  longlong lVar12;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  int aiStack_78 [2];
  longlong lStack_70;
  uint uStack_68;
  undefined4 uStack_64;
  
  uVar6 = pdb_140df4400(param_2,param_3);
  uStack_80 = uVar6;
  pdb_140ca8e90(aiStack_78,param_1 + 6,uVar6,&uStack_80);
  if ((!SBORROW8(0,lStack_70)) && (lStack_70 != 0)) {
    pub_1406abac0((byte *)CONCAT44(uStack_64,uStack_68),lStack_70 << 3,4);
  }
  lVar12 = param_1[3];
  if (lVar12 != 0) {
    pauVar9 = (undefined1 (*) [16])*param_1;
    auVar2 = *pauVar9;
    uVar8 = ~(uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
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
    pauVar10 = pauVar9 + 1;
    uStack_88 = uVar6;
    do {
      if ((short)uVar8 == 0) {
        do {
          auVar2 = *pauVar10;
          pauVar9 = pauVar9 + -0xf0;
          pauVar10 = pauVar10 + 1;
          uVar8 = (ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
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
        } while (uVar8 == 0);
      }
      uVar4 = 0;
      for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
        uVar4 = uVar4 + 1;
      }
      uVar7 = (ulonglong)uVar4;
      uStack_90 = uVar6;
      pdb_140cab130(aiStack_78,pauVar9[uVar7 * -0xf + -3] + 8,uVar6,&uStack_90);
      uVar4 = uStack_68;
      if (aiStack_78[0] == 1) {
        uVar11 = (ulonglong)uStack_68;
        if (*(ulonglong *)(pauVar9[uVar7 * -0xf + -5] + 8) <= uVar11) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar11,*(ulonglong *)(pauVar9[uVar7 * -0xf + -5] + 8),&UNK_14306e6f0);
        }
        puVar1 = (undefined8 *)(*(longlong *)pauVar9[uVar7 * -0xf + -5] + uVar11 * 0x10);
        *puVar1 = 0;
        puVar1[1] = 0;
        lVar3 = *(longlong *)pauVar9[uVar7 * -0xf + -3];
        if (lVar3 == *(longlong *)pauVar9[uVar7 * -0xf + -4]) {
          pdb_142db0990(pauVar9 + uVar7 * -0xf + -4);
        }
        *(uint *)(*(longlong *)(pauVar9[uVar7 * -0xf + -4] + 8) + lVar3 * 4) = uVar4;
        *(longlong *)pauVar9[uVar7 * -0xf + -3] = lVar3 + 1;
        uVar6 = uStack_88;
      }
      uVar8 = uVar8 - 1 & uVar8;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return;
}

