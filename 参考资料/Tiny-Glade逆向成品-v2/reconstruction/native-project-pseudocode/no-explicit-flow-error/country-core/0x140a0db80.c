// VA 0x140a0db80, PDB extent 753 bytes
// country_core::resources::walls::wall_trigger_volume::WallTriggerVolume::get_collision_geo
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_trigger_volume.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::wall_trigger_volume::WallTriggerVolume::get_collision_geo
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_trigger_volume.rs
   Extent: 753 */

longlong * pdb_140a0db80(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  code *pcVar2;
  ulonglong arg0;
  longlong lVar3;
  byte *pbVar4;
  longlong lStack_88;
  byte *pbStack_80;
  longlong lStack_78;
  longlong lStack_70;
  byte *pbStack_68;
  longlong lStack_60;
  longlong lStack_58;
  byte *pbStack_50;
  longlong lStack_48;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  lVar1 = *(longlong *)(param_2 + 0x10);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_1430365a8,0x28,&UNK_1430365d0);
  }
  arg0 = lVar1 * 0x48;
  pdb_14007ee60();
  pbVar4 = pub_1406abab0(arg0,4);
  if (pbVar4 == (byte *)0x0) {
    pdb_142dc7e2a(4,arg0);
  }
  else {
    lVar3 = lVar1 * 2;
    lStack_48 = 0;
    lStack_58 = lVar3;
    pbStack_50 = pbVar4;
    pdb_14007ee60();
    pbVar4 = pub_1406abab0(arg0,4);
    if (pbVar4 != (byte *)0x0) {
      lStack_60 = 0;
      lStack_70 = lVar3;
      pbStack_68 = pbVar4;
      pdb_14007ee60();
      pbStack_80 = pub_1406abab0(lVar1 * 0x30,4);
      if (pbStack_80 != (byte *)0x0) {
        lStack_78 = 0;
        lStack_88 = lVar3;
        pdb_141b2eb70(param_2,param_3,&lStack_58,&lStack_70,&lStack_88);
        if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_143036568,0x27,&UNK_143036590);
        }
        if (lStack_60 != 0) {
          if (lStack_78 != 0) {
            param_1[2] = lStack_48;
            *param_1 = lStack_58;
            param_1[1] = (longlong)pbStack_50;
            param_1[3] = lStack_70;
            param_1[4] = (longlong)pbStack_68;
            param_1[5] = lStack_60;
            param_1[6] = lStack_88;
            param_1[7] = (longlong)pbStack_80;
            param_1[8] = lStack_78;
            return param_1;
          }
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_1430364e8,0x26,&UNK_143036510);
        }
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_143036528,0x25,&UNK_143036550);
      }
      pdb_142dc7e2a(4,lVar1 * 0x30);
      goto LAB_140a0dd6b;
    }
  }
  pdb_142dc7e2a(4,arg0);
LAB_140a0dd6b:
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

