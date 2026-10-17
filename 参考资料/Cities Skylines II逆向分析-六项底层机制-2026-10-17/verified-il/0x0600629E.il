// Game.Common.PseudoRandomSeed::Serialize 0x0600629E
	.method public final hidebysig newslot virtual 
		instance void Serialize<([Colossal.Core]Colossal.Serialization.Entities.IWriter) TWriter> (
			!!TWriter writer
		) cil managed 
	{
		// Method begins at RVA 0x340b1b
		// Header size: 1
		// Code size: 20 (0x14)
		.maxstack 8

		IL_0000: ldarga.s writer
		IL_0002: ldarg.0
		IL_0003: ldfld uint16 Game.Common.PseudoRandomSeed::m_Seed
		IL_0008: constrained. !!TWriter
		IL_000e: callvirt instance void [Colossal.Core]Colossal.Serialization.Entities.IWriter::Write(uint16)
		IL_0013: ret
	} // end of method PseudoRandomSeed::Serialize
