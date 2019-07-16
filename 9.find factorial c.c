#include<stdio.h>
int main()
{
    int i,result=1,n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        result=result*i;
    }
    printf("The factorial number is %d .",result);

    return 0;
}
