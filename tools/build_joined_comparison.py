"""Arrange unchanged Godot frame pixels to compare architectural seams."""
from pathlib import Path
from PIL import Image, ImageDraw, ImageFont

ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / "验证记录/连排接合_2026-10-15"
board = Image.new("RGB", (1440, 1500), (240, 237, 224))
draw = ImageDraw.Draw(board)
font = ImageFont.truetype("C:/Windows/Fonts/msyh.ttc", 25)
small = ImageFont.truetype("C:/Windows/Fonts/msyh.ttc", 20)
for col, mode in enumerate(("before", "after")):
    x = col * 720
    draw.text((x + 18, 12), "改动前" if mode == "before" else "当前：跨户连排、转角与内院", font=font, fill=(37, 67, 55))
    for row, name in enumerate(("01_row", "02_L", "03_courtyard")):
        shot = Image.open(OUT / mode / (name + ".png")).convert("RGB")
        board.paste(shot.resize((720, 450), Image.Resampling.LANCZOS), (x, 50 + row * 480))
        draw.text((x + 18, 500 + row * 480), ("长排与高差", "L 型转角", "U 型内院保持敞开")[row], font=small, fill=(37, 67, 55))
board.save(OUT / "建筑接合前后.png")
print("Saved actual-frame comparison; equal crop/resize, no repainting.")
