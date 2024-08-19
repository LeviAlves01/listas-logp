#include<stdio.h>

int main(){
    int i;

    for(i = 20; i>=1; i--){
        if(i%2==0){
            printf("Esse número é par: %i\n", i);
        }

        else{
            printf("Esse número é ímpar: %i\n", i);
        }
    }

    return 0;
}