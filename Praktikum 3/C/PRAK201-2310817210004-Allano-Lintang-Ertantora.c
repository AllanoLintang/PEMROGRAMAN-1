#include <stdio.h>

int main(){
    char nama[100], nim[100], kls[100], ttl[100], alamat[100], hob[100], no[100]; //variabel dari semua data
    
    printf("Nama: "); fgets(nama, sizeof(nama), stdin);
    printf("NIM: "); fgets(nim, sizeof(nim), stdin);
    printf("Kelas Paralel(1/2?): "); fgets(kls, sizeof(kls), stdin);
    printf("Tempat/Tanggal Lahir: "); fgets(ttl, sizeof(ttl), stdin);
    printf("Alamat: "); fgets(alamat, sizeof(alamat), stdin);
    printf("Hobby: "); fgets(hob, sizeof(hob), stdin);
    printf("No. HP: "); fgets(no, sizeof(no), stdin);

    printf("Nama                : %s", nama);
    printf("NIM                 : %s", nim);
    printf("Kelas Paralel       : %s", kls);
    printf("Tempat/Tanggal Lahir: %s", ttl);
    printf("Alamat              : %s", alamat);
    printf("Hobby               : %s", hob);
    printf("No. HP              : %s", no);
    return 0;
}