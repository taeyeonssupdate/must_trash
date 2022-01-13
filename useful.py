from PIL import Image
from pathlib import Path
from PIL import UnidentifiedImageError

folders = ['A', 'B', 'C']

for folder in folders:
    path = Path("/Users/taeyeon/vscode/must_trash/{}".format(folder)).rglob("*.jpg")
    for img_p in path:
        try:
            img = Image.open(img_p)
        except UnidentifiedImageError:
                print(img_p)
