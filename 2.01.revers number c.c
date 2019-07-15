#include<stdio.h>
int main ()
{
int i,n,p,rvs=0;
scanf("%d",&n);
for(i=1;n>0;i++)
   {
     p=n%10;
     rvs=rvs*10+p;
     n=n/10;
   }
printf("revers number is%d",rvs);

return 0;
}
