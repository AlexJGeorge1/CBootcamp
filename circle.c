#include <stdio.h>

int main(){
    float radius, area;
    float pi = 3.14159;

    printf("Enter the Radius of your cicle:\n ");
    scanf("%f", &radius);

    area = pi * radius * radius;

    printf("The area of your circle is: %f\n ", area);

    return 0;
}