#include <stdio.h>


int main() {
    double speedoflight = 299792458;
    double dayseconds = 86400;
    double days;

    printf("How many days has the light travelled:");
    scanf("%lf", &days);

    double distance = speedoflight*(dayseconds*days);

    printf("Distance: %lf\n", distance);
    return 0;
}