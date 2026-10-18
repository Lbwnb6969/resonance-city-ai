// VA 0x140af54f0, PDB extent 7095 bytes
// country_core::systems::render_loop::draw_passes::draw_lists::build_draw_lists
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/draw_lists.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::render_loop::draw_passes::draw_lists::build_draw_lists
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/draw_lists.rs
   Extent: 7095 */

void pdb_140af54f0(longlong param_1,ulonglong param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ulonglong uVar5;
  code *pcVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined4 *puVar12;
  longlong lVar13;
  undefined4 uVar14;
  undefined *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined8 in_stack_fffffffffffffb78;
  longlong alStack_470 [34];
  ulonglong uStack_360;
  ulonglong uStack_358;
  ulonglong uStack_350;
  ulonglong uStack_348;
  ulonglong uStack_340;
  ulonglong uStack_338;
  ulonglong uStack_330;
  ulonglong uStack_328;
  ulonglong uStack_320;
  ulonglong uStack_318;
  ulonglong uStack_310;
  ulonglong uStack_308;
  uint *puStack_2f8;
  code *pcStack_2f0;
  uint *puStack_2d8;
  uint *puStack_2d0;
  longlong lStack_2b8;
  longlong lStack_2a8;
  byte bStack_2a0;
  longlong lStack_298;
  byte bStack_290;
  longlong lStack_288;
  byte bStack_280;
  longlong lStack_278;
  byte bStack_270;
  longlong lStack_268;
  byte bStack_260;
  undefined8 uStack_258;
  byte bStack_250;
  undefined8 uStack_248;
  byte bStack_240;
  undefined8 uStack_238;
  byte bStack_230;
  longlong lStack_228;
  longlong lStack_220;
  longlong lStack_218;
  longlong lStack_210;
  char cStack_208;
  uint uStack_200;
  uint uStack_1fc;
  byte bStack_1f8;
  ulonglong uStack_1e0;
  uint uStack_184;
  uint uStack_180;
  uint uStack_17c;
  longlong lStack_178;
  undefined8 uStack_170;
  longlong lStack_168;
  longlong lStack_160;
  uint *puStack_158;
  longlong lStack_150;
  uint uStack_148;
  int *piStack_140;
  longlong lStack_138;
  ulonglong uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  uint *puStack_118;
  longlong lStack_110;
  longlong lStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  longlong lStack_c8;
  undefined4 uStack_bc;
  longlong *plStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  byte bStack_89;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  longlong lStack_68;
  byte *pbStack_60;
  undefined8 uStack_58;
  uint uStack_50;
  undefined8 uStack_48;
  
  uVar14 = (undefined4)((ulonglong)in_stack_fffffffffffffb78 >> 0x20);
  uStack_48 = 0xfffffffffffffffe;
  uStack_1e0 = param_2;
  cVar7 = pdb_140e94b40();
  if (cVar7 == '\0') {
    lStack_178 = 0;
  }
  else {
    lVar13 = 0x4d;
    lVar9 = pdb_140af7ea0(0x4d);
    puVar19 = &UNK_143051808;
    if (lVar9 == 1) {
      if (0x4d < param_2) {
LAB_140af6dc8:
        pdb_142dc8070(&UNK_143051808,0x4d,0);
LAB_140af6de8:
        pdb_142dc8070(&UNK_143051808,0x4d);
        puStack_2f8 = &uStack_184;
        pcStack_2f0 = pdb_140af82c0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_143051260,&puStack_2f8,&UNK_143051290);
      }
      uVar10 = pdb_140af7ea0(param_2);
      if ((uVar10 & 1) != 0) {
        if (0x4d < param_2 + 2) goto LAB_140af6de8;
        lVar13 = 0x4b - param_2;
        puVar19 = &UNK_14305180a + param_2;
      }
    }
    puVar15 = &UNK_1430511ed;
    puVar20 = &UNK_1430511a8;
    do {
      bVar2 = puVar15[-1];
      uVar8 = (uint)(char)bVar2;
      if ((char)bVar2 < '\0') {
        bVar3 = puVar15[-2];
        if ((char)bVar3 < -0x40) {
          bVar4 = puVar15[-3];
          if ((char)bVar4 < -0x40) {
            pbVar1 = puVar15 + -4;
            puVar15 = puVar15 + -4;
            uVar8 = bVar4 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar15 = puVar15 + -3;
            uVar8 = bVar4 & 0xf;
          }
          uVar8 = bVar3 & 0x3f | uVar8 << 6;
        }
        else {
          puVar15 = puVar15 + -2;
          uVar8 = bVar3 & 0x1f;
        }
        uVar8 = (uint)(bVar2 & 0x3f) | uVar8 << 6;
        if (uVar8 != 0x5c) goto LAB_140af5604;
LAB_140af561c:
        puVar20 = puVar15 + -0x1430511a7;
        if (puVar20 < (undefined *)0x46) {
          lVar9 = 0x45 - (longlong)puVar20;
          puVar20 = puVar15 + 1;
          goto LAB_140af563e;
        }
        pdb_142dc8070(&UNK_1430511a8,0x45,puVar20,0x45,&UNK_1430518b8);
        goto LAB_140af6dc8;
      }
      puVar15 = puVar15 + -1;
      if (uVar8 == 0x5c) goto LAB_140af561c;
LAB_140af5604:
      if (uVar8 == 0x2f) goto LAB_140af561c;
    } while (puVar15 != &UNK_1430511a8);
    lVar9 = 0x45;
LAB_140af563e:
    plVar11 = (longlong *)pdb_140e97000();
    if (((char)plVar11[0xd] != '\x01') &&
       (plVar11 = (longlong *)pdb_142d8ec20(plVar11,0), plVar11 == (longlong *)0x0))
    goto LAB_140af6cf4;
    if (*plVar11 != 0) goto LAB_140af6cb1;
    *plVar11 = -1;
    plStack_b8 = plVar11;
    uStack_170 = pdb_140e94f10(plVar11 + 1,puVar19,lVar13,puVar20,lVar9,1,0);
    uVar14 = (undefined4)((ulonglong)lVar9 >> 0x20);
    *plStack_b8 = *plStack_b8 + 1;
    lStack_178 = 1;
  }
  pdb_14193a750(alStack_470,param_1);
  lStack_68 = 0;
  pbStack_60 = (byte *)0x4;
  uStack_58 = 0;
  lStack_138 = param_1;
  pdb_141933c00(alStack_470,param_1);
  if (alStack_470[0] == *(longlong *)(lStack_138 + 0x598)) {
    pdb_141523bf0(&puStack_2d8,lStack_138,alStack_470,*(undefined4 *)(lStack_138 + 0x5ac),
                  CONCAT44(uVar14,*(undefined4 *)(lStack_138 + 0x5a8)));
    puStack_158 = puStack_2d0;
    lStack_150 = lStack_2b8;
    lStack_108 = lStack_2a8;
    uStack_88 = (uint)bStack_2a0;
    lStack_100 = lStack_298;
    uStack_84 = (uint)bStack_290;
    lStack_f8 = lStack_288;
    uStack_80 = (uint)bStack_280;
    lStack_f0 = lStack_278;
    uStack_7c = (uint)bStack_270;
    lStack_e8 = lStack_268;
    uStack_78 = (uint)bStack_260;
    bStack_89 = bStack_1f8;
    uStack_e0 = uStack_258;
    uStack_74 = (uint)bStack_250;
    uStack_d8 = uStack_248;
    uStack_70 = (uint)bStack_240;
    uStack_d0 = uStack_238;
    uStack_6c = (uint)bStack_230;
    lStack_a8 = lStack_228;
    lStack_a0 = lStack_220;
    lStack_98 = lStack_218;
    lStack_c8 = lStack_210;
    uVar10 = (ulonglong)uStack_200;
    uVar16 = (ulonglong)uStack_1fc;
    do {
      iVar18 = (int)uVar16;
      if ((bStack_1f8 & 1) == 0) {
        if (iVar18 == (int)uVar10) {
          do {
            if (puStack_2d8 == puStack_2d0) goto LAB_140af6c2c;
            uVar8 = *puStack_2d8;
            puStack_2d8 = puStack_2d8 + 1;
            uVar10 = *(ulonglong *)
                      (*(longlong *)(lStack_138 + 0x100) + 0x58 + (ulonglong)uVar8 * 0xa0);
          } while (uVar10 == 0);
          lVar9 = *(longlong *)(lStack_138 + 0x100) + (ulonglong)uVar8 * 0xa0;
          lVar13 = (ulonglong)*(uint *)(lVar9 + 0x94) * 0x48 + *(longlong *)(lStack_138 + 0x1a0);
          uVar16 = *(ulonglong *)(lVar9 + 0x88);
          if ((uStack_360 < uVar16) &&
             (*(longlong *)(*(longlong *)(lVar9 + 0x80) + uStack_360 * 8) != 0)) {
            uStack_88 = (uint)CONCAT71((int7)((ulonglong)*(longlong *)(lVar9 + 0x80) >> 8),1);
            if ((*(ulonglong *)(lVar13 + 0x40) <= uStack_360) ||
               (uVar17 = *(ulonglong *)(*(longlong *)(lVar13 + 0x38) + uStack_360 * 8), uVar17 == 0)
               ) {
              lStack_108 = 0;
              uVar17 = *(ulonglong *)(lVar13 + 0x40);
              goto joined_r0x000140af5a8c;
            }
            lStack_108 = *(longlong *)(*(longlong *)(lVar13 + 0x18) + 0x10 + ~uVar17 * 0x30);
            uVar17 = *(ulonglong *)(lVar13 + 0x40);
            if (uStack_358 < uVar17) goto LAB_140af5dfe;
LAB_140af5e34:
            lStack_a8 = 0;
            if (uVar17 <= uStack_350) goto LAB_140af5e81;
LAB_140af5e4b:
            uVar5 = *(ulonglong *)(*(longlong *)(lVar13 + 0x38) + uStack_350 * 8);
            if (uVar5 == 0) goto LAB_140af5e81;
            lStack_a0 = *(longlong *)(*(longlong *)(lVar13 + 0x18) + 0x10 + ~uVar5 * 0x30);
            if (uStack_348 < uVar17) goto LAB_140af5e98;
LAB_140af5ece:
            lStack_98 = 0;
            if (uVar16 <= uStack_340) goto LAB_140af5f3b;
LAB_140af5ee5:
            if (*(longlong *)(*(longlong *)(lVar9 + 0x80) + uStack_340 * 8) == 0)
            goto LAB_140af5f3b;
            uStack_84 = (uint)CONCAT71((int7)((ulonglong)*(longlong *)(lVar9 + 0x80) >> 8),1);
            if ((uStack_340 < uVar17) &&
               (uVar5 = *(ulonglong *)(*(longlong *)(lVar13 + 0x38) + uStack_340 * 8), uVar5 != 0))
            {
              lStack_100 = *(longlong *)(*(longlong *)(lVar13 + 0x18) + 0x10 + ~uVar5 * 0x30);
              goto joined_r0x000140af5f34;
            }
            lStack_100 = 0;
            if (uStack_338 < uVar16) goto LAB_140af5f6a;
LAB_140af5fc1:
            uStack_80 = 0;
joined_r0x000140af5fb9:
            if (uVar16 <= uStack_330) goto LAB_140af6046;
LAB_140af5ff0:
            if (*(longlong *)(*(longlong *)(lVar9 + 0x80) + uStack_330 * 8) == 0)
            goto LAB_140af6046;
            uStack_7c = (uint)CONCAT71((int7)((ulonglong)*(longlong *)(lVar9 + 0x80) >> 8),1);
            if ((uStack_330 < uVar17) &&
               (uVar5 = *(ulonglong *)(*(longlong *)(lVar13 + 0x38) + uStack_330 * 8), uVar5 != 0))
            {
              lStack_f0 = *(longlong *)(*(longlong *)(lVar13 + 0x18) + 0x10 + ~uVar5 * 0x30);
              goto joined_r0x000140af605a;
            }
            lStack_f0 = 0;
            if (uStack_328 < uVar16) goto LAB_140af6075;
LAB_140af60cb:
            uStack_78 = 0;
joined_r0x000140af60c4:
            if (uVar16 <= uStack_320) goto LAB_140af6150;
LAB_140af60fa:
            if (*(longlong *)(*(longlong *)(lVar9 + 0x80) + uStack_320 * 8) == 0)
            goto LAB_140af6150;
            uStack_74 = (uint)CONCAT71((int7)((ulonglong)*(longlong *)(lVar9 + 0x80) >> 8),1);
            if ((uStack_320 < uVar17) &&
               (uVar5 = *(ulonglong *)(*(longlong *)(lVar13 + 0x38) + uStack_320 * 8), uVar5 != 0))
            {
              uStack_e0 = *(undefined8 *)(*(longlong *)(lVar13 + 0x18) + 0x10 + ~uVar5 * 0x30);
              goto joined_r0x000140af6164;
            }
            uStack_e0 = 0;
            if (uStack_318 < uVar16) goto LAB_140af617f;
LAB_140af61d5:
            uStack_70 = 0;
joined_r0x000140af61ce:
            if (uVar16 <= uStack_310) goto LAB_140af625a;
LAB_140af6204:
            if (*(longlong *)(*(longlong *)(lVar9 + 0x80) + uStack_310 * 8) == 0)
            goto LAB_140af625a;
            uStack_6c = (uint)CONCAT71((int7)((ulonglong)*(longlong *)(lVar9 + 0x80) >> 8),1);
            if ((uStack_310 < uVar17) &&
               (uVar5 = *(ulonglong *)(*(longlong *)(lVar13 + 0x38) + uStack_310 * 8), uVar5 != 0))
            {
              uStack_d0 = *(undefined8 *)(*(longlong *)(lVar13 + 0x18) + 0x10 + ~uVar5 * 0x30);
              goto joined_r0x000140af6271;
            }
            uStack_d0 = 0;
            if (uStack_308 < uVar16) goto LAB_140af628f;
LAB_140af62cf:
            cStack_208 = '\0';
          }
          else {
            uStack_88 = 0;
            uVar17 = *(ulonglong *)(lVar13 + 0x40);
joined_r0x000140af5a8c:
            if (uVar17 <= uStack_358) goto LAB_140af5e34;
LAB_140af5dfe:
            uVar5 = *(ulonglong *)(*(longlong *)(lVar13 + 0x38) + uStack_358 * 8);
            if (uVar5 == 0) goto LAB_140af5e34;
            lStack_a8 = *(longlong *)(*(longlong *)(lVar13 + 0x18) + 0x10 + ~uVar5 * 0x30);
            if (uStack_350 < uVar17) goto LAB_140af5e4b;
LAB_140af5e81:
            lStack_a0 = 0;
            if (uVar17 <= uStack_348) goto LAB_140af5ece;
LAB_140af5e98:
            uVar5 = *(ulonglong *)(*(longlong *)(lVar13 + 0x38) + uStack_348 * 8);
            if (uVar5 == 0) goto LAB_140af5ece;
            lStack_98 = *(longlong *)(*(longlong *)(lVar13 + 0x18) + 0x10 + ~uVar5 * 0x30);
            if (uStack_340 < uVar16) goto LAB_140af5ee5;
LAB_140af5f3b:
            uStack_84 = 0;
joined_r0x000140af5f34:
            if (uVar16 <= uStack_338) goto LAB_140af5fc1;
LAB_140af5f6a:
            if (*(longlong *)(*(longlong *)(lVar9 + 0x80) + uStack_338 * 8) == 0)
            goto LAB_140af5fc1;
            uStack_80 = (uint)CONCAT71((int7)((ulonglong)*(longlong *)(lVar9 + 0x80) >> 8),1);
            if ((uStack_338 < uVar17) &&
               (uVar5 = *(ulonglong *)(*(longlong *)(lVar13 + 0x38) + uStack_338 * 8), uVar5 != 0))
            {
              lStack_f8 = *(longlong *)(*(longlong *)(lVar13 + 0x18) + 0x10 + ~uVar5 * 0x30);
              goto joined_r0x000140af5fb9;
            }
            lStack_f8 = 0;
            if (uStack_330 < uVar16) goto LAB_140af5ff0;
LAB_140af6046:
            uStack_7c = 0;
joined_r0x000140af605a:
            if (uVar16 <= uStack_328) goto LAB_140af60cb;
LAB_140af6075:
            if (*(longlong *)(*(longlong *)(lVar9 + 0x80) + uStack_328 * 8) == 0)
            goto LAB_140af60cb;
            uStack_78 = (uint)CONCAT71((int7)((ulonglong)*(longlong *)(lVar9 + 0x80) >> 8),1);
            if ((uStack_328 < uVar17) &&
               (uVar5 = *(ulonglong *)(*(longlong *)(lVar13 + 0x38) + uStack_328 * 8), uVar5 != 0))
            {
              lStack_e8 = *(longlong *)(*(longlong *)(lVar13 + 0x18) + 0x10 + ~uVar5 * 0x30);
              goto joined_r0x000140af60c4;
            }
            lStack_e8 = 0;
            if (uStack_320 < uVar16) goto LAB_140af60fa;
LAB_140af6150:
            uStack_74 = 0;
joined_r0x000140af6164:
            if (uVar16 <= uStack_318) goto LAB_140af61d5;
LAB_140af617f:
            if (*(longlong *)(*(longlong *)(lVar9 + 0x80) + uStack_318 * 8) == 0)
            goto LAB_140af61d5;
            uStack_70 = (uint)CONCAT71((int7)((ulonglong)*(longlong *)(lVar9 + 0x80) >> 8),1);
            if ((uStack_318 < uVar17) &&
               (uVar5 = *(ulonglong *)(*(longlong *)(lVar13 + 0x38) + uStack_318 * 8), uVar5 != 0))
            {
              uStack_d8 = *(undefined8 *)(*(longlong *)(lVar13 + 0x18) + 0x10 + ~uVar5 * 0x30);
              goto joined_r0x000140af61ce;
            }
            uStack_d8 = 0;
            if (uStack_310 < uVar16) goto LAB_140af6204;
LAB_140af625a:
            uStack_6c = 0;
joined_r0x000140af6271:
            if (uVar16 <= uStack_308) goto LAB_140af62cf;
LAB_140af628f:
            if (*(longlong *)(*(longlong *)(lVar9 + 0x80) + uStack_308 * 8) == 0)
            goto LAB_140af62cf;
            cStack_208 = '\x01';
            if ((uStack_308 < uVar17) &&
               (uVar16 = *(ulonglong *)(*(longlong *)(lVar13 + 0x38) + uStack_308 * 8), uVar16 != 0)
               ) {
              lStack_c8 = *(longlong *)(*(longlong *)(lVar13 + 0x18) + 0x10 + ~uVar16 * 0x30);
            }
            else {
              lStack_c8 = 0;
            }
          }
          iVar18 = 0;
          lStack_150 = *(longlong *)(lVar9 + 0x50);
          uVar16 = 0;
        }
        uVar16 = (ulonglong)~*(uint *)(lStack_150 + 8 + uVar16 * 0x10);
      }
      else if (iVar18 == (int)uVar10) {
        do {
          if (puStack_2d8 == puStack_2d0) goto LAB_140af6c2c;
          uVar8 = *puStack_2d8;
          puStack_2d8 = puStack_2d8 + 1;
          uVar10 = *(ulonglong *)
                    (*(longlong *)(lStack_138 + 0x1a0) + 0x10 + (ulonglong)uVar8 * 0x48);
        } while (uVar10 == 0);
        lVar9 = *(longlong *)(lStack_138 + 0x1a0) + (ulonglong)uVar8 * 0x48;
        uVar16 = *(ulonglong *)(lVar9 + 0x40);
        if ((uStack_360 < uVar16) &&
           (uVar17 = *(ulonglong *)(*(longlong *)(lVar9 + 0x38) + uStack_360 * 8), uVar17 != 0)) {
          lStack_108 = *(longlong *)(*(longlong *)(lVar9 + 0x18) + 0x10 + ~uVar17 * 0x30);
          uStack_88 = (uint)CONCAT71((int7)((ulonglong)lStack_108 >> 8),1);
          if (uVar16 <= uStack_358) goto LAB_140af5a97;
LAB_140af5a3e:
          uVar17 = *(ulonglong *)(*(longlong *)(lVar9 + 0x38) + uStack_358 * 8);
          if (uVar17 == 0) goto LAB_140af5a97;
          lStack_a8 = *(longlong *)(*(longlong *)(lVar9 + 0x18) + 0x10 + ~uVar17 * 0x30);
          if (uStack_350 < uVar16) goto LAB_140af5aae;
LAB_140af5ae4:
          lStack_a0 = 0;
          if (uVar16 <= uStack_348) goto LAB_140af5b31;
LAB_140af5afb:
          uVar17 = *(ulonglong *)(*(longlong *)(lVar9 + 0x38) + uStack_348 * 8);
          if (uVar17 == 0) goto LAB_140af5b31;
          lStack_98 = *(longlong *)(*(longlong *)(lVar9 + 0x18) + 0x10 + ~uVar17 * 0x30);
          if (uStack_340 < uVar16) goto LAB_140af5b48;
LAB_140af5b86:
          uStack_84 = 0;
          if (uVar16 <= uStack_338) goto LAB_140af5bda;
LAB_140af5b9c:
          uVar17 = *(ulonglong *)(*(longlong *)(lVar9 + 0x38) + uStack_338 * 8);
          if (uVar17 == 0) goto LAB_140af5bda;
          lStack_f8 = *(longlong *)(*(longlong *)(lVar9 + 0x18) + 0x10 + ~uVar17 * 0x30);
          uStack_80 = (uint)CONCAT71((int7)((ulonglong)lStack_f8 >> 8),1);
          if (uStack_330 < uVar16) goto LAB_140af5bf0;
LAB_140af5c2e:
          uStack_7c = 0;
          if (uVar16 <= uStack_328) goto LAB_140af5c82;
LAB_140af5c44:
          uVar17 = *(ulonglong *)(*(longlong *)(lVar9 + 0x38) + uStack_328 * 8);
          if (uVar17 == 0) goto LAB_140af5c82;
          lStack_e8 = *(longlong *)(*(longlong *)(lVar9 + 0x18) + 0x10 + ~uVar17 * 0x30);
          uStack_78 = (uint)CONCAT71((int7)((ulonglong)lStack_e8 >> 8),1);
          if (uStack_320 < uVar16) goto LAB_140af5c98;
LAB_140af5cd6:
          uStack_74 = 0;
          if (uVar16 <= uStack_318) goto LAB_140af5d2a;
LAB_140af5cec:
          uVar17 = *(ulonglong *)(*(longlong *)(lVar9 + 0x38) + uStack_318 * 8);
          if (uVar17 == 0) goto LAB_140af5d2a;
          uStack_d8 = *(undefined8 *)(*(longlong *)(lVar9 + 0x18) + 0x10 + ~uVar17 * 0x30);
          uStack_70 = (uint)CONCAT71((int7)((ulonglong)uStack_d8 >> 8),1);
          if (uStack_310 < uVar16) goto LAB_140af5d40;
LAB_140af5d81:
          uStack_6c = 0;
        }
        else {
          uStack_88 = 0;
          if (uStack_358 < uVar16) goto LAB_140af5a3e;
LAB_140af5a97:
          lStack_a8 = 0;
          if (uVar16 <= uStack_350) goto LAB_140af5ae4;
LAB_140af5aae:
          uVar17 = *(ulonglong *)(*(longlong *)(lVar9 + 0x38) + uStack_350 * 8);
          if (uVar17 == 0) goto LAB_140af5ae4;
          lStack_a0 = *(longlong *)(*(longlong *)(lVar9 + 0x18) + 0x10 + ~uVar17 * 0x30);
          if (uStack_348 < uVar16) goto LAB_140af5afb;
LAB_140af5b31:
          lStack_98 = 0;
          if (uVar16 <= uStack_340) goto LAB_140af5b86;
LAB_140af5b48:
          uVar17 = *(ulonglong *)(*(longlong *)(lVar9 + 0x38) + uStack_340 * 8);
          if (uVar17 == 0) goto LAB_140af5b86;
          lStack_100 = *(longlong *)(*(longlong *)(lVar9 + 0x18) + 0x10 + ~uVar17 * 0x30);
          uStack_84 = (uint)CONCAT71((int7)((ulonglong)lStack_100 >> 8),1);
          if (uStack_338 < uVar16) goto LAB_140af5b9c;
LAB_140af5bda:
          uStack_80 = 0;
          if (uVar16 <= uStack_330) goto LAB_140af5c2e;
LAB_140af5bf0:
          uVar17 = *(ulonglong *)(*(longlong *)(lVar9 + 0x38) + uStack_330 * 8);
          if (uVar17 == 0) goto LAB_140af5c2e;
          lStack_f0 = *(longlong *)(*(longlong *)(lVar9 + 0x18) + 0x10 + ~uVar17 * 0x30);
          uStack_7c = (uint)CONCAT71((int7)((ulonglong)lStack_f0 >> 8),1);
          if (uStack_328 < uVar16) goto LAB_140af5c44;
LAB_140af5c82:
          uStack_78 = 0;
          if (uVar16 <= uStack_320) goto LAB_140af5cd6;
LAB_140af5c98:
          uVar17 = *(ulonglong *)(*(longlong *)(lVar9 + 0x38) + uStack_320 * 8);
          if (uVar17 == 0) goto LAB_140af5cd6;
          uStack_e0 = *(undefined8 *)(*(longlong *)(lVar9 + 0x18) + 0x10 + ~uVar17 * 0x30);
          uStack_74 = (uint)CONCAT71((int7)((ulonglong)uStack_e0 >> 8),1);
          if (uStack_318 < uVar16) goto LAB_140af5cec;
LAB_140af5d2a:
          uStack_70 = 0;
          if (uVar16 <= uStack_310) goto LAB_140af5d81;
LAB_140af5d40:
          uVar17 = *(ulonglong *)(*(longlong *)(lVar9 + 0x38) + uStack_310 * 8);
          if (uVar17 == 0) goto LAB_140af5d81;
          uStack_d0 = *(undefined8 *)(*(longlong *)(lVar9 + 0x18) + 0x10 + ~uVar17 * 0x30);
          uStack_6c = (uint)CONCAT71((int7)((ulonglong)uStack_d0 >> 8),1);
        }
        if (uStack_308 < uVar16) {
          uVar16 = 0;
          uVar17 = *(ulonglong *)(*(longlong *)(lVar9 + 0x38) + uStack_308 * 8);
          if (uVar17 != 0) {
            lStack_c8 = *(longlong *)(*(longlong *)(lVar9 + 0x18) + 0x10 + ~uVar17 * 0x30);
            cStack_208 = '\x01';
            goto LAB_140af5dd0;
          }
        }
        iVar18 = 0;
        cStack_208 = '\0';
        uVar16 = 0;
      }
      else {
LAB_140af5dd0:
        iVar18 = (int)uVar16;
      }
      lStack_110 = lStack_108 + uVar16 * 8;
      if ((uStack_88 & 1) == 0) {
        lStack_110 = 0;
      }
      lStack_b0 = lStack_a8 + uVar16 * 0x10;
      puStack_118 = (uint *)(uVar16 * 0x38 + lStack_a0);
      lStack_160 = lStack_98 + uVar16 * 8;
      lStack_168 = lStack_100 + uVar16 * 4;
      if ((uStack_84 & 1) == 0) {
        lStack_168 = 0;
      }
      puVar12 = (undefined4 *)(lStack_f8 + uVar16 * 4);
      if ((uStack_80 & 1) == 0) {
        puVar12 = (undefined4 *)0x0;
      }
      lVar9 = 0;
      if ((uStack_7c & 1) != 0) {
        lVar9 = lStack_f0;
      }
      lVar13 = 0;
      if ((uStack_78 & 1) != 0) {
        lVar13 = lStack_e8;
      }
      uStack_120 = 0;
      if ((uStack_74 & 1) != 0) {
        uStack_120 = uStack_e0;
      }
      if (cStack_208 != '\x01') {
        uStack_130 = (ulonglong)(iVar18 + 1);
        uStack_bc = (undefined4)CONCAT71((int7)(uVar16 >> 8),1);
        piStack_140 = (int *)0x0;
        uStack_128 = 0;
        goto LAB_140af64be;
      }
      piStack_140 = (int *)(lStack_c8 + uVar16 * 4);
      uVar16 = (ulonglong)(iVar18 + 1);
      uStack_130 = uVar16;
      if (piStack_140 == (int *)0x0) {
        uStack_bc = 1;
        piStack_140 = (int *)0x0;
        uStack_128 = 1;
        goto LAB_140af64be;
      }
      cStack_208 = '\x01';
    } while (*piStack_140 == 0);
    uStack_128 = CONCAT71((int7)((ulonglong)piStack_140 >> 8),1);
    uStack_bc = 0;
LAB_140af64be:
    uStack_17c = puStack_118[0xc];
    uStack_184 = *puStack_118;
    uStack_180 = puStack_118[1];
    uStack_58 = 0;
    uVar10 = (ulonglong)uStack_184;
    uStack_148 = uStack_17c;
    uStack_50 = uStack_180;
    if (puVar12 == (undefined4 *)0x0) {
      if (lVar9 == 0) {
        if (lVar13 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140af65f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK_143051b74 + *(int *)(&UNK_143051b74 + uVar10 * 4)))();
          return;
        }
        uVar14 = 0x15;
        if (lStack_68 == 0) {
          pdb_142d8d710(&lStack_68);
        }
      }
      else {
        uVar14 = 0x14;
        if (lStack_68 == 0) {
          pdb_142d8d710(&lStack_68);
        }
      }
    }
    else {
      uVar14 = *puVar12;
      if (lStack_68 == 0) {
        pdb_142d8d710(&lStack_68);
      }
    }
    *(undefined4 *)pbStack_60 = uVar14;
    uStack_58 = 1;
                    /* WARNING: Could not recover jumptable at 0x000140af65a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_143051bac + *(int *)(&UNK_143051bac + uVar10 * 4)))(&UNK_143051bac,1);
    return;
  }
  goto LAB_140af6cbe;
LAB_140af6c2c:
  if (lStack_68 != 0) {
    pub_1406abac0(pbStack_60,lStack_68 << 2,4);
  }
  pdb_140499e40(alStack_470);
  if (lStack_178 == 0) {
    return;
  }
  plVar11 = (longlong *)pdb_140e97000();
  if (((char)plVar11[0xd] != '\x01') &&
     (plVar11 = (longlong *)pdb_142d8ec20(plVar11,0), plVar11 == (longlong *)0x0)) {
LAB_140af6cf4:
    pdb_142dc7890(&UNK_143326860);
    if (uStack_50 - 1 < 3) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_1430510d8,0xf,&UNK_143051208);
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143051220,0x28,&UNK_143051248);
  }
  if (*plVar11 == 0) {
    *plVar11 = -1;
    plStack_b8 = plVar11;
    pdb_140e95370(plVar11 + 1,uStack_170);
    *plStack_b8 = *plStack_b8 + 1;
    return;
  }
LAB_140af6cb1:
  pdb_142dc8090(&UNK_143326a50);
LAB_140af6cbe:
  pdb_142dbe080();
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}

