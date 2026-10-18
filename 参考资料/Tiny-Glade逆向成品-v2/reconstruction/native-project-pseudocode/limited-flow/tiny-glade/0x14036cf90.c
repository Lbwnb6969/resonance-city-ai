// VA 0x14036cf90, PDB extent 6500 bytes
// tiny_glade::crash_pickup::server::impl$1::on_message
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/crash_pickup/server.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::crash_pickup::server::impl$1::on_message
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/crash_pickup/server.rs
   Extent: 6500 */

void pdb_14036cf90(undefined8 param_1,int param_2,undefined8 *param_3)

{
  byte *******pppppppbVar1;
  byte *******pppppppbVar2;
  byte *******pppppppbVar3;
  undefined8 uVar4;
  byte *******arg0;
  byte *******pppppppbStack_988;
  byte *******pppppppbStack_980;
  byte *******pppppppbStack_978;
  byte *******pppppppbStack_778;
  byte *******pppppppbStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined *puStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined *puStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined *puStack_728;
  byte *******pppppppbStack_720;
  byte *******pppppppbStack_570;
  byte *******pppppppbStack_568;
  byte *******pppppppbStack_560;
  byte *******pppppppbStack_558;
  undefined4 uStack_550;
  undefined4 uStack_54c;
  longlong lStack_308;
  byte *******pppppppbStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined *puStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined *puStack_2b8;
  byte *******pppppppbStack_2b0;
  byte *******apppppppbStack_b8 [8];
  int iStack_74;
  undefined8 *puStack_70;
  byte *******pppppppbStack_60;
  byte *******pppppppbStack_58;
  byte *******pppppppbStack_50;
  undefined1 uStack_41;
  undefined1 auStack_3d [5];
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  iStack_74 = param_2;
  if (param_2 == 1) {
    pppppppbStack_60 = (byte *******)*param_3;
    pppppppbStack_58 = (byte *******)param_3[1];
    pppppppbVar1 = (byte *******)param_3[2];
    puStack_70 = param_3;
    pdb_140f69110(&lStack_308,pppppppbStack_58,pppppppbVar1);
    pppppppbVar3 = pppppppbVar1;
    pppppppbVar2 = pppppppbStack_60;
    arg0 = pppppppbStack_58;
    if (((char)lStack_308 == '\0') ||
       (pppppppbVar3 = pppppppbStack_300, pppppppbVar2 = pppppppbStack_58, arg0 = pppppppbVar1,
       SBORROW8(0,(longlong)pppppppbStack_60))) {
      pppppppbStack_988 = pppppppbVar2;
      pppppppbStack_980 = arg0;
      pppppppbStack_978 = pppppppbVar3;
      pdb_140f55fb0(&pppppppbStack_778,arg0,pppppppbVar3);
      if (!SBORROW8(0,(longlong)pppppppbStack_778)) {
        pppppppbStack_58 = pppppppbStack_778;
        pppppppbStack_60 = pppppppbStack_770;
        lStack_308 = pdb_140f4eda0(arg0,pppppppbVar3);
        if (lStack_308 != 0) {
          pdb_1404b38e0(&lStack_308);
        }
        uVar4 = uStack_768;
        if (pppppppbVar2 != (byte *******)0x0) {
          pub_1406abac0((byte *)arg0,(ulonglong)pppppppbVar2,1);
        }
        goto LAB_14036d31f;
      }
      apppppppbStack_b8[0] = pppppppbStack_770;
      if (*_DAT_143ca8e90 != 0) {
        pppppppbStack_570 = (byte *******)&pppppppbStack_988;
        pppppppbStack_568 = (byte *******)pdb_140094770;
        pppppppbStack_560 = (byte *******)apppppppbStack_b8;
        pppppppbStack_558 = (byte *******)pdb_140f56800;
        lStack_308 = 0;
        pppppppbStack_300 = (byte *******)&UNK_142f44078;
        uStack_2f8 = 0x20;
        uStack_2f0 = 0;
        puStack_2e8 = &UNK_142f4404b;
        uStack_2e0 = 0x2c;
        uStack_2d8 = 1;
        puStack_2d0 = &UNK_142f44078;
        uStack_2c8 = 0x20;
        uStack_2c0 = 0x4300000001;
        puStack_2b8 = &UNK_142f4423b;
        pppppppbStack_2b0 = (byte *******)&pppppppbStack_570;
        pdb_140f332f0(auStack_3d,&lStack_308);
      }
      pdb_1404b38e0(apppppppbStack_b8);
      pppppppbVar3 = pppppppbStack_988;
      pppppppbVar2 = pppppppbStack_980;
    }
    else {
      pppppppbStack_570 = pppppppbStack_60;
      pppppppbStack_568 = pppppppbStack_58;
      pppppppbStack_558 = pppppppbStack_300;
      uStack_550 = (undefined4)uStack_2f8;
      uStack_54c = uStack_2f8._4_4_;
      pppppppbVar3 = pppppppbStack_60;
      pppppppbStack_560 = pppppppbVar1;
      if (*_DAT_143ca8e90 != 0) {
        pppppppbStack_778 = (byte *******)&pppppppbStack_570;
        pppppppbStack_770 = (byte *******)pdb_14036a190;
        lStack_308 = 0;
        pppppppbStack_300 = (byte *******)&UNK_142f44078;
        uStack_2f8 = 0x20;
        uStack_2f0 = 0;
        puStack_2e8 = &UNK_142f4404b;
        uStack_2e0 = 0x2c;
        uStack_2d8 = 1;
        puStack_2d0 = &UNK_142f44078;
        uStack_2c8 = 0x20;
        uStack_2c0 = 0x3600000001;
        puStack_2b8 = &UNK_142f4427e;
        pppppppbStack_2b0 = (byte *******)&pppppppbStack_778;
        pdb_140f332f0(auStack_3d,&lStack_308);
        pppppppbVar3 = pppppppbStack_570;
        pppppppbVar2 = pppppppbStack_568;
      }
    }
  }
  else {
    if (param_2 != 0) {
      if (*_DAT_143ca8e90 != 0) {
        pppppppbStack_570 = (byte *******)&iStack_74;
        pppppppbStack_568 = (byte *******)pdb_140f71a50;
        lStack_308 = 0;
        pppppppbStack_300 = (byte *******)&UNK_142f44078;
        uStack_2f8 = 0x20;
        uStack_2f0 = 0;
        puStack_2e8 = &UNK_142f4404b;
        uStack_2e0 = 0x2c;
        uStack_2d8 = 1;
        puStack_2d0 = &UNK_142f44078;
        uStack_2c8 = 0x20;
        uStack_2c0 = 0x4c00000001;
        puStack_2b8 = &UNK_142f442c3;
        pppppppbStack_2b0 = (byte *******)&pppppppbStack_570;
        uStack_41 = 1;
        puStack_70 = param_3;
        pdb_140f332f0(auStack_3d,&lStack_308);
        param_3 = puStack_70;
      }
      pppppppbVar3 = (byte *******)*param_3;
      if (pppppppbVar3 == (byte *******)0x0) {
        return;
      }
      pppppppbVar2 = (byte *******)param_3[1];
      goto LAB_14036d817;
    }
    pppppppbStack_58 = (byte *******)*param_3;
    pppppppbStack_60 = (byte *******)param_3[1];
    uVar4 = param_3[2];
    puStack_70 = param_3;
LAB_14036d31f:
    pdb_140403a30(&lStack_308,pppppppbStack_60,uVar4);
    if (lStack_308 != -0x7ffffffffffffffc) {
      pub_142e32760(&pppppppbStack_570,&lStack_308,0x238);
                    /* WARNING: Could not recover jumptable at 0x00014036d4b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_142f44650 +
                *(int *)(&UNK_142f44650 +
                        ((longlong)pppppppbStack_570 >> 0x3f &
                        (ulonglong)((longlong)pppppppbStack_570 + -0x7fffffffffffffff)) * 4)))();
      return;
    }
    apppppppbStack_b8[0] = pppppppbStack_300;
    if (*_DAT_143ca8e90 != 0) {
      pppppppbStack_988 = (byte *******)apppppppbStack_b8;
      pppppppbStack_980 = (byte *******)pdb_140de0640;
      pppppppbStack_778 = (byte *******)0x0;
      pppppppbStack_770 = (byte *******)&UNK_142f44078;
      uStack_768 = 0x20;
      uStack_760 = 0;
      puStack_758 = &UNK_142f4404b;
      uStack_750 = 0x2c;
      uStack_748 = 1;
      puStack_740 = &UNK_142f44078;
      uStack_738 = 0x20;
      uStack_730 = 0x5400000001;
      puStack_728 = &UNK_142f4420e;
      pppppppbStack_720 = (byte *******)&pppppppbStack_988;
      pdb_140f332f0(auStack_3d,&pppppppbStack_778);
    }
    pppppppbStack_50 = apppppppbStack_b8[0];
    if (*apppppppbStack_b8[0] == (byte ******)0x1) {
      pdb_1404b38e0(apppppppbStack_b8[0] + 1);
    }
    else if ((*apppppppbStack_b8[0] == (byte ******)0x0) &&
            (apppppppbStack_b8[0][2] != (byte ******)0x0)) {
      pub_1406abac0((byte *)apppppppbStack_b8[0][1],(ulonglong)apppppppbStack_b8[0][2],1);
    }
    pub_1406abac0((byte *)pppppppbStack_50,0x28,8);
    pppppppbVar3 = pppppppbStack_58;
    pppppppbVar2 = pppppppbStack_60;
  }
  if (pppppppbVar3 == (byte *******)0x0) {
    return;
  }
LAB_14036d817:
  pub_1406abac0((byte *)pppppppbVar2,(ulonglong)pppppppbVar3,1);
  return;
}

