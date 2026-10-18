// VA 0x1409c4dd0, PDB extent 1666 bytes
// tabloid::Publisher::publish<country_core::systems::collision::world::ColliderDiff,enum2$<country_core::systems::collision::world::ColliderDelta> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tabloid/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   tabloid::Publisher::publish<country_core::systems::collision::world::ColliderDiff,enum2$<country_core::systems::collision::world::ColliderDelta>
   >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tabloid/src/lib.rs
   Extent: 1666 */

void pdb_1409c4dd0(longlong *param_1,byte *param_2)

{
  char *pcVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  byte *pbVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
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
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulonglong uStack_e0;
  ulonglong uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  longlong *plStack_b8;
  longlong *plStack_b0;
  byte *pbStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  byte *pbStack_88;
  byte *pbStack_80;
  byte bStack_72;
  undefined1 uStack_71;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  uVar12 = param_1[6] + 1;
  param_1[6] = uVar12;
  uStack_d0 = uVar12;
  pdb_1415e0840(param_1,param_2,&uStack_d0);
  bStack_72 = *param_2;
  uStack_90 = *(undefined4 *)(param_2 + 0xc);
  uStack_98 = *(undefined8 *)(param_2 + 4);
  pbStack_88 = (byte *)0x0;
  plVar9 = (longlong *)param_1[4];
  plStack_b0 = plVar9 + param_1[5];
  do {
    plStack_b8 = plVar9;
    if (plVar9 == plStack_b0) {
      if (pbStack_88 != (byte *)0x0) {
        pbStack_80 = pbStack_88;
        uStack_158 = pbStack_88;
        lVar4 = param_1[2];
        if (lVar4 == *param_1) {
          pdb_142d7e8a0(param_1);
        }
        *(byte **)(param_1[1] + lVar4 * 8) = pbStack_80;
        param_1[2] = lVar4 + 1;
      }
      return;
    }
    lVar4 = *plVar9;
    pcVar1 = (char *)(lVar4 + 0x10);
    LOCK();
    bVar13 = *(char *)(lVar4 + 0x10) == '\0';
    if (bVar13) {
      *(char *)(lVar4 + 0x10) = '\x01';
    }
    UNLOCK();
    if (!bVar13) {
      pdb_142dbd1a0(pcVar1);
    }
    pdb_140e9a150(pcVar1);
    pbStack_80 = (byte *)pcVar1;
    if ((*(longlong *)(lVar4 + 0x20) == 0) && (*(ulonglong *)(lVar4 + 0x18) < uVar12)) {
      if (pbStack_88 == (byte *)0x0) {
        plVar9 = (longlong *)pdb_14008d710(0);
        if (plVar9 == (longlong *)0x0) {
          pdb_142dc7890(&UNK_143326860);
          goto LAB_1409c51cb;
        }
        uStack_138 = (undefined4)*plVar9;
        uStack_134 = *(undefined4 *)((longlong)plVar9 + 4);
        uStack_130 = (undefined4)plVar9[1];
        uStack_12c = *(undefined4 *)((longlong)plVar9 + 0xc);
        *plVar9 = *plVar9 + 1;
        uVar8 = _UNK_143034148;
        uVar7 = _DAT_143034140;
        uVar6 = _UNK_143034138;
        uVar10 = _DAT_143034130;
        uStack_148 = _DAT_143034140;
        uStack_140 = _UNK_143034148;
        uStack_158 = (byte *)_DAT_143034130;
        uStack_150 = _UNK_143034138;
        plVar9 = (longlong *)pdb_14008d710(0);
        if (plVar9 == (longlong *)0x0) {
          pdb_142dc7890(&UNK_143326860);
          goto LAB_1409c51cb;
        }
        uStack_168 = (undefined4)*plVar9;
        uStack_164 = *(undefined4 *)((longlong)plVar9 + 4);
        uStack_160 = (undefined4)plVar9[1];
        uStack_15c = *(undefined4 *)((longlong)plVar9 + 0xc);
        *plVar9 = *plVar9 + 1;
        uStack_198 = uStack_138;
        uStack_194 = uStack_134;
        uStack_190 = uStack_130;
        uStack_18c = uStack_12c;
        uStack_1a8 = (undefined4)uStack_148;
        uStack_1a4 = uStack_148._4_4_;
        uStack_1a0 = (undefined4)uStack_140;
        uStack_19c = uStack_140._4_4_;
        uStack_1b8 = (undefined4)uStack_158;
        uStack_1b4 = uStack_158._4_4_;
        uStack_1b0 = (undefined4)uStack_150;
        uStack_1ac = uStack_150._4_4_;
        uStack_178 = uVar7;
        uStack_170 = uVar8;
        uStack_188 = uVar10;
        uStack_180 = uVar6;
        if ((bStack_72 & 1) == 0) {
          uStack_150 = CONCAT44(uStack_150._4_4_,uStack_90);
          uStack_158 = (byte *)uStack_98;
          uStack_71 = 1;
          pdb_1414b4b30(&uStack_1b8,&uStack_158);
        }
        else {
          uStack_c0 = uStack_90;
          uStack_c8 = uStack_98;
          uStack_71 = 1;
          uVar10 = pdb_14148b1b0(&uStack_198,&uStack_c8);
          uStack_71 = 1;
          pdb_140caafd0(&uStack_158,&uStack_1b8,uVar10,&uStack_c8);
          if ((char)uStack_150 == '\x11') {
            uStack_150 = CONCAT44(uStack_150._4_4_,uStack_90);
            uStack_158 = (byte *)uStack_98;
            uStack_71 = 1;
            pdb_1414b4b30(&uStack_188,&uStack_158);
          }
        }
        uStack_f0 = CONCAT44(uStack_164,uStack_168);
        uStack_e8 = CONCAT44(uStack_15c,uStack_160);
        uStack_100 = uStack_178;
        uStack_f8 = uStack_170;
        uStack_110 = (undefined4)uStack_188;
        uStack_10c = uStack_188._4_4_;
        uStack_108 = (undefined4)uStack_180;
        uStack_104 = uStack_180._4_4_;
        uStack_120 = uStack_198;
        uStack_11c = uStack_194;
        uStack_118 = uStack_190;
        uStack_114 = uStack_18c;
        uStack_130 = uStack_1a8;
        uStack_12c = uStack_1a4;
        uStack_128 = uStack_1a0;
        uStack_124 = uStack_19c;
        uStack_140 = CONCAT44(uStack_1b4,uStack_1b8);
        uStack_138 = uStack_1b0;
        uStack_134 = uStack_1ac;
        uStack_158 = (byte *)0x1;
        uStack_150 = 1;
        uStack_148 = 0;
        uStack_e0 = uVar12;
        pdb_14007ee60();
        pbVar11 = pub_1406abab0(0x80,8);
        if (pbVar11 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(8,0x80);
        }
        *(undefined8 *)(pbVar11 + 0x70) = uStack_e8;
        *(ulonglong *)(pbVar11 + 0x78) = uStack_e0;
        *(undefined8 *)(pbVar11 + 0x60) = uStack_f8;
        *(undefined8 *)(pbVar11 + 0x68) = uStack_f0;
        *(ulonglong *)(pbVar11 + 0x50) = CONCAT44(uStack_104,uStack_108);
        *(undefined8 *)(pbVar11 + 0x58) = uStack_100;
        *(ulonglong *)(pbVar11 + 0x40) = CONCAT44(uStack_114,uStack_118);
        *(ulonglong *)(pbVar11 + 0x48) = CONCAT44(uStack_10c,uStack_110);
        *(ulonglong *)(pbVar11 + 0x30) = CONCAT44(uStack_124,uStack_128);
        *(ulonglong *)(pbVar11 + 0x38) = CONCAT44(uStack_11c,uStack_120);
        *(ulonglong *)(pbVar11 + 0x20) = CONCAT44(uStack_134,uStack_138);
        *(ulonglong *)(pbVar11 + 0x28) = CONCAT44(uStack_12c,uStack_130);
        *(undefined8 *)(pbVar11 + 0x10) = uStack_148;
        *(undefined8 *)(pbVar11 + 0x18) = uStack_140;
        *(undefined4 *)pbVar11 = (undefined4)uStack_158;
        *(undefined4 *)(pbVar11 + 4) = uStack_158._4_4_;
        *(undefined4 *)(pbVar11 + 8) = (undefined4)uStack_150;
        *(undefined4 *)(pbVar11 + 0xc) = uStack_150._4_4_;
        pbStack_88 = pbVar11;
      }
      LOCK();
      lVar3 = *(longlong *)pbStack_88;
      *(longlong *)pbStack_88 = *(longlong *)pbStack_88 + 1;
      UNLOCK();
      pbStack_a8 = pbStack_88;
      if (*(longlong *)pbStack_88 == 0 || SCARRY8(lVar3,1) != *(longlong *)pbStack_88 < 0) {
LAB_1409c51cb:
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      puStack_a0 = (undefined8 *)(lVar4 + 0x20);
      plVar9 = (longlong *)*puStack_a0;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          pdb_140c7af60(puStack_a0);
        }
      }
      *puStack_a0 = pbStack_a8;
    }
    pbVar11 = pbStack_80;
    pdb_140e9a350(pbStack_80);
    plVar9 = plStack_b8 + 1;
    LOCK();
    cVar2 = *pbVar11;
    if (cVar2 == '\x01') {
      *pbVar11 = '\0';
    }
    UNLOCK();
    if (cVar2 != '\x01') {
      pdb_142dbcef0(pbVar11,0);
    }
  } while( true );
}

