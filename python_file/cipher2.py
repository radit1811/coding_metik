txt = input("masukan kata-kata : ")
s = input("masukan angka : ")
k = int(s)

def encypt_func(txt, k):
        result = ""

        for i in range(len(txt)):
                char = txt[i]

                if (char.isupper()):
                        result += chr((ord(char) - k - 65) % 26 + 65)

                else:
                        result += chr((ord(char) - k - 97) % 26 + 97)
        return result

print("Plain txt : " + txt)
print("Shift pattern : " + str(k))
print("Chiper : " + encypt_func(txt, k))