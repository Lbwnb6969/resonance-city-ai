"""Arrange real Godot captures without repainting or altering their colours."""
from pathlib import Path
from PIL import Image,ImageDraw,ImageFont
ROOT=Path(__file__).resolve().parents[1]
OUT=ROOT/"验证记录/草毯层次_2026-10-15"
font=ImageFont.truetype("C:/Windows/Fonts/msyh.ttc",26)
small=ImageFont.truetype("C:/Windows/Fonts/msyh.ttc",19)
board=Image.new("RGB",(1440,1000),(240,237,224))
draw=ImageDraw.Draw(board)
for x,label in [(0,"before"),(720,"after")]:
    draw.text((x+22,13),"改动前" if label=="before" else "当前：草簇、接地与受光",font=font,fill=(37,67,55))
    street=Image.open(OUT/label/"01_street_day.png").convert("RGB")
    board.paste(street.resize((720,450),Image.Resampling.LANCZOS),(x,55))
    close=Image.open(OUT/label/"03_ground_close.png").convert("RGB")
    # Exactly the same crop and resampling on both sides; no image generation.
    board.paste(close.crop((0,0,1000,625)).resize((720,450),Image.Resampling.LANCZOS),(x,538))
draw.text((22,510),"同一作品 / 镜头 / 光照：近景草叶与路缘",font=small,fill=(37,67,55))
board.save(OUT/"草地前后对照.png")
print("Saved original-pixel comparison board")
