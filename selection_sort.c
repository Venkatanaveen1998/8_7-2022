#include <stdio.h>

int main()
{
    int a[]={64,25,12,22,11},i,j,s,swap,min;
    for(i=0;i<5;i++)
    { min=i;
        for(j=i+1;j<5;j++)
        {
            if(a[j]<a[min])
            {
               min=j;
            }
        }
         {
                swap=a[min];
                a[min]=a[i];
                a[i]=swap;
                }
    }
    for(i=0;i<5;i++)
    printf("%d ",a[i]);
}
