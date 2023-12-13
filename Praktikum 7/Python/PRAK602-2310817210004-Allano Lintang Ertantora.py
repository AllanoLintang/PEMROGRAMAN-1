angka = int(input())
arr = list(map(int, input().split()))
for i in range(1, angka+1):
    print(arr[i-1] * i, end=" ")