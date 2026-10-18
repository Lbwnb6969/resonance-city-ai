// VA 0x142d47a10, PDB extent 2643 bytes
// toolbar::third_party_licenses_server::SingleFileServer::run
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/third_party_licenses_server.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::third_party_licenses_server::SingleFileServer::run
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/third_party_licenses_server.rs
   Extent: 2643 */

byte * pdb_142d47a10(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  int iVar3;
  char cVar4;
  ulonglong uVar5;
  byte *pbVar6;
  longlong lVar7;
  int aiStack_370 [44];
  undefined1 auStack_2c0 [48];
  ulonglong uStack_290;
  ulonglong uStack_210;
  undefined *puStack_208;
  int iStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  uint uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  ulonglong uStack_1e0;
  undefined *puStack_1d8;
  int iStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  uint uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  longlong **pplStack_188;
  byte *pbStack_130;
  longlong lStack_128;
  longlong *plStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  longlong *plStack_d8;
  code *pcStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  longlong lStack_88;
  longlong lStack_80;
  undefined8 uStack_78;
  byte *pbStack_70;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  lStack_128 = param_1;
  lStack_88 = param_1;
LAB_142d47a80:
  do {
    pdb_142309170(aiStack_370,&lStack_128);
    if (aiStack_370[0] == 2) {
      pbVar6 = (byte *)0x0;
      goto LAB_142d47fa4;
    }
    pub_142e32760(auStack_2c0,aiStack_370,0xb0);
    if (1 < uStack_290) {
      pub_142e32760(&uStack_1e0,aiStack_370,0xb0);
      plStack_120 = (longlong *)0x0;
      pcStack_118 = (code *)0x8;
      uStack_110 = 0;
      pdb_14007ee60();
      pbStack_70 = pub_1406abab0(0x300,8);
      if (pbStack_70 == (byte *)0x0) {
        pdb_142dc7e2a(8,0x300);
LAB_142d48059:
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      pcStack_d0 = (code *)0x0;
      uStack_c8 = 0;
      plStack_d8 = (longlong *)0x1;
      uStack_b8 = 0x10;
      uStack_a8 = 0;
      uStack_a0 = CONCAT22(uStack_a0._2_2_,0x194);
      uStack_b0 = pbStack_70;
      pbVar6 = (byte *)pdb_142d48470(&uStack_1e0,&plStack_d8);
      goto LAB_142d47fa4;
    }
    lVar7 = *(longlong *)(lStack_88 + 0x30);
    uStack_1e0 = uStack_1e0 & 0xffffffff00000000;
    puStack_1d8 = (undefined *)0x0;
    iStack_1d0 = 7;
    uStack_1c4 = 0;
    uStack_1c0 = uStack_1c0 & 0xffffff00;
    uStack_1cc = 0;
    uStack_1c8 = 1;
    uStack_61 = 1;
    uVar5 = pdb_140f4a2a0(&uStack_1e0,lVar7,*(undefined8 *)(lStack_88 + 0x38));
    if ((uVar5 & 1) != 0) {
      lStack_80 = lVar7;
      if (1 < *_DAT_143ca8e90) {
        plStack_d8 = &lStack_80;
        pcStack_d0 = pdb_140f56800;
        uStack_1e0 = 0;
        puStack_1d8 = &UNK_1436d97e1;
        iStack_1d0 = 0x24;
        uStack_1cc = 0;
        uStack_1c8 = 0;
        uStack_1c4 = 0;
        uStack_1c0 = 0x436d9781;
        uStack_1bc = 1;
        uStack_1b8 = 0x39;
        uStack_1b0 = 2;
        puStack_1a8 = &UNK_1436d97e1;
        uStack_1a0 = 0x24;
        uStack_198 = 0x2b00000001;
        puStack_190 = &UNK_1436d97bb;
        uStack_63 = 1;
        pplStack_188 = &plStack_d8;
        pdb_140f332f0(&uStack_64,&uStack_1e0);
      }
      pub_142e32760(&uStack_1e0,auStack_2c0,0xb0);
      plStack_120 = (longlong *)0x0;
      pcStack_118 = (code *)0x8;
      uStack_110 = 0;
      pdb_14007ee60();
      pbStack_70 = pub_1406abab0(0x300,8);
      if (pbStack_70 == (byte *)0x0) {
        pdb_142dc7e2a(8,0x300);
        goto LAB_142d48059;
      }
      pcStack_d0 = (code *)0x0;
      uStack_c8 = 0;
      plStack_d8 = (longlong *)0x1;
      uStack_b8 = 0x10;
      uStack_a8 = 0;
      uStack_a0 = CONCAT22(uStack_a0._2_2_,500);
      uStack_b0 = pbStack_70;
      pbVar6 = (byte *)pdb_142d48470(&uStack_1e0,&plStack_d8);
      if (pbVar6 != (byte *)0x0) {
        uStack_61 = 0;
        pdb_1404b38e0(&lStack_80);
        goto LAB_142d47fa4;
      }
      uStack_61 = 0;
      pdb_1404b38e0(&lStack_80);
      goto LAB_142d47a80;
    }
    uStack_61 = 1;
    pdb_1429afcd0(&plStack_120);
    uStack_62 = 1;
    pdb_1429aa420(&uStack_1e0,&UNK_1436d975b,0x26);
    if (SBORROW8(0,uStack_1e0)) {
      CloseHandle(CONCAT44(uStack_e4,uStack_e8));
      lVar7 = CONCAT44(uStack_ec,uStack_f0);
      if (lVar7 != 0) {
        pbVar6 = (byte *)CONCAT44(uStack_f4,uStack_f8) + 0x20;
        do {
          if (*(ulonglong *)(pbVar6 + -0x20) != 0) {
            pub_1406abac0(*(byte **)(pbVar6 + -0x18),*(ulonglong *)(pbVar6 + -0x20),1);
          }
          if (*(ulonglong *)(pbVar6 + -8) != 0) {
            pub_1406abac0(*(byte **)pbVar6,*(ulonglong *)(pbVar6 + -8),1);
          }
          pbVar6 = pbVar6 + 0x30;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      if (CONCAT44(uStack_fc,uStack_100) != 0) {
        pub_1406abac0((byte *)CONCAT44(uStack_f4,uStack_f8),CONCAT44(uStack_fc,uStack_100) * 0x30,8)
        ;
      }
      pdb_14117bba0(auStack_2c0);
      pbVar6 = (byte *)0x2800000003;
LAB_142d47fa4:
      pdb_141181750(lStack_88);
      return pbVar6;
    }
    uStack_1f0 = uStack_1c0;
    uStack_1ec = uStack_1bc;
    uStack_1e8 = (undefined4)uStack_1b8;
    uStack_1e4 = uStack_1b8._4_4_;
    iStack_200 = iStack_1d0;
    uStack_1fc = uStack_1cc;
    uStack_1f8 = uStack_1c8;
    uStack_1f4 = uStack_1c4;
    uStack_210 = uStack_1e0;
    puStack_208 = puStack_1d8;
    uStack_62 = 1;
    pdb_142d76d80(&plStack_120,&uStack_210);
    pub_142e32760(&uStack_1e0,auStack_2c0,0xb0);
    uStack_98 = uStack_e0;
    uStack_a8 = CONCAT44(uStack_ec,uStack_f0);
    uStack_a0 = uStack_e8;
    uStack_9c = uStack_e4;
    uStack_b8 = CONCAT44(uStack_fc,uStack_100);
    uStack_b0 = (byte *)CONCAT44(uStack_f4,uStack_f8);
    uStack_c8 = uStack_110;
    uStack_c0 = uStack_108;
    uStack_bc = uStack_104;
    plStack_d8 = plStack_120;
    pcStack_d0 = pcStack_118;
    pbStack_130 = (byte *)pdb_142d78fe0(&uStack_1e0,&plStack_d8);
    iVar3 = iStack_1d0;
    lVar7 = CONCAT44(uStack_1cc,iStack_1d0);
    uVar2 = CONCAT44(uStack_1c4,uStack_1c8);
    iStack_1d0 = 3;
    uStack_1cc = 0;
    pbStack_70 = pbStack_130;
    if (lVar7 != 3) {
      lStack_80 = lVar7;
      uStack_78 = uVar2;
      if (lVar7 == 0) {
        cVar4 = pdb_142304580();
      }
      else if (iVar3 == 1) {
        cVar4 = pdb_142301e20();
      }
      else {
        cVar4 = pdb_142994880();
      }
      if (cVar4 != '\x02') {
        if (cVar4 == '\0') {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_14360cd94,0x28,&UNK_14360ce30);
        }
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_1436d9730,0x2b,&uStack_64,&UNK_1436d9710,&UNK_1436d9868);
      }
      pdb_14117e7e0(&lStack_80);
    }
    uStack_62 = 0;
    pdb_14117bba0(&uStack_1e0);
    pbVar6 = pbStack_70;
    if (pbStack_70 != (byte *)0x0) goto LAB_142d47fa4;
  } while( true );
}

