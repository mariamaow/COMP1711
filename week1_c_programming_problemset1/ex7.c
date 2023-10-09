#include <stdio.h>

int main() {
    float f;
    printf("Enter farenheit");
    scanf("%f", &f);
    float c = (((f-32)*5)/9);
    printf("Celsius equivalent: %f\n",c);
    return 0;
}