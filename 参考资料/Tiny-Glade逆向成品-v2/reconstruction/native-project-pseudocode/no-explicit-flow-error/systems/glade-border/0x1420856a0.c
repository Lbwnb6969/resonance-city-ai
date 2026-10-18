// VA 0x1420856a0, PDB extent 1485 bytes
// system_glade_border::display_glade_border::display_glade_border
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/glade-border/src/display_glade_border.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_glade_border::display_glade_border::display_glade_border
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/glade-border/src/display_glade_border.rs
   Extent: 1485 */

void pdb_1420856a0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  longlong *param_5,undefined8 *param_6,longlong *param_7,longlong *param_8)

{
  undefined8 uVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  code *pcVar7;
  ulonglong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  byte *pbStack_d0;
  longlong lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  byte *pbStack_98;
  longlong lStack_90;
  byte *pbStack_88;
  ulonglong uStack_80;
  byte *pbStack_78;
  ulonglong uStack_70;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  if (*(char *)*param_1 != '\x10') {
    uVar1 = *param_2;
    pdb_140a85190(&uStack_f0,uVar1);
    pbVar9 = (byte *)CONCAT44(uStack_e4,uStack_e8);
    uStack_b0 = (code *)(pbVar9 + CONCAT44(uStack_dc,uStack_e0) * 8);
    uStack_a8 = param_4;
    pdb_142089950(&lStack_90,&lStack_b8);
    if (CONCAT44(uStack_ec,uStack_f0) != 0) {
      pub_1406abac0(pbVar9,CONCAT44(uStack_ec,uStack_f0) << 3,4);
    }
    if (CONCAT44(uStack_d4,uStack_d8) != 0) {
      pub_1406abac0(pbStack_d0,CONCAT44(uStack_d4,uStack_d8) << 2,4);
    }
    uVar8 = uStack_80;
    pbVar9 = pbStack_88;
    puVar2 = (ulonglong *)*param_6;
    lVar3 = param_6[1];
    uVar4 = *puVar2;
    uVar12 = 0;
    uVar13 = uVar4 - *(ulonglong *)(lVar3 + 0x18);
    if (uVar4 < *(ulonglong *)(lVar3 + 0x18)) {
      uVar13 = uVar12;
    }
    uVar11 = uVar4 - *(ulonglong *)(lVar3 + 0x38);
    if (uVar4 < *(ulonglong *)(lVar3 + 0x38)) {
      uVar11 = uVar12;
    }
    uVar4 = *(ulonglong *)(lVar3 + 0x30);
    uVar14 = uVar4 - uVar11;
    if (uVar11 > uVar4) {
      uVar14 = uVar12;
    }
    uVar5 = *(ulonglong *)(lVar3 + 0x10);
    uVar15 = uVar5 - uVar13;
    if (uVar13 > uVar5) {
      uVar15 = uVar12;
    }
    uVar12 = *(ulonglong *)(lVar3 + 0x40);
    *puVar2 = uVar12 - (uVar15 + uVar14);
    if (uVar13 <= uVar5 && uVar5 - uVar13 != 0 || uVar11 <= uVar4 && uVar4 - uVar11 != 0) {
      *puVar2 = uVar12;
      uVar4 = uStack_80 * 0xc;
      if (0xaaaaaaaaaaaaaaa < uStack_80) {
        uVar16 = 0;
LAB_142085817:
        uStack_61 = 1;
        pdb_142dc7e2a(uVar16,uVar4);
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      }
      if (uVar4 == 0) {
        pbVar10 = (byte *)0x4;
        uVar13 = 0;
      }
      else {
        pdb_14007ee60();
        uVar16 = 4;
        pbVar10 = pub_1406abab0(uVar4,4);
        uVar13 = uVar8;
        if (pbVar10 == (byte *)0x0) goto LAB_142085817;
      }
      if (uVar8 != 0) {
        pub_142e32760(pbVar10,pbVar9,uVar4);
      }
      uVar16 = *param_3;
      pdb_14007ee60();
      pbVar9 = pub_1406abab0(0x28,8);
      if (pbVar9 == (byte *)0x0) {
        pbStack_78 = pbVar10;
        uStack_70 = uVar13;
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x28);
      }
      pbVar9[0] = 1;
      pbVar9[1] = 0;
      pbVar9[2] = 0;
      pbVar9[3] = 0;
      pbVar9[4] = 0;
      pbVar9[5] = 0;
      pbVar9[6] = 0;
      pbVar9[7] = 0;
      pbVar9[8] = 1;
      pbVar9[9] = 0;
      pbVar9[10] = 0;
      pbVar9[0xb] = 0;
      pbVar9[0xc] = 0;
      pbVar9[0xd] = 0;
      pbVar9[0xe] = 0;
      pbVar9[0xf] = 0;
      *(ulonglong *)(pbVar9 + 0x10) = uVar13;
      *(byte **)(pbVar9 + 0x18) = pbVar10;
      *(ulonglong *)(pbVar9 + 0x20) = uVar8;
      uStack_61 = 1;
      pdb_1409baea0(&uStack_f0,&UNK_14344eec0,0x10,pbVar9,&UNK_14344ee90);
      pbStack_98 = pbStack_d0;
      uStack_a8 = CONCAT44(uStack_dc,uStack_e0);
      uStack_a0 = uStack_d8;
      uStack_9c = uStack_d4;
      uStack_b0 = (code *)CONCAT44(uStack_e4,uStack_e8);
      uStack_61 = 1;
      pdb_140b133a0(uVar16,&lStack_b8);
      if (*_DAT_143ca4500 == '\x01') {
        *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
        lVar3 = *param_7;
        lVar6 = *(longlong *)(lVar3 + 0x30);
        uVar16 = *(undefined8 *)(lVar3 + 0x40);
        if (lVar6 == *(longlong *)(lVar3 + 0x20)) {
          uStack_61 = 1;
          pdb_142d7e8a0(lVar3 + 0x20);
        }
        *(undefined8 *)(*(longlong *)(lVar3 + 0x28) + lVar6 * 8) = uVar16;
        *(longlong *)(lVar3 + 0x30) = lVar6 + 1;
        *(longlong *)(lVar3 + 0x40) = *(longlong *)(lVar3 + 0x40) + 1;
      }
    }
    if (*(char *)(*param_8 + 0x122) == '\x01') {
      if (lStack_90 != 0) {
        pub_1406abac0(pbStack_88,lStack_90 * 0xc,4);
      }
    }
    else {
      uStack_61 = 1;
      uVar17 = pdb_140a85220(uVar1);
      uVar1 = *param_3;
      lStack_b8 = *param_5 + 0x2c;
      uStack_b0 = pdb_140f71a50;
      uStack_61 = 1;
      pdb_140f60760(&uStack_f0,&UNK_14344eed0,&lStack_b8);
      uStack_70 = CONCAT44(uStack_ec,uStack_f0);
      pdb_14007ee60();
      pbVar9 = pub_1406abab0(0x30,8);
      if (pbVar9 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x30);
      }
      pbVar9[0] = 1;
      pbVar9[1] = 0;
      pbVar9[2] = 0;
      pbVar9[3] = 0;
      pbVar9[4] = 0;
      pbVar9[5] = 0;
      pbVar9[6] = 0;
      pbVar9[7] = 0;
      pbVar9[8] = 1;
      pbVar9[9] = 0;
      pbVar9[10] = 0;
      pbVar9[0xb] = 0;
      pbVar9[0xc] = 0;
      pbVar9[0xd] = 0;
      pbVar9[0xe] = 0;
      pbVar9[0xf] = 0;
      *(longlong *)(pbVar9 + 0x10) = lStack_90;
      *(byte **)(pbVar9 + 0x18) = pbStack_88;
      *(ulonglong *)(pbVar9 + 0x20) = uStack_80;
      *(undefined4 *)(pbVar9 + 0x28) = uVar17;
      pbStack_78 = (byte *)CONCAT44(uStack_e4,uStack_e8);
      pdb_1409baea0(&uStack_f0,(byte *)CONCAT44(uStack_e4,uStack_e8),CONCAT44(uStack_dc,uStack_e0),
                    pbVar9,&UNK_14344eee0);
      pbStack_98 = pbStack_d0;
      uStack_a0 = uStack_d8;
      uStack_9c = uStack_d4;
      pdb_140b133a0(uVar1,&lStack_b8);
      if (uStack_70 != 0) {
        pub_1406abac0(pbStack_78,uStack_70,1);
      }
    }
  }
  return;
}

