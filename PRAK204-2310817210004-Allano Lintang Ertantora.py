r = int(input())
h = int(input())
v = (22/7) * r**2 * h #rumus volume silinder
l = 2*(22/7)* r * (r + h) #rumus luas silinder
k = 2*(22/7)* r #rumus keliling silinder
print("Volume =", end=" ")
print(f'{v:.2f}')
print("Luas =", end=" ")
print(f'{l:.2f}')
print("Keliling =", end=" ")
print(f'{k:.2f}')

#input bentuk horizontal
input = input()
var = input.split()
r, h = map(int, var)
v = (22/7) * r**2 * h
l = 2*(22/7)* r * (r + h)
k = 2*(22/7)* r
print("Volume =", end=" ")
print(f'{v:.2f}')
print("Luas =", end=" ")
print(f'{l:.2f}')
print("Keliling =", end=" ")
print(f'{k:.2f}')