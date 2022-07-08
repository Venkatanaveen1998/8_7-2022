#include <stdio.h>

int main()
{
   int n,a,s=0;
   printf("enter n value");
   scanf("%d",&n);
   for(n!=0;n;n=n/10)
   {
       a=n%10;
       s++;
   }printf("%d",s);
}
