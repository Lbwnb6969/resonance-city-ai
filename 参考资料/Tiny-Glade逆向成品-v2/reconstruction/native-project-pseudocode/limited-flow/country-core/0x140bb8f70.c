// VA 0x140bb8f70, PDB extent 1531 bytes
// country_core::systems::garden::erase_plant_paint::erase_plant_paint
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/garden/erase_plant_paint.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::garden::erase_plant_paint::erase_plant_paint
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/garden/erase_plant_paint.rs
   Extent: 1531 */

void pdb_140bb8f70(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,longlong *param_7,char *param_8,
                  longlong *param_9,longlong *param_10)

{
  ulonglong arg0;
  float fVar1;
  byte bVar2;
  byte *pbVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  float *pfVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined4 uVar13;
  byte bVar14;
  undefined8 uVar15;
  undefined4 *puVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float unaff_XMM6_Da;
  float fVar20;
  undefined4 auStack_f8 [6];
  undefined4 uStack_e0;
  undefined4 uStack_c8;
  undefined4 uStack_b0;
  undefined4 uStack_94;
  byte *pbStack_90;
  char *pcStack_88;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  pbVar3 = (byte *)*param_1;
  bVar2 = *pbVar3;
  bVar6 = false;
  if (*(char *)*param_2 == '\x01') {
    if (0xc < bVar2 - 2) {
      bVar14 = pbVar3[1];
      goto joined_r0x000140bb92c4;
    }
    pfVar10 = (float *)param_2[4];
    switch((uint)bVar2) {
    case 2:
    case 3:
      unaff_XMM6_Da = *pfVar10;
      bVar6 = true;
      bVar14 = pbVar3[1];
      goto joined_r0x000140bb92c4;
    default:
      goto LAB_140bb8ffc;
    case 0xb:
      unaff_XMM6_Da = pfVar10[1];
      bVar6 = true;
      bVar14 = 4;
      goto code_r0x000140bb9074;
    case 0xd:
      unaff_XMM6_Da = pfVar10[2];
      break;
    case 0xe:
      unaff_XMM6_Da = pfVar10[2] * _DAT_142f95160;
    }
    bVar6 = true;
    bVar14 = 5;
  }
  else {
LAB_140bb8ffc:
    bVar14 = pbVar3[1];
joined_r0x000140bb92c4:
    if (bVar2 - 2 < 0xd) {
                    /* WARNING: Could not recover jumptable at 0x000140bb9019. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_143062154 + *(int *)(&UNK_143062154 + (ulonglong)(bVar2 - 2) * 4)))();
      return;
    }
    if (bVar2 != 4) goto LAB_140bb928e;
  }
code_r0x000140bb9074:
  if ((bVar14 != 0) && (bVar14 != 5)) goto LAB_140bb928e;
  if (!bVar6) {
    fVar17 = (float)pdb_140de8220(_DAT_142e37988,_DAT_142e37830,*(undefined4 *)*param_5);
    unaff_XMM6_Da = fVar17 * _DAT_142e37adc + (_DAT_142e36f28 - fVar17);
  }
  auStack_f8[0] = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_b0 = 0;
  puVar12 = &UNK_143061d05;
  lVar8 = pdb_1408ffe50(*param_3,&UNK_143061d05,6,9,3,auStack_f8);
  pfVar10 = (float *)&UNK_143044340;
  if (*(char *)*param_4 != '\0') {
    pfVar10 = (float *)((char *)*param_4 + 4);
  }
  if ((*(char *)(lVar8 + 0x18) == '\x02') && (*(undefined **)(lVar8 + 0x38) == puVar12)) {
    fVar17 = unaff_XMM6_Da * _DAT_142e36f50;
    if (*(byte *)(lVar8 + 0x19) < 2) {
      if ((byte)(*param_8 - 1U) < 2) {
        *param_8 = '\x03';
        uVar13 = *(undefined4 *)((longlong)param_7 + 0x1c);
        puVar16 = (undefined4 *)param_7[2];
        *puVar16 = uVar13;
        lVar8 = *param_7;
        lVar9 = param_9[1];
        param_8 = (char *)param_9[2];
        pdb_140a85b60(lVar8,lVar9,param_8,fVar17,1);
        if ((*(longlong *)(lVar8 + 0x28) != *(longlong *)(lVar8 + 0x10)) ||
           (iVar7 = pub_142e32750(*(undefined8 *)(lVar8 + 0x20),*(undefined8 *)(lVar8 + 8),
                                  *(longlong *)(lVar8 + 0x28) << 2), iVar7 != 0)) {
          arg0 = (longlong)param_8 * 8;
          if (0x7ffffffffffffffc < arg0 || (ulonglong)param_8 >> 0x3d != 0) {
            uVar15 = 0;
LAB_140bb9280:
            pdb_142dc7e2a(uVar15,arg0);
            goto LAB_140bb928b;
          }
          uStack_94 = uVar13;
          if (arg0 == 0) {
            pbStack_90 = (byte *)0x4;
            pcStack_88 = (char *)0x0;
          }
          else {
            pdb_14007ee60();
            uVar15 = 4;
            pbStack_90 = pub_1406abab0(arg0,4);
            pcStack_88 = param_8;
            if (pbStack_90 == (byte *)0x0) goto LAB_140bb9280;
          }
          if (param_8 != (char *)0x0) {
            pub_142e32760(pbStack_90,lVar9,arg0);
          }
          *(undefined4 *)param_10[2] = *(undefined4 *)((longlong)param_10 + 0x1c);
          lVar9 = *param_10;
          lVar4 = *(longlong *)(lVar9 + 0x30);
          uVar15 = *(undefined8 *)(lVar9 + 0x40);
          if (lVar4 == *(longlong *)(lVar9 + 0x20)) {
            pdb_142d7ede0(lVar9 + 0x20);
          }
          lVar5 = *(longlong *)(lVar9 + 0x28);
          *(char **)(lVar5 + lVar4 * 0x28) = pcStack_88;
          *(byte **)(lVar5 + 8 + lVar4 * 0x28) = pbStack_90;
          *(char **)(lVar5 + 0x10 + lVar4 * 0x28) = param_8;
          *(float *)(lVar5 + 0x18 + lVar4 * 0x28) = fVar17;
          *(undefined2 *)(lVar5 + 0x1c + lVar4 * 0x28) = 1;
          *(undefined8 *)(lVar5 + 0x20 + lVar4 * 0x28) = uVar15;
          *(longlong *)(lVar9 + 0x30) = lVar4 + 1;
          *(longlong *)(lVar9 + 0x40) = *(longlong *)(lVar9 + 0x40) + 1;
          uVar13 = uStack_94;
        }
        *puVar16 = uVar13;
        lVar9 = *(longlong *)(lVar8 + 0x10);
        if (lVar9 != *(longlong *)(lVar8 + 0x28)) {
          pdb_142dc85e0(lVar9,*(longlong *)(lVar8 + 0x28),&UNK_143043428);
LAB_140bb94ec:
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_143043538);
        }
        pub_142e32760(*(undefined8 *)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x20),lVar9 << 2);
        *(undefined2 *)(lVar8 + 0x280) = 0;
        *puVar16 = uVar13;
        puVar11 = (undefined8 *)pdb_140bf45b0(*param_6,&UNK_14331c998);
        if ((puVar11 == (undefined8 *)0x0) ||
           (lVar9 = (**(code **)(puVar11[1] + 0x18))(*puVar11), lVar9 == 0)) goto LAB_140bb94ec;
        pdb_140a85430(lVar8,0,*(undefined8 *)(lVar9 + 8),*(undefined8 *)(lVar9 + 0x10));
        goto LAB_140bb928e;
      }
    }
    else if (*(byte *)(lVar8 + 0x19) != 2) {
      fVar20 = *pfVar10;
      fVar1 = pfVar10[2];
      if ((byte)(*param_8 - 1U) < 2) {
        *param_8 = '\x02';
        lVar8 = param_9[1];
        lVar9 = param_9[2];
        if (((lVar9 == 0) ||
            (puVar11 = (undefined8 *)(lVar8 + lVar9 * 8 + -8), puVar11 == (undefined8 *)0x0)) ||
           (uVar15 = *puVar11, fVar18 = (float)uVar15 - fVar20,
           fVar19 = (float)((ulonglong)uVar15 >> 0x20) - fVar1,
           _DAT_143009d64 <= fVar19 * fVar19 + fVar18 * fVar18)) {
          if (lVar9 == *param_9) {
            pdb_142db07d0(param_9);
            lVar8 = param_9[1];
          }
          *(float *)(lVar8 + lVar9 * 8) = fVar20;
          *(float *)(lVar8 + 4 + lVar9 * 8) = fVar1;
          param_9[2] = lVar9 + 1;
        }
        uVar13 = *(undefined4 *)((longlong)param_7 + 0x1c);
        puVar16 = (undefined4 *)param_7[2];
        *puVar16 = uVar13;
        lVar8 = *param_7;
      }
      else {
        *param_8 = '\x01';
        param_9[2] = 0;
        if (*param_9 == 0) {
          pdb_142db07d0(param_9);
        }
        pfVar10 = (float *)param_9[1];
        *pfVar10 = fVar20;
        pfVar10[1] = fVar1;
        param_9[2] = 1;
        fVar20 = _DAT_142e37870 + fVar20;
        if (*param_9 == 1) {
          pdb_142db07d0(param_9);
        }
        *(ulonglong *)(param_9[1] + 8) = CONCAT44(fVar1 + 0.0,fVar20);
        param_9[2] = 2;
        uVar13 = *(undefined4 *)((longlong)param_7 + 0x1c);
        puVar16 = (undefined4 *)param_7[2];
        *puVar16 = uVar13;
        lVar8 = *param_7;
        pdb_140a85240(lVar8);
        *puVar16 = uVar13;
      }
      pdb_140a85b60(lVar8,param_9[1],param_9[2],fVar17,1);
      *puVar16 = uVar13;
      puVar11 = (undefined8 *)pdb_140bf45b0(*param_6,&UNK_14331c998);
      if ((puVar11 != (undefined8 *)0x0) &&
         (lVar9 = (**(code **)(puVar11[1] + 0x18))(*puVar11), lVar9 != 0)) {
        pdb_140a85430(lVar8,1,*(undefined8 *)(lVar9 + 8),*(undefined8 *)(lVar9 + 0x10));
        return;
      }
      goto LAB_140bb94ec;
    }
  }
LAB_140bb928b:
  *param_8 = '\0';
LAB_140bb928e:
  param_9[2] = 0;
  return;
}

