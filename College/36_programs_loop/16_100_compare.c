#include <stdio.h>

int main()
{
    int i = 0, t, j = 0, n, a[100];
    printf("Enter any 100 numbers: ");

    while(i<100)
    {
        scanf("%d", &a[i]);
        i++;
    }

    i = 0; 
    while(i<99)
    {
        j = i + 1;
        while(j<100)
        {   
            if(a[i] > a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
            j++;
        }
        i++;
    }
   printf("The smallest element is %d\n", a[0]);
   printf("The greatest element is %d", a[99]);
   return 0;
}
