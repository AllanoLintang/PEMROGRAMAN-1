#include <stdio.h>
int main(){
    int nilai,i;
    for(i=0;i<5;i++){
    scanf("%d", &nilai);
    if(nilai >= 80){printf("A");}
    else if(nilai >= 70){printf("B");}
    else if(nilai >= 60){printf("C");}
    else if(nilai >= 50){printf("D");}
    else if(nilai <= 50){printf("F");}
    else{printf("nilai tidak valid!!!11!1!!!");}
    }
    return 0;
}