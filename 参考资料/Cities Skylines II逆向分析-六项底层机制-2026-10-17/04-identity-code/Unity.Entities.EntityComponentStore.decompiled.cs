#define UNITY_ASSERTIONS
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Threading;
using Unity.Assertions;
using Unity.Burst;
using Unity.Burst.CompilerServices;
using Unity.Burst.Intrinsics;
using Unity.Collections;
using Unity.Collections.LowLevel.Unsafe;
using Unity.Jobs;
using Unity.Mathematics;
using UnityEngine.Assertions;

namespace Unity.Entities;

[BurstCompile]
internal struct EntityComponentStore
{
	private struct SharedComponentInfo
	{
		public int RefCount;

		public int ComponentType;

		public int Version;

		public int HashCode;
	}

	[StructLayout(LayoutKind.Sequential, Size = 1)]
	private struct AddressSpaceTagType
	{
	}

	[BurstCompile]
	internal struct PerChunkArray
	{
		public struct PerChunkData
		{
			public unsafe Archetype* Archetype;

			public int EntityCount;

			public int ListIndex;
		}

		private sealed class StaticIdentifier
		{
			internal static readonly SharedStatic<PerChunkArray> Ref = SharedStatic<PerChunkArray>.GetOrCreateUnsafe(0u, -2301534937205546864L, 0L);
		}

		private unsafe PerChunkData* m_PerChunkData;

		public unsafe static PerChunkData* ChunkData => StaticIdentifier.Ref.Data.m_PerChunkData;

		[BurstDiscard]
		internal unsafe static void Initialize()
		{
			if (StaticIdentifier.Ref.Data.m_PerChunkData == null)
			{
				int num = sizeof(PerChunkData) * ChunkStore.kMaximumChunkCount;
				PerChunkData* ptr = (PerChunkData*)Memory.Unmanaged.Allocate(num, 64, Allocator.Persistent);
				UnsafeUtility.MemClear(ptr, num);
				StaticIdentifier.Ref.Data.m_PerChunkData = ptr;
				AppDomain.CurrentDomain.DomainUnload += (object _, EventArgs _) =>
				{
					Shutdown();
				};
				AppDomain.CurrentDomain.ProcessExit += (object _, EventArgs _) =>
				{
					Shutdown();
				};
			}
			unsafe static void Shutdown()
			{
				Memory.Unmanaged.Free(StaticIdentifier.Ref.Data.m_PerChunkData, Allocator.Persistent);
				StaticIdentifier.Ref.Data.m_PerChunkData = null;
			}
		}
	}

	private struct Ulong16
	{
		private ulong p00;

		private ulong p01;

		private ulong p02;

		private ulong p03;

		private ulong p04;

		private ulong p05;

		private ulong p06;

		private ulong p07;

		private ulong p08;

		private ulong p09;

		private ulong p10;

		private ulong p11;

		private ulong p12;

		private ulong p13;

		private ulong p14;

		private ulong p15;
	}

	private struct Ulong256
	{
		private Ulong16 p00;

		private Ulong16 p01;

		private Ulong16 p02;

		private Ulong16 p03;

		private Ulong16 p04;

		private Ulong16 p05;

		private Ulong16 p06;

		private Ulong16 p07;

		private Ulong16 p08;

		private Ulong16 p09;

		private Ulong16 p10;

		private Ulong16 p11;

		private Ulong16 p12;

		private Ulong16 p13;

		private Ulong16 p14;

		private Ulong16 p15;

		public int Length
		{
			get
			{
				return 256;
			}
			set
			{
			}
		}

		public unsafe ref long ElementAt(int index)
		{
			fixed (Ulong16* ptr = &p00)
			{
				return ref UnsafeUtility.AsRef<long>((byte*)ptr + (nint)index * (nint)8);
			}
		}
	}

	private struct Ulong4096
	{
		private Ulong256 p00;

		private Ulong256 p01;

		private Ulong256 p02;

		private Ulong256 p03;

		private Ulong256 p04;

		private Ulong256 p05;

		private Ulong256 p06;

		private Ulong256 p07;

		private Ulong256 p08;

		private Ulong256 p09;

		private Ulong256 p10;

		private Ulong256 p11;

		private Ulong256 p12;

		private Ulong256 p13;

		private Ulong256 p14;

		private Ulong256 p15;
	}

	private struct Ulong16384 : IIndexable<long>
	{
		private Ulong4096 p00;

		private Ulong4096 p01;

		private Ulong4096 p02;

		private Ulong4096 p03;

		public int Length
		{
			get
			{
				return 16384;
			}
			set
			{
			}
		}

		public unsafe ref long ElementAt(int index)
		{
			fixed (Ulong4096* ptr = &p00)
			{
				return ref UnsafeUtility.AsRef<long>((byte*)ptr + (nint)index * (nint)8);
			}
		}
	}

	internal struct ChunkStore : IDisposable
	{
		private Ulong16384 m_megachunk;

		private Ulong16384 m_chunkInUse;

		private Ulong256 m_megachunkIsFull;

		private static readonly int log2ChunksPerMegachunk = 6;

		private static readonly int chunksPerMegachunk = 1 << log2ChunksPerMegachunk;

		private static readonly int log2MegachunksInUniverse = 14;

		private static readonly int megachunksInUniverse = 1 << log2MegachunksInUniverse;

		public static readonly int kMaximumChunkCount = 1 << log2ChunksPerMegachunk + log2MegachunksInUniverse;

		public static readonly int kErrorNone = 0;

		public static readonly int kErrorAllocationFailed = -1;

		public static readonly int kErrorChunkAlreadyFreed = -2;

		public static readonly int kErrorChunkAlreadyMarkedFree = -3;

		public static readonly int kErrorChunkNotFound = -4;

		public static readonly int kErrorNoChunksAvailable = -5;

		private static readonly int ChunkSizeInBytesRoundedUpToPow2 = math.ceilpow2(16384);

		private static readonly int Log2ChunkSizeInBytesRoundedUpToPow2 = math.tzcnt(ChunkSizeInBytesRoundedUpToPow2);

		private static readonly int MegachunkSizeInBytes = 1 << Log2ChunkSizeInBytesRoundedUpToPow2 + 6;

		public static void Initialize()
		{
			s_chunkStore.Data.m_chunkInUse.ElementAt(0) = -1L;
			s_chunkStore.Data.m_megachunkIsFull.ElementAt(0) = 1L;
		}

		private int AllocationFailed(int offset, int count)
		{
			if (ConcurrentMask.TryFree(ref m_chunkInUse, offset, count) == -1)
			{
				return kErrorChunkAlreadyFreed;
			}
			return kErrorAllocationFailed;
		}

		internal unsafe Chunk* GetChunkPointer(int chunkIndex)
		{
			int index = chunkIndex >> log2ChunksPerMegachunk;
			int num = chunkIndex & (chunksPerMegachunk - 1);
			byte* ptr = (byte*)m_megachunk.ElementAt(index);
			return (Chunk*)(ptr + (num << Log2ChunkSizeInBytesRoundedUpToPow2));
		}

		public unsafe int AllocateContiguousChunks(out ChunkIndex value, int requestedCount, out int actualCount)
		{
			int i;
			for (i = 0; i < m_megachunkIsFull.Length && m_megachunkIsFull.ElementAt(i) == -1; i++)
			{
			}
			int num = i << 6;
			actualCount = math.min(chunksPerMegachunk, requestedCount);
			value = ChunkIndex.Null;
			while (actualCount > 0)
			{
				for (int j = 0; j < megachunksInUniverse; j++)
				{
					int num2 = (num + j) & (megachunksInUniverse - 1);
					long num3 = m_chunkInUse.ElementAt(num2);
					while (true)
					{
						long num4 = num3;
						if (num4 == -1 || !ConcurrentMask.foundAtLeastThisManyConsecutiveZeroes(num4, actualCount, out var offset, out var _))
						{
							break;
						}
						long num5;
						long value2 = (num5 = num4 | ConcurrentMask.MakeMask(offset, actualCount));
						if (num4 == 0L)
						{
							value2 = -1L;
						}
						num3 = Interlocked.CompareExchange(ref m_chunkInUse.ElementAt(num2), value2, num4);
						if (num3 != num4)
						{
							continue;
						}
						int num6 = (num2 << log2ChunksPerMegachunk) + offset;
						if (num4 == 0L)
						{
							long num7 = (long)Memory.Unmanaged.Allocate(MegachunkSizeInBytes, 64, Allocator.Persistent);
							if (num7 == 0L)
							{
								return AllocationFailed(num6, actualCount);
							}
							Interlocked.Exchange(ref m_megachunk.ElementAt(num2), num7);
							Interlocked.Exchange(ref m_chunkInUse.ElementAt(num2), num5);
						}
						if (num5 == -1)
						{
							ConcurrentMask.AtomicOr(ref m_megachunkIsFull.ElementAt(num2 >> 6), 1L << (num2 & 0x3F));
						}
						value = new ChunkIndex(num6);
						return kErrorNone;
					}
				}
				actualCount >>= 1;
			}
			return kErrorNoChunksAvailable;
		}

		[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
		[Conditional("UNITY_DOTS_DEBUG")]
		private unsafe void ThrowChunkAlreadyMarkedAsFree(ChunkIndex chunk)
		{
			throw new ArgumentException($"Chunk index {(int)chunk} (address {(long)chunk.GetPtr():x8}) already marked as free");
		}

		public unsafe int FreeContiguousChunks(ChunkIndex firstChunk, int count)
		{
			int num = (int)firstChunk >> log2ChunksPerMegachunk;
			long num2 = ConcurrentMask.MakeMask((int)firstChunk & (chunksPerMegachunk - 1), count);
			long num3 = m_chunkInUse.ElementAt(num);
			long num4;
			long num5;
			do
			{
				num4 = num3;
				if ((num4 & num2) != num2)
				{
					return kErrorChunkAlreadyMarkedFree;
				}
				num5 = num4 & ~num2;
				if (num5 == 0L)
				{
					num5 = -1L;
				}
				num3 = Interlocked.CompareExchange(ref m_chunkInUse.ElementAt(num), num5, num4);
			}
			while (num3 != num4);
			if (num5 == -1)
			{
				long num6 = Interlocked.Exchange(ref m_megachunk.ElementAt(num), 0L);
				Interlocked.Exchange(ref m_chunkInUse.ElementAt(num), 0L);
				Memory.Unmanaged.Free((byte*)num6, Allocator.Persistent);
			}
			ConcurrentMask.AtomicAnd(ref m_megachunkIsFull.ElementAt(num >> 6), ~(1L << num));
			return kErrorNone;
		}

		public unsafe void Dispose()
		{
			for (int i = 0; i < megachunksInUniverse; i++)
			{
				void* ptr = (void*)m_megachunk.ElementAt(i);
				if (ptr != null)
				{
					Memory.Unmanaged.Free(ptr, Allocator.Persistent);
				}
			}
			this = default;
		}
	}

	public struct ArchetypeChanges
	{
		public int StartIndex;

		public uint ArchetypeTrackingVersion;
	}

	internal struct ChunkListChanges
	{
		public unsafe Archetype* ArchetypeTrackingHead;

		public unsafe void Init()
		{
			ArchetypeTrackingHead = null;
		}

		public unsafe void TrackArchetype(Archetype* archetype)
		{
			if (archetype->NextChangedArchetype == null)
			{
				archetype->NextChangedArchetype = ArchetypeTrackingHead;
				ArchetypeTrackingHead = archetype;
			}
		}
	}

	private struct ChunkAndEnabledMask : IComparable<ChunkAndEnabledMask>
	{
		public v128 EnabledMask;

		public ChunkIndex Chunk;

		public int ChunkEntityCount;

		public byte UseEnabledMask;

		public int CompareTo(ChunkAndEnabledMask other)
		{
			return Chunk.CompareTo(other.Chunk);
		}
	}

	private struct ArchetypeChunkFilter
	{
		public unsafe Archetype* Archetype;

		public unsafe fixed int SharedComponentValues[16];

		public unsafe ArchetypeChunkFilter(Archetype* archetype, int* sharedComponentValues)
		{
			Archetype = archetype;
			for (int i = 0; i < archetype->NumSharedComponents; i++)
			{
				SharedComponentValues[i] = sharedComponentValues[i];
			}
		}

		public unsafe ArchetypeChunkFilter(Archetype* archetype, SharedComponentValues sharedComponentValues)
		{
			Archetype = archetype;
			for (int i = 0; i < archetype->NumSharedComponents; i++)
			{
				SharedComponentValues[i] = sharedComponentValues[i];
			}
		}
	}

	private struct InstantiateRemapChunk
	{
		public ChunkIndex Chunk;

		public int IndexInChunk;

		public int AllocatedCount;

		public int InstanceBeginIndex;
	}

	[BurstCompile]
	private struct GetCreatedAndDestroyedEntitiesJob : IJob
	{
		public NativeList<int> OldState;

		public NativeList<int> NewState;

		public NativeList<Entity> CreatedEntities;

		public NativeList<Entity> DestroyedEntities;

		public void Execute()
		{
			CreatedEntities.Clear();
			DestroyedEntities.Clear();
			NativeArray<Entity> nativeArray = OldState.AsArray().Reinterpret<Entity>(4);
			NativeArray<Entity> array = NewState.AsArray().Reinterpret<Entity>(4);
			array.Sort();
			int num = 0;
			int num2 = 0;
			int length = nativeArray.Length;
			int length2 = array.Length;
			while (true)
			{
				if (num == length)
				{
					if (num2 != length2)
					{
						CreatedEntities.AddRange(array.GetSubArray(num2, length2 - num2));
					}
					break;
				}
				if (num2 == length2)
				{
					if (num != length)
					{
						DestroyedEntities.AddRange(nativeArray.GetSubArray(num, length - num));
					}
					break;
				}
				int num3 = nativeArray[num].CompareTo(array[num2]);
				if (num3 == 0)
				{
					num++;
					num2++;
				}
				else if (num3 < 0)
				{
					DestroyedEntities.Add(nativeArray[num]);
					num++;
				}
				else
				{
					CreatedEntities.Add(array[num2]);
					num2++;
				}
			}
			OldState.CopyFrom(in NewState);
		}
	}

	internal struct EntityStore : IDisposable
	{
		[StructLayout(LayoutKind.Sequential, Size = 1)]
		internal struct BurstStaticIdentifier
		{
		}

		private struct DataBlock
		{
			public unsafe fixed ulong allocated[128];

			public unsafe fixed ulong entityInChunk[8192];

			public unsafe fixed int versions[8192];

			public unsafe fixed int nameByEntityIndex[8192];
		}

		private const int k_EntitiesInBlock = 8192;

		private const int k_BlockSize = 132096;

		private const int k_BlockCount = 16384;

		private const int k_BlockBusy = -1;

		internal const int MaximumTheoreticalAmountOfEntities = 134217728;

		private unsafe fixed ulong m_DataBlocks[16384];

		private unsafe fixed int m_EntityCount[16384];

		public unsafe int DebugOnlyThreadUnsafeEntityCount
		{
			get
			{
				int num = 0;
				for (int i = 0; i < 16384; i++)
				{
					num += m_EntityCount[i];
				}
				return num;
			}
		}

		public unsafe void IntegrityCheck(int blockIndex)
		{
			DataBlock* ptr = (DataBlock*)m_DataBlocks[blockIndex];
			if (ptr == null)
			{
				UnityEngine.Assertions.Assert.AreEqual(0, m_EntityCount[blockIndex]);
				if (m_EntityCount[blockIndex] != 0)
				{
					Debug.Log($"block index {blockIndex} pointer {(ulong)ptr:X16} count {m_EntityCount[blockIndex]}");
				}
				return;
			}
			ulong* ptr2 = ptr->allocated;
			int* ptr3 = ptr->versions;
			for (int i = 0; i < 8192; i++)
			{
				ulong expected = (ptr2[i / 64] >> i % 64) & 1;
				ulong actual = (ulong)ptr3[i] & 1uL;
				UnityEngine.Assertions.Assert.AreEqual(expected, actual);
			}
		}

		public unsafe void IntegrityCheck()
		{
			UnityEngine.Assertions.Assert.AreEqual(132096, sizeof(DataBlock));
			for (int i = 0; i < 16384; i++)
			{
				IntegrityCheck(i);
			}
		}

		[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
		[Conditional("UNITY_DOTS_DEBUG")]
		private unsafe void DebugOnlyThrowIfEntityDoesntExist(Entity entity, DataBlock* block, int indexInBlock)
		{
			if (block == null || MissingInBitmask())
			{
				throw new ArgumentException("All entities passed to EntityManager must exist. One of the entities has already been destroyed or was never created. " + AppendDestroyedEntityRecordError(entity));
			}
			unsafe bool MissingInBitmask()
			{
				ulong num = block->allocated[indexInBlock / 64];
				ulong num2 = (ulong)(1L << indexInBlock % 64);
				return (num & num2) == 0;
			}
		}

		internal unsafe Entity GetEntityByEntityIndex(int index)
		{
			int num = index / 8192;
			int num2 = index % 8192;
			DataBlock* ptr = (DataBlock*)m_DataBlocks[num];
			if (ptr == null)
			{
				return Entity.Null;
			}
			int num3 = ptr->versions[num2];
			if ((num3 & 1) != 0)
			{
				return new Entity
				{
					Index = index,
					Version = num3
				};
			}
			return Entity.Null;
		}

		internal unsafe bool Exists(Entity entity)
		{
			int num = entity.Index / 8192;
			int num2 = entity.Index % 8192;
			DataBlock* ptr = (DataBlock*)m_DataBlocks[num];
			if (ptr == null)
			{
				return false;
			}
			if ((entity.Version & 1) == 0 || ptr->versions[num2] != entity.Version)
			{
				return false;
			}
			return true;
		}

		public unsafe void SetEntityInChunk(Entity entity, EntityInChunk entityInChunk)
		{
			int num = entity.Index / 8192;
			int num2 = entity.Index % 8192;
			DataBlock* ptr = (DataBlock*)m_DataBlocks[num];
			((EntityInChunk*)ptr->entityInChunk)[num2] = entityInChunk;
		}

		public unsafe void SetEntityVersion(Entity entity, int version)
		{
			int num = entity.Index / 8192;
			int num2 = entity.Index % 8192;
			DataBlock* ptr = (DataBlock*)m_DataBlocks[num];
			ptr->versions[num2] = version;
		}

		public unsafe EntityInChunk GetEntityInChunk(Entity entity)
		{
			int num = entity.Index / 8192;
			int num2 = entity.Index % 8192;
			DataBlock* ptr = (DataBlock*)m_DataBlocks[num];
			if (ptr == null)
			{
				return EntityInChunk.Null;
			}
			ulong num3 = ptr->allocated[num2 / 64];
			ulong num4 = (ulong)(1L << num2 % 64);
			if ((num3 & num4) == 0L)
			{
				return EntityInChunk.Null;
			}
			return ((EntityInChunk*)ptr->entityInChunk)[num2];
		}

		internal unsafe void AllocateEntities(NativeArray<Entity> entities)
		{
			AllocateEntities((Entity*)entities.GetUnsafePtr(), entities.Length, ChunkIndex.Null, 0);
		}

		internal unsafe void AllocateEntities(Entity* entities, int entityCount)
		{
			AllocateEntities(entities, entityCount, ChunkIndex.Null, 0);
		}

		internal unsafe void AllocateEntities(Entity* entities, int totalCount, ChunkIndex chunkIndex, int firstEntityInChunkIndex)
		{
			int num = firstEntityInChunkIndex;
			for (int i = 0; i < 16384; i++)
			{
				int num2 = Interlocked.Add(ref m_EntityCount[i], 0);
				if (num2 == -1 || num2 == 8192)
				{
					continue;
				}
				int x = 8192 - num2;
				int num3 = math.min(x, totalCount);
				if (Interlocked.CompareExchange(ref m_EntityCount[i], -1, num2) != num2)
				{
					continue;
				}
				DataBlock* ptr = (DataBlock*)m_DataBlocks[i];
				if (ptr == null)
				{
					ptr = (DataBlock*)Memory.Unmanaged.Allocate(132096L, 8, Allocator.Persistent);
					UnsafeUtility.MemClear(ptr, 132096L);
					m_DataBlocks[i] = (ulong)ptr;
				}
				int num4 = math.min(x, num3);
				ulong* ptr2 = ptr->allocated;
				int* ptr3 = ptr->versions;
				ulong* ptr4 = ptr->entityInChunk;
				int num5 = i * 8192;
				while (num4 > 0)
				{
					for (int j = 0; j < 128; j++)
					{
						if (ptr2[j] == ulong.MaxValue)
						{
							continue;
						}
						for (int k = 0; k < 64; k++)
						{
							int num6 = j * 64 + k;
							ulong num7 = (ulong)(1L << num6 % 64);
							if ((ptr2[j] & num7) == 0L)
							{
								ptr2[j] |= num7;
								*entities = new Entity
								{
									Index = num5 + num6,
									Version = ++ptr3[num6]
								};
								if (chunkIndex != ChunkIndex.Null)
								{
									((EntityInChunk*)ptr4)[num6] = new EntityInChunk
									{
										Chunk = chunkIndex,
										IndexInChunk = num
									};
								}
								else
								{
									ptr4[num6] = 0uL;
								}
								entities++;
								num++;
								num4--;
								if (num4 == 0)
								{
									break;
								}
							}
						}
						if (num4 == 0)
						{
							break;
						}
					}
				}
				UnityEngine.Assertions.Assert.AreEqual(0, num4);
				UnityEngine.Assertions.Assert.AreEqual(Interlocked.CompareExchange(ref m_EntityCount[i], num2 + num3, -1), -1);
				totalCount -= num3;
				if (totalCount == 0)
				{
					return;
				}
			}
			throw new InvalidOperationException("Could not find a data block for entity allocation.");
		}

		internal unsafe void DeallocateEntities(NativeArray<Entity> entities)
		{
			DeallocateEntities((Entity*)entities.GetUnsafePtr(), entities.Length);
		}

		internal unsafe void DeallocateEntities(Entity* entities, int count)
		{
			int i = 0;
			while (i < count)
			{
				int num = i;
				int index = entities[i].Index;
				int num2 = index % 8192;
				int num3 = index / 8192;
				for (i++; i < count && entities[i].Index / 8192 == num3; i++)
				{
					int num4 = entities[i].Index % 8192;
					if (num4 != num2 + 1)
					{
						break;
					}
					num2 = num4;
				}
				int num5 = i;
				int num6 = index + (num5 - num);
				int num7 = Interlocked.Add(ref m_EntityCount[num3], 0);
				if (num7 == 0)
				{
					continue;
				}
				while (true)
				{
					if (num7 != -1)
					{
						int num8 = Interlocked.CompareExchange(ref m_EntityCount[num3], -1, num7);
						if (num8 == num7)
						{
							break;
						}
						num7 = num8;
					}
					else
					{
						num7 = Interlocked.Add(ref m_EntityCount[num3], 0);
					}
				}
				if (num7 == 0)
				{
					UnityEngine.Assertions.Assert.AreEqual(Interlocked.CompareExchange(ref m_EntityCount[i], 0, -1), -1);
					continue;
				}
				DataBlock* ptr = (DataBlock*)m_DataBlocks[num3];
				ulong* ptr2 = ptr->allocated;
				int* ptr3 = ptr->versions;
				int num9 = index;
				int num10 = num;
				while (num9 < num6)
				{
					int num11 = num9 % 8192;
					if (ptr3[num11] == entities[num10].Version)
					{
						ulong num12 = (ulong)(1L << num11 % 64);
						ptr3[num11]++;
						ptr2[num11 / 64] &= 0xFFFFFFFFFFFFFFFFuL ^ num12;
						ptr->nameByEntityIndex[num11] = 0;
						num7--;
					}
					num9++;
					num10++;
				}
				UnityEngine.Assertions.Assert.AreEqual(Interlocked.CompareExchange(ref m_EntityCount[num3], num7, -1), -1);
			}
		}

		public unsafe void Dispose()
		{
			for (int i = 0; i < 16384; i++)
			{
				if (m_DataBlocks[i] != 0L)
				{
					Memory.Unmanaged.Free((void*)m_DataBlocks[i], Allocator.Persistent);
					m_DataBlocks[i] = 0uL;
				}
			}
			this = default;
		}

		internal EntityName GetEntityName(Entity entity)
		{
			return GetEntityName(entity.Index);
		}

		internal unsafe EntityName GetEntityName(int index)
		{
			int num = index / 8192;
			int num2 = index % 8192;
			DataBlock* ptr = (DataBlock*)m_DataBlocks[num];
			if (ptr == null)
			{
				return default;
			}
			ulong num3 = ptr->allocated[num2 / 64];
			ulong num4 = (ulong)(1L << num2 % 64);
			if ((num3 & num4) == 0L)
			{
				return default;
			}
			int index2 = ptr->nameByEntityIndex[num2];
			return new EntityName
			{
				Index = index2
			};
		}

		public unsafe void SetEntityName(Entity entity, EntityName name)
		{
			int num = entity.Index / 8192;
			int num2 = entity.Index % 8192;
			DataBlock* ptr = (DataBlock*)m_DataBlocks[num];
			ptr->nameByEntityIndex[num2] = name.Index;
		}
	}

	internal unsafe delegate void EntityBatchFromEntityChunkDataShared_0000075A$PostfixBurstDelegate(EntityComponentStore* ecs, in EntityInChunk* chunkData, int chunkCount, EntityBatchInChunk* entityBatchList, int* currentbatchIndex, int nSharedComponentsToAdd, int* foundError);

	internal static class EntityBatchFromEntityChunkDataShared_0000075A$BurstDirectCall
	{
		private static IntPtr Pointer;

		private static IntPtr DeferredCompilation;

		[BurstDiscard]
		private unsafe static void GetFunctionPointerDiscard(ref IntPtr P_0)
		{
			if (Pointer == (IntPtr)0)
			{
				Pointer = (nint)BurstCompiler.GetILPPMethodFunctionPointer2(DeferredCompilation, __ldtoken(EntityComponentStore.EntityBatchFromEntityChunkDataShared$BurstManaged(EntityComponentStore*, ref EntityInChunk*, int, EntityBatchInChunk*, int*, int, int*)), typeof(EntityBatchFromEntityChunkDataShared_0000075A$PostfixBurstDelegate).TypeHandle);
			}
			P_0 = Pointer;
		}

		private static IntPtr GetFunctionPointer()
		{
			nint result = 0;
			GetFunctionPointerDiscard(ref result);
			return result;
		}

		public unsafe static void Constructor()
		{
			DeferredCompilation = BurstCompiler.CompileILPPMethod2(__ldtoken(EntityComponentStore.EntityBatchFromEntityChunkDataShared(EntityComponentStore*, ref EntityInChunk*, int, EntityBatchInChunk*, int*, int, int*)));
		}

		public static void Initialize()
		{
		}

		static EntityBatchFromEntityChunkDataShared_0000075A$BurstDirectCall()
		{
			Constructor();
		}

		public unsafe static void Invoke(EntityComponentStore* ecs, in EntityInChunk* chunkData, int chunkCount, EntityBatchInChunk* entityBatchList, int* currentbatchIndex, int nSharedComponentsToAdd, int* foundError)
		{
			if (BurstCompiler.IsEnabled)
			{
				IntPtr functionPointer = GetFunctionPointer();
				if (functionPointer != (IntPtr)0)
				{
					((delegate* unmanaged[Cdecl]<EntityComponentStore*, ref EntityInChunk*, int, EntityBatchInChunk*, int*, int, int*, void>)functionPointer)(ecs, ref chunkData, chunkCount, entityBatchList, currentbatchIndex, nSharedComponentsToAdd, foundError);
					return;
				}
			}
			EntityBatchFromEntityChunkDataShared$BurstManaged(ecs, in chunkData, chunkCount, entityBatchList, currentbatchIndex, nSharedComponentsToAdd, foundError);
		}
	}

	internal unsafe delegate void SortEntityInChunk_0000075B$PostfixBurstDelegate(EntityInChunk* entityInChunks, int count);

	internal static class SortEntityInChunk_0000075B$BurstDirectCall
	{
		private static IntPtr Pointer;

		private static IntPtr DeferredCompilation;

		[BurstDiscard]
		private unsafe static void GetFunctionPointerDiscard(ref IntPtr P_0)
		{
			if (Pointer == (IntPtr)0)
			{
				Pointer = (nint)BurstCompiler.GetILPPMethodFunctionPointer2(DeferredCompilation, __ldtoken(EntityComponentStore.SortEntityInChunk$BurstManaged(EntityInChunk*, int)), typeof(SortEntityInChunk_0000075B$PostfixBurstDelegate).TypeHandle);
			}
			P_0 = Pointer;
		}

		private static IntPtr GetFunctionPointer()
		{
			nint result = 0;
			GetFunctionPointerDiscard(ref result);
			return result;
		}

		public unsafe static void Constructor()
		{
			DeferredCompilation = BurstCompiler.CompileILPPMethod2(__ldtoken(EntityComponentStore.SortEntityInChunk(EntityInChunk*, int)));
		}

		public static void Initialize()
		{
		}

		static SortEntityInChunk_0000075B$BurstDirectCall()
		{
			Constructor();
		}

		public unsafe static void Invoke(EntityInChunk* entityInChunks, int count)
		{
			if (BurstCompiler.IsEnabled)
			{
				IntPtr functionPointer = GetFunctionPointer();
				if (functionPointer != (IntPtr)0)
				{
					((delegate* unmanaged[Cdecl]<EntityInChunk*, int, void>)functionPointer)(entityInChunks, count);
					return;
				}
			}
			SortEntityInChunk$BurstManaged(entityInChunks, count);
		}
	}

	internal unsafe delegate void GatherEntityInChunkForEntities_0000075C$PostfixBurstDelegate(Entity* Entities, EntityInChunk* EntityChunkData, int numEntities);

	internal static class GatherEntityInChunkForEntities_0000075C$BurstDirectCall
	{
		private static IntPtr Pointer;

		private static IntPtr DeferredCompilation;

		[BurstDiscard]
		private unsafe static void GetFunctionPointerDiscard(ref IntPtr P_0)
		{
			if (Pointer == (IntPtr)0)
			{
				Pointer = (nint)BurstCompiler.GetILPPMethodFunctionPointer2(DeferredCompilation, __ldtoken(EntityComponentStore.GatherEntityInChunkForEntities$BurstManaged(Entity*, EntityInChunk*, int)), typeof(GatherEntityInChunkForEntities_0000075C$PostfixBurstDelegate).TypeHandle);
			}
			P_0 = Pointer;
		}

		private static IntPtr GetFunctionPointer()
		{
			nint result = 0;
			GetFunctionPointerDiscard(ref result);
			return result;
		}

		public unsafe static void Constructor()
		{
			DeferredCompilation = BurstCompiler.CompileILPPMethod2(__ldtoken(EntityComponentStore.GatherEntityInChunkForEntities(Entity*, EntityInChunk*, int)));
		}

		public static void Initialize()
		{
		}

		static GatherEntityInChunkForEntities_0000075C$BurstDirectCall()
		{
			Constructor();
		}

		public unsafe static void Invoke(Entity* Entities, EntityInChunk* EntityChunkData, int numEntities)
		{
			if (BurstCompiler.IsEnabled)
			{
				IntPtr functionPointer = GetFunctionPointer();
				if (functionPointer != (IntPtr)0)
				{
					((delegate* unmanaged[Cdecl]<Entity*, EntityInChunk*, int, void>)functionPointer)(Entities, EntityChunkData, numEntities);
					return;
				}
			}
			GatherEntityInChunkForEntities$BurstManaged(Entities, EntityChunkData, numEntities);
		}
	}

	internal unsafe delegate void GetCreatedAndDestroyedEntities_000007CE$PostfixBurstDelegate(EntityComponentStore* store, ref NativeList<int> state, ref NativeList<Entity> createdEntities, ref NativeList<Entity> destroyedEntities, ref JobHandle jobHandle, bool async);

	internal static class GetCreatedAndDestroyedEntities_000007CE$BurstDirectCall
	{
		private static IntPtr Pointer;

		private static IntPtr DeferredCompilation;

		[BurstDiscard]
		private unsafe static void GetFunctionPointerDiscard(ref IntPtr P_0)
		{
			if (Pointer == (IntPtr)0)
			{
				Pointer = (nint)BurstCompiler.GetILPPMethodFunctionPointer2(DeferredCompilation, __ldtoken(EntityComponentStore.GetCreatedAndDestroyedEntities$BurstManaged(EntityComponentStore*, ref NativeList<int>, ref NativeList<Entity>, ref NativeList<Entity>, ref JobHandle, bool)), typeof(GetCreatedAndDestroyedEntities_000007CE$PostfixBurstDelegate).TypeHandle);
			}
			P_0 = Pointer;
		}

		private static IntPtr GetFunctionPointer()
		{
			nint result = 0;
			GetFunctionPointerDiscard(ref result);
			return result;
		}

		public unsafe static void Constructor()
		{
			DeferredCompilation = BurstCompiler.CompileILPPMethod2(__ldtoken(EntityComponentStore.GetCreatedAndDestroyedEntities(EntityComponentStore*, ref NativeList<int>, ref NativeList<Entity>, ref NativeList<Entity>, ref JobHandle, bool)));
		}

		public static void Initialize()
		{
		}

		static GetCreatedAndDestroyedEntities_000007CE$BurstDirectCall()
		{
			Constructor();
		}

		public unsafe static void Invoke(EntityComponentStore* store, ref NativeList<int> state, ref NativeList<Entity> createdEntities, ref NativeList<Entity> destroyedEntities, ref JobHandle jobHandle, bool async)
		{
			if (BurstCompiler.IsEnabled)
			{
				IntPtr functionPointer = GetFunctionPointer();
				if (functionPointer != (IntPtr)0)
				{
					((delegate* unmanaged[Cdecl]<EntityComponentStore*, ref NativeList<int>, ref NativeList<Entity>, ref NativeList<Entity>, ref JobHandle, bool, void>)functionPointer)(store, ref state, ref createdEntities, ref destroyedEntities, ref jobHandle, async);
					return;
				}
			}
			GetCreatedAndDestroyedEntities$BurstManaged(store, ref state, ref createdEntities, ref destroyedEntities, ref jobHandle, async);
		}
	}

	private const int kUnmanagedSharedComponentIndexFlag = int.MinValue;

	[NativeDisableUnsafePtrRestriction]
	private unsafe int* m_ComponentTypeOrderVersion;

	private BlockAllocator m_ArchetypeChunkAllocator;

	internal UnsafePtrList<Archetype> m_Archetypes;

	private ArchetypeListMap m_TypeLookup;

	internal int m_ManagedComponentIndex;

	internal int m_ManagedComponentIndexCapacity;

	internal UnsafeAppendBuffer m_ManagedComponentFreeIndex;

	internal ManagedDeferredCommands ManagedChangesTracker;

	internal int m_SharedComponentVersion;

	internal int m_SharedComponentGlobalVersion;

	private int m_UnmanagedSharedComponentCount;

	internal UnsafeList<ComponentTypeList> m_UnmanagedSharedComponentsByType;

	private UnsafeList<TypeIndex> m_UnmanagedSharedComponentTypes;

	private UnsafeList<UnsafeList<SharedComponentInfo>> m_UnmanagedSharedComponentInfo;

	private UnsafeParallelMultiHashMap<ulong, int> m_HashLookup;

	internal ChunkListChanges m_ChunkListChangesTracker;

	private ulong m_WorldSequenceNumber;

	private ulong m_NextChunkSequenceNumber;

	private uint m_GlobalSystemVersion;

	private int m_IntentionallyInconsistent;

	private uint m_ArchetypeTrackingVersion;

	private TypeIndex m_LinkedGroupType;

	private TypeIndex m_ChunkHeaderType;

	private TypeIndex m_PrefabType;

	private TypeIndex m_OmitLinkedEntityGroupFromPrefabInstanceType;

	private TypeIndex m_CleanupEntityType;

	private TypeIndex m_DisabledType;

	private TypeIndex m_EntityType;

	private TypeIndex m_SystemInstanceType;

	private ComponentType m_ChunkHeaderComponentType;

	private ComponentType m_EntityComponentType;

	private ComponentType m_SimulateComponentType;

	private unsafe TypeManager.TypeInfo* m_TypeInfos;

	private unsafe TypeManager.EntityOffsetInfo* m_EntityOffsetInfos;

	internal int m_DebugOnlyManagedAccess;

	internal byte memoryInitPattern;

	internal byte useMemoryInitPattern;

	private const int kMaximumEmptyChunksInPool = 16;

	private const int kDefaultCapacity = 1024;

	internal const int kMaxSharedComponentCount = 16;

	private static readonly SharedStatic<ulong> s_TotalChunkAddressSpaceInBytes = SharedStatic<ulong>.GetOrCreateUnsafe(0u, 6266345168485942189L, 0L);

	private static readonly ulong DefaultChunkAddressSpaceInBytes = 1073741824uL;

	public EntityNameStoreAccess m_NameStoreAccess;

	internal const long k_MaximumEntitiesPerWorld = 134217728L;

	internal const int kUnmanagedSharedElementIndexMask = 65535;

	internal const int kUnmanagedSharedTypeIndexBitOffset = 16;

	internal static readonly SharedStatic<ChunkStore> s_chunkStore = SharedStatic<ChunkStore>.GetOrCreateUnsafe(0u, -2093332447932307698L, 0L);

	private const string k_JournalingDisabledMsg = "Entities Journaling may be able to help determine more information. Please enable Entities Journaling for a more helpful error message.";

	internal static readonly SharedStatic<EntityStore> s_entityStore = SharedStatic<EntityStore>.GetOrCreateUnsafe(0u, 1063811976437696451L, 0L);

	public ulong WorldSequenceNumber => m_WorldSequenceNumber;

	public static ulong TotalChunkAddressSpaceInBytes
	{
		get
		{
			if (s_TotalChunkAddressSpaceInBytes.Data == 0)
			{
				return DefaultChunkAddressSpaceInBytes;
			}
			return s_TotalChunkAddressSpaceInBytes.Data - 1;
		}
		set
		{
			s_TotalChunkAddressSpaceInBytes.Data = value + 1;
		}
	}

	public EntityNameStoreAccess NameStoreAccess => m_NameStoreAccess;

	public ulong NameChangeBitsSequenceNum => m_NameStoreAccess.NameChangeBitsSequenceNum;

	public int EntityOrderVersion => GetComponentTypeOrderVersion(m_EntityType);

	public uint GlobalSystemVersion => m_GlobalSystemVersion;

	internal bool IsIntentionallyInconsistent => m_IntentionallyInconsistent == 1;

	public int ManagedComponentIndexUsedCount => m_ManagedComponentIndex - 1 - m_ManagedComponentFreeIndex.Length / 4;

	public int ManagedComponentFreeCount => m_ManagedComponentIndexCapacity - m_ManagedComponentIndex + m_ManagedComponentFreeIndex.Length / 4;

	public ulong IncNameChangeBitsVersion()
	{
		return m_NameStoreAccess.IncNameChangeBitsVersion();
	}

	public void SetNameChangeBitsVersion(ulong nameChangeBitsVersion)
	{
		m_NameStoreAccess.SetNameChangeBitsVersion(nameChangeBitsVersion);
	}

	public EntityName GetEntityNameByEntityIndex(int index)
	{
		return m_NameStoreAccess.GetEntityNameByEntityIndex(index);
	}

	public unsafe void CopyAndUpdateNameByEntity(EntityComponentStore* fromEntityComponentStore, NativeArray<ArchetypeChunk> srcChunks, NativeArray<EntityRemapUtility.EntityRemapInfo> remap)
	{
		int i = 0;
		for (int length = srcChunks.Length; i < length; i++)
		{
			ChunkIndex chunk = srcChunks[i].m_Chunk;
			Entity* buffer = (Entity*)chunk.Buffer;
			int count = chunk.Count;
			for (int j = 0; j < count; j++)
			{
				Entity entity = buffer[j];
				Entity entity2 = EntityRemapUtility.RemapEntity(ref remap, entity);
				EntityName entityName = m_NameStoreAccess.GetEntityName(entity);
				m_NameStoreAccess.SetEntityName(entity2, entityName);
			}
		}
		ulong x = IncNameChangeBitsVersion();
		ulong y = fromEntityComponentStore->IncNameChangeBitsVersion();
		ulong nameChangeBitsVersion = math.max(x, y);
		SetNameChangeBitsVersion(nameChangeBitsVersion);
		fromEntityComponentStore->SetNameChangeBitsVersion(nameChangeBitsVersion);
		m_NameStoreAccess.ResetEntitiesWithNamesSet();
	}

	public void IncrementGlobalSystemVersion(in SystemHandle handle = default(SystemHandle))
	{
		ChangeVersionUtility.IncrementGlobalSystemVersion(ref m_GlobalSystemVersion);
	}

	public void SetGlobalSystemVersion(uint value, in SystemHandle handle = default(SystemHandle))
	{
		m_GlobalSystemVersion = value;
	}

	private void ResizeUnmanagedArrays(long oldValue, long newValue)
	{
	}

	public Entity GetEntityByEntityIndex(int index)
	{
		return s_entityStore.Data.GetEntityByEntityIndex(index);
	}

	public unsafe static void Create(EntityComponentStore* entities, ulong worldSequenceNumber, int newCapacity = 1024)
	{
		PerChunkArray.Initialize();
		ChunkStore.Initialize();
		UnsafeUtility.MemClear(entities, sizeof(EntityComponentStore));
		entities->m_NameStoreAccess = new EntityNameStoreAccess(entities);
		entities->m_GlobalSystemVersion = 1u;
		entities->m_ComponentTypeOrderVersion = Memory.Unmanaged.Array.Allocate<int>(8192L, Allocator.Persistent);
		Memory.Array.Clear(entities->m_ComponentTypeOrderVersion, 8192L);
		entities->m_ArchetypeChunkAllocator = new BlockAllocator(AllocatorManager.Persistent, 16777216);
		entities->m_TypeLookup = default;
		entities->m_TypeLookup.Init(16);
		entities->m_WorldSequenceNumber = worldSequenceNumber;
		entities->m_NextChunkSequenceNumber = worldSequenceNumber << 32;
		entities->m_Archetypes = new UnsafePtrList<Archetype>(0, Allocator.Persistent);
		entities->ManagedChangesTracker = default;
		entities->ManagedChangesTracker.Init(entities);
		entities->m_SharedComponentVersion = 0;
		entities->m_ManagedComponentIndex = 1;
		entities->m_ManagedComponentIndexCapacity = 64;
		entities->m_ManagedComponentFreeIndex = new UnsafeAppendBuffer(1024, 16, Allocator.Persistent);
		entities->m_SharedComponentGlobalVersion = 1;
		entities->m_UnmanagedSharedComponentCount = 0;
		entities->m_UnmanagedSharedComponentTypes = new UnsafeList<TypeIndex>(64, Allocator.Persistent);
		entities->m_UnmanagedSharedComponentsByType = new UnsafeList<ComponentTypeList>(TypeManager.GetTypeCount() + 1, Allocator.Persistent, NativeArrayOptions.ClearMemory);
		entities->m_UnmanagedSharedComponentInfo = new UnsafeList<UnsafeList<SharedComponentInfo>>(TypeManager.GetTypeCount(), Allocator.Persistent, NativeArrayOptions.ClearMemory);
		entities->m_HashLookup = new UnsafeParallelMultiHashMap<ulong, int>(128, Allocator.Persistent);
		entities->m_LinkedGroupType = TypeManager.GetTypeIndex<LinkedEntityGroup>();
		entities->m_ChunkHeaderType = TypeManager.GetTypeIndex<ChunkHeader>();
		entities->m_PrefabType = TypeManager.GetTypeIndex<Prefab>();
		entities->m_OmitLinkedEntityGroupFromPrefabInstanceType = TypeManager.GetTypeIndex<OmitLinkedEntityGroupFromPrefabInstance>();
		entities->m_CleanupEntityType = TypeManager.GetTypeIndex<CleanupEntity>();
		entities->m_DisabledType = TypeManager.GetTypeIndex<Disabled>();
		entities->m_EntityType = TypeManager.GetTypeIndex<Entity>();
		entities->m_SystemInstanceType = TypeManager.GetTypeIndex<SystemInstance>();
		entities->m_ChunkHeaderComponentType = ComponentType.ReadWrite<ChunkHeader>();
		entities->m_EntityComponentType = ComponentType.ReadWrite<Entity>();
		entities->m_SimulateComponentType = ComponentType.ReadWrite<Simulate>();
		entities->InitializeTypeManagerPointers();
		entities->m_ChunkListChangesTracker = default;
		entities->m_ChunkListChangesTracker.Init();
		int fieldOffset = UnsafeUtility.GetFieldOffset(typeof(Chunk).GetField("Buffer"));
		Unity.Assertions.Assert.IsTrue(fieldOffset % 16 == 0, $"Chunk buffer must be {16} byte aligned (buffer offset at {fieldOffset})");
		Unity.Assertions.Assert.IsTrue(sizeof(Entity) == 8, $"Unity.Entities.Entity is expected to be 8 bytes in size (is {sizeof(Entity)}); if this changes, update Chunk explicit layout");
		Unity.Assertions.Assert.IsTrue(UnsafeUtility.SizeOf<BufferHeader>() % 16 == 0, $"BufferHeader total struct size must be a multiple of the max supported alignment ({16})");
	}

	internal unsafe void InitializeTypeManagerPointers()
	{
		m_TypeInfos = TypeManager.GetTypeInfoPointer();
		m_EntityOffsetInfos = TypeManager.GetEntityOffsetsPointer();
	}

	public unsafe ref readonly TypeManager.TypeInfo GetTypeInfo(TypeIndex typeIndex)
	{
		return ref m_TypeInfos[typeIndex.Index];
	}

	public unsafe TypeManager.EntityOffsetInfo* GetEntityOffsets(in TypeManager.TypeInfo typeInfo)
	{
		return m_EntityOffsetInfos + typeInfo.EntityOffsetStartIndex;
	}

	public unsafe TypeIndex ChunkComponentToNormalTypeIndex(TypeIndex typeIndex)
	{
		return m_TypeInfos[typeIndex.Index].TypeIndex;
	}

	public unsafe static void Destroy(EntityComponentStore* entityComponentStore)
	{
		entityComponentStore->Dispose();
	}

	private unsafe void Dispose()
	{
		m_NameStoreAccess.Dispose();
		if (m_ComponentTypeOrderVersion != null)
		{
			Memory.Unmanaged.Free(m_ComponentTypeOrderVersion, Allocator.Persistent);
			m_ComponentTypeOrderVersion = null;
		}
		for (int i = 0; i < m_Archetypes.Length; i++)
		{
			Archetype* ptr = m_Archetypes.Ptr[i];
			for (int j = 0; j != ptr->Chunks.Count; j++)
			{
				ChunkIndex chunk = ptr->Chunks[j];
				ChunkDataUtility.DeallocateBuffers(ptr, chunk);
				int count = chunk.Count;
				s_entityStore.Data.DeallocateEntities((Entity*)chunk.Buffer, count);
				s_chunkStore.Data.FreeContiguousChunks(ptr->Chunks[j], 1);
			}
			ptr->Chunks.Dispose();
			ptr->ChunksWithEmptySlots.Dispose();
			ptr->FreeChunksBySharedComponents.Dispose();
			ptr->MatchingQueryData.Dispose();
		}
		m_Archetypes.Dispose();
		m_TypeLookup.Dispose();
		m_ArchetypeChunkAllocator.Dispose();
		ManagedChangesTracker.Dispose();
		m_ManagedComponentFreeIndex.Dispose();
		AspectTypeInfoManager.Dispose();
		for (int k = 0; k < m_UnmanagedSharedComponentsByType.Length; k++)
		{
			if (!m_UnmanagedSharedComponentsByType[k].IsCreated)
			{
				continue;
			}
			TypeManager.TypeInfo typeInfo = TypeManager.GetTypeInfoPointer()[k];
			TypeIndex typeIndex = typeInfo.TypeIndex;
			if (typeIndex.IsRefCounted)
			{
				int typeSize = typeInfo.TypeSize;
				UnsafeList<SharedComponentInfo> unsafeList = m_UnmanagedSharedComponentInfo.Ptr[k];
				if (unsafeList.IsCreated)
				{
					for (int l = 1; l < math.min(m_UnmanagedSharedComponentsByType[k].Length, unsafeList.Length); l++)
					{
						if (unsafeList[l].RefCount > 0)
						{
							TypeManager.CallIRefCounted_Release(typeIndex, (IntPtr)m_UnmanagedSharedComponentsByType[k].Ptr + l * typeSize);
						}
					}
				}
			}
			m_UnmanagedSharedComponentsByType[k].Dispose();
		}
		m_UnmanagedSharedComponentsByType.Dispose();
		for (int m = 0; m < m_UnmanagedSharedComponentInfo.Capacity; m++)
		{
			if (m_UnmanagedSharedComponentInfo.Ptr[m].IsCreated)
			{
				m_UnmanagedSharedComponentInfo.Ptr[m].Dispose();
			}
		}
		m_UnmanagedSharedComponentInfo.Dispose();
		m_UnmanagedSharedComponentTypes.Dispose();
		m_HashLookup.Dispose();
	}

	private unsafe void ResetSharedComponentData()
	{
		for (int i = 0; i < m_UnmanagedSharedComponentsByType.Length; i++)
		{
			if (m_UnmanagedSharedComponentsByType[i].IsCreated)
			{
				m_UnmanagedSharedComponentsByType[i].Clear();
				m_UnmanagedSharedComponentsByType.Ptr[i].Length = 1;
			}
		}
		for (int j = 0; j < m_UnmanagedSharedComponentInfo.Capacity; j++)
		{
			if (m_UnmanagedSharedComponentInfo.Ptr[j].IsCreated)
			{
				m_UnmanagedSharedComponentInfo.Ptr[j].Clear();
				UnsafeList<SharedComponentInfo>* num = m_UnmanagedSharedComponentInfo.Ptr + j;
				SharedComponentInfo value = new SharedComponentInfo
				{
					RefCount = 1,
					ComponentType = -1,
					Version = 1,
					HashCode = 0
				};
				num->Add(in value);
			}
		}
		m_HashLookup.Clear();
	}

	public unsafe void FreeAllEntities()
	{
		UnsafePtrList<Archetype> archetypes = m_Archetypes;
		int i = 0;
		for (int length = archetypes.Length; i < length; i++)
		{
			Archetype* ptr = m_Archetypes.Ptr[i];
			int j = 0;
			for (int count = ptr->Chunks.Count; j < count; j++)
			{
				ChunkIndex chunkIndex = ptr->Chunks[j];
				Entity* buffer = (Entity*)chunkIndex.Buffer;
				int count2 = chunkIndex.Count;
				s_entityStore.Data.DeallocateEntities(buffer, count2);
			}
		}
		m_NameStoreAccess.ResetEntitiesWithNamesSet();
	}

	public unsafe void FreeEntities(ChunkIndex chunk)
	{
		int count = chunk.Count;
		Entity* buffer = (Entity*)chunk.Buffer;
		s_entityStore.Data.DeallocateEntities(buffer, count);
		m_NameStoreAccess.RemoveEntityWithNameSet(buffer, count);
	}

	public string GetName(Entity entity)
	{
		if (!Exists(entity))
		{
			return "ENTITY_NOT_FOUND";
		}
		return m_NameStoreAccess.GetEntityName(entity).ToString();
	}

	[GenerateTestsForBurstCompatibility]
	public void GetName(Entity entity, out FixedString64Bytes name)
	{
		if (!Exists(entity))
		{
			name = "ENTITY_NOT_FOUND";
			return;
		}
		name = default;
		m_NameStoreAccess.GetEntityName(entity).ToFixedString(ref name);
	}

	public unsafe static string Debugger_GetName(EntityComponentStore* store, Entity entity)
	{
		if (store != null && store->m_NameStoreAccess.IsCreated && !Debugger_Exists(store, entity))
		{
			return "ENTITY_NOT_FOUND";
		}
		return store->m_NameStoreAccess.GetEntityName(entity).ToString();
	}

	[GenerateTestsForBurstCompatibility]
	public void SetName(Entity entity, in FixedString64Bytes name)
	{
		if (Exists(entity))
		{
			EntityName name2 = default;
			name2.SetFixedString(in name);
			m_NameStoreAccess.SetEntityName(entity, name2);
			m_NameStoreAccess.AddEntityWithNameSet(entity);
		}
	}

	public void CopyName(Entity dstEntity, Entity srcEntity)
	{
		EntityName entityName = m_NameStoreAccess.GetEntityName(srcEntity);
		m_NameStoreAccess.SetEntityName(dstEntity, entityName);
	}

	public unsafe Archetype* GetArchetype(Entity entity)
	{
		ChunkIndex chunk = GetChunk(entity);
		Unity.Assertions.Assert.IsTrue(chunk != ChunkIndex.Null);
		return GetArchetype(chunk);
	}

	public ChunkIndex GetChunk(Entity entity)
	{
		return s_entityStore.Data.GetEntityInChunk(entity).Chunk;
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public unsafe Archetype* GetArchetype(ChunkIndex chunk)
	{
		return PerChunkArray.ChunkData[(int)chunk].Archetype;
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	public unsafe void SetArchetype(ChunkIndex chunk, Archetype* archetype)
	{
		PerChunkArray.ChunkData[(int)chunk].Archetype = archetype;
	}

	public void SetEntityInChunk(Entity entity, EntityInChunk entityInChunk)
	{
		s_entityStore.Data.SetEntityInChunk(entity, entityInChunk);
	}

	public EntityInChunk GetEntityInChunk(Entity entity)
	{
		return s_entityStore.Data.GetEntityInChunk(entity);
	}

	public unsafe void IncrementComponentTypeOrderVersion(Archetype* archetype)
	{
		for (int i = 0; i < archetype->TypesCount; i++)
		{
			TypeIndex typeIndex = archetype->Types[i].TypeIndex;
			m_ComponentTypeOrderVersion[typeIndex.Index]++;
		}
	}

	public unsafe bool Exists(Entity entity)
	{
		if (!s_entityStore.Data.Exists(entity))
		{
			return false;
		}
		ChunkIndex chunk = GetChunk(entity);
		return GetArchetype(chunk)->EntityComponentStore->WorldSequenceNumber == WorldSequenceNumber;
	}

	public unsafe static bool Debugger_Exists(EntityComponentStore* store, Entity entity)
	{
		return s_entityStore.Data.Exists(entity);
	}

	public unsafe int GetComponentTypeOrderVersion(TypeIndex typeIndex)
	{
		return m_ComponentTypeOrderVersion[typeIndex.Index];
	}

	public unsafe bool HasComponent(Entity entity, TypeIndex type, out bool entityExists)
	{
		entityExists = Exists(entity);
		if (Hint.Unlikely(!entityExists))
		{
			return false;
		}
		return ChunkDataUtility.GetIndexInTypeArray(GetArchetype(entity), type) != -1;
	}

	internal unsafe bool HasComponent(Entity entity, TypeIndex type, ref LookupCache cache, out bool entityExists)
	{
		entityExists = Exists(entity);
		if (Hint.Unlikely(!entityExists))
		{
			return false;
		}
		Archetype* archetype = GetArchetype(entity);
		if (Hint.Unlikely(archetype != cache.Archetype))
		{
			cache.Update(archetype, type);
		}
		return cache.IndexInArchetype != -1;
	}

	public unsafe bool HasComponent(Entity entity, ComponentType type, out bool entityExists)
	{
		entityExists = Exists(entity);
		if (Hint.Unlikely(!entityExists))
		{
			return false;
		}
		return ChunkDataUtility.GetIndexInTypeArray(GetArchetype(entity), type.TypeIndex) != -1;
	}

	public unsafe void SetChunkComponent<T>(NativeArray<ArchetypeChunk> chunks, T componentData) where T : unmanaged, IComponentData
	{
		TypeIndex componentTypeIndex = TypeManager.MakeChunkComponentTypeIndex(ComponentType.ReadWrite<T>().TypeIndex);
		ArchetypeChunk* unsafePtr = (ArchetypeChunk*)chunks.GetUnsafePtr();
		SetChunkComponent(unsafePtr, chunks.Length, &componentData, componentTypeIndex);
	}

	public unsafe void SetChunkComponent(ArchetypeChunk* chunks, int chunkCount, void* componentData, TypeIndex componentTypeIndex)
	{
		if (!ComponentType.FromTypeIndex(componentTypeIndex).IsZeroSized)
		{
			for (int i = 0; i < chunkCount; i++)
			{
				ChunkIndex chunk = chunks[i].m_Chunk;
				byte* componentDataWithTypeRW = GetComponentDataWithTypeRW(chunk.MetaChunkEntity, componentTypeIndex, m_GlobalSystemVersion);
				int sizeInChunk = GetTypeInfo(componentTypeIndex).SizeInChunk;
				UnsafeUtility.MemCpy(componentDataWithTypeRW, componentData, sizeInChunk);
			}
		}
	}

	public void GetChunk(Entity entity, out ChunkIndex chunk, out int chunkIndex)
	{
		EntityInChunk entityInChunk = GetEntityInChunk(entity);
		chunk = entityInChunk.Chunk;
		chunkIndex = entityInChunk.IndexInChunk;
	}

	public unsafe byte* GetComponentDataWithTypeRO(Entity entity, TypeIndex typeIndex)
	{
		EntityInChunk entityInChunk = GetEntityInChunk(entity);
		ChunkIndex chunk = entityInChunk.Chunk;
		int indexInChunk = entityInChunk.IndexInChunk;
		Archetype* archetype = GetArchetype(chunk);
		return ChunkDataUtility.GetComponentDataWithTypeRO(chunk, archetype, indexInChunk, typeIndex);
	}

	public unsafe static byte* Debugger_GetComponentDataWithTypeRO(EntityComponentStore* store, Entity entity, TypeIndex typeIndex)
	{
		if (!Debugger_Exists(store, entity))
		{
			return null;
		}
		EntityInChunk entityInChunk = store->GetEntityInChunk(entity);
		ChunkIndex chunk = entityInChunk.Chunk;
		int indexInChunk = entityInChunk.IndexInChunk;
		Archetype* archetype = store->GetArchetype(chunk);
		int indexInTypeArray = ChunkDataUtility.GetIndexInTypeArray(archetype, typeIndex);
		if (indexInTypeArray == -1)
		{
			return null;
		}
		return ChunkDataUtility.GetComponentDataRO(chunk, archetype, indexInChunk, indexInTypeArray);
	}

	public unsafe byte* GetComponentDataWithTypeRW(Entity entity, TypeIndex typeIndex, uint globalVersion)
	{
		EntityInChunk entityInChunk = GetEntityInChunk(entity);
		ChunkIndex chunk = entityInChunk.Chunk;
		int indexInChunk = entityInChunk.IndexInChunk;
		Archetype* archetype = GetArchetype(chunk);
		return ChunkDataUtility.GetComponentDataWithTypeRW(chunk, archetype, indexInChunk, typeIndex, globalVersion);
	}

	public unsafe byte* GetComponentDataWithTypeRO(Entity entity, TypeIndex typeIndex, ref LookupCache cache)
	{
		EntityInChunk entityInChunk = GetEntityInChunk(entity);
		return ChunkDataUtility.GetComponentDataWithTypeRO(entityInChunk.Chunk, GetArchetype(entityInChunk.Chunk), entityInChunk.IndexInChunk, typeIndex, ref cache);
	}

	public unsafe byte* GetOptionalComponentDataWithTypeRO(Entity entity, TypeIndex typeIndex, ref LookupCache cache)
	{
		EntityInChunk entityInChunk = GetEntityInChunk(entity);
		return ChunkDataUtility.GetOptionalComponentDataWithTypeRO(entityInChunk.Chunk, GetArchetype(entityInChunk.Chunk), entityInChunk.IndexInChunk, typeIndex, ref cache);
	}

	public unsafe byte* GetComponentDataWithTypeRW(Entity entity, TypeIndex typeIndex, uint globalVersion, ref LookupCache cache)
	{
		EntityInChunk entityInChunk = GetEntityInChunk(entity);
		return ChunkDataUtility.GetComponentDataWithTypeRW(entityInChunk.Chunk, GetArchetype(entityInChunk.Chunk), entityInChunk.IndexInChunk, typeIndex, globalVersion, ref cache);
	}

	public unsafe byte* GetOptionalComponentDataWithTypeRW(Entity entity, TypeIndex typeIndex, uint globalVersion, ref LookupCache cache)
	{
		EntityInChunk entityInChunk = GetEntityInChunk(entity);
		return ChunkDataUtility.GetOptionalComponentDataWithTypeRW(entityInChunk.Chunk, GetArchetype(entityInChunk.Chunk), entityInChunk.IndexInChunk, typeIndex, globalVersion, ref cache);
	}

	public unsafe void* GetComponentDataRawRW(Entity entity, TypeIndex typeIndex)
	{
		return GetComponentDataRawRWEntityHasComponent(entity, typeIndex);
	}

	internal unsafe void* GetComponentDataRawRWEntityHasComponent(Entity entity, TypeIndex typeIndex)
	{
		return GetComponentDataWithTypeRW(entity, typeIndex, GlobalSystemVersion);
	}

	public unsafe void SetComponentDataRawEntityHasComponent(Entity entity, TypeIndex typeIndex, void* data, int size)
	{
		UnsafeUtility.MemCpy(GetComponentDataWithTypeRW(entity, typeIndex, GlobalSystemVersion), data, size);
	}

	public unsafe void SetBufferRaw(Entity entity, TypeIndex componentTypeIndex, BufferHeader* tempBuffer, int sizeInChunk)
	{
		byte* componentDataWithTypeRW = GetComponentDataWithTypeRW(entity, componentTypeIndex, GlobalSystemVersion);
		BufferHeader.Destroy((BufferHeader*)componentDataWithTypeRW);
		UnsafeUtility.MemCpy(componentDataWithTypeRW, tempBuffer, sizeInChunk);
	}

	[GenerateTestsForBurstCompatibility]
	public unsafe int GetSharedComponentDataIndex(Entity entity, TypeIndex typeIndex)
	{
		Archetype* archetype = GetArchetype(entity);
		int indexInTypeArray = ChunkDataUtility.GetIndexInTypeArray(archetype, typeIndex);
		ChunkIndex chunk = GetChunk(entity);
		SharedComponentValues sharedComponentValues = archetype->Chunks.GetSharedComponentValues(chunk.ListIndex);
		int i = indexInTypeArray - archetype->FirstSharedComponent;
		return sharedComponentValues[i];
	}

	public unsafe int Debugger_GetSharedComponentDataIndex(Entity entity, TypeIndex typeIndex)
	{
		Archetype* archetype = GetArchetype(entity);
		int indexInTypeArray = ChunkDataUtility.GetIndexInTypeArray(archetype, typeIndex);
		if (indexInTypeArray == -1)
		{
			return -1;
		}
		ChunkIndex chunk = GetChunk(entity);
		SharedComponentValues sharedComponentValues = archetype->Chunks.GetSharedComponentValues(chunk.ListIndex);
		int i = indexInTypeArray - archetype->FirstSharedComponent;
		return sharedComponentValues[i];
	}

	public unsafe void AddExistingEntitiesInChunk(ChunkIndex chunk)
	{
		Archetype* archetype = GetArchetype(chunk);
		int i = 0;
		for (int count = chunk.Count; i < count; i++)
		{
			Entity* componentDataRO = (Entity*)ChunkDataUtility.GetComponentDataRO(chunk, archetype, i, 0);
			s_entityStore.Data.SetEntityInChunk(*componentDataRO, new EntityInChunk
			{
				Chunk = chunk,
				IndexInChunk = i
			});
			s_entityStore.Data.SetEntityVersion(*componentDataRO, componentDataRO->Version);
		}
	}

	public unsafe void AllocateEntitiesForRemapping(EntityComponentStore* srcEntityComponentStore, ref NativeArray<EntityRemapUtility.EntityRemapInfo> entityRemapping)
	{
		UnsafePtrList<Archetype> archetypes = srcEntityComponentStore->m_Archetypes;
		int i = 0;
		for (int length = archetypes.Length; i < length; i++)
		{
			Archetype* ptr = archetypes.Ptr[i];
			int j = 0;
			for (int count = ptr->Chunks.Count; j < count; j++)
			{
				ChunkIndex chunk = ptr->Chunks[j];
				AllocateEntitiesForRemapping(chunk, srcEntityComponentStore, ref entityRemapping);
			}
		}
	}

	public unsafe void AllocateEntitiesForRemapping(ChunkIndex chunk, EntityComponentStore* srcComponentStore, ref NativeArray<EntityRemapUtility.EntityRemapInfo> entityRemapping)
	{
		Entity* buffer = (Entity*)chunk.Buffer;
		int count = chunk.Count;
		Entity* ptr = stackalloc Entity[128];
		s_entityStore.Data.AllocateEntities(ptr, count, ChunkIndex.Null, 0);
		for (int i = 0; i < count; i++)
		{
			EntityRemapUtility.AddEntityRemapping(ref entityRemapping, buffer[i], ptr[i]);
			CopyName(ptr[i], buffer[i]);
		}
	}

	public unsafe void RemapChunk(ChunkIndex chunk, int baseIndex, int count, ref NativeArray<EntityRemapUtility.EntityRemapInfo> entityRemapping)
	{
		Entity* ptr = (Entity*)chunk.Buffer + baseIndex;
		for (int i = 0; i != count; i++)
		{
			Entity* ptr2 = ptr + i;
			SetEntityInChunk(*ptr2 = EntityRemapUtility.RemapEntity(ref entityRemapping, *ptr2), new EntityInChunk
			{
				Chunk = chunk,
				IndexInChunk = i
			});
		}
		if (chunk.MetaChunkEntity != Entity.Null)
		{
			chunk.MetaChunkEntity = EntityRemapUtility.RemapEntity(ref entityRemapping, chunk.MetaChunkEntity);
		}
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	internal static bool IsUnmanagedSharedComponentIndex(int sharedComponentIndex)
	{
		if (sharedComponentIndex != 0)
		{
			return (sharedComponentIndex & int.MinValue) != 0;
		}
		return true;
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	internal unsafe static TypeIndex GetComponentTypeFromSharedComponentIndex(int sharedComponentIndex)
	{
		return TypeManager.GetTypeInfoPointer()[(sharedComponentIndex & 0x7FFFFFFF) >> 16].TypeIndex;
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	internal static int GetElementIndexFromSharedComponentIndex(int sharedComponentIndex)
	{
		return sharedComponentIndex & 0xFFFF;
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	internal static int BuildUnmanagedSharedComponentDataIndex(int elementIndex, TypeIndex typeIndex)
	{
		return int.MinValue | (typeIndex.Value << 16) | elementIndex;
	}

	private unsafe ComponentTypeList* CheckGetSharedComponentList(TypeIndex typeIndex)
	{
		int index = typeIndex.Index;
		ComponentTypeList* ptr = m_UnmanagedSharedComponentsByType.Ptr + index;
		if (!ptr->IsCreated)
		{
			int typeSize = TypeManager.GetTypeInfo(typeIndex).TypeSize;
			*ptr = new ComponentTypeList(typeSize, 16, 16 * typeSize, Allocator.Persistent, NativeArrayOptions.ClearMemory);
			ptr->Length = 1;
			m_UnmanagedSharedComponentsByType.Length = Math.Max(m_UnmanagedSharedComponentsByType.Length, index + 1);
		}
		return ptr;
	}

	private unsafe UnsafeList<SharedComponentInfo>* CheckGetSharedComponentInfo(TypeIndex typeIndex)
	{
		int index = typeIndex.Index;
		UnsafeList<SharedComponentInfo>* ptr = m_UnmanagedSharedComponentInfo.Ptr + index;
		if (!ptr->IsCreated)
		{
			*ptr = new UnsafeList<SharedComponentInfo>(16, Allocator.Persistent, NativeArrayOptions.ClearMemory);
			SharedComponentInfo value = new SharedComponentInfo
			{
				RefCount = 1,
				HashCode = 0,
				Version = 1,
				ComponentType = -1
			};
			ptr->Add(in value);
			m_UnmanagedSharedComponentTypes.Add(in typeIndex);
		}
		return ptr;
	}

	private unsafe int FindSharedComponentIndex(TypeIndex typeIndex, int hashCode, void* newData, void* defaultValue, out UnsafeList<SharedComponentInfo>* infos, out ComponentTypeList* components)
	{
		components = CheckGetSharedComponentList(typeIndex);
		infos = CheckGetSharedComponentInfo(typeIndex);
		if (newData == null)
		{
			return 0;
		}
		if (defaultValue != null && TypeManager.SharedComponentEquals(newData, defaultValue, typeIndex))
		{
			return 0;
		}
		return FindNonDefaultSharedComponentIndex(typeIndex, hashCode, newData, out infos, out components);
	}

	private unsafe int FindNonDefaultSharedComponentIndex(TypeIndex typeIndex, int hashCode, void* newData, out UnsafeList<SharedComponentInfo>* infos, out ComponentTypeList* components)
	{
		if (hashCode == 0)
		{
			hashCode = TypeManager.SharedComponentGetHashCode(newData, typeIndex);
		}
		if (!m_HashLookup.TryGetFirstValue(GetSharedComponentHashKey(typeIndex, hashCode), out var item, out var it))
		{
			infos = null;
			components = null;
			return -1;
		}
		int typeSize = TypeManager.GetTypeInfo(typeIndex).TypeSize;
		components = CheckGetSharedComponentList(typeIndex);
		infos = CheckGetSharedComponentInfo(typeIndex);
		do
		{
			if (TypeManager.SharedComponentEquals((byte*)components->Ptr + item * typeSize, newData, typeIndex))
			{
				return item;
			}
		}
		while (m_HashLookup.TryGetNextValue(out item, ref it));
		return -1;
	}

	internal unsafe static ulong GetSharedComponentHashKey(TypeIndex typeIndex, int hashCode)
	{
		return ((ulong)(uint)(int)TypeManager.GetTypeInfoPointer()[typeIndex.Index].TypeIndex << 32) | (uint)hashCode;
	}

	internal unsafe int CloneSharedComponentNonDefault(EntityComponentStore* srcComponentStore, int sharedComponentIndex)
	{
		TypeIndex componentTypeFromSharedComponentIndex = GetComponentTypeFromSharedComponentIndex(sharedComponentIndex);
		void* sharedComponentDataAddr_Unmanaged = srcComponentStore->GetSharedComponentDataAddr_Unmanaged(sharedComponentIndex, componentTypeFromSharedComponentIndex);
		int elementIndexFromSharedComponentIndex = GetElementIndexFromSharedComponentIndex(sharedComponentIndex);
		UnsafeList<SharedComponentInfo>* ptr = srcComponentStore->CheckGetSharedComponentInfo(componentTypeFromSharedComponentIndex);
		return InsertSharedComponent_Unmanaged(componentTypeFromSharedComponentIndex, ptr->Ptr[elementIndexFromSharedComponentIndex].HashCode, sharedComponentDataAddr_Unmanaged, null);
	}

	internal unsafe int InsertSharedComponent_Unmanaged(TypeIndex typeIndex, int hashCode, void* data, void* defaultValue)
	{
		if (hashCode == 0)
		{
			hashCode = ((data != null) ? TypeManager.SharedComponentGetHashCode(data, typeIndex) : 0);
		}
		int num = FindSharedComponentIndex(typeIndex, hashCode, data, defaultValue, out var infos, out var components);
		switch (num)
		{
		case 0:
			return 0;
		default:
			infos->Ptr[num].RefCount++;
			return BuildUnmanagedSharedComponentDataIndex(num, typeIndex);
		case -1:
		{
			if (typeIndex.IsRefCounted)
			{
				TypeManager.CallIRefCounted_Retain(typeIndex, (IntPtr)data);
			}
			int typeSize = TypeManager.GetTypeInfo(typeIndex).TypeSize;
			infos = CheckGetSharedComponentInfo(typeIndex);
			components = CheckGetSharedComponentList(typeIndex);
			Unity.Assertions.Assert.AreEqual(components->Length, infos->Length);
			SharedComponentInfo value = new SharedComponentInfo
			{
				RefCount = 1,
				HashCode = hashCode,
				ComponentType = typeIndex.Value,
				Version = m_SharedComponentVersion++
			};
			num = infos->Ptr->ComponentType;
			if (num != -1)
			{
				infos->Ptr->ComponentType = infos->Ptr[num].ComponentType;
				UnsafeUtility.MemCpy((byte*)components->Ptr + num * typeSize, data, typeSize);
				UnsafeUtility.WriteArrayElement(infos->Ptr, num, value);
			}
			else
			{
				num = components->Length;
				components->Resize(typeSize, 16, components->Length + 1);
				UnsafeUtility.MemCpy((byte*)components->Ptr + num * typeSize, data, typeSize);
				infos->Add(in value);
			}
			m_HashLookup.Add(GetSharedComponentHashKey(typeIndex, hashCode), num);
			m_UnmanagedSharedComponentCount++;
			return BuildUnmanagedSharedComponentDataIndex(num, typeIndex);
		}
		}
	}

	[GenerateTestsForBurstCompatibility]
	internal int GetUnmanagedSharedComponentCount()
	{
		return m_UnmanagedSharedComponentCount;
	}

	[GenerateTestsForBurstCompatibility]
	internal unsafe void AddSharedComponentReference_Unmanaged(int sharedComponentIndex, int numRefs = 1)
	{
		int elementIndexFromSharedComponentIndex = GetElementIndexFromSharedComponentIndex(sharedComponentIndex);
		if (elementIndexFromSharedComponentIndex != 0)
		{
			TypeIndex componentTypeFromSharedComponentIndex = GetComponentTypeFromSharedComponentIndex(sharedComponentIndex);
			CheckGetSharedComponentInfo(componentTypeFromSharedComponentIndex)->Ptr[elementIndexFromSharedComponentIndex].RefCount += numRefs;
		}
	}

	internal unsafe void GetSharedComponentData_Unmanaged(int sharedComponentIndex, TypeIndex typeIndex, void* destinationAddress)
	{
		int typeSize = TypeManager.GetTypeInfo(typeIndex).TypeSize;
		void* sharedComponentDataAddr_Unmanaged = GetSharedComponentDataAddr_Unmanaged(sharedComponentIndex, typeIndex);
		UnsafeUtility.MemCpy(destinationAddress, sharedComponentDataAddr_Unmanaged, typeSize);
	}

	internal unsafe void* GetSharedComponentDataAddr_Unmanaged(int sharedComponentIndex, TypeIndex typeIndex)
	{
		if (typeIndex == TypeIndex.Null)
		{
			return null;
		}
		int elementIndexFromSharedComponentIndex = GetElementIndexFromSharedComponentIndex(sharedComponentIndex);
		int index = typeIndex.Index;
		if (sharedComponentIndex == 0)
		{
			CheckGetSharedComponentList(typeIndex);
		}
		ComponentTypeList* ptr = m_UnmanagedSharedComponentsByType.Ptr + index;
		UnityEngine.Assertions.Assert.IsTrue(ptr->IsCreated && ptr->Length > 0);
		int typeSize = TypeManager.GetTypeInfo(typeIndex).TypeSize;
		return (byte*)ptr->Ptr + elementIndexFromSharedComponentIndex * typeSize;
	}

	internal unsafe object GetSharedComponentDataObject_Unmanaged(int sharedComponentIndex, TypeIndex typeIndex)
	{
		void* sharedComponentDataAddr_Unmanaged = GetSharedComponentDataAddr_Unmanaged(sharedComponentIndex, typeIndex);
		return TypeManager.ConstructComponentFromBuffer(typeIndex, sharedComponentDataAddr_Unmanaged);
	}

	[GenerateTestsForBurstCompatibility]
	internal unsafe void RemoveSharedComponentReference_Unmanaged(int sharedComponentIndex, int numRefs = 1)
	{
		TypeIndex componentTypeFromSharedComponentIndex = GetComponentTypeFromSharedComponentIndex(sharedComponentIndex);
		int elementIndexFromSharedComponentIndex = GetElementIndexFromSharedComponentIndex(sharedComponentIndex);
		if (elementIndexFromSharedComponentIndex == 0)
		{
			return;
		}
		UnsafeList<SharedComponentInfo>* ptr = CheckGetSharedComponentInfo(componentTypeFromSharedComponentIndex);
		int num = (ptr->Ptr[elementIndexFromSharedComponentIndex].RefCount -= numRefs);
		Unity.Assertions.Assert.IsTrue(num >= 0);
		if (num != 0)
		{
			return;
		}
		if (componentTypeFromSharedComponentIndex.IsRefCounted)
		{
			void* sharedComponentDataAddr_Unmanaged = GetSharedComponentDataAddr_Unmanaged(sharedComponentIndex, componentTypeFromSharedComponentIndex);
			TypeManager.CallIRefCounted_Release(componentTypeFromSharedComponentIndex, (IntPtr)sharedComponentDataAddr_Unmanaged);
		}
		IncrementSharedComponentVersion_Unmanaged(0);
		int hashCode = ptr->Ptr[elementIndexFromSharedComponentIndex].HashCode;
		ptr->Ptr[elementIndexFromSharedComponentIndex].ComponentType = ptr->Ptr->ComponentType;
		ptr->Ptr->ComponentType = elementIndexFromSharedComponentIndex;
		if (!m_HashLookup.TryGetFirstValue(GetSharedComponentHashKey(componentTypeFromSharedComponentIndex, hashCode), out var item, out var it))
		{
			return;
		}
		do
		{
			if (item == elementIndexFromSharedComponentIndex)
			{
				m_HashLookup.Remove(it);
				m_UnmanagedSharedComponentCount--;
				break;
			}
		}
		while (m_HashLookup.TryGetNextValue(out item, ref it));
	}

	[GenerateTestsForBurstCompatibility]
	internal unsafe void IncrementSharedComponentVersion_Unmanaged(int sharedComponentIndex)
	{
		int num = ++m_SharedComponentVersion;
		if (sharedComponentIndex == 0)
		{
			m_SharedComponentGlobalVersion = num;
			return;
		}
		TypeIndex componentTypeFromSharedComponentIndex = GetComponentTypeFromSharedComponentIndex(sharedComponentIndex);
		int elementIndexFromSharedComponentIndex = GetElementIndexFromSharedComponentIndex(sharedComponentIndex);
		CheckGetSharedComponentInfo(componentTypeFromSharedComponentIndex)->Ptr[elementIndexFromSharedComponentIndex].Version = num;
	}

	internal unsafe int GetSharedComponentVersion_Unmanaged(TypeIndex typeIndex, void* sharedData, void* defaultData)
	{
		int num = FindSharedComponentIndex(typeIndex, 0, sharedData, defaultData, out var infos, out var _);
		if (num <= 0)
		{
			return m_SharedComponentGlobalVersion;
		}
		return infos->Ptr[num].Version;
	}

	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(BurstCompatibleSharedComponentData) })]
	internal unsafe void GetAllUniqueSharedComponents_Unmanaged<T>(out UnsafeList<T> sharedComponentValues, AllocatorManager.AllocatorHandle allocator) where T : unmanaged, ISharedComponentData
	{
		TypeIndex typeIndex = TypeManager.GetTypeIndex<T>();
		T value = default;
		ComponentTypeList* ptr = CheckGetSharedComponentList(typeIndex);
		UnsafeList<SharedComponentInfo>* ptr2 = CheckGetSharedComponentInfo(typeIndex);
		int typeSize = TypeManager.GetTypeInfo<T>().TypeSize;
		sharedComponentValues = new UnsafeList<T>(ptr->Length, allocator);
		sharedComponentValues.Add(in value);
		int i = 1;
		int num = 1;
		for (; i < ptr2->Length; i++)
		{
			if (ptr2->Ptr[i].RefCount > 0)
			{
				UnsafeUtility.MemCpy((byte*)sharedComponentValues.Ptr + num * typeSize, (byte*)ptr->Ptr + i * typeSize, typeSize);
				sharedComponentValues.Length++;
				num++;
			}
		}
	}

	[GenerateTestsForBurstCompatibility]
	internal unsafe void GetAllUniqueSharedComponents_Unmanaged(TypeIndex typeIndex, void* defaultValue, out ComponentTypeList sharedComponentValues, out UnsafeList<int> sharedComponentIndices, AllocatorManager.AllocatorHandle allocator)
	{
		ComponentTypeList* ptr = CheckGetSharedComponentList(typeIndex);
		UnsafeList<SharedComponentInfo>* ptr2 = CheckGetSharedComponentInfo(typeIndex);
		int typeSize = TypeManager.GetTypeInfo(typeIndex).TypeSize;
		sharedComponentValues = new ComponentTypeList(typeSize, 16, ptr->Length * typeSize, allocator);
		sharedComponentIndices = new UnsafeList<int>(ptr->Length, allocator);
		UnsafeUtility.MemCpy(sharedComponentValues.Ptr, defaultValue, typeSize);
		sharedComponentValues.Length++;
		sharedComponentIndices.Add(0);
		int i = 1;
		int num = 1;
		for (; i < ptr2->Length; i++)
		{
			if (ptr2->Ptr[i].RefCount > 0)
			{
				UnsafeUtility.MemCpy((byte*)sharedComponentValues.Ptr + num * typeSize, (byte*)ptr->Ptr + i * typeSize, typeSize);
				sharedComponentValues.Length++;
				sharedComponentIndices.Add(BuildUnmanagedSharedComponentDataIndex(i, typeIndex));
				num++;
			}
		}
	}

	internal unsafe void MoveAllSharedComponents_Unmanaged(EntityComponentStore* srcEntityComponentStore, ref NativeParallelHashMap<int, int> result)
	{
		int length = srcEntityComponentStore->m_UnmanagedSharedComponentTypes.Length;
		for (int i = 0; i < length; i++)
		{
			TypeIndex typeIndex = srcEntityComponentStore->m_UnmanagedSharedComponentTypes[i];
			int typeSize = TypeManager.GetTypeInfo(typeIndex).TypeSize;
			ComponentTypeList* ptr = srcEntityComponentStore->CheckGetSharedComponentList(typeIndex);
			UnsafeList<SharedComponentInfo>* ptr2 = srcEntityComponentStore->CheckGetSharedComponentInfo(typeIndex);
			for (int j = 1; j < ptr->Length; j++)
			{
				int num = InsertSharedComponent_Unmanaged(new TypeIndex
				{
					Value = typeIndex.Index
				}, ptr2->Ptr[j].HashCode, (byte*)ptr->Ptr + j * typeSize, null);
				AddSharedComponentReference_Unmanaged(num, ptr2->Ptr[j].RefCount - 1);
				IncrementSharedComponentVersion_Unmanaged(num);
				result.Add(BuildUnmanagedSharedComponentDataIndex(j, typeIndex), num);
			}
		}
		srcEntityComponentStore->ResetSharedComponentData();
	}

	public unsafe bool AllSharedComponentReferencesAreFromChunks(UnsafeParallelHashMap<int, int> refCountMap)
	{
		int length = m_UnmanagedSharedComponentTypes.Length;
		for (int i = 0; i < length; i++)
		{
			TypeIndex typeIndex = m_UnmanagedSharedComponentTypes[i];
			UnsafeList<SharedComponentInfo>* ptr = CheckGetSharedComponentInfo(typeIndex);
			for (int j = 1; j < ptr->Length; j++)
			{
				int key = BuildUnmanagedSharedComponentDataIndex(j, typeIndex);
				if (refCountMap.TryGetValue(key, out var item) && ptr->Ptr[j].RefCount != item)
				{
					return false;
				}
			}
		}
		return true;
	}

	[BurstCompile]
	private unsafe static void EntityBatchFromEntityChunkDataShared(EntityComponentStore* ecs, in EntityInChunk* chunkData, int chunkCount, EntityBatchInChunk* entityBatchList, int* currentbatchIndex, int nSharedComponentsToAdd, int* foundError)
	{
		EntityBatchFromEntityChunkDataShared_0000075A$BurstDirectCall.Invoke(ecs, in chunkData, chunkCount, entityBatchList, currentbatchIndex, nSharedComponentsToAdd, foundError);
	}

	[BurstCompile]
	private unsafe static void SortEntityInChunk(EntityInChunk* entityInChunks, int count)
	{
		SortEntityInChunk_0000075B$BurstDirectCall.Invoke(entityInChunks, count);
	}

	[BurstCompile]
	private unsafe static void GatherEntityInChunkForEntities(Entity* Entities, EntityInChunk* EntityChunkData, int numEntities)
	{
		GatherEntityInChunkForEntities_0000075C$BurstDirectCall.Invoke(Entities, EntityChunkData, numEntities);
	}

	internal unsafe bool CreateEntityBatchList(NativeArray<Entity> entities, int nSharedComponentsToAdd, AllocatorManager.AllocatorHandle allocator, out NativeList<EntityBatchInChunk> entityBatchList)
	{
		if (entities.Length == 0)
		{
			entityBatchList = default;
			return false;
		}
		NativeArray<EntityInChunk> nativeArray = new NativeArray<EntityInChunk>(entities.Length, Allocator.TempJob, NativeArrayOptions.UninitializedMemory);
		GatherEntityInChunkForEntities((Entity*)entities.GetUnsafeReadOnlyPtr(), (EntityInChunk*)nativeArray.GetUnsafePtr(), entities.Length);
		SortEntityInChunk((EntityInChunk*)nativeArray.GetUnsafePtr(), nativeArray.Length);
		entityBatchList = new NativeList<EntityBatchInChunk>(nativeArray.Length, allocator);
		entityBatchList.Length = nativeArray.Length;
		int num = 0;
		int length = 0;
		fixed (EntityComponentStore* ecs = &this)
		{
			EntityBatchFromEntityChunkDataShared(ecs, (EntityInChunk*)nativeArray.GetUnsafePtr(), nativeArray.Length, entityBatchList.GetUnsafePtr(), &length, nSharedComponentsToAdd, &num);
		}
		entityBatchList.Length = length;
		nativeArray.Dispose();
		if (num != 0)
		{
			entityBatchList.Dispose();
			entityBatchList = default;
			return false;
		}
		return true;
	}

	public ulong AllocateSequenceNumber()
	{
		m_NextChunkSequenceNumber++;
		return m_NextChunkSequenceNumber;
	}

	public static int AllocateContiguousChunk(int requestedCount, out ChunkIndex chunk, out int actualCount)
	{
		return s_chunkStore.Data.AllocateContiguousChunks(out chunk, requestedCount, out actualCount);
	}

	public static int FreeContiguousChunks(ChunkIndex firstChunk, int count)
	{
		return s_chunkStore.Data.FreeContiguousChunks(firstChunk, count);
	}

	public unsafe ChunkIndex AllocateChunk()
	{
		if (s_chunkStore.Data.AllocateContiguousChunks(out var value, 1, out var _) != ChunkStore.kErrorNone)
		{
			throw new InvalidOperationException("ChunkStore.AllocateContiguousChunks failed");
		}
		if (useMemoryInitPattern != 0)
		{
			UnsafeUtility.MemSet(value.GetPtr(), memoryInitPattern, 16384L);
		}
		return value;
	}

	public void FreeChunk(ChunkIndex chunk)
	{
		Unity.Assertions.Assert.IsTrue(s_chunkStore.Data.FreeContiguousChunks(chunk, 1) == 0);
	}

	public unsafe Archetype* GetExistingArchetype(ComponentTypeInArchetype* typesSorted, int count)
	{
		return m_TypeLookup.TryGet(typesSorted, count);
	}

	private unsafe void ChunkAllocate<T>(void* pointer, int count = 1) where T : struct
	{
		*(byte**)pointer = m_ArchetypeChunkAllocator.Allocate(UnsafeUtility.SizeOf<T>() * count, UnsafeUtility.AlignOf<T>());
	}

	internal static int GetComponentArraySize(int componentSize, int entityCount)
	{
		return CollectionHelper.Align(componentSize * entityCount, 64);
	}

	private unsafe static int CalculateSpaceRequirement(ushort* componentSizes, int componentCount, int entityCount)
	{
		int num = 0;
		for (int i = 0; i < componentCount; i++)
		{
			num += GetComponentArraySize(componentSizes[i], entityCount);
		}
		return num;
	}

	private unsafe static int CalculateChunkCapacity(int bufferSize, ushort* componentSizes, int count)
	{
		int num = 0;
		for (int i = 0; i < count; i++)
		{
			num += componentSizes[i];
		}
		int num2 = bufferSize / num;
		while (CalculateSpaceRequirement(componentSizes, count, num2) > bufferSize)
		{
			num2--;
		}
		return num2;
	}

	private unsafe static ulong CalculateStableHash(ComponentTypeInArchetype* types, int* typeMemoryOrder, int count)
	{
		ulong num = 1uL;
		for (int i = 0; i < count; i++)
		{
			ulong stableTypeHash = TypeManager.GetTypeInfo(types[typeMemoryOrder[i]].TypeIndex).StableTypeHash;
			num = TypeHash.CombineFNV1A64(num, stableTypeHash);
		}
		return num;
	}

	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void ThrowIfComponentDataSizeIsLargerThanShortMaxValue(int sizeInChunk)
	{
		if (sizeInChunk > 32767)
		{
			throw new ArgumentException($"Component Data sizes may not be larger than {short.MaxValue}");
		}
	}

	internal unsafe Archetype* CreateArchetype(ComponentTypeInArchetype* types, int count)
	{
		int num = 0;
		int num2 = 0;
		int num3 = 0;
		int num4 = 0;
		int* ptr = stackalloc int[count];
		int num5 = 0;
		for (int i = 0; i < count; i++)
		{
			ref readonly TypeManager.TypeInfo typeInfo = ref GetTypeInfo(types[i].TypeIndex);
			if (typeInfo.Category == TypeManager.TypeCategory.ISharedComponentData)
			{
				num4++;
			}
			else if (TypeManager.IsManagedComponent(types[i].TypeIndex))
			{
				num3++;
			}
			else if (typeInfo.BufferCapacity >= 0)
			{
				num2 += typeInfo.EntityOffsetCount;
			}
			else if (typeInfo.SizeInChunk > 0)
			{
				num += typeInfo.EntityOffsetCount;
			}
			if (types[i].IsEnableable)
			{
				ptr[num5++] = i;
			}
		}
		Archetype* ptr2 = null;
		ChunkAllocate<Archetype>(&ptr2);
		ChunkAllocate<ComponentTypeInArchetype>(&ptr2->Types, count);
		ChunkAllocate<int>(&ptr2->EnableableTypeIndexInArchetype, num5);
		ChunkAllocate<int>(&ptr2->Offsets, count);
		ChunkAllocate<int>(&ptr2->SizeOfs, count);
		ChunkAllocate<int>(&ptr2->BufferCapacities, count);
		ChunkAllocate<int>(&ptr2->TypeMemoryOrderIndexToIndexInArchetype, count);
		ChunkAllocate<int>(&ptr2->TypeIndexInArchetypeToMemoryOrderIndex, count);
		ChunkAllocate<EntityRemapUtility.EntityPatchInfo>(&ptr2->ScalarEntityPatches, num);
		ChunkAllocate<EntityRemapUtility.BufferEntityPatchInfo>(&ptr2->BufferEntityPatches, num2);
		ptr2->TypesCount = count;
		Memory.Array.Copy(ptr2->Types, types, count);
		ptr2->EnableableTypesCount = num5;
		Memory.Array.Copy(ptr2->EnableableTypeIndexInArchetype, ptr, num5);
		ptr2->EntityCount = 0;
		ptr2->ChunksWithEmptySlots = new UnsafeList<ChunkIndex>(0, Allocator.Persistent);
		ptr2->MatchingQueryData = new UnsafeList<IntPtr>(0, Allocator.Persistent);
		ptr2->NextChangedArchetype = null;
		ptr2->InstantiateArchetype = null;
		ptr2->CopyArchetype = null;
		ptr2->MetaChunkArchetype = null;
		ptr2->CleanupResidueArchetype = null;
		ptr2->Flags = (ArchetypeFlags)0;
		short num6 = (short)count;
		do
		{
			ptr2->FirstChunkComponent = num6;
		}
		while (types[--num6].IsChunkComponent);
		num6++;
		do
		{
			ptr2->FirstSharedComponent = num6;
		}
		while (types[--num6].IsSharedComponent);
		num6++;
		do
		{
			ptr2->FirstTagComponent = num6;
		}
		while (types[--num6].IsZeroSized);
		num6++;
		do
		{
			ptr2->FirstManagedComponent = num6;
		}
		while (types[--num6].IsManagedComponent);
		num6++;
		do
		{
			ptr2->FirstBufferComponent = num6;
		}
		while (types[--num6].IsBuffer);
		ulong num7 = 0uL;
		for (int j = 0; j < count; j++)
		{
			TypeIndex typeIndex = types[j].TypeIndex;
			ref readonly TypeManager.TypeInfo typeInfo2 = ref GetTypeInfo(typeIndex);
			num7 |= typeInfo2.BloomFilterMask;
			if (typeIndex == m_DisabledType)
			{
				ptr2->Flags |= ArchetypeFlags.Disabled;
			}
			if (typeIndex == m_SystemInstanceType)
			{
				ptr2->Flags |= ArchetypeFlags.HasSystemInstanceComponents;
			}
			if (typeIndex == m_PrefabType)
			{
				ptr2->Flags |= ArchetypeFlags.Prefab;
			}
			if (typeIndex == m_ChunkHeaderType)
			{
				ptr2->Flags |= ArchetypeFlags.HasChunkHeader;
			}
			if (typeInfo2.HasBlobAssetRefs)
			{
				ptr2->Flags |= ArchetypeFlags.HasBlobAssetRefs;
			}
			if (!types[j].IsChunkComponent && types[j].IsManagedComponent && typeInfo2.Category == TypeManager.TypeCategory.UnityEngineObject)
			{
				ptr2->Flags |= ArchetypeFlags.HasCompanionComponents;
			}
			if (types[j].IsManagedComponent && TypeManager.HasEntityReferences(typeIndex))
			{
				ptr2->Flags |= ArchetypeFlags.HasManagedEntityRefs;
			}
			if (typeInfo2.HasWeakAssetRefs)
			{
				ptr2->Flags |= ArchetypeFlags.HasWeakAssetRefs;
			}
			if (typeInfo2.HasUnityObjectRefs)
			{
				ptr2->Flags |= ArchetypeFlags.HasUnityObjectRefs;
			}
		}
		ptr2->BloomFilterMask = num7;
		if (ptr2->NumManagedComponents > 0)
		{
			ptr2->Flags |= ArchetypeFlags.HasManagedComponents;
		}
		if (ptr2->NumBufferComponents > 0)
		{
			ptr2->Flags |= ArchetypeFlags.HasBufferComponents;
		}
		int bufferSize = 16320;
		ptr2->ScalarEntityPatchCount = num;
		ptr2->BufferEntityPatchCount = num2;
		int x = 128;
		for (int k = 0; k < count; k++)
		{
			ref readonly TypeManager.TypeInfo typeInfo3 = ref GetTypeInfo(types[k].TypeIndex);
			if (k < ptr2->NonZeroSizedTypesCount)
			{
				ptr2->SizeOfs[k] = (ushort)typeInfo3.SizeInChunk;
				ptr2->BufferCapacities[k] = typeInfo3.BufferCapacity;
			}
			else
			{
				ptr2->SizeOfs[k] = 0;
				ptr2->BufferCapacities[k] = 0;
			}
			x = math.min(x, typeInfo3.MaximumChunkCapacity);
		}
		ptr2->ChunkCapacity = math.min(x, CalculateChunkCapacity(bufferSize, ptr2->SizeOfs, ptr2->NonZeroSizedTypesCount));
		Unity.Assertions.Assert.IsTrue(ptr2->ChunkCapacity > 0);
		Unity.Assertions.Assert.IsTrue(128 >= ptr2->ChunkCapacity);
		ptr2->Chunks = new ArchetypeChunkData(count, num4);
		ptr2->InstanceSize = 0;
		ptr2->InstanceSizeWithOverhead = 0;
		for (int l = 0; l < ptr2->NonZeroSizedTypesCount; l++)
		{
			ptr2->InstanceSize += ptr2->SizeOfs[l];
			ptr2->InstanceSizeWithOverhead += GetComponentArraySize(ptr2->SizeOfs[l], 1);
		}
		ulong* ptr3 = stackalloc ulong[count];
		ulong* memoryOrderings = ptr3;
		int* ptr4 = stackalloc int[count];
		int* typeFlags = ptr4;
		for (int m = 0; m < count; m++)
		{
			TypeIndex typeIndex2 = types[m].TypeIndex;
			memoryOrderings[m] = GetTypeInfo(typeIndex2).MemoryOrdering;
			typeFlags[m] = typeIndex2.Flags;
		}
		for (int n = 0; n < count; n++)
		{
			int num8 = n;
			while (num8 > 1 && MemoryOrderCompare(n, ptr2->TypeMemoryOrderIndexToIndexInArchetype[num8 - 1]))
			{
				ptr2->TypeMemoryOrderIndexToIndexInArchetype[num8] = ptr2->TypeMemoryOrderIndexToIndexInArchetype[num8 - 1];
				num8--;
			}
			ptr2->TypeMemoryOrderIndexToIndexInArchetype[num8] = n;
		}
		for (int num9 = 0; num9 < count; num9++)
		{
			ptr2->TypeIndexInArchetypeToMemoryOrderIndex[ptr2->TypeMemoryOrderIndexToIndexInArchetype[num9]] = num9;
		}
		int num10 = 0;
		for (int num11 = 0; num11 < count; num11++)
		{
			int num12 = ptr2->TypeMemoryOrderIndexToIndexInArchetype[num11];
			ushort componentSize = ptr2->SizeOfs[num12];
			ptr2->Offsets[num12] = num10;
			num10 += GetComponentArraySize(componentSize, ptr2->ChunkCapacity);
		}
		EntityRemapUtility.EntityPatchInfo* ptr5 = ptr2->ScalarEntityPatches;
		EntityRemapUtility.BufferEntityPatchInfo* patches = ptr2->BufferEntityPatches;
		for (int num13 = 0; num13 != count; num13++)
		{
			ref readonly TypeManager.TypeInfo typeInfo4 = ref GetTypeInfo(types[num13].TypeIndex);
			TypeManager.EntityOffsetInfo* entityOffsets = GetEntityOffsets(in typeInfo4);
			int entityOffsetCount = typeInfo4.EntityOffsetCount;
			if (typeInfo4.BufferCapacity >= 0)
			{
				patches = EntityRemapUtility.AppendBufferEntityPatches(patches, entityOffsets, entityOffsetCount, ptr2->Offsets[num13], ptr2->SizeOfs[num13], typeInfo4.ElementSize);
			}
			else if (!TypeManager.IsManagedComponent(typeInfo4.TypeIndex) && typeInfo4.SizeInChunk > 0)
			{
				ptr5 = EntityRemapUtility.AppendEntityPatches(ptr5, entityOffsets, entityOffsetCount, ptr2->Offsets[num13], ptr2->SizeOfs[num13]);
			}
		}
		Unity.Assertions.Assert.AreEqual(ptr5 - ptr2->ScalarEntityPatches, num);
		ptr2->ScalarEntityPatchCount = num;
		ptr2->BufferEntityPatchCount = num2;
		UnsafeUtility.MemClear(ptr2->QueryMaskArray, 128L);
		m_Archetypes.Add(ptr2);
		ptr2->FreeChunksBySharedComponents = default;
		ptr2->FreeChunksBySharedComponents.Init(ptr2, 16);
		m_TypeLookup.Add(ptr2);
		if (ArchetypeCleanupComplete(ptr2))
		{
			ptr2->Flags |= ArchetypeFlags.CleanupComplete;
		}
		if (ArchetypeCleanupNeeded(ptr2))
		{
			ptr2->Flags |= ArchetypeFlags.CleanupNeeded;
		}
		fixed (EntityComponentStore* entityComponentStore = &this)
		{
			ptr2->EntityComponentStore = entityComponentStore;
		}
		ptr2->StableHash = CalculateStableHash(types, ptr2->TypeMemoryOrderIndexToIndexInArchetype, count);
		return ptr2;
		unsafe bool MemoryOrderCompare(int lhs, int rhs)
		{
			if (typeFlags[lhs] == typeFlags[rhs])
			{
				return memoryOrderings[lhs] < memoryOrderings[rhs];
			}
			return typeFlags[lhs] < typeFlags[rhs];
		}
	}

	private unsafe bool ArchetypeCleanupComplete(Archetype* archetype)
	{
		if (archetype->TypesCount == 2)
		{
			return archetype->Types[1].TypeIndex == m_CleanupEntityType;
		}
		return false;
	}

	private unsafe bool ArchetypeCleanupNeeded(Archetype* archetype)
	{
		for (int i = 1; i < archetype->TypesCount; i++)
		{
			ComponentTypeInArchetype componentTypeInArchetype = archetype->Types[i];
			if (componentTypeInArchetype.IsCleanupComponent)
			{
				return true;
			}
		}
		return false;
	}

	public unsafe int CountEntities()
	{
		int num = 0;
		for (int i = 0; i < m_Archetypes.Length; i++)
		{
			Archetype* ptr = m_Archetypes.Ptr[i];
			num += ptr->EntityCount;
		}
		return num;
	}

	public ArchetypeChanges BeginArchetypeChangeTracking()
	{
		m_ArchetypeTrackingVersion++;
		return new ArchetypeChanges
		{
			StartIndex = m_Archetypes.Length,
			ArchetypeTrackingVersion = m_ArchetypeTrackingVersion
		};
	}

	public unsafe void EndArchetypeChangeTracking(ArchetypeChanges changes, EntityQueryManager* queries)
	{
		if (m_Archetypes.Length - changes.StartIndex != 0)
		{
			Unity.Assertions.Assert.AreEqual(m_ArchetypeTrackingVersion, changes.ArchetypeTrackingVersion);
			UnsafePtrList<Archetype> archetypeList = new UnsafePtrList<Archetype>(m_Archetypes.Ptr + changes.StartIndex, m_Archetypes.Length - changes.StartIndex);
			queries->AddAdditionalArchetypes(archetypeList);
		}
	}

	public unsafe void InvalidateChunkListCacheForChangedArchetypes()
	{
		Archetype* ptr = m_ChunkListChangesTracker.ArchetypeTrackingHead;
		while (ptr != null)
		{
			int length = ptr->MatchingQueryData.Length;
			for (int i = 0; i < length; i++)
			{
				EntityQueryData* ptr2 = (EntityQueryData*)(void*)ptr->MatchingQueryData.Ptr[i];
				ptr2->InvalidateChunkCache();
			}
			Archetype* nextChangedArchetype = ptr->NextChangedArchetype;
			ptr->NextChangedArchetype = null;
			ptr = nextChangedArchetype;
		}
		m_ChunkListChangesTracker.ArchetypeTrackingHead = null;
	}

	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	public void AssertNoQueuedManagedDeferredCommands()
	{
		bool empty = ManagedChangesTracker.Empty;
		ManagedChangesTracker.Reset();
		Unity.Assertions.Assert.IsTrue(empty);
	}

	public unsafe void DeallocateManagedComponents(ChunkIndex chunk, int indexInChunk, int batchCount)
	{
		Archetype* archetype = GetArchetype(chunk);
		if (archetype->NumManagedComponents == 0)
		{
			return;
		}
		short firstManagedComponent = archetype->FirstManagedComponent;
		int numManagedComponents = archetype->NumManagedComponents;
		int handle = ManagedChangesTracker.BeginFreeManagedComponentCommand();
		for (int i = 0; i < numManagedComponents; i++)
		{
			int indexInTypeArray = i + firstManagedComponent;
			int* componentDataRO = (int*)ChunkDataUtility.GetComponentDataRO(chunk, archetype, 0, indexInTypeArray);
			for (int j = 0; j < batchCount; j++)
			{
				int num = componentDataRO[j + indexInChunk];
				if (num != 0)
				{
					FreeManagedComponentIndex(num);
					ManagedChangesTracker.AddToFreeManagedComponentCommand(num);
				}
			}
		}
		ManagedChangesTracker.EndDeallocateManagedComponentCommand(handle);
	}

	public int GrowManagedComponentCapacity(int count)
	{
		return m_ManagedComponentIndexCapacity += math.max(m_ManagedComponentIndexCapacity / 2, count);
	}

	public void ReserveManagedComponentIndices(int count)
	{
		int managedComponentFreeCount = ManagedComponentFreeCount;
		if (managedComponentFreeCount < count)
		{
			int managedComponentCapacity = GrowManagedComponentCapacity(count - managedComponentFreeCount);
			ManagedChangesTracker.SetManagedComponentCapacity(managedComponentCapacity);
		}
	}

	public int AllocateManagedComponentIndex()
	{
		if (!m_ManagedComponentFreeIndex.IsEmpty)
		{
			return m_ManagedComponentFreeIndex.Pop<int>();
		}
		if (m_ManagedComponentIndex == m_ManagedComponentIndexCapacity)
		{
			m_ManagedComponentIndexCapacity += m_ManagedComponentIndexCapacity / 2;
			ManagedChangesTracker.SetManagedComponentCapacity(m_ManagedComponentIndexCapacity);
		}
		return m_ManagedComponentIndex++;
	}

	public unsafe void AllocateManagedComponentIndices(int* dst, int count)
	{
		int num = m_ManagedComponentFreeIndex.Length / 4;
		if (num >= count)
		{
			int num2 = num - count;
			UnsafeUtility.MemCpy(dst, m_ManagedComponentFreeIndex.Ptr + (nint)num2 * (nint)4, count * 4);
			m_ManagedComponentFreeIndex.Length = num2 * 4;
			return;
		}
		UnsafeUtility.MemCpy(dst, m_ManagedComponentFreeIndex.Ptr, num * 4);
		m_ManagedComponentFreeIndex.Length = 0;
		ReserveManagedComponentIndices(count - num);
		for (int i = num; i < count; i++)
		{
			dst[i] = m_ManagedComponentIndex++;
		}
	}

	public void FreeManagedComponentIndex(int index)
	{
		Unity.Assertions.Assert.AreNotEqual(0, index);
		m_ManagedComponentFreeIndex.Add(index);
	}

	public bool AddComponent(Entity entity, ComponentType type)
	{
		ChunkIndex chunkWithEmptySlotsWithAddedComponent = GetChunkWithEmptySlotsWithAddedComponent(entity, type);
		if (chunkWithEmptySlotsWithAddedComponent == ChunkIndex.Null)
		{
			return false;
		}
		Move(entity, chunkWithEmptySlotsWithAddedComponent);
		return true;
	}

	public unsafe void AddComponent(Entity entity, in ComponentTypeSet componentTypeSet)
	{
		ChunkIndex chunk = GetChunk(entity);
		Archetype* archetype = GetArchetype(chunk);
		Archetype* archetypeWithAddedComponents = GetArchetypeWithAddedComponents(archetype, in componentTypeSet);
		if (archetypeWithAddedComponents != archetype)
		{
			ArchetypeChunkFilter archetypeChunkFilter = GetArchetypeChunkFilterWithAddedComponents(chunk, archetypeWithAddedComponents);
			Move(entity, ref archetypeChunkFilter);
		}
	}

	public bool RemoveComponent(Entity entity, ComponentType type)
	{
		ChunkIndex chunkWithEmptySlotsWithRemovedComponent = GetChunkWithEmptySlotsWithRemovedComponent(entity, type);
		if (chunkWithEmptySlotsWithRemovedComponent == ChunkIndex.Null)
		{
			return false;
		}
		Move(entity, chunkWithEmptySlotsWithRemovedComponent);
		return true;
	}

	public unsafe void RemoveComponent(Entity entity, in ComponentTypeSet componentTypeSet)
	{
		if (!Hint.Unlikely(!Exists(entity)))
		{
			ChunkIndex chunk = GetChunk(entity);
			Archetype* archetype = GetArchetype(chunk);
			Archetype* archetypeWithRemovedComponents = GetArchetypeWithRemovedComponents(archetype, in componentTypeSet);
			if (archetypeWithRemovedComponents != archetype)
			{
				ArchetypeChunkFilter archetypeChunkFilter = GetArchetypeChunkFilterWithRemovedComponents(chunk, archetypeWithRemovedComponents);
				Move(entity, ref archetypeChunkFilter);
			}
		}
	}

	private bool AddComponent(EntityBatchInChunk entityBatchInChunk, ComponentType componentType, int sharedComponentIndex = 0)
	{
		ChunkIndex chunk = entityBatchInChunk.Chunk;
		if (!GetArchetypeChunkFilterWithAddedComponent(chunk, componentType, sharedComponentIndex, out var outFilter))
		{
			return false;
		}
		Move(entityBatchInChunk, ref outFilter);
		return true;
	}

	private unsafe bool AddComponents(EntityBatchInChunk entityBatchInChunk, in ComponentTypeSet componentTypeSet)
	{
		ChunkIndex chunk = entityBatchInChunk.Chunk;
		Archetype* archetype = GetArchetype(chunk);
		Archetype* archetypeWithAddedComponents = GetArchetypeWithAddedComponents(archetype, in componentTypeSet);
		if (archetypeWithAddedComponents == archetype)
		{
			return false;
		}
		ArchetypeChunkFilter archetypeChunkFilter = GetArchetypeChunkFilterWithAddedComponents(chunk, archetypeWithAddedComponents);
		if (archetypeChunkFilter.Archetype == null)
		{
			return false;
		}
		Move(entityBatchInChunk, ref archetypeChunkFilter);
		return true;
	}

	private bool RemoveComponent(EntityBatchInChunk entityBatchInChunk, ComponentType componentType)
	{
		ChunkIndex chunk = entityBatchInChunk.Chunk;
		if (!GetArchetypeChunkFilterWithRemovedComponent(chunk, componentType, out var outFilter))
		{
			return false;
		}
		Move(entityBatchInChunk, ref outFilter);
		return true;
	}

	private unsafe bool RemoveComponents(EntityBatchInChunk entityBatchInChunk, in ComponentTypeSet componentTypeSet)
	{
		ChunkIndex chunk = entityBatchInChunk.Chunk;
		Archetype* archetype = GetArchetype(chunk);
		Archetype* archetypeWithRemovedComponents = GetArchetypeWithRemovedComponents(archetype, in componentTypeSet);
		if (archetypeWithRemovedComponents == archetype)
		{
			return false;
		}
		ArchetypeChunkFilter archetypeChunkFilter = GetArchetypeChunkFilterWithRemovedComponents(chunk, archetypeWithRemovedComponents);
		if (archetypeChunkFilter.Archetype == null)
		{
			return false;
		}
		Move(entityBatchInChunk, ref archetypeChunkFilter);
		return true;
	}

	public unsafe void AddComponent(ArchetypeChunk* chunks, int chunkCount, ComponentType componentType, int sharedComponentIndex = 0)
	{
		Archetype* ptr = null;
		Archetype* ptr2 = null;
		int indexInTypeArray = 0;
		for (int i = 0; i < chunkCount; i++)
		{
			ChunkIndex chunk = chunks[i].m_Chunk;
			Archetype* archetype = chunks[i].Archetype.Archetype;
			if (ptr != archetype)
			{
				ptr2 = GetArchetypeWithAddedComponent(archetype, componentType, &indexInTypeArray);
				ptr = archetype;
			}
			if (ptr2 != null)
			{
				ArchetypeChunkFilter archetypeChunkFilter = GetArchetypeChunkFilterWithAddedComponent(archetype, chunk.ListIndex, ptr2, indexInTypeArray, componentType, sharedComponentIndex);
				Move(chunk, ref archetypeChunkFilter);
			}
		}
	}

	public unsafe void AddComponent(EntityQueryImpl* queryImpl, ComponentType componentType, int sharedComponentIndex = 0)
	{
		UnsafeChunkCacheIterator unsafeChunkCacheIterator = new UnsafeChunkCacheIterator(in queryImpl->_Filter, queryImpl->_QueryData->HasEnableableComponents != 0, queryImpl->GetMatchingChunkCache(), queryImpl->_QueryData->MatchingArchetypes.Ptr);
		int chunkIndexInCache = -1;
		v128 enableBits = default;
		int length = unsafeChunkCacheIterator.Length;
		using UnsafeList<ChunkAndEnabledMask> unsafeList = new UnsafeList<ChunkAndEnabledMask>(length, Allocator.TempJob);
		ArchetypeChunk outputChunk;
		int outputChunkEntityCount;
		byte outputUseEnableBits;
		while (unsafeChunkCacheIterator.MoveNextChunk(ref chunkIndexInCache, out outputChunk, out outputChunkEntityCount, out outputUseEnableBits, ref enableBits))
		{
			unsafeList.AddNoResize(new ChunkAndEnabledMask
			{
				Chunk = outputChunk.m_Chunk,
				EnabledMask = enableBits,
				ChunkEntityCount = outputChunkEntityCount,
				UseEnabledMask = outputUseEnableBits
			});
		}
		Archetype* ptr = null;
		Archetype* ptr2 = null;
		int indexInTypeArray = 0;
		EntityBatchInChunk* ptr3 = stackalloc EntityBatchInChunk[128];
		int i = 0;
		for (int length2 = unsafeList.Length; i < length2; i++)
		{
			ChunkIndex chunk = unsafeList[i].Chunk;
			Archetype* archetype = GetArchetype(chunk);
			if (Hint.Unlikely(ptr != archetype))
			{
				ptr = archetype;
				ptr2 = GetArchetypeWithAddedComponent(archetype, componentType, &indexInTypeArray);
			}
			if (ptr2 == null)
			{
				if (Hint.Unlikely(componentType.IsSharedComponent))
				{
					SetSharedComponentDataIndexForChunk(chunk, archetype, componentType, sharedComponentIndex, unsafeList[i].UseEnabledMask, unsafeList[i].EnabledMask, ptr3);
				}
				continue;
			}
			ArchetypeChunkFilter archetypeChunkFilter = GetArchetypeChunkFilterWithAddedComponent(ptr, chunk.ListIndex, ptr2, indexInTypeArray, componentType, sharedComponentIndex);
			if (unsafeList[i].UseEnabledMask == 0)
			{
				Move(chunk, ref archetypeChunkFilter);
				continue;
			}
			int num = 0;
			int nextRangeEnd = 0;
			enableBits = unsafeList[i].EnabledMask;
			int nextRangeBegin;
			while (EnabledBitUtility.TryGetNextRange(enableBits, nextRangeEnd, out nextRangeBegin, out nextRangeEnd))
			{
				ptr3[num++] = new EntityBatchInChunk
				{
					Chunk = chunk,
					Count = nextRangeEnd - nextRangeBegin,
					StartIndex = nextRangeBegin
				};
			}
			Unity.Assertions.Assert.IsTrue(num <= 128);
			for (int num2 = num - 1; num2 >= 0; num2--)
			{
				Move(ptr3[num2], ref archetypeChunkFilter);
			}
		}
	}

	public unsafe void SetSharedComponentDataIndexForChunk(ChunkIndex chunk, Archetype* chunkArchetype, ComponentType componentType, int dstSharedComponentDataIndex)
	{
		if (GetArchetypeChunkFilterWithChangedSharedComponent(chunk, componentType, dstSharedComponentDataIndex, out var outFilter))
		{
			ChunkDataUtility.SetSharedComponentDataIndex(chunk, chunkArchetype, (SharedComponentValues)outFilter.SharedComponentValues, componentType.TypeIndex);
		}
	}

	private unsafe void SetSharedComponentDataIndexForChunk(ChunkIndex chunk, Archetype* chunkArchetype, ComponentType componentType, int sharedComponentIndex, byte useEnabledMask, v128 chunkEnabledMask, EntityBatchInChunk* chunkBatches)
	{
		if (!GetArchetypeChunkFilterWithChangedSharedComponent(chunk, componentType, sharedComponentIndex, out var outFilter))
		{
			return;
		}
		if (useEnabledMask == 0)
		{
			ChunkDataUtility.SetSharedComponentDataIndex(chunk, chunkArchetype, (SharedComponentValues)outFilter.SharedComponentValues, componentType.TypeIndex);
			return;
		}
		int num = 0;
		int nextRangeEnd = 0;
		int nextRangeBegin;
		while (EnabledBitUtility.TryGetNextRange(chunkEnabledMask, nextRangeEnd, out nextRangeBegin, out nextRangeEnd))
		{
			chunkBatches[num++] = new EntityBatchInChunk
			{
				Chunk = chunk,
				Count = nextRangeEnd - nextRangeBegin,
				StartIndex = nextRangeBegin
			};
		}
		Unity.Assertions.Assert.IsTrue(num <= 128);
		for (int num2 = num - 1; num2 >= 0; num2--)
		{
			ChunkDataUtility.SetSharedComponentDataIndex(chunkBatches[num2], chunkArchetype, (SharedComponentValues)outFilter.SharedComponentValues, componentType.TypeIndex);
		}
	}

	public unsafe void AddComponents(EntityQueryImpl* queryImpl, in ComponentTypeSet componentTypeSet)
	{
		UnsafeChunkCacheIterator unsafeChunkCacheIterator = new UnsafeChunkCacheIterator(in queryImpl->_Filter, queryImpl->_QueryData->HasEnableableComponents != 0, queryImpl->GetMatchingChunkCache(), queryImpl->_QueryData->MatchingArchetypes.Ptr);
		int chunkIndexInCache = -1;
		v128 enableBits = default;
		int length = unsafeChunkCacheIterator.Length;
		using UnsafeList<ChunkAndEnabledMask> unsafeList = new UnsafeList<ChunkAndEnabledMask>(length, Allocator.TempJob);
		ArchetypeChunk outputChunk;
		int outputChunkEntityCount;
		byte outputUseEnableBits;
		while (unsafeChunkCacheIterator.MoveNextChunk(ref chunkIndexInCache, out outputChunk, out outputChunkEntityCount, out outputUseEnableBits, ref enableBits))
		{
			unsafeList.AddNoResize(new ChunkAndEnabledMask
			{
				Chunk = outputChunk.m_Chunk,
				EnabledMask = enableBits,
				ChunkEntityCount = outputChunkEntityCount,
				UseEnabledMask = outputUseEnableBits
			});
		}
		Archetype* ptr = null;
		Archetype* ptr2 = null;
		EntityBatchInChunk* ptr3 = stackalloc EntityBatchInChunk[128];
		int i = 0;
		for (int length2 = unsafeList.Length; i < length2; i++)
		{
			ChunkIndex chunk = unsafeList[i].Chunk;
			Archetype* archetype = GetArchetype(chunk);
			if (Hint.Unlikely(ptr != archetype))
			{
				ptr = archetype;
				ptr2 = GetArchetypeWithAddedComponents(archetype, in componentTypeSet);
			}
			if (Hint.Unlikely(ptr == ptr2))
			{
				continue;
			}
			ArchetypeChunkFilter archetypeChunkFilter = GetArchetypeChunkFilterWithAddedComponents(chunk, ptr2);
			if (unsafeList[i].UseEnabledMask == 0)
			{
				Move(chunk, ref archetypeChunkFilter);
				continue;
			}
			int num = 0;
			int nextRangeEnd = 0;
			enableBits = unsafeList[i].EnabledMask;
			int nextRangeBegin;
			while (EnabledBitUtility.TryGetNextRange(enableBits, nextRangeEnd, out nextRangeBegin, out nextRangeEnd))
			{
				ptr3[num++] = new EntityBatchInChunk
				{
					Chunk = chunk,
					Count = nextRangeEnd - nextRangeBegin,
					StartIndex = nextRangeBegin
				};
			}
			Unity.Assertions.Assert.IsTrue(num <= 128);
			for (int num2 = num - 1; num2 >= 0; num2--)
			{
				Move(ptr3[num2], ref archetypeChunkFilter);
			}
		}
	}

	public unsafe void RemoveComponent(ArchetypeChunk* chunks, int chunkCount, ComponentType componentType)
	{
		Archetype* ptr = null;
		Archetype* ptr2 = null;
		int indexInTypeArray = 0;
		for (int i = 0; i < chunkCount; i++)
		{
			ChunkIndex chunk = chunks[i].m_Chunk;
			Archetype* archetype = chunks[i].Archetype.Archetype;
			if (ptr != archetype)
			{
				ptr2 = GetArchetypeWithRemovedComponent(archetype, componentType, &indexInTypeArray);
				ptr = archetype;
			}
			if (ptr2 != archetype)
			{
				ArchetypeChunkFilter archetypeChunkFilter = GetArchetypeChunkFilterWithRemovedComponent(chunk, ptr2, indexInTypeArray, componentType);
				Move(chunk, ref archetypeChunkFilter);
			}
		}
	}

	public unsafe void RemoveComponent(EntityQueryImpl* queryImpl, ComponentType componentType)
	{
		UnsafeChunkCacheIterator unsafeChunkCacheIterator = new UnsafeChunkCacheIterator(in queryImpl->_Filter, queryImpl->_QueryData->HasEnableableComponents != 0, queryImpl->GetMatchingChunkCache(), queryImpl->_QueryData->MatchingArchetypes.Ptr);
		int chunkIndexInCache = -1;
		v128 enableBits = default;
		int length = unsafeChunkCacheIterator.Length;
		using UnsafeList<ChunkAndEnabledMask> unsafeList = new UnsafeList<ChunkAndEnabledMask>(length, Allocator.TempJob);
		ArchetypeChunk outputChunk;
		int outputChunkEntityCount;
		byte outputUseEnableBits;
		while (unsafeChunkCacheIterator.MoveNextChunk(ref chunkIndexInCache, out outputChunk, out outputChunkEntityCount, out outputUseEnableBits, ref enableBits))
		{
			unsafeList.AddNoResize(new ChunkAndEnabledMask
			{
				Chunk = outputChunk.m_Chunk,
				EnabledMask = enableBits,
				ChunkEntityCount = outputChunkEntityCount,
				UseEnabledMask = outputUseEnableBits
			});
		}
		Archetype* ptr = null;
		Archetype* ptr2 = null;
		int indexInTypeArray = 0;
		EntityBatchInChunk* ptr3 = stackalloc EntityBatchInChunk[128];
		int i = 0;
		for (int length2 = unsafeList.Length; i < length2; i++)
		{
			ChunkIndex chunk = unsafeList[i].Chunk;
			Archetype* archetype = GetArchetype(chunk);
			if (Hint.Unlikely(ptr != archetype))
			{
				ptr = archetype;
				ptr2 = GetArchetypeWithRemovedComponent(archetype, componentType, &indexInTypeArray);
			}
			if (Hint.Unlikely(ptr2 == ptr))
			{
				continue;
			}
			ArchetypeChunkFilter archetypeChunkFilter = GetArchetypeChunkFilterWithRemovedComponent(chunk, ptr2, indexInTypeArray, componentType);
			if (unsafeList[i].UseEnabledMask == 0)
			{
				Move(chunk, ref archetypeChunkFilter);
				continue;
			}
			int num = 0;
			int nextRangeEnd = 0;
			enableBits = unsafeList[i].EnabledMask;
			int nextRangeBegin;
			while (EnabledBitUtility.TryGetNextRange(enableBits, nextRangeEnd, out nextRangeBegin, out nextRangeEnd))
			{
				ptr3[num++] = new EntityBatchInChunk
				{
					Chunk = chunk,
					Count = nextRangeEnd - nextRangeBegin,
					StartIndex = nextRangeBegin
				};
			}
			Unity.Assertions.Assert.IsTrue(num <= 128);
			for (int num2 = num - 1; num2 >= 0; num2--)
			{
				Move(ptr3[num2], ref archetypeChunkFilter);
			}
		}
	}

	public unsafe void RemoveComponents(EntityQueryImpl* queryImpl, in ComponentTypeSet componentTypeSet)
	{
		UnsafeChunkCacheIterator unsafeChunkCacheIterator = new UnsafeChunkCacheIterator(in queryImpl->_Filter, queryImpl->_QueryData->HasEnableableComponents != 0, queryImpl->GetMatchingChunkCache(), queryImpl->_QueryData->MatchingArchetypes.Ptr);
		int chunkIndexInCache = -1;
		v128 enableBits = default;
		int length = unsafeChunkCacheIterator.Length;
		using UnsafeList<ChunkAndEnabledMask> unsafeList = new UnsafeList<ChunkAndEnabledMask>(length, Allocator.TempJob);
		ArchetypeChunk outputChunk;
		int outputChunkEntityCount;
		byte outputUseEnableBits;
		while (unsafeChunkCacheIterator.MoveNextChunk(ref chunkIndexInCache, out outputChunk, out outputChunkEntityCount, out outputUseEnableBits, ref enableBits))
		{
			unsafeList.AddNoResize(new ChunkAndEnabledMask
			{
				Chunk = outputChunk.m_Chunk,
				EnabledMask = enableBits,
				ChunkEntityCount = outputChunkEntityCount,
				UseEnabledMask = outputUseEnableBits
			});
		}
		Archetype* ptr = null;
		Archetype* ptr2 = null;
		EntityBatchInChunk* ptr3 = stackalloc EntityBatchInChunk[128];
		int i = 0;
		for (int length2 = unsafeList.Length; i < length2; i++)
		{
			ChunkIndex chunk = unsafeList[i].Chunk;
			Archetype* archetype = GetArchetype(chunk);
			if (Hint.Unlikely(ptr != archetype))
			{
				ptr = archetype;
				ptr2 = GetArchetypeWithRemovedComponents(archetype, in componentTypeSet);
			}
			if (Hint.Unlikely(ptr2 == ptr))
			{
				continue;
			}
			ArchetypeChunkFilter archetypeChunkFilter = GetArchetypeChunkFilterWithRemovedComponents(chunk, ptr2);
			if (unsafeList[i].UseEnabledMask == 0)
			{
				Move(chunk, ref archetypeChunkFilter);
				continue;
			}
			int num = 0;
			int nextRangeEnd = 0;
			enableBits = unsafeList[i].EnabledMask;
			int nextRangeBegin;
			while (EnabledBitUtility.TryGetNextRange(enableBits, nextRangeEnd, out nextRangeBegin, out nextRangeEnd))
			{
				ptr3[num++] = new EntityBatchInChunk
				{
					Chunk = chunk,
					Count = nextRangeEnd - nextRangeBegin,
					StartIndex = nextRangeBegin
				};
			}
			Unity.Assertions.Assert.IsTrue(num <= 128);
			for (int num2 = num - 1; num2 >= 0; num2--)
			{
				Move(ptr3[num2], ref archetypeChunkFilter);
			}
		}
	}

	public unsafe void AddComponent(UnsafeList<EntityBatchInChunk>* sortedEntityBatchList, ComponentType type, int existingSharedComponentIndex)
	{
		Unity.Assertions.Assert.IsFalse(type.IsChunkComponent);
		for (int num = sortedEntityBatchList->Length - 1; num >= 0; num--)
		{
			AddComponent(sortedEntityBatchList->Ptr[num], type, existingSharedComponentIndex);
		}
	}

	public unsafe void AddComponents(UnsafeList<EntityBatchInChunk>* sortedEntityBatchList, in ComponentTypeSet typeSet)
	{
		Unity.Assertions.Assert.IsFalse(typeSet.ChunkComponentCount > 0);
		for (int num = sortedEntityBatchList->Length - 1; num >= 0; num--)
		{
			AddComponents(sortedEntityBatchList->Ptr[num], in typeSet);
		}
	}

	public unsafe void RemoveComponents(UnsafeList<EntityBatchInChunk>* sortedEntityBatchList, in ComponentTypeSet typeSet)
	{
		Unity.Assertions.Assert.IsFalse(typeSet.ChunkComponentCount > 0);
		for (int num = sortedEntityBatchList->Length - 1; num >= 0; num--)
		{
			RemoveComponents(sortedEntityBatchList->Ptr[num], in typeSet);
		}
	}

	public unsafe void RemoveComponent(UnsafeList<EntityBatchInChunk>* sortedEntityBatchList, ComponentType type)
	{
		Unity.Assertions.Assert.IsFalse(type.IsChunkComponent);
		for (int num = sortedEntityBatchList->Length - 1; num >= 0; num--)
		{
			RemoveComponent(sortedEntityBatchList->Ptr[num], type);
		}
	}

	public unsafe void SetSharedComponentDataIndex(Entity entity, ComponentType componentType, int dstSharedComponentDataIndex)
	{
		if (GetArchetypeChunkFilterWithChangedSharedComponent(GetChunk(entity), componentType, dstSharedComponentDataIndex, out var outFilter))
		{
			ChunkDataUtility.SetSharedComponentDataIndex(entity, outFilter.Archetype, (SharedComponentValues)outFilter.SharedComponentValues, componentType.TypeIndex);
		}
	}

	public unsafe void SetSharedComponentDataIndex(EntityQueryImpl* queryImpl, ComponentType componentType, int dstSharedComponentDataIndex)
	{
		UnsafeChunkCacheIterator unsafeChunkCacheIterator = new UnsafeChunkCacheIterator(in queryImpl->_Filter, queryImpl->_QueryData->HasEnableableComponents != 0, queryImpl->GetMatchingChunkCache(), queryImpl->_QueryData->MatchingArchetypes.Ptr);
		int chunkIndexInCache = -1;
		v128 enableBits = default;
		int length = unsafeChunkCacheIterator.Length;
		using UnsafeList<ChunkAndEnabledMask> unsafeList = new UnsafeList<ChunkAndEnabledMask>(length, Allocator.TempJob);
		ArchetypeChunk outputChunk;
		int outputChunkEntityCount;
		byte outputUseEnableBits;
		while (unsafeChunkCacheIterator.MoveNextChunk(ref chunkIndexInCache, out outputChunk, out outputChunkEntityCount, out outputUseEnableBits, ref enableBits))
		{
			unsafeList.AddNoResize(new ChunkAndEnabledMask
			{
				Chunk = outputChunk.m_Chunk,
				EnabledMask = enableBits,
				ChunkEntityCount = outputChunkEntityCount,
				UseEnabledMask = outputUseEnableBits
			});
		}
		EntityBatchInChunk* chunkBatches = stackalloc EntityBatchInChunk[128];
		int i = 0;
		for (int length2 = unsafeList.Length; i < length2; i++)
		{
			ChunkIndex chunk = unsafeList[i].Chunk;
			Archetype* archetype = GetArchetype(chunk);
			SetSharedComponentDataIndexForChunk(chunk, archetype, componentType, dstSharedComponentDataIndex, unsafeList[i].UseEnabledMask, unsafeList[i].EnabledMask, chunkBatches);
		}
	}

	public unsafe void Move(Entity entity, Archetype* dstArchetype)
	{
		ArchetypeChunkFilter archetypeChunkFilter = GetArchetypeChunkFilterWithChangedArchetype(GetChunk(entity), dstArchetype);
		if (archetypeChunkFilter.Archetype != null)
		{
			Move(entity, ref archetypeChunkFilter);
		}
	}

	public unsafe void Move(Entity entity, Archetype* archetype, SharedComponentValues sharedComponentValues)
	{
		ArchetypeChunkFilter archetypeChunkFilter = new ArchetypeChunkFilter(archetype, sharedComponentValues);
		Move(entity, ref archetypeChunkFilter);
	}

	public unsafe void Move(ChunkIndex srcChunk, Archetype* archetype, SharedComponentValues sharedComponentValues)
	{
		ArchetypeChunkFilter archetypeChunkFilter = new ArchetypeChunkFilter(archetype, sharedComponentValues);
		Move(srcChunk, ref archetypeChunkFilter);
	}

	public unsafe void MoveAndSetChangeVersion(EntityBatchInChunk batch, Archetype* archetype, SharedComponentValues sharedComponentValues, TypeIndex typeIndex)
	{
		ArchetypeChunkFilter archetypeChunkFilter = new ArchetypeChunkFilter(archetype, sharedComponentValues);
		MoveAndSetChangeVersion(batch, ref archetypeChunkFilter, typeIndex);
	}

	private void Move(Entity entity, ChunkIndex dstChunk)
	{
		EntityInChunk entityInChunk = GetEntityInChunk(entity);
		ChunkIndex chunk = entityInChunk.Chunk;
		int indexInChunk = entityInChunk.IndexInChunk;
		EntityBatchInChunk srcBatch = new EntityBatchInChunk
		{
			Chunk = chunk,
			Count = 1,
			StartIndex = indexInChunk
		};
		Move(in srcBatch, dstChunk);
	}

	private void Move(Entity entity, ref ArchetypeChunkFilter archetypeChunkFilter)
	{
		EntityInChunk entityInChunk = GetEntityInChunk(entity);
		EntityBatchInChunk entityBatchInChunk = new EntityBatchInChunk
		{
			Chunk = entityInChunk.Chunk,
			Count = 1,
			StartIndex = entityInChunk.IndexInChunk
		};
		Move(entityBatchInChunk, ref archetypeChunkFilter);
	}

	private unsafe void Move(ChunkIndex srcChunk, ref ArchetypeChunkFilter archetypeChunkFilter)
	{
		Archetype* archetype = GetArchetype(srcChunk);
		if (archetypeChunkFilter.Archetype->CleanupComplete)
		{
			ChunkDataUtility.Deallocate(archetype, srcChunk);
			return;
		}
		if (ChunkDataUtility.AreLayoutCompatible(archetype, archetypeChunkFilter.Archetype))
		{
			fixed (int* sharedComponentValues = archetypeChunkFilter.SharedComponentValues)
			{
				ChunkDataUtility.ChangeArchetypeInPlace(archetype, srcChunk, archetypeChunkFilter.Archetype, sharedComponentValues);
			}
			return;
		}
		EntityBatchInChunk entityBatchInChunk = new EntityBatchInChunk
		{
			Chunk = srcChunk,
			Count = srcChunk.Count,
			StartIndex = 0
		};
		Move(entityBatchInChunk, ref archetypeChunkFilter);
	}

	private unsafe void Move(EntityBatchInChunk entityBatchInChunk, ref ArchetypeChunkFilter archetypeChunkFilter)
	{
		bool cleanupComplete = archetypeChunkFilter.Archetype->CleanupComplete;
		ChunkIndex chunk = entityBatchInChunk.Chunk;
		int num = entityBatchInChunk.Count;
		int startIndex = entityBatchInChunk.StartIndex;
		if ((num == chunk.Count) & cleanupComplete)
		{
			ChunkDataUtility.Deallocate(GetArchetype(chunk), chunk);
			return;
		}
		while (num > 0)
		{
			ChunkIndex chunkWithEmptySlots = GetChunkWithEmptySlots(ref archetypeChunkFilter);
			int num2 = Move(new EntityBatchInChunk
			{
				Chunk = chunk,
				Count = num,
				StartIndex = startIndex
			}, chunkWithEmptySlots);
			num -= num2;
		}
	}

	private unsafe void MoveAndSetChangeVersion(EntityBatchInChunk entityBatchInChunk, ref ArchetypeChunkFilter archetypeChunkFilter, TypeIndex typeIndex)
	{
		bool cleanupComplete = archetypeChunkFilter.Archetype->CleanupComplete;
		ChunkIndex chunk = entityBatchInChunk.Chunk;
		int num = entityBatchInChunk.Count;
		int startIndex = entityBatchInChunk.StartIndex;
		if ((num == chunk.Count) & cleanupComplete)
		{
			ChunkDataUtility.Deallocate(GetArchetype(chunk), chunk);
			return;
		}
		Archetype* archetype = archetypeChunkFilter.Archetype;
		int indexInTypeArray = ChunkDataUtility.GetIndexInTypeArray(archetype, typeIndex);
		Unity.Assertions.Assert.AreNotEqual(-1, indexInTypeArray, "expected type not found in destination archetype");
		while (num > 0)
		{
			ChunkIndex chunkWithEmptySlots = GetChunkWithEmptySlots(ref archetypeChunkFilter);
			int num2 = Move(new EntityBatchInChunk
			{
				Chunk = chunk,
				Count = num,
				StartIndex = startIndex
			}, chunkWithEmptySlots);
			num -= num2;
			archetype->Chunks.SetChangeVersion(indexInTypeArray, chunkWithEmptySlots.ListIndex, GlobalSystemVersion);
		}
	}

	private unsafe int Move(in EntityBatchInChunk srcBatch, ChunkIndex dstChunk)
	{
		ChunkIndex chunk = srcBatch.Chunk;
		Archetype* archetype = GetArchetype(chunk);
		Archetype* archetype2 = GetArchetype(dstChunk);
		int num = math.min(archetype2->ChunkCapacity - dstChunk.Count, srcBatch.Count);
		int startIndex = srcBatch.StartIndex + srcBatch.Count - num;
		EntityBatchInChunk srcBatch2 = new EntityBatchInChunk
		{
			Chunk = chunk,
			StartIndex = startIndex,
			Count = num
		};
		ChunkDataUtility.Clone(archetype, in srcBatch2, archetype2, dstChunk);
		fixed (EntityComponentStore* entityComponentStore = &this)
		{
			ChunkDataUtility.Remove(entityComponentStore, in srcBatch2);
		}
		return num;
	}

	internal unsafe bool IsComponentEnabled(Entity entity, TypeIndex typeIndex)
	{
		EntityInChunk entityInChunk = GetEntityInChunk(entity);
		int indexInTypeArray = ChunkDataUtility.GetIndexInTypeArray(GetArchetype(entityInChunk.Chunk), typeIndex);
		return IsComponentEnabled(entityInChunk.Chunk, entityInChunk.IndexInChunk, indexInTypeArray);
	}

	internal unsafe bool IsComponentEnabled(Entity entity, TypeIndex typeIndex, ref LookupCache typeLookupCache)
	{
		EntityInChunk entityInChunk = GetEntityInChunk(entity);
		Archetype* archetype = GetArchetype(entityInChunk.Chunk);
		if (Hint.Unlikely(archetype != typeLookupCache.Archetype))
		{
			typeLookupCache.Update(archetype, typeIndex);
		}
		return IsComponentEnabled(entityInChunk.Chunk, entityInChunk.IndexInChunk, typeLookupCache.IndexInArchetype);
	}

	internal unsafe bool IsComponentEnabled(ChunkIndex chunk, int indexInChunk, int typeIndexInArchetype)
	{
		Archetype* archetype = GetArchetype(chunk);
		return ChunkDataUtility.GetEnabledRefRO(chunk, archetype, typeIndexInArchetype).IsSet(indexInChunk);
	}

	internal unsafe void SetComponentEnabled(Entity entity, TypeIndex typeIndex, bool value)
	{
		EntityInChunk entityInChunk = GetEntityInChunk(entity);
		int indexInTypeArray = ChunkDataUtility.GetIndexInTypeArray(GetArchetype(entityInChunk.Chunk), typeIndex);
		SetComponentEnabled(entityInChunk.Chunk, entityInChunk.IndexInChunk, indexInTypeArray, value);
	}

	internal unsafe void SetComponentEnabled(Entity entity, TypeIndex typeIndex, bool value, ref LookupCache typeLookupCache)
	{
		EntityInChunk entityInChunk = GetEntityInChunk(entity);
		Archetype* archetype = GetArchetype(entityInChunk.Chunk);
		if (Hint.Unlikely(archetype != typeLookupCache.Archetype))
		{
			typeLookupCache.Update(archetype, typeIndex);
		}
		SetComponentEnabled(entityInChunk.Chunk, entityInChunk.IndexInChunk, typeLookupCache.IndexInArchetype, value);
	}

	internal unsafe void SetComponentEnabled(ChunkIndex chunk, int indexInChunk, int typeIndexInArchetype, bool value)
	{
		Archetype* archetype = GetArchetype(chunk);
		_ = *archetype;
		UnsafeBitArray enabledRefRW = ChunkDataUtility.GetEnabledRefRW(chunk, archetype, typeIndexInArchetype, GlobalSystemVersion, out var ptrChunkDisabledCount);
		int num = indexInChunk / 64;
		ulong* ptr = enabledRefRW.Ptr + num;
		int num2 = indexInChunk - num * 64;
		long num3 = 1L << num2;
		long num4 = (long)(*ptr);
		long num5 = 0L;
		long num6 = 0L;
		do
		{
			num5 = math.select(num4 & ~num3, num4 | num3, value);
			num6 = num4;
			num4 = Interlocked.CompareExchange(ref UnsafeUtility.AsRef<long>(ptr), num5, num6);
		}
		while (num6 != num4);
		if (num4 != num5)
		{
			int value2 = math.select(1, -1, value);
			Interlocked.Add(ref UnsafeUtility.AsRef<int>(ptrChunkDisabledCount), value2);
		}
	}

	public unsafe ulong* GetEnabledRawRW(Entity entity, TypeIndex typeIndex, ref LookupCache typeLookupCache, uint globalSystemVersion, out int indexInBitField, out int* ptrChunkDisabledCount)
	{
		EntityInChunk entityInChunk = GetEntityInChunk(entity);
		Archetype* archetype = GetArchetype(entityInChunk.Chunk);
		indexInBitField = entityInChunk.IndexInChunk;
		if (Hint.Unlikely(archetype != typeLookupCache.Archetype))
		{
			typeLookupCache.Update(archetype, typeIndex);
		}
		return ChunkDataUtility.GetEnabledRefRW(entityInChunk.Chunk, archetype, typeLookupCache.IndexInArchetype, globalSystemVersion, out ptrChunkDisabledCount).Ptr;
	}

	public unsafe ulong* GetEnabledRawRO(Entity entity, TypeIndex typeIndex, ref LookupCache typeLookupCache, out int indexInBitField, out int* ptrChunkDisabledCount)
	{
		EntityInChunk entityInChunk = GetEntityInChunk(entity);
		Archetype* archetype = GetArchetype(entityInChunk.Chunk);
		indexInBitField = entityInChunk.IndexInChunk;
		if (Hint.Unlikely(archetype != typeLookupCache.Archetype))
		{
			typeLookupCache.Update(archetype, typeIndex);
		}
		int typeMemoryOrderIndexInArchetype = archetype->TypeIndexInArchetypeToMemoryOrderIndex[typeLookupCache.IndexInArchetype];
		ptrChunkDisabledCount = archetype->Chunks.GetPointerToChunkDisabledCountForType(typeMemoryOrderIndexInArchetype, entityInChunk.Chunk.ListIndex);
		return ChunkDataUtility.GetEnabledRefRO(entityInChunk.Chunk, archetype, typeLookupCache.IndexInArchetype).Ptr;
	}

	internal unsafe void AllocateEntities(Archetype* arch, ChunkIndex chunk, int baseIndex, int count, Entity* outputEntities)
	{
		Unity.Assertions.Assert.AreEqual(*arch->Offsets, 0);
		Unity.Assertions.Assert.AreEqual(*arch->SizeOfs, sizeof(Entity));
		Entity* ptr = (Entity*)chunk.Buffer + baseIndex;
		s_entityStore.Data.AllocateEntities(ptr, count, chunk, baseIndex);
		if (outputEntities != null)
		{
			UnsafeUtility.MemCpy(outputEntities, ptr, count * sizeof(Entity));
		}
	}

	internal unsafe void DeallocateDataEntitiesInChunk(ChunkIndex chunk, Archetype* archetype, int indexInChunk, int batchCount)
	{
		DeallocateBuffers(chunk, indexInChunk, batchCount);
		DeallocateManagedComponents(chunk, indexInChunk, batchCount);
		Entity* entities = (Entity*)chunk.Buffer + indexInChunk;
		s_entityStore.Data.DeallocateEntities(entities, batchCount);
		int num = Math.Min(batchCount, chunk.Count - indexInChunk - batchCount);
		ChunkDataUtility.RemoveFromEnabledBitsHierarchicalData(chunk, archetype, indexInChunk, batchCount);
		if (num == 0)
		{
			ChunkDataUtility.ClearPaddingBits(chunk, archetype, indexInChunk, batchCount);
			return;
		}
		Entity* ptr = (Entity*)chunk.Buffer + (chunk.Count - num);
		for (int i = 0; i != num; i++)
		{
			EntityInChunk entityInChunk = GetEntityInChunk(ptr[i]);
			entityInChunk.IndexInChunk = indexInChunk + i;
			SetEntityInChunk(ptr[i], entityInChunk);
		}
		int num2 = chunk.Count - num;
		fixed (EntityComponentStore* entityComponentStore = &this)
		{
			ChunkDataUtility.Copy(entityComponentStore, chunk, num2, chunk, indexInChunk, num);
		}
		ChunkDataUtility.CloneEnabledBits(chunk, archetype, num2, chunk, archetype, indexInChunk, num);
		int startIndex = chunk.Count - batchCount;
		ChunkDataUtility.ClearPaddingBits(chunk, archetype, startIndex, batchCount);
	}

	private unsafe void DeallocateBuffers(ChunkIndex chunk, int indexInChunk, int batchCount)
	{
		Archetype* archetype = GetArchetype(chunk);
		byte* buffer = chunk.Buffer;
		int i = 0;
		for (int typesCount = archetype->TypesCount; i < typesCount; i++)
		{
			ComponentTypeInArchetype componentTypeInArchetype = archetype->Types[i];
			if (componentTypeInArchetype.IsBuffer)
			{
				byte* ptr = buffer + archetype->Offsets[i];
				ushort num = archetype->SizeOfs[i];
				for (int j = 0; j < batchCount; j++)
				{
					BufferHeader.Destroy((BufferHeader*)(ptr + num * (indexInChunk + j)));
				}
			}
		}
	}

	public unsafe Archetype* GetOrCreateArchetype(ComponentTypeInArchetype* inTypesSorted, int count)
	{
		Archetype* existingArchetype = GetExistingArchetype(inTypesSorted, count);
		if (existingArchetype != null)
		{
			return existingArchetype;
		}
		existingArchetype = CreateArchetype(inTypesSorted, count);
		ComponentTypeInArchetype* ptr = stackalloc ComponentTypeInArchetype[count + 1];
		existingArchetype->InstantiateArchetype = CreateInstanceArchetype(inTypesSorted, count, ptr, existingArchetype, removePrefab: true);
		existingArchetype->CopyArchetype = CreateInstanceArchetype(inTypesSorted, count, ptr, existingArchetype, removePrefab: false);
		if (existingArchetype->InstantiateArchetype != null)
		{
			Unity.Assertions.Assert.IsTrue(existingArchetype->InstantiateArchetype->InstantiateArchetype == existingArchetype->InstantiateArchetype);
			Unity.Assertions.Assert.IsTrue(existingArchetype->InstantiateArchetype->CleanupResidueArchetype == null);
		}
		if (existingArchetype->CopyArchetype != null)
		{
			Unity.Assertions.Assert.IsTrue(existingArchetype->CopyArchetype->CopyArchetype == existingArchetype->CopyArchetype);
			Unity.Assertions.Assert.IsTrue(existingArchetype->CopyArchetype->CleanupResidueArchetype == null);
		}
		if (existingArchetype->CleanupNeeded)
		{
			ComponentTypeInArchetype componentTypeInArchetype = new ComponentTypeInArchetype(ComponentType.FromTypeIndex(m_CleanupEntityType));
			bool flag = false;
			*ptr = *inTypesSorted;
			int count2 = 1;
			for (int i = 1; i < existingArchetype->TypesCount; i++)
			{
				ComponentTypeInArchetype componentTypeInArchetype2 = existingArchetype->Types[i];
				if (componentTypeInArchetype2.IsCleanupComponent)
				{
					if (!flag && componentTypeInArchetype < existingArchetype->Types[i])
					{
						ptr[count2++] = componentTypeInArchetype;
						flag = true;
					}
					ptr[count2++] = existingArchetype->Types[i];
				}
			}
			if (!flag)
			{
				ptr[count2++] = componentTypeInArchetype;
			}
			Archetype* ptr2 = (existingArchetype->CleanupResidueArchetype = GetOrCreateArchetype(ptr, count2));
			Unity.Assertions.Assert.IsTrue(ptr2->CleanupResidueArchetype == ptr2);
			Unity.Assertions.Assert.IsTrue(ptr2->InstantiateArchetype == null);
			Unity.Assertions.Assert.IsTrue(ptr2->CopyArchetype == null);
		}
		if (count > 1)
		{
			*ptr = new ComponentTypeInArchetype(m_EntityComponentType);
			int num = 1;
			for (int j = 1; j < count; j++)
			{
				ComponentTypeInArchetype componentTypeInArchetype3 = inTypesSorted[j];
				if (inTypesSorted[j].IsChunkComponent)
				{
					ComponentType newValue = new ComponentType
					{
						TypeIndex = ChunkComponentToNormalTypeIndex(componentTypeInArchetype3.TypeIndex)
					};
					SortingUtilities.InsertSorted(ptr, num++, newValue);
				}
			}
			if (num > 1)
			{
				SortingUtilities.InsertSorted(ptr, num++, m_ChunkHeaderComponentType);
				existingArchetype->MetaChunkArchetype = GetOrCreateArchetype(ptr, num);
			}
		}
		return existingArchetype;
	}

	private unsafe Archetype* CreateInstanceArchetype(ComponentTypeInArchetype* inTypesSorted, int count, ComponentTypeInArchetype* types, Archetype* srcArchetype, bool removePrefab)
	{
		UnsafeUtility.MemCpy(types, inTypesSorted, sizeof(ComponentTypeInArchetype) * count);
		bool flag = false;
		int num = 0;
		int num2 = -1;
		int num3 = -1;
		for (int i = 0; i < srcArchetype->TypesCount; i++)
		{
			ComponentTypeInArchetype componentTypeInArchetype = srcArchetype->Types[i];
			flag |= componentTypeInArchetype.TypeIndex == m_CleanupEntityType;
			if (componentTypeInArchetype.IsCleanupComponent || (removePrefab && componentTypeInArchetype.TypeIndex == m_PrefabType))
			{
				num++;
			}
			else
			{
				types[i - num] = srcArchetype->Types[i];
			}
			if (removePrefab)
			{
				if (componentTypeInArchetype.TypeIndex == m_LinkedGroupType)
				{
					num2 = i - num;
				}
				else if (componentTypeInArchetype.TypeIndex == m_OmitLinkedEntityGroupFromPrefabInstanceType)
				{
					num3 = i - num;
				}
			}
		}
		if (flag)
		{
			return null;
		}
		if (num2 >= 0 && num3 >= 0)
		{
			int j = math.min(num2, num3);
			for (int num4 = math.max(num2, num3) - 1; j < num4; j++)
			{
				types[j] = types[j + 1];
			}
			int k = math.max(num2, num3) - 1;
			for (int num5 = count - num - 2; k < num5; k++)
			{
				types[k] = types[k + 2];
			}
			num += 2;
		}
		if (num <= 0)
		{
			return srcArchetype;
		}
		return GetOrCreateArchetype(types, count - num);
	}

	private ChunkIndex GetChunkWithEmptySlotsWithAddedComponent(Entity entity, ComponentType componentType)
	{
		if (!Exists(entity))
		{
			return ChunkIndex.Null;
		}
		return GetChunkWithEmptySlotsWithAddedComponent(GetChunk(entity), componentType);
	}

	private ChunkIndex GetChunkWithEmptySlotsWithAddedComponent(ChunkIndex srcChunk, ComponentType componentType, int sharedComponentIndex = 0)
	{
		if (!GetArchetypeChunkFilterWithAddedComponent(srcChunk, componentType, sharedComponentIndex, out var outFilter))
		{
			return ChunkIndex.Null;
		}
		return GetChunkWithEmptySlots(ref outFilter);
	}

	private ChunkIndex GetChunkWithEmptySlotsWithRemovedComponent(Entity entity, ComponentType componentType)
	{
		if (!Exists(entity))
		{
			return ChunkIndex.Null;
		}
		return GetChunkWithEmptySlotsWithRemovedComponent(GetChunk(entity), componentType);
	}

	private ChunkIndex GetChunkWithEmptySlotsWithRemovedComponent(ChunkIndex srcChunk, ComponentType componentType)
	{
		if (!GetArchetypeChunkFilterWithRemovedComponent(srcChunk, componentType, out var outFilter))
		{
			return ChunkIndex.Null;
		}
		return GetChunkWithEmptySlots(ref outFilter);
	}

	private unsafe ChunkIndex GetChunkWithEmptySlots(ref ArchetypeChunkFilter archetypeChunkFilter)
	{
		Archetype* archetype = archetypeChunkFilter.Archetype;
		fixed (int* sharedComponentValues = archetypeChunkFilter.SharedComponentValues)
		{
			ChunkIndex chunkIndex = archetype->GetExistingChunkWithEmptySlots(sharedComponentValues);
			if (chunkIndex == ChunkIndex.Null)
			{
				chunkIndex = GetCleanChunk(archetype, sharedComponentValues);
			}
			return chunkIndex;
		}
	}

	private unsafe ArchetypeChunkFilter GetArchetypeChunkFilterWithChangedArchetype(ChunkIndex srcChunk, Archetype* dstArchetype)
	{
		Archetype* archetype = GetArchetype(srcChunk);
		ArchetypeChunkFilter result = new ArchetypeChunkFilter
		{
			Archetype = dstArchetype
		};
		SharedComponentValues sharedComponentValues = archetype->Chunks.GetSharedComponentValues(srcChunk.ListIndex);
		BuildSharedComponentIndicesWithChangedArchetype(archetype, dstArchetype, sharedComponentValues, result.SharedComponentValues);
		return result;
	}

	private unsafe bool GetArchetypeChunkFilterWithChangedSharedComponent(ChunkIndex srcChunk, ComponentType componentType, int dstSharedComponentIndex, out ArchetypeChunkFilter outFilter)
	{
		TypeIndex typeIndex = componentType.TypeIndex;
		Archetype* archetype = GetArchetype(srcChunk);
		int indexInTypeArray = ChunkDataUtility.GetIndexInTypeArray(archetype, typeIndex);
		SharedComponentValues sharedComponentValues = archetype->Chunks.GetSharedComponentValues(srcChunk.ListIndex);
		int num = indexInTypeArray - archetype->FirstSharedComponent;
		int num2 = sharedComponentValues[num];
		if (dstSharedComponentIndex == num2)
		{
			outFilter = default;
			return false;
		}
		outFilter = default;
		outFilter.Archetype = archetype;
		for (int i = 0; i < archetype->NumSharedComponents; i++)
		{
			outFilter.SharedComponentValues[i] = sharedComponentValues[i];
		}
		outFilter.SharedComponentValues[num] = dstSharedComponentIndex;
		return true;
	}

	private unsafe ArchetypeChunkFilter GetArchetypeChunkFilterWithAddedComponent(Archetype* srcArchetype, int srcChunkListIndex, Archetype* dstArchetype, int indexInTypeArray, ComponentType componentType, int sharedComponentIndex)
	{
		ArchetypeChunkFilter result = new ArchetypeChunkFilter
		{
			Archetype = dstArchetype
		};
		SharedComponentValues sharedComponentValues = srcArchetype->Chunks.GetSharedComponentValues(srcChunkListIndex);
		if (componentType.IsSharedComponent)
		{
			BuildSharedComponentIndicesWithAddedComponent(indexInTypeArray - dstArchetype->FirstSharedComponent, sharedComponentIndex, dstArchetype->NumSharedComponents, sharedComponentValues, result.SharedComponentValues);
		}
		else
		{
			for (int i = 0; i < srcArchetype->NumSharedComponents; i++)
			{
				result.SharedComponentValues[i] = sharedComponentValues[i];
			}
		}
		return result;
	}

	private unsafe bool GetArchetypeChunkFilterWithAddedComponent(ChunkIndex srcChunk, ComponentType componentType, int sharedComponentIndex, out ArchetypeChunkFilter outFilter)
	{
		Archetype* archetype = GetArchetype(srcChunk);
		int indexInTypeArray = 0;
		Archetype* archetypeWithAddedComponent = GetArchetypeWithAddedComponent(archetype, componentType, &indexInTypeArray);
		if (archetypeWithAddedComponent == null)
		{
			Unity.Assertions.Assert.IsTrue(sharedComponentIndex == 0);
			outFilter = default;
			return false;
		}
		Unity.Assertions.Assert.IsTrue(archetypeWithAddedComponent->NumSharedComponents <= 16);
		outFilter = GetArchetypeChunkFilterWithAddedComponent(archetype, srcChunk.ListIndex, archetypeWithAddedComponent, indexInTypeArray, componentType, sharedComponentIndex);
		return true;
	}

	private unsafe ArchetypeChunkFilter GetArchetypeChunkFilterWithAddedComponents(ChunkIndex srcChunk, Archetype* dstArchetype)
	{
		Archetype* archetype = GetArchetype(srcChunk);
		ArchetypeChunkFilter result = new ArchetypeChunkFilter
		{
			Archetype = dstArchetype
		};
		int numSharedComponents = archetype->NumSharedComponents;
		SharedComponentValues sharedComponentValues = archetype->Chunks.GetSharedComponentValues(srcChunk.ListIndex);
		if (dstArchetype->NumSharedComponents > numSharedComponents)
		{
			BuildSharedComponentIndicesWithAddedComponents(archetype, dstArchetype, sharedComponentValues, result.SharedComponentValues);
		}
		else
		{
			for (int i = 0; i < numSharedComponents; i++)
			{
				result.SharedComponentValues[i] = sharedComponentValues[i];
			}
		}
		return result;
	}

	private unsafe Archetype* GetArchetypeWithAddedComponents(Archetype* srcArchetype, in ComponentTypeSet componentTypeSet)
	{
		ComponentTypeInArchetype* types = srcArchetype->Types;
		int num = srcArchetype->TypesCount + componentTypeSet.Length;
		ComponentTypeInArchetype* ptr = stackalloc ComponentTypeInArchetype[num];
		int num2 = 0;
		int num3 = srcArchetype->TypesCount - 1;
		int num4 = componentTypeSet.Length - 1;
		int num5 = num;
		while (num4 >= 0)
		{
			ComponentTypeInArchetype componentTypeInArchetype = types[num3];
			ComponentTypeInArchetype componentTypeInArchetype2 = new ComponentTypeInArchetype(componentTypeSet.GetTypeIndex(num4));
			if (componentTypeInArchetype.TypeIndex > componentTypeInArchetype2.TypeIndex)
			{
				ptr[--num5] = componentTypeInArchetype;
				num3--;
				continue;
			}
			if (componentTypeInArchetype.TypeIndex == componentTypeInArchetype2.TypeIndex)
			{
				num3--;
			}
			ptr[--num5] = componentTypeInArchetype2;
			num4--;
		}
		while (num3 >= 0)
		{
			ptr[--num5] = types[num3--];
		}
		num2 = num5;
		if (num2 == componentTypeSet.Length)
		{
			return srcArchetype;
		}
		return GetOrCreateArchetype(ptr + num2, num - num2);
	}

	private unsafe ArchetypeChunkFilter GetArchetypeChunkFilterWithRemovedComponent(ChunkIndex srcChunk, Archetype* dstArchetype, int indexInTypeArray, ComponentType componentType)
	{
		Archetype* archetype = GetArchetype(srcChunk);
		ArchetypeChunkFilter result = new ArchetypeChunkFilter
		{
			Archetype = dstArchetype
		};
		SharedComponentValues sharedComponentValues = archetype->Chunks.GetSharedComponentValues(srcChunk.ListIndex);
		if (componentType.IsSharedComponent)
		{
			BuildSharedComponentIndicesWithRemovedComponent(indexInTypeArray - archetype->FirstSharedComponent, dstArchetype->NumSharedComponents, sharedComponentValues, result.SharedComponentValues);
		}
		else
		{
			for (int i = 0; i < archetype->NumSharedComponents; i++)
			{
				result.SharedComponentValues[i] = sharedComponentValues[i];
			}
		}
		return result;
	}

	private unsafe bool GetArchetypeChunkFilterWithRemovedComponent(ChunkIndex srcChunk, ComponentType componentType, out ArchetypeChunkFilter outFilter)
	{
		Archetype* archetype = GetArchetype(srcChunk);
		int indexInTypeArray = 0;
		Archetype* archetypeWithRemovedComponent = GetArchetypeWithRemovedComponent(archetype, componentType, &indexInTypeArray);
		if (archetypeWithRemovedComponent == archetype)
		{
			outFilter = default;
			return false;
		}
		outFilter = GetArchetypeChunkFilterWithRemovedComponent(srcChunk, archetypeWithRemovedComponent, indexInTypeArray, componentType);
		return true;
	}

	private unsafe ArchetypeChunkFilter GetArchetypeChunkFilterWithRemovedComponents(ChunkIndex srcChunk, Archetype* dstArchetype)
	{
		Archetype* archetype = GetArchetype(srcChunk);
		ArchetypeChunkFilter result = new ArchetypeChunkFilter
		{
			Archetype = dstArchetype
		};
		int numSharedComponents = archetype->NumSharedComponents;
		SharedComponentValues sharedComponentValues = archetype->Chunks.GetSharedComponentValues(srcChunk.ListIndex);
		if (dstArchetype->NumSharedComponents < numSharedComponents)
		{
			BuildSharedComponentIndicesWithRemovedComponents(archetype, dstArchetype, sharedComponentValues, result.SharedComponentValues);
		}
		else
		{
			for (int i = 0; i < numSharedComponents; i++)
			{
				result.SharedComponentValues[i] = sharedComponentValues[i];
			}
		}
		return result;
	}

	private unsafe static void BuildSharedComponentIndicesWithAddedComponent(int indexOfNewSharedComponent, int value, int newCount, SharedComponentValues srcSharedComponentValues, int* dstSharedComponentValues)
	{
		Unity.Assertions.Assert.IsTrue(newCount <= 16);
		srcSharedComponentValues.CopyTo(dstSharedComponentValues, 0, indexOfNewSharedComponent);
		dstSharedComponentValues[indexOfNewSharedComponent] = value;
		srcSharedComponentValues.CopyTo(dstSharedComponentValues + indexOfNewSharedComponent + 1, indexOfNewSharedComponent, newCount - indexOfNewSharedComponent - 1);
	}

	private unsafe static void BuildSharedComponentIndicesWithRemovedComponent(int indexOfRemovedSharedComponent, int newCount, SharedComponentValues srcSharedComponentValues, int* dstSharedComponentValues)
	{
		srcSharedComponentValues.CopyTo(dstSharedComponentValues, 0, indexOfRemovedSharedComponent);
		srcSharedComponentValues.CopyTo(dstSharedComponentValues + indexOfRemovedSharedComponent, indexOfRemovedSharedComponent + 1, newCount - indexOfRemovedSharedComponent);
	}

	private unsafe static void BuildSharedComponentIndicesWithAddedComponents(Archetype* srcArchetype, Archetype* dstArchetype, SharedComponentValues srcSharedComponentValues, int* dstSharedComponentValues)
	{
		int firstSharedComponent = srcArchetype->FirstSharedComponent;
		int firstSharedComponent2 = dstArchetype->FirstSharedComponent;
		int numSharedComponents = srcArchetype->NumSharedComponents;
		int numSharedComponents2 = dstArchetype->NumSharedComponents;
		int num = numSharedComponents - 1;
		for (int num2 = numSharedComponents2 - 1; num2 >= 0; num2--)
		{
			if (dstArchetype->Types[num2 + firstSharedComponent2] == srcArchetype->Types[num + firstSharedComponent])
			{
				dstSharedComponentValues[num2] = srcSharedComponentValues[num--];
			}
			else
			{
				dstSharedComponentValues[num2] = 0;
			}
		}
	}

	private unsafe static void BuildSharedComponentIndicesWithChangedArchetype(Archetype* srcArchetype, Archetype* dstArchetype, SharedComponentValues srcSharedComponentValues, int* dstSharedComponentValues)
	{
		Unity.Assertions.Assert.IsTrue(dstArchetype->NumSharedComponents <= 16);
		int firstSharedComponent = srcArchetype->FirstSharedComponent;
		int firstSharedComponent2 = dstArchetype->FirstSharedComponent;
		int numSharedComponents = srcArchetype->NumSharedComponents;
		int numSharedComponents2 = dstArchetype->NumSharedComponents;
		int num = 0;
		int i = 0;
		while (i < numSharedComponents2 && num < numSharedComponents)
		{
			TypeIndex typeIndex = srcArchetype->Types[num + firstSharedComponent].TypeIndex;
			TypeIndex typeIndex2 = dstArchetype->Types[i + firstSharedComponent2].TypeIndex;
			if (typeIndex == typeIndex2)
			{
				dstSharedComponentValues[i++] = srcSharedComponentValues[num++];
			}
			else if (typeIndex2 > typeIndex)
			{
				num++;
			}
			else
			{
				dstSharedComponentValues[i++] = 0;
			}
		}
		for (; i < numSharedComponents2; i++)
		{
			dstSharedComponentValues[i] = 0;
		}
	}

	private unsafe Archetype* GetArchetypeWithAddedComponent(Archetype* archetype, ComponentType addedComponentType, int* indexInTypeArray = null)
	{
		ComponentTypeInArchetype componentTypeInArchetype = new ComponentTypeInArchetype(addedComponentType);
		ComponentTypeInArchetype* ptr = stackalloc ComponentTypeInArchetype[archetype->TypesCount + 1];
		int i;
		for (i = 0; i < archetype->TypesCount && archetype->Types[i] < componentTypeInArchetype; i++)
		{
			ptr[i] = archetype->Types[i];
		}
		if (indexInTypeArray != null)
		{
			*indexInTypeArray = i;
		}
		if (i != archetype->TypesCount && archetype->Types[i] == componentTypeInArchetype)
		{
			return null;
		}
		ptr[i] = componentTypeInArchetype;
		for (; i < archetype->TypesCount; i++)
		{
			ptr[i + 1] = archetype->Types[i];
		}
		return GetOrCreateArchetype(ptr, archetype->TypesCount + 1);
	}

	private unsafe Archetype* GetArchetypeWithRemovedComponent(Archetype* archetype, ComponentType addedComponentType, int* indexInOldTypeArray = null)
	{
		ComponentTypeInArchetype componentTypeInArchetype = new ComponentTypeInArchetype(addedComponentType);
		ComponentTypeInArchetype* ptr = stackalloc ComponentTypeInArchetype[archetype->TypesCount];
		int num = 0;
		for (int i = 0; i < archetype->TypesCount; i++)
		{
			if (archetype->Types[i].TypeIndex == componentTypeInArchetype.TypeIndex)
			{
				if (indexInOldTypeArray != null)
				{
					*indexInOldTypeArray = i;
				}
				num++;
			}
			else
			{
				ptr[i - num] = archetype->Types[i];
			}
		}
		return GetOrCreateArchetype(ptr, archetype->TypesCount - num);
	}

	private unsafe Archetype* GetArchetypeWithRemovedComponents(Archetype* archetype, in ComponentTypeSet typeSetToRemove)
	{
		ComponentTypeInArchetype* ptr = stackalloc ComponentTypeInArchetype[archetype->TypesCount];
		int num = 0;
		for (int i = 0; i < archetype->TypesCount; i++)
		{
			TypeIndex typeIndex = archetype->Types[i].TypeIndex;
			bool flag = false;
			for (int j = 0; j < typeSetToRemove.Length; j++)
			{
				if (typeIndex == typeSetToRemove.GetTypeIndex(j))
				{
					num++;
					flag = true;
					break;
				}
			}
			if (!flag)
			{
				ptr[i - num] = archetype->Types[i];
			}
		}
		if (num == 0)
		{
			return archetype;
		}
		return GetOrCreateArchetype(ptr, archetype->TypesCount - num);
	}

	private unsafe static void BuildSharedComponentIndicesWithRemovedComponents(Archetype* srcArchetype, Archetype* dstArchetype, SharedComponentValues srcSharedComponentValues, int* dstSharedComponentValues)
	{
		int firstSharedComponent = srcArchetype->FirstSharedComponent;
		int firstSharedComponent2 = dstArchetype->FirstSharedComponent;
		int numSharedComponents = srcArchetype->NumSharedComponents;
		int numSharedComponents2 = dstArchetype->NumSharedComponents;
		for (int i = 0; i < numSharedComponents2; i++)
		{
			ComponentTypeInArchetype componentTypeInArchetype = dstArchetype->Types[firstSharedComponent2 + i];
			int i2 = 0;
			for (int j = 0; j < numSharedComponents; j++)
			{
				if (srcArchetype->Types[firstSharedComponent + j] == componentTypeInArchetype)
				{
					i2 = j;
					break;
				}
			}
			dstSharedComponentValues[i] = srcSharedComponentValues[i2];
		}
	}

	public unsafe void CreateEntities(Archetype* archetype, Entity* entities, int count)
	{
		ArchetypeChunkFilter archetypeChunkFilter = new ArchetypeChunkFilter
		{
			Archetype = archetype
		};
		while (count != 0)
		{
			ChunkIndex chunkWithEmptySlots = GetChunkWithEmptySlots(ref archetypeChunkFilter);
			int y = archetype->ChunkCapacity - chunkWithEmptySlots.Count;
			int num = math.min(count, y);
			ChunkDataUtility.Allocate(archetype, chunkWithEmptySlots, entities, num);
			count -= num;
			if (entities != null)
			{
				entities += num;
			}
		}
	}

	public unsafe void DestroyEntities(EntityQueryImpl* queryImpl, ref BufferTypeHandle<LinkedEntityGroup> linkedEntityGroupTypeHandle)
	{
		UnsafeChunkCacheIterator unsafeChunkCacheIterator = new UnsafeChunkCacheIterator(in queryImpl->_Filter, queryImpl->_QueryData->HasEnableableComponents != 0, queryImpl->GetMatchingChunkCache(), queryImpl->_QueryData->MatchingArchetypes.Ptr);
		int chunkIndexInCache = -1;
		v128 enableBits = default;
		int length = unsafeChunkCacheIterator.Length;
		using UnsafeList<ChunkAndEnabledMask> unsafeList = new UnsafeList<ChunkAndEnabledMask>(length, Allocator.Temp);
		ArchetypeChunk outputChunk;
		int outputChunkEntityCount;
		byte outputUseEnableBits;
		while (unsafeChunkCacheIterator.MoveNextChunk(ref chunkIndexInCache, out outputChunk, out outputChunkEntityCount, out outputUseEnableBits, ref enableBits))
		{
			unsafeList.AddNoResize(new ChunkAndEnabledMask
			{
				Chunk = outputChunk.m_Chunk,
				EnabledMask = enableBits,
				ChunkEntityCount = outputChunkEntityCount,
				UseEnabledMask = outputUseEnableBits
			});
		}
		EntityBatchInChunk* ptr = stackalloc EntityBatchInChunk[128];
		int i = 0;
		for (int length2 = unsafeList.Length; i < length2; i++)
		{
			ChunkIndex chunk = unsafeList[i].Chunk;
			if (unsafeList[i].UseEnabledMask == 0)
			{
				EntityBatchInChunk batch = new EntityBatchInChunk
				{
					Chunk = chunk,
					StartIndex = 0,
					Count = unsafeList[i].ChunkEntityCount
				};
				DestroyBatch(in batch);
				continue;
			}
			int num = 0;
			int nextRangeEnd = 0;
			enableBits = unsafeList[i].EnabledMask;
			int nextRangeBegin;
			while (EnabledBitUtility.TryGetNextRange(enableBits, nextRangeEnd, out nextRangeBegin, out nextRangeEnd))
			{
				ptr[num++] = new EntityBatchInChunk
				{
					Chunk = chunk,
					Count = nextRangeEnd - nextRangeBegin,
					StartIndex = nextRangeBegin
				};
			}
			Unity.Assertions.Assert.IsTrue(num <= 128);
			for (int num2 = num - 1; num2 >= 0; num2--)
			{
				DestroyBatch(in ptr[num2]);
			}
		}
	}

	public unsafe void DestroyEntities(Entity* entities, int count)
	{
		int num = 0;
		UnsafeList<Entity> entitiesList = new UnsafeList<Entity>(0, Allocator.TempJob);
		int minBufferLength = int.MaxValue;
		int maxBufferLength = 0;
		while (num != count)
		{
			EntityBatchInChunk firstEntityBatchInChunk = GetFirstEntityBatchInChunk(entities + num, count - num);
			ChunkIndex chunk = firstEntityBatchInChunk.Chunk;
			int count2 = firstEntityBatchInChunk.Count;
			int startIndex = firstEntityBatchInChunk.StartIndex;
			if (chunk == ChunkIndex.Null)
			{
				num += count2;
				continue;
			}
			AddToDestroyList(chunk, startIndex, count2, count, ref entitiesList, ref minBufferLength, ref maxBufferLength);
			EntityBatchInChunk batch = new EntityBatchInChunk
			{
				Chunk = chunk,
				StartIndex = startIndex,
				Count = count2
			};
			DestroyBatch(in batch);
			num += count2;
		}
		if (!entitiesList.IsEmpty)
		{
			Entity* ptr = entitiesList.Ptr;
			if (minBufferLength == maxBufferLength)
			{
				Entity* ptr2 = (Entity*)Memory.Unmanaged.Allocate(entitiesList.Length * sizeof(Entity), 16, Allocator.TempJob);
				int num2 = entitiesList.Length / minBufferLength;
				for (int i = 0; i != num2; i++)
				{
					for (int j = 0; j != minBufferLength; j++)
					{
						ptr2[j * num2 + i] = ptr[i * minBufferLength + j];
					}
				}
				DestroyEntities(ptr2, entitiesList.Length);
				Memory.Unmanaged.Free(ptr2, Allocator.TempJob);
			}
			else
			{
				DestroyEntities(ptr, entitiesList.Length);
			}
		}
		entitiesList.Dispose();
	}

	public unsafe ChunkIndex GetCleanChunkNoMetaChunk(Archetype* archetype, SharedComponentValues sharedComponentValues)
	{
		ChunkIndex chunkIndex = AllocateChunk();
		ChunkDataUtility.AddEmptyChunk(archetype, chunkIndex, sharedComponentValues);
		return chunkIndex;
	}

	public unsafe ChunkIndex GetCleanChunk(Archetype* archetype, SharedComponentValues sharedComponentValues)
	{
		ChunkIndex chunkIndex = AllocateChunk();
		ChunkDataUtility.AddEmptyChunk(archetype, chunkIndex, sharedComponentValues);
		if (archetype->MetaChunkArchetype != null)
		{
			CreateMetaEntityForChunk(chunkIndex);
		}
		return chunkIndex;
	}

	public unsafe void InstantiateEntities(Entity srcEntity, Entity* outputEntities, int instanceCount)
	{
		if (HasComponent(srcEntity, m_LinkedGroupType, out var _))
		{
			BufferHeader* componentDataWithTypeRO = (BufferHeader*)GetComponentDataWithTypeRO(srcEntity, m_LinkedGroupType);
			Entity* elementPointer = (Entity*)BufferHeader.GetElementPointer(componentDataWithTypeRO);
			int length = componentDataWithTypeRO->Length;
			InstantiateEntitiesGroup(elementPointer, length, outputEntities, outputRootEntityOnly: true, instanceCount, removePrefab: true);
		}
		else
		{
			InstantiateEntitiesOne(srcEntity, outputEntities, instanceCount, null, 0, removePrefab: true);
		}
	}

	public unsafe void InstantiateEntities(Entity* srcEntity, Entity* outputEntities, int entityCount, bool removePrefab)
	{
		InstantiateEntitiesGroup(srcEntity, entityCount, outputEntities, outputRootEntityOnly: false, 1, removePrefab);
	}

	internal unsafe void DestroyMetaChunkEntity(Entity entity)
	{
		RemoveComponent(entity, m_ChunkHeaderComponentType);
		DestroyEntities(&entity, 1);
	}

	internal unsafe void CreateMetaEntityForChunk(ChunkIndex chunk)
	{
		fixed (EntityComponentStore* ptr = &this)
		{
			Archetype* archetype = ptr->GetArchetype(chunk);
			Entity entity = Entity.Null;
			CreateEntities(archetype->MetaChunkArchetype, &entity, 1);
			chunk.MetaChunkEntity = entity;
			ChunkHeader* componentDataWithTypeRW = (ChunkHeader*)GetComponentDataWithTypeRW(entity, m_ChunkHeaderType, GlobalSystemVersion);
			componentDataWithTypeRW->ArchetypeChunk = new ArchetypeChunk(chunk, ptr);
		}
	}

	private unsafe void AddToDestroyList(ChunkIndex chunk, int indexInChunk, int batchCount, int inputDestroyCount, ref UnsafeList<Entity> entitiesList, ref int minBufferLength, ref int maxBufferLength)
	{
		Archetype* archetype = GetArchetype(chunk);
		int indexInTypeArray = ChunkDataUtility.GetIndexInTypeArray(archetype, m_LinkedGroupType);
		if (indexInTypeArray == -1)
		{
			return;
		}
		byte* componentDataWithTypeRO = ChunkDataUtility.GetComponentDataWithTypeRO(chunk, archetype, indexInChunk, m_LinkedGroupType);
		ushort num = archetype->SizeOfs[indexInTypeArray];
		for (int i = 0; i != batchCount; i++)
		{
			BufferHeader* ptr = (BufferHeader*)(componentDataWithTypeRO + num * i);
			int num2 = ptr->Length - 1;
			if (num2 > 0)
			{
				Entity* ptr2 = (Entity*)BufferHeader.GetElementPointer(ptr) + 1;
				if (entitiesList.Capacity == 0)
				{
					entitiesList.SetCapacity(inputDestroyCount * num2);
				}
				entitiesList.AddRange(ptr2, num2);
				minBufferLength = math.min(minBufferLength, num2);
				maxBufferLength = math.max(maxBufferLength, num2);
			}
		}
	}

	private unsafe void DestroyBatch(in EntityBatchInChunk batch)
	{
		ChunkIndex chunk = batch.Chunk;
		Archetype* archetype = GetArchetype(chunk);
		if (!archetype->CleanupNeeded)
		{
			ChunkDataUtility.Deallocate(archetype, in batch);
			return;
		}
		int startIndex = batch.StartIndex;
		int count = batch.Count;
		Archetype* cleanupResidueArchetype = archetype->CleanupResidueArchetype;
		if (archetype != cleanupResidueArchetype)
		{
			ArchetypeChunkFilter archetypeChunkFilter = new ArchetypeChunkFilter
			{
				Archetype = cleanupResidueArchetype
			};
			SharedComponentValues sharedComponentValues = archetype->Chunks.GetSharedComponentValues(chunk.ListIndex);
			if (RequiresBuildingResidueSharedComponentIndices(archetype, archetypeChunkFilter.Archetype))
			{
				BuildResidueSharedComponentIndices(archetype, archetypeChunkFilter.Archetype, sharedComponentValues, archetypeChunkFilter.SharedComponentValues);
			}
			else
			{
				sharedComponentValues.CopyTo(archetypeChunkFilter.SharedComponentValues, 0, archetype->NumSharedComponents);
			}
			if (count == chunk.Count)
			{
				Move(chunk, ref archetypeChunkFilter);
				return;
			}
			Move(new EntityBatchInChunk
			{
				Chunk = chunk,
				StartIndex = startIndex,
				Count = count
			}, ref archetypeChunkFilter);
		}
	}

	private unsafe bool RequiresBuildingResidueSharedComponentIndices(Archetype* srcArchetype, Archetype* dstArchetype)
	{
		if (dstArchetype->NumSharedComponents > 0)
		{
			return dstArchetype->NumSharedComponents != srcArchetype->NumSharedComponents;
		}
		return false;
	}

	private unsafe void BuildResidueSharedComponentIndices(Archetype* srcArchetype, Archetype* dstArchetype, SharedComponentValues srcSharedComponentValues, int* dstSharedComponentValues)
	{
		int firstSharedComponent = srcArchetype->FirstSharedComponent;
		int firstSharedComponent2 = dstArchetype->FirstSharedComponent;
		int numSharedComponents = dstArchetype->NumSharedComponents;
		int i = 0;
		int num = 0;
		while (num < numSharedComponents)
		{
			for (ComponentTypeInArchetype componentTypeInArchetype = dstArchetype->Types[num + firstSharedComponent2]; componentTypeInArchetype != srcArchetype->Types[i + firstSharedComponent]; i++)
			{
			}
			dstSharedComponentValues[num] = srcSharedComponentValues[i];
			num++;
			i++;
		}
	}

	private unsafe int InstantiateEntitiesOne(Entity srcEntity, Entity* outputEntities, int instanceCount, InstantiateRemapChunk* remapChunks, int remapChunksCount, bool removePrefab)
	{
		EntityInChunk entityInChunk = GetEntityInChunk(srcEntity);
		Archetype* archetype = GetArchetype(entityInChunk.Chunk);
		Archetype* ptr = (removePrefab ? archetype->InstantiateArchetype : archetype->CopyArchetype);
		ArchetypeChunkFilter archetypeChunkFilter = new ArchetypeChunkFilter
		{
			Archetype = ptr
		};
		SharedComponentValues sharedComponentValues = archetype->Chunks.GetSharedComponentValues(entityInChunk.Chunk.ListIndex);
		if (RequiresBuildingResidueSharedComponentIndices(archetype, ptr))
		{
			BuildResidueSharedComponentIndices(archetype, ptr, sharedComponentValues, archetypeChunkFilter.SharedComponentValues);
		}
		else
		{
			sharedComponentValues.CopyTo(archetypeChunkFilter.SharedComponentValues, 0, ptr->NumSharedComponents);
		}
		int num;
		for (int i = 0; i != instanceCount; i += num)
		{
			ChunkIndex chunkWithEmptySlots = GetChunkWithEmptySlots(ref archetypeChunkFilter);
			int count = chunkWithEmptySlots.Count;
			int y = ptr->ChunkCapacity - count;
			num = math.min(instanceCount - i, y);
			ChunkDataUtility.AllocateClone(ptr, chunkWithEmptySlots, outputEntities + i, num, srcEntity);
			if (remapChunks != null)
			{
				remapChunks[remapChunksCount].Chunk = chunkWithEmptySlots;
				remapChunks[remapChunksCount].IndexInChunk = count;
				remapChunks[remapChunksCount].AllocatedCount = num;
				remapChunks[remapChunksCount].InstanceBeginIndex = i;
				remapChunksCount++;
			}
		}
		return remapChunksCount;
	}

	private unsafe void InstantiateEntitiesGroup(Entity* srcEntities, int srcEntityCount, Entity* outputRootEntities, bool outputRootEntityOnly, int instanceCount, bool removePrefab)
	{
		int num = srcEntityCount * instanceCount;
		int num2 = sizeof(Entity) * num + sizeof(InstantiateRemapChunk) * num + sizeof(Entity) * instanceCount;
		byte* ptr = (byte*)((num2 <= 16384) ? stackalloc byte[(int)(uint)num2] : Memory.Unmanaged.Allocate(num2, 16, Allocator.Temp));
		Entity* ptr2 = (Entity*)ptr;
		InstantiateRemapChunk* ptr3 = (InstantiateRemapChunk*)(ptr2 + num);
		Entity* ptr4 = (Entity*)(ptr3 + num);
		int num3 = 0;
		for (int i = 0; i != srcEntityCount; i++)
		{
			Entity srcEntity = srcEntities[i];
			num3 = InstantiateEntitiesOne(srcEntity, ptr4, instanceCount, ptr3, num3, removePrefab);
			for (int j = 0; j != instanceCount; j++)
			{
				ptr2[j * srcEntityCount + i] = ptr4[j];
			}
			if (outputRootEntityOnly)
			{
				if (i == 0)
				{
					for (int k = 0; k != instanceCount; k++)
					{
						outputRootEntities[k] = ptr4[k];
					}
				}
			}
			else
			{
				for (int l = 0; l != instanceCount; l++)
				{
					outputRootEntities[l * srcEntityCount + i] = ptr4[l];
				}
			}
		}
		for (int m = 0; m != num3; m++)
		{
			ChunkIndex chunk = ptr3[m].Chunk;
			Archetype* archetype = GetArchetype(chunk);
			int allocatedCount = ptr3[m].AllocatedCount;
			int indexInChunk = ptr3[m].IndexInChunk;
			int instanceBeginIndex = ptr3[m].InstanceBeginIndex;
			Entity* remapDst = ptr2 + instanceBeginIndex * srcEntityCount;
			EntityRemapUtility.PatchEntitiesForPrefab(archetype->ScalarEntityPatches + 1, archetype->ScalarEntityPatchCount - 1, archetype->BufferEntityPatches, archetype->BufferEntityPatchCount, chunk.Buffer, indexInChunk, allocatedCount, srcEntities, remapDst, srcEntityCount);
			if (archetype->HasManagedEntityRefs)
			{
				ManagedChangesTracker.PatchEntitiesForPrefab(archetype, chunk, indexInChunk, allocatedCount, srcEntities, remapDst, srcEntityCount, Allocator.Temp);
			}
		}
		if (num2 > 16384)
		{
			Memory.Unmanaged.Free(ptr, Allocator.Temp);
		}
	}

	private unsafe EntityBatchInChunk GetFirstEntityBatchInChunk(Entity* entities, int count)
	{
		EntityInChunk entityInChunk = (Exists(*entities) ? GetEntityInChunk(*entities) : default(EntityInChunk));
		ChunkIndex chunk = entityInChunk.Chunk;
		int indexInChunk = entityInChunk.IndexInChunk;
		int i;
		for (i = 0; i < count; i++)
		{
			Entity entity = entities[i];
			entityInChunk = (Exists(entity) ? GetEntityInChunk(entity) : default(EntityInChunk));
			if (entityInChunk.Chunk != chunk || entityInChunk.IndexInChunk != indexInChunk + i)
			{
				break;
			}
		}
		Unity.Assertions.Assert.IsTrue(chunk == ChunkIndex.Null || indexInChunk < chunk.Count);
		Unity.Assertions.Assert.IsTrue(chunk == ChunkIndex.Null || indexInChunk + i <= chunk.Count);
		return new EntityBatchInChunk
		{
			Chunk = chunk,
			Count = i,
			StartIndex = indexInChunk
		};
	}

	public unsafe static JobHandle GetCreatedAndDestroyedEntities(EntityComponentStore* store, NativeList<int> state, NativeList<Entity> createdEntities, NativeList<Entity> destroyedEntities, bool async)
	{
		JobHandle jobHandle = default;
		GetCreatedAndDestroyedEntities(store, ref state, ref createdEntities, ref destroyedEntities, ref jobHandle, async);
		return jobHandle;
	}

	[BurstCompile]
	private unsafe static void GetCreatedAndDestroyedEntities(EntityComponentStore* store, ref NativeList<int> state, ref NativeList<Entity> createdEntities, ref NativeList<Entity> destroyedEntities, ref JobHandle jobHandle, bool async)
	{
		GetCreatedAndDestroyedEntities_000007CE$BurstDirectCall.Invoke(store, ref state, ref createdEntities, ref destroyedEntities, ref jobHandle, async);
	}

	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	public unsafe void CheckInternalConsistency(object[] managedComponentData)
	{
		Unity.Assertions.Assert.IsTrue(ManagedChangesTracker.Empty, "Found unapplied managed component store changes");
		UnsafeBitArray unsafeBitArray = new UnsafeBitArray(m_ManagedComponentIndex, Allocator.Temp);
		UnsafeParallelHashSet<ulong> unsafeParallelHashSet = new UnsafeParallelHashSet<ulong>(512, Allocator.Temp);
		Unity.Assertions.Assert.IsTrue(managedComponentData.Length >= m_ManagedComponentIndex, $"managed component data length {managedComponentData.Length} should not be less than {m_ManagedComponentIndex}");
		for (int i = m_ManagedComponentIndex; i < managedComponentData.Length; i++)
		{
			Unity.Assertions.Assert.IsNull(managedComponentData[i], $"unused managed component data {i} is not null");
		}
		fixed (EntityComponentStore* ptr = &this)
		{
		}
		int num = 0;
		for (int j = 0; j < m_Archetypes.Length; j++)
		{
			Archetype* ptr2 = m_Archetypes.Ptr[j];
			int firstManagedComponent = ptr2->FirstManagedComponent;
			int managedComponentsEnd = ptr2->ManagedComponentsEnd;
			Unity.Assertions.Assert.AreEqual((IntPtr)ptr, (IntPtr)ptr2->EntityComponentStore, "archetype refers to the wrong EntityComponentStore");
			for (int k = 0; k < ptr2->TypesCount; k++)
			{
				int num2 = ptr2->TypeIndexInArchetypeToMemoryOrderIndex[k];
				Unity.Assertions.Assert.AreEqual(k, ptr2->TypeMemoryOrderIndexToIndexInArchetype[num2], "archetype component types do not match expected memory order");
			}
			int num3 = 0;
			int chunkCapacity = ptr2->ChunkCapacity;
			for (int l = 0; l < ptr2->Chunks.Count; l++)
			{
				ChunkIndex chunkIndex = ptr2->Chunks[l];
				Unity.Assertions.Assert.IsTrue(ptr->GetArchetype(chunkIndex) == ptr2, "chunk belongs to incorrect archetype");
				int count = chunkIndex.Count;
				Unity.Assertions.Assert.IsTrue(chunkCapacity >= count, "chunk entity count exceeds chunk capacity");
				Unity.Assertions.Assert.AreEqual(count, ptr2->Chunks.GetChunkEntityCount(l), "cached chunk entity count in archetype does not match actual count");
				Unity.Assertions.Assert.AreNotEqual(0, count, "found chunk with entity count of 0; this should never happen");
				Entity* buffer = (Entity*)chunkIndex.Buffer;
				if (chunkIndex.SequenceNumber == 0L)
				{
					throw new ArgumentException("Sequence number must not be 0");
				}
				if (!unsafeParallelHashSet.Add(chunkIndex.SequenceNumber))
				{
					throw new ArgumentException("Sequence number must be unique");
				}
				if (count < chunkCapacity)
				{
					if (ptr2->NumSharedComponents == 0)
					{
						Unity.Assertions.Assert.IsTrue(chunkIndex.ListWithEmptySlotsIndex >= 0 && chunkIndex.ListWithEmptySlotsIndex < ptr2->ChunksWithEmptySlots.Length, "chunk with empty slots is not tracked correctly");
						Unity.Assertions.Assert.IsTrue(chunkIndex == ptr2->ChunksWithEmptySlots[chunkIndex.ListWithEmptySlotsIndex]);
					}
					else
					{
						Unity.Assertions.Assert.IsTrue(ptr2->FreeChunksBySharedComponents.Contains(chunkIndex), "chunk with empty slots and shared components is not tracked correctly");
					}
				}
				num3 += count;
				if (ptr2->HasChunkHeader)
				{
					Unity.Assertions.Assert.IsFalse(ptr2->HasChunkComponents, "chunks with a chunk header should not have chunk components");
				}
				Entity metaChunkEntity = chunkIndex.MetaChunkEntity;
				Unity.Assertions.Assert.AreEqual(ptr2->HasChunkComponents, metaChunkEntity != Entity.Null, $"expected hasChunkComponents={ptr2->HasChunkComponents}, actual={!ptr2->HasChunkComponents}");
				if (metaChunkEntity != Entity.Null)
				{
					TypeIndex typeIndex = TypeManager.GetTypeIndex<ChunkHeader>();
					ChunkHeader componentDataWithTypeRO = *(ChunkHeader*)GetComponentDataWithTypeRO(metaChunkEntity, typeIndex);
					Unity.Assertions.Assert.IsTrue(chunkIndex == componentDataWithTypeRO.ArchetypeChunk.m_Chunk, "chunk's metaChunkEntity chunk != chunk's metaChunk");
					ChunkIndex chunk = GetChunk(metaChunkEntity);
					Unity.Assertions.Assert.IsTrue(ptr->GetArchetype(chunk) == ptr->GetArchetype(chunkIndex)->MetaChunkArchetype, "chunk's metaChunk archetype doesn't match cached value");
					Unity.Assertions.Assert.IsTrue(componentDataWithTypeRO.ArchetypeChunk.m_EntityComponentStore == ptr, "metaChunkEntity's ArchetypeChunk has incorrect EntityComponentStore");
				}
				for (int m = firstManagedComponent; m < managedComponentsEnd; m++)
				{
					int* ptr3 = (int*)(chunkIndex.Buffer + ptr2->Offsets[m]);
					int n = 0;
					for (int num4 = count; n < num4; n++)
					{
						int num5 = ptr3[n];
						if (num5 != 0)
						{
							if (managedComponentData[num5].GetType() != TypeManager.GetType(ptr2->Types[m].TypeIndex))
							{
								Unity.Assertions.Assert.IsFalse(condition: true, $"managed component value has incorrect type index {TypeManager.GetType(ptr2->Types[m].TypeIndex)}");
							}
							Unity.Assertions.Assert.IsTrue(num5 < m_ManagedComponentIndex, "Managed component index in chunk is out of range.");
							Unity.Assertions.Assert.IsFalse(unsafeBitArray.IsSet(num5), "Managed component index is used multiple times.");
							unsafeBitArray.Set(num5, value: true);
						}
					}
				}
			}
			Unity.Assertions.Assert.AreEqual(num3, ptr2->EntityCount, "archetype's cached entity count is incorrect");
			num += num3;
		}
		unsafeParallelHashSet.Dispose();
		for (int num6 = 0; num6 < m_ManagedComponentIndex; num6++)
		{
			Unity.Assertions.Assert.AreEqual(managedComponentData[num6] != null, unsafeBitArray.IsSet(num6), $"managed component {num6}: expected isSet={managedComponentData[num6] != null}, but wasn't");
		}
		int* ptr4 = (int*)m_ManagedComponentFreeIndex.Ptr;
		int num7 = m_ManagedComponentFreeIndex.Length / 4;
		for (int num8 = 0; num8 < num7; num8++)
		{
			int num9 = ptr4[num8];
			Unity.Assertions.Assert.IsTrue(0 < num9 && num9 < m_ManagedComponentIndex, "Managed component index in free list is out of range.");
			Unity.Assertions.Assert.IsFalse(unsafeBitArray.IsSet(num9), "Managed component was marked as free but is used in chunk.");
			unsafeBitArray.Set(num9, value: true);
		}
		Unity.Assertions.Assert.IsTrue(m_ManagedComponentIndex - 1 == 0 || unsafeBitArray.TestAll(1, m_ManagedComponentIndex - 1), "Managed component index has leaked.");
		unsafeBitArray.Dispose();
		s_entityStore.Data.IntegrityCheck();
	}

	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	public unsafe static void AssertAllEntitiesCopied(EntityComponentStore* lhs, EntityComponentStore* rhs)
	{
	}

	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	public void ValidateEntity(Entity entity)
	{
		if (entity.Index < 0)
		{
			throw new ArgumentException($"All entities created using EntityCommandBuffer.CreateEntity must be realized via playback(). One of the entities is still deferred (Index: {entity.Index}).");
		}
		int num = 134217728;
		if ((uint)entity.Index >= (uint)num)
		{
			throw new ArgumentException("An Entity index is higher than the valid range. This means the entity.Index got corrupted or incorrectly assigned and it may not be used.");
		}
	}

	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private unsafe void AssertArchetypeComponents(ComponentTypeInArchetype* types, int count)
	{
		if (count < 1)
		{
			throw new ArgumentException("Invalid component count");
		}
		if (count >= 32767)
		{
			throw new ArgumentException($"Archetypes can have a maximum of {short.MaxValue} components.");
		}
		if (types->TypeIndex == TypeIndex.Null)
		{
			throw new ArgumentException("Component type may not be null");
		}
		if (types->TypeIndex != m_EntityType)
		{
			throw new ArgumentException("The Entity ID must always be the first component");
		}
		for (int i = 1; i < count; i++)
		{
			if (types[i - 1].TypeIndex == types[i].TypeIndex)
			{
				throw new ArgumentException($"It is not allowed to have two components of the same type on the same entity. ({types[i - 1]} and {types[i]})");
			}
			if (GetTypeInfo(types[i].TypeIndex).SizeInChunk > 65535)
			{
				throw new ArgumentException($"IComponentData {types[i]} is too large. SizeOf may not be larger than {ushort.MaxValue}");
			}
		}
	}

	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	public unsafe void AssertCanCreateArchetype(ComponentType* componentTypes, int componentTypeCount)
	{
		int num = GetComponentArraySize(GetTypeInfo(m_EntityType).SizeInChunk, 1);
		for (int i = 0; i < componentTypeCount; i++)
		{
			int componentArraySize = GetComponentArraySize(GetTypeInfo(componentTypes[i].TypeIndex).SizeInChunk, 1);
			num += componentArraySize;
		}
		int num2 = 16320;
		if (num > num2)
		{
			throw new ArgumentException($"Archetype too large to fit in chunk. Instance size {num} bytes.  Maximum chunk size {num2}. Components in new archetype: {AggregateNewArchetypesComponentTypes(componentTypes, componentTypeCount)}");
		}
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	public void AssertEntityExists(Entity entity)
	{
	}

	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	public unsafe void AssertEntitiesExist(Entity* entities, int count)
	{
		for (int i = 0; i < count; i++)
		{
			Entity* ptr = entities + i;
			if (!s_entityStore.Data.Exists(*ptr))
			{
				throw new ArgumentException("An EntityManager command is operating on an invalid entity. This usually means that the Entity has already been destroyed or was never created. This can happen when a subscene is opened or closed between when a EntityCommandBuffer has been recorded and played back. This can invalidate recorded Entities." + AppendDestroyedEntityRecordError(*ptr));
			}
		}
	}

	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	public unsafe void AssertValidEntities(Entity* entities, int count)
	{
		for (int i = 0; i < count; i++)
		{
			_ = i;
		}
	}

	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	public void AssertEntityHasComponent(Entity entity, ComponentType componentType)
	{
		if (HasComponent(entity, componentType, out var entityExists))
		{
			return;
		}
		if (!entityExists)
		{
			throw new ArgumentException("The entity does not exist." + AppendDestroyedEntityRecordError(entity));
		}
		throw new ArgumentException($"A component with type:{componentType} has not been added to the entity." + AppendRemovedComponentRecordError(entity, componentType));
	}

	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	public void AssertEntityHasComponent(NativeArray<Entity> entities, ComponentType componentType)
	{
		for (int i = 0; i < entities.Length; i++)
		{
			Entity entity = entities[i];
			if (!HasComponent(entity, componentType, out var entityExists))
			{
				if (!entityExists)
				{
					throw new ArgumentException("The entity does not exist." + AppendDestroyedEntityRecordError(entity));
				}
				throw new ArgumentException($"A component with type:{componentType} has not been added to the entity." + AppendRemovedComponentRecordError(entity, componentType));
			}
		}
	}

	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	public void AssertEntityHasComponent(Entity entity, TypeIndex componentTypeIndex)
	{
	}

	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	public void AssertEntityHasComponent(Entity entity, TypeIndex componentTypeIndex, ref LookupCache typeLookupCache)
	{
		if (Hint.Likely(HasComponent(entity, componentTypeIndex, ref typeLookupCache, out var entityExists)))
		{
			return;
		}
		if (Hint.Unlikely(!entityExists))
		{
			throw new ArgumentException("The entity does not exist." + AppendDestroyedEntityRecordError(entity));
		}
		throw new ArgumentException($"A component with type:{componentTypeIndex} has not been added to the entity." + AppendRemovedComponentRecordError(entity, ComponentType.FromTypeIndex(componentTypeIndex)));
	}

	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	public unsafe void AssertNonEmptyArchetypesHaveComponent(UnsafeMatchingArchetypePtrList archetypeList, ComponentType componentType)
	{
		int length = archetypeList.Length;
		MatchingArchetype** ptr = archetypeList.Ptr;
		TypeIndex typeIndex = componentType.TypeIndex;
		for (int i = 0; i < length; i++)
		{
			if (Hint.Unlikely(ptr[i]->Archetype->EntityCount > 0 && ChunkDataUtility.GetIndexInTypeArray(ptr[i]->Archetype, typeIndex) == -1))
			{
				throw new ArgumentException($"Archetype does not have component {componentType}");
			}
		}
	}

	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	public void AssertComponentIsUnmanaged(TypeIndex componentTypeIndex)
	{
		if (TypeManager.IsManagedType(componentTypeIndex))
		{
			throw new ArgumentException("Component type is managed. Can not get pointer to data");
		}
	}

	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	public unsafe void AssertCanAddComponent(Archetype* archetype, ComponentType componentType)
	{
		if (componentType == m_EntityComponentType)
		{
			throw new ArgumentException("Cannot add Entity as a component.");
		}
		if (componentType.IsSharedComponent && archetype->NumSharedComponents == 16)
		{
			throw new InvalidOperationException($"Cannot add more than {16} SharedComponent's to a single Archetype. Attempting to add '{componentType}'. Archetype already contains types ({AggregateArchetypeComponentTypes(archetype)}).");
		}
		int componentArraySize = GetComponentArraySize(GetTypeInfo(componentType.TypeIndex).SizeInChunk, 1);
		int num = archetype->InstanceSizeWithOverhead + componentArraySize;
		int num2 = 16320;
		if (num > num2)
		{
			throw new InvalidOperationException($"Entity archetype component data is too large. Previous archetype size per instance {archetype->InstanceSizeWithOverhead} bytes. Attempting to add component '{componentType}' with size {componentArraySize} bytes. Maximum chunk size {num2}.");
		}
	}

	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	public unsafe void AssertCanAddComponents(Archetype* archetype, in ComponentTypeSet componentTypeSet)
	{
		int num = 0;
		for (int i = 0; i < componentTypeSet.Length; i++)
		{
			ComponentType componentType = componentTypeSet.GetComponentType(i);
			if (componentType == m_EntityComponentType)
			{
				throw new ArgumentException("Cannot add Entity as a component.");
			}
			TypeManager.TypeInfo typeInfo = GetTypeInfo(componentType.TypeIndex);
			num += GetComponentArraySize(typeInfo.SizeInChunk, 1);
		}
		if (componentTypeSet.m_masks.SharedComponents + archetype->NumSharedComponents > 16)
		{
			throw new InvalidOperationException($"Cannot add more than {16} SharedComponent's to a single Archetype. Attempting to add types {AggregateComponentTypes(in componentTypeSet)}. Archetype already contains types ({AggregateArchetypeComponentTypes(archetype)}).");
		}
		int num2 = archetype->InstanceSizeWithOverhead + num;
		int num3 = 16320;
		if (num2 > num3)
		{
			throw new InvalidOperationException($"Entity archetype component data is too large. Previous archetype size per instance {archetype->InstanceSizeWithOverhead} bytes. Attempting to add multiple components ({AggregateComponentTypes(in componentTypeSet)}) with a combined size {num} bytes. Maximum chunk size {num3}. Archetype already contains types ({AggregateArchetypeComponentTypes(archetype)}).");
		}
	}

	private static string AggregateComponentTypes(in ComponentTypeSet componentTypeSet)
	{
		string text = $"{componentTypeSet.Length}: ";
		for (int i = 0; i < componentTypeSet.Length; i++)
		{
			ComponentType componentType = componentTypeSet.GetComponentType(i);
			text += $"'{componentType}'";
			if (i < componentTypeSet.Length - 1)
			{
				text += ", ";
			}
		}
		return text;
	}

	private unsafe static string AggregateArchetypeComponentTypes(Archetype* archetype)
	{
		int typesCount = archetype->TypesCount;
		string text = $"{typesCount}: ";
		for (int i = 0; i < typesCount; i++)
		{
			text += $"'{TypeManager.GetType(archetype->Types[i].TypeIndex)}'";
			if (i < typesCount - 1)
			{
				text += ", ";
			}
		}
		return text;
	}

	private unsafe static string AggregateNewArchetypesComponentTypes(ComponentType* componentTypes, int componentTypeCount)
	{
		string text = $"{componentTypeCount}: ";
		for (int i = 0; i < componentTypeCount; i++)
		{
			TypeIndex typeIndex = componentTypes[i].TypeIndex;
			text += $"'{TypeManager.GetType(typeIndex)}'";
			if (i < componentTypeCount - 1)
			{
				text += ", ";
			}
		}
		return text;
	}

	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	public void AssertCanAddComponent(Entity entity, ComponentType componentType)
	{
		if (!Exists(entity))
		{
			throw new InvalidOperationException("The entity does not exist." + AppendDestroyedEntityRecordError(entity));
		}
	}

	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	public void AssertCanAddComponent(Entity entity, TypeIndex componentType)
	{
	}

	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	public unsafe void AssertCanAddComponent(EntityQueryImpl* queryImpl, ComponentType componentType)
	{
		fixed (EntityComponentStore* ptr = &this)
		{
			if (Hint.Unlikely((ulong)queryImpl->_Access->EntityComponentStore != (ulong)ptr))
			{
				throw new InvalidOperationException("Provided query belongs to a different World.");
			}
		}
		UnsafeMatchingArchetypePtrList matchingArchetypes = queryImpl->_QueryData->MatchingArchetypes;
		int length = matchingArchetypes.Length;
		_ = matchingArchetypes.Ptr;
		for (int i = 0; i < length; i++)
		{
		}
	}

	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	public unsafe void AssertCanAddComponents(UnsafeMatchingArchetypePtrList archetypeList, in ComponentTypeSet componentTypeSet)
	{
		int num = 0;
		int num2 = 0;
		for (int i = 0; i < componentTypeSet.Length; i++)
		{
			ComponentType componentType = componentTypeSet.GetComponentType(i);
			if (componentType == m_EntityComponentType)
			{
				throw new ArgumentException("Cannot add Entity as a component.");
			}
			if (componentType.IsSharedComponent)
			{
				num++;
			}
			num2 += GetComponentArraySize(GetTypeInfo(componentType.TypeIndex).SizeInChunk, 1);
		}
		int length = archetypeList.Length;
		MatchingArchetype** ptr = archetypeList.Ptr;
		for (int j = 0; j < length; j++)
		{
			Archetype* archetype = ptr[j]->Archetype;
			if (archetype->NumSharedComponents + num > 16)
			{
				throw new InvalidOperationException($"Cannot add more than {16} SharedComponent's to a single Archetype. Attempting to add types {AggregateComponentTypes(in componentTypeSet)}. Archetype already contains types ({AggregateArchetypeComponentTypes(archetype)}).");
			}
			if (archetype->InstanceSizeWithOverhead + num2 > 16320)
			{
				throw new InvalidOperationException($"Entity archetype component data is too large. Previous archetype size per instance {archetype->InstanceSizeWithOverhead} bytes. Attempting to add components {AggregateComponentTypes(in componentTypeSet)} with total size {num2} bytes. Maximum chunk size {16320}. Archetype already contains types ({AggregateArchetypeComponentTypes(archetype)}).");
			}
		}
	}

	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	public void AssertCanAddComponents(Entity entity, in ComponentTypeSet typeSet)
	{
		if (!Exists(entity))
		{
			throw new InvalidOperationException("The entity does not exist." + AppendDestroyedEntityRecordError(entity));
		}
	}

	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	public void AssertCanAddComponents(NativeArray<Entity> entities, in ComponentTypeSet typeSet)
	{
		for (int i = 0; i < entities.Length; i++)
		{
			_ = entities[i];
		}
	}

	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	public void AssertCanAddComponent(NativeArray<Entity> entities, ComponentType type)
	{
		for (int i = 0; i < entities.Length; i++)
		{
			_ = entities[i];
		}
	}

	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	public unsafe void AssertCanAddComponent(NativeList<EntityBatchInChunk> batches, ComponentType componentType)
	{
		Archetype* ptr = null;
		for (int i = 0; i < batches.Length; i++)
		{
			Archetype* archetype = GetArchetype(batches[i].Chunk);
			if (archetype != ptr)
			{
				_ = 0u;
				ptr = archetype;
			}
		}
	}

	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	public void AssertCanRemoveComponent(ComponentType componentType)
	{
		if (componentType == m_EntityComponentType)
		{
			throw new ArgumentException("Cannot remove Entity as a component. Use DestroyEntity if you want to delete Entity and all associated components.");
		}
	}

	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	public void AssertCanRemoveComponents(in ComponentTypeSet typeSet)
	{
		for (int i = 0; i < typeSet.Length; i++)
		{
		}
	}

	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private unsafe void AssertWillDestroyAllInLinkedEntityGroup(UnsafeList<ChunkAndEnabledMask> chunksToProcess, ref BufferTypeHandle<LinkedEntityGroup> linkedGroupTypeHandle, bool queryHasEnableableComponents)
	{
		UnsafeList<ChunkAndEnabledMask> list = new UnsafeList<ChunkAndEnabledMask>(chunksToProcess.Length, Allocator.Temp);
		list.CopyFrom(in chunksToProcess);
		list.Sort();
		UnsafeList<ChunkIndex> list2 = new UnsafeList<ChunkIndex>(list.Length, Allocator.Temp);
		int i = 0;
		for (int length = list.Length; i < length; i++)
		{
			list2.AddNoResize(list[i].Chunk);
		}
		fixed (EntityComponentStore* entityComponentStore = &this)
		{
			int j = 0;
			for (int length2 = chunksToProcess.Length; j < length2; j++)
			{
				ArchetypeChunk archetypeChunk = new ArchetypeChunk
				{
					m_Chunk = chunksToProcess[j].Chunk,
					m_EntityComponentStore = entityComponentStore
				};
				if (!archetypeChunk.Has(ref linkedGroupTypeHandle))
				{
					continue;
				}
				ChunkEntityEnumerator chunkEntityEnumerator = new ChunkEntityEnumerator(chunksToProcess[j].UseEnabledMask != 0, chunksToProcess[j].EnabledMask, chunksToProcess[j].ChunkEntityCount);
				Entity* buffer = (Entity*)chunksToProcess[j].Chunk.Buffer;
				BufferAccessor<LinkedEntityGroup> bufferAccessor = archetypeChunk.GetBufferAccessor(ref linkedGroupTypeHandle);
				int nextIndex;
				while (chunkEntityEnumerator.NextEntityIndex(out nextIndex))
				{
					DynamicBuffer<LinkedEntityGroup> dynamicBuffer = bufferAccessor[nextIndex];
					Entity* unsafeReadOnlyPtr = (Entity*)dynamicBuffer.GetUnsafeReadOnlyPtr();
					int k = 0;
					for (int length3 = dynamicBuffer.Length; k < length3; k++)
					{
						Entity entity = unsafeReadOnlyPtr[k];
						if (Exists(entity))
						{
							EntityInChunk entityInChunk = GetEntityInChunk(entity);
							int num = list2.BinarySearch(entityInChunk.Chunk);
							if (Hint.Likely(num >= 0) && queryHasEnableableComponents && list[num].UseEnabledMask != 0)
							{
								ChunkAndEnabledMask chunkAndEnabledMask = list[num];
								Hint.Unlikely((EnabledBitUtility.ShiftRight(in chunkAndEnabledMask.EnabledMask, entityInChunk.IndexInChunk).ULong0 & 1) == 0);
							}
						}
					}
				}
			}
		}
	}

	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	public void ThrowDestroyEntityError(Entity errorEntity, Entity errorReferencedEntity)
	{
		ThrowDestroyEntityErrorFancy(errorEntity, errorReferencedEntity);
		throw new ArgumentException("DestroyEntity(EntityQuery query) is destroying an entity which contains a LinkedEntityGroup with an entity not included in the query. If you want to destroy entities using a query all linked entities must be contained in the query.. For more detail, disable Burst compilation.");
	}

	[BurstDiscard]
	private void ThrowDestroyEntityErrorFancy(Entity errorEntity, Entity errorReferencedEntity)
	{
		string text = (Exists(errorEntity) ? GetName(errorEntity) : "(Deleted)");
		string text2 = (Exists(errorReferencedEntity) ? GetName(errorReferencedEntity) : "(Deleted)");
		throw new ArgumentException($"DestroyEntity(EntityQuery query) is destroying entity {errorEntity} '{text}' which contains a LinkedEntityGroup and the entity {errorReferencedEntity} '{text2}' in that group is not included in the query. If you want to destroy entities using a query all linked entities must be contained in the query..");
	}

	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	public unsafe static void AssertArchetypeDoesNotRemoveCleanupComponents(Archetype* src, Archetype* dst)
	{
		int i = 0;
		int num = 0;
		while (i < src->TypesCount && num < dst->TypesCount)
		{
			TypeIndex typeIndex = src->Types[i].TypeIndex;
			TypeIndex typeIndex2 = dst->Types[num].TypeIndex;
			if (typeIndex == typeIndex2)
			{
				i++;
				num++;
			}
			else if (typeIndex2 > typeIndex)
			{
				if (src->Types[i].IsCleanupComponent)
				{
					throw new ArgumentException($"Cleanup components may not be removed via SetArchetype: {src->Types[i]}");
				}
				i++;
			}
			else
			{
				num++;
			}
		}
		for (; i < src->TypesCount; i++)
		{
			if (src->Types[i].IsCleanupComponent)
			{
				throw new ArgumentException($"Cleanup components may not be removed via SetArchetype: {src->Types[i]}");
			}
		}
	}

	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	public unsafe void CheckCanAddChunkComponent(NativeArray<ArchetypeChunk> chunkArray, ComponentType componentType, ref bool result)
	{
		ArchetypeChunk* unsafeReadOnlyPtr = (ArchetypeChunk*)chunkArray.GetUnsafeReadOnlyPtr();
		for (int i = 0; i < chunkArray.Length; i++)
		{
			_ = unsafeReadOnlyPtr[i];
			if (ChunkDataUtility.GetIndexInTypeArray(unsafeReadOnlyPtr[i].Archetype.Archetype, componentType.TypeIndex) != -1)
			{
				result = false;
				break;
			}
		}
	}

	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	public unsafe void AssertCanInstantiateEntities(Entity srcEntity, Entity* outputEntities, int instanceCount)
	{
		if (HasComponent(srcEntity, m_LinkedGroupType, out var entityExists))
		{
			BufferHeader* componentDataWithTypeRO = (BufferHeader*)GetComponentDataWithTypeRO(srcEntity, m_LinkedGroupType);
			Entity* elementPointer = (Entity*)BufferHeader.GetElementPointer(componentDataWithTypeRO);
			int length = componentDataWithTypeRO->Length;
			if (length == 0 || *elementPointer != srcEntity)
			{
				throw new ArgumentException("LinkedEntityGroup[0] must always be the Entity itself.");
			}
			for (int i = 0; i < length; i++)
			{
				if (!Exists(elementPointer[i]))
				{
					throw new ArgumentException($"The srcEntity's LinkedEntityGroup references an entity that is invalid. (Entity at index {i} on the LinkedEntityGroup.)");
				}
				if (GetArchetype(elementPointer[i])->InstantiateArchetype == null)
				{
					throw new ArgumentException($"The srcEntity's LinkedEntityGroup references an entity that has already been destroyed. (Entity at index {i} on the LinkedEntityGroup. Only cleanup components are left on the entity)");
				}
			}
		}
		else
		{
			if (!entityExists)
			{
				throw new ArgumentException("srcEntity is not a valid entity");
			}
			if (GetArchetype(srcEntity)->InstantiateArchetype == null)
			{
				throw new ArgumentException("srcEntity is not instantiable because it has already been destroyed. (Only cleanup components are left on it)");
			}
		}
	}

	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	public unsafe void AssertCanInstantiateEntities(Entity* srcEntity, int entityCount, bool removePrefab)
	{
		for (int i = 0; i < entityCount; i++)
		{
			if (!Exists(srcEntity[i]))
			{
				throw new ArgumentException($"The srcEntity[{i}] references an entity that is invalid." + AppendDestroyedEntityRecordError(*srcEntity));
			}
			Archetype* archetype = GetArchetype(srcEntity[i]);
			if ((removePrefab ? archetype->InstantiateArchetype : archetype->CopyArchetype) == null)
			{
				throw new ArgumentException($"The srcEntity[{i}] references an entity that has already been destroyed. (Only cleanup components are left on the entity)");
			}
		}
	}

	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	public unsafe static void AssertValidEntityQuery(EntityQuery query, EntityComponentStore* store)
	{
		_ = query._GetImpl()->_Access->EntityComponentStore;
	}

	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	public unsafe static void AssertValidEntityQuery(EntityComponentStore* queryStore, EntityComponentStore* store)
	{
		if (queryStore != store)
		{
			if (queryStore == null)
			{
				throw new InvalidOperationException("The EntityQuery has been disposed and can no longer be used.");
			}
			throw new InvalidOperationException("EntityQuery is associated with a different world");
		}
	}

	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	public unsafe static void AssertValidArchetype(EntityComponentStore* queryStore, EntityArchetype archetype)
	{
	}

	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	public unsafe static void AssertPaddingBitsAreZeroForArchetype(Archetype* archetype)
	{
		for (int i = 0; i < archetype->Chunks.Count; i++)
		{
			ChunkIndex chunkIndex = archetype->Chunks[i];
			for (int j = 0; j < archetype->EnableableTypesCount; j++)
			{
				int num = archetype->EnableableTypeIndexInArchetype[j];
				int num2 = archetype->TypeIndexInArchetypeToMemoryOrderIndex[num];
				v128 v257 = *archetype->Chunks.GetComponentEnabledMaskArrayForTypeInChunk(num2, i);
				int num3 = EnabledBitUtility.countbits(EnabledBitUtility.ShiftRight(in v257, chunkIndex.Count));
				if (num3 != 0)
				{
					Unity.Assertions.Assert.AreEqual(0, num3, $"enabled bits padding check failed: chunk={i} memoryOrderIndex={num2} mask={v257.ULong1:X16}:{v257.ULong0:X16} entityCount={chunkIndex.Count} archetype={*archetype}");
				}
			}
		}
	}

	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	public unsafe static void AssertEnabledBitsHierarchyIsCorrectForArchetype(Archetype* archetype)
	{
		for (int i = 0; i < archetype->Chunks.Count; i++)
		{
			ChunkIndex chunkIndex = archetype->Chunks[i];
			for (int j = 0; j < archetype->EnableableTypesCount; j++)
			{
				int num = archetype->EnableableTypeIndexInArchetype[j];
				int num2 = archetype->TypeIndexInArchetypeToMemoryOrderIndex[num];
				v128 componentEnabledMaskArrayForTypeInChunk = *archetype->Chunks.GetComponentEnabledMaskArrayForTypeInChunk(num2, i);
				int chunkDisabledCountForType = archetype->Chunks.GetChunkDisabledCountForType(num2, i);
				int num3 = chunkIndex.Count - EnabledBitUtility.countbits(componentEnabledMaskArrayForTypeInChunk);
				if (num3 != chunkDisabledCountForType)
				{
					Unity.Assertions.Assert.AreEqual(num3, chunkDisabledCountForType, $"enabled bits hierarchical mismatch: chunk={i} memoryOrderIndex={num2} mask={componentEnabledMaskArrayForTypeInChunk.ULong1:X16}:{componentEnabledMaskArrayForTypeInChunk.ULong0:X16} entityCount={chunkIndex.Count} storedCount={chunkDisabledCountForType} archetype={*archetype}");
				}
			}
		}
	}

	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	internal void AssertNotZeroSizedComponent(TypeIndex typeIndex)
	{
		if (Hint.Unlikely(typeIndex.IsZeroSized))
		{
			throw new ArgumentException($"This operation can not be called with a zero sized component ({typeIndex}).");
		}
	}

	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	internal static void AssertComponentSizeMatches(TypeIndex typeIndex, int size)
	{
		int sizeInChunk = TypeManager.GetTypeInfo(typeIndex).SizeInChunk;
		if (Hint.Unlikely(sizeInChunk != size))
		{
			throw new ArgumentException($"Provided data size={size} for type {typeIndex} does not match expected SizeInChunk={sizeInChunk}. (This should never happen; please use \"Help -> Report A Bug\" to inform the DOTS team)");
		}
	}

	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	internal static void AssertComponentEnableable(TypeIndex typeIndex)
	{
		if (Hint.Unlikely(!typeIndex.IsEnableable))
		{
			throw new ArgumentException($"Component Enabled Bits APIs (SetComponentEnabled, IsComponentEnabled, etc) can not be called with a component type ({typeIndex}) that does not implement IEnableableComponent");
		}
	}

	internal static string AppendDestroyedEntityRecordError(Entity e)
	{
		return null;
	}

	internal static string AppendRemovedComponentRecordError(Entity e, ComponentType type)
	{
		return null;
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	[BurstCompile]
	internal unsafe static void EntityBatchFromEntityChunkDataShared$BurstManaged(EntityComponentStore* ecs, in EntityInChunk* chunkData, int chunkCount, EntityBatchInChunk* entityBatchList, int* currentbatchIndex, int nSharedComponentsToAdd, int* foundError)
	{
		*foundError = 0;
		int num = 0;
		EntityBatchInChunk entityBatchInChunk = new EntityBatchInChunk
		{
			Chunk = chunkData[num].Chunk,
			StartIndex = chunkData[num].IndexInChunk,
			Count = 1
		};
		num++;
		while (num < chunkCount)
		{
			if (chunkData[num].Equals(chunkData[num - 1]))
			{
				num++;
				continue;
			}
			ChunkIndex chunk = chunkData[num].Chunk;
			int indexInChunk = chunkData[num].IndexInChunk;
			bool flag = chunk != entityBatchInChunk.Chunk;
			bool flag2 = indexInChunk != entityBatchInChunk.StartIndex + entityBatchInChunk.Count;
			if ((flag | flag2) && entityBatchInChunk.Chunk != ChunkIndex.Null)
			{
				Archetype* archetype = ecs->GetArchetype(entityBatchInChunk.Chunk);
				if (nSharedComponentsToAdd + archetype->NumSharedComponents > 16)
				{
					*foundError = 1;
					return;
				}
				entityBatchList[*currentbatchIndex] = entityBatchInChunk;
				(*currentbatchIndex)++;
				if (*currentbatchIndex > chunkCount)
				{
					*foundError = 1;
					return;
				}
				entityBatchInChunk = new EntityBatchInChunk
				{
					Chunk = chunk,
					StartIndex = indexInChunk,
					Count = 1
				};
			}
			else
			{
				entityBatchInChunk = new EntityBatchInChunk
				{
					Chunk = entityBatchInChunk.Chunk,
					StartIndex = entityBatchInChunk.StartIndex,
					Count = entityBatchInChunk.Count + 1
				};
			}
			num++;
		}
		if (entityBatchInChunk.Chunk == ChunkIndex.Null)
		{
			return;
		}
		if (nSharedComponentsToAdd + ecs->GetArchetype(entityBatchInChunk.Chunk)->NumSharedComponents > 16)
		{
			*foundError = 1;
			return;
		}
		entityBatchList[*currentbatchIndex] = entityBatchInChunk;
		(*currentbatchIndex)++;
		if (*currentbatchIndex > chunkCount)
		{
			*foundError = 1;
		}
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	[BurstCompile]
	internal unsafe static void SortEntityInChunk$BurstManaged(EntityInChunk* entityInChunks, int count)
	{
		NativeSortExtension.Sort(entityInChunks, count);
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	[BurstCompile]
	internal unsafe static void GatherEntityInChunkForEntities$BurstManaged(Entity* Entities, EntityInChunk* EntityChunkData, int numEntities)
	{
		for (int i = 0; i < numEntities; i++)
		{
			Entity entity = Entities[i];
			EntityChunkData[i] = s_entityStore.Data.GetEntityInChunk(entity);
		}
	}

	[MethodImpl(MethodImplOptions.AggressiveInlining)]
	[BurstCompile]
	internal unsafe static void GetCreatedAndDestroyedEntities$BurstManaged(EntityComponentStore* store, ref NativeList<int> state, ref NativeList<Entity> createdEntities, ref NativeList<Entity> destroyedEntities, ref JobHandle jobHandle, bool async)
	{
		NativeList<int> newState = new NativeList<int>(async ? Allocator.TempJob : Allocator.Temp);
		UnsafePtrList<Archetype> archetypes = store->m_Archetypes;
		int i = 0;
		for (int length = archetypes.Length; i < length; i++)
		{
			Archetype* ptr = store->m_Archetypes.Ptr[i];
			if (!ptr->HasChunkHeader)
			{
				ArchetypeChunkData chunks = ptr->Chunks;
				int j = 0;
				for (int count = chunks.Count; j < count; j++)
				{
					ChunkIndex chunkIndex = chunks[j];
					Entity* buffer = (Entity*)chunkIndex.Buffer;
					newState.AddRange(buffer, chunkIndex.Count * 2);
				}
			}
		}
		GetCreatedAndDestroyedEntitiesJob jobData = new GetCreatedAndDestroyedEntitiesJob
		{
			OldState = state,
			NewState = newState,
			CreatedEntities = createdEntities,
			DestroyedEntities = destroyedEntities
		};
		if (!async)
		{
			jobData.Execute();
			return;
		}
		jobHandle = IJobExtensions.Schedule(jobData);
		jobHandle = newState.Dispose(jobHandle);
		jobHandle.Complete();
	}
}
