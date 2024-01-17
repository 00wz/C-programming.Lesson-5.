#include <stdio.h>
#include <stdbool.h>

int sumN(int n)
{
    return (n+1)*n/2;
}

int main(void)
{
    int n;
    scanf("%d",&n);

    printf("%d\n",sumN(n));
}