using System;
using Colossal.AssetPipeline.Native;
using Colossal.Mathematics;
using Unity.Collections;
using Unity.Collections.LowLevel.Unsafe;
using Unity.Entities;
using Unity.Mathematics;
using UnityEngine;

namespace Colossal.Serialization.Entities;

public struct BinaryWriter : IWriter
{
	private NativeList<byte> m_Buffer;

	private NativeArray<Entity> m_EntityTable;

	public Context context { get; private set; }

	public void Initialize(Context context, NativeList<byte> buffer, NativeArray<Entity> entityTable)
	{
		this.context = context;
		m_Buffer = buffer;
		m_EntityTable = entityTable;
	}

	public WriterBlock Begin()
	{
		WriterBlock result = new WriterBlock(m_Buffer.Length);
		int value = 0;
		Write(value);
		return result;
	}

	public bool End(WriterBlock block)
	{
		int size;
		return End(block, out size);
	}

	public bool End(WriterBlock block, out int size)
	{
		size = m_Buffer.Length - block.m_Position - 4;
		m_Buffer[block.m_Position++] = (byte)size;
		m_Buffer[block.m_Position++] = (byte)(size >> 8);
		m_Buffer[block.m_Position++] = (byte)(size >> 16);
		m_Buffer[block.m_Position++] = (byte)(size >> 24);
		return size != 0;
	}

	public void Write(NativeArray<Entity> value)
	{
		for (int i = 0; i < value.Length; i++)
		{
			Write(value[i]);
		}
	}

	public void Write(NativeList<Entity> value)
	{
		Write(value.Length);
		for (int i = 0; i < value.Length; i++)
		{
			Write(value[i]);
		}
	}

	public unsafe void Write(NativeArray<int> value)
	{
		int count = value.Length * UnsafeUtility.SizeOf<int>();
		m_Buffer.AddRange(value.GetUnsafeReadOnlyPtr(), count);
	}

	public unsafe void Write(NativeArray<int2> value)
	{
		int count = value.Length * UnsafeUtility.SizeOf<int2>();
		m_Buffer.AddRange(value.GetUnsafeReadOnlyPtr(), count);
	}

	public unsafe void Write(NativeArray<ushort> value)
	{
		int count = value.Length * UnsafeUtility.SizeOf<ushort>();
		m_Buffer.AddRange(value.GetUnsafeReadOnlyPtr(), count);
	}

	public unsafe void Write(NativeArray<byte> value)
	{
		int count = value.Length * UnsafeUtility.SizeOf<byte>();
		m_Buffer.AddRange(value.GetUnsafeReadOnlyPtr(), count);
	}

	public unsafe void Write(NativeArray<float4> value)
	{
		int count = value.Length * UnsafeUtility.SizeOf<float4>();
		m_Buffer.AddRange(value.GetUnsafeReadOnlyPtr(), count);
	}

	public unsafe void Write(NativeArray<float2> value)
	{
		int count = value.Length * UnsafeUtility.SizeOf<float2>();
		m_Buffer.AddRange(value.GetUnsafeReadOnlyPtr(), count);
	}

	public unsafe void Write(NativeArray<byte> value, int stride)
	{
		int length = m_Buffer.Length;
		m_Buffer.ResizeUninitialized(length + value.Length);
		NativeCompression.FilterDataBeforeWrite((IntPtr)value.GetUnsafeReadOnlyPtr(), (IntPtr)(m_Buffer.GetUnsafePtr() + length), value.Length, stride);
	}

	public void Write(NativeList<int> value)
	{
		Write(value.Length);
		for (int i = 0; i < value.Length; i++)
		{
			Write(value[i]);
		}
	}

	public void Write<TSerializable>(NativeArray<TSerializable> value) where TSerializable : struct, ISerializable
	{
		for (int i = 0; i < value.Length; i++)
		{
			Write(value[i]);
		}
	}

	public void Write(Entity value)
	{
		if (value.Index >= 0 && value.Index < m_EntityTable.Length)
		{
			Entity entity = m_EntityTable[value.Index];
			if (entity.Version == value.Version)
			{
				Write(entity.Index);
				return;
			}
		}
		int value2 = -1;
		Write(value2);
	}

	public void Write(Entity value, bool ignoreVersion)
	{
		if (value.Index >= 0 && value.Index < m_EntityTable.Length)
		{
			Entity entity = m_EntityTable[value.Index];
			if (ignoreVersion || entity.Version == value.Version)
			{
				Write(entity.Index);
				return;
			}
		}
		int value2 = -1;
		Write(value2);
	}

	public void Write<TSerializable>(TSerializable value) where TSerializable : ISerializable
	{
		value.Serialize(this);
	}

	public void Write(Bezier4x3 curve)
	{
		Write(curve.a);
		Write(curve.b);
		Write(curve.c);
		Write(curve.d);
	}

	public void Write(string value)
	{
		Write(value.Length);
		for (int i = 0; i < value.Length; i++)
		{
			Write(value[i]);
		}
	}

	public void Write(Color value)
	{
		Write(value.r);
		Write(value.g);
		Write(value.b);
		Write(value.a);
	}

	public void Write(Color32 value)
	{
		m_Buffer.Add(in value.r);
		m_Buffer.Add(in value.g);
		m_Buffer.Add(in value.b);
		m_Buffer.Add(in value.a);
	}

	public void Write(quaternion value)
	{
		Write(value.value);
	}

	public void Write(float4 value)
	{
		Write(value.x);
		Write(value.y);
		Write(value.z);
		Write(value.w);
	}

	public void Write(float3 value)
	{
		Write(value.x);
		Write(value.y);
		Write(value.z);
	}

	public void Write(float2 value)
	{
		Write(value.x);
		Write(value.y);
	}

	public void Write(int4 value)
	{
		Write(value.x);
		Write(value.y);
		Write(value.z);
		Write(value.w);
	}

	public void Write(int3 value)
	{
		Write(value.x);
		Write(value.y);
		Write(value.z);
	}

	public void Write(int2 value)
	{
		Write(value.x);
		Write(value.y);
	}

	public void Write(bool4 value)
	{
		int4 int5 = math.select(0, new int4(1, 2, 4, 8), value);
		int2 int6 = int5.xy | int5.zw;
		m_Buffer.Add((byte)(int6.x | int6.y));
	}

	public void Write(bool3 value)
	{
		int3 int5 = math.select(0, new int3(1, 2, 4), value);
		m_Buffer.Add((byte)(int5.x | int5.y | int5.z));
	}

	public void Write(bool2 value)
	{
		int2 int5 = math.select(0, new int2(1, 2), value);
		m_Buffer.Add((byte)(int5.x | int5.y));
	}

	public void Write(uint4 value)
	{
		Write(value.x);
		Write(value.y);
		Write(value.z);
		Write(value.w);
	}

	public void Write(Hash128 hash)
	{
		Write(hash.value);
	}

	public void Write(char value)
	{
		if (value <= '\u007f')
		{
			m_Buffer.Add((byte)value);
		}
		else if (value <= '߿')
		{
			m_Buffer.Add((byte)(0xC0 | ((int)value >> 6)));
			m_Buffer.Add((byte)(0x80 | (value & 0x3F)));
		}
		else if (value <= '\uffff')
		{
			m_Buffer.Add((byte)(0xE0 | ((int)value >> 12)));
			m_Buffer.Add((byte)(0x80 | (((int)value >> 6) & 0x3F)));
			m_Buffer.Add((byte)(0x80 | (value & 0x3F)));
		}
		else if (value <= 1114111)
		{
			m_Buffer.Add((byte)(0xF0 | ((int)value >> 18)));
			m_Buffer.Add((byte)(0x80 | (((int)value >> 12) & 0x3F)));
			m_Buffer.Add((byte)(0x80 | (((int)value >> 6) & 0x3F)));
			m_Buffer.Add((byte)(0x80 | (value & 0x3F)));
		}
		else
		{
			m_Buffer.Add((byte)0);
		}
	}

	public void Write(float value)
	{
		Write(math.asuint(value));
	}

	public void Write(double value)
	{
		Write(math.asulong(value));
	}

	public void Write(int value)
	{
		Write((uint)value);
	}

	public void Write(uint value)
	{
		m_Buffer.Add((byte)value);
		m_Buffer.Add((byte)(value >> 8));
		m_Buffer.Add((byte)(value >> 16));
		m_Buffer.Add((byte)(value >> 24));
	}

	public void Write(short value)
	{
		Write((ushort)value);
	}

	public void Write(ushort value)
	{
		m_Buffer.Add((byte)value);
		m_Buffer.Add((byte)((uint)value >> 8));
	}

	public void Write(sbyte value)
	{
		Write((byte)value);
	}

	public void Write(byte value)
	{
		m_Buffer.Add(in value);
	}

	public void Write(long value)
	{
		Write((ulong)value);
	}

	public void Write(ulong value)
	{
		m_Buffer.Add((byte)value);
		m_Buffer.Add((byte)(value >> 8));
		m_Buffer.Add((byte)(value >> 16));
		m_Buffer.Add((byte)(value >> 24));
		m_Buffer.Add((byte)(value >> 32));
		m_Buffer.Add((byte)(value >> 40));
		m_Buffer.Add((byte)(value >> 48));
		m_Buffer.Add((byte)(value >> 56));
	}

	public void Write(bool value)
	{
		Write((byte)math.select(0, 1, value));
	}
}
