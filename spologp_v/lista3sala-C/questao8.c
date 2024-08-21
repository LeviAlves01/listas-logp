#include<stdio.h>

int main(){

    int a  = 0;
    int p = 1;
    int count = 0;
    int temp;

    while(count<=16){
        printf("%i\n", a);
        temp = a;
        a = p;
        p = temp+p;
        count++;
    }
}