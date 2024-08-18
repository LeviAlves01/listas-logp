#include<stdio.h>

int main(){
    int i = 0;
    while(i<250){
        i++;
        if(i%4==0){
            printf("%i\n", i);
        }
    }
}