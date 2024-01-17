#include <stdio.h>

int main(void)
{
    char c;
    int openRightBrackets=0;
    while((c=getchar())!='.')
    {
        if(c=='(')
        {
            openRightBrackets++;
        }
        else if(c==')')
        {
            openRightBrackets--;
            if(openRightBrackets<0)
            {
                printf("NO");
                return 0;
            }
        }
    }
    printf("%s\n",openRightBrackets==0?"YES":"NO");
}