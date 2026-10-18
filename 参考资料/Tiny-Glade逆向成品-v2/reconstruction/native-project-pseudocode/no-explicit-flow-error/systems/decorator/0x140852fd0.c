// VA 0x140852fd0, PDB extent 44 bytes
// system_decorator::ui_systems::ui_inactive::ui_decorator_inactive
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_inactive.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_decorator::ui_systems::ui_inactive::ui_decorator_inactive
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_inactive.rs
   Extent: 44 */

void pdb_140852fd0(longlong *param_1,longlong *param_2)

{
  char *pcVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_2c8 [8];
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined1 auStack_2b0 [440];
  undefined1 auStack_f8 [32];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [32];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [32];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [32];
  undefined1 uStack_48;
  undefined1 uStack_47;
  undefined1 uStack_46;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  
  pcVar1 = (char *)*param_1;
  auVar3[0] = -(*pcVar1 == DAT_14300c750);
  auVar3[1] = -(pcVar1[1] == UNK_14300c751);
  auVar3[2] = -(pcVar1[2] == UNK_14300c752);
  auVar3[3] = -(pcVar1[3] == UNK_14300c753);
  auVar3[4] = -(pcVar1[4] == UNK_14300c754);
  auVar3[5] = -(pcVar1[5] == UNK_14300c755);
  auVar3[6] = -(pcVar1[6] == UNK_14300c756);
  auVar3[7] = -(pcVar1[7] == UNK_14300c757);
  auVar3[8] = -(pcVar1[8] == UNK_14300c758);
  auVar3[9] = -(pcVar1[9] == UNK_14300c759);
  auVar3[10] = -(pcVar1[10] == UNK_14300c75a);
  auVar3[0xb] = -(pcVar1[0xb] == UNK_14300c75b);
  auVar3[0xc] = -(pcVar1[0xc] == UNK_14300c75c);
  auVar3[0xd] = -(pcVar1[0xd] == UNK_14300c75d);
  auVar3[0xe] = -(pcVar1[0xe] == UNK_14300c75e);
  auVar3[0xf] = -(pcVar1[0xf] == UNK_14300c75f);
  if ((ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe | (ushort)(auVar3[0xf] >> 7) << 0xf) ==
      0xffff) {
    *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
    lVar2 = *param_2;
    uStack_20 = 0xfffffffffffffffe;
    pdb_1408f1e20(auStack_2c8);
    pdb_140c33fb0(lVar2 + 0x18,auStack_2b0);
    pdb_1414ac8a0(lVar2 + 0x1d0,auStack_f8);
    *(undefined8 *)(lVar2 + 0x1f0) = uStack_d8;
    *(undefined8 *)(lVar2 + 0x1f8) = uStack_d0;
    pdb_1414acf00(lVar2 + 0x200,auStack_c8);
    *(undefined8 *)(lVar2 + 0x220) = uStack_a8;
    *(undefined8 *)(lVar2 + 0x228) = uStack_a0;
    pdb_1414acca0(lVar2 + 0x230,auStack_98);
    *(undefined8 *)(lVar2 + 0x250) = uStack_78;
    *(undefined8 *)(lVar2 + 600) = uStack_70;
    pdb_1408fdc40(&uStack_40,auStack_68);
    if (*(longlong *)(lVar2 + 0x268) != 0) {
      pub_1406abac0(*(byte **)(lVar2 + 0x270),*(longlong *)(lVar2 + 0x268) * 0xa8,8);
    }
    *(undefined4 *)(lVar2 + 0x270) = uStack_30;
    *(undefined4 *)(lVar2 + 0x274) = uStack_2c;
    *(undefined4 *)(lVar2 + 0x278) = uStack_28;
    *(undefined4 *)(lVar2 + 0x27c) = uStack_24;
    *(undefined8 *)(lVar2 + 0x260) = uStack_40;
    *(undefined8 *)(lVar2 + 0x268) = uStack_38;
    pdb_1414fa970(uStack_2c0,uStack_2b8,lVar2);
    *(undefined1 *)(lVar2 + 0x282) = uStack_46;
    *(undefined1 *)(lVar2 + 0x280) = uStack_48;
    *(undefined1 *)(lVar2 + 0x281) = uStack_47;
    pdb_1404c78b0(auStack_2c8);
    return;
  }
  return;
}

