// VA 0x140b6adc0, PDB extent 69 bytes
// country_core::resources::photo_mode::PhotoModeCameraMode::next_demo
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/photo_mode.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000140b6b0f7) overlaps instruction at (ram,0x000140b6b0f1)
    */
/* WARNING: Removing unreachable block (ram,0x000140b6af66) */
/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::photo_mode::PhotoModeCameraMode::next_demo
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/photo_mode.rs
   Extent: 69 */

uint * pdb_140b6adc0(byte *param_1,ulonglong param_2,uint *param_3)

{
  uint *puVar1;
  code *pcVar2;
  byte bVar3;
  uint *puVar4;
  undefined7 uVar6;
  uint *extraout_RAX;
  uint *extraout_RAX_00;
  undefined8 uVar5;
  longlong *plVar7;
  longlong *plVar8;
  undefined *puVar9;
  uint *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  byte *unaff_RBX;
  undefined8 *puVar13;
  longlong unaff_RBP;
  int unaff_ESI;
  uint *unaff_RDI;
  longlong *plVar14;
  longlong in_R11;
  longlong lStack_68;
  longlong lStack_58;
  undefined1 auStack_28 [40];
  
  plVar14 = _UNK_14305ae4c;
  plVar7 = _UNK_14305ae44;
  puVar13 = (undefined8 *)auStack_28;
  puVar9 = &UNK_14305ae3c;
  puVar4 = (uint *)(&UNK_14305ae3c + *(int *)(&UNK_14305ae3c + (ulonglong)*param_1 * 4));
  bVar3 = (byte)puVar4;
  uVar6 = (undefined7)((ulonglong)puVar4 >> 8);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    return (uint *)CONCAT71(uVar6,1);
  case 1:
    return (uint *)CONCAT71(uVar6,2);
  case 2:
    return (uint *)0x0;
  case 3:
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14305ad38,0xa7,&UNK_14305ad90);
  case 4:
  case 5:
  case 6:
    do {
      unaff_RDI = puVar4;
LAB_140b6aed3:
      param_3 = (uint *)puVar13[2];
      puVar1 = (uint *)puVar13[1];
      puVar10 = puVar1;
      puVar4 = unaff_RDI;
      if (param_3 == puVar1) {
        param_3 = (uint *)*puVar13;
        *puVar13 = puVar1;
        puVar10 = unaff_RDI;
        puVar4 = puVar1;
        if (param_3 == unaff_RDI) {
          return unaff_RDI;
        }
      }
LAB_140b6af07:
      *(uint **)((longlong)puVar13 + 8) = puVar10;
      unaff_RBX = *(byte **)(param_3 + 2);
      lVar12 = *(longlong *)(param_3 + 4);
      *(uint **)((longlong)puVar13 + 0x10) = param_3 + 0x10;
    } while (lVar12 == 0);
    break;
  case 7:
  case 0xf:
    lVar12 = CONCAT71(uVar6,bVar3 + 0x83);
    goto code_r0x000140b6af57;
  case 8:
    *(byte *)puVar4 = (byte)*puVar4 | bVar3;
    *(byte *)puVar4 = (byte)*puVar4 + bVar3;
    puVar13 = (undefined8 *)(unaff_RBP + 8);
    puVar10 = (uint *)&UNK_14305ae3b;
    puVar4 = unaff_RDI;
    goto LAB_140b6af07;
  default:
    puVar13 = (undefined8 *)auStack_28;
    if ((int)unaff_RBX == unaff_ESI) goto LAB_140b6aed3;
    break;
  case 0x10:
  case 0x11:
  case 0x12:
    return puVar4;
  case 0x13:
    puVar9 = (undefined *)CONCAT71(0x14305ae,UNK_14305ae9f + '<');
    goto code_r0x000140b6b0f1;
  case 0x14:
    pcVar2 = (code *)swi(3);
    puVar4 = (uint *)(*pcVar2)();
    return puVar4;
  case 0x15:
    if (_UNK_14305ae54 == 0) {
      lVar12 = 0;
      plVar14 = (longlong *)0x0;
      lStack_68 = 0;
    }
    else {
      plVar14 = (longlong *)CONCAT71(_UNK_14305ae3d,UNK_14305ae3c);
      plVar8 = (longlong *)0x0;
      if (plVar14 <= _UNK_14305ae4c) {
        plVar8 = plVar14;
      }
      lVar12 = (longlong)_UNK_14305ae4c - (longlong)plVar8;
      lStack_68 = _UNK_14305ae54 - ((longlong)plVar14 - lVar12);
      if (_UNK_14305ae54 < (ulonglong)((longlong)plVar14 - lVar12) || lStack_68 == 0) {
        plVar14 = (longlong *)(_UNK_14305ae54 + lVar12);
        lStack_68 = 0;
      }
    }
    lStack_58 = 0;
    plVar8 = _UNK_14305ae44 + lVar12 * 3;
    while ((longlong)plVar14 - lVar12 != lStack_58) {
      lStack_58 = lStack_58 + 1;
      pdb_14049bb00(plVar8);
      plVar8 = plVar8 + 3;
    }
    lStack_58 = 0;
    plVar14 = plVar7;
    while (lStack_68 != lStack_58) {
      lStack_58 = lStack_58 + 1;
      pdb_14049bb00(plVar14);
      plVar14 = plVar14 + 3;
    }
    if (CONCAT71(_UNK_14305ae3d,UNK_14305ae3c) == 0) {
      return (uint *)0x0;
    }
    lVar12 = CONCAT71(_UNK_14305ae3d,UNK_14305ae3c) * 0x18;
    goto code_r0x0001406abac0;
  case 0x16:
    if (_UNK_14305ae4c != (longlong *)0xffffffffffffffff) {
      LOCK();
      plVar7 = _UNK_14305ae4c + 1;
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
        lVar12 = 0x18;
        plVar7 = plVar14;
        goto code_r0x0001406abac0;
      }
    }
    return puVar4;
  case 0x17:
    *(byte *)unaff_RDI = (byte)*unaff_RDI | 0x3c;
    plVar7 = plRam000000004305ae4c;
    puVar4 = (uint *)plRam000000004305ae4c[3];
    LOCK();
    *(longlong *)puVar4 = *(longlong *)puVar4 + -1;
    UNLOCK();
    if (*(longlong *)puVar4 == 0) {
      puVar4 = (uint *)pdb_140c79ee0(plVar7 + 3);
    }
    if (plVar7 != (longlong *)0xffffffffffffffff) {
      LOCK();
      plVar14 = plVar7 + 1;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (*plVar14 == 0) {
        lVar12 = 0x30;
        goto code_r0x0001406abac0;
      }
    }
    return puVar4;
  case 0x18:
    *puVar4 = *puVar4 << 9 |
              (uint)(ushort)(CONCAT14(0xfffffffebcfa51c3 <
                                      (ulonglong)
                                      (longlong)*(int *)(&UNK_14305ae3c + (ulonglong)*param_1 * 4),
                                      *puVar4) >> 0x18);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x19:
    param_2 = (ulonglong)UNK_14305ae3c;
    puVar4 = (uint *)&UNK_14305ae44;
    if (10 < param_2) {
      LOCK();
      lVar12 = *_UNK_14305ae44;
      *_UNK_14305ae44 = *_UNK_14305ae44 + -1;
      plVar14 = _UNK_14305ae44;
      lVar12 = *plVar7;
      lVar12 = *plVar7;
      UNLOCK();
      if (*plVar7 != 0) {
        return (uint *)&UNK_14305ae44;
      }
      if (_UNK_14305ae44[2] != 0) {
        pub_1406abac0((byte *)_UNK_14305ae44[3],_UNK_14305ae44[2] << 3,4);
        puVar4 = extraout_RAX_00;
      }
      if (plVar14 != (longlong *)0xffffffffffffffff) {
        LOCK();
        plVar7 = plVar14 + 1;
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          lVar12 = 0x30;
          plVar7 = plVar14;
          goto code_r0x0001406abac0;
        }
      }
      return puVar4;
    }
code_r0x000140b6b0f1:
                    /* WARNING: Could not recover jumptable at 0x000140b6b0ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar4 = (uint *)(*(code *)(&UNK_14305ae7c + *(int *)(&UNK_14305ae7c + param_2 * 4)))
                               (puVar9,&UNK_14305ae7c + *(int *)(&UNK_14305ae7c + param_2 * 4));
    return puVar4;
  case 0x1a:
    plVar7 = *(longlong **)((ulonglong)puVar4 & 0xffffffff);
    puVar4 = (uint *)plVar7[2];
    uVar11 = 2;
    if ((longlong)puVar4 < 0) {
      uVar11 = (ulonglong)puVar4 ^ 0x8000000000000000;
    }
    if (uVar11 == 0) {
      lVar12 = 0x20;
      puVar4 = (uint *)0x0;
      puVar10 = (uint *)plVar7[3];
joined_r0x000140c7a768:
      if (puVar10 != (uint *)0x0) {
        pub_1406abac0(*(byte **)((longlong)plVar7 + lVar12),(longlong)puVar10 * 0xc,4);
        puVar4 = extraout_RAX;
      }
    }
    else if (uVar11 != 1) {
      lVar12 = 0x18;
      puVar10 = puVar4;
      goto joined_r0x000140c7a768;
    }
    if (plVar7 != (longlong *)0xffffffffffffffff) {
      LOCK();
      plVar14 = plVar7 + 1;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (*plVar14 == 0) {
        lVar12 = 0x38;
code_r0x0001406abac0:
        uVar5 = GetProcessHeap(plVar7,lVar12);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar4 = (uint *)HeapFree(uVar5,0,plVar7);
        return puVar4;
      }
    }
    return puVar4;
  }
  lVar12 = (longlong)*(int *)(in_R11 + (ulonglong)*unaff_RBX * 4);
code_r0x000140b6af57:
                    /* WARNING: Could not recover jumptable at 0x000140b6af5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar4 = (uint *)(*(code *)(lVar12 + in_R11))();
  return puVar4;
}

