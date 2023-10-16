#include <stdio.h>


int main() {

    int intarray[5] = {1,2,3,4,5};
    int i;
    int movedarray[5];
    for (i=0;i<=4;i++) {
        if (i!=4) {
            movedarray[i+1] =intarray[i];
        } else {
            movedarray[0] =intarray[i];
        }
    }
    for (i=0;i<=4;i++){
        printf("%d", *(movedarray +i));
    }
    return 0;
}