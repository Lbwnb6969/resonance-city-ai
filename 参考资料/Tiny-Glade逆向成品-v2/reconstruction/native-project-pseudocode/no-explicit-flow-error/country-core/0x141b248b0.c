// VA 0x141b248b0, PDB extent 1959 bytes
// country_core::utils::load_json::load_json_as_mesh<std::path::PathBuf>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/load_json.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::utils::load_json::load_json_as_mesh<std::path::PathBuf>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/load_json.rs
   Extent: 1959 */

undefined8 * pdb_141b248b0(undefined8 *param_1,ulonglong *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  ulonglong uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  char cVar9;
  byte bVar10;
  undefined1 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined *puVar14;
  longlong *plVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined8 unaff_RBX;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  ulonglong **ppuStack_160;
  int iStack_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulonglong *puStack_d8;
  code *pcStack_d0;
  undefined8 *puStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulonglong uStack_a8;
  byte *pbStack_a0;
  undefined8 uStack_98;
  ulonglong *puStack_78;
  undefined8 uStack_70;
  longlong *plStack_68;
  longlong *plStack_60;
  undefined1 uStack_51;
  byte *pbStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pbStack_50 = (byte *)param_2[1];
  uVar4 = param_2[2];
  puStack_78 = param_2;
  cVar9 = pdb_140e94b40();
  plStack_60 = (longlong *)CONCAT71(plStack_60._1_7_,cVar9);
  if (cVar9 == '\0') {
    uStack_b8 = 0;
  }
  else {
    puVar18 = &UNK_143392bfb;
    plStack_68 = (longlong *)0x31;
    uVar17 = 0x31;
    lVar12 = pdb_141b2bba0(&UNK_143392bfb);
    if (lVar12 == 1) {
      if (0x31 < uVar17) {
        pdb_142dc8070(&UNK_143392bfb,0x31,0,uVar17,&UNK_143392cf0);
        goto LAB_141b24e31;
      }
      puVar18 = &UNK_143392bfb;
      uVar13 = pdb_141b2bba0(&UNK_143392bfb);
      if ((uVar13 & 1) != 0) {
        if (0x31 < uVar17 + 2) {
          pdb_142dc8070(&UNK_143392bfb,0x31,uVar17 + 2,0x31,&UNK_143392d08);
          goto LAB_141b24e31;
        }
        plStack_68 = (longlong *)(0x2f - uVar17);
        puVar18 = &UNK_143392bfd + uVar17;
      }
    }
    puVar14 = &UNK_143391dbe;
    puVar19 = &UNK_143391d94;
    do {
      bVar10 = puVar14[-1];
      uVar16 = (uint)(char)bVar10;
      if ((char)bVar10 < '\0') {
        bVar2 = puVar14[-2];
        if ((char)bVar2 < -0x40) {
          bVar3 = puVar14[-3];
          if ((char)bVar3 < -0x40) {
            pbVar1 = puVar14 + -4;
            puVar14 = puVar14 + -4;
            uVar16 = bVar3 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar14 = puVar14 + -3;
            uVar16 = bVar3 & 0xf;
          }
          uVar16 = bVar2 & 0x3f | uVar16 << 6;
        }
        else {
          puVar14 = puVar14 + -2;
          uVar16 = bVar2 & 0x1f;
        }
        uVar16 = (uint)(bVar10 & 0x3f) | uVar16 << 6;
        if (uVar16 != 0x5c) goto LAB_141b24a09;
LAB_141b24a26:
        if ((undefined *)0x2a < puVar14 + -0x143391d93) {
          pdb_142dc8070(&UNK_143391d94,0x2a,puVar14 + -0x143391d93,0x2a,&UNK_143392cd0);
          goto LAB_141b24e31;
        }
        lVar12 = 0x29 - (longlong)(puVar14 + -0x143391d94);
        puVar19 = puVar14 + 1;
        goto LAB_141b24a4a;
      }
      puVar14 = puVar14 + -1;
      if (uVar16 == 0x5c) goto LAB_141b24a26;
LAB_141b24a09:
      if (uVar16 == 0x2f) goto LAB_141b24a26;
    } while (puVar14 != &UNK_143391d94);
    lVar12 = 0x2a;
LAB_141b24a4a:
    pdb_140f69110(&iStack_158,pbStack_50,uVar4);
    uVar7 = uStack_148;
    uVar6 = uStack_150;
    if (iStack_158 == 1) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143391dc0);
    }
    plVar15 = (longlong *)pdb_140e97000();
    if (((char)plVar15[0xd] != '\x01') &&
       (plVar15 = (longlong *)pdb_142d8ec20(plVar15,0), plVar15 == (longlong *)0x0)) {
      pdb_142dc7890(&UNK_143326860);
      goto LAB_141b24e31;
    }
    plVar8 = plStack_68;
    if (*plVar15 != 0) {
      pdb_142dc8090(&UNK_143326a50);
      goto LAB_141b24e31;
    }
    *plVar15 = -1;
    plStack_68 = plVar15;
    unaff_RBX = pdb_140e94f10(plVar15 + 1,puVar18,plVar8,puVar19,lVar12,uVar6,uVar7);
    *plStack_68 = *plStack_68 + 1;
    uStack_b8 = 1;
    uStack_b0 = unaff_RBX;
  }
  pdb_140d929f0(&uStack_a8,pbStack_50,uVar4);
  pbVar1 = pbStack_a0;
  bVar10 = pdb_140d8af50(pbStack_a0,uStack_98);
  pdb_141b25e20(&iStack_158,pbStack_50,uVar4,pbVar1,uStack_98,bVar10);
  if ((bVar10 & SBORROW8(0,CONCAT44(uStack_154,iStack_158))) == 0) {
    param_1[0xe] = uStack_e8;
    param_1[0xf] = uStack_e0;
    param_1[0xc] = uStack_f8;
    param_1[0xd] = uStack_f0;
    param_1[10] = uStack_108;
    param_1[0xb] = uStack_100;
    param_1[8] = uStack_118;
    param_1[9] = uStack_110;
    param_1[6] = uStack_128;
    param_1[7] = uStack_120;
    param_1[4] = uStack_138;
    param_1[5] = uStack_130;
    param_1[2] = uStack_148;
    param_1[3] = uStack_140;
    *param_1 = CONCAT44(uStack_154,iStack_158);
    param_1[1] = uStack_150;
  }
  else {
    uStack_70 = uStack_150;
    if (*_DAT_143ca8e90 != 0) {
      pcStack_d0 = pdb_140f58250;
      puStack_c8 = &uStack_70;
      pcStack_c0 = pdb_140f36c30;
      uStack_1b8 = 0;
      puStack_1b0 = &UNK_143391e17;
      uStack_1a8 = 0x1e;
      uStack_1a0 = 0;
      puStack_198 = &UNK_143391d69;
      uStack_190 = 0x2a;
      uStack_188 = 1;
      puStack_180 = &UNK_143391e17;
      uStack_178 = 0x1e;
      uStack_170 = 0x1d00000001;
      puStack_168 = &UNK_143391dd8;
      ppuStack_160 = &puStack_d8;
      puStack_d8 = &uStack_a8;
      pdb_140f332f0(&uStack_51,&uStack_1b8);
    }
    uVar11 = pdb_140d8af50(pbStack_50,uVar4);
    pdb_141b25e20(param_1,pbStack_50,uVar4,pbStack_50,uVar4,uVar11);
    pdb_140f36c40(&uStack_70);
    if (!SBORROW8(0,CONCAT44(uStack_154,iStack_158))) {
      pdb_14098a960(&iStack_158);
    }
  }
  if (uStack_a8 != 0) {
    pub_1406abac0(pbStack_a0,uStack_a8,1);
  }
  if ((char)plStack_60 == '\0') {
LAB_141b24d10:
    if (*puStack_78 != 0) {
      pub_1406abac0(pbStack_50,*puStack_78,1);
    }
    return param_1;
  }
  plVar15 = (longlong *)pdb_140e97000();
  if (((char)plVar15[0xd] == '\x01') ||
     (plVar15 = (longlong *)pdb_142d8ec20(plVar15,0), plVar15 != (longlong *)0x0)) {
    if (*plVar15 == 0) {
      *plVar15 = -1;
      plStack_60 = plVar15;
      pdb_140e95370(plVar15 + 1,unaff_RBX);
      *plStack_60 = *plStack_60 + 1;
      goto LAB_141b24d10;
    }
    pdb_142dc8090(&UNK_143326a50);
  }
  else {
    pdb_142dc7890(&UNK_143326860);
  }
LAB_141b24e31:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}

