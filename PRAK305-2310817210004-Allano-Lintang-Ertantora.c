#include <stdio.h>
int main(){
    int d, i;
    for(i=0;i<5;i++){
    scanf("%d", &d);
    int hh = d / 84600;
    int jj = d / 3600;
    int mm = (d - jj*3600) / 60;
    int dd = d - jj*3600 - mm*60;
    if(hh >= 1){printf("%d hari %2d:%2d:%2d\n", hh, jj - 24, mm, dd);}
    else{printf("%.2d:%.2d:%.2d\n", jj, mm, dd);}
    }
    return 0;
}