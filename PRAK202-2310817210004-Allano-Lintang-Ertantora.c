#include <stdio.h>
int main(){
    float x, y;
    printf("Masukkan Nilai Pertama: ");
    scanf("%f", &x);
    printf("Masukkan Nilai Kedua: ");
    scanf("%f", &y);
    printf("Hasil dari penjumlahan nilai pertama \"%g\" dan nilai kedua \"%g\" adalah %.2f", x, y, x + y);
    return 0;
}