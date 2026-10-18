// VA 0x140a6dc60, PDB extent 724 bytes
// country_core::input::input_stream::InputStream::add_frame
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/input/input_stream.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::input::input_stream::InputStream::add_frame
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/input/input_stream.rs
   Extent: 724 */

void pdb_140a6dc60(longlong param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte *arg0;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 **ppuStack_c8;
  longlong *plStack_50;
  code *pcStack_48;
  longlong lStack_40;
  undefined8 uStack_38;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  uStack_38 = param_2;
  if ((param_3 != '\0') &&
     (lVar1 = *(longlong *)(param_1 + 0x38), lVar1 - 9999U < 0xffffffffffffd8f0)) {
    if (*(ulonglong *)(param_1 + 0x18) < 2) {
      if (lVar1 - 49999U < 0xffffffffffff3cb0) {
        lVar6 = *(longlong *)(param_1 + 0x30);
        lVar2 = *(longlong *)(param_1 + 0x28);
        uVar5 = 0;
        if (*(ulonglong *)(param_1 + 0x20) <= lVar6 + 1U) {
          uVar5 = *(ulonglong *)(param_1 + 0x20);
        }
        *(ulonglong *)(param_1 + 0x30) = (lVar6 - uVar5) + 1;
        *(longlong *)(param_1 + 0x38) = lVar1 + -1;
        lVar6 = lVar6 * 0xd0;
        lVar1 = *(longlong *)(lVar2 + lVar6);
        if (!SBORROW8(0,lVar1)) {
          lVar3 = *(longlong *)(lVar2 + 0x18 + lVar6);
          arg0 = *(byte **)(lVar2 + 0x20 + lVar6);
          if (lVar1 != 0) {
            pub_1406abac0(*(byte **)(lVar2 + lVar6 + 8),lVar1 * 0xc,4);
          }
          if (lVar3 != 0) {
            pub_1406abac0(arg0,lVar3 << 2,4);
          }
        }
      }
    }
    else {
      uStack_29 = 1;
      pdb_140a6d980(param_1);
    }
  }
  pub_142e32760(&uStack_120,uStack_38,0xd0);
  uVar5 = *(ulonglong *)(param_1 + 0x20);
  uVar4 = *(ulonglong *)(param_1 + 0x38);
  if (uVar4 == uVar5) {
    pdb_140929510(param_1 + 0x20);
    uVar5 = *(ulonglong *)(param_1 + 0x20);
    uVar4 = *(ulonglong *)(param_1 + 0x38);
  }
  *(ulonglong *)(param_1 + 0x38) = uVar4 + 1;
  uVar4 = uVar4 + *(longlong *)(param_1 + 0x30);
  uVar7 = 0;
  if (uVar5 <= uVar4) {
    uVar7 = uVar5;
  }
  pub_142e32760((uVar4 - uVar7) * 0xd0 + *(longlong *)(param_1 + 0x28),uStack_38,0xd0);
  lStack_40 = *(longlong *)(param_1 + 0x38);
  if ((((ulonglong)(lStack_40 * 0x5d4e8fb00bcbe61d) >> 4 | lStack_40 * 0x5d4e8fb00bcbe61d << 0x3c) <
       0x14f8b588e3690) && (2 < *_DAT_143ca8e90)) {
    plStack_50 = &lStack_40;
    pcStack_48 = pdb_140f72a40;
    uStack_120 = 0;
    puStack_118 = &UNK_14304113d;
    uStack_110 = 0x21;
    uStack_108 = 0;
    puStack_100 = &UNK_143041070;
    uStack_f8 = 0x2d;
    uStack_f0 = 3;
    puStack_e8 = &UNK_14304113d;
    uStack_e0 = 0x21;
    uStack_d8 = 0x9400000001;
    puStack_d0 = &UNK_143041120;
    ppuStack_c8 = &plStack_50;
    uStack_29 = 0;
    pdb_140f332f0(&uStack_2a,&uStack_120);
  }
  return;
}

