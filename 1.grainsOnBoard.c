#include <stdio.h>

int pow2(int a)
{
    return 1<<a;
}

int main(void)
{
    int n;
    scanf("%d",&n);

    printf("%d\n",pow2(n-1));
}