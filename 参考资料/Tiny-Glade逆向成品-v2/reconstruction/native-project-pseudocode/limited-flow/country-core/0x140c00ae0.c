// VA 0x140c00ae0, PDB extent 1966 bytes
// country_core::systems::backend::input::input_replay_for_trailers::record_and_replay_input_for_trailers
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/backend/input/input_replay_for_trailers.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::backend::input::input_replay_for_trailers::record_and_replay_input_for_trailers
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/backend/input/input_replay_for_trailers.rs
   Extent: 1966 */

void pdb_140c00ae0(longlong *param_1,longlong *param_2,undefined8 *param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  byte *arg0;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  byte *pbVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  if (*(char *)(*param_4 + 0xcc) == '\x01') {
    lVar13 = *param_2;
    uStack_c8._0_4_ = 0x22;
    cVar8 = pdb_1417b1a90(lVar13 + 0x20,&uStack_c8);
    if (cVar8 != '\0') {
      lVar13 = 1;
      if (*(longlong *)(*param_1 + 0x40) < 0) {
        lVar13 = *(longlong *)(*param_1 + 0x40);
      }
                    /* WARNING: Could not recover jumptable at 0x000140c00b81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_14306836c + *(int *)(&UNK_14306836c + lVar13 * 4)))();
      return;
    }
    uStack_c8 = (ulonglong *)CONCAT44(uStack_c8._4_4_,0x1c);
    cVar8 = pdb_1417b1a90(lVar13 + 0x20,&uStack_c8);
    if (cVar8 != '\0') {
      if (2 < *_DAT_143ca8e90) {
        uStack_c8 = (ulonglong *)0x0;
        uStack_c0 = (code *)&UNK_143067f59;
        uStack_b8 = 0x40;
        uStack_b0 = 0;
        puStack_a8 = &UNK_143067e54;
        uStack_a0 = 0x4a;
        uStack_98 = 3;
        puStack_90 = &UNK_143067f59;
        uStack_88 = 0x40;
        uStack_80 = 0x3400000001;
        puStack_78 = &UNK_143067fd9;
        uStack_70 = 0x13;
        pdb_140f332f0(&uStack_49,&uStack_c8);
      }
      uVar2 = *(undefined4 *)((longlong)param_1 + 0x1c);
      puVar3 = (undefined4 *)param_1[2];
      *puVar3 = uVar2;
      puVar4 = (ulonglong *)*param_1;
      uVar10 = puVar4[8];
      if ((-1 < (longlong)uVar10) && (uVar10 != 0)) {
        pub_1406abac0((byte *)puVar4[9],uVar10,1);
      }
      puVar4[8] = 0x8000000000000002;
      puVar4[9] = 0xffffffffffffffff;
      uVar10 = puVar4[3];
      *puVar3 = uVar2;
      if (uVar10 - 1 < puVar4[3]) {
        if (puVar4[8] == 0x8000000000000002) {
          uVar5 = puVar4[1];
          uVar9 = (uVar10 - 1) + puVar4[2];
          uVar10 = 0;
          if (*puVar4 <= uVar9) {
            uVar10 = *puVar4;
          }
          lVar12 = (uVar9 - uVar10) * 0x68;
          puVar4[9] = *(longlong *)(uVar5 + 0x60 + lVar12) - 1;
          uStack_b8 = *(undefined8 *)(uVar5 + 0x30 + lVar12);
          puVar1 = (undefined8 *)(uVar5 + 0x20 + lVar12);
          uVar6 = *puVar1;
          uVar7 = puVar1[1];
          *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
          puVar3 = (undefined4 *)*param_5;
          *(undefined8 *)(puVar3 + 4) = uStack_b8;
          uStack_c8._0_4_ = (undefined4)uVar6;
          uStack_c8._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          uStack_c0._0_4_ = (undefined4)uVar7;
          uStack_c0._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
          *puVar3 = (undefined4)uStack_c8;
          puVar3[1] = uStack_c8._4_4_;
          puVar3[2] = (undefined4)uStack_c0;
          puVar3[3] = uStack_c0._4_4_;
          uStack_c8 = (ulonglong *)uVar6;
          uStack_c0 = (code *)uVar7;
          pdb_1415e74f0(&uStack_c8,uVar5 + lVar12);
          uStack_b0 = CONCAT71(uStack_b0._1_7_,*(undefined1 *)(uVar5 + 0x18 + lVar12));
          *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
          param_6 = (longlong *)*param_6;
          arg0 = (byte *)param_6[1];
          lVar13 = param_6[2];
          if (lVar13 != 0) {
            pbVar11 = arg0 + 8;
            do {
              if (*(longlong *)(pbVar11 + -8) != 0) {
                pub_1406abac0(*(byte **)pbVar11,*(longlong *)(pbVar11 + -8) * 0x18,8);
              }
              pbVar11 = pbVar11 + 0x20;
              lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
          }
          if (*param_6 != 0) {
            pub_1406abac0(arg0,*param_6 << 5,8);
          }
          *(undefined4 *)(param_6 + 2) = (undefined4)uStack_b8;
          *(undefined4 *)((longlong)param_6 + 0x14) = uStack_b8._4_4_;
          *(undefined4 *)(param_6 + 3) = (undefined4)uStack_b0;
          *(undefined4 *)((longlong)param_6 + 0x1c) = uStack_b0._4_4_;
          *(undefined4 *)param_6 = (undefined4)uStack_c8;
          *(undefined4 *)((longlong)param_6 + 4) = uStack_c8._4_4_;
          *(undefined4 *)(param_6 + 1) = (undefined4)uStack_c0;
          *(undefined4 *)((longlong)param_6 + 0xc) = uStack_c0._4_4_;
          uVar2 = *(undefined4 *)((longlong)param_3 + 0x1c);
          puVar3 = (undefined4 *)param_3[2];
          *puVar3 = uVar2;
          uVar6 = *param_3;
          pdb_140a34510(uVar6,uVar5 + lVar12 + 0x38,0);
          *puVar3 = uVar2;
          pdb_140a34f80(uVar6);
          return;
        }
      }
      else {
        pdb_142dc8110(&UNK_143041028,0x14,&UNK_1430410a0);
      }
      uStack_c8 = puVar4 + 8;
      uStack_c0 = pdb_140a77200;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14304115e,&uStack_c8,&UNK_143041198);
    }
  }
  return;
}

