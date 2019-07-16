#include<stdio.h>
int main()
{
    int i,a;
    printf("Enter a number:\n");
    scanf("%d",&a);
    for (i=2;i<a;i++)
    {
        if (a%i==0)
            break;
    }
if (i==a)
    printf("%d is prime",a);
    else
       printf("%d is not prime",a);
      // getch ();
    return 0;
}
