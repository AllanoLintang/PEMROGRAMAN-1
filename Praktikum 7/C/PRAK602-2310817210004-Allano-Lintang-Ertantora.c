#include <stdio.h>
int main(){
    int angka;
    scanf("%d", &angka);
    int arr[angka];
    for(int i = 1; i <= angka; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 1; i <= angka; i++){
        printf("%d ", arr[i] * i);
    }
    return 0;
}