#include <stdio.h>
int main(){
    int N;
    for(int i = 0;i < 3;i++){
    scanf("%d", &N);
    if(N >= 1){printf("Positif\n");}
    else if(N <= -1){printf("Negatif\n");}
    else{printf("Nol\n");}
    }
    return 0;
}
