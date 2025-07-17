import os
from PIL import Image
import numpy as np
import imagehash
from collections import defaultdict
import cv2

def is_black_or_white(img):
    arr = np.array(img)
    return np.all(arr == arr[0])

def is_too_small(img, min_size=(100, 100)):
    return img.size[0] < min_size[0] or img.size[1] < min_size[1]

def compute_sharpness_cv(image_path):
    img = cv2.imread(image_path, cv2.IMREAD_GRAYSCALE)
    if img is None:
        return 0
    return cv2.Laplacian(img, cv2.CV_64F).var()

def clean_and_deduplicate(folder_path):
    hash_dict = defaultdict(list)
    removed = 0

    for filename in os.listdir(folder_path):
        file_path = os.path.join(folder_path, filename)
        if not os.path.isfile(file_path):
            continue

        try:
            with Image.open(file_path) as img:
                img = img.convert("RGB")

                # 1. Remove bad images
                if is_black_or_white(img):
                    print(f"Removed (monotone): {filename}")
                    os.remove(file_path)
                    removed += 1
                    continue

                if is_too_small(img):
                    print(f"Removed (too small): {filename}")
                    os.remove(file_path)
                    removed += 1
                    continue

                # 2. Group by hash
                img_hash = imagehash.phash(img)
                hash_dict[str(img_hash)].append((file_path, img.size))

        except Exception as e:
            print(f"Removed (corrupt): {filename} | Reason: {e}")
            os.remove(file_path)
            removed += 1

    # 3. Deduplicate (keep best image per hash group)
    for h, group in hash_dict.items():
        if len(group) <= 1:
            continue

        # Sort by resolution and sharpness
        best_img = max(group, key=lambda x: (x[1][0]*x[1][1], compute_sharpness_cv(x[0])))
        for file_path, _ in group:
            if file_path != best_img[0]:
                os.remove(file_path)
                print(f"Removed duplicate: {os.path.basename(file_path)}")
                removed += 1

    print(f"\n✅ Done. Total removed: {removed}")

# 🔧 Change this to your folder
clean_and_deduplicate(r"D:\Selected\Video Scrapping\Kao Fol")
