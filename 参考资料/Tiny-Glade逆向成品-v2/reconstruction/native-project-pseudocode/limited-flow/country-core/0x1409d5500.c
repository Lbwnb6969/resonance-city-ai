// VA 0x1409d5500, PDB extent 1074 bytes
// country_core::resources::clutter_meshes::clutter_mesh_ty_data
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_meshes.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014302ec2c) overlaps instruction at (ram,0x00014302ec28)
    */
/* Matched PDB project procedure: country_core::resources::clutter_meshes::clutter_mesh_ty_data
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_meshes.rs
   Extent: 1074 */

void pdb_1409d5500(undefined8 *param_1,undefined1 param_2,longlong param_3)

{
  undefined8 uVar1;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2) {
  case 0:
    uVar1 = *(undefined8 *)(param_3 + 0x18);
    break;
  case 1:
    uVar1 = *(undefined8 *)(param_3 + 0x20);
    break;
  case 2:
    uVar1 = *(undefined8 *)(param_3 + 0x28);
    break;
  case 3:
    uVar1 = *(undefined8 *)(param_3 + 0x30);
    break;
  case 4:
    uVar1 = *(undefined8 *)(param_3 + 0x38);
    break;
  case 5:
    uVar1 = *(undefined8 *)(param_3 + 0x40);
    break;
  case 6:
    uVar1 = *(undefined8 *)(param_3 + 0x48);
    break;
  case 7:
    uVar1 = *(undefined8 *)(param_3 + 0x50);
    break;
  case 8:
    uVar1 = *(undefined8 *)(param_3 + 0x58);
    break;
  case 9:
    uVar1 = *(undefined8 *)(param_3 + 0x60);
    break;
  case 10:
    uVar1 = *(undefined8 *)(param_3 + 0x68);
    goto code_r0x0001409d58ae;
  case 0xb:
    uVar1 = *(undefined8 *)(param_3 + 0x70);
    goto code_r0x0001409d58ae;
  case 0xc:
    uVar1 = *(undefined8 *)(param_3 + 0x78);
    goto code_r0x0001409d58ae;
  case 0xd:
    uVar1 = *(undefined8 *)(param_3 + 0x80);
    goto code_r0x0001409d58ae;
  case 0xe:
    *param_1 = *(undefined8 *)(param_3 + 0x88);
    param_1[1] = &UNK_14302e72b;
    param_1[2] = 0x16;
    uVar1 = 0x44addda5631cc43e;
    goto code_r0x0001409d58ce;
  case 0xf:
    uVar1 = *(undefined8 *)(param_3 + 0x90);
    break;
  case 0x10:
    uVar1 = *(undefined8 *)(param_3 + 0x98);
    goto code_r0x0001409d58ae;
  case 0x11:
    uVar1 = *(undefined8 *)(param_3 + 0xa0);
    goto code_r0x0001409d58ae;
  case 0x12:
    uVar1 = *(undefined8 *)(param_3 + 0xa8);
    goto code_r0x0001409d58ae;
  case 0x13:
    uVar1 = *(undefined8 *)(param_3 + 0xb0);
    goto code_r0x0001409d58ae;
  case 0x14:
    *param_1 = *(undefined8 *)(param_3 + 0xb8);
    param_1[1] = &UNK_14302e72b;
    param_1[2] = 0x16;
    uVar1 = 0x5528d478bc5deb8;
    goto code_r0x0001409d58ce;
  case 0x15:
    uVar1 = *(undefined8 *)(param_3 + 0xc0);
    goto code_r0x0001409d58ae;
  case 0x16:
    uVar1 = *(undefined8 *)(param_3 + 200);
    break;
  case 0x17:
    uVar1 = *(undefined8 *)(param_3 + 0xd0);
    goto code_r0x0001409d58ae;
  case 0x18:
    uVar1 = *(undefined8 *)(param_3 + 0xd8);
    goto code_r0x0001409d58ae;
  case 0x19:
    uVar1 = *(undefined8 *)(param_3 + 0xe0);
    goto code_r0x0001409d58ae;
  case 0x1a:
    uVar1 = *(undefined8 *)(param_3 + 0xe8);
    goto code_r0x0001409d58ae;
  case 0x1b:
    uVar1 = *(undefined8 *)(param_3 + 0xf0);
    break;
  case 0x1c:
    uVar1 = *(undefined8 *)(param_3 + 0xf8);
    break;
  case 0x1d:
    if (*(longlong *)(param_3 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(0,0,&UNK_14302e748);
    }
    uVar1 = **(undefined8 **)(param_3 + 8);
    break;
  case 0x1e:
    uVar1 = *(undefined8 *)(param_3 + 0x100);
    break;
  case 0x1f:
    uVar1 = *(undefined8 *)(param_3 + 0x108);
    break;
  case 0x20:
    uVar1 = *(undefined8 *)(param_3 + 0x110);
    break;
  case 0x21:
    uVar1 = *(undefined8 *)(param_3 + 0x118);
    break;
  case 0x22:
    *param_1 = *(undefined8 *)(param_3 + 0x120);
    param_1[1] = &UNK_14302e72b;
    param_1[2] = 0x16;
    uVar1 = 0xc466fe39055814dd;
    goto code_r0x0001409d58ce;
  case 0x23:
    *param_1 = *(undefined8 *)(param_3 + 0x128);
    param_1[1] = &UNK_14302e72b;
    param_1[2] = 0x16;
    uVar1 = 0xdd33a460c4c51ed0;
    goto code_r0x0001409d58ce;
  case 0x24:
    *param_1 = *(undefined8 *)(param_3 + 0x130);
    param_1[1] = &UNK_14302e72b;
    param_1[2] = 0x16;
    uVar1 = 0x71bf92ad3da543c9;
    goto code_r0x0001409d58ce;
  case 0x25:
    *param_1 = *(undefined8 *)(param_3 + 0x138);
    param_1[1] = &UNK_14302e72b;
    param_1[2] = 0x16;
    uVar1 = 0x754c275732cbae0e;
    goto code_r0x0001409d58ce;
  case 0x26:
    *param_1 = *(undefined8 *)(param_3 + 0x140);
    param_1[1] = &UNK_14302e72b;
    param_1[2] = 0x16;
    uVar1 = 0xed043aa70aa6a6a7;
    goto code_r0x0001409d58ce;
  case 0x27:
    *param_1 = *(undefined8 *)(param_3 + 0x148);
    param_1[1] = &UNK_14302e760;
    param_1[2] = 0x1f;
    uVar1 = 0x754c275732cbae0e;
    goto code_r0x0001409d58ce;
  case 0x28:
    uVar1 = *(undefined8 *)(param_3 + 0x150);
    goto code_r0x0001409d570b;
  case 0x29:
    uVar1 = *(undefined8 *)(param_3 + 0x158);
    goto code_r0x0001409d570b;
  case 0x2a:
    *param_1 = *(undefined8 *)(param_3 + 0x160);
    param_1[1] = &UNK_14302e72b;
    param_1[2] = 0x16;
    uVar1 = 0x44dcaebb204df9c0;
    goto code_r0x0001409d58ce;
  case 0x2b:
    uVar1 = *(undefined8 *)(param_3 + 0x168);
code_r0x0001409d570b:
    *param_1 = uVar1;
    param_1[1] = &UNK_14302e760;
    param_1[2] = 0x1f;
    goto code_r0x0001409d58c4;
  case 0x2c:
    uVar1 = *(undefined8 *)(param_3 + 0x170);
    goto code_r0x0001409d58ae;
  case 0x2d:
    uVar1 = *(undefined8 *)(param_3 + 0x178);
    break;
  case 0x2e:
    uVar1 = *(undefined8 *)(param_3 + 0x180);
    goto code_r0x0001409d58ae;
  case 0x2f:
    uVar1 = *(undefined8 *)(param_3 + 0x188);
    goto code_r0x0001409d58ae;
  case 0x30:
    uVar1 = *(undefined8 *)(param_3 + 400);
    goto code_r0x0001409d58ae;
  case 0x31:
    uVar1 = *(undefined8 *)(param_3 + 0x198);
    goto code_r0x0001409d58ae;
  case 0x32:
    uVar1 = *(undefined8 *)(param_3 + 0x1a0);
    goto code_r0x0001409d58ae;
  case 0x33:
    uVar1 = *(undefined8 *)(param_3 + 0x1a8);
    break;
  case 0x34:
    uVar1 = *(undefined8 *)(param_3 + 0x1b0);
    break;
  case 0x35:
    uVar1 = *(undefined8 *)(param_3 + 0x1b8);
    break;
  case 0x36:
    uVar1 = *(undefined8 *)(param_3 + 0x1c0);
    goto code_r0x0001409d58ae;
  case 0x37:
    uVar1 = *(undefined8 *)(param_3 + 0x1c8);
code_r0x0001409d58ae:
    *param_1 = uVar1;
    param_1[1] = &UNK_14302e72b;
    param_1[2] = 0x16;
code_r0x0001409d58c4:
    uVar1 = 0xffb1e74fbef6a00f;
code_r0x0001409d58ce:
    param_1[3] = 1;
    param_1[4] = uVar1;
    return;
  default:
    uRamffffffffffffff92 = 0xffffffffffffff9a;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x3b:
  case 0x3d:
    uRamffffffffffffff92 = 0xffffffffffffff9a;
    halt_baddata();
  }
  *param_1 = uVar1;
  param_1[1] = &UNK_14302e72b;
  param_1[2] = 0x16;
  param_1[3] = 0;
  return;
}

