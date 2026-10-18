// VA 0x140a9db20, PDB extent 711 bytes
// country_core::startup::load_textures::read_texture_list
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_textures.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::startup::load_textures::read_texture_list
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_textures.rs
   Extent: 711 */

undefined8 * pdb_140a9db20(undefined8 *param_1,undefined *param_2,undefined8 param_3)

{
  code *pcVar1;
  byte *arg0;
  int iVar2;
  longlong *plVar3;
  undefined *puVar4;
  byte *pbVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong lStack_78;
  undefined1 auStack_68 [8];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong lStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puVar4 = param_2;
  pdb_1417fc060(&uStack_60);
  lVar6 = lStack_50;
  if (SBORROW8(0,CONCAT44(uStack_5c,uStack_60))) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143046548,0xf,&uStack_88,&UNK_143046ad0,&UNK_143046588);
  }
  lStack_78 = lStack_50;
  uStack_88 = CONCAT44(uStack_5c,uStack_60);
  uStack_80 = uStack_58;
  uStack_7c = uStack_54;
  if (lStack_50 != 0) {
    arg0 = (byte *)CONCAT44(uStack_54,uStack_58);
    lVar7 = lStack_50 * 0x40;
    pbVar5 = arg0;
    do {
      plVar3 = (longlong *)pdb_14043b7e0(pbVar5 + 0x10);
      if (((puVar4 == (undefined *)0xc) &&
          ((int)plVar3[1] == 0x7473696c && *plVar3 == 0x2d65727574786574)) &&
         (*(longlong *)(pbVar5 + 0x38) == 0x25)) {
        puVar4 = &DAT_14333e441;
        iVar2 = pub_142e32750(*(undefined8 *)(pbVar5 + 0x30),&DAT_14333e441,0x25);
        if (iVar2 == 0) {
          pdb_1417fc430(&uStack_60,param_2,param_3,*(undefined8 *)pbVar5,*(undefined8 *)(pbVar5 + 8)
                       );
          if (!SBORROW8(0,CONCAT44(uStack_5c,uStack_60))) {
            param_1[2] = lStack_50;
            *param_1 = CONCAT44(uStack_5c,uStack_60);
            param_1[1] = CONCAT44(uStack_54,uStack_58);
            pbVar5 = arg0 + 0x30;
            do {
              if (*(ulonglong *)(pbVar5 + -0x20) != 0) {
                pub_1406abac0(*(byte **)(pbVar5 + -0x18),*(ulonglong *)(pbVar5 + -0x20),1);
              }
              if (*(ulonglong *)(pbVar5 + -8) != 0) {
                pub_1406abac0(*(byte **)pbVar5,*(ulonglong *)(pbVar5 + -8),1);
              }
              pbVar5 = pbVar5 + 0x40;
              lVar6 = lVar6 + -1;
            } while (lVar6 != 0);
            if (uStack_88 != 0) {
              pub_1406abac0(arg0,uStack_88 << 6,0x10);
            }
            return param_1;
          }
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_1430465d0,0x1d,auStack_68,&UNK_143046ad0,&UNK_1430465f0);
        }
      }
      pbVar5 = pbVar5 + 0x40;
    } while (pbVar5 != arg0 + lVar7);
  }
  pdb_142dc8110(&UNK_1430465a0,0x12,&UNK_1430465b8);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

