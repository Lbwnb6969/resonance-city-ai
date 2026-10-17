using System;
using System.Collections.Generic;
using Unity.Burst;
using Unity.Collections;
using Unity.Collections.LowLevel.Unsafe;
using Unity.Entities;
using Unity.Jobs;
using UnityEngine;

namespace Colossal.Serialization.Entities;

public class EntityDeserializer<TReadBuffer> : IDisposable where TReadBuffer : IReadBuffer
{
	private struct ComponentTypeInfo(ComponentType componentType, ComponentSerializerType serializerType)
	{
		public ComponentType m_ComponentType = componentType;

		public ComponentSerializerType m_SerializerType = serializerType;
	}

	private struct ArchetypeInfo(Allocator allocator)
	{
		public NativeReference<int> m_EntityCount = new NativeReference<int>(0, allocator);

		public NativeList<int> m_SerializerIndex = new NativeList<int>(0, allocator);

		public NativeArray<Entity> m_Entities = default;

		public void Dispose()
		{
			if (m_EntityCount.IsCreated)
			{
				m_EntityCount.Dispose();
			}
			if (m_SerializerIndex.IsCreated)
			{
				m_SerializerIndex.Dispose();
			}
			if (m_Entities.IsCreated)
			{
				m_Entities.Dispose();
			}
		}
	}

	private struct BufferInfo
	{
		public TReadBuffer m_Buffer;

		public JobHandle m_Dependency;
	}

	[BurstCompile]
	public struct DeserializeArchetypeJob<TReader> : IJob where TReader : struct, IReader
	{
		public NativeReference<int> m_EntityCount;

		public NativeList<int> m_SerializerIndex;

		public ReaderData m_ReaderData;

		public void Execute()
		{
			TReader reader = m_ReaderData.GetReader<TReader>();
			ReaderBlock block = reader.Begin();
			reader.Read(out int value);
			reader.Read(out int value2);
			m_EntityCount.Value = value;
			m_SerializerIndex.ResizeUninitialized(value2);
			for (int i = 0; i < value2; i++)
			{
				reader.Read(out int value3);
				m_SerializerIndex[i] = value3;
			}
			reader.End(block);
		}
	}

	[BurstCompile]
	private struct FillEntityTableJob : IJob
	{
		[ReadOnly]
		public int m_StartOffset;

		[ReadOnly]
		public NativeArray<Entity> m_Entities;

		[NativeDisableContainerSafetyRestriction]
		public NativeArray<Entity> m_EntityTable;

		public void Execute()
		{
			int startOffset = m_StartOffset;
			for (int i = 0; i < m_Entities.Length; i++)
			{
				m_EntityTable[startOffset++] = m_Entities[i];
			}
		}
	}

	private ComponentSerializerLibrary m_ComponentSerializerLibrary;

	private SystemSerializerLibrary m_SystemSerializerLibrary;

	private IReadBufferProvider<TReadBuffer> m_ReadBufferProvider;

	private JobHandle m_ArchetypeDeps;

	private JobHandle m_EntityDeps;

	private JobHandle m_ComponentDeps;

	private JobHandle m_SystemDeps;

	private EntityManager m_EntityManager;

	private NativeArray<ComponentTypeInfo> m_ComponentTypes;

	private NativeArray<Entity> m_EntityTable;

	private Queue<BufferInfo> m_BufferQueue;

	private ComponentSerializer[] m_ComponentSerializers;

	private SystemSerializer[] m_SystemSerializers;

	private SystemSerializer[] m_SystemDefaults;

	private ArchetypeInfo[] m_Archetypes;

	private BufferFormat m_BufferFormat;

	private bool m_SeparateSystemBuffers;

	private bool m_UnsupportedFormat;

	private int m_BuffersRemaining;

	public EntityDeserializer(EntityManager entityManager, ComponentSerializerLibrary componentSerializerLibrary, SystemSerializerLibrary systemSerializerLibrary, IReadBufferProvider<TReadBuffer> readBufferProvider)
	{
		m_EntityManager = entityManager;
		m_ComponentSerializerLibrary = componentSerializerLibrary;
		m_SystemSerializerLibrary = systemSerializerLibrary;
		m_ReadBufferProvider = readBufferProvider;
	}

	public void Dispose()
	{
		m_ArchetypeDeps.Complete();
		m_EntityDeps.Complete();
		m_ComponentDeps.Complete();
		m_SystemDeps.Complete();
		if (m_ComponentTypes.IsCreated)
		{
			m_ComponentTypes.Dispose();
		}
		if (m_EntityTable.IsCreated)
		{
			m_EntityTable.Dispose();
		}
		Clear(m_ComponentSerializers);
		Dispose(m_Archetypes);
	}

	public bool Deserialize<TReader, TFormatTags>(ref Context context, params ComponentType[] extraComponents) where TReader : struct, IReader where TFormatTags : struct, Enum
	{
		m_BufferQueue = new Queue<BufferInfo>();
		m_UnsupportedFormat = false;
		DeserializeMetadata<TReader, TFormatTags>(ref context);
		m_ComponentSerializerLibrary.Reset();
		m_SystemSerializerLibrary.Reset();
		DeserializeComponentTypes<TReader>(context, Allocator.TempJob);
		DeserializeSystemTypes<TReader>(context);
		DeserializeArchetypes<TReader>(context, Allocator.TempJob);
		CreateEntities(context, extraComponents, Allocator.TempJob);
		if (m_Archetypes != null)
		{
			for (int i = 0; i < m_Archetypes.Length; i++)
			{
				DeserializeComponents<TReader>(context, ref m_Archetypes[i], Allocator.TempJob);
			}
		}
		m_ComponentDeps.Complete();
		ExclusiveEntityTransaction transaction = m_EntityManager.BeginExclusiveEntityTransaction();
		try
		{
			if (m_ComponentSerializers != null)
			{
				for (int j = 0; j < m_ComponentSerializers.Length; j++)
				{
					m_ComponentDeps = m_ComponentSerializers[j].Apply(transaction, m_ComponentDeps);
				}
			}
			DeserializeSystems<TReader>(context);
		}
		finally
		{
			m_ComponentDeps.Complete();
			m_EntityManager.EndExclusiveEntityTransaction();
			m_SystemDeps.Complete();
		}
		return !m_UnsupportedFormat;
	}

	private TReadBuffer GetNextBuffer(out JobHandle dependency)
	{
		if (m_UnsupportedFormat)
		{
			dependency = default;
			return default;
		}
		TReadBuffer buffer;
		if (m_BufferQueue.Count != 0)
		{
			BufferInfo bufferInfo = m_BufferQueue.Dequeue();
			buffer = bufferInfo.m_Buffer;
			dependency = bufferInfo.m_Dependency;
			AddBufferCount(0);
		}
		else
		{
			buffer = m_ReadBufferProvider.GetBuffer(m_BufferFormat, out dependency);
			AddBufferCount(-1);
		}
		return buffer;
	}

	private void AddBufferCount(int delta)
	{
		if (!m_UnsupportedFormat)
		{
			m_BuffersRemaining += delta;
			BufferInfo item = default;
			while (m_BuffersRemaining > 0 && m_BufferQueue.Count < 8)
			{
				item.m_Buffer = m_ReadBufferProvider.GetBuffer(m_BufferFormat, out item.m_Dependency);
				m_BufferQueue.Enqueue(item);
				m_BuffersRemaining--;
			}
		}
	}

	private void DeserializeMetadata<TReader, TFormatTags>(ref Context context) where TReader : struct, IReader where TFormatTags : struct, Enum
	{
		TReadBuffer buffer = m_ReadBufferProvider.GetBuffer(BufferFormat.Raw);
		string[] names = Enum.GetNames(typeof(TFormatTags));
		int[] array = (int[])Enum.GetValues(typeof(TFormatTags));
		if (buffer != null)
		{
			try
			{
				TReader reader = new ReaderData(context, buffer.buffer, buffer.position).GetReader<TReader>();
				reader.Read(out Version value);
				Purpose purpose = context.purpose;
				Hash128 instigatorGuid = context.instigatorGuid;
				context.Dispose();
				context = new Context(purpose, value, instigatorGuid, names.Length, Allocator.Persistent);
				if (buffer.position.Value < buffer.buffer.Length)
				{
					reader.Read(out byte value2);
					m_BufferFormat = (BufferFormat)value2;
					m_SeparateSystemBuffers = true;
					if (buffer.position.Value < buffer.buffer.Length)
					{
						Dictionary<string, int> dictionary = new Dictionary<string, int>(names.Length);
						for (int i = 0; i < names.Length; i++)
						{
							dictionary.Add(names[i], array[i]);
						}
						reader.Read(out ushort value3);
						for (int j = 0; j < value3; j++)
						{
							reader.Read(out string value4);
							if (dictionary.TryGetValue(value4, out var value5))
							{
								context.m_Format.EnableTag(value5);
							}
							else
							{
								Debug.LogErrorFormat("Unknown format tag: {0}", value4);
								m_UnsupportedFormat = true;
								m_SeparateSystemBuffers = false;
							}
						}
					}
				}
				else
				{
					m_BufferFormat = BufferFormat.Raw;
					m_SeparateSystemBuffers = false;
				}
				AddBufferCount(3);
				return;
			}
			finally
			{
				buffer.Done();
			}
		}
		Purpose purpose2 = context.purpose;
		Version version = context.version;
		Hash128 instigatorGuid2 = context.instigatorGuid;
		context.Dispose();
		context = new Context(purpose2, version, instigatorGuid2, names.Length, Allocator.Persistent);
	}

	private void DeserializeComponentTypes<TReader>(Context context, Allocator allocator) where TReader : struct, IReader
	{
		TReadBuffer nextBuffer = GetNextBuffer(out var dependency);
		if (nextBuffer == null)
		{
			return;
		}
		try
		{
			ReaderData readerData = new ReaderData(context, nextBuffer.buffer, nextBuffer.position);
			TReader reader = readerData.GetReader<TReader>();
			dependency.Complete();
			reader.Read(out int value);
			m_ComponentSerializers = new ComponentSerializer[value];
			m_ComponentTypes = new NativeArray<ComponentTypeInfo>(value, allocator);
			Dictionary<string, Type> typeTable = m_ComponentSerializerLibrary.GetTypeTable();
			for (int i = 0; i < value; i++)
			{
				if (ComponentSerializer.DeserializeType<TReader>(readerData, typeTable, out var componentType, out var serializerType, out var overhead))
				{
					if (m_ComponentSerializerLibrary.TryGetSerializerIndex(componentType, out var index))
					{
						m_ComponentTypes[i] = new ComponentTypeInfo(componentType, serializerType);
						ComponentSerializer serializer = m_ComponentSerializerLibrary.GetSerializer(index);
						m_ComponentSerializerLibrary.AddOverhead(index, overhead);
						if (((serializer.GetSerializerType() | serializerType) & ComponentSerializerType.Empty) == 0 && ((serializer.GetSerializerType() ^ serializerType) & ~(ComponentSerializerType.Enableable | ComponentSerializerType.Filtered)) != 0)
						{
							if ((serializer.GetSerializerType() & ComponentSerializerType.BufferElementData) != 0 && (serializerType & ComponentSerializerType.ComponentData) != 0)
							{
								m_ComponentSerializers[i] = serializer;
								continue;
							}
							Debug.LogWarningFormat("Serializer type mismatch ({0}): {1} != {2}", componentType, serializerType, serializer.GetSerializerType());
							m_ComponentSerializers[i] = m_ComponentSerializerLibrary.GetObsoleteSerializer();
						}
						else
						{
							m_ComponentSerializers[i] = serializer;
						}
					}
					else
					{
						Debug.LogWarningFormat("Serializer not found ({0}): {1}", componentType, serializerType);
						m_ComponentSerializers[i] = m_ComponentSerializerLibrary.GetObsoleteSerializer();
						m_ComponentTypes[i] = new ComponentTypeInfo(default, serializerType);
						m_ComponentSerializerLibrary.AddObsoleteOverhead(overhead);
					}
				}
				else
				{
					m_ComponentSerializers[i] = m_ComponentSerializerLibrary.GetObsoleteSerializer();
					m_ComponentTypes[i] = new ComponentTypeInfo(default, serializerType);
					m_ComponentSerializerLibrary.AddObsoleteOverhead(overhead);
				}
			}
		}
		finally
		{
			nextBuffer.Done();
		}
	}

	private void DeserializeSystemTypes<TReader>(Context context) where TReader : struct, IReader
	{
		TReadBuffer nextBuffer = GetNextBuffer(out var dependency);
		int serializerCount = m_SystemSerializerLibrary.GetSerializerCount();
		int num = serializerCount;
		bool[] array = new bool[serializerCount];
		if (nextBuffer != null)
		{
			try
			{
				ReaderData readerData = new ReaderData(context, nextBuffer.buffer, nextBuffer.position);
				TReader reader = readerData.GetReader<TReader>();
				dependency.Complete();
				reader.Read(out int value);
				m_SystemSerializers = new SystemSerializer[value];
				AddBufferCount((!m_SeparateSystemBuffers) ? 1 : value);
				Dictionary<string, Type> typeTable = m_SystemSerializerLibrary.GetTypeTable();
				for (int i = 0; i < value; i++)
				{
					if (SystemSerializer.DeserializeType<TReader>(readerData, typeTable, out var systemType, out var overhead))
					{
						if (m_SystemSerializerLibrary.TryGetSerializerIndex(systemType, out var index))
						{
							m_SystemSerializers[i] = m_SystemSerializerLibrary.GetSerializer(index);
							m_SystemSerializerLibrary.AddOverhead(index, overhead);
							if (!array[index])
							{
								array[index] = true;
								num--;
							}
						}
						else
						{
							Debug.LogWarningFormat("Serializer not found: {0}", systemType.FullName);
							m_SystemSerializers[i] = m_SystemSerializerLibrary.GetObsoleteSerializer();
							m_SystemSerializerLibrary.AddObsoleteOverhead(overhead);
						}
					}
					else
					{
						m_SystemSerializers[i] = m_SystemSerializerLibrary.GetObsoleteSerializer();
						m_SystemSerializerLibrary.AddObsoleteOverhead(overhead);
					}
				}
			}
			finally
			{
				nextBuffer.Done();
			}
		}
		m_SystemDefaults = new SystemSerializer[num];
		num = 0;
		for (int j = 0; j < serializerCount; j++)
		{
			if (!array[j])
			{
				m_SystemDefaults[num++] = m_SystemSerializerLibrary.GetSerializer(j);
			}
		}
	}

	private void DeserializeArchetypes<TReader>(Context context, Allocator allocator) where TReader : struct, IReader
	{
		TReadBuffer nextBuffer = GetNextBuffer(out var dependency);
		if (nextBuffer == null)
		{
			return;
		}
		try
		{
			ReaderData readerData = new ReaderData(context, nextBuffer.buffer, nextBuffer.position);
			TReader reader = readerData.GetReader<TReader>();
			dependency.Complete();
			reader.Read(out int value);
			m_Archetypes = new ArchetypeInfo[value];
			AddBufferCount(value);
			for (int i = 0; i < value; i++)
			{
				ArchetypeInfo archetypeInfo = new ArchetypeInfo(allocator);
				m_Archetypes[i] = archetypeInfo;
				DeserializeArchetypeJob<TReader> jobData = new DeserializeArchetypeJob<TReader>
				{
					m_EntityCount = archetypeInfo.m_EntityCount,
					m_SerializerIndex = archetypeInfo.m_SerializerIndex,
					m_ReaderData = readerData
				};
				m_ArchetypeDeps = IJobExtensions.Schedule(jobData, m_ArchetypeDeps);
				JobHandle.ScheduleBatchedJobs();
			}
		}
		finally
		{
			JobHandle archetypeDeps = m_ArchetypeDeps;
			nextBuffer.Done(archetypeDeps);
		}
	}

	private void CreateEntities(Context context, ComponentType[] extraComponents, Allocator allocator)
	{
		m_ArchetypeDeps.Complete();
		if (m_Archetypes != null)
		{
			int num = 0;
			for (int i = 0; i < m_Archetypes.Length; i++)
			{
				num += m_Archetypes[i].m_EntityCount.Value;
			}
			m_EntityTable = new NativeArray<Entity>(num, allocator);
			for (int j = 0; j < m_Archetypes.Length; j++)
			{
				ArchetypeInfo archetypeInfo = m_Archetypes[j];
				int value = archetypeInfo.m_EntityCount.Value;
				int num2 = 0;
				for (int k = 0; k < archetypeInfo.m_SerializerIndex.Length; k++)
				{
					int index = archetypeInfo.m_SerializerIndex[k];
					if (m_ComponentTypes[index].m_ComponentType.TypeIndex != TypeIndex.Null)
					{
						num2++;
					}
				}
				ComponentType[] array = new ComponentType[num2 + extraComponents.Length];
				num2 = 0;
				for (int l = 0; l < archetypeInfo.m_SerializerIndex.Length; l++)
				{
					int index2 = archetypeInfo.m_SerializerIndex[l];
					ComponentTypeInfo componentTypeInfo = m_ComponentTypes[index2];
					if (componentTypeInfo.m_ComponentType.TypeIndex != TypeIndex.Null)
					{
						array[num2++] = componentTypeInfo.m_ComponentType;
					}
				}
				for (int m = 0; m < extraComponents.Length; m++)
				{
					array[num2++] = extraComponents[m];
				}
				EntityArchetype archetype = m_EntityManager.CreateArchetype(array);
				archetypeInfo.m_Entities = m_EntityManager.CreateEntity(archetype, value, allocator);
				m_Archetypes[j] = archetypeInfo;
			}
			int num3 = 0;
			for (int n = 0; n < m_Archetypes.Length; n++)
			{
				ArchetypeInfo archetypeInfo2 = m_Archetypes[n];
				FillEntityTableJob jobData = new FillEntityTableJob
				{
					m_StartOffset = num3,
					m_Entities = archetypeInfo2.m_Entities,
					m_EntityTable = m_EntityTable
				};
				m_EntityDeps = JobHandle.CombineDependencies(m_EntityDeps, IJobExtensions.Schedule(jobData));
				JobHandle.ScheduleBatchedJobs();
				num3 += archetypeInfo2.m_EntityCount.Value;
			}
		}
		m_ComponentSerializerLibrary.Update(context);
	}

	private void DeserializeComponents<TReader>(Context context, ref ArchetypeInfo archetype, Allocator allocator) where TReader : struct, IReader
	{
		TReadBuffer nextBuffer = GetNextBuffer(out var dependency);
		if (nextBuffer == null)
		{
			return;
		}
		JobHandle jobHandle = JobHandle.CombineDependencies(m_EntityDeps, dependency);
		try
		{
			EntityReaderData readerData = new EntityReaderData(context, nextBuffer.buffer, nextBuffer.position, m_EntityTable);
			for (int i = 0; i < archetype.m_SerializerIndex.Length; i++)
			{
				int num = archetype.m_SerializerIndex[i];
				jobHandle = m_ComponentSerializers[num].DeserializeData<TReader>(serializerType: m_ComponentTypes[num].m_SerializerType, readerData: readerData, entities: archetype.m_Entities, inputDeps: jobHandle);
			}
			m_ComponentDeps = JobHandle.CombineDependencies(m_ComponentDeps, jobHandle);
			JobHandle.ScheduleBatchedJobs();
		}
		finally
		{
			nextBuffer.Done(jobHandle);
		}
	}

	private void DeserializeSystems<TReader>(Context context) where TReader : struct, IReader
	{
		if (m_SeparateSystemBuffers)
		{
			for (int i = 0; i < m_SystemSerializers.Length; i++)
			{
				TReadBuffer nextBuffer = GetNextBuffer(out var dependency);
				if (nextBuffer == null)
				{
					continue;
				}
				JobHandle jobHandle = dependency;
				try
				{
					EntityReaderData readerData = new EntityReaderData(context, nextBuffer.buffer, nextBuffer.position, m_EntityTable);
					jobHandle = m_SystemSerializers[i].DeserializeSystem<TReader>(readerData, JobHandle.CombineDependencies(m_EntityDeps, dependency));
					m_SystemDeps = JobHandle.CombineDependencies(m_SystemDeps, jobHandle);
				}
				catch (Exception exception)
				{
					Debug.LogException(exception);
				}
				finally
				{
					nextBuffer.Done(jobHandle);
				}
			}
		}
		else
		{
			TReadBuffer nextBuffer2 = GetNextBuffer(out var dependency2);
			if (nextBuffer2 != null)
			{
				try
				{
					m_SystemDeps = JobHandle.CombineDependencies(m_EntityDeps, dependency2);
					EntityReaderData readerData2 = new EntityReaderData(context, nextBuffer2.buffer, nextBuffer2.position, m_EntityTable);
					for (int j = 0; j < m_SystemSerializers.Length; j++)
					{
						try
						{
							m_SystemDeps = m_SystemSerializers[j].DeserializeSystem<TReader>(readerData2, m_SystemDeps);
						}
						catch (Exception exception2)
						{
							Debug.LogException(exception2);
						}
					}
				}
				finally
				{
					JobHandle systemDeps = m_SystemDeps;
					nextBuffer2.Done(systemDeps);
				}
			}
		}
		for (int k = 0; k < m_SystemDefaults.Length; k++)
		{
			JobHandle job = m_SystemDefaults[k].SetDefaults(context, m_EntityDeps);
			m_SystemDeps = JobHandle.CombineDependencies(m_SystemDeps, job);
		}
	}

	private void Dispose(ArchetypeInfo[] archetypes)
	{
		if (archetypes != null)
		{
			for (int i = 0; i < archetypes.Length; i++)
			{
				archetypes[i].Dispose();
			}
		}
	}

	private void Clear(ComponentSerializer[] serializers)
	{
		if (serializers != null)
		{
			for (int i = 0; i < serializers.Length; i++)
			{
				serializers[i].Clear();
			}
		}
	}
}
