// Matched PDB: asset::inheritable::impl$1::inherit_from<enum2$<core::option::Option<asset::prefab::config::PrefabRtConfig> > >
// VA 0x14270d410, PDB extent 905 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB:
   asset::inheritable::impl$1::inherit_from<enum2$<core::option::Option<asset::prefab::config::PrefabRtConfig>
   > >
   Extent: 905 bytes. No whole-program auto-analysis. */

void pdb_14270d410(uint *param_1,uint *param_2)

{
  byte bVar1;
  code *pcVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
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
  
  uVar3 = *param_1;
  iVar6 = uVar3 - 4;
  if (uVar3 < 4) {
    iVar6 = 2;
  }
  if (iVar6 != 0) {
    if (iVar6 == 2) {
      uVar5 = *param_2;
      iVar6 = 2;
      if (3 < uVar5) {
        iVar6 = uVar5 - 4;
      }
      if (iVar6 == 2) {
        if ((uVar3 != 3) && (uVar5 != 3)) {
          pdb_14270a6c0();
          uVar3 = *param_1;
        }
        if (uVar3 == 3) {
          return;
        }
        if ((char)param_1[0x10] == '\0') {
          *(undefined1 *)(param_1 + 0x10) = 1;
        }
        if (uVar3 == 0) {
          *param_1 = 2;
          *(undefined8 *)(param_1 + 1) = _DAT_142e37950;
          param_1[3] = 0x3f800000;
          uVar3 = param_1[4];
        }
        else {
          uVar3 = param_1[4];
        }
        if (uVar3 == 0) {
          param_1[4] = 2;
          *(undefined8 *)(param_1 + 5) = _DAT_142e37950;
          param_1[7] = 0x3f800000;
          uVar3 = param_1[8];
        }
        else {
          uVar3 = param_1[8];
        }
        if (uVar3 == 0) {
          param_1[8] = 2;
          *(undefined8 *)(param_1 + 9) = _DAT_142e37950;
          param_1[0xb] = 0x3f800000;
          uVar3 = param_1[0xc];
        }
        else {
          uVar3 = param_1[0xc];
        }
        if (uVar3 == 0) {
          param_1[0xc] = 2;
          *(undefined8 *)(param_1 + 0xd) = _DAT_142e37950;
          param_1[0xf] = 0x3f800000;
          cVar4 = *(char *)((longlong)param_1 + 0x41);
        }
        else {
          cVar4 = *(char *)((longlong)param_1 + 0x41);
        }
        if (cVar4 == '\x02') {
          *(undefined1 *)((longlong)param_1 + 0x41) = 0;
        }
        return;
      }
      if (iVar6 != 0) goto LAB_14270d755;
      pdb_142dc83d0(&UNK_14358a313,0x9d,&UNK_14358a438);
    }
    pdb_142dc83b0(&UNK_14358a3f5,0x28,&UNK_14358a420);
LAB_14270d755:
    puStack_98 = &UNK_14358a248;
    uStack_90 = 0x3b;
    ppuStack_88 = &puStack_98;
    pcStack_80 = pdb_1402ed400;
    pdb_142dc83d0(&UNK_14358a361,&ppuStack_88,&UNK_14358a438);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar3 = *param_2;
  uVar7 = uVar3 - 4;
  uVar5 = 2;
  if (3 < uVar3) {
    uVar5 = uVar7;
  }
  if (uVar5 == 0) {
    uVar3 = 4;
    goto LAB_14270d4f2;
  }
  if (uVar5 == 1) {
    uVar3 = 5;
    goto LAB_14270d4f2;
  }
  if (uVar3 == 3) {
    uVar3 = 3;
    goto LAB_14270d4f2;
  }
  if (uVar3 == 2) {
    uStack_30 = param_2[3];
    uStack_38 = *(undefined8 *)(param_2 + 1);
    uVar5 = param_2[4];
    if (uVar5 != 2) goto LAB_14270d621;
LAB_14270d653:
    uStack_20 = param_2[7];
    uStack_28 = *(undefined8 *)(param_2 + 5);
    uVar7 = param_2[8];
    if (uVar7 != 2) goto LAB_14270d675;
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
    uVar5 = param_2[4];
    if (uVar5 == 2) goto LAB_14270d653;
LAB_14270d621:
    uVar7 = param_2[8];
    if (uVar7 == 2) goto LAB_14270d62b;
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
  cVar4 = '\x02';
  if (1 < bVar1) {
    cVar4 = bVar1 - 2;
  }
  if (cVar4 == '\0') {
    in_R11B = 2;
  }
  else if (cVar4 == '\x01') {
    in_R11B = 3;
  }
  else {
    in_R11B = bVar1 & 1;
  }
  param_2 = (uint *)(ulonglong)(byte)param_2[0x10];
  ppuStack_78 = ppuStack_88;
LAB_14270d4f2:
  *param_1 = uVar3;
  *(undefined8 *)(param_1 + 1) = uStack_48;
  param_1[3] = uStack_40;
  param_1[4] = uVar5;
  *(undefined8 *)(param_1 + 5) = uStack_58;
  param_1[7] = uStack_50;
  param_1[8] = uVar7;
  *(undefined **)(param_1 + 9) = puStack_68;
  param_1[0xb] = uStack_60;
  param_1[0xc] = in_R10D;
  *(undefined ***)(param_1 + 0xd) = ppuStack_78;
  param_1[0xf] = uStack_70;
  *(char *)(param_1 + 0x10) = (char)param_2;
  *(byte *)((longlong)param_1 + 0x41) = in_R11B;
  return;
}

