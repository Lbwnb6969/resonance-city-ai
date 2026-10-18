// VA 0x140836490, PDB extent 560 bytes
// system_wall_constructor::construct_playermade_stairs::preprocess_curve::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_playermade_stairs/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_playermade_stairs::preprocess_curve::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_playermade_stairs/mod.rs
   Extent: 560 */

ulonglong pdb_140836490(undefined8 *param_1,uint param_2,int param_3)

{
  char cVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uStack_60;
  longlong lStack_58;
  longlong lStack_50;
  uint uStack_48;
  undefined1 auStack_40 [8];
  char *pcStack_38;
  
  uVar8 = (ulonglong)param_2;
  uVar2 = *param_1;
  lVar4 = pdb_140c40010(uVar2);
  if ((((lVar4 != 0) && (*(byte *)(lVar4 + 0x32) < 2)) && (lVar4 = pdb_140c3ee20(uVar2), lVar4 == 0)
      ) && ((lVar4 = pdb_140b54f80(param_1[1]), lVar4 != 0 &&
            (pdb_140c45db0(&uStack_60,param_1[2],param_2,&UNK_14300a3f0),
            uStack_60._4_4_ + _DAT_14300a340 < *(float *)(lVar4 + 0x278))))) {
    return 0;
  }
  lVar4 = param_1[3];
  uVar3 = *(ulonglong *)(lVar4 + 0x70);
  uStack_60._4_4_ = (float)param_3;
  if (uVar3 != 0) {
    if (uVar3 == 1) {
      lVar9 = *(longlong *)(lVar4 + 0x68);
      if ((param_2 == *(uint *)(lVar9 + 8)) && (param_3 == *(int *)(lVar9 + 0xc))) {
        cVar1 = *(char *)(lVar9 + 0x10);
joined_r0x000140836549:
        if (cVar1 == '\0') {
          return CONCAT71((uint7)(uint3)(param_2 >> 8),1);
        }
      }
    }
    else {
      uStack_60._0_4_ = param_2;
      uVar5 = pdb_1400af680(lVar4 + 0x98,&uStack_60);
      uVar6 = pdb_141473a20(lVar4 + 0x60,uVar5,&uStack_60);
      if ((uVar6 & 1) != 0) {
        if (uVar3 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar5,uVar3,&UNK_14330bc30);
        }
        cVar1 = *(char *)(*(longlong *)(lVar4 + 0x68) + 0x10 + uVar5 * 0x28);
        goto joined_r0x000140836549;
      }
    }
  }
  uStack_60 = CONCAT44(uStack_60._4_4_,param_2);
  uVar3 = *(ulonglong *)(lVar4 + 0x28);
  lVar9 = 4;
  if (uVar3 == 0) {
LAB_1408365cc:
    lStack_58 = 4;
  }
  else {
    if (uVar3 == 1) {
      lVar7 = *(longlong *)(lVar4 + 0x20);
      lStack_58 = 4;
      if (param_2 != *(uint *)(lVar7 + 0x20)) goto LAB_1408365d1;
      uVar5 = 0;
    }
    else {
      uVar5 = pdb_1400aede0(lVar4 + 0x50,&uStack_60);
      uVar6 = pdb_141473860(lVar4 + 0x18,uVar5,&uStack_60);
      if ((uVar6 & 1) == 0) goto LAB_1408365cc;
      if (uVar3 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar5,uVar3,&UNK_14330bc30);
      }
      lVar7 = *(longlong *)(lVar4 + 0x20);
      lStack_58 = 4;
      if (lVar7 == 0) goto LAB_1408365d1;
    }
    lStack_58 = *(longlong *)(lVar7 + 8 + uVar5 * 0x28);
    lVar9 = lStack_58 + *(longlong *)(lVar7 + 0x10 + uVar5 * 0x28) * 8;
  }
LAB_1408365d1:
  uStack_60 = lVar4 + 0x60;
  lStack_50 = lVar9;
  uStack_48 = param_2;
  pdb_141473b10(auStack_40,&uStack_60);
  if (pcStack_38 == (char *)0x0) {
    return 0;
  }
  do {
    uVar8 = CONCAT71((int7)(uVar8 >> 8),*pcStack_38 == '\0');
    if (*pcStack_38 == '\0') {
      return uVar8;
    }
    pdb_141473b10(auStack_40,&uStack_60);
  } while (pcStack_38 != (char *)0x0);
  return uVar8;
}

