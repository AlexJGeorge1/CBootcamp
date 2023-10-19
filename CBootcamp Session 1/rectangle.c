#include <stdio.h>

int main(){
    float width, length, area;

    printf("\nWhat is the width: ");
    scanf("%f", &width);
    printf("\nWhat is the length: ");
    scanf("%f", &length);
    
    area = width * length;

    printf("The area is: %f\n", area);

    return 0;

}