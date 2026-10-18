// VA 0x141b241d0, PDB extent 1751 bytes
// country_core::utils::load_json::load_json_as_mesh<ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/load_json.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::utils::load_json::load_json_as_mesh<ref$<str$> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/load_json.rs
   Extent: 1751 */

undefined8 * pdb_141b241d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  byte bVar8;
  undefined1 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined *puVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
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
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  longlong *plStack_60;
  longlong *plStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  cVar7 = pdb_140e94b40();
  plStack_58 = (longlong *)CONCAT71(plStack_58._1_7_,cVar7);
  if (cVar7 == '\0') {
    uStack_b8 = 0;
LAB_141b243ed:
    pdb_140d929f0(&uStack_a8,param_2,param_3);
    pbVar1 = pbStack_a0;
    bVar8 = pdb_140d8af50(pbStack_a0,uStack_98);
    pdb_141b25e20(&iStack_158,param_2,param_3,pbVar1,uStack_98,bVar8);
    if ((bVar8 & SBORROW8(0,CONCAT44(uStack_154,iStack_158))) == 0) {
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
      uVar9 = pdb_140d8af50(param_2,param_3);
      pdb_141b25e20(param_1,param_2,param_3,param_2,param_3,uVar9);
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
    plVar13 = (longlong *)pdb_140e97000();
    if (((char)plVar13[0xd] != '\x01') &&
       (plVar13 = (longlong *)pdb_142d8ec20(plVar13,0), plVar13 == (longlong *)0x0)) {
LAB_141b24668:
      pdb_142dc7890(&UNK_143326860);
LAB_141b24674:
      pdb_142dc8070(&UNK_143391d94,0x2a);
LAB_141b24697:
      pdb_142dc8070(&UNK_143392bfb,0x31,0);
LAB_141b246b7:
      pdb_142dc8070(&UNK_143392bfb,0x31);
      pcVar4 = (code *)swi(3);
      puVar14 = (undefined8 *)(*pcVar4)();
      return puVar14;
    }
    if (*plVar13 == 0) {
      *plVar13 = -1;
      plStack_58 = plVar13;
      pdb_140e95370(plVar13 + 1,plStack_60);
      *plStack_58 = *plStack_58 + 1;
      return param_1;
    }
  }
  else {
    puVar19 = &UNK_143392bfb;
    lVar17 = 0x31;
    uVar16 = 0x31;
    uStack_70 = param_2;
    lVar10 = pdb_141b2bba0(&UNK_143392bfb);
    if (lVar10 == 1) {
      if (uVar16 < 0x32) {
        puVar19 = &UNK_143392bfb;
        uVar11 = pdb_141b2bba0(&UNK_143392bfb);
        if ((uVar11 & 1) != 0) {
          if (0x31 < uVar16 + 2) goto LAB_141b246b7;
          lVar17 = 0x2f - uVar16;
          puVar19 = &UNK_143392bfd + uVar16;
        }
        goto LAB_141b2427b;
      }
      goto LAB_141b24697;
    }
LAB_141b2427b:
    puVar12 = &UNK_143391dbe;
    puVar18 = &UNK_143391d94;
    do {
      bVar8 = puVar12[-1];
      uVar15 = (uint)(char)bVar8;
      if ((char)bVar8 < '\0') {
        bVar2 = puVar12[-2];
        if ((char)bVar2 < -0x40) {
          bVar3 = puVar12[-3];
          if ((char)bVar3 < -0x40) {
            pbVar1 = puVar12 + -4;
            puVar12 = puVar12 + -4;
            uVar15 = bVar3 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar12 = puVar12 + -3;
            uVar15 = bVar3 & 0xf;
          }
          uVar15 = bVar2 & 0x3f | uVar15 << 6;
        }
        else {
          puVar12 = puVar12 + -2;
          uVar15 = bVar2 & 0x1f;
        }
        uVar15 = (uint)(bVar8 & 0x3f) | uVar15 << 6;
        if (uVar15 != 0x5c) goto LAB_141b24309;
LAB_141b24326:
        if ((undefined *)0x2a < puVar12 + -0x143391d93) goto LAB_141b24674;
        lVar10 = 0x29 - (longlong)(puVar12 + -0x143391d94);
        puVar18 = puVar12 + 1;
        goto LAB_141b2434a;
      }
      puVar12 = puVar12 + -1;
      if (uVar15 == 0x5c) goto LAB_141b24326;
LAB_141b24309:
      if (uVar15 == 0x2f) goto LAB_141b24326;
    } while (puVar12 != &UNK_143391d94);
    lVar10 = 0x2a;
LAB_141b2434a:
    pdb_140f69110(&iStack_158,uStack_70,param_3);
    uVar6 = uStack_148;
    uVar5 = uStack_150;
    if (iStack_158 == 1) goto LAB_141b24634;
    uStack_78 = param_3;
    plVar13 = (longlong *)pdb_140e97000();
    if (((char)plVar13[0xd] != '\x01') &&
       (plVar13 = (longlong *)pdb_142d8ec20(plVar13,0), plVar13 == (longlong *)0x0))
    goto LAB_141b24668;
    if (*plVar13 == 0) {
      *plVar13 = -1;
      plStack_60 = plVar13;
      uStack_b0 = pdb_140e94f10(plVar13 + 1,puVar19,lVar17,puVar18,lVar10,uVar5,uVar6);
      *plStack_60 = *plStack_60 + 1;
      uStack_b8 = 1;
      param_3 = uStack_78;
      param_2 = uStack_70;
      plStack_60 = (longlong *)uStack_b0;
      goto LAB_141b243ed;
    }
  }
  pdb_142dc8090(&UNK_143326a50);
LAB_141b24634:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143391dc0);
}

