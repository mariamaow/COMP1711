#include <stdio.h>


int main() {
    int intarray[5] = {1,2,3,4,5};
    int i ;
    int sum = 0;
    for (i=0;i<=4;i++) {
        sum = sum + intarray[i];
        printf("%d\n",sum);
    }

    printf("%d\n",sum);
    return 0;
}