#include <stdio.h>

int main()
{
   int n,a,s=0;
   printf("enter n value");
   scanf("%d",&n);
   if(testdec(n)==1||testasc(n)==1)  
   printf("sorted ");
   else printf("not sorted ");
}
int testdec(int n)
{   
  int s=0,cur;
  for(n!=0;n;n=n/10)
  {
  cur=n%10;
  if(cur<s)
  return 0;
  s=cur;
}return 1;
}
int testasc(int n)
{   
  int s=9,cur;
  for(n!=0;n;n=n/10)
  {
  cur=n%10;
  if(cur>s)
  return 0;
  s=cur;
}return 1;
}
