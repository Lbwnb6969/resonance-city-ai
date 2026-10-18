// VA 0x140d9a400, PDB extent 1047 bytes
// tg_mods::discovery::effective_mod_root
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/discovery.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_mods::discovery::effective_mod_root
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/discovery.rs
   Extent: 1047 */

ulonglong * pdb_140d9a400(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  byte *pbVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  byte *pbVar8;
  longlong lStack_570;
  ulonglong auStack_568 [77];
  int iStack_300;
  undefined4 uStack_2fc;
  ulonglong uStack_2f8;
  ulonglong uStack_2f0;
  ulonglong uStack_2e8;
  byte bStack_2e0;
  undefined7 uStack_2df;
  ulonglong uStack_90;
  ulonglong uStack_88;
  ulonglong uStack_80;
  ulonglong uStack_78;
  char cStack_70;
  undefined7 uStack_6f;
  byte *pbStack_60;
  longlong lStack_58;
  byte *pbStack_50;
  longlong lStack_48;
  ulonglong *puStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  pbStack_60 = (byte *)param_2[1];
  uVar4 = param_2[2];
  puStack_40 = param_2;
  pdb_140d9aa70(&uStack_90,pbStack_60,uVar4);
  if ((cStack_70 != '\0') || (!SBORROW8(0,uStack_90))) {
    uVar4 = *puStack_40;
    uVar6 = puStack_40[1];
    uVar1 = puStack_40[3];
    param_1[2] = puStack_40[2];
    param_1[3] = uVar1;
    *param_1 = uVar4;
    param_1[1] = uVar6;
    param_1[4] = uStack_90;
    param_1[5] = uStack_88;
    param_1[6] = uStack_80;
    param_1[7] = uStack_78;
    param_1[8] = CONCAT71(uStack_6f,cStack_70);
    return param_1;
  }
  lStack_58 = 0;
  pbStack_50 = (byte *)0x8;
  lStack_48 = 0;
  pdb_140f4f710(&iStack_300,pbStack_60,uVar4);
  if (iStack_300 == 2) {
    auStack_568[0] = uStack_2f8;
    lStack_570 = 2;
LAB_140d9a511:
    pdb_1404b38e0(auStack_568);
  }
  else {
    pub_142e32760(&lStack_570,&iStack_300,0x270);
    if (lStack_570 == 2) goto LAB_140d9a511;
    pub_142e32760(&iStack_300,&lStack_570,0x270);
    pdb_141da34b0(&lStack_58,&iStack_300);
  }
  if ((lStack_48 == 1) &&
     (pdb_140d9aa70(&iStack_300,*(undefined8 *)(pbStack_50 + 8),*(undefined8 *)(pbStack_50 + 0x10)),
     pbVar3 = pbStack_50, lVar5 = lStack_58,
     (!SBORROW8(0,CONCAT44(uStack_2fc,iStack_300)) | bStack_2e0) == 1)) {
    if (lStack_48 != 0) {
      lVar7 = lStack_48 + -1;
      lVar2 = lVar7 * 0x20;
      uVar4 = *(ulonglong *)(pbStack_50 + lVar2);
      lStack_48 = lVar7;
      if (!SBORROW8(0,uVar4)) {
        param_1[3] = *(ulonglong *)(pbStack_50 + lVar2 + 0x18);
        uVar6 = *(ulonglong *)(pbStack_50 + lVar2 + 0x10);
        param_1[1] = *(ulonglong *)(pbStack_50 + lVar2 + 8);
        param_1[2] = uVar6;
        param_1[4] = CONCAT44(uStack_2fc,iStack_300);
        param_1[5] = uStack_2f8;
        param_1[6] = uStack_2f0;
        param_1[7] = uStack_2e8;
        param_1[8] = CONCAT71(uStack_2df,bStack_2e0);
        *param_1 = uVar4;
        if (lVar7 != 0) {
          pbVar8 = pbStack_50 + 8;
          do {
            if (*(ulonglong *)(pbVar8 + -8) != 0) {
              pub_1406abac0(*(byte **)pbVar8,*(ulonglong *)(pbVar8 + -8),1);
            }
            pbVar8 = pbVar8 + 0x20;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
        pub_1406abac0(pbVar3,lVar5 << 5,8);
        uVar4 = *puStack_40;
        if (uVar4 == 0) {
          return param_1;
        }
        uVar6 = 1;
        pbVar3 = pbStack_60;
        goto LAB_140d9a70e;
      }
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_1431e5788);
  }
  pbVar3 = pbStack_50;
  uVar4 = *puStack_40;
  uVar6 = puStack_40[1];
  uVar1 = puStack_40[3];
  param_1[2] = puStack_40[2];
  param_1[3] = uVar1;
  *param_1 = uVar4;
  param_1[1] = uVar6;
  param_1[4] = uStack_90;
  param_1[5] = uStack_88;
  param_1[6] = uStack_80;
  param_1[7] = uStack_78;
  param_1[8] = CONCAT71(uStack_6f,cStack_70);
  if (lStack_48 != 0) {
    pbVar8 = pbStack_50 + 8;
    lVar5 = lStack_48;
    do {
      if (*(ulonglong *)(pbVar8 + -8) != 0) {
        pub_1406abac0(*(byte **)pbVar8,*(ulonglong *)(pbVar8 + -8),1);
      }
      pbVar8 = pbVar8 + 0x20;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (lStack_58 == 0) {
    return param_1;
  }
  uVar4 = lStack_58 << 5;
  uVar6 = 8;
LAB_140d9a70e:
  pub_1406abac0(pbVar3,uVar4,uVar6);
  return param_1;
}

