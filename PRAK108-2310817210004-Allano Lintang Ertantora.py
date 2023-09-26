cyc = 5
#putaran
dst = 14
#jarak
cir = dst/cyc
#keliling taman
print("Diketahui :")
print("Pak Dengklek mengelilingi taman =", cyc, "Putaran")
print("Jarak tempuh Pak Dengklek =", dst, "Kilometer")
for i in range(2):
    print(" ")
print("Jawaban :")
print("Jari-jari taman yang dikelilingi Pak Denglek adalah", round((cir)/(2*3.14), 2), "Kilometer")