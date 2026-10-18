// VA 0x140594ee0, PDB extent 1002 bytes
// country_core::shader::inc::frame::impl$2::bind<rhapsody::rg::binding::RgProtocol,rhapsody::rg::api::RgBindingSetBinder>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::shader::inc::frame::impl$2::bind<rhapsody::rg::binding::RgProtocol,rhapsody::rg::api::RgBindingSetBinder>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/target/x86_64-pc-windows-msvc/release/build/country-core-f597ff5c52cc3ca5/out/shabriri.rs
   Extent: 1002 */

void pdb_140594ee0(undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar3 = *(longlong *)(param_3 + 8);
  uVar2 = *(uint *)(param_2 + 8);
  uVar5 = param_1[1];
  puVar1 = (undefined8 *)(*(longlong *)(lVar3 + 8) + (ulonglong)uVar2);
  *puVar1 = *param_1;
  puVar1[1] = uVar5;
  uVar5 = param_1[3];
  puVar1 = (undefined8 *)(*(longlong *)(lVar3 + 8) + (ulonglong)(uVar2 + 0x10));
  *puVar1 = param_1[2];
  puVar1[1] = uVar5;
  uVar5 = param_1[5];
  puVar1 = (undefined8 *)(*(longlong *)(lVar3 + 8) + (ulonglong)(uVar2 + 0x20));
  *puVar1 = param_1[4];
  puVar1[1] = uVar5;
  uVar5 = param_1[7];
  puVar1 = (undefined8 *)(*(longlong *)(lVar3 + 8) + (ulonglong)(uVar2 + 0x30));
  *puVar1 = param_1[6];
  puVar1[1] = uVar5;
  uVar5 = param_1[9];
  puVar1 = (undefined8 *)(*(longlong *)(lVar3 + 8) + (ulonglong)(uVar2 + 0x40));
  *puVar1 = param_1[8];
  puVar1[1] = uVar5;
  uVar5 = param_1[0xb];
  puVar1 = (undefined8 *)(*(longlong *)(lVar3 + 8) + (ulonglong)(uVar2 + 0x50));
  *puVar1 = param_1[10];
  puVar1[1] = uVar5;
  uVar5 = param_1[0xd];
  puVar1 = (undefined8 *)(*(longlong *)(lVar3 + 8) + (ulonglong)(uVar2 + 0x60));
  *puVar1 = param_1[0xc];
  puVar1[1] = uVar5;
  uVar5 = param_1[0xf];
  puVar1 = (undefined8 *)(*(longlong *)(lVar3 + 8) + (ulonglong)(uVar2 + 0x70));
  *puVar1 = param_1[0xe];
  puVar1[1] = uVar5;
  *(undefined4 *)(*(longlong *)(lVar3 + 8) + (ulonglong)(uVar2 + 0x80)) =
       *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(*(longlong *)(lVar3 + 8) + (ulonglong)(uVar2 + 0x84)) =
       *(undefined4 *)((longlong)param_1 + 0x84);
  *(undefined4 *)(*(longlong *)(lVar3 + 8) + (ulonglong)(uVar2 + 0x88)) =
       *(undefined4 *)(param_1 + 0x11);
  *(undefined4 *)(*(longlong *)(lVar3 + 8) + (ulonglong)(uVar2 + 0x8c)) =
       *(undefined4 *)((longlong)param_1 + 0x8c);
  *(undefined8 *)(*(longlong *)(lVar3 + 8) + (ulonglong)(uVar2 + 0x90)) = param_1[0x12];
  *(undefined4 *)(*(longlong *)(lVar3 + 8) + (ulonglong)(uVar2 + 0x98)) =
       *(undefined4 *)(param_1 + 0x13);
  *(undefined4 *)(*(longlong *)(lVar3 + 8) + (ulonglong)(uVar2 + 0x9c)) =
       *(undefined4 *)((longlong)param_1 + 0x9c);
  lVar4 = *(longlong *)(lVar3 + 8);
  *(undefined4 *)(lVar4 + 8 + (ulonglong)(uVar2 + 0xa0)) = *(undefined4 *)(param_1 + 0x15);
  *(undefined8 *)(lVar4 + (ulonglong)(uVar2 + 0xa0)) = param_1[0x14];
  *(undefined4 *)(*(longlong *)(lVar3 + 8) + (ulonglong)(uVar2 + 0xac)) =
       *(undefined4 *)((longlong)param_1 + 0xac);
  lVar4 = *(longlong *)(lVar3 + 8);
  *(undefined4 *)(lVar4 + 8 + (ulonglong)(uVar2 + 0xb0)) = *(undefined4 *)(param_1 + 0x17);
  *(undefined8 *)(lVar4 + (ulonglong)(uVar2 + 0xb0)) = param_1[0x16];
  *(undefined4 *)(*(longlong *)(lVar3 + 8) + (ulonglong)(uVar2 + 0xbc)) =
       *(undefined4 *)((longlong)param_1 + 0xbc);
  lVar4 = *(longlong *)(lVar3 + 8);
  *(undefined4 *)(lVar4 + 8 + (ulonglong)(uVar2 + 0xc0)) = *(undefined4 *)(param_1 + 0x19);
  *(undefined8 *)(lVar4 + (ulonglong)(uVar2 + 0xc0)) = param_1[0x18];
  *(undefined4 *)(*(longlong *)(lVar3 + 8) + (ulonglong)(uVar2 + 0xcc)) =
       *(undefined4 *)((longlong)param_1 + 0xcc);
  lVar4 = *(longlong *)(lVar3 + 8);
  *(undefined4 *)(lVar4 + 8 + (ulonglong)(uVar2 + 0xd0)) = *(undefined4 *)(param_1 + 0x1b);
  *(undefined8 *)(lVar4 + (ulonglong)(uVar2 + 0xd0)) = param_1[0x1a];
  *(undefined4 *)(*(longlong *)(lVar3 + 8) + (ulonglong)(uVar2 + 0xdc)) =
       *(undefined4 *)((longlong)param_1 + 0xdc);
  uVar5 = param_1[0x1d];
  puVar1 = (undefined8 *)(*(longlong *)(lVar3 + 8) + (ulonglong)(uVar2 + 0xe0));
  *puVar1 = param_1[0x1c];
  puVar1[1] = uVar5;
  *(undefined4 *)(*(longlong *)(lVar3 + 8) + (ulonglong)(uVar2 + 0xf0)) =
       *(undefined4 *)(param_1 + 0x1e);
  *(undefined4 *)(*(longlong *)(lVar3 + 8) + (ulonglong)(uVar2 + 0xf4)) =
       *(undefined4 *)((longlong)param_1 + 0xf4);
  *(undefined8 *)(*(longlong *)(lVar3 + 8) + (ulonglong)(uVar2 + 0xf8)) = param_1[0x1f];
  *(undefined4 *)(*(longlong *)(lVar3 + 8) + (ulonglong)(uVar2 + 0x100)) =
       *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(*(longlong *)(lVar3 + 8) + (ulonglong)(uVar2 + 0x104)) =
       *(undefined4 *)((longlong)param_1 + 0x104);
  *(undefined4 *)(*(longlong *)(lVar3 + 8) + (ulonglong)(uVar2 + 0x108)) =
       *(undefined4 *)(param_1 + 0x21);
  *(undefined4 *)(*(longlong *)(lVar3 + 8) + (ulonglong)(uVar2 + 0x10c)) =
       *(undefined4 *)((longlong)param_1 + 0x10c);
  lVar4 = *(longlong *)(lVar3 + 8);
  *(undefined4 *)(lVar4 + 8 + (ulonglong)(uVar2 + 0x110)) = *(undefined4 *)(param_1 + 0x23);
  *(undefined8 *)(lVar4 + (ulonglong)(uVar2 + 0x110)) = param_1[0x22];
  *(undefined4 *)(*(longlong *)(lVar3 + 8) + (ulonglong)(uVar2 + 0x11c)) =
       *(undefined4 *)((longlong)param_1 + 0x11c);
  *(undefined4 *)(*(longlong *)(lVar3 + 8) + (ulonglong)(uVar2 + 0x120)) =
       *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(*(longlong *)(lVar3 + 8) + (ulonglong)(uVar2 + 0x124)) =
       *(undefined4 *)((longlong)param_1 + 0x124);
  *(undefined4 *)(*(longlong *)(lVar3 + 8) + (ulonglong)(uVar2 + 0x128)) =
       *(undefined4 *)(param_1 + 0x25);
  *(undefined4 *)(*(longlong *)(lVar3 + 8) + (ulonglong)(uVar2 + 300)) =
       *(undefined4 *)((longlong)param_1 + 300);
  *(undefined4 *)(*(longlong *)(lVar3 + 8) + (ulonglong)(uVar2 + 0x130)) =
       *(undefined4 *)(param_1 + 0x26);
  *(undefined4 *)(*(longlong *)(lVar3 + 8) + (ulonglong)(uVar2 + 0x134)) =
       *(undefined4 *)((longlong)param_1 + 0x134);
  *(undefined4 *)(*(longlong *)(lVar3 + 8) + (ulonglong)(uVar2 + 0x138)) =
       *(undefined4 *)(param_1 + 0x27);
  *(undefined4 *)(*(longlong *)(lVar3 + 8) + (ulonglong)(uVar2 + 0x13c)) =
       *(undefined4 *)((longlong)param_1 + 0x13c);
  uVar5 = param_1[0x29];
  puVar1 = (undefined8 *)(*(longlong *)(lVar3 + 8) + (ulonglong)(uVar2 + 0x140));
  *puVar1 = param_1[0x28];
  puVar1[1] = uVar5;
  lVar4 = *(longlong *)(lVar3 + 8);
  *(undefined4 *)(lVar4 + 8 + (ulonglong)(uVar2 + 0x150)) = *(undefined4 *)(param_1 + 0x2b);
  *(undefined8 *)(lVar4 + (ulonglong)(uVar2 + 0x150)) = param_1[0x2a];
  *(undefined4 *)(*(longlong *)(lVar3 + 8) + (ulonglong)(uVar2 + 0x15c)) =
       *(undefined4 *)((longlong)param_1 + 0x15c);
  return;
}

