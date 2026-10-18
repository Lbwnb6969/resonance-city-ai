// VA 0x140869ab0, PDB extent 3493 bytes
// system_decorator::ui_systems::ui_rotate_lantern::ui_rotate_decorator
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_rotate_lantern.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_decorator::ui_systems::ui_rotate_lantern::ui_rotate_decorator
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_rotate_lantern.rs
   Extent: 3493 */

void pdb_140869ab0(undefined8 *param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  longlong *in_stack_00000040;
  undefined8 *in_stack_00000060;
  longlong *in_stack_00000070;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 uStack_188;
  ulonglong uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_e4;
  ulonglong uStack_e0;
  undefined1 uStack_d2;
  byte bStack_d1;
  undefined8 uStack_d0;
  
  uStack_d0 = 0xfffffffffffffffe;
  pcVar1 = (char *)*in_stack_00000040;
  auVar10[0] = -(*pcVar1 == DAT_142f5c7c0);
  auVar10[1] = -(pcVar1[1] == UNK_142f5c7c1);
  auVar10[2] = -(pcVar1[2] == UNK_142f5c7c2);
  auVar10[3] = -(pcVar1[3] == UNK_142f5c7c3);
  auVar10[4] = -(pcVar1[4] == UNK_142f5c7c4);
  auVar10[5] = -(pcVar1[5] == UNK_142f5c7c5);
  auVar10[6] = -(pcVar1[6] == UNK_142f5c7c6);
  auVar10[7] = -(pcVar1[7] == UNK_142f5c7c7);
  auVar10[8] = -(pcVar1[8] == UNK_142f5c7c8);
  auVar10[9] = -(pcVar1[9] == UNK_142f5c7c9);
  auVar10[10] = -(pcVar1[10] == UNK_142f5c7ca);
  auVar10[0xb] = -(pcVar1[0xb] == UNK_142f5c7cb);
  auVar10[0xc] = -(pcVar1[0xc] == UNK_142f5c7cc);
  auVar10[0xd] = -(pcVar1[0xd] == UNK_142f5c7cd);
  auVar10[0xe] = -(pcVar1[0xe] == UNK_142f5c7ce);
  auVar10[0xf] = -(pcVar1[0xf] == UNK_142f5c7cf);
  if ((ushort)((ushort)(SUB161(auVar10 >> 7,0) & 1) | (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar10 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar10 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar10 >> 0x77,0) & 1) << 0xe | (ushort)(auVar10[0xf] >> 7) << 0xf)
      == 0xffff) {
    uVar2 = *in_stack_00000060;
    uStack_f8 = in_stack_00000060[2];
    uStack_100 = *(undefined4 *)((longlong)in_stack_00000060 + 0x1c);
    uVar3 = in_stack_00000060[4];
    uStack_188 = in_stack_00000060[6];
    uStack_e4 = *(undefined4 *)((longlong)in_stack_00000060 + 0x3c);
    uStack_e0 = (ulonglong)*(uint *)(pcVar1 + 0x68);
    uVar6 = *(undefined8 *)(pcVar1 + 0x60);
    uStack_238 = pdb_1406d0830(*param_1);
    uStack_110 = *(undefined8 *)(pcVar1 + 0x10);
    uStack_108 = *(undefined8 *)(pcVar1 + 0x18);
    uStack_230 = uVar6;
    cVar5 = pdb_1408ffaf0(&uStack_238);
    if (cVar5 != '\0') {
      bStack_d1 = pdb_1408ffab0(&uStack_238);
      uVar4 = uStack_e0;
      if (bStack_d1 < 2) {
        *(undefined4 *)in_stack_00000070[2] = *(undefined4 *)((longlong)in_stack_00000070 + 0x1c);
        *(undefined1 *)(*in_stack_00000070 + 0x48) = 1;
      }
      uVar8 = uStack_e0 & 0xffffffff;
      uVar6 = pdb_140c3d2c0(uVar2);
      uStack_170 = uVar8;
      lVar7 = pdb_140c3d060(uVar2,uVar6,uVar8,uVar4 & 0xffffffff);
      if (lVar7 != 0) {
        uStack_190 = *(undefined4 *)(lVar7 + 0x10);
        uStack_18c = *(undefined4 *)(lVar7 + 0x14);
        lVar9 = 0;
        if (1 < *(byte *)(lVar7 + 0x32)) {
          lVar9 = (ulonglong)(byte)(*(byte *)(lVar7 + 0x32) - 2) + 1;
        }
        uStack_d2 = *(undefined1 *)(lVar7 + 0x59);
        uStack_168 = uVar2;
        uStack_160 = uVar3;
                    /* WARNING: Could not emulate address calculation at 0x000140869c63 */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_14300d908 + *(int *)(&UNK_14300d908 + lVar9 * 4)))
                  (&UNK_14300d908,&UNK_14300d908 + *(int *)(&UNK_14300d908 + lVar9 * 4));
        return;
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14300d7e8);
    }
  }
  return;
}

