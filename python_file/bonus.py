total_belanja = input("Total belanja: Rp.")

bayar = int(total_belanja)

if int (total_belanja)>100000:
    print("Selamat karna belanja Rp. 100.000 anda mendapat Voucher Makan")
    print("dan Diskon 5%")

    diskon = int(total_belanja) *5/100
    bayar = int(total_belanja) - diskon

print("Total yang harus di bayar: Rp. %s " %bayar)
print("Terima kasih sudah berbelanja ddi toko kami!")