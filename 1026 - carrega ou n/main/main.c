#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d;
    scanf("%d%d",&a,&b);
    c= a & b;
    d= (a + b) & c;
    printf("%d\n",c);

    return 0;
}
