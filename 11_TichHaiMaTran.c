#include <stdio.h>
void main()
{
    int a[10][10],b[10][10],c[10][10],i,j,n,m,p,k,q;
    printf("nhap (m*n);(n*p");
    scanf("%d%d%d",&m,&n,&p);
    for (i=0;i<m;i++)
        for (j=0;j<n;j++)
    {
        printf("a[%d,%d]=",i,j);
        scanf ("%d",&a[i][j]);
    }
    for (i=0;i<n;i++)
        for (j=0;j<p;j++)
    {
        printf("b[%d,%d]=",i,j);
        scanf ("%d",&b[i][j]);
    }

for (i=0;i<m;i++)
        for (j=0;j<p;j++)
            c[i][j]=0;
    for (i=0;i<m;i++)
        for (j=0;j<p;j++)
        {
            for (k=0;k<n;k++)
                c[i][j]+=(a[i][k] * b[k][j]);
        }
    for (i=0;i<m;i++)
    {
        for (j=0;j<p;j++)
        printf("%d  ",c[i][j]);
        printf ("\n");
    }
}
