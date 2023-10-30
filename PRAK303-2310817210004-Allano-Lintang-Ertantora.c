#include <stdio.h>
int main(){
    int N, i;
    for(i = 0;i < 5;i++){
    scanf("%d", &N);
    if(N >= 1){
        printf("Positif");
    }else if(N <= -1){
        printf("Negatif");
    }else{
        printf("Nol");
    }}
    return 0;
}