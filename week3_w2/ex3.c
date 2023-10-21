#include <stdio.h>


int str_length(char *str){
    
    int count =0;
    while (str[count] != '\0') {
        count ++;
    }
    return count;
}


int main() {
    char *str = "aeiou";
    int length = str_length(str);
    printf("%d", length);
    return 0;

}