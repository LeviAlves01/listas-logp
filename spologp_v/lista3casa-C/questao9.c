#include <stdio.h>

int main() {
    int i = 0;

    do {
        if (i % 2 == 0) {
            printf("Esse número é par: %i\n", i);
        } 
        else {
            printf("Esse número é ímpar: %i\n", i);
        }
        i++; 
        
    } while (i <= 20); 

    return 0;
}