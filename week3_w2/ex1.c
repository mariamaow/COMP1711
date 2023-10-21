#include <stdio.h>

//ex1 and 2
float circleArea(float r){
    float pi = 3.14;
    float area =(pi*(r*r));
    return area;
}

float spherearea(float r ){
    float pi = 3.14;
    float area = (4/3)*(pi*(r*r));
    return area;
}

int main() {
float radius = 5;
float area = circleArea(5);
printf("%f", area);
float sphere = spherearea(5);
printf("%f", sphere);
return 0;
}