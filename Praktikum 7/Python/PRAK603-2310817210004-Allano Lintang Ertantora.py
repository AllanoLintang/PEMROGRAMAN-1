satu, dua = map(int, input().split())
if satu != dua:
    print("Jumlah tidak sama")
else:
    barisSatu = list(map(int, input().split()))
    barisDua = list(map(int, input().split()))
    for i in range(satu):
        print(barisSatu[i] * barisDua[i], end=" ")