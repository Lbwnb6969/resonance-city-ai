// VA 0x140acf980, PDB extent 1694 bytes
// country_core::systems::mod_editor::write_manifest
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mod_editor.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::mod_editor::write_manifest
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mod_editor.rs
   Extent: 1694 */

undefined8 *
pdb_140acf980(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 **ppuStack_e0;
  byte *pbStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  byte *pbStack_b8;
  byte *pbStack_b0;
  byte *pbStack_a8;
  longlong lStack_a0;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  byte *pbStack_68;
  undefined8 *puStack_60;
  byte *pbStack_50;
  undefined1 auStack_44 [2];
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pbStack_68 = pub_1406abab0(0x80,1);
  if (pbStack_68 == (byte *)0x0) {
    pdb_142dc7e2a(1,0x80);
    pcVar1 = (code *)swi(3);
    puVar6 = (undefined8 *)(*pcVar1)();
    return puVar6;
  }
  puStack_70 = (undefined8 *)0x80;
  puStack_60 = (undefined8 *)0x0;
  pbStack_d8 = &UNK_14304d83d;
  uStack_d0 = 2;
  uStack_c8 = 0;
  uStack_c0 = 0;
  ppuStack_e0 = &puStack_70;
  pbStack_50 = (byte *)pdb_141c37900(param_4,&ppuStack_e0);
  puStack_78 = puStack_60;
  if (pbStack_50 == (byte *)0x0) {
    puStack_98 = puStack_70;
    pbStack_50 = pbStack_68;
    if (!SBORROW8(0,(longlong)puStack_70)) {
      uStack_42 = 1;
      pdb_140f3e9e0(&ppuStack_e0,param_2,param_3,&UNK_14304d9a8,7);
      uStack_41 = 1;
      pbStack_a8 = pbStack_d8;
      pdb_140f3e9e0(&puStack_70,pbStack_d8,uStack_d0,&UNK_14304dc20,0xc);
      uStack_88 = (byte *)puStack_98;
      uStack_80 = pbStack_50;
      puStack_90 = puStack_98;
      if (puStack_98 == puStack_78) {
        pdb_142d7f1b0(&uStack_88,puStack_98,1,1,1);
      }
      uStack_80[(longlong)puStack_78] = 10;
      pbStack_b8 = pbStack_68;
      pbStack_b0 = uStack_80;
      puStack_90 = (undefined8 *)uStack_88;
      lVar5 = pdb_140f561c0(pbStack_68,puStack_60,uStack_80,(longlong)puStack_78 + 1);
      if (puStack_90 != (undefined8 *)0x0) {
        pub_1406abac0(pbStack_b0,(ulonglong)puStack_90,1);
      }
      if (puStack_70 != (undefined8 *)0x0) {
        pub_1406abac0(pbStack_b8,(ulonglong)puStack_70,1);
      }
      if (lVar5 == 0) {
        *param_1 = 0x8000000000000000;
      }
      else {
        uStack_88 = (byte *)0x0;
        uStack_80 = (byte *)0x1;
        puStack_78 = (undefined8 *)0x0;
        puStack_60 = (undefined8 *)0x60000020;
        pbStack_68 = &UNK_14304e0c8;
        lStack_a0 = lVar5;
        puStack_70 = &uStack_88;
        cVar4 = pdb_140f59780(&lStack_a0,&puStack_70);
        if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_14304e0f8,0x37,auStack_44,&UNK_14304e358,&UNK_14304e1a0);
        }
        param_1[2] = puStack_78;
        *(undefined4 *)param_1 = (undefined4)uStack_88;
        *(undefined4 *)((longlong)param_1 + 4) = uStack_88._4_4_;
        *(undefined4 *)(param_1 + 1) = (undefined4)uStack_80;
        *(undefined4 *)((longlong)param_1 + 0xc) = uStack_80._4_4_;
        uStack_41 = 0;
        pdb_1404b38e0(&lStack_a0);
      }
      if (ppuStack_e0 == (undefined8 **)0x0) {
        return param_1;
      }
      pub_1406abac0(pbStack_a8,(ulonglong)ppuStack_e0,1);
      return param_1;
    }
  }
  else if (puStack_70 != (undefined8 *)0x0) {
    pub_1406abac0(pbStack_68,(ulonglong)puStack_70,1);
  }
  puStack_70 = (undefined8 *)0x0;
  pbStack_68 = (byte *)0x1;
  puStack_60 = (undefined8 *)0x0;
  uStack_d0 = 0x60000020;
  pbStack_d8 = &UNK_14304e0c8;
  ppuStack_e0 = &puStack_70;
  uStack_88 = pbStack_50;
  cVar4 = pdb_140de07e0(&uStack_88,&ppuStack_e0);
  puVar3 = puStack_60;
  pbVar2 = pbStack_68;
  puVar6 = puStack_70;
  if (cVar4 == '\0') {
    if (*(longlong *)pbStack_50 == 1) {
      pdb_1404b38e0(pbStack_50 + 8);
    }
    else if ((*(longlong *)pbStack_50 == 0) && (*(ulonglong *)(pbStack_50 + 0x10) != 0)) {
      pub_1406abac0(*(byte **)(pbStack_50 + 8),*(ulonglong *)(pbStack_50 + 0x10),1);
    }
    pub_1406abac0(pbStack_50,0x28,8);
    *param_1 = puVar6;
    param_1[1] = pbVar2;
    param_1[2] = puVar3;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_14304e0f8,0x37,auStack_44,&UNK_14304e358,&UNK_14304e1a0);
}

