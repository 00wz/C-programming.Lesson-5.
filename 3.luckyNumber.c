#include <stdio.h>
#include <stdbool.h>

bool isLuckyNumber(int n)
{
    int sum=0;
    int mult=1;
    while (n > 0)
    {
        int current=n%10;
        sum+=current;
        mult*=current;
        n /= 10;
    }
    if(sum==mult)
    {
        return true;
    }
    return false;
}

int main(void)
{
    int n;
    scanf("%d",&n);

    printf("%s\n",isLuckyNumber(n)?"YES":"NO");
}