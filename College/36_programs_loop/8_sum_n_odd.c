#include <stdio.h>

int main(){
   printf("Enter any natural number: ");
   int n;
   scanf("%d", &n); 

   int i,sum=0, k = 0;
   for(i=1;i<=n;i++){
    k = 2 * i - 1;
      sum = sum + k;
   }
   printf("The sum of the first %d odd numbers is %d",n,sum);
   return 0;
}