// VA 0x141192a10, PDB extent 794 bytes
// toolbar::menu::report_bug::ui::closure$7
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/report_bug.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::menu::report_bug::ui::closure$7
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/report_bug.rs
   Extent: 794 */

void pdb_141192a10(longlong param_1,longlong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  byte *pbStack_a0;
  undefined8 uStack_98;
  ulonglong uStack_90;
  byte *pbStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  byte *pbStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  uVar5 = 0x13;
  uVar2 = pdb_140dc6290(&UNK_14329f08d,0x13);
  uVar3 = *(undefined8 *)(param_1 + 0x2d8);
  lVar4 = *(longlong *)(param_1 + 0x2e0);
  pdb_14007ee60();
  pbStack_40 = pub_1406abab0(0xc,1);
  if (pbStack_40 != (byte *)0x0) {
    pbStack_40[0] = 0x3f;
    pbStack_40[1] = 0x75;
    pbStack_40[2] = 0x6e;
    pbStack_40[3] = 0x61;
    pbStack_40[4] = 0x73;
    pbStack_40[5] = 0x73;
    pbStack_40[6] = 0x69;
    pbStack_40[7] = 0x67;
    pbStack_40[8] = 0x6e;
    pbStack_40[9] = 0x65;
    pbStack_40[10] = 100;
    pbStack_40[0xb] = 0x3f;
    if (lVar4 == 0) {
      uStack_58 = 0xc;
      uStack_48 = 0xc;
    }
    else {
      pdb_140a17220(&uStack_58,uVar3,0,1);
      pub_1406abac0(pbStack_40,0xc,1);
      pbStack_40 = uStack_50;
    }
    pdb_141185a10(&uStack_90,uVar2,uVar5,&UNK_14329f0a0,5,pbStack_40,uStack_48);
    if (uStack_58 != 0) {
      pub_1406abac0(pbStack_40,uStack_58,1);
    }
    pbStack_40 = pbStack_88;
    pbStack_a0 = pbStack_88;
    uStack_98 = uStack_80;
    uStack_58 = pdb_140bbbcb0(&pbStack_a0);
    uStack_50 = (byte *)CONCAT44(_UNK_14329c264,_DAT_14329c260);
    uStack_48 = CONCAT44(_UNK_14329c26c,_UNK_14329c268);
    uStack_50 = (byte *)pdb_1400affa0(&uStack_58);
    uStack_58 = *(undefined8 *)(param_2 + 8);
    uVar3 = pdb_1400b0130(&uStack_58);
    pdb_14072caa0(&uStack_58,param_2,uVar3);
    uVar3 = pdb_14116ee90(&uStack_58,0);
    pdb_14119b6b0(uVar3,pbStack_40,uStack_80);
    uStack_68 = uStack_48;
    uStack_78 = (undefined4)uStack_58;
    uStack_74 = uStack_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    uVar3 = pdb_14116e180(&uStack_78);
    pdb_14119b2b0(uVar3,_DAT_142e37994);
    uStack_48 = uStack_68;
    uStack_58._0_4_ = uStack_78;
    uStack_58._4_4_ = uStack_74;
    uStack_50._0_4_ = uStack_70;
    uStack_50._4_4_ = uStack_6c;
    uVar3 = pdb_14116e180(&uStack_58);
    pdb_140cb5df0(uVar3,_DAT_1430448d8);
    uStack_68 = uStack_48;
    uStack_78 = (undefined4)uStack_58;
    uStack_74 = uStack_58._4_4_;
    uStack_70 = (undefined4)uStack_50;
    uStack_6c = uStack_50._4_4_;
    uVar3 = pdb_14116e180(&uStack_78);
    pdb_140cb68f0(uVar3,2);
    uStack_48 = uStack_68;
    uStack_58 = CONCAT44(uStack_74,uStack_78);
    uStack_50 = (byte *)CONCAT44(uStack_6c,uStack_70);
    lVar4 = pdb_14116e180(&uStack_58);
    *(undefined4 *)(lVar4 + 600) = 0xffffffa0;
    if (uStack_90 != 0) {
      pub_1406abac0(pbStack_40,uStack_90,1);
    }
    return;
  }
  pdb_142dc7e2a(1,0xc);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

