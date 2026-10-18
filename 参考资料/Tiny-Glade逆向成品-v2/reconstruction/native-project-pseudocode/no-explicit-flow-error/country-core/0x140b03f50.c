// VA 0x140b03f50, PDB extent 467 bytes
// country_core::systems::render_loop::compute_passes::primary_rt_debug::primary_rt_debug
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/primary_rt_debug.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::primary_rt_debug::primary_rt_debug
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/primary_rt_debug.rs
   Extent: 467 */

void pdb_140b03f50(longlong param_1,longlong param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  longlong lStack_70;
  undefined4 *puStack_68;
  undefined1 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  uVar1 = *(ushort *)(param_2 + 8);
  uVar2 = *(ushort *)(param_2 + 10);
  uStack_120 = (ulonglong)*(uint *)(param_2 + 8) << 0x20;
  uStack_118 = 0x16d011800010001;
  uStack_110 = 2;
  pdb_141749b70(&iStack_1a8,param_1,&UNK_14305329c,0xe,&uStack_120);
  if (iStack_1a8 != 1) {
    uStack_88 = uStack_194;
    uStack_84 = uStack_190;
    uStack_80 = uStack_18c;
    uVar4 = uStack_80;
    uStack_98 = uStack_1a4;
    uStack_94 = uStack_1a0;
    uStack_90 = uStack_19c;
    uStack_8c = uStack_198;
    uStack_80._0_1_ = (undefined1)uStack_18c;
    uVar3 = (undefined1)uStack_80;
    uStack_58 = 0;
    uStack_50 = 8;
    uStack_48 = 0;
    uStack_80 = uVar4;
    uVar5 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_143331be0,0x22,&uStack_58);
    pdb_140e291c0(&uStack_120,&UNK_143331be0,0x22,uVar5,param_1);
    puStack_68 = &uStack_98;
    uStack_60 = uVar3;
    lStack_70 = param_2;
    pdb_141797570(&iStack_1a8,&uStack_120,&lStack_70);
    uStack_118 = CONCAT44(1,(uint)uVar2);
    uStack_120 = CONCAT44((uint)uVar1,1);
    pdb_140e28810(&iStack_1a8,&uStack_120);
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_1430538c0,0x2b,&uStack_120,&UNK_1430538a0,&UNK_143053300);
}

