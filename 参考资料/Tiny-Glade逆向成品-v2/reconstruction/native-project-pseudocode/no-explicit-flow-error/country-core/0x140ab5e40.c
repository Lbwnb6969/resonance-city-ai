// VA 0x140ab5e40, PDB extent 884 bytes
// country_core::systems::ui_camera_mode_gizmos::ui_camera_mode_gizmos
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_camera_mode_gizmos.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::ui_camera_mode_gizmos::ui_camera_mode_gizmos
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_camera_mode_gizmos.rs
   Extent: 884 */

void pdb_140ab5e40(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  longlong *param_5,longlong *param_6,longlong *param_7,longlong *param_8,
                  undefined8 *param_9)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 uVar10;
  byte *pbStack_148;
  code *pcStack_140;
  ulonglong uStack_138;
  byte *pbStack_130;
  ulonglong uStack_128;
  byte *pbStack_120;
  undefined *puStack_118;
  undefined4 uStack_100;
  undefined4 uStack_e8;
  undefined1 uStack_d0;
  undefined1 uStack_c0;
  undefined4 uStack_bc;
  undefined2 uStack_a0;
  ulonglong uStack_98;
  byte *pbStack_90;
  ulonglong uStack_88;
  undefined8 uStack_80;
  byte *pbStack_78;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  uVar2 = *(ulonglong *)*param_7;
  lVar9 = 4;
  if (1 < uVar2) {
    lVar9 = uVar2 - 2;
  }
  if (((lVar9 == 0) || ((lVar9 == 9 && ((char)((ulonglong *)*param_7)[1] == '\0')))) &&
     ((*(byte *)(*param_8 + 0x4d0) & 6) != 2)) {
    lVar9 = *param_1;
    uVar5 = *(uint *)(lVar9 + 0x10);
    if ((uVar5 < 3) || (*(uint *)(lVar9 + 0x18) < 3)) {
      if (*(char *)*param_9 != '\x11') {
        pbStack_148 = (byte *)0x0;
        pcStack_140 = (code *)0x8;
        uStack_138 = 0;
        pbStack_130 = (byte *)((ulonglong)pbStack_130 & 0xffffffff00000000);
        puStack_118 = (undefined *)((ulonglong)puStack_118 & 0xffffffff00000000);
        uStack_100 = 0;
        uStack_e8 = 0;
        uStack_d0 = 0;
        uStack_c0 = 5;
        uStack_bc = 0;
        uStack_a0 = 0x100;
        pdb_140900b80(*param_2,&UNK_14304a610,0x12,&pbStack_148);
        uVar5 = *(uint *)(lVar9 + 0x10);
      }
      uVar10 = *(undefined8 *)*param_4;
      if (uVar5 < 3) {
        uVar5 = *(uint *)(*param_6 + 0x11c);
        uVar8 = 0;
        if ((char)uVar5 != '\x06') {
          uVar8 = uVar5;
        }
        if (((byte)uVar8 < 5) && ((0x13U >> (uVar8 & 0x1f) & 1) != 0)) {
          uVar5 = *(uint *)(*param_5 + 4);
          uVar1 = *(undefined4 *)(*param_6 + 0xe8);
          uVar3 = *param_3;
          pbStack_148 = (byte *)&uStack_80;
          pcStack_140 = pdb_1414d1a30;
          uStack_80 = uVar10;
          pdb_140f60760(&uStack_98,&UNK_14304a622,&pbStack_148);
          pdb_14007ee60();
          pbVar6 = pub_1406abab0(0x20,8);
          if (pbVar6 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc7e11(8,0x20);
          }
          pbVar6[0] = 1;
          pbVar6[1] = 0;
          pbVar6[2] = 0;
          pbVar6[3] = 0;
          pbVar6[4] = 0;
          pbVar6[5] = 0;
          pbVar6[6] = 0;
          pbVar6[7] = 0;
          pbVar6[8] = 1;
          pbVar6[9] = 0;
          pbVar6[10] = 0;
          pbVar6[0xb] = 0;
          pbVar6[0xc] = 0;
          pbVar6[0xd] = 0;
          pbVar6[0xe] = 0;
          pbVar6[0xf] = 0;
          *(undefined8 *)(pbVar6 + 0x10) = uVar10;
          *(float *)(pbVar6 + 0x18) = (float)uVar5;
          *(undefined4 *)(pbVar6 + 0x1c) = uVar1;
          pcStack_140 = (code *)&UNK_14304a630;
          pbStack_148 = pbVar6;
          if ((longlong)uStack_88 < 0) {
            uVar10 = 0;
LAB_140ab6040:
            pbStack_78 = pbVar6;
            pdb_142dc7e2a(uVar10,uStack_88);
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          if (uStack_88 == 0) {
            pbVar7 = (byte *)0x1;
          }
          else {
            pdb_14007ee60();
            uVar10 = 1;
            pbVar7 = pub_1406abab0(uStack_88,1);
            if (pbVar7 == (byte *)0x0) goto LAB_140ab6040;
            pub_142e32760(pbVar7,pbStack_90,uStack_88);
          }
          pcStack_140 = (code *)CONCAT71(pcStack_140._1_7_,2);
          uStack_138 = uStack_88;
          uStack_128 = uStack_88;
          puStack_118 = &UNK_14304a630;
          pbStack_130 = pbVar7;
          pbStack_120 = pbVar6;
          pdb_141a88350(uVar3,&pbStack_148);
          if (uStack_98 != 0) {
            pub_1406abac0(pbStack_90,uStack_98,1);
          }
        }
      }
    }
  }
  return;
}

