// VA 0x142126c30, PDB extent 1399 bytes
// system_color::style_picker::prepare_style_picker
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/style_picker.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_color::style_picker::prepare_style_picker
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/style_picker.rs
   Extent: 1399 */

void pdb_142126c30(undefined8 *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 param_8,
                  longlong *param_9)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  byte *pbVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  char *pcVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  char *pcVar20;
  char *pcVar21;
  char *pcVar22;
  char *pcVar23;
  char *pcVar24;
  ulonglong uVar25;
  bool bVar26;
  bool bVar27;
  longlong lStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong lStack_88;
  longlong *plStack_80;
  uint uStack_74;
  undefined4 *puStack_70;
  uint *puStack_68;
  undefined1 *puStack_60;
  longlong *plStack_58;
  undefined4 uStack_50;
  char cStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x1c);
  plVar4 = (longlong *)*param_5;
  puVar5 = (undefined4 *)param_5[2];
  *(undefined1 *)((longlong)plVar4 + 0x89) = 0;
  *puVar5 = uVar2;
  *(undefined1 *)((longlong)plVar4 + 0x8a) = 0;
  lVar6 = param_4[1];
  uVar19 = *(ulonglong *)*param_4;
  uVar25 = 0;
  uVar17 = uVar19 - *(ulonglong *)(lVar6 + 0x18);
  if (uVar19 < *(ulonglong *)(lVar6 + 0x18)) {
    uVar17 = uVar25;
  }
  uVar14 = uVar19 - *(ulonglong *)(lVar6 + 0x38);
  if (uVar19 < *(ulonglong *)(lVar6 + 0x38)) {
    uVar14 = uVar25;
  }
  bVar26 = *(ulonglong *)(lVar6 + 0x30) < uVar14;
  uVar14 = *(ulonglong *)(lVar6 + 0x30) - uVar14;
  uVar19 = uVar14;
  if (bVar26) {
    uVar19 = uVar25;
  }
  bVar27 = *(ulonglong *)(lVar6 + 0x10) < uVar17;
  uVar17 = *(ulonglong *)(lVar6 + 0x10) - uVar17;
  uVar18 = uVar17;
  if (bVar27) {
    uVar18 = uVar25;
  }
  cStack_49 = (bVar27 || uVar17 == 0) && (bVar26 || uVar14 == 0);
  uVar19 = uVar18 + uVar19;
  if (!bVar27 && uVar17 != 0 || !bVar26 && uVar14 != 0) {
    uVar19 = uVar25;
  }
  *(ulonglong *)*param_4 = *(longlong *)(lVar6 + 0x40) - uVar19;
  puVar7 = (ulonglong *)*param_3;
  lVar6 = param_3[1];
  uVar19 = *puVar7;
  uVar17 = uVar19 - *(ulonglong *)(lVar6 + 0x18);
  if (uVar19 < *(ulonglong *)(lVar6 + 0x18)) {
    uVar17 = uVar25;
  }
  uVar14 = uVar19 - *(ulonglong *)(lVar6 + 0x38);
  if (uVar19 < *(ulonglong *)(lVar6 + 0x38)) {
    uVar14 = uVar25;
  }
  pcVar23 = (char *)(uVar17 * 0x38 + *(longlong *)(lVar6 + 8));
  pcVar20 = (char *)(uVar14 * 0x38 + *(longlong *)(lVar6 + 0x28));
  uVar19 = *(ulonglong *)(lVar6 + 0x10);
  uVar18 = uVar19 - uVar17;
  if (uVar19 < uVar17) {
    pcVar23 = (char *)0x8;
    uVar17 = uVar19;
    uVar18 = uVar25;
  }
  uVar8 = *(ulonglong *)(lVar6 + 0x30);
  uVar15 = uVar8 - uVar14;
  if (uVar8 < uVar14) {
    pcVar20 = (char *)0x8;
    uVar15 = uVar25;
  }
  lVar6 = *(longlong *)(lVar6 + 0x40);
  if (uVar8 < uVar14) {
    uVar14 = uVar8;
  }
  *puVar7 = (lVar6 - uVar15) - uVar18;
  uVar19 = ((uVar14 + lVar6 + uVar17) - uVar8) - uVar19;
  pcVar22 = pcVar20;
  pcVar24 = pcVar23;
  do {
    uVar19 = uVar19 + 1;
    puStack_70 = puVar5;
    plStack_58 = plVar4;
    uStack_50 = uVar2;
    if ((pcVar24 == (char *)0x0) || (pcVar24 == pcVar23 + uVar18 * 0x38)) {
      if ((pcVar22 == (char *)0x0) || (pcVar22 == pcVar20 + uVar15 * 0x38)) {
        pbVar9 = (byte *)*param_1;
        if (*pbVar9 != 10) {
          uVar3 = *(uint *)((longlong)param_7 + 0x1c);
          uVar19 = (ulonglong)uVar3;
          puStack_68 = (uint *)param_7[2];
          *puStack_68 = uVar3;
          puStack_60 = (undefined1 *)*param_7;
          cVar1 = puStack_60[1];
          puStack_60[1] = 0;
          *puVar5 = uVar2;
          *(char *)((longlong)plVar4 + 0x8a) = cVar1;
          if (cVar1 == '\x01') {
            *puVar5 = uVar2;
            lVar6 = *plVar4;
            *plVar4 = -0x8000000000000000;
            plStack_80 = param_2;
            if (!SBORROW8(0,lVar6)) {
              uStack_b8 = (undefined4)plVar4[1];
              uStack_b4 = *(undefined4 *)((longlong)plVar4 + 0xc);
              uStack_b0 = (undefined4)plVar4[2];
              uStack_ac = *(undefined4 *)((longlong)plVar4 + 0x14);
              uStack_a8 = (undefined4)plVar4[3];
              uStack_a4 = *(undefined4 *)((longlong)plVar4 + 0x1c);
              uStack_a0 = (undefined4)plVar4[4];
              uStack_9c = *(undefined4 *)((longlong)plVar4 + 0x24);
              uStack_98 = (undefined4)plVar4[5];
              uStack_94 = *(undefined4 *)((longlong)plVar4 + 0x2c);
              uStack_90 = (undefined4)plVar4[6];
              uStack_8c = *(undefined4 *)((longlong)plVar4 + 0x34);
              lStack_88 = plVar4[7];
              lStack_c0 = lVar6;
              uStack_74 = uVar3;
              pdb_142121690(param_8,&lStack_c0,CONCAT71((uint7)(uint3)(uVar3 >> 8),1));
              if (lVar6 != 0) {
                pub_1406abac0((byte *)CONCAT44(uStack_b4,uStack_b8),lVar6 << 5,8);
              }
              pdb_14109d800(&uStack_a8);
              uVar19 = (ulonglong)uStack_74;
            }
            *puVar5 = uVar2;
            *(undefined4 *)(plVar4 + 8) = 2;
            *puStack_68 = (uint)uVar19;
            *puStack_60 = 0;
            *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
            *(undefined1 *)*param_6 = 0;
            *(undefined4 *)param_9[2] = *(undefined4 *)((longlong)param_9 + 0x1c);
            lVar6 = *param_9;
            lVar10 = *(longlong *)(lVar6 + 0x30);
            uVar11 = *(undefined8 *)(lVar6 + 0x40);
            if (lVar10 == *(longlong *)(lVar6 + 0x20)) {
              pdb_142d7e6e0(lVar6 + 0x20);
            }
            lVar12 = *(longlong *)(lVar6 + 0x28);
            *(undefined4 *)(lVar12 + lVar10 * 0x20) = 0x11;
            *(undefined8 *)(lVar12 + 0x18 + lVar10 * 0x20) = uVar11;
            *(longlong *)(lVar6 + 0x30) = lVar10 + 1;
            *(longlong *)(lVar6 + 0x40) = *(longlong *)(lVar6 + 0x40) + 1;
            param_2 = plStack_80;
          }
          uVar2 = uStack_50;
          puVar5 = puStack_70;
          if ((((cStack_49 != '\0') && (*pbVar9 == 8)) && (*(char *)(*param_2 + 0x30) == '\x01')) &&
             (puVar13 = (undefined1 *)*param_6, puVar13[1] == '\0')) {
            lVar6 = plVar4[0x11];
            *puStack_70 = uStack_50;
            if ((char)lVar6 != '\0') {
              *(undefined1 *)(plVar4 + 0x11) = 0;
              *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
              *puVar13 = 0;
              return;
            }
            *(undefined1 *)((longlong)plVar4 + 0x89) = 1;
            return;
          }
          *puStack_70 = uStack_50;
          lVar6 = *plVar4;
          *plVar4 = -0x8000000000000000;
          if (!SBORROW8(0,lVar6)) {
            uStack_b8 = (undefined4)plVar4[1];
            uStack_b4 = *(undefined4 *)((longlong)plVar4 + 0xc);
            uStack_b0 = (undefined4)plVar4[2];
            uStack_ac = *(undefined4 *)((longlong)plVar4 + 0x14);
            uStack_a8 = (undefined4)plVar4[3];
            uStack_a4 = *(undefined4 *)((longlong)plVar4 + 0x1c);
            uStack_a0 = (undefined4)plVar4[4];
            uStack_9c = *(undefined4 *)((longlong)plVar4 + 0x24);
            uStack_98 = (undefined4)plVar4[5];
            uStack_94 = *(undefined4 *)((longlong)plVar4 + 0x2c);
            uStack_90 = (undefined4)plVar4[6];
            uStack_8c = *(undefined4 *)((longlong)plVar4 + 0x34);
            lStack_88 = plVar4[7];
            lStack_c0 = lVar6;
            pdb_142121690(param_8,&lStack_c0,CONCAT71((int7)(uVar19 >> 8),1));
            if (lVar6 != 0) {
              pub_1406abac0((byte *)CONCAT44(uStack_b4,uStack_b8),lVar6 << 5,8);
            }
            pdb_14109d800(&uStack_a8);
          }
          *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
          *(undefined1 *)*param_6 = 0;
          if ((*pbVar9 & 0x1e) == 8) {
            return;
          }
          *puVar5 = uVar2;
          *(undefined4 *)(plVar4 + 8) = 2;
          *puStack_68 = (uint)uVar19;
          *puStack_60 = 0;
          return;
        }
        goto LAB_142126dbe;
      }
      pcVar16 = (char *)0x0;
      pcVar21 = pcVar22 + 0x38;
      pcVar24 = pcVar22;
    }
    else {
      pcVar16 = pcVar24 + 0x38;
      pcVar21 = pcVar22;
    }
    *puVar7 = uVar19;
    cVar1 = *pcVar24;
    pcVar22 = pcVar21;
    pcVar24 = pcVar16;
    if (cVar1 == '\n') {
LAB_142126dbe:
      *puVar5 = uVar2;
      lVar6 = *plVar4;
      if (!SBORROW8(0,lVar6)) {
        if (lVar6 != 0) {
          pub_1406abac0((byte *)plVar4[1],lVar6 << 5,8);
        }
        pdb_14109d800(plVar4 + 3);
      }
      *plStack_58 = -0x8000000000000000;
      *(undefined4 *)(plStack_58 + 8) = 2;
      *(undefined2 *)(plStack_58 + 0x11) = 0;
      *(undefined1 *)((longlong)plStack_58 + 0x8a) = 0;
      *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
      *(undefined2 *)*param_7 = 0;
      *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
      *(undefined2 *)*param_6 = 0;
      return;
    }
  } while( true );
}

