// VA 0x140471370, PDB extent 227 bytes
// tiny_glade::panic_reporter::reverse_backtrace::impl$0::fmt::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/panic_reporter/reverse_backtrace.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   tiny_glade::panic_reporter::reverse_backtrace::impl$0::fmt::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/panic_reporter/reverse_backtrace.rs
   Extent: 227 */

ulonglong pdb_140471370(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uStack_60;
  byte *pbStack_58;
  undefined8 uStack_50;
  byte *pbStack_40;
  undefined8 uStack_38;
  byte *pbStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  pdb_140e9bfd0(&uStack_60,param_3);
  pbStack_30 = pbStack_58;
  if (!SBORROW8(0,*param_1)) {
    uVar2 = uStack_50;
    pbStack_40 = (byte *)pdb_140f3e340(pbStack_58,uStack_50,param_1[1],param_1[2]);
    if (pbStack_40 != (byte *)0x0) {
      uStack_38 = uVar2;
      uVar1 = pdb_140f58310(&pbStack_40,param_2);
      goto LAB_1404713f0;
    }
  }
  uStack_38 = uStack_50;
  pbStack_40 = pbStack_30;
  uVar1 = pdb_140f58310(&pbStack_40,param_2);
LAB_1404713f0:
  if (uStack_60 != 0) {
    uVar1 = uVar1 & 0xffffffff;
    pub_1406abac0(pbStack_30,uStack_60,1);
  }
  return uVar1;
}

