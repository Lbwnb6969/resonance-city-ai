// VA 0x142950780, PDB extent 342 bytes
// system_critters::firefly::fireflies_send_to_gpu
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/firefly.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_critters::firefly::fireflies_send_to_gpu
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/critters/src/firefly.rs
   Extent: 342 */

void pdb_142950780(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  longlong lStack_30;
  byte *pbStack_28;
  longlong lStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  lStack_88 = *param_1;
  lStack_a0 = param_1[1];
  lStack_98 = lStack_a0 + 0x198;
  lStack_80 = *(longlong *)(lStack_88 + 0xf8);
  lStack_78 = lStack_80 + *(longlong *)(lStack_88 + 0x100) * 4;
  uStack_38 = *(undefined1 *)(lStack_88 + 0x108);
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  lStack_90 = lStack_a0 + 0xf8;
  uStack_70 = 8;
  uStack_68 = 0;
  uStack_60 = 8;
  pdb_142299700(&lStack_30,&lStack_a0);
  if (lStack_20 != 0) {
    if (lStack_20 != 0x60) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_143600e0f,0x37,&UNK_143600e48);
    }
    puVar1 = (undefined8 *)pdb_1429472f0(*param_2,&UNK_143600388);
    if (puVar1 != (undefined8 *)0x0) {
      lVar2 = (**(code **)(puVar1[1] + 0x18))(*puVar1);
      if (lVar2 != 0) {
        pdb_1429475c0(lVar2,pbStack_28,0x60);
      }
    }
  }
  if (lStack_30 != 0) {
    pub_1406abac0(pbStack_28,lStack_30 << 4,4);
  }
  return;
}

