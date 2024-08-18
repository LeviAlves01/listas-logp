#include<stdio.h>
#include<math.h>

int main(){
   int i;

   for(i = 15; i<=200; i++){
    printf("%i", &i);
    i = pow(i, 2);
   }

   return 0;
}