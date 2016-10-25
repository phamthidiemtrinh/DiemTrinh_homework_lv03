#include <stdio.h>
void main()
{
    int a[10][10],i,j,n,soLan,max;
    printf("nhap cap \n");
    scanf("%d",&n);
    for (i=0;i<n;i++)
        for (j=0;j<n;j++)
    {
        printf("a[%d,%d]=",i,j);
        scanf ("%d",&a[i][j]);
    }
        for (i=0;i<n;i++)
        {
        for (j=0;j<n;j++)
            printf("%d  ",a[i][j]);
        printf("\n");

        }
    max=a[2][n];soLan=1;
        for (i=0;i<n;i++)
             for (j=0;j<n;j++)

                if (j>i)
             {
               if  (max<a[i][j])
               {
                   max = a[i][j];
                   soLan=1;
               }
               else if (max == a[i][j]) soLan++;
             }
    printf("Max= %d xuat hien %d lan ",max,soLan);
}
