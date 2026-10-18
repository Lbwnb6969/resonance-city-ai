"""Derive static HIRC reference/path indexes from pinned wwiser XML.
All offsets and values are preserved; reachability is not a playback simulation.
"""
import collections,csv,hashlib,json,xml.etree.ElementTree as E
from pathlib import Path

OUT=Path('outputs/foundation-audio-recovered')
ROOT=Path('D:/steamtest/steamapps/common/Foundation')
xml=OUT/'banks-full.xml'
tree=E.fromstring('<banks>'+xml.read_text(encoding='utf-8')+'</banks>')
# wwiser intentionally writes one XML root per bank; normalize to one root.
E.ElementTree(tree).write(OUT/'banks-full-wrapped.xml',encoding='utf-8',xml_declaration=True)
manifest=json.loads((OUT/'original-media-manifest.json').read_text(encoding='utf-8'))
media=collections.defaultdict(list)
for m in manifest['rows']: media[m['id']].append(m)
objects=[]; byid=collections.defaultdict(list); root_defs=collections.defaultdict(list); bank_ids={}

def integer(field):
    try: return int(field.get('value'))
    except (TypeError,ValueError): return None

def fields(element,name): return element.findall('.//field[@name="'+name+'"]')
def first(element,name):
    f=element.find('.//field[@name="'+name+'"]')
    return integer(f) if f is not None else None
def context(root): return (Path(root.get('path'))/root.get('filename')).relative_to(ROOT).as_posix()
def prefer(candidates,bank): return [c for c in candidates if c['bank']==bank] or candidates

for bankroot in tree:
    bank=context(bankroot)
    bank_id=first(bankroot,'dwSoundBankID');bank_ids[bank_id]=bank
    for field in bankroot.findall('.//field[@type="sid"]'):
        root_defs[integer(field)].append({'bank':bank,**field.attrib})
    for element in bankroot.findall('.//list[@name="listLoadedItem"]/object'):
        sid=element.find('./field[@name="ulID"]')
        id_=integer(sid)
        obj={'key':bank+':'+str(id_),'bank':bank,'id':id_,'class':element.get('name'),'offset':sid.get('offset'),'name':sid.get('hashname'),'hirc_type':first(element,'eHircType'),'declared_payload_bytes':first(element,'dwSectionSize'),'element':element}
        objects.append(obj);byid[id_].append(obj)

def candidates(id_,bank): return prefer(byid.get(id_,[]),bank)
def mediacandidates(id_,bank):
    prefix=bank.rsplit('/',1)[0]
    return [m for m in media.get(id_,[]) if m['source_relative'].rsplit('/',1)[0]==prefix] or media.get(id_,[])

refs=[]; gaps=[]; errors=[]; allfields=[]; names=[]
def visit(element,obj,path):
    label=element.get('name',element.tag)
    path=path+'/'+label+(('['+element.get('index')+']') if element.get('index') is not None else '')
    if element.tag=='field':
        row={'bank':obj['bank'],'object_id':obj['id'],'object_class':obj['class'],'field_path':path,**element.attrib}
        allfields.append(row)
        if element.get('hashname'): names.append({'id':integer(element),'name':element.get('hashname'),'provenance':'wwiser companion/default name inference','bank':obj['bank'],'field_path':path})
        if element.get('type') in ('tid','sid'):
            id_=integer(element)
            if element.get('type')=='tid':
                h=candidates(id_,obj['bank']);m=mediacandidates(id_,obj['bank']);s=root_defs.get(id_,[])
                row={**row,'target_value':id_,'hirc_target_keys':[o['key'] for o in h],'media_target_paths':[m['path'] for m in m],'same_bank_sid_definition_count':sum(x['bank']==obj['bank'] for x in s),'resolution':'zero/no target' if id_==0 else 'HIRC object' if h else 'indexed media' if m else 'SID definition in banks' if s else 'not defined in selected banks/media'}
                refs.append(row)
        if element.get('type')=='gap': gaps.append(row)
    if element.tag in ('error','skip'): errors.append({'bank':obj['bank'],'object_id':obj['id'],'field_path':path,**element.attrib})
    for child in element: visit(child,obj,path)
for obj in objects: visit(obj['element'],obj,'')

# Playback descendants use forward Children fields, never parent/bus/effect refs.
edges=collections.defaultdict(list);issues=[]
for obj in objects:
    e=obj['element'];cls=obj['class']
    ids=[]
    if cls=='CAkEvent': ids=[integer(f) for f in fields(e,'ulActionID')]
    elif cls.startswith('CAkAction'): ids=[integer(f) for f in fields(e,'idExt') if integer(f)]
    else:
        ids=[integer(f) for f in e.findall('.//object[@name="Children"]/field[@name="ulChildID"]')]
    for id_ in dict.fromkeys(ids):
        targets=candidates(id_,obj['bank'])
        if not targets and (cls=='CAkEvent' or cls in ('CAkActionPlay','CAkActionPlayEvent')):
            issues.append({'object_key':obj['key'],'class':cls,'reference':id_,'reason':'required event/play HIRC target absent'})
        edges[obj['key']].extend(o['key'] for o in targets)

bykey={o['key']:o for o in objects}
events=[];paths=[];soundmedia=[]
for obj in objects:
    if obj['class']=='CAkSound':
        source_ids=[integer(f) for f in fields(obj['element'],'sourceID')]
        plugin_id=first(obj['element'],'ulPluginID')
        stream_type=first(obj['element'],'StreamType')
        for id_ in source_ids:
            matches=mediacandidates(id_,obj['bank'])
            row={'sound_key':obj['key'],'sound_id':obj['id'],'bank':obj['bank'],'source_id':id_,'source_plugin_id':plugin_id,'stream_type':stream_type,'media_paths':[m['path'] for m in matches],'resolution':'indexed media' if matches else 'zero/generated source' if id_==0 or plugin_id==6619138 else 'source absent from media index'}
            soundmedia.append(row)
            if row['resolution']=='source absent from media index': issues.append(row)
    if obj['class']!='CAkEvent': continue
    seen=set(); soundkeys=set();cycle=[];nonplay=[]; generated=[]
    def walk(key,path):
        if key in path:
            cycle.append(path+[key]); return
        node=bykey[key];path=path+[key];seen.add(key)
        if node['class']=='CAkSound':
            soundkeys.add(key)
            source_ids=[integer(f) for f in fields(node['element'],'sourceID')]
            for id_ in source_ids:
                matches=mediacandidates(id_,node['bank'])
                if not matches: generated.append({'sound_key':key,'source_id':id_,'plugin_id':first(node['element'],'ulPluginID')})
                for m in matches: paths.append({'event_key':obj['key'],'event_id':obj['id'],'event_bank':obj['bank'],'object_path':path,'sound_id':node['id'],'media_id':id_,'media_path':m['path']})
            return
        if node['class'].startswith('CAkAction') and node['class'] not in ('CAkActionPlay','CAkActionPlayEvent'):
            nonplay.append({'key':key,'class':node['class'],'action_type':first(node['element'],'ulActionType'),'target_ids':[integer(f) for f in fields(node['element'],'idExt')]});return
        for nextkey in edges[key]: walk(nextkey,path)
    walk(obj['key'],[])
    events.append({'event_key':obj['key'],'event_id':obj['id'],'name':obj['name'],'bank':obj['bank'],'action_ids':[integer(f) for f in fields(obj['element'],'ulActionID')],'reachable_sound_ids':sorted({bykey[k]['id'] for k in soundkeys}),'reachable_media_paths':sorted({p['media_path'] for p in paths if p['event_key']==obj['key']}),'non_play_actions':nonplay,'generated_or_unresolved_sources':generated,'cycles':cycle})

def write_json(name,value): (OUT/name).write_text(json.dumps(value,indent=2,ensure_ascii=False)+'\n',encoding='utf-8')
serializable=[{k:v for k,v in o.items() if k!='element'} for o in objects]
write_json('hirc-object-map.json',serializable)
write_json('hirc-all-fields.json',allfields)
write_json('hirc-reference-map.json',refs)
write_json('event-action-sound-media.json',{'events':events,'paths':paths,'interpretation':'Static union of reachable Child paths for Play/PlayEvent actions; switch conditions, random weights and runtime state are preserved in XML but not evaluated here. Stop/Pause/Resume/Seek/SetState/SetGameParameter are listed without pretending they start playback.'})
write_json('sound-media-map.json',soundmedia)
write_json('wwiser-names-map.json',names)
write_json('semantic-coverage-gaps.json',{'required_target_issues':issues,'opaque_fields':gaps,'parser_error_skip_elements':errors,'non_object_sid_definitions':dict(root_defs)})
summary={'banks':len(tree),'hirc_objects':len(objects),'events':len(events),'event_media_paths':len(paths),'events_with_indexed_media':sum(bool(x['reachable_media_paths']) for x in events),'sounds':len(soundmedia),'sound_media_resolution_counts':dict(collections.Counter(x['resolution'] for x in soundmedia)),'references':len(refs),'reference_resolution_counts':dict(collections.Counter(x['resolution'] for x in refs)),'required_target_issues':len(issues),'opaque_fields':len(gaps),'opaque_field_name_counts':dict(collections.Counter(x['name'] for x in gaps)),'parser_error_skip_elements':len(errors),'all_field_count':len(allfields),'hirc_class_counts':dict(collections.Counter(x['class'] for x in objects)),'xml_sha256':hashlib.sha256(xml.read_bytes()).hexdigest(),'bank_generator_language_values':[{**r.attrib,'dwLanguageID':first(r,'dwLanguageID')} for r in tree],'notes':['SoundBank BKHD dwLanguageID is generator field; AKPK language table ID0 means sfx, not the same numeric domain.','Parser errors/skips=0 does not imply opaque plugin parameter fields were semantically decoded.','Names from wwiser default/companion inference are tagged; unknown names remain numeric IDs.','No game runtime execution or actual event playback was observed.']}
write_json('semantic-summary.json',summary)
print(json.dumps(summary,indent=2,ensure_ascii=False))
