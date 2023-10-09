#include <stdio.h>

int main() {
    int value1; 
    int value2;

    printf("Enter value 1");
    scanf("%d", &value1);

    printf("Enter value 2");
    scanf("%d", &value2);

    printf("%d\n", (value1 + value2));
    return 0;
}