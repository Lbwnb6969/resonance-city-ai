// VA 0x140bf4880, PDB extent 443 bytes
// frozen::FrozenMap::get<country_core::asset_libraries::Handle<country_core::render::mesh::Mesh>,alloc::boxed::Box<country_core::render::mesh::Mesh,alloc::alloc::Global>,std::hash::random::RandomState,country_core::asset_libraries::Handle<country_core::render::mesh::Mesh> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/frozen/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   frozen::FrozenMap::get<country_core::asset_libraries::Handle<country_core::render::mesh::Mesh>,alloc::boxed::Box<country_core::render::mesh::Mesh,alloc::alloc::Global>,std::hash::random::RandomState,country_core::asset_libraries::Handle<country_core::render::mesh::Mesh>
   >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/frozen/src/lib.rs
   Extent: 443 */

undefined8 pdb_140bf4880(uint *param_1,longlong *param_2)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ushort uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  byte bVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  uint *puStack_38;
  uint *puStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  uVar10 = *param_1;
  if (uVar10 < 0x3ffffffe) {
    LOCK();
    uVar2 = *param_1;
    if (uVar10 == uVar2) {
      *param_1 = uVar10 + 1;
    }
    UNLOCK();
    if (uVar10 == uVar2) {
      cVar3 = (char)param_1[2];
      goto joined_r0x000140bf49a7;
    }
  }
  pdb_142dc6cb0(param_1);
  cVar3 = (char)param_1[2];
joined_r0x000140bf49a7:
  if (cVar3 != '\0') {
    puStack_38 = param_1 + 4;
    puStack_30 = param_1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143066330,0x2b,&puStack_38,&UNK_1430663c0,&UNK_143066440);
  }
  if (*(longlong *)(param_1 + 10) == 0) {
    uVar6 = 0;
  }
  else {
    uVar5 = pdb_1400af0a0(param_1 + 0xc);
    bVar11 = (byte)(uVar5 >> 0x39);
    auVar12 = ZEXT216(CONCAT11(bVar11,bVar11));
    auVar12 = pshuflw(auVar12,auVar12,0);
    uVar6 = 0;
    lVar9 = 0;
    while( true ) {
      uVar5 = uVar5 & *(ulonglong *)(param_1 + 6);
      pcVar1 = (char *)(*(longlong *)(param_1 + 4) + uVar5);
      auVar14[0] = -(*pcVar1 == auVar12[0]);
      auVar14[1] = -(pcVar1[1] == auVar12[1]);
      auVar14[2] = -(pcVar1[2] == auVar12[2]);
      auVar14[3] = -(pcVar1[3] == auVar12[3]);
      auVar14[4] = -(pcVar1[4] == auVar12[4]);
      auVar14[5] = -(pcVar1[5] == auVar12[5]);
      auVar14[6] = -(pcVar1[6] == auVar12[6]);
      auVar14[7] = -(pcVar1[7] == auVar12[7]);
      auVar14[8] = -(pcVar1[8] == auVar12[0]);
      auVar14[9] = -(pcVar1[9] == auVar12[1]);
      auVar14[10] = -(pcVar1[10] == auVar12[2]);
      auVar14[0xb] = -(pcVar1[0xb] == auVar12[3]);
      auVar14[0xc] = -(pcVar1[0xc] == auVar12[4]);
      auVar14[0xd] = -(pcVar1[0xd] == auVar12[5]);
      auVar14[0xe] = -(pcVar1[0xe] == auVar12[6]);
      auVar14[0xf] = -(pcVar1[0xf] == auVar12[7]);
      uVar7 = (ushort)(SUB161(auVar14 >> 7,0) & 1) | (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe | (ushort)(auVar14[0xf] >> 7) << 0xf;
      uVar10 = (uint)uVar7;
      while (uVar7 != 0) {
        uVar2 = 0;
        for (uVar4 = uVar10; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        lVar8 = *(longlong *)(param_1 + 4) + (uVar2 + uVar5 & *(ulonglong *)(param_1 + 6)) * -0x10;
        if (*param_2 == *(longlong *)(lVar8 + -0x10)) {
          uVar6 = *(undefined8 *)(lVar8 + -8);
          goto LAB_140bf4973;
        }
        uVar7 = (ushort)(uVar10 - 1) & (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar7);
      }
      auVar13[0] = -(*pcVar1 == -1);
      auVar13[1] = -(pcVar1[1] == -1);
      auVar13[2] = -(pcVar1[2] == -1);
      auVar13[3] = -(pcVar1[3] == -1);
      auVar13[4] = -(pcVar1[4] == -1);
      auVar13[5] = -(pcVar1[5] == -1);
      auVar13[6] = -(pcVar1[6] == -1);
      auVar13[7] = -(pcVar1[7] == -1);
      auVar13[8] = -(pcVar1[8] == -1);
      auVar13[9] = -(pcVar1[9] == -1);
      auVar13[10] = -(pcVar1[10] == -1);
      auVar13[0xb] = -(pcVar1[0xb] == -1);
      auVar13[0xc] = -(pcVar1[0xc] == -1);
      auVar13[0xd] = -(pcVar1[0xd] == -1);
      auVar13[0xe] = -(pcVar1[0xe] == -1);
      auVar13[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar13 >> 7,0) & 1) != 0 || (SUB161(auVar13 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar13 >> 0x17,0) & 1) != 0) || (SUB161(auVar13 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar13 >> 0x27,0) & 1) != 0) || (SUB161(auVar13 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar13 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar13 >> 0x3f,0) & 1) != 0) || (SUB161(auVar13 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar13 >> 0x4f,0) & 1) != 0) || (SUB161(auVar13 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar13 >> 0x5f,0) & 1) != 0) || (SUB161(auVar13 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar13 >> 0x6f,0) & 1) != 0) || (SUB161(auVar13 >> 0x77,0) & 1) != 0) ||
          auVar13[0xf] < '\0') break;
      uVar5 = uVar5 + lVar9 + 0x10;
      lVar9 = lVar9 + 0x10;
    }
  }
LAB_140bf4973:
  LOCK();
  uVar10 = *param_1;
  *param_1 = *param_1 - 1;
  UNLOCK();
  if (SBORROW4(0,uVar10 - 1 & 0xbfffffff)) {
    pdb_142dc6fa0(param_1);
  }
  return uVar6;
}

