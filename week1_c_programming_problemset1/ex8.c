#include <stdio.h>


int main() {
    int n;
    printf("Enter number you want the factorial off:");
    scanf("%d", &n);
    int i;
    int fac = 1;
    for (i=2;i<=n;i++) {
        fac *= i;
    }
  
    printf("Factorial is: %d\n", fac);
    return 0;
}