// VA 0x1405fe150, PDB extent 810 bytes
// tiny_glade::logging::set_up_logging::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/logging.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::logging::set_up_logging::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/logging.rs
   Extent: 810 */

void pdb_1405fe150(void)

{
  longlong in_R9;
  undefined8 in_stack_ffffffffffffff28;
  undefined4 uVar1;
  int aiStack_b0 [2];
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined4 uStack_58;
  undefined8 uStack_54;
  ushort uStack_4c;
  byte bStack_4a;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  ushort uStack_3c;
  byte bStack_3a;
  undefined1 uStack_39;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar1 = (undefined4)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
  uStack_30 = 0xfffffffffffffffe;
  pdb_140e03700(&uStack_58);
  if (DAT_143cb2bd8 != '\x01') {
    pdb_1405cb140(aiStack_b0,&UNK_142f75a70,uStack_58,uStack_54,
                  CONCAT44(uVar1,(uint)uStack_4c * 0x100 + (uint)bStack_4a * 0x1000000 + 1));
    bStack_3a = (byte)((uint)uStack_9c >> 0x10);
    uStack_39 = (undefined1)((uint)uStack_9c >> 0x18);
    uStack_3c = (ushort)uStack_9c;
    if (aiStack_b0[0] != 1) {
      uStack_38 = uStack_98;
                    /* WARNING: Could not recover jumptable at 0x0001405fe285. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_142f764f0 + *(int *)(&UNK_142f764f0 + (*(longlong *)(in_R9 + 0x30) + -1) * 4))
      )(&UNK_142f764f0 + *(int *)(&UNK_142f764f0 + (*(longlong *)(in_R9 + 0x30) + -1) * 4));
      return;
    }
    uStack_38 = uStack_98;
    uStack_48 = uStack_a8;
    uStack_44 = uStack_a4;
    uStack_40 = uStack_a0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_142f760d8,0x2b,&uStack_48,&UNK_142f76108,&UNK_142f75a80);
  }
  pdb_140e03770(&uStack_48,&uStack_58,(ulonglong)CONCAT12(DAT_143cb2bdb,_DAT_143cb2bd9));
  pdb_1405cb140(aiStack_b0,&UNK_142f75958,uStack_48,CONCAT44(uStack_40,uStack_44),
                CONCAT44(uVar1,(uint)uStack_3c * 0x100 + (uint)bStack_3a * 0x1000000 + 1));
  bStack_3a = (byte)((uint)uStack_9c >> 0x10);
  uStack_39 = (undefined1)((uint)uStack_9c >> 0x18);
  uStack_3c = (ushort)uStack_9c;
  if (aiStack_b0[0] != 1) {
    uStack_38 = uStack_98;
                    /* WARNING: Could not recover jumptable at 0x0001405fe21c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_142f764f0 + *(int *)(&UNK_142f764f0 + (*(longlong *)(in_R9 + 0x30) + -1) * 4)))
              (&UNK_142f764f0 + *(int *)(&UNK_142f764f0 + (*(longlong *)(in_R9 + 0x30) + -1) * 4));
    return;
  }
  uStack_38 = uStack_98;
  uStack_48 = uStack_a8;
  uStack_44 = uStack_a4;
  uStack_40 = uStack_a0;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_142f760d8,0x2b,&uStack_48,&UNK_142f76108,&UNK_142f75990);
}

