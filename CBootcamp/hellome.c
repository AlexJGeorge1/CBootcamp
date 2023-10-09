#include <stdio.h>

int main(){
    //setting up 15 slots of memory for a string
    char name[15];

    printf("Hello, please enter your name: ");
    scanf("%s", name);
    printf("Your name is %s", name);
    return 0;
}