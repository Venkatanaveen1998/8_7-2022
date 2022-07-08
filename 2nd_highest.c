#include <stdio.h>
int main()
{
   int n,a,s,c=0;
   printf("enter n value");
   scanf("%d",&n);
   for(n!=0;n;n=n/10)
   {
      a=n%10;
      if(a>c)
      {
          s=c;
          c=a;
      }
      else if(a>s&&c!=a)
      {
          s=a;
      }
   }printf("highest=%d ",c);printf("second highest=%d ",s);
}

