// VA 0x140a662e0, PDB extent 1526 bytes
// country_core::systems::steam::workshop_subscriptions::lookup_mod_on_workshop
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/workshop_subscriptions.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::steam::workshop_subscriptions::lookup_mod_on_workshop
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/workshop_subscriptions.rs
   Extent: 1526 */

void pdb_140a662e0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  bool bVar10;
  undefined8 in_stack_fffffffffffffed8;
  undefined4 uVar11;
  undefined8 in_stack_fffffffffffffee0;
  undefined4 uVar12;
  undefined8 *puStack_118;
  code *pcStack_110;
  undefined8 uStack_f8;
  longlong lStack_f0;
  longlong *plStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 **ppuStack_80;
  longlong *plStack_70;
  longlong *plStack_68;
  undefined8 uStack_60;
  longlong *plStack_58;
  undefined8 uStack_50;
  longlong *plStack_48;
  undefined8 *puStack_40;
  undefined1 uStack_31;
  undefined1 uStack_30;
  undefined1 uStack_2f;
  undefined1 uStack_2e;
  undefined1 uStack_2d;
  undefined1 uStack_2c;
  undefined1 uStack_2b;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  undefined8 uStack_28;
  
  uVar12 = (undefined4)((ulonglong)in_stack_fffffffffffffee0 >> 0x20);
  uVar11 = (undefined4)((ulonglong)in_stack_fffffffffffffed8 >> 0x20);
  uStack_28 = 0xfffffffffffffffe;
  plStack_48 = param_3;
  puStack_40 = param_2;
  uVar7 = pub_142e32030();
  plVar3 = (longlong *)*param_1;
  LOCK();
  lVar2 = *plVar3;
  *plVar3 = *plVar3 + 1;
  UNLOCK();
  if (*plVar3 != 0 && SCARRY8(lVar2,1) == *plVar3 < 0) {
    plStack_58 = plVar3;
    uStack_50 = uVar7;
    uVar8 = pub_142e31f10();
    LOCK();
    lVar2 = *plVar3;
    *plVar3 = *plVar3 + 1;
    UNLOCK();
    if (*plVar3 != 0 && SCARRY8(lVar2,1) == *plVar3 < 0) {
      plStack_68 = plVar3;
      uStack_60 = uVar8;
      uVar6 = pub_142e32000(uVar8);
      uVar8 = 1;
      lStack_f0 = pub_142e32150(uVar7,1,0,0,CONCAT44(uVar11,uVar6),CONCAT44(uVar12,1));
      if (lStack_f0 == -1) {
        if (1 < *_DAT_143ca8e90) {
          puStack_118 = puStack_40;
          pcStack_110 = pdb_141351190;
          uStack_d8 = 0;
          uStack_d0 = &UNK_1430407ce;
          uStack_c8 = (longlong *)0x34;
          uStack_c0 = (longlong *)0x0;
          uStack_b8 = &UNK_14304078e;
          uStack_b0 = 0x3f;
          uStack_a8 = 2;
          puStack_a0 = &UNK_1430407ce;
          uStack_98 = 0x34;
          uStack_90 = 0x13000000001;
          puStack_88 = &UNK_14304075e;
          ppuStack_80 = &puStack_118;
          uStack_29 = 1;
          pdb_140f332f0(&uStack_31,&uStack_d8);
          param_3 = plStack_48;
        }
        plVar3 = param_3 + 2;
        LOCK();
        bVar10 = (char)param_3[2] == '\0';
        if (bVar10) {
          *(char *)(param_3 + 2) = '\x01';
        }
        UNLOCK();
        if (!bVar10) {
          uStack_29 = 1;
          pdb_142dbd1a0(plVar3);
        }
        uStack_29 = 1;
        pdb_140e9a150(plVar3);
        uStack_c8 = (longlong *)puStack_40[2];
        uStack_d8._0_4_ = *(undefined4 *)puStack_40;
        uStack_d8._4_4_ = *(undefined4 *)((longlong)puStack_40 + 4);
        uStack_d0._0_4_ = *(undefined4 *)(puStack_40 + 1);
        uStack_d0._4_4_ = *(undefined4 *)((longlong)puStack_40 + 0xc);
        uStack_c0 = (longlong *)0x8000000000000003;
        lVar2 = param_3[5];
        plStack_70 = plVar3;
        if (lVar2 == param_3[3]) {
          pdb_142d7e7c0(param_3 + 3);
        }
        plVar3 = plStack_70;
        lVar4 = param_3[4];
        lVar9 = lVar2 * 0x30;
        puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar9);
        *puVar1 = (undefined4)uStack_b8;
        puVar1[1] = uStack_b8._4_4_;
        puVar1[2] = (undefined4)uStack_b0;
        puVar1[3] = uStack_b0._4_4_;
        puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar9);
        *puVar1 = (undefined4)uStack_c8;
        puVar1[1] = uStack_c8._4_4_;
        puVar1[2] = (undefined4)uStack_c0;
        puVar1[3] = uStack_c0._4_4_;
        puVar1 = (undefined4 *)(lVar4 + lVar9);
        *puVar1 = (undefined4)uStack_d8;
        puVar1[1] = uStack_d8._4_4_;
        puVar1[2] = (undefined4)uStack_d0;
        puVar1[3] = uStack_d0._4_4_;
        param_3[5] = lVar2 + 1;
        uStack_29 = 0;
        pdb_140e9a350();
        LOCK();
        bVar10 = (char)*plVar3 == '\x01';
        if (bVar10) {
          *(char *)plVar3 = '\0';
        }
        UNLOCK();
        if (!bVar10) {
          uStack_29 = 0;
          pdb_142dbcef0(plVar3,0);
        }
        LOCK();
        *plStack_68 = *plStack_68 + -1;
        UNLOCK();
        if (*plStack_68 == 0) {
          uStack_2f = 0;
          pdb_140cb1c10(&plStack_68);
        }
        LOCK();
        *plStack_58 = *plStack_58 + -1;
        UNLOCK();
        if (*plStack_58 == 0) {
          uStack_2c = 1;
          uStack_2d = 0;
          pdb_140cb1c10(&plStack_58);
        }
        LOCK();
        *plStack_48 = *plStack_48 + -1;
        UNLOCK();
        if (*plStack_48 == 0) {
          uStack_2e = 0;
          pdb_140c7a8f0(&plStack_48);
        }
      }
      else {
        LOCK();
        lVar2 = *plVar3;
        *plVar3 = *plVar3 + 1;
        UNLOCK();
        if (*plVar3 == 0 || SCARRY8(lVar2,1) != *plVar3 < 0) goto LAB_140a66657;
        uStack_f8 = 1;
        LOCK();
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        plStack_e8 = plVar3;
        uStack_e0 = uVar7;
        if (*plVar3 == 0) {
          pdb_140cb1c10(&plStack_68);
        }
        LOCK();
        *plStack_58 = *plStack_58 + -1;
        UNLOCK();
        if (*plStack_58 == 0) {
          uStack_2a = 1;
          uStack_2b = 1;
          pdb_140cb1c10(&plStack_58);
        }
        uStack_c8 = plStack_e8;
        uStack_c0 = (longlong *)uStack_e0;
        uStack_d8 = uStack_f8;
        uStack_d0 = (undefined *)lStack_f0;
        uStack_30 = 1;
        uVar7 = pdb_14043b7e0(puStack_40);
        uStack_30 = 0;
        pdb_141a561c0(&puStack_118,&uStack_d8,&UNK_143040758,6,uVar7,uVar8);
        uStack_c8 = (longlong *)puStack_40[2];
        uStack_d8 = *puStack_40;
        uStack_d0 = (undefined *)puStack_40[1];
        uStack_c0 = plStack_48;
        uStack_2a = 0;
        uStack_2b = 0;
        pdb_141a564a0(&puStack_118,&uStack_d8);
      }
      return;
    }
  }
LAB_140a66657:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}

