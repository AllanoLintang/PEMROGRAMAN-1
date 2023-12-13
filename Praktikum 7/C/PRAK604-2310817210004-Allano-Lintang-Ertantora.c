#include <stdio.h>
#include <string.h>
int main(){
    char kalimatSatu[50], kalimatDua[50];
    fgets(kalimatSatu, sizeof(kalimatSatu), stdin);
    fgets(kalimatDua, sizeof(kalimatDua), stdin);
    if (strlen(kalimatSatu) != strlen(kalimatDua)){
        printf("Panjang kalimat berbeda, pesan palsu\n");
    }else{
        int sama = 0, beda = 0;
        for (int i = 0; i < strlen(kalimatSatu)-1; i++){
            if (kalimatSatu[i] == kalimatDua[i] && kalimatSatu[i] != ' ' && kalimatDua[i] != ' '){
                printf("*");
                sama++;
            }else if (kalimatSatu[i] == ' ' && kalimatDua[i] == ' '){
                printf(" ");
            }else{
                printf("#");
                beda++;
            }
        }printf("\n* = %d\n# = %d\n", sama, beda);
        if (sama > beda){
            printf("Pesan asli\n");
        }else{
            printf("Pesan palsu\n");
        }
    }
    return 0;
}