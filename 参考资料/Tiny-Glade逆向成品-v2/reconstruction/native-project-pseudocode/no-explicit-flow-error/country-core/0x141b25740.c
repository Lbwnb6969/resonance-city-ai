// VA 0x141b25740, PDB extent 1751 bytes
// country_core::utils::load_json::load_json_as_mesh<ref$<ref$<str$> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/load_json.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::utils::load_json::load_json_as_mesh<ref$<ref$<str$>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/load_json.rs
   Extent: 1751 */

undefined8 * pdb_141b25740(undefined8 *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  code *pcVar4;
  undefined8 uVar5;
  char cVar6;
  byte bVar7;
  undefined1 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined *puVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  longlong lVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined *puVar20;
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
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  longlong *plStack_60;
  longlong *plStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar18 = *param_2;
  uVar16 = param_2[1];
  cVar6 = pdb_140e94b40();
  plStack_58 = (longlong *)CONCAT71(plStack_58._1_7_,cVar6);
  if (cVar6 == '\0') {
    uStack_b8 = 0;
LAB_141b2595d:
    pdb_140d929f0(&uStack_a8,uVar18,uVar16);
    pbVar1 = pbStack_a0;
    bVar7 = pdb_140d8af50(pbStack_a0,uStack_98);
    pdb_141b25e20(&iStack_158,uVar18,uVar16,pbVar1,uStack_98,bVar7);
    if ((bVar7 & SBORROW8(0,CONCAT44(uStack_154,iStack_158))) == 0) {
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
      uStack_68 = uStack_150;
      if (*_DAT_143ca8e90 != 0) {
        pcStack_d0 = pdb_140f58250;
        puStack_c8 = &uStack_68;
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
        pdb_140f332f0(&uStack_49,&uStack_1b8);
      }
      uVar8 = pdb_140d8af50(uVar18,uVar16);
      pdb_141b25e20(param_1,uVar18,uVar16,uVar18,uVar16,uVar8);
      pdb_140f36c40(&uStack_68);
      if (!SBORROW8(0,CONCAT44(uStack_154,iStack_158))) {
        pdb_14098a960(&iStack_158);
      }
    }
    if (uStack_a8 != 0) {
      pub_1406abac0(pbStack_a0,uStack_a8,1);
    }
    if ((char)plStack_58 == '\0') {
      return param_1;
    }
    plVar12 = (longlong *)pdb_140e97000();
    if (((char)plVar12[0xd] != '\x01') &&
       (plVar12 = (longlong *)pdb_142d8ec20(plVar12,0), plVar12 == (longlong *)0x0)) {
LAB_141b25bd8:
      pdb_142dc7890(&UNK_143326860);
LAB_141b25be4:
      pdb_142dc8070(&UNK_143391d94,0x2a);
LAB_141b25c07:
      pdb_142dc8070(&UNK_143392bfb,0x31,0);
LAB_141b25c27:
      pdb_142dc8070(&UNK_143392bfb,0x31);
      pcVar4 = (code *)swi(3);
      puVar13 = (undefined8 *)(*pcVar4)();
      return puVar13;
    }
    if (*plVar12 == 0) {
      *plVar12 = -1;
      plStack_58 = plVar12;
      pdb_140e95370(plVar12 + 1,plStack_60);
      *plStack_58 = *plStack_58 + 1;
      return param_1;
    }
  }
  else {
    puVar20 = &UNK_143392bfb;
    lVar17 = 0x31;
    uVar15 = 0x31;
    uStack_70 = uVar18;
    lVar9 = pdb_141b2bba0(&UNK_143392bfb);
    if (lVar9 == 1) {
      if (uVar15 < 0x32) {
        puVar20 = &UNK_143392bfb;
        uVar10 = pdb_141b2bba0(&UNK_143392bfb);
        if ((uVar10 & 1) != 0) {
          if (0x31 < uVar15 + 2) goto LAB_141b25c27;
          lVar17 = 0x2f - uVar15;
          puVar20 = &UNK_143392bfd + uVar15;
        }
        goto LAB_141b257ec;
      }
      goto LAB_141b25c07;
    }
LAB_141b257ec:
    puVar11 = &UNK_143391dbe;
    puVar19 = &UNK_143391d94;
    do {
      bVar7 = puVar11[-1];
      uVar14 = (uint)(char)bVar7;
      if ((char)bVar7 < '\0') {
        bVar2 = puVar11[-2];
        if ((char)bVar2 < -0x40) {
          bVar3 = puVar11[-3];
          if ((char)bVar3 < -0x40) {
            pbVar1 = puVar11 + -4;
            puVar11 = puVar11 + -4;
            uVar14 = bVar3 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar11 = puVar11 + -3;
            uVar14 = bVar3 & 0xf;
          }
          uVar14 = bVar2 & 0x3f | uVar14 << 6;
        }
        else {
          puVar11 = puVar11 + -2;
          uVar14 = bVar2 & 0x1f;
        }
        uVar14 = (uint)(bVar7 & 0x3f) | uVar14 << 6;
        if (uVar14 != 0x5c) goto LAB_141b25879;
LAB_141b25896:
        if ((undefined *)0x2a < puVar11 + -0x143391d93) goto LAB_141b25be4;
        lVar9 = 0x29 - (longlong)(puVar11 + -0x143391d94);
        puVar19 = puVar11 + 1;
        goto LAB_141b258ba;
      }
      puVar11 = puVar11 + -1;
      if (uVar14 == 0x5c) goto LAB_141b25896;
LAB_141b25879:
      if (uVar14 == 0x2f) goto LAB_141b25896;
    } while (puVar11 != &UNK_143391d94);
    lVar9 = 0x2a;
LAB_141b258ba:
    pdb_140f69110(&iStack_158,uStack_70,uVar16);
    uVar5 = uStack_148;
    uVar18 = uStack_150;
    if (iStack_158 == 1) goto LAB_141b25ba4;
    uStack_78 = uVar16;
    plVar12 = (longlong *)pdb_140e97000();
    if (((char)plVar12[0xd] != '\x01') &&
       (plVar12 = (longlong *)pdb_142d8ec20(plVar12,0), plVar12 == (longlong *)0x0))
    goto LAB_141b25bd8;
    if (*plVar12 == 0) {
      *plVar12 = -1;
      plStack_60 = plVar12;
      uStack_b0 = pdb_140e94f10(plVar12 + 1,puVar20,lVar17,puVar19,lVar9,uVar18,uVar5);
      *plStack_60 = *plStack_60 + 1;
      uStack_b8 = 1;
      uVar16 = uStack_78;
      uVar18 = uStack_70;
      plStack_60 = (longlong *)uStack_b0;
      goto LAB_141b2595d;
    }
  }
  pdb_142dc8090(&UNK_143326a50);
LAB_141b25ba4:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143391dc0);
}

