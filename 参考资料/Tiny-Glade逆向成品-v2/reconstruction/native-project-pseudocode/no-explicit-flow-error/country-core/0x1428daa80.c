// VA 0x1428daa80, PDB extent 1735 bytes
// country_core::utils::load_json::load_json_as_mesh<ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/load_json.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::utils::load_json::load_json_as_mesh<ref$<str$> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/load_json.rs
   Extent: 1735 */

undefined8 * pdb_1428daa80(undefined8 *param_1,ulonglong param_2,undefined8 param_3)

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
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined *puVar16;
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
  ulonglong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  longlong *plStack_60;
  longlong *plStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar15 = param_2;
  cVar7 = pdb_140e94b40();
  plStack_58 = (longlong *)CONCAT71(plStack_58._1_7_,cVar7);
  if (cVar7 == '\0') {
    uStack_b8 = 0;
LAB_1428dac8d:
    pdb_140d929f0(&uStack_a8,param_2,param_3);
    pbVar1 = pbStack_a0;
    bVar8 = pdb_140d8af50(pbStack_a0,uStack_98);
    pdb_1428db150(&iStack_158,param_2,param_3,pbVar1,uStack_98,bVar8);
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
        puStack_1b0 = &UNK_1435b15a7;
        uStack_1a8 = 0x1e;
        uStack_1a0 = 0;
        puStack_198 = &UNK_1435b14f8;
        uStack_190 = 0x2a;
        uStack_188 = 1;
        puStack_180 = &UNK_1435b15a7;
        uStack_178 = 0x1e;
        uStack_170 = 0x1d00000001;
        puStack_168 = &UNK_1435b1568;
        ppuStack_160 = &puStack_d8;
        puStack_d8 = &uStack_a8;
        pdb_140f332f0(&uStack_49,&uStack_1b8);
      }
      uVar9 = pdb_140d8af50(param_2,param_3);
      pdb_1428db150(param_1,param_2,param_3,param_2,param_3,uVar9);
      pdb_140f36c40(&uStack_68);
      if (!SBORROW8(0,CONCAT44(uStack_154,iStack_158))) {
        pdb_1410c1d80(&iStack_158);
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
       (plVar13 = (longlong *)pdb_142e16b00(plVar13,0), plVar13 == (longlong *)0x0)) {
LAB_1428daf08:
      pdb_142dc7890(&UNK_14328b3f8);
LAB_1428daf14:
      pdb_142dc8070(&UNK_1435b1523,0x2a);
LAB_1428daf37:
      pdb_142dc8070(&UNK_1435b1650,0x31,0);
LAB_1428daf57:
      pdb_142dc8070(&UNK_1435b1650,0x31);
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
    lVar17 = 0x31;
    uStack_78 = param_2;
    uStack_70 = param_3;
    lVar11 = pdb_1428db380(0x31);
    puVar16 = &UNK_1435b1650;
    if (lVar11 == 1) {
      if (uVar15 < 0x32) {
        uVar12 = pdb_1428db380(uVar15);
        if ((uVar12 & 1) != 0) {
          if (0x31 < uVar15 + 2) goto LAB_1428daf57;
          lVar17 = 0x2f - uVar15;
          puVar16 = &UNK_1435b1652 + uVar15;
        }
        goto LAB_1428dab25;
      }
      goto LAB_1428daf37;
    }
LAB_1428dab25:
    puVar18 = &UNK_1435b154d;
    puVar19 = &UNK_1435b1523;
    do {
      bVar8 = puVar18[-1];
      uVar10 = (uint)(char)bVar8;
      if ((char)bVar8 < '\0') {
        bVar2 = puVar18[-2];
        if ((char)bVar2 < -0x40) {
          bVar3 = puVar18[-3];
          if ((char)bVar3 < -0x40) {
            pbVar1 = puVar18 + -4;
            puVar18 = puVar18 + -4;
            uVar10 = bVar3 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar18 = puVar18 + -3;
            uVar10 = bVar3 & 0xf;
          }
          uVar10 = bVar2 & 0x3f | uVar10 << 6;
        }
        else {
          puVar18 = puVar18 + -2;
          uVar10 = bVar2 & 0x1f;
        }
        uVar10 = (uint)(bVar8 & 0x3f) | uVar10 << 6;
        if (uVar10 != 0x5c) goto LAB_1428dabb4;
LAB_1428dabcd:
        if ((undefined *)0x2a < puVar18 + -0x1435b1522) goto LAB_1428daf14;
        lVar11 = 0x2a - (longlong)(puVar18 + -0x1435b1522);
        puVar19 = puVar18 + 1;
        goto LAB_1428dabf0;
      }
      puVar18 = puVar18 + -1;
      if (uVar10 == 0x5c) goto LAB_1428dabcd;
LAB_1428dabb4:
      if (uVar10 == 0x2f) goto LAB_1428dabcd;
    } while (puVar18 != &UNK_1435b1523);
    lVar11 = 0x2a;
LAB_1428dabf0:
    pdb_140f69110(&iStack_158,uStack_78,uStack_70);
    uVar6 = uStack_148;
    uVar5 = uStack_150;
    if (iStack_158 == 1) goto LAB_1428daed4;
    plVar13 = (longlong *)pdb_140e97000();
    if (((char)plVar13[0xd] != '\x01') &&
       (plVar13 = (longlong *)pdb_142e16b00(plVar13,0), plVar13 == (longlong *)0x0))
    goto LAB_1428daf08;
    if (*plVar13 == 0) {
      *plVar13 = -1;
      plStack_60 = plVar13;
      uStack_b0 = pdb_140e94f10(plVar13 + 1,puVar16,lVar17,puVar19,lVar11,uVar5,uVar6);
      *plStack_60 = *plStack_60 + 1;
      uStack_b8 = 1;
      param_3 = uStack_70;
      param_2 = uStack_78;
      plStack_60 = (longlong *)uStack_b0;
      goto LAB_1428dac8d;
    }
  }
  pdb_142dc8090(&UNK_14328b468);
LAB_1428daed4:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_1435b1550);
}

