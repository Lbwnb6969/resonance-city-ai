"""Read Tiny Glade FMOD Studio bank metadata using its shipped Studio/Core DLLs.

Loads banks into a private NOSOUND_NRT Studio system, creates zero event instances
and plays no audio. Does not load/decode sample data or start the game.
ABI: exact libfmod 2.222.6 bindings / FMOD header 0x20222.
Python 64-bit on Windows, standard library only.
"""
from __future__ import annotations
import argparse, collections, ctypes as C, hashlib, json, math, os
from pathlib import Path
import uuid

V=C.c_void_p;I=C.c_int;U=C.c_uint;F=C.c_float;P=C.POINTER
VERSION=0x20222
FLAGS={1:'READONLY',2:'AUTOMATIC',4:'GLOBAL',8:'DISCRETE',16:'LABELED'}
PARAM_TYPES=['GAME_CONTROLLED','AUTOMATIC_DISTANCE','AUTOMATIC_EVENT_CONE_ANGLE','AUTOMATIC_EVENT_ORIENTATION','AUTOMATIC_DIRECTION','AUTOMATIC_ELEVATION','AUTOMATIC_LISTENER_ORIENTATION','AUTOMATIC_SPEED','AUTOMATIC_SPEED_ABSOLUTE','AUTOMATIC_DISTANCE_NORMALIZED']
STATES=['UNLOADING','UNLOADED','LOADING','LOADED','ERROR']

class Guid(C.Structure):
    _fields_=[('Data1',U),('Data2',C.c_ushort),('Data3',C.c_ushort),('Data4',C.c_ubyte*8)]
    def text(self):return str(uuid.UUID(bytes_le=bytes(self)))

class ParameterId(C.Structure):
    _fields_=[('data1',U),('data2',U)]

class Parameter(C.Structure):
    _fields_=[('name',C.c_char_p),('id',ParameterId),('minimum',F),('maximum',F),('defaultvalue',F),('type',I),('flags',U),('guid',Guid)]

class PropertyValue(C.Union):
    _fields_=[('intvalue',I),('boolvalue',I),('floatvalue',F),('stringvalue',C.c_char_p)]

class UserProperty(C.Structure):
    _fields_=[('name',C.c_char_p),('type',I),('value',PropertyValue)]

def sha(path):
    with Path(path).open('rb') as f:return hashlib.file_digest(f,'sha256').hexdigest()

def dump(path,data):
    path=Path(path);path.parent.mkdir(parents=True,exist_ok=True)
    path.write_text(json.dumps(data,ensure_ascii=False,indent=2),encoding='utf8')

def string(value):return value.decode('utf8') if value is not None else None

class Studio:
    def __init__(self,root):
        root=Path(root).resolve();self.root=root;self.directory=os.add_dll_directory(str(root))
        self.core=C.CDLL(str(root/'fmod.dll'));self.dll=C.CDLL(str(root/'fmodstudio.dll'));self.api={};self.calls=collections.Counter()
        definitions={
            'System_Create':[P(V),U], 'System_GetCoreSystem':[V,P(V)],
            'System_Initialize':[V,I,U,U,V], 'System_Release':[V], 'System_FlushCommands':[V],
            'System_LoadBankFile':[V,C.c_char_p,U,P(V)], 'System_GetBankCount':[V,P(I)], 'System_GetBankList':[V,P(V),I,P(I)],
            'System_GetEventByID':[V,P(Guid),P(V)],
            'System_LookupID':[V,C.c_char_p,P(Guid)], 'System_LookupPath':[V,P(Guid),C.c_char_p,I,P(I)],
            'System_GetParameterDescriptionCount':[V,P(I)], 'System_GetParameterDescriptionList':[V,P(Parameter),I,P(I)],
            'System_GetParameterDescriptionByID':[V,ParameterId,P(Parameter)],
            'System_GetParameterLabelByID':[V,ParameterId,I,C.c_char_p,I,P(I)],
            'Bank_GetID':[V,P(Guid)], 'Bank_GetPath':[V,C.c_char_p,I,P(I)],
            'Bank_GetLoadingState':[V,P(I)], 'Bank_GetSampleLoadingState':[V,P(I)],
            'Bank_GetStringCount':[V,P(I)], 'Bank_GetStringInfo':[V,I,P(Guid),C.c_char_p,I,P(I)],
            'EventDescription_GetID':[V,P(Guid)], 'EventDescription_GetPath':[V,C.c_char_p,I,P(I)],
            'EventDescription_GetParameterDescriptionCount':[V,P(I)],
            'EventDescription_GetParameterDescriptionByIndex':[V,I,P(Parameter)],
            'EventDescription_GetParameterDescriptionByID':[V,ParameterId,P(Parameter)],
            'EventDescription_GetParameterLabelByIndex':[V,I,I,C.c_char_p,I,P(I)],
            'EventDescription_GetUserPropertyCount':[V,P(I)], 'EventDescription_GetUserPropertyByIndex':[V,I,P(UserProperty)],
            'EventDescription_GetLength':[V,P(I)], 'EventDescription_GetMinMaxDistance':[V,P(F),P(F)],
            'EventDescription_GetSoundSize':[V,P(F)], 'EventDescription_GetInstanceCount':[V,P(I)],
            'EventDescription_GetSampleLoadingState':[V,P(I)],
            'Bus_GetID':[V,P(Guid)],'Bus_GetPath':[V,C.c_char_p,I,P(I)],
            'Bus_GetVolume':[V,P(F),P(F)],'Bus_GetPaused':[V,P(I)],'Bus_GetMute':[V,P(I)],
            'VCA_GetID':[V,P(Guid)],'VCA_GetPath':[V,C.c_char_p,I,P(I)],'VCA_GetVolume':[V,P(F),P(F)],
        }
        for kind in ['Event','Bus','VCA']:
            definitions['Bank_Get'+kind+'Count']=[V,P(I)];definitions['Bank_Get'+kind+'List']=[V,P(V),I,P(I)]
        for name in ['IsSnapshot','IsOneshot','IsStream','Is3D','IsDopplerEnabled','HasSustainPoint']:
            definitions['EventDescription_'+name]=[V,P(I)]
        for name,args in definitions.items():
            fn=getattr(self.dll,'FMOD_Studio_'+name);fn.argtypes=args;fn.restype=I;self.api[name]=fn
        for name,args in {'System_SetOutput':[V,I],'System_GetVersion':[V,P(U)]}.items():
            fn=getattr(self.core,'FMOD_'+name);fn.argtypes=args;fn.restype=I;self.api['Core_'+name]=fn
        self.system=V();self.call('System_Create',C.byref(self.system),VERSION)
        core=V();self.call('System_GetCoreSystem',self.system,C.byref(core));version=U();self.call('Core_System_GetVersion',core,C.byref(version));self.version=version.value
        self.call('Core_System_SetOutput',core,4)
        self.call('System_Initialize',self.system,64,4,0,None) # SYNCHRONOUS_UPDATE
        self.banks=[];self.errors=[]

    def raw(self,name,*args):self.calls[name]+=1;return self.api[name](*args)
    def call(self,name,*args):
        result=self.raw(name,*args)
        if result:raise RuntimeError('FMOD_Studio_'+name+' result='+str(result))

    def close(self):
        self.call('System_Release',self.system);self.directory.close()

    def count(self,name,handle):
        n=I();self.call(name,handle,C.byref(n));return n.value

    def text(self,name,*prefix,allow_notfound=False):
        buffer=C.create_string_buffer(4096);n=I();result=self.raw(name,*prefix,buffer,len(buffer),C.byref(n))
        if result==74 and allow_notfound:return None
        if result==65:
            buffer=C.create_string_buffer(n.value);self.call(name,*prefix,buffer,len(buffer),C.byref(n))
        elif result:raise RuntimeError(name+' result='+str(result))
        return string(buffer.value)

    def identity(self,kind,handle):
        guid=Guid();self.call(kind+'_GetID',handle,C.byref(guid));path=self.text(kind+'_GetPath',handle,allow_notfound=True)
        # Round-trip through independent lookup API confirms GUID structure ABI.
        lookup=Guid()
        if path is not None:
            self.call('System_LookupID',self.system,path.encode('utf8'),C.byref(lookup))
            if bytes(lookup)!=bytes(guid):raise ValueError('GUID/path round-trip mismatch')
            roundtrip=self.text('System_LookupPath',self.system,C.byref(guid))
            if roundtrip!=path:raise ValueError('Path/GUID round-trip mismatch')
        return dict(guid=guid.text(),path=path)

    def handles(self,bank,kind):
        n=self.count('Bank_Get'+kind+'Count',bank);array=(V*max(1,n))();received=I()
        self.call('Bank_Get'+kind+'List',bank,array,n,C.byref(received))
        if received.value!=n:raise ValueError('Bank count/list mismatch')
        return [array[i] for i in range(n)]

    def parameter(self,p,handle=None,index=None):
        r=dict(name=string(p.name),id=dict(data1=p.id.data1,data2=p.id.data2),guid=p.guid.text(),minimum=p.minimum,maximum=p.maximum,default=p.defaultvalue,
               type_raw=p.type,type=PARAM_TYPES[p.type] if 0<=p.type<len(PARAM_TYPES) else 'UNKNOWN',flags_raw=p.flags,flags=[name for bit,name in FLAGS.items() if p.flags&bit])
        if not all(math.isfinite(r[k]) for k in ['minimum','maximum','default']):raise ValueError('Parameter has nonfinite range/default')
        r['default_in_authored_range']=r['minimum']<=r['default']<=r['maximum']
        # A second API returns the same struct by ID, validating offset/size ABI.
        q=Parameter()
        if handle is None:self.call('System_GetParameterDescriptionByID',self.system,p.id,C.byref(q))
        else:self.call('EventDescription_GetParameterDescriptionByID',handle,p.id,C.byref(q))
        if (string(q.name),q.minimum,q.maximum,q.defaultvalue,q.type,q.flags,bytes(q.guid))!=(r['name'],p.minimum,p.maximum,p.defaultvalue,p.type,p.flags,bytes(p.guid)):
            raise ValueError('Parameter index/ID description mismatch')
        if p.flags&16:
            count=round(p.maximum-p.minimum)+1;labels=[]
            for label in range(count):
                text=self.text('System_GetParameterLabelByID',self.system,p.id,label) if handle is None else self.text('EventDescription_GetParameterLabelByIndex',handle,index,label)
                labels.append(dict(index=label,value=p.minimum+label,label=text))
            r['labels']=labels
        return r

    def event(self,handle):
        r=self.identity('EventDescription',handle)
        n=self.count('EventDescription_GetParameterDescriptionCount',handle);parameters=[]
        for i in range(n):
            p=Parameter();self.call('EventDescription_GetParameterDescriptionByIndex',handle,i,C.byref(p));parameters.append(self.parameter(p,handle,i))
        r['parameters']=parameters
        properties=[];n=self.count('EventDescription_GetUserPropertyCount',handle)
        for i in range(n):
            prop=UserProperty();self.call('EventDescription_GetUserPropertyByIndex',handle,i,C.byref(prop))
            val=[lambda:prop.value.intvalue,lambda:bool(prop.value.boolvalue),lambda:prop.value.floatvalue,lambda:string(prop.value.stringvalue)][prop.type]()
            properties.append(dict(name=string(prop.name),type_raw=prop.type,value=val))
        r['user_properties']=properties;r['length_ms']=self.count('EventDescription_GetLength',handle)
        a,b=F(),F();self.call('EventDescription_GetMinMaxDistance',handle,C.byref(a),C.byref(b));r['distance']=dict(minimum=a.value,maximum=b.value)
        size=F();self.call('EventDescription_GetSoundSize',handle,C.byref(size));r['sound_size']=size.value
        for name in ['IsSnapshot','IsOneshot','IsStream','Is3D','IsDopplerEnabled','HasSustainPoint']:
            val=I();self.call('EventDescription_'+name,handle,C.byref(val));r[name]=bool(val.value)
        r['instance_count']=self.count('EventDescription_GetInstanceCount',handle)
        if r['instance_count']:raise ValueError('Private metadata extraction has unexpected event instances')
        state=I();self.call('EventDescription_GetSampleLoadingState',handle,C.byref(state));r['sample_loading_state']=STATES[state.value]
        return r

    def mixer(self,handle,kind):
        r=self.identity(kind,handle);volume,final=F(),F();self.call(kind+'_GetVolume',handle,C.byref(volume),C.byref(final));r['volume']=volume.value;r['final_volume']=final.value
        if kind=='Bus':
            for field,api in [('paused','Bus_GetPaused'),('muted','Bus_GetMute')]:
                val=I();self.call(api,handle,C.byref(val));r[field]=bool(val.value)
        return r

    def load(self,paths):
        # Load strings first so every later path query has its name table.
        paths=sorted(paths,key=lambda p:(not p.name.endswith('.strings.bank'),p.name!='Master.bank',p.name.endswith('.assets.bank'),p.name.lower()))
        for path in paths:
            handle=V();result=self.raw('System_LoadBankFile',self.system,str(path.resolve()).encode('utf8'),0,C.byref(handle))
            if result:
                self.errors.append(dict(file=str(path),load_result=result));continue
            self.banks.append((path,handle))
        self.call('System_FlushCommands',self.system)

    def extract(self):
        events={};buses={};vcas={};banks=[];strings=[]
        for path,handle in self.banks:
            row=self.identity('Bank',handle);row.update(file=path.relative_to(self.root).as_posix(),bytes=path.stat().st_size,sha256=sha(path))
            for field,name in [('loading_state','Bank_GetLoadingState'),('sample_loading_state','Bank_GetSampleLoadingState')]:
                v=I();self.call(name,handle,C.byref(v));row[field]=STATES[v.value]
            for kind,index in [('Event',events),('Bus',buses),('VCA',vcas)]:
                items=[]
                for h in self.handles(handle,kind):
                    rec=self.event(h) if kind=='Event' else self.mixer(h,kind)
                    gid=rec['guid'];items.append(gid)
                    if gid in index:
                        if {k:v for k,v in index[gid].items() if k!='banks'}!=rec:raise ValueError('Shared object has inconsistent description')
                        index[gid]['banks'].append(row['guid'])
                    else:rec['banks']=[row['guid']];index[gid]=rec
                row[kind.lower()+'_ids']=items
            n=self.count('Bank_GetStringCount',handle);row['string_count']=n
            for i in range(n):
                guid=Guid();text=self.text('Bank_GetStringInfo',handle,i,C.byref(guid));strings.append(dict(bank=row['guid'],index=i,guid=guid.text(),path=text))
            banks.append(row)
        n=self.count('System_GetParameterDescriptionCount',self.system);array=(Parameter*max(1,n))();received=I()
        self.call('System_GetParameterDescriptionList',self.system,array,n,C.byref(received))
        if received.value!=n:raise ValueError('Global parameter count/list mismatch')
        globals=[self.parameter(array[i]) for i in range(n)]
        actual_count=self.count('System_GetBankCount',self.system)
        bank_array=(V*max(1,actual_count))();bank_received=I()
        self.call('System_GetBankList',self.system,bank_array,actual_count,C.byref(bank_received))
        api_guids=set()
        for i in range(bank_received.value):
            value=Guid();self.call('Bank_GetID',bank_array[i],C.byref(value));api_guids.add(value.text())
        if bank_received.value!=actual_count or api_guids!={b['guid'] for b in banks}:raise ValueError('System bank count/list identities differ from loaded banks')
        return dict(runtime_version=hex(self.version),abi=dict(pointer_bytes=C.sizeof(V),guid_bytes=C.sizeof(Guid),parameter_id_bytes=C.sizeof(ParameterId),parameter_description_bytes=C.sizeof(Parameter),user_property_bytes=C.sizeof(UserProperty)),
                    banks=banks,events=list(events.values()),buses=list(buses.values()),vcas=list(vcas.values()),global_parameters=globals,strings=strings,
                    loaded_bank_count_api=actual_count,loaded_files=len(self.banks),load_errors=self.errors,
                    api_calls=dict(self.calls),event_instances_created=0,event_instances_started=0,game_launched=False,output_mode='NOSOUND_NRT',studio_mode='SYNCHRONOUS_UPDATE')

def relationships(root,report):
    # These are observed memberships and exact raw GUID occurrences, not inferred
    # playback routing or a promised public-API dependency graph.
    banks=report['banks'];known={r['guid']:r for r in banks};edges=[];memberships=[]
    for bank in banks:
        for kind in ['event','bus','vca']:
            memberships.extend(dict(bank=bank['guid'],object=g,kind='contains_'+kind,evidence='Studio Bank_Get'+kind.title()+'List') for g in bank[kind+'_ids'])
        # Count exact known bank GUIDs in metadata files only; asset files include
        # large sample payloads and are irrelevant to public object references.
        if not bank['file'].endswith('.assets.bank'):
            data=(Path(root)/bank['file']).read_bytes()
            for guid,target in known.items():
                if guid==bank['guid']:continue
                raw=uuid.UUID(guid).bytes_le;start=0;offsets=[]
                while (at:=data.find(raw,start))>=0:offsets.append(at);start=at+16
                if offsets:edges.append(dict(source=bank['guid'],target=guid,offsets=offsets,evidence='exact packed FMOD_GUID bytes in source bank; reference role unclassified'))
    pairs=[]
    by_file={Path(b['file']).name:b for b in banks}
    for bank in banks:
        name=Path(bank['file']).name
        if name.endswith('.bank') and not name.endswith(('.assets.bank','.strings.bank')):
            other=by_file.get(name[:-5]+'.assets.bank')
            if other:pairs.append(dict(metadata_bank=bank['guid'],sample_bank=other['guid'],evidence='matched packaged filename stem; does not independently prove every event sample dependency'))
    return dict(object_memberships=memberships,bank_guid_byte_references=edges,split_bank_pairs=pairs,
                limitation='Public Studio API enumerates membership but does not expose complete event instrument, routing, or sample-bank dependency graphs. Raw GUID references remain unclassified.')

def main():
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--root',type=Path,required=True);p.add_argument('--out',type=Path,required=True);p.add_argument('--bank',action='append',default=[]);p.add_argument('--declared-events',type=Path,help='audio_bank_graph JSON containing statically declared but unlisted event GUIDs');a=p.parse_args()
    if a.out.resolve().is_relative_to(a.root.resolve()):p.error('Output must be outside game directory')
    paths=list((a.root/'assets/audio').rglob('*.bank'))
    if a.bank:
        missing=set(a.bank)-{x.name for x in paths}
        if missing:p.error('Unknown bank names: '+', '.join(sorted(missing)))
        paths=[x for x in paths if x.name in a.bank or x.name=='Master.strings.bank']
    runtime=Studio(a.root)
    try:
        runtime.load(paths);report=runtime.extract()
        if a.declared_events:
            declaration=json.loads(a.declared_events.read_text(encoding='utf8'));checks=[];unlisted=[]
            for gid in declaration['static_unlisted_event_guids']:
                value=Guid.from_buffer_copy(uuid.UUID(gid).bytes_le);handle=V();result=runtime.raw('System_GetEventByID',runtime.system,C.byref(value),C.byref(handle))
                checks.append(dict(guid=gid,result=result,descriptor_found=result==0))
                if result==0:
                    item=runtime.event(handle)
                    if item['guid']!=gid:raise ValueError('Unlisted event lookup identity differs')
                    unlisted.append(item)
                elif result!=74:raise RuntimeError('Unlisted System_GetEventByID result='+str(result))
            report['static_unlisted_event_lookup']=checks;report['unlisted_event_descriptions']=unlisted
    finally:runtime.close()
    report['dlls']=[dict(file=name,sha256=sha(a.root/name),bytes=(a.root/name).stat().st_size) for name in ['fmod.dll','fmodstudio.dll']]
    report['api_calls']=dict(runtime.calls)
    report['limits']=['No EventInstance creation/start, no playback or sample-data loading.','This executes the shipped FMOD libraries in a private Python process; metadata extraction is runtime SDK observation, not static-only evidence.','Event descriptions and parameter defaults do not reproduce event timeline/instrument behavior.']
    a.out.mkdir(parents=True,exist_ok=True);dump(a.out/'studio_metadata.json',report);dump(a.out/'studio_relationships.json',relationships(a.root,report))
    summary={k:len(report[k]) for k in ['banks','events','buses','vcas','global_parameters','strings']};summary.update(load_errors=report['load_errors'],all_instance_counts_zero=all(e['instance_count']==0 for e in report['events']+report.get('unlisted_event_descriptions',[])),parameter_occurrences=sum(len(e['parameters']) for e in report['events']),unlisted_parameter_occurrences=sum(len(e['parameters']) for e in report.get('unlisted_event_descriptions',[])),unlisted_descriptions=len(report.get('unlisted_event_descriptions',[])),unlisted_notfound=sum(not row['descriptor_found'] for row in report.get('static_unlisted_event_lookup',[])))
    dump(a.out/'studio_summary.json',summary);print(json.dumps(summary,ensure_ascii=False))

if __name__=='__main__':main()
