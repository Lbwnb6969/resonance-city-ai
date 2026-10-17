// Matched PDB: rhapsody::raw::texture::MipChainIter::new
// VA 0x140e1d5b0, PDB extent 358 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB: rhapsody::raw::texture::MipChainIter::new
   Extent: 358 bytes. No whole-program auto-analysis. */

undefined2 *
pdb_140e1d5b0(undefined2 *param_1,uint *param_2,undefined1 param_3,char param_4,ushort param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined2 *puVar6;
  undefined1 uStack_1;
  
  if (param_4 == '\0') {
    pdb_142dc83b0(&UNK_14320d740,0x25,&UNK_14320d768);
LAB_140e1d662:
    pdb_142dc83b0(&UNK_14320d780,0x1e,&UNK_14320d7a0);
LAB_140e1d67a:
    pdb_142dc83b0(&UNK_14320d7b8,0x1e,&UNK_14320d7d8);
LAB_140e1d692:
    pdb_142dc83b0(&UNK_14320d7f0,0x1d,&UNK_14320d810);
LAB_140e1d6aa:
    pdb_142dc83b0(&UNK_14320d828,0x1d,&UNK_14320d848);
LAB_140e1d6c2:
    pdb_142dc83b0(&UNK_14320d860,0x1d,&UNK_14320d880);
  }
  else {
    if ((char)param_5 == '\0') goto LAB_140e1d662;
    if (param_5 < 0x100) goto LAB_140e1d67a;
    uVar1 = *param_2;
    if (uVar1 == 0) goto LAB_140e1d692;
    uVar2 = param_2[1];
    if (uVar2 == 0) goto LAB_140e1d6aa;
    uVar3 = param_2[2];
    if (uVar3 == 0) goto LAB_140e1d6c2;
    if (uVar1 < 0x10000) {
      if (uVar2 < 0x10000) {
        if (uVar3 < 0x10000) {
          *param_1 = (short)uVar1;
          param_1[1] = (short)uVar2;
          param_1[2] = (short)uVar3;
          *(undefined1 *)(param_1 + 4) = 0;
          *(undefined1 *)((longlong)param_1 + 9) = param_3;
          *(char *)(param_1 + 5) = param_4;
          param_1[3] = param_5;
          return param_1;
        }
        puVar5 = &UNK_14320d8c8;
      }
      else {
        puVar5 = &UNK_14320d8b0;
      }
      goto LAB_140e1d6f3;
    }
  }
  puVar5 = &UNK_14320d898;
LAB_140e1d6f3:
  pdb_142dc8170(&UNK_14320b5a8,0x2b,&uStack_1,&UNK_14320b5d8,puVar5);
  pcVar4 = (code *)swi(3);
  puVar6 = (undefined2 *)(*pcVar4)();
  return puVar6;
}

