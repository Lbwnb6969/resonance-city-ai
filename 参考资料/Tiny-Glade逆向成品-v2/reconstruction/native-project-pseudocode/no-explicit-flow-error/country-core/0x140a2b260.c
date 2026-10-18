// VA 0x140a2b260, PDB extent 604 bytes
// country_core::asset_libraries::mesh_library::AssetMeshLibrary::mark_accessed
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/mesh_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::asset_libraries::mesh_library::AssetMeshLibrary::mark_accessed
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/mesh_library.rs
   Extent: 604 */

ulonglong pdb_140a2b260(longlong param_1,longlong param_2,undefined8 param_3)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  ushort uVar8;
  ulonglong *puVar9;
  bool bVar10;
  byte bVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  longlong lStack_48;
  ulonglong *puStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  puVar9 = (ulonglong *)(param_1 + 0xb8);
  uVar5 = *(ulonglong *)(param_1 + 0xb8);
  lStack_48 = param_2;
  if (uVar5 < 0xfffffffffffffff0 && (char)(((uint)uVar5 & 8) >> 3) == '\0') {
    LOCK();
    uVar4 = *puVar9;
    if (uVar5 == uVar4) {
      *puVar9 = uVar5 + 0x10;
    }
    UNLOCK();
    if (uVar5 == uVar4) goto LAB_140a2b2c1;
  }
  pdb_142dbb5f0(puVar9,0,param_3,1000000000);
LAB_140a2b2c1:
  pdb_140e9a150(puVar9);
  uVar5 = (ulonglong)puVar9 | 1;
  pdb_140e9a150(uVar5);
  puStack_40 = puVar9;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    uVar4 = pdb_1400af0a0(param_1 + 0xe0,&lStack_48);
    bVar11 = (byte)(uVar4 >> 0x39);
    auVar12 = ZEXT216(CONCAT11(bVar11,bVar11));
    auVar12 = pshuflw(auVar12,auVar12,0);
    lVar6 = 0;
    while( true ) {
      uVar4 = uVar4 & *(ulonglong *)(param_1 + 200);
      pcVar1 = (char *)(*(longlong *)(param_1 + 0xc0) + uVar4);
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
      uVar8 = (ushort)(SUB161(auVar14 >> 7,0) & 1) | (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
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
      uVar7 = (uint)uVar8;
      while (uVar8 != 0) {
        uVar2 = 0;
        for (uVar3 = uVar7; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar2 = uVar2 + 1;
        }
        bVar10 = true;
        if (param_2 ==
            *(longlong *)
             (*(longlong *)(param_1 + 0xc0) + (uVar2 + uVar4 & *(ulonglong *)(param_1 + 200)) * -8 +
             -8)) goto LAB_140a2b39e;
        uVar8 = (ushort)(uVar7 - 1) & (ushort)uVar7;
        uVar7 = CONCAT22((short)(uVar7 - 1 >> 0x10),uVar8);
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
      uVar4 = uVar4 + lVar6 + 0x10;
      lVar6 = lVar6 + 0x10;
    }
  }
  bVar10 = false;
LAB_140a2b39e:
  puVar9 = (ulonglong *)(param_1 + 0xb8);
  pdb_140e9a350(puVar9);
  pdb_140e9a350(uVar5);
  LOCK();
  uVar4 = *puVar9;
  *puVar9 = *puVar9 - 0x10;
  UNLOCK();
  uVar4 = uVar4 & 0xfffffffffffffff2;
  if (bVar10) {
    if (uVar4 == 0x12) {
      uVar4 = pdb_142dbbf50(puVar9);
    }
  }
  else {
    if (uVar4 == 0x12) {
      pdb_142dbbf50(puVar9);
    }
    LOCK();
    uVar4 = *puVar9;
    if (uVar4 == 0) {
      *puVar9 = 8;
    }
    UNLOCK();
    if (uVar4 != 0) {
      pdb_142dbc1f0(puVar9);
    }
    pdb_140e9a150(puVar9);
    pdb_140e9a150(uVar5);
    pdb_1403b05d0(param_1 + 0xc0,param_2);
    puVar9 = puStack_40;
    pdb_140e9a350(puStack_40);
    pdb_140e9a350();
    LOCK();
    uVar4 = *puVar9;
    bVar10 = uVar4 == 8;
    if (bVar10) {
      *puVar9 = 0;
      uVar4 = 8;
    }
    UNLOCK();
    if (!bVar10) {
      uVar4 = pdb_142dbca40(puVar9,0);
    }
  }
  return uVar4;
}

