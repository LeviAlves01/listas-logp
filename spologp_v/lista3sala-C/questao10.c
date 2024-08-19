#include<stdio.h>

int main(){
    int i;
    int soma;
    
   for(i = 1; i<=500; i++){
       if(i%2==0){
           soma += i;
           printf("%i\n", soma);
       }
   }
   return 0;
}