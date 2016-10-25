#include <stdio.h>
void main()
{
    int i,so,gt;
    float tong;
    printf ("nhap n: \n");
    scanf("%d",&so);
    gt=1; tong=1;
    for(i=2;i<=so;i++)
    {gt=gt*i;
    tong+=(float)1/gt;
    }
    printf("tong = %f",tong);

}

