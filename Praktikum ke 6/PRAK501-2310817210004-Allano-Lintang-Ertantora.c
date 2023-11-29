#include <stdio.h>
//Buatlah Function Disini
//baiklah tuan
int MaxBilangan(int a, int b, int c, int d){
    int max;
    if(a > b && a > c && a > d){
        max = a;
    }
    else if(b > a && b > c && b > d){
        max = b;
    }
    else if(c > a && c > b && c > d){
        max = c;
    }
    else if(d > a && d > b && d > c){
        max = d;
    }
    return max;
}
int main() {
int a, b, c, d; 
scanf("%d %d %d %d", &a, &b, &c, &d);
int hasil = MaxBilangan(a, b, c, d);
printf("%d", hasil); 
return 0;
}