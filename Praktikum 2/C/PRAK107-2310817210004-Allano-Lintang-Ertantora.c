#include <stdio.h>

int main() {
    int a = 4;
    int b = 5;
    int c = 7;
    //Panjang sisi
    int kl = a + b + c;
    //Keliling
    int rp = 85000;
    printf("Diketahui: \n");
    printf("Panjang segitiga berturut-turut adalah %d, %d, dan %d\n", a, b, c);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", kl);
    printf("Harga tanah Per Meter adalah %d\n", rp);
    printf("Jawaban: ");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d", rp * kl);
    return 0;
}