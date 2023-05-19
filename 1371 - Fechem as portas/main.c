#include <stdio.h>
#include <stdlib.h>
//1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16...25
//1     2         3                    4   5
int main ()
{
    int n, i;

    scanf ("%d", &n);
    while (n > 0)
    {
        for (i = 1; i*i <= n; i++){
            if(i*i<=n && i>1)
                printf(" ");
            printf ("%d", i*i);
        }
        printf ("\n");

        scanf ("%d", &n);
    }

    return 0;
}
