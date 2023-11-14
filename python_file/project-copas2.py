import os
import math
import random
import smtplib

digits="0123456789"
OTP=""
for i in range(6):
    OTP+=digits[math.floor(random.random()*10)]
otp = "Berikut adalah code OTP kamu : " + OTP
msg= otp
s = smtplib.SMTP('smtp.gmail.com', 587)
s.starttls()
s.login("radityasp1811@gmail.com", "qyse hciu twqw ding")
emailid = input("Masukan email: ")
s.sendmail('&&&&&&&&&&&',emailid,msg)
a = input("Masukan Code OTP >>: ")
if a == OTP:
    print("Verified")
else:
    print("OTP Salah! Silakan cek ulang")