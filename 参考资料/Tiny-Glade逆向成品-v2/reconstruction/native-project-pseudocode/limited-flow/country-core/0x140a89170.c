// VA 0x140a89170, PDB extent 5 bytes
// country_core::utils::debug_viz::DebugLine::show
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/debug_viz.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::utils::debug_viz::DebugLine::show
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/debug_viz.rs
   Extent: 5 */

void pdb_140a89170(undefined8 *param_1,undefined8 param_2)

{
  float *pfVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  ulonglong arg0;
  byte *pbVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulonglong uStack_d8;
  undefined8 uStack_d0;
  ulonglong uStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  byte *pbStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  float fStack_68;
  undefined4 uStack_64;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined6 uStack_5e;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  undefined8 uStack_50;
  
  uStack_50 = 0xfffffffffffffffe;
  uStack_53 = !SBORROW8(0,param_1[3]);
  uStack_88 = param_1 + 6;
  uStack_78 = param_1 + 8;
  uStack_a0 = pdb_1415e5130;
  uStack_98 = &uStack_53;
  uStack_90 = pdb_1400aa270;
  uStack_80 = pdb_140ab7920;
  uStack_70 = pdb_140f705d0;
  uStack_52 = 1;
  puStack_b8 = param_1;
  uStack_a8 = (byte *)param_1;
  pdb_140f60760(&uStack_e8,&UNK_14304a048,&uStack_a8);
  arg0 = uStack_d8;
  pbStack_b0 = uStack_e0;
  uStack_d0 = *puStack_b8;
  puStack_c0 = (undefined8 *)puStack_b8[1];
  uVar2 = puStack_b8[2];
  uStack_64 = *(undefined4 *)(puStack_b8 + 8);
  lVar3 = puStack_b8[3];
  uStack_c8 = uStack_e8;
  if (SBORROW8(0,lVar3)) {
                    /* WARNING: Could not recover jumptable at 0x000140ab2e84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_14304aab8 + *(int *)(&UNK_14304aab8 + (ulonglong)*(uint *)(puStack_b8 + 6) * 4))
    )();
    return;
  }
  uVar8 = puStack_b8[4];
  uStack_d8 = puStack_b8[5];
  uStack_60 = *(undefined1 *)((longlong)puStack_b8 + 0x44);
  uStack_5f = *(undefined1 *)((longlong)puStack_b8 + 0x45);
  fStack_68 = 0.0;
  if (1 < uVar2) {
    fVar9 = *(float *)(puStack_c0 + 1) - *(float *)((longlong)puStack_c0 + 0x14);
    fVar10 = (float)*(undefined8 *)((longlong)puStack_c0 + 0xc);
    fVar11 = (float)((ulonglong)*(undefined8 *)((longlong)puStack_c0 + 0xc) >> 0x20);
    fVar12 = (float)*puStack_c0 - fVar10;
    fVar13 = (float)((ulonglong)*puStack_c0 >> 0x20) - fVar11;
    fStack_68 = SQRT(fVar9 * fVar9 + fVar13 * fVar13 + fVar12 * fVar12);
    if (uVar2 != 2) {
      puVar7 = puStack_c0 + 3;
      fVar9 = *(float *)((longlong)puStack_c0 + 0x14);
      do {
        fVar12 = (float)*puVar7;
        fVar13 = (float)((ulonglong)*puVar7 >> 0x20);
        pfVar1 = (float *)(puVar7 + 1);
        fVar11 = fVar11 - fVar13;
        fVar10 = fVar10 - fVar12;
        fVar9 = fVar9 - *pfVar1;
        fStack_68 = fStack_68 + SQRT(fVar9 * fVar9 + fVar11 * fVar11 + fVar10 * fVar10);
        puVar7 = (undefined8 *)((longlong)puVar7 + 0xc);
        fVar9 = *pfVar1;
        fVar10 = fVar12;
        fVar11 = fVar13;
      } while (puVar7 != (undefined8 *)((longlong)puStack_c0 + uVar2 * 0xc));
    }
  }
  uStack_e8._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_e0._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
  uStack_80._0_4_ = (undefined4)lVar3;
  uStack_80._4_4_ = uStack_e8._4_4_;
  uStack_78._0_4_ = (undefined4)uVar8;
  uStack_78._4_4_ = uStack_e0._4_4_;
  uStack_a8 = (byte *)0x1;
  uStack_a0 = (code *)0x1;
  uStack_e8 = lVar3;
  uStack_e0 = (byte *)uVar8;
  uStack_98 = (undefined1 *)uStack_d0;
  uStack_90 = (code *)puStack_c0;
  uStack_88 = (undefined8 *)uVar2;
  uStack_70 = (code *)uStack_d8;
  pdb_14007ee60();
  pbVar5 = pub_1406abab0(0x50,8);
  if (pbVar5 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x50);
  }
  *(ulonglong *)(pbVar5 + 0x40) = CONCAT44(uStack_64,fStack_68);
  *(ulonglong *)(pbVar5 + 0x48) = CONCAT62(uStack_5e,CONCAT11(uStack_5f,uStack_60));
  *(undefined4 *)(pbVar5 + 0x30) = (undefined4)uStack_78;
  *(undefined4 *)(pbVar5 + 0x34) = uStack_78._4_4_;
  *(undefined4 *)(pbVar5 + 0x38) = (undefined4)uStack_70;
  *(undefined4 *)(pbVar5 + 0x3c) = uStack_70._4_4_;
  *(undefined4 *)(pbVar5 + 0x20) = (undefined4)uStack_88;
  *(undefined4 *)(pbVar5 + 0x24) = uStack_88._4_4_;
  *(undefined4 *)(pbVar5 + 0x28) = (undefined4)uStack_80;
  *(undefined4 *)(pbVar5 + 0x2c) = uStack_80._4_4_;
  *(undefined4 *)(pbVar5 + 0x10) = (undefined4)uStack_98;
  *(undefined4 *)(pbVar5 + 0x14) = uStack_98._4_4_;
  *(undefined4 *)(pbVar5 + 0x18) = (undefined4)uStack_90;
  *(undefined4 *)(pbVar5 + 0x1c) = uStack_90._4_4_;
  *(undefined4 *)pbVar5 = (undefined4)uStack_a8;
  *(undefined4 *)(pbVar5 + 4) = uStack_a8._4_4_;
  *(undefined4 *)(pbVar5 + 8) = (undefined4)uStack_a0;
  *(undefined4 *)(pbVar5 + 0xc) = uStack_a0._4_4_;
  uStack_a0 = (code *)&UNK_14304a110;
  uStack_a8 = pbVar5;
  if ((longlong)arg0 < 0) {
    uVar8 = 0;
LAB_140ab3079:
    pdb_142dc7e2a(uVar8,arg0);
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  if (arg0 == 0) {
    pbVar6 = (byte *)0x1;
  }
  else {
    pdb_14007ee60();
    uVar8 = 1;
    pbVar6 = pub_1406abab0(arg0,1);
    if (pbVar6 == (byte *)0x0) goto LAB_140ab3079;
    pub_142e32760(pbVar6,pbStack_b0,arg0);
  }
  uStack_a0 = (code *)CONCAT71(uStack_a0._1_7_,2);
  uStack_98 = (undefined1 *)arg0;
  uStack_88 = (undefined8 *)arg0;
  uStack_78 = (undefined8 *)&UNK_14304a110;
  uStack_51 = 1;
  uStack_90 = (code *)pbVar6;
  uStack_80 = (code *)pbVar5;
  pdb_141a88350(param_2,&uStack_a8);
  if (uStack_c8 != 0) {
    pub_1406abac0(pbStack_b0,uStack_c8,1);
  }
  return;
}

