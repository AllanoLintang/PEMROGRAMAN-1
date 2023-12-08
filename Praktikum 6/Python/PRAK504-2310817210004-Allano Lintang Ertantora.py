def reverse(n):
    kebalikan = 0
    while n != 0:
        sisabagi = n % 10
        kebalikan = kebalikan * 10 + sisabagi
        n //= 10
    return kebalikan

A, B = map(int, input().split())
A = reverse(A)
B = reverse(B)
C = A + B
print(reverse(C))