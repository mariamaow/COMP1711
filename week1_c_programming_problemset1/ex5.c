#include <stdio.h>

int main() {
    char *str1 = "Hello";
    char *str2 = "World";
   
    printf("%s , %s\n",str1 , str2);
    char *temp;

    temp = str1;
    str1 = str2;
    str2 = temp;
    printf("%s , %s\n", str1 , str2);
    return 0;

}