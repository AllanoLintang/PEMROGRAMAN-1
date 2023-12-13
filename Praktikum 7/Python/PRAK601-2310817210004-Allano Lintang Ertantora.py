rows, cols = map(int, input().split())
matrix = list(map(int, input().split()))
matrix = [matrix[i:i+cols] for i in range(0, len(matrix), cols)]
for i in range(rows):
    for j in range(cols):
        print(matrix[i][j], end=" ")
    print()