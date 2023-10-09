#include <stdio.h>

int main() {
    char word[7]= "Martin";
    char letter[7];
    int i = 0;

    for (i = 6 ; i > -1 ; i--) {
       letter[6 - i] = word[i];
       printf("%s\n",&letter[6 - i]);
    }
    return 0;
}