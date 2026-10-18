// VA 0x140a45de0, PDB extent 1082 bytes
// country_core::asset_libraries::meshwatch::MeshWatch::watch
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/meshwatch.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::asset_libraries::meshwatch::MeshWatch::watch
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/meshwatch.rs
   Extent: 1082 */

void pdb_140a45de0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong *plVar3;
  char *pcVar4;
  undefined8 uVar5;
  code *pcVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  char cVar9;
  undefined8 uVar10;
  bool bVar11;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a0;
  char *pcStack_98;
  byte *pbStack_90;
  char *pcStack_88;
  undefined1 uStack_80;
  longlong *plStack_78;
  char *pcStack_70;
  char *pcStack_68;
  byte *pbStack_60;
  uint uStack_54;
  longlong *plStack_50;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  if (SBORROW8(0,*(longlong *)(param_2 + 0x18))) {
    return;
  }
  plVar3 = (longlong *)*param_1;
  LOCK();
  lVar1 = *plVar3;
  *plVar3 = *plVar3 + 1;
  UNLOCK();
  if (*plVar3 != 0 && SCARRY8(lVar1,1) == *plVar3 < 0) {
    pcVar4 = *(char **)(param_2 + 0x28);
    plStack_50 = plVar3;
    if ((longlong)pcVar4 < 0) {
      uVar10 = 0;
    }
    else {
      pcStack_68 = pcVar4;
      if (pcVar4 == (char *)0x0) {
        pbStack_60 = (byte *)0x1;
LAB_140a45e9f:
        uVar2 = *(undefined1 *)(param_2 + 0x30);
        pcVar4 = (char *)(param_1 + 1);
        LOCK();
        bVar11 = *(char *)(param_1 + 1) == '\0';
        if (bVar11) {
          *(char *)(param_1 + 1) = '\x01';
        }
        UNLOCK();
        if (!bVar11) {
          uStack_41 = 1;
          pdb_142dc6be0(pcVar4);
        }
        puVar8 = _DAT_143ca8f38;
        if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
          uStack_54 = 0;
          cVar9 = *(char *)((longlong)param_1 + 9);
          pcStack_88 = pcStack_68;
          plStack_78 = plStack_50;
        }
        else {
          uStack_41 = 1;
          uStack_54 = pdb_142dc79e0();
          uStack_54 = uStack_54 ^ 1;
          cVar9 = *(char *)((longlong)param_1 + 9);
          pcStack_88 = pcStack_68;
          plStack_78 = plStack_50;
        }
        pcStack_68 = pcStack_88;
        plStack_50 = plStack_78;
        if (cVar9 == '\0') {
          if (*(int *)(param_1 + 2) == 3) {
            if (((char)uStack_54 == '\0') && ((*puVar8 & 0x7fffffffffffffff) != 0)) {
              uStack_41 = 1;
              cVar9 = pdb_142dc79e0();
              if (cVar9 == '\0') {
                *(undefined1 *)((longlong)param_1 + 9) = 1;
              }
            }
            LOCK();
            cVar9 = *pcVar4;
            *pcVar4 = '\0';
            UNLOCK();
            if (cVar9 == '\x02') {
              uStack_41 = 1;
              pdb_142dc6ca0(pcVar4);
            }
            if (pcStack_68 != (char *)0x0) {
              pub_1406abac0(pbStack_60,(ulonglong)pcStack_68,1);
            }
            LOCK();
            *plStack_50 = *plStack_50 + -1;
            UNLOCK();
            if (*plStack_50 == 0) {
              pdb_140c7a120(&plStack_50);
            }
          }
          else {
            pcStack_98 = pcStack_88;
            pbStack_90 = pbStack_60;
            uStack_80 = uVar2;
            pcStack_70 = pcVar4;
            pdb_140c2a4b0(&uStack_b0,param_1 + 2,param_2 + 0x18,&pcStack_98);
            pcVar4 = pcStack_70;
            if (CONCAT44(uStack_ac,uStack_b0) != -0x7ffffffffffffffc) {
              pcStack_88 = (char *)uStack_a0;
                    /* WARNING: Subroutine does not return */
              pdb_142dc8170(&UNK_14303c7d0,0x15,&pcStack_98,&UNK_14303d020,&UNK_14303c850);
            }
            if (((char)uStack_54 == '\0') && ((*puVar8 & 0x7fffffffffffffff) != 0)) {
              uStack_41 = 0;
              cVar9 = pdb_142dc79e0();
              if (cVar9 == '\0') {
                *(undefined1 *)((longlong)param_1 + 9) = 1;
              }
            }
            LOCK();
            cVar9 = *pcVar4;
            *pcVar4 = '\0';
            UNLOCK();
            if (cVar9 == '\x02') {
              uStack_41 = 0;
              pdb_142dc6ca0(pcVar4);
            }
          }
          return;
        }
        uVar7 = (ulonglong)pbStack_90 >> 8;
        pbStack_90 = (byte *)CONCAT71((int7)uVar7,(char)uStack_54);
        pcStack_98 = pcVar4;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_14303d060,0x2b,&pcStack_98,&UNK_14303d090,&UNK_14303c838);
      }
      uVar5 = *(undefined8 *)(param_2 + 0x20);
      pdb_14007ee60();
      uVar10 = 1;
      pbStack_60 = pub_1406abab0((ulonglong)pcVar4,1);
      if (pbStack_60 != (byte *)0x0) {
        pub_142e32760(pbStack_60,uVar5,pcVar4);
        goto LAB_140a45e9f;
      }
    }
    uStack_42 = 1;
    pdb_142dc7e2a(uVar10,pcVar4);
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}

