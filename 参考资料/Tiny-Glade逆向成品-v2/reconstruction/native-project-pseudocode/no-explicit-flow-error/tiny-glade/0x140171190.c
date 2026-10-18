// VA 0x140171190, PDB extent 1447 bytes
// tiny_glade::screenshot::add_captured_screenshots_to_steam_library::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/screenshot.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   tiny_glade::screenshot::add_captured_screenshots_to_steam_library::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/screenshot.rs
   Extent: 1447 */

ulonglong pdb_140171190(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  byte ****ppppbVar4;
  undefined8 ****ppppuVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  byte *arg0;
  char *pcVar10;
  code *pcVar11;
  undefined8 unaff_RSI;
  ulonglong uVar12;
  bool bVar13;
  undefined8 ***pppuStack_108;
  byte ***pppbStack_100;
  code *pcStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  byte ***pppbStack_90;
  longlong *plStack_88;
  undefined8 uStack_80;
  byte ***pppbStack_78;
  code *pcStack_70;
  char *pcStack_68;
  byte ***pppbStack_60;
  code *pcStack_58;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  if (param_2 == 0) {
    uVar12 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    goto LAB_140171583;
  }
  pcVar10 = (char *)(param_2 + 0x10);
  LOCK();
  bVar13 = *(char *)(param_2 + 0x10) == '\0';
  if (bVar13) {
    *(char *)(param_2 + 0x10) = '\x01';
  }
  UNLOCK();
  if (!bVar13) {
    pdb_142dbd1a0(pcVar10,param_2,1000000000);
  }
  pdb_140e9a150(pcVar10);
  ppppbVar4 = *(byte *****)(param_2 + 0x18);
  ppppuVar5 = *(undefined8 *****)(param_2 + 0x20);
  pcVar11 = *(code **)(param_2 + 0x28);
  uVar2 = *(undefined2 *)(param_2 + 0x38);
  uVar3 = *(undefined2 *)(param_2 + 0x3a);
  *(undefined8 *)(param_2 + 0x18) = 0x8000000000000001;
  if (SBORROW8(0,(longlong)ppppbVar4)) {
    pcStack_68 = pcVar10;
    pppbStack_60 = (byte ***)ppppuVar5;
    pcStack_58 = pcVar11;
    if (*_DAT_143ca8e90 != 0) {
      pppuStack_108 = &pppbStack_60;
      pppbStack_100 = (byte ***)pdb_1400d7400;
      uStack_e8 = 0;
      puStack_e0 = &UNK_142e4fc05;
      uStack_d8 = 0x16;
      uStack_d0 = 0;
      puStack_c8 = &UNK_142e4fba4;
      uStack_c0 = 0x23;
      uStack_b8 = 1;
      puStack_b0 = &UNK_142e4fc05;
      uStack_a8 = 0x16;
      uStack_a0 = 0x1eb00000001;
      puStack_98 = &UNK_142e4fc4c;
      pppbStack_90 = (byte ***)&pppuStack_108;
      pdb_140f332f0(&uStack_49,&uStack_e8,-(longlong)ppppbVar4);
    }
    pppbStack_78 = pppbStack_60;
    pcStack_70 = pcStack_58;
    if (*(code **)pcStack_58 != (code *)0x0) {
      (**(code **)pcStack_58)(pppbStack_60);
    }
    pcVar10 = pcStack_68;
    if (*(ulonglong *)(pcStack_70 + 8) != 0) {
      pub_1406abac0((byte *)pppbStack_78,*(ulonglong *)(pcStack_70 + 8),
                    *(ulonglong *)(pcStack_70 + 0x10));
      pcVar10 = pcStack_68;
    }
LAB_140171570:
    pdb_140e9a350(pcVar10);
    uVar12 = 0;
    LOCK();
    cVar6 = *pcVar10;
    if (cVar6 == '\x01') {
      *pcVar10 = '\0';
    }
    UNLOCK();
    if (cVar6 == '\x01') goto LAB_140171583;
    uVar12 = 0;
  }
  else {
    if (ppppbVar4 != (byte ****)0x8000000000000001) {
      pppuStack_108 = ppppbVar4;
      pppbStack_100 = (byte ***)ppppuVar5;
      pcStack_f8 = pcVar11;
      uStack_f0 = *(undefined8 *)(param_2 + 0x30);
      pcStack_68 = pcVar10;
      cVar6 = pdb_140f3ec10(ppppuVar5,pcVar11);
      if (cVar6 == '\0') {
        if (*_DAT_143ca8e90 != 0) {
          pppbStack_60 = (byte ***)&pppuStack_108;
          pcStack_58 = pdb_140f58250;
          uStack_e8 = 0;
          puStack_e0 = &UNK_142e4fc05;
          uStack_d8 = 0x16;
          uStack_d0 = 0;
          puStack_c8 = &UNK_142e4fba4;
          uStack_c0 = 0x23;
          uStack_b8 = 1;
          puStack_b0 = &UNK_142e4fc05;
          uStack_a8 = 0x16;
          uStack_a0 = 0x1e500000001;
          puStack_98 = &UNK_142e4fbc8;
          pppbStack_90 = (byte ***)&pppbStack_60;
          pdb_140f332f0(&uStack_49,&uStack_e8);
        }
      }
      else {
        if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_142e4fc20);
        }
        puVar8 = (undefined8 *)pdb_1406d0830();
        uVar9 = pub_142e31f00();
        plStack_88 = (longlong *)*puVar8;
        LOCK();
        lVar1 = *plStack_88;
        *plStack_88 = *plStack_88 + 1;
        UNLOCK();
        if (*plStack_88 == 0 || SCARRY8(lVar1,1) != *plStack_88 < 0) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)invalidInstructionException();
          (*pcVar11)();
        }
        uStack_80 = uVar9;
        arg0 = (byte *)pdb_140cb18a0(ppppuVar5);
        if (arg0 == (byte *)0x0) {
          uStack_4a = 1;
        }
        else {
          iVar7 = pub_142e31e80(uVar9,arg0,0,uVar2,uVar3);
          *arg0 = 0;
          if (pcVar11 != (code *)0x0) {
            pub_1406abac0(arg0,(ulonglong)pcVar11,1);
          }
          if (iVar7 != 0) {
            LOCK();
            *plStack_88 = *plStack_88 + -1;
            UNLOCK();
            if (*plStack_88 == 0) {
              pdb_140cb1c10(&plStack_88);
            }
            goto LAB_140171554;
          }
          uStack_4a = 0;
        }
        if (*_DAT_143ca8e90 != 0) {
          pppbStack_60 = (byte ***)&uStack_4a;
          pcStack_58 = pdb_1401769f0;
          uStack_e8 = 0;
          puStack_e0 = &UNK_142e4fc05;
          uStack_d8 = 0x16;
          uStack_d0 = 0;
          puStack_c8 = &UNK_142e4fba4;
          uStack_c0 = 0x23;
          uStack_b8 = 1;
          puStack_b0 = &UNK_142e4fc05;
          uStack_a8 = 0x16;
          uStack_a0 = 0x1e200000001;
          puStack_98 = &UNK_142e4fc38;
          pppbStack_90 = (byte ***)&pppbStack_60;
          pdb_140f332f0(&uStack_49,&uStack_e8);
        }
        LOCK();
        *plStack_88 = *plStack_88 + -1;
        UNLOCK();
        if (*plStack_88 == 0) {
          pdb_140cb1c10(&plStack_88);
        }
      }
LAB_140171554:
      pcVar10 = pcStack_68;
      if ((byte ****)pppuStack_108 != (byte ****)0x0) {
        pub_1406abac0((byte *)pppbStack_100,(ulonglong)pppuStack_108,1);
      }
      goto LAB_140171570;
    }
    pdb_140e9a350();
    uVar12 = CONCAT71((uint7)(byte)((ushort)uVar2 >> 8),1);
    LOCK();
    cVar6 = *pcVar10;
    if (cVar6 == '\x01') {
      *pcVar10 = '\0';
    }
    UNLOCK();
    if (cVar6 == '\x01') goto LAB_140171583;
  }
  pdb_142dbcef0(pcVar10,0);
LAB_140171583:
  return uVar12 & 0xffffffff;
}

