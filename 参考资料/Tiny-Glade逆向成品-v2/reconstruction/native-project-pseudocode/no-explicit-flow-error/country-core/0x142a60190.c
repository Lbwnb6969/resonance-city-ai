// VA 0x142a60190, PDB extent 4231 bytes
// shaderface::reflection_ty::impl$87::read_from<speedy::context::LittleEndian,speedy::readable::StreamReader<speedy::context::LittleEndian,std::fs::File> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   shaderface::reflection_ty::impl$87::read_from<speedy::context::LittleEndian,speedy::readable::StreamReader<speedy::context::LittleEndian,std::fs::File>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 4231 */

ulonglong ******* pdb_142a60190(undefined8 *param_1,ulonglong *******param_2)

{
  ulonglong ******ppppppuVar1;
  code *pcVar2;
  ulonglong *******pppppppuVar3;
  int iVar4;
  ulonglong *******pppppppuVar5;
  ulonglong ******ppppppuVar6;
  ulonglong *******pppppppuVar7;
  ulonglong extraout_RAX;
  char cVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  ulonglong *******unaff_RBX;
  ulonglong *******pppppppuVar11;
  uint uVar12;
  ulonglong ******ppppppuVar13;
  ulonglong ******ppppppuVar14;
  ulonglong uVar15;
  ulonglong *******pppppppuVar16;
  undefined8 uVar17;
  uint uVar18;
  longlong lVar19;
  undefined4 uStack_b4;
  ulonglong ******ppppppuStack_b0;
  ulonglong ******ppppppuStack_a8;
  ulonglong ******ppppppuStack_a0;
  ulonglong ******ppppppuStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  ulonglong ******ppppppuStack_80;
  undefined8 uStack_78;
  uint uStack_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong ******ppppppuStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  if ((ulonglong ******)0x3 < param_2[3]) {
    pppppppuVar7 = (ulonglong *******)param_2[2];
    pppppppuVar5 = (ulonglong *******)((longlong)pppppppuVar7 + 4);
    pppppppuVar16 = (ulonglong *******)param_2[1];
    if (pppppppuVar16 <= pppppppuVar5) {
      pdb_141e74230(param_2,&ppppppuStack_b0,4);
      goto LAB_142a6026e;
    }
    if (pppppppuVar7 < (ulonglong *******)0xfffffffffffffffc) {
      uVar9 = *(undefined4 *)((longlong)*param_2 + (longlong)pppppppuVar7);
      ppppppuStack_b0 = (ulonglong ******)CONCAT44(ppppppuStack_b0._4_4_,uVar9);
      param_2[2] = (ulonglong ******)pppppppuVar5;
      ppppppuVar6 = (ulonglong ******)((longlong)param_2[3] - 4);
      param_2[3] = ppppppuVar6;
      if (ppppppuVar6 == (ulonglong ******)0x0) {
        param_2[2] = (ulonglong ******)0x0;
        goto LAB_142a6026e;
      }
      goto LAB_142a60271;
    }
LAB_142a60f7d:
    pdb_142dc8420(pppppppuVar7,pppppppuVar5,pppppppuVar16,&UNK_1436256d0);
LAB_142a60f89:
    param_1[1] = 1;
    goto LAB_142a601fe;
  }
  pdb_140e21010(&uStack_78,param_2,&ppppppuStack_b0,4);
  if (uStack_78 != (ulonglong *******)0x10) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_64;
    *(ulonglong *)((longlong)param_1 + 0x14) = CONCAT44(uStack_68,uStack_6c);
    param_1[1] = uStack_78;
    *(uint *)(param_1 + 2) = uStack_70;
    goto LAB_142a601fe;
  }
LAB_142a6026e:
  uVar9 = (uint)ppppppuStack_b0;
LAB_142a60271:
  switch(uVar9) {
  case 0:
    pdb_142a61220(&uStack_78,param_2);
    if (uStack_78 == (ulonglong *******)0x10) {
      *param_1 = 0x8000000000000000;
      *(uint *)(param_1 + 1) = uStack_70;
      *(uint *)((longlong)param_1 + 0xc) = uStack_6c;
      return (ulonglong *******)(ulonglong)uStack_6c;
    }
    param_1[1] = uStack_78;
    *(uint *)(param_1 + 2) = uStack_70;
    *(uint *)((longlong)param_1 + 0x14) = uStack_6c;
    param_1[3] = CONCAT44(uStack_64,uStack_68);
    goto LAB_142a601fe;
  case 1:
    pdb_142a61220(&uStack_78,param_2);
    uVar12 = uStack_6c;
    uVar18 = uStack_70;
    if (uStack_78 == (ulonglong *******)0x10) {
      if (param_2[3] < (ulonglong ******)0x4) {
        pdb_140e21010(&uStack_78,param_2,&ppppppuStack_b0,4);
        if (uStack_78 != (ulonglong *******)0x10) goto code_r0x000142a603fc;
      }
      else {
        pppppppuVar7 = (ulonglong *******)param_2[2];
        pppppppuVar5 = (ulonglong *******)((longlong)pppppppuVar7 + 4);
        pppppppuVar16 = (ulonglong *******)param_2[1];
        if (pppppppuVar5 < pppppppuVar16) {
          if ((ulonglong *******)0xfffffffffffffffb < pppppppuVar7) goto LAB_142a60f7d;
          ppppppuStack_b0 =
               (ulonglong ******)(ulonglong)*(uint *)((longlong)*param_2 + (longlong)pppppppuVar7);
          param_2[2] = (ulonglong ******)pppppppuVar5;
          ppppppuVar6 = (ulonglong ******)((longlong)param_2[3] - 4);
          param_2[3] = ppppppuVar6;
          if (ppppppuVar6 == (ulonglong ******)0x0) {
            param_2[2] = (ulonglong ******)0x0;
          }
        }
        else {
          pdb_141e74230(param_2,&ppppppuStack_b0,4);
        }
      }
      *(uint *)(param_1 + 1) = uVar18;
      *(uint *)((longlong)param_1 + 0xc) = uVar12;
      *(uint *)(param_1 + 2) = (uint)ppppppuStack_b0;
      pppppppuVar5 = (ulonglong *******)0x8000000000000001;
      break;
    }
code_r0x000142a603fc:
    *(uint *)(param_1 + 2) = uStack_70;
    *(uint *)((longlong)param_1 + 0x14) = uStack_6c;
    *(undefined4 *)(param_1 + 3) = uStack_68;
    param_1[1] = uStack_78;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_64;
    goto LAB_142a601fe;
  case 2:
    pdb_142a61220(&uStack_78,param_2);
    uVar15 = CONCAT44(uStack_6c,uStack_70);
    if (uStack_78 == (ulonglong *******)0x10) {
      if (param_2[3] < (ulonglong ******)0x4) {
        pdb_140e21010(&uStack_78,param_2,&ppppppuStack_b0,4);
        if (uStack_78 == (ulonglong *******)0x10) goto code_r0x000142a608ab;
code_r0x000142a60bf1:
        uVar15 = (ulonglong)uStack_70;
        goto code_r0x000142a60bf7;
      }
      pppppppuVar7 = (ulonglong *******)param_2[2];
      pppppppuVar5 = (ulonglong *******)((longlong)pppppppuVar7 + 4);
      pppppppuVar16 = (ulonglong *******)param_2[1];
      if (pppppppuVar5 < pppppppuVar16) {
        if ((ulonglong *******)0xfffffffffffffffb < pppppppuVar7) goto LAB_142a60f7d;
        uVar18 = *(uint *)((longlong)*param_2 + (longlong)pppppppuVar7);
        ppppppuStack_b0 = (ulonglong ******)CONCAT44(ppppppuStack_b0._4_4_,uVar18);
        param_2[2] = (ulonglong ******)pppppppuVar5;
        ppppppuVar14 = (ulonglong ******)((longlong)param_2[3] - 4);
        param_2[3] = ppppppuVar14;
        if (ppppppuVar14 != (ulonglong ******)0x0) goto code_r0x000142a608af;
        param_2[2] = (ulonglong ******)0x0;
code_r0x000142a608b9:
        pdb_140e21010(&uStack_78,param_2,&ppppppuStack_b0,4);
        if (uStack_78 != (ulonglong *******)0x10) goto code_r0x000142a60bf1;
code_r0x000142a60b13:
        ppppppuVar14 = param_2[3];
        uVar10 = (ulonglong)ppppppuStack_b0 & 0xffffffff;
        if (ppppppuVar14 == (ulonglong ******)0x0) goto code_r0x000142a60b67;
        pppppppuVar5 = (ulonglong *******)param_2[2];
        ppppppuVar6 = *param_2;
        pppppppuVar16 = (ulonglong *******)param_2[1];
code_r0x000142a60b2b:
        if (pppppppuVar16 <= (ulonglong *******)((longlong)pppppppuVar5 + 1U)) {
          pdb_141e74230(param_2,&ppppppuStack_b0,1);
          goto code_r0x000142a60bb4;
        }
        if (pppppppuVar5 == (ulonglong *******)0xffffffffffffffff) {
          pdb_142dc8420(0xffffffffffffffff,0,pppppppuVar16,&UNK_1436256d0);
          goto code_r0x000142a61038;
        }
        cVar8 = *(char *)((longlong)ppppppuVar6 + (longlong)pppppppuVar5);
        param_2[2] = (ulonglong ******)((longlong)pppppppuVar5 + 1U);
        ppppppuVar14 = (ulonglong ******)((longlong)ppppppuVar14 - 1);
        param_2[3] = ppppppuVar14;
        if (ppppppuVar14 != (ulonglong ******)0x0) goto code_r0x000142a60bbc;
        param_2[2] = (ulonglong ******)0x0;
        if (cVar8 != '\0') goto code_r0x000142a60bce;
        uVar17 = 2;
code_r0x000142a60e75:
        pppppppuVar5 = (ulonglong *******)&uStack_78;
        pdb_140e21010(&uStack_78,param_2,&ppppppuStack_b0,1);
        if (uStack_78 == (ulonglong *******)0x10) {
code_r0x000142a60ea8:
          cVar8 = (char)ppppppuStack_b0;
code_r0x000142a60eac:
          if (cVar8 == '\0') {
            pppppppuVar16 = (ulonglong *******)0x0;
            goto code_r0x000142a60f4d;
          }
          if (param_2[3] < (ulonglong ******)0x8) {
            pdb_140e21010(&uStack_78,param_2,&ppppppuStack_b0,8);
            if (uStack_78 != (ulonglong *******)0x10) goto code_r0x000142a60ed9;
          }
          else {
            pppppppuVar7 = (ulonglong *******)param_2[2];
            pppppppuVar5 = pppppppuVar7 + 1;
            pppppppuVar16 = (ulonglong *******)param_2[1];
            if (pppppppuVar5 < pppppppuVar16) {
              if ((ulonglong *******)0xfffffffffffffff7 < pppppppuVar7) goto LAB_142a60f7d;
              ppppppuStack_b0 = *(ulonglong *******)((longlong)*param_2 + (longlong)pppppppuVar7);
              param_2[2] = (ulonglong ******)pppppppuVar5;
              ppppppuVar6 = param_2[3] + -1;
              param_2[3] = ppppppuVar6;
              if (ppppppuVar6 == (ulonglong ******)0x0) {
                param_2[2] = (ulonglong ******)0x0;
              }
            }
            else {
              pdb_141e74230(param_2,&ppppppuStack_b0,8);
            }
          }
          pppppppuVar16 = (ulonglong *******)0x1;
          pppppppuVar5 = (ulonglong *******)ppppppuStack_b0;
code_r0x000142a60f4d:
          *param_1 = 0x8000000000000002;
          param_1[1] = pppppppuVar16;
          param_1[2] = pppppppuVar5;
          param_1[3] = uVar15;
          param_1[4] = uVar10 << 0x20 | (ulonglong)uVar18;
          param_1[5] = uVar17;
          return pppppppuVar16;
        }
code_r0x000142a60ed9:
        uVar15 = CONCAT44(uStack_6c,uStack_70);
        pppppppuVar7 = (ulonglong *******)CONCAT44(uStack_64,uStack_68);
        uVar12 = (uint)(uVar15 >> 8) & 0xffffff;
        pppppppuVar5 = (ulonglong *******)(ulonglong)uStack_6c;
      }
      else {
        pdb_141e74230(param_2,&ppppppuStack_b0,4);
code_r0x000142a608ab:
        ppppppuVar14 = param_2[3];
code_r0x000142a608af:
        uVar18 = (uint)ppppppuStack_b0;
        if (ppppppuVar14 < (ulonglong ******)0x4) goto code_r0x000142a608b9;
        pppppppuVar7 = (ulonglong *******)param_2[2];
        pppppppuVar5 = (ulonglong *******)((longlong)pppppppuVar7 + 4);
        pppppppuVar16 = (ulonglong *******)param_2[1];
        if (pppppppuVar16 <= pppppppuVar5) {
          pdb_141e74230(param_2,&ppppppuStack_b0,4);
          goto code_r0x000142a60b13;
        }
        if ((ulonglong *******)0xfffffffffffffffb < pppppppuVar7) goto LAB_142a60f7d;
        ppppppuVar6 = *param_2;
        uVar10 = (ulonglong)*(uint *)((longlong)ppppppuVar6 + (longlong)pppppppuVar7);
        param_2[2] = (ulonglong ******)pppppppuVar5;
        ppppppuVar14 = (ulonglong ******)((longlong)ppppppuVar14 - 4);
        param_2[3] = ppppppuVar14;
        if (ppppppuVar14 != (ulonglong ******)0x0) goto code_r0x000142a60b2b;
        param_2[2] = (ulonglong ******)0x0;
code_r0x000142a60b67:
        pdb_140e21010(&uStack_78,param_2,&ppppppuStack_b0,1);
        if (uStack_78 == (ulonglong *******)0x10) {
code_r0x000142a60bb4:
          ppppppuVar14 = param_2[3];
          cVar8 = (char)ppppppuStack_b0;
code_r0x000142a60bbc:
          if (cVar8 == '\0') {
            uVar17 = 2;
          }
          else {
            if (ppppppuVar14 < (ulonglong ******)0x4) {
code_r0x000142a60bce:
              pppppppuVar16 = &ppppppuStack_b0;
              pppppppuVar7 = (ulonglong *******)&uStack_78;
              pppppppuVar5 = param_2;
              pdb_140e21010(&uStack_78,param_2,pppppppuVar16,4);
              if (uStack_78 != (ulonglong *******)0x10) goto code_r0x000142a60bf1;
code_r0x000142a60e15:
              iVar4 = (uint)ppppppuStack_b0;
            }
            else {
              pppppppuVar7 = (ulonglong *******)param_2[2];
              pppppppuVar5 = (ulonglong *******)((longlong)pppppppuVar7 + 4);
              pppppppuVar16 = (ulonglong *******)param_2[1];
              if (pppppppuVar16 <= pppppppuVar5) {
                pppppppuVar5 = &ppppppuStack_b0;
                pppppppuVar16 = (ulonglong *******)0x4;
                pppppppuVar7 = param_2;
                pdb_141e74230();
                goto code_r0x000142a60e15;
              }
              if ((ulonglong *******)0xfffffffffffffffb < pppppppuVar7) goto LAB_142a60f7d;
              iVar4 = *(int *)((longlong)*param_2 + (longlong)pppppppuVar7);
              ppppppuStack_b0 = (ulonglong ******)CONCAT44(ppppppuStack_b0._4_4_,iVar4);
              param_2[2] = (ulonglong ******)pppppppuVar5;
              param_2[3] = (ulonglong ******)((longlong)ppppppuVar14 - 4U);
              if ((ulonglong ******)((longlong)ppppppuVar14 - 4U) == (ulonglong ******)0x0) {
                param_2[2] = (ulonglong ******)0x0;
                goto code_r0x000142a60e15;
              }
            }
            uVar12 = (uint)pppppppuVar16;
            if (iVar4 == 0) {
              uVar17 = 0;
            }
            else {
              if (iVar4 != 1) {
                uStack_78 = (ulonglong *******)0x1;
                goto code_r0x000142a60c02;
              }
              uVar17 = 1;
            }
            ppppppuVar14 = param_2[3];
          }
          if (ppppppuVar14 == (ulonglong ******)0x0) goto code_r0x000142a60e75;
          ppppppuVar1 = param_2[2];
          ppppppuVar6 = (ulonglong ******)((longlong)ppppppuVar1 + 1);
          ppppppuVar13 = param_2[1];
          if (ppppppuVar13 <= ppppppuVar6) {
            pppppppuVar5 = param_2;
            pdb_141e74230(param_2,&ppppppuStack_b0,1);
            goto code_r0x000142a60ea8;
          }
          if (ppppppuVar1 == (ulonglong ******)0xffffffffffffffff) goto code_r0x000142a60f96;
          pppppppuVar5 = (ulonglong *******)*param_2;
          cVar8 = *(char *)((longlong)pppppppuVar5 + (longlong)ppppppuVar1);
          ppppppuStack_b0 = (ulonglong ******)CONCAT71(ppppppuStack_b0._1_7_,cVar8);
          param_2[2] = ppppppuVar6;
          param_2[3] = (ulonglong ******)((longlong)ppppppuVar14 - 1U);
          if ((ulonglong ******)((longlong)ppppppuVar14 - 1U) == (ulonglong ******)0x0) {
            param_2[2] = (ulonglong ******)0x0;
            goto code_r0x000142a60ea8;
          }
          goto code_r0x000142a60eac;
        }
        uVar15 = (ulonglong)(byte)uStack_70;
        uVar12 = uStack_70 >> 8;
        pppppppuVar5 = (ulonglong *******)(ulonglong)uStack_6c;
        pppppppuVar7 = (ulonglong *******)CONCAT44(uStack_64,uStack_68);
      }
    }
    else {
code_r0x000142a60bf7:
      pppppppuVar5 = (ulonglong *******)(ulonglong)uStack_6c;
      pppppppuVar7 = (ulonglong *******)CONCAT44(uStack_64,uStack_68);
      uVar12 = (uint)(uVar15 >> 8) & 0xffffff;
    }
code_r0x000142a60c02:
    param_1[1] = uStack_78;
    param_1[2] = (longlong)pppppppuVar5 << 0x20 | uVar15 & 0xff | (ulonglong)(uVar12 << 8);
    param_1[3] = pppppppuVar7;
    goto LAB_142a601fe;
  case 3:
    pppppppuVar5 = (ulonglong *******)0x8000000000000003;
    break;
  case 4:
    pppppppuVar5 = (ulonglong *******)0x8000000000000004;
    break;
  case 5:
    pppppppuVar5 = (ulonglong *******)0x8000000000000005;
    break;
  case 6:
    pppppppuVar5 = (ulonglong *******)0x8000000000000006;
    break;
  case 7:
    pppppppuVar5 = (ulonglong *******)0x8000000000000007;
    break;
  case 8:
    pppppppuVar5 = (ulonglong *******)0x8000000000000008;
    break;
  case 9:
    pdb_142a60190(&ppppppuStack_b0,param_2);
    if ((ulonglong *******)ppppppuStack_b0 == (ulonglong *******)0x800000000000000e) {
      if ((ulonglong *******)ppppppuStack_a8 != (ulonglong *******)0x10) {
        uVar15 = (ulonglong)ppppppuStack_a0 >> 0x20;
        param_2 = (ulonglong *******)((ulonglong)ppppppuStack_a0 & 0xffffffff);
        pppppppuVar16 = (ulonglong *******)ppppppuStack_a8;
        pppppppuVar5 = (ulonglong *******)ppppppuStack_98;
        goto code_r0x000142a60d43;
      }
    }
    else {
      uStack_58 = uStack_90;
      uStack_54 = uStack_8c;
      uStack_50 = uStack_88;
      uStack_4c = uStack_84;
      uStack_78 = (ulonglong *******)ppppppuStack_b0;
      uStack_70 = (uint)ppppppuStack_a8;
      uStack_6c = (uint)((ulonglong)ppppppuStack_a8 >> 0x20);
      uStack_68 = SUB84(ppppppuStack_a0,0);
      uStack_64 = (undefined4)((ulonglong)ppppppuStack_a0 >> 0x20);
      ppppppuStack_60 = ppppppuStack_98;
      pdb_14007ee60();
      ppppppuStack_a0 = (ulonglong ******)pub_1406abab0(0x30,8);
      if ((ulonglong *******)ppppppuStack_a0 == (ulonglong *******)0x0) goto code_r0x000142a60faa;
      ppppppuStack_a0[4] = (ulonglong *****)CONCAT44(uStack_54,uStack_58);
      ppppppuStack_a0[5] = (ulonglong *****)CONCAT44(uStack_4c,uStack_50);
      ppppppuStack_a0[2] = (ulonglong *****)CONCAT44(uStack_64,uStack_68);
      ppppppuStack_a0[3] = (ulonglong *****)ppppppuStack_60;
      *(int *)ppppppuStack_a0 = (int)uStack_78;
      *(undefined4 *)((longlong)ppppppuStack_a0 + 4) = uStack_78._4_4_;
      *(uint *)(ppppppuStack_a0 + 1) = uStack_70;
      *(uint *)((longlong)ppppppuStack_a0 + 0xc) = uStack_6c;
    }
    ppppppuStack_80 = ppppppuStack_a0;
    if (param_2[3] == (ulonglong ******)0x0) {
      pdb_140e21010(&uStack_78,param_2,&ppppppuStack_b0,1);
      if (uStack_78 == (ulonglong *******)0x10) goto code_r0x000142a607af;
code_r0x000142a607ed:
      param_2 = (ulonglong *******)(ulonglong)uStack_70;
      uVar15 = (ulonglong)uStack_6c;
      pppppppuVar5 = (ulonglong *******)CONCAT44(uStack_64,uStack_68);
    }
    else {
      ppppppuVar6 = param_2[2];
      if (param_2[1] <= (ulonglong ******)((longlong)ppppppuVar6 + 1U)) {
        pdb_141e74230(param_2,&ppppppuStack_b0,1);
code_r0x000142a607af:
        ppppppuVar6 = param_2[3];
        cVar8 = (char)ppppppuStack_b0;
code_r0x000142a607b7:
        if (cVar8 == '\0') {
          lVar19 = 0;
code_r0x000142a60c47:
          if (ppppppuVar6 == (ulonglong ******)0x0) goto code_r0x000142a60c89;
          ppppppuVar14 = param_2[2];
          if (param_2[1] <= (ulonglong ******)((longlong)ppppppuVar14 + 1U)) {
            pdb_141e74230(param_2,&ppppppuStack_b0,1);
            goto code_r0x000142a60cc2;
          }
          if (ppppppuVar14 == (ulonglong ******)0xffffffffffffffff) {
            pdb_142dc8420(0xffffffffffffffff,0,param_2[1],&UNK_1436256d0);
            goto code_r0x000142a61045;
          }
          cVar8 = *(char *)((longlong)*param_2 + (longlong)ppppppuVar14);
          ppppppuStack_b0 = (ulonglong ******)CONCAT71(ppppppuStack_b0._1_7_,cVar8);
          param_2[2] = (ulonglong ******)((longlong)ppppppuVar14 + 1U);
          param_2[3] = (ulonglong ******)((longlong)ppppppuVar6 - 1U);
          if ((ulonglong ******)((longlong)ppppppuVar6 - 1U) == (ulonglong ******)0x0) {
            param_2[2] = (ulonglong ******)0x0;
            goto code_r0x000142a60cc2;
          }
          goto code_r0x000142a60cc6;
        }
        if (ppppppuVar6 < (ulonglong ******)0x4) {
code_r0x000142a607c9:
          pdb_140e21010(&uStack_78,param_2,&ppppppuStack_b0,4);
          if (uStack_78 != (ulonglong *******)0x10) goto code_r0x000142a607ed;
code_r0x000142a60c38:
          lVar19 = ((longlong)ppppppuStack_b0 << 0x20) + 1;
          ppppppuVar6 = param_2[3];
          goto code_r0x000142a60c47;
        }
        ppppppuVar14 = param_2[2];
        if (param_2[1] <= (ulonglong ******)((longlong)ppppppuVar14 + 4U)) {
          pdb_141e74230(param_2,&ppppppuStack_b0,4);
          goto code_r0x000142a60c38;
        }
        if (ppppppuVar14 < (ulonglong ******)0xfffffffffffffffc) {
          ppppppuStack_b0 =
               (ulonglong ******)
               CONCAT44(ppppppuStack_b0._4_4_,
                        *(undefined4 *)((longlong)*param_2 + (longlong)ppppppuVar14));
          param_2[2] = (ulonglong ******)((longlong)ppppppuVar14 + 4U);
          param_2[3] = (ulonglong ******)((longlong)ppppppuVar6 - 4U);
          if ((ulonglong ******)((longlong)ppppppuVar6 - 4U) == (ulonglong ******)0x0) {
            param_2[2] = (ulonglong ******)0x0;
          }
          goto code_r0x000142a60c38;
        }
code_r0x000142a61038:
        pdb_142dc8420();
code_r0x000142a61045:
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      if (ppppppuVar6 == (ulonglong ******)0xffffffffffffffff) {
        pdb_142dc8420(0xffffffffffffffff,0,param_2[1],&UNK_1436256d0);
        goto code_r0x000142a61045;
      }
      cVar8 = *(char *)((longlong)*param_2 + (longlong)ppppppuVar6);
      param_2[2] = (ulonglong ******)((longlong)ppppppuVar6 + 1U);
      ppppppuVar6 = (ulonglong ******)((longlong)param_2[3] - 1);
      param_2[3] = ppppppuVar6;
      if (ppppppuVar6 != (ulonglong ******)0x0) goto code_r0x000142a607b7;
      param_2[2] = (ulonglong ******)0x0;
      if (cVar8 != '\0') goto code_r0x000142a607c9;
      lVar19 = 0;
code_r0x000142a60c89:
      pdb_140e21010(&uStack_78,param_2,&ppppppuStack_b0,1);
      if (uStack_78 == (ulonglong *******)0x10) {
code_r0x000142a60cc2:
        cVar8 = (char)ppppppuStack_b0;
code_r0x000142a60cc6:
        if (cVar8 == '\0') {
          pppppppuVar5 = (ulonglong *******)0x0;
code_r0x000142a60d62:
          *param_1 = 0x8000000000000009;
          param_1[1] = pppppppuVar5;
          param_1[2] = param_2;
          param_1[3] = lVar19;
          param_1[4] = ppppppuStack_80;
          return pppppppuVar5;
        }
        pdb_142a5f730(&uStack_78,param_2);
        param_2 = (ulonglong *******)CONCAT44(uStack_6c,uStack_70);
        if (uStack_78 == (ulonglong *******)0x10) {
          pppppppuVar5 = (ulonglong *******)0x1;
          goto code_r0x000142a60d62;
        }
      }
      else {
        param_2 = (ulonglong *******)CONCAT44(uStack_6c,uStack_70);
      }
      pppppppuVar5 = (ulonglong *******)CONCAT44(uStack_64,uStack_68);
      uVar15 = (ulonglong)param_2 >> 0x20;
    }
    pppppppuVar16 = uStack_78;
    uVar10 = 10;
    if ((longlong)*ppppppuStack_80 < 0) {
      uVar10 = (ulonglong)*ppppppuStack_80 ^ 0x8000000000000000;
    }
    if (uVar10 < 0xd) {
      if ((0x19ffUL >> (uVar10 & 0x3f) & 1) == 0) {
        if (uVar10 == 9) {
          pdb_140998980(ppppppuStack_80 + 4);
        }
        else {
          pdb_14098cdd0(ppppppuStack_80);
        }
      }
    }
    else {
      pdb_140998980(ppppppuStack_80 + 1);
    }
    pub_1406abac0((byte *)ppppppuStack_80,0x30,8);
code_r0x000142a60d43:
    pppppppuVar7 = (ulonglong *******)((ulonglong)param_2 & 0xffffffff | uVar15 << 0x20);
    param_1[1] = pppppppuVar16;
    param_1[2] = pppppppuVar7;
    param_1[3] = pppppppuVar5;
    *param_1 = 0x800000000000000e;
    return pppppppuVar7;
  case 10:
    if (param_2[3] == (ulonglong ******)0x0) {
      pdb_140e21010(&uStack_78,param_2,&ppppppuStack_b0,1);
      if (uStack_78 == (ulonglong *******)0x10) goto code_r0x000142a60684;
      uVar15 = (ulonglong)(byte)uStack_70;
      uVar10 = (ulonglong)CONCAT43(uStack_6c,uStack_70._1_3_);
      pppppppuVar5 = (ulonglong *******)CONCAT44(uStack_64,uStack_68);
      ppppppuStack_80 = (ulonglong ******)uStack_78;
code_r0x000142a6098e:
      ppppppuStack_60 = (ulonglong ******)(uVar15 & 0xff | uVar10 << 8);
    }
    else {
      ppppppuVar14 = param_2[2];
      ppppppuVar6 = (ulonglong ******)((longlong)ppppppuVar14 + 1);
      ppppppuVar13 = param_2[1];
      if (ppppppuVar6 < ppppppuVar13) {
        if (ppppppuVar14 == (ulonglong ******)0xffffffffffffffff) {
code_r0x000142a60f96:
          pdb_142dc8420(0xffffffffffffffff,ppppppuVar6,ppppppuVar13,&UNK_1436256d0);
code_r0x000142a60faa:
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(8,0x30);
        }
        cVar8 = *(char *)((longlong)*param_2 + (longlong)ppppppuVar14);
        param_2[2] = ppppppuVar6;
        ppppppuVar6 = (ulonglong ******)((longlong)param_2[3] - 1);
        param_2[3] = ppppppuVar6;
        if (ppppppuVar6 != (ulonglong ******)0x0) goto code_r0x000142a6068c;
        param_2[2] = (ulonglong ******)0x0;
        if (cVar8 != '\0') goto code_r0x000142a6069e;
        pppppppuVar16 = (ulonglong *******)0x8000000000000000;
        pppppppuVar7 = (ulonglong *******)0x0;
code_r0x000142a609eb:
        pdb_140e21010(&ppppppuStack_b0,param_2,&uStack_b4,4);
        pppppppuVar11 = (ulonglong *******)ppppppuStack_a8;
        pppppppuVar3 = (ulonglong *******)ppppppuStack_b0;
        pppppppuVar5 = (ulonglong *******)ppppppuStack_a0;
        if ((ulonglong *******)ppppppuStack_b0 == (ulonglong *******)0x10)
        goto code_r0x000142a60a79;
code_r0x000142a60aa3:
        ppppppuStack_80 = (ulonglong ******)pppppppuVar3;
        ppppppuStack_60 = (ulonglong ******)pppppppuVar11;
        if (((ulonglong)pppppppuVar16 & 0x7fffffffffffffff) != 0) {
          pub_1406abac0((byte *)pppppppuVar7,(ulonglong)pppppppuVar16,1);
        }
      }
      else {
        pdb_141e74230(param_2,&ppppppuStack_b0,1);
code_r0x000142a60684:
        ppppppuVar6 = param_2[3];
        cVar8 = (char)ppppppuStack_b0;
code_r0x000142a6068c:
        if (cVar8 != '\0') {
          if (ppppppuVar6 < (ulonglong ******)0x4) {
code_r0x000142a6069e:
            pdb_140e21010(&uStack_78,param_2,&ppppppuStack_b0,4);
            if (uStack_78 == (ulonglong *******)0x10) goto code_r0x000142a60966;
            uVar15 = CONCAT44(uStack_6c,uStack_70);
            pppppppuVar5 = (ulonglong *******)CONCAT44(uStack_64,uStack_68);
            ppppppuStack_80 = (ulonglong ******)uStack_78;
          }
          else {
            pppppppuVar7 = (ulonglong *******)param_2[2];
            pppppppuVar5 = (ulonglong *******)((longlong)pppppppuVar7 + 4);
            pppppppuVar16 = (ulonglong *******)param_2[1];
            if (pppppppuVar5 < pppppppuVar16) {
              if ((ulonglong *******)0xfffffffffffffffb < pppppppuVar7) goto LAB_142a60f7d;
              ppppppuStack_b0 =
                   (ulonglong ******)
                   CONCAT44(ppppppuStack_b0._4_4_,
                            *(undefined4 *)((longlong)*param_2 + (longlong)pppppppuVar7));
              param_2[2] = (ulonglong ******)pppppppuVar5;
              param_2[3] = (ulonglong ******)((longlong)ppppppuVar6 - 4U);
              if ((ulonglong ******)((longlong)ppppppuVar6 - 4U) == (ulonglong ******)0x0) {
                param_2[2] = (ulonglong ******)0x0;
              }
            }
            else {
              pdb_141e74230(param_2,&ppppppuStack_b0,4);
            }
code_r0x000142a60966:
            pdb_142a60020(&uStack_78,param_2,(ulonglong)ppppppuStack_b0 & 0xffffffff);
            pppppppuVar5 = (ulonglong *******)ppppppuStack_60;
            ppppppuStack_80 = (ulonglong ******)CONCAT44(uStack_6c,uStack_70);
            if ((int)uStack_78 == 1) {
              uVar15 = CONCAT44(uStack_64,uStack_68);
            }
            else {
              pppppppuVar3 = (ulonglong *******)CONCAT44(uStack_64,uStack_68);
              pdb_140f69110(&ppppppuStack_b0,pppppppuVar3,ppppppuStack_60);
              unaff_RBX = pppppppuVar5;
              pppppppuVar16 = (ulonglong *******)ppppppuStack_80;
              pppppppuVar7 = pppppppuVar3;
              if (((char)ppppppuStack_b0 == '\0') ||
                 (unaff_RBX = (ulonglong *******)ppppppuStack_a8, pppppppuVar16 = pppppppuVar3,
                 pppppppuVar7 = pppppppuVar5, SBORROW8(0,(longlong)ppppppuStack_80))) {
                ppppppuVar6 = param_2[3];
                goto code_r0x000142a609e5;
              }
              if ((ulonglong *******)ppppppuStack_80 == (ulonglong *******)0x0) {
                ppppppuStack_80 = (ulonglong ******)0x2;
                uVar15 = 0;
              }
              else {
                pub_1406abac0((byte *)pppppppuVar3,(ulonglong)ppppppuStack_80,1);
                ppppppuStack_80 = (ulonglong ******)0x2;
                uVar15 = extraout_RAX;
              }
            }
          }
          uVar10 = uVar15 >> 8;
          goto code_r0x000142a6098e;
        }
        pppppppuVar16 = (ulonglong *******)0x8000000000000000;
        pppppppuVar7 = (ulonglong *******)0x0;
code_r0x000142a609e5:
        if (ppppppuVar6 < (ulonglong ******)0x4) goto code_r0x000142a609eb;
        ppppppuVar13 = param_2[2];
        ppppppuVar14 = (ulonglong ******)((longlong)ppppppuVar13 + 4);
        if (ppppppuVar14 < param_2[1]) {
          if ((ulonglong ******)0xfffffffffffffffb < ppppppuVar13) {
            pdb_142dc8420(ppppppuVar13,ppppppuVar14,param_2[1],&UNK_1436256d0);
            goto code_r0x000142a61045;
          }
          uStack_b4 = *(undefined4 *)((longlong)*param_2 + (longlong)ppppppuVar13);
          param_2[2] = ppppppuVar14;
          param_2[3] = (ulonglong ******)((longlong)ppppppuVar6 - 4U);
          if ((ulonglong ******)((longlong)ppppppuVar6 - 4U) == (ulonglong ******)0x0) {
            param_2[2] = (ulonglong ******)0x0;
          }
        }
        else {
          pdb_141e74230(param_2,&uStack_b4,4);
        }
code_r0x000142a60a79:
        pdb_142a5f9a0(&uStack_78,param_2,uStack_b4);
        pppppppuVar3 = (ulonglong *******)CONCAT44(uStack_6c,uStack_70);
        ppppppuStack_80 = (ulonglong ******)CONCAT44(uStack_64,uStack_68);
        pppppppuVar11 = (ulonglong *******)ppppppuStack_80;
        pppppppuVar5 = (ulonglong *******)ppppppuStack_60;
        if ((int)uStack_78 == 1) goto code_r0x000142a60aa3;
        pppppppuVar5 = pppppppuVar16;
        if (!SBORROW8(0,(longlong)pppppppuVar3)) {
          param_1[4] = pppppppuVar7;
          param_1[5] = unaff_RBX;
          *param_1 = pppppppuVar3;
          param_1[1] = ppppppuStack_80;
          param_1[2] = ppppppuStack_60;
          param_1[3] = pppppppuVar16;
          return (ulonglong *******)-(longlong)pppppppuVar3;
        }
      }
    }
    param_1[1] = ppppppuStack_80;
    param_1[2] = ppppppuStack_60;
    param_1[3] = pppppppuVar5;
LAB_142a601fe:
    pppppppuVar5 = (ulonglong *******)0x800000000000000e;
    break;
  case 0xb:
    pppppppuVar5 = (ulonglong *******)0x800000000000000b;
    break;
  case 0xc:
    pppppppuVar5 = (ulonglong *******)0x800000000000000c;
    break;
  case 0xd:
    pdb_142a60190(&ppppppuStack_b0,param_2);
    if ((ulonglong *******)ppppppuStack_b0 == (ulonglong *******)0x800000000000000e) {
      if ((ulonglong *******)ppppppuStack_a8 != (ulonglong *******)0x10) {
        param_1[1] = ppppppuStack_a8;
        param_1[2] = ppppppuStack_a0;
        param_1[3] = ppppppuStack_98;
        *param_1 = 0x800000000000000e;
        return (ulonglong *******)ppppppuStack_a0;
      }
    }
    else {
      uStack_58 = uStack_90;
      uStack_54 = uStack_8c;
      uStack_50 = uStack_88;
      uStack_4c = uStack_84;
      uStack_78 = (ulonglong *******)ppppppuStack_b0;
      uStack_70 = (uint)ppppppuStack_a8;
      uStack_6c = (uint)((ulonglong)ppppppuStack_a8 >> 0x20);
      uStack_68 = SUB84(ppppppuStack_a0,0);
      uStack_64 = (undefined4)((ulonglong)ppppppuStack_a0 >> 0x20);
      ppppppuStack_60 = ppppppuStack_98;
      pdb_14007ee60();
      ppppppuStack_a0 = (ulonglong ******)pub_1406abab0(0x30,8);
      if ((ulonglong *******)ppppppuStack_a0 == (ulonglong *******)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x30);
      }
      ppppppuStack_a0[4] = (ulonglong *****)CONCAT44(uStack_54,uStack_58);
      ppppppuStack_a0[5] = (ulonglong *****)CONCAT44(uStack_4c,uStack_50);
      ppppppuStack_a0[2] = (ulonglong *****)CONCAT44(uStack_64,uStack_68);
      ppppppuStack_a0[3] = (ulonglong *****)ppppppuStack_60;
      *ppppppuStack_a0 = (ulonglong *****)uStack_78;
      ppppppuStack_a0[1] = (ulonglong *****)CONCAT44(uStack_6c,uStack_70);
    }
    *param_1 = 0x800000000000000d;
    param_1[1] = ppppppuStack_a0;
    return (ulonglong *******)ppppppuStack_a0;
  default:
    goto LAB_142a60f89;
  }
  *param_1 = pppppppuVar5;
  return pppppppuVar5;
}

