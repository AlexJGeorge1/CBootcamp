#include <stdio.h>

int main(){
    int a = 1;
    int b = 1;
    for (a >0, a < 12, a++){
        for (b >0, b < 12, b++){
            printf("%d * %d", a, b);
        }
    }
    return 0;
}