"""Static RIFF/FEV GUID graph and wave -> FSB sample/bank mapping.

Reads metadata chunks and FSB header/name tables, never decodes sample audio.
Records chunk byte ranges, opaque field preservation, exact GUID references and
conservative event sample reachability; runtime selection remains unknown.
"""
from __future__ import annotations
import argparse, collections, hashlib, json, struct, uuid
from pathlib import Path

def guid(data):return str(uuid.UUID(bytes_le=data))
def dump(path,data):
    path=Path(path);path.parent.mkdir(parents=True,exist_ok=True);path.write_text(json.dumps(data,ensure_ascii=False,indent=2),encoding='utf8')
def sha(path):
    with Path(path).open('rb') as f:return hashlib.file_digest(f,'sha256').hexdigest()

def bank(path):
    """Bounded RIFF and recursive LIST parser; sample audio region is skipped."""
    path=Path(path);file_bytes=path.stat().st_size;top=[];project=None;project_start=None;fsb=[]
    with path.open('rb') as f:
        header=f.read(12)
        if header[:4]!=b'RIFF' or header[8:]!=b'FEV ' or struct.unpack_from('<I',header,4)[0]+8!=file_bytes:raise ValueError('Invalid RIFF/FEV size')
        o=12
        while o<file_bytes:
            f.seek(o);tag,n=struct.unpack('<4sI',f.read(8));end=o+8+n
            if end>file_bytes:raise ValueError('Top-level chunk exceeds bank')
            row=dict(tag=tag.decode('ascii'),offset=o,data_offset=o+8,bytes=n);top.append(row)
            if tag==b'LIST':
                typ=f.read(4);row['list_type']=typ.decode('ascii')
                if typ==b'PROJ':project=typ+f.read(n-4);project_start=o+8
            elif tag==b'SND ':
                raw=f.read(min(n,65536));at=raw.find(b'FSB5')
                if at<0:raise ValueError('SND chunk lacks expected FSB5 header near start')
                at=o+8+at;f.seek(at);h=f.read(60);version,count,hsize,nsize,dsize,mode=struct.unpack_from('<6I',h,4)
                if version!=1 or at+60+hsize+nsize+dsize>end:raise ValueError('FSB header region invalid')
                f.seek(at+60+hsize);names=f.read(nsize);decoded=[]
                for i in range(count):
                    start=struct.unpack_from('<I',names,i*4)[0];z=names.find(b'\0',start)
                    if z<0:raise ValueError('Unterminated FSB sample name')
                    decoded.append(names[start:z].decode('utf8'))
                fsb.append(dict(offset=at,bytes=60+hsize+nsize+dsize,count=count,codec_mode_raw=mode,sample_names=decoded))
            o=end+(n&1)
        if o!=file_bytes or project is None:raise ValueError('Bank boundary or PROJ chunk missing')
    nodes=[]
    def walk(o,end,parent,path_labels):
        while o<end:
            if o+8>end:raise ValueError('Truncated nested chunk header')
            tag,n=struct.unpack_from('<4sI',project,o);end2=o+8+n
            if end2>end:raise ValueError('Nested chunk outside containing LIST')
            name=tag.decode('ascii');typ=project[o+8:o+12].decode('ascii') if tag==b'LIST' else None
            index=len(nodes);labels=path_labels+[typ or name]
            nodes.append(dict(index=index,parent=parent,tag=name,list_type=typ,path='/'.join(labels),offset=project_start+o,data_offset=project_start+o+8,bytes=n,local_data_offset=o+8,children=[]))
            if parent is not None:nodes[parent]['children'].append(index)
            if typ:walk(o+12,end2,index,labels)
            o=end2+(n&1)
        if o!=end:raise ValueError('Nested chunk trailing bytes')
    walk(4,len(project),None,['PROJ'])
    records=[];waves=[];bank_guid=None
    for node in nodes:
        o=node['local_data_offset'];n=node['bytes']
        if node['tag']=='BNKI':bank_guid=guid(project[o:o+16])
        if node['tag']=='WAV ':
            if n<18:raise ValueError('WAV GUID record truncated')
            body_len=struct.unpack_from('<H',project,o+16)[0]
            if 18+body_len!=n or body_len!=12:raise ValueError('WAV body layout differs from observed 12-byte schema')
            container,index,flags=struct.unpack_from('<3I',project,o+18)
            if container>=len(fsb) or index>=fsb[container]['count']:raise ValueError('WAV subsound/container index outside FSB')
            record=dict(guid=guid(project[o:o+16]),kind='WAV ',base_tag='WAV ',offset=node['offset'],bytes=n+8,guid_offset=node['data_offset'],local_offset=o-8)
            records.append(record);waves.append(dict(record,wave_payload_bytes=body_len,fsb_container_index=container,subsound_index=index,flags_raw=flags,sample_name=fsb[container]['sample_names'][index]))
        elif node['list_type'] and node['children']:
            first=nodes[node['children'][0]]
            if first['tag'].endswith('B') and first['bytes']>=16:
                at=first['local_data_offset'];raw=project[at:at+16]
                if raw!=b'\0'*16:
                    records.append(dict(guid=guid(raw),kind=node['list_type'],base_tag=first['tag'],offset=node['offset'],bytes=n+8,guid_offset=first['data_offset'],local_offset=o-8))
    if bank_guid is None:raise ValueError('Bank identity BNKI missing')
    for node in nodes:node.pop('local_data_offset')
    return dict(file=str(path),file_bytes=file_bytes,bank_guid=bank_guid,top_chunks=top,nodes=nodes,records=records,waves=waves,fsb=fsb,project=project,project_start=project_start)

def graph(root,studio_metadata):
    root=Path(root);metadata=json.loads(Path(studio_metadata).read_text(encoding='utf8')) if studio_metadata else None
    known={};event_ids=set();listed_event_ids=set()
    if metadata:
        for key in ['banks','events','buses','vcas']:
            for item in metadata[key]:known[item['guid']]=dict(kind=key,path=item['path'])
        for item in metadata['events']:event_ids.add(item['guid']);listed_event_ids.add(item['guid'])
        for item in metadata.get('unlisted_event_descriptions',[]):
            event_ids.add(item['guid']);known[item['guid']]=dict(kind='unlisted_events',path=item['path'])
    parsed=[];records=[];waves=[];source=[];node_types=collections.Counter();ids={}
    for path in sorted((root/'assets/audio').rglob('*.bank')):
        item=bank(path);rel=path.relative_to(root).as_posix();parsed.append(item);node_types.update(n['list_type'] or n['tag'] for n in item['nodes'])
        digest=sha(path)
        if metadata:
            sdk=next(r for r in metadata['banks'] if r['file']==rel)
            if sdk['guid']!=item['bank_guid'] or sdk['sha256']!=digest:raise ValueError('Static bank identity/hash differs from Studio observation')
        source.append(dict(file=rel,bytes=item['file_bytes'],sha256=digest,guid=item['bank_guid'],chunks=len(item['nodes']),records=len(item['records']),fsb_count=sum(f['count'] for f in item['fsb']),top_chunks=item['top_chunks']))
        for record in item['records']:
            r={k:v for k,v in record.items() if k!='local_offset'};r['file']=rel;r['bank']=item['bank_guid'];r['record_index']=len(records)
            if record['guid'] in known:r['sdk_identity']=known[record['guid']]
            records.append(r);ids[uuid.UUID(record['guid']).bytes_le]=record['guid'];record['record_index']=r['record_index']
        for wave in item['waves']:
            r={k:v for k,v in wave.items() if k!='local_offset'};r.update(file=rel,bank=item['bank_guid']);waves.append(r)
    edges=[];adj=collections.defaultdict(set);definitions=collections.defaultdict(list);wave_by_guid=collections.defaultdict(list)
    for r in records:definitions[r['guid']].append(r)
    for w in waves:wave_by_guid[w['guid']].append(w)
    for item in parsed:
        data=item['project']
        for rec in item['records']:
            # The first four bytes are LIST/WAV header, included so every range
            # remains source-bound. References are exact packed GUID matches.
            o=rec['local_offset'];end=o+rec['bytes'];hits=collections.defaultdict(list)
            for at in range(o,max(o,end-15)):
                target=ids.get(data[at:at+16])
                if target is not None and target!=rec['guid']:hits[target].append(item['project_start']+at)
            for target,offsets in hits.items():
                adj[rec['guid']].add(target);edges.append(dict(source=rec['guid'],source_record=rec['record_index'],target=target,offsets=offsets,evidence='exact GUID bytes inside source record range'))
    # Mixer/parameter/effect records can link unrelated global objects; this
    # bounded reachability follows selected event/timeline/instrument/bus kinds.
    sample_kinds={'EVNT','TMLN','TRAN','MUIT','SPIT','PRIT','EVIT','WAIT','CMDI','SILN','LWAV','MBUS','IBUS','WAV '}
    sample_events=[]
    for gid in sorted(event_ids or {r['guid'] for r in records if r['kind']=='EVNT'}):
        seen={gid};todo=[gid];reachable=set()
        while todo:
            current=todo.pop()
            if current in wave_by_guid:reachable.add(current);continue
            for target in adj[current]:
                if target not in seen and any(r['kind'] in sample_kinds for r in definitions[target]):seen.add(target);todo.append(target)
        sample_records=[w for g in sorted(reachable) for w in wave_by_guid[g]]
        sample_events.append(dict(event_guid=gid,path=known.get(gid,{}).get('path'),wave_guids=sorted(reachable),sample_bank_guids=sorted({w['bank'] for w in sample_records}),fsb_samples=[dict(wave_guid=w['guid'],bank=w['bank'],file=w['file'],subsound_index=w['subsound_index'],sample_name=w['sample_name']) for w in sample_records],reachable_record_guids=len(seen),interpretation='bounded candidate sample references through selected record kinds; excludes runtime selection and duplicate-wave bank resolution'))
    static_events={r['guid'] for r in records if r['kind']=='EVNT'}
    if metadata and not event_ids<=static_events:raise ValueError('Studio event GUID is absent from static EVNT definitions')
    for item in parsed:
        if item['waves']:
            indices=[(w['fsb_container_index'],w['subsound_index']) for w in item['waves']]
            expected={(i,j) for i,f in enumerate(item['fsb']) for j in range(f['count'])}
            if set(indices)!=expected or len(indices)!=len(expected):raise ValueError('WAV->FSB index mapping is not bijective')
    return dict(bank_files=source,node_type_counts=dict(node_types),records=records,guid_reference_edges=edges,waves=waves,event_possible_samples=sample_events,
                static_unlisted_event_guids=sorted(static_events-listed_event_ids),
                validation=dict(banks=len(parsed),records=len(records),reference_edges=len(edges),wave_records=len(waves),fsb_samples=sum(f['count'] for item in parsed for f in item['fsb']),static_event_guids=len(static_events),all_sdk_event_guids_in_static=event_ids<=static_events if metadata else None,sdk_listed_event_guids=len(listed_event_ids),sdk_all_event_guids=len(event_ids),static_unlisted_event_guids=len(static_events-listed_event_ids),wav_to_fsb_bijection=True,events_with_reachable_samples=sum(bool(e['wave_guids']) for e in sample_events)),
                limits=['This static graph identifies exact GUID byte references, not complete field declarations.','Candidate sample reachability uses an explicit kind filter and combines repeated GUID definitions; it does not prove exact bank dependencies, timeline triggers, conditions, routing or duplicate-wave resolution.','WAV GUID -> packed container/subsound indices is bijective for all shipped asset banks; sample names come from original FSB header tables.'])

def main():
    p=argparse.ArgumentParser(description=__doc__);p.add_argument('--root',type=Path,required=True);p.add_argument('--studio-metadata',type=Path);p.add_argument('--out',type=Path,required=True);a=p.parse_args()
    if a.out.resolve().is_relative_to(a.root.resolve()):p.error('Output must be outside game directory')
    result=graph(a.root,a.studio_metadata);dump(a.out,result);print(json.dumps(result['validation']))

if __name__=='__main__':main()
