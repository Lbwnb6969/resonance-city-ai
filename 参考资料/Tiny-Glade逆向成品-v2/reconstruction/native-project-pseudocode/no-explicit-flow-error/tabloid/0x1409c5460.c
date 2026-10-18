// VA 0x1409c5460, PDB extent 2220 bytes
// tabloid::Publisher::publish<country_core::utils::dirty_tiles::DirtyTiles,country_core::utils::dirty_tiles::DirtyTiles>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tabloid/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   tabloid::Publisher::publish<country_core::utils::dirty_tiles::DirtyTiles,country_core::utils::dirty_tiles::DirtyTiles>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tabloid/src/lib.rs
   Extent: 2220 */

void pdb_1409c5460(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  byte *pbVar71;
  ulonglong uVar72;
  char *pcVar73;
  longlong *plVar74;
  bool bVar75;
  ulonglong uStack_118;
  longlong *plStack_110;
  longlong *plStack_108;
  char *pcStack_100;
  byte *pbStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  undefined8 uStack_e0;
  
  uStack_e0 = 0xfffffffffffffffe;
  uVar72 = param_1[6] + 1;
  param_1[6] = uVar72;
  uStack_118 = uVar72;
  pdb_1415e1f80(param_1,param_2,&uStack_118);
  uVar9 = *param_2;
  uVar10 = param_2[1];
  uVar11 = param_2[2];
  uVar12 = param_2[3];
  uVar13 = param_2[4];
  uVar14 = param_2[5];
  uVar15 = param_2[6];
  uVar16 = param_2[7];
  uVar17 = param_2[8];
  uVar18 = param_2[9];
  uVar19 = param_2[10];
  uVar20 = param_2[0xb];
  uVar21 = param_2[0xc];
  uVar22 = param_2[0xd];
  uVar23 = param_2[0xe];
  uVar24 = param_2[0xf];
  uVar25 = param_2[0x10];
  uVar26 = param_2[0x11];
  uVar27 = param_2[0x12];
  uVar28 = param_2[0x13];
  uVar29 = param_2[0x14];
  uVar30 = param_2[0x15];
  uVar31 = param_2[0x16];
  uVar32 = param_2[0x17];
  uVar33 = param_2[0x18];
  uVar34 = param_2[0x19];
  uVar35 = param_2[0x1a];
  uVar36 = param_2[0x1b];
  uVar37 = param_2[0x1c];
  uVar38 = param_2[0x1d];
  uVar39 = param_2[0x1e];
  uVar40 = param_2[0x1f];
  pbStack_f0 = (byte *)0x0;
  plVar74 = (longlong *)param_1[4];
  plStack_108 = plVar74 + param_1[5];
  uVar41 = param_2[0x20];
  uVar42 = param_2[0x21];
  uVar43 = param_2[0x22];
  uVar44 = param_2[0x23];
  uVar45 = param_2[0x24];
  uVar46 = param_2[0x25];
  uVar47 = param_2[0x26];
  uVar48 = param_2[0x27];
  uVar49 = param_2[0x28];
  uVar50 = param_2[0x29];
  uVar5 = *(undefined4 *)(param_2 + 0x2a);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x154);
  uVar7 = *(undefined4 *)(param_2 + 0x2b);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x15c);
  uVar51 = param_2[0x2c];
  uVar52 = param_2[0x2d];
  uVar53 = param_2[0x2e];
  uVar54 = param_2[0x2f];
  uVar55 = param_2[0x30];
  uVar56 = param_2[0x31];
  uVar57 = param_2[0x32];
  uVar58 = param_2[0x33];
  uVar59 = param_2[0x34];
  uVar60 = param_2[0x35];
  uVar61 = param_2[0x36];
  uVar62 = param_2[0x37];
  uVar63 = param_2[0x38];
  uVar64 = param_2[0x39];
  uVar65 = param_2[0x3a];
  uVar66 = param_2[0x3b];
  uVar67 = param_2[0x3c];
  uVar68 = param_2[0x3d];
  uVar69 = param_2[0x3e];
  uVar70 = param_2[0x3f];
  do {
    plStack_110 = plVar74;
    if (plVar74 == plStack_108) {
      if (pbStack_f0 != (byte *)0x0) {
        pbStack_e8 = pbStack_f0;
        lVar3 = param_1[2];
        if (lVar3 == *param_1) {
          pdb_142d7e8a0(param_1);
        }
        *(byte **)(param_1[1] + lVar3 * 8) = pbStack_e8;
        param_1[2] = lVar3 + 1;
      }
      return;
    }
    lVar3 = *plVar74;
    pcVar73 = (char *)(lVar3 + 0x10);
    LOCK();
    bVar75 = *(char *)(lVar3 + 0x10) == '\0';
    if (bVar75) {
      *(char *)(lVar3 + 0x10) = '\x01';
    }
    UNLOCK();
    if (!bVar75) {
      pdb_142dbd1a0(pcVar73);
    }
    pdb_140e9a150(pcVar73);
    if ((*(longlong *)(lVar3 + 0x20) == 0) && (*(ulonglong *)(lVar3 + 0x18) < uVar72)) {
      pcStack_100 = pcVar73;
      if (pbStack_f0 == (byte *)0x0) {
        pdb_14007ee60();
        pbVar71 = pub_1406abab0(0x220,8);
        if (pbVar71 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(8,0x220);
        }
        pbVar71[0] = 1;
        pbVar71[1] = 0;
        pbVar71[2] = 0;
        pbVar71[3] = 0;
        pbVar71[4] = 0;
        pbVar71[5] = 0;
        pbVar71[6] = 0;
        pbVar71[7] = 0;
        pbVar71[8] = 1;
        pbVar71[9] = 0;
        pbVar71[10] = 0;
        pbVar71[0xb] = 0;
        pbVar71[0xc] = 0;
        pbVar71[0xd] = 0;
        pbVar71[0xe] = 0;
        pbVar71[0xf] = 0;
        pbVar71[0x10] = 0;
        pbVar71[0x11] = 0;
        pbVar71[0x12] = 0;
        pbVar71[0x13] = 0;
        pbVar71[0x14] = 0;
        pbVar71[0x15] = 0;
        pbVar71[0x16] = 0;
        pbVar71[0x17] = 0;
        *(undefined8 *)(pbVar71 + 0x18) = uVar9;
        *(undefined8 *)(pbVar71 + 0x20) = uVar10;
        *(undefined8 *)(pbVar71 + 0x28) = uVar11;
        *(undefined8 *)(pbVar71 + 0x30) = uVar12;
        *(undefined8 *)(pbVar71 + 0x38) = uVar13;
        *(undefined8 *)(pbVar71 + 0x40) = uVar14;
        *(undefined8 *)(pbVar71 + 0x48) = uVar15;
        *(undefined8 *)(pbVar71 + 0x50) = uVar16;
        *(undefined8 *)(pbVar71 + 0x58) = uVar17;
        *(undefined8 *)(pbVar71 + 0x60) = uVar18;
        *(undefined8 *)(pbVar71 + 0x68) = uVar19;
        *(undefined8 *)(pbVar71 + 0x70) = uVar20;
        *(undefined8 *)(pbVar71 + 0x78) = uVar21;
        *(undefined8 *)(pbVar71 + 0x80) = uVar22;
        *(undefined8 *)(pbVar71 + 0x88) = uVar23;
        *(undefined8 *)(pbVar71 + 0x90) = uVar24;
        *(undefined8 *)(pbVar71 + 0x98) = uVar25;
        *(undefined8 *)(pbVar71 + 0xa0) = uVar26;
        *(undefined8 *)(pbVar71 + 0xa8) = uVar27;
        *(undefined8 *)(pbVar71 + 0xb0) = uVar28;
        *(undefined8 *)(pbVar71 + 0xb8) = uVar29;
        *(undefined8 *)(pbVar71 + 0xc0) = uVar30;
        *(undefined8 *)(pbVar71 + 200) = uVar31;
        *(undefined8 *)(pbVar71 + 0xd0) = uVar32;
        *(undefined8 *)(pbVar71 + 0xd8) = uVar33;
        *(undefined8 *)(pbVar71 + 0xe0) = uVar34;
        *(undefined8 *)(pbVar71 + 0xe8) = uVar35;
        *(undefined8 *)(pbVar71 + 0xf0) = uVar36;
        *(undefined8 *)(pbVar71 + 0xf8) = uVar37;
        *(undefined8 *)(pbVar71 + 0x100) = uVar38;
        *(undefined8 *)(pbVar71 + 0x108) = uVar39;
        *(undefined8 *)(pbVar71 + 0x110) = uVar40;
        *(undefined8 *)(pbVar71 + 0x118) = uVar41;
        *(undefined8 *)(pbVar71 + 0x120) = uVar42;
        *(undefined8 *)(pbVar71 + 0x128) = uVar43;
        *(undefined8 *)(pbVar71 + 0x130) = uVar44;
        *(undefined8 *)(pbVar71 + 0x138) = uVar45;
        *(undefined8 *)(pbVar71 + 0x140) = uVar46;
        *(undefined8 *)(pbVar71 + 0x148) = uVar47;
        *(undefined8 *)(pbVar71 + 0x150) = uVar48;
        *(undefined8 *)(pbVar71 + 0x158) = uVar49;
        *(undefined8 *)(pbVar71 + 0x160) = uVar50;
        *(undefined4 *)(pbVar71 + 0x168) = uVar5;
        *(undefined4 *)(pbVar71 + 0x16c) = uVar6;
        *(undefined4 *)(pbVar71 + 0x170) = uVar7;
        *(undefined4 *)(pbVar71 + 0x174) = uVar8;
        *(undefined8 *)(pbVar71 + 0x178) = uVar51;
        *(undefined8 *)(pbVar71 + 0x180) = uVar52;
        *(undefined8 *)(pbVar71 + 0x188) = uVar53;
        *(undefined8 *)(pbVar71 + 400) = uVar54;
        *(undefined8 *)(pbVar71 + 0x198) = uVar55;
        *(undefined8 *)(pbVar71 + 0x1a0) = uVar56;
        *(undefined8 *)(pbVar71 + 0x1a8) = uVar57;
        *(undefined8 *)(pbVar71 + 0x1b0) = uVar58;
        *(undefined8 *)(pbVar71 + 0x1b8) = uVar59;
        *(undefined8 *)(pbVar71 + 0x1c0) = uVar60;
        *(undefined8 *)(pbVar71 + 0x1c8) = uVar61;
        *(undefined8 *)(pbVar71 + 0x1d0) = uVar62;
        *(undefined8 *)(pbVar71 + 0x1d8) = uVar63;
        *(undefined8 *)(pbVar71 + 0x1e0) = uVar64;
        *(undefined8 *)(pbVar71 + 0x1e8) = uVar65;
        *(undefined8 *)(pbVar71 + 0x1f0) = uVar66;
        *(undefined8 *)(pbVar71 + 0x1f8) = uVar67;
        *(undefined8 *)(pbVar71 + 0x200) = uVar68;
        *(undefined8 *)(pbVar71 + 0x208) = uVar69;
        *(undefined8 *)(pbVar71 + 0x210) = uVar70;
        *(ulonglong *)(pbVar71 + 0x218) = uVar72;
        pbStack_f0 = pbVar71;
      }
      LOCK();
      lVar2 = *(longlong *)pbStack_f0;
      *(longlong *)pbStack_f0 = *(longlong *)pbStack_f0 + 1;
      UNLOCK();
      pbStack_f8 = pbStack_f0;
      if (*(longlong *)pbStack_f0 == 0 || SCARRY8(lVar2,1) != *(longlong *)pbStack_f0 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      pbStack_e8 = (byte *)(lVar3 + 0x20);
      plVar74 = *(longlong **)pbStack_e8;
      if (plVar74 != (longlong *)0x0) {
        LOCK();
        *plVar74 = *plVar74 + -1;
        UNLOCK();
        if (*plVar74 == 0) {
          pdb_140c7ba10(pbStack_e8);
        }
      }
      *(byte **)pbStack_e8 = pbStack_f8;
      pcVar73 = pcStack_100;
    }
    pdb_140e9a350(pcVar73);
    plVar74 = plStack_110 + 1;
    LOCK();
    cVar1 = *pcVar73;
    if (cVar1 == '\x01') {
      *pcVar73 = '\0';
    }
    UNLOCK();
    if (cVar1 != '\x01') {
      pdb_142dbcef0(pcVar73,0);
    }
  } while( true );
}

