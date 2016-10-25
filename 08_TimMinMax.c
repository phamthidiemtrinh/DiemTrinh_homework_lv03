#include <stdio.h>;
void main()
{
    int n, a[100],min,max,i,vtMin,vtMax;
    printf ("nhap so phan tu :\n");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf ("a[%d]=",i);
        scanf("%d",&a[i]);
        printf("\n");
    }
    vtMin=0; vtMax=0; min=a[0];max=a[0];
    for (i=0;i<n;i++)
    {
        if (a[i]>max)
        {
            max=a[i];
            vtMax=i;
        }
        if (a[i]<min)

        {
            min=a[i];
            vtMin=i;
        }
    }
    printf("Max=%d tai vi tri %d\n",max,vtMax);
    printf("Min=%d tai vi tri %d\n",min,vtMin);
}
