#include <stdio.h>

int main()
{
    int a[]={5,1,4,2,8},i,j,swap;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(a[j]>a[j+1])
            {
                swap=a[j];
                a[j]=a[j+1];
                a[j+1]=swap;
            }
        }
    }
    for(i=0;i<5;i++)
    printf("%d ",a[i]);
}
