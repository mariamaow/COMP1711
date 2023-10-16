#include <stdio.h>


int main() {

    int intarray[5] = {1,2,3,4,5};
    int revarray[5];
    int i;

    for (i=4;i>=0;i--) {
        revarray[4-i] = intarray[i];
       
    }

    for (i=0;i<=4;i++){
        printf("%d", *(revarray +i));
    }
    return 0;

}