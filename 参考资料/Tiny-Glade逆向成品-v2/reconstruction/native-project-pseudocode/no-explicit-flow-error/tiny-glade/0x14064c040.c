// VA 0x14064c040, PDB extent 1303 bytes
// tiny_glade::run_game::impl$4::downgrade_exclusive_fullscreen_to_borderless
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/run_game.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   tiny_glade::run_game::impl$4::downgrade_exclusive_fullscreen_to_borderless
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/run_game.rs
   Extent: 1303 */

undefined8 pdb_14064c040(int *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  uint6 uVar4;
  ulonglong uVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  byte *unaff_RBX;
  ulonglong *puVar10;
  ulonglong unaff_R13;
  longlong *plVar11;
  bool bVar12;
  longlong alStack_100 [3];
  longlong *plStack_e8;
  byte *pbStack_e0;
  longlong *plStack_d8;
  longlong lStack_d0;
  ulonglong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  longlong *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  longlong *plStack_80;
  longlong *plStack_78;
  longlong *plStack_70;
  byte *pbStack_68;
  longlong *plStack_60;
  uint uStack_54;
  undefined1 uStack_4d;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  plVar9 = (longlong *)(param_1 + 2);
  if (*param_1 != 1) {
    pdb_1406d17b0(alStack_100,plVar9,0x1001);
    if (!SBORROW8(0,alStack_100[0])) {
      uVar7 = pdb_142d84640(alStack_100);
      return uVar7;
    }
    return 0;
  }
  lVar1 = *plVar9;
  uStack_88 = *(undefined8 *)(lVar1 + 0x18);
  plVar2 = *(longlong **)(lVar1 + 0x10);
  LOCK();
  lVar8 = *plVar2;
  *plVar2 = *plVar2 + 1;
  UNLOCK();
  if (*plVar2 == 0 || SCARRY8(lVar8,1) != *plVar2 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  plVar11 = plVar2 + 2;
  LOCK();
  bVar12 = (char)plVar2[2] == '\0';
  if (bVar12) {
    *(char *)(plVar2 + 2) = '\x01';
  }
  UNLOCK();
  plStack_60 = plVar2;
  if (!bVar12) {
    uStack_49 = 1;
    pdb_142dc6be0(plVar11);
  }
  puVar10 = _DAT_143ca8f38;
  if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
    uStack_54 = 0;
    cVar6 = *(char *)((longlong)plVar2 + 0x11);
  }
  else {
    uStack_49 = 1;
    uStack_54 = pdb_142dc79e0();
    uStack_54 = uStack_54 ^ 1;
    cVar6 = *(char *)((longlong)plVar2 + 0x11);
  }
  if (cVar6 != '\0') {
    uVar5 = (ulonglong)pbStack_e0 >> 8;
    pbStack_e0 = (byte *)CONCAT71((int7)uVar5,(char)uStack_54);
    plStack_e8 = plVar11;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_142f8e520,0x2b,&plStack_e8,&UNK_142f8e570,&UNK_142f8e760);
  }
  plStack_78 = plVar11;
  if ((int)plVar2[7] == 1) {
    lVar8 = plVar2[8];
    plVar9 = (longlong *)plVar2[9];
    plStack_80 = plVar9;
    if (lVar8 == 0) {
      if (((ulonglong)plVar9 & 1) == 0) {
LAB_14064c1e9:
        if (((char)uStack_54 == '\0') && ((*_DAT_143ca8f38 & 0x7fffffffffffffff) != 0)) {
          uStack_49 = 1;
          cVar6 = pdb_142dc79e0();
          if (cVar6 == '\0') {
            *(undefined1 *)((longlong)plVar2 + 0x11) = 1;
          }
        }
        LOCK();
        lVar8 = *plStack_78;
        *(char *)plStack_78 = '\0';
        UNLOCK();
        if ((char)lVar8 == '\x02') {
          uStack_49 = 1;
          pdb_142dc6ca0();
        }
        LOCK();
        *plStack_60 = *plStack_60 + -1;
        UNLOCK();
        if (*plStack_60 != 0) {
          return 0;
        }
        pdb_1407401b0(&plStack_60);
        return 0;
      }
      param_3 = plVar2[10];
      pbStack_68 = (byte *)0x0;
      plStack_70 = (longlong *)0x1;
      uStack_4a = 1;
      uStack_4b = 1;
      lVar8 = pdb_140747840(uStack_88);
      if (param_3 == lVar8) goto LAB_14064c1e9;
      unaff_RBX = (byte *)0x0;
      lVar8 = plVar2[7];
    }
    else {
      uVar4 = *(uint6 *)(plVar2 + 0xb);
      param_3 = plVar2[10];
      pdb_14007ee60();
      unaff_RBX = pub_1406abab0(0xdc,4);
      if (unaff_RBX == (byte *)0x0) {
        uStack_4c = 1;
        uStack_4d = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(4,0xdc);
      }
      pub_142e32760(unaff_RBX,lVar8,0xdc);
      unaff_R13 = (ulonglong)uVar4;
      lVar8 = plVar2[7];
      plVar9 = plStack_80;
    }
    if ((lVar8 != 0) && ((byte *)plVar2[8] != (byte *)0x0)) {
      pub_1406abac0((byte *)plVar2[8],0xdc,4);
      plVar9 = plStack_80;
    }
    plVar11 = (longlong *)0x1;
    puVar10 = _DAT_143ca8f38;
  }
  else {
    plVar11 = (longlong *)0x0;
  }
  plVar2[7] = 1;
  plVar2[8] = 0;
  plVar2[9] = 0;
  if (((char)uStack_54 == '\0') && ((*puVar10 & 0x7fffffffffffffff) != 0)) {
    uStack_4a = 0;
    uStack_4b = 1;
    plStack_70 = plVar11;
    pbStack_68 = unaff_RBX;
    cVar6 = pdb_142dc79e0();
    if (cVar6 == '\0') {
      *(undefined1 *)((longlong)plVar2 + 0x11) = 1;
    }
  }
  LOCK();
  lVar8 = plVar2[2];
  *(char *)(plVar2 + 2) = '\0';
  UNLOCK();
  if ((char)lVar8 == '\x02') {
    uStack_4a = 0;
    uStack_4b = 1;
    plStack_70 = plVar11;
    pbStack_68 = unaff_RBX;
    pdb_142dc6ca0(plStack_78);
  }
  uStack_90 = uStack_88;
  uStack_c0 = 1;
  uStack_b8 = 0;
  uStack_b0 = 0;
  plStack_98 = plStack_60;
  uStack_4a = 0;
  uStack_4b = 0;
  plStack_e8 = plVar11;
  pbStack_e0 = unaff_RBX;
  plStack_d8 = plVar9;
  lStack_d0 = param_3;
  uStack_c8 = unaff_R13;
  plStack_70 = plVar11;
  pbStack_68 = unaff_RBX;
  pdb_14010d530(lVar1 + 0x20,&plStack_e8);
  return 0;
}

