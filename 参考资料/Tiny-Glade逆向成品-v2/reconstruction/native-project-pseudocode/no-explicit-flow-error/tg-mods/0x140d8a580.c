// VA 0x140d8a580, PDB extent 942 bytes
// tg_mods::overlay::impl$22::clone
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_mods::overlay::impl$22::clone
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/overlay.rs
   Extent: 942 */

void pdb_140d8a580(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  ulonglong arg0;
  code *pcVar4;
  byte *pbVar5;
  ulonglong arg0_00;
  undefined1 uVar6;
  undefined8 uVar7;
  byte *unaff_R14;
  ulonglong arg0_01;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulonglong uStack_70;
  byte *pbStack_68;
  byte *pbStack_60;
  ulonglong uStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pdb_140f60be0(&uStack_90,param_2 + 2);
  pdb_140f60be0(&uStack_a8,param_2 + 5);
  arg0_01 = param_2[10];
  if ((longlong)arg0_01 < 0) {
    unaff_R14 = (byte *)0x0;
LAB_140d8a5d0:
    pdb_142dc7e2a(unaff_R14,arg0_01);
    goto LAB_140d8a6fd;
  }
  if (arg0_01 == 0) {
    pbStack_68 = (byte *)0x1;
  }
  else {
    uVar7 = param_2[9];
    pdb_14007ee60();
    unaff_R14 = (byte *)0x1;
    pbVar5 = pub_1406abab0(arg0_01,1);
    if (pbVar5 == (byte *)0x0) goto LAB_140d8a5d0;
    pbStack_68 = pbVar5;
    pub_142e32760(pbVar5,uVar7,arg0_01);
  }
  uVar1 = *(undefined1 *)(param_2 + 0xb);
  uVar6 = *(undefined1 *)(param_2 + 0x10);
  arg0_00 = 0x8000000000000000;
  uStack_70 = arg0_01;
  if (SBORROW8(0,param_2[0xc])) {
    uStack_58 = 0x8000000000000000;
    lVar3 = param_2[0x11];
    uVar2 = uStack_49;
  }
  else {
    arg0 = param_2[0xe];
    if ((longlong)arg0 < 0) {
      uVar7 = 0;
LAB_140d8a667:
      pdb_142dc7e2a(uVar7,arg0);
      goto LAB_140d8a6fd;
    }
    if (arg0 == 0) {
      pbStack_60 = (byte *)0x1;
    }
    else {
      unaff_R14 = (byte *)param_2[0xd];
      uStack_49 = uVar6;
      pdb_14007ee60();
      uVar7 = 1;
      pbVar5 = pub_1406abab0(arg0,1);
      if (pbVar5 == (byte *)0x0) goto LAB_140d8a667;
      pbStack_60 = pbVar5;
      pub_142e32760(pbVar5,unaff_R14,arg0);
      uVar6 = uStack_49;
    }
    arg0_01 = (ulonglong)*(byte *)(param_2 + 0xf);
    lVar3 = param_2[0x11];
    uStack_58 = arg0;
    uVar2 = uStack_49;
  }
  uStack_49 = uVar6;
  if (SBORROW8(0,lVar3)) {
    uVar6 = 0;
    goto LAB_140d8a75b;
  }
  arg0_00 = param_2[0x13];
  if (-1 < (longlong)arg0_00) {
    if (arg0_00 == 0) {
      unaff_R14 = (byte *)0x1;
    }
    else {
      uStack_78 = param_2[0x12];
      pdb_14007ee60();
      uVar7 = 1;
      unaff_R14 = pub_1406abab0(arg0_00,1);
      if (unaff_R14 == (byte *)0x0) goto LAB_140d8a6f1;
      pub_142e32760(unaff_R14,uStack_78,arg0_00);
    }
    uVar6 = *(undefined1 *)(param_2 + 0x14);
LAB_140d8a75b:
    uVar2 = *(undefined1 *)(param_2 + 0x15);
    param_1[4] = uStack_80;
    param_1[2] = uStack_90;
    param_1[3] = uStack_88;
    param_1[7] = uStack_98;
    param_1[5] = uStack_a8;
    param_1[6] = uStack_a0;
    param_1[8] = uStack_70;
    param_1[9] = pbStack_68;
    param_1[10] = uStack_70;
    *(undefined1 *)(param_1 + 0xb) = uVar1;
    param_1[0xc] = uStack_58;
    param_1[0xd] = pbStack_60;
    param_1[0xe] = uStack_58;
    *(char *)(param_1 + 0xf) = (char)arg0_01;
    *(undefined1 *)(param_1 + 0x10) = uStack_49;
    param_1[0x11] = arg0_00;
    param_1[0x12] = unaff_R14;
    param_1[0x13] = arg0_00;
    *(undefined1 *)(param_1 + 0x14) = uVar6;
    uVar7 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar7;
    *(undefined1 *)(param_1 + 0x15) = uVar2;
    return;
  }
  uVar7 = 0;
  uStack_49 = uVar2;
LAB_140d8a6f1:
  pdb_142dc7e2a(uVar7,arg0_00);
LAB_140d8a6fd:
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}

