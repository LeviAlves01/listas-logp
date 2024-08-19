#include<stdio.h>
#include<math.h>

int main(){
    int i = 3;
    int y = 0;
    int potencia;

    while(y<16){
        potencia = pow(i, y);
        printf("3 elevado a %d = %d\n", y, potencia);
        y++;
    }

    return 0;
}