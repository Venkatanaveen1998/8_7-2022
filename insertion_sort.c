#include <stdio.h>

int main()
{
    int a[]={32,21,45,15,8},i,j,s,swap;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(a[j]>a[j+1])
            {
                for(s=j;s>=0;s--)
                if(a[s]>a[j+1])
                {
                swap=a[j];
                a[j]=a[j+1];
                a[j+1]=swap;
                }
            }
        }
    }
    for(i=0;i<5;i++)
    printf("%d ",a[i]);
}
