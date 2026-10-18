// VA 0x140a38d40, PDB extent 803 bytes
// country_core::systems::main_camera::paused_main_camera_update
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/main_camera.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000140a394df) overlaps instruction at (ram,0x000140a394dd)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::main_camera::paused_main_camera_update
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/main_camera.rs
   Extent: 803 */

void pdb_140a38d40(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 (*pauVar1) [16];
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 (*pauVar6) [16];
  undefined4 *puVar7;
  code *pcVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined *puVar12;
  float *pfVar13;
  byte *pbVar14;
  undefined1 (*pauVar15) [16];
  undefined8 uVar16;
  longlong *unaff_RSI;
  undefined4 *in_R10;
  undefined *unaff_R12;
  longlong lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  code *pcStack_170;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [104];
  
  uVar4 = *(undefined4 *)((longlong)param_1 + 0x1c);
  pauVar6 = (undefined1 (*) [16])*param_1;
  puVar7 = (undefined4 *)param_1[2];
  *(float *)(pauVar6[0x4d] + 8) = (float)*(uint *)*param_2 / (float)((uint *)*param_2)[1];
  *puVar7 = uVar4;
  pauVar1 = pauVar6 + 0x10;
  puVar12 = &UNK_143397930;
  iVar5 = *(int *)(&UNK_14303b6c0 + (ulonglong)(byte)pauVar6[0x4d][0] * 4);
  pbVar14 = &UNK_14303b6c0 + iVar5;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(pauVar6[0x4d][0]) {
  case 0:
    lVar17 = 0x8c;
    pauVar15 = pauVar1;
    break;
  case 1:
    lVar17 = 0x144;
    pauVar15 = (undefined1 (*) [16])(pauVar6[0x1b] + 8);
    break;
  case 2:
    puVar12 = &UNK_143397968;
    lVar17 = 0x1c4;
    pauVar15 = pauVar6 + 0x27;
    break;
  case 3:
    puVar12 = &UNK_1433979d8;
    lVar17 = 0x264;
    pauVar15 = pauVar6 + 0x2f;
    break;
  case 4:
    lVar17 = 0x31c;
    pauVar15 = pauVar6 + 0x39;
    break;
  case 5:
    puVar12 = &UNK_1433979a0;
    lVar17 = 0x3a4;
    pauVar15 = (undefined1 (*) [16])(pauVar6[0x44] + 8);
    break;
  case 6:
  case 7:
    iVar5 = _UNK_143397930 + 0x43397930;
    UNK_143397930 = (char)iVar5;
    cVar2 = UNK_143397930 + '0';
    _UNK_143397930 = CONCAT31((int3)((uint)iVar5 >> 8),cVar2);
    if (cVar2 < '\0') {
      puVar12 = unaff_R12;
    }
                    /* WARNING: Could not recover jumptable at 0x000140a39344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_14303b6d8 + *(int *)(&UNK_14303b6d8 + (longlong)puVar12 * 4)))();
    return;
  case 8:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 9:
    pfVar13 = (float *)0x433ffb3c;
    goto code_r0x000140a39456;
  case 10:
    pfVar13 = (float *)&UNK_143397920;
    *in_R10 = param_4;
    _UNK_14339793c = (undefined4)uStack_180;
    _UNK_143397934 = uStack_188;
code_r0x000140a39456:
    fVar19 = **(float **)*pauVar6 / (float)**(uint **)*pauVar1;
    fVar21 = (*(float **)*pauVar6)[1] / (float)(*(uint **)*pauVar1)[1];
    lVar17 = *unaff_RSI;
    fVar20 = fVar19 + fVar19 + _DAT_142e36f34;
    fVar22 = fVar21 + fVar21 + _DAT_142e36f34;
    fVar21 = *(float *)(lVar17 + 0x48);
    fVar18 = *(float *)(lVar17 + 0x4c);
    fVar23 = *(float *)(lVar17 + 0x58);
    fVar24 = *(float *)(lVar17 + 0x5c);
    fVar19 = *pfVar13;
    fVar25 = *(float *)(lVar17 + 0x68);
    fVar9 = *(float *)(lVar17 + 0x6c);
    fVar10 = *(float *)(lVar17 + 0x78);
    fVar11 = *(float *)(lVar17 + 0x7c);
    **(undefined4 **)(&UNK_14303b6d0 + iVar5) = *(undefined4 *)(&UNK_14303b6dc + iVar5);
    pfVar13[1] = (float)((uint)((fVar19 * fVar25 + (fVar20 * fVar21 - fVar22 * fVar23) + fVar10) /
                               (fVar19 * fVar9 + (fVar20 * fVar18 - fVar22 * fVar24) + fVar11)) ^
                        _DAT_142e37820);
    return;
  case 0xb:
    return;
  case 0xc:
    uVar16 = 0x2d;
    goto code_r0x000140a39b18;
  case 0xd:
    bVar3 = *pbVar14;
    pbVar14 = &UNK_14303b6ec;
    puVar12 = (undefined *)(longlong)*(int *)(&UNK_14303b6ec + (ulonglong)bVar3 * 4);
    goto code_r0x000140a39ac6;
  case 0xe:
    puVar12 = &UNK_1433979b1;
code_r0x000140a39ac6:
                    /* WARNING: Could not recover jumptable at 0x000140a39ac9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pbVar14 + (longlong)puVar12))();
    return;
  case 0xf:
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  case 0x10:
    uVar16 = 0x2f;
code_r0x000140a39b18:
    uStack_188 = pdb_140dc6290();
    puStack_178 = &uStack_188;
    pcStack_170 = pdb_1402ed400;
    uStack_180 = uVar16;
    pdb_140f681d0(*unaff_RSI,unaff_RSI[1],&UNK_14303b360,&puStack_178);
    return;
  default:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  (**(code **)(puVar12 + 0x30))(auStack_88,pauVar15);
  *(float *)(pauVar6[0x10] + lVar17 + 4) =
       *(float *)(pauVar6[0x10] + lVar17 + 8) * 0.0 + *(float *)(pauVar6[0x10] + lVar17 + 4);
  uStack_108 = *(undefined8 *)(*pauVar1 + lVar17);
  uStack_100 = *(undefined8 *)((longlong)(*pauVar1 + lVar17) + 8);
  puVar7 = (undefined4 *)(pauVar6[0x11] + lVar17);
  uStack_f8 = *puVar7;
  uStack_f4 = puVar7[1];
  uStack_f0 = puVar7[2];
  uStack_ec = puVar7[3];
  uVar16 = *(undefined8 *)((longlong)(pauVar6[0x11] + lVar17 + 0xc) + 8);
  uStack_e8 = (undefined4)((ulonglong)*(undefined8 *)(pauVar6[0x11] + lVar17 + 0xc) >> 0x20);
  uStack_e4 = (undefined4)uVar16;
  uStack_e0 = (undefined4)((ulonglong)uVar16 >> 0x20);
  fVar19 = (float)pdb_140dee660(&uStack_108);
  fVar21 = (float)pub_142e329e0();
  fVar18 = (float)pub_142e32b30();
  fVar21 = fVar21 / fVar18;
  fVar23 = fVar21 / *(float *)(pauVar6[0x4d] + 8);
  pdb_140e07bc0(&uStack_108,auStack_88);
  fVar25 = _DAT_142e36f28 / fVar23;
  fVar24 = _DAT_142e36f28 / fVar21;
  fVar18 = _DAT_142e36f28 / fVar19;
  *pauVar6 = ZEXT416((uint)fVar23);
  pauVar6[1] = ZEXT416((uint)fVar21) << 0x20;
  uVar16 = _UNK_142e37ab8;
  *(undefined8 *)pauVar6[2] = _DAT_142e37ab0;
  *(undefined8 *)(pauVar6[2] + 8) = uVar16;
  pauVar6[3] = ZEXT416((uint)fVar19) << 0x40;
  pauVar6[4] = ZEXT416((uint)fVar25);
  pauVar6[5] = ZEXT416((uint)fVar24) << 0x20;
  *(undefined4 *)pauVar6[6] = 0;
  *(undefined4 *)(pauVar6[6] + 4) = 0;
  *(undefined4 *)(pauVar6[6] + 8) = 0;
  *(float *)(pauVar6[6] + 0xc) = fVar18;
  uVar16 = _UNK_142e37ac8;
  *(undefined8 *)pauVar6[7] = _DAT_142e37ac0;
  *(undefined8 *)(pauVar6[7] + 8) = uVar16;
  *(undefined8 *)pauVar6[8] = uStack_108;
  *(undefined8 *)(pauVar6[8] + 8) = uStack_100;
  *(ulonglong *)pauVar6[9] = CONCAT44(uStack_f4,uStack_f8);
  *(ulonglong *)(pauVar6[9] + 8) = CONCAT44(uStack_ec,uStack_f0);
  *(ulonglong *)pauVar6[10] = CONCAT44(uStack_e4,uStack_e8);
  *(ulonglong *)(pauVar6[10] + 8) = CONCAT44(uStack_dc,uStack_e0);
  *(undefined8 *)pauVar6[0xb] = uStack_d8;
  *(undefined8 *)(pauVar6[0xb] + 8) = uStack_d0;
  *(undefined8 *)pauVar6[0xc] = uStack_c8;
  *(undefined8 *)(pauVar6[0xc] + 8) = uStack_c0;
  *(undefined8 *)pauVar6[0xd] = uStack_b8;
  *(undefined8 *)(pauVar6[0xd] + 8) = uStack_b0;
  *(undefined8 *)pauVar6[0xe] = uStack_a8;
  *(undefined8 *)(pauVar6[0xe] + 8) = uStack_a0;
  *(undefined8 *)pauVar6[0xf] = uStack_98;
  *(undefined8 *)(pauVar6[0xf] + 8) = uStack_90;
  return;
}

