// VA 0x14295fc10, PDB extent 1282 bytes
// system_critters::sheep::sheep_react_to_being_inside_buildings::sheep_reaction_emoji
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/sheep/sheep_react_to_being_inside_buildings.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_critters::sheep::sheep_react_to_being_inside_buildings::sheep_reaction_emoji
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/sheep/sheep_react_to_being_inside_buildings.rs
   Extent: 1282 */

void pdb_14295fc10(longlong *param_1,float param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong *in_RDX;
  longlong lVar25;
  uint uVar26;
  undefined8 *puVar27;
  undefined4 *puVar28;
  longlong lVar29;
  uint *puVar30;
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  longlong lStack_140;
  longlong lStack_138;
  longlong lStack_120;
  longlong lStack_118;
  longlong lStack_108;
  longlong lStack_100;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  
  fVar19 = _DAT_142e3798c;
  fVar18 = _DAT_142e3787c;
  fVar17 = _DAT_142e36f28;
  lVar7 = *param_1;
  lVar8 = param_1[1];
  uVar6 = *(undefined4 *)((longlong)param_1 + 0x14);
  puVar30 = *(uint **)(lVar7 + 0xf8);
  puVar1 = puVar30 + *(longlong *)(lVar7 + 0x100);
  cVar5 = *(char *)(lVar7 + 0x108);
  lVar9 = *in_RDX;
  uVar10 = param_5[3];
  uVar11 = param_5[2];
  uVar15 = *param_5;
  uVar16 = param_5[1];
  uVar12 = *param_3;
  uVar13 = *param_4;
  lVar29 = 0;
  lStack_100 = 8;
  lStack_140 = 0;
  lStack_138 = 0;
  lStack_108 = 8;
  uVar26 = 0;
  do {
    if (cVar5 == '\0') {
      if (uVar26 == (uint)lVar29) {
        if (puVar30 == puVar1) {
          return;
        }
        while( true ) {
          lVar29 = *(longlong *)(*(longlong *)(lVar8 + 0x100) + 0x58 + (ulonglong)*puVar30 * 0xa0);
          if (lVar29 != 0) break;
          puVar30 = puVar30 + 1;
          if (puVar30 == puVar1) {
            return;
          }
        }
        lVar22 = *(longlong *)(lVar8 + 0x100) + (ulonglong)*puVar30 * 0xa0;
        uVar21 = (ulonglong)*(uint *)(lVar22 + 0x94);
        lVar23 = *(longlong *)(*(longlong *)(lVar8 + 0x1a0) + 0x18 + uVar21 * 0x48);
        lVar24 = *(longlong *)(*(longlong *)(lVar8 + 0x1a0) + 0x38 + uVar21 * 0x48);
        lVar25 = ~*(ulonglong *)(lVar24 + *(longlong *)(lVar7 + 0x110) * 8) * 0x30;
        lStack_138 = *(longlong *)(lVar23 + 0x10 + lVar25);
        lStack_118 = *(longlong *)(lVar23 + 0x28 + lVar25);
        lVar24 = ~*(ulonglong *)(lVar24 + *(longlong *)(lVar7 + 0x118) * 8) * 0x30;
        lStack_140 = *(longlong *)(lVar23 + 0x10 + lVar24);
        lStack_120 = *(longlong *)(lVar23 + 0x28 + lVar24);
        lStack_108 = *(longlong *)(lVar22 + 0x50);
        puVar30 = puVar30 + 1;
        uVar26 = 0;
        uVar21 = 0;
      }
      else {
        uVar21 = (ulonglong)uVar26;
      }
      puVar20 = (undefined8 *)(lStack_108 + uVar21 * 0x10);
      uVar21 = (ulonglong)~*(uint *)(lStack_108 + 8 + uVar21 * 0x10);
    }
    else {
      if (uVar26 == (uint)lVar29) {
        if (puVar30 == puVar1) {
          return;
        }
        while( true ) {
          lVar29 = *(longlong *)(*(longlong *)(lVar8 + 0x1a0) + 0x10 + (ulonglong)*puVar30 * 0x48);
          if (lVar29 != 0) break;
          puVar30 = puVar30 + 1;
          if (puVar30 == puVar1) {
            return;
          }
        }
        lVar23 = *(longlong *)(lVar8 + 0x1a0) + (ulonglong)*puVar30 * 0x48;
        lStack_100 = *(longlong *)(lVar23 + 8);
        lVar24 = *(longlong *)(lVar23 + 0x18);
        lVar22 = ~*(ulonglong *)(*(longlong *)(lVar23 + 0x38) + *(longlong *)(lVar7 + 0x110) * 8) *
                 0x30;
        lStack_138 = *(longlong *)(lVar24 + 0x10 + lVar22);
        lStack_118 = *(longlong *)(lVar24 + 0x28 + lVar22);
        lVar23 = ~*(ulonglong *)(*(longlong *)(lVar23 + 0x38) + *(longlong *)(lVar7 + 0x118) * 8) *
                 0x30;
        lStack_140 = *(longlong *)(lVar24 + 0x10 + lVar23);
        lStack_120 = *(longlong *)(lVar24 + 0x28 + lVar23);
        puVar30 = puVar30 + 1;
        uVar26 = 0;
      }
      uVar21 = (ulonglong)uVar26;
      puVar20 = (undefined8 *)(lStack_100 + uVar21 * 8);
    }
    puVar27 = (undefined8 *)(uVar21 * 0x1c + lStack_138);
    puVar2 = (undefined4 *)(lStack_118 + uVar21 * 4);
    puVar3 = (undefined4 *)(lStack_120 + uVar21 * 4);
    puVar28 = (undefined4 *)(uVar21 * 0x10 + lStack_140);
    uVar14 = *puVar20;
    fVar32 = *(float *)(lVar9 + 0x28);
    *puVar2 = uVar6;
    fVar32 = fVar32 + *(float *)((longlong)puVar27 + 0xc);
    *(float *)((longlong)puVar27 + 0xc) = fVar32;
    if (*(char *)(puVar27 + 3) == '\0') {
      fVar33 = 0.0;
      if (0.0 <= fVar32 / fVar18) {
        fVar33 = fVar32 / fVar18;
      }
      fVar32 = fVar17;
      if (fVar33 <= fVar17) {
        fVar32 = fVar33;
      }
      uVar14 = puVar27[2];
      param_2 = fVar32;
      fVar33 = (float)pdb_140dedcd0(&UNK_14360506c,fVar32);
      *puVar3 = uVar6;
      *(ulonglong *)(puVar28 + 2) =
           CONCAT44(fVar33 * (float)((ulonglong)uVar14 >> 0x20),fVar33 * (float)uVar14);
      if ((fVar32 == fVar17) && (!NAN(fVar32) && !NAN(fVar17))) {
        *(undefined1 *)(puVar27 + 3) = 1;
        *puVar2 = uVar6;
LAB_14295fd20:
        *(undefined4 *)((longlong)puVar27 + 0xc) = 0;
      }
    }
    else if (*(char *)(puVar27 + 3) == '\x01') {
      if (fVar17 <= fVar32) {
        *(undefined1 *)(puVar27 + 3) = 2;
        *puVar2 = uVar6;
        goto LAB_14295fd20;
      }
    }
    else {
      fVar33 = 0.0;
      if (0.0 <= fVar32 / fVar19) {
        fVar33 = fVar32 / fVar19;
      }
      fVar32 = fVar17;
      if (fVar33 <= fVar17) {
        fVar32 = fVar33;
      }
      param_2 = fVar17 - fVar32;
      uVar4 = puVar27[2];
      fVar33 = (float)pdb_140dedcd0(&UNK_14360506c,param_2);
      *puVar3 = uVar6;
      *(ulonglong *)(puVar28 + 2) =
           CONCAT44(fVar33 * (float)((ulonglong)uVar4 >> 0x20),fVar33 * (float)uVar4);
      if ((fVar32 == fVar17) && (!NAN(fVar32) && !NAN(fVar17))) {
        uStack_d0 = uVar14;
        uStack_c8 = uVar15;
        uStack_c0 = uVar16;
        uStack_b8 = uVar11;
        uStack_b0 = uVar10;
        pdb_140f04aa0(&uStack_d0,&UNK_143605078);
      }
    }
    uVar26 = uVar26 + 1;
    uStack_c8 = CONCAT44(uStack_c8._4_4_,*(undefined4 *)(puVar27 + 1));
    uStack_d0 = *puVar27;
    fVar32 = (float)pdb_140a6ad50(uVar12);
    uVar31 = pdb_140c151e0(&uStack_d0,fVar32,param_2,uVar13);
    *puVar3 = uVar6;
    *puVar28 = uVar31;
    puVar28[1] = fVar32;
    param_2 = fVar32;
  } while( true );
}

