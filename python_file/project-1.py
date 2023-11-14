import random
passe = int(input("masukan password"))
s="abcdefghijklmnopqrstuvwqyz1234567890ABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%^&*()?"
p = "".join(random.sample(s,passe))
print(p)

# PASSWORD GENERATOR