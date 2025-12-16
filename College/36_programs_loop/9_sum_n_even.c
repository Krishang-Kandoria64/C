#include <stdio.h>

int main(){
   printf("Enter any natural number: ");
   int n;
   scanf("%d", &n); 

   int i,sum=0, k = 0;
   for(i=1;i<=n;i++){
    k = 2 * i;
    sum = sum + k;
   }
   printf("The sum of the first %d even numbers is %d",n,sum);
   return 0;
}