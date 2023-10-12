#include <stdio.h>

int main(){
    int number = 22;
    int userGuess;
    while (userGuess!= number){
        printf("Enter a number: ");
        scanf("%d", &userGuess);
        if (userGuess < number){
            printf("Too low!\n");
        }
        else if (userGuess > number){
            printf("Too high!\n");
        }
    }
    printf("You got it!\n");
    return 0;
}