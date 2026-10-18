// VA 0x1409d1e50, PDB extent 2906 bytes
// country_core::render::nani::gpu_world::OwnedGpuWorldSubset::try_grow
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::render::nani::gpu_world::OwnedGpuWorldSubset::try_grow
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
   Extent: 2906 */

undefined8 pdb_1409d1e50(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  byte *arg0;
  ulonglong uVar6;
  longlong lVar7;
  int iStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  undefined8 uStack_130;
  int iStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulonglong uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  int **ppiStack_80;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong uStack_68;
  int *piStack_60;
  int *piStack_58;
  code *pcStack_50;
  longlong lStack_48;
  undefined1 uStack_32;
  char cStack_31;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  pdb_141a80950(&iStack_178,param_1 + 0x48,param_2,param_3);
  piStack_58 = &iStack_128;
  if (iStack_178 != 0xb) {
    uStack_e8 = uStack_138;
    uStack_e0 = uStack_130;
    uStack_f8 = uStack_148;
    uStack_f4 = uStack_144;
    uStack_f0 = uStack_140;
    uStack_ec = uStack_13c;
    uStack_108 = uStack_158;
    uStack_104 = uStack_154;
    uStack_100 = uStack_150;
    uStack_fc = uStack_14c;
    uStack_118 = uStack_168;
    uStack_114 = uStack_164;
    uStack_110 = uStack_160;
    uStack_10c = uStack_15c;
    iStack_128 = iStack_178;
    uStack_124 = uStack_174;
    uStack_120 = uStack_170;
    uStack_11c = uStack_16c;
    pcStack_50 = pdb_140e18fa0;
    pdb_140f60760(&uStack_d8,&UNK_14302d5d1,&piStack_58);
    iStack_78 = (int)uStack_d8;
    uStack_74 = uStack_d8._4_4_;
    uStack_70 = (undefined4)uStack_d0;
    uStack_6c = uStack_d0._4_4_;
    uStack_68 = uStack_c8;
    if (_DAT_143ca42a8 != 0) {
      piStack_58 = (int *)CONCAT71(piStack_58._1_7_,1);
      uStack_d8 = &piStack_58;
      pdb_142dc7060(&DAT_143ca42a8,0,&uStack_d8,&UNK_14302d7d8,&UNK_14302d600);
    }
    pdb_1400f0d40(&uStack_d8,_DAT_143cb2ca0);
    if ((int)uStack_d8 == 1) {
      piStack_58 = (int *)uStack_d0;
      pcStack_50 = (code *)CONCAT71(pcStack_50._1_7_,(char)uStack_c8);
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14302d502,0x13,&piStack_58,&UNK_14302d8d8,&UNK_14302d600);
    }
    piStack_60 = (int *)uStack_d0;
    cStack_31 = (char)uStack_c8;
    pdb_14007ee60();
    uStack_d0 = (code *)pub_1406abab0(0xf,1);
    if (uStack_d0 == (code *)0x0) {
      pdb_142dc7e2a(1,0xf);
      goto LAB_1409d26ea;
    }
    *(undefined8 *)(uStack_d0 + 7) = 0x2928202168746170;
    *(undefined8 *)uStack_d0 = 0x705f656c75646f6d;
    uStack_d8 = (int **)0xf;
    uStack_c8 = 0xf;
    pdb_142d7f1b0(&uStack_d8,0xf,0x17,1,1);
    uVar6 = uStack_68;
    uVar2 = _UNK_14302d51d;
    *(undefined8 *)(uStack_d0 + uStack_c8) = _DAT_14302d515;
    *(undefined8 *)(uStack_d0 + uStack_c8 + 8) = uVar2;
    *(undefined8 *)(uStack_d0 + uStack_c8 + 0xf) = 0x6e726157203a3a20;
    lVar7 = uStack_c8 + 0x17;
    piStack_58 = (int *)uStack_d8;
    pcStack_50 = uStack_d0;
    uVar2 = CONCAT44(uStack_6c,uStack_70);
    lStack_48 = lVar7;
    if ((ulonglong)((longlong)uStack_d8 - lVar7) < uStack_68) {
      pdb_142d7f1b0(&piStack_58,lVar7,uStack_68,1,1);
LAB_1409d2051:
      lVar7 = lStack_48;
      pub_142e32760(pcStack_50 + lStack_48,uVar2,uVar6);
    }
    else if (uStack_68 != 0) goto LAB_1409d2051;
    uStack_c8 = lVar7 + uVar6;
    uStack_d8 = (int **)piStack_58;
    uStack_d0 = pcStack_50;
    lStack_48 = uStack_c8;
    cVar5 = pdb_14192b470(piStack_60 + 2,&uStack_d8);
    if ((cVar5 == '\0') && (1 < *_DAT_143ca8e90)) {
      piStack_58 = &iStack_78;
      pcStack_50 = pdb_140001020;
      uStack_d8 = (int **)0x0;
      uStack_d0 = (code *)&UNK_14302d52e;
      uStack_c8 = 0x25;
      uStack_c0 = 0;
      puStack_b8 = &UNK_14302d120;
      uStack_b0 = 0x30;
      uStack_a8 = 2;
      puStack_a0 = &UNK_14302d52e;
      uStack_98 = 0x25;
      uStack_90 = 0x37e00000001;
      puStack_88 = &UNK_14302d52c;
      ppiStack_80 = &piStack_58;
      pdb_140f332f0(&uStack_32,&uStack_d8);
    }
    piVar4 = piStack_60;
    if (((cStack_31 == '\0') && ((*_DAT_143ca8f38 & 0x7fffffffffffffff) != 0)) &&
       (cVar5 = pdb_142dc79e0(), cVar5 == '\0')) {
      *(char *)((longlong)piVar4 + 1) = '\x01';
    }
    LOCK();
    iVar3 = *piVar4;
    *(char *)piVar4 = '\0';
    UNLOCK();
    if ((char)iVar3 == '\x02') {
      pdb_142dc6ca0();
    }
    if (CONCAT44(uStack_74,iStack_78) != 0) {
      pub_1406abac0((byte *)CONCAT44(uStack_6c,uStack_70),CONCAT44(uStack_74,iStack_78),1);
    }
    uVar6 = CONCAT44(uStack_124,iStack_128);
    lVar7 = 0;
    if (7 < uVar6) {
      lVar7 = uVar6 - 8;
    }
    goto joined_r0x0001409d21ba;
  }
  (**(code **)(*(longlong *)(param_1 + 0x78) + 0x38))
            (&iStack_178,*(undefined8 *)(param_1 + 0x70),param_2,param_3);
  if (iStack_178 == 0xb) {
    pdb_141a85c90(param_1 + 0x48,param_2);
    (**(code **)(*(longlong *)(param_1 + 0x78) + 0x30))(*(undefined8 *)(param_1 + 0x70),param_2);
    return 1;
  }
  uStack_e8 = uStack_138;
  uStack_e0 = uStack_130;
  uStack_f8 = uStack_148;
  uStack_f4 = uStack_144;
  uStack_f0 = uStack_140;
  uStack_ec = uStack_13c;
  uStack_108 = uStack_158;
  uStack_104 = uStack_154;
  uStack_100 = uStack_150;
  uStack_fc = uStack_14c;
  uStack_118 = uStack_168;
  uStack_114 = uStack_164;
  uStack_110 = uStack_160;
  uStack_10c = uStack_15c;
  iStack_128 = iStack_178;
  uStack_124 = uStack_174;
  uStack_120 = uStack_170;
  uStack_11c = uStack_16c;
  pcStack_50 = pdb_140e18fa0;
  pdb_140f60760(&uStack_d8,&UNK_14302d618,&piStack_58);
  iStack_78 = (int)uStack_d8;
  uStack_74 = uStack_d8._4_4_;
  uStack_70 = (undefined4)uStack_d0;
  uStack_6c = uStack_d0._4_4_;
  uStack_68 = uStack_c8;
  if (_DAT_143ca42ac != 0) {
    piStack_58 = (int *)CONCAT71(piStack_58._1_7_,1);
    uStack_d8 = &piStack_58;
    pdb_142dc7060(&DAT_143ca42ac,0,&uStack_d8,&UNK_14302d7b0,&UNK_14302d648);
  }
  pdb_1400f0d40(&uStack_d8,_DAT_143cb2c98);
  if ((int)uStack_d8 == 1) {
    piStack_58 = (int *)uStack_d0;
    pcStack_50 = (code *)CONCAT71(pcStack_50._1_7_,(char)uStack_c8);
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14302d502,0x13,&piStack_58,&UNK_14302d8d8,&UNK_14302d648);
  }
  piStack_60 = (int *)uStack_d0;
  cStack_31 = (char)uStack_c8;
  pdb_14007ee60();
  uStack_d0 = (code *)pub_1406abab0(0xf,1);
  if (uStack_d0 == (code *)0x0) {
    pdb_142dc7e2a(1,0xf);
LAB_1409d26ea:
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  *(undefined8 *)(uStack_d0 + 7) = 0x2928202168746170;
  *(undefined8 *)uStack_d0 = 0x705f656c75646f6d;
  uStack_d8 = (int **)0xf;
  uStack_c8 = 0xf;
  pdb_142d7f1b0(&uStack_d8,0xf,0x17,1,1);
  uVar6 = uStack_68;
  uVar2 = _UNK_14302d51d;
  *(undefined8 *)(uStack_d0 + uStack_c8) = _DAT_14302d515;
  *(undefined8 *)(uStack_d0 + uStack_c8 + 8) = uVar2;
  *(undefined8 *)(uStack_d0 + uStack_c8 + 0xf) = 0x6e726157203a3a20;
  lVar7 = uStack_c8 + 0x17;
  piStack_58 = (int *)uStack_d8;
  pcStack_50 = uStack_d0;
  uVar2 = CONCAT44(uStack_6c,uStack_70);
  lStack_48 = lVar7;
  if ((ulonglong)((longlong)uStack_d8 - lVar7) < uStack_68) {
    pdb_142d7f1b0(&piStack_58,lVar7,uStack_68,1,1);
LAB_1409d2355:
    lVar7 = lStack_48;
    pub_142e32760(pcStack_50 + lStack_48,uVar2,uVar6);
  }
  else if (uStack_68 != 0) goto LAB_1409d2355;
  uStack_c8 = lVar7 + uVar6;
  uStack_d8 = (int **)piStack_58;
  uStack_d0 = pcStack_50;
  lStack_48 = uStack_c8;
  cVar5 = pdb_14192b470(piStack_60 + 2,&uStack_d8);
  if ((cVar5 == '\0') && (1 < *_DAT_143ca8e90)) {
    piStack_58 = &iStack_78;
    pcStack_50 = pdb_140001020;
    uStack_d8 = (int **)0x0;
    uStack_d0 = (code *)&UNK_14302d52e;
    uStack_c8 = 0x25;
    uStack_c0 = 0;
    puStack_b8 = &UNK_14302d120;
    uStack_b0 = 0x30;
    uStack_a8 = 2;
    puStack_a0 = &UNK_14302d52e;
    uStack_98 = 0x25;
    uStack_90 = 0x38300000001;
    puStack_88 = &UNK_14302d52c;
    ppiStack_80 = &piStack_58;
    pdb_140f332f0(&uStack_32,&uStack_d8);
  }
  piVar4 = piStack_60;
  if (((cStack_31 == '\0') && ((*_DAT_143ca8f38 & 0x7fffffffffffffff) != 0)) &&
     (cVar5 = pdb_142dc79e0(), cVar5 == '\0')) {
    *(char *)((longlong)piVar4 + 1) = '\x01';
  }
  LOCK();
  iVar3 = *piVar4;
  *(char *)piVar4 = '\0';
  UNLOCK();
  if ((char)iVar3 == '\x02') {
    pdb_142dc6ca0();
  }
  if (CONCAT44(uStack_74,iStack_78) != 0) {
    pub_1406abac0((byte *)CONCAT44(uStack_6c,uStack_70),CONCAT44(uStack_74,iStack_78),1);
  }
  uVar6 = CONCAT44(uStack_124,iStack_128);
  lVar7 = 0;
  if (7 < uVar6) {
    lVar7 = uVar6 - 8;
  }
joined_r0x0001409d21ba:
  if (lVar7 == 0) {
    if (((uVar6 < 6) && ((0x32UL >> (uVar6 & 0x3f) & 1) != 0)) &&
       (CONCAT44(uStack_11c,uStack_120) != 0)) {
      pub_1406abac0((byte *)CONCAT44(uStack_114,uStack_118),CONCAT44(uStack_11c,uStack_120),1);
    }
    uVar6 = CONCAT44(uStack_104,uStack_108);
    if (uVar6 == 0) {
      return 0;
    }
    arg0 = (byte *)CONCAT44(uStack_fc,uStack_100);
  }
  else {
    if (lVar7 == 1) {
      pdb_1404b83f0(&uStack_120);
      return 0;
    }
    uVar6 = CONCAT44(uStack_11c,uStack_120);
    if (uVar6 == 0) {
      return 0;
    }
    arg0 = (byte *)CONCAT44(uStack_114,uStack_118);
  }
  pub_1406abac0(arg0,uVar6,1);
  return 0;
}

