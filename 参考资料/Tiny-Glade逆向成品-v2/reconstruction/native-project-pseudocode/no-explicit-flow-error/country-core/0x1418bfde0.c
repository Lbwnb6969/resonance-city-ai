// VA 0x1418bfde0, PDB extent 823 bytes
// country_core::systems::mod_editor::EditingMod::edit_manifest_item<country_core::systems::mod_editor::impl$2::set_sound::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mod_editor.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::mod_editor::EditingMod::edit_manifest_item<country_core::systems::mod_editor::impl$2::set_sound::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mod_editor.rs
   Extent: 823 */

void pdb_1418bfde0(longlong param_1,undefined8 param_2,longlong param_3,char *param_4)

{
  byte *pbVar1;
  int iVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  byte *pbVar7;
  undefined8 *puStack_d8;
  code *pcStack_d0;
  undefined8 uStack_c8;
  longlong lStack_c0;
  int aiStack_b8 [2];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  longlong lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  code *pcStack_80;
  longlong lStack_78;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong lStack_58;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_c8 = param_2;
  lStack_c0 = param_3;
  pdb_140acf2d0(aiStack_b8,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  if (aiStack_b8[0] == 1) {
    puVar4 = (undefined8 *)CONCAT44(uStack_ac,uStack_b0);
    uStack_98 = CONCAT44(uStack_a4,uStack_a8);
    uStack_90 = lStack_a0;
  }
  else {
    uStack_68 = (undefined8 *)CONCAT44(uStack_ac,uStack_b0);
    uStack_60 = uStack_a8;
    uStack_5c = uStack_a4;
    lStack_58 = lStack_a0;
    if (lStack_a0 != 0) {
      lVar5 = CONCAT44(uStack_a4,uStack_a8);
      lVar6 = 0;
      do {
        if ((*(longlong *)(lVar5 + 0x10 + lVar6) == param_3) &&
           (iVar2 = pub_142e32750(*(undefined8 *)(lVar5 + 8 + lVar6),param_2,param_3), iVar2 == 0))
        {
          cVar3 = '\'';
          if (*param_4 != '\x12') {
            cVar3 = *param_4;
          }
          *(char *)(lVar5 + 0x19 + lVar6) = cVar3;
          pdb_140acf980(&puStack_88,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                        &uStack_68);
          puVar4 = puStack_88;
          if (SBORROW8(0,(longlong)puStack_88)) {
            uStack_98 = CONCAT44(uStack_5c,uStack_60);
            uStack_90 = lStack_58;
            pbVar1 = *(byte **)(param_1 + 0x50);
            lVar5 = *(longlong *)(param_1 + 0x58);
            if (lVar5 != 0) {
              pbVar7 = pbVar1 + 8;
              do {
                if (*(ulonglong *)(pbVar7 + -8) != 0) {
                  pub_1406abac0(*(byte **)pbVar7,*(ulonglong *)(pbVar7 + -8),1);
                }
                pbVar7 = pbVar7 + 0x20;
                lVar5 = lVar5 + -1;
              } while (lVar5 != 0);
            }
            if (*(longlong *)(param_1 + 0x48) != 0) {
              pub_1406abac0(pbVar1,*(longlong *)(param_1 + 0x48) << 5,8);
            }
            *(undefined8 **)(param_1 + 0x48) = uStack_68;
            *(undefined4 *)(param_1 + 0x50) = (undefined4)uStack_98;
            *(undefined4 *)(param_1 + 0x54) = uStack_98._4_4_;
            *(undefined4 *)(param_1 + 0x58) = (undefined4)uStack_90;
            *(undefined4 *)(param_1 + 0x5c) = uStack_90._4_4_;
            puStack_88 = &uStack_c8;
            pcStack_80 = pdb_1402ed400;
            pdb_140f60760(aiStack_b8,&UNK_143356180,&puStack_88);
            pdb_140acec60(param_1,aiStack_b8);
            return;
          }
          goto LAB_1418bff52;
        }
        lVar6 = lVar6 + 0x20;
      } while (lStack_a0 << 5 != lVar6);
    }
    puStack_d8 = &uStack_c8;
    pcStack_d0 = pdb_1402ed400;
    pdb_140f60760(&puStack_88,&UNK_1433561c6,&puStack_d8);
    puVar4 = puStack_88;
LAB_1418bff52:
    uStack_98 = pcStack_80;
    uStack_90 = lStack_78;
    pbVar1 = (byte *)CONCAT44(uStack_5c,uStack_60);
    if (lStack_58 != 0) {
      pbVar7 = pbVar1 + 8;
      lVar5 = lStack_58;
      do {
        if (*(ulonglong *)(pbVar7 + -8) != 0) {
          pub_1406abac0(*(byte **)pbVar7,*(ulonglong *)(pbVar7 + -8),1);
        }
        pbVar7 = pbVar7 + 0x20;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (uStack_68 != (undefined8 *)0x0) {
      pub_1406abac0(pbVar1,(longlong)uStack_68 << 5,8);
    }
  }
  uStack_60 = (undefined4)uStack_98;
  uStack_5c = uStack_98._4_4_;
  lStack_58 = uStack_90;
  puStack_88 = &uStack_68;
  pcStack_80 = pdb_140001020;
  uStack_68 = puVar4;
  pdb_140f60760(aiStack_b8,&UNK_1433561a5,&puStack_88);
  pdb_140acec60(param_1,&puStack_88);
  if (uStack_68 != (undefined8 *)0x0) {
    pub_1406abac0((byte *)CONCAT44(uStack_5c,uStack_60),(ulonglong)uStack_68,1);
  }
  return;
}

