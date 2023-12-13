#include <stdio.h>
int main(){
    int barisKolom;
    scanf("%d", &barisKolom);
    printf("Matriks A:\n");
    int matrixA[barisKolom][barisKolom];
    for (int i = 0; i < barisKolom; i++){
        for (int j = 0; j < barisKolom; j++){
            scanf("%d", &matrixA[i][j]);
        }
    }
    printf("Matriks B:\n");
    int matrixB[barisKolom][barisKolom];
    for (int i = 0; i < barisKolom; i++){
        for (int j = 0; j < barisKolom; j++){
            scanf("%d", &matrixB[i][j]);
        }
    }
    int matrixHasil[barisKolom][barisKolom];
    int sum = 0;
    for (int i = 0; i < barisKolom; i++){
        for (int j = 0; j < barisKolom; j++){
            for (int k = 0; k < barisKolom; k++){
                sum += matrixA[i][k] * matrixB[k][j];
            }
            matrixHasil[i][j] = sum;
            sum = 0;
        }
    }
    printf("Matriks AXB\n");
    for(int i = 0; i < barisKolom; i++){
        for(int j = 0; j < barisKolom; j++){
            printf("%d ", matrixHasil[i][j]);
        }printf("\n");
    }
    return 0;
}