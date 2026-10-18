// VA 0x140d947e0, PDB extent 922 bytes
// tg_mods::discovery::shelve_mod
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/discovery.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_mods::discovery::shelve_mod
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-mods/src/discovery.rs
   Extent: 922 */

ulonglong * pdb_140d947e0(ulonglong *param_1,ulonglong param_2,byte *param_3)

{
  code *pcVar1;
  ulonglong *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  byte *pbVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulonglong *puStack_d0;
  byte **ppbStack_c8;
  undefined4 uStack_c0;
  byte *pbStack_b8;
  ulonglong *puStack_b0;
  ulonglong uStack_a8;
  byte *pbStack_a0;
  ulonglong *puStack_98;
  ulonglong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulonglong uStack_70;
  byte *pbStack_58;
  ulonglong uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong uStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  pbVar6 = param_3;
  lVar3 = pdb_140f3ecf0(param_2,param_3);
  if (lVar3 != 0) {
    pdb_140f69110(&uStack_88,lVar3,pbVar6);
    if ((int)uStack_88 != 1) {
      pbStack_b8 = uStack_80;
      puStack_b0 = uStack_78;
      puVar7 = &UNK_1431e5963;
      pdb_140f4c4e0(&uStack_88,&UNK_1431e5963,0x13);
      if (SBORROW8(0,uStack_88)) {
        uVar4 = pdb_140dc7520(-uStack_88);
        pdb_140f3e9e0(&uStack_50,uVar4,puVar7,&UNK_1431e5976,4);
      }
      else {
        uStack_38 = uStack_70;
        uStack_48 = (undefined4)uStack_80;
        uStack_44 = uStack_80._4_4_;
        uStack_40 = (undefined4)uStack_78;
        uStack_3c = uStack_78._4_4_;
        uStack_50 = uStack_88;
      }
      pbStack_58 = (byte *)CONCAT44(uStack_44,uStack_48);
      uVar4 = CONCAT44(uStack_3c,uStack_40);
      uVar8 = uVar4;
      lVar3 = pdb_140f3eaf0(pbStack_58,uVar4);
      if ((lVar3 == 0) ||
         (pdb_140f3e9e0(&uStack_88,lVar3,uVar8,&UNK_1431e5777,0xc), uVar5 = uStack_88,
         pbVar6 = uStack_80, puVar2 = uStack_78, SBORROW8(0,uStack_88))) {
        pdb_140f3e9e0(&uStack_a8,pbStack_58,uVar4,&UNK_1431e5777,0xc);
        uVar5 = uStack_a8;
        pbVar6 = pbStack_a0;
        puVar2 = puStack_98;
      }
      puStack_98 = puVar2;
      pbStack_a0 = pbVar6;
      uStack_a8 = uVar5;
      if (uStack_50 != 0) {
        pub_1406abac0(pbStack_58,uStack_50,1);
      }
      uStack_88 = CONCAT71(uStack_88._1_7_,1);
      lVar3 = pdb_140f46c40(&uStack_88,pbStack_a0,puStack_98);
      if (lVar3 == 0) {
        uStack_c0 = 1;
        puStack_d0 = &uStack_a8;
        ppbStack_c8 = &pbStack_b8;
        pdb_141daefe0(&uStack_88,&puStack_d0);
        if (SBORROW8(0,uStack_88)) {
          pdb_142dc8110(&UNK_1431e5556,9,&UNK_1431e5580);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        uStack_38 = uStack_70;
        uStack_48 = (undefined4)uStack_80;
        uStack_44 = uStack_80._4_4_;
        uStack_40 = (undefined4)uStack_78;
        uStack_3c = uStack_78._4_4_;
        uStack_50 = uStack_88;
        uVar4 = pdb_140f4f450(param_2,param_3,uStack_80,uStack_78);
        uStack_78 = &uStack_50;
        uStack_88 = param_2;
        uStack_80 = param_3;
        uVar5 = pdb_141daf530(uVar4,&uStack_88);
        if (uVar5 == 0) {
          param_1[2] = CONCAT44(uStack_3c,uStack_40);
          param_1[3] = uStack_38;
          *param_1 = uStack_50;
          param_1[1] = CONCAT44(uStack_44,uStack_48);
        }
        else {
          param_1[1] = uVar5;
          *param_1 = 0x8000000000000000;
          if (uStack_50 != 0) {
            pub_1406abac0((byte *)CONCAT44(uStack_44,uStack_48),uStack_50,1);
          }
        }
      }
      else {
        uVar5 = pdb_142dff510(lVar3);
        param_1[1] = uVar5;
        *param_1 = 0x8000000000000000;
      }
      if (uStack_a8 == 0) {
        return param_1;
      }
      pub_1406abac0(pbStack_a0,uStack_a8,1);
      return param_1;
    }
  }
  pdb_140f3f5b0(&uStack_88);
  uVar5 = pdb_142dff290(&UNK_1431e5540,0x16,&uStack_88);
  param_1[1] = uVar5;
  *param_1 = 0x8000000000000000;
  return param_1;
}

