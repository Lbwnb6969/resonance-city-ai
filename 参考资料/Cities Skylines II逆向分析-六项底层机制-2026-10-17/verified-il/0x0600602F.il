// Game.Objects.TransformFrame::Serialize 0x0600602F
	.method public final hidebysig newslot virtual 
		instance void Serialize<([Colossal.Core]Colossal.Serialization.Entities.IWriter) TWriter> (
			!!TWriter writer
		) cil managed 
	{
		// Method begins at RVA 0x30fb54
		// Header size: 1
		// Code size: 58 (0x3a)
		.maxstack 8

		IL_0000: ldarga.s writer
		IL_0002: ldarg.0
		IL_0003: ldfld uint16 Game.Objects.TransformFrame::m_StateTimer
		IL_0008: constrained. !!TWriter
		IL_000e: callvirt instance void [Colossal.Core]Colossal.Serialization.Entities.IWriter::Write(uint16)
		IL_0013: ldarga.s writer
		IL_0015: ldarg.0
		IL_0016: ldfld valuetype Game.Objects.TransformState Game.Objects.TransformFrame::m_State
		IL_001b: constrained. !!TWriter
		IL_0021: callvirt instance void [Colossal.Core]Colossal.Serialization.Entities.IWriter::Write(uint8)
		IL_0026: ldarga.s writer
		IL_0028: ldarg.0
		IL_0029: ldfld uint8 Game.Objects.TransformFrame::m_Activity
		IL_002e: constrained. !!TWriter
		IL_0034: callvirt instance void [Colossal.Core]Colossal.Serialization.Entities.IWriter::Write(uint8)
		IL_0039: ret
	} // end of method TransformFrame::Serialize
