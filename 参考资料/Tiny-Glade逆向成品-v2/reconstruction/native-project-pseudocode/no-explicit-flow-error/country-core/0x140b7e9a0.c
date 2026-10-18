// VA 0x140b7e9a0, PDB extent 1706 bytes
// country_core::systems::save::load_completion_checker::is_session_ok_to_load
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/load_completion_checker.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::save::load_completion_checker::is_session_ok_to_load
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/load_completion_checker.rs
   Extent: 1706 */

ulonglong pdb_140b7e9a0(ulonglong *param_1,longlong param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  ulonglong *puVar4;
  byte *pbVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  bool bVar12;
  ulonglong uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 uStack_168;
  ulonglong uStack_158;
  byte *pbStack_150;
  undefined8 uStack_148;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
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
  ulonglong uStack_f8;
  byte *pbStack_f0;
  byte bStack_e8;
  undefined7 uStack_e7;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  char cStack_c0;
  char cStack_bf;
  undefined6 uStack_be;
  undefined8 uStack_b8;
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
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  ulonglong *puStack_60;
  byte *pbStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puStack_60 = param_1;
  pdb_140a937d0(&uStack_b8);
  uStack_50 = (byte *)CONCAT44(uStack_ac,uStack_b0);
  pdb_140f3e9e0(&uStack_158,uStack_50,CONCAT44(uStack_a4,uStack_a8),&UNK_14305ca70,0xc);
  if (uStack_b8 != (undefined *)0x0) {
    pub_1406abac0(uStack_50,(ulonglong)uStack_b8,1);
  }
  pbVar5 = pbStack_150;
  if (param_2 != 0) {
    lVar9 = *(longlong *)(param_2 + 0x168) + 0x10;
    cVar6 = pdb_141c608e0(lVar9,pbStack_150,uStack_148);
    uStack_50 = (byte *)CONCAT44(uStack_50._4_4_,(int)CONCAT71((int7)((ulonglong)lVar9 >> 8),1));
    if (cVar6 == '\0') {
      lVar9 = *(longlong *)(param_2 + 0x18);
      lVar11 = *(longlong *)(param_2 + 0x20) * 0x40 + lVar9;
      do {
        if (lVar9 == lVar11) goto LAB_140b7eb82;
        pdb_140f3ddd0(&uStack_f8,*(undefined8 *)(lVar9 + 8),*(undefined8 *)(lVar9 + 0x10));
        pdb_140f3ddd0(&uStack_138,pbVar5,uStack_148);
        if ((((pbStack_f0 == (byte *)CONCAT44(uStack_12c,uStack_130)) &&
             (cStack_c0 == (char)uStack_100)) && (cStack_bf == '\x02')) &&
           (((uStack_100._1_1_ == '\x02' && ((byte)uStack_128 < 3 == bStack_e8 < 3)) &&
            (iVar8 = pub_142e32750(uStack_f8,CONCAT44(uStack_134,uStack_138)), iVar8 == 0)))) break;
        uStack_1a8 = CONCAT71(uStack_e7,bStack_e8);
        uStack_180 = CONCAT62(uStack_be,CONCAT11(cStack_bf,cStack_c0));
        uStack_188 = uStack_c8;
        uStack_198 = uStack_d8;
        uStack_190 = uStack_d0;
        uStack_1a0 = uStack_e0;
        uStack_1b8 = uStack_f8;
        uStack_1b0 = pbStack_f0;
        uStack_88 = uStack_108;
        uStack_84 = uStack_104;
        uStack_80 = uStack_100;
        uStack_7c = uStack_fc;
        uStack_98 = uStack_118;
        uStack_94 = uStack_114;
        uStack_90 = uStack_110;
        uStack_8c = uStack_10c;
        uStack_a8 = uStack_128;
        uStack_a4 = uStack_124;
        uStack_a0 = uStack_120;
        uStack_9c = uStack_11c;
        uStack_b8 = (undefined *)CONCAT44(uStack_134,uStack_138);
        uStack_b0 = uStack_130;
        uStack_ac = uStack_12c;
        cVar6 = pdb_141b03d50(&uStack_1b8,&uStack_b8);
        lVar9 = lVar9 + 0x40;
      } while (cVar6 == '\0');
    }
    goto LAB_140b7edea;
  }
LAB_140b7eb82:
  uStack_b8 = (undefined *)*puStack_60;
  uStack_b0 = (undefined4)puStack_60[1];
  uStack_ac = *(undefined4 *)((longlong)puStack_60 + 0xc);
  puVar10 = &uStack_b8;
  cVar6 = pdb_140a3b9e0(puVar10);
  uStack_50 = (byte *)CONCAT44(uStack_50._4_4_,(int)CONCAT71((int7)((ulonglong)puVar10 >> 8),2));
  if (cVar6 != '\0') goto LAB_140b7edea;
  pdb_140a937d0(&uStack_138,puStack_60);
  uStack_50 = (byte *)CONCAT44(uStack_12c,uStack_130);
  pdb_140f3e9e0(&uStack_f8,uStack_50,CONCAT44(uStack_124,uStack_128),&UNK_14305ca08,0xb);
  pbStack_58 = pbStack_f0;
  pdb_140f4f620(&uStack_b8,pbStack_f0,CONCAT71(uStack_e7,bStack_e8));
  if ((int)uStack_b8 == 2) {
    uStack_1b8 = 2;
LAB_140b7ec70:
    uStack_1b0 = (byte *)CONCAT44(uStack_ac,uStack_b0);
    pdb_1404b38e0(&uStack_1b0);
    if (uStack_f8 != 0) {
      pub_1406abac0(pbStack_58,uStack_f8,1);
    }
    if (CONCAT44(uStack_134,uStack_138) != 0) {
      pub_1406abac0(uStack_50,CONCAT44(uStack_134,uStack_138),1);
      uStack_50 = (byte *)((ulonglong)uStack_50 & 0xffffffff00000000);
      goto LAB_140b7edea;
    }
  }
  else {
    uStack_1b0 = (byte *)CONCAT44(uStack_ac,uStack_b0);
    uStack_1a8 = CONCAT44(uStack_a4,uStack_a8);
    uStack_1a0 = CONCAT44(uStack_9c,uStack_a0);
    uStack_198 = CONCAT44(uStack_94,uStack_98);
    uStack_190 = CONCAT44(uStack_8c,uStack_90);
    uStack_188 = CONCAT44(uStack_84,uStack_88);
    uStack_180 = CONCAT44(uStack_7c,uStack_80);
    uStack_1b8 = (ulonglong)uStack_b8;
    uStack_168 = uStack_68;
    uStack_178 = uStack_78;
    uStack_174 = uStack_74;
    uStack_170 = uStack_70;
    uStack_16c = uStack_6c;
    if (uStack_b8 == (undefined *)0x2) goto LAB_140b7ec70;
    if (uStack_f8 != 0) {
      pub_1406abac0(pbStack_58,uStack_f8,1);
    }
    if (CONCAT44(uStack_134,uStack_138) != 0) {
      pub_1406abac0(uStack_50,CONCAT44(uStack_134,uStack_138),1);
    }
    LOCK();
    bVar12 = DAT_143ca4448 == '\0';
    if (bVar12) {
      DAT_143ca4448 = '\x01';
    }
    UNLOCK();
    if (!bVar12) {
      pdb_142dc6be0(&DAT_143ca4448);
    }
    puVar4 = _DAT_143ca8f38;
    if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
      bVar7 = 0;
      lVar9 = _DAT_143ca4458;
    }
    else {
      bVar7 = pdb_142dc79e0();
      bVar7 = bVar7 ^ 1;
      lVar9 = _DAT_143ca4458;
    }
    _DAT_143ca4458 = lVar9;
    if (DAT_143ca4449 != '\0') {
      uStack_b8 = &DAT_143ca4448;
      uVar3 = (uint)uStack_b0 >> 8;
      uStack_b0 = CONCAT31((int3)uVar3,bVar7);
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14305cbe0,0x2b,&uStack_b8,&UNK_14305cbc0,&UNK_14305ca80);
    }
    lVar11 = 0;
    do {
      if (_DAT_143ca4460 * 0x10 == lVar11) {
        if (((bVar7 == 0) && ((*puVar4 & 0x7fffffffffffffff) != 0)) &&
           (cVar6 = pdb_142dc79e0(), cVar6 == '\0')) {
          DAT_143ca4449 = '\x01';
        }
        cVar6 = DAT_143ca4448;
        LOCK();
        DAT_143ca4448 = '\0';
        UNLOCK();
        uStack_50 = (byte *)CONCAT44(uStack_50._4_4_,(int)CONCAT71((int7)((ulonglong)lVar9 >> 8),3))
        ;
        if (cVar6 == '\x02') {
          pdb_142dc6ca0(&DAT_143ca4448);
        }
        goto LAB_140b7edea;
      }
      puVar1 = (ulonglong *)(lVar9 + lVar11);
      puVar2 = (ulonglong *)(lVar9 + 8 + lVar11);
      lVar11 = lVar11 + 0x10;
    } while (*puVar2 != puStack_60[1] || *puVar1 != *puStack_60);
    if (((bVar7 == 0) && ((*puVar4 & 0x7fffffffffffffff) != 0)) &&
       (cVar6 = pdb_142dc79e0(), cVar6 == '\0')) {
      DAT_143ca4449 = '\x01';
    }
    cVar6 = DAT_143ca4448;
    uStack_50 = (byte *)((ulonglong)uStack_50._4_4_ << 0x20);
    LOCK();
    DAT_143ca4448 = '\0';
    UNLOCK();
    if (cVar6 != '\x02') goto LAB_140b7edea;
    pdb_142dc6ca0(&DAT_143ca4448);
  }
  uStack_50 = (byte *)((ulonglong)uStack_50 & 0xffffffff00000000);
LAB_140b7edea:
  if (uStack_158 != 0) {
    pub_1406abac0(pbStack_150,uStack_158,1);
  }
  return (ulonglong)uStack_50 & 0xffffffff;
}

