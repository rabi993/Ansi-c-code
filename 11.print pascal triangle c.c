#include<stdio.h>
int main()
{
int i,j,k,p,n;
scanf("%d",&n);
for(i=0;i<=n;i++)
{
for(j=0;j<=i;j++)
{
printf(" ");
}
p=1;
for(k=0;k<=i;k++)
{
printf("%d",p);
p=p*(i-k/k+1);
}
}
printf("/n");


return 0;
}
