// VA 0x1417be3a0, PDB extent 861 bytes
// country_core::systems::wall::valid_enclosure::_::impl$0::deserialize<serde::private::de::content::ContentRefDeserializer<serde_json::error::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/valid_enclosure/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::wall::valid_enclosure::_::impl$0::deserialize<serde::private::de::content::ContentRefDeserializer<serde_json::error::Error>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/valid_enclosure/mod.rs
   Extent: 861 */

undefined4 * pdb_1417be3a0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  char cStack_a8;
  undefined4 uStack_a7;
  undefined3 uStack_a3;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  int iStack_88;
  int iStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  byte *pbStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  pdb_140f351b0(&iStack_88);
  if ((char)iStack_88 == '\x16') {
    uVar2 = CONCAT44(uStack_7c,uStack_80);
LAB_1417be3df:
    *(undefined8 *)(param_1 + 2) = uVar2;
    uVar1 = 1;
  }
  else {
    uStack_a7 = CONCAT13((undefined1)iStack_84,iStack_88._1_3_);
    uStack_a3 = (undefined3)((uint)iStack_84 >> 8);
    uStack_98 = uStack_78;
    uStack_94 = uStack_74;
    uStack_90 = uStack_70;
    uStack_8c = uStack_6c;
    cStack_a8 = (char)iStack_88;
    pdb_141b4d510(&iStack_88,&cStack_a8,&UNK_143336970,0x11,&UNK_143336950,2);
    if (iStack_88 == 1) {
      pbStack_68 = (byte *)CONCAT44(uStack_7c,uStack_80);
      if (*(longlong *)pbStack_68 == 1) {
        pdb_1404b38e0(pbStack_68 + 8);
      }
      else if ((*(longlong *)pbStack_68 == 0) && (*(ulonglong *)(pbStack_68 + 0x10) != 0)) {
        pub_1406abac0(*(byte **)(pbStack_68 + 8),*(ulonglong *)(pbStack_68 + 0x10),1);
      }
      pub_1406abac0(pbStack_68,0x28,8);
      pdb_141b4d5b0(&iStack_88,&cStack_a8,&UNK_14333693f,0x11,&UNK_143336950,2);
      if (iStack_88 == 2) {
        pbStack_68 = (byte *)CONCAT44(uStack_7c,uStack_80);
        if (*(longlong *)pbStack_68 == 1) {
          pdb_1404b38e0(pbStack_68 + 8);
        }
        else if ((*(longlong *)pbStack_68 == 0) && (*(ulonglong *)(pbStack_68 + 0x10) != 0)) {
          pub_1406abac0(*(byte **)(pbStack_68 + 8),*(ulonglong *)(pbStack_68 + 0x10),1);
        }
        pub_1406abac0(pbStack_68,0x28,8);
        uVar2 = pdb_142d86fc0(&UNK_1433369fc,0x49);
        pdb_1417c2e50(&cStack_a8);
        goto LAB_1417be3df;
      }
      uVar3 = CONCAT44(iStack_84,iStack_88);
      pdb_1417c2e50(&cStack_a8);
LAB_1417be572:
      if ((uVar3 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_1430435e8,0x6d,&UNK_143043620);
      }
      pdb_140defa80(param_1 + 2,uVar3 >> 0x20,uStack_80,uStack_7c);
      uVar1 = 0;
    }
    else {
      uVar3 = CONCAT44(uStack_7c,uStack_80);
      pdb_1417c2e50(&cStack_a8);
      uStack_80 = uStack_78;
      uStack_7c = uStack_74;
      if (iStack_84 == 2) goto LAB_1417be572;
      *(ulonglong *)(param_1 + 2) = uVar3;
      *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_74,uStack_78);
      uVar1 = 0;
      if (iStack_84 == 1) {
        *(ulonglong *)(param_1 + 6) = CONCAT44(uStack_6c,uStack_70);
        uVar1 = 1;
      }
    }
    param_1[1] = uVar1;
    uVar1 = 0;
  }
  *param_1 = uVar1;
  return param_1;
}

