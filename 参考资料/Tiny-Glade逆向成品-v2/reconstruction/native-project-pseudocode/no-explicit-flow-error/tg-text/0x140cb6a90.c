// VA 0x140cb6a90, PDB extent 456 bytes
// tg_text::TextRenderer::set_pixels_per_point
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_text::TextRenderer::set_pixels_per_point
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/lib.rs
   Extent: 456 */

void pdb_140cb6a90(longlong param_1,float param_2)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if ((*(float *)(param_1 + 0x4bc) != param_2) || (NAN(*(float *)(param_1 + 0x4bc)) || NAN(param_2))
     ) {
    *(float *)(param_1 + 0x4bc) = param_2;
    *(undefined4 *)(param_1 + 0x4b8) = *(undefined4 *)(param_1 + 0x4b4);
    lVar4 = *(longlong *)(param_1 + 0x458);
    *(undefined8 *)(param_1 + 0x458) = 0;
    if (lVar4 != 0) {
      puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x450) + 8);
      do {
        if (puVar5[-1] != 0) {
          pub_1406abac0((byte *)*puVar5,puVar5[-1],1);
        }
        puVar5 = puVar5 + 8;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    if (*(longlong *)(param_1 + 0x480) != 0) {
      uVar6 = *(ulonglong *)(param_1 + 0x470);
      if (uVar6 == 0) {
        uVar2 = 0;
      }
      else {
        pub_142e32780(*(undefined8 *)(param_1 + 0x468),0xff,uVar6 + 0x11);
        uVar2 = (uVar6 + 1 & 0xfffffffffffffff8) - (uVar6 + 1 >> 3);
        if (uVar6 < 8) {
          uVar2 = uVar6;
        }
      }
      *(undefined8 *)(param_1 + 0x480) = 0;
      *(ulonglong *)(param_1 + 0x478) = uVar2;
    }
    pdb_141cc4a50(param_1 + 0x3a8);
    lVar4 = *(longlong *)(param_1 + 0x408);
    if (lVar4 != 0) {
      puVar1 = *(undefined4 **)(param_1 + 0x400);
      uVar6 = lVar4 * 8 - 8;
      puVar3 = puVar1;
      if ((~(uint)uVar6 & 0x38) != 0) {
        lVar7 = -(ulonglong)(((uint)(uVar6 >> 3) & 0x1fffffff) + 1 & 7);
        do {
          *puVar3 = 0;
          *(undefined2 *)(puVar3 + 1) = 0;
          puVar3 = puVar3 + 2;
          lVar7 = lVar7 + 1;
        } while (lVar7 != 0);
      }
      if (0x37 < uVar6) {
        do {
          *puVar3 = 0;
          *(undefined2 *)(puVar3 + 1) = 0;
          puVar3[2] = 0;
          *(undefined2 *)(puVar3 + 3) = 0;
          puVar3[4] = 0;
          *(undefined2 *)(puVar3 + 5) = 0;
          puVar3[6] = 0;
          *(undefined2 *)(puVar3 + 7) = 0;
          puVar3[8] = 0;
          *(undefined2 *)(puVar3 + 9) = 0;
          puVar3[10] = 0;
          *(undefined2 *)(puVar3 + 0xb) = 0;
          puVar3[0xc] = 0;
          *(undefined2 *)(puVar3 + 0xd) = 0;
          puVar3[0xe] = 0;
          *(undefined2 *)(puVar3 + 0xf) = 0;
          puVar3 = puVar3 + 0x10;
        } while (puVar3 != puVar1 + lVar4 * 2);
      }
    }
  }
  return;
}

