#include <stdio.h>

int main()
e   int n;
   printf("Enter a number: ");
   scanf("%d", &n);
   
   int i = 1;
   do
   {
      if(n%i==0 && i != n)
         printf("%d,",i);
      if(i==n)
         printf("%d", i);
      i++;
   } while (i<=n);
   
}