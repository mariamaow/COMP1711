#include <stdio.h>


int main() {

int guessednum = 0;
int num = 7;
while (guessednum!= -1){
    printf("Enter Number");
    scanf("%d", &guessednum);
    if (guessednum == num) {
        break;
    }
        
}
printf("Youve guessed the number!!");
}