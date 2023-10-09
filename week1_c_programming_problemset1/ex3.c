#include <stdio.h>
//max in form of bits
int main() {
    float f = sizeof(float);
    int i = sizeof(int);
    double d = sizeof(double);
    char c = sizeof(char);

    printf("float: %f\n", f);
    printf("int: %d\n", i);
    printf("double: %lf\n", d);
    printf("char: %c\n", c);

    return 0;

}