#include <stdio.h>

int isPrime(int integer) {
    int counter = 0;
    int i;
    for (i=2;i<integer;i++) {
        if ((integer%i) == 0) {
            counter += 1;
        }
    }
    if (counter >=1) {
        return 0;
    }else {
        return 1;
    }
}

int main() {
int is_prime = isPrime(8);
if (is_prime == 0) {
    printf("is not prime");
      
} else {
    printf("Is prime");
}
}