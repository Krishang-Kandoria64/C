#include <stdio.h>

int main(){
   printf("Enter any natural number: ");
   int n;
   scanf("%d", &n); 

   int i,sum=0;
   for(i=1;i<=n;i++){
      sum = sum + i;
   }
   printf("The sum of the first %d natural numbers is %d",n,sum);
   return 0;
}