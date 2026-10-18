// VA 0x140a2b4c0, PDB extent 1768 bytes
// country_core::asset_libraries::mesh_library::AssetMeshLibrary::add_or_replace
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/mesh_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::asset_libraries::mesh_library::AssetMeshLibrary::add_or_replace
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/mesh_library.rs
   Extent: 1768 */

ulonglong pdb_140a2b4c0(longlong *param_1,ulonglong *param_2)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  ulonglong uVar3;
  ulonglong *puVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  byte *pbVar10;
  undefined8 uVar11;
  ushort uVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 unaff_R14B;
  bool bVar15;
  byte bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  ulonglong uStack_118;
  byte *pbStack_110;
  ulonglong uStack_108;
  ulonglong uStack_100;
  ulonglong uStack_f8;
  ulonglong uStack_f0;
  ulonglong uStack_e8;
  ulonglong uStack_e0;
  ulonglong uStack_d8;
  ulonglong uStack_d0;
  ulonglong uStack_c8;
  ulonglong uStack_c0;
  ulonglong uStack_b8;
  ulonglong uStack_b0;
  ulonglong uStack_a8;
  ulonglong uStack_a0;
  longlong *plStack_78;
  ulonglong uStack_70;
  ulonglong *puStack_68;
  byte *pbStack_60;
  ulonglong uStack_58;
  longlong *plStack_50;
  undefined1 uStack_45;
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  puStack_68 = param_2;
  if (SBORROW8(0,param_2[0x10])) {
LAB_140a2b543:
    pub_142e32760(&uStack_118,puStack_68,0x98);
    uStack_42 = 1;
    uStack_43 = 0;
    uVar9 = pdb_140a2ca40(param_1,&uStack_118);
    return uVar9;
  }
  uVar9 = param_2[0x11];
  uStack_42 = 0;
  uStack_43 = 1;
  lVar8 = pdb_140a2c860(param_1,uVar9,param_2[0x12]);
  puVar4 = puStack_68;
  if (lVar8 != 1) goto LAB_140a2b543;
  uStack_70 = uVar9;
  if (SBORROW8(0,puStack_68[3])) {
    uVar14 = 0x8000000000000000;
  }
  else {
    uVar14 = puStack_68[5];
    if ((longlong)uVar14 < 0) {
      uVar11 = 0;
LAB_140a2b58f:
      uStack_42 = 0;
      uStack_43 = 1;
      pdb_142dc7e2a(uVar11,uVar14);
      goto LAB_140a2b8ca;
    }
    if (uVar14 == 0) {
      pbStack_60 = (byte *)0x1;
    }
    else {
      uVar3 = puStack_68[4];
      pdb_14007ee60();
      uVar11 = 1;
      pbVar10 = pub_1406abab0(uVar14,1);
      if (pbVar10 == (byte *)0x0) goto LAB_140a2b58f;
      pbStack_60 = pbVar10;
      pub_142e32760(pbVar10,uVar3,uVar14);
    }
    unaff_R14B = (undefined1)puVar4[6];
  }
  uStack_a8 = puVar4[0xe];
  uStack_a0 = puVar4[0xf];
  uStack_b8 = puVar4[0xc];
  uStack_b0 = puVar4[0xd];
  uStack_c8 = puVar4[10];
  uStack_c0 = puVar4[0xb];
  uStack_d8 = puVar4[8];
  uStack_d0 = puVar4[9];
  uStack_118 = *puVar4;
  pbStack_110 = (byte *)puVar4[1];
  uStack_108 = puVar4[2];
  uStack_100 = puVar4[3];
  uStack_f8 = puVar4[4];
  uStack_f0 = puVar4[5];
  uStack_e8 = puVar4[6];
  uStack_e0 = puVar4[7];
  uStack_58 = uVar14;
  if ((char)param_1[5] != '\0') {
    plStack_78 = param_1 + 6;
    uStack_45 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143066330,0x2b,&plStack_78,&UNK_1430663a0,&UNK_143066458);
  }
  if (param_1[9] != 0) {
    uStack_45 = 1;
    uVar14 = pdb_1400af0a0(param_1 + 10,&uStack_70);
    bVar16 = (byte)(uVar14 >> 0x39);
    auVar17 = ZEXT216(CONCAT11(bVar16,bVar16));
    auVar17 = pshuflw(auVar17,auVar17,0);
    lVar8 = 0;
    while( true ) {
      uVar14 = uVar14 & param_1[7];
      auVar2 = *(undefined1 (*) [16])(param_1[6] + uVar14);
      auVar19[0] = -(auVar2[0] == auVar17[0]);
      auVar19[1] = -(auVar2[1] == auVar17[1]);
      auVar19[2] = -(auVar2[2] == auVar17[2]);
      auVar19[3] = -(auVar2[3] == auVar17[3]);
      auVar19[4] = -(auVar2[4] == auVar17[4]);
      auVar19[5] = -(auVar2[5] == auVar17[5]);
      auVar19[6] = -(auVar2[6] == auVar17[6]);
      auVar19[7] = -(auVar2[7] == auVar17[7]);
      auVar19[8] = -(auVar2[8] == auVar17[0]);
      auVar19[9] = -(auVar2[9] == auVar17[1]);
      auVar19[10] = -(auVar2[10] == auVar17[2]);
      auVar19[0xb] = -(auVar2[0xb] == auVar17[3]);
      auVar19[0xc] = -(auVar2[0xc] == auVar17[4]);
      auVar19[0xd] = -(auVar2[0xd] == auVar17[5]);
      auVar19[0xe] = -(auVar2[0xe] == auVar17[6]);
      auVar19[0xf] = -(auVar2[0xf] == auVar17[7]);
      uVar12 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe | (ushort)(auVar19[0xf] >> 7) << 0xf;
      uVar13 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar6 = 0;
        for (uVar7 = uVar13; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar6 = uVar6 + 1;
        }
        plStack_50 = (longlong *)(param_1[6] + (uVar6 + uVar14 & param_1[7]) * -0x10);
        if (uVar9 == plStack_50[-2]) {
          pdb_14098a960(plStack_50[-1]);
          puVar4 = (ulonglong *)plStack_50[-1];
          puVar4[0xe] = uStack_a8;
          puVar4[0xf] = uStack_a0;
          puVar4[0xc] = uStack_b8;
          puVar4[0xd] = uStack_b0;
          puVar4[10] = uStack_c8;
          puVar4[0xb] = uStack_c0;
          puVar4[8] = uStack_d8;
          puVar4[9] = uStack_d0;
          puVar4[6] = uStack_e8;
          puVar4[7] = uStack_e0;
          puVar4[4] = uStack_f8;
          puVar4[5] = uStack_f0;
          puVar4[2] = uStack_108;
          puVar4[3] = uStack_100;
          *puVar4 = uStack_118;
          puVar4[1] = (ulonglong)pbStack_110;
          lVar8 = param_1[2];
          if (lVar8 == *param_1) {
            uStack_44 = 1;
            pdb_142d7e8a0(param_1);
          }
          *(ulonglong *)(param_1[1] + lVar8 * 8) = uVar9;
          param_1[2] = lVar8 + 1;
          if (!SBORROW8(0,uStack_58)) {
            plVar1 = param_1 + 0x1e;
            LOCK();
            bVar15 = param_1[0x1e] == 0;
            if (bVar15) {
              param_1[0x1e] = 8;
            }
            UNLOCK();
            if (!bVar15) {
              uStack_41 = 1;
              pdb_142dbc1f0(plVar1);
            }
            uStack_41 = 1;
            pdb_140e9a150(plVar1);
            uStack_41 = 1;
            pdb_140e9a150((ulonglong)plVar1 | 1);
            uStack_118 = uStack_58;
            pbStack_110 = pbStack_60;
            uStack_108 = uStack_58;
            uStack_100 = CONCAT71(uStack_100._1_7_,unaff_R14B);
            plStack_50 = plVar1;
            pdb_1417b7000(param_1 + 0x1f,&uStack_118,uVar9);
            plVar1 = plStack_50;
            uStack_41 = 0;
            pdb_140e9a350(plStack_50);
            uStack_41 = 0;
            pdb_140e9a350();
            LOCK();
            lVar8 = *plVar1;
            if (lVar8 == 8) {
              *plVar1 = 0;
            }
            UNLOCK();
            if (lVar8 != 8) {
              uStack_41 = 0;
              pdb_142dbca40(plVar1,0);
            }
          }
          uVar14 = puStack_68[0x10];
          if (SBORROW8(0,uVar14)) {
            return uVar9;
          }
          if (uVar14 == 0) {
            return uVar9;
          }
          pub_1406abac0((byte *)puStack_68[0x11],uVar14,1);
          return uVar9;
        }
        uVar12 = (ushort)(uVar13 - 1) & (ushort)uVar13;
        uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar12);
      }
      auVar18[0] = -(auVar2[0] == -1);
      auVar18[1] = -(auVar2[1] == -1);
      auVar18[2] = -(auVar2[2] == -1);
      auVar18[3] = -(auVar2[3] == -1);
      auVar18[4] = -(auVar2[4] == -1);
      auVar18[5] = -(auVar2[5] == -1);
      auVar18[6] = -(auVar2[6] == -1);
      auVar18[7] = -(auVar2[7] == -1);
      auVar18[8] = -(auVar2[8] == -1);
      auVar18[9] = -(auVar2[9] == -1);
      auVar18[10] = -(auVar2[10] == -1);
      auVar18[0xb] = -(auVar2[0xb] == -1);
      auVar18[0xc] = -(auVar2[0xc] == -1);
      auVar18[0xd] = -(auVar2[0xd] == -1);
      auVar18[0xe] = -(auVar2[0xe] == -1);
      auVar18[0xf] = -(auVar2[0xf] == -1);
      if ((((((((((((((((SUB161(auVar18 >> 7,0) & 1) != 0 || (SUB161(auVar18 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar18 >> 0x17,0) & 1) != 0) || (SUB161(auVar18 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar18 >> 0x27,0) & 1) != 0) || (SUB161(auVar18 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar18 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar18 >> 0x3f,0) & 1) != 0) || (SUB161(auVar18 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar18 >> 0x4f,0) & 1) != 0) || (SUB161(auVar18 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar18 >> 0x5f,0) & 1) != 0) || (SUB161(auVar18 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar18 >> 0x6f,0) & 1) != 0) || (SUB161(auVar18 >> 0x77,0) & 1) != 0) ||
          auVar18[0xf] < '\0') break;
      uVar14 = uVar14 + lVar8 + 0x10;
      lVar8 = lVar8 + 0x10;
    }
  }
  uStack_45 = 1;
  pdb_142dc8110(&UNK_143039af0,0x21,&UNK_143039b18);
LAB_140a2b8ca:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}

