using System;
using System.Collections.Generic;
using Colossal.Collections;
using Unity.Burst;
using Unity.Burst.Intrinsics;
using Unity.Collections;
using Unity.Entities;
using Unity.Jobs;
using UnityEngine;

namespace Colossal.Serialization.Entities;

public class EntitySerializer<TWriteBuffer> : IDisposable where TWriteBuffer : IWriteBuffer
{
	[BurstCompile]
	private struct AllocateEnabledMaskListJob : IJob
	{
		[ReadOnly]
		public NativeList<ArchetypeChunk> m_ChunkList;

		public NativeList<v128> m_EnabledMaskList;

		public void Execute()
		{
			m_EnabledMaskList.ResizeUninitialized(m_ChunkList.Length);
		}
	}

	[BurstCompile]
	private struct InitEnabledMaskJob : IJobParallelForDefer
	{
		[ReadOnly]
		public NativeArray<ArchetypeChunk> m_ChunkArray;

		public NativeArray<v128> m_EnabledMaskArray;

		public void Execute(int index)
		{
			ArchetypeChunk archetypeChunk = m_ChunkArray[index];
			ref v128 reference = ref m_EnabledMaskArray.ElementAt(index);
			if (archetypeChunk.Count <= 64)
			{
				reference.ULong0 = ulong.MaxValue >> 64 - archetypeChunk.Count;
				reference.ULong1 = 0uL;
			}
			else
			{
				reference.ULong0 = ulong.MaxValue;
				reference.ULong1 = ulong.MaxValue >> 128 - archetypeChunk.Count;
			}
		}
	}

	[BurstCompile]
	private struct CheckEnabledMaskJob : IJobParallelForDefer
	{
		[ReadOnly]
		public NativeArray<ArchetypeChunk> m_ChunkArray;

		[ReadOnly]
		public DynamicComponentTypeHandle m_TypeHandle;

		public NativeArray<v128> m_EnabledMaskArray;

		public void Execute(int index)
		{
			ArchetypeChunk archetypeChunk = m_ChunkArray[index];
			if (archetypeChunk.Has(ref m_TypeHandle))
			{
				ref v128 reference = ref m_EnabledMaskArray.ElementAt(index);
				v128 enableableBits = archetypeChunk.GetEnableableBits(ref m_TypeHandle);
				reference.ULong0 &= enableableBits.ULong0;
				reference.ULong1 &= enableableBits.ULong1;
			}
		}
	}

	[BurstCompile]
	private struct AllocateArchetypeMapJob : IJob
	{
		[ReadOnly]
		public NativeList<ArchetypeChunk> m_ChunkList;

		public NativeParallelHashMap<EntityArchetype, EntityArchetype> m_ArchetypeMap;

		public NativeParallelHashSet<EntityArchetype> m_StrippedSet;

		public void Execute()
		{
			m_ArchetypeMap.Capacity = m_ChunkList.Length;
			m_StrippedSet.Capacity = m_ChunkList.Length;
		}
	}

	[BurstCompile]
	private struct FillArchetypeMapJob : IJobParallelForDefer
	{
		[ReadOnly]
		public NativeArray<ArchetypeChunk> m_ChunkArray;

		[ReadOnly]
		public NativeArray<v128> m_EnabledMaskArray;

		[ReadOnly]
		public NativeParallelHashMap<ComponentType, int> m_SerializerMap;

		public NativeParallelHashMap<EntityArchetype, EntityArchetype>.ParallelWriter m_ArchetypeMap;

		public NativeParallelHashSet<EntityArchetype>.ParallelWriter m_StrippedSet;

		public NativeQueue<EntityArchetype>.ParallelWriter m_StripQueue;

		public void Execute(int index)
		{
			ArchetypeChunk archetypeChunk = m_ChunkArray[index];
			v128 v257 = m_EnabledMaskArray[index];
			if (v257.ULong0 == 0L && v257.ULong1 == 0L)
			{
				return;
			}
			EntityArchetype archetype = archetypeChunk.Archetype;
			if (!m_ArchetypeMap.TryAdd(archetype, archetype))
			{
				return;
			}
			NativeArray<ComponentType> componentTypes = archetype.GetComponentTypes();
			for (int i = 0; i < componentTypes.Length; i++)
			{
				if (!m_SerializerMap.TryGetValue(componentTypes[i], out var _))
				{
					m_StripQueue.Enqueue(archetype);
					return;
				}
			}
			m_StrippedSet.Add(archetype);
		}
	}

	[BurstCompile]
	private struct AllocateChunkMapJob : IJob
	{
		[ReadOnly]
		public NativeList<ArchetypeChunk> m_ChunkList;

		public NativeParallelMultiHashMap<EntityArchetype, ComponentSerializerChunk> m_ChunkMap;

		public void Execute()
		{
			m_ChunkMap.Capacity = m_ChunkList.Length;
		}
	}

	[BurstCompile]
	private struct FillChunkMapJob : IJobParallelForDefer
	{
		[ReadOnly]
		public NativeArray<ArchetypeChunk> m_ChunkArray;

		[ReadOnly]
		public NativeArray<v128> m_EnabledMaskArray;

		[ReadOnly]
		public NativeParallelHashMap<EntityArchetype, EntityArchetype> m_ArchetypeMap;

		public NativeParallelMultiHashMap<EntityArchetype, ComponentSerializerChunk>.ParallelWriter m_ChunkMap;

		public void Execute(int index)
		{
			ArchetypeChunk chunk = m_ChunkArray[index];
			v128 enabledMask = m_EnabledMaskArray[index];
			if ((enabledMask.ULong0 != 0L || enabledMask.ULong1 != 0L) && m_ArchetypeMap.TryGetValue(chunk.Archetype, out var item))
			{
				m_ChunkMap.Add(item, new ComponentSerializerChunk(chunk, enabledMask));
			}
		}
	}

	[BurstCompile]
	private struct FillEntityCountJob : IJobParallelFor
	{
		[ReadOnly]
		public NativeArray<EntityArchetype> m_Archetypes;

		[ReadOnly]
		public NativeParallelMultiHashMap<EntityArchetype, ComponentSerializerChunk> m_ChunkMap;

		public NativeArray<int> m_EntityCount;

		public void Execute(int index)
		{
			EntityArchetype key = m_Archetypes[index];
			int num = 0;
			if (m_ChunkMap.TryGetFirstValue(key, out var item, out var it))
			{
				do
				{
					num += item.GetEnabledCount();
				}
				while (m_ChunkMap.TryGetNextValue(out item, ref it));
			}
			m_EntityCount[index] = num;
		}
	}

	[BurstCompile]
	private struct AccumulateEntityCountJob : IJob
	{
		public NativeArray<int> m_EntityCount;

		public void Execute()
		{
			int num = 0;
			for (int i = 0; i < m_EntityCount.Length; i++)
			{
				int num2 = num + m_EntityCount[i];
				m_EntityCount[i] = num;
				num = num2;
			}
		}
	}

	[BurstCompile]
	private struct ClearEntityTableJob : IJobParallelFor
	{
		public NativeArray<Entity> m_EntityTable;

		public void Execute(int index)
		{
			m_EntityTable[index] = new Entity
			{
				Index = -1,
				Version = -1
			};
		}
	}

	[BurstCompile]
	private struct FillEntityTableJob : IJobParallelFor
	{
		[ReadOnly]
		public NativeArray<EntityArchetype> m_Archetypes;

		[DeallocateOnJobCompletion]
		[ReadOnly]
		public NativeArray<int> m_EntityCount;

		[ReadOnly]
		public NativeParallelMultiHashMap<EntityArchetype, ComponentSerializerChunk> m_ChunkMap;

		[ReadOnly]
		public EntityTypeHandle m_EntityType;

		[NativeDisableParallelForRestriction]
		public NativeArray<Entity> m_EntityTable;

		public void Execute(int index)
		{
			EntityArchetype key = m_Archetypes[index];
			int num = m_EntityCount[index];
			if (!m_ChunkMap.TryGetFirstValue(key, out var item, out var it))
			{
				return;
			}
			do
			{
				NativeArray<Entity> nativeArray = item.chunk.GetNativeArray(m_EntityType);
				ChunkEntityEnumerator enumerator = item.GetEnumerator();
				int nextIndex;
				while (enumerator.NextEntityIndex(out nextIndex))
				{
					Entity entity = nativeArray[nextIndex];
					m_EntityTable[entity.Index] = new Entity
					{
						Index = num++,
						Version = entity.Version
					};
				}
			}
			while (m_ChunkMap.TryGetNextValue(out item, ref it));
		}
	}

	[BurstCompile]
	public struct SerializeArchetypeJob<TWriter> : IJob where TWriter : struct, IWriter
	{
		[ReadOnly]
		public EntityArchetype m_Archetype;

		[ReadOnly]
		public NativeParallelHashMap<ComponentType, int> m_SerializerMap;

		[ReadOnly]
		public NativeParallelMultiHashMap<EntityArchetype, ComponentSerializerChunk> m_ChunkMap;

		public NativeList<ComponentSerializerChunk> m_ChunkList;

		public WriterData m_WriterData;

		public void Execute()
		{
			int num = 0;
			if (m_ChunkMap.TryGetFirstValue(m_Archetype, out var item, out var it))
			{
				do
				{
					num += item.GetEnabledCount();
					m_ChunkList.Add(in item);
				}
				while (m_ChunkMap.TryGetNextValue(out item, ref it));
			}
			int num2 = 0;
			NativeArray<ComponentType> componentTypes = m_Archetype.GetComponentTypes();
			for (int i = 0; i < componentTypes.Length; i++)
			{
				if (m_SerializerMap.TryGetValue(componentTypes[i], out var _))
				{
					num2++;
				}
			}
			TWriter writer = m_WriterData.GetWriter<TWriter>();
			WriterBlock block = writer.Begin();
			writer.Write(num);
			writer.Write(num2);
			for (int j = 0; j < componentTypes.Length; j++)
			{
				if (m_SerializerMap.TryGetValue(componentTypes[j], out var item3))
				{
					writer.Write(item3);
				}
			}
			writer.End(block);
		}
	}

	private ComponentSerializerLibrary m_ComponentSerializerLibrary;

	private SystemSerializerLibrary m_SystemSerializerLibrary;

	private IWriteBufferProvider<TWriteBuffer> m_WriteBufferProvider;

	private JobHandle m_ChunkListDeps;

	private JobHandle m_ChunkMapDeps;

	private JobHandle m_EntityTableDeps;

	private JobHandle m_SerializeDeps;

	private EntityManager m_EntityManager;

	private NativeList<ArchetypeChunk> m_ChunkList;

	private NativeList<v128> m_EnabledMaskList;

	private NativeParallelHashMap<EntityArchetype, EntityArchetype> m_ArchetypeMap;

	private NativeArray<EntityArchetype> m_StrippedArchetypes;

	private NativeParallelMultiHashMap<EntityArchetype, ComponentSerializerChunk> m_ChunkMap;

	private NativeArray<Entity> m_EntityTable;

	private BufferFormat m_BufferFormat;

	public EntitySerializer(EntityManager entityManager, ComponentSerializerLibrary componentSerializerLibrary, SystemSerializerLibrary systemSerializerLibrary, IWriteBufferProvider<TWriteBuffer> writeBufferProvider)
	{
		m_EntityManager = entityManager;
		m_ComponentSerializerLibrary = componentSerializerLibrary;
		m_SystemSerializerLibrary = systemSerializerLibrary;
		m_WriteBufferProvider = writeBufferProvider;
	}

	public void Dispose()
	{
		m_ChunkListDeps.Complete();
		m_ChunkMapDeps.Complete();
		m_EntityTableDeps.Complete();
		m_SerializeDeps.Complete();
		if (m_ChunkList.IsCreated)
		{
			m_ChunkList.Dispose();
		}
		if (m_EnabledMaskList.IsCreated)
		{
			m_EnabledMaskList.Dispose();
		}
		if (m_ArchetypeMap.IsCreated)
		{
			m_ArchetypeMap.Dispose();
		}
		if (m_StrippedArchetypes.IsCreated)
		{
			m_StrippedArchetypes.Dispose();
		}
		if (m_ChunkMap.IsCreated)
		{
			m_ChunkMap.Dispose();
		}
		if (m_EntityTable.IsCreated)
		{
			m_EntityTable.Dispose();
		}
		int serializerCount = m_ComponentSerializerLibrary.GetSerializerCount();
		for (int i = 0; i < serializerCount; i++)
		{
			m_ComponentSerializerLibrary.GetSerializer(i).Clear();
		}
	}

	public void Serialize<TWriter, TFormatTags>(Context context, EntityQuery query, BufferFormat bufferFormat, params ComponentType[] requireEnabled) where TWriter : struct, IWriter where TFormatTags : struct, Enum
	{
		m_ChunkList = query.ToArchetypeChunkListAsync(Allocator.TempJob, out m_ChunkListDeps);
		m_BufferFormat = bufferFormat;
		m_ComponentSerializerLibrary.Reset();
		m_SystemSerializerLibrary.Reset();
		FilterChunks(requireEnabled, Allocator.TempJob);
		CreateArchetypeMap(Allocator.TempJob);
		CreateChunkMap(Allocator.TempJob);
		CreateEntityTable(context, Allocator.TempJob);
		Serialize<TWriter, TFormatTags>(context);
	}

	private void FilterChunks(ComponentType[] requireEnabled, Allocator allocator)
	{
		m_EnabledMaskList = new NativeList<v128>(allocator);
		AllocateEnabledMaskListJob jobData = new AllocateEnabledMaskListJob
		{
			m_ChunkList = m_ChunkList,
			m_EnabledMaskList = m_EnabledMaskList
		};
		InitEnabledMaskJob jobData2 = new InitEnabledMaskJob
		{
			m_ChunkArray = m_ChunkList.AsDeferredJobArray(),
			m_EnabledMaskArray = m_EnabledMaskList.AsDeferredJobArray()
		};
		CheckEnabledMaskJob jobData3 = new CheckEnabledMaskJob
		{
			m_ChunkArray = m_ChunkList.AsDeferredJobArray(),
			m_EnabledMaskArray = m_EnabledMaskList.AsDeferredJobArray()
		};
		m_ChunkListDeps = IJobExtensions.Schedule(jobData, m_ChunkListDeps);
		m_ChunkListDeps = jobData2.Schedule(m_ChunkList, 64, m_ChunkListDeps);
		if (requireEnabled.Length != 0)
		{
			m_EntityManager.CompleteAllTrackedJobs();
			for (int i = 0; i < requireEnabled.Length; i++)
			{
				jobData3.m_TypeHandle = m_EntityManager.GetDynamicComponentTypeHandle(requireEnabled[i]);
				m_ChunkListDeps = jobData3.Schedule(m_ChunkList, 64, m_ChunkListDeps);
			}
		}
	}

	private void CreateArchetypeMap(Allocator allocator)
	{
		NativeParallelHashSet<EntityArchetype> strippedSet = default;
		NativeQueue<EntityArchetype> nativeQueue = default;
		try
		{
			m_ArchetypeMap = new NativeParallelHashMap<EntityArchetype, EntityArchetype>(0, allocator);
			strippedSet = new NativeParallelHashSet<EntityArchetype>(0, Allocator.TempJob);
			nativeQueue = new NativeQueue<EntityArchetype>(Allocator.TempJob);
			AllocateArchetypeMapJob jobData = new AllocateArchetypeMapJob
			{
				m_ChunkList = m_ChunkList,
				m_ArchetypeMap = m_ArchetypeMap,
				m_StrippedSet = strippedSet
			};
			JobHandle jobHandle = new FillArchetypeMapJob
			{
				m_ChunkArray = m_ChunkList.AsDeferredJobArray(),
				m_EnabledMaskArray = m_EnabledMaskList.AsDeferredJobArray(),
				m_SerializerMap = m_ComponentSerializerLibrary.GetSerializerMap(),
				m_ArchetypeMap = m_ArchetypeMap.AsParallelWriter(),
				m_StrippedSet = strippedSet.AsParallelWriter(),
				m_StripQueue = nativeQueue.AsParallelWriter()
			}.Schedule(dependsOn: IJobExtensions.Schedule(jobData, m_ChunkListDeps), list: m_ChunkList, innerloopBatchCount: 64);
			JobHandle.ScheduleBatchedJobs();
			NativeList<ComponentType> nativeList = new NativeList<ComponentType>(64, Allocator.Temp);
			jobHandle.Complete();
			EntityArchetype item;
			while (nativeQueue.TryDequeue(out item))
			{
				NativeArray<ComponentType> componentTypes = item.GetComponentTypes();
				for (int i = 0; i < componentTypes.Length; i++)
				{
					ComponentType value = componentTypes[i];
					if (m_ComponentSerializerLibrary.TryGetSerializerIndex(value, out var _))
					{
						nativeList.Add(in value);
					}
				}
				componentTypes.Dispose();
				EntityArchetype entityArchetype = m_EntityManager.CreateArchetype(nativeList.AsArray());
				m_ArchetypeMap[item] = entityArchetype;
				strippedSet.Add(entityArchetype);
				nativeList.Clear();
			}
			m_StrippedArchetypes = strippedSet.ToNativeArray(allocator);
		}
		finally
		{
			if (strippedSet.IsCreated)
			{
				strippedSet.Dispose();
			}
			if (nativeQueue.IsCreated)
			{
				nativeQueue.Dispose();
			}
		}
	}

	private void CreateChunkMap(Allocator allocator)
	{
		m_ChunkMap = new NativeParallelMultiHashMap<EntityArchetype, ComponentSerializerChunk>(0, allocator);
		AllocateChunkMapJob jobData = new AllocateChunkMapJob
		{
			m_ChunkList = m_ChunkList,
			m_ChunkMap = m_ChunkMap
		};
		FillChunkMapJob jobData2 = new FillChunkMapJob
		{
			m_ChunkArray = m_ChunkList.AsDeferredJobArray(),
			m_EnabledMaskArray = m_EnabledMaskList.AsDeferredJobArray(),
			m_ArchetypeMap = m_ArchetypeMap,
			m_ChunkMap = m_ChunkMap.AsParallelWriter()
		};
		JobHandle dependsOn = IJobExtensions.Schedule(jobData, m_ChunkListDeps);
		m_ChunkMapDeps = jobData2.Schedule(m_ChunkList, 64, dependsOn);
		JobHandle.ScheduleBatchedJobs();
	}

	private void CreateEntityTable(Context context, Allocator allocator)
	{
		NativeArray<int> entityCount = default;
		try
		{
			int num = m_EntityManager.HighestEntityIndex() + 1;
			m_EntityTable = new NativeArray<Entity>(num, allocator);
			entityCount = new NativeArray<int>(m_StrippedArchetypes.Length, Allocator.TempJob);
			m_ComponentSerializerLibrary.Update(context);
			FillEntityCountJob jobData = new FillEntityCountJob
			{
				m_Archetypes = m_StrippedArchetypes,
				m_ChunkMap = m_ChunkMap,
				m_EntityCount = entityCount
			};
			AccumulateEntityCountJob jobData2 = new AccumulateEntityCountJob
			{
				m_EntityCount = entityCount
			};
			ClearEntityTableJob jobData3 = new ClearEntityTableJob
			{
				m_EntityTable = m_EntityTable
			};
			FillEntityTableJob jobData4 = new FillEntityTableJob
			{
				m_EntityCount = entityCount,
				m_Archetypes = m_StrippedArchetypes,
				m_ChunkMap = m_ChunkMap,
				m_EntityType = m_ComponentSerializerLibrary.GetEntityTypeHandle(),
				m_EntityTable = m_EntityTable
			};
			m_EntityTableDeps = IJobParallelForExtensions.Schedule(jobData, m_StrippedArchetypes.Length, 4, m_ChunkMapDeps);
			m_EntityTableDeps = IJobExtensions.Schedule(jobData2, m_EntityTableDeps);
			m_EntityTableDeps = JobHandle.CombineDependencies(m_EntityTableDeps, IJobParallelForExtensions.Schedule(jobData3, num, 64, m_ChunkMapDeps));
			m_EntityTableDeps = IJobParallelForExtensions.Schedule(jobData4, m_StrippedArchetypes.Length, 4, m_EntityTableDeps);
			JobHandle.ScheduleBatchedJobs();
		}
		catch
		{
			m_EntityTableDeps.Complete();
			if (entityCount.IsCreated)
			{
				entityCount.Dispose();
			}
			throw;
		}
	}

	private void Serialize<TWriter, TFormatTags>(Context context) where TWriter : struct, IWriter where TFormatTags : struct, Enum
	{
		SerializeMetadata<TWriter, TFormatTags>(context);
		SerializeComponentTypes<TWriter>(context);
		SerializeSystemTypes<TWriter>(context);
		JobHandle jobHandle = default;
		TWriteBuffer val = m_WriteBufferProvider.AddBuffer(m_BufferFormat);
		WriterData writerData = new WriterData(context, val.buffer);
		List<NativeList<ComponentSerializerChunk>> list = new List<NativeList<ComponentSerializerChunk>>();
		m_EntityTableDeps.Complete();
		m_SerializeDeps = default;
		try
		{
			writerData.GetWriter<TWriter>().Write(m_StrippedArchetypes.Length);
			for (int i = 0; i < m_StrippedArchetypes.Length; i++)
			{
				EntityArchetype archetype = m_StrippedArchetypes[i];
				TWriteBuffer val2 = m_WriteBufferProvider.AddBuffer(m_BufferFormat);
				EntityWriterData writerData2 = new EntityWriterData(context, val2.buffer, m_EntityTable);
				NativeList<ComponentSerializerChunk> nativeList = new NativeList<ComponentSerializerChunk>(Allocator.TempJob);
				list.Add(nativeList);
				JobHandle jobHandle2 = IJobExtensions.Schedule(new SerializeArchetypeJob<TWriter>
				{
					m_Archetype = archetype,
					m_SerializerMap = m_ComponentSerializerLibrary.GetSerializerMap(),
					m_ChunkMap = m_ChunkMap,
					m_ChunkList = nativeList,
					m_WriterData = writerData
				}, jobHandle);
				jobHandle = jobHandle2;
				NativeArray<ComponentType> componentTypes = archetype.GetComponentTypes();
				for (int j = 0; j < componentTypes.Length; j++)
				{
					ComponentType type = componentTypes[j];
					if (m_ComponentSerializerLibrary.TryGetSerializerIndex(type, out var index))
					{
						jobHandle2 = m_ComponentSerializerLibrary.GetSerializer(index).SerializeData<TWriter>(writerData2, nativeList, jobHandle2);
					}
				}
				componentTypes.Dispose();
				val2.Done(jobHandle2);
				m_SerializeDeps = JobHandle.CombineDependencies(m_SerializeDeps, jobHandle2);
				JobHandle.ScheduleBatchedJobs();
			}
			val.Done(jobHandle);
			int serializerCount = m_SystemSerializerLibrary.GetSerializerCount();
			for (int k = 0; k < serializerCount; k++)
			{
				TWriteBuffer val3 = m_WriteBufferProvider.AddBuffer(m_BufferFormat);
				JobHandle jobHandle3 = default;
				try
				{
					EntityWriterData writerData3 = new EntityWriterData(context, val3.buffer, m_EntityTable);
					jobHandle3 = m_SystemSerializerLibrary.GetSerializer(k).SerializeSystem<TWriter>(writerData3, default);
					m_SerializeDeps = JobHandle.CombineDependencies(m_SerializeDeps, jobHandle3);
					JobHandle.ScheduleBatchedJobs();
				}
				catch (Exception exception)
				{
					Debug.LogException(exception);
				}
				finally
				{
					val3.Done(jobHandle3);
				}
			}
		}
		finally
		{
			m_SerializeDeps.Complete();
			for (int l = 0; l < list.Count; l++)
			{
				list[l].Dispose();
			}
			m_SerializeDeps = default;
		}
	}

	private void SerializeMetadata<TWriter, TFormatTags>(Context context) where TWriter : struct, IWriter where TFormatTags : struct, Enum
	{
		string[] names = Enum.GetNames(typeof(TFormatTags));
		TWriteBuffer val = m_WriteBufferProvider.AddBuffer(BufferFormat.Raw);
		TWriter writer = new WriterData(context, val.buffer).GetWriter<TWriter>();
		writer.Write(context.version);
		writer.Write((byte)m_BufferFormat);
		writer.Write((ushort)names.Length);
		for (int i = 0; i < names.Length; i++)
		{
			writer.Write(names[i]);
		}
		val.Done();
	}

	private void SerializeComponentTypes<TWriter>(Context context) where TWriter : struct, IWriter
	{
		int serializerCount = m_ComponentSerializerLibrary.GetSerializerCount();
		TWriteBuffer val = m_WriteBufferProvider.AddBuffer(m_BufferFormat);
		WriterData writerData = new WriterData(context, val.buffer);
		writerData.GetWriter<TWriter>().Write(serializerCount);
		for (int i = 0; i < serializerCount; i++)
		{
			m_ComponentSerializerLibrary.GetSerializer(i).SerializeType<TWriter>(writerData, out var overhead);
			m_ComponentSerializerLibrary.AddOverhead(i, overhead);
		}
		val.Done();
	}

	private void SerializeSystemTypes<TWriter>(Context context) where TWriter : struct, IWriter
	{
		int serializerCount = m_SystemSerializerLibrary.GetSerializerCount();
		TWriteBuffer val = m_WriteBufferProvider.AddBuffer(m_BufferFormat);
		WriterData writerData = new WriterData(context, val.buffer);
		writerData.GetWriter<TWriter>().Write(serializerCount);
		for (int i = 0; i < serializerCount; i++)
		{
			m_SystemSerializerLibrary.GetSerializer(i).SerializeType<TWriter>(writerData, out var overhead);
			m_SystemSerializerLibrary.AddOverhead(i, overhead);
		}
		val.Done();
	}
}
