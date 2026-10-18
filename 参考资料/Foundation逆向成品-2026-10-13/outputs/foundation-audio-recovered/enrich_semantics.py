from pathlib import Path
import json,hashlib,collections,struct,xml.etree.ElementTree as E
OUT=Path('outputs/foundation-audio-recovered');ROOT=Path('D:/steamtest/steamapps/common/Foundation')
tree=E.parse(OUT/'banks-full-wrapped.xml').getroot()
manifest=json.loads((OUT/'original-media-manifest.json').read_text(encoding='utf-8'))
media=collections.defaultdict(list)
for m in manifest['rows']:media[m['id']].append(m)
g=json.loads((OUT/'semantic-coverage-gaps.json').read_text(encoding='utf-8'))
for gap in g['opaque_fields']:
    raw=(ROOT/gap['bank']).read_bytes()[int(gap['offset']):int(gap['offset'])+int(gap['value'])]
    path=Path('opaque-plugin-params')/Path(gap['bank']).with_suffix('')/(str(gap['object_id'])+'.bin')
    (OUT/path).parent.mkdir(parents=True,exist_ok=True);(OUT/path).write_bytes(raw)
    gap.update(raw_path=path.as_posix(),raw_hex=raw.hex(),sha256=hashlib.sha256(raw).hexdigest())
    # Raw aligned scalar candidates only: no invented field meanings.
    gap['little_endian_f32_candidates']=[struct.unpack('<f',raw[i:i+4])[0] for i in range(0,len(raw)-3,4)]
g['opaque_bytes_exported']=sum(int(x['value']) for x in g['opaque_fields'])

effects=[];layerdefs=[];plugin_counts=collections.Counter()
for bankroot in tree:
    bank=(Path(bankroot.get('path'))/bankroot.get('filename')).relative_to(ROOT).as_posix()
    for o in bankroot.findall('.//list[@name="listLoadedItem"]/object'):
        id_=int(o.find('./field[@name="ulID"]').get('value'))
        if o.get('name') in ('CAkFxCustom','CAkFxShareSet','CAkAudioDevice'):
            plugin=o.find('.//field[@name="fxID"]');pid=int(plugin.get('value')) if plugin is not None else None
            label=plugin.get('valuefmt') if plugin is not None else None
            plugin_counts[label]+=1
            ms=[]
            for f in o.findall('.//list[@name="media"]//field[@name="sourceId"]'):
                sid=int(f.get('value'));matches=media.get(sid,[])
                ms.append({'source_id':sid,'offset':f.get('offset'),'original_paths':[m['path'] for m in matches],'magic':[m['magic'] for m in matches]})
            effects.append({'bank':bank,'id':id_,'class':o.get('name'),'plugin_id':pid,'plugin_label':label,'media':ms})
        for f in o.findall('.//object[@name="CAkLayer"]/field[@name="ulLayerID"]'):
            layerdefs.append({'bank':bank,'container_id':id_,'id':int(f.get('value')),'offset':f.get('offset'),'scope':'inline CAkLayer identity, not missing standalone HIRC'})
    for gap in g['opaque_fields']:
        if gap['bank']==bank:
            effect=next(e for e in effects if e['bank']==bank and e['id']==gap['object_id'])
            gap.update(plugin_id=effect['plugin_id'],plugin_label=effect['plugin_label'])

refs=json.loads((OUT/'hirc-reference-map.json').read_text(encoding='utf-8'))
layerids={x['id'] for x in layerdefs}
for r in refs:
    if r['resolution']=='not defined in selected banks/media' and r['name']=='ulLayerID' and r['target_value'] in layerids:
        r['resolution']='inline layer identity'
summary=json.loads((OUT/'semantic-summary.json').read_text(encoding='utf-8'))
summary['reference_resolution_counts']=dict(collections.Counter(r['resolution'] for r in refs))
summary['plugin_counts']=dict(plugin_counts)
summary['effect_media_references']=sum(len(e['media']) for e in effects)
summary['plug_referenced_by_plugins']=dict(collections.Counter(e['plugin_label'] for e in effects for m in e['media'] if 'PLUG' in m['magic']))
summary['inline_layer_count']=len(layerdefs)
summary['opaque_plugin_bytes']=g['opaque_bytes_exported']
for name,data in [('semantic-coverage-gaps.json',g),('effect-plugin-media-map.json',effects),('inline-layer-map.json',layerdefs),('hirc-reference-map.json',refs),('semantic-summary.json',summary)]:
    (OUT/name).write_text(json.dumps(data,indent=2,ensure_ascii=False)+'\n',encoding='utf-8')
print(json.dumps({k:v for k,v in summary.items() if k in ('reference_resolution_counts','plugin_counts','effect_media_references','plug_referenced_by_plugins','inline_layer_count','opaque_plugin_bytes')},indent=2))
