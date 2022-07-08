#include <stdio.h>
int checkarmstrong(int );
int checkperfect(int );
int main()
{
    int a;
    scanf("%d",&a);
   int s=checkarmstrong(a);
    if(s==1) printf("armstrong\n");
    else printf("not armstrong\n");
   int c=checkperfect(a);
    if(c==1) printf("perfect number\n");
    else printf("not perfect number\n");
}
int checkarmstrong(int a)
{int sum=0,b=a;

  while(a)
  {
      int s=a%10;
      int root=s*s*s;   //(s^3 doing cube rooting)
      sum=sum+root;
      a=a/10;
  }
  if(b==sum) return 1;
}
int checkperfect(int a)
{
    int b=a,sum=0;
    while(a)
    {
        a=a/2; 
        if(a==1) return 1;
    }
}

