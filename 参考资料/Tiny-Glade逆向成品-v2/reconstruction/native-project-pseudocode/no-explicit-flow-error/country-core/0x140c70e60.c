// VA 0x140c70e60, PDB extent 1844 bytes
// country_core::resources::session::import::read_origin
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session/import.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::session::import::read_origin
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session/import.rs
   Extent: 1844 */

undefined8 *
pdb_140c70e60(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  byte *pbVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  byte *pbVar7;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined4 uStack_978;
  undefined4 uStack_974;
  undefined4 uStack_970;
  undefined4 uStack_96c;
  undefined4 uStack_968;
  undefined4 uStack_964;
  undefined4 uStack_960;
  undefined4 uStack_95c;
  undefined7 uStack_958;
  undefined4 uStack_951;
  undefined1 uStack_94d;
  undefined4 uStack_948;
  undefined4 uStack_944;
  undefined4 uStack_940;
  undefined4 uStack_93c;
  undefined4 uStack_938;
  undefined4 uStack_934;
  undefined4 uStack_930;
  undefined4 uStack_92c;
  undefined4 uStack_928;
  undefined1 auStack_240 [32];
  byte *pbStack_220;
  byte *pbStack_218;
  undefined1 auStack_210 [96];
  ulonglong uStack_1b0;
  byte *pbStack_1a8;
  ulonglong uStack_180;
  byte *pbStack_178;
  undefined8 uStack_170;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 uStack_118;
  byte *pbStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  byte *pbStack_58;
  byte *pbStack_50;
  undefined1 uStack_41;
  byte *pbStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  pdb_140f3e9e0(&uStack_180,param_2,param_3,&UNK_1430729bf,0xc);
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_f7 = 0;
  uStack_f0 = 0;
  uStack_d8 = _DAT_143072e00;
  uStack_d4 = _UNK_143072e04;
  uStack_d0 = _UNK_143072e08;
  uStack_cc = _UNK_143072e0c;
  uStack_c8 = _DAT_143072e10;
  uStack_c4 = _UNK_143072e14;
  uStack_c0 = _UNK_143072e18;
  uStack_bc = _UNK_143072e1c;
  uStack_948 = _DAT_143072e00;
  uStack_944 = _UNK_143072e04;
  uStack_940 = _UNK_143072e08;
  uStack_93c = _UNK_143072e0c;
  uStack_938 = _DAT_143072e10;
  uStack_934 = _UNK_143072e14;
  uStack_930 = _UNK_143072e18;
  uStack_92c = _UNK_143072e1c;
  uStack_9b8 = 0;
  uStack_9b0 = 0;
  uStack_9a8 = 0;
  uStack_9a0 = 0;
  uStack_998 = 0;
  uStack_990 = 0;
  uStack_988 = 0;
  uStack_980 = 0;
  uStack_978 = _DAT_143072e00;
  uStack_974 = _UNK_143072e04;
  uStack_970 = _UNK_143072e08;
  uStack_96c = _UNK_143072e0c;
  uStack_968 = _DAT_143072e10;
  uStack_964 = _UNK_143072e14;
  uStack_960 = _UNK_143072e18;
  uStack_95c = _UNK_143072e1c;
  uStack_958 = 0;
  uStack_951 = 0;
  uStack_94d = 1;
  uStack_928 = 0;
  uStack_118 = (byte *)0x0;
  pbStack_110 = (byte *)0x0;
  uStack_108 = 7;
  uStack_104 = 0;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_100 = 1;
  pbStack_58 = pbStack_178;
  lVar5 = pdb_140f4a2a0(&uStack_118,pbStack_178,uStack_170);
  if (lVar5 == 1) {
    uVar6 = pdb_142deaf00(pbStack_178);
    param_1[1] = uVar6;
  }
  else {
    pbStack_220 = (byte *)pdb_140c15290(pbStack_178);
    pbStack_218 = pbStack_178;
    if (pbStack_220 == (byte *)0x1) {
      pdb_140f55fb0(&uStack_118,pbStack_58,uStack_170);
      if (SBORROW8(0,(longlong)uStack_118)) {
        uVar6 = pdb_142deaf00(pbStack_110);
        param_1[1] = uVar6;
        *param_1 = 0x8000000000000000;
        if (pbStack_220 != (byte *)0x0) {
          pdb_140f36c40(&pbStack_218);
        }
        goto LAB_140c710cd;
      }
      pbStack_40 = uStack_118;
      pbStack_50 = pbStack_110;
      pdb_140fafcc0(&uStack_9b8,pbStack_110,CONCAT44(uStack_104,uStack_108));
      if (pbStack_40 != (byte *)0x0) {
        pub_1406abac0(pbStack_50,(ulonglong)pbStack_40,1);
      }
    }
    else {
      uStack_118 = pbStack_178;
      pdb_140fafcc0(&uStack_9b8,&uStack_118,8);
    }
    if (pbStack_220 != (byte *)0x0) {
      pdb_140f36c40(&pbStack_218);
    }
    pdb_140a92500(&uStack_118,param_2,param_3);
    pbVar3 = pbStack_110;
    pbVar7 = uStack_118;
    if (!SBORROW8(0,(longlong)uStack_118)) {
      pub_142e32760(auStack_210,&uStack_108,0x90);
      pbStack_220 = pbVar7;
      pbStack_218 = pbVar3;
      if ((!SBORROW8(0,uStack_1b0)) && (uStack_1b0 != 0)) {
        pub_1406abac0(pbStack_1a8,uStack_1b0,1);
      }
      uStack_1b0 = 0x8000000000000000;
      pdb_14007ee60();
      pbVar7 = pub_1406abab0(0x80,1);
      if (pbVar7 == (byte *)0x0) {
        pdb_142dc7e2a(1,0x80);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uStack_118 = (byte *)0x80;
      uStack_108 = 0;
      uStack_104 = 0;
      puStack_148 = &uStack_118;
      pbStack_110 = pbVar7;
      pbVar7 = (byte *)pdb_1418c0e20(&pbStack_220,&puStack_148);
      if (pbVar7 == (byte *)0x0) {
        pbVar7 = pbStack_110;
        if (!SBORROW8(0,(longlong)uStack_118)) {
          pbStack_40 = uStack_118;
          pbStack_50 = pbStack_110;
          pdb_140fafcc0(&uStack_9b8,pbStack_110,CONCAT44(uStack_104,uStack_108));
          if (pbStack_40 != (byte *)0x0) {
            pub_1406abac0(pbStack_50,(ulonglong)pbStack_40,1);
          }
          pdb_140fb0450(auStack_240,&uStack_9b8);
          pdb_140faf0a0(&uStack_118,auStack_240);
          uStack_70 = (undefined8 *)0x0;
          uStack_68 = 1;
          uStack_60 = 0;
          uStack_150 = 0x60000020;
          puStack_160 = &uStack_70;
          puStack_158 = &UNK_1430729e0;
          cVar4 = pdb_140f73140((longlong)&uStack_118 + 4,(ulonglong)uStack_118 & 0xffffffff,
                                &puStack_160);
          if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
            pdb_142dc8170(&UNK_143072a10,0x37,&uStack_41,&UNK_143072ad0,&UNK_143072ab8);
          }
          uStack_138 = uStack_60;
          puStack_148 = uStack_70;
          uStack_140 = (undefined4)uStack_68;
          uStack_13c = uStack_68._4_4_;
          uStack_130 = *(undefined4 *)param_4;
          uStack_12c = *(undefined4 *)((longlong)param_4 + 4);
          uVar2 = *param_4;
          uStack_128 = *(undefined4 *)(param_4 + 1);
          uStack_124 = *(undefined4 *)((longlong)param_4 + 0xc);
          uVar6 = param_4[1];
          *(undefined4 *)param_1 = (undefined4)uStack_70;
          *(undefined4 *)((longlong)param_1 + 4) = uStack_70._4_4_;
          *(undefined4 *)(param_1 + 1) = (undefined4)uStack_68;
          *(undefined4 *)((longlong)param_1 + 0xc) = uStack_68._4_4_;
          param_1[4] = uVar6;
          param_1[2] = uStack_60;
          param_1[3] = uVar2;
          pdb_1404cc180(&pbStack_220);
          goto LAB_140c710cd;
        }
      }
      else if (uStack_118 != (byte *)0x0) {
        pub_1406abac0(pbStack_110,(ulonglong)uStack_118,1);
      }
      uVar6 = pdb_142dead00(pbVar7);
      param_1[1] = uVar6;
      *param_1 = 0x8000000000000000;
      pdb_1404cc180(&pbStack_220);
      goto LAB_140c710cd;
    }
    param_1[1] = pbStack_110;
  }
  *param_1 = 0x8000000000000000;
LAB_140c710cd:
  if (uStack_180 != 0) {
    pub_1406abac0(pbStack_58,uStack_180,1);
  }
  return param_1;
}

