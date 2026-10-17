"""Dispatch the preserved original roof compute SPIR-V in a scratch Vulkan device.
Windows stdlib ctypes; never launches the game or modifies installation files.
Returned records are read after GPU completion and shader-to-host memory barrier.
"""
import ctypes as c,struct,pathlib
u=c.c_uint32;q=c.c_uint64;i=c.c_int32;ptr=c.c_void_p
def S(name,fields):return type(name,(c.Structure,),{'_fields_':fields})
base=[('sType',u),('pNext',ptr)]
App=S('Application',base+[('pApplicationName',c.c_char_p),('applicationVersion',u),('pEngineName',c.c_char_p),('engineVersion',u),('apiVersion',u)])
Instance=S('InstanceInfo',base+[('flags',u),('pApplicationInfo',c.POINTER(App)),('enabledLayerCount',u),('ppEnabledLayerNames',ptr),('enabledExtensionCount',u),('ppEnabledExtensionNames',ptr)])
QueueInfo=S('QueueInfo',base+[('flags',u),('queueFamilyIndex',u),('queueCount',u),('pQueuePriorities',c.POINTER(c.c_float))])
DeviceInfo=S('DeviceInfo',base+[('flags',u),('queueCreateInfoCount',u),('pQueueCreateInfos',c.POINTER(QueueInfo)),('enabledLayerCount',u),('ppEnabledLayerNames',ptr),('enabledExtensionCount',u),('ppEnabledExtensionNames',ptr),('pEnabledFeatures',ptr)])
QueueProps=S('QueueProps',[('flags',u),('queueCount',u),('timestampValidBits',u),('granularity',u*3)])
MemType=S('MemType',[('flags',u),('heap',u)]);MemHeap=S('MemHeap',[('size',q),('flags',u)])
MemProps=S('MemProps',[('count',u),('types',MemType*32),('heapCount',u),('heaps',MemHeap*16)])
BufferInfo=S('BufferInfo',base+[('flags',u),('size',q),('usage',u),('sharingMode',u),('queueFamilyIndexCount',u),('pQueueFamilyIndices',ptr)])
Requirements=S('Requirements',[('size',q),('alignment',q),('memoryTypeBits',u)])
Allocate=S('Allocate',base+[('allocationSize',q),('memoryTypeIndex',u)])
Binding=S('Binding',[('binding',u),('descriptorType',u),('descriptorCount',u),('stageFlags',u),('pImmutableSamplers',ptr)])
SetLayout=S('SetLayout',base+[('flags',u),('bindingCount',u),('pBindings',c.POINTER(Binding))])
PushRange=S('PushRange',[('stageFlags',u),('offset',u),('size',u)])
PipelineLayout=S('PipelineLayout',base+[('flags',u),('setLayoutCount',u),('pSetLayouts',c.POINTER(q)),('pushConstantRangeCount',u),('pPushConstantRanges',c.POINTER(PushRange))])
ShaderInfo=S('ShaderInfo',base+[('flags',u),('codeSize',c.c_size_t),('pCode',c.POINTER(u))])
ShaderStage=S('ShaderStage',base+[('flags',u),('stage',u),('module',q),('pName',c.c_char_p),('pSpecializationInfo',ptr)])
ComputeInfo=S('ComputeInfo',base+[('flags',u),('stage',ShaderStage),('layout',q),('basePipelineHandle',q),('basePipelineIndex',i)])
PoolSize=S('PoolSize',[('type',u),('count',u)])
PoolInfo=S('PoolInfo',base+[('flags',u),('maxSets',u),('poolSizeCount',u),('pPoolSizes',c.POINTER(PoolSize))])
SetAllocate=S('SetAllocate',base+[('descriptorPool',q),('descriptorSetCount',u),('pSetLayouts',c.POINTER(q))])
DescriptorBuffer=S('DescriptorBuffer',[('buffer',q),('offset',q),('range',q)])
WriteSet=S('WriteSet',base+[('dstSet',q),('dstBinding',u),('dstArrayElement',u),('descriptorCount',u),('descriptorType',u),('pImageInfo',ptr),('pBufferInfo',c.POINTER(DescriptorBuffer)),('pTexelBufferView',ptr)])
CommandPool=S('CommandPool',base+[('flags',u),('queueFamilyIndex',u)])
CommandAllocate=S('CommandAllocate',base+[('commandPool',q),('level',u),('commandBufferCount',u)])
CommandBegin=S('CommandBegin',base+[('flags',u),('pInheritanceInfo',ptr)])
MemoryBarrier=S('MemoryBarrier',base+[('srcAccessMask',u),('dstAccessMask',u)])
Submit=S('Submit',base+[('waitSemaphoreCount',u),('pWaitSemaphores',ptr),('pWaitDstStageMask',ptr),('commandBufferCount',u),('pCommandBuffers',c.POINTER(q)),('signalSemaphoreCount',u),('pSignalSemaphores',ptr)])

def dispatch(spirv,records,dt,delta,pivot,animation):
    vk=c.WinDLL('vulkan-1.dll');clean=[]
    def fn(name,args,result=i):
        f=getattr(vk,name);f.argtypes=args;f.restype=result;return f
    def call(name,args,*values):
        code=fn(name,args)(*values)
        if code:raise RuntimeError(f'{name}: VkResult {code}')
    def create(name,owner,info,destroy):
        out=q();call(name,[q,ptr,ptr,c.POINTER(q)],owner,c.byref(info),None,c.byref(out))
        clean.append(lambda owner=owner,out=out,destroy=destroy:fn(destroy,[q,q,ptr],None)(owner,out,None))
        return out.value
    app=App(0,None,b'Recovered roof verification',1,b'scratch',1,(1<<22)|(1<<12))
    info=Instance(1,None,0,c.pointer(app),0,None,0,None);instance=q()
    call('vkCreateInstance',[ptr,ptr,c.POINTER(q)],c.byref(info),None,c.byref(instance))
    clean.append(lambda:fn('vkDestroyInstance',[q,ptr],None)(instance,None))
    try:
        count=u();call('vkEnumeratePhysicalDevices',[q,c.POINTER(u),ptr],instance,c.byref(count),None)
        physicals=(q*count.value)();call('vkEnumeratePhysicalDevices',[q,c.POINTER(u),ptr],instance,c.byref(count),physicals)
        devices=[]
        for ph in physicals:
            props=c.create_string_buffer(4096);fn('vkGetPhysicalDeviceProperties',[q,ptr],None)(ph,props)
            name=bytes(props)[20:276].split(b'\0')[0].decode();devices.append((ph,name))
        physical,name=next((p,n) for p,n in devices if 'NVIDIA' in n)
        num=u();fn('vkGetPhysicalDeviceQueueFamilyProperties',[q,c.POINTER(u),ptr],None)(physical,c.byref(num),None)
        queues=(QueueProps*num.value)();fn('vkGetPhysicalDeviceQueueFamilyProperties',[q,c.POINTER(u),ptr],None)(physical,c.byref(num),queues)
        family=next(idx for idx,p in enumerate(queues) if p.flags&2 and p.queueCount)
        priority=c.c_float(1.);qi=QueueInfo(2,None,0,family,1,c.pointer(priority))
        di=DeviceInfo(3,None,0,1,c.pointer(qi),0,None,0,None,None);device=q()
        call('vkCreateDevice',[q,ptr,ptr,c.POINTER(q)],physical,c.byref(di),None,c.byref(device))
        clean.append(lambda:fn('vkDestroyDevice',[q,ptr],None)(device,None))
        queue=q();fn('vkGetDeviceQueue',[q,u,u,c.POINTER(q)],None)(device,family,0,c.byref(queue))
        memory_props=MemProps();fn('vkGetPhysicalDeviceMemoryProperties',[q,c.POINTER(MemProps)],None)(physical,c.byref(memory_props))
        def buffer(data,usage):
            n=len(data);buf=create('vkCreateBuffer',device.value,BufferInfo(12,None,0,n,usage,0,0,None),'vkDestroyBuffer')
            req=Requirements();fn('vkGetBufferMemoryRequirements',[q,q,ptr],None)(device,buf,c.byref(req))
            typ=next(j for j in range(memory_props.count) if req.memoryTypeBits&(1<<j) and memory_props.types[j].flags&6==6)
            mem=q();call('vkAllocateMemory',[q,ptr,ptr,c.POINTER(q)],device,c.byref(Allocate(5,None,req.size,typ)),None,c.byref(mem))
            # Buffer must be destroyed before memory is freed: insert cleanup before its destroy.
            clean.insert(len(clean)-1,lambda mem=mem:fn('vkFreeMemory',[q,q,ptr],None)(device,mem,None))
            call('vkBindBufferMemory',[q,q,q,q],device,buf,mem,0)
            mapped=ptr();call('vkMapMemory',[q,q,q,q,u,c.POINTER(ptr)],device,mem,0,n,0,c.byref(mapped))
            clean.append(lambda mem=mem:fn('vkUnmapMemory',[q,q],None)(device,mem))
            c.memmove(mapped,data,n);return buf,mapped,n
        data=b''.join(records);storage,mapped,length=buffer(data,32)
        uniform=bytearray(512);struct.pack_into('<f',uniform,132,dt);ubo,_,ubolength=buffer(bytes(uniform),16)
        layouts=[]
        for dtype in [7,None,None,6]:
            binding=Binding(0,dtype or 0,1,32,None)
            layouts.append(create('vkCreateDescriptorSetLayout',device.value,
              SetLayout(32,None,0,0 if dtype is None else 1,None if dtype is None else c.pointer(binding)),'vkDestroyDescriptorSetLayout'))
        la=(q*4)(*layouts);pr=PushRange(32,0,20)
        layout=create('vkCreatePipelineLayout',device.value,PipelineLayout(30,None,0,4,la,1,c.pointer(pr)),'vkDestroyPipelineLayout')
        code=spirv.read_bytes();words=(u*(len(code)//4)).from_buffer_copy(code)
        module=create('vkCreateShaderModule',device.value,ShaderInfo(16,None,0,len(code),words),'vkDestroyShaderModule')
        stage=ShaderStage(18,None,0,32,module,b'main',None);ci=ComputeInfo(29,None,0,stage,layout,0,-1);pipeline=q()
        call('vkCreateComputePipelines',[q,q,u,ptr,ptr,c.POINTER(q)],device,0,1,c.byref(ci),None,c.byref(pipeline))
        clean.append(lambda:fn('vkDestroyPipeline',[q,q,ptr],None)(device,pipeline,None))
        sizes=(PoolSize*2)(PoolSize(7,1),PoolSize(6,1));pool=create('vkCreateDescriptorPool',device.value,PoolInfo(33,None,0,4,2,sizes),'vkDestroyDescriptorPool')
        sets=(q*4)();call('vkAllocateDescriptorSets',[q,ptr,ptr],device,c.byref(SetAllocate(34,None,pool,4,la)),sets)
        bi=[DescriptorBuffer(storage,0,length),DescriptorBuffer(ubo,0,ubolength)]
        writes=(WriteSet*2)(WriteSet(35,None,sets[0],0,0,1,7,None,c.pointer(bi[0]),None),WriteSet(35,None,sets[3],0,0,1,6,None,c.pointer(bi[1]),None))
        fn('vkUpdateDescriptorSets',[q,u,ptr,u,ptr],None)(device,2,writes,0,None)
        cp=create('vkCreateCommandPool',device.value,CommandPool(39,None,0,family),'vkDestroyCommandPool')
        command=q();call('vkAllocateCommandBuffers',[q,ptr,c.POINTER(q)],device,c.byref(CommandAllocate(40,None,cp,0,1)),c.byref(command))
        call('vkBeginCommandBuffer',[q,ptr],command,c.byref(CommandBegin(42,None,1,None)))
        fn('vkCmdBindPipeline',[q,u,q],None)(command,1,pipeline)
        fn('vkCmdBindDescriptorSets',[q,u,q,u,u,ptr,u,ptr],None)(command,1,layout,0,4,sets,0,None)
        push=c.create_string_buffer(struct.pack('<IIfff',0,len(records),delta,pivot,animation))
        fn('vkCmdPushConstants',[q,q,u,u,u,ptr],None)(command,layout,32,0,20,push)
        fn('vkCmdDispatch',[q,u,u,u],None)(command,(len(records)+63)//64,1,1)
        barrier=MemoryBarrier(46,None,64,8192)
        fn('vkCmdPipelineBarrier',[q,u,u,u,u,ptr,u,ptr,u,ptr],None)(command,2048,16384,0,1,c.byref(barrier),0,None,0,None)
        call('vkEndCommandBuffer',[q],command)
        commands=(q*1)(command.value);submit=Submit(4,None,0,None,None,1,commands,0,None)
        call('vkQueueSubmit',[q,u,ptr,q],queue,1,c.byref(submit),0);call('vkQueueWaitIdle',[q],queue)
        result=c.string_at(mapped,length)
        return {'device':name,'queue_family':family,'records':[result[n:n+64] for n in range(0,length,64)]}
    finally:
        for action in reversed(clean):action()
