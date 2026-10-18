// VA 0x1408e8fa0, PDB extent 401 bytes
// system_decorator::decorator_on_wall_height_changed::decorator_on_wall_height_changed::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_on_wall_height_changed.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_decorator::decorator_on_wall_height_changed::decorator_on_wall_height_changed::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_on_wall_height_changed.rs
   Extent: 401 */

void pdb_1408e8fa0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  float fVar6;
  undefined1 (*pauStack_a8) [16];
  undefined1 (*pauStack_a0) [16];
  undefined1 *puStack_98;
  ushort uStack_90;
  undefined8 uStack_88;
  longlong lStack_80;
  undefined1 auStack_78 [8];
  longlong lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  longlong lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
  lStack_80 = pdb_140c3f000(*param_1,param_3);
  if (lStack_80 != 0) {
    pauStack_a8 = *(undefined1 (**) [16])(lStack_80 + 0x30);
    puStack_98 = *pauStack_a8 + *(longlong *)(lStack_80 + 0x38) + 1;
    auVar1 = *pauStack_a8;
    uStack_90 = ~((ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
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
                 (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
    uStack_88 = *(undefined8 *)(lStack_80 + 0x48);
    lStack_80 = lStack_80 + 0x60;
    pauStack_a0 = pauStack_a8 + 1;
    pdb_140c441a0(auStack_78,&pauStack_a8);
    if (lStack_70 != 0) {
      do {
        uStack_48 = uStack_60;
        lStack_58 = lStack_70;
        uStack_50 = uStack_68;
        lVar2 = pdb_140315970(&lStack_58);
        lVar5 = (ulonglong)*(byte *)(lVar2 + 0x32) - 1;
        if ((ulonglong)*(byte *)(lVar2 + 0x32) < 2) {
          lVar5 = 0;
        }
        if (lVar5 == 0) {
          uVar3 = pdb_140c413c0(&lStack_58);
          puVar4 = (undefined4 *)pdb_1409011f0(uVar3,&UNK_14301be40);
          lVar5 = pdb_140b54f80(param_2,param_3,&UNK_14301be58);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_14301be70);
          }
          fVar6 = (float)pdb_14092fb60(lVar5,*puVar4,puVar4[1]);
          puVar4[4] = (float)puVar4[1] - fVar6;
        }
        else if ((int)lVar5 != 1) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_14301be88,0x28,&UNK_14301beb0);
        }
        pdb_140c441a0(auStack_78,&pauStack_a8);
      } while (lStack_70 != 0);
    }
  }
  return;
}

