#include <stdio.h>
void* sum(int (*a)[3],int (*b)[3]);
int main()
{
    int a[3][3]={1,1,1,2,2,2,3,3,3},b[3][3]={4,4,4,5,5,5,6,6,6},(*p)[3];
    int i,j;
    for(i=0;i<3;i++,printf("\n"))
    for(j=0;j<3;j++)
    printf(" %d",a[i][j]);
    printf("\n");
    for(i=0;i<3;i++,printf("\n"))
    for(j=0;j<3;j++)
    printf(" %d",b[i][j]);
    printf("\n");
    p=sum(a,b);
     for(i=0;i<3;i++,printf("\n"))
    for(j=0;j<3;j++)
    {
       // p[i][j]=a[i][j];
      printf(" %d",p[i][j]);
    }
}
void* sum(int (*a)[3],int (*b)[3])
{
    int i,j;
     for(i=0;i<3;i++,printf("\n"))
    for(j=0;j<3;j++)
    {
        a[i][j]=a[i][j]+b[i][j];
      //printf(" %d",a[i][j]);
    }
    return a;
}
