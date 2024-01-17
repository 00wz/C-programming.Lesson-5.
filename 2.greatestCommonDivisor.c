#include <stdio.h>

int GCD(int a,int b)
{
    while(a != 0 && b != 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    return a+b;
}

int main(void)
{
    int n1,n2;
    scanf("%d%d",&n1,&n2);

    printf("%d\n",GCD(n1,n2));
}