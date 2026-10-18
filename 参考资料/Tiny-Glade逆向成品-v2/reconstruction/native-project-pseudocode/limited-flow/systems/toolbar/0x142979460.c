// VA 0x142979460, PDB extent 5905 bytes
// toolbar::ui_interaction::ui_nav_update
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/ui_interaction.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014297a4fe) overlaps instruction at (ram,0x00014297a4f9)
    */
/* WARNING: Removing unreachable block (ram,0x000143607994) */
/* WARNING: Removing unreachable block (ram,0x0001436079d1) */
/* WARNING: Removing unreachable block (ram,0x000143607997) */
/* WARNING: Removing unreachable block (ram,0x00014360799c) */
/* WARNING: Removing unreachable block (ram,0x000143607a0e) */
/* WARNING: Removing unreachable block (ram,0x000143607c64) */
/* WARNING: Removing unreachable block (ram,0x000143607ca1) */
/* WARNING: Removing unreachable block (ram,0x000143607c67) */
/* WARNING: Removing unreachable block (ram,0x000143607c6c) */
/* WARNING: Removing unreachable block (ram,0x000143607cde) */
/* WARNING: Removing unreachable block (ram,0x000143607cee) */
/* WARNING: Removing unreachable block (ram,0x000143607f40) */
/* WARNING: Removing unreachable block (ram,0x000143607b9e) */
/* WARNING: Removing unreachable block (ram,0x000143607f3f) */
/* WARNING: Removing unreachable block (ram,0x000143607f42) */
/* WARNING: Removing unreachable block (ram,0x000143607dec) */
/* WARNING: Removing unreachable block (ram,0x000143607dee) */
/* WARNING: Removing unreachable block (ram,0x000143607e55) */
/* WARNING: Removing unreachable block (ram,0x000143607ebb) */
/* WARNING: Removing unreachable block (ram,0x000143607e5b) */
/* WARNING: Removing unreachable block (ram,0x000143607bd2) */
/* WARNING: Removing unreachable block (ram,0x000143607b1c) */
/* WARNING: Removing unreachable block (ram,0x000143607b5f) */
/* WARNING: Removing unreachable block (ram,0x000143607b61) */
/* WARNING: Removing unreachable block (ram,0x000143607b7a) */
/* WARNING: Removing unreachable block (ram,0x000143607bb3) */
/* WARNING: Removing unreachable block (ram,0x000143607bb6) */
/* WARNING: Removing unreachable block (ram,0x000143607c2c) */
/* WARNING: Removing unreachable block (ram,0x000143607bb8) */
/* WARNING: Removing unreachable block (ram,0x000143607b86) */
/* WARNING: Removing unreachable block (ram,0x000143607b8a) */
/* WARNING: Removing unreachable block (ram,0x000143607bb9) */
/* WARNING: Removing unreachable block (ram,0x000143607bbb) */
/* WARNING: Removing unreachable block (ram,0x000143607bbe) */
/* WARNING: Removing unreachable block (ram,0x000143607bc3) */
/* WARNING: Removing unreachable block (ram,0x000143607be8) */
/* WARNING: Removing unreachable block (ram,0x000143607b90) */
/* WARNING: Removing unreachable block (ram,0x000143607b92) */
/* WARNING: Removing unreachable block (ram,0x000143607b9c) */
/* WARNING: Removing unreachable block (ram,0x000143607c83) */
/* WARNING: Removing unreachable block (ram,0x000143607c23) */
/* WARNING: Removing unreachable block (ram,0x000143607c29) */
/* WARNING: Removing unreachable block (ram,0x000143607c31) */
/* WARNING: Removing unreachable block (ram,0x000143607efe) */
/* WARNING: Removing unreachable block (ram,0x000143607f07) */
/* WARNING: Removing unreachable block (ram,0x000143607c97) */
/* WARNING: Removing unreachable block (ram,0x000143607ec6) */
/* WARNING: Removing unreachable block (ram,0x000143607cce) */
/* WARNING: Removing unreachable block (ram,0x000143607e11) */
/* WARNING: Removing unreachable block (ram,0x000143607e73) */
/* WARNING: Removing unreachable block (ram,0x000143607ef2) */
/* WARNING: Removing unreachable block (ram,0x000143607e8d) */
/* WARNING: Removing unreachable block (ram,0x000143607ebe) */
/* WARNING: Removing unreachable block (ram,0x000143607f2a) */
/* WARNING: Removing unreachable block (ram,0x000143607ec5) */
/* WARNING: Removing unreachable block (ram,0x000143607ec7) */
/* WARNING: Removing unreachable block (ram,0x000143607ef6) */
/* WARNING: Removing unreachable block (ram,0x000143607e8f) */
/* WARNING: Removing unreachable block (ram,0x000143607e91) */
/* WARNING: Removing unreachable block (ram,0x000143607f0a) */
/* WARNING: Removing unreachable block (ram,0x000143607f0c) */
/* WARNING: Removing unreachable block (ram,0x000143607f71) */
/* WARNING: Removing unreachable block (ram,0x000143607df8) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* Matched PDB project procedure: toolbar::ui_interaction::ui_nav_update
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/ui_interaction.rs
   Extent: 5905 */

byte * pdb_142979460(longlong *param_1,longlong *param_2,longlong *param_3,byte *param_4,
                    longlong *param_5,undefined8 param_6)

{
  byte bVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  code *pcVar7;
  uint3 uVar8;
  undefined8 uVar9;
  char cVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char cVar13;
  byte bVar14;
  byte bVar25;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int *piVar18;
  undefined4 *puVar19;
  byte *pbVar20;
  undefined8 uVar21;
  byte *pbVar22;
  char *pcVar23;
  uint *puVar24;
  byte *pbVar26;
  longlong lVar27;
  ulonglong uVar28;
  undefined8 *puVar29;
  byte *pbVar30;
  undefined2 uVar31;
  undefined7 uVar36;
  uint *puVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  byte *pbVar35;
  byte bVar37;
  char cVar38;
  int **ppiVar39;
  int **ppiVar40;
  ulonglong uVar41;
  undefined1 *puVar42;
  undefined1 *puVar43;
  ulonglong uVar44;
  longlong lVar45;
  longlong *plVar46;
  undefined8 *puVar47;
  undefined8 *puVar48;
  undefined4 uVar49;
  undefined8 *puVar50;
  longlong lVar51;
  ulonglong *puVar52;
  char *pcVar53;
  longlong lVar54;
  int *piVar55;
  ulonglong uVar56;
  undefined *puVar57;
  longlong lVar58;
  int iVar59;
  byte *pbVar60;
  byte *pbVar61;
  undefined4 *puVar62;
  undefined8 *puVar63;
  longlong in_FS_OFFSET;
  longlong unaff_GS_OFFSET;
  bool bVar64;
  bool bVar65;
  int *piStack_2d0;
  undefined1 auStack_2c8 [32];
  undefined *puStack_2a8;
  longlong lStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  longlong lStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  byte *pbStack_1d8;
  undefined4 *puStack_1d0;
  longlong *plStack_1c8;
  longlong lStack_1c0;
  ulonglong *puStack_1b8;
  longlong *plStack_1b0;
  longlong *plStack_180;
  undefined4 uStack_174;
  undefined4 uStack_170;
  longlong lStack_168;
  byte *pbStack_160;
  undefined8 uStack_158;
  longlong lStack_148;
  uint *puStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  longlong lStack_130;
  longlong lStack_f8;
  byte *pbStack_f0;
  longlong lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  longlong lStack_d0;
  longlong lStack_c0;
  uint uStack_b8;
  uint uStack_b4;
  byte *pbStack_b0;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  longlong *plStack_98;
  uint *puStack_90;
  byte abStack_84 [68];
  
  ppiVar39 = (int **)auStack_2c8;
  ppiVar40 = (int **)auStack_2c8;
  puVar50 = (undefined8 *)&uStack_248;
  abStack_84[4] = 0xfe;
  abStack_84[5] = 0xff;
  abStack_84[6] = 0xff;
  abStack_84[7] = 0xff;
  abStack_84[8] = 0xff;
  abStack_84[9] = 0xff;
  abStack_84[10] = 0xff;
  abStack_84[0xb] = 0xff;
  puVar63 = (undefined8 *)*param_5;
  piStack_2d0 = (int *)0x1429794bb;
  cVar13 = pdb_1409ec020(puVar63 + 2);
  if (cVar13 != '\0') {
    uVar15 = *(uint *)((longlong)param_5 + 0x1c);
    *(uint *)param_5[2] = uVar15;
    *puVar63 = 0;
    return (byte *)(ulonglong)uVar15;
  }
  lVar58 = *param_3;
  uVar3 = *(undefined4 *)(lVar58 + 0xb0);
  uVar49 = *(undefined4 *)(lVar58 + 0xb4);
  piStack_2d0 = (int *)0x1429794f7;
  plStack_98 = param_2;
  cVar13 = pdb_140938b60(uVar3,uVar49);
  if (cVar13 == '\0') {
    uVar15 = 0;
  }
  else {
    piStack_2d0 = (int *)0x14297950e;
    uVar15 = pdb_140938b60(*(undefined4 *)(lVar58 + 0xb8),*(undefined4 *)(lVar58 + 0xbc));
    uVar15 = uVar15 ^ 1;
  }
  piStack_2d0 = (int *)0x14297952a;
  cVar13 = pdb_140938b60(*(undefined4 *)(lVar58 + 0xb8),*(undefined4 *)(lVar58 + 0xbc));
  if (cVar13 == '\0') {
    uStack_a0 = 0;
  }
  else {
    piStack_2d0 = (int *)0x142979538;
    uStack_a0 = pdb_140938b60(uVar3,uVar49);
    uStack_a0 = uStack_a0 ^ 1;
  }
  uVar3 = *(undefined4 *)(lVar58 + 0xc0);
  uVar49 = *(undefined4 *)(lVar58 + 0xc4);
  piStack_2d0 = (int *)0x142979564;
  cVar13 = pdb_140938b60(uVar3,uVar49);
  if (cVar13 == '\0') {
    uStack_9c = 0;
  }
  else {
    piStack_2d0 = (int *)0x14297957b;
    uStack_9c = pdb_140938b60(*(undefined4 *)(lVar58 + 200),*(undefined4 *)(lVar58 + 0xcc));
    uStack_9c = uStack_9c ^ 1;
  }
  piStack_2d0 = (int *)0x1429795a2;
  cVar13 = pdb_140938b60(*(undefined4 *)(lVar58 + 200),*(undefined4 *)(lVar58 + 0xcc));
  if (cVar13 == '\0') {
    uStack_a4 = 0;
  }
  else {
    piStack_2d0 = (int *)0x1429795b0;
    uStack_a4 = pdb_140938b60(uVar3,uVar49);
    uStack_a4 = uStack_a4 ^ 1;
  }
  abStack_84[0] = (byte)uVar15 | (byte)uStack_a0;
  bVar37 = (byte)uStack_9c | (byte)uStack_a4 | abStack_84[0];
  lVar51 = *param_5;
  uStack_a8 = uVar15;
  if (*(int *)(lVar51 + 0x10) != 1) {
    if (bVar37 == 0) {
      piStack_2d0 = (int *)0x142979645;
      pbVar61 = (byte *)pdb_140938b60(*(undefined4 *)(lVar58 + 0xa8),*(undefined4 *)(lVar58 + 0xac))
      ;
      if ((char)pbVar61 == '\0') {
        return pbVar61;
      }
      lVar51 = *param_5;
    }
    piStack_2d0 = (int *)0x142979655;
    cVar13 = pdb_140c9dda0(lVar51);
    if (cVar13 != '\0') {
      *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
      plVar46 = (longlong *)*param_5;
      pbStack_1d8 = (byte *)*plVar46;
      puStack_1d0 = (undefined4 *)plVar46[1];
      *plVar46 = 0;
      goto LAB_1429799ce;
    }
    lVar58 = *param_1;
    lVar51 = param_1[1];
    puVar32 = *(uint **)(lVar58 + 0xf8);
    puVar24 = puVar32 + *(longlong *)(lVar58 + 0x100);
    if (*(char *)(lVar58 + 0x108) == '\0') {
      puVar50 = (undefined8 *)0x8;
      bVar64 = false;
      lVar45 = 0;
      uVar15 = 0;
      lVar27 = 0;
      do {
        if (uVar15 == (uint)lVar27) {
          do {
            if (puVar32 == puVar24) goto LAB_1429799aa;
            uVar15 = *puVar32;
            puVar32 = puVar32 + 1;
            lVar27 = *(longlong *)(*(longlong *)(lVar51 + 0x100) + 0x58 + (ulonglong)uVar15 * 0xa0);
          } while (lVar27 == 0);
          lVar54 = *(longlong *)(lVar51 + 0x100) + (ulonglong)uVar15 * 0xa0;
          uVar33 = *(ulonglong *)(lVar58 + 0x118);
          uVar15 = 0;
          if ((uVar33 < *(ulonglong *)(lVar54 + 0x88)) &&
             (*(longlong *)(*(longlong *)(lVar54 + 0x80) + uVar33 * 8) != 0)) {
            lVar45 = (ulonglong)*(uint *)(lVar54 + 0x94) * 0x48 + *(longlong *)(lVar51 + 0x1a0);
            bVar64 = true;
            if ((uVar33 < *(ulonglong *)(lVar45 + 0x40)) &&
               (uVar33 = *(ulonglong *)(*(longlong *)(lVar45 + 0x38) + uVar33 * 8), uVar33 != 0)) {
              lVar45 = *(longlong *)(*(longlong *)(lVar45 + 0x18) + 0x10 + ~uVar33 * 0x30);
            }
            else {
              lVar45 = 0;
            }
          }
          else {
            bVar64 = false;
          }
          puVar63 = *(undefined8 **)(lVar54 + 0x50);
          pbStack_f0 = (byte *)*puVar63;
          puVar50 = puVar63;
          if (!bVar64) goto LAB_14297998a;
        }
        else {
          pbStack_f0 = (byte *)puVar50[(ulonglong)uVar15 * 2];
          if (!bVar64) goto LAB_14297998a;
          puVar63 = puVar50 + (ulonglong)uVar15 * 2;
        }
        if ((int)pbStack_f0 == 0) goto LAB_1429799aa;
        if (lVar45 == 0) break;
        uVar15 = uVar15 + 1;
        bVar64 = true;
      } while (*(char *)((ulonglong)~*(uint *)(puVar63 + 1) * 3 + lVar45) != '\x01');
    }
    else {
      puVar50 = (undefined8 *)0x8;
      bVar64 = false;
      lVar45 = 0;
      uVar15 = 0;
      lVar27 = 0;
      do {
        if (uVar15 == (uint)lVar27) {
          do {
            if (puVar32 == puVar24) goto LAB_1429799aa;
            uVar15 = *puVar32;
            puVar32 = puVar32 + 1;
            lVar27 = *(longlong *)(*(longlong *)(lVar51 + 0x1a0) + 0x10 + (ulonglong)uVar15 * 0x48);
          } while (lVar27 == 0);
          lVar54 = *(longlong *)(lVar51 + 0x1a0) + (ulonglong)uVar15 * 0x48;
          uVar15 = 0;
          if ((*(ulonglong *)(lVar58 + 0x118) < *(ulonglong *)(lVar54 + 0x40)) &&
             (uVar33 = *(ulonglong *)
                        (*(longlong *)(lVar54 + 0x38) + *(ulonglong *)(lVar58 + 0x118) * 8),
             uVar33 != 0)) {
            lVar45 = *(longlong *)(*(longlong *)(lVar54 + 0x18) + 0x10 + ~uVar33 * 0x30);
            bVar64 = true;
          }
          else {
            bVar64 = false;
          }
          puVar50 = *(undefined8 **)(lVar54 + 8);
          pbStack_f0 = (byte *)*puVar50;
          if (!bVar64) goto LAB_14297998a;
          uVar33 = 0;
          iVar17 = (int)pbStack_f0;
        }
        else {
          uVar33 = (ulonglong)uVar15;
          pbStack_f0 = (byte *)puVar50[uVar33];
          if (!bVar64) goto LAB_14297998a;
          iVar17 = (int)pbStack_f0;
        }
        if (iVar17 == 0) goto LAB_1429799aa;
        if (lVar45 == 0) break;
        uVar15 = uVar15 + 1;
        bVar64 = true;
      } while (*(char *)(uVar33 * 3 + lVar45) == '\0');
    }
    goto LAB_14297998f;
  }
  uVar21 = *(undefined8 *)(lVar51 + 0x18);
  piStack_2d0 = (int *)0x142979603;
  cVar13 = pdb_140938b90(*(undefined4 *)(lVar58 + 0xa0),*(undefined4 *)(lVar58 + 0xa4));
  if (cVar13 == '\0') {
    lVar51 = param_1[1];
    if (((*(ulonglong *)(lVar51 + 0x10) <= (ulonglong)~(uint)uVar21) ||
        (piVar18 = (int *)((ulonglong)~(uint)uVar21 * 0x18 + *(longlong *)(lVar51 + 8)),
        piVar18[4] != (int)((ulonglong)uVar21 >> 0x20))) || (*piVar18 == 0)) goto LAB_14297976d;
    lVar27 = *param_1;
    uVar33 = *(ulonglong *)(piVar18 + 2);
    if ((*(ulonglong *)(lVar27 + 0x38) <= (uVar33 & 0xffffffff)) ||
       ((*(ulonglong *)(*(longlong *)(lVar27 + 0x28) + (uVar33 >> 6 & 0x3ffffff) * 8) >>
         (uVar33 & 0x3f) & 1) == 0)) goto LAB_14297976d;
    lVar54 = (uVar33 >> 0x20) * 0x48 + *(longlong *)(lVar51 + 0x1a0);
    lVar45 = (uVar33 & 0xffffffff) * 0xa0;
    uVar33 = *(ulonglong *)(lVar27 + 0x110);
    if ((uVar33 < *(ulonglong *)(*(longlong *)(lVar51 + 0x100) + 0x88 + lVar45)) &&
       (lVar51 = *(longlong *)(*(longlong *)(lVar51 + 0x100) + lVar45 + 0x80),
       *(longlong *)(lVar51 + uVar33 * 8) != 0)) {
      uVar36 = (undefined7)((ulonglong)lVar51 >> 8);
      bVar64 = true;
      if ((*(ulonglong *)(lVar54 + 0x40) <= uVar33) ||
         (uVar33 = *(ulonglong *)(*(longlong *)(lVar54 + 0x38) + uVar33 * 8), uVar33 == 0))
      goto LAB_142979a0f;
      lVar51 = *(longlong *)(*(longlong *)(lVar54 + 0x18) + 0x10 + ~uVar33 * 0x30);
    }
    else {
      bVar64 = false;
      uVar36 = 0;
LAB_142979a0f:
      lVar51 = 0;
    }
    uVar15 = piVar18[1];
    if ((*(ulonglong *)(lVar27 + 0x120) < *(ulonglong *)(lVar54 + 0x40)) &&
       (uVar33 = *(ulonglong *)(*(longlong *)(lVar54 + 0x38) + *(ulonglong *)(lVar27 + 0x120) * 8),
       uVar33 != 0)) {
      lVar27 = *(longlong *)(*(longlong *)(lVar54 + 0x18) + 0x10 + ~uVar33 * 0x30);
    }
    else {
      lVar27 = 0;
    }
    lStack_168 = 0;
    if (bVar64) {
      lStack_168 = lVar51 + (ulonglong)~uVar15 * 0x10;
    }
    piStack_2d0 = (int *)0x142979a85;
    plStack_180 = param_1;
    uStack_158 = uVar21;
    cVar13 = pdb_140938b60(*(undefined4 *)(lVar58 + 0xa8),*(undefined4 *)(lVar58 + 0xac));
    if (cVar13 == '\0') {
      plVar46 = (longlong *)(lVar27 + (ulonglong)~uVar15 * 0x40);
      if ((char)uStack_a8 == '\0') {
        if ((byte)uStack_a0 == '\0') {
          if ((char)uStack_9c == '\0') {
            if ((byte)uStack_a4 == '\0') {
              return (byte *)0x8;
            }
            plVar46 = plVar46 + 6;
          }
          else {
            plVar46 = plVar46 + 4;
          }
        }
        else {
          plVar46 = plVar46 + 2;
        }
      }
      lVar58 = *plVar46;
      uVar21 = CONCAT71(uVar36,lVar58 == 0);
      if ((bVar37 & lVar58 == 0) != 1) {
                    /* WARNING: Could not recover jumptable at 0x000142979bd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pbVar61 = (byte *)(*(code *)(&UNK_143607928 + *(int *)(&UNK_143607928 + lVar58 * 4)))
                                    (&UNK_143607928 + *(int *)(&UNK_143607928 + lVar58 * 4));
        return pbVar61;
      }
      if (lStack_168 != 0) {
        piStack_2d0 = (int *)0x142979b2c;
        uStack_1e8 = pdb_1411b4d70(&UNK_1436072a8);
        uVar12 = _UNK_1436072d8;
        uVar11 = _DAT_1436072d0;
        uVar9 = _UNK_1436072c8;
        lVar27 = _DAT_1436072c0;
        lStack_208 = _DAT_1436072c0;
        uStack_200 = _UNK_1436072c8;
        uStack_1f8 = _DAT_1436072d0;
        uStack_1f0 = _UNK_1436072d8;
        lStack_f8 = 0;
        pbStack_f0 = (byte *)0x4;
        lStack_e8 = 0;
        lVar51 = *(longlong *)(*(longlong *)param_4 + 0xa0);
        lVar58 = lVar51 + *(longlong *)(*(longlong *)param_4 + 0xa8) * 0x28;
        uStack_1e0 = uVar21;
        for (; lVar45 = lStack_e8, pbStack_160 = param_4, lVar51 != lVar58; lVar51 = lVar51 + 0x28)
        {
          uVar21 = *(undefined8 *)(lVar51 + 0x10);
          if (lStack_e8 == lStack_f8) {
            piStack_2d0 = (int *)0x142979bc6;
            pdb_142d89540(&lStack_f8);
          }
          *(undefined8 *)(pbStack_f0 + lVar45 * 8) = uVar21;
          lStack_e8 = lVar45 + 1;
        }
        while (lStack_e8 != 0) {
          uVar49 = *(undefined4 *)(pbStack_f0 + lStack_e8 * 8 + -8);
          uVar3 = *(undefined4 *)(pbStack_f0 + lStack_e8 * 8 + -4);
          piStack_2d0 = (int *)0x142979c35;
          lStack_e8 = lStack_e8 + -1;
          pdb_1411bdd60(&lStack_148,*(undefined8 *)param_4,uVar49,uVar3);
          if ((int)lStack_148 == 4) {
            puStack_90 = puStack_140;
            pbVar61 = (byte *)CONCAT44(uStack_134,uStack_138);
            pbStack_b0 = pbVar61;
            for (lVar58 = lStack_130 << 3; lVar51 = lStack_e8, param_4 = pbStack_160, lVar58 != 0;
                lVar58 = lVar58 + -8) {
              uVar4 = *(undefined4 *)pbVar61;
              uVar5 = *(undefined4 *)(pbVar61 + 4);
              if (lStack_e8 == lStack_f8) {
                piStack_2d0 = (int *)0x142979cd1;
                pdb_142d89540(&lStack_f8);
              }
              pbVar61 = pbVar61 + 8;
              *(undefined4 *)(pbStack_f0 + lVar51 * 8) = uVar4;
              *(undefined4 *)(pbStack_f0 + lVar51 * 8 + 4) = uVar5;
              lStack_e8 = lVar51 + 1;
              puStack_2a8 = (undefined *)CONCAT44(puStack_2a8._4_4_,uVar3);
              piStack_2d0 = (int *)0x142979ca8;
              pdb_1411a2e00(&lStack_208,uVar4,uVar5,uVar49);
            }
            if (puStack_90 != (uint *)0x0) {
              piStack_2d0 = (int *)0x142979d08;
              pub_1406abac0(pbStack_b0,(longlong)puStack_90 << 3,4);
            }
          }
        }
        uVar33 = 0;
        if (lStack_f8 != 0) {
          uVar33 = lStack_f8 << 3;
          piStack_2d0 = (int *)0x142979d2f;
          pub_1406abac0(pbStack_f0,uVar33,4);
        }
        uStack_278 = uStack_1e8;
        uStack_270 = uStack_1e0;
        uStack_288 = uStack_1f8;
        uStack_280 = uStack_1f0;
        lStack_298 = lStack_208;
        uStack_290 = uStack_200;
        uStack_174 = (float)(uStack_a0 & 0xff) + (0.0 - (float)(uStack_a8 & 0xff));
        uStack_170 = (float)(uStack_9c & 0xff) - (float)(uStack_a4 & 0xff);
        piStack_2d0 = (int *)0x142979da7;
        uStack_218 = pdb_1411b4d70(&UNK_1436072a8);
        uStack_228 = uVar11;
        uStack_220 = uVar12;
        uStack_238 = lVar27;
        uStack_230 = uVar9;
        puStack_90 = (uint *)*plStack_98;
        lVar58 = plStack_98[1];
        puVar32 = *(uint **)((longlong)puStack_90 + 0xf8);
        puVar24 = puVar32 + *(longlong *)((longlong)puStack_90 + 0x100);
        plStack_98 = (longlong *)
                     CONCAT71(plStack_98._1_7_,*(undefined1 *)((longlong)puStack_90 + 0x108));
        lVar51 = 0;
        lStack_c0 = 8;
        pbStack_b0 = (byte *)0x8;
        lVar45 = 0;
        uVar56 = 0;
        uStack_210 = uVar33;
        do {
          if ((char)plStack_98 == '\0') {
            if ((int)uVar56 == (int)lVar45) {
              do {
                if (puVar32 == puVar24) goto LAB_142979f7b;
                uVar15 = *puVar32;
                puVar32 = puVar32 + 1;
                lVar45 = *(longlong *)
                          (*(longlong *)(lVar58 + 0x100) + 0x58 + (ulonglong)uVar15 * 0xa0);
              } while (lVar45 == 0);
              lVar54 = *(longlong *)(lVar58 + 0x100) + (ulonglong)uVar15 * 0xa0;
              uVar33 = (ulonglong)*(uint *)(lVar54 + 0x94);
              if (*(ulonglong *)((longlong)puStack_90 + 0x110) <
                  *(ulonglong *)(*(longlong *)(lVar58 + 0x1a0) + 0x40 + uVar33 * 0x48)) {
                lVar51 = *(longlong *)(lVar58 + 0x1a0) + uVar33 * 0x48;
                uVar33 = *(ulonglong *)
                          (*(longlong *)(lVar51 + 0x38) +
                          *(ulonglong *)((longlong)puStack_90 + 0x110) * 8);
                if (uVar33 == 0) goto LAB_142979f24;
                lVar51 = *(longlong *)(*(longlong *)(lVar51 + 0x18) + 0x10 + ~uVar33 * 0x30);
              }
              else {
LAB_142979f24:
                lVar51 = 0;
              }
              lStack_c0 = *(longlong *)(lVar54 + 0x50);
              uVar56 = 0;
            }
            iVar17 = (int)uVar56;
            puVar63 = (undefined8 *)(lStack_c0 + uVar56 * 0x10);
            uVar56 = (ulonglong)~*(uint *)(lStack_c0 + 8 + uVar56 * 0x10);
          }
          else {
            if ((int)uVar56 == (int)lVar45) {
              do {
                if (puVar32 == puVar24) goto LAB_142979f7b;
                uVar15 = *puVar32;
                puVar32 = puVar32 + 1;
                lVar45 = *(longlong *)
                          (*(longlong *)(lVar58 + 0x1a0) + 0x10 + (ulonglong)uVar15 * 0x48);
              } while (lVar45 == 0);
              lVar54 = *(longlong *)(lVar58 + 0x1a0) + (ulonglong)uVar15 * 0x48;
              if ((*(ulonglong *)((longlong)puStack_90 + 0x110) < *(ulonglong *)(lVar54 + 0x40)) &&
                 (uVar33 = *(ulonglong *)
                            (*(longlong *)(lVar54 + 0x38) +
                            *(ulonglong *)((longlong)puStack_90 + 0x110) * 8), uVar33 != 0)) {
                lVar51 = *(longlong *)(*(longlong *)(lVar54 + 0x18) + 0x10 + ~uVar33 * 0x30);
              }
              else {
                lVar51 = 0;
              }
              pbStack_b0 = *(byte **)(lVar54 + 8);
              uVar56 = 0;
            }
            iVar17 = (int)uVar56;
            puVar63 = (undefined8 *)((longlong)pbStack_b0 + uVar56 * 8);
          }
          puVar19 = (undefined4 *)(lVar51 + uVar56 * 0x14);
          if ((int)*puVar63 == 0) goto LAB_142979f7b;
          uVar56 = (ulonglong)(iVar17 + 1);
          abStack_84[2] = 1;
          piStack_2d0 = (int *)0x142979f75;
          pdb_1411a3a40(&uStack_238,*puVar19,puVar19[1]);
        } while( true );
      }
      goto LAB_14297a594;
    }
    piStack_2d0 = (int *)0x142979aa3;
    pdb_142976d40(param_6,uStack_158,&UNK_143607828);
  }
  puVar50 = (undefined8 *)*param_5;
  uVar21 = puVar50[2];
  uVar9 = puVar50[3];
  *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
  *puVar50 = uVar21;
  puVar50[1] = uVar9;
LAB_14297976d:
  *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
  pbVar61 = (byte *)*param_5;
  pbVar61[0x10] = 0;
  pbVar61[0x11] = 0;
  pbVar61[0x12] = 0;
  pbVar61[0x13] = 0;
  pbVar61[0x14] = 0;
  pbVar61[0x15] = 0;
  pbVar61[0x16] = 0;
  pbVar61[0x17] = 0;
  return pbVar61;
LAB_142979f7b:
  uStack_248 = (undefined4)uStack_218;
  uStack_244 = uStack_218._4_4_;
  uStack_240 = (undefined4)uStack_210;
  uStack_23c = uStack_210._4_4_;
  uStack_258 = (undefined4)uStack_228;
  uStack_254 = uStack_228._4_4_;
  uStack_250 = (undefined4)uStack_220;
  uStack_24c = uStack_220._4_4_;
  uStack_268 = (undefined4)uStack_238;
  uStack_264 = uStack_238._4_4_;
  uStack_260 = (undefined4)uStack_230;
  uStack_25c = uStack_230._4_4_;
  puStack_1d0 = &uStack_268;
  plStack_1c8 = plStack_180;
  lStack_1c0 = lStack_168;
  puVar52 = (ulonglong *)&uStack_174;
  plStack_1b0 = param_5;
  piStack_2d0 = (int *)0x142979ff4;
  puVar24 = puStack_90;
  pbStack_1d8 = param_4;
  puStack_1b8 = puVar52;
  pdb_142980fa0(&lStack_148,puStack_90,lVar58,uStack_158);
  if ((int)lStack_148 == 0) {
    puStack_2a8 = &UNK_1436077e0;
                    /* WARNING: Subroutine does not return */
    piStack_2d0 = (int *)0x14297a670;
    pdb_142dc8170(&UNK_143607360,0x2b,&lStack_f8,&UNK_143607340);
  }
  uVar15 = *puStack_140;
  uStack_b4 = puStack_140[1];
  pbVar22 = (byte *)(ulonglong)uStack_b4;
  piStack_2d0 = (int *)0x14297a029;
  uStack_b8 = uVar15;
  uStack_d8 = pdb_1411b4d70(&UNK_1436072a8);
  pbVar61 = (byte *)(ulonglong)uStack_a8;
  lStack_e8 = uVar11;
  uStack_e0 = uVar12;
  lStack_f8 = lVar27;
  pbStack_f0 = (byte *)uVar9;
  abStack_84[1] = (byte)uStack_a8 | (byte)uStack_a4;
  pbVar26 = (byte *)&lStack_f8;
  puVar57 = &UNK_143607938;
  pbVar35 = (byte *)(ulonglong)uVar15;
  lStack_d0 = (longlong)puVar24;
LAB_14297a06a:
  pbVar60 = (byte *)((ulonglong)pbVar35 & 0xffffffff);
  iVar17 = (int)pbVar22;
  piStack_2d0 = (int *)0x14297a078;
  cVar13 = pdb_1411a2fc0(pbVar26,pbVar35,pbVar22);
  if (cVar13 == '\0') {
    piStack_2d0 = (int *)0x14297a091;
    puVar19 = (undefined4 *)pdb_142978a70(puVar50 + -10,puVar50 + 0x32);
    iVar59 = (int)pbVar35;
    if (puVar19 == (undefined4 *)0x0) {
      lVar58 = *(longlong *)(*(longlong *)param_4 + 0xa8);
      if (lVar58 != 0) {
        lVar51 = *(longlong *)(*(longlong *)param_4 + 0xa0);
        lVar27 = 0;
        goto LAB_14297a1e4;
      }
      goto LAB_14297a55e;
    }
    uVar49 = *puVar19;
    piVar18 = (int *)(ulonglong)(uint)puVar19[1];
    uVar21 = *(undefined8 *)param_4;
    *(undefined4 *)(puVar50 + 0x31) = puVar19[1];
    piStack_2d0 = (int *)0x14297a0b3;
    lVar58 = pdb_14298a340(uVar21,uVar49);
    cVar13 = *(char *)(lVar58 + 0x14b);
    *(undefined4 *)((longlong)puVar50 + 0xdc) = uVar49;
    if ((cVar13 != '\0') == (bool)*(char *)((longlong)puVar50 + 0x1c4)) {
      puVar50[0x26] = 0;
      puVar50[0x27] = 4;
      puVar50[0x28] = 0;
    }
    else {
      piStack_2d0 = (int *)0x14297a0ea;
      pdb_1411bdd60(puVar50 + 0x15,*(undefined8 *)param_4);
      if (*(int *)(puVar50 + 0x15) != 4) {
        *(undefined4 *)(puVar50 + 0x22) = *(undefined4 *)(puVar50 + 0x17);
        *(undefined4 *)((longlong)puVar50 + 0x114) = *(undefined4 *)((longlong)puVar50 + 0xbc);
        *(undefined4 *)(puVar50 + 0x23) = *(undefined4 *)(puVar50 + 0x18);
        *(undefined4 *)((longlong)puVar50 + 0x11c) = *(undefined4 *)((longlong)puVar50 + 0xc4);
        *(undefined4 *)(puVar50 + 0x20) = *(undefined4 *)(puVar50 + 0x15);
        *(undefined4 *)((longlong)puVar50 + 0x104) = *(undefined4 *)((longlong)puVar50 + 0xac);
        *(undefined4 *)(puVar50 + 0x21) = *(undefined4 *)(puVar50 + 0x16);
        *(undefined4 *)((longlong)puVar50 + 0x10c) = *(undefined4 *)((longlong)puVar50 + 0xb4);
        puStack_2a8 = &UNK_1436077f8;
                    /* WARNING: Subroutine does not return */
        piStack_2d0 = (int *)0x14297a6ba;
        pdb_142dc8170(&UNK_143607360,0x2b,puVar50 + 0x20,&UNK_143607390);
      }
      puVar50[0x37] = puVar50[0x16];
      puVar50[0x36] = puVar50[0x17];
      lVar58 = puVar50[0x18];
      if (lVar58 == 0) {
LAB_14297a6bd:
                    /* WARNING: Subroutine does not return */
        piStack_2d0 = (int *)0x14297a6c9;
        pdb_142dc8150(&UNK_143607810);
      }
      uVar33 = 0;
      piVar18 = (int *)puVar50[0x36];
      while ((piVar18[1] != iVar17 || (*piVar18 != iVar59))) {
        uVar33 = uVar33 + 1;
        piVar55 = piVar18 + 2;
        piVar18 = piVar18 + 2;
        if (piVar55 == (int *)puVar50[0x36] + lVar58 * 2) goto LAB_14297a6bd;
      }
      if (*(char *)((longlong)puVar50 + 0x1c5) == '\0') {
        piVar18 = (int *)(~uVar33 + lVar58);
        piStack_2d0 = (int *)0x14297a26a;
        pdb_142978fd0(puVar50 + 0x26);
      }
      else {
        piStack_2d0 = (int *)0x14297a17f;
        pdb_142978fd0(puVar50 + 0x20,puVar50[0x36]);
        piVar18 = (int *)puVar50[0x22];
        uVar33 = (ulonglong)piVar18 >> 1;
        if (uVar33 != 0) {
          lVar51 = puVar50[0x21];
          lVar58 = lVar51 + (longlong)piVar18 * 8;
          if (uVar33 == 1) {
            uVar56 = 0;
          }
          else {
            piVar18 = (int *)((longlong)piVar18 + -1);
            uVar56 = 0;
            do {
              uVar21 = *(undefined8 *)(lVar51 + uVar56 * 8);
              *(undefined8 *)(lVar51 + uVar56 * 8) = *(undefined8 *)(lVar51 + (longlong)piVar18 * 8)
              ;
              *(undefined8 *)(lVar51 + (longlong)piVar18 * 8) = uVar21;
              uVar21 = *(undefined8 *)(lVar51 + 8 + uVar56 * 8);
              *(undefined8 *)(lVar51 + 8 + uVar56 * 8) =
                   *(undefined8 *)(lVar58 + (uVar56 ^ 0x1ffffffffffffffe) * 8);
              *(undefined8 *)(lVar58 + (uVar56 ^ 0x1ffffffffffffffe) * 8) = uVar21;
              uVar56 = uVar56 + 2;
              piVar18 = (int *)((longlong)piVar18 + -2);
            } while ((uVar33 & 0xfffffffffffffffe) != uVar56);
            param_4 = (byte *)puVar50[0x1d];
            puVar52 = (ulonglong *)((longlong)puVar50 + 0xd4);
            if ((uVar33 & 1) == 0) goto LAB_14297a2e5;
          }
          piVar18 = *(int **)(lVar58 + ~uVar56 * 8);
          uVar21 = *(undefined8 *)(lVar51 + uVar56 * 8);
          *(int **)(lVar51 + uVar56 * 8) = piVar18;
          *(undefined8 *)(lVar58 + ~uVar56 * 8) = uVar21;
        }
LAB_14297a2e5:
        puVar50[0x28] = puVar50[0x22];
        puVar50[0x26] = puVar50[0x20];
        puVar50[0x27] = puVar50[0x21];
      }
      if (puVar50[0x37] != 0) {
        piVar18 = (int *)0x4;
        piStack_2d0 = (int *)0x14297a323;
        pub_1406abac0((byte *)puVar50[0x36],puVar50[0x37] << 3,4);
      }
    }
    pbVar61 = *(byte **)(*(longlong *)param_4 + 0xa0);
    pbVar30 = pbVar61 + *(longlong *)(*(longlong *)param_4 + 0xa8) * 0x28;
    puVar50[0x36] = pbVar30;
    while (pbVar35 = pbVar61, pbVar35 != pbVar30) {
      pbVar61 = pbVar35 + 0x28;
      bVar37 = pbVar35[0x24];
      if (((bVar37 != 4) && (*(int *)(pbVar35 + 0x18) == iVar59)) &&
         (*(int *)(pbVar35 + 0x1c) == iVar17)) {
        iVar6 = *(int *)(&UNK_143607938 + (ulonglong)(uint)bVar37 * 4);
        pbVar20 = &UNK_143607938 + iVar6;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(bVar37) {
        case 0:
          cVar13 = *(char *)((longlong)puVar50 + 0x1a4);
          break;
        case 1:
          cVar13 = *(char *)((longlong)puVar50 + 0x1ac);
          break;
        case 2:
          cVar13 = *(char *)(puVar50 + 0x34);
          break;
        case 3:
          cVar13 = *(char *)(puVar50 + 0x35);
          break;
        case 4:
          goto code_r0x00014297a210;
        case 5:
          puVar50 = (undefined8 *)0x1a8;
          cRam00000000000001b9 = cRam00000000000001b9 + (char)((ulonglong)pbVar35 >> 8);
          uRam0000000000000338 = uRam0000000000000358;
          pbVar35 = (byte *)(ulonglong)uRam0000000000000358;
          iRam000000000000033c = iVar17;
          goto LAB_14297a06a;
        case 6:
          *pbVar20 = *pbVar20 + (char)pbVar20;
          goto LAB_14297a4e6;
        case 7:
          goto code_r0x00014297a509;
        case 8:
        case 10:
          goto code_r0x000142980c80;
        case 9:
          goto code_r0x000142980d37;
        case 0xb:
          (&UNK_1436078c1)[iVar6] = (&UNK_1436078c1)[iVar6] + (char)pbVar30;
          ppiVar40 = &piStack_2d0;
          ppiVar39 = &piStack_2d0;
          piStack_2d0 = piVar18;
          if (pbVar20 == _UNK_143607958) goto code_r0x000142980d84;
          goto code_r0x000142980c6c;
        default:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 0xe:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 0x10:
          uVar49 = in((short)pbVar35);
          *(undefined4 *)puVar52 = uVar49;
          *(int *)(&UNK_143607962 + iVar6) = *(int *)(&UNK_143607962 + iVar6) + 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (cVar13 != '\0') {
          puVar50[0x37] = pbVar35;
          uVar21 = *(undefined8 *)(pbVar35 + 0x10);
          lVar58 = puVar50[0x28];
          if (lVar58 == puVar50[0x26]) {
            piStack_2d0 = (int *)0x14297a3f0;
            pdb_142d89540(puVar50 + 0x26);
          }
          *(undefined8 *)(puVar50[0x27] + lVar58 * 8) = uVar21;
          puVar50[0x28] = lVar58 + 1;
          param_4 = (byte *)puVar50[0x1d];
          pbVar30 = (byte *)puVar50[0x36];
        }
      }
    }
    puVar50[0x37] = pbVar35;
    puVar50[0x1f] = puVar50[0x26];
    puVar50[0x33] = puVar50[0x27];
    if (puVar50[0x28] != 0) {
      puVar62 = (undefined4 *)puVar50[0x33];
      puVar19 = puVar62 + puVar50[0x28] * 2;
      do {
        uVar49 = *puVar62;
        uVar3 = puVar62[1];
        *(undefined4 *)(puVar50 + 0x15) = 0;
        *(undefined4 *)(puVar50 + 0x1a) = 0x7f7fffff;
        uVar21 = *(undefined8 *)param_4;
        puVar50[0x20] = puVar50 + -4;
        puVar50[0x21] = puVar50[0x19];
        puVar50[0x22] = puVar50[0x1c];
        puVar50[0x23] = puVar52;
        puVar50[0x24] = puVar50 + 0x1a;
        puVar50[0x25] = puVar50 + 0x15;
        piStack_2d0 = (int *)0x14297a4a9;
        pdb_142388030(uVar21,uVar49,uVar3,puVar50 + 0x20);
        if (*(int *)(puVar50 + 0x15) != 0) {
          uVar21 = puVar50[0x15];
          plVar46 = (longlong *)puVar50[0x4e];
          *(undefined4 *)plVar46[2] = *(undefined4 *)((longlong)plVar46 + 0x1c);
          lVar58 = *plVar46;
          *(undefined8 *)(lVar58 + 0x10) = 1;
          *(undefined8 *)(lVar58 + 0x18) = uVar21;
          if (puVar50[0x1f] != 0) {
            piStack_2d0 = (int *)0x14297a602;
            pub_1406abac0((byte *)puVar50[0x33],puVar50[0x1f] << 3,4);
          }
          piStack_2d0 = (int *)0x14297a60f;
          pdb_1400db1d0(puVar50 + 0x2a);
          *(undefined1 *)((longlong)puVar50 + 0x1c6) = 0;
          piStack_2d0 = (int *)0x14297a620;
          pdb_1400d9880(puVar50 + -4);
          *(undefined1 *)((longlong)puVar50 + 0x1c7) = 0;
          piStack_2d0 = (int *)0x14297a631;
          pbVar61 = (byte *)pdb_1400d9880(puVar50 + -10);
          return pbVar61;
        }
        puVar62 = puVar62 + 2;
      } while (puVar62 != puVar19);
    }
    if (puVar50[0x1f] != 0) {
      piStack_2d0 = (int *)0x14297a4e6;
      pub_1406abac0((byte *)puVar50[0x33],puVar50[0x1f] << 3,4);
    }
LAB_14297a4e6:
    pbVar35 = (byte *)(ulonglong)*(uint *)((longlong)puVar50 + 0xdc);
    *(uint *)(puVar50 + 0x32) = *(uint *)((longlong)puVar50 + 0xdc);
    pbVar22 = (byte *)(ulonglong)*(uint *)(puVar50 + 0x31);
    *(uint *)((longlong)puVar50 + 0x194) = *(uint *)(puVar50 + 0x31);
    pbVar61 = (byte *)(ulonglong)*(uint *)(puVar50 + 0x34);
    pbVar30 = pbVar26;
code_r0x00014297a509:
    pbVar26 = pbVar30;
    goto LAB_14297a06a;
  }
  goto LAB_14297a55e;
LAB_1429807e3:
  puVar52 = *(ulonglong **)puVar50[4];
  lVar58 = ((undefined8 *)puVar50[4])[1];
  uVar33 = *puVar52;
  uVar28 = 0;
  uVar56 = uVar33 - *(ulonglong *)(lVar58 + 0x18);
  if (uVar33 < *(ulonglong *)(lVar58 + 0x18)) {
    uVar56 = uVar28;
  }
  uVar34 = uVar33 - *(ulonglong *)(lVar58 + 0x38);
  if (uVar33 < *(ulonglong *)(lVar58 + 0x38)) {
    uVar34 = uVar28;
  }
  puVar63 = (undefined8 *)(uVar56 * 0x10 + *(longlong *)(lVar58 + 8));
  uVar33 = *(ulonglong *)(lVar58 + 0x10) - uVar56;
  if (*(ulonglong *)(lVar58 + 0x10) < uVar56) {
    puVar63 = (undefined8 *)0x8;
    uVar33 = uVar28;
  }
  puVar47 = (undefined8 *)(uVar34 * 0x10 + *(longlong *)(lVar58 + 0x28));
  uVar56 = *(ulonglong *)(lVar58 + 0x30) - uVar34;
  if (*(ulonglong *)(lVar58 + 0x30) < uVar34) {
    puVar47 = (undefined8 *)0x8;
    uVar56 = uVar28;
  }
  lVar58 = *(longlong *)(lVar58 + 0x40);
  puVar50[-4] = puVar52;
  *puVar52 = (lVar58 - uVar56) - uVar33;
  puVar50[-3] = puVar63 + uVar33 * 2;
  puVar50[-2] = puVar47 + uVar56 * 2;
  puVar50[5] = *(undefined8 *)puVar50[0x1d];
  pbVar26 = (byte *)((undefined8 *)puVar50[0x1d])[1];
  puVar50[3] = *(undefined8 *)puVar50[0x1e];
  puVar50[9] = ((undefined8 *)puVar50[0x1e])[1];
  puVar50[1] = *(undefined8 *)puVar50[0x1b];
  puVar50[8] = ((undefined8 *)puVar50[0x1b])[1];
  puVar50[2] = *(undefined8 *)puVar50[0x1c];
  puVar50[4] = ((undefined8 *)puVar50[0x1c])[1];
LAB_1429808eb:
  if ((puVar63 == (undefined8 *)0x0) || (puVar63 == (undefined8 *)puVar50[-3])) {
    if ((puVar47 == (undefined8 *)0x0) || (puVar47 == (undefined8 *)puVar50[-2]))
    goto LAB_142980bee;
    puVar63 = (undefined8 *)0x0;
    puVar29 = puVar47;
    puVar47 = puVar47 + 2;
  }
  else {
    puVar29 = puVar63;
    puVar63 = puVar63 + 2;
  }
  *(longlong *)puVar50[-4] = *(longlong *)puVar50[-4] + 1;
  uVar33 = (ulonglong)~(uint)*puVar29;
  lVar58 = uVar33 * 0x18;
  iVar17 = (int)((ulonglong)*puVar29 >> 0x20);
  if (((uVar33 < *(ulonglong *)(pbVar26 + 0x10)) &&
      (piVar18 = (int *)(*(longlong *)(pbVar26 + 8) + lVar58), piVar18[4] == iVar17)) &&
     (*piVar18 != 0)) goto code_r0x000142980953;
  goto LAB_142980990;
LAB_142980bee:
  puVar52 = *(ulonglong **)puVar50[-1];
  lVar58 = ((longlong *)puVar50[-1])[1];
  uVar33 = *puVar52;
  uVar28 = 0;
  uVar56 = uVar33 - *(ulonglong *)(lVar58 + 0x18);
  if (uVar33 < *(ulonglong *)(lVar58 + 0x18)) {
    uVar56 = uVar28;
  }
  uVar34 = uVar33 - *(ulonglong *)(lVar58 + 0x38);
  if (uVar33 < *(ulonglong *)(lVar58 + 0x38)) {
    uVar34 = uVar28;
  }
  pbVar60 = (byte *)(uVar56 * 0x18 + *(longlong *)(lVar58 + 8));
  uVar33 = *(ulonglong *)(lVar58 + 0x10) - uVar56;
  if (*(ulonglong *)(lVar58 + 0x10) < uVar56) {
    pbVar60 = (byte *)0x8;
    uVar33 = uVar28;
  }
  pbVar61 = (byte *)(uVar34 * 0x18 + *(longlong *)(lVar58 + 0x28));
  uVar56 = *(ulonglong *)(lVar58 + 0x30) - uVar34;
  if (*(ulonglong *)(lVar58 + 0x30) < uVar34) {
    pbVar61 = (byte *)0x8;
    uVar56 = uVar28;
  }
  *puVar52 = (*(longlong *)(lVar58 + 0x40) - uVar56) - uVar33;
  pbVar22 = pbVar60 + uVar33 * 0x18;
  pbVar20 = (byte *)(uVar56 * 3);
  param_4 = pbVar61 + uVar56 * 0x18;
  goto LAB_142980ca0;
code_r0x000142980953:
  uVar15 = piVar18[2];
  if (((ulonglong)uVar15 < *(ulonglong *)(puVar50[5] + 0x38)) &&
     ((*(ulonglong *)(*(longlong *)(puVar50[5] + 0x28) + (ulonglong)(uVar15 >> 6) * 8) >>
       ((ulonglong)uVar15 & 0x3f) & 1) != 0)) goto LAB_1429808eb;
LAB_142980990:
  if ((uVar33 < *(ulonglong *)(puVar50[10] + 0x10)) &&
     ((piVar18 = (int *)(*(longlong *)(puVar50[10] + 8) + lVar58), piVar18[4] == iVar17 &&
      (*piVar18 != 0)))) {
    uVar15 = piVar18[2];
    if (((ulonglong)uVar15 < *(ulonglong *)(puVar50[6] + 0x38)) &&
       ((*(ulonglong *)(*(longlong *)(puVar50[6] + 0x28) + (ulonglong)(uVar15 >> 6) * 8) >>
         ((ulonglong)uVar15 & 0x3f) & 1) != 0)) {
      *(undefined4 *)puVar50[7] = *(undefined4 *)(puVar50 + 0xb);
      lVar58 = *(longlong *)(puVar57 + 0x30);
      uVar21 = *(undefined8 *)(puVar57 + 0x40);
      if (lVar58 == *(longlong *)(puVar57 + 0x20)) {
        *(undefined8 *)((longlong)ppiVar39 + -8) = 0x142980a07;
        pdb_142d7e6e0(puVar57 + 0x20);
      }
      lVar51 = *(longlong *)(puVar57 + 0x28);
      lVar27 = lVar58 * 0x20;
      *(undefined4 *)(lVar51 + lVar27) = 0xc;
      goto LAB_1429808d3;
    }
  }
  if (((((uVar33 < *(ulonglong *)(puVar50[9] + 0x10)) &&
        (piVar18 = (int *)(*(longlong *)(puVar50[9] + 8) + lVar58), piVar18[4] == iVar17)) &&
       (*piVar18 != 0)) &&
      ((uVar56 = *(ulonglong *)(piVar18 + 2),
       (uVar56 & 0xffffffff) < *(ulonglong *)(puVar50[3] + 0x38) &&
       ((*(ulonglong *)(*(longlong *)(puVar50[3] + 0x28) + (uVar56 >> 6 & 0x3ffffff) * 8) >>
         (uVar56 & 0x3f) & 1) != 0)))) &&
     (*(char *)(*(longlong *)
                 (*(longlong *)(*(longlong *)(puVar50[9] + 0x1a0) + 0x18 + (uVar56 >> 0x20) * 0x48)
                  + 0x10 + ~*(ulonglong *)
                             (*(longlong *)
                               (*(longlong *)(puVar50[9] + 0x1a0) + 0x38 + (uVar56 >> 0x20) * 0x48)
                             + *(longlong *)(puVar50[3] + 0x110) * 8) * 0x30) +
               (ulonglong)(uint)~piVar18[1]) == '\t')) {
    *(undefined4 *)puVar50[7] = *(undefined4 *)(puVar50 + 0xb);
    lVar58 = *(longlong *)(puVar57 + 0x30);
    uVar21 = *(undefined8 *)(puVar57 + 0x40);
    if (lVar58 == *(longlong *)(puVar57 + 0x20)) {
      *(undefined8 *)((longlong)ppiVar39 + -8) = 0x142980af1;
      pdb_142d7e6e0(puVar57 + 0x20);
    }
    lVar51 = *(longlong *)(puVar57 + 0x28);
    lVar27 = lVar58 * 0x20;
    *(undefined4 *)(lVar51 + lVar27) = 0x23;
  }
  else {
    if (((uVar33 < *(ulonglong *)(puVar50[8] + 0x10)) &&
        (piVar18 = (int *)(*(longlong *)(puVar50[8] + 8) + lVar58), piVar18[4] == iVar17)) &&
       (*piVar18 != 0)) {
      uVar15 = piVar18[2];
      if (((ulonglong)uVar15 < *(ulonglong *)(puVar50[1] + 0x38)) &&
         ((*(ulonglong *)(*(longlong *)(puVar50[1] + 0x28) + (ulonglong)(uVar15 >> 6) * 8) >>
           ((ulonglong)uVar15 & 0x3f) & 1) != 0)) goto LAB_1429808eb;
    }
    if ((uVar33 < *(ulonglong *)(puVar50[4] + 0x10)) &&
       ((piVar18 = (int *)(lVar58 + *(longlong *)(puVar50[4] + 8)), piVar18[4] == iVar17 &&
        (*piVar18 != 0)))) {
      uVar15 = piVar18[2];
      if (((ulonglong)uVar15 < *(ulonglong *)(puVar50[2] + 0x38)) &&
         ((*(ulonglong *)(*(longlong *)(puVar50[2] + 0x28) + (ulonglong)(uVar15 >> 6) * 8) >>
           ((ulonglong)uVar15 & 0x3f) & 1) != 0)) goto LAB_1429808eb;
    }
    *(undefined4 *)puVar50[7] = *(undefined4 *)(puVar50 + 0xb);
    lVar58 = *(longlong *)(puVar57 + 0x30);
    uVar21 = *(undefined8 *)(puVar57 + 0x40);
    if (lVar58 == *(longlong *)(puVar57 + 0x20)) {
      *(undefined8 *)((longlong)ppiVar39 + -8) = 0x142980be8;
      pdb_142d7e6e0(puVar57 + 0x20);
    }
    lVar51 = *(longlong *)(puVar57 + 0x28);
    lVar27 = lVar58 * 0x20;
    *(undefined4 *)(lVar51 + lVar27) = 0x12;
  }
LAB_1429808d3:
  *(undefined8 *)(lVar51 + 0x18 + lVar27) = uVar21;
  *(longlong *)(puVar57 + 0x30) = lVar58 + 1;
  *(longlong *)(puVar57 + 0x40) = *(longlong *)(puVar57 + 0x40) + 1;
  goto LAB_1429808eb;
LAB_14297998a:
  if ((int)pbStack_f0 == 0) {
LAB_1429799aa:
    lStack_f8 = 3;
    plVar46 = &lStack_148;
  }
  else {
LAB_14297998f:
    lStack_f8 = 1;
    plVar46 = &lStack_f8;
  }
  lStack_148 = 0;
  pbStack_1d8 = (byte *)*plVar46;
  puStack_1d0 = (undefined4 *)plVar46[1];
LAB_1429799ce:
  *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
  pbVar61 = (byte *)*param_5;
  *(byte **)(pbVar61 + 0x10) = pbStack_1d8;
  *(undefined4 **)(pbVar61 + 0x18) = puStack_1d0;
  return pbVar61;
code_r0x00014297a210:
  pbVar20 = (byte *)(&UNK_143607948 + *(int *)(&UNK_143607948 + (longlong)pbVar20 * 4));
  ppiVar39 = (int **)auStack_2c8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(pbVar20) {
  case (byte *)0x142980d47:
code_r0x000142980d47:
                    /* WARNING: Could not recover jumptable at 0x000142980d55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pbVar61 = (byte *)(*(code *)(&UNK_143607958 + *(int *)(&UNK_143607958 + (longlong)pbVar20 * 4)))
                                ();
    return pbVar61;
  case (byte *)0x142980d84:
code_r0x000142980d84:
    *(undefined8 *)((longlong)ppiVar40 + -8) = 0x142980d8e;
    pdb_142d7e6e0(&UNK_143607958);
    ppiVar39 = ppiVar40;
code_r0x000142980c6c:
    pbVar35 = (byte *)puVar50[10];
    pbVar30 = (byte *)((longlong)pbVar35 << 5);
    piVar18 = (int *)(ulonglong)*(uint *)(puVar50 + 8);
    pbVar20 = _UNK_143607960;
code_r0x000142980c80:
    *(int *)(pbVar20 + (longlong)pbVar30) = (int)piVar18;
    *(undefined8 *)(pbVar20 + 0x18 + (longlong)pbVar30) = puVar50[9];
    pbVar35 = pbVar35 + 1;
  case (byte *)0x142980c90:
    _UNK_143607978 = _UNK_143607978 + 1;
    _UNK_143607968 = pbVar35;
LAB_142980ca0:
    do {
      do {
        if ((pbVar60 == (byte *)0x0) || (pbVar60 == pbVar22)) {
          if ((pbVar61 == (byte *)0x0) || (pbVar61 == param_4)) {
            if (*(char *)((longlong)puVar50 + 0x5f) != '\0') {
              *(undefined8 *)((longlong)ppiVar39 + -8) = 0x142980ddc;
              plVar46 = (longlong *)pdb_140e97000();
              if ((char)plVar46[0xd] != '\x01') {
                *(undefined8 *)((longlong)ppiVar39 + -8) = 0x142980e47;
                plVar46 = (longlong *)pdb_142dcf3a0(plVar46,0);
                if (plVar46 == (longlong *)0x0) {
LAB_142980e4c:
                  *(undefined8 *)((longlong)ppiVar39 + -8) = 0x142980e58;
                  pdb_142dc7890(&UNK_1432a7ee8);
                  *(undefined **)((longlong)ppiVar39 + 0x20) = &UNK_1436076a0;
                  *(undefined8 *)((longlong)ppiVar39 + -8) = 0x142980e7b;
                  pdb_142dc8070(&UNK_143607848,0x2c);
                  *(undefined **)((longlong)ppiVar39 + 0x20) = &UNK_1436076c0;
                  *(undefined8 *)((longlong)ppiVar39 + -8) = 0x142980e9b;
                  pdb_142dc8070(&UNK_1436074c9,0x22,0);
                  *(undefined **)((longlong)ppiVar39 + 0x20) = &UNK_1436076d8;
                  *(undefined8 *)((longlong)ppiVar39 + -8) = 0x142980ebe;
                  pdb_142dc8070(&UNK_1436074c9,0x22);
                  pcVar7 = (code *)swi(3);
                  pbVar61 = (byte *)(*pcVar7)();
                  return pbVar61;
                }
              }
              if (*plVar46 != 0) {
                do {
                  *(undefined8 *)((longlong)ppiVar39 + -8) = 0x142980e28;
                  uVar21 = pdb_142dc8090(&UNK_1432a7f58);
                  *(undefined8 *)((longlong)ppiVar39 + -8) = 0x142980e32;
                  plVar46 = (longlong *)pdb_142dcf3a0(uVar21,0);
                  if (plVar46 == (longlong *)0x0) goto LAB_142980e4c;
                } while (*plVar46 != 0);
                *plVar46 = -1;
                *(byte **)((longlong)ppiVar39 + 0x20) = pbVar26;
                *(undefined8 *)((longlong)ppiVar39 + 0x30) = 0;
                *(undefined8 *)((longlong)ppiVar39 + 0x28) = 1;
                puVar50[10] = plVar46;
                *(undefined8 *)((longlong)ppiVar39 + -8) = 0x1429805fb;
                uVar21 = pdb_140e94f10(plVar46 + 1,puVar57,puVar52,param_4);
                *(longlong *)puVar50[10] = *(longlong *)puVar50[10] + 1;
                *puVar50 = uVar21;
                puVar50[-7] = uVar21;
                puVar50[-8] = 1;
                puVar52 = *(ulonglong **)pbVar22;
                lVar58 = *(longlong *)(pbVar22 + 8);
                uVar33 = *puVar52;
                uVar28 = 0;
                uVar56 = uVar33 - *(ulonglong *)(lVar58 + 0x18);
                if (uVar33 < *(ulonglong *)(lVar58 + 0x18)) {
                  uVar56 = uVar28;
                }
                uVar34 = uVar33 - *(ulonglong *)(lVar58 + 0x38);
                if (uVar33 < *(ulonglong *)(lVar58 + 0x38)) {
                  uVar34 = uVar28;
                }
                puVar63 = (undefined8 *)(uVar56 * 0x10 + *(longlong *)(lVar58 + 8));
                uVar33 = *(ulonglong *)(lVar58 + 0x10) - uVar56;
                if (*(ulonglong *)(lVar58 + 0x10) < uVar56) {
                  puVar63 = (undefined8 *)0x8;
                  uVar33 = uVar28;
                }
                puVar47 = (undefined8 *)(uVar34 * 0x10 + *(longlong *)(lVar58 + 0x28));
                uVar56 = *(ulonglong *)(lVar58 + 0x30) - uVar34;
                if (*(ulonglong *)(lVar58 + 0x30) < uVar34) {
                  puVar47 = (undefined8 *)0x8;
                  uVar56 = uVar28;
                }
                puVar29 = (undefined8 *)puVar50[0x1a];
                *puVar52 = (*(longlong *)(lVar58 + 0x40) - uVar56) - uVar33;
                puVar50[9] = puVar63 + uVar33 * 2;
                puVar50[8] = puVar47 + uVar56 * 2;
                puVar50[6] = *puVar29;
                puVar50[10] = puVar29[1];
                *(undefined4 *)(puVar50 + 0xb) = *(undefined4 *)(pbVar60 + 0x1c);
                puVar57 = *(undefined **)pbVar60;
                puVar50[7] = *(undefined8 *)(pbVar60 + 0x10);
                do {
                  if ((puVar63 == (undefined8 *)0x0) || (puVar63 == (undefined8 *)puVar50[9])) {
                    if ((puVar47 == (undefined8 *)0x0) || (puVar47 == (undefined8 *)puVar50[8]))
                    goto LAB_1429807e3;
                    puVar48 = puVar47 + 2;
                    puVar29 = (undefined8 *)0x0;
                  }
                  else {
                    puVar29 = puVar63 + 2;
                    puVar48 = puVar47;
                    puVar47 = puVar63;
                  }
                  *puVar52 = *puVar52 + 1;
                  uVar33 = (ulonglong)~(uint)*puVar47;
                  if (((uVar33 < *(ulonglong *)(puVar50[10] + 0x10)) &&
                      (piVar18 = (int *)(uVar33 * 0x18 + *(longlong *)(puVar50[10] + 8)),
                      piVar18[4] == (int)((ulonglong)*puVar47 >> 0x20))) && (*piVar18 != 0)) {
                    uVar15 = piVar18[2];
                    if ((*(ulonglong *)(puVar50[6] + 0x38) <= (ulonglong)uVar15) ||
                       ((*(ulonglong *)
                          (*(longlong *)(puVar50[6] + 0x28) + (ulonglong)(uVar15 >> 6) * 8) >>
                         ((ulonglong)uVar15 & 0x3f) & 1) == 0)) goto LAB_1429807b0;
                    *(undefined4 *)puVar50[7] = *(undefined4 *)(puVar50 + 0xb);
                    lVar58 = *(longlong *)(puVar57 + 0x30);
                    uVar21 = *(undefined8 *)(puVar57 + 0x40);
                    uVar49 = 0xb;
                    if (lVar58 == *(longlong *)(puVar57 + 0x20)) {
                      *(undefined8 *)((longlong)ppiVar39 + -8) = 0x1429807a2;
                      pdb_142d7e6e0(puVar57 + 0x20);
                    }
                  }
                  else {
LAB_1429807b0:
                    *(undefined4 *)puVar50[7] = *(undefined4 *)(puVar50 + 0xb);
                    lVar58 = *(longlong *)(puVar57 + 0x30);
                    uVar21 = *(undefined8 *)(puVar57 + 0x40);
                    uVar49 = 0x13;
                    if (lVar58 == *(longlong *)(puVar57 + 0x20)) {
                      *(undefined8 *)((longlong)ppiVar39 + -8) = 0x1429807dd;
                      pdb_142d7e6e0(puVar57 + 0x20);
                    }
                  }
                  lVar51 = *(longlong *)(puVar57 + 0x28);
                  *(undefined4 *)(lVar51 + lVar58 * 0x20) = uVar49;
                  *(undefined8 *)(lVar51 + 0x18 + lVar58 * 0x20) = uVar21;
                  *(longlong *)(puVar57 + 0x30) = lVar58 + 1;
                  *(longlong *)(puVar57 + 0x40) = *(longlong *)(puVar57 + 0x40) + 1;
                  puVar47 = puVar48;
                  puVar63 = puVar29;
                } while( true );
              }
              *plVar46 = -1;
              uVar21 = *puVar50;
              puVar50[10] = plVar46;
              *(undefined8 *)((longlong)ppiVar39 + -8) = 0x142980e00;
              pdb_140e95370(plVar46 + 1,uVar21);
              pbVar20 = (byte *)puVar50[10];
              *(longlong *)pbVar20 = *(longlong *)pbVar20 + 1;
            }
            return pbVar20;
          }
          pbVar35 = (byte *)0x0;
          pbVar20 = pbVar61;
          pbVar61 = pbVar61 + 0x18;
        }
        else {
          pbVar35 = pbVar60 + 0x18;
          pbVar20 = pbVar60;
        }
        *puVar52 = *puVar52 + 1;
        uVar33 = (ulonglong)~(uint)*(undefined8 *)(pbVar20 + 8);
        pbVar60 = pbVar35;
      } while (((*(ulonglong *)(pbVar26 + 0x10) <= uVar33) ||
               (piVar18 = (int *)(uVar33 * 0x18 + *(longlong *)(pbVar26 + 8)),
               piVar18[4] != (int)((ulonglong)*(undefined8 *)(pbVar20 + 8) >> 0x20))) ||
              (*piVar18 == 0));
      uVar15 = piVar18[2];
    } while ((*(ulonglong *)(puVar50[5] + 0x38) <= (ulonglong)uVar15) ||
            ((*(ulonglong *)(*(longlong *)(puVar50[5] + 0x28) + (ulonglong)(uVar15 >> 6) * 8) >>
              ((ulonglong)uVar15 & 0x3f) & 1) == 0));
    pbVar20 = (byte *)(ulonglong)pbVar20[0x10];
code_r0x000142980d37:
    bVar37 = (byte)pbVar20 - 2;
    if ((byte)pbVar20 < 2) {
      bVar37 = 3;
    }
    pbVar20 = (byte *)(ulonglong)bVar37;
    goto code_r0x000142980d47;
  case (byte *)0x143607948:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case (byte *)0x143607950:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar14 = (byte)pbVar20;
  *pbVar20 = *pbVar20 + bVar14;
  *pbVar20 = *pbVar20 + bVar14;
  *pbVar20 = *pbVar20 + bVar14;
  *pbVar20 = *pbVar20 + bVar14;
  *pbVar20 = *pbVar20 & bVar14;
  *pbVar20 = *pbVar20 + bVar14;
  *pbVar20 = *pbVar20 + bVar14;
  *pbVar20 = *pbVar20 + bVar14;
  *pbVar20 = *pbVar20 | bVar14;
  *pbVar20 = *pbVar20 + bVar14;
  *pbVar20 = *pbVar20 + bVar14;
  *pbVar20 = *pbVar20 + bVar14;
  cVar13 = (char)pbVar35;
  UNK_143607948 = UNK_143607948 + cVar13;
  uVar15 = (uint)(short)pbVar20;
  pbVar22 = (byte *)(ulonglong)uVar15;
  *(uint *)pbVar22 = *(int *)pbVar22 + uVar15;
  *pbVar22 = *pbVar22 + bVar14;
  uVar41 = (ulonglong)_UNK_1436079b4;
  pcVar53 = (char *)((longlong)puVar52 + 1);
  uVar31 = SUB82(pbVar35,0);
  uVar2 = in(uVar31);
  *(undefined1 *)puVar52 = uVar2;
  bVar25 = (byte)((ulonglong)pbVar20 >> 8);
  pbVar22[in_FS_OFFSET + 0x52] = pbVar22[in_FS_OFFSET + 0x52] & bVar25;
  *pbVar22 = *pbVar22 + bVar14;
  *pbVar22 = *pbVar22 + bVar14;
  *pbVar22 = *pbVar22 + bVar14;
  *pbVar22 = *pbVar22 + 0x48;
  *pbVar22 = *pbVar22 + bVar14;
  *pbVar22 = *pbVar22 + bVar14;
  *pbVar22 = *pbVar22 + bVar14;
  *pbVar22 = *pbVar22 + 0x48;
  *pbVar22 = *pbVar22 + bVar14;
  *pbVar22 = *pbVar22 + bVar14;
  *pbVar22 = *pbVar22 + bVar14;
  pbVar22[0x140090b] = pbVar22[0x140090b] + cVar13;
  *pbVar22 = *pbVar22 + bVar14;
  *pbVar22 = *pbVar22 + bVar14;
  *pbVar22 = *pbVar22 + bVar14;
  *pbVar22 = *pbVar22 + bVar14;
  *pbVar22 = *pbVar22 + bVar14;
  *pbVar22 = *pbVar22 + 0x48;
  *pbVar22 = *pbVar22 + bVar14;
  *pbVar22 = *pbVar22 + bVar14;
  *pbVar22 = *pbVar22 + bVar14;
  *pbVar22 = *pbVar22 + 0x48;
  *pbVar22 = *pbVar22 + bVar14;
  *pbVar22 = *pbVar22 + bVar14;
  *pbVar22 = *pbVar22 + bVar14;
  bVar37 = *pbVar22;
  *pbVar22 = *pbVar22 + bVar14;
  if (CARRY1(bVar37,bVar14) || *pbVar22 == 0) {
    *pbVar22 = *pbVar22 + bVar14;
    *pbVar22 = *pbVar22 + bVar14;
    *pbVar22 = *pbVar22 + bVar14;
    *pbVar22 = *pbVar22 + bVar14;
    *pbVar22 = *pbVar22 | bVar14;
    *pbVar22 = *pbVar22 + bVar14;
    *pbVar22 = *pbVar22 + bVar14;
    *pbVar22 = *pbVar22 + bVar14;
    *pbVar22 = *pbVar22 | bVar14;
    *pbVar22 = *pbVar22 + bVar14;
    *pbVar22 = *pbVar22 + bVar14;
    *pbVar22 = *pbVar22 + bVar14;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)pbVar22 = *(int *)pbVar22 + uVar15;
  bVar64 = CARRY1(*pbVar22,bVar14);
  bVar37 = *pbVar22;
  *pbVar22 = *pbVar22 + bVar14;
  bVar1 = *pbVar22;
  bVar65 = *pbVar22 == 0;
  puVar42 = (undefined1 *)(uVar41 - 8);
  *(undefined8 *)(uVar41 - 8) = 0x49646c69;
  pbVar60 = pbVar26 + 1;
  out(*pbVar26,uVar31);
  uVar8 = (uint3)(char)bVar25;
  if ((char)bVar1 < '\0') {
    if (!bVar64 && !bVar65) {
      cVar38 = in(uVar31);
      *pcVar53 = cVar38;
      out(*(undefined4 *)pbVar60,uVar31);
      out(pbVar26[5],uVar31);
      if ((longlong)(int)((longlong)*(int *)(pbVar22 + (longlong)pbVar35 * 2 + 0x61) * 0x746e6572)
          != (longlong)*(int *)(pbVar22 + (longlong)pbVar35 * 2 + 0x61) * 0x746e6572 || bVar65)
      goto code_r0x000143607b16;
      uVar2 = in(uVar31);
      *(undefined1 *)((longlong)puVar52 + 2) = uVar2;
      out(*(undefined4 *)(pbVar26 + 6),uVar31);
      pbVar20 = pbVar26 + 0xb;
      out(pbVar26[10],uVar31);
      if ((longlong)(int)((longlong)*(int *)(pbVar61 + (longlong)pbVar22 * 2 + 0x68) * 0x4e646c69)
          != (longlong)*(int *)(pbVar61 + (longlong)pbVar22 * 2 + 0x68) * 0x4e646c69 || bVar65) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      pcVar53 = (char *)((longlong)puVar52 + 4);
      uVar2 = in(uVar31);
      *(undefined1 *)((longlong)puVar52 + 3) = uVar2;
      uVar33 = (longlong)iRam00000003ca216c46 * 0x4e747570;
      puVar42 = (undefined1 *)(uVar33 & 0xffffffff);
      bVar64 = (longlong)(int)uVar33 != uVar33;
      goto code_r0x000143607ace;
    }
    *pbVar22 = *pbVar22 + bVar14;
code_r0x000143607b07:
    *pbVar35 = *pbVar35 + 0x79;
    *pbVar22 = *pbVar22 + bVar14;
    *pbVar22 = *pbVar22 + bVar14;
    *pbVar22 = *pbVar22 + bVar14;
  }
  else {
    if (bVar65) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pbVar20 = pbVar26 + 2;
    out(*pbVar60,uVar31);
    puVar43 = (undefined1 *)(uVar41 - 8);
    if (SCARRY1(bVar37,bVar14)) goto code_r0x000143607b41;
code_r0x000143607ace:
    out(*(undefined4 *)pbVar20,uVar31);
    pbVar20 = (byte *)(ulonglong)*(uint *)(pbVar35 + unaff_GS_OFFSET + 0x61);
    if (bVar65) {
      *pbVar22 = *pbVar22 + bVar14;
      *pbVar22 = *pbVar22 + bVar14;
      *pbVar22 = *pbVar22 + bVar14;
      puVar43 = puVar42;
code_r0x000143607b41:
      *pbVar22 = *pbVar22 + bVar25;
      *pbVar22 = *pbVar22 + bVar14;
      cVar10 = cRam0000000000000042;
      pcVar23 = (char *)(ulonglong)CONCAT31(uVar8,cRam0000000000000042);
      *pcVar53 = *pcVar53 + 'y';
      cVar38 = *pcVar53;
      *(undefined8 *)(puVar43 + -8) = 0x2f656d6f;
      *(undefined8 *)(puVar43 + -0x10) = 0x722e2f33;
      if (cVar38 != '\0') {
        *pcVar23 = *pcVar23 + cVar10;
        pcVar23[0x7b] = pcVar23[0x7b] + cVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      cVar38 = (char)((ulonglong)pbVar61 >> 8);
      puVar24 = (uint *)((ulonglong)pcVar23 & 0xffffffffffffff00);
      *(char *)puVar24 = (char)*puVar24;
      uVar15 = *puVar24;
      *(uint **)(puVar43 + -0x18) = puVar24;
      bVar37 = (byte)((ulonglong)puVar24 >> 8);
      if ((POPCOUNT((char)uVar15) & 1U) == 0) {
        *piVar18 = *piVar18 + (int)puVar24;
        *(char *)puVar24 = (char)*puVar24;
        pbVar26 = pbVar20 + 1;
        out(*pbVar20,uVar31);
        *(char *)puVar24 = (char)*puVar24;
        *(char *)puVar24 = (char)*puVar24;
        *(char *)puVar24 = (char)*puVar24;
        pbVar26[(longlong)puVar24] = pbVar26[(longlong)puVar24] + cVar38;
        *(char *)puVar24 = (char)*puVar24;
        puVar24 = (uint *)((ulonglong)uVar8 * 0x100);
        *(char *)puVar24 = (char)*puVar24;
        uVar15 = *puVar24;
        *(uint **)(puVar43 + -0x20) = puVar24;
        pcVar23 = pcVar53;
        if ((POPCOUNT((char)uVar15) & 1U) == 0) {
          uVar16 = (uint)puVar24;
          *piVar18 = *piVar18 + uVar16;
          *(char *)puVar24 = (char)*puVar24;
          pbVar61 = pbVar20 + 2;
          out(*pbVar26,uVar31);
          *(char *)puVar24 = (char)*puVar24;
          *(char *)puVar24 = (char)*puVar24;
          *(char *)puVar24 = (char)*puVar24;
          pbVar61[(longlong)puVar24] = pbVar61[(longlong)puVar24] + cVar38;
          *(char *)puVar24 = (char)*puVar24;
          *puVar24 = *puVar24 & uVar16;
          *(char *)puVar24 = (char)*puVar24;
          uVar15 = *puVar24;
          *(uint **)(puVar43 + -0x28) = puVar24;
          if ((POPCOUNT((char)uVar15) & 1U) == 0) {
            *piVar18 = *piVar18 + uVar16;
            *(char *)puVar24 = (char)*puVar24;
            out(*pbVar61,uVar31);
            *(char *)puVar24 = (char)*puVar24;
            *(char *)puVar24 = (char)*puVar24;
            *(char *)puVar24 = (char)*puVar24;
            *(char *)puVar24 = (char)*puVar24 + (char)((ulonglong)pbVar35 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          puVar24[8] = puVar24[8] - (int)(puVar43 + -0x28);
          out(*(undefined4 *)pbVar61,uVar31);
          out(pbVar20[6],uVar31);
                    /* WARNING: Ignoring partial resolution of indirect */
          UNK_1436079b6 = UNK_1436079b6 & bVar37;
          *(byte *)((longlong)puVar24 + 0x45) = *(byte *)((longlong)puVar24 + 0x45) & bVar37;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else {
        *(char *)puVar24 = (char)*puVar24;
        *(char *)puVar24 = (char)*puVar24;
        *(byte *)puVar24 = (char)*puVar24 + bVar37;
        *(char *)puVar24 = (char)*puVar24;
        *(char *)puVar24 = (char)*puVar24;
        *(char *)puVar24 = (char)*puVar24;
        *(char *)puVar24 = (char)*puVar24 + 'H';
        *(char *)puVar24 = (char)*puVar24;
        *(char *)puVar24 = (char)*puVar24;
        *(char *)puVar24 = (char)*puVar24;
        *(char *)((longlong)puVar24 + 0x142981f) = *(char *)((longlong)puVar24 + 0x142981f) + cVar13
        ;
        *(char *)puVar24 = (char)*puVar24;
        pbVar61[0x61] = pbVar61[0x61] + bVar37;
        pcVar23 = pcVar53 + 1;
        cVar38 = in(uVar31);
        *pcVar53 = cVar38;
        pbVar26 = pbVar20;
                    /* WARNING: Bad instruction - Truncating control flow here */
      }
      iVar17 = (int)puVar24;
      *puVar24 = *puVar24 + iVar17;
      *(char *)puVar24 = (char)*puVar24;
      uVar44 = (ulonglong)_UNK_1436079b4;
      pbVar60 = (byte *)(pcVar23 + 1);
      cVar38 = in(uVar31);
      *pcVar23 = cVar38;
      pbVar22 = (byte *)((longlong)puVar24 + in_FS_OFFSET + 0x52);
      *pbVar22 = *pbVar22 & (byte)((ulonglong)puVar24 >> 8);
      *(char *)puVar24 = (char)*puVar24;
      *(char *)puVar24 = (char)*puVar24;
      *(char *)puVar24 = (char)*puVar24;
      *(char *)puVar24 = (char)*puVar24 + 'H';
      *(char *)puVar24 = (char)*puVar24;
      *(char *)puVar24 = (char)*puVar24;
      *(char *)puVar24 = (char)*puVar24;
      *(char *)puVar24 = (char)*puVar24 + 'H';
      *(char *)puVar24 = (char)*puVar24;
      *(char *)puVar24 = (char)*puVar24;
      *(char *)puVar24 = (char)*puVar24;
      *(char *)((longlong)puVar24 + 0x140090b) = *(char *)((longlong)puVar24 + 0x140090b) + cVar13;
      *(char *)puVar24 = (char)*puVar24;
      *(char *)puVar24 = (char)*puVar24;
      *(char *)puVar24 = (char)*puVar24;
      *(char *)puVar24 = (char)*puVar24;
      *(char *)puVar24 = (char)*puVar24;
      *(char *)puVar24 = (char)*puVar24 + 'H';
      *(char *)puVar24 = (char)*puVar24;
      *(char *)puVar24 = (char)*puVar24;
      *(char *)puVar24 = (char)*puVar24;
      *(char *)puVar24 = (char)*puVar24 + 'H';
      *(char *)puVar24 = (char)*puVar24;
      *(char *)puVar24 = (char)*puVar24;
      *(char *)puVar24 = (char)*puVar24;
      *(char *)puVar24 = (char)*puVar24;
      if ((char)*puVar24 == '\0') {
        *(char *)puVar24 = (char)*puVar24;
        *(char *)puVar24 = (char)*puVar24;
        *(char *)puVar24 = (char)*puVar24;
        *(char *)puVar24 = (char)*puVar24;
        *(char *)puVar24 = (char)*puVar24;
        *(char *)puVar24 = (char)*puVar24;
        *(char *)puVar24 = (char)*puVar24;
        *(char *)puVar24 = (char)*puVar24;
        *(char *)puVar24 = (char)*puVar24;
        *(char *)puVar24 = (char)*puVar24;
        *(char *)puVar24 = (char)*puVar24;
        *(char *)puVar24 = (char)*puVar24;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *puVar24 = *puVar24 + iVar17;
      *(char *)puVar24 = (char)*puVar24;
      uVar15 = *puVar24;
      bVar64 = (char)*puVar24 == '\0';
      *(undefined8 *)(uVar44 - 8) = 0x49646c69;
      pbVar22 = pbVar26 + 1;
      out(*pbVar26,uVar31);
      if ((char)uVar15 < '\0') {
        if (bVar64) {
          *(uint **)(uVar44 - 0x10) = puVar24;
          if (*pbVar60 <= *pbVar22) {
            *puVar24 = *puVar24 + iVar17;
            *(char *)puVar24 = (char)*puVar24;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        bVar37 = in(uVar31);
        *pbVar60 = bVar37;
        uVar33 = (longlong)*(int *)((longlong)puVar24 + (longlong)pbVar35 * 2 + 0x61) * 0x746e6572;
        out(*(undefined4 *)pbVar22,uVar31);
        out(pbVar26[5],uVar31);
        if ((longlong)(int)uVar33 != uVar33) {
          *(undefined8 *)((uVar33 & 0xffffffff) - 8) = 0x632e2f33;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        cVar13 = in(uVar31);
        pcVar23[2] = cVar13;
        out(*(undefined4 *)(pbVar26 + 6),uVar31);
        pbVar35 = pbVar26 + 0xb;
        out(pbVar26[10],uVar31);
        if ((longlong)(int)((longlong)*(int *)(pbVar61 + (longlong)puVar24 * 2 + 0x68) * 0x4e646c69)
            != (longlong)*(int *)(pbVar61 + (longlong)puVar24 * 2 + 0x68) * 0x4e646c69) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        pbVar60 = (byte *)(pcVar23 + 4);
        cVar13 = in(uVar31);
        pcVar23[3] = cVar13;
      }
      else {
        if (bVar64) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        pbVar35 = pbVar26 + 2;
        out(*pbVar22,uVar31);
      }
      out(*(undefined4 *)pbVar35,uVar31);
      if (bVar64) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      out(*(undefined4 *)(pbVar35 + 4),uVar31);
      bVar37 = in(uVar31);
      *pbVar60 = bVar37;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    pbVar60 = pbVar20;
    if (!bVar64) goto code_r0x000143607b07;
    if (!bVar64) {
      uVar49 = in(uVar31);
      *(undefined4 *)pcVar53 = uVar49;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (!bVar64) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar49 = in(uVar31);
    *(undefined4 *)pcVar53 = uVar49;
    if (bVar64) {
      out(*(undefined4 *)pbVar20,uVar31);
      cVar13 = in(uVar31);
      pcVar53[4] = cVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  *pbVar60 = *pbVar60 + 0x48;
  *pbVar22 = *pbVar22 + bVar14;
  pbVar22 = (byte *)(ulonglong)CONCAT31(uVar8,bVar14);
code_r0x000143607b16:
  *pbVar22 = *pbVar22 + (char)pbVar22;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
LAB_14297a1e4:
  do {
    if ((*(int *)(lVar51 + 0x14 + lVar27) == iVar17) && (*(int *)(lVar51 + 0x10 + lVar27) == iVar59)
       ) {
      bVar37 = *(byte *)(lVar51 + 0x24 + lVar27);
      piVar18 = (int *)(ulonglong)bVar37;
      if (bVar37 != 4) {
        uVar15 = *(uint *)(lVar51 + 0x18 + lVar27);
        pbVar35 = (byte *)(ulonglong)uVar15;
        *(uint *)(puVar50 + 0x36) = uVar15;
        pbVar22 = (byte *)(ulonglong)*(uint *)(lVar51 + 0x1c + lVar27);
        pbVar20 = (byte *)(ulonglong)(uint)bVar37;
        goto code_r0x00014297a210;
      }
    }
    lVar27 = lVar27 + 0x28;
  } while (lVar58 * 0x28 != lVar27);
LAB_14297a55e:
  piStack_2d0 = (int *)0x14297a56a;
  pdb_1400db1d0(puVar50 + 0x2a);
  *(undefined1 *)((longlong)puVar50 + 0x1c6) = 0;
  piStack_2d0 = (int *)0x14297a57b;
  pdb_1400d9880(puVar50 + -4);
  *(undefined1 *)((longlong)puVar50 + 0x1c7) = 0;
  piStack_2d0 = (int *)0x14297a58c;
  pdb_1400d9880(puVar50 + -10);
  param_5 = (longlong *)puVar50[0x4e];
LAB_14297a594:
  *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
  pbVar61 = (byte *)*param_5;
  pbVar61[0x10] = 1;
  pbVar61[0x11] = 0;
  pbVar61[0x12] = 0;
  pbVar61[0x13] = 0;
  pbVar61[0x14] = 0;
  pbVar61[0x15] = 0;
  pbVar61[0x16] = 0;
  pbVar61[0x17] = 0;
  *(undefined8 *)(pbVar61 + 0x18) = puVar50[0x1e];
  return pbVar61;
}

