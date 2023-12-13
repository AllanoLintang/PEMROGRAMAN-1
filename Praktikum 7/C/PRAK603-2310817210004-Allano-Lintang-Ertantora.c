#include <stdio.h>
int main(){
    int satu, dua;
    scanf("%d %d", &satu, &dua);
    int barisSatu[satu], barisDua[dua];
    if (satu != dua){
        printf("Jumlah tidak sama\n");
    }else{
        for(int i = 0; i < satu; i++){
            scanf("%d", &barisSatu[i]);
        }
        for(int j = 0; j < dua; j++){
            scanf("%d", &barisDua[j]);
        }
        for(int k = 0; k < satu; k++){
            printf("%d ", barisSatu[k] * barisDua[k]);
        }
    }
    return 0;
}