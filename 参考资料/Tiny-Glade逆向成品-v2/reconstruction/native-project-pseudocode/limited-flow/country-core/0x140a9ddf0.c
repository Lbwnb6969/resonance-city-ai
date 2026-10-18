// VA 0x140a9ddf0, PDB extent 2592 bytes
// country_core::startup::load_textures::GladeTextureMappings::create_mappings
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_textures.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::startup::load_textures::GladeTextureMappings::create_mappings
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_textures.rs
   Extent: 2592 */

void pdb_140a9ddf0(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  byte *pbVar6;
  undefined8 uVar7;
  byte **ppbStack_68;
  code *pcStack_60;
  undefined8 *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  byte *pbStack_38;
  undefined8 uStack_30;
  byte *pbStack_28;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pbVar6 = pub_1406abab0(0x14,1);
  uVar4 = _UNK_143046614;
  uVar3 = _UNK_143046610;
  uVar2 = _UNK_14304660c;
  if (pbVar6 == (byte *)0x0) {
LAB_140a9e5c0:
    pdb_142dc7e2a(1,0x14);
LAB_140a9e5cf:
    pdb_142dc7e2a(1,0x15);
LAB_140a9e5de:
    pdb_142dc7e2a(1,0x11);
LAB_140a9e5ed:
    pdb_142dc7e2a(1,0xd);
LAB_140a9e5fc:
    pdb_142dc7e2a(1,0x12);
  }
  else {
    *(undefined4 *)pbVar6 = _DAT_143046608;
    *(undefined4 *)(pbVar6 + 4) = uVar2;
    *(undefined4 *)(pbVar6 + 8) = uVar3;
    *(undefined4 *)(pbVar6 + 0xc) = uVar4;
    pbVar6[0x10] = 0x6f;
    pbVar6[0x11] = 0x6c;
    pbVar6[0x12] = 0x6f;
    pbVar6[0x13] = 0x72;
    uStack_48 = *(undefined8 *)(param_1 + 8);
    puStack_40 = *(undefined **)(param_1 + 0x10);
    uStack_30 = 0x14;
    pbStack_38 = pbVar6;
    pbStack_28 = pbVar6;
    cVar5 = pdb_140a2ead0(param_2,pbVar6,0x14,uStack_48,puStack_40);
    if (cVar5 == '\0') {
      ppbStack_68 = &pbStack_38;
      pcStack_60 = pdb_1402ed420;
      puStack_58 = &uStack_48;
      pcStack_50 = pdb_1402ed420;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_143039f70,&ppbStack_68,&UNK_143039fc0);
    }
    pub_1406abac0(pbStack_28,0x14,1);
    pdb_14007ee60();
    pbVar6 = pub_1406abab0(0x1a,1);
    uVar7 = _UNK_14304662e;
    if (pbVar6 == (byte *)0x0) {
LAB_140a9e5b1:
      pdb_142dc7e2a(1,0x1a);
      goto LAB_140a9e5c0;
    }
    *(ulonglong *)(pbVar6 + 10) = CONCAT26(_UNK_14304662c,CONCAT42(_UNK_143046628,_DAT_143046626));
    *(undefined8 *)(pbVar6 + 0x12) = uVar7;
    uVar4 = _UNK_143046628;
    uVar3 = _UNK_143046620;
    uVar2 = CONCAT22(_DAT_143046626,_UNK_143046624);
    *(undefined4 *)pbVar6 = _DAT_14304661c;
    *(undefined4 *)(pbVar6 + 4) = uVar3;
    *(undefined4 *)(pbVar6 + 8) = uVar2;
    *(undefined4 *)(pbVar6 + 0xc) = uVar4;
    uStack_48 = *(undefined8 *)(param_1 + 0x20);
    puStack_40 = *(undefined **)(param_1 + 0x28);
    uStack_30 = 0x1a;
    pbStack_38 = pbVar6;
    pbStack_28 = pbVar6;
    cVar5 = pdb_140a2ead0(param_2,pbVar6,0x1a,uStack_48,puStack_40);
    if (cVar5 == '\0') {
      ppbStack_68 = &pbStack_38;
      pcStack_60 = pdb_1402ed420;
      puStack_58 = &uStack_48;
      pcStack_50 = pdb_1402ed420;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_143039f70,&ppbStack_68,&UNK_143039fc0);
    }
    pub_1406abac0(pbStack_28,0x1a,1);
    pdb_14007ee60();
    pbVar6 = pub_1406abab0(0x1a,1);
    uVar7 = _UNK_143046648;
    if (pbVar6 == (byte *)0x0) goto LAB_140a9e5b1;
    *(ulonglong *)(pbVar6 + 10) = CONCAT26(_UNK_143046646,CONCAT42(_UNK_143046642,_DAT_143046640));
    *(undefined8 *)(pbVar6 + 0x12) = uVar7;
    uVar4 = _UNK_143046642;
    uVar3 = _UNK_14304663a;
    uVar2 = CONCAT22(_DAT_143046640,_UNK_14304663e);
    *(undefined4 *)pbVar6 = _DAT_143046636;
    *(undefined4 *)(pbVar6 + 4) = uVar3;
    *(undefined4 *)(pbVar6 + 8) = uVar2;
    *(undefined4 *)(pbVar6 + 0xc) = uVar4;
    uStack_48 = *(undefined8 *)(param_1 + 0x38);
    puStack_40 = *(undefined **)(param_1 + 0x40);
    uStack_30 = 0x1a;
    pbStack_38 = pbVar6;
    pbStack_28 = pbVar6;
    cVar5 = pdb_140a2ead0(param_2,pbVar6,0x1a,uStack_48,puStack_40);
    if (cVar5 == '\0') {
      ppbStack_68 = &pbStack_38;
      pcStack_60 = pdb_1402ed420;
      puStack_58 = &uStack_48;
      pcStack_50 = pdb_1402ed420;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_143039f70,&ppbStack_68,&UNK_143039fc0);
    }
    pub_1406abac0(pbStack_28,0x1a,1);
    pdb_14007ee60();
    pbVar6 = pub_1406abab0(0x15,1);
    uVar4 = _UNK_14304665c;
    uVar3 = _UNK_143046658;
    uVar2 = _UNK_143046654;
    if (pbVar6 == (byte *)0x0) goto LAB_140a9e5cf;
    *(undefined4 *)pbVar6 = _DAT_143046650;
    *(undefined4 *)(pbVar6 + 4) = uVar2;
    *(undefined4 *)(pbVar6 + 8) = uVar3;
    *(undefined4 *)(pbVar6 + 0xc) = uVar4;
    pbVar6[0xd] = 0x5f;
    pbVar6[0xe] = 0x74;
    pbVar6[0xf] = 0x65;
    pbVar6[0x10] = 0x78;
    pbVar6[0x11] = 0x74;
    pbVar6[0x12] = 0x75;
    pbVar6[0x13] = 0x72;
    pbVar6[0x14] = 0x65;
    uStack_48 = *(undefined8 *)(param_1 + 0x50);
    puStack_40 = *(undefined **)(param_1 + 0x58);
    uStack_30 = 0x15;
    pbStack_38 = pbVar6;
    pbStack_28 = pbVar6;
    cVar5 = pdb_140a2ead0(param_2,pbVar6,0x15,uStack_48,puStack_40);
    if (cVar5 == '\0') {
      ppbStack_68 = &pbStack_38;
      pcStack_60 = pdb_1402ed420;
      puStack_58 = &uStack_48;
      pcStack_50 = pdb_1402ed420;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_143039f70,&ppbStack_68,&UNK_143039fc0);
    }
    pub_1406abac0(pbStack_28,0x15,1);
    pdb_14007ee60();
    pbVar6 = pub_1406abab0(0x11,1);
    uVar4 = _UNK_143046671;
    uVar3 = _UNK_14304666d;
    uVar2 = _UNK_143046669;
    if (pbVar6 == (byte *)0x0) goto LAB_140a9e5de;
    *(undefined4 *)pbVar6 = _DAT_143046665;
    *(undefined4 *)(pbVar6 + 4) = uVar2;
    *(undefined4 *)(pbVar6 + 8) = uVar3;
    *(undefined4 *)(pbVar6 + 0xc) = uVar4;
    pbVar6[0x10] = 0x68;
    uStack_48 = *(undefined8 *)(param_1 + 0x68);
    puStack_40 = *(undefined **)(param_1 + 0x70);
    uStack_30 = 0x11;
    pbStack_38 = pbVar6;
    pbStack_28 = pbVar6;
    cVar5 = pdb_140a2ead0(param_2,pbVar6,0x11,uStack_48,puStack_40);
    if (cVar5 == '\0') {
      ppbStack_68 = &pbStack_38;
      pcStack_60 = pdb_1402ed420;
      puStack_58 = &uStack_48;
      pcStack_50 = pdb_1402ed420;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_143039f70,&ppbStack_68,&UNK_143039fc0);
    }
    pub_1406abac0(pbStack_28,0x11,1);
    pdb_14007ee60();
    pbVar6 = pub_1406abab0(0xd,1);
    if (pbVar6 == (byte *)0x0) goto LAB_140a9e5ed;
    pbVar6[5] = 0x3a;
    pbVar6[6] = 0x66;
    pbVar6[7] = 0x6c;
    pbVar6[8] = 0x6f;
    pbVar6[9] = 0x77;
    pbVar6[10] = 0x65;
    pbVar6[0xb] = 0x72;
    pbVar6[0xc] = 0x31;
    pbVar6[0] = 0x67;
    pbVar6[1] = 0x6c;
    pbVar6[2] = 0x61;
    pbVar6[3] = 100;
    pbVar6[4] = 0x65;
    pbVar6[5] = 0x3a;
    pbVar6[6] = 0x66;
    pbVar6[7] = 0x6c;
    uStack_48 = *(undefined8 *)(param_1 + 0x80);
    puStack_40 = *(undefined **)(param_1 + 0x88);
    uStack_30 = 0xd;
    pbStack_38 = pbVar6;
    pbStack_28 = pbVar6;
    cVar5 = pdb_140a2ead0(param_2,pbVar6,0xd,uStack_48,puStack_40);
    if (cVar5 == '\0') {
      ppbStack_68 = &pbStack_38;
      pcStack_60 = pdb_1402ed420;
      puStack_58 = &uStack_48;
      pcStack_50 = pdb_1402ed420;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_143039f70,&ppbStack_68,&UNK_143039fc0);
    }
    pub_1406abac0(pbStack_28,0xd,1);
    pdb_14007ee60();
    pbVar6 = pub_1406abab0(0x14,1);
    uVar4 = _UNK_143046682;
    uVar3 = _UNK_14304667e;
    uVar2 = _UNK_14304667a;
    if (pbVar6 == (byte *)0x0) goto LAB_140a9e5c0;
    *(undefined4 *)pbVar6 = _DAT_143046676;
    *(undefined4 *)(pbVar6 + 4) = uVar2;
    *(undefined4 *)(pbVar6 + 8) = uVar3;
    *(undefined4 *)(pbVar6 + 0xc) = uVar4;
    pbVar6[0x10] = 0x6f;
    pbVar6[0x11] = 0x77;
    pbVar6[0x12] = 0x65;
    pbVar6[0x13] = 0x72;
    uStack_48 = *(undefined8 *)(param_1 + 0x98);
    puStack_40 = *(undefined **)(param_1 + 0xa0);
    uStack_30 = 0x14;
    pbStack_38 = pbVar6;
    pbStack_28 = pbVar6;
    cVar5 = pdb_140a2ead0(param_2,pbVar6,0x14,uStack_48,puStack_40);
    if (cVar5 == '\0') {
      ppbStack_68 = &pbStack_38;
      pcStack_60 = pdb_1402ed420;
      puStack_58 = &uStack_48;
      pcStack_50 = pdb_1402ed420;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_143039f70,&ppbStack_68,&UNK_143039fc0);
    }
    pub_1406abac0(pbStack_28,0x14,1);
    pdb_14007ee60();
    pbVar6 = pub_1406abab0(0x12,1);
    uVar4 = _UNK_143046696;
    uVar3 = _UNK_143046692;
    uVar2 = _UNK_14304668e;
    if (pbVar6 == (byte *)0x0) goto LAB_140a9e5fc;
    *(undefined4 *)pbVar6 = _DAT_14304668a;
    *(undefined4 *)(pbVar6 + 4) = uVar2;
    *(undefined4 *)(pbVar6 + 8) = uVar3;
    *(undefined4 *)(pbVar6 + 0xc) = uVar4;
    pbVar6[0x10] = 0x6f;
    pbVar6[0x11] = 0x72;
    uStack_48 = *(undefined8 *)(param_1 + 0xb0);
    puStack_40 = *(undefined **)(param_1 + 0xb8);
    uStack_30 = 0x12;
    pbStack_38 = pbVar6;
    pbStack_28 = pbVar6;
    cVar5 = pdb_140a2ead0(param_2,pbVar6,0x12,uStack_48,puStack_40);
    if (cVar5 == '\0') {
      ppbStack_68 = &pbStack_38;
      pcStack_60 = pdb_1402ed420;
      puStack_58 = &uStack_48;
      pcStack_50 = pdb_1402ed420;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_143039f70,&ppbStack_68,&UNK_143039fc0);
    }
    pub_1406abac0(pbStack_28,0x12,1);
    pdb_14007ee60();
    pbVar6 = pub_1406abab0(0x16,1);
    uVar4 = _UNK_1430466a8;
    uVar3 = _UNK_1430466a4;
    uVar2 = _UNK_1430466a0;
    if (pbVar6 != (byte *)0x0) {
      *(undefined4 *)pbVar6 = _DAT_14304669c;
      *(undefined4 *)(pbVar6 + 4) = uVar2;
      *(undefined4 *)(pbVar6 + 8) = uVar3;
      *(undefined4 *)(pbVar6 + 0xc) = uVar4;
      pbVar6[0xe] = 0x6f;
      pbVar6[0xf] = 0x72;
      pbVar6[0x10] = 0x5f;
      pbVar6[0x11] = 0x6e;
      pbVar6[0x12] = 0x61;
      pbVar6[0x13] = 0x6b;
      pbVar6[0x14] = 0x65;
      pbVar6[0x15] = 100;
      uStack_48 = *(undefined8 *)(param_1 + 200);
      puStack_40 = *(undefined **)(param_1 + 0xd0);
      uStack_30 = 0x16;
      pbStack_38 = pbVar6;
      pbStack_28 = pbVar6;
      cVar5 = pdb_140a2ead0(param_2,pbVar6,0x16,uStack_48,puStack_40);
      if (cVar5 == '\0') {
        ppbStack_68 = &pbStack_38;
        pcStack_60 = pdb_1402ed420;
        puStack_58 = &uStack_48;
        pcStack_50 = pdb_1402ed420;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_143039f70,&ppbStack_68,&UNK_143039fc0);
      }
      pub_1406abac0(pbStack_28,0x16,1);
      pdb_14007ee60();
      pbVar6 = pub_1406abab0(0x1d,1);
      uVar7 = _UNK_1430466c7;
      if (pbVar6 != (byte *)0x0) {
        *(ulonglong *)(pbVar6 + 0xd) = CONCAT53(_UNK_1430466c2,_DAT_1430466bf);
        *(undefined8 *)(pbVar6 + 0x15) = uVar7;
        uVar4 = _UNK_1430466be;
        uVar3 = _UNK_1430466ba;
        uVar2 = _UNK_1430466b6;
        *(undefined4 *)pbVar6 = _DAT_1430466b2;
        *(undefined4 *)(pbVar6 + 4) = uVar2;
        *(undefined4 *)(pbVar6 + 8) = uVar3;
        *(undefined4 *)(pbVar6 + 0xc) = uVar4;
        uStack_48 = *(undefined8 *)(param_1 + 0xe0);
        puStack_40 = *(undefined **)(param_1 + 0xe8);
        uStack_30 = 0x1d;
        pbStack_38 = pbVar6;
        pbStack_28 = pbVar6;
        cVar5 = pdb_140a2ead0(param_2,pbVar6,0x1d,uStack_48,puStack_40);
        pbVar6 = pbStack_28;
        if (cVar5 == '\0') {
          ppbStack_68 = &pbStack_38;
          pcStack_60 = pdb_1402ed420;
          puStack_58 = &uStack_48;
          pcStack_50 = pdb_1402ed420;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_143039f70,&ppbStack_68,&UNK_143039fc0);
        }
        puStack_40 = &UNK_140f3c37e;
        uVar7 = GetProcessHeap(pbStack_28,0x1d);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        HeapFree(uVar7,0,pbVar6);
        return;
      }
      goto LAB_140a9e61a;
    }
  }
  pdb_142dc7e2a(1,0x16);
LAB_140a9e61a:
  pdb_142dc7e2a(1,0x1d);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

