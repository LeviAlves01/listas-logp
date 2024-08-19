#include<stdio.h>
#include<math.h>

int main(){
   int i = 15;

   while(i<=200){
      printf("%i", &i);
      i = (int)pow(i, 2);
      i++;
   }

   return 0;
}