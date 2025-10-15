#include <stdio.h>
int main()
{
    int gs, bs, da, ta;
    printf("\n Enter the basic salary:");
    scanf("%d", &bs);
    da = (30 * bs) / 100;
    ta = (25 * bs) / 100;
    gs = bs + da + ta;
    printf("Gross salary=%d", gs);
    return 0;
}

