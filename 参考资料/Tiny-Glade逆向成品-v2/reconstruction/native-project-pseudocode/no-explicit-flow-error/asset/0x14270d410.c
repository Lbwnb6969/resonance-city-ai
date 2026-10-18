// VA 0x14270d410, PDB extent 905 bytes
// asset::inheritable::impl$1::inherit_from<enum2$<core::option::Option<asset::prefab::config::PrefabRtConfig> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/inheritable.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   asset::inheritable::impl$1::inherit_from<enum2$<core::option::Option<asset::prefab::config::PrefabRtConfig>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset/src/inheritable.rs
   Extent: 905 */

void pdb_14270d410(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint in_R10D;
  byte in_R11B;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  code *pcStack_80;
  undefined **ppuStack_78;
  uint uStack_70;
  undefined *puStack_68;
  uint uStack_60;
  undefined8 uStack_58;
  uint uStack_50;
  undefined8 uStack_48;
  uint uStack_40;
  undefined8 uStack_38;
  uint uStack_30;
  undefined8 uStack_28;
  uint uStack_20;
  
  uVar2 = *param_1;
  uVar4 = uVar2 - 4;
  if (uVar2 < 4) {
    uVar4 = 2;
  }
  if (uVar4 != 0) {
    if (uVar4 != 2) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_14358a3f5,0x28,&UNK_14358a420);
    }
    uVar4 = *param_2;
    iVar5 = 2;
    if (3 < uVar4) {
      iVar5 = uVar4 - 4;
    }
    if (iVar5 != 2) {
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14358a313,0x9d,&UNK_14358a438);
      }
      puStack_98 = &UNK_14358a248;
      uStack_90 = 0x3b;
      ppuStack_88 = &puStack_98;
      pcStack_80 = pdb_1402ed400;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14358a361,&ppuStack_88,&UNK_14358a438);
    }
    if ((uVar2 != 3) && (uVar4 != 3)) {
      pdb_14270a6c0();
      uVar2 = *param_1;
    }
    if (uVar2 == 3) {
      return;
    }
    if ((char)param_1[0x10] == '\0') {
      *(undefined1 *)(param_1 + 0x10) = 1;
    }
    if (uVar2 == 0) {
      *param_1 = 2;
      *(undefined8 *)(param_1 + 1) = _DAT_142e37950;
      param_1[3] = 0x3f800000;
      uVar2 = param_1[4];
    }
    else {
      uVar2 = param_1[4];
    }
    if (uVar2 == 0) {
      param_1[4] = 2;
      *(undefined8 *)(param_1 + 5) = _DAT_142e37950;
      param_1[7] = 0x3f800000;
      uVar2 = param_1[8];
    }
    else {
      uVar2 = param_1[8];
    }
    if (uVar2 == 0) {
      param_1[8] = 2;
      *(undefined8 *)(param_1 + 9) = _DAT_142e37950;
      param_1[0xb] = 0x3f800000;
      uVar2 = param_1[0xc];
    }
    else {
      uVar2 = param_1[0xc];
    }
    if (uVar2 == 0) {
      param_1[0xc] = 2;
      *(undefined8 *)(param_1 + 0xd) = _DAT_142e37950;
      param_1[0xf] = 0x3f800000;
      cVar3 = *(char *)((longlong)param_1 + 0x41);
    }
    else {
      cVar3 = *(char *)((longlong)param_1 + 0x41);
    }
    if (cVar3 == '\x02') {
      *(undefined1 *)((longlong)param_1 + 0x41) = 0;
    }
    return;
  }
  uVar2 = *param_2;
  uVar6 = uVar2 - 4;
  uVar4 = 2;
  if (3 < uVar2) {
    uVar4 = uVar6;
  }
  if (uVar4 == 0) {
    uVar2 = 4;
    goto LAB_14270d4f2;
  }
  if (uVar4 == 1) {
    uVar2 = 5;
    goto LAB_14270d4f2;
  }
  if (uVar2 == 3) {
    uVar2 = 3;
    goto LAB_14270d4f2;
  }
  if (uVar2 == 2) {
    uStack_30 = param_2[3];
    uStack_38 = *(undefined8 *)(param_2 + 1);
    uVar4 = param_2[4];
    if (uVar4 != 2) goto LAB_14270d621;
LAB_14270d653:
    uStack_20 = param_2[7];
    uStack_28 = *(undefined8 *)(param_2 + 5);
    uVar6 = param_2[8];
    if (uVar6 != 2) goto LAB_14270d675;
LAB_14270d62b:
    uStack_60 = param_2[0xb];
    puStack_68 = *(undefined **)(param_2 + 9);
    in_R10D = param_2[0xc];
    uStack_48 = uStack_38;
    uStack_40 = uStack_30;
    uStack_58 = uStack_28;
    uStack_50 = uStack_20;
  }
  else {
    uVar4 = param_2[4];
    if (uVar4 == 2) goto LAB_14270d653;
LAB_14270d621:
    uVar6 = param_2[8];
    if (uVar6 == 2) goto LAB_14270d62b;
LAB_14270d675:
    in_R10D = param_2[0xc];
    uStack_48 = uStack_38;
    uStack_40 = uStack_30;
    uStack_58 = uStack_28;
    uStack_50 = uStack_20;
    puStack_68 = puStack_98;
    uStack_60 = (uint)uStack_90;
  }
  uStack_70 = (uint)pcStack_80;
  if (in_R10D == 2) {
    uStack_70 = param_2[0xf];
    ppuStack_88 = *(undefined ***)(param_2 + 0xd);
  }
  bVar1 = *(byte *)((longlong)param_2 + 0x41);
  cVar3 = '\x02';
  if (1 < bVar1) {
    cVar3 = bVar1 - 2;
  }
  if (cVar3 == '\0') {
    in_R11B = 2;
  }
  else if (cVar3 == '\x01') {
    in_R11B = 3;
  }
  else {
    in_R11B = bVar1 & 1;
  }
  param_2 = (uint *)(ulonglong)(byte)param_2[0x10];
  ppuStack_78 = ppuStack_88;
LAB_14270d4f2:
  *param_1 = uVar2;
  *(undefined8 *)(param_1 + 1) = uStack_48;
  param_1[3] = uStack_40;
  param_1[4] = uVar4;
  *(undefined8 *)(param_1 + 5) = uStack_58;
  param_1[7] = uStack_50;
  param_1[8] = uVar6;
  *(undefined **)(param_1 + 9) = puStack_68;
  param_1[0xb] = uStack_60;
  param_1[0xc] = in_R10D;
  *(undefined ***)(param_1 + 0xd) = ppuStack_78;
  param_1[0xf] = uStack_70;
  *(char *)(param_1 + 0x10) = (char)param_2;
  *(byte *)((longlong)param_1 + 0x41) = in_R11B;
  return;
}

