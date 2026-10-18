// VA 0x142960120, PDB extent 2417 bytes
// system_critters::sheep::sheep_react_to_being_inside_buildings::react_to_being_inside_buildings
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/sheep/sheep_react_to_being_inside_buildings.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_critters::sheep::sheep_react_to_being_inside_buildings::react_to_being_inside_buildings
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/sheep/sheep_react_to_being_inside_buildings.rs
   Extent: 2417 */

void pdb_142960120(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4,
                  longlong *param_5,longlong *param_6,longlong *param_7)

{
  uint *puVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  ulonglong *puVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined4 *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  code *pcVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  undefined8 uVar27;
  char cVar28;
  longlong lVar29;
  longlong lVar30;
  undefined8 uVar31;
  longlong lVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  byte *pbVar35;
  uint uVar36;
  longlong lVar37;
  ulonglong uVar38;
  int *piVar39;
  longlong lVar40;
  longlong lVar41;
  ulonglong uVar42;
  uint *puVar43;
  longlong lVar44;
  longlong lVar45;
  longlong lVar46;
  float fVar47;
  float fVar48;
  uint uStack_1fc;
  longlong lStack_1f8;
  longlong lStack_1f0;
  longlong lStack_1e8;
  longlong lStack_1a0;
  ulonglong uStack_140;
  byte *pbStack_138;
  ulonglong uStack_130;
  undefined4 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined8 uStack_104;
  undefined4 uStack_fc;
  undefined1 uStack_f8;
  undefined1 auStack_f0 [176];
  
  puVar10 = (ulonglong *)*param_1;
  lVar11 = param_1[1];
  uVar33 = *puVar10;
  uVar38 = 0;
  uVar34 = uVar33 - *(ulonglong *)(lVar11 + 0x18);
  if (uVar33 < *(ulonglong *)(lVar11 + 0x18)) {
    uVar34 = uVar38;
  }
  uVar42 = uVar33 - *(ulonglong *)(lVar11 + 0x38);
  if (uVar33 < *(ulonglong *)(lVar11 + 0x38)) {
    uVar42 = uVar38;
  }
  lVar29 = uVar34 * 0x10 + *(longlong *)(lVar11 + 8);
  uVar33 = *(ulonglong *)(lVar11 + 0x10) - uVar34;
  if (*(ulonglong *)(lVar11 + 0x10) < uVar34) {
    lVar29 = 8;
    uVar33 = uVar38;
  }
  lVar37 = uVar42 * 0x10 + *(longlong *)(lVar11 + 0x28);
  uVar34 = *(ulonglong *)(lVar11 + 0x30) - uVar42;
  if (*(ulonglong *)(lVar11 + 0x30) < uVar42) {
    lVar37 = 8;
    uVar34 = uVar38;
  }
  *puVar10 = (*(longlong *)(lVar11 + 0x40) - uVar34) - uVar33;
  uVar27 = _DAT_143605010;
  fVar26 = _DAT_142e37838;
  lVar46 = uVar33 * 0x10 + lVar29;
  lVar44 = uVar34 * 0x10 + lVar37;
  uVar12 = *param_4;
  lVar11 = *param_2;
  lVar13 = param_2[1];
  lVar14 = *param_5;
  lVar15 = param_5[1];
  lVar16 = *param_7;
  uVar7 = *(undefined4 *)((longlong)param_6 + 0x1c);
  lVar17 = *param_6;
  puVar18 = (undefined4 *)param_6[2];
LAB_1429602c9:
  do {
    if ((lVar29 == 0) || (lVar29 == lVar46)) {
      if ((lVar37 == 0) || (lVar37 == lVar44)) {
        return;
      }
      lVar29 = 0;
      lVar30 = lVar37;
      lVar37 = lVar37 + 0x10;
    }
    else {
      lVar30 = lVar29;
      lVar29 = lVar29 + 0x10;
    }
    *puVar10 = *puVar10 + 1;
    uVar19 = *(undefined8 *)(lVar30 + 8);
    lVar30 = pdb_140b54f80(uVar12,uVar19,&UNK_143605090);
    if (lVar30 == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_1436050a8);
    }
  } while ((1 < *(uint *)(lVar30 + 600)) || (fVar26 < *(float *)(lVar30 + 0x284)));
  uVar31 = pdb_14092f900(lVar30);
  puVar43 = *(uint **)(lVar11 + 0xf8);
  puVar1 = puVar43 + *(longlong *)(lVar11 + 0x100);
  cVar6 = *(char *)(lVar11 + 0x108);
  lVar41 = 0;
  lStack_1a0 = 8;
  lStack_1e8 = 0;
  lStack_1f0 = 0;
  lStack_1f8 = 0;
  uStack_1fc = 0;
  do {
    if (cVar6 == '\0') {
      if (uStack_1fc == (uint)lVar41) {
        do {
          if (puVar43 == puVar1) goto LAB_1429602c9;
          uVar36 = *puVar43;
          puVar43 = puVar43 + 1;
          lVar41 = *(longlong *)(*(longlong *)(lVar13 + 0x100) + 0x58 + (ulonglong)uVar36 * 0xa0);
        } while (lVar41 == 0);
        lVar32 = *(longlong *)(lVar13 + 0x100) + (ulonglong)uVar36 * 0xa0;
        uVar33 = (ulonglong)*(uint *)(lVar32 + 0x94);
        lVar45 = *(longlong *)(lVar13 + 0x1a0) + uVar33 * 0x48;
        uVar33 = *(ulonglong *)(*(longlong *)(lVar13 + 0x1a0) + 0x40 + uVar33 * 0x48);
        if ((*(ulonglong *)(lVar11 + 0x110) < uVar33) &&
           (uVar34 = *(ulonglong *)
                      (*(longlong *)(lVar45 + 0x38) + *(ulonglong *)(lVar11 + 0x110) * 8),
           uVar34 != 0)) {
          lStack_1e8 = *(longlong *)(*(longlong *)(lVar45 + 0x18) + 0x10 + ~uVar34 * 0x30);
          uVar34 = *(ulonglong *)(lVar11 + 0x118);
          if (uVar33 <= uVar34) goto LAB_142960632;
LAB_1429605b3:
          uVar34 = *(ulonglong *)(*(longlong *)(lVar45 + 0x38) + uVar34 * 8);
          if (uVar34 == 0) goto LAB_142960632;
          lStack_1f0 = *(longlong *)(*(longlong *)(lVar45 + 0x18) + 0x10 + ~uVar34 * 0x30);
          uVar34 = *(ulonglong *)(lVar11 + 0x120);
          if (uVar34 < uVar33) goto LAB_14296064c;
LAB_142960687:
          lStack_1f8 = 0;
        }
        else {
          lStack_1e8 = 0;
          uVar34 = *(ulonglong *)(lVar11 + 0x118);
          if (uVar34 < uVar33) goto LAB_1429605b3;
LAB_142960632:
          lStack_1f0 = 0;
          uVar34 = *(ulonglong *)(lVar11 + 0x120);
          if (uVar33 <= uVar34) goto LAB_142960687;
LAB_14296064c:
          uVar33 = *(ulonglong *)(*(longlong *)(lVar45 + 0x38) + uVar34 * 8);
          if (uVar33 == 0) goto LAB_142960687;
          lStack_1f8 = *(longlong *)(*(longlong *)(lVar45 + 0x18) + 0x10 + ~uVar33 * 0x30);
        }
        lStack_1a0 = *(longlong *)(lVar32 + 0x50);
        uStack_1fc = 0;
      }
      uVar36 = ~*(uint *)(lStack_1a0 + 8 + (ulonglong)uStack_1fc * 0x10);
    }
    else {
      uVar36 = uStack_1fc;
      if (uStack_1fc == (uint)lVar41) {
        do {
          if (puVar43 == puVar1) goto LAB_1429602c9;
          uVar36 = *puVar43;
          puVar43 = puVar43 + 1;
          lVar41 = *(longlong *)(*(longlong *)(lVar13 + 0x1a0) + 0x10 + (ulonglong)uVar36 * 0x48);
        } while (lVar41 == 0);
        lVar45 = *(longlong *)(lVar13 + 0x1a0) + (ulonglong)uVar36 * 0x48;
        uVar33 = *(ulonglong *)(lVar45 + 0x40);
        if ((*(ulonglong *)(lVar11 + 0x110) < uVar33) &&
           (uVar34 = *(ulonglong *)
                      (*(longlong *)(lVar45 + 0x38) + *(ulonglong *)(lVar11 + 0x110) * 8),
           uVar34 != 0)) {
          lStack_1e8 = *(longlong *)(*(longlong *)(lVar45 + 0x18) + 0x10 + ~uVar34 * 0x30);
          uVar34 = *(ulonglong *)(lVar11 + 0x118);
          if (uVar33 <= uVar34) goto LAB_1429605f0;
LAB_142960558:
          uVar34 = *(ulonglong *)(*(longlong *)(lVar45 + 0x38) + uVar34 * 8);
          if (uVar34 == 0) goto LAB_1429605f0;
          lStack_1f0 = *(longlong *)(*(longlong *)(lVar45 + 0x18) + 0x10 + ~uVar34 * 0x30);
          uVar34 = *(ulonglong *)(lVar11 + 0x120);
          if (uVar34 < uVar33) goto LAB_14296060a;
LAB_142960674:
          lStack_1f8 = 0;
        }
        else {
          lStack_1e8 = 0;
          uVar34 = *(ulonglong *)(lVar11 + 0x118);
          if (uVar34 < uVar33) goto LAB_142960558;
LAB_1429605f0:
          lStack_1f0 = 0;
          uVar34 = *(ulonglong *)(lVar11 + 0x120);
          if (uVar33 <= uVar34) goto LAB_142960674;
LAB_14296060a:
          uVar33 = *(ulonglong *)(*(longlong *)(lVar45 + 0x38) + uVar34 * 8);
          if (uVar33 == 0) goto LAB_142960674;
          lStack_1f8 = *(longlong *)(*(longlong *)(lVar45 + 0x18) + 0x10 + ~uVar33 * 0x30);
        }
        uVar36 = 0;
        uStack_1fc = uVar36;
      }
    }
    uVar33 = (ulonglong)uVar36;
    lVar45 = uVar33 * 0x30 + lStack_1f0;
    fVar2 = *(float *)(lVar30 + 0x284);
    fVar47 = (float)pdb_140930390(lVar30);
    uVar34 = pdb_140b54b40(uVar12,uVar19);
    fVar48 = 0.0;
    if ((((((uVar34 & 0xffffffff) != 0) &&
          (uVar38 = uVar34 & 0xffffffff ^ 0xffffffff, uVar38 < *(ulonglong *)(lVar15 + 0x10))) &&
         (piVar39 = (int *)(uVar38 * 0x18 + *(longlong *)(lVar15 + 8)),
         piVar39[4] == (int)(uVar34 >> 0x20))) &&
        ((*piVar39 != 0 &&
         (uVar34 = *(ulonglong *)(piVar39 + 2),
         (uVar34 & 0xffffffff) < *(ulonglong *)(lVar14 + 0x38))))) &&
       ((*(ulonglong *)(*(longlong *)(lVar14 + 0x28) + (uVar34 >> 6 & 0x3ffffff) * 8) >>
         (uVar34 & 0x3f) & 1) != 0)) {
      fVar48 = (float)pdb_140b77a00((ulonglong)(uint)~piVar39[1] * 0x58 +
                                    *(longlong *)
                                     (*(longlong *)
                                       (*(longlong *)(lVar15 + 0x1a0) + 0x18 +
                                       (uVar34 >> 0x20) * 0x48) + 0x10 +
                                     ~*(ulonglong *)
                                       (*(longlong *)
                                         (*(longlong *)(lVar15 + 0x1a0) + 0x38 +
                                         (uVar34 >> 0x20) * 0x48) +
                                       *(longlong *)(lVar14 + 0x110) * 8) * 0x30));
    }
    uStack_1fc = uStack_1fc + 1;
    uVar3 = *(undefined4 *)(lVar45 + 0x10);
    uVar8 = *(undefined4 *)(lVar45 + 0x14);
    uVar4 = *(undefined4 *)(lVar45 + 0x18);
    cVar28 = pdb_140a84de0(uVar31,uVar3,uVar4);
    if (((cVar28 != '\0') && (fVar2 <= *(float *)(lVar45 + 0x14))) &&
       (*(float *)(lVar45 + 0x14) <= fVar47 + fVar48)) {
      lVar45 = pdb_140dedfe0(*(int *)(uVar33 * 0x68 + lStack_1e8 + 0x20) * 100 +
                             *(int *)(lVar16 + 0x2c));
      auVar22._8_8_ = 0;
      auVar22._0_8_ = lVar45 + 0xa0761d6478bd642fU ^ 0xe7037ed1a0b428db;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = lVar45 + 0xa0761d6478bd642fU;
      uVar34 = SUB168(auVar22 * auVar24,8) ^ SUB168(auVar22 * auVar24,0);
      if ((uint)((int)uVar34 * 7) < 4) {
        uVar38 = lVar45 + 0x40ec3ac8f17ac85e;
        do {
          auVar23._8_8_ = 0;
          auVar23._0_8_ = uVar38 ^ 0xe7037ed1a0b428db;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar38;
          uVar34 = SUB168(auVar23 * auVar25,8) ^ SUB168(auVar23 * auVar25,0);
          uVar38 = uVar38 + 0xa0761d6478bd642f;
        } while ((uint)((int)uVar34 * 7) < 4);
      }
      uVar34 = (uVar34 & 0xffffffff) * 7;
      uVar36 = (int)(uVar34 >> 0x20) * 8;
      iVar9 = *(int *)(&UNK_143605158 + (uVar34 >> 0x20) * 4);
      uVar34 = *(ulonglong *)(&UNK_143605178 + uVar36);
      uVar5 = *(undefined4 *)(uVar33 * 0x38 + lStack_1f8 + 0x30);
      *puVar18 = uVar7;
      lVar45 = *(longlong *)(lVar17 + 0x30);
      uVar20 = *(undefined8 *)(lVar17 + 0x40);
      if (lVar45 == *(longlong *)(lVar17 + 0x20)) {
        pdb_142d7e6e0(lVar17 + 0x20);
      }
      lVar32 = *(longlong *)(lVar17 + 0x28);
      lVar40 = lVar45 * 0x20;
      *(undefined8 *)(lVar32 + lVar40) = uVar20;
      *(undefined4 *)(lVar32 + 8 + lVar40) = uVar3;
      *(undefined4 *)(lVar32 + 0xc + lVar40) = uVar8;
      *(undefined4 *)(lVar32 + 0x10 + lVar40) = uVar4;
      *(undefined4 *)(lVar32 + 0x14 + lVar40) = uVar5;
      *(char *)(lVar32 + 0x18 + lVar40) = (char)(0x7060502030100 >> (sbyte)uVar36);
      *(longlong *)(lVar17 + 0x30) = lVar45 + 1;
      *(longlong *)(lVar17 + 0x40) = *(longlong *)(lVar17 + 0x40) + 1;
      pdb_14007ee60();
      pbVar35 = pub_1406abab0(uVar34,1);
      if (pbVar35 == (byte *)0x0) {
        pdb_142dc7e2a(1,uVar34);
        pcVar21 = (code *)swi(3);
        (*pcVar21)();
        return;
      }
      pub_142e32760(pbVar35,&UNK_143605158 + iVar9,uVar34);
      uStack_120 = 0;
      uStack_118 = 0;
      uStack_128 = 0;
      uStack_104 = uVar27;
      uStack_fc = 0x42700000;
      uStack_f8 = 0;
      uStack_140 = uVar34;
      pbStack_138 = pbVar35;
      uStack_130 = uVar34;
      uStack_110 = uVar3;
      uStack_10c = uVar8;
      uStack_108 = uVar4;
      pdb_14296cdb0(auStack_f0,param_3,&uStack_140,&UNK_143605140);
    }
  } while( true );
}

