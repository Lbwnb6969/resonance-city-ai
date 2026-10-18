// VA 0x1406879b0, PDB extent 1519 bytes
// tiny_glade::gui::gui_controls::key_bindings_sub_menu::closure$1
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_controls.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::gui::gui_controls::key_bindings_sub_menu::closure$1
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_controls.rs
   Extent: 1519 */

void pdb_1406879b0(ulonglong *param_1,undefined8 param_2)

{
  byte bVar1;
  uint uVar2;
  code *pcVar3;
  ulonglong arg0;
  uint *puVar4;
  undefined4 uVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong lStack_128;
  ulonglong uStack_120;
  byte *pbStack_118;
  undefined8 uStack_110;
  ulonglong *puStack_108;
  code *pcStack_100;
  ulonglong uStack_f8;
  byte *pbStack_f0;
  uint *puStack_e0;
  byte *pbStack_d0;
  ulonglong uStack_c8;
  byte *pbStack_c0;
  undefined8 uStack_b8;
  ulonglong uStack_b0;
  byte *pbStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  longlong lStack_90;
  byte *pbStack_88;
  ulonglong *puStack_80;
  byte *pbStack_78;
  ulonglong uStack_70;
  byte bStack_61;
  undefined8 uStack_60;
  
  uVar5 = _DAT_142f57bc4;
  uStack_60 = 0xfffffffffffffffe;
  uStack_b0 = *param_1;
  pbVar11 = (byte *)param_1[1];
  pbStack_c0 = pbVar11 + param_1[2];
  uStack_c8 = param_1[6];
  pbStack_78 = (byte *)param_1[7];
  puStack_e0 = (uint *)param_1[8];
  uStack_b8 = param_2;
  pbStack_a8 = pbVar11;
  puStack_80 = param_1;
  do {
    pbStack_d0 = pbVar11;
    if (pbVar11 == pbStack_c0) {
      if (uStack_b0 != 0) {
        pub_1406abac0(pbStack_a8,uStack_b0,1);
      }
      uVar8 = uStack_b8;
      uStack_70 = puStack_80[3];
      if (!SBORROW8(0,uStack_70)) {
        pbStack_78 = (byte *)puStack_80[4];
        uVar9 = puStack_80[5];
        pdb_140734440(&uStack_a0,uStack_b8,&UNK_142f9519c,1);
        pdb_140734440(&uStack_a0,uVar8,pbStack_78,uVar9);
        uVar8 = pdb_140726ff0(&uStack_a0);
        pdb_14060a7e0(uVar8,_DAT_142f57bc4);
        if (uStack_70 != 0) {
          pub_1406abac0(pbStack_78,uStack_70,1);
        }
      }
      return;
    }
    bVar1 = *pbVar11;
    uVar9 = uStack_c8;
    bStack_61 = bVar1;
    lVar7 = pdb_140a13440(&bStack_61,uStack_c8);
    pdb_140177cf0(&uStack_a0,lVar7,lVar7 + uVar9 * 0xc);
    lVar7 = lStack_90;
    pbVar11 = (byte *)CONCAT44(uStack_94,uStack_98);
    pdb_140146ab0(&uStack_f8,pbVar11,lStack_90,&UNK_142f9519d,3);
    pcStack_100 = pdb_140001020;
    puStack_108 = &uStack_f8;
    pdb_140f60760(&uStack_120,&UNK_142f951a0,&puStack_108);
    if (uStack_f8 != 0) {
      pub_1406abac0(pbStack_f0,uStack_f8,1);
    }
    if (lVar7 != 0) {
      pbVar10 = pbVar11 + 8;
      do {
        if (*(ulonglong *)(pbVar10 + -8) != 0) {
          pub_1406abac0(*(byte **)pbVar10,*(ulonglong *)(pbVar10 + -8),1);
        }
        pbVar10 = pbVar10 + 0x18;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    if (CONCAT44(uStack_9c,uStack_a0) != 0) {
      pub_1406abac0(pbVar11,CONCAT44(uStack_9c,uStack_a0) * 0x18,8);
    }
    uStack_70 = uStack_120;
    pbStack_88 = pbStack_118;
    pdb_1407341c0(&uStack_a0,uStack_b8,pbStack_118,uStack_110,*(longlong *)pbStack_78);
    uVar8 = pdb_140725e80(&uStack_a0);
    pdb_14060a7e0(uVar8,uVar5);
    lStack_128 = lStack_90;
    uStack_138 = uStack_a0;
    uStack_134 = uStack_9c;
    uStack_130 = uStack_98;
    uStack_12c = uStack_94;
    uVar8 = pdb_140725900(&uStack_138);
    cVar6 = pdb_140732b50(uVar8);
    pbVar11 = pbStack_d0 + 1;
    if (cVar6 == '\0') {
      if (uStack_70 != 0) {
        pub_1406abac0(pbStack_88,uStack_70,1);
      }
    }
    else {
      if (uStack_70 != 0) {
        pub_1406abac0(pbStack_88,uStack_70,1);
      }
      uVar9 = uStack_c8;
      uVar8 = pdb_140a13440(&bStack_61);
      if (uVar9 == 0) {
        pbVar10 = (byte *)0x4;
        uVar2 = *puStack_e0;
        puVar4 = puStack_e0;
      }
      else {
        arg0 = uVar9 * 0xc;
        pdb_14007ee60();
        pbVar10 = pub_1406abab0(arg0,4);
        if (pbVar10 == (byte *)0x0) {
          pdb_142dc7e2a(4,arg0);
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        pub_142e32760(pbVar10,uVar8,arg0);
        uVar2 = *puStack_e0;
        puVar4 = puStack_e0;
      }
      puStack_e0 = puVar4;
      if ((uVar2 < 2) && (*(longlong *)(puVar4 + 4) != 0)) {
        pub_1406abac0(*(byte **)(puVar4 + 6),*(longlong *)(puVar4 + 4) * 0xc,4);
      }
      puVar4[0] = 0;
      puVar4[1] = 0;
      *(ulonglong *)(puVar4 + 4) = uVar9;
      *(byte **)(puVar4 + 6) = pbVar10;
      *(ulonglong *)(puVar4 + 8) = uVar9;
      puVar4[10] = 0;
      *(byte *)(puVar4 + 0xb) = bVar1;
    }
    *(longlong *)pbStack_78 = *(longlong *)pbStack_78 + 1;
  } while( true );
}

