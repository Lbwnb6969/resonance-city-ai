// VA 0x14094ee00, PDB extent 287 bytes
// country_core::resources::rt::RtBvhBuilderGlueResource::is_idle
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/rt/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::rt::RtBvhBuilderGlueResource::is_idle
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/rt/mod.rs
   Extent: 287 */

byte pdb_14094ee00(longlong *param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lStack_40;
  uint *puStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  lVar8 = *param_1;
  puVar1 = (uint *)(lVar8 + 0x10);
  uVar7 = *(uint *)(lVar8 + 0x10);
  if (uVar7 < 0x3ffffffe) {
    LOCK();
    uVar3 = *puVar1;
    if (uVar7 == uVar3) {
      *puVar1 = uVar7 + 1;
    }
    UNLOCK();
    if (uVar7 == uVar3) {
      cVar5 = *(char *)(lVar8 + 0x18);
      goto joined_r0x00014094ee90;
    }
  }
  pdb_142dc6cb0(puVar1);
  cVar5 = *(char *)(lVar8 + 0x18);
joined_r0x00014094ee90:
  if (cVar5 != '\0') {
    lStack_40 = lVar8 + 0x20;
    puStack_38 = puVar1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143024e08,0x2b,&lStack_40,&UNK_143024e78,&UNK_143024c70);
  }
  cVar5 = *(char *)(lVar8 + 0xa0);
  lVar9 = *(longlong *)(lVar8 + 0x20);
  bVar6 = *(byte *)(lVar8 + 0xa8);
  LOCK();
  piVar2 = (int *)(lVar8 + 0x10);
  iVar4 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (SBORROW4(0,iVar4 - 1U & 0xbfffffff)) {
    pdb_142dc6fa0(puVar1);
  }
  return (bVar6 ^ 1) & (SBORROW8(0,lVar9) && cVar5 == '\x02');
}

