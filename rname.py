import requests
from bs4 import BeautifulSoup
import os
from urllib.parse import urljoin
url = "https://www.shutterstock.com/search/carambola"
save_dir = r"D:\Selected\DN"
os.makedirs(save_dir, exist_ok=True)
headers = {"User-Agent": "Mozilla/5.0"}
response = requests.get(url, headers=headers)
soup = BeautifulSoup(response.text, "html.parser")
count = 0
for img in soup.find_all("img"):
    src = img.get("src")
    if not src:
        continue
    img_url = urljoin(url, src)
    try:
        img_data = requests.get(img_url, headers=headers, timeout=5).content
        ext = os.path.splitext(img_url.split("?")[0])[1]
        if not ext:
            ext = ".jpg"
        filename = f"img_{count + 1}{ext}"
        save_path = os.path.join(save_dir, filename)
        with open(save_path, "wb") as f:
            f.write(img_data)
        print(f" Saved: {filename}")
        count += 1
    except Exception as e:
        print(f" Failed: {img_url} | Error: {e}")
print(f"\n Done! Total images downloaded: {count}")
