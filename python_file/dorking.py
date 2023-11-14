import googlesearch
from googlesearch import search
search("Google")

nama = input(f"Nama Lengkap : ")
dorks = ['inlink:', 'intext:', 'intitle:', 'inurl:', 'in:''on:']

for i in dorks:
    for results in search(f'{i}{nama}',num_results=5, sleep_interval=5, lang='en'):
        print(results)
    else:
        print(f"sedang mencari",(nama))