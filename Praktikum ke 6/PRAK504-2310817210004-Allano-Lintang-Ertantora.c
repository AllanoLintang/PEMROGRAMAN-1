#include <stdio.h>
int reverse(int n){
// Lengkapi Function ini
//yes daddy
        int kebalikan = 0, sisabagi;
        while(n != 0){
            sisabagi = n % 10;
            kebalikan = kebalikan * 10 + sisabagi;
            n /= 10;
        }
        return kebalikan;
    }
int main() {
    int A, B;
    scanf("%d %d",&A,&B);
    A = reverse(A);
    B = reverse(B);
    int C = A+B;
    printf("%d",reverse(C));
}