// VA 0x140911eb0, PDB extent 919 bytes
// country_core::systems::prefab::despawn_prefab_contents
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/prefab.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::prefab::despawn_prefab_contents
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/prefab.rs
   Extent: 919 */

void pdb_140911eb0(longlong param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *plStack_a8;
  undefined1 uStack_a0;
  longlong lStack_98;
  char cStack_90;
  undefined2 uStack_8f;
  undefined1 uStack_8d;
  longlong *plStack_88;
  undefined1 uStack_80;
  undefined4 *puStack_78;
  undefined4 *puStack_70;
  longlong lStack_68;
  longlong lStack_60;
  longlong lStack_58;
  longlong *plStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lStack_60 = *(longlong *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar7 = lStack_60 * 0xc;
  puStack_70 = (undefined4 *)((longlong)*(longlong **)(param_1 + 8) + lVar7);
  lStack_58 = 0;
  if (lStack_60 != 0) {
    plVar4 = *(longlong **)(param_1 + 8);
    lStack_68 = param_1;
    do {
      if ((char)plVar4[1] == '\x1d') break;
      lStack_98 = *plVar4;
      uStack_8d = *(undefined1 *)((longlong)plVar4 + 0xb);
      uStack_8f = *(undefined2 *)((longlong)plVar4 + 9);
      cStack_90 = (char)plVar4[1];
      plStack_50 = (longlong *)((longlong)plVar4 + 0xc);
      pdb_1409d2b30(param_2,&lStack_98);
      lVar7 = lVar7 + -0xc;
      plVar4 = plStack_50;
    } while (lVar7 != 0);
  }
  lStack_68 = param_1 + 0x18;
  puVar9 = *(undefined4 **)(param_1 + 0x20);
  lStack_60 = *(longlong *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  puVar8 = puVar9 + lStack_60 * 4;
  lStack_58 = 0;
  if (lStack_60 != 0) {
    puStack_70 = puVar8;
    plStack_50 = param_4;
    do {
      uStack_b8 = *puVar9;
      uStack_b4 = puVar9[1];
      uStack_b0 = puVar9[2];
      uStack_ac = puVar9[3];
      puStack_78 = puVar9 + 4;
      uVar5 = pdb_1417c44b0(param_3 + 0x20,&uStack_b8);
      pdb_140caac10(&lStack_98,param_3,uVar5,&uStack_b8);
      uStack_a0 = 2;
      if (lStack_98 != 4) {
        uStack_a0 = uStack_80;
      }
      plStack_a8 = plStack_88;
      puVar9 = puVar9 + 4;
      if (lStack_98 != 4) {
        LOCK();
        *plStack_88 = *plStack_88 + -1;
        UNLOCK();
        if (*plStack_88 == 0) {
          pdb_140c7b740(&plStack_a8);
        }
        *(undefined1 *)(param_3 + 0x38) = 1;
        puVar8 = puStack_70;
        puVar9 = puStack_78;
      }
      param_4 = plStack_50;
      lVar6 = lStack_58;
      lVar7 = lStack_68;
    } while (puVar9 != puVar8);
    if (lStack_58 != 0) {
      lVar1 = *(longlong *)(lStack_68 + 0x10);
      if (lStack_60 != lVar1) {
        pub_142e32770(lVar1 * 0x10 + *(longlong *)(lStack_68 + 8),
                      lStack_60 * 0x10 + *(longlong *)(lStack_68 + 8),lStack_58 << 4);
      }
      *(longlong *)(lVar7 + 0x10) = lVar1 + lVar6;
    }
  }
  lStack_68 = param_1 + 0x30;
  lVar7 = *(longlong *)(param_1 + 0x38);
  lStack_60 = *(longlong *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  lVar6 = lStack_60 * 0x28;
  puStack_70 = (undefined4 *)(lVar7 + lVar6);
  lStack_58 = 0;
  if (lStack_60 != 0) {
    lVar1 = param_4[1];
    if (lVar1 == 0) {
      do {
        puStack_78 = (undefined4 *)(lVar7 + 0x28);
        if (*(longlong *)(lVar7 + 0x18) == 2) {
          return;
        }
        if (*(longlong *)(lVar7 + 0x18) != 0) goto LAB_14091216d;
        lVar6 = lVar6 + -0x28;
        lVar7 = (longlong)puStack_78;
      } while (lVar6 != 0);
    }
    else {
      uVar2 = param_4[2];
      uVar11 = (undefined4)param_4[3];
      iVar10 = *(int *)((longlong)param_4 + 0x1c);
      do {
        puStack_78 = (undefined4 *)(lVar7 + 0x28);
        if (*(longlong *)(lVar7 + 0x18) == 2) {
          return;
        }
        if (*(longlong *)(lVar7 + 0x18) != 0) {
LAB_14091216d:
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(1,1,&UNK_14303abf8);
        }
        uVar3 = *(ulonglong *)(lVar7 + 0x20);
        if (uVar3 >> 0x20 < uVar2) {
          lVar7 = (uVar3 >> 0x20) * 0x1c;
          if (*(int *)(lVar1 + 0x18 + lVar7) == (int)uVar3) {
            puVar9 = (undefined4 *)(lVar7 + lVar1);
            *puVar9 = uVar11;
            uVar11 = (undefined4)(uVar3 >> 0x20);
            *(undefined4 *)(param_4 + 3) = uVar11;
            iVar10 = iVar10 + -1;
            *(int *)((longlong)param_4 + 0x1c) = iVar10;
            puVar9[6] = (int)uVar3 + 1;
          }
        }
        lVar6 = lVar6 + -0x28;
        lVar7 = (longlong)puStack_78;
      } while (lVar6 != 0);
    }
  }
  return;
}

