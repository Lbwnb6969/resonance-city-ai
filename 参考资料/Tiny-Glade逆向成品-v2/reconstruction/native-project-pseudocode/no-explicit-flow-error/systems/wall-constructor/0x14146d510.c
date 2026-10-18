// VA 0x14146d510, PDB extent 1669 bytes
// system_wall_constructor::construct_lintels::place_support_beams::SupportBeamBuilder::emit_support_beams<system_wall_constructor::construct_lintels::construct_lintels::closure_env$2>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_lintels/place_support_beams.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_lintels::place_support_beams::SupportBeamBuilder::emit_support_beams<system_wall_constructor::construct_lintels::construct_lintels::closure_env$2>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_lintels/place_support_beams.rs
   Extent: 1669 */

void pdb_14146d510(longlong *param_1,longlong param_2,ulonglong *param_3,longlong param_4,
                  undefined4 param_5)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong *puVar16;
  undefined4 extraout_XMM0_Da;
  longlong lStack_118;
  ulonglong *puStack_110;
  undefined4 *puStack_108;
  longlong lStack_100;
  byte *pbStack_f8;
  ulonglong *puStack_e8;
  ulonglong *puStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  longlong lStack_c8;
  ulonglong uStack_c0;
  longlong lStack_b8;
  ulonglong uStack_b0;
  ulonglong *puStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  ulonglong *puStack_98;
  ulonglong *puStack_90;
  ulonglong *puStack_88;
  ulonglong uStack_80;
  undefined4 uStack_78;
  undefined1 uStack_71;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  uVar8 = *param_3;
  uVar14 = param_3[1];
  if (uVar14 == uVar8) {
    return;
  }
  uVar7 = uVar8;
  uVar9 = uVar14;
  if (uVar14 < (ulonglong)param_1[1]) {
    uVar9 = uVar14 + 1;
    if ((char)param_3[2] != '\0') {
      uVar7 = uVar9;
    }
    uVar11 = uVar9 - uVar7;
    if (uVar9 < uVar7) goto LAB_14146da02;
    if ((ulonglong)param_1[3] <= uVar14) goto LAB_14146da0e;
    if ((ulonglong)param_1[5] <= uVar14) goto LAB_14146da1a;
    lVar1 = *param_1;
    lVar15 = uVar7 * 0xc + param_1[2];
    uStack_9c = param_5;
    uStack_a0 = (undefined4)uVar8;
    if (uVar11 < 2) {
      return;
    }
    lStack_b8 = param_4;
    pdb_1424c3790(&lStack_118,param_1[4] + uVar7 * 0xc,uVar11,_DAT_142e3787c,0x3f800000);
    puVar4 = puStack_108;
    lStack_c8 = lStack_118;
    puStack_98 = puStack_110;
    if (lStack_100 != 0) {
      pub_1406abac0(pbStack_f8,lStack_100 * 0xc,4);
    }
    uStack_71 = 0;
    uVar5 = pdb_1409303b0(param_2);
    if ((puVar4 == (undefined4 *)0x0) || (puVar4 == (undefined4 *)0x1)) goto LAB_14146d639;
    uVar8 = *puStack_98;
    uVar14 = puStack_98[1];
    if ((uVar14 < uVar11) && (puVar12 = (ulonglong *)((uVar14 + 1) - uVar8), uVar8 <= uVar14 + 1)) {
      puVar13 = (ulonglong *)0x0;
      puVar6 = puVar12;
      if (uVar14 < uVar8) {
        puVar6 = puVar13;
      }
      uVar9 = (longlong)puVar6 * 4;
      uStack_b0 = uVar14;
      if (0x7ffffffffffffffc < uVar9 || (ulonglong)puVar6 >> 0x3e != 0) {
LAB_14146d9ee:
        pdb_142dc7e2a(puVar13,uVar9);
        goto LAB_14146da49;
      }
      uStack_c0 = uVar8;
      puStack_a8 = puVar12;
      uStack_78 = uVar5;
      if (uVar9 == 0) {
        puStack_90 = (ulonglong *)0x4;
        puStack_88 = (ulonglong *)0x0;
        puVar12 = puStack_88;
      }
      else {
        pdb_14007ee60();
        uStack_80 = (longlong)puVar6 * 4;
        puStack_90 = (ulonglong *)pub_1406abab0((longlong)puVar6 * 4,4);
        puVar12 = puVar6;
        if (puStack_90 == (ulonglong *)0x0) {
LAB_14146da4b:
          puVar13 = (ulonglong *)0x4;
          uVar9 = uStack_80;
          goto LAB_14146d9ee;
        }
      }
      puStack_88 = puVar12;
      puVar12 = puStack_90;
      uVar8 = lVar1 + uVar7 * 4;
      lVar1 = uStack_c0 * 0xc;
      uVar14 = uVar8 + uStack_c0 * 4;
      uStack_c0 = uVar8;
      if (puVar6 < (ulonglong *)0x2) {
        puVar13 = puStack_90;
        if (puVar6 != (ulonglong *)0x0) goto LAB_14146d7b0;
      }
      else {
        uStack_80 = uVar14;
        pub_142e32780(puStack_90,0,(longlong)puVar6 * 4 + -4);
        puVar13 = (ulonglong *)((longlong)puVar12 + (longlong)puVar6 * 4 + -4);
        uVar14 = uStack_80;
LAB_14146d7b0:
        *(undefined4 *)puVar13 = 0;
      }
      puVar13 = puStack_88;
      uVar3 = _DAT_14330b2a0;
      uStack_d0 = _DAT_14330b2a0;
      puStack_110 = (ulonglong *)&uStack_9c;
      puStack_108 = &uStack_a0;
      puStack_e8 = puVar12;
      lStack_118 = lStack_b8;
      lStack_100 = param_2;
      puStack_e0 = puStack_88;
      uStack_d8 = uStack_78;
      uStack_d4 = extraout_XMM0_Da;
      pdb_141403450(&uStack_d8,uVar14,puStack_a8,lVar15 + lVar1,puStack_a8,puVar12,puVar6,
                    &lStack_118);
      if (puVar13 != (ulonglong *)0x0) {
        pub_1406abac0((byte *)puVar12,(longlong)puVar13 << 2,4);
      }
      if (puVar4 != (undefined4 *)0x2) {
        puVar12 = puStack_98 + 2;
        uVar8 = uStack_b0;
        puVar6 = puStack_98 + (longlong)puVar4;
        do {
          puVar13 = (ulonglong *)0x0;
          uVar14 = *puVar12;
          if ((uVar11 <= uVar14) ||
             (puVar10 = (ulonglong *)((uVar14 + 1) - uVar8), uVar14 + 1 < uVar8))
          goto LAB_14146da39;
          puVar16 = puVar10;
          if (uVar14 < uVar8) {
            puVar16 = puVar13;
          }
          uVar9 = (longlong)puVar16 * 4;
          if (0x7ffffffffffffffc < uVar9 || (ulonglong)puVar16 >> 0x3e != 0) goto LAB_14146d9ee;
          uStack_b0 = uVar8;
          puStack_a8 = puVar6;
          puStack_90 = puVar12;
          if (uVar9 == 0) {
            puVar6 = (ulonglong *)0x4;
            puVar12 = (ulonglong *)0x0;
          }
          else {
            pdb_14007ee60();
            uStack_80 = uVar9;
            puVar6 = (ulonglong *)pub_1406abab0(uVar9,4);
            puVar12 = puVar16;
            if (puVar6 == (ulonglong *)0x0) goto LAB_14146da4b;
          }
          uVar8 = lVar15 + uStack_b0 * 0xc;
          if (puVar16 < (ulonglong *)0x2) {
            puVar13 = puVar6;
            if (puVar16 != (ulonglong *)0x0) goto LAB_14146d947;
          }
          else {
            puStack_88 = puVar12;
            uStack_80 = uVar8;
            pub_142e32780(puVar6,0,(longlong)puVar16 * 4 + -4);
            puVar13 = (ulonglong *)((longlong)puVar6 + (longlong)puVar16 * 4 + -4);
            uVar8 = uStack_80;
            puVar12 = puStack_88;
LAB_14146d947:
            *(undefined4 *)puVar13 = 0;
          }
          uStack_d0 = uVar3;
          puStack_110 = (ulonglong *)&uStack_9c;
          puStack_108 = &uStack_a0;
          lStack_118 = lStack_b8;
          lStack_100 = param_2;
          puStack_e8 = puVar6;
          puStack_e0 = puVar12;
          uStack_d8 = uStack_78;
          uStack_d4 = extraout_XMM0_Da;
          pdb_141403450(&uStack_d8,uStack_c0 + uStack_b0 * 4,puVar10,uVar8,puVar10,puVar6,puVar16,
                        &lStack_118);
          if (puVar12 != (ulonglong *)0x0) {
            pub_1406abac0((byte *)puVar6,(longlong)puVar12 << 2,4);
          }
          puVar12 = puStack_90 + 1;
          uVar8 = uVar14;
          puVar6 = puStack_a8;
        } while (puVar12 != puStack_a8);
      }
LAB_14146d639:
      if (lStack_c8 != 0) {
        pub_1406abac0((byte *)puStack_98,lStack_c8 << 3,8);
      }
      return;
    }
  }
  else {
LAB_14146da02:
    pdb_142dc8420(uVar7,uVar9,param_1[1],&UNK_14330b340);
LAB_14146da0e:
    pdb_142dc8420();
LAB_14146da1a:
    pdb_142dc8420();
  }
LAB_14146da39:
  pdb_142dc8420();
LAB_14146da49:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

