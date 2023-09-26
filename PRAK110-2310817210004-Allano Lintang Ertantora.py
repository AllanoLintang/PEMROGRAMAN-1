import math
alas = 5
tinggi = 12
hyp = round(math.sqrt((alas**2)+(tinggi**2)))#rumus pythagoras untuk mencari sisi miring
print("Diketahui :")
print("Alas =",alas,"cm")
print("Tinggi =",tinggi,"cm")
for i in range(2):
    print(" ")
print("Jawab:")
print("Sisi A =", tinggi,"cm")
print("Sisi B =", hyp,"cm")
print("Sisi C =", alas,"cm")
print("Keliling =", tinggi + alas + hyp)
print("Luas =", round((1/2) * alas * tinggi))