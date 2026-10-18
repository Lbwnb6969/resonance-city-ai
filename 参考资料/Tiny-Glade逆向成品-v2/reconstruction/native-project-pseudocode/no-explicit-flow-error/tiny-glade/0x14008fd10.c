// VA 0x14008fd10, PDB extent 3626 bytes
// tiny_glade::gui::gui_fog::impl$2::render
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_fog.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::gui::gui_fog::impl$2::render
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_fog.rs
   Extent: 3626 */

void pdb_14008fd10(float *param_1,longlong param_2)

{
  float fVar1;
  ulonglong uVar2;
  float fVar3;
  byte bVar4;
  byte *pbVar5;
  byte bVar6;
  longlong lVar7;
  byte *pbVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  longlong lStack_108;
  byte *pbStack_100;
  longlong lStack_f0;
  byte *pbStack_e8;
  longlong lStack_e0;
  byte bStack_d1;
  undefined8 uStack_d0;
  
  fVar10 = _DAT_142e3788c;
  uStack_d0 = 0xfffffffffffffffe;
  bStack_d1 = *(byte *)(param_1 + 3);
  bVar6 = *(byte *)(param_2 + 0x2c);
  fVar11 = *(float *)(param_2 + 0x10);
  fVar9 = *(float *)(param_2 + 8);
  fVar1 = *(float *)(param_2 + 0xc);
  pdb_140a1aa60(&lStack_f0);
  pdb_140cb8ed0(&lStack_108,&lStack_f0,0x50);
  pdb_140cb8f80(&lStack_f0,&lStack_108,fVar10);
  pdb_140cb9030(&lStack_108,&lStack_f0);
  pbVar8 = pbStack_e8;
  fVar3 = _DAT_142e37830;
  fVar13 = (fVar11 + _DAT_142e382d0) * _DAT_142e36f50;
  fVar11 = _DAT_142e382d4 + fVar1;
  fVar10 = fVar10 + fVar1;
  if (lStack_e0 != 0) {
    pbVar5 = pbStack_e8 + 8;
    lVar7 = lStack_e0;
    do {
      uVar2 = *(ulonglong *)(pbVar5 + -8);
      if ((-1 < (longlong)uVar2) && (uVar2 != 0)) {
        pub_1406abac0(*(byte **)pbVar5,uVar2,1);
      }
      pbVar5 = pbVar5 + 0x20;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  fVar12 = fVar9 - fVar13;
  fVar9 = fVar9 + fVar13;
  if (lStack_f0 != 0) {
    pub_1406abac0(pbVar8,lStack_f0 << 5,8);
  }
  pdb_14072d170(param_2,fVar12,fVar11 + fVar3,fVar9,fVar10 + fVar3,&lStack_108);
  if (lStack_108 != 0) {
    pub_1406abac0(pbStack_100,lStack_108 << 2,4);
  }
  pdb_140a1aa60(&lStack_f0);
  pdb_140cb8ed0(&lStack_108,&lStack_f0,0xffffff40);
  pdb_140cb8f80(&lStack_f0,&lStack_108,_DAT_142e3788c);
  pdb_140cb9030(&lStack_108,&lStack_f0);
  pbVar8 = pbStack_e8;
  if (lStack_e0 != 0) {
    pbVar5 = pbStack_e8 + 8;
    lVar7 = lStack_e0;
    do {
      uVar2 = *(ulonglong *)(pbVar5 + -8);
      if ((-1 < (longlong)uVar2) && (uVar2 != 0)) {
        pub_1406abac0(*(byte **)pbVar5,uVar2,1);
      }
      pbVar5 = pbVar5 + 0x20;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  if (lStack_f0 != 0) {
    pub_1406abac0(pbVar8,lStack_f0 << 5,8);
  }
  pdb_14072d170(param_2,fVar12,fVar11,fVar9,fVar10,&lStack_108);
  bVar4 = bStack_d1;
  bVar6 = bVar6 | bStack_d1;
  if (lStack_108 != 0) {
    pub_1406abac0(pbStack_100,lStack_108 << 2,4);
  }
  fVar13 = *param_1;
  if ((bVar6 & 1) == 0) {
    pdb_140a1aa60(&lStack_f0);
    pdb_140cb8ed0(&lStack_108,&lStack_f0,0xffffffd0);
    pdb_140cb8f80(&lStack_f0,&lStack_108,_DAT_142e3788c);
    pdb_140cb9030(&lStack_108,&lStack_f0);
    pbVar8 = pbStack_e8;
    if (lStack_e0 != 0) {
      pbVar5 = pbStack_e8 + 8;
      lVar7 = lStack_e0;
      do {
        uVar2 = *(ulonglong *)(pbVar5 + -8);
        if ((-1 < (longlong)uVar2) && (uVar2 != 0)) {
          pub_1406abac0(*(byte **)pbVar5,uVar2,1);
        }
        pbVar5 = pbVar5 + 0x20;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
  }
  else {
    pdb_140a1aa60(&lStack_f0);
    pdb_140cb8ed0(&lStack_108,&lStack_f0,0xffffffff);
    pdb_140cb8f80(&lStack_f0,&lStack_108,_DAT_142e3788c);
    pdb_140cb9030(&lStack_108,&lStack_f0);
    pbVar8 = pbStack_e8;
    if (lStack_e0 != 0) {
      pbVar5 = pbStack_e8 + 8;
      lVar7 = lStack_e0;
      do {
        uVar2 = *(ulonglong *)(pbVar5 + -8);
        if ((-1 < (longlong)uVar2) && (uVar2 != 0)) {
          pub_1406abac0(*(byte **)pbVar5,uVar2,1);
        }
        pbVar5 = pbVar5 + 0x20;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
  }
  if (lStack_f0 != 0) {
    pub_1406abac0(pbVar8,lStack_f0 << 5,8);
  }
  fVar9 = fVar9 * fVar13 + (_DAT_142e36f28 - fVar13) * fVar12;
  pdb_14072d170(param_2,fVar12,fVar11,fVar9,fVar10,&lStack_108);
  if (lStack_108 != 0) {
    pub_1406abac0(pbStack_100,lStack_108 << 2,4);
  }
  fVar11 = _DAT_142e382d8;
  if ((bVar6 & 1) == 0) {
    fVar11 = _DAT_142e37ad8;
  }
  if (bVar4 != 0) {
    fVar11 = _DAT_142e37880;
  }
  pdb_140a1aa60(&lStack_f0);
  pdb_140cb8ed0(&lStack_108,&lStack_f0,0x60);
  pdb_140cb8f80(&lStack_f0,&lStack_108,fVar11);
  pdb_140cb9030(&lStack_108,&lStack_f0);
  pbVar8 = pbStack_e8;
  if (lStack_e0 != 0) {
    pbVar5 = pbStack_e8 + 8;
    lVar7 = lStack_e0;
    do {
      uVar2 = *(ulonglong *)(pbVar5 + -8);
      if ((-1 < (longlong)uVar2) && (uVar2 != 0)) {
        pub_1406abac0(*(byte **)pbVar5,uVar2,1);
      }
      pbVar5 = pbVar5 + 0x20;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  if (lStack_f0 != 0) {
    pub_1406abac0(pbVar8,lStack_f0 << 5,8);
  }
  pdb_14072d170(param_2,fVar9 - fVar11,fVar3 + (fVar1 - fVar11),fVar11 + fVar9,
                fVar1 + fVar11 + fVar3,&lStack_108);
  if (lStack_108 != 0) {
    pub_1406abac0(pbStack_100,lStack_108 << 2,4);
  }
  pdb_140a1aa60(&lStack_f0);
  pdb_140cb8ed0(&lStack_108,&lStack_f0,0xffffffff);
  pdb_140cb8f80(&lStack_f0,&lStack_108,fVar11);
  pdb_140cb9030(&lStack_108,&lStack_f0);
  if (lStack_e0 != 0) {
    pbVar8 = pbStack_e8 + 8;
    lVar7 = lStack_e0;
    do {
      uVar2 = *(ulonglong *)(pbVar8 + -8);
      if ((-1 < (longlong)uVar2) && (uVar2 != 0)) {
        pub_1406abac0(*(byte **)pbVar8,uVar2,1);
      }
      pbVar8 = pbVar8 + 0x20;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  if (lStack_f0 != 0) {
    pub_1406abac0(pbStack_e8,lStack_f0 << 5,8);
  }
  pdb_14072d170(param_2,fVar9 - fVar11,fVar1 - fVar11,fVar11 + fVar9,fVar1 + fVar11,&lStack_108);
  if (lStack_108 != 0) {
    pub_1406abac0(pbStack_100,lStack_108 << 2,4);
  }
  return;
}

