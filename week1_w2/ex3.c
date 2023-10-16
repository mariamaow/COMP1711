#include <stdio.h>


int main() {

    int intarray[10] = {1,7,0,8,3,55,2,3,4,5};
    int i;
    int maxnum=0;
    for (i=0;i<=9;i++) {
        if (intarray[i]> maxnum){
            maxnum = intarray[i];
        }
    }
    printf("%d", maxnum);
}