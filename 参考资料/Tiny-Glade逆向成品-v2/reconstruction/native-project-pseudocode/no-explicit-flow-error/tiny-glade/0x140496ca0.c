// VA 0x140496ca0, PDB extent 531 bytes
// png::decoder::ReadDecoder::decode_next<std::io::buffered::bufreader::BufReader<std::fs::File> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   png::decoder::ReadDecoder::decode_next<std::io::buffered::bufreader::BufReader<std::fs::File> >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 531 */

void pdb_140496ca0(undefined4 *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  char cVar5;
  longlong lStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 uStack_90;
  byte bStack_8f;
  undefined2 uStack_8e;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined4 uStack_7f;
  undefined4 uStack_7b;
  undefined4 uStack_77;
  undefined4 uStack_73;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined4 uStack_5f;
  undefined4 uStack_5b;
  undefined4 uStack_57;
  undefined4 uStack_53;
  
  if (*(char *)(param_2 + 0x228) == '\0') {
    uVar3 = *(ulonglong *)(param_2 + 0x1e0);
    uVar4 = *(ulonglong *)(param_2 + 0x1e8);
    do {
      lVar1 = *(longlong *)(param_2 + 0x1d0);
      if (uVar4 <= uVar3) {
        uStack_a8 = *(undefined8 *)(param_2 + 0x1d8);
        uStack_a0 = 0;
        uStack_9c = 0;
        uStack_98 = (undefined4)*(undefined8 *)(param_2 + 0x1f0);
        uStack_94 = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x1f0) >> 0x20);
        lStack_b0 = lVar1;
        lVar2 = pdb_140592bc0(param_2 + 0x1f8,&lStack_b0);
        *(undefined8 *)(param_2 + 0x1e0) = 0;
        uVar4 = CONCAT44(uStack_9c,uStack_a0);
        *(undefined4 *)(param_2 + 0x1e8) = uStack_a0;
        *(undefined4 *)(param_2 + 0x1ec) = uStack_9c;
        *(undefined4 *)(param_2 + 0x1f0) = uStack_98;
        *(undefined4 *)(param_2 + 500) = uStack_94;
        if (lVar2 != 0) goto LAB_140496e3c;
        uVar3 = 0;
      }
      lVar2 = uVar4 - uVar3;
      if (lVar1 == 0) {
LAB_140496e3c:
        *(undefined8 *)(param_1 + 2) = 0;
        *(longlong *)(param_1 + 4) = lVar2;
        *param_1 = 1;
        return;
      }
      if (uVar4 == uVar3) {
        *(undefined8 *)(param_1 + 2) = 1;
        *(undefined1 *)(param_1 + 4) = 2;
        *param_1 = 1;
        return;
      }
      pdb_140dbaa70(&lStack_b0,param_2,lVar1 + uVar3,lVar2,param_3);
      if (bStack_8f == 0xd) {
        *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_94,uStack_98);
        *(undefined8 *)(param_1 + 4) = uStack_a8;
        *(ulonglong *)(param_1 + 6) = CONCAT44(uStack_9c,uStack_a0);
        *(longlong *)(param_1 + 2) = lStack_b0;
        *param_1 = 1;
        return;
      }
      uStack_88 = uStack_a8;
      uStack_77 = CONCAT13((undefined1)uStack_94,uStack_98._1_3_);
      uStack_73 = CONCAT13(uStack_90,uStack_94._1_3_);
      uStack_80 = (undefined1)uStack_a0;
      uStack_7f = (undefined4)(CONCAT44(uStack_9c,uStack_a0) >> 8);
      uStack_7b._0_3_ = (undefined3)((uint)uStack_9c >> 8);
      uStack_7b = CONCAT13((char)uStack_98,(undefined3)uStack_7b);
      uStack_68 = uStack_a8;
      uStack_60 = uStack_80;
      uStack_5f = uStack_7f;
      uVar3 = lStack_b0 + *(longlong *)(param_2 + 0x1e0);
      uVar4 = *(ulonglong *)(param_2 + 0x1e8);
      if (uVar4 < uVar3) {
        uVar3 = uVar4;
      }
      *(ulonglong *)(param_2 + 0x1e0) = uVar3;
      cVar5 = bStack_8f - 2;
      if (bStack_8f < 2) {
        cVar5 = '\x06';
      }
      if (cVar5 != '\0') {
        if (cVar5 != '\n') {
          *(ulonglong *)((longlong)param_1 + 0xd) = CONCAT44(uStack_7b,uStack_7f);
          *(ulonglong *)((longlong)param_1 + 0x15) = CONCAT44(uStack_73,uStack_77);
          *(undefined8 *)(param_1 + 1) = uStack_a8;
          *(ulonglong *)(param_1 + 3) =
               CONCAT35((undefined3)uStack_7b,CONCAT41(uStack_7f,uStack_80));
          *(byte *)((longlong)param_1 + 0x1d) = bStack_8f;
          *(undefined2 *)((longlong)param_1 + 0x1e) = uStack_8e;
          goto LAB_140496cc3;
        }
        *(undefined1 *)(param_2 + 0x228) = 1;
        break;
      }
      uStack_5b = uStack_7b;
      uStack_57 = uStack_77;
      uStack_53 = uStack_73;
    } while (*(char *)(param_2 + 0x228) == '\0');
  }
  *(undefined1 *)((longlong)param_1 + 0x1d) = 0xd;
LAB_140496cc3:
  *param_1 = 0;
  return;
}

