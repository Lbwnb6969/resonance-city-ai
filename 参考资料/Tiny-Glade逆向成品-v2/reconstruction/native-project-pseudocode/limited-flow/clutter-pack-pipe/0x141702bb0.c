// VA 0x141702bb0, PDB extent 450 bytes
// core::ptr::drop_in_place<enum2$<clutter_pack_pipe::build_object_textures::async_fn_env$0> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* Matched PDB project procedure:
   core::ptr::drop_in_place<enum2$<clutter_pack_pipe::build_object_textures::async_fn_env$0> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
   Extent: 450 */

void pdb_141702bb0(longlong param_1)

{
  undefined1 auVar1 [16];
  byte *arg0;
  undefined8 *puVar2;
  ulonglong arg1;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined1 (*pauVar6) [16];
  longlong lVar7;
  longlong lVar8;
  undefined1 (*pauVar9) [16];
  uint uVar10;
  
  if (*(char *)(param_1 + 0x105) == '\x03') {
    arg0 = *(byte **)(param_1 + 0xa0);
    puVar2 = *(undefined8 **)(param_1 + 0xa8);
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(arg0);
    }
    if (puVar2[1] != 0) {
      pub_1406abac0(arg0,puVar2[1],puVar2[2]);
    }
    lVar7 = *(longlong *)(param_1 + 0x68);
    if (lVar7 != 0) {
      lVar8 = *(longlong *)(param_1 + 0x78);
      if (lVar8 != 0) {
        pauVar6 = *(undefined1 (**) [16])(param_1 + 0x60);
        auVar1 = *pauVar6;
        pauVar9 = pauVar6 + 1;
        uVar10 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
                                (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
        do {
          if ((short)uVar10 == 0) {
            do {
              auVar1 = *pauVar9;
              pauVar6 = pauVar6 + -0x20;
              pauVar9 = pauVar9 + 1;
              uVar10 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
                               (ushort)(byte)(auVar1[0xf] >> 7) << 0xf) ^ 0xffff;
            } while (uVar10 == 0);
          }
          iVar3 = 0;
          for (uVar4 = uVar10; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            iVar3 = iVar3 + 1;
          }
          arg1 = *(ulonglong *)((longlong)pauVar6 + (-0x18 - (ulonglong)(uint)(iVar3 << 5)));
          if (arg1 != 0) {
            pub_1406abac0(*(byte **)((longlong)pauVar6 + (-0x10 - (ulonglong)(uint)(iVar3 << 5))),
                          arg1,1);
          }
          uVar10 = uVar10 - 1 & uVar10;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      lVar8 = lVar7 * 0x20 + 0x20;
      lVar7 = lVar7 + lVar8 + 0x11;
      if (lVar7 != 0) {
        lVar8 = *(longlong *)(param_1 + 0x60) - lVar8;
        uVar5 = GetProcessHeap(lVar8,lVar7);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        HeapFree(uVar5,0,lVar8);
        return;
      }
    }
  }
  return;
}

