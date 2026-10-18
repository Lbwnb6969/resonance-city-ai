// VA 0x1409d5e30, PDB extent 342 bytes
// country_core::systems::render_loop::find_crash::init
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/find_crash.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::render_loop::find_crash::init
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/find_crash.rs
   Extent: 342 */

void pdb_1409d5e30(longlong *param_1)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined1 uStack_91;
  undefined1 (*pauStack_90) [16];
  undefined1 (*pauStack_88) [16];
  undefined1 *puStack_80;
  longlong lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 (*pauStack_28) [16];
  longlong lStack_20;
  
  if (2 < *_DAT_143ca8e90) {
    pauStack_90 = (undefined1 (*) [16])0x0;
    pauStack_88 = (undefined1 (*) [16])&UNK_14302eebb;
    puStack_80 = (undefined1 *)0x2e;
    lStack_78 = 0;
    puStack_70 = &UNK_14302edf5;
    uStack_68 = 0x39;
    uStack_60 = 3;
    puStack_58 = &UNK_14302eebb;
    uStack_50 = 0x2e;
    uStack_48 = 0x1200000001;
    puStack_40 = &UNK_14302ef24;
    uStack_38 = 0x75;
    pdb_140f332f0(&uStack_91,&pauStack_90);
  }
  uVar2 = *(undefined4 *)((longlong)param_1 + 0x1c);
  puVar3 = (undefined4 *)param_1[2];
  *puVar3 = uVar2;
  lVar4 = *param_1;
  pauStack_90 = *(undefined1 (**) [16])(lVar4 + 0x60);
  puStack_80 = *pauStack_90 + *(longlong *)(lVar4 + 0x68) + 1;
  auVar1 = *pauStack_90;
  puStack_70 = *(undefined **)(lVar4 + 0x78);
  pauStack_88 = pauStack_90 + 1;
  lStack_78 = CONCAT62(lStack_78._2_6_,
                       ~((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar1[0xf] >> 7) << 0xf));
  pdb_1415ed140(&uStack_30,&pauStack_90);
  *puVar3 = uVar2;
  lStack_78 = (longlong)pauStack_28 + lStack_20 * 0x18;
  pauStack_90 = pauStack_28;
  pauStack_88 = pauStack_28;
  puStack_80 = (undefined1 *)uStack_30;
  pdb_1417a7af0(lVar4 + 0x90,&pauStack_90);
  return;
}

