inprut = input() #input
var = inprut.split() #agar input yang dimasukkan dipisah antar spasi
a, b, i, j, x, y = map(int, var) #memasukkan input yang sudah dipisah kedalam variabel masing masing
hsl = (a - b) * i / j - (x + y) #operasi aritmetika
print(f'{hsl:.3f}') #hasil yang menampilkan 3 angka desimal di output

#input kedua, berbentuk persegi memanjang kebawah, seperti matriks ordo 2x3
#baris pertama
inprut1 = input()
var1 = inprut1.split()
a, b = map(int, var1)

#baris kedua
inprut2 = input()
var2 = inprut2.split()
i, j = map(int, var2)

#baris ketiga
inprut3 = input()
var3 = inprut3.split()
x, y = map(int, var3)

hsl = (a - b) * i / j - (x + y) #operasi aritmetika
print(f'{hsl:.3f}')