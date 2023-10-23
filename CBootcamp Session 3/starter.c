#include <stdio.h>

int main(){
    int numbers[10];
    int i = 0;
    int total = 0;
    float mean;

    while (i<10){
        printf("Enter a number: ");
        scanf("%d", &numbers[i]);
        total = total + numbers[i];
        i++;
    }

    

    return 0;
}