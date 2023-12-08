#include <stdio.h>
#include <math.h>

int main() {
    int alas = 5;
    int tinggi = 12;
    int hyp = sqrt(pow(alas, 2) + pow(tinggi, 2)); //rumus pythagoras untuk mencari sisi miring
    printf("Diketahui :\n");
    printf("Alas = %d cm\n", alas);
    printf("Tinggi = %d cm\n\n\n", tinggi);
    printf("Jawab :\n");
    printf("Sisi A = %d cm\n", tinggi);
    printf("Sisi B = %d cm\n", hyp);
    printf("Sisi C = %d cm\n", alas);
    printf("Keliling = %d cm\n", alas + tinggi + hyp);
    printf("Luas = %d cm", (alas * tinggi)/2);
    return 0;
}