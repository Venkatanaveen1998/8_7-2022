#include <stdio.h>
int fact(int);
int main()
{
	    int a,sum=0;
	        for(int i=1;i<=5;i++)
			    {
				        a=fact(i)/i;
					    sum=sum+a;
					        }
		    printf("%d",sum);
}
int fact(int f)
{
	    int mul=1;
	      while(f)
		        {
				     mul=mul*f;
				          f--;
					    }
}
