#include <stdio.h>

int main(){
    int number;
    int current;
    int total;
    int mean;
    int i = 0;
    char *filename = "numbers.txt";
    FILE *file = fopen(filename, "w");

    printf("How many numbers would you like to enter?\n");
    scanf("%d", &number);

    while (i < number){
        printf("Enter a number: ");
        scanf("%d", &current);
        fprintf(file, "%d\n", current);
        total += current;
        i++;
    }

    mean = total / number;

    fprintf(file, "%d\n", mean);
    

    fclose(file);
    return 0;
}