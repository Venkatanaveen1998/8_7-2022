#include <stdio.h>
int main()
{
   int n,a,s=0,c;
   printf("enter c value");
   scanf("%d",&c);
   n=c;
   for(n!=0;n;n=n/10)
   {
       a=n%10;
       s=s*10+a;
   }if(s==c) printf("palindrome");
   else printf("not palindrome");
}
