using System;
using Colossal.AssetPipeline.Native;
using Colossal.Mathematics;
using Unity.Collections;
using Unity.Collections.LowLevel.Unsafe;
using Unity.Entities;
using Unity.Mathematics;
using UnityEngine;

namespace Colossal.Serialization.Entities;

public struct BinaryReader : IReader
{
	private NativeArray<byte> m_Buffer;

	private NativeReference<int> m_Position;

	private NativeArray<Entity> m_EntityTable;

	public Context context { get; private set; }

	public void Initialize(Context context, NativeArray<byte> buffer, NativeReference<int> position, NativeArray<Entity> entityTable)
	{
		this.context = context;
		m_Buffer = buffer;
		m_Position = position;
		m_EntityTable = entityTable;
	}

	public ReaderBlock Begin()
	{
		int size;
		return Begin(out size);
	}

	public ReaderBlock Begin(out int size)
	{
		Read(out size);
		return new ReaderBlock(m_Position.Value + size);
	}

	public bool End(ReaderBlock block)
	{
		if (m_Position.Value == block.m_Position)
		{
			return true;
		}
		m_Position.Value = block.m_Position;
		return false;
	}

	public void Read(NativeArray<Entity> value)
	{
		for (int i = 0; i < value.Length; i++)
		{
			Read(out Entity value2);
			value[i] = value2;
		}
	}

	public unsafe void Read(NativeArray<int> value)
	{
		int num = value.Length * UnsafeUtility.SizeOf<int>();
		UnsafeUtility.MemCpy(value.GetUnsafePtr(), (byte*)m_Buffer.GetUnsafeReadOnlyPtr() + m_Position.Value, num);
		m_Position.Value += num;
	}

	public unsafe void Read(NativeArray<int2> value)
	{
		int num = value.Length * UnsafeUtility.SizeOf<int2>();
		UnsafeUtility.MemCpy(value.GetUnsafePtr(), (byte*)m_Buffer.GetUnsafeReadOnlyPtr() + m_Position.Value, num);
		m_Position.Value += num;
	}

	public unsafe void Read(NativeArray<ushort> value)
	{
		int num = value.Length * UnsafeUtility.SizeOf<ushort>();
		UnsafeUtility.MemCpy(value.GetUnsafePtr(), (byte*)m_Buffer.GetUnsafeReadOnlyPtr() + m_Position.Value, num);
		m_Position.Value += num;
	}

	public unsafe void Read(NativeArray<byte> value)
	{
		int num = value.Length * UnsafeUtility.SizeOf<byte>();
		UnsafeUtility.MemCpy(value.GetUnsafePtr(), (byte*)m_Buffer.GetUnsafeReadOnlyPtr() + m_Position.Value, num);
		m_Position.Value += num;
	}

	public unsafe void Read(NativeArray<float4> value)
	{
		int num = value.Length * UnsafeUtility.SizeOf<float4>();
		UnsafeUtility.MemCpy(value.GetUnsafePtr(), (byte*)m_Buffer.GetUnsafeReadOnlyPtr() + m_Position.Value, num);
		m_Position.Value += num;
	}

	public unsafe void Read(NativeArray<float2> value)
	{
		int num = value.Length * UnsafeUtility.SizeOf<float2>();
		UnsafeUtility.MemCpy(value.GetUnsafePtr(), (byte*)m_Buffer.GetUnsafeReadOnlyPtr() + m_Position.Value, num);
		m_Position.Value += num;
	}

	public unsafe void Read(NativeArray<byte> value, int stride)
	{
		NativeCompression.UnfilterDataAfterRead((IntPtr)((byte*)m_Buffer.GetUnsafeReadOnlyPtr() + m_Position.Value), (IntPtr)value.GetUnsafePtr(), value.Length, stride);
		m_Position.Value += value.Length;
	}

	public void Read(NativeList<int> value)
	{
		Read(out int value2);
		if (value.Length != value2)
		{
			value.ResizeUninitialized(value2);
		}
		for (int i = 0; i < value2; i++)
		{
			Read(out int value3);
			value[i] = value3;
		}
	}

	public void Read(NativeList<Entity> value)
	{
		Read(out int value2);
		if (value.Length != value2)
		{
			value.ResizeUninitialized(value2);
		}
		for (int i = 0; i < value2; i++)
		{
			Read(out Entity value3);
			value[i] = value3;
		}
	}

	public void Read<TSerializable>(NativeArray<TSerializable> value) where TSerializable : struct, ISerializable
	{
		for (int i = 0; i < value.Length; i++)
		{
			Read(out TSerializable value2);
			value[i] = value2;
		}
	}

	public void Read(out Entity value)
	{
		Read(out int value2);
		if (value2 >= 0 && value2 < m_EntityTable.Length)
		{
			value = m_EntityTable[value2];
		}
		else
		{
			value = Entity.Null;
		}
	}

	public void Read<TSerializable>(out TSerializable value) where TSerializable : struct, ISerializable
	{
		value = default;
		value.Deserialize(this);
	}

	public void Read<TSerializable>(TSerializable value) where TSerializable : class, ISerializable
	{
		value.Deserialize(this);
	}

	public void Read(out Bezier4x3 curve)
	{
		Read(out curve.a);
		Read(out curve.b);
		Read(out curve.c);
		Read(out curve.d);
	}

	public void Read(out string value)
	{
		Read(out int value2);
		char[] array = new char[value2];
		for (int i = 0; i < value2; i++)
		{
			Read(out array[i]);
		}
		value = new string(array);
	}

	public void Read(out Color value)
	{
		Read(out value.r);
		Read(out value.g);
		Read(out value.b);
		Read(out value.a);
	}

	public void Read(out Color32 value)
	{
		int value2 = m_Position.Value;
		value = default;
		value.r = m_Buffer[value2++];
		value.g = m_Buffer[value2++];
		value.b = m_Buffer[value2++];
		value.a = m_Buffer[value2++];
		m_Position.Value = value2;
	}

	public void Read(out quaternion value)
	{
		Read(out value.value);
	}

	public void Read(out float4 value)
	{
		Read(out value.x);
		Read(out value.y);
		Read(out value.z);
		Read(out value.w);
	}

	public void Read(out float3 value)
	{
		Read(out value.x);
		Read(out value.y);
		Read(out value.z);
	}

	public void Read(out float2 value)
	{
		Read(out value.x);
		Read(out value.y);
	}

	public void Read(out int4 value)
	{
		Read(out value.x);
		Read(out value.y);
		Read(out value.z);
		Read(out value.w);
	}

	public void Read(out int3 value)
	{
		Read(out value.x);
		Read(out value.y);
		Read(out value.z);
	}

	public void Read(out int2 value)
	{
		Read(out value.x);
		Read(out value.y);
	}

	public void Read(out bool4 value)
	{
		Read(out byte value2);
		value = (value2 & new int4(1, 2, 4, 8)) != 0;
	}

	public void Read(out bool3 value)
	{
		Read(out byte value2);
		value = (value2 & new int3(1, 2, 4)) != 0;
	}

	public void Read(out bool2 value)
	{
		Read(out byte value2);
		value = (value2 & new int2(1, 2)) != 0;
	}

	public void Read(out uint4 value)
	{
		Read(out value.x);
		Read(out value.y);
		Read(out value.z);
		Read(out value.w);
	}

	public void Read(out Hash128 hash)
	{
		Read(out uint4 value);
		hash = new Hash128(value);
	}

	public void Read(out char value)
	{
		int value2 = m_Position.Value;
		uint num = m_Buffer[value2++];
		if ((num & 0x80) == 0)
		{
			value = (char)num;
		}
		else if ((num & 0xE0) == 192)
		{
			num = (num & 0x1F) << 6;
			num |= (uint)(m_Buffer[value2++] & 0x3F);
			value = (char)num;
		}
		else if ((num & 0xF0) == 224)
		{
			num = (num & 0xF) << 12;
			num |= (uint)((m_Buffer[value2++] & 0x3F) << 6);
			num |= (uint)(m_Buffer[value2++] & 0x3F);
			value = (char)num;
		}
		else if ((num & 0xF8) == 240)
		{
			num = (num & 7) << 18;
			num |= (uint)((m_Buffer[value2++] & 0x3F) << 12);
			num |= (uint)((m_Buffer[value2++] & 0x3F) << 6);
			num |= (uint)(m_Buffer[value2++] & 0x3F);
			value = (char)num;
		}
		else
		{
			value = '\0';
		}
		m_Position.Value = value2;
	}

	public void Read(out float value)
	{
		Read(out uint value2);
		value = math.asfloat(value2);
	}

	public void Read(out double value)
	{
		Read(out ulong value2);
		value = math.asdouble(value2);
	}

	public void Read(out int value)
	{
		Read(out uint value2);
		value = (int)value2;
	}

	public void Read(out uint value)
	{
		int value2 = m_Position.Value;
		value = m_Buffer[value2++];
		value |= (uint)(m_Buffer[value2++] << 8);
		value |= (uint)(m_Buffer[value2++] << 16);
		value |= (uint)(m_Buffer[value2++] << 24);
		m_Position.Value = value2;
	}

	public void Read(out short value)
	{
		Read(out ushort value2);
		value = (short)value2;
	}

	public void Read(out ushort value)
	{
		int value2 = m_Position.Value;
		uint num = m_Buffer[value2++];
		num |= (uint)(m_Buffer[value2++] << 8);
		value = (ushort)num;
		m_Position.Value = value2;
	}

	public void Read(out sbyte value)
	{
		Read(out byte value2);
		value = (sbyte)value2;
	}

	public void Read(out byte value)
	{
		int value2 = m_Position.Value;
		value = m_Buffer[value2++];
		m_Position.Value = value2;
	}

	public void Read(out long value)
	{
		Read(out ulong value2);
		value = (long)value2;
	}

	public void Read(out ulong value)
	{
		int value2 = m_Position.Value;
		value = m_Buffer[value2++];
		value |= (ulong)m_Buffer[value2++] << 8;
		value |= (ulong)m_Buffer[value2++] << 16;
		value |= (ulong)m_Buffer[value2++] << 24;
		value |= (ulong)m_Buffer[value2++] << 32;
		value |= (ulong)m_Buffer[value2++] << 40;
		value |= (ulong)m_Buffer[value2++] << 48;
		value |= (ulong)m_Buffer[value2++] << 56;
		m_Position.Value = value2;
	}

	public void Read(out bool value)
	{
		Read(out byte value2);
		value = value2 != 0;
	}

	public void Skip(int size)
	{
		m_Position.Value += size;
	}
}
