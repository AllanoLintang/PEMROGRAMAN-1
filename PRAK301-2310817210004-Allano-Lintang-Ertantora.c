#include <stdio.h>
int main(){
    int a, b, i;
    for(i = 0;i < 3;i++){
    scanf("%d %d", &a, &b);
    if(b<a){printf("%d %d\n", b, a);}
    else{printf("%d %d\n", a, b);}
    }
    return 0;
}