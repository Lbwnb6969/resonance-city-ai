// VA 0x1414677e0, PDB extent 1092 bytes
// system_wall_constructor::construct_fences::process_segment::emit_fences<system_wall_constructor::construct_fences::construct_fences::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_fences/process_segment.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_wall_constructor::construct_fences::process_segment::emit_fences<system_wall_constructor::construct_fences::construct_fences::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_fences/process_segment.rs
   Extent: 1092 */

undefined8 *
pdb_1414677e0(undefined8 *param_1,ulonglong param_2,longlong param_3,undefined8 param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  code *pcVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined *unaff_R12;
  longlong unaff_R13;
  longlong unaff_R14;
  undefined *unaff_R15;
  undefined4 auStack_10c [5];
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  longlong lStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 *puStack_d0;
  ulonglong *puStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  longlong lStack_a8;
  ulonglong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  longlong *plStack_58;
  longlong *plStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_90 = param_2;
  cVar6 = pdb_140e94b40();
  plStack_50 = (longlong *)CONCAT71(plStack_50._1_7_,cVar6);
  if (cVar6 == '\0') {
    uStack_b0 = 0;
    goto LAB_1414679a1;
  }
  unaff_R14 = 0x47;
  lVar8 = pdb_1414693b0(0x47);
  unaff_R15 = &UNK_14330af78;
  if (lVar8 == 1) {
    if (param_2 < 0x48) {
      uVar9 = pdb_1414693b0(param_2);
      if ((uVar9 & 1) != 0) {
        if (0x47 < param_2 + 2) goto LAB_141467b14;
        unaff_R14 = 0x45 - param_2;
        unaff_R15 = &UNK_14330af7a + param_2;
      }
      goto LAB_14146787a;
    }
  }
  else {
LAB_14146787a:
    puVar12 = &UNK_14330ae87;
    unaff_R12 = &UNK_14330ae40;
    do {
      bVar2 = puVar12[-1];
      uVar7 = (uint)(char)bVar2;
      if ((char)bVar2 < '\0') {
        bVar3 = puVar12[-2];
        if ((char)bVar3 < -0x40) {
          bVar4 = puVar12[-3];
          if ((char)bVar4 < -0x40) {
            pbVar1 = puVar12 + -4;
            puVar12 = puVar12 + -4;
            uVar7 = bVar4 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar12 = puVar12 + -3;
            uVar7 = bVar4 & 0xf;
          }
          uVar7 = bVar3 & 0x3f | uVar7 << 6;
        }
        else {
          puVar12 = puVar12 + -2;
          uVar7 = bVar3 & 0x1f;
        }
        uVar7 = (uint)(bVar2 & 0x3f) | uVar7 << 6;
        if (uVar7 != 0x5c) goto LAB_141467904;
LAB_14146791d:
        if ((undefined *)0x47 < puVar12 + -0x14330ae3f) goto LAB_141467ad1;
        unaff_R13 = 0x47 - (longlong)(puVar12 + -0x14330ae3f);
        unaff_R12 = puVar12 + 1;
        goto LAB_141467940;
      }
      puVar12 = puVar12 + -1;
      if (uVar7 == 0x5c) goto LAB_14146791d;
LAB_141467904:
      if (uVar7 == 0x2f) goto LAB_14146791d;
    } while (puVar12 != &UNK_14330ae40);
    unaff_R13 = 0x47;
LAB_141467940:
    plVar10 = (longlong *)pdb_140e97000();
    if ((char)plVar10[0xd] != '\x01') goto LAB_141467aa1;
    do {
      if (*plVar10 == 0) {
        *plVar10 = -1;
        plStack_58 = plVar10;
        unaff_R14 = pdb_140e94f10(plVar10 + 1,unaff_R15,unaff_R14,unaff_R12,unaff_R13,1,0);
        *plStack_58 = *plStack_58 + 1;
        uStack_b0 = 1;
        lStack_a8 = unaff_R14;
LAB_1414679a1:
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_78 = 0;
        puStack_f0 = &uStack_78;
        uStack_70 = 0;
        uStack_68 = 8;
        uStack_60 = 0;
        uStack_e0 = *(undefined4 *)(param_3 + 0x90);
        uStack_dc = *(undefined4 *)(param_3 + 0x94);
        uStack_d8 = *(undefined4 *)(param_3 + 0x98);
        uStack_d4 = *(undefined4 *)(param_3 + 0x9c);
        auStack_10c[0] = 0;
        puStack_f8 = &uStack_88;
        puStack_d0 = auStack_10c;
        puStack_c8 = &uStack_90;
        puStack_b8 = &uStack_70;
        lStack_e8 = param_3;
        uStack_c0 = param_4;
        pdb_14140d100(*(undefined8 *)(param_3 + 200),*(undefined8 *)(param_3 + 0xd0),0,&puStack_f8);
        param_1[2] = uStack_78;
        *param_1 = uStack_88;
        param_1[1] = uStack_80;
        *(undefined4 *)(param_1 + 3) = (undefined4)uStack_70;
        *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_70._4_4_;
        *(undefined4 *)(param_1 + 4) = (undefined4)uStack_68;
        *(undefined4 *)((longlong)param_1 + 0x24) = uStack_68._4_4_;
        param_1[5] = uStack_60;
        if ((char)plStack_50 == '\0') {
          return param_1;
        }
        plVar10 = (longlong *)pdb_140e97000();
        if (((char)plVar10[0xd] != '\x01') &&
           (plVar10 = (longlong *)pdb_142dd9610(plVar10,0), plVar10 == (longlong *)0x0)) break;
        if (*plVar10 == 0) {
          *plVar10 = -1;
          plStack_50 = plVar10;
          pdb_140e95370(plVar10 + 1,unaff_R14);
          *plStack_50 = *plStack_50 + 1;
          return param_1;
        }
      }
      plVar10 = (longlong *)pdb_142dc8090(&UNK_1433079b0);
LAB_141467aa1:
      plVar10 = (longlong *)pdb_142dd9610(plVar10,0);
    } while (plVar10 != (longlong *)0x0);
    pdb_142dc7890(&UNK_143307940);
LAB_141467ad1:
    pdb_142dc8070(&UNK_14330ae40,0x47);
  }
  pdb_142dc8070(&UNK_14330af78,0x47,0);
LAB_141467b14:
  pdb_142dc8070(&UNK_14330af78,0x47);
  pcVar5 = (code *)swi(3);
  puVar11 = (undefined8 *)(*pcVar5)();
  return puVar11;
}

