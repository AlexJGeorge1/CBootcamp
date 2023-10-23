#include <stdio.h>
// standard library, allows the use of atoi
#include <stdlib.h> 

int main() {
    char* filename = "data.txt";
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    // The length of line we will read in (in characters per line)
    int buffer_size = 100;
    // a string which will hold each line as it is read in
    char line_buffer[buffer_size];


    int numbers[1000];

    int line_number = 0;
    // while there is stil stuff in the file
    while (fgets(line_buffer, buffer_size, file) != NULL) {
        printf("%d\n", atoi(line_buffer));
        numbers[line_number] = atoi(line_buffer);
        line_number ++;
    }

    fclose(file);
    return 0;
}