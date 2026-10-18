// VA 0x1406d15b0, PDB extent 115 bytes
// usdl::video::PixelFormatEnum::byte_size_per_pixel
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/video.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: usdl::video::PixelFormatEnum::byte_size_per_pixel
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/video.rs
   Extent: 115 */

uint pdb_1406d15b0(uint param_1)

{
  if (param_1 != 0) {
    if ((param_1 & 0xf0000000) == 0x10000000) {
      return param_1 & 0xff;
    }
    if ((int)param_1 < 0x32595559) {
      if (((param_1 == 0x3132564e) || (param_1 == 0x3231564e)) || (param_1 == 0x32315659)) {
        return 1;
      }
    }
    else if ((int)param_1 < 0x56555949) {
      if ((param_1 == 0x32595559) || (param_1 == 0x55595659)) {
        return 2;
      }
    }
    else {
      if (param_1 == 0x56555949) {
        return 1;
      }
      if (param_1 == 0x59565955) {
        return 2;
      }
    }
  }
  return 0;
}

