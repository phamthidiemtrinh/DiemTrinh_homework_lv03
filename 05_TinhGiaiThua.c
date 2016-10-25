#include <stdio.h>
void main()
{
    int i,so,gt;
    printf ("nhap n: \n");
    scanf("%d",&so);
    gt=1;
    for(i=2;i<=so;i++) gt=gt*i;
    printf("%d!= %d",so,gt);

}

