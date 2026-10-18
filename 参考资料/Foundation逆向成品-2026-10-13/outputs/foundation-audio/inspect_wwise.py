"""Read-only Wwise BNK/AKPK structural inventory; no extraction or playback.

Usage: python inspect_wwise.py SOURCE_ROOT OUTPUT_DIR
Format references: bnnm/wwiser and bnnm/wwiser-utils, vgmstream.
No third-party dependencies. Supports modern little/big-endian AKPK tables and
BNK version >48 HIRC envelopes, not object payload semantics.
"""
import argparse
import collections
import hashlib
import json
import struct
from pathlib import Path

HIRC_LABELS = {1:'State',2:'Sound',3:'Action',4:'Event',5:'Random/Sequence Container',6:'Switch Container',7:'Actor-Mixer',8:'Audio Bus',9:'Layer Container',10:'Music Segment',11:'Music Track',12:'Music Switch',13:'Music Random Sequence',14:'Attenuation',15:'Dialogue Event',16:'Fx Share Set',17:'Fx Custom',18:'Auxiliary Bus',19:'LFO',20:'Envelope',21:'Audio Device',22:'Time Mod'}
CODECS = {1:'PCM',2:'Wwise IMA',0x69:'IMA',0x161:'XWMA',0x162:'XWMA',0x165:'XMA2',0x166:'XMA2',0xAAC0:'AAC',0xFFF0:'DSP',0xFFFB:'HEVAG',0xFFFC:'ATRAC9',0xFFFE:'PCM',0xFFFF:'Wwise Vorbis',0x3039:'Opus NX',0x3040:'Opus',0x3041:'Wwise Opus',0x8311:'Wwise PTADPCM'}

class View:
    def __init__(self, handle, base, size):
        self.f, self.base, self.size = handle, base, size
    def read(self, offset, length):
        if offset < 0 or length < 0 or offset + length > self.size:
            raise ValueError(f'out of range: {offset}+{length}>{self.size}')
        self.f.seek(self.base + offset)
        data = self.f.read(length)
        if len(data) != length:
            raise ValueError('short read')
        return data
    def sub(self, offset, size):
        self.read(offset, 0)
        if offset + size > self.size:
            raise ValueError('subview out of range')
        return View(self.f, self.base + offset, size)
    def digest(self):
        h = hashlib.sha256()
        for offset in range(0,self.size,1024*1024):
            h.update(self.read(offset,min(1024*1024,self.size-offset)))
        return h.hexdigest()

def u32(v, offset, endian='<'):
    return struct.unpack(endian+'I',v.read(offset,4))[0]

def riff(v):
    header = v.read(0,min(v.size,32))
    r = {'magic':header[:4].decode('ascii','replace'),'header_hex':header.hex(),'available_bytes':v.size}
    if header[:4]==b'PLUG' and len(header)>=8:
        r.update(wave_magic_valid=False,carrier_class='PLUG non-WAVE data',declared_plug_bytes=u32(v,4)+8,chunks=[])
        offset=8
        while offset<v.size:
            name=v.read(offset,4).decode('ascii','replace'); size=u32(v,offset+4)
            payload=v.sub(offset+8,size)
            row={'fourcc':name,'offset':offset,'bytes':size}
            if name=='hash': row['raw_hex']=payload.read(0,size).hex()
            r['chunks'].append(row); offset+=8+size
        r['all_chunk_ranges_valid']=offset==v.size and r['declared_plug_bytes']==v.size
        return r
    if len(header)<12 or header[:4] not in (b'RIFF',b'RIFX') or header[8:12]!=b'WAVE':
        r['wave_magic_valid']=False
        r['carrier_class']='unknown non-WAVE data'
        return r
    endian = '<' if header[:4]==b'RIFF' else '>'
    declared = u32(v,4,endian)+8
    r.update(wave_magic_valid=True,carrier_class='RIFF WAVE',declared_riff_bytes=declared,extent_relation='equal' if declared==v.size else 'prefetch_or_partial' if declared>v.size else 'trailing_bytes',chunks=[])
    offset=12
    while offset+8<=v.size and offset+8<=declared:
        name=v.read(offset,4).decode('ascii','replace')
        size=u32(v,offset+4,endian)
        available=min(size,max(0,v.size-offset-8))
        r['chunks'].append({'fourcc':name,'offset':offset,'declared_bytes':size,'available_bytes':available})
        if name=='fmt ' and available>=16:
            tag,chans,rate,avg,align,bits=struct.unpack(endian+'HHIIHH',v.read(offset+8,16))
            r.update(format_tag=f'0x{tag:04x}',codec_label_from_vgmstream=CODECS.get(tag,'unknown'),channels=chans,sample_rate=rate,average_bytes_per_second=avg,block_align=align,bits_per_sample=bits)
        if available<size:
            break
        # Wwise's RIFF carrier omits the regular RIFF alignment byte.
        # See parse_wwise in vgmstream/src/meta/wwise.c.
        offset+=8+size
    r['all_available_chunk_ranges_valid']=all(x['available_bytes']==x['declared_bytes'] for x in r['chunks'])
    r['complete_chunk_envelope']=offset==declared
    return r

def range_stats(rows,limit,view=None):
    intervals=sorted((x['offset'],x['offset']+x['bytes']) for x in rows if x['bytes'])
    cursor=0; gaps=0; overlaps=0; gap_ranges=[]
    for start,end in intervals:
        if start>cursor:
            gaps+=start-cursor; gap_ranges.append((cursor,start-cursor))
        if start<cursor: overlaps+=min(cursor,end)-start
        cursor=max(cursor,end)
    if cursor<limit: gap_ranges.append((cursor,limit-cursor))
    result={'all_ranges_valid':all(0<=x['offset']<=x['offset']+x['bytes']<=limit for x in rows),'overlap_bytes':overlaps,'uncovered_bytes':gaps+max(0,limit-cursor)}
    if view:
        result['uncovered_ranges_count']=len(gap_ranges)
        result['all_uncovered_bytes_zero']=all(not any(view.read(start,size)) for start,size in gap_ranges)
        result['maximum_uncovered_range_bytes']=max((size for start,size in gap_ranges),default=0)
    return result

def bank(v):
    if v.read(0,4)!=b'BKHD': raise ValueError('not BKHD')
    endian='<' if u32(v,4)<v.size else '>'
    result={'bytes':v.size,'sha256':v.digest(),'endianness':'little' if endian=='<' else 'big','chunks':[],'media':[],'hirc':[]}
    chunks={}; offset=0
    while offset<v.size:
        name=v.read(offset,4).decode('ascii')
        size=u32(v,offset+4,endian)
        payload=v.sub(offset+8,size)
        if name in chunks: raise ValueError('duplicate bank chunk')
        chunks[name]=payload
        result['chunks'].append({'fourcc':name,'offset':offset,'bytes':size})
        offset+=8+size
    result['all_chunk_ranges_valid']=offset==v.size
    bk=chunks['BKHD']; version=u32(bk,0,endian)
    result.update(bank_version=version,bank_id=u32(bk,4,endian),language_id=u32(bk,8,endian))
    if 'DIDX' in chunks:
        didx=chunks['DIDX']; data=chunks['DATA']
        if didx.size%12: raise ValueError('DIDX remainder')
        for offset in range(0,didx.size,12):
            id_,start,size=struct.unpack(endian+'III',didx.read(offset,12))
            media=data.sub(start,size)
            result['media'].append({'id':id_,'offset':start,'absolute_offset':media.base,'bytes':size,'riff':riff(media)})
        result['data_ranges']=range_stats(result['media'],data.size,data)
    if 'HIRC' in chunks:
        h=chunks['HIRC']; count=u32(h,0,endian); offset=4
        for index in range(count):
            width=4 if version<=48 else 1
            type_=u32(h,offset,endian) if width==4 else h.read(offset,1)[0]
            size=u32(h,offset+width,endian)
            payload=h.sub(offset+width+4,size)
            result['hirc'].append({'index':index,'type':type_,'type_label_from_wwiser':HIRC_LABELS.get(type_,'unknown') if version>=128 else 'not mapped for this version','offset':offset,'absolute_offset':h.base+offset,'payload_bytes':size,'object_id':u32(payload,0,endian) if size>=4 else None})
            offset+=width+4+size
        if offset!=h.size: raise ValueError('HIRC trailing or missing data')
        result['hirc_declared_count']=count
        result['hirc_type_counts']=dict(sorted(collections.Counter(x['type_label_from_wwiser'] for x in result['hirc']).items()))
        result['all_hirc_ranges_valid']=True
    return result

def package(v):
    if v.read(0,4)!=b'AKPK': raise ValueError('not AKPK')
    endian='<' if u32(v,8)==1 else '>'
    header=u32(v,4,endian)
    sizes=[u32(v,x,endian) for x in (12,16,20)]
    has_external=sum(sizes)+16<header
    if has_external: sizes.append(u32(v,24,endian))
    cursor=28 if has_external else 24
    if cursor+sum(sizes)!=header+8: raise ValueError('header sizes do not sum')
    result={'bytes':v.size,'sha256':v.digest(),'endianness':'little' if endian=='<' else 'big','header_size_field':header,'data_start':header+8,'section_sizes':sizes,'languages':[],'files':[]}
    lang=v.sub(cursor,sizes[0]); count=u32(lang,0,endian)
    for i in range(count):
        start,id_=struct.unpack(endian+'II',lang.read(4+i*8,8))
        first=lang.read(start,2)
        if 0 in first:
            end=start
            while lang.read(end,2)!=b'\0\0': end+=2
            name=lang.read(start,end-start).decode('utf-16-le' if endian=='<' else 'utf-16-be')
        else:
            end=start
            while lang.read(end,1)!=b'\0': end+=1
            name=lang.read(start,end-start).decode('utf-8')
        result['languages'].append({'id':id_,'name':name,'string_offset':start})
    cursor+=sizes[0]
    for type_,section_size in zip(('bank','streamed_media','external_media'),sizes[1:]):
        table=v.sub(cursor,section_size)
        if not section_size: continue
        count=u32(table,0,endian)
        if count:
            width=(section_size-4)//count
            if width not in (20,24) or width*count+4!=section_size: raise ValueError('unsupported table entry layout')
            for i in range(count):
                raw=table.read(4+i*width,width)
                if width==20: id_,block,size,start,lang=struct.unpack(endian+'IIIII',raw)
                elif type_=='external_media': id_,block,size,start,lang=struct.unpack(endian+'QIIII',raw)
                else: id_,block,size,start,lang=struct.unpack(endian+'IIQII',raw)
                absolute=start*(block or 1)
                payload=v.sub(absolute,size)
                row={'section':type_,'index':i,'id':id_,'block_size':block,'start_block':start,'offset':absolute,'bytes':size,'language_id':lang,'table_offset':cursor+4+i*width,'table_entry_bytes':width}
                row['bank']=bank(payload) if type_=='bank' else None
                if type_!='bank': row['riff']=riff(payload)
                result['files'].append(row)
        elif section_size!=4: raise ValueError('empty section unexpected bytes')
        cursor+=section_size
    result['ranges']=range_stats(result['files'],v.size)
    result['ranges']['payload_overlaps_header']=any(x['offset']<header+8 for x in result['files'])
    return result

def summarize(label,b):
    media=b['media'] if 'media' in b else [x for x in b['files'] if x['section']!='bank']
    return {'path':label,'sha256':b['sha256'],'bytes':b['bytes'],'media_count':len(media),'carrier_classes':dict(collections.Counter(x['riff']['carrier_class'] for x in media)),'valid_wave_magic_count':sum(x['riff']['wave_magic_valid'] for x in media),'riff_extent_relations':dict(collections.Counter(x['riff'].get('extent_relation','not WAVE') for x in media)),'codec_counts':dict(collections.Counter(x['riff'].get('codec_label_from_vgmstream','not decoded') for x in media)),'sample_rate_counts':dict(collections.Counter(str(x['riff'].get('sample_rate','not decoded')) for x in media)),'channel_counts':dict(collections.Counter(str(x['riff'].get('channels','not decoded')) for x in media)),'hirc_type_counts':b.get('hirc_type_counts',{}),'range_validation':b.get('data_ranges',b.get('ranges'))}

def main():
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument('source_root',type=Path); ap.add_argument('output_dir',type=Path)
    args=ap.parse_args(); args.output_dir.mkdir(parents=True,exist_ok=True)
    summaries=[]; standalone={}; packages=[]
    for path in sorted(args.source_root.rglob('*')):
        if path.suffix.lower() not in ('.bnk','.pck') or not path.is_file(): continue
        label=path.relative_to(args.source_root).as_posix()
        with path.open('rb') as f:
            view=View(f,0,path.stat().st_size)
            result=bank(view) if path.suffix.lower()=='.bnk' else package(view)
        result['path']=label
        name=label.replace('/','__')+'.json'
        (args.output_dir/name).write_text(json.dumps(result,indent=2,ensure_ascii=False)+'\n',encoding='utf-8')
        summaries.append(summarize(label,result))
        if path.suffix.lower()=='.bnk': standalone.setdefault(result['sha256'],[]).append(label)
        else: packages.append(result)
    duplicates=[]
    for p in packages:
        for row in p['files']:
            if row['bank']:
                duplicates.append({'package':p['path'],'bank_id':row['id'],'offset':row['offset'],'bytes':row['bytes'],'embedded_sha256':row['bank']['sha256'],'exact_standalone_matches':standalone.get(row['bank']['sha256'],[])})
    summary={'schema_version':1,'mode':'static-read-only','source_root':str(args.source_root.resolve()),'files':summaries,'embedded_bank_matches':duplicates,'limitations':['No audio decoded, extracted, played, or target executable run.','HIRC envelope/type labels only; payload semantics, triggers, routing, and runtime use remain unparsed.','RIFF declared size greater than indexed bytes identifies a partial/prefetch carrier; not treated as an index boundary violation.','Codec labels are mappings from vgmstream source; successful decode is not established.']}
    (args.output_dir/'summary.json').write_text(json.dumps(summary,indent=2,ensure_ascii=False)+'\n',encoding='utf-8')
    print(json.dumps(summary,indent=2,ensure_ascii=False))

if __name__=='__main__': main()
