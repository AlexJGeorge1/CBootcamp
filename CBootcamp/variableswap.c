#include <stdio.h>

int main(){
    char var1[15] = "variable 1";
    char var2[15] = "variable 2";

    char swap[15];

    var1 = swap;
    var2 = var1;
    swap = var2;

    printf("var1 is currently: ", var1);
    printf("var2 is currently: ", var2);

    return 0;
}