// VA 0x1402b09d0, PDB extent 748 bytes
// tiny_glade::mod_detection::spawn_package_integrity_check_after_reveal
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/mod_detection.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   tiny_glade::mod_detection::spawn_package_integrity_check_after_reveal
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/mod_detection.rs
   Extent: 748 */

void pdb_1402b09d0(undefined8 *param_1,char *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  longlong *plStack_90;
  longlong *plStack_88;
  byte *pbStack_80;
  undefined8 uStack_78;
  byte *pbStack_70;
  undefined8 uStack_68;
  longlong *plStack_58;
  longlong *plStack_50;
  undefined8 uStack_48;
  undefined1 uStack_30;
  undefined1 uStack_21;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  if (*param_2 == '\0') {
    puVar1 = (ulonglong *)*param_1;
    lVar2 = param_1[1];
    uVar3 = *puVar1;
    uVar14 = 0;
    uVar15 = uVar3 - *(ulonglong *)(lVar2 + 0x18);
    if (uVar3 < *(ulonglong *)(lVar2 + 0x18)) {
      uVar15 = uVar14;
    }
    uVar13 = uVar3 - *(ulonglong *)(lVar2 + 0x38);
    if (uVar3 < *(ulonglong *)(lVar2 + 0x38)) {
      uVar13 = uVar14;
    }
    uVar3 = *(ulonglong *)(lVar2 + 0x30);
    uVar11 = uVar3 - uVar13;
    if (uVar3 < uVar13) {
      uVar11 = uVar14;
    }
    uVar4 = *(ulonglong *)(lVar2 + 0x10);
    uVar12 = uVar4 - uVar15;
    if (uVar4 < uVar15) {
      uVar12 = uVar14;
    }
    uVar14 = *(ulonglong *)(lVar2 + 0x40);
    *puVar1 = uVar14 - (uVar12 + uVar11);
    if (uVar4 >= uVar15 && uVar4 - uVar15 != 0 || uVar3 >= uVar13 && uVar3 - uVar13 != 0) {
      *puVar1 = uVar14;
      *param_2 = '\x01';
      plVar5 = *(longlong **)*param_3;
      plVar6 = (longlong *)((undefined8 *)*param_3)[1];
      LOCK();
      lVar2 = *plVar5;
      *plVar5 = *plVar5 + 1;
      UNLOCK();
      if (*plVar5 != 0 && SCARRY8(lVar2,1) == *plVar5 < 0) {
        LOCK();
        lVar2 = *plVar6;
        *plVar6 = *plVar6 + 1;
        UNLOCK();
        if (*plVar6 != 0 && SCARRY8(lVar2,1) == *plVar6 < 0) {
          uStack_48 = 0x8000000000000000;
          plStack_58 = (longlong *)0x0;
          uStack_30 = 0;
          plStack_90 = plVar5;
          plStack_88 = plVar6;
          pdb_14007ee60();
          pbStack_80 = pub_1406abab0(0x11,1);
          uVar10 = _UNK_142e67424;
          uVar9 = _UNK_142e67420;
          uVar8 = _UNK_142e6741c;
          if (pbStack_80 != (byte *)0x0) {
            *(undefined4 *)pbStack_80 = _DAT_142e67418;
            *(undefined4 *)(pbStack_80 + 4) = uVar8;
            *(undefined4 *)(pbStack_80 + 8) = uVar9;
            *(undefined4 *)(pbStack_80 + 0xc) = uVar10;
            pbStack_80[0x10] = 0x79;
            uStack_78 = 0x11;
            uStack_68 = 0x11;
            pbStack_70 = pbStack_80;
            pdb_140f3cec0(&uStack_c0,&plStack_58,&uStack_78);
            uStack_68 = uStack_a0;
            uStack_21 = 0;
            pdb_14022d7f0(&plStack_58,&uStack_78,uStack_c0,uStack_b8,uStack_98,0,plVar5,plVar6);
            plVar5 = plStack_58;
            if (plStack_58 == (longlong *)0x0) {
              plStack_58 = plStack_50;
                    /* WARNING: Subroutine does not return */
              pdb_142dc8170(&UNK_142e67429,0x25,&plStack_58,&UNK_142e67740,&UNK_142e67478);
            }
            CloseHandle();
            LOCK();
            *plVar5 = *plVar5 + -1;
            UNLOCK();
            if (*plVar5 == 0) {
              pdb_140f4a410(&plStack_58);
            }
            LOCK();
            *plStack_50 = *plStack_50 + -1;
            UNLOCK();
            if (*plStack_50 != 0) {
              return;
            }
            uStack_21 = 0;
            pdb_140f4a2d0(&plStack_50);
            return;
          }
          pdb_142dc7e2a(1,0x11);
        }
      }
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
  }
  return;
}

