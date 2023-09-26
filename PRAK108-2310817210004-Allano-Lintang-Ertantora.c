#include <stdio.h>

int main() {
    float cyc = 5;
    //Putaran
    float dst = 14;
    //jarak
    float cir = dst / cyc;
    //keliling taman
    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %.f Putaran\n", cyc);
    printf("Jarak tempuh Pak Dengklek = %.f Kilometer\n\n\n", dst);
    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Denglek adalah %.2f Kilometer", (cir)/(2*3.14));
    
    return 0;
}