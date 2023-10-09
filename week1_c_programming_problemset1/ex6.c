#include <stdio.h>

int main() {
    int num,r;
    printf("Enter int");
    scanf("%d", &num);
    r = (num % 2) ;
    if (r==0) {
        printf("Number is even");
    } else{
        printf("Number is odd");
    }
    return 0;

}