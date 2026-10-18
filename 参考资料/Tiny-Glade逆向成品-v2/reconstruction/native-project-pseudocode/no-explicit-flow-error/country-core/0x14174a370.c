// VA 0x14174a370, PDB extent 615 bytes
// rhapsody::rg::temporal::impl$20::get_or_create_temporal_pair<ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   rhapsody::rg::temporal::impl$20::get_or_create_temporal_pair<ref$<str$> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 615 */

undefined4 *
pdb_14174a370(undefined4 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  longlong lVar1;
  byte bVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  byte bVar6;
  bool bVar7;
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  code *pcStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  int iStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  byte bStack_5c;
  char *pcStack_58;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_d0 = pdb_140e94300(param_3,param_4);
  pcStack_b0 = pdb_140e94060;
  puStack_b8 = &uStack_d0;
  pdb_140f60760(auStack_e8,&UNK_14333015d,&puStack_b8);
  uStack_a8 = *(undefined4 *)(param_5 + 2);
  puStack_b8 = (undefined8 *)*param_5;
  pcStack_b0 = (code *)param_5[1];
  pdb_141749370(&iStack_78,param_2,auStack_e8,&puStack_b8);
  bVar2 = bStack_5c;
  if (iStack_78 != 1) {
    uStack_4c = uStack_74;
    uStack_c8 = uStack_70;
    uStack_88 = uStack_68;
    uStack_80 = uStack_60;
    pcStack_b0 = pdb_140e94060;
    puStack_b8 = &uStack_d0;
    pdb_140f60760(auStack_100,&UNK_143330162,&puStack_b8);
    pdb_141749370(&iStack_78,param_2,auStack_100,param_5);
    if (iStack_78 != 1) {
      uStack_c0 = uStack_70;
      uStack_98 = uStack_68;
      uStack_90 = uStack_60;
      lVar1 = *(longlong *)(param_2 + 0x1f8);
      pcStack_58 = (char *)(lVar1 + 0x10);
      LOCK();
      bVar7 = *(char *)(lVar1 + 0x10) == '\0';
      if (bVar7) {
        *(char *)(lVar1 + 0x10) = '\x01';
      }
      UNLOCK();
      if (!bVar7) {
        pdb_142dbd1a0(lVar1 + 0x10);
      }
      pdb_140e9a150(lVar1 + 0x10);
      iVar5 = pdb_140e38a80(lVar1 + 0x18,uStack_d0);
      pcVar3 = pcStack_58;
      pdb_140e9a350(pcStack_58);
      LOCK();
      bVar7 = *pcVar3 == '\x01';
      if (bVar7) {
        *pcVar3 = '\0';
      }
      UNLOCK();
      if (!bVar7) {
        pdb_142dbcef0(pcStack_58,0);
      }
      bVar6 = 0;
      if ((bVar2 & 1) != 0) {
        bVar6 = bStack_5c & 1;
      }
      if (iVar5 == 0) {
        param_1[6] = uStack_80;
        *(undefined8 *)(param_1 + 4) = uStack_88;
        param_1[0xc] = uStack_90;
        *(undefined8 *)(param_1 + 10) = uStack_98;
        param_1[1] = uStack_4c;
        *(undefined8 *)(param_1 + 2) = uStack_c8;
        param_1[7] = uStack_74;
        uStack_c8 = uStack_c0;
      }
      else {
        param_1[6] = uStack_90;
        *(undefined8 *)(param_1 + 4) = uStack_98;
        param_1[0xc] = uStack_80;
        *(undefined8 *)(param_1 + 10) = uStack_88;
        param_1[1] = uStack_74;
        *(undefined8 *)(param_1 + 2) = uStack_c0;
        param_1[7] = uStack_4c;
      }
      *(undefined8 *)(param_1 + 8) = uStack_c8;
      *(byte *)(param_1 + 0xd) = bVar6;
      uVar4 = 0;
      goto LAB_14174a563;
    }
  }
  *(undefined8 *)(param_1 + 2) = uStack_70;
  uVar4 = 1;
LAB_14174a563:
  *param_1 = uVar4;
  return param_1;
}

