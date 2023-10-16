#include <stdio.h>


int main() {

int int1[5] = {1,4,5,6,2};
int int2[5] ={6,2,8,3,6};
int catarray[9];
int i;

for (i=0;i<=4;i++) {
    catarray[i] = int1[i];
}
for (i=0;i<=4;i++) {
    catarray[i+5] = int2[i];
}

for (i=0;i<=9;i++){
        printf("%d", *(catarray +i));
}
return 0;
}