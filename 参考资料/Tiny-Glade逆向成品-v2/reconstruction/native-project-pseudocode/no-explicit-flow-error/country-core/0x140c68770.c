// VA 0x140c68770, PDB extent 416 bytes
// country_core::resources::walls::decorator_outline::DecoratorCollisionOutline::display
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_outline.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator_outline::DecoratorCollisionOutline::display
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_outline.rs
   Extent: 416 */

void pdb_140c68770(longlong *param_1,float *param_2,undefined8 param_3,undefined1 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  undefined4 auStack_b8 [4];
  undefined4 uStack_a8;
  undefined8 uStack_a4;
  float fStack_9c;
  undefined4 uStack_98;
  undefined1 uStack_94;
  longlong lStack_90;
  byte *pbStack_88;
  longlong lStack_80;
  undefined8 uStack_78;
  undefined4 uStack_60;
  undefined4 uStack_50;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  
  uVar19 = *param_1 >> 0x3f & *param_1 + 0x8000000000000001U;
  if (uVar19 == 0) {
    lVar4 = param_1[2];
    if (lVar4 == 0) {
      pbStack_88 = (byte *)0x4;
    }
    else {
      lVar5 = param_1[1];
      pdb_14007ee60();
      pbStack_88 = pub_1406abab0(lVar4 * 0xc,4);
      if (pbStack_88 == (byte *)0x0) {
        pdb_142dc7e2a(4,lVar4 * 0xc);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      fVar7 = *param_2;
      fVar8 = param_2[1];
      fVar9 = param_2[2];
      fVar10 = param_2[4];
      fVar11 = param_2[5];
      fVar12 = param_2[6];
      fVar13 = param_2[8];
      fVar14 = param_2[9];
      fVar15 = param_2[10];
      fVar16 = param_2[0xc];
      fVar17 = param_2[0xd];
      fVar18 = param_2[0xe];
      lVar20 = 0;
      lVar21 = lVar4;
      do {
        fVar1 = *(float *)(lVar5 + lVar20);
        fVar2 = *(float *)(lVar5 + 4 + lVar20);
        fVar3 = *(float *)(lVar5 + 8 + lVar20);
        *(ulonglong *)(pbStack_88 + lVar20) =
             CONCAT44(fVar3 * fVar14 + fVar2 * fVar11 + fVar1 * fVar8 + fVar17,
                      fVar3 * fVar13 + fVar2 * fVar10 + fVar1 * fVar7 + fVar16);
        *(float *)(pbStack_88 + lVar20 + 8) =
             fVar3 * fVar15 + fVar2 * fVar12 + fVar1 * fVar9 + fVar18;
        lVar20 = lVar20 + 0xc;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
    }
    uStack_78 = 0x8000000000000000;
    uStack_60 = 0;
    uStack_50 = 0x40000000;
    uStack_4c = 1;
    lStack_90 = lVar4;
    lStack_80 = lVar4;
    uStack_4b = param_4;
    pdb_140ab2da0(&lStack_90,param_3);
  }
  else if (uVar19 == 1) {
    uStack_a8 = (undefined4)param_1[1];
    fStack_9c = param_2[0xe];
    uStack_a4 = *(undefined8 *)(param_2 + 0xc);
    auStack_b8[0] = 0;
    uStack_98 = 0x3f800000;
    uStack_94 = 1;
    pdb_140ab07b0(auStack_b8,param_3);
  }
  return;
}

