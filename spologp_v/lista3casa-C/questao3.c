#include<stdio.h>

int main(){
    int i = 1;

    while(i<=20){
        if(i%2==0){
            printf("Esse número é par: %i\n", i);
        }

        else{
            printf("Esse número é ímpar: %i\n", i);
        }

        i++;
    }
}