// VA 0x14026d520, PDB extent 391 bytes
// clap_builder::error::impl$5::fmt<clap_builder::error::format::RichFormatter>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   clap_builder::error::impl$5::fmt<clap_builder::error::format::RichFormatter>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 391 */

undefined8 pdb_14026d520(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  ulonglong **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 **ppuStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  piVar1 = (int *)*param_1;
  if (*piVar1 == 2) {
    pdb_140ead370(&ppuStack_60,param_1);
    uStack_38 = uStack_50;
    ppuStack_48 = ppuStack_60;
    uStack_40 = (undefined4)uStack_58;
    uStack_3c = uStack_58._4_4_;
  }
  else {
    pdb_140eb7580(&ppuStack_48,piVar1,piVar1 + 0x1c);
  }
  uStack_58 = pdb_1406866c0;
  uVar2 = *param_2;
  lVar3 = param_2[1];
  ppuStack_60 = (ulonglong **)&ppuStack_48;
  cVar5 = pdb_140f681d0(uVar2,lVar3,&UNK_142e64440,&ppuStack_60);
  if (cVar5 == '\0') {
    if ((!SBORROW8(0,(longlong)ppuStack_48)) && (ppuStack_48 != (ulonglong **)0x0)) {
      pub_1406abac0((byte *)CONCAT44(uStack_3c,uStack_40),(ulonglong)ppuStack_48,1);
    }
    if (*(char *)((longlong)piVar1 + 0xd2) != '\x01') {
      return 0;
    }
    ppuStack_48 = (undefined8 **)((longlong)piVar1 + 0xd3);
    pcVar4 = *(code **)(lVar3 + 0x18);
    cVar5 = (*pcVar4)(uVar2,&UNK_142e64442,1);
    if ((cVar5 == '\0') && (cVar5 = (*pcVar4)(uVar2,&UNK_142e64443,0xb), cVar5 == '\0')) {
      uStack_58 = pdb_14007fac0;
      ppuStack_60 = (ulonglong **)&ppuStack_48;
      cVar5 = pdb_140f681d0(uVar2,lVar3,&UNK_142e6444e,&ppuStack_60);
      if (cVar5 == '\0') {
        return 0;
      }
    }
  }
  else if ((!SBORROW8(0,(longlong)ppuStack_48)) && (ppuStack_48 != (ulonglong **)0x0)) {
    pub_1406abac0((byte *)CONCAT44(uStack_3c,uStack_40),(ulonglong)ppuStack_48,1);
  }
  return 1;
}

