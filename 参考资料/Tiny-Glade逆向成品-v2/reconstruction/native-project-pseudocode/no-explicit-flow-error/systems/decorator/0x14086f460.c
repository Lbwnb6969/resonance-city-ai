// VA 0x14086f460, PDB extent 1048 bytes
// system_decorator::ui_systems::ui_change_stair_height::ui_change_stair_height
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_change_stair_height.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_decorator::ui_systems::ui_change_stair_height::ui_change_stair_height
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_change_stair_height.rs
   Extent: 1048 */

void pdb_14086f460(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,longlong *param_6)

{
  uint uVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  byte bVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 auVar13 [16];
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_f8;
  ulonglong uStack_f0;
  
  pcVar2 = (char *)*param_2;
  auVar13[0] = -(*pcVar2 == DAT_14300c7f0);
  auVar13[1] = -(pcVar2[1] == UNK_14300c7f1);
  auVar13[2] = -(pcVar2[2] == UNK_14300c7f2);
  auVar13[3] = -(pcVar2[3] == UNK_14300c7f3);
  auVar13[4] = -(pcVar2[4] == UNK_14300c7f4);
  auVar13[5] = -(pcVar2[5] == UNK_14300c7f5);
  auVar13[6] = -(pcVar2[6] == UNK_14300c7f6);
  auVar13[7] = -(pcVar2[7] == UNK_14300c7f7);
  auVar13[8] = -(pcVar2[8] == UNK_14300c7f8);
  auVar13[9] = -(pcVar2[9] == UNK_14300c7f9);
  auVar13[10] = -(pcVar2[10] == UNK_14300c7fa);
  auVar13[0xb] = -(pcVar2[0xb] == UNK_14300c7fb);
  auVar13[0xc] = -(pcVar2[0xc] == UNK_14300c7fc);
  auVar13[0xd] = -(pcVar2[0xd] == UNK_14300c7fd);
  auVar13[0xe] = -(pcVar2[0xe] == UNK_14300c7fe);
  auVar13[0xf] = -(pcVar2[0xf] == UNK_14300c7ff);
  if (((ushort)((ushort)(SUB161(auVar13 >> 7,0) & 1) | (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe | (ushort)(auVar13[0xf] >> 7) << 0xf)
       == 0xffff) && (*(int *)(pcVar2 + 0x10) == 7)) {
    uVar3 = *param_5;
    uVar4 = param_5[2];
    uVar5 = param_5[4];
    uStack_120 = param_5[6];
    uVar6 = param_5[8];
    uVar1 = *(uint *)(pcVar2 + 0x68);
    uVar10 = *(undefined8 *)(pcVar2 + 0x60);
    uStack_148 = pdb_1406d0830(*param_1);
    uStack_140 = uVar10;
    cVar7 = pdb_1408ffaf0(&uStack_148);
    if (cVar7 != '\0') {
      uStack_138 = uVar4;
      uStack_130 = uVar6;
      uStack_128 = uVar5;
      bVar8 = pdb_1408ffab0(&uStack_148);
      if (bVar8 < 2) {
        *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
        *(undefined1 *)(*param_6 + 0x48) = 1;
      }
      uVar11 = (ulonglong)uVar1;
      uStack_f8 = pdb_140c3d2c0(uVar3);
      uStack_f0 = uVar11;
      lVar9 = pdb_140c3d060(uVar3,uStack_f8,uVar11,uVar1);
      if (lVar9 != 0) {
        lVar12 = 0;
        if (1 < (ulonglong)*(byte *)(lVar9 + 0x32)) {
          lVar12 = (ulonglong)*(byte *)(lVar9 + 0x32) - 1;
        }
                    /* WARNING: Could not emulate address calculation at 0x00014086f595 */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_14300e030 + *(int *)(&UNK_14300e030 + lVar12 * 4)))
                  (&UNK_14300e030 + *(int *)(&UNK_14300e030 + lVar12 * 4));
        return;
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14300df78);
    }
  }
  return;
}

