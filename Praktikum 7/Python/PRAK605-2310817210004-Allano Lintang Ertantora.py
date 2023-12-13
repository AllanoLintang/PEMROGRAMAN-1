barisKolom = int(input())
print('Matriks A')
matrixA = []
for i in range(barisKolom):
    matrixA.append(list(map(int, input().split())))
print('Matriks B')
matrixB = []
for i in range(barisKolom):
    matrixB.append(list(map(int, input().split())))
matrixHasil = []
for i in range(barisKolom):
    matrixHasil.append([0] * barisKolom)
for i in range(barisKolom):
    for j in range(barisKolom):
        for k in range(barisKolom):
            matrixHasil[i][j] += matrixA[i][k] * matrixB[k][j]
print("Matriks AXB")
for i in matrixHasil:
    print(i)