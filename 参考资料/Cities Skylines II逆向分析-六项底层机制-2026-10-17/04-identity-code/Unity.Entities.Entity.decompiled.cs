using System;
using System.Diagnostics;
using Unity.Collections;

namespace Unity.Entities;

[DebuggerTypeProxy(typeof(EntityDebugProxy))]
[DebuggerDisplay("{EntityDebugProxy.GetDebugName(Index, Version)}")]
public struct Entity : IEquatable<Entity>, IComparable<Entity>
{
	public int Index;

	public int Version;

	public static Entity Null => default;

	public static bool operator ==(Entity lhs, Entity rhs)
	{
		if (lhs.Index == rhs.Index)
		{
			return lhs.Version == rhs.Version;
		}
		return false;
	}

	public static bool operator !=(Entity lhs, Entity rhs)
	{
		return !(lhs == rhs);
	}

	public int CompareTo(Entity other)
	{
		return Index - other.Index;
	}

	public override bool Equals(object compare)
	{
		if (compare is Entity entity)
		{
			return Equals(entity);
		}
		return false;
	}

	public override int GetHashCode()
	{
		return Index;
	}

	public bool Equals(Entity entity)
	{
		if (entity.Index == Index)
		{
			return entity.Version == Version;
		}
		return false;
	}

	public override string ToString()
	{
		if (!Equals(Null))
		{
			return $"Entity({Index}:{Version})";
		}
		return "Entity.Null";
	}

	[GenerateTestsForBurstCompatibility]
	public FixedString64Bytes ToFixedString()
	{
		if (Equals(Null))
		{
			return "Entity.Null";
		}
		FixedString64Bytes fs = default;
		fs.Append<FixedString64Bytes, FixedString32Bytes>((FixedString32Bytes)"Entity(");
		FixedStringMethods.Append(ref fs, Index);
		FixedStringMethods.Append(ref fs, ':');
		FixedStringMethods.Append(ref fs, Version);
		FixedStringMethods.Append(ref fs, ')');
		return fs;
	}
}
