// VA 0x140b69fc0, PDB extent 1153 bytes
// country_core::systems::history::replay_pop_bucket::replay_pop_bucket
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/replay_pop_bucket.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::history::replay_pop_bucket::replay_pop_bucket
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/replay_pop_bucket.rs
   Extent: 1153 */

void pdb_140b69fc0(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 param_9)

{
  uint uVar1;
  undefined4 uVar2;
  uint *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  longlong *plVar11;
  undefined1 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  longlong *plStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar1 = *(uint *)((longlong)param_1 + 0x1c);
  uVar16 = (ulonglong)uVar1;
  puVar3 = (uint *)param_1[2];
  *puVar3 = uVar1;
  puVar4 = (ulonglong *)*param_1;
  if (puVar4[3] != 0) {
    uVar14 = 0;
    if (*puVar4 <= puVar4[2]) {
      uVar14 = *puVar4;
    }
    if (*(longlong *)(puVar4[1] + 0x10 + (puVar4[2] - uVar14) * 0x40) == 0) {
      *puVar3 = uVar1;
      puVar4[4] = puVar4[4] + 1;
      lVar17 = 0;
      if (puVar4[3] != 0) {
        uVar16 = puVar4[2];
        uVar14 = 0;
        if (*puVar4 <= uVar16 + 1) {
          uVar14 = *puVar4;
        }
        puVar4[2] = (uVar16 - uVar14) + 1;
        puVar4[3] = puVar4[3] - 1;
        uVar16 = uVar16 * 0x40;
        uStack_90 = *(longlong **)(puVar4[1] + uVar16);
        lVar17 = -(longlong)uStack_90;
        if (!SBORROW8(0,(longlong)uStack_90)) {
          lVar17 = puVar4[1] + uVar16;
          uStack_88 = *(undefined4 *)(lVar17 + 8);
          uStack_84 = *(undefined4 *)(lVar17 + 0xc);
          uStack_80 = *(undefined4 *)(lVar17 + 0x10);
          uStack_7c = *(undefined4 *)(lVar17 + 0x14);
          uStack_78 = *(undefined4 *)(lVar17 + 0x18);
          uStack_74 = *(undefined4 *)(lVar17 + 0x1c);
          uStack_70 = *(undefined4 *)(lVar17 + 0x20);
          uStack_6c = *(undefined4 *)(lVar17 + 0x24);
          uStack_68 = *(undefined4 *)(lVar17 + 0x28);
          uStack_64 = *(undefined4 *)(lVar17 + 0x2c);
          uStack_60 = *(undefined4 *)(lVar17 + 0x30);
          uStack_5c = *(undefined4 *)(lVar17 + 0x34);
          uStack_58 = *(undefined8 *)(lVar17 + 0x38);
          *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
          lVar17 = *param_2;
          lVar5 = *(longlong *)(lVar17 + 0x30);
          uVar6 = *(undefined8 *)(lVar17 + 0x40);
          if (lVar5 == *(longlong *)(lVar17 + 0x20)) {
            pdb_142d7e7c0(lVar17 + 0x20);
          }
          lVar7 = *(longlong *)(lVar17 + 0x28);
          lVar13 = lVar5 * 0x30;
          *(undefined8 *)(lVar7 + lVar13) = 0x8000000000000000;
          *(undefined8 *)(lVar7 + 8 + lVar13) = 0;
          *(undefined8 *)(lVar7 + 0x28 + lVar13) = uVar6;
          *(longlong *)(lVar17 + 0x30) = lVar5 + 1;
          *(longlong *)(lVar17 + 0x40) = *(longlong *)(lVar17 + 0x40) + 1;
          uStack_a8 = (longlong *)CONCAT44(uStack_5c,uStack_60);
          uStack_a0 = (undefined4)uStack_58;
          uVar2 = uStack_a0;
          uStack_9c = uStack_58._4_4_;
          uStack_b8 = uStack_70;
          uStack_b4 = uStack_6c;
          uStack_b0 = (longlong *)CONCAT44(uStack_64,uStack_68);
          plVar15 = uStack_b0;
          uStack_c8 = uStack_80;
          uStack_c4 = uStack_7c;
          uStack_c0 = uStack_78;
          uStack_bc = uStack_74;
          uStack_d8 = (undefined4)uStack_90;
          uStack_d4 = uStack_90._4_4_;
          uStack_d0 = uStack_88;
          uStack_cc = uStack_84;
          uStack_b0 = (longlong *)0x0;
          if (plVar15 != (longlong *)0x0) {
            uStack_90 = plVar15;
            *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
            uVar6 = *param_3;
            uStack_a0._0_1_ = (undefined1)uStack_58;
            uVar12 = (undefined1)uStack_a0;
            plStack_50 = plVar15;
            *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
            uVar8 = *param_5;
            *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
            uVar9 = *param_7;
            *(undefined4 *)param_8[2] = *(undefined4 *)((longlong)param_8 + 0x1c);
            uStack_a0 = uVar2;
            pdb_140c8fa70(uVar6,plVar15 + 2,uVar12,uVar8,uVar9,*param_8,param_9);
            plVar15 = plStack_50;
            LOCK();
            *plStack_50 = *plStack_50 + -1;
            UNLOCK();
            if (*plStack_50 == 0) {
              pdb_140c7bbc0(&uStack_90);
            }
          }
          plVar11 = uStack_a8;
          uStack_a8 = (longlong *)0x0;
          if (plVar11 == (longlong *)0x0) {
            pdb_14099e540(&uStack_d8);
            *(undefined4 *)param_4[2] = *(undefined4 *)((longlong)param_4 + 0x1c);
            pdb_140c41490(&uStack_90,*param_4,*param_3,1);
            pdb_140ca5470(&uStack_90,&uStack_70,0x70,0x10);
            if (plVar15 == (longlong *)0x0) {
              return;
            }
          }
          else {
            uStack_90 = plVar11;
            uVar2 = *(undefined4 *)((longlong)param_6 + 0x1c);
            puVar10 = (undefined4 *)param_6[2];
            *puVar10 = uVar2;
            uVar6 = *param_6;
            pdb_140a5f5d0(uVar6);
            *puVar10 = uVar2;
            pdb_140a5ec50(uVar6,plVar11 + 2,(undefined1)uStack_a0);
            *puVar10 = uVar2;
            pdb_140a5f490(uVar6);
            *puVar10 = uVar2;
            pdb_140a5ee70(uVar6);
            LOCK();
            *uStack_90 = *uStack_90 + -1;
            UNLOCK();
            if (*uStack_90 == 0) {
              pdb_140c7a400(&uStack_90);
            }
            pdb_14099e540(&uStack_d8);
            *(undefined4 *)param_4[2] = *(undefined4 *)((longlong)param_4 + 0x1c);
            pdb_140c41490(&uStack_90,*param_4,*param_3,1);
            pdb_140ca5470(&uStack_90,&uStack_70,0x70,0x10);
          }
          *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
          pdb_1409edd50(*param_7);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14305ade8,param_2,uVar16,lVar17);
    }
    *(undefined4 *)param_4[2] = *(undefined4 *)((longlong)param_4 + 0x1c);
    pdb_140c41490(&uStack_90,*param_4,*param_3,CONCAT71((int7)((ulonglong)puVar3 >> 8),1));
    pdb_140ca5470(&uStack_90,&uStack_70,0x70,0x10);
  }
  return;
}

