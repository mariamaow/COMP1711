#include <stdio.h>


int main() {

int intarray[6] = {1,2,5,2,1,7};
int i,j;

for (i=0;i<=5;i++) {
    for (j=0;j<=5;j++) {
        if (i!=j) {
            if (intarray[i] == intarray[j]) {
                printf("%d has a duplicate\n" , *(intarray+i));
            }
        }
    }
}
return 0;
}