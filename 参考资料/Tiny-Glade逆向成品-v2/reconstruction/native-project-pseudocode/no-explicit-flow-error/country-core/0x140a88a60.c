// VA 0x140a88a60, PDB extent 1694 bytes
// country_core::utils::debug_viz::drain_global_debug_spheres
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/debug_viz.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::utils::debug_viz::drain_global_debug_spheres
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/debug_viz.rs
   Extent: 1694 */

void pdb_140a88a60(undefined8 *param_1)

{
  undefined8 uVar1;
  byte *pbVar2;
  ulonglong *puVar3;
  byte bVar4;
  char cVar5;
  byte *pbVar6;
  ulonglong uVar7;
  byte *pbVar8;
  longlong lVar9;
  byte *pbVar10;
  bool bVar11;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  undefined *puStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  byte *pbStack_a0;
  byte *pbStack_98;
  longlong lStack_90;
  byte *pbStack_88;
  longlong lStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong lStack_68;
  byte *pbStack_60;
  longlong lStack_58;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  if (_DAT_143ca43a0 == 0) {
    LOCK();
    bVar11 = DAT_143ca4380 == '\0';
    if (bVar11) {
      DAT_143ca4380 = '\x01';
    }
    UNLOCK();
  }
  else {
    pdb_142deb371(&DAT_143ca4380);
    LOCK();
    bVar11 = DAT_143ca4380 == '\0';
    if (bVar11) {
      DAT_143ca4380 = '\x01';
    }
    UNLOCK();
  }
  if (!bVar11) {
    pdb_142dc6be0(&DAT_143ca4380);
  }
  puVar3 = _DAT_143ca8f38;
  if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
    bVar4 = 0;
    lStack_58 = _DAT_143ca4388;
    pbStack_60 = _DAT_143ca4390;
    lVar9 = _DAT_143ca4398;
  }
  else {
    bVar4 = pdb_142dc79e0();
    bVar4 = bVar4 ^ 1;
    lStack_58 = _DAT_143ca4388;
    pbStack_60 = _DAT_143ca4390;
    lVar9 = _DAT_143ca4398;
  }
  if (DAT_143ca4381 != '\0') {
    puStack_e8 = &DAT_143ca4380;
    uStack_e0._1_3_ = (undefined3)((uint)uStack_e0 >> 8);
    uStack_e0 = CONCAT31(uStack_e0._1_3_,bVar4);
    _DAT_143ca4388 = lStack_58;
    _DAT_143ca4390 = pbStack_60;
    _DAT_143ca4398 = lVar9;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143044570,0x2b,&puStack_e8,&UNK_143044600,&UNK_143043af8);
  }
  _DAT_143ca4388 = 0;
  _DAT_143ca4390 = (byte *)0x4;
  _DAT_143ca4398 = 0;
  if ((bVar4 == 0) && ((*puVar3 & 0x7fffffffffffffff) != 0)) {
    uStack_49 = 1;
    cVar5 = pdb_142dc79e0();
    if (cVar5 == '\0') {
      DAT_143ca4381 = '\x01';
    }
  }
  cVar5 = DAT_143ca4380;
  LOCK();
  DAT_143ca4380 = 0;
  UNLOCK();
  if (cVar5 == '\x02') {
    uStack_49 = 1;
    pdb_142dc6ca0(&DAT_143ca4380);
  }
  if (lVar9 != 0) {
    pbVar10 = pbStack_60 + lVar9 * 0x28;
    uVar1 = *param_1;
    pbVar8 = pbStack_60;
    do {
      if (*(int *)pbVar8 == 6) break;
      iStack_ec = *(int *)(pbVar8 + 0x24);
      iStack_10c = *(int *)(pbVar8 + 4);
      iStack_108 = *(int *)(pbVar8 + 8);
      iStack_104 = *(int *)(pbVar8 + 0xc);
      iStack_100 = *(int *)(pbVar8 + 0x10);
      iStack_fc = *(int *)(pbVar8 + 0x14);
      iStack_f8 = *(int *)(pbVar8 + 0x18);
      iStack_f4 = *(int *)(pbVar8 + 0x1c);
      iStack_f0 = *(int *)(pbVar8 + 0x20);
      iStack_110 = *(int *)pbVar8;
      pdb_140ab07b0(&iStack_110,uVar1);
      pbVar8 = pbVar8 + 0x28;
    } while (pbVar8 != pbVar10);
  }
  if (lStack_58 != 0) {
    pub_1406abac0(pbStack_60,lStack_58 * 0x28,4);
  }
  if (_DAT_143ca4378 != 0) {
    uStack_49 = 0;
    pdb_142deb2db(&DAT_143ca4358);
  }
  LOCK();
  bVar11 = DAT_143ca4358 == '\0';
  if (bVar11) {
    DAT_143ca4358 = '\x01';
  }
  UNLOCK();
  if (!bVar11) {
    uStack_49 = 0;
    pdb_142dc6be0(&DAT_143ca4358);
  }
  if ((*puVar3 & 0x7fffffffffffffff) == 0) {
    bVar4 = 0;
    lStack_68 = _DAT_143ca4370;
  }
  else {
    uStack_49 = 0;
    bVar4 = pdb_142dc79e0();
    bVar4 = bVar4 ^ 1;
    lStack_68 = _DAT_143ca4370;
  }
  if (DAT_143ca4359 != '\0') {
    puStack_e8 = &DAT_143ca4358;
    uStack_e0._1_3_ = (undefined3)((uint)uStack_e0 >> 8);
    uStack_e0 = CONCAT31(uStack_e0._1_3_,bVar4);
    _DAT_143ca4370 = lStack_68;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143044570,0x2b,&puStack_e8,&UNK_1430445e0,&UNK_143043b10);
  }
  DAT_143ca4360_4 = (undefined4)((ulonglong)_DAT_143ca4360 >> 0x20);
  DAT_143ca4368_4 = (undefined4)((ulonglong)_DAT_143ca4368 >> 0x20);
  uStack_78 = _DAT_143ca4360;
  uStack_74 = DAT_143ca4360_4;
  uStack_70 = _DAT_143ca4368;
  uStack_6c = DAT_143ca4368_4;
  _DAT_143ca4360 = 0;
  _DAT_143ca4368 = 8;
  _DAT_143ca4370 = 0;
  if ((bVar4 == 0) && ((*puVar3 & 0x7fffffffffffffff) != 0)) {
    uStack_4a = 1;
    cVar5 = pdb_142dc79e0();
    if (cVar5 == '\0') {
      DAT_143ca4359 = '\x01';
    }
  }
  cVar5 = DAT_143ca4358;
  LOCK();
  DAT_143ca4358 = 0;
  UNLOCK();
  if (cVar5 == '\x02') {
    uStack_4a = 1;
    pdb_142dc6ca0(&DAT_143ca4358);
  }
  lStack_90 = CONCAT44(uStack_74,uStack_78);
  pbVar10 = (byte *)CONCAT44(uStack_6c,uStack_70);
  lVar9 = lStack_68 * 0x48;
  pbVar8 = pbVar10 + lVar9;
  pbVar6 = pbVar10;
  pbStack_a0 = pbVar10;
  pbStack_98 = pbVar10;
  pbStack_88 = pbVar8;
  lStack_80 = lStack_90;
  if (lStack_68 != 0) {
    uVar1 = *param_1;
    pbVar2 = pbVar10;
    do {
      pbVar6 = pbVar2 + 0x48;
      pbStack_98 = pbVar6;
      if (SBORROW8(0,(longlong)*(undefined **)pbVar2)) break;
      uStack_e0 = *(undefined4 *)(pbVar2 + 8);
      uStack_dc = *(undefined4 *)(pbVar2 + 0xc);
      uStack_d8 = *(undefined4 *)(pbVar2 + 0x10);
      uStack_d4 = *(undefined4 *)(pbVar2 + 0x14);
      uStack_d0 = *(undefined4 *)(pbVar2 + 0x18);
      uStack_cc = *(undefined4 *)(pbVar2 + 0x1c);
      uStack_c8 = *(undefined4 *)(pbVar2 + 0x20);
      uStack_c4 = *(undefined4 *)(pbVar2 + 0x24);
      uStack_c0 = *(undefined4 *)(pbVar2 + 0x28);
      uStack_bc = *(undefined4 *)(pbVar2 + 0x2c);
      uStack_b8 = *(undefined4 *)(pbVar2 + 0x30);
      uStack_b4 = *(undefined4 *)(pbVar2 + 0x34);
      uStack_b0 = *(undefined4 *)(pbVar2 + 0x38);
      uStack_ac = *(undefined4 *)(pbVar2 + 0x3c);
      uStack_a8 = *(undefined4 *)(pbVar2 + 0x40);
      uStack_a4 = *(undefined4 *)(pbVar2 + 0x44);
      puStack_e8 = *(undefined **)pbVar2;
      pdb_140ab2da0(&puStack_e8,uVar1);
      lVar9 = lVar9 + -0x48;
      pbVar2 = pbVar6;
    } while (lVar9 != 0);
  }
  if (pbVar8 != pbVar6) {
    uVar7 = (ulonglong)((longlong)pbVar8 - (longlong)pbVar6) / 0x48;
    pbVar6 = pbVar6 + 0x20;
    do {
      if (*(longlong *)(pbVar6 + -0x20) != 0) {
        pub_1406abac0(*(byte **)(pbVar6 + -0x18),*(longlong *)(pbVar6 + -0x20) * 0xc,4);
      }
      lVar9 = *(longlong *)(pbVar6 + -8);
      if ((!SBORROW8(0,lVar9)) && (lVar9 != 0)) {
        pub_1406abac0(*(byte **)pbVar6,lVar9 * 0xc,4);
      }
      pbVar6 = pbVar6 + 0x48;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (lStack_80 != 0) {
    pub_1406abac0(pbVar10,lStack_80 * 0x48,8);
  }
  return;
}

